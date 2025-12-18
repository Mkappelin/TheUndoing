// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LogFileParser.generated.h"

/**
 * 
 */
UCLASS()
class THEUNDOING_API ULogFileParser : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	public:
		/**
		 * Creates a log file under <Saved>/<Subfolder>/<FileName>.
		 *
		 * @param Subfolder		Relative folder under Saved (e.g. "QA_Logs")
		 * @param OutFullPath	Absolute path written to
		 */
		UFUNCTION(BlueprintCallable, Category = "Logging|File")
		static bool CreateLogFile(
			const FString& Subfolder,
			FString& OutFullPath
		);

		/**
		 * Appends a line to a log file under <LogAbsolutePath>.
		 *
		 * @param LogAbsolutePath	Relative folder under Saved (e.g. ".../Saved/QA_Logs")
		 * @param Line				Line content (newline auto-added)
		 */
		UFUNCTION(BlueprintCallable, Category = "Logging|File")
		static bool AppendLineToSavedLogFile(
			const FString& LogAbsolutePath,
			const FString& Line
		);

		/**
		 * Returns absolute path to a Saved subfolder.
		 */
		/*UFUNCTION(BlueprintPure, Category = "Logging|File")
		static FString GetSavedLogFolderAbsolute(const FString& Subfolder);*/
};
