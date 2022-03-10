// Copyright Epic Games, Inc. All Rights Reserved.

#include "UI_Touch_CJ.h"

#define LOCTEXT_NAMESPACE "FUI_Touch_CJModule"

void FUI_Touch_CJModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FUI_Touch_CJModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUI_Touch_CJModule, UI_Touch_CJ)