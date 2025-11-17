// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cowboy_bebop/C_SpaceSPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_SpaceSPawn() {}

// Begin Cross Module References
COWBOY_BEBOP_API UClass* Z_Construct_UClass_AC_SpaceSPawn();
COWBOY_BEBOP_API UClass* Z_Construct_UClass_AC_SpaceSPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
UPackage* Z_Construct_UPackage__Script_Cowboy_bebop();
// End Cross Module References

// Begin Class AC_SpaceSPawn
void AC_SpaceSPawn::StaticRegisterNativesAC_SpaceSPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_SpaceSPawn);
UClass* Z_Construct_UClass_AC_SpaceSPawn_NoRegister()
{
	return AC_SpaceSPawn::StaticClass();
}
struct Z_Construct_UClass_AC_SpaceSPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_SpaceSPawn.h" },
		{ "ModuleRelativePath", "C_SpaceSPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_SpaceSPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AC_SpaceSPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Cowboy_bebop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_SpaceSPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_SpaceSPawn_Statics::ClassParams = {
	&AC_SpaceSPawn::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_SpaceSPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_SpaceSPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC_SpaceSPawn()
{
	if (!Z_Registration_Info_UClass_AC_SpaceSPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_SpaceSPawn.OuterSingleton, Z_Construct_UClass_AC_SpaceSPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC_SpaceSPawn.OuterSingleton;
}
template<> COWBOY_BEBOP_API UClass* StaticClass<AC_SpaceSPawn>()
{
	return AC_SpaceSPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC_SpaceSPawn);
AC_SpaceSPawn::~AC_SpaceSPawn() {}
// End Class AC_SpaceSPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_Cowboy_bebop_Cowboy_bebop_Source_Cowboy_bebop_C_SpaceSPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_SpaceSPawn, AC_SpaceSPawn::StaticClass, TEXT("AC_SpaceSPawn"), &Z_Registration_Info_UClass_AC_SpaceSPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_SpaceSPawn), 2627884711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Cowboy_bebop_Cowboy_bebop_Source_Cowboy_bebop_C_SpaceSPawn_h_3974134021(TEXT("/Script/Cowboy_bebop"),
	Z_CompiledInDeferFile_FID_GitHub_Cowboy_bebop_Cowboy_bebop_Source_Cowboy_bebop_C_SpaceSPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Cowboy_bebop_Cowboy_bebop_Source_Cowboy_bebop_C_SpaceSPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
