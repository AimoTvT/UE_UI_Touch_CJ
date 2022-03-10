// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI_Touch_CJ/Public/Aimo_UI_Touch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimo_UI_Touch() {}
// Cross Module References
	UI_TOUCH_CJ_API UClass* Z_Construct_UClass_UAimo_UI_Touch_NoRegister();
	UI_TOUCH_CJ_API UClass* Z_Construct_UClass_UAimo_UI_Touch();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UI_Touch_CJ();
// End Cross Module References
	DEFINE_FUNCTION(UAimo_UI_Touch::execAimo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Aimo();
		P_NATIVE_END;
	}
	void UAimo_UI_Touch::StaticRegisterNativesUAimo_UI_Touch()
	{
		UClass* Class = UAimo_UI_Touch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Aimo", &UAimo_UI_Touch::execAimo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAimo_UI_Touch_Aimo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAimo_UI_Touch_Aimo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aimo_Void" },
		{ "Comment", "/** ?????? <Aimo>  b_\xd5\xbe <Aimo_??\xc4\xab> */" },
		{ "ModuleRelativePath", "Public/Aimo_UI_Touch.h" },
		{ "ToolTip", "?????? <Aimo>  b_\xd5\xbe <Aimo_??\xc4\xab>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAimo_UI_Touch_Aimo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAimo_UI_Touch, nullptr, "Aimo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAimo_UI_Touch_Aimo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAimo_UI_Touch_Aimo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAimo_UI_Touch_Aimo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAimo_UI_Touch_Aimo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAimo_UI_Touch_NoRegister()
	{
		return UAimo_UI_Touch::StaticClass();
	}
	struct Z_Construct_UClass_UAimo_UI_Touch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimo_UI_Touch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UI_Touch_CJ,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAimo_UI_Touch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAimo_UI_Touch_Aimo, "Aimo" }, // 3701740992
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimo_UI_Touch_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Aimo_UI_Touch.h" },
		{ "ModuleRelativePath", "Public/Aimo_UI_Touch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimo_UI_Touch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimo_UI_Touch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAimo_UI_Touch_Statics::ClassParams = {
		&UAimo_UI_Touch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAimo_UI_Touch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAimo_UI_Touch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimo_UI_Touch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAimo_UI_Touch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAimo_UI_Touch, 10535899);
	template<> UI_TOUCH_CJ_API UClass* StaticClass<UAimo_UI_Touch>()
	{
		return UAimo_UI_Touch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAimo_UI_Touch(Z_Construct_UClass_UAimo_UI_Touch, &UAimo_UI_Touch::StaticClass, TEXT("/Script/UI_Touch_CJ"), TEXT("UAimo_UI_Touch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimo_UI_Touch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
