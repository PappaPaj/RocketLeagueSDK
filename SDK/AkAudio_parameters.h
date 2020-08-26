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

// Function AkAudio.AkAmbientSoundActor.OnToggle
struct AAkAmbientSoundActor_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                    // (Parm)
};

// Function AkAudio.AkRevPhysicsSimulation.PrintDebugInfo
struct UAkRevPhysicsSimulation_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                    // (Parm)
};

// Function AkAudio.AkRevPhysicsSimulation.InterpGearRatio
struct UAkRevPhysicsSimulation_InterpGearRatio_Params
{
	struct FAkRevSimUpdateParams                       SimUpdate;                                                 // (Const, Parm, OutParm, NeedCtorLink)
	int                                                Gear;                                                      // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.GetGearRatio
struct UAkRevPhysicsSimulation_GetGearRatio_Params
{
	struct FAkRevSimUpdateParams                       SimUpdate;                                                 // (Const, Parm, OutParm, NeedCtorLink)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.CalcVelocity
struct UAkRevPhysicsSimulation_CalcVelocity_Params
{
	float                                              GearRatio;                                                 // (Parm)
	float                                              RPM;                                                       // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.CalcRPM
struct UAkRevPhysicsSimulation_CalcRPM_Params
{
	float                                              GearRatio;                                                 // (Parm)
	float                                              Velocity;                                                  // (Parm)
	float                                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.Step
struct UAkRevPhysicsSimulation_Step_Params
{
	float                                              DeltaTime;                                                 // (Parm)
	struct FAkRevSimUpdateParams                       Params;                                                    // (Const, Parm, OutParm, NeedCtorLink)
	struct FAkRevSimFrame                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.EventGearChange
struct UAkRevPhysicsSimulation_EventGearChange_Params
{
	class UAkRevPhysicsSimulation*                     Simulation;                                                // (Parm)
};

// Function AkAudio.AkBusActor.RegisterReflectionEmitter
struct AAkBusActor_RegisterReflectionEmitter_Params
{
	struct FName                                       BusName;                                                   // (Parm)
	TEnumAsByte<EBusEmitterType>                       BusType;                                                   // (Parm)
};

// Function AkAudio.AkBusActor.SetPinnedAxis
struct AAkBusActor_SetPinnedAxis_Params
{
	TEnumAsByte<EPinnedAxisType>                       AxisToPin;                                                 // (Parm)
};

// Function AkAudio.AkEnvironments.RemoveActorEnvironment
struct UAkEnvironments_RemoveActorEnvironment_Params
{
	class AActor*                                      TargetActor;                                               // (Parm)
	struct FString                                     EnvironmentID;                                             // (Const, Parm, OutParm, NeedCtorLink)
};

// Function AkAudio.AkEnvironments.AddActorEnvironment
struct UAkEnvironments_AddActorEnvironment_Params
{
	class AActor*                                      TargetActor;                                               // (Parm)
	struct FAkEnvironment                              Environment;                                               // (Const, Parm, OutParm, NeedCtorLink)
};

// Function AkAudio.AkEnvironments.AddLevelDefault
struct UAkEnvironments_AddLevelDefault_Params
{
	struct FAkEnvironment                              Environment;                                               // (Const, Parm, OutParm, NeedCtorLink)
};

// Function AkAudio.SeqAct_AkPlayMusicWithCues.TriggerEvents
struct USeqAct_AkPlayMusicWithCues_TriggerEvents_Params
{
	struct FString                                     CueName;                                                   // (Parm, NeedCtorLink)
};

// Function AkAudio.AkSoundSource.SetSubtitlesEnabled
struct UAkSoundSource_SetSubtitlesEnabled_Params
{
	bool                                               bValue;                                                    // (Parm)
};

// Function AkAudio.AkSoundSource.SetAttenuationScaling
struct UAkSoundSource_SetAttenuationScaling_Params
{
	TEnumAsByte<EAttenuationType>                      AttenuationType;                                           // (Parm)
};

// Function AkAudio.AkSoundSource.ForceUpdatePosition
struct UAkSoundSource_ForceUpdatePosition_Params
{
};

// Function AkAudio.AkSoundSource.RegisterReflectionEmitter
struct UAkSoundSource_RegisterReflectionEmitter_Params
{
	struct FName                                       BusName;                                                   // (Parm)
	TEnumAsByte<EBusEmitterType>                       BusType;                                                   // (Parm)
};

// Function AkAudio.AkSoundSource.IsPlayingAny
struct UAkSoundSource_IsPlayingAny_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AkAudio.AkSoundSource.IsPlaying
struct UAkSoundSource_IsPlaying_Params
{
	class UAkSoundCue*                                 Sound;                                                     // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AkAudio.AkSoundSource.StopAll
struct UAkSoundSource_StopAll_Params
{
};

// Function AkAudio.AkSoundSource.Stop
struct UAkSoundSource_Stop_Params
{
	class UAkSoundCue*                                 Sound;                                                     // (Parm)
};

// Function AkAudio.AkSoundSource.Play
struct UAkSoundSource_Play_Params
{
	class UAkSoundCue*                                 Sound;                                                     // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AkAudio.AkSoundSource.EventDuration
struct UAkSoundSource_EventDuration_Params
{
	class UAkSoundSource*                              Source;                                                    // (Parm, EditInline)
	int                                                PlayingID;                                                 // (Parm)
	float                                              DurationMS;                                                // (Parm)
};

// Function AkAudio.AkSoundSource.EventMarker
struct UAkSoundSource_EventMarker_Params
{
	class UAkSoundSource*                              Source;                                                    // (Parm, EditInline)
	int                                                PlayingID;                                                 // (Parm)
	struct FString                                     Marker;                                                    // (Parm, NeedCtorLink)
};

// Function AkAudio.AkSoundSource.EventFinished
struct UAkSoundSource_EventFinished_Params
{
	class UAkSoundSource*                              Source;                                                    // (Parm, EditInline)
	int                                                PlayingID;                                                 // (Parm)
};

// Function AkAudio.AkDevice.SetBusEffect
struct UAkDevice_SetBusEffect_Params
{
	struct FName                                       BusName;                                                   // (Parm)
	struct FName                                       EffectSetting;                                             // (Parm)
	int                                                EffectSlot;                                                // (OptionalParm, Parm)
};

// Function AkAudio.AkDevice.ResetSlapbackObjects
struct UAkDevice_ResetSlapbackObjects_Params
{
};

// Function AkAudio.AkDevice.SetSoundEnvironment
struct UAkDevice_SetSoundEnvironment_Params
{
	class AActor*                                      Actor;                                                     // (Parm)
	TEnumAsByte<EAkEnvironmentType>                    EnvironmentType;                                           // (Parm)
};

// Function AkAudio.AkDevice.GetEnvironments
struct UAkDevice_GetEnvironments_Params
{
	class UAkEnvironments*                             ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AkAudio.AkDevice.NotifyWhenInitialized
struct UAkDevice_NotifyWhenInitialized_Params
{
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
};

// Function AkAudio.AkDevice.ProfileStop
struct UAkDevice_ProfileStop_Params
{
};

// Function AkAudio.AkDevice.ProfileStart
struct UAkDevice_ProfileStart_Params
{
};

// Function AkAudio.AkDevice.PrintData
struct UAkDevice_PrintData_Params
{
};

// Function AkAudio.AkDevice.SetDynamicRange
struct UAkDevice_SetDynamicRange_Params
{
	TEnumAsByte<EAkDynamicRangeType>                   Type;                                                      // (Parm)
};

// Function AkAudio.AkDevice.SetOutputType
struct UAkDevice_SetOutputType_Params
{
	TEnumAsByte<EAkOutputType>                         Type;                                                      // (Parm)
};

// Function AkAudio.AkDevice.SetListenerSpatialization
struct UAkDevice_SetListenerSpatialization_Params
{
	class ULocalPlayer*                                Player;                                                    // (Parm)
	TEnumAsByte<EAkListenerSpacialization>             Value;                                                     // (Parm)
};

// Function AkAudio.AkDevice.SetSplitScreenListenerEnabled
struct UAkDevice_SetSplitScreenListenerEnabled_Params
{
	bool                                               bEnable;                                                   // (Parm)
};

// Function AkAudio.AkDevice.SetSplitScreenListenerPosition
struct UAkDevice_SetSplitScreenListenerPosition_Params
{
	struct FVector                                     Location;                                                  // (Parm)
};

// Function AkAudio.AkDevice.UpdateSecondaryOutputs
struct UAkDevice_UpdateSecondaryOutputs_Params
{
};

// Function AkAudio.AkDevice.SetGlobalRTCP
struct UAkDevice_SetGlobalRTCP_Params
{
	struct FName                                       Key;                                                       // (Parm)
	float                                              Value;                                                     // (Parm)
};

// Function AkAudio.AkDevice.StopGlobalSound
struct UAkDevice_StopGlobalSound_Params
{
	class UAkSoundCue*                                 Sound;                                                     // (Parm)
};

// Function AkAudio.AkDevice.PlayGlobalSound
struct UAkDevice_PlayGlobalSound_Params
{
	class UAkSoundCue*                                 Sound;                                                     // (Parm)
};

// Function AkAudio.AkDevice.SetState
struct UAkDevice_SetState_Params
{
	struct FName                                       InStateGroup;                                              // (Parm)
	struct FName                                       InState;                                                   // (Parm)
};

// Function AkAudio.AkDevice.SetSwitch
struct UAkDevice_SetSwitch_Params
{
	class AActor*                                      SourceActor;                                               // (Parm)
	struct FName                                       Key;                                                       // (Parm)
	struct FName                                       Value;                                                     // (Parm)
};

// Function AkAudio.AkDevice.SetRTCP
struct UAkDevice_SetRTCP_Params
{
	class AActor*                                      SourceActor;                                               // (Parm)
	struct FName                                       Key;                                                       // (Parm)
	float                                              Value;                                                     // (Parm)
};

// Function AkAudio.AkDevice.StopAllSounds
struct UAkDevice_StopAllSounds_Params
{
	class AActor*                                      SourceActor;                                               // (Parm)
};

// Function AkAudio.AkDevice.StopSound
struct UAkDevice_StopSound_Params
{
	class AActor*                                      SourceActor;                                               // (Parm)
	class UAkSoundCue*                                 Sound;                                                     // (Parm)
};

// Function AkAudio.AkDevice.PlaySound
struct UAkDevice_PlaySound_Params
{
	class AActor*                                      SourceActor;                                               // (Parm)
	class UAkSoundCue*                                 Sound;                                                     // (Parm)
	struct FVector                                     Translation;                                               // (OptionalParm, Parm)
	struct FRotator                                    Rotation;                                                  // (OptionalParm, Parm)
	class UAkSoundSource*                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, EditInline)
};

// Function AkAudio.AkDevice.GetSoundSource
struct UAkDevice_GetSoundSource_Params
{
	class AActor*                                      SourceActor;                                               // (Parm)
	struct FVector                                     Translation;                                               // (OptionalParm, Parm)
	struct FRotator                                    Rotation;                                                  // (OptionalParm, Parm)
	class UAkSoundSource*                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, EditInline)
};

// Function AkAudio.AkDevice.EventInitialized
struct UAkDevice_EventInitialized_Params
{
};

// Function AkAudio.AkMusicDevice.SetRTCP
struct UAkMusicDevice_SetRTCP_Params
{
	struct FName                                       Key;                                                       // (Parm)
	float                                              Value;                                                     // (Parm)
};

// Function AkAudio.AkMusicDevice.StopPlayingID
struct UAkMusicDevice_StopPlayingID_Params
{
	int                                                PlayingID;                                                 // (Parm)
};

// Function AkAudio.AkMusicDevice.Stop
struct UAkMusicDevice_Stop_Params
{
	class UAkSoundCue*                                 Sound;                                                     // (Parm)
};

// Function AkAudio.AkMusicDevice.Play
struct UAkMusicDevice_Play_Params
{
	class UAkSoundCue*                                 Sound;                                                     // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AkAudio.AkMusicDevice.EventTrackEnd
struct UAkMusicDevice_EventTrackEnd_Params
{
	int                                                PlayingID;                                                 // (Parm)
};

// Function AkAudio.AkMusicDevice.EventTrackStart
struct UAkMusicDevice_EventTrackStart_Params
{
	int                                                PlayingID;                                                 // (Parm)
	struct FString                                     FileMarker;                                                // (Parm, NeedCtorLink)
};

// Function AkAudio.AkParamGroup.SetSendToSlapbacks
struct UAkParamGroup_SetSendToSlapbacks_Params
{
	bool                                               bSend;                                                     // (Parm)
};

// Function AkAudio.AkParamGroup.SetControllerId
struct UAkParamGroup_SetControllerId_Params
{
	int                                                InID;                                                      // (Parm)
};

// Function AkAudio.AkParamGroup.EnableObjectAttenuation
struct UAkParamGroup_EnableObjectAttenuation_Params
{
};

// Function AkAudio.AkParamGroup.DisableObjectAttenuation
struct UAkParamGroup_DisableObjectAttenuation_Params
{
};

// Function AkAudio.AkParamGroup.PrintDebugInfo
struct UAkParamGroup_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                    // (Parm)
};

// Function AkAudio.AkParamGroup.UpdateSoundSourceAttenuationScaling
struct UAkParamGroup_UpdateSoundSourceAttenuationScaling_Params
{
};

// Function AkAudio.AkParamGroup.SetActorParameter
struct UAkParamGroup_SetActorParameter_Params
{
	struct FName                                       Key;                                                       // (Parm)
	class AActor*                                      Value;                                                     // (Parm)
};

// Function AkAudio.AkParamGroup.SetLinearColorParameter
struct UAkParamGroup_SetLinearColorParameter_Params
{
	struct FName                                       Key;                                                       // (Parm)
	struct FLinearColor                                Value;                                                     // (Parm)
};

// Function AkAudio.AkParamGroup.SetVectorParameter
struct UAkParamGroup_SetVectorParameter_Params
{
	struct FName                                       Key;                                                       // (Parm)
	struct FVector                                     Value;                                                     // (Parm)
};

// Function AkAudio.AkParamGroup.SetFloatParameter
struct UAkParamGroup_SetFloatParameter_Params
{
	struct FName                                       Key;                                                       // (Parm)
	float                                              Value;                                                     // (Parm)
};

// Function AkAudio.AkParamGroup.SetNameParameter
struct UAkParamGroup_SetNameParameter_Params
{
	struct FName                                       Key;                                                       // (Parm)
	struct FName                                       Value;                                                     // (Parm)
};

// Function AkAudio.AkParamGroup.GetDebugData
struct UAkParamGroup_GetDebugData_Params
{
	TArray<struct FName>                               RTCPKeys;                                                  // (Parm, OutParm, NeedCtorLink)
	TArray<float>                                      RTCPValues;                                                // (Parm, OutParm, NeedCtorLink)
	TArray<struct FName>                               SwitchKeys;                                                // (Parm, OutParm, NeedCtorLink)
	TArray<struct FName>                               SwitchValues;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function AkAudio.AkParamGroup.StopSound
struct UAkParamGroup_StopSound_Params
{
	class UAkSoundCue*                                 Sound;                                                     // (Parm)
};

// Function AkAudio.AkParamGroup.PlaySound
struct UAkParamGroup_PlaySound_Params
{
	class UAkSoundCue*                                 Sound;                                                     // (Parm)
	struct FVector                                     Translation;                                               // (OptionalParm, Parm)
	struct FRotator                                    Rotation;                                                  // (OptionalParm, Parm)
	class UAkSoundSource*                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, EditInline)
};

// Function AkAudio.AkParamGroup.SetSwitch
struct UAkParamGroup_SetSwitch_Params
{
	struct FName                                       Key;                                                       // (Parm)
	struct FName                                       Value;                                                     // (Parm)
};

// Function AkAudio.AkParamGroup.SetRTCP
struct UAkParamGroup_SetRTCP_Params
{
	struct FName                                       Key;                                                       // (Parm)
	float                                              Value;                                                     // (Parm)
};

// Function AkAudio.AkPlaySoundComponent.SetActorParameter
struct UAkPlaySoundComponent_SetActorParameter_Params
{
	struct FName                                       Key;                                                       // (Parm)
	class AActor*                                      Value;                                                     // (Parm)
};

// Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter
struct UAkPlaySoundComponent_SetLinearColorParameter_Params
{
	struct FName                                       Key;                                                       // (Parm)
	struct FLinearColor                                Value;                                                     // (Parm)
};

// Function AkAudio.AkPlaySoundComponent.SetVectorParameter
struct UAkPlaySoundComponent_SetVectorParameter_Params
{
	struct FName                                       Key;                                                       // (Parm)
	struct FVector                                     Value;                                                     // (Parm)
};

// Function AkAudio.AkPlaySoundComponent.SetFloatParameter
struct UAkPlaySoundComponent_SetFloatParameter_Params
{
	struct FName                                       Key;                                                       // (Parm)
	float                                              Value;                                                     // (Parm)
};

// Function AkAudio.AkPlaySoundComponent.SetNameParameter
struct UAkPlaySoundComponent_SetNameParameter_Params
{
	struct FName                                       Key;                                                       // (Parm)
	struct FName                                       Value;                                                     // (Parm)
};

// Function AkAudio.AkPlaySoundComponent.SetRTCP
struct UAkPlaySoundComponent_SetRTCP_Params
{
	struct FName                                       Key;                                                       // (Parm)
	float                                              Value;                                                     // (Parm)
};

// Function AkAudio.AkPlaySoundComponent.SetSwitch
struct UAkPlaySoundComponent_SetSwitch_Params
{
	struct FName                                       Key;                                                       // (Parm)
	struct FName                                       Value;                                                     // (Parm)
};

// Function AkAudio.AkPlaySoundComponent.IsPlaying
struct UAkPlaySoundComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AkAudio.AkPlaySoundComponent.Stop
struct UAkPlaySoundComponent_Stop_Params
{
};

// Function AkAudio.AkPlaySoundComponent.Play
struct UAkPlaySoundComponent_Play_Params
{
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor
struct USeqAct_AkPlaySound_ToggleSoundFor_Params
{
	class AActor*                                      A;                                                         // (Parm)
	bool                                               bPlay;                                                     // (Parm)
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSound
struct USeqAct_AkPlaySound_ToggleSound_Params
{
	bool                                               bPlay;                                                     // (Parm)
};

// Function AkAudio.SeqAct_AkPlaySound.Activated
struct USeqAct_AkPlaySound_Activated_Params
{
};

// Function AkAudio.SeqAct_AkPostEvent.HandleSoundCueFinished
struct USeqAct_AkPostEvent_HandleSoundCueFinished_Params
{
	class UAkSoundSource*                              Source;                                                    // (Parm, EditInline)
	int                                                PlayingID;                                                 // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
