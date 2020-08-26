#pragma once

// Name: RocketLeague, Version: 1

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Core.Object.RSmoothInterpTo
struct UObject_RSmoothInterpTo_Params
{
	struct FRotator                                    From;                                                      // (Parm)
	struct FRotator                                    To;                                                        // (Parm)
	float                                              Lambda;                                                    // (Parm)
	float                                              DeltaTime;                                                 // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VSmoothInterpTo
struct UObject_VSmoothInterpTo_Params
{
	struct FVector                                     From;                                                      // (Parm)
	struct FVector                                     To;                                                        // (Parm)
	float                                              Lambda;                                                    // (Parm)
	float                                              DeltaTime;                                                 // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FSmoothInterpTo
struct UObject_FSmoothInterpTo_Params
{
	float                                              From;                                                      // (Parm)
	float                                              To;                                                        // (Parm)
	float                                              Lambda;                                                    // (Parm)
	float                                              DeltaTime;                                                 // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetSmoothInterpLerpValue
struct UObject_GetSmoothInterpLerpValue_Params
{
	float                                              Lambda;                                                    // (Parm)
	float                                              DeltaTime;                                                 // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetTypedOuter
struct UObject_GetTypedOuter_Params
{
	class UClass*                                      ObjClass;                                                  // (Parm)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, CoerceParm)
};

// Function Core.Object.MarkPendingKill
struct UObject_MarkPendingKill_Params
{
};

// Function Core.Object.NotNone
struct UObject_NotNone_Params
{
	class UObject*                                     O;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SwapArrayItems
struct UObject_SwapArrayItems_Params
{
};

// Function Core.Object.Swap
struct UObject_Swap_Params
{
};

// Function Core.Object.SumFloat
struct UObject_SumFloat_Params
{
	float                                              Total;                                                     // (Parm)
	float                                              Value;                                                     // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SumInt
struct UObject_SumInt_Params
{
	int                                                Total;                                                     // (Parm)
	int                                                Value;                                                     // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SortDescendingFloat
struct UObject_SortDescendingFloat_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SortAscendingFloat
struct UObject_SortAscendingFloat_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SortDescendingString
struct UObject_SortDescendingString_Params
{
	struct FString                                     A;                                                         // (Parm, NeedCtorLink)
	struct FString                                     B;                                                         // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SortAscendingString
struct UObject_SortAscendingString_Params
{
	struct FString                                     A;                                                         // (Parm, NeedCtorLink)
	struct FString                                     B;                                                         // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SortDescendingQWORD
struct UObject_SortDescendingQWORD_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SortAscendingQWORD
struct UObject_SortAscendingQWORD_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SortDescendingInt
struct UObject_SortDescendingInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SortAscendingInt
struct UObject_SortAscendingInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.PadString
struct UObject_PadString_Params
{
	struct FString                                     Str;                                                       // (Parm, CoerceParm, NeedCtorLink)
	int                                                Characters;                                                // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.GetFrameCounter
struct UObject_GetFrameCounter_Params
{
};

// Function Core.Object.GetScaledAxisValue
struct UObject_GetScaledAxisValue_Params
{
	float                                              Value;                                                     // (Parm)
	float                                              Sensitivity;                                               // (Parm)
	float                                              MaxSensitivity;                                            // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetSingleton
struct UObject_GetSingleton_Params
{
	class UClass*                                      ObjClass;                                                  // (Parm)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, CoerceParm)
};

// Function Core.Object.GetObjectProvider
struct UObject_GetObjectProvider_Params
{
	class UObjectProvider*                             ReturnValue;                                               // (Parm, OutParm, ReturnParm, EditInline)
};

// Function Core.Object.IsAutomationTest
struct UObject_IsAutomationTest_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetEdition
struct UObject_GetEdition_Params
{
	TEnumAsByte<EEdition>                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.IsEdition
struct UObject_IsEdition_Params
{
	TEnumAsByte<EEdition>                              Edition;                                                   // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ToJson
struct UObject_ToJson_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.SetRooted
struct UObject_SetRooted_Params
{
	bool                                               bRooted;                                                   // (Parm)
};

// Function Core.Object.ProfNodeEvent
struct UObject_ProfNodeEvent_Params
{
	struct FString                                     EventName;                                                 // (Parm, NeedCtorLink)
};

// Function Core.Object.ProfNodeSetDepthThreshold
struct UObject_ProfNodeSetDepthThreshold_Params
{
	int                                                Depth;                                                     // (Parm)
};

// Function Core.Object.ProfNodeSetTimeThresholdSeconds
struct UObject_ProfNodeSetTimeThresholdSeconds_Params
{
	float                                              Threshold;                                                 // (Parm)
};

// Function Core.Object.ProfNodeStop
struct UObject_ProfNodeStop_Params
{
	int                                                AssumedTimerIndex;                                         // (OptionalParm, Parm)
};

// Function Core.Object.ProfNodeStart
struct UObject_ProfNodeStart_Params
{
	struct FString                                     TimerName;                                                 // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.CreateGuidString
struct UObject_CreateGuidString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.GetStringFromGuid
struct UObject_GetStringFromGuid_Params
{
	struct FGuid                                       InGuid;                                                    // (Const, Parm, OutParm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.GetGuidFromString
struct UObject_GetGuidFromString_Params
{
	struct FString                                     InGuidString;                                              // (Const, Parm, OutParm, NeedCtorLink)
	struct FGuid                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.CreateGuid
struct UObject_CreateGuid_Params
{
	struct FGuid                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.IsGuidValid
struct UObject_IsGuidValid_Params
{
	struct FGuid                                       InGuid;                                                    // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.InvalidateGuid
struct UObject_InvalidateGuid_Params
{
	struct FGuid                                       InGuid;                                                    // (Parm, OutParm)
};

// Function Core.Object.FindStructProperty
struct UObject_FindStructProperty_Params
{
	class UClass*                                      PropertyClass;                                             // (Parm)
	struct FName                                       PropertyName;                                              // (Parm)
	struct FName                                       StructName;                                                // (Parm)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, CoerceParm)
};

// Function Core.Object.FindProperty
struct UObject_FindProperty_Params
{
	class UClass*                                      PropertyClass;                                             // (Parm)
	struct FName                                       PropertyName;                                              // (Parm)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, CoerceParm)
};

// Function Core.Object.DuplicateObject
struct UObject_DuplicateObject_Params
{
	class UObject*                                     Template;                                                  // (Parm)
	class UObject*                                     ObjOuter;                                                  // (OptionalParm, Parm)
	class UClass*                                      DestClass;                                                 // (OptionalParm, Parm)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, CoerceParm)
};

// Function Core.Object.RunningAverage
struct UObject_RunningAverage_Params
{
	float                                              OldAverage;                                                // (Parm)
	float                                              NewValue;                                                  // (Parm)
	int                                                NewCount;                                                  // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetCurrentTime
struct UObject_GetCurrentTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetMaxLinearColorBrightness
struct UObject_GetMaxLinearColorBrightness_Params
{
	struct FLinearColor                                C;                                                         // (Parm)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetMaxColorBrightness
struct UObject_GetMaxColorBrightness_Params
{
	struct FColor                                      C;                                                         // (Parm)
	struct FColor                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LABtoRGB
struct UObject_LABtoRGB_Params
{
	struct FLinearColor                                C;                                                         // (Parm)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RGBtoLAB
struct UObject_RGBtoLAB_Params
{
	struct FLinearColor                                C;                                                         // (Parm)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.HSVtoRGB
struct UObject_HSVtoRGB_Params
{
	struct FLinearColor                                C;                                                         // (Parm)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RGBtoHSV
struct UObject_RGBtoHSV_Params
{
	struct FLinearColor                                C;                                                         // (Parm)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.IntToLinearColor
struct UObject_IntToLinearColor_Params
{
	int                                                I;                                                         // (Parm)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.IntToColor
struct UObject_IntToColor_Params
{
	int                                                I;                                                         // (Parm)
	struct FColor                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LinearColorToInt
struct UObject_LinearColorToInt_Params
{
	struct FLinearColor                                C;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ColorToInt
struct UObject_ColorToInt_Params
{
	struct FColor                                      C;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SolveVelocityQuadratic
struct UObject_SolveVelocityQuadratic_Params
{
	float                                              Distance;                                                  // (Parm)
	float                                              Speed;                                                     // (Parm)
	float                                              Accel;                                                     // (Parm)
	float                                              Time;                                                      // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Sign
struct UObject_Sign_Params
{
	float                                              X;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MakeVector2D
struct UObject_MakeVector2D_Params
{
	float                                              X;                                                         // (Parm)
	float                                              Y;                                                         // (Parm)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VAbs
struct UObject_VAbs_Params
{
	struct FVector                                     V;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MakeVector
struct UObject_MakeVector_Params
{
	float                                              X;                                                         // (Parm)
	float                                              Y;                                                         // (Parm)
	float                                              Z;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FlattenVector
struct UObject_FlattenVector_Params
{
	struct FVector                                     NormalToFlatten;                                           // (Parm)
	struct FVector                                     PlaneNormal;                                               // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetRealArchetypeName
struct UObject_GetRealArchetypeName_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FormatTime
struct UObject_FormatTime_Params
{
	int                                                Seconds;                                                   // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.GetTextArchetype
struct UObject_GetTextArchetype_Params
{
	class UClass*                                      ArchetypeClass;                                            // (Parm)
	struct FString                                     Path;                                                      // (Const, Parm, NeedCtorLink)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, CoerceParm)
};

// Function Core.Object.IsArchetype
struct UObject_IsArchetype_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.UnsubscribeFromAllEvents
struct UObject_UnsubscribeFromAllEvents_Params
{
};

// Function Core.Object.NewInstance
struct UObject_NewInstance_Params
{
	class UObject*                                     ObjOuter;                                                  // (OptionalParm, Parm)
	struct FName                                       ObjName;                                                   // (OptionalParm, Parm)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, CoerceParm)
};

// Function Core.Object.PrintDebugInfo
struct UObject_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                    // (Parm)
};

// Function Core.Object.RotatorFromInt
struct UObject_RotatorFromInt_Params
{
	int                                                RotationPitchAndYaw;                                       // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RotatorToInt
struct UObject_RotatorToInt_Params
{
	struct FRotator                                    Rotation;                                                  // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetLanguage
struct UObject_GetLanguage_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.GetRandomOptionSumFrequency
struct UObject_GetRandomOptionSumFrequency_Params
{
	TArray<float>                                      FreqList;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetBuildChangelistNumber
struct UObject_GetBuildChangelistNumber_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetEngineVersion
struct UObject_GetEngineVersion_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetAppSeconds
struct UObject_GetAppSeconds_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetSystemTime
struct UObject_GetSystemTime_Params
{
	int                                                Year;                                                      // (Parm, OutParm)
	int                                                Month;                                                     // (Parm, OutParm)
	int                                                DayOfWeek;                                                 // (Parm, OutParm)
	int                                                Day;                                                       // (Parm, OutParm)
	int                                                Hour;                                                      // (Parm, OutParm)
	int                                                Min;                                                       // (Parm, OutParm)
	int                                                Sec;                                                       // (Parm, OutParm)
	int                                                MSec;                                                      // (Parm, OutParm)
};

// Function Core.Object.TimeStamp
struct UObject_TimeStamp_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.TransformVectorByRotation
struct UObject_TransformVectorByRotation_Params
{
	struct FRotator                                    SourceRotation;                                            // (Parm)
	struct FVector                                     SourceVector;                                              // (Parm)
	bool                                               bInverse;                                                  // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetPackageName
struct UObject_GetPackageName_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.IsPendingKill
struct UObject_IsPendingKill_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RangeByteToFloatUnsigned
struct UObject_RangeByteToFloatUnsigned_Params
{
	unsigned char                                      inputByte;                                                 // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RangeByteToFloatSigned
struct UObject_RangeByteToFloatSigned_Params
{
	unsigned char                                      inputByte;                                                 // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FloatToRangeByteUnsigned
struct UObject_FloatToRangeByteUnsigned_Params
{
	float                                              inputFloat;                                                // (Parm)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FloatToRangeByteSigned
struct UObject_FloatToRangeByteSigned_Params
{
	float                                              inputFloat;                                                // (Parm)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.UnwindHeading
struct UObject_UnwindHeading_Params
{
	float                                              A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FindDeltaAngle
struct UObject_FindDeltaAngle_Params
{
	float                                              A1;                                                        // (Parm)
	float                                              A2;                                                        // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetHeadingAngle
struct UObject_GetHeadingAngle_Params
{
	struct FVector                                     Dir;                                                       // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetAngularDegreesFromRadians
struct UObject_GetAngularDegreesFromRadians_Params
{
	struct FVector2D                                   OutFOV;                                                    // (Parm, OutParm)
};

// Function Core.Object.GetAngularFromDotDist
struct UObject_GetAngularFromDotDist_Params
{
	struct FVector2D                                   OutAngDist;                                                // (Parm, OutParm)
	struct FVector2D                                   DotDist;                                                   // (Parm)
};

// Function Core.Object.GetAngularDistance
struct UObject_GetAngularDistance_Params
{
	struct FVector2D                                   OutAngularDist;                                            // (Parm, OutParm)
	struct FVector                                     Direction;                                                 // (Parm)
	struct FVector                                     AxisX;                                                     // (Parm)
	struct FVector                                     AxisY;                                                     // (Parm)
	struct FVector                                     AxisZ;                                                     // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetDotDistance
struct UObject_GetDotDistance_Params
{
	struct FVector2D                                   OutDotDist;                                                // (Parm, OutParm)
	struct FVector                                     Direction;                                                 // (Parm)
	struct FVector                                     AxisX;                                                     // (Parm)
	struct FVector                                     AxisY;                                                     // (Parm)
	struct FVector                                     AxisZ;                                                     // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LinePlaneIntersection
struct UObject_LinePlaneIntersection_Params
{
	struct FVector                                     LineStart;                                                 // (Parm)
	struct FVector                                     LineEnd;                                                   // (Parm)
	struct FVector                                     PlaneOrigin;                                               // (Parm)
	struct FVector                                     PlaneNormal;                                               // (Parm)
	struct FVector                                     Out_Intersection;                                          // (Parm, OutParm)
	float                                              Out_T;                                                     // (OptionalParm, Parm, OutParm)
	bool                                               bCheckLineSegment;                                         // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.PointProjectToPlane
struct UObject_PointProjectToPlane_Params
{
	struct FVector                                     Point;                                                     // (Parm)
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     B;                                                         // (Parm)
	struct FVector                                     C;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.PointDistToPlane
struct UObject_PointDistToPlane_Params
{
	struct FVector                                     Point;                                                     // (Parm)
	struct FRotator                                    Orientation;                                               // (Parm)
	struct FVector                                     Origin;                                                    // (Parm)
	struct FVector                                     out_ClosestPoint;                                          // (OptionalParm, Parm, OutParm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.PointDistToSegment
struct UObject_PointDistToSegment_Params
{
	struct FVector                                     Point;                                                     // (Parm)
	struct FVector                                     StartPoint;                                                // (Parm)
	struct FVector                                     EndPoint;                                                  // (Parm)
	struct FVector                                     OutClosestPoint;                                           // (OptionalParm, Parm, OutParm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.PointDistToLine
struct UObject_PointDistToLine_Params
{
	struct FVector                                     Point;                                                     // (Parm)
	struct FVector                                     Line;                                                      // (Parm)
	struct FVector                                     Origin;                                                    // (Parm)
	struct FVector                                     OutClosestPoint;                                           // (OptionalParm, Parm, OutParm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetPerObjectConfigObjects
struct UObject_GetPerObjectConfigObjects_Params
{
	class UClass*                                      SearchClass;                                               // (Parm)
	class UObject*                                     OutObject;                                                 // (Parm, OutParm)
	class UObject*                                     ObjectOuter;                                               // (OptionalParm, Parm)
	int                                                MaxResults;                                                // (OptionalParm, Parm)
};

// Function Core.Object.GetPerObjectConfigSections
struct UObject_GetPerObjectConfigSections_Params
{
	class UClass*                                      SearchClass;                                               // (Parm)
	TArray<struct FString>                             out_SectionNames;                                          // (Parm, OutParm, NeedCtorLink)
	class UObject*                                     ObjectOuter;                                               // (OptionalParm, Parm)
	int                                                MaxResults;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ImportJSON
struct UObject_ImportJSON_Params
{
	struct FString                                     PropertyName;                                              // (Parm, NeedCtorLink)
	struct FString                                     JSON;                                                      // (Const, Parm, OutParm, NeedCtorLink)
};

// Function Core.Object.StaticSaveConfig
struct UObject_StaticSaveConfig_Params
{
};

// Function Core.Object.SaveConfig
struct UObject_SaveConfig_Params
{
};

// Function Core.Object.LoadSeekFreeObject
struct UObject_LoadSeekFreeObject_Params
{
	class UClass*                                      ObjClass;                                                  // (Parm)
	struct FString                                     Path;                                                      // (Parm, NeedCtorLink)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, CoerceParm)
};

// Function Core.Object.FindObject
struct UObject_FindObject_Params
{
	struct FString                                     ObjectName;                                                // (Parm, NeedCtorLink)
	class UClass*                                      ObjectClass;                                               // (Parm)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DynamicLoadObject
struct UObject_DynamicLoadObject_Params
{
	struct FString                                     ObjectName;                                                // (Parm, NeedCtorLink)
	class UClass*                                      ObjectClass;                                               // (Parm)
	bool                                               MayFail;                                                   // (OptionalParm, Parm)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EnumFromString
struct UObject_EnumFromString_Params
{
	class UObject*                                     E;                                                         // (Parm)
	struct FName                                       ValueName;                                                 // (Parm, CoerceParm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetEnum
struct UObject_GetEnum_Params
{
	class UObject*                                     E;                                                         // (Parm)
	int                                                I;                                                         // (Parm, CoerceParm)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Disable
struct UObject_Disable_Params
{
	struct FName                                       ProbeFunc;                                                 // (Parm)
};

// Function Core.Object.Enable
struct UObject_Enable_Params
{
	struct FName                                       ProbeFunc;                                                 // (Parm)
};

// Function Core.Object.ContinuedState
struct UObject_ContinuedState_Params
{
};

// Function Core.Object.PausedState
struct UObject_PausedState_Params
{
};

// Function Core.Object.PoppedState
struct UObject_PoppedState_Params
{
};

// Function Core.Object.PushedState
struct UObject_PushedState_Params
{
};

// Function Core.Object.EndState
struct UObject_EndState_Params
{
	struct FName                                       NextStateName;                                             // (Parm)
};

// Function Core.Object.BeginState
struct UObject_BeginState_Params
{
	struct FName                                       PreviousStateName;                                         // (Parm)
};

// Function Core.Object.DumpStateStack
struct UObject_DumpStateStack_Params
{
};

// Function Core.Object.PopState
struct UObject_PopState_Params
{
	bool                                               bPopAll;                                                   // (OptionalParm, Parm)
};

// Function Core.Object.PushState
struct UObject_PushState_Params
{
	struct FName                                       NewState;                                                  // (Parm)
	struct FName                                       NewLabel;                                                  // (OptionalParm, Parm)
};

// Function Core.Object.GetStateName
struct UObject_GetStateName_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.IsChildState
struct UObject_IsChildState_Params
{
	struct FName                                       TestState;                                                 // (Parm)
	struct FName                                       TestParentState;                                           // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.IsInState
struct UObject_IsInState_Params
{
	struct FName                                       TestState;                                                 // (Parm)
	bool                                               bTestStateStack;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GotoState
struct UObject_GotoState_Params
{
	struct FName                                       NewState;                                                  // (OptionalParm, Parm)
	struct FName                                       Label;                                                     // (OptionalParm, Parm)
	bool                                               bForceEvents;                                              // (OptionalParm, Parm)
	bool                                               bKeepStack;                                                // (OptionalParm, Parm)
};

// Function Core.Object.IsUTracing
struct UObject_IsUTracing_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SetUTracing
struct UObject_SetUTracing_Params
{
	bool                                               bShouldUTrace;                                             // (Parm)
};

// Function Core.Object.GetFuncName
struct UObject_GetFuncName_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DebugBreak
struct UObject_DebugBreak_Params
{
	int                                                UserFlags;                                                 // (OptionalParm, Parm)
	TEnumAsByte<EDebugBreakType>                       DebuggerType;                                              // (OptionalParm, Parm)
};

// Function Core.Object.GetScriptTrace
struct UObject_GetScriptTrace_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.ScriptTrace
struct UObject_ScriptTrace_Params
{
};

// Function Core.Object.ParseLocalizedPropertyPath
struct UObject_ParseLocalizedPropertyPath_Params
{
	struct FString                                     PathName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Localize
struct UObject_Localize_Params
{
	struct FString                                     SectionName;                                               // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     KeyName;                                                   // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     PackageName;                                               // (OptionalParm, Parm, CoerceParm, NeedCtorLink)
	bool                                               bOptional;                                                 // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.WarnInternal
struct UObject_WarnInternal_Params
{
	struct FString                                     S;                                                         // (Parm, CoerceParm, NeedCtorLink)
};

// Function Core.Object.LogInternal
struct UObject_LogInternal_Params
{
	struct FString                                     S;                                                         // (Parm, CoerceParm, NeedCtorLink)
	struct FName                                       Tag;                                                       // (OptionalParm, Parm)
	bool                                               bFileOnly;                                                 // (OptionalParm, Parm)
};

// Function Core.Object.LinearColorLerp
struct UObject_LinearColorLerp_Params
{
	struct FLinearColor                                ColorA;                                                    // (Parm)
	struct FLinearColor                                ColorB;                                                    // (Parm)
	float                                              Alpha;                                                     // (Parm)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_LinearColorLinearColor
struct UObject_Subtract_LinearColorLinearColor_Params
{
	struct FLinearColor                                A;                                                         // (Parm)
	struct FLinearColor                                B;                                                         // (Parm)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_LinearColorFloat
struct UObject_Multiply_LinearColorFloat_Params
{
	struct FLinearColor                                LC;                                                        // (Parm)
	float                                              Mult;                                                      // (Parm)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ConvertFromSRGB
struct UObject_ConvertFromSRGB_Params
{
	struct FLinearColor                                OldColor;                                                  // (Parm)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LinearColorToColor
struct UObject_LinearColorToColor_Params
{
	struct FLinearColor                                OldColor;                                                  // (Parm)
	struct FColor                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ColorToLinearColor
struct UObject_ColorToLinearColor_Params
{
	struct FColor                                      OldColor;                                                  // (Parm)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MakeLinearColor
struct UObject_MakeLinearColor_Params
{
	float                                              R;                                                         // (Parm)
	float                                              G;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	float                                              A;                                                         // (OptionalParm, Parm)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LerpColor
struct UObject_LerpColor_Params
{
	struct FColor                                      A;                                                         // (Parm)
	struct FColor                                      B;                                                         // (Parm)
	float                                              Alpha;                                                     // (Parm)
	struct FColor                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MakeColor
struct UObject_MakeColor_Params
{
	unsigned char                                      R;                                                         // (Parm)
	unsigned char                                      G;                                                         // (Parm)
	unsigned char                                      B;                                                         // (Parm)
	unsigned char                                      A;                                                         // (OptionalParm, Parm)
	struct FColor                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_ColorColor
struct UObject_Add_ColorColor_Params
{
	struct FColor                                      A;                                                         // (Parm)
	struct FColor                                      B;                                                         // (Parm)
	struct FColor                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_ColorFloat
struct UObject_Multiply_ColorFloat_Params
{
	struct FColor                                      A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	struct FColor                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_FloatColor
struct UObject_Multiply_FloatColor_Params
{
	float                                              A;                                                         // (Parm)
	struct FColor                                      B;                                                         // (Parm)
	struct FColor                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_ColorColor
struct UObject_Subtract_ColorColor_Params
{
	struct FColor                                      A;                                                         // (Parm)
	struct FColor                                      B;                                                         // (Parm)
	struct FColor                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EvalInterpCurveVector2D
struct UObject_EvalInterpCurveVector2D_Params
{
	struct FInterpCurveVector2D                        Vector2DCurve;                                             // (Const, Parm, OutParm, NeedCtorLink)
	float                                              InVal;                                                     // (Parm)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AutoSetTangentsVector
struct UObject_AutoSetTangentsVector_Params
{
	struct FInterpCurveVector                          Curve;                                                     // (Parm, OutParm, NeedCtorLink)
};

// Function Core.Object.EvalInterpCurveVector
struct UObject_EvalInterpCurveVector_Params
{
	struct FInterpCurveVector                          VectorCurve;                                               // (Const, Parm, OutParm, NeedCtorLink)
	float                                              InVal;                                                     // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AutoSetTangentsFloat
struct UObject_AutoSetTangentsFloat_Params
{
	struct FInterpCurveFloat                           Curve;                                                     // (Parm, OutParm, NeedCtorLink)
};

// Function Core.Object.EvalInterpCurveFloat
struct UObject_EvalInterpCurveFloat_Params
{
	struct FInterpCurveFloat                           FloatCurve;                                                // (Const, Parm, OutParm, NeedCtorLink)
	float                                              InVal;                                                     // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.vect2d
struct UObject_vect2d_Params
{
	float                                              InX;                                                       // (Parm)
	float                                              InY;                                                       // (Parm)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetMappedRangeValue
struct UObject_GetMappedRangeValue_Params
{
	struct FVector2D                                   InputRange;                                                // (Parm)
	struct FVector2D                                   OutputRange;                                               // (Parm)
	float                                              Value;                                                     // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetRangePctByValue
struct UObject_GetRangePctByValue_Params
{
	struct FVector2D                                   Range;                                                     // (Parm)
	float                                              Value;                                                     // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetRangeValueByPct
struct UObject_GetRangeValueByPct_Params
{
	struct FVector2D                                   Range;                                                     // (Parm)
	float                                              Pct;                                                       // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.V2DNormal
struct UObject_V2DNormal_Params
{
	struct FVector2D                                   A;                                                         // (Parm)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.V2DSizeSq
struct UObject_V2DSizeSq_Params
{
	struct FVector2D                                   A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.V2DSize
struct UObject_V2DSize_Params
{
	struct FVector2D                                   A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Dot_Vector2DVector2D
struct UObject_Dot_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                         // (Parm)
	struct FVector2D                                   B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_Vector2DVector2D
struct UObject_SubtractEqual_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                         // (Parm, OutParm)
	struct FVector2D                                   B;                                                         // (Parm)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_Vector2DVector2D
struct UObject_AddEqual_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                         // (Parm, OutParm)
	struct FVector2D                                   B;                                                         // (Parm)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DivideEqual_Vector2DFloat
struct UObject_DivideEqual_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                         // (Parm, OutParm)
	float                                              B;                                                         // (Parm)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_Vector2DFloat
struct UObject_MultiplyEqual_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                         // (Parm, OutParm)
	float                                              B;                                                         // (Parm)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Divide_Vector2DFloat
struct UObject_Divide_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_Vector2DFloat
struct UObject_Multiply_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_Vector2DVector2D
struct UObject_Subtract_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                         // (Parm)
	struct FVector2D                                   B;                                                         // (Parm)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_Vector2DVector2D
struct UObject_Add_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                         // (Parm)
	struct FVector2D                                   B;                                                         // (Parm)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_QuatQuat
struct UObject_Subtract_QuatQuat_Params
{
	struct FQuat                                       A;                                                         // (Parm)
	struct FQuat                                       B;                                                         // (Parm)
	struct FQuat                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_QuatQuat
struct UObject_Add_QuatQuat_Params
{
	struct FQuat                                       A;                                                         // (Parm)
	struct FQuat                                       B;                                                         // (Parm)
	struct FQuat                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatSlerp
struct UObject_QuatSlerp_Params
{
	struct FQuat                                       A;                                                         // (Parm)
	struct FQuat                                       B;                                                         // (Parm)
	float                                              Alpha;                                                     // (Parm)
	bool                                               bShortestPath;                                             // (OptionalParm, Parm)
	struct FQuat                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatToRotator
struct UObject_QuatToRotator_Params
{
	struct FQuat                                       A;                                                         // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatFromRotator
struct UObject_QuatFromRotator_Params
{
	struct FRotator                                    A;                                                         // (Parm)
	struct FQuat                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatFromAxisAndAngle
struct UObject_QuatFromAxisAndAngle_Params
{
	struct FVector                                     Axis;                                                      // (Parm)
	float                                              Angle;                                                     // (Parm)
	struct FQuat                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatFindBetween
struct UObject_QuatFindBetween_Params
{
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     B;                                                         // (Parm)
	struct FQuat                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatRotateVector
struct UObject_QuatRotateVector_Params
{
	struct FQuat                                       A;                                                         // (Parm)
	struct FVector                                     B;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatInvert
struct UObject_QuatInvert_Params
{
	struct FQuat                                       A;                                                         // (Parm)
	struct FQuat                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatDot
struct UObject_QuatDot_Params
{
	struct FQuat                                       A;                                                         // (Parm)
	struct FQuat                                       B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatProduct
struct UObject_QuatProduct_Params
{
	struct FQuat                                       A;                                                         // (Parm)
	struct FQuat                                       B;                                                         // (Parm)
	struct FQuat                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MatrixGetAxis
struct UObject_MatrixGetAxis_Params
{
	struct FMatrix                                     TM;                                                        // (Parm)
	TEnumAsByte<EAxis>                                 Axis;                                                      // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MatrixGetOrigin
struct UObject_MatrixGetOrigin_Params
{
	struct FMatrix                                     TM;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MatrixGetRotator
struct UObject_MatrixGetRotator_Params
{
	struct FMatrix                                     TM;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MakeRotationMatrix
struct UObject_MakeRotationMatrix_Params
{
	struct FRotator                                    Rotation;                                                  // (Parm)
	struct FMatrix                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MakeRotationTranslationMatrix
struct UObject_MakeRotationTranslationMatrix_Params
{
	struct FVector                                     Translation;                                               // (Parm)
	struct FRotator                                    Rotation;                                                  // (Parm)
	struct FMatrix                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.InverseTransformNormal
struct UObject_InverseTransformNormal_Params
{
	struct FMatrix                                     TM;                                                        // (Parm)
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.TransformNormal
struct UObject_TransformNormal_Params
{
	struct FMatrix                                     TM;                                                        // (Parm)
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.InverseTransformVector
struct UObject_InverseTransformVector_Params
{
	struct FMatrix                                     TM;                                                        // (Parm)
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.TransformVector
struct UObject_TransformVector_Params
{
	struct FMatrix                                     TM;                                                        // (Parm)
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_MatrixMatrix
struct UObject_Multiply_MatrixMatrix_Params
{
	struct FMatrix                                     A;                                                         // (Parm)
	struct FMatrix                                     B;                                                         // (Parm)
	struct FMatrix                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_NameName
struct UObject_NotEqual_NameName_Params
{
	struct FName                                       A;                                                         // (Parm)
	struct FName                                       B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_NameName
struct UObject_EqualEqual_NameName_Params
{
	struct FName                                       A;                                                         // (Parm)
	struct FName                                       B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.IsA
struct UObject_IsA_Params
{
	struct FName                                       ClassName;                                                 // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ClassIsChildOf
struct UObject_ClassIsChildOf_Params
{
	class UClass*                                      TestClass;                                                 // (Parm)
	class UClass*                                      ParentClass;                                               // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_InterfaceInterface
struct UObject_NotEqual_InterfaceInterface_Params
{
	TScriptInterface<class UInterface>                 A;                                                         // (Parm)
	TScriptInterface<class UInterface>                 B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_InterfaceInterface
struct UObject_EqualEqual_InterfaceInterface_Params
{
	TScriptInterface<class UInterface>                 A;                                                         // (Parm)
	TScriptInterface<class UInterface>                 B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_ObjectObject
struct UObject_NotEqual_ObjectObject_Params
{
	class UObject*                                     A;                                                         // (Parm)
	class UObject*                                     B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_ObjectObject
struct UObject_EqualEqual_ObjectObject_Params
{
	class UObject*                                     A;                                                         // (Parm)
	class UObject*                                     B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetPathName
struct UObject_GetPathName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.PathName
struct UObject_PathName_Params
{
	class UObject*                                     CheckObject;                                               // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.SplitString
struct UObject_SplitString_Params
{
	struct FString                                     Source;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Delimiter;                                                 // (OptionalParm, Parm, NeedCtorLink)
	bool                                               bCullEmpty;                                                // (OptionalParm, Parm)
	TArray<struct FString>                             ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.ParseStringIntoArray
struct UObject_ParseStringIntoArray_Params
{
	struct FString                                     BaseString;                                                // (Parm, NeedCtorLink)
	TArray<struct FString>                             Pieces;                                                    // (Parm, OutParm, NeedCtorLink)
	struct FString                                     delim;                                                     // (Parm, NeedCtorLink)
	bool                                               bCullEmpty;                                                // (Parm)
};

// Function Core.Object.ContainsWhitespace
struct UObject_ContainsWhitespace_Params
{
	struct FString                                     Text;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RepeatString
struct UObject_RepeatString_Params
{
	struct FString                                     InValue;                                                   // (Parm, NeedCtorLink)
	int                                                Count;                                                     // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.JoinArrayQWord
struct UObject_JoinArrayQWord_Params
{
	struct FString                                     delim;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               bIgnoreBlanks;                                             // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.JoinArrayInt
struct UObject_JoinArrayInt_Params
{
	TArray<int>                                        IntArray;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     delim;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               bIgnoreBlanks;                                             // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.JoinArrayName
struct UObject_JoinArrayName_Params
{
	TArray<struct FName>                               NameArray;                                                 // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     delim;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               bIgnoreBlanks;                                             // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.JoinArrayStr
struct UObject_JoinArrayStr_Params
{
	TArray<struct FString>                             StringArray;                                               // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     delim;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               bIgnoreBlanks;                                             // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.JoinArray
struct UObject_JoinArray_Params
{
	TArray<struct FString>                             StringArray;                                               // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     out_Result;                                                // (Parm, OutParm, NeedCtorLink)
	struct FString                                     delim;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               bIgnoreBlanks;                                             // (OptionalParm, Parm)
};

// Function Core.Object.GetRightMost
struct UObject_GetRightMost_Params
{
	struct FString                                     Text;                                                      // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Split
struct UObject_Split_Params
{
	struct FString                                     Text;                                                      // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     SplitStr;                                                  // (Parm, CoerceParm, NeedCtorLink)
	bool                                               bOmitSplitStr;                                             // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Trim
struct UObject_Trim_Params
{
	struct FString                                     Src;                                                       // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Repl
struct UObject_Repl_Params
{
	struct FString                                     Src;                                                       // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     Match;                                                     // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     With;                                                      // (Parm, CoerceParm, NeedCtorLink)
	bool                                               bCaseSensitive;                                            // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Asc
struct UObject_Asc_Params
{
	struct FString                                     S;                                                         // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Chr
struct UObject_Chr_Params
{
	int                                                I;                                                         // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Locs
struct UObject_Locs_Params
{
	struct FString                                     S;                                                         // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Caps
struct UObject_Caps_Params
{
	struct FString                                     S;                                                         // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Right
struct UObject_Right_Params
{
	struct FString                                     S;                                                         // (Parm, CoerceParm, NeedCtorLink)
	int                                                I;                                                         // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Left
struct UObject_Left_Params
{
	struct FString                                     S;                                                         // (Parm, CoerceParm, NeedCtorLink)
	int                                                I;                                                         // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Mid
struct UObject_Mid_Params
{
	struct FString                                     S;                                                         // (Parm, CoerceParm, NeedCtorLink)
	int                                                I;                                                         // (Parm)
	int                                                J;                                                         // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.InStr
struct UObject_InStr_Params
{
	struct FString                                     S;                                                         // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     T;                                                         // (Parm, CoerceParm, NeedCtorLink)
	bool                                               bSearchFromRight;                                          // (OptionalParm, Parm)
	bool                                               bIgnoreCase;                                               // (OptionalParm, Parm)
	int                                                StartPos;                                                  // (OptionalParm, Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Len
struct UObject_Len_Params
{
	struct FString                                     S;                                                         // (Parm, CoerceParm, NeedCtorLink)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_StrStr
struct UObject_SubtractEqual_StrStr_Params
{
	struct FString                                     A;                                                         // (Parm, OutParm, NeedCtorLink)
	struct FString                                     B;                                                         // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.AtEqual_StrStr
struct UObject_AtEqual_StrStr_Params
{
	struct FString                                     A;                                                         // (Parm, OutParm, NeedCtorLink)
	struct FString                                     B;                                                         // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.ConcatEqual_StrStr
struct UObject_ConcatEqual_StrStr_Params
{
	struct FString                                     A;                                                         // (Parm, OutParm, NeedCtorLink)
	struct FString                                     B;                                                         // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.ComplementEqual_StrStr
struct UObject_ComplementEqual_StrStr_Params
{
	struct FString                                     A;                                                         // (Parm, NeedCtorLink)
	struct FString                                     B;                                                         // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_StrStr
struct UObject_NotEqual_StrStr_Params
{
	struct FString                                     A;                                                         // (Parm, NeedCtorLink)
	struct FString                                     B;                                                         // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_StrStr
struct UObject_EqualEqual_StrStr_Params
{
	struct FString                                     A;                                                         // (Parm, NeedCtorLink)
	struct FString                                     B;                                                         // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterEqual_StrStr
struct UObject_GreaterEqual_StrStr_Params
{
	struct FString                                     A;                                                         // (Parm, NeedCtorLink)
	struct FString                                     B;                                                         // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessEqual_StrStr
struct UObject_LessEqual_StrStr_Params
{
	struct FString                                     A;                                                         // (Parm, NeedCtorLink)
	struct FString                                     B;                                                         // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Greater_StrStr
struct UObject_Greater_StrStr_Params
{
	struct FString                                     A;                                                         // (Parm, NeedCtorLink)
	struct FString                                     B;                                                         // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Less_StrStr
struct UObject_Less_StrStr_Params
{
	struct FString                                     A;                                                         // (Parm, NeedCtorLink)
	struct FString                                     B;                                                         // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.At_StrStr
struct UObject_At_StrStr_Params
{
	struct FString                                     A;                                                         // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     B;                                                         // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Concat_StrStr
struct UObject_Concat_StrStr_Params
{
	struct FString                                     A;                                                         // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     B;                                                         // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.RotateRotator
struct UObject_RotateRotator_Params
{
	struct FVector                                     Axis;                                                      // (Parm)
	struct FRotator                                    Rot;                                                       // (Parm)
	struct FRotator                                    Direction;                                                 // (Parm)
	float                                              Amount;                                                    // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MakeQuat
struct UObject_MakeQuat_Params
{
	float                                              X;                                                         // (Parm)
	float                                              Y;                                                         // (Parm)
	float                                              Z;                                                         // (Parm)
	float                                              W;                                                         // (Parm)
	struct FQuat                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MakeRotator
struct UObject_MakeRotator_Params
{
	int                                                Pitch;                                                     // (Parm)
	int                                                Yaw;                                                       // (Parm)
	int                                                Roll;                                                      // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SClampRotAxis
struct UObject_SClampRotAxis_Params
{
	float                                              DeltaTime;                                                 // (Parm)
	int                                                ViewAxis;                                                  // (Parm)
	int                                                out_DeltaViewAxis;                                         // (Parm, OutParm)
	int                                                MaxLimit;                                                  // (Parm)
	int                                                MinLimit;                                                  // (Parm)
	float                                              InterpolationSpeed;                                        // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ClampRotAxisFromRange
struct UObject_ClampRotAxisFromRange_Params
{
	int                                                Current;                                                   // (Parm)
	int                                                Min;                                                       // (Parm)
	int                                                Max;                                                       // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ClampRotAxisFromBase
struct UObject_ClampRotAxisFromBase_Params
{
	int                                                Current;                                                   // (Parm)
	int                                                Center;                                                    // (Parm)
	int                                                MaxDelta;                                                  // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ClampRotAxis
struct UObject_ClampRotAxis_Params
{
	int                                                ViewAxis;                                                  // (Parm)
	int                                                out_DeltaViewAxis;                                         // (Parm, OutParm)
	int                                                MaxLimit;                                                  // (Parm)
	int                                                MinLimit;                                                  // (Parm)
};

// Function Core.Object.FlattenRotatorOnAxis
struct UObject_FlattenRotatorOnAxis_Params
{
	struct FVector                                     AxisToRemove;                                              // (Parm)
	struct FRotator                                    RotToFlatten;                                              // (Parm)
	struct FRotator                                    RotToFlattenTo;                                            // (OptionalParm, Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RSize
struct UObject_RSize_Params
{
	struct FRotator                                    R;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RDiff
struct UObject_RDiff_Params
{
	struct FRotator                                    A;                                                         // (Parm)
	struct FRotator                                    B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NormalizeRotAxis
struct UObject_NormalizeRotAxis_Params
{
	int                                                Angle;                                                     // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RInterpTo
struct UObject_RInterpTo_Params
{
	struct FRotator                                    Current;                                                   // (Parm)
	struct FRotator                                    Target;                                                    // (Parm)
	float                                              DeltaTime;                                                 // (Parm)
	float                                              InterpSpeed;                                               // (Parm)
	bool                                               bConstantInterpSpeed;                                      // (OptionalParm, Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RTransform
struct UObject_RTransform_Params
{
	struct FRotator                                    R;                                                         // (Parm)
	struct FRotator                                    RBasis;                                                    // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RLerp
struct UObject_RLerp_Params
{
	struct FRotator                                    A;                                                         // (Parm)
	struct FRotator                                    B;                                                         // (Parm)
	float                                              Alpha;                                                     // (Parm)
	bool                                               bShortestPath;                                             // (OptionalParm, Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Normalize
struct UObject_Normalize_Params
{
	struct FRotator                                    Rot;                                                       // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.OrthoRotation
struct UObject_OrthoRotation_Params
{
	struct FVector                                     X;                                                         // (Parm)
	struct FVector                                     Y;                                                         // (Parm)
	struct FVector                                     Z;                                                         // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RotRand
struct UObject_RotRand_Params
{
	bool                                               bRoll;                                                     // (OptionalParm, Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetRotatorAxis
struct UObject_GetRotatorAxis_Params
{
	struct FRotator                                    A;                                                         // (Parm)
	int                                                Axis;                                                      // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetUnAxes
struct UObject_GetUnAxes_Params
{
	struct FRotator                                    A;                                                         // (Parm)
	struct FVector                                     X;                                                         // (Parm, OutParm)
	struct FVector                                     Y;                                                         // (Parm, OutParm)
	struct FVector                                     Z;                                                         // (Parm, OutParm)
};

// Function Core.Object.GetAxes
struct UObject_GetAxes_Params
{
	struct FRotator                                    A;                                                         // (Parm)
	struct FVector                                     X;                                                         // (Parm, OutParm)
	struct FVector                                     Y;                                                         // (Parm, OutParm)
	struct FVector                                     Z;                                                         // (Parm, OutParm)
};

// Function Core.Object.ClockwiseFrom_IntInt
struct UObject_ClockwiseFrom_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_RotatorRotator
struct UObject_SubtractEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                         // (Parm, OutParm)
	struct FRotator                                    B;                                                         // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_RotatorRotator
struct UObject_AddEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                         // (Parm, OutParm)
	struct FRotator                                    B;                                                         // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_RotatorRotator
struct UObject_Subtract_RotatorRotator_Params
{
	struct FRotator                                    A;                                                         // (Parm)
	struct FRotator                                    B;                                                         // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_RotatorRotator
struct UObject_Add_RotatorRotator_Params
{
	struct FRotator                                    A;                                                         // (Parm)
	struct FRotator                                    B;                                                         // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DivideEqual_RotatorFloat
struct UObject_DivideEqual_RotatorFloat_Params
{
	struct FRotator                                    A;                                                         // (Parm, OutParm)
	float                                              B;                                                         // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_RotatorFloat
struct UObject_MultiplyEqual_RotatorFloat_Params
{
	struct FRotator                                    A;                                                         // (Parm, OutParm)
	float                                              B;                                                         // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Divide_RotatorFloat
struct UObject_Divide_RotatorFloat_Params
{
	struct FRotator                                    A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_FloatRotator
struct UObject_Multiply_FloatRotator_Params
{
	float                                              A;                                                         // (Parm)
	struct FRotator                                    B;                                                         // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_RotatorFloat
struct UObject_Multiply_RotatorFloat_Params
{
	struct FRotator                                    A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_RotatorRotator
struct UObject_NotEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                         // (Parm)
	struct FRotator                                    B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_RotatorRotator
struct UObject_EqualEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                         // (Parm)
	struct FRotator                                    B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetRadiansBetweenVectors
struct UObject_GetRadiansBetweenVectors_Params
{
	struct FVector                                     V0;                                                        // (Parm)
	struct FVector                                     v1;                                                        // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VClamp
struct UObject_VClamp_Params
{
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     Min;                                                       // (Parm)
	struct FVector                                     Max;                                                       // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.vect3d
struct UObject_vect3d_Params
{
	float                                              X;                                                         // (Parm)
	float                                              Y;                                                         // (Parm)
	float                                              Z;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.InCylinder
struct UObject_InCylinder_Params
{
	struct FVector                                     Origin;                                                    // (Parm)
	struct FRotator                                    Dir;                                                       // (Parm)
	float                                              Width;                                                     // (Parm)
	struct FVector                                     A;                                                         // (Parm)
	bool                                               bIgnoreZ;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NoZDot
struct UObject_NoZDot_Params
{
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ClampLength
struct UObject_ClampLength_Params
{
	struct FVector                                     V;                                                         // (Parm)
	float                                              MaxLength;                                                 // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VInterpConstantTo
struct UObject_VInterpConstantTo_Params
{
	struct FVector                                     Current;                                                   // (Parm)
	struct FVector                                     Target;                                                    // (Parm)
	float                                              DeltaTime;                                                 // (Parm)
	float                                              InterpSpeed;                                               // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VInterpTo
struct UObject_VInterpTo_Params
{
	struct FVector                                     Current;                                                   // (Parm)
	struct FVector                                     Target;                                                    // (Parm)
	float                                              DeltaTime;                                                 // (Parm)
	float                                              InterpSpeed;                                               // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Construct
struct UObject_Construct_Params
{
};

// Function Core.Object.ProjectOnToPlane
struct UObject_ProjectOnToPlane_Params
{
	struct FVector                                     InVector;                                                  // (Parm)
	struct FVector                                     InNormal;                                                  // (Parm)
	float                                              OverBounce;                                                // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.IsZero
struct UObject_IsZero_Params
{
	struct FVector                                     A;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ProjectOnTo
struct UObject_ProjectOnTo_Params
{
	struct FVector                                     X;                                                         // (Parm)
	struct FVector                                     Y;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MirrorVectorByNormal
struct UObject_MirrorVectorByNormal_Params
{
	struct FVector                                     InVect;                                                    // (Parm)
	struct FVector                                     InNormal;                                                  // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VRandCone2
struct UObject_VRandCone2_Params
{
	struct FVector                                     Dir;                                                       // (Parm)
	float                                              HorizontalConeHalfAngleRadians;                            // (Parm)
	float                                              VerticalConeHalfAngleRadians;                              // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VRandCone
struct UObject_VRandCone_Params
{
	struct FVector                                     Dir;                                                       // (Parm)
	float                                              ConeHalfAngleRadians;                                      // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VRand
struct UObject_VRand_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VLerp
struct UObject_VLerp_Params
{
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     B;                                                         // (Parm)
	float                                              Alpha;                                                     // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Normal2D
struct UObject_Normal2D_Params
{
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Normal
struct UObject_Normal_Params
{
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VSizeSq2D
struct UObject_VSizeSq2D_Params
{
	struct FVector                                     A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VSizeSq
struct UObject_VSizeSq_Params
{
	struct FVector                                     A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VSize2D
struct UObject_VSize2D_Params
{
	struct FVector                                     A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VSize
struct UObject_VSize_Params
{
	struct FVector                                     A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_VectorVector
struct UObject_SubtractEqual_VectorVector_Params
{
	struct FVector                                     A;                                                         // (Parm, OutParm)
	struct FVector                                     B;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_VectorVector
struct UObject_AddEqual_VectorVector_Params
{
	struct FVector                                     A;                                                         // (Parm, OutParm)
	struct FVector                                     B;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DivideEqual_VectorFloat
struct UObject_DivideEqual_VectorFloat_Params
{
	struct FVector                                     A;                                                         // (Parm, OutParm)
	float                                              B;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_VectorVector
struct UObject_MultiplyEqual_VectorVector_Params
{
	struct FVector                                     A;                                                         // (Parm, OutParm)
	struct FVector                                     B;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_VectorFloat
struct UObject_MultiplyEqual_VectorFloat_Params
{
	struct FVector                                     A;                                                         // (Parm, OutParm)
	float                                              B;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Cross_VectorVector
struct UObject_Cross_VectorVector_Params
{
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     B;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Dot_VectorVector
struct UObject_Dot_VectorVector_Params
{
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_VectorVector
struct UObject_NotEqual_VectorVector_Params
{
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_VectorVector
struct UObject_EqualEqual_VectorVector_Params
{
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterGreater_VectorRotator
struct UObject_GreaterGreater_VectorRotator_Params
{
	struct FVector                                     A;                                                         // (Parm)
	struct FRotator                                    B;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessLess_VectorRotator
struct UObject_LessLess_VectorRotator_Params
{
	struct FVector                                     A;                                                         // (Parm)
	struct FRotator                                    B;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_VectorVector
struct UObject_Subtract_VectorVector_Params
{
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     B;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_VectorVector
struct UObject_Add_VectorVector_Params
{
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     B;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Divide_VectorFloat
struct UObject_Divide_VectorFloat_Params
{
	struct FVector                                     A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_VectorVector
struct UObject_Multiply_VectorVector_Params
{
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     B;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_FloatVector
struct UObject_Multiply_FloatVector_Params
{
	float                                              A;                                                         // (Parm)
	struct FVector                                     B;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_VectorFloat
struct UObject_Multiply_VectorFloat_Params
{
	struct FVector                                     A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_PreVector
struct UObject_Subtract_PreVector_Params
{
	struct FVector                                     A;                                                         // (Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FInterpConstantTo
struct UObject_FInterpConstantTo_Params
{
	float                                              Current;                                                   // (Parm)
	float                                              Target;                                                    // (Parm)
	float                                              DeltaTime;                                                 // (Parm)
	float                                              InterpSpeed;                                               // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FInterpTo
struct UObject_FInterpTo_Params
{
	float                                              Current;                                                   // (Parm)
	float                                              Target;                                                    // (Parm)
	float                                              DeltaTime;                                                 // (Parm)
	float                                              InterpSpeed;                                               // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FPctByRange
struct UObject_FPctByRange_Params
{
	float                                              Value;                                                     // (Parm)
	float                                              InMin;                                                     // (Parm)
	float                                              InMax;                                                     // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RandSign
struct UObject_RandSign_Params
{
	float                                              Value;                                                     // (OptionalParm, Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.CalculateGravityPosition
struct UObject_CalculateGravityPosition_Params
{
	struct FVector                                     Location;                                                  // (Parm)
	struct FVector                                     Velocity;                                                  // (Parm)
	float                                              Gravity;                                                   // (Parm)
	float                                              Time;                                                      // (Parm)
	struct FVector                                     GravityDirection;                                          // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RandRange
struct UObject_RandRange_Params
{
	float                                              InMin;                                                     // (Parm)
	float                                              InMax;                                                     // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FInterpEaseInOut
struct UObject_FInterpEaseInOut_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	float                                              Alpha;                                                     // (Parm)
	float                                              Exp;                                                       // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FInterpEaseOut
struct UObject_FInterpEaseOut_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	float                                              Alpha;                                                     // (Parm)
	float                                              Exp;                                                       // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FInterpEaseIn
struct UObject_FInterpEaseIn_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	float                                              Alpha;                                                     // (Parm)
	float                                              Exp;                                                       // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FCubicInterp
struct UObject_FCubicInterp_Params
{
	float                                              P0;                                                        // (Parm)
	float                                              T0;                                                        // (Parm)
	float                                              P1;                                                        // (Parm)
	float                                              T1;                                                        // (Parm)
	float                                              A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FloorLog2
struct UObject_FloorLog2_Params
{
	int                                                Value;                                                     // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FCeil
struct UObject_FCeil_Params
{
	float                                              A;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FFloor
struct UObject_FFloor_Params
{
	float                                              A;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Round
struct UObject_Round_Params
{
	float                                              A;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Lerp
struct UObject_Lerp_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	float                                              Alpha;                                                     // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FClamp
struct UObject_FClamp_Params
{
	float                                              V;                                                         // (Parm)
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FMax
struct UObject_FMax_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FMin
struct UObject_FMin_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FRand
struct UObject_FRand_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Square
struct UObject_Square_Params
{
	float                                              A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Sqrt
struct UObject_Sqrt_Params
{
	float                                              A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Loge
struct UObject_Loge_Params
{
	float                                              A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Exp
struct UObject_Exp_Params
{
	float                                              A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Atan2
struct UObject_Atan2_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Atan
struct UObject_Atan_Params
{
	float                                              A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Tan
struct UObject_Tan_Params
{
	float                                              A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Acos
struct UObject_Acos_Params
{
	float                                              A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Cos
struct UObject_Cos_Params
{
	float                                              A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Asin
struct UObject_Asin_Params
{
	float                                              A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Sin
struct UObject_Sin_Params
{
	float                                              A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Abs
struct UObject_Abs_Params
{
	float                                              A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_FloatFloat
struct UObject_SubtractEqual_FloatFloat_Params
{
	float                                              A;                                                         // (Parm, OutParm)
	float                                              B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_FloatFloat
struct UObject_AddEqual_FloatFloat_Params
{
	float                                              A;                                                         // (Parm, OutParm)
	float                                              B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DivideEqual_FloatFloat
struct UObject_DivideEqual_FloatFloat_Params
{
	float                                              A;                                                         // (Parm, OutParm)
	float                                              B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_FloatFloat
struct UObject_MultiplyEqual_FloatFloat_Params
{
	float                                              A;                                                         // (Parm, OutParm)
	float                                              B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_FloatFloat
struct UObject_NotEqual_FloatFloat_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ComplementEqual_FloatFloat
struct UObject_ComplementEqual_FloatFloat_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_FloatFloat
struct UObject_EqualEqual_FloatFloat_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterEqual_FloatFloat
struct UObject_GreaterEqual_FloatFloat_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessEqual_FloatFloat
struct UObject_LessEqual_FloatFloat_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Greater_FloatFloat
struct UObject_Greater_FloatFloat_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Less_FloatFloat
struct UObject_Less_FloatFloat_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_FloatFloat
struct UObject_Subtract_FloatFloat_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_FloatFloat
struct UObject_Add_FloatFloat_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Percent_FloatFloat
struct UObject_Percent_FloatFloat_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Divide_FloatFloat
struct UObject_Divide_FloatFloat_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_FloatFloat
struct UObject_Multiply_FloatFloat_Params
{
	float                                              A;                                                         // (Parm)
	float                                              B;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyMultiply_FloatFloat
struct UObject_MultiplyMultiply_FloatFloat_Params
{
	float                                              Base;                                                      // (Parm)
	float                                              Exp;                                                       // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_PreFloat
struct UObject_Subtract_PreFloat_Params
{
	float                                              A;                                                         // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ToHex
struct UObject_ToHex_Params
{
	int                                                A;                                                         // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Clamp
struct UObject_Clamp_Params
{
	int                                                V;                                                         // (Parm)
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Max
struct UObject_Max_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Min
struct UObject_Min_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Rand
struct UObject_Rand_Params
{
	int                                                Max;                                                       // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FromHexColor
struct UObject_FromHexColor_Params
{
	struct FString                                     Hex;                                                       // (Parm, NeedCtorLink)
	struct FColor                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FromHex
struct UObject_FromHex_Params
{
	struct FString                                     Hex;                                                       // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QMin
struct UObject_QMin_Params
{
};

// Function Core.Object.QMax
struct UObject_QMax_Params
{
};

// Function Core.Object.QSubtract
struct UObject_QSubtract_Params
{
};

// Function Core.Object.NotEqual_QWordInt
struct UObject_NotEqual_QWordInt_Params
{
	int                                                B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_QWordInt
struct UObject_EqualEqual_QWordInt_Params
{
	int                                                B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_QWordQWord
struct UObject_NotEqual_QWordQWord_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_QWordQWord
struct UObject_EqualEqual_QWordQWord_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterEqual_QWordQWord
struct UObject_GreaterEqual_QWordQWord_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessEqual_QWordQWord
struct UObject_LessEqual_QWordQWord_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Greater_QWordQWord
struct UObject_Greater_QWordQWord_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Less_QWordQWord
struct UObject_Less_QWordQWord_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_QWordQWord
struct UObject_Subtract_QWordQWord_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_QWordQWord
struct UObject_Add_QWordQWord_Params
{
};

// Function Core.Object.SubtractSubtract_Int
struct UObject_SubtractSubtract_Int_Params
{
	int                                                A;                                                         // (Parm, OutParm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddAdd_Int
struct UObject_AddAdd_Int_Params
{
	int                                                A;                                                         // (Parm, OutParm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractSubtract_PreInt
struct UObject_SubtractSubtract_PreInt_Params
{
	int                                                A;                                                         // (Parm, OutParm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddAdd_PreInt
struct UObject_AddAdd_PreInt_Params
{
	int                                                A;                                                         // (Parm, OutParm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_IntInt
struct UObject_SubtractEqual_IntInt_Params
{
	int                                                A;                                                         // (Parm, OutParm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_IntInt
struct UObject_AddEqual_IntInt_Params
{
	int                                                A;                                                         // (Parm, OutParm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DivideEqual_IntFloat
struct UObject_DivideEqual_IntFloat_Params
{
	int                                                A;                                                         // (Parm, OutParm)
	float                                              B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_IntFloat
struct UObject_MultiplyEqual_IntFloat_Params
{
	int                                                A;                                                         // (Parm, OutParm)
	float                                              B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Or_IntInt
struct UObject_Or_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Xor_IntInt
struct UObject_Xor_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.And_IntInt
struct UObject_And_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_IntInt
struct UObject_NotEqual_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_IntInt
struct UObject_EqualEqual_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterEqual_IntInt
struct UObject_GreaterEqual_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessEqual_IntInt
struct UObject_LessEqual_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Greater_IntInt
struct UObject_Greater_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Less_IntInt
struct UObject_Less_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterGreaterGreater_IntInt
struct UObject_GreaterGreaterGreater_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterGreater_IntInt
struct UObject_GreaterGreater_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessLess_IntInt
struct UObject_LessLess_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_IntInt
struct UObject_Subtract_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_IntInt
struct UObject_Add_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Percent_IntInt
struct UObject_Percent_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Divide_IntInt
struct UObject_Divide_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_IntInt
struct UObject_Multiply_IntInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                B;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_PreInt
struct UObject_Subtract_PreInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Complement_PreInt
struct UObject_Complement_PreInt_Params
{
	int                                                A;                                                         // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractSubtract_Byte
struct UObject_SubtractSubtract_Byte_Params
{
	unsigned char                                      A;                                                         // (Parm, OutParm)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddAdd_Byte
struct UObject_AddAdd_Byte_Params
{
	unsigned char                                      A;                                                         // (Parm, OutParm)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractSubtract_PreByte
struct UObject_SubtractSubtract_PreByte_Params
{
	unsigned char                                      A;                                                         // (Parm, OutParm)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddAdd_PreByte
struct UObject_AddAdd_PreByte_Params
{
	unsigned char                                      A;                                                         // (Parm, OutParm)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_ByteByte
struct UObject_SubtractEqual_ByteByte_Params
{
	unsigned char                                      A;                                                         // (Parm, OutParm)
	unsigned char                                      B;                                                         // (Parm)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_ByteByte
struct UObject_AddEqual_ByteByte_Params
{
	unsigned char                                      A;                                                         // (Parm, OutParm)
	unsigned char                                      B;                                                         // (Parm)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DivideEqual_ByteByte
struct UObject_DivideEqual_ByteByte_Params
{
	unsigned char                                      A;                                                         // (Parm, OutParm)
	unsigned char                                      B;                                                         // (Parm)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_ByteFloat
struct UObject_MultiplyEqual_ByteFloat_Params
{
	unsigned char                                      A;                                                         // (Parm, OutParm)
	float                                              B;                                                         // (Parm)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_ByteByte
struct UObject_MultiplyEqual_ByteByte_Params
{
	unsigned char                                      A;                                                         // (Parm, OutParm)
	unsigned char                                      B;                                                         // (Parm)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.OrOr_BoolBool
struct UObject_OrOr_BoolBool_Params
{
	bool                                               A;                                                         // (Parm)
	bool                                               B;                                                         // (Parm, SkipParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.XorXor_BoolBool
struct UObject_XorXor_BoolBool_Params
{
	bool                                               A;                                                         // (Parm)
	bool                                               B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AndAnd_BoolBool
struct UObject_AndAnd_BoolBool_Params
{
	bool                                               A;                                                         // (Parm)
	bool                                               B;                                                         // (Parm, SkipParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_BoolBool
struct UObject_NotEqual_BoolBool_Params
{
	bool                                               A;                                                         // (Parm)
	bool                                               B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_BoolBool
struct UObject_EqualEqual_BoolBool_Params
{
	bool                                               A;                                                         // (Parm)
	bool                                               B;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Not_PreBool
struct UObject_Not_PreBool_Params
{
	bool                                               A;                                                         // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.DistributionFloat.GetFloatValue
struct UDistributionFloat_GetFloatValue_Params
{
	float                                              F;                                                         // (OptionalParm, Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.UTF8.DecodeInline
struct UUTF8_DecodeInline_Params
{
	TArray<unsigned char>                              Input;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     Output;                                                    // (Parm, OutParm, NeedCtorLink)
};

// Function Core.UTF8.Decode
struct UUTF8_Decode_Params
{
	TArray<unsigned char>                              Input;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.UTF8.EncodeInline
struct UUTF8_EncodeInline_Params
{
	struct FString                                     Input;                                                     // (Parm, NeedCtorLink)
	TArray<unsigned char>                              Output;                                                    // (Parm, OutParm, NeedCtorLink)
};

// Function Core.UTF8.Encode
struct UUTF8_Encode_Params
{
	struct FString                                     Input;                                                     // (Parm, NeedCtorLink)
	TArray<unsigned char>                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.AsyncTask.QueCallbacks
struct UAsyncTask_QueCallbacks_Params
{
};

// Function Core.AsyncTask.CreateError
struct UAsyncTask_CreateError_Params
{
	class UError*                                      InError;                                                   // (Parm)
	class UAsyncTask*                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.AsyncTask.CreateSuccess
struct UAsyncTask_CreateSuccess_Params
{
	class UAsyncTask*                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.AsyncTask.Create
struct UAsyncTask_Create_Params
{
	class UAsyncTask*                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.AsyncTask.All
struct UAsyncTask_All_Params
{
	TArray<class UAsyncTask*>                          Dependents;                                                // (Parm, NeedCtorLink)
	class UAsyncTask*                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.AsyncTask.DependOn
struct UAsyncTask_DependOn_Params
{
	class UAsyncTask*                                  Other;                                                     // (Parm)
	class UAsyncTask*                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.AsyncTask.NotifyOnDispose
struct UAsyncTask_NotifyOnDispose_Params
{
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
	class UAsyncTask*                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.AsyncTask.ClearCallbacks
struct UAsyncTask_ClearCallbacks_Params
{
};

// Function Core.AsyncTask.Dispose
struct UAsyncTask_Dispose_Params
{
};

// Function Core.AsyncTask.SetComplete
struct UAsyncTask_SetComplete_Params
{
	class UError*                                      InError;                                                   // (OptionalParm, Parm)
};

// Function Core.AsyncTask.SetError
struct UAsyncTask_SetError_Params
{
	class UError*                                      InError;                                                   // (Parm)
};

// Function Core.AsyncTask.NotifyOnComplete
struct UAsyncTask_NotifyOnComplete_Params
{
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
	class UAsyncTask*                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.AsyncTask.NotifyOnFail
struct UAsyncTask_NotifyOnFail_Params
{
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
	class UAsyncTask*                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.AsyncTask.NotifyOnSuccess
struct UAsyncTask_NotifyOnSuccess_Params
{
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
	class UAsyncTask*                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.AsyncTask.EventDisposed
struct UAsyncTask_EventDisposed_Params
{
};

// Function Core.AsyncTask.EventAsyncTaskComplete
struct UAsyncTask_EventAsyncTaskComplete_Params
{
	class UError*                                      TaskError;                                                 // (Parm)
};

// Function Core.AsyncTask.EventAsyncTaskFail
struct UAsyncTask_EventAsyncTaskFail_Params
{
	class UError*                                      TaskError;                                                 // (Parm)
};

// Function Core.AsyncTask.EventAsyncTaskSuccess
struct UAsyncTask_EventAsyncTaskSuccess_Params
{
};

// Function Core.DistributionVector.GetVectorValue
struct UDistributionVector_GetVectorValue_Params
{
	float                                              F;                                                         // (OptionalParm, Parm)
	int                                                LastExtreme;                                               // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Subscription.__Subscription__TriggerAll_2026362E4CC3F678790172BAD7A37655
struct USubscription___Subscription__TriggerAll_2026362E4CC3F678790172BAD7A37655_Params
{
	class USubscription*                               S;                                                         // (Parm)
};

// Function Core.Subscription.GetNone
struct USubscription_GetNone_Params
{
	class USubscription*                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Subscription.TriggerAll
struct USubscription_TriggerAll_Params
{
	TArray<class USubscription*>                       Subscriptions;                                             // (Const, Parm, OutParm, NeedCtorLink)
};

// Function Core.Subscription.Create
struct USubscription_Create_Params
{
	struct FScriptDelegate                             InCallback;                                                // (Parm, NeedCtorLink)
	class USubscription*                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Subscription.Dispose
struct USubscription_Dispose_Params
{
};

// Function Core.Subscription.TriggerCallback
struct USubscription_TriggerCallback_Params
{
};

// Function Core.Subscription.SetCallback
struct USubscription_SetCallback_Params
{
	struct FScriptDelegate                             InCallback;                                                // (Parm, NeedCtorLink)
};

// Function Core.Subscription.SubscriberCallback
struct USubscription_SubscriberCallback_Params
{
};

// Function Core.DelegateTracker.RemoveDelegate
struct UDelegateTracker_RemoveDelegate_Params
{
	int                                                CallbackId;                                                // (Parm)
	struct FScriptDelegate                             ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.DelegateTracker.AddDelegate
struct UDelegateTracker_AddDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.DelegateTracker.PlaceholderDelegate
struct UDelegateTracker_PlaceholderDelegate_Params
{
};

// Function Core.ObjectUtil.IdenticalDeep
struct UObjectUtil_IdenticalDeep_Params
{
	class UObject*                                     Left;                                                      // (Parm)
	class UObject*                                     Right;                                                     // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.ObjectUtil.Identical
struct UObjectUtil_Identical_Params
{
	class UObject*                                     Left;                                                      // (Parm)
	class UObject*                                     Right;                                                     // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.ObjectUtil.InitProperties
struct UObjectUtil_InitProperties_Params
{
	class UObject*                                     InObject;                                                  // (Parm)
};

// Function Core.ObjectUtil.AllCDOs
struct UObjectUtil_AllCDOs_Params
{
	class UClass*                                      BaseClass;                                                 // (Parm)
	class UObject*                                     OutCDO;                                                    // (Parm, OutParm)
	bool                                               bIncludeAbstract;                                          // (OptionalParm, Parm)
};

// Function Core.ObjectUtil.GetCDO
struct UObjectUtil_GetCDO_Params
{
	class UClass*                                      InClass;                                                   // (Parm)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, CoerceParm)
};

// Function Core.FileSystem.CloseLogFile
struct UFileSystem_CloseLogFile_Params
{
};

// Function Core.FileSystem.GetLogFileName
struct UFileSystem_GetLogFileName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.FileSystem.DeleteDirectoryTree
struct UFileSystem_DeleteDirectoryTree_Params
{
	struct FString                                     Path;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.FileSystem.DeleteFile
struct UFileSystem_DeleteFile_Params
{
	struct FString                                     Path;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.FileSystem.AppendStringToFile
struct UFileSystem_AppendStringToFile_Params
{
	struct FString                                     Path;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.FileSystem.SaveStringToFile
struct UFileSystem_SaveStringToFile_Params
{
	struct FString                                     Path;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.FileSystem.SaveBytesToFile
struct UFileSystem_SaveBytesToFile_Params
{
	struct FString                                     Path;                                                      // (Parm, NeedCtorLink)
	TArray<unsigned char>                              Bytes;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.FileSystem.LoadFileToBytes
struct UFileSystem_LoadFileToBytes_Params
{
	struct FString                                     Path;                                                      // (Parm, NeedCtorLink)
	TArray<unsigned char>                              OutBytes;                                                  // (Parm, OutParm, NeedCtorLink)
	int                                                StartOffset;                                               // (OptionalParm, Parm)
	int                                                Length;                                                    // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.FileSystem.LoadFileToString
struct UFileSystem_LoadFileToString_Params
{
	struct FString                                     Path;                                                      // (Parm, NeedCtorLink)
	struct FString                                     OutText;                                                   // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.FileSystem.GetFileSize
struct UFileSystem_GetFileSize_Params
{
	struct FString                                     Path;                                                      // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.FileSystem.GetFileExtensionWithoutDot
struct UFileSystem_GetFileExtensionWithoutDot_Params
{
	struct FString                                     Path;                                                      // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.FileSystem.GetFileExtension
struct UFileSystem_GetFileExtension_Params
{
	struct FString                                     Path;                                                      // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.FileSystem.GetFilePathWithoutExtension
struct UFileSystem_GetFilePathWithoutExtension_Params
{
	struct FString                                     Path;                                                      // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.FileSystem.GetFileNameWithoutExtension
struct UFileSystem_GetFileNameWithoutExtension_Params
{
	struct FString                                     Path;                                                      // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.FileSystem.GetFilename
struct UFileSystem_GetFilename_Params
{
	struct FString                                     Path;                                                      // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.FileSystem.FindFiles
struct UFileSystem_FindFiles_Params
{
	struct FString                                     Path;                                                      // (Parm, NeedCtorLink)
	TArray<struct FString>                             OutFilenames;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function Core._LoggingDoc.TestSpecialLogging
struct U_LoggingDoc_TestSpecialLogging_Params
{
};

// Function Core.ObjectProvider.SetParent
struct UObjectProvider_SetParent_Params
{
	class UObjectProvider*                             InParent;                                                  // (Parm, EditInline)
};

// Function Core.ObjectProvider.RemoveProxy
struct UObjectProvider_RemoveProxy_Params
{
	class UObjectProvider*                             InProxy;                                                   // (Parm, EditInline)
};

// Function Core.ObjectProvider.AddProxy
struct UObjectProvider_AddProxy_Params
{
	class UObjectProvider*                             InProxy;                                                   // (Parm, EditInline)
};

// Function Core.ObjectProvider.SetSingleton
struct UObjectProvider_SetSingleton_Params
{
	class UClass*                                      ObjClass;                                                  // (Parm)
	class UObject*                                     Replacement;                                               // (Parm)
};

// Function Core.ObjectProvider.Replace
struct UObjectProvider_Replace_Params
{
	class UObject*                                     Existing;                                                  // (Parm)
	class UObject*                                     Replacement;                                               // (Parm)
};

// Function Core.ObjectProvider.AddAndRemoveObjects
struct UObjectProvider_AddAndRemoveObjects_Params
{
	TArray<class UObject*>                             AddObjects;                                                // (Const, Parm, OutParm, NeedCtorLink)
	TArray<class UObject*>                             RemoveObjects;                                             // (Const, Parm, OutParm, NeedCtorLink)
};

// Function Core.ObjectProvider.RemoveObjects
struct UObjectProvider_RemoveObjects_Params
{
	TArray<class UObject*>                             InObjects;                                                 // (Const, Parm, OutParm, NeedCtorLink)
};

// Function Core.ObjectProvider.RemoveAllObjects
struct UObjectProvider_RemoveAllObjects_Params
{
	class UClass*                                      ObjectClass;                                               // (Parm)
};

// Function Core.ObjectProvider.RemoveObject
struct UObjectProvider_RemoveObject_Params
{
	class UObject*                                     Obj;                                                       // (Parm)
};

// Function Core.ObjectProvider.AddObjects
struct UObjectProvider_AddObjects_Params
{
	TArray<class UObject*>                             InObjects;                                                 // (Const, Parm, OutParm, NeedCtorLink)
};

// Function Core.ObjectProvider.AddObject
struct UObjectProvider_AddObject_Params
{
	class UObject*                                     Obj;                                                       // (Parm)
};

// Function Core.ObjectProvider.GetExactCount
struct UObjectProvider_GetExactCount_Params
{
	class UClass*                                      ObjClass;                                                  // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.ObjectProvider.GetCount
struct UObjectProvider_GetCount_Params
{
	class UClass*                                      ObjClass;                                                  // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.ObjectProvider.GetOrCreate
struct UObjectProvider_GetOrCreate_Params
{
	class UClass*                                      ObjClass;                                                  // (Parm)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, CoerceParm)
};

// Function Core.ObjectProvider.GetExact
struct UObjectProvider_GetExact_Params
{
	class UClass*                                      ObjClass;                                                  // (Parm)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, CoerceParm)
};

// Function Core.ObjectProvider.GetUnsafe
struct UObjectProvider_GetUnsafe_Params
{
	class UClass*                                      ObjClass;                                                  // (Parm)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, CoerceParm)
};

// Function Core.ObjectProvider.Get
struct UObjectProvider_Get_Params
{
	class UClass*                                      ObjClass;                                                  // (Parm)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, CoerceParm)
};

// Function Core.ObjectProvider.AllObjects
struct UObjectProvider_AllObjects_Params
{
	class UClass*                                      BaseClass;                                                 // (Parm)
	class UObject*                                     Obj;                                                       // (Parm, OutParm)
	class UClass*                                      InterfaceClass;                                            // (OptionalParm, Parm)
};

// Function Core.ObjectProvider.InjectDelayed
struct UObjectProvider_InjectDelayed_Params
{
	class UObject*                                     Subscriber;                                                // (Parm)
};

// Function Core.ObjectProvider.Inject
struct UObjectProvider_Inject_Params
{
	class UObject*                                     Subscriber;                                                // (Parm)
};

// Function Core.ObjectProvider.UnsubscribeAll
struct UObjectProvider_UnsubscribeAll_Params
{
	class UObject*                                     Subscriber;                                                // (Parm)
};

// Function Core.ObjectProvider.Unsubscribe
struct UObjectProvider_Unsubscribe_Params
{
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
	struct FScriptDelegate                             Callback2;                                                 // (OptionalParm, Parm, NeedCtorLink)
};

// Function Core.ObjectProvider.SubscribeList
struct UObjectProvider_SubscribeList_Params
{
	class UClass*                                      BaseClass;                                                 // (Parm)
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
};

// Function Core.ObjectProvider.SubscribeOnce
struct UObjectProvider_SubscribeOnce_Params
{
	class UClass*                                      BaseClass;                                                 // (Parm)
	struct FScriptDelegate                             OnAdd;                                                     // (OptionalParm, Parm, NeedCtorLink)
	struct FScriptDelegate                             OnRemove;                                                  // (OptionalParm, Parm, NeedCtorLink)
};

// Function Core.ObjectProvider.Subscribe
struct UObjectProvider_Subscribe_Params
{
	class UClass*                                      BaseClass;                                                 // (Parm)
	struct FScriptDelegate                             OnAdd;                                                     // (OptionalParm, Parm, NeedCtorLink)
	struct FScriptDelegate                             OnRemove;                                                  // (OptionalParm, Parm, NeedCtorLink)
};

// Function Core.ObjectProvider.ObjectChangeCallback
struct UObjectProvider_ObjectChangeCallback_Params
{
};

// Function Core.ObjectProvider.ObjectListSubscriptionCallback
struct UObjectProvider_ObjectListSubscriptionCallback_Params
{
	class UObjectProvider*                             Provider;                                                  // (Parm, EditInline)
};

// Function Core.ObjectProvider.ObjectSubscriptionCallback
struct UObjectProvider_ObjectSubscriptionCallback_Params
{
	class UObject*                                     Obj;                                                       // (Parm)
};

// Function Core.__AsyncTask__All_0F9C95204427B24A8DA4A0AAE792B682.__AsyncTask__All_0F9C95204427B24A8DA4A0AAE792B682
struct U__AsyncTask__All_0F9C95204427B24A8DA4A0AAE792B682___AsyncTask__All_0F9C95204427B24A8DA4A0AAE792B682_Params
{
};

// Function Core.IDisposable.Dispose
struct UIDisposable_Dispose_Params
{
};

// Function Core.ArrayFuncs.GetRandomElement
struct UArrayFuncs_GetRandomElement_Params
{
};

// Function Core.ArrayFuncs.ShuffleArray
struct UArrayFuncs_ShuffleArray_Params
{
};

// Function Core.ErrorType.CreateError
struct UErrorType_CreateError_Params
{
	struct FString                                     InErrorMessage;                                            // (OptionalParm, Parm, NeedCtorLink)
	int                                                InErrorCode;                                               // (OptionalParm, Parm)
	class UError*                                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.ErrorType.GetLocalizedMessage
struct UErrorType_GetLocalizedMessage_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.ErrorList.GetErrorType
struct UErrorList_GetErrorType_Params
{
	struct FName                                       Error;                                                     // (Parm)
	class UErrorType*                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Error.GetDebugMessage
struct UError_GetDebugMessage_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Error.GetLocalizedMessage
struct UError_GetLocalizedMessage_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.DebugDrawer.Reset
struct UDebugDrawer_Reset_Params
{
};

// Function Core.DebugDrawer.PrintText
struct UDebugDrawer_PrintText_Params
{
	struct FString                                     Text;                                                      // (Parm, CoerceParm, NeedCtorLink)
	struct FColor                                      InColor;                                                   // (OptionalParm, Parm)
};

// Function Core.DebugDrawer.PrintArrayProperty
struct UDebugDrawer_PrintArrayProperty_Params
{
	struct FString                                     PropertyName;                                              // (Parm, CoerceParm, NeedCtorLink)
	int                                                Index;                                                     // (Parm)
	struct FString                                     Value;                                                     // (Parm, CoerceParm, NeedCtorLink)
};

// Function Core.DebugDrawer.PrintProperty
struct UDebugDrawer_PrintProperty_Params
{
	struct FString                                     PropertyName;                                              // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     Value;                                                     // (Parm, CoerceParm, NeedCtorLink)
};

// Function Core.DebugDrawer.EndSection
struct UDebugDrawer_EndSection_Params
{
};

// Function Core.DebugDrawer.StartSection
struct UDebugDrawer_StartSection_Params
{
};

// Function Core.DebugDrawer.PrintObject
struct UDebugDrawer_PrintObject_Params
{
	struct FString                                     Title;                                                     // (Parm, CoerceParm, NeedCtorLink)
	class UObject*                                     ForObj;                                                    // (Parm)
};

// Function Core.DebugDrawer.PrintSeperater
struct UDebugDrawer_PrintSeperater_Params
{
};

// Function Core.DebugDrawer.DebugArrayObject
struct UDebugDrawer_DebugArrayObject_Params
{
	struct FString                                     Title;                                                     // (Parm, CoerceParm, NeedCtorLink)
	int                                                Index;                                                     // (Parm)
	class UObject*                                     ForObj;                                                    // (Parm)
};

// Function Core.DebugDrawer.DebugObject
struct UDebugDrawer_DebugObject_Params
{
	struct FString                                     Title;                                                     // (Parm, CoerceParm, NeedCtorLink)
	class UObject*                                     ForObj;                                                    // (Parm)
};

// Function Core.DebugDrawer.ShouldDisplayDebug
struct UDebugDrawer_ShouldDisplayDebug_Params
{
	struct FName                                       Category;                                                  // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.DebugDrawer.LogFunc
struct UDebugDrawer_LogFunc_Params
{
	struct FString                                     Str;                                                       // (Parm, CoerceParm, NeedCtorLink)
};

// Function Core.Compression.ZLibCompress
struct UCompression_ZLibCompress_Params
{
	TArray<unsigned char>                              Uncompressed;                                              // (Const, Parm, OutParm, NeedCtorLink)
	TArray<unsigned char>                              OutCompressed;                                             // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.StringObjectMap.Contains
struct UStringObjectMap_Contains_Params
{
	struct FString                                     Key;                                                       // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.StringObjectMap.Remove
struct UStringObjectMap_Remove_Params
{
	struct FString                                     Key;                                                       // (Parm, NeedCtorLink)
};

// Function Core.StringObjectMap.TryGetObject
struct UStringObjectMap_TryGetObject_Params
{
	struct FString                                     Key;                                                       // (Parm, NeedCtorLink)
	class UObject*                                     OutValue;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.StringObjectMap.TryGet
struct UStringObjectMap_TryGet_Params
{
};

// Function Core.StringObjectMap.GetObject
struct UStringObjectMap_GetObject_Params
{
	struct FString                                     Key;                                                       // (Parm, NeedCtorLink)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.StringObjectMap.Get
struct UStringObjectMap_Get_Params
{
};

// Function Core.StringObjectMap.Set
struct UStringObjectMap_Set_Params
{
	struct FString                                     Key;                                                       // (Parm, NeedCtorLink)
	class UObject*                                     Value;                                                     // (Parm)
};

// Function Core.StringMap.ForEach
struct UStringMap_ForEach_Params
{
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
};

// Function Core.StringMap.Append
struct UStringMap_Append_Params
{
	class UStringMap*                                  Other;                                                     // (Parm, EditInline)
};

// Function Core.StringMap.Contains
struct UStringMap_Contains_Params
{
	struct FString                                     Key;                                                       // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.StringMap.Remove
struct UStringMap_Remove_Params
{
	struct FString                                     Key;                                                       // (Parm, NeedCtorLink)
};

// Function Core.StringMap.TryGet
struct UStringMap_TryGet_Params
{
	struct FString                                     Key;                                                       // (Parm, NeedCtorLink)
	struct FString                                     OutValue;                                                  // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.StringMap.Get
struct UStringMap_Get_Params
{
	struct FString                                     Key;                                                       // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.StringMap.Set
struct UStringMap_Set_Params
{
	struct FString                                     Key;                                                       // (Parm, NeedCtorLink)
	struct FString                                     Value;                                                     // (Parm, CoerceParm, NeedCtorLink)
};

// Function Core.StringMap.PairCallback
struct UStringMap_PairCallback_Params
{
	struct FString                                     Key;                                                       // (Parm, NeedCtorLink)
	struct FString                                     Value;                                                     // (Parm, NeedCtorLink)
};

// Function Core.Commandlet.Main
struct UCommandlet_Main_Params
{
	struct FString                                     Params;                                                    // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.HelpCommandlet.Main
struct UHelpCommandlet_Main_Params
{
	struct FString                                     Params;                                                    // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Core.Base64.DecodeStringInline
struct UBase64_DecodeStringInline_Params
{
	struct FString                                     Input;                                                     // (Parm, NeedCtorLink)
	TArray<unsigned char>                              Output;                                                    // (Parm, OutParm, NeedCtorLink)
};

// Function Core.Base64.DecodeString
struct UBase64_DecodeString_Params
{
	struct FString                                     Input;                                                     // (Parm, NeedCtorLink)
	TArray<unsigned char>                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Base64.DecodeInline
struct UBase64_DecodeInline_Params
{
	TArray<unsigned char>                              Input;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	TArray<unsigned char>                              Output;                                                    // (Parm, OutParm, NeedCtorLink)
};

// Function Core.Base64.Decode
struct UBase64_Decode_Params
{
	TArray<unsigned char>                              Input;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	TArray<unsigned char>                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Base64.EncodeStringInline
struct UBase64_EncodeStringInline_Params
{
	TArray<unsigned char>                              Input;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     Output;                                                    // (Parm, OutParm, NeedCtorLink)
};

// Function Core.Base64.EncodeString
struct UBase64_EncodeString_Params
{
	TArray<unsigned char>                              Input;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Base64.EncodeInline
struct UBase64_EncodeInline_Params
{
	TArray<unsigned char>                              Input;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	TArray<unsigned char>                              Output;                                                    // (Parm, OutParm, NeedCtorLink)
};

// Function Core.Base64.Encode
struct UBase64_Encode_Params
{
	TArray<unsigned char>                              Input;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	TArray<unsigned char>                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
