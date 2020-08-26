#pragma once

// Name: RocketLeague, Version: 1


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Constants
//---------------------------------------------------------------------------

#define CONST_ZeroRotator                                        Rot(0,0,0)
#define CONST_ZeroVector                                         Vect(0,0,0)
#define CONST_InvAspectRatio16x9                                 0.56249
#define CONST_UpVector                                           Vect(0,0,1)
#define CONST_InvAspectRatio5x4                                  0.8
#define CONST_RightVector                                        Vect(0,1,0)
#define CONST_InvAspectRatio4x3                                  0.75
#define CONST_ForwardVector                                      Vect(1,0,0)
#define CONST_AspectRatio16x9                                    1.77778
#define CONST_AspectRatio5x4                                     1.25
#define CONST_AspectRatio4x3                                     1.33333
#define CONST_INDEX_NONE                                         -1
#define CONST_UnrRotToDeg                                        0.00549316540360483
#define CONST_DegToUnrRot                                        182.0444
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MaxQWORD                                           0xFFFFFFFFFFFFFFFF
#define CONST_MinInt                                             0x80000000
#define CONST_MaxInt                                             0x7fffffff
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Core.Object.EAutomatedRunResult
enum class EAutomatedRunResult : uint8_t
{
	ARR_Unknown                    = 0,
	ARR_OOM                        = 1,
	ARR_Passed                     = 2,
	ARR_MAX                        = 3,

};

// Enum Core.Object.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PreAsyncWork                = 0,
	TG_DuringAsyncWork             = 1,
	TG_PostAsyncWork               = 2,
	TG_PostUpdateWork              = 3,
	TG_EffectsUpdateWork           = 4,
	TG_MAX                         = 5,

};

// Enum Core.Object.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6,

};

// Enum Core.DistributionVector.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5,

};

// Enum Core.Object.EInterpMethodType
enum class EInterpMethodType : uint8_t
{
	IMT_UseFixedTangentEvalAndNewAutoTangents = 0,
	IMT_UseFixedTangentEval        = 1,
	IMT_UseBrokenTangentEval       = 2,
	IMT_MAX                        = 3,

};

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3,

};

// Enum Core._Types_Core.OnlinePlatform
enum class EOnlinePlatform : uint8_t
{
	OnlinePlatform_Unknown         = 0,
	OnlinePlatform_Steam           = 1,
	OnlinePlatform_PS4             = 2,
	OnlinePlatform_PS3             = 3,
	OnlinePlatform_Dingo           = 4,
	OnlinePlatform_QQ              = 5,
	OnlinePlatform_OldNNX          = 6,
	OnlinePlatform_NNX             = 7,
	OnlinePlatform_PsyNet          = 8,
	OnlinePlatform_Deleted         = 9,
	OnlinePlatform_WeGame          = 10,
	OnlinePlatform_MAX             = 11,

};

// Enum Core._Types_Core.EImageType
enum class EImageType : uint8_t
{
	EIT_Unknown                    = 0,
	EIT_JPEG                       = 1,
	EIT_PNG                        = 2,
	EIT_MAX                        = 3,

};

// Enum Core._Types_Core.EInputAPI
enum class EInputAPI : uint8_t
{
	InputAPI_Default               = 0,
	InputAPI_SteamInput            = 1,
	InputAPI_MAX                   = 2,

};

// Enum Core._Types_Core.EFlushResult
enum class EFlushResult : uint8_t
{
	FlushResult_Success            = 0,
	FlushResult_InProgress         = 1,
	FlushResult_TimedOut           = 2,
	FlushResult_MAX                = 3,

};

// Enum Core._Types_Generated.EContentKeyIndex_ContinuousIntegration
enum class EContentKeyIndex_ContinuousIntegration : uint8_t
{
	ContinuousIntegration_A21E529632046B5DAA3373A6051D7164 = 0,
	ContinuousIntegration_8C0B2C5877659E4548B294EA142D4C7A = 1,
	ContinuousIntegration_BC2E369B178A16B81F7B990426A8D59F = 2,
	ContinuousIntegration_0834F4083483791F04893BE705044600 = 3,
	ContinuousIntegration_MAX      = 4,

};

// Enum Core._Types_Generated.EContentKeyIndex_PrimeUpdate31
enum class EContentKeyIndex_PrimeUpdate31 : uint8_t
{
	PrimeUpdate31_8416552FC13C775C6325D95DAFD2467C = 0,
	PrimeUpdate31_4D7DD3DF13D1A7A874987ED3471E73C8 = 1,
	PrimeUpdate31_DA7EA18B2A78CD2DC80B1647AC96CB4D = 2,
	PrimeUpdate31_3CE5ABD97423D57980D4CE4984D23723 = 3,
	PrimeUpdate31_880C8C1A2B7E0D89E198FD070B76C948 = 4,
	PrimeUpdate31_85F5966A74411E8888F7228B41775B64 = 5,
	PrimeUpdate31_0F3CBA7F9849D469C134A6FF10453DB2 = 6,
	PrimeUpdate31_F9E087849D5F5873B1D9C2C2A76E8280 = 7,
	PrimeUpdate31_4F3016BFEEF5686ABF5BCC01EDAB34AB = 8,
	PrimeUpdate31_289E688E31D67B07097C3607B0E4B766 = 9,
	PrimeUpdate31_FDFE789EC592F2AE370CBDC6644331EA = 10,
	PrimeUpdate31_3B62BABAB19A41542A3F1A543BA902C7 = 11,
	PrimeUpdate31_2ED307705C547AAE42F52929ED345B54 = 12,
	PrimeUpdate31_88C241C0F02B450B51F0A9AF5DDC359D = 13,
	PrimeUpdate31_94713368AC068D293F842AD501456252 = 14,
	PrimeUpdate31_7EDA3FFCCA3D799DD992CB9E6E1641BA = 15,
	PrimeUpdate31_597E29169FCA2B5E0022CB3C17FD6276 = 16,
	PrimeUpdate31_B403B6BC53473983E71404459C5C329D = 17,
	PrimeUpdate31_MAX              = 18,

};

// Enum Core._Types_Generated.EContentKeyIndex_PrimeUpdate30
enum class EContentKeyIndex_PrimeUpdate30 : uint8_t
{
	PrimeUpdate30_1DB64BB9636815EFA9399659109DD68D = 0,
	PrimeUpdate30_9234CF28DDEC42BA6D348267FA446B0A = 1,
	PrimeUpdate30_503AD462D2DCE768AE47BB2329144CAE = 2,
	PrimeUpdate30_213CA336DDB319FD27DEA933E3501CB2 = 3,
	PrimeUpdate30_F7FD01F704F37BC24F42A1F9316D8A1D = 4,
	PrimeUpdate30_3087684ADB9F22472E3AFD9BE5BF94F5 = 5,
	PrimeUpdate30_810B945ECFD25E0822A159B328604ECA = 6,
	PrimeUpdate30_5465981D30DE3D6E327B176D436FEF9D = 7,
	PrimeUpdate30_9A9242C1EC822F5CABB949FFDF01D97A = 8,
	PrimeUpdate30_452F33B1387640B277D05CCF28B27094 = 9,
	PrimeUpdate30_33430E4B5498C30E9942BC67BB35E032 = 10,
	PrimeUpdate30_712FAB1F622E61A50F98B76312770661 = 11,
	PrimeUpdate30_2386DB5AA955DDFF74A6A7AF443249B5 = 12,
	PrimeUpdate30_C5BE8F988BD1FF6A53893EC1B454B272 = 13,
	PrimeUpdate30_ED667588F3F916C76D11EADB27036255 = 14,
	PrimeUpdate30_27C7319E6A9E8651E89204245770107E = 15,
	PrimeUpdate30_966DAC7787B441D0E6195D90634ADFD1 = 16,
	PrimeUpdate30_DF823FCBBF433C11264736998336CFB9 = 17,
	PrimeUpdate30_DC5ABAEFCD0A266C64BF8664FEE15309 = 18,
	PrimeUpdate30_22EC7532DB37341C045127F6263A15FF = 19,
	PrimeUpdate30_28B8BBA8CBF5B1B73BD72127D5ADCCB5 = 20,
	PrimeUpdate30_AA915328B1E7A7251488C75194A90384 = 21,
	PrimeUpdate30_D76E2A921047B235911605B9B008F606 = 22,
	PrimeUpdate30_55026AC8526C9B85A556C370FFCBE521 = 23,
	PrimeUpdate30_84C1F1262EF1E5DC120A7ED88DBFEF15 = 24,
	PrimeUpdate30_A99C4C15B5858BB823253B065BE66BB2 = 25,
	PrimeUpdate30_MAX              = 26,

};

// Enum Core._Types_Generated.EContentKeyIndex_PrimeUpdate29
enum class EContentKeyIndex_PrimeUpdate29 : uint8_t
{
	PrimeUpdate29_AE206DA0E0A3AAD8B6755870B27FA65E = 0,
	PrimeUpdate29_30CA52092D2CEDAA55E764986CC47D60 = 1,
	PrimeUpdate29_350E4C7D232183351C9A7CA19AF1D171 = 2,
	PrimeUpdate29_0F4D063A56589D60F7C667659284EF79 = 3,
	PrimeUpdate29_DF40E515A9C2BC9F9B6459DA06BA12B4 = 4,
	PrimeUpdate29_07DAE5D877865DA3A7B27525C6BCD772 = 5,
	PrimeUpdate29_398C669A96F0D8C7A7CB85C6B7F9D40D = 6,
	PrimeUpdate29_1A0A172C108D12F6B9E2582B8353515A = 7,
	PrimeUpdate29_DFA1AA4962EC1FAF6388A5D29978701F = 8,
	PrimeUpdate29_D376C4CD4EBF103692AC688347D9C907 = 9,
	PrimeUpdate29_82BD9EB94679B73DA8574C6DB2C8737E = 10,
	PrimeUpdate29_6E59D0C3AAAF6C9D2E326F4293999A64 = 11,
	PrimeUpdate29_3F53F796EEBEDA376ACA7199F20CAA63 = 12,
	PrimeUpdate29_C29913CE0063B6A4499E4AFF4C5D56D1 = 13,
	PrimeUpdate29_88F2B75897AE1A5B80B4DCC82C376200 = 14,
	PrimeUpdate29_EF28529F54D54075C40BA9309352A504 = 15,
	PrimeUpdate29_4F3D2425A947760B6BD53B2E51290AE9 = 16,
	PrimeUpdate29_42DC275ACD6AF3B20C30E2A016AECC19 = 17,
	PrimeUpdate29_ADC297BC151083F6529E1A1559605351 = 18,
	PrimeUpdate29_755715CBB92570E53F72C1BEF66C2E93 = 19,
	PrimeUpdate29_907AF3C9F3A0262587FF66ADF42F4D3F = 20,
	PrimeUpdate29_C271DB65745C937C51A4591C915C5AF0 = 21,
	PrimeUpdate29_MAX              = 22,

};

// Enum Core.Object.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5,

};

// Enum Core.Object.AlphaBlendType
enum class EAlphaBlendType : uint8_t
{
	ABT_Linear                     = 0,
	ABT_Cubic                      = 1,
	ABT_Sinusoidal                 = 2,
	ABT_EaseInOutExponent2         = 3,
	ABT_EaseInOutExponent3         = 4,
	ABT_EaseInOutExponent4         = 5,
	ABT_EaseInOutExponent5         = 6,
	ABT_MAX                        = 7,

};

// Enum Core.Object.EEdition
enum class EEdition : uint8_t
{
	Edition_Default                = 0,
	Edition_China                  = 1,
	Edition_MAX                    = 2,

};

// Enum Core.Object.EDebugBreakType
enum class EDebugBreakType : uint8_t
{
	DEBUGGER_NativeOnly            = 0,
	DEBUGGER_ScriptOnly            = 1,
	DEBUGGER_Both                  = 2,
	DEBUGGER_MAX                   = 3,

};

// Enum Core.Object.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3,

};

// Enum Core.Object.EAxis
enum class EAxis : uint8_t
{
	AXIS_NONE                      = 0,
	AXIS_X                         = 1,
	AXIS_Y                         = 2,
	AXIS_BLANK                     = 3,
	AXIS_Z                         = 4,
	AXIS_MAX                       = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Core.Object.Rotator
// 0x000C
struct FRotator
{
	int                                                Pitch;                                                     // 0x0000(0x0004) (Edit)
	int                                                Yaw;                                                       // 0x0004(0x0004) (Edit)
	int                                                Roll;                                                      // 0x0008(0x0004) (Edit)

};
// ScriptStruct Core.Object.Vector2D
// 0x0008
struct FVector2D
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit)

};
// ScriptStruct Core.Object.Pointer
// 0x0008
struct FPointer
{
	int                                                Dummy;                                                     // 0x0000(0x0004) (Const, Native)
	unsigned char                                      UnknownDataUGX6[0x4];                                      // 0x0004(0x0004) MISSED OFFSET

};
// ScriptStruct Core.Object.Quat
// 0x0010
struct FQuat
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit)
	float                                              Z;                                                         // 0x0008(0x0004) (Edit)
	float                                              W;                                                         // 0x000C(0x0004) (Edit)

};
// ScriptStruct Core.Object.InterpCurvePointVector2D
// 0x001D
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit)
	struct FVector2D                                   OutVal;                                                    // 0x0004(0x0008) (Edit)
	struct FVector2D                                   ArriveTangent;                                             // 0x000C(0x0008) (Edit)
	struct FVector2D                                   LeaveTangent;                                              // 0x0014(0x0008) (Edit)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                // 0x001C(0x0001) (Edit)

};
// ScriptStruct Core.Object.InterpCurveVector2D
// 0x0011
struct FInterpCurveVector2D
{
	TArray<struct FInterpCurvePointVector2D>           Points;                                                    // 0x0000(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                              // 0x0010(0x0001)

};
// ScriptStruct Core.Object.Vector
// 0x000C
struct FVector
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit)
	float                                              Z;                                                         // 0x0008(0x0004) (Edit)

};
// ScriptStruct Core.Object.RawDistribution
// 0x0020
struct FRawDistribution
{
	unsigned char                                      Type;                                                      // 0x0000(0x0001)
	unsigned char                                      Op;                                                        // 0x0001(0x0001)
	unsigned char                                      LookupTableNumElements;                                    // 0x0002(0x0001)
	unsigned char                                      LookupTableChunkSize;                                      // 0x0003(0x0001)
	unsigned char                                      UnknownData2LLL[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	TArray<float>                                      LookupTable;                                               // 0x0008(0x0010) (NeedCtorLink)
	float                                              LookupTableTimeScale;                                      // 0x0018(0x0004)
	float                                              LookupTableStartTime;                                      // 0x001C(0x0004)

};
// ScriptStruct Core.Object.InterpCurvePointFloat
// 0x0011
struct FInterpCurvePointFloat
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit)
	float                                              OutVal;                                                    // 0x0004(0x0004) (Edit)
	float                                              ArriveTangent;                                             // 0x0008(0x0004) (Edit)
	float                                              LeaveTangent;                                              // 0x000C(0x0004) (Edit)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                // 0x0010(0x0001) (Edit)

};
// ScriptStruct Core.Object.OctreeElementId
// 0x000C
struct FOctreeElementId
{
	struct FPointer                                    Node;                                                      // 0x0000(0x0008) (Const, Native)
	int                                                ElementIndex;                                              // 0x0008(0x0004) (Const, Native)

};
// ScriptStruct Core.DistributionFloat.RawDistributionFloat
// 0x0008 (0x0028 - 0x0020)
struct FRawDistributionFloat : public FRawDistribution
{
	class UDistributionFloat*                          Distribution;                                              // 0x0020(0x0008) (Edit, ExportObject, Component, NoClear, EditInline)

};
// ScriptStruct Core.Object.InterpCurveFloat
// 0x0011
struct FInterpCurveFloat
{
	TArray<struct FInterpCurvePointFloat>              Points;                                                    // 0x0000(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                              // 0x0010(0x0001)

};
// ScriptStruct Core.Object.RenderCommandFence
// 0x0004
struct FRenderCommandFence
{
	int                                                NumPendingFences;                                          // 0x0000(0x0004) (Const, Native)

};
// ScriptStruct Core.DistributionFloat.MatineeRawDistributionFloat
// 0x0008 (0x0030 - 0x0028)
struct FMatineeRawDistributionFloat : public FRawDistributionFloat
{
	float                                              MatineeValue;                                              // 0x0028(0x0004)
	unsigned char                                      bInMatinee : 1;                                            // 0x002C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataZZR5[0x2];                                      // 0x002C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct Core.Object.Cylinder
// 0x0008
struct FCylinder
{
	float                                              Radius;                                                    // 0x0000(0x0004)
	float                                              Height;                                                    // 0x0004(0x0004)

};
// ScriptStruct Core.Object.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                         // 0x0000(0x0004)
	int                                                B;                                                         // 0x0004(0x0004)
	int                                                C;                                                         // 0x0008(0x0004)
	int                                                D;                                                         // 0x000C(0x0004)

};
// ScriptStruct Core.Object.LinearColor
// 0x0010
struct FLinearColor
{
	float                                              R;                                                         // 0x0000(0x0004) (Edit)
	float                                              G;                                                         // 0x0004(0x0004) (Edit)
	float                                              B;                                                         // 0x0008(0x0004) (Edit)
	float                                              A;                                                         // 0x000C(0x0004) (Edit)

};
// ScriptStruct Core.Object.InterpCurvePointVector
// 0x0029
struct FInterpCurvePointVector
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit)
	struct FVector                                     OutVal;                                                    // 0x0004(0x000C) (Edit)
	struct FVector                                     ArriveTangent;                                             // 0x0010(0x000C) (Edit)
	struct FVector                                     LeaveTangent;                                              // 0x001C(0x000C) (Edit)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                // 0x0028(0x0001) (Edit)

};
// ScriptStruct Core.Object.InterpCurvePointLinearColor
// 0x0035
struct FInterpCurvePointLinearColor
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit)
	struct FLinearColor                                OutVal;                                                    // 0x0004(0x0010) (Edit)
	struct FLinearColor                                ArriveTangent;                                             // 0x0014(0x0010) (Edit)
	struct FLinearColor                                LeaveTangent;                                              // 0x0024(0x0010) (Edit)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                // 0x0034(0x0001) (Edit)

};
// ScriptStruct Core.Object.InterpCurveVector
// 0x0011
struct FInterpCurveVector
{
	TArray<struct FInterpCurvePointVector>             Points;                                                    // 0x0000(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                              // 0x0010(0x0001)

};
// ScriptStruct Core.DistributionVector.RawDistributionVector
// 0x0008 (0x0028 - 0x0020)
struct FRawDistributionVector : public FRawDistribution
{
	class UDistributionVector*                         Distribution;                                              // 0x0020(0x0008) (Edit, ExportObject, Component, NoClear, EditInline)

};
// ScriptStruct Core.Object.InterpCurveLinearColor
// 0x0011
struct FInterpCurveLinearColor
{
	TArray<struct FInterpCurvePointLinearColor>        Points;                                                    // 0x0000(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                              // 0x0010(0x0001)

};
// ScriptStruct Core._Types_Core.SceNpOnlineId
// 0x0014
struct FSceNpOnlineId
{
	unsigned char                                      UnknownDataKGNE[0x10];                                     // 0x0000(0x0010) UNKNOWN PROPERTY: QWordProperty Core._Types_Core.SceNpOnlineId.Data
	unsigned char                                      Term;                                                      // 0x0010(0x0001)
	unsigned char                                      Dummy[0x3];                                                // 0x0011(0x0001)

};
// ScriptStruct Core.Object.Color
// 0x0004
struct FColor
{
	unsigned char                                      B;                                                         // 0x0000(0x0001) (Edit)
	unsigned char                                      G;                                                         // 0x0001(0x0001) (Edit)
	unsigned char                                      R;                                                         // 0x0002(0x0001) (Edit)
	unsigned char                                      A;                                                         // 0x0003(0x0001) (Edit)


	inline FColor()
		: R(0), G(0), B(0), A(0)
	{ }

	inline FColor(float r, float g, float b, float a)
		: R(r),
		  G(g),
		  B(b),
		  A(a)
	{ }

};
// ScriptStruct Core.Object.BoneAtom
// 0x0020
struct FBoneAtom
{
	struct FQuat                                       Rotation;                                                  // 0x0000(0x0010)
	struct FVector                                     Translation;                                               // 0x0010(0x000C)
	float                                              Scale;                                                     // 0x001C(0x0004)

};
// ScriptStruct Core._Types_Core.SceNpId
// 0x0028
struct FSceNpId
{
	struct FSceNpOnlineId                              Handle;                                                    // 0x0000(0x0018) (Const)
	unsigned char                                      UnknownDataMF35[0x8];                                      // 0x0018(0x0008) UNKNOWN PROPERTY: QWordProperty Core._Types_Core.SceNpId.Opt
	unsigned char                                      UnknownDataGF9F[0x8];                                      // 0x0020(0x0008) UNKNOWN PROPERTY: QWordProperty Core._Types_Core.SceNpId.Reserved

};
// ScriptStruct Core.Object.InterpCurveQuat
// 0x0011
struct FInterpCurveQuat
{
	TArray<struct FInterpCurvePointQuat>               Points;                                                    // 0x0000(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                              // 0x0010(0x0001)

};
// ScriptStruct Core._Types_Core.UniqueNetId
// 0x0032
struct FUniqueNetId
{
	unsigned char                                      UnknownDataTGNW[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Core._Types_Core.UniqueNetId.Uid
	struct FSceNpId                                    NpId;                                                      // 0x0008(0x0028)
	TEnumAsByte<EOnlinePlatform>                       Platform;                                                  // 0x0030(0x0001)
	unsigned char                                      SplitscreenID;                                             // 0x0031(0x0001)

};
// ScriptStruct Core._Types_Core.EncryptedKeyIndex
// 0x0004
struct FEncryptedKeyIndex
{
	int                                                Index;                                                     // 0x0000(0x0004)

};
// ScriptStruct Core._Types_Core.ProductHashID
// 0x0004
struct FProductHashID
{
	int                                                Id;                                                        // 0x0000(0x0004)

};
// ScriptStruct Core.Object.TwoVectors
// 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                                        // 0x0000(0x000C) (Edit)
	struct FVector                                     v2;                                                        // 0x000C(0x000C) (Edit)

};
// ScriptStruct Core.Object.InterpCurvePointTwoVectors
// 0x004D
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit)
	struct FTwoVectors                                 OutVal;                                                    // 0x0004(0x0018) (Edit)
	struct FTwoVectors                                 ArriveTangent;                                             // 0x001C(0x0018) (Edit)
	struct FTwoVectors                                 LeaveTangent;                                              // 0x0034(0x0018) (Edit)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                // 0x004C(0x0001) (Edit)

};
// ScriptStruct Core.Object.InterpCurveTwoVectors
// 0x0011
struct FInterpCurveTwoVectors
{
	TArray<struct FInterpCurvePointTwoVectors>         Points;                                                    // 0x0000(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<EInterpMethodType>                     InterpMethod;                                              // 0x0010(0x0001)

};
// ScriptStruct Core.Object.Box
// 0x0019
struct FBox
{
	struct FVector                                     Min;                                                       // 0x0000(0x000C) (Edit)
	struct FVector                                     Max;                                                       // 0x000C(0x000C) (Edit)
	unsigned char                                      IsValid;                                                   // 0x0018(0x0001)

};
// ScriptStruct Core.Object.TPOV
// 0x001C
struct FTPOV
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (Edit)
	float                                              FOV;                                                       // 0x0018(0x0004) (Edit)

};
// ScriptStruct Core.Object.BitArray_Mirror
// 0x0020
struct FBitArray_Mirror
{
	struct FPointer                                    IndirectData;                                              // 0x0000(0x0008) (Const, Native)
	int                                                InlineData[0x4];                                           // 0x0008(0x0004) (Const, Native)
	int                                                NumBits;                                                   // 0x0018(0x0004) (Const, Native)
	int                                                MaxBits;                                                   // 0x001C(0x0004) (Const, Native)

};
// ScriptStruct Core.Object.SHVector
// 0x0030
struct FSHVector
{
	float                                              V[0x9];                                                    // 0x0000(0x0004) (Edit)
	float                                              Padding[0x3];                                              // 0x0024(0x0004)

};
// ScriptStruct Core.Object.SparseArray_Mirror
// 0x0038
struct FSparseArray_Mirror
{
	TArray<int>                                        Elements;                                                  // 0x0000(0x0010) (Const, Native)
	struct FBitArray_Mirror                            AllocationFlags;                                           // 0x0010(0x0020) (Const, Native)
	int                                                FirstFreeIndex;                                            // 0x0030(0x0004) (Const, Native)
	int                                                NumFreeIndices;                                            // 0x0034(0x0004) (Const, Native)

};
// ScriptStruct Core.DelegateTracker.AsyncDelegateInfo
// 0x0020
struct FAsyncDelegateInfo
{
	int                                                CallbackId;                                                // 0x0000(0x0004)
	unsigned char                                      UnknownDataQW8T[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FScriptDelegate                             AsyncDelegate;                                             // 0x0008(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataXZ1H[0xC];                                      // 0x0004(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct Core.Object.Set_Mirror
// 0x004C
struct FSet_Mirror
{
	struct FSparseArray_Mirror                         Elements;                                                  // 0x0000(0x0038) (Const, Native)
	int                                                InlineHash;                                                // 0x0038(0x0004) (Const, Native)
	unsigned char                                      UnknownDataU4XJ[0x4];                                      // 0x003C(0x0004) MISSED OFFSET
	struct FPointer                                    Hash;                                                      // 0x0040(0x0008) (Const, Native)
	int                                                HashSize;                                                  // 0x0048(0x0004) (Const, Native)

};
// ScriptStruct Core.Object.SHVectorRGB
// 0x0090
struct FSHVectorRGB
{
	struct FSHVector                                   R;                                                         // 0x0000(0x0030) (Edit)
	struct FSHVector                                   G;                                                         // 0x0030(0x0030) (Edit)
	struct FSHVector                                   B;                                                         // 0x0060(0x0030) (Edit)

};
// ScriptStruct Core.Object.IntPoint
// 0x0008
struct FIntPoint
{
	int                                                X;                                                         // 0x0000(0x0004) (Edit)
	int                                                Y;                                                         // 0x0004(0x0004) (Edit)

};
// ScriptStruct Core.Object.Map_Mirror
// 0x0050
struct FMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                                     // 0x0000(0x0050) (Const, Native)

};
// ScriptStruct Core.Object.PackedNormal
// 0x0004
struct FPackedNormal
{
	unsigned char                                      X;                                                         // 0x0000(0x0001) (Edit)
	unsigned char                                      Y;                                                         // 0x0001(0x0001) (Edit)
	unsigned char                                      Z;                                                         // 0x0002(0x0001) (Edit)
	unsigned char                                      W;                                                         // 0x0003(0x0001) (Edit)

};
// ScriptStruct Core.Object.Array_Mirror
// 0x0010
struct FArray_Mirror
{
	struct FPointer                                    Data;                                                      // 0x0000(0x0008) (Const, Native)
	int                                                ArrayNum;                                                  // 0x0008(0x0004) (Const, Native)
	int                                                ArrayMax;                                                  // 0x000C(0x0004) (Const, Native)

};
// ScriptStruct Core.Object.IndirectArray_Mirror
// 0x0010
struct FIndirectArray_Mirror
{
	struct FPointer                                    Data;                                                      // 0x0000(0x0008) (Const, Native)
	int                                                ArrayNum;                                                  // 0x0008(0x0004) (Const, Native)
	int                                                ArrayMax;                                                  // 0x000C(0x0004) (Const, Native)

};
// ScriptStruct Core.ObjectProvider.ObjectProviderPendingCallback
// 0x0020
struct FObjectProviderPendingCallback
{
	struct FScriptDelegate                             Callback;                                                  // 0x0000(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataH39I[0xC];                                      // 0x0000(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UObject*                                     Value;                                                     // 0x0018(0x0008)

};
// ScriptStruct Core.Object.FColorVertexBuffer_Mirror
// 0x001C
struct FFColorVertexBuffer_Mirror
{
	struct FPointer                                    VfTable;                                                   // 0x0000(0x0008) (Const, Native)
	struct FPointer                                    VertexData;                                                // 0x0008(0x0008) (Const, Native)
	int                                                Data;                                                      // 0x0010(0x0004) (Const)
	int                                                Stride;                                                    // 0x0014(0x0004) (Const)
	int                                                NumVertices;                                               // 0x0018(0x0004) (Const)

};
// ScriptStruct Core.Object.RenderCommandFence_Mirror
// 0x0004
struct FRenderCommandFence_Mirror
{
	int                                                NumPendingFences;                                          // 0x0000(0x0004) (Const, Native, Transient)

};
// ScriptStruct Core.Object.UntypedBulkData_Mirror
// 0x0054
struct FUntypedBulkData_Mirror
{
	struct FPointer                                    VfTable;                                                   // 0x0000(0x0008) (Const, Native)
	int                                                BulkDataFlags;                                             // 0x0008(0x0004) (Const, Native)
	int                                                ElementCount;                                              // 0x000C(0x0004) (Const, Native)
	unsigned char                                      UnknownDataP01F[0x8];                                      // 0x0010(0x0008) UNKNOWN PROPERTY: QWordProperty Core.Object.UntypedBulkData_Mirror.BulkDataOffsetInFile
	int                                                BulkDataSizeOnDisk;                                        // 0x0018(0x0004) (Const, Native)
	int                                                SavedBulkDataFlags;                                        // 0x001C(0x0004) (Const, Native)
	int                                                SavedElementCount;                                         // 0x0020(0x0004) (Const, Native)
	unsigned char                                      UnknownData9G0F[0x4];                                      // 0x0024(0x0004) MISSED OFFSET
	unsigned char                                      UnknownDataA6UF[0x8];                                      // 0x0024(0x0008) UNKNOWN PROPERTY: QWordProperty Core.Object.UntypedBulkData_Mirror.SavedBulkDataOffsetInFile
	int                                                SavedBulkDataSizeOnDisk;                                   // 0x0030(0x0004) (Const, Native)
	unsigned char                                      UnknownData4VBO[0x4];                                      // 0x0034(0x0004) MISSED OFFSET
	struct FPointer                                    BulkData;                                                  // 0x0038(0x0008) (Const, Native)
	int                                                LockStatus;                                                // 0x0040(0x0004) (Const, Native)
	unsigned char                                      UnknownData6GJM[0x4];                                      // 0x0044(0x0004) MISSED OFFSET
	struct FPointer                                    AttachedAr;                                                // 0x0048(0x0008) (Const, Native)
	int                                                bShouldFreeOnEmpty;                                        // 0x0050(0x0004) (Const, Native)

};
// ScriptStruct Core.Object.MultiMap_Mirror
// 0x0050
struct FMultiMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                                     // 0x0000(0x0050) (Const, Native)

};
// ScriptStruct Core.Object.ThreadSafeCounter
// 0x0004
struct FThreadSafeCounter
{
	int                                                Value;                                                     // 0x0000(0x0004) (Const, Native)

};
// ScriptStruct Core.Object.Double
// 0x0008
struct FDouble
{
	int                                                A;                                                         // 0x0000(0x0004) (Const, Native)
	int                                                B;                                                         // 0x0004(0x0004) (Const, Native)

};
// ScriptStruct Core.Object.IpAddr
// 0x0014
struct FIpAddr
{
	int                                                AddrA;                                                     // 0x0000(0x0004)
	int                                                AddrB;                                                     // 0x0004(0x0004)
	int                                                AddrC;                                                     // 0x0008(0x0004)
	int                                                AddrD;                                                     // 0x000C(0x0004)
	int                                                Port;                                                      // 0x0010(0x0004)

};
// ScriptStruct Core.Object.HatPointer
// 0x0008
struct FHatPointer
{
	unsigned char                                      UnknownDataKV2D[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty Core.Object.HatPointer.Dummy

};
// ScriptStruct Core.ObjectProvider.ObjectProviderSubscription
// 0x0024
struct FObjectProviderSubscription
{
	class UClass*                                      ObjClass;                                                  // 0x0000(0x0008)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataUG4B[0xC];                                      // 0x0008(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bFireOnce : 1;                                             // 0x0020(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataFXEK[0x2];                                      // 0x0020(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct Core.ObjectProvider.ObjectPropertyInjection
// 0x0010
struct FObjectPropertyInjection
{
	class UObject*                                     Subscriber;                                                // 0x0000(0x0008)
	class UObjectProperty*                             Property;                                                  // 0x0008(0x0008)

};
// ScriptStruct Core.Object.Plane
// 0x0004 (0x0010 - 0x000C)
struct FPlane : public FVector
{
	float                                              W;                                                         // 0x000C(0x0004) (Edit)

};
// ScriptStruct Core.Object.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                                    // 0x0000(0x0010) (Edit)
	struct FPlane                                      YPlane;                                                    // 0x0010(0x0010) (Edit)
	struct FPlane                                      ZPlane;                                                    // 0x0020(0x0010) (Edit)
	struct FPlane                                      WPlane;                                                    // 0x0030(0x0010) (Edit)

};
// ScriptStruct Core.Object.InlinePointerArray_Mirror
// 0x0018
struct FInlinePointerArray_Mirror
{
	struct FPointer                                    InlineData;                                                // 0x0000(0x0008) (Const)
	struct FArray_Mirror                               SecondaryData;                                             // 0x0008(0x0010) (Const)

};
// ScriptStruct Core.Object.Vector4
// 0x0010
struct FVector4
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit)
	float                                              Z;                                                         // 0x0008(0x0004) (Edit)
	float                                              W;                                                         // 0x000C(0x0004) (Edit)

};
// ScriptStruct Core.Object.InterpCurvePointQuat
// 0x0041
struct FInterpCurvePointQuat
{
	float                                              InVal;                                                     // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownDataP0SY[0xC];                                      // 0x0004(0x000C) MISSED OFFSET
	struct FQuat                                       OutVal;                                                    // 0x0010(0x0010) (Edit)
	struct FQuat                                       ArriveTangent;                                             // 0x0020(0x0010) (Edit)
	struct FQuat                                       LeaveTangent;                                              // 0x0030(0x0010) (Edit)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                // 0x0040(0x0001) (Edit)

};
// ScriptStruct Core.Object.BoxSphereBounds
// 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                                    // 0x0000(0x000C) (Edit)
	struct FVector                                     BoxExtent;                                                 // 0x000C(0x000C) (Edit)
	float                                              SphereRadius;                                              // 0x0018(0x0004) (Edit)

};
// ScriptStruct Core.Object.TAlphaBlend
// 0x0015
struct FTAlphaBlend
{
	float                                              AlphaIn;                                                   // 0x0000(0x0004) (Const)
	float                                              AlphaOut;                                                  // 0x0004(0x0004) (Const)
	float                                              AlphaTarget;                                               // 0x0008(0x0004) (Edit)
	float                                              BlendTime;                                                 // 0x000C(0x0004) (Edit)
	float                                              BlendTimeToGo;                                             // 0x0010(0x0004) (Const)
	TEnumAsByte<EAlphaBlendType>                       BlendType;                                                 // 0x0014(0x0001) (Edit)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
