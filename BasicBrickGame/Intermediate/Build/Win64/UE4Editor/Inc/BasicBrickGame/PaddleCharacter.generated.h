// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICBRICKGAME_PaddleCharacter_generated_h
#error "PaddleCharacter.generated.h already included, missing '#pragma once' in PaddleCharacter.h"
#endif
#define BASICBRICKGAME_PaddleCharacter_generated_h

#define BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_SPARSE_DATA
#define BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_RPC_WRAPPERS
#define BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaddleCharacter(); \
	friend struct Z_Construct_UClass_APaddleCharacter_Statics; \
public: \
	DECLARE_CLASS(APaddleCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasicBrickGame"), NO_API) \
	DECLARE_SERIALIZER(APaddleCharacter)


#define BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPaddleCharacter(); \
	friend struct Z_Construct_UClass_APaddleCharacter_Statics; \
public: \
	DECLARE_CLASS(APaddleCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasicBrickGame"), NO_API) \
	DECLARE_SERIALIZER(APaddleCharacter)


#define BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaddleCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaddleCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddleCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddleCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddleCharacter(APaddleCharacter&&); \
	NO_API APaddleCharacter(const APaddleCharacter&); \
public:


#define BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddleCharacter(APaddleCharacter&&); \
	NO_API APaddleCharacter(const APaddleCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddleCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddleCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaddleCharacter)


#define BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Padle() { return STRUCT_OFFSET(APaddleCharacter, SM_Padle); } \
	FORCEINLINE static uint32 __PPO__FloatingMovement() { return STRUCT_OFFSET(APaddleCharacter, FloatingMovement); }


#define BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_13_PROLOG
#define BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_SPARSE_DATA \
	BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_RPC_WRAPPERS \
	BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_INCLASS \
	BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_SPARSE_DATA \
	BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_INCLASS_NO_PURE_DECLS \
	BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICBRICKGAME_API UClass* StaticClass<class APaddleCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BasicBrickGame_Source_BasicBrickGame_PaddleCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
