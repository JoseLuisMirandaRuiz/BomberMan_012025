// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/Dona.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDona() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ADona();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ADona_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ADona
void ADona::StaticRegisterNativesADona()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADona);
UClass* Z_Construct_UClass_ADona_NoRegister()
{
	return ADona::StaticClass();
}
struct Z_Construct_UClass_ADona_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Dona.h" },
		{ "ModuleRelativePath", "Public/Dona.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADona>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADona_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADona_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADona_Statics::ClassParams = {
	&ADona::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADona_Statics::Class_MetaDataParams), Z_Construct_UClass_ADona_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADona()
{
	if (!Z_Registration_Info_UClass_ADona.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADona.OuterSingleton, Z_Construct_UClass_ADona_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADona.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ADona>()
{
	return ADona::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADona);
ADona::~ADona() {}
// End Class ADona

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Public_Dona_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADona, ADona::StaticClass, TEXT("ADona"), &Z_Registration_Info_UClass_ADona, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADona), 661862700U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Public_Dona_h_2496985503(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Public_Dona_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Public_Dona_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
