// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicBrickGame/PaddlePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaddlePlayerController() {}
// Cross Module References
	BASICBRICKGAME_API UClass* Z_Construct_UClass_APaddlePlayerController_NoRegister();
	BASICBRICKGAME_API UClass* Z_Construct_UClass_APaddlePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_BasicBrickGame();
// End Cross Module References
	DEFINE_FUNCTION(APaddlePlayerController::execSetupInputComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInputComponent();
		P_NATIVE_END;
	}
	void APaddlePlayerController::StaticRegisterNativesAPaddlePlayerController()
	{
		UClass* Class = APaddlePlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupInputComponent", &APaddlePlayerController::execSetupInputComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APaddlePlayerController_SetupInputComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APaddlePlayerController_SetupInputComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PaddlePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APaddlePlayerController_SetupInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APaddlePlayerController, nullptr, "SetupInputComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APaddlePlayerController_SetupInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APaddlePlayerController_SetupInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APaddlePlayerController_SetupInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APaddlePlayerController_SetupInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APaddlePlayerController_NoRegister()
	{
		return APaddlePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_APaddlePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaddlePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicBrickGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APaddlePlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APaddlePlayerController_SetupInputComponent, "SetupInputComponent" }, // 3695934279
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddlePlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PaddlePlayerController.h" },
		{ "ModuleRelativePath", "PaddlePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaddlePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaddlePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaddlePlayerController_Statics::ClassParams = {
		&APaddlePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaddlePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaddlePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaddlePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaddlePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaddlePlayerController, 4241423276);
	template<> BASICBRICKGAME_API UClass* StaticClass<APaddlePlayerController>()
	{
		return APaddlePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaddlePlayerController(Z_Construct_UClass_APaddlePlayerController, &APaddlePlayerController::StaticClass, TEXT("/Script/BasicBrickGame"), TEXT("APaddlePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaddlePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
