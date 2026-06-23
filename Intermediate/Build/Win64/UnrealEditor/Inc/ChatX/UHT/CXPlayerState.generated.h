// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/CXPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHATX_CXPlayerState_generated_h
#error "CXPlayerState.generated.h already included, missing '#pragma once' in CXPlayerState.h"
#endif
#define CHATX_CXPlayerState_generated_h

#define FID_Unreal_project_ChatX_Source_ChatX_Player_CXPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXPlayerState(); \
	friend struct Z_Construct_UClass_ACXPlayerState_Statics; \
public: \
	DECLARE_CLASS(ACXPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChatX"), NO_API) \
	DECLARE_SERIALIZER(ACXPlayerState)


#define FID_Unreal_project_ChatX_Source_ChatX_Player_CXPlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACXPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXPlayerState(ACXPlayerState&&); \
	ACXPlayerState(const ACXPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACXPlayerState) \
	NO_API virtual ~ACXPlayerState();


#define FID_Unreal_project_ChatX_Source_ChatX_Player_CXPlayerState_h_12_PROLOG
#define FID_Unreal_project_ChatX_Source_ChatX_Player_CXPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_project_ChatX_Source_ChatX_Player_CXPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_project_ChatX_Source_ChatX_Player_CXPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHATX_API UClass* StaticClass<class ACXPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_project_ChatX_Source_ChatX_Player_CXPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
