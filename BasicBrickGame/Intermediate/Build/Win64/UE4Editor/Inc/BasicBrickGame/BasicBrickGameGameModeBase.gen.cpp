// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicBrickGame/BasicBrickGameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicBrickGameGameModeBase() {}
// Cross Module References
	BASICBRICKGAME_API UClass* Z_Construct_UClass_ABasicBrickGameGameModeBase_NoRegister();
	BASICBRICKGAME_API UClass* Z_Construct_UClass_ABasicBrickGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BasicBrickGame();
// End Cross Module References
	void ABasicBrickGameGameModeBase::StaticRegisterNativesABasicBrickGameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABasicBrickGameGameModeBase_NoRegister()
	{
		return ABasicBrickGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABasicBrickGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicBrickGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicBrickGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicBrickGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BasicBrickGameGameModeBase.h" },
		{ "ModuleRelativePath", "BasicBrickGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicBrickGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicBrickGameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicBrickGameGameModeBase_Statics::ClassParams = {
		&ABasicBrickGameGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABasicBrickGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicBrickGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicBrickGameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicBrickGameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicBrickGameGameModeBase, 1622962585);
	template<> BASICBRICKGAME_API UClass* StaticClass<ABasicBrickGameGameModeBase>()
	{
		return ABasicBrickGameGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicBrickGameGameModeBase(Z_Construct_UClass_ABasicBrickGameGameModeBase, &ABasicBrickGameGameModeBase::StaticClass, TEXT("/Script/BasicBrickGame"), TEXT("ABasicBrickGameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicBrickGameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
