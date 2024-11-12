// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash/Public/Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SLASH_API UClass* Z_Construct_UClass_AItem();
	SLASH_API UClass* Z_Construct_UClass_AItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Slash();
// End Cross Module References
	DEFINE_FUNCTION(AItem::execTransformedCos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TransformedCos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem::execTransformedSin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TransformedSin();
		P_NATIVE_END;
	}
	void AItem::StaticRegisterNativesAItem()
	{
		UClass* Class = AItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TransformedCos", &AItem::execTransformedCos },
			{ "TransformedSin", &AItem::execTransformedSin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItem_TransformedCos_Statics
	{
		struct Item_eventTransformedCos_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AItem_TransformedCos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Item_eventTransformedCos_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_TransformedCos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_TransformedCos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_TransformedCos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_TransformedCos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "TransformedCos", nullptr, nullptr, sizeof(Z_Construct_UFunction_AItem_TransformedCos_Statics::Item_eventTransformedCos_Parms), Z_Construct_UFunction_AItem_TransformedCos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_TransformedCos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_TransformedCos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_TransformedCos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_TransformedCos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_TransformedCos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_TransformedSin_Statics
	{
		struct Item_eventTransformedSin_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AItem_TransformedSin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Item_eventTransformedSin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_TransformedSin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_TransformedSin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_TransformedSin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_TransformedSin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "TransformedSin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AItem_TransformedSin_Statics::Item_eventTransformedSin_Parms), Z_Construct_UFunction_AItem_TransformedSin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_TransformedSin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_TransformedSin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_TransformedSin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_TransformedSin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_TransformedSin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItem);
	UClass* Z_Construct_UClass_AItem_NoRegister()
	{
		return AItem::StaticClass();
	}
	struct Z_Construct_UClass_AItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeConstant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunningTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RunningTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Slash,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItem_TransformedCos, "TransformedCos" }, // 2419702202
		{ &Z_Construct_UFunction_AItem_TransformedSin, "TransformedSin" }, // 1381958184
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item.h" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Sine Parameters" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AItem, Amplitude), METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_TimeConstant_MetaData[] = {
		{ "Category", "Sine Parameters" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_TimeConstant = { "TimeConstant", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AItem, TimeConstant), METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_TimeConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_TimeConstant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_RunningTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Item" },
		{ "Comment", "//meta = (AllowPrivateAccess = \"true\") is for exposing private variables\n" },
		{ "ModuleRelativePath", "Public/Item.h" },
		{ "ToolTip", "meta = (AllowPrivateAccess = \"true\") is for exposing private variables" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_RunningTime = { "RunningTime", nullptr, (EPropertyFlags)0x0040000000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AItem, RunningTime), METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_RunningTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_RunningTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_TimeConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_RunningTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AItem_Statics::ClassParams = {
		&AItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItem()
	{
		if (!Z_Registration_Info_UClass_AItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItem.OuterSingleton, Z_Construct_UClass_AItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AItem.OuterSingleton;
	}
	template<> SLASH_API UClass* StaticClass<AItem>()
	{
		return AItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItem);
	AItem::~AItem() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Git_Hub_Projects_Unreal_Engine_Workshop_1_Slash_Source_Slash_Public_Item_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Git_Hub_Projects_Unreal_Engine_Workshop_1_Slash_Source_Slash_Public_Item_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AItem, AItem::StaticClass, TEXT("AItem"), &Z_Registration_Info_UClass_AItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItem), 4131367583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Git_Hub_Projects_Unreal_Engine_Workshop_1_Slash_Source_Slash_Public_Item_h_3225716695(TEXT("/Script/Slash"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Git_Hub_Projects_Unreal_Engine_Workshop_1_Slash_Source_Slash_Public_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Git_Hub_Projects_Unreal_Engine_Workshop_1_Slash_Source_Slash_Public_Item_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
