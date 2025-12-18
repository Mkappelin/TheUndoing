// Fill out your copyright notice in the Description page of Project Settings.


#include "LogFileParser.h"

#include "Misc/Paths.h"
#include "HAL/PlatformFileManager.h"
#include "HAL/FileManager.h"
#include "Misc/FileHelper.h"
#include "Misc/DateTime.h"

static FString SanitizeRelativePath(const FString& In)
{
	FString Out = In;
	Out.ReplaceInline(TEXT("\\"), TEXT("/"));
	while (Out.StartsWith(TEXT("/")))
	{
		Out.RightChopInline(1);
	}
	Out.ReplaceInline(TEXT(".."), TEXT(""));
	return Out;
}

//FString ULogFileParser::GetSavedLogFolderAbsolute(const FString& Subfolder)
//{
//	const FString CleanSub = CleanRelativePath(Subfolder);
//	return FPaths::Combine(FPaths::ProjectSavedDir(), CleanSub);
//}

bool ULogFileParser::CreateLogFile(
	const FString& Subfolder,
	FString& OutFullPath)
{
	OutFullPath.Reset();

	const FString Timestamp = FDateTime::Now().ToString(TEXT("(%Y-%m-%d-%M-%S)"));
	const FString FileName = TEXT("log") + Timestamp + TEXT(".csv");

	const FString CleanSubfolder = SanitizeRelativePath(Subfolder);
	const FString CleanFileName = FPaths::GetCleanFilename(FileName);

	if (CleanFileName.IsEmpty())
	{
		return false;
	}

	const FString FolderAbs =
		FPaths::Combine(FPaths::ProjectSavedDir(), CleanSubfolder);

	IPlatformFile& PlatformFile =
		FPlatformFileManager::Get().GetPlatformFile();

	if (!PlatformFile.DirectoryExists(*FolderAbs))
	{
		if (!PlatformFile.CreateDirectoryTree(*FolderAbs))
		{
			return false;
		}
	}

	const FString FileAbs = FPaths::Combine(FolderAbs, CleanFileName);

	// Create file if it does not exist
	if (!PlatformFile.FileExists(*FileAbs))
	{
		if (!FFileHelper::SaveStringToFile(
			TEXT(""),
			*FileAbs,
			FFileHelper::EEncodingOptions::AutoDetect))
		{
			return false;
		}
	}

	OutFullPath = FileAbs;
	return true;
}

bool ULogFileParser::AppendLineToSavedLogFile(
	const FString& LogAbsolutePath,
	const FString& Line)
{
	if (LogAbsolutePath.IsEmpty())
	{
		return false;
	}

	FString FinalLine = Line;
	FinalLine.ReplaceInline(TEXT("\r\n"), TEXT("\n"));

	if (!FinalLine.EndsWith(TEXT("\n")))
	{
		FinalLine += TEXT("\n");
	}

	return FFileHelper::SaveStringToFile(
		FinalLine,
		*LogAbsolutePath,
		FFileHelper::EEncodingOptions::AutoDetect,
		&IFileManager::Get(),
		FILEWRITE_Append
	);
}