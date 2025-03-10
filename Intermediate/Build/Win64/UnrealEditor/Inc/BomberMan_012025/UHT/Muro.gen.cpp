// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/Muro.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuro() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMuro();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMuro_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AMuro
void AMuro::StaticRegisterNativesAMuro()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMuro);
UClass* Z_Construct_UClass_AMuro_NoRegister()
{
	return AMuro::StaticClass();
}
struct Z_Construct_UClass_AMuro_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Muro.h" },
		{ "ModuleRelativePath", "Public/Muro.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuro>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMuro_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMuro_Statics::ClassParams = {
	&AMuro::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::Class_MetaDataParams), Z_Construct_UClass_AMuro_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMuro()
{
	if (!Z_Registration_Info_UClass_AMuro.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMuro.OuterSingleton, Z_Construct_UClass_AMuro_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMuro.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AMuro>()
{
	return AMuro::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMuro);
AMuro::~AMuro() {}
// End Class AMuro

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Public_Muro_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMuro, AMuro::StaticClass, TEXT("AMuro"), &Z_Registration_Info_UClass_AMuro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMuro), 997535036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Public_Muro_h_821227520(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Public_Muro_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025_Source_BomberMan_012025_Public_Muro_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
