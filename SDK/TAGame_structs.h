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

#define CONST_BoostLevel_Active                                  1.0f
#define CONST_BoostLevel_Activated                               0.0f
#define CONST_BoostLevel_Inactive                                -1.0f
#define CONST_SoonInSeconds                                      10800q
#define CONST_PlayerCountIrrelevant                              "NO_COUNT"
#define CONST_TOUR_MATCH_NONE                                    -1
#define CONST_MaxFriendKeyLength                                 64
#define CONST_MAX_PARTY_FOLLOWERS                                7
#define CONST_MAX_NAMEPLATES                                     8
#define CONST_MAX_TEAM_PLAYERS                                   5
#define CONST_BinaryUploader_TA_HttpContentType                  "application/binary"
#define CONST_PriorityHigh                                       8
#define CONST_PriorityMed                                        4
#define CONST_PriorityLow                                        0
#define CONST_MaxLoadoutSets                                     50
#define CONST_UnrealUnitsPerMeter                                100
#define CONST_MAX_REPLICATED_VOTERS                              8
#define CONST_PartyGroupID                                       10
#define CONST_TRADEHOLD_NONE                                     0
#define CONST_TRADEHOLD_ALL                                      -1
#define CONST_TRADEHOLD_P2P                                      -2
#define CONST_MaxAirControlSensitivity                           10.f
#define CONST_MaxSteeringSensitivity                             10.f
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum TAGame.SpecialPickup_BallFreeze_TA.BallFreezeState
enum class EBallFreezeState : uint8_t
{
	BallFreezeState_Freezing       = 0,
	BallFreezeState_Frozen         = 1,
	BallFreezeState_MAX            = 2,

};

// Enum TAGame.SpecialPickup_GrapplingHook_TA.ERopeState
enum class ERopeState : uint8_t
{
	RopeState_Traveling            = 0,
	RopeState_Attached             = 1,
	RopeState_MAX                  = 2,

};

// Enum TAGame.SpecialPickup_Spring_TA.ESpringState
enum class ESpringState : uint8_t
{
	SpringState_Traveling          = 0,
	SpringState_PostHit            = 1,
	SpringState_MAX                = 2,

};

// Enum TAGame.DistributionFloatSpeed_TA.ESpeedDistributionSpace
enum class ESpeedDistributionSpace : uint8_t
{
	SDD_Forward                    = 0,
	SDD_Side                       = 1,
	SDD_Up                         = 2,
	SDD_World                      = 3,
	SDD_MAX                        = 4,

};

// Enum TAGame.ForceVolume_TA.EForceDirection
enum class EForceDirection : uint8_t
{
	EFD_VolumeRotation             = 0,
	EFD_ActorVelocity              = 1,
	EFD_Custom                     = 2,
	EFD_MAX                        = 3,

};

// Enum TAGame.GFxData_MapPrefs_TA.EMapPrefType
enum class EMapPrefType : uint8_t
{
	MapPrefType_None               = 0,
	MapPrefType_Like               = 1,
	MapPrefType_Dislike            = 2,
	MapPrefType_MAX                = 3,

};

// Enum TAGame.GameEvent_TrainingEditor_TA.EPlayTestType
enum class EPlayTestType : uint8_t
{
	PlayTest_LoopRound             = 0,
	PlayTest_IncrementRound        = 1,
	PlayTest_IncrementRoundLoop    = 2,
	PlayTest_MAX                   = 3,

};

// Enum TAGame.GFxData_ProductFilter_TA.EProductFilterType
enum class EProductFilterType : uint8_t
{
	ProductFilterType_TradeIn      = 0,
	ProductFilterType_P2P          = 1,
	ProductFilterType_Garage       = 2,
	ProductFilterType_Destruction  = 3,
	ProductFilterType_MAX          = 4,

};

// Enum TAGame.InterpTrackSkelControlRotation_TA.ERotationAxis
enum class ERotationAxis : uint8_t
{
	ROTAXIS_Yaw                    = 0,
	ROTAXIS_Pitch                  = 1,
	ROTAXIS_Roll                   = 2,
	ROTAXIS_MAX                    = 3,

};

// Enum TAGame.ItemDropGroup_TA.EDropGroupDisplayOrder
enum class EDropGroupDisplayOrder : uint8_t
{
	DropGroupDisplayOrder_Default  = 0,
	DropGroupDisplayOrder_Challenge = 1,
	DropGroupDisplayOrder_RewardDrop = 2,
	DropGroupDisplayOrder_GarageSlot = 3,
	DropGroupDisplayOrder_LevelUpReward = 4,
	DropGroupDisplayOrder_Currency = 5,
	DropGroupDisplayOrder_Container = 6,
	DropGroupDisplayOrder_MAX      = 7,

};

// Enum TAGame.SaveDataVersions_TA.ESaveDataVersion
enum class ESaveDataVersion : uint8_t
{
	SaveDataVersion_Initial        = 0,
	SaveDataVersion_LightShafts    = 1,
	SaveDataVersion_NewOnlineProductsRemoved = 2,
	SaveDataVersion_Invisitek      = 3,
	SaveDataVersion_SoundSettings  = 4,
	SaveDataVersion_UISavedValues  = 5,
	SaveDataVersion_MapPrefs       = 6,
	SaveDataVersion_GarageComplex  = 7,
	SaveDataVersion_RankedReconnect = 8,
	SaveDataVersion_Network        = 9,
	SaveDataVersion_Achievements   = 10,
	SaveDataVersion_Tutorial       = 11,
	SaveDataVersion_BlogTiles      = 12,
	SaveDataVersion_Products       = 13,
	SaveDataVersion_PlaylistSkillData = 14,
	SaveDataVersion_MatchmakingSettings = 15,
	SaveDataVersion_ClientXP       = 16,
	SaveDataVersion_TournamentSettings = 17,
	SaveDataVersion_Seasons        = 18,
	SaveDataVersion_VideoSettings  = 19,
	SaveDataVersion_GameplaySettings = 20,
	SaveDataVersion_CustomMatchSettings = 21,
	SaveDataVersion_FreeplayMap    = 22,
	SaveDataVersion_SaveSingleSeason = 23,
	SaveDataVersion_MatchesPlayed  = 24,
	SaveDataVersion_ConsoleLensFlares = 25,
	SaveDataVersion_LevelThresholds = 26,
	SaveDataVersion_ResetNetworkSettings = 27,
	SaveDataVersion_NoSaveDLCOwnership_DEPRECATED = 28,
	SaveDataVersion_ProductsFavoriteSave = 29,
	SaveDataVersion_CrossplayFlip  = 30,
	SaveDataVersion_KeyConversion  = 31,
	SaveDataVersion_MAX            = 32,

};

// Enum TAGame.ChallengeFolder_TA.EChallengeSort
enum class EChallengeSort : uint8_t
{
	ECS_None                       = 0,
	ECS_TopBottom                  = 1,
	ECS_MAX                        = 2,

};

// Enum TAGame.GFxData_ProductFilter_TA.EFilterProductAttribute
enum class EFilterProductAttribute : uint8_t
{
	FPA_Indestructible             = 0,
	FPA_MAX                        = 1,

};

// Enum TAGame.MenuSequencer_TA.ESequenceStatus
enum class ESequenceStatus : uint8_t
{
	SS_Idle                        = 0,
	SS_Entering                    = 1,
	SS_Leaving                     = 2,
	SS_Pending                     = 3,
	SS_MAX                         = 4,

};

// Enum TAGame.ProductAssetLoader_TA.EAssetLoadState
enum class EAssetLoadState : uint8_t
{
	AssetLoadState_New             = 0,
	AssetLoadState_WaitingAsyncLoad = 1,
	AssetLoadState_AsyncLoad       = 2,
	AssetLoadState_Loaded          = 3,
	AssetLoadState_MAX             = 4,

};

// Enum TAGame.ProductAttribute_LicenseGroup_TA.ELicenseGroup
enum class ELicenseGroup : uint8_t
{
	LicenseGroup_Default           = 0,
	LicenseGroup_Mario             = 1,
	LicenseGroup_Berry             = 2,
	LicenseGroup_Maple             = 3,
	LicenseGroup_MAX               = 4,

};

// Enum TAGame.TourStatus_TA.ETourStatus
enum class ETourStatus : uint8_t
{
	TourStatus_None                = 0,
	TourStatus_Cancelled           = 1,
	TourStatus_MAX                 = 2,

};

// Enum TAGame.ProductEquipProfileSlot_Custom_TA.EEnableSlotCustomization
enum class EEnableSlotCustomization : uint8_t
{
	EnableSlotCustomization_Enabled = 0,
	EnableSlotCustomization_Disabled = 1,
	EnableSlotCustomization_MAX    = 2,

};

// Enum TAGame.SampleHistory_TA.EGraphSummaryType
enum class EGraphSummaryType : uint8_t
{
	GraphSummaryType_Latest        = 0,
	GraphSummaryType_Avg           = 1,
	GraphSummaryType_MinValue      = 2,
	GraphSummaryType_MaxValue      = 3,
	GraphSummaryType_Sum           = 4,
	GraphSummaryType_MAX           = 5,

};

// Enum TAGame.GameplayMusicPlayer_TA.EMusicPlayerState
enum class EMusicPlayerState : uint8_t
{
	MusicPlayerState_None          = 0,
	MusicPlayerState_Enabled       = 1,
	MusicPlayerState_Muted         = 2,
	MusicPlayerState_Disabled      = 3,
	MusicPlayerState_MAX           = 4,

};

// Enum TAGame.GameplayMusicPlayer_TA.EPlaylistType
enum class EPlaylistType : uint8_t
{
	PlaylistType_Training          = 0,
	PlaylistType_Match             = 1,
	PlaylistType_MAX               = 2,

};

// Enum TAGame._CrowdTypes_TA.ECrowdValueType
enum class ECrowdValueType : uint8_t
{
	CVT_Excitement                 = 0,
	CVT_Tension                    = 1,
	CVT_Anticipation               = 2,
	CVT_Upset                      = 3,
	CVT_MAX                        = 4,

};

// Enum TAGame.GFxData_OnlineMatchStatus_TA.SearchMessageType
enum class ESearchMessageType : uint8_t
{
	MessageType_Status             = 0,
	MessageType_Warning            = 1,
	MessageType_MAX                = 2,

};

// Enum TAGame.StatGraph_TA.EStatGraphLayer
enum class EStatGraphLayer : uint8_t
{
	StatGraphLayer_Background      = 0,
	StatGraphLayer_Text            = 1,
	StatGraphLayer_Graph           = 2,
	StatGraphLayer_MAX             = 3,

};

// Enum TAGame.GFxData_Party_TA.EPsyNetPartyStatus
enum class EPsyNetPartyStatus : uint8_t
{
	PsyNetParty_Disabled           = 0,
	PsyNetParty_Connecting         = 1,
	PsyNetParty_Connected          = 2,
	PsyNetParty_Disconnected       = 3,
	PsyNetParty_MAX                = 4,

};

// Enum TAGame.StatusTrigger_Numerical_TA.TriggerConditionNumericalType
enum class ETriggerConditionNumericalType : uint8_t
{
	TCNT_GreaterThan               = 0,
	TCNT_LessThan                  = 1,
	TCNT_Equal                     = 2,
	TCNT_GreaterEqual              = 3,
	TCNT_LessThanEqual             = 4,
	TCNT_MAX                       = 5,

};

// Enum TAGame.GFxData_TourEvent_TA.ETourEventStatus
enum class ETourEventStatus : uint8_t
{
	TES_NonePending                = 0,
	TES_Registered                 = 1,
	TES_CheckInOpen                = 2,
	TES_CheckedIn                  = 3,
	TES_GeneratingBrackets         = 4,
	TES_MatchPending               = 5,
	TES_MatchReady                 = 6,
	TES_InMatch                    = 7,
	TES_MatchResultsPending        = 8,
	TES_Paused                     = 9,
	TES_MatchEnding                = 10,
	TES_MAX                        = 11,

};

// Enum TAGame.FaceIt_TA.EPartnerID
enum class EPartnerID : uint8_t
{
	PartnerID_Psyonix              = 0,
	PartnerID_FaceIt               = 1,
	PartnerID_PlayVS               = 2,
	PartnerID_MAX                  = 3,

};

// Enum TAGame.GameEditor_Ring_TA.EDetectionType
enum class EDetectionType : uint8_t
{
	DT_Ball                        = 0,
	DT_Player                      = 1,
	DT_MAX                         = 2,

};

// Enum TAGame.ProfileVersions_TA.EProfileVersion
enum class EProfileVersion : uint8_t
{
	ProfileVersion_Initial         = 0,
	ProfileVersion_LoadoutPlayerTitle = 1,
	ProfileVersion_SaveReplayInput = 2,
	ProfileVersion_SaveReplayInput2 = 3,
	ProfileVersion_ChatRebind      = 4,
	ProfileVersion_SaveReplayInput3 = 5,
	ProfileVersion_DingoChatFix    = 6,
	ProfileVersion_CustomMatchSettings = 7,
	ProfileVersion_ChatSettings    = 8,
	ProfileVersion_TeamLoadouts    = 9,
	ProfileVersion_CarColors       = 10,
	ProfileVersion_ChatGamepadBindingConsoleOnly = 11,
	ProfileVersion_PaintFinishInLoadouts = 12,
	ProfileVersion_MusicPlaylistSelector = 13,
	ProfileVersion_ResetAccountSelectNNX = 14,
	ProfileVersion_GameplaySettings = 15,
	ProfileVersion_ResetAccountSelectNNXMain = 16,
	ProfileVersion_BannerSettings  = 17,
	ProfileVersion_Stats           = 18,
	ProfileVersion_ControlSettings = 19,
	ProfileVersion_PCBindings      = 20,
	ProfileVersion_AimAssist       = 21,
	ProfileVersion_CameraSettings  = 22,
	ProfileVersion_QuickChatSettings = 23,
	ProfileVersion_LoadoutData     = 24,
	ProfileVersion_GamepadSettings = 25,
	ProfileVersion_SparseBindingsArrays = 26,
	ProfileVersion_ClubColors2     = 27,
	ProfileVersion_CarColors2      = 28,
	ProfileVersion_MAX             = 29,

};

// Enum TAGame.GFxData_TrainingModeBrowser_TA.ETrainingModeSearchTypes
enum class ETrainingModeSearchTypes : uint8_t
{
	TMST_AllPublic                 = 0,
	TMST_FeaturedOnly              = 1,
	TMST_MAX                       = 2,

};

// Enum TAGame.SpecialEventConfig_TA.ESpecialEventState
enum class ESpecialEventState : uint8_t
{
	SES_Inactive                   = 0,
	SES_Active                     = 1,
	SES_Redemption                 = 2,
	SES_MAX                        = 3,

};

// Enum TAGame.StatTitle_TA.EStatTrackingUnitType
enum class EStatTrackingUnitType : uint8_t
{
	CountUnit                      = 0,
	SpeedUnit                      = 1,
	DistanceUnit                   = 2,
	EStatTrackingUnitType_MAX      = 3,

};

// Enum TAGame.ProductAttribute_Trademark_TA.ETrademarkGlyph
enum class ETrademarkGlyph : uint8_t
{
	TrademarkGlyph_TradeMark       = 0,
	TrademarkGlyph_Registered      = 1,
	TrademarkGlyph_Copyright       = 2,
	TrademarkGlyph_MAX             = 3,

};

// Enum TAGame.ProductsArchiveSave_TA.EProductsArchiveSaveVersion
enum class EProductsArchiveSaveVersion : uint8_t
{
	ProductsArchiveSaveVersion_ConvertHashIDsToInstanceIDs = 0,
	ProductsArchiveSaveVersion_MAX = 1,

};

// Enum TAGame.ProductsFavoriteSave_TA.EProductsFavoriteSaveVersion
enum class EProductsFavoriteSaveVersion : uint8_t
{
	EProductsFavoriteSaveVersion_ConvertHashIDsToInstanceIDs = 0,
	EProductsFavoriteSaveVersion_MAX = 1,

};

// Enum TAGame.ProductsOfflineSave_TA.EProductsOfflineSaveVersion
enum class EProductsOfflineSaveVersion : uint8_t
{
	ProductsOfflineSaveVersion_RemoveDLC = 0,
	ProductsOfflineSaveVersion_MAX = 1,

};

// Enum TAGame.ProfileControlsSave_TA.EProfilePCSaveVersion
enum class EProfilePCSaveVersion : uint8_t
{
	ProfileControlsSaveVersion_NewVibrationSettings = 0,
	ProfileControlsSaveVersion_MAX = 1,

};

// Enum TAGame.GFxData_UserSetting_TA.EUserSettingType
enum class EUserSettingType : uint8_t
{
	UserSettingType_List           = 0,
	UserSettingType_Boolean        = 1,
	UserSettingType_Scalar         = 2,
	UserSettingType_MAX            = 3,

};

// Enum TAGame.SeqAct_CheckRotationAngle_TA.ECheckAxis
enum class ECheckAxis : uint8_t
{
	ECA_Pitch                      = 0,
	ECA_Yaw                        = 1,
	ECA_Roll                       = 2,
	ECA_MAX                        = 3,

};

// Enum TAGame.ClientConnectionTracker_TA.EConnectionQualityState
enum class EConnectionQualityState : uint8_t
{
	CQS_Good                       = 0,
	CQS_Mediocre                   = 1,
	CQS_Bad                        = 2,
	CQS_MAX                        = 3,

};

// Enum TAGame.GameEvent_Tutorial_TA.ERotationType
enum class ERotationType : uint8_t
{
	Rot_Auto                       = 0,
	Rot_AutoAim                    = 1,
	Rot_AutoForward                = 2,
	Rot_AutoArch                   = 3,
	Rot_World                      = 4,
	Rot_MapCenter                  = 5,
	Rot_MAX                        = 6,

};

// Enum TAGame._TourTypes_TA.ETourSeedType
enum class ETourSeedType : uint8_t
{
	TourSeedType_Skill             = 0,
	TourSeedType_Random            = 1,
	TourSeedType_MAX               = 2,

};

// Enum TAGame.Replay_TA.EReplayVersion
enum class EReplayVersion : uint8_t
{
	ReplayVersion_Base             = 0,
	ReplayVersion_OnlineLoadout    = 1,
	ReplayVersion_CameraSettings   = 2,
	ReplayVersion_TeamLoadouts     = 3,
	ReplayVersion_MatchType        = 4,
	ReplayVersion_ActorName        = 5,
	ReplayVersion_MutatorSeekFree  = 6,
	ReplayVersion_ClubColors       = 7,
	ReplayVersion_CameraTrack      = 8,
	ReplayVersion_MAX              = 9,

};

// Enum TAGame.Replay_TA.EReplayState
enum class EReplayState : uint8_t
{
	ReplayState_Idle               = 0,
	ReplayState_Recording          = 1,
	ReplayState_Playing            = 2,
	ReplayState_MAX                = 3,

};

// Enum TAGame.StaticMeshRBActor_TA.EApplyForceTo
enum class EApplyForceTo : uint8_t
{
	EAF_None                       = 0,
	EAF_Any                        = 1,
	EAF_CarOnly                    = 2,
	EAF_BallOnly                   = 3,
	EAF_MAX                        = 4,

};

// Enum TAGame.TMetricsShared_TA.EMatchType
enum class EMatchType : uint8_t
{
	EmatchType_Online              = 0,
	EMatchType_Private             = 1,
	EMatchType_Offline             = 2,
	EMatchType_MAX                 = 3,

};

// Enum TAGame.TMetricsShared_TA.EDisconnect
enum class EDisconnect : uint8_t
{
	EDisconnect_Timeout            = 0,
	EDisconnect_Kick               = 1,
	EDisconnect_GameFull           = 2,
	EDisconnect_MAX                = 3,

};

// Enum TAGame._UserBugReportTypes_TA.EUserBugReportCategoryType
enum class EUserBugReportCategoryType : uint8_t
{
	UBRCT_UserInput                = 0,
	UBRCT_AutoReport               = 1,
	UBRCT_CustomerSupport          = 2,
	UBRCT_Parent                   = 3,
	UBRCT_MAX                      = 4,

};

// Enum TAGame.GFxEngine_TA.ESoundStatePriority
enum class ESoundStatePriority : uint8_t
{
	SSP_None                       = 0,
	SSP_Scoreboard                 = 1,
	SSP_Replay                     = 2,
	SSP_MidGameMenu                = 3,
	SSP_Pause                      = 4,
	SSP_BeginRound                 = 5,
	SSP_EndRound                   = 6,
	SSP_WinnerMenu                 = 7,
	SSP_MainMenu                   = 8,
	SSP_PremiumGarage              = 9,
	SSP_Roulette                   = 10,
	SSP_AudioPreview               = 11,
	SSP_LoadingScreen              = 12,
	SSP_MAX                        = 13,

};

// Enum TAGame.CameraState_CameraTrack_TA.ECameraTrackFlyType
enum class ECameraTrackFlyType : uint8_t
{
	CameraTrackFly_Never           = 0,
	CameraTrackFly_WhenMoving      = 1,
	CameraTrackFly_WhenPaused      = 2,
	CameraTrackFly_MAX             = 3,

};

// Enum TAGame.CameraState_DirectorMoving_TA.ECameraLoopType
enum class ECameraLoopType : uint8_t
{
	CLT_StopAtEnd                  = 0,
	CLT_PingPong                   = 1,
	CLT_Loop                       = 2,
	CLT_MAX                        = 3,

};

// Enum TAGame.CameraStateSelector_Priority_TA.EStatePriority
enum class EStatePriority : uint8_t
{
	SP_Default                     = 0,
	SP_OverrideAny                 = 1,
	SP_OverrideLower               = 2,
	SP_InitialOnly                 = 3,
	SP_MAX                         = 4,

};

// Enum TAGame.SkelControlSingleBoneCopy_TA.ECopyAxis
enum class ECopyAxis : uint8_t
{
	CopyAxis_X                     = 0,
	CopyAxis_Y                     = 1,
	CopyAxis_Z                     = 2,
	CopyAxis_Pitch                 = 3,
	CopyAxis_Yaw                   = 4,
	CopyAxis_Roll                  = 5,
	CopyAxis_MAX                   = 6,

};

// Enum TAGame.StatFactory_TA.EFiveHitType
enum class EFiveHitType : uint8_t
{
	FiveHit_None                   = 0,
	FiveHit_Low                    = 1,
	FiveHit_High                   = 2,
	FiveHit_MAX                    = 3,

};

// Enum TAGame.Tutorial_TA.ETutorialOutput
enum class ETutorialOutput : uint8_t
{
	TutorialOutput_Ended           = 0,
	TutorialOutput_Completed       = 1,
	TutorialOutput_Failed          = 2,
	TutorialOutput_ScreenFadedIn   = 3,
	TutorialOutput_ScreenFadedOut  = 4,
	TutorialOutput_AllMessagesDisplayed = 5,
	TutorialOutput_Started         = 6,
	TutorialOutput_Reset           = 7,
	TutorialOutput_Skipped         = 8,
	TutorialOutput_AnswerRight     = 9,
	TutorialOutput_AnswerWrong     = 10,
	TutorialOutput_MAX             = 11,

};

// Enum TAGame.Tutorial_TA.ETutorialStatus
enum class ETutorialStatus : uint8_t
{
	TutorialStatus_None            = 0,
	TutorialStatus_Failed          = 1,
	TutorialStatus_Completed       = 2,
	TutorialStatus_MAX             = 3,

};

// Enum TAGame.Tutorial_TA.EPlayerDriveType
enum class EPlayerDriveType : uint8_t
{
	PlayerDriveType_All            = 0,
	PlayerDriveType_Player         = 1,
	PlayerDriveType_Bot            = 2,
	PlayerDriveType_MAX            = 3,

};

// Enum TAGame.VehiclePickup_Boost_TA.EBoostType
enum class EBoostType : uint8_t
{
	BoostType_Unknown              = 0,
	BoostType_Pill                 = 1,
	BoostType_Pad                  = 2,
	BoostType_MAX                  = 3,

};

// Enum TAGame._ShopTypes_TA.EShopDeliverableType
enum class EShopDeliverableType : uint8_t
{
	Deliverable_Product            = 0,
	Deliverable_MAX                = 1,

};

// Enum TAGame._ShopTypes_TA.EShopType
enum class EShopType : uint8_t
{
	ShopTab                        = 0,
	ShopCrate                      = 1,
	EShopType_MAX                  = 2,

};

// Enum TAGame._ShopTypes_TA.EItemDisplayType
enum class EItemDisplayType : uint8_t
{
	DisplayDaily                   = 0,
	DisplayFull                    = 1,
	EItemDisplayType_MAX           = 2,

};

// Enum TAGame.BreakOutActor_Platform_TA.EBreakoutDamageState
enum class EBreakoutDamageState : uint8_t
{
	DamageState_Start              = 0,
	DamageState_Damaged            = 1,
	DamageState_Broken             = 2,
	DamageState_MAX                = 3,

};

// Enum TAGame.GFxData_Friends_TA.ENameDisplayRelationshipProxy
enum class ENameDisplayRelationshipProxy : uint8_t
{
	NameDisplayRelationshipProxy_NoChange = 0,
	NameDisplayRelationshipProxy_ForcePlatform = 1,
	NameDisplayRelationshipProxy_ForcePsyNet = 2,
	NameDisplayRelationshipProxy_ForceAll = 3,
	NameDisplayRelationshipProxy_MAX = 4,

};

// Enum TAGame._AITypes_TA.EBTStatus
enum class EBTStatus : uint8_t
{
	BTStatus_Fail                  = 0,
	BTStatus_Success               = 1,
	BTStatus_Running               = 2,
	BTStatus_MAX                   = 3,

};

// Enum TAGame._AITypes_TA.EAITeam
enum class EAITeam : uint8_t
{
	AITeam_Self                    = 0,
	AITeam_Enemy                   = 1,
	AITeam_Any                     = 2,
	AITeam_MAX                     = 3,

};

// Enum TAGame._Types_TA.EExperimentalMapStatus
enum class EExperimentalMapStatus : uint8_t
{
	EMS_Default                    = 0,
	EMS_OnlyExperimentalPlaylist   = 1,
	EMS_Any                        = 2,
	EMS_MAX                        = 3,

};

// Enum TAGame._Types_TA.EMirrorFieldType
enum class EMirrorFieldType : uint8_t
{
	MFT_None                       = 0,
	MFT_X                          = 1,
	MFT_Y                          = 2,
	MFT_XY                         = 3,
	MFT_TeamIndex                  = 4,
	MFT_MAX                        = 5,

};

// Enum TAGame._Types_TA.EUIMenuState
enum class EUIMenuState : uint8_t
{
	UIMS_StartMenu                 = 0,
	UIMS_MainMenu                  = 1,
	UIMS_MAX                       = 2,

};

// Enum TAGame._Types_TA.EChatChannel
enum class EChatChannel : uint8_t
{
	EChatChannel_Match             = 0,
	EChatChannel_Team              = 1,
	EChatChannel_Party             = 2,
	EChatChannel_Individual        = 3,
	EChatChannel_MAX               = 4,

};

// Enum TAGame._Types_TA.ESkinType
enum class ESkinType : uint8_t
{
	EST_Default                    = 0,
	EST_Animated                   = 1,
	EST_AnimatedPrimaryOnly        = 2,
	EST_NonAnimatedPrimaryOnly     = 3,
	EST_MAX                        = 4,

};

// Enum TAGame._Types_TA.EStatEventDisplayLevels
enum class EStatEventDisplayLevels : uint8_t
{
	SEDL_None                      = 0,
	SEDL_Primary                   = 1,
	SEDL_All                       = 2,
	SEDL_MAX                       = 3,

};

// Enum TAGame._Types_TA.ETAStatType
enum class ETAStatType : uint8_t
{
	StatType_Private               = 0,
	StatType_Unranked              = 1,
	StatType_Ranked                = 2,
	StatType_MAX                   = 3,

};

// Enum TAGame._Types_TA.EProductQuality
enum class EProductQuality : uint8_t
{
	EPQ_Common                     = 0,
	EPQ_Uncommon                   = 1,
	EPQ_Rare                       = 2,
	EPQ_VeryRare                   = 3,
	EPQ_Import                     = 4,
	EPQ_Exotic                     = 5,
	EPQ_BlackMarket                = 6,
	EPQ_Premium                    = 7,
	EPQ_Limited                    = 8,
	EPQ_MAX                        = 9,

};

// Enum TAGame._Types_TA.EUnlockMethod
enum class EUnlockMethod : uint8_t
{
	UnlockMethod_Default           = 0,
	UnlockMethod_Drop              = 1,
	UnlockMethod_Special           = 2,
	UnlockMethod_Reward            = 3,
	UnlockMethod_DLC               = 4,
	UnlockMethod_Never             = 5,
	UnlockMethod_MAX               = 6,

};

// Enum TAGame._Types_TA.ETieBreakDecision
enum class ETieBreakDecision : uint8_t
{
	TBD_None                       = 0,
	TBD_Goals                      = 1,
	TBD_Shots                      = 2,
	TBD_CoinToss                   = 3,
	TBD_MAX                        = 4,

};

// Enum TAGame._Types_TA.EMainMenuBackground
enum class EMainMenuBackground : uint8_t
{
	MMBG_Default                   = 0,
	MMBG_UtopiaSnow                = 1,
	MMBG_HauntedStation            = 2,
	MMBG_Beach                     = 3,
	MMBG_Beach_Night               = 4,
	MMBG_Halloween                 = 5,
	MMBG_China                     = 6,
	MMBG_ParkDay                   = 7,
	MMBG_MAX                       = 8,

};

// Enum TAGame._Types_TA.EPersonaInfoOrigin
enum class EPersonaInfoOrigin : uint8_t
{
	PersonaOrigin_Platform         = 0,
	PersonaOrigin_PsyNet           = 1,
	PersonaOrigin_MAX              = 2,

};

// Enum TAGame._Types_TA.EPresenceGroup
enum class EPresenceGroup : uint8_t
{
	EPG_Offline                    = 0,
	EPG_Online                     = 1,
	EPG_InGame                     = 2,
	EPG_Friends                    = 3,
	EPG_MAX                        = 4,

};

// Enum TAGame._Types_TA.EMatchTieBreaker
enum class EMatchTieBreaker : uint8_t
{
	MatchTieBreaker_FirstScore     = 0,
	MatchTieBreaker_Random         = 1,
	MatchTieBreaker_MAX            = 2,

};

// Enum TAGame._Types_TA.EV2TutorialType
enum class EV2TutorialType : uint8_t
{
	V2T_Basic                      = 0,
	V2T_Skills                     = 1,
	V2T_Skills01                   = 2,
	V2T_Aerials                    = 3,
	V2T_BasicTeam                  = 4,
	V2T_AdvancedTeam               = 5,
	V2T_MAX                        = 6,

};

// Enum TAGame._Types_TA.EGameplayMusicSetting
enum class EGameplayMusicSetting : uint8_t
{
	GameplayMusic_Off              = 0,
	GameplayMusic_TraningOnly      = 1,
	GameplayMusic_MatchesOnly      = 2,
	GameplayMusic_AlwaysOn         = 3,
	GameplayMusic_MAX              = 4,

};

// Enum TAGame._Types_TA.ENameplateMode
enum class ENameplateMode : uint8_t
{
	NameplateMode_DistanceFade     = 0,
	NameplateMode_AlwaysVisible    = 1,
	NameplateMode_Simplified       = 2,
	NameplateMode_MAX              = 3,

};

// Enum TAGame._Types_TA.EHUDMessageLevel
enum class EHUDMessageLevel : uint8_t
{
	HUDMessageLevel_All            = 0,
	HUDMessageLevel_GameUpdates    = 1,
	HUDMessageLevel_Essential      = 2,
	HUDMessageLevel_MAX            = 3,

};

// Enum TAGame._Types_TA.EForceFeedbackMode
enum class EForceFeedbackMode : uint8_t
{
	ForceFeedbackMode_Disabled     = 0,
	ForceFeedbackMode_Impact       = 1,
	ForceFeedbackMode_All          = 2,
	ForceFeedbackMode_MAX          = 3,

};

// Enum TAGame._Types_TA.EForceFeedbackType
enum class EForceFeedbackType : uint8_t
{
	ForceFeedbackType_Disabled     = 0,
	ForceFeedbackType_VeryLight    = 1,
	ForceFeedbackType_Light        = 2,
	ForceFeedbackType_Medium       = 3,
	ForceFeedbackType_Heavy        = 4,
	ForceFeedbackType_Legacy       = 5,
	ForceFeedbackType_MAX          = 6,

};

// Enum TAGame._Types_TA.ECameraSettingsPreset
enum class ECameraSettingsPreset : uint8_t
{
	CameraSettingsPreset_Default   = 0,
	CameraSettingsPreset_Balanced  = 1,
	CameraSettingsPreset_Wide      = 2,
	CameraSettingsPreset_Custom    = 3,
	CameraSettingsPreset_Legacy    = 4,
	CameraSettingsPreset_MAX       = 5,

};

// Enum TAGame._Types_TA.EMTXCatalogCategory
enum class EMTXCatalogCategory : uint8_t
{
	MTX_None                       = 0,
	MTX_Keys                       = 1,
	MTX_EventCrates                = 2,
	MTX_EsportsTokens              = 3,
	MTX_RocketBucks                = 4,
	MTX_MAX                        = 5,

};

// Enum TAGame._Types_TA.EEquippableProductSlot
enum class EEquippableProductSlot : uint8_t
{
	EPS_Skin                       = 0,
	EPS_Wheels                     = 1,
	EPS_Boost                      = 2,
	EPS_Hat                        = 3,
	EPS_Antenna                    = 4,
	EPS_MAX                        = 5,

};

// Enum TAGame._Types_TA.ECurrency
enum class ECurrency : uint8_t
{
	Currency_Soft                  = 0,
	Currency_Hard                  = 1,
	Currency_MAX                   = 2,

};

// Enum TAGame._Types_TA.EOnlineXPModifierType
enum class EOnlineXPModifierType : uint8_t
{
	OnlineXPModifier_Additive      = 0,
	OnlineXPModifier_Multiplicative = 1,
	OnlineXPModifier_MAX           = 2,

};

// Enum TAGame._Types_TA.EVanityType
enum class EVanityType : uint8_t
{
	VT_None                        = 0,
	VT_Banner                      = 1,
	VT_Avatar                      = 2,
	VT_AvatarBorder                = 3,
	VT_MAX                         = 4,

};

// Enum TAGame._Types_TA.ETrinaryBool
enum class ETrinaryBool : uint8_t
{
	TrinaryBool_Irrelevant         = 0,
	TrinaryBool_False              = 1,
	TrinaryBool_True               = 2,
	TrinaryBool_MAX                = 3,

};

// Enum TAGame._Types_TA.EGarageState
enum class EGarageState : uint8_t
{
	EGS_GarageComplex_TA           = 0,
	EGS_CenterCarFocus             = 1,
	EGS_CustomizeCenterCar         = 2,
	EGS_CenterCarScreenshot        = 3,
	EGS_CarSelect                  = 4,
	EGS_PresetSelect               = 5,
	EGS_CarSwap                    = 6,
	EGS_EditingRowProduct          = 7,
	EGS_LockedSlot                 = 8,
	EGS_SlotFocus                  = 9,
	EGS_CustomizeSlotFocus         = 10,
	EGS_SlotScreenshot             = 11,
	EGS_MAX                        = 12,

};

// Enum TAGame.GFxData_LocalPlayer_TA.ESplitScreenPosition
enum class ESplitScreenPosition : uint8_t
{
	SSP_Center                     = 0,
	SSP_Left                       = 1,
	SSP_Right                      = 2,
	SSP_Top                        = 3,
	SSP_Bottom                     = 4,
	SSP_TopLeft                    = 5,
	SSP_TopRight                   = 6,
	SSP_BottomLeft                 = 7,
	SSP_BottomRight                = 8,
	SSP_MAX                        = 9,

};

// Enum TAGame._Types_TA.EPaintFinishType
enum class EPaintFinishType : uint8_t
{
	PaintFinishType_Standard       = 0,
	PaintFinishType_Metallic       = 1,
	PaintFinishType_MAX            = 2,

};

// Enum TAGame._Types_TA.EPaintColorVariant
enum class EPaintColorVariant : uint8_t
{
	PaintColorVariant_Primary      = 0,
	PaintColorVariant_LightAccent  = 1,
	PaintColorVariant_DarkAccent   = 2,
	PaintColorVariant_Emissive     = 3,
	PaintColorVariant_DeEmissive   = 4,
	PaintColorVariant_Complementary = 5,
	PaintColorVariant_Balanced     = 6,
	PaintColorVariant_Tertiary     = 7,
	PaintColorVariant_Additive     = 8,
	PaintColorVariant_Unused3      = 9,
	PaintColorVariant_Unused4      = 10,
	PaintColorVariant_Unused5      = 11,
	PaintColorVariant_MAX          = 12,

};

// Enum TAGame._Types_TA.ECustomMatchSettingsType
enum class ECustomMatchSettingsType : uint8_t
{
	CustomMatchSettingsType_PrivateMatch = 0,
	CustomMatchSettingsType_LocalMatch = 1,
	CustomMatchSettingsType_TourCreate = 2,
	CustomMatchSettingsType_MAX    = 3,

};

// Enum TAGame._Types_TA.EEditingType
enum class EEditingType : uint8_t
{
	ET_FreeCam                     = 0,
	ET_Ball                        = 1,
	ET_Car                         = 2,
	ET_MAX                         = 3,

};

// Enum TAGame._Types_TA.EEquipAction
enum class EEquipAction : uint8_t
{
	EquipAction_Both               = 0,
	EquipAction_Team0              = 1,
	EquipAction_Team1              = 2,
	EquipAction_MAX                = 3,

};

// Enum TAGame._Types_TA.EHistory
enum class EHistory : uint8_t
{
	H_None                         = 0,
	H_Add                          = 1,
	H_Remove                       = 2,
	H_MAX                          = 3,

};

// Enum TAGame._Types_TA.EHistoryType
enum class EHistoryType : uint8_t
{
	HT_None                        = 0,
	HT_Undo                        = 1,
	HT_Redo                        = 2,
	HT_MAX                         = 3,

};

// Enum TAGame._Types_TA.EPawnType
enum class EPawnType : uint8_t
{
	PT_Player                      = 0,
	PT_Spectator                   = 1,
	PT_Editor                      = 2,
	PT_MAX                         = 3,

};

// Enum TAGame._Types_TA.ETrainingSaveType
enum class ETrainingSaveType : uint8_t
{
	ETS_MyTraining                 = 0,
	ETS_Favorited                  = 1,
	ETS_Downloaded                 = 2,
	ETS_MAX                        = 3,

};

// Enum TAGame._Types_TA.ESaveGameResult
enum class ESaveGameResult : uint8_t
{
	SaveGameResult_Pending         = 0,
	SaveGameResult_Success         = 1,
	SaveGameResult_UserNotSignedIn = 2,
	SaveGameResult_Error           = 3,
	SaveGameResult_NoSpace         = 4,
	SaveGameResult_Corrupt         = 5,
	SaveGameResult_MAX             = 6,

};

// Enum TAGame._Types_TA.EProductThumbnailSize
enum class EProductThumbnailSize : uint8_t
{
	PTS_Garage                     = 0,
	PTS_Drop                       = 1,
	PTS_Preview                    = 2,
	PTS_ShopItem                   = 3,
	PTS_MAX                        = 4,

};

// Enum TAGame._Types_TA.EProductAttachmentSocket
enum class EProductAttachmentSocket : uint8_t
{
	PAS_Hat                        = 0,
	PAS_Front                      = 1,
	PAS_Antenna                    = 2,
	PAS_UnderGlow                  = 3,
	PAS_Root                       = 4,
	PAS_MAX                        = 5,

};

// Enum TAGame._Types_TA.EBallHitType
enum class EBallHitType : uint8_t
{
	HitType_Item0                  = 0,
	HitType_Item1                  = 1,
	HitType_Item2                  = 2,
	HitType_Car                    = 3,
	HitType_MAX                    = 4,

};

// Enum TAGame._Types_TA.EVoteStatus
enum class EVoteStatus : uint8_t
{
	VOTE_Pending                   = 0,
	VOTE_Yes                       = 1,
	VOTE_No                        = 2,
	VOTE_MAX                       = 3,

};

// Enum TAGame._Types_TA.ETrainingTag
enum class ETrainingTag : uint8_t
{
	Tag_Aerials                    = 0,
	Tag_Bounces                    = 1,
	Tag_Shots                      = 2,
	Tag_Saves                      = 3,
	Tag_Clears                     = 4,
	Tag_Rebounds                   = 5,
	Tag_Redirects                  = 6,
	Tag_Freestyles                 = 7,
	Tag_Dribbles                   = 8,
	Tag_AirDribbles                = 9,
	Tag_Kickoffs                   = 10,
	Tag_WallShots                  = 11,
	Tag_LongShots                  = 12,
	Tag_CloseShots                 = 13,
	Tag_AngleShots                 = 14,
	Tag_BackwardsShots             = 15,
	Tag_Offense                    = 16,
	Tag_Defense                    = 17,
	Tag_PinchShots                 = 18,
	Tag_MAX                        = 19,

};

// Enum TAGame._Types_TA.EDifficulty
enum class EDifficulty : uint8_t
{
	D_Easy                         = 0,
	D_Medium                       = 1,
	D_Hard                         = 2,
	D_MAX                          = 3,

};

// Enum TAGame._Types_TA.ETrainingType
enum class ETrainingType : uint8_t
{
	Training_None                  = 0,
	Training_Aerial                = 1,
	Training_Goalie                = 2,
	Training_Striker               = 3,
	Training_MAX                   = 4,

};

// Enum TAGame._Types_TA.EShowOnly
enum class EShowOnly : uint8_t
{
	SHOW_Everything                = 0,
	SHOW_Body                      = 1,
	SHOW_Wheels                    = 2,
	SHOW_Arena                     = 3,
	SHOW_MAX                       = 4,

};

// Enum TAGame._Types_TA.ECarImpactResult
enum class ECarImpactResult : uint8_t
{
	CarImpactResult_None           = 0,
	CarImpactResult_ZeroSpeed      = 1,
	CarImpactResult_ZeroSpeedTowardsCar = 2,
	CarImpactResult_OtherCarFaster = 3,
	CarImpactResult_Success        = 4,
	CarImpactResult_FailDemolishTargetNone = 5,
	CarImpactResult_FailNotSupersonic = 6,
	CarImpactResult_FailInsufficientForwardSpeed = 7,
	CarImpactResult_FailNotWithinForwardEllipticalCone = 8,
	CarImpactResult_FailSameTeam   = 9,
	CarImpactResult_FailNotWithinVictimHitLocationAngle = 10,
	CarImpactResult_FailNotWithinForwardHitAngle = 11,
	CarImpactResult_Bump           = 12,
	CarImpactResult_MAX            = 13,

};

// Enum TAGame._Types_TA.EDemolishSpeed
enum class EDemolishSpeed : uint8_t
{
	DemolishSpeed_Supersonic       = 0,
	DemolishSpeed_None             = 1,
	DemolishSpeed_MAX              = 2,

};

// Enum TAGame._Types_TA.EDemolishTarget
enum class EDemolishTarget : uint8_t
{
	DemolishTarget_OtherTeam       = 0,
	DemolishTarget_Everyone        = 1,
	DemolishTarget_None            = 2,
	DemolishTarget_MAX             = 3,

};

// Enum TAGame._Types_TA.EBlueprintType
enum class EBlueprintType : uint8_t
{
	BlueprintType_Unrevealed       = 0,
	BlueprintType_Revealed         = 1,
	BlueprintType_NotABlueprint    = 2,
	BlueprintType_MAX              = 3,

};

// Enum TAGame._Types_TA.EProductTradeRestriction
enum class EProductTradeRestriction : uint8_t
{
	ProductTradeRestriction_P2P    = 0,
	ProductTradeRestriction_TradeIn = 1,
	ProductTradeRestriction_MAX    = 2,

};

// Enum TAGame._Types_TA.EProductFilterSortType
enum class EProductFilterSortType : uint8_t
{
	ProductFilterSortType_Alphabetical = 0,
	ProductFilterSortType_UnlockDate = 1,
	ProductFilterSortType_Quality  = 2,
	ProductFilterSortType_Quantity = 3,
	ProductFilterSortType_MAX      = 4,

};

// Enum TAGame._Types_TA.EArchiveProductFilter
enum class EArchiveProductFilter : uint8_t
{
	ArchiveFilter_ExcludeArchivedProducts = 0,
	ArchiveFilter_IncludeArchivedProducts = 1,
	ArchiveFilter_OnlyShowArchivedProducts = 2,
	ArchiveFilter_MAX              = 3,

};

// Enum TAGame._Types_TA.EProductFilterLogLevel
enum class EProductFilterLogLevel : uint8_t
{
	ProductFilterLogLevel_Filtered = 0,
	ProductFilterLogLevel_UnFiltered = 1,
	ProductFilterLogLevel_MAX      = 2,

};

// Enum TAGame._Types_TA.EControllerSoundMode
enum class EControllerSoundMode : uint8_t
{
	CSM_Multiplayer                = 0,
	CSM_On                         = 1,
	CSM_Off                        = 2,
	CSM_MAX                        = 3,

};

// Enum TAGame._Types_TA.EVoiceFilter
enum class EVoiceFilter : uint8_t
{
	VoiceFilter_All                = 0,
	VoiceFilter_Preset             = 1,
	VoiceFilter_TeamPreset         = 2,
	VoiceFilter_Team               = 3,
	VoiceFilter_Friends            = 4,
	VoiceFilter_None               = 5,
	VoiceFilter_MAX                = 6,

};

// Enum TAGame._Types_TA.EPaintTeam
enum class EPaintTeam : uint8_t
{
	PaintTeam_Blue                 = 0,
	PaintTeam_Orange               = 1,
	PaintTeam_None                 = 2,
	PaintTeam_MAX                  = 3,

};

// Enum TAGame._Types_TA.ETeam
enum class ETeam : uint8_t
{
	Team_Blue                      = 0,
	Team_Orange                    = 1,
	Team_MAX                       = 2,

};

// Enum TAGame._Types_TA.SearchStatusOwner
enum class ESearchStatusOwner : uint8_t
{
	StatusOwner_None               = 0,
	StatusOwner_Matchmaking        = 1,
	StatusOwner_PrivateMatch       = 2,
	StatusOwner_Lan                = 3,
	StatusOwner_Tournaments        = 4,
	StatusOwner_MAX                = 5,

};

// Enum TAGame._Types_TA.EMatchmakingViewTab
enum class EMatchmakingViewTab : uint8_t
{
	MatchmakingViewTab_Unranked    = 0,
	MatchmakingViewTab_Ranked      = 1,
	MatchmakingViewTab_RankedSports = 2,
	MatchmakingViewTab_UnrankedSports = 3,
	MatchmakingViewTab_MicroEvent  = 4,
	MatchmakingViewTab_DebugMicroEvent = 5,
	MatchmakingViewTab_Casual      = 6,
	MatchmakingViewTab_MAX         = 7,

};

// Enum TAGame._Types_TA.EWheelPosition
enum class EWheelPosition : uint8_t
{
	WP_FrontLeft                   = 0,
	WP_FrontRight                  = 1,
	WP_BackLeft                    = 2,
	WP_BackRight                   = 3,
	WP_MAX                         = 4,

};

// Enum TAGame._Types_TA.ETernarySetting
enum class ETernarySetting : uint8_t
{
	TernarySetting_Default         = 0,
	TernarySetting_Enabled         = 1,
	TernarySetting_Disabled        = 2,
	TernarySetting_MAX             = 3,

};

// Enum TAGame._Types_TA.EVoteSubject
enum class EVoteSubject : uint8_t
{
	VoteSubject_Rematch            = 0,
	VoteSubject_Forfeit            = 1,
	VoteSubject_MAX                = 2,

};

// Enum TAGame._Types_TA.ENetworkInputBuffer
enum class ENetworkInputBuffer : uint8_t
{
	NetworkInputBuffer_ServerConsume = 0,
	NetworkInputBuffer_STS         = 1,
	NetworkInputBuffer_CSTS        = 2,
	NetworkInputBuffer_MAX         = 3,

};

// Enum TAGame._Types_TA.ENetworkValue
enum class ENetworkValue : uint8_t
{
	Net_Low                        = 0,
	Net_Medium                     = 1,
	Net_High                       = 2,
	Net_MAX                        = 3,

};

// Enum TAGame._Types_TA.EMeshMirrorMode
enum class EMeshMirrorMode : uint8_t
{
	MeshMirrorMode_Mirror          = 0,
	MeshMirrorMode_Rotate          = 1,
	MeshMirrorMode_MAX             = 2,

};

// Enum TAGame._Types_TA.EStatGraphLevel
enum class EStatGraphLevel : uint8_t
{
	StatGraphLevel_None            = 0,
	StatGraphLevel_PerfSummary     = 1,
	StatGraphLevel_PerfGraphShort  = 2,
	StatGraphLevel_PerfGraphLong   = 3,
	StatGraphLevel_NetSummary      = 4,
	StatGraphLevel_NetGraphShort   = 5,
	StatGraphLevel_NetGraphLong    = 6,
	StatGraphLevel_MAX             = 7,

};

// Enum TAGame._Types_TA.EInputBufferSaturationLevel
enum class EInputBufferSaturationLevel : uint8_t
{
	IBSL_ExtremelyStarved          = 0,
	IBSL_Starved                   = 1,
	IBSL_Good                      = 2,
	IBSL_Saturated                 = 3,
	IBSL_ExtremelySaturated        = 4,
	IBSL_MAX                       = 5,

};

// Enum TAGame._Types_TA.EAchievementType
enum class EAchievementType : uint8_t
{
	AT_Game                        = 0,
	AT_EXP0                        = 1,
	AT_DLC0                        = 2,
	AT_DLC1                        = 3,
	AT_DLC2                        = 4,
	AT_XBO0                        = 5,
	AT_DLC3                        = 6,
	AT_DLC4                        = 7,
	AT_DLC5                        = 8,
	AT_DLC6                        = 9,
	AT_DLC7                        = 10,
	AT_Meta                        = 11,
	AT_MAX                         = 12,

};

// Enum TAGame.AchievementManager_TA.EAchievementGame
enum class EAchievementGame : uint8_t
{
	AG_Virtuoso                    = 0,
	AG_Stocked                     = 1,
	AG_FarFarAway                  = 2,
	AG_SuperVictorious             = 3,
	AG_Champion                    = 4,
	AG_TheStreak                   = 5,
	AG_HelensPride                 = 6,
	AG_BattleCarCollector          = 7,
	AG_DropsintheBucket            = 8,
	AG_Rocketeer                   = 9,
	AG_GreaseMonkey                = 10,
	AG_PitchVeteran                = 11,
	AG_RidersBlock                 = 12,
	AG_BreakShot                   = 13,
	AG_Turbocharger                = 14,
	AG_DrillSergeant               = 15,
	AG_MinutetoWinit               = 16,
	AG_SpeedDemon                  = 17,
	AG_PickMeUp                    = 18,
	AG_WallCrawler                 = 19,
	AG_TeamPlayer                  = 20,
	AG_SARPBCForever               = 21,
	AG_FeatherinYourRecap          = 22,
	AG_Winner                      = 23,
	AG_CleanSheet                  = 24,
	AG_TripleThreat                = 25,
	AG_DoubleUp                    = 26,
	AG_SinglesClub                 = 27,
	AG_PerfectStart                = 28,
	AG_StillAShowOff               = 29,
	AG_KnowTheDrill                = 30,
	AG_Traveler                    = 31,
	AG_Tinkerer                    = 32,
	AG_FirstTimer                  = 33,
	AG_BarrasBravas                = 34,
	AG_Friendly                    = 35,
	AG_MAX                         = 36,

};

// Enum TAGame.AchievementManager_TA.EAchievementEXP0
enum class EAchievementEXP0 : uint8_t
{
	AEXP0_SkyHigh                  = 0,
	AEXP0_AllFours                 = 1,
	AEXP0_Gladiator                = 2,
	AEXP0_MAX                      = 3,

};

// Enum TAGame.AchievementManager_TA.EAchievementDLC0
enum class EAchievementDLC0 : uint8_t
{
	ADLC0_WinningIsWinning         = 0,
	ADLC0_AnInchAnd62Miles         = 1,
	ADLC0_RideOrDie                = 2,
	ADLC0_DontLookBack             = 3,
	ADLC0_FamilyNotFriends         = 4,
	ADLC0_DriftKing                = 5,
	ADLC0_MAX                      = 6,

};

// Enum TAGame.AchievementManager_TA.EAchievementDLC1
enum class EAchievementDLC1 : uint8_t
{
	ADLC1_SurvivalOfTheFittest     = 0,
	ADLC1_Heartbreaker             = 1,
	ADLC1_NaturalProgression       = 2,
	ADLC1_Throwback                = 3,
	ADLC1_HotShotPartTwo           = 4,
	ADLC1_MAX                      = 5,

};

// Enum TAGame.AchievementManager_TA.EAchievementDLC2
enum class EAchievementDLC2 : uint8_t
{
	ADLC2_MyWorldIsFire            = 0,
	ADLC2_Spectacular              = 1,
	ADLC2_Savage                   = 2,
	ADLC2_Ruthless                 = 3,
	ADLC2_PsychoMasterExploder     = 4,
	ADLC2_MAX                      = 5,

};

// Enum TAGame.AchievementManager_TA.EAchievementXBO0
enum class EAchievementXBO0 : uint8_t
{
	AXBO0_NiceHat                  = 0,
	AXBO0_MarcusVMasterChief       = 1,
	AXBO0_MAX                      = 2,

};

// Enum TAGame.AchievementManager_TA.EAchievementMeta
enum class EAchievementMeta : uint8_t
{
	AMeta_PointCollector           = 0,
	AMeta_MAX                      = 1,

};

// Enum TAGame.AchievementManager_TA.EAchievementDLC7
enum class EAchievementDLC7 : uint8_t
{
	ADLC7_JoinTheClub              = 0,
	ADLC7_TogetherIsBetter         = 1,
	ADLC7_NewChallenger            = 2,
	ADLC7_PeoplePerson             = 3,
	ADLC7_SquadGoals               = 4,
	ADLC7_BestOfTheBunch           = 5,
	ADLC7_MAX                      = 6,

};

// Enum TAGame.AchievementManager_TA.EAchievementDLC6
enum class EAchievementDLC6 : uint8_t
{
	ADLC6_StormTrooper             = 0,
	ADLC6_GoodTimes                = 1,
	ADLC6_SwapMeet                 = 2,
	ADLC6_TradeSecret              = 3,
	ADLC6_RankUp                   = 4,
	ADLC6_ComingOnStrong           = 5,
	ADLC6_MAX                      = 6,

};

// Enum TAGame.AchievementManager_TA.EAchievementDLC5
enum class EAchievementDLC5 : uint8_t
{
	ADLC5_RegisteredVoter          = 0,
	ADLC5_Metaverse                = 1,
	ADLC5_BraveTheElements         = 2,
	ADLC5_DamageControl            = 3,
	ADLC5_FullCourse               = 4,
	ADLC5_BuckminsterX10           = 5,
	ADLC5_MAX                      = 6,

};

// Enum TAGame.AchievementManager_TA.EAchievementDLC4
enum class EAchievementDLC4 : uint8_t
{
	ADLC4_GG                       = 0,
	ADLC4_Trifecta                 = 1,
	ADLC4_InfinitePower            = 2,
	ADLC4_StoppedCold              = 3,
	ADLC4_SeaTurtle                = 4,
	ADLC4_GetUpMrBubbles           = 5,
	ADLC4_RocketGenocider          = 6,
	ADLC4_MAX                      = 7,

};

// Enum TAGame.AchievementManager_TA.EAchievementDLC3
enum class EAchievementDLC3 : uint8_t
{
	ADLC3_MadScientist             = 0,
	ADLC3_IcingTheCake             = 1,
	ADLC3_LeftWingRightWing        = 2,
	ADLC3_FastBreak                = 3,
	ADLC3_BuzzerBeater             = 4,
	ADLC3_BuddingArtist            = 5,
	ADLC3_OneBetter                = 6,
	ADLC3_Certifiable              = 7,
	ADLC3_MAX                      = 8,

};

// Enum TAGame.ActivityFeedManager_TA.EActivityFeedType
enum class EActivityFeedType : uint8_t
{
	AF_UnlockedBody                = 0,
	AF_DrivenDistance              = 1,
	AF_ScoredGoal                  = 2,
	AF_BlockedShot                 = 3,
	AF_WonGame                     = 4,
	AF_MVPScore                    = 5,
	AF_DefeatedFriend              = 6,
	AF_CompletedRegularSeason      = 7,
	AF_WonChampionship             = 8,
	AF_UnlockedItem                = 9,
	AF_UnlockedSweetTooth          = 10,
	AF_MAX_VALUE                   = 11,

};

// Enum TAGame.PitchTekDrawingComponent_TA.EPitchTekDecalType
enum class EPitchTekDecalType : uint8_t
{
	PTDT_Ball                      = 0,
	PTDT_Car                       = 1,
	PTDT_MAX                       = 2,

};

// Enum TAGame.BTLock.ELockScope
enum class ELockScope : uint8_t
{
	LockScope_Local                = 0,
	LockScope_Global               = 1,
	LockScope_MAX                  = 2,

};

// Enum TAGame.CameraState_ReplayAutoCam_TA.ECountDownFocus
enum class ECountDownFocus : uint8_t
{
	CDF_None                       = 0,
	CDF_Pan                        = 1,
	CDF_Rotate                     = 2,
	CDF_MAX                        = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TAGame.LoadoutSequencer_TA.SequenceData
// 0x0010
struct FSequenceData
{
	class UProductSlot_TA*                             Slot;                                                      // 0x0000(0x0008)
	float                                              AnimDelay;                                                 // 0x0008(0x0004)
	unsigned char                                      bAssetLoaded : 1;                                          // 0x000C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataTZ4R[0x2];                                      // 0x000C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._Types_TA.StatValue
// 0x0014
struct FStatValue
{
	struct FName                                       Id;                                                        // 0x0000(0x0008)
	int                                                Values[0x3];                                               // 0x0008(0x0004)

};
// ScriptStruct TAGame._Types_TA.AssetLoadResult
// 0x0020
struct FAssetLoadResult
{
	int                                                ProductID;                                                 // 0x0000(0x0004)
	struct FName                                       AssetName;                                                 // 0x0004(0x0008)
	unsigned char                                      UnknownDataPOCM[0x4];                                      // 0x000C(0x0004) MISSED OFFSET
	class UProductAsset_TA*                            Asset;                                                     // 0x0010(0x0008)
	class UProductThumbnailAsset_TA*                   ThumbnailAsset;                                            // 0x0018(0x0008)

};
// ScriptStruct TAGame._Types_TA.ClientLoadoutData
// 0x0010
struct FClientLoadoutData
{
	TArray<int>                                        Products;                                                  // 0x0000(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.LoadoutTeamColor
// 0x0008
struct FLoadoutTeamColor
{
	unsigned char                                      Team;                                                      // 0x0000(0x0001)
	unsigned char                                      TeamColorID;                                               // 0x0001(0x0001)
	unsigned char                                      CustomColorID;                                             // 0x0002(0x0001)
	unsigned char                                      UnknownData6QOF[0x1];                                      // 0x0003(0x0001) MISSED OFFSET
	unsigned char                                      bSet : 1;                                                  // 0x0004(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataLLSE[0x2];                                      // 0x0003(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._AITypes_TA.AIProxyData
// 0x0048
struct FAIProxyData
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)
	struct FVector                                     Velocity;                                                  // 0x000C(0x000C)
	struct FVector                                     Gravity;                                                   // 0x0018(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x0024(0x000C)
	float                                              Radius;                                                    // 0x0030(0x0004)
	float                                              Bounce;                                                    // 0x0034(0x0004)
	class AActor*                                      Actor;                                                     // 0x0038(0x0008)
	class AVehicle_TA*                                 Vehicle;                                                   // 0x0040(0x0008)

};
// ScriptStruct TAGame.EngineAudioProfile_TA.AudioMinMax
// 0x0008
struct FAudioMinMax
{
	float                                              Min;                                                       // 0x0000(0x0004) (Edit)
	float                                              RandRange;                                                 // 0x0004(0x0004) (Edit)

};
// ScriptStruct TAGame._Types_TA.LoadoutTeamPaint
// 0x0008 (0x0010 - 0x0008)
struct FLoadoutTeamPaint : public FLoadoutTeamColor
{
	int                                                TeamFinishID;                                              // 0x0008(0x0004)
	int                                                CustomFinishID;                                            // 0x000C(0x0004)

};
// ScriptStruct TAGame._Types_TA.LoadoutData
// 0x0030 (0x0040 - 0x0010)
struct U_Types_TA_FLoadoutData : public FClientLoadoutData
{
	struct FLoadoutTeamPaint                           TeamPaint;                                                 // 0x0010(0x0010)
	struct FName                                       Title;                                                     // 0x0020(0x0008)
	int                                                TeamIndex;                                                 // 0x0028(0x0004)
	unsigned char                                      UnknownData41PF[0x4];                                      // 0x002C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownDataCQ79[0x10];                                     // 0x002C(0x0010) UNKNOWN PROPERTY: ArrayProperty TAGame._Types_TA.LoadoutData.OnlineProducts

};
// ScriptStruct TAGame.EngineAudioProfile_TA.AudioGear
// 0x0010
struct FAudioGear
{
	struct FAudioMinMax                                RPMShiftDownRange;                                         // 0x0000(0x0008) (Edit)
	struct FAudioMinMax                                RPMShiftUpRange;                                           // 0x0008(0x0008) (Edit)

};
// ScriptStruct TAGame._Types_TA.XPInfo
// 0x0020
struct FXPInfo
{
	int                                                TotalXP;                                                   // 0x0000(0x0004)
	int                                                XpLevel;                                                   // 0x0004(0x0004)
	struct FString                                     XPTitle;                                                   // 0x0008(0x0010) (NeedCtorLink)
	int                                                XPProgressInCurrentLevel;                                  // 0x0018(0x0004)
	int                                                XPRequiredForNextLevel;                                    // 0x001C(0x0004)

};
// ScriptStruct TAGame._Types_TA.GFxTeamColor
// 0x0010
struct FGFxTeamColor
{
	struct FColor                                      Value;                                                     // 0x0000(0x0004) (DataBinding)
	int                                                ColorID;                                                   // 0x0004(0x0004) (DataBinding)
	int                                                X;                                                         // 0x0008(0x0004) (DataBinding)
	int                                                Y;                                                         // 0x000C(0x0004) (DataBinding)

};
// ScriptStruct TAGame.ESportEvents_TA.ESportEventData
// 0x00B0
struct FESportEventData
{
	struct FString                                     Image;                                                     // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Title;                                                     // 0x0010(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Description;                                               // 0x0020(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     URL;                                                       // 0x0030(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     UTCStartTime;                                              // 0x0040(0x0010) (NeedCtorLink)
	struct FString                                     UTCEndTime;                                                // 0x0050(0x0010) (NeedCtorLink)
	unsigned char                                      bStartingSoon : 1;                                         // 0x0060(0x0001) BIT_FIELD (Transient, DataBinding)
	unsigned char                                      UnknownDataOWYS[0x2];                                      // 0x0060(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bLiveNow : 1;                                              // 0x0060(0x0001) BIT_FIELD (Transient, DataBinding)
	unsigned char                                      UnknownDataM857[0x2];                                      // 0x0064(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataYTL7[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	class UTexture*                                    ImageTexture;                                              // 0x0068(0x0008) (Transient, DataBinding)
	int                                                ImageTextureSizeX;                                         // 0x0070(0x0004) (Transient, DataBinding)
	int                                                ImageTextureSizeY;                                         // 0x0074(0x0004) (Transient, DataBinding)
	struct FString                                     StartTime;                                                 // 0x0078(0x0010) (Transient, NeedCtorLink, DataBinding)
	struct FString                                     EndTime;                                                   // 0x0088(0x0010) (Transient, NeedCtorLink, DataBinding)
	unsigned char                                      UnknownDataZ2WD[0x8];                                      // 0x0098(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.ESportEvents_TA.ESportEventData.EpochSoonStartTime
	unsigned char                                      UnknownDataUY3H[0x8];                                      // 0x00A0(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.ESportEvents_TA.ESportEventData.EpochStartTime
	unsigned char                                      UnknownDataW4N5[0x8];                                      // 0x00A8(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.ESportEvents_TA.ESportEventData.EpochEndTime

};
// ScriptStruct TAGame._Types_TA.PlaylistMapPrefs
// 0x000C (0x002C - 0x0020)
struct FPlaylistMapPrefs : public U_Types_X_FMapPrefs
{
	struct FName                                       Playlist;                                                  // 0x0020(0x0008)
	unsigned char                                      bOverrideGlobal : 1;                                       // 0x0028(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataRRQR[0x2];                                      // 0x0028(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._Types_TA.DemolishData
// 0x0028
struct FDemolishData
{
	class ARBActor_TA*                                 Attacker;                                                  // 0x0000(0x0008)
	class ACar_TA*                                     Victim;                                                    // 0x0008(0x0008)
	struct FVector                                     AttackerVelocity;                                          // 0x0010(0x000C)
	struct FVector                                     VictimVelocity;                                            // 0x001C(0x000C)

};
// ScriptStruct TAGame.CarPreviewAnim_TA.PreviewAnimKeyframe
// 0x0038
struct FPreviewAnimKeyframe
{
	struct FRotator                                    Rotation;                                                  // 0x0000(0x000C) (Edit)
	struct FVector                                     Translation;                                               // 0x000C(0x000C) (Edit)
	struct FViewTargetTransitionParams                 BlendParams;                                               // 0x0018(0x0010) (Edit)
	struct FVector                                     BouncyChassisForce;                                        // 0x0028(0x000C) (Edit)
	unsigned char                                      bAddRotation : 1;                                          // 0x0034(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData5TZ7[0x2];                                      // 0x0034(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAddTranslation : 1;                                       // 0x0034(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataEE7D[0x2];                                      // 0x0038(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._Types_TA.InputRate
// 0x0008
struct FInputRate
{
	float                                              RiseRate;                                                  // 0x0000(0x0004) (Edit)
	float                                              FallRate;                                                  // 0x0004(0x0004) (Edit)

};
// ScriptStruct TAGame.FlockActor_TA.FlockAgent
// 0x0038
struct FFlockAgent
{
	unsigned char                                      bWaitingForOtherAgents : 1;                                // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownData7Y8I[0x2];                                      // 0x0000(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              DistanceAlongSpline;                                       // 0x0004(0x0004)
	float                                              Scale;                                                     // 0x0008(0x0004)
	struct FVector                                     Position;                                                  // 0x000C(0x000C)
	struct FVector                                     Velocity;                                                  // 0x0018(0x000C)
	struct FVector                                     NormalizedSplineOffset;                                    // 0x0024(0x000C)
	class ASplineActor*                                CurrentSplineActor;                                        // 0x0030(0x0008)

};
// ScriptStruct TAGame._Types_TA.PersonaDataId
// 0x0038
struct FPersonaDataId
{
	struct FUniqueNetId                                PersonaId;                                                 // 0x0000(0x0038) (DataBinding)

};
// ScriptStruct TAGame._Types_TA.MapImageLoadResult
// 0x0010
struct FMapImageLoadResult
{
	class UTexture2D*                                  Image;                                                     // 0x0000(0x0008)
	struct FName                                       MapName;                                                   // 0x0008(0x0008)

};
// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxMapPreference
// 0x0031
struct FGFxMapPreference
{
	struct FName                                       MapID;                                                     // 0x0000(0x0008) (DataBinding)
	struct FName                                       MapTypeID;                                                 // 0x0008(0x0008) (DataBinding)
	struct FName                                       PlaylistId;                                                // 0x0010(0x0008) (DataBinding)
	struct FString                                     Label;                                                     // 0x0018(0x0010) (NeedCtorLink, DataBinding)
	class UTexture2D*                                  Thumbnail;                                                 // 0x0028(0x0008) (DataBinding)
	TEnumAsByte<EMapPrefType>                          Preference;                                                // 0x0030(0x0001) (DataBinding)

};
// ScriptStruct TAGame._Types_TA.ProductThumbnailResult
// 0x0018
struct FProductThumbnailResult
{
	class UProductAsset_TA*                            Asset;                                                     // 0x0000(0x0008)
	class UOnlineProduct_TA*                           OnlineProduct;                                             // 0x0008(0x0008)
	class UProductThumbnail_TA*                        Thumbnail;                                                 // 0x0010(0x0008)

};
// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxMapPlaylist
// 0x002C
struct FGFxMapPlaylist
{
	struct FName                                       PlaylistId;                                                // 0x0000(0x0008) (DataBinding)
	struct FName                                       PlaylistTypeID;                                            // 0x0008(0x0008) (DataBinding)
	struct FString                                     Label;                                                     // 0x0010(0x0010) (NeedCtorLink, DataBinding)
	int                                                LikesRemaining;                                            // 0x0020(0x0004) (DataBinding)
	int                                                DislikesRemaining;                                         // 0x0024(0x0004) (DataBinding)
	unsigned char                                      bOverrideGlobal : 1;                                       // 0x0028(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataBT1N[0x2];                                      // 0x0028(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.AIController_TA.SkillRange
// 0x000C
struct FSkillRange
{
	float                                              Easy;                                                      // 0x0000(0x0004) (Edit)
	float                                              Hard;                                                      // 0x0004(0x0004) (Edit)
	float                                              Value;                                                     // 0x0008(0x0004) (Transient)

};
// ScriptStruct TAGame._Types_TA.RandomWeight
// 0x0010
struct FRandomWeight
{
	class UObject*                                     Obj;                                                       // 0x0000(0x0008)
	float                                              Weight;                                                    // 0x0008(0x0004)
	float                                              OrigWeight;                                                // 0x000C(0x0004)

};
// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxPlaylistType
// 0x0018
struct FGFxPlaylistType
{
	struct FName                                       PlaylistTypeID;                                            // 0x0000(0x0008) (DataBinding)
	struct FString                                     Label;                                                     // 0x0008(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame.FriendsListUtils_TA.FriendInfoCounts
// 0x0010
struct FFriendInfoCounts
{
	int                                                OnlinePlatform;                                            // 0x0000(0x0004)
	int                                                InGamePlatform;                                            // 0x0004(0x0004)
	int                                                OnlinePsyNet;                                              // 0x0008(0x0004)
	int                                                InGamePsyNet;                                              // 0x000C(0x0004)

};
// ScriptStruct TAGame._Types_TA.VehicleInputs
// 0x0020
struct FVehicleInputs
{
	float                                              Throttle;                                                  // 0x0000(0x0004) (Edit)
	float                                              Steer;                                                     // 0x0004(0x0004) (Edit)
	float                                              Pitch;                                                     // 0x0008(0x0004) (Edit)
	float                                              Yaw;                                                       // 0x000C(0x0004) (Edit)
	float                                              Roll;                                                      // 0x0010(0x0004) (Edit)
	float                                              DodgeForward;                                              // 0x0014(0x0004) (Edit)
	float                                              DodgeRight;                                                // 0x0018(0x0004) (Edit)
	unsigned char                                      bHandbrake : 1;                                            // 0x001C(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataLGKV[0x2];                                      // 0x001C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bJump : 1;                                                 // 0x001C(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataTE4T[0x2];                                      // 0x0020(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bActivateBoost : 1;                                        // 0x001C(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataY76I[0x2];                                      // 0x0020(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bHoldingBoost : 1;                                         // 0x001C(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataNEIV[0x2];                                      // 0x0020(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bJumped : 1;                                               // 0x001C(0x0001) BIT_FIELD
	unsigned char                                      UnknownData23ZP[0x2];                                      // 0x0020(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bHoldingTurboTires : 1;                                    // 0x001C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataTAY9[0x2];                                      // 0x0020(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxMapType
// 0x0020
struct FGFxMapType
{
	struct FName                                       MapTypeID;                                                 // 0x0000(0x0008) (DataBinding)
	struct FString                                     Label;                                                     // 0x0008(0x0010) (NeedCtorLink, DataBinding)
	class UMapSet_TA*                                  MapSet;                                                    // 0x0018(0x0008)

};
// ScriptStruct TAGame.AIController_TA.CachedProxyData
// 0x005C
struct FCachedProxyData
{
	class UBTProxyType*                                Type;                                                      // 0x0000(0x0008)
	int                                                Index;                                                     // 0x0008(0x0004)
	unsigned char                                      UnknownData5O1R[0x4];                                      // 0x000C(0x0004) MISSED OFFSET
	struct FAIProxyData                                Data;                                                      // 0x0010(0x0048)
	float                                              CacheTime;                                                 // 0x0058(0x0004)

};
// ScriptStruct TAGame.AIController_TA.CachedTargetData
// 0x005C
struct FCachedTargetData
{
	class UBTTarget*                                   Target;                                                    // 0x0000(0x0008)
	int                                                Index;                                                     // 0x0008(0x0004)
	unsigned char                                      UnknownDataEVFM[0x4];                                      // 0x000C(0x0004) MISSED OFFSET
	struct FAIProxyData                                Data;                                                      // 0x0010(0x0048)
	float                                              CacheTime;                                                 // 0x0058(0x0004)

};
// ScriptStruct TAGame.AIController_TA.CachedObstaclePoly
// 0x0020
struct FCachedObstaclePoly
{
	struct FPointer                                    Poly;                                                      // 0x0000(0x0008) (Native)
	unsigned char                                      UnknownDataSMQW[0x8];                                      // 0x0008(0x0008) MISSED OFFSET
	struct FPlane                                      Plane;                                                     // 0x0010(0x0010)

};
// ScriptStruct TAGame.AIController_TA.CachedObstaclesData
// 0x0028
struct FCachedObstaclesData
{
	struct FVector                                     CarLocation;                                               // 0x0000(0x000C)
	struct FVector                                     CarNavMeshLocation;                                        // 0x000C(0x000C)
	TArray<struct FCachedObstaclePoly>                 Polys;                                                     // 0x0018(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.OnlineStorageMetadata_TA.StorageMetadata
// 0x0019
struct UOnlineStorageMetadata_TA_FStorageMetadata
{
	struct FName                                       Category;                                                  // 0x0000(0x0008)
	int                                                UpdateTick;                                                // 0x0008(0x0004)
	unsigned char                                      bPendingCommit : 1;                                        // 0x000C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataFPES[0x2];                                      // 0x000C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataLI6F[0x8];                                      // 0x0010(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.OnlineStorageMetadata_TA.StorageMetadata.LastSyncCompleteTime
	TEnumAsByte<EObjectEncoding>                       Encoding;                                                  // 0x0018(0x0001)

};
// ScriptStruct TAGame._Types_TA.EditorRoundData
// 0x0018
struct FEditorRoundData
{
	float                                              TimeLimit;                                                 // 0x0000(0x0004) (DataBinding)
	unsigned char                                      UnknownData8D8L[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FString>                             SerializedArchetypes;                                      // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.GFxData_Map_TA.GFxMapData
// 0x0034
struct FGFxMapData
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (DataBinding)
	struct FString                                     FriendlyName;                                              // 0x0008(0x0010) (NeedCtorLink, DataBinding)
	class UTexture2D*                                  Thumbnail;                                                 // 0x0018(0x0008) (DataBinding)
	class UTexture2D*                                  LargeImage;                                                // 0x0020(0x0008)
	class UMapData_TA*                                 Data;                                                      // 0x0028(0x0008)
	int                                                GameMode;                                                  // 0x0030(0x0004)

};
// ScriptStruct TAGame.GFxData_MapSelection_TA.GFxMapSelectionData
// 0x000C
struct FGFxMapSelectionData
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (DataBinding)
	unsigned char                                      bSelected : 1;                                             // 0x0008(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData9V4C[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._Types_TA.OnlineXPModifier
// 0x0034
struct FOnlineXPModifier
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (DataBinding)
	float                                              Modifier;                                                  // 0x0008(0x0004) (DataBinding)
	TEnumAsByte<EOnlineXPModifierType>                 ModifierType;                                              // 0x000C(0x0001) (DataBinding)
	unsigned char                                      UnknownData9KSN[0x3];                                      // 0x000D(0x0003) MISSED OFFSET
	int                                                Value;                                                     // 0x0010(0x0004) (DataBinding)
	unsigned char                                      UnknownDataD2MZ[0x4];                                      // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     LocalizedText;                                             // 0x0018(0x0010) (NeedCtorLink, DataBinding)
	unsigned char                                      bPremium : 1;                                              // 0x0028(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataFXIF[0x2];                                      // 0x0028(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bPenalty : 1;                                              // 0x0028(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData4S48[0x2];                                      // 0x002C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Count;                                                     // 0x002C(0x0004) (DataBinding)
	int                                                MaxCount;                                                  // 0x0030(0x0004) (DataBinding)

};
// ScriptStruct TAGame._Types_TA.OnlineXPReward
// 0x0040
struct U_Types_TA_FOnlineXPReward
{
	struct FName                                       RewardName;                                                // 0x0000(0x0008)
	float                                              Total;                                                     // 0x0008(0x0004)
	int                                                Base;                                                      // 0x000C(0x0004)
	int                                                BaseLevel;                                                 // 0x0010(0x0004)
	int                                                Level;                                                     // 0x0014(0x0004)
	int                                                CapAdjustment;                                             // 0x0018(0x0004)
	unsigned char                                      UnknownDataSKXM[0x4];                                      // 0x001C(0x0004) MISSED OFFSET
	TArray<int>                                        LevelThresholds;                                           // 0x0020(0x0010) (NeedCtorLink)
	TArray<struct FOnlineXPModifier>                   RewardModifiers;                                           // 0x0030(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.RewardDrop_TA.GFxLevelThreshold
// 0x0004
struct FGFxLevelThreshold
{
	int                                                TotalXP;                                                   // 0x0000(0x0004) (DataBinding)

};
// ScriptStruct TAGame.ProductHash_TA.ProductHashSource
// 0x0018
struct FProductHashSource
{
	int                                                ProductID;                                                 // 0x0000(0x0004)
	unsigned char                                      UnknownDataT1GB[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	unsigned char                                      UnknownDataTKUR[0x8];                                      // 0x0004(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.ProductHash_TA.ProductHashSource.InstanceID
	class UOnlineProduct_TA*                           OnlineProduct;                                             // 0x0010(0x0008)

};
// ScriptStruct TAGame._Types_TA.CurrencyProductData
// 0x0010
struct U_Types_TA_FCurrencyProductData
{
	class UProduct_TA*                                 Product;                                                   // 0x0000(0x0008)
	class UOnlineProduct_TA*                           OnlineProduct;                                             // 0x0008(0x0008)

};
// ScriptStruct TAGame._Types_TA.ClientLoadoutOnlineProduct
// 0x0010
struct FClientLoadoutOnlineProduct
{
	TArray<class UProductAttribute_TA*>                Attributes;                                                // 0x0000(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.Profile_TA.ProfileProduct
// 0x0018
struct FProfileProduct
{
	unsigned char                                      UnknownDataWF4L[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.Profile_TA.ProfileProduct.InstanceID
	TArray<class UProductAttribute_TA*>                Attributes;                                                // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.Currency
// 0x0058
struct FCurrency
{
	TEnumAsByte<ECurrency>                             Type;                                                      // 0x0000(0x0001)
	unsigned char                                      UnknownDataLJTO[0x3];                                      // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                      // 0x0004(0x0008)
	unsigned char                                      bCanBeTraded : 1;                                          // 0x000C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataP7ZI[0x2];                                      // 0x000C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                TradeHold;                                                 // 0x0010(0x0004)
	unsigned char                                      UnknownDataVV2G[0x4];                                      // 0x0014(0x0004) MISSED OFFSET
	struct U_Types_TA_FCurrencyProductData             ProductData;                                               // 0x0018(0x0010)
	int                                                CurrencyID;                                                // 0x0028(0x0004) (DataBinding)
	int                                                Id;                                                        // 0x002C(0x0004) (DataBinding)
	int                                                Amount;                                                    // 0x0030(0x0004) (DataBinding)
	unsigned char                                      UnknownDataJ8ZY[0x4];                                      // 0x0034(0x0004) MISSED OFFSET
	class UTexture*                                    LargeImage;                                                // 0x0038(0x0008) (DataBinding)
	class UTexture*                                    SmallImage;                                                // 0x0040(0x0008) (DataBinding)
	struct FString                                     LocalizedName;                                             // 0x0048(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame._Types_TA.OnlineProductAttribute
// 0x0018
struct FOnlineProductAttribute
{
	struct FName                                       Key;                                                       // 0x0000(0x0008)
	struct FString                                     Value;                                                     // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.BreakOutActor_Platform_TA.BreakoutDamageState
// 0x0020
struct FBreakoutDamageState
{
	unsigned char                                      State;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownDataVLFY[0x7];                                      // 0x0001(0x0007) MISSED OFFSET
	class APRI_TA*                                     Causer;                                                    // 0x0008(0x0008)
	struct FVector                                     DamageLocation;                                            // 0x0010(0x000C)
	unsigned char                                      bDirectDamage : 1;                                         // 0x001C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataBM16[0x2];                                      // 0x001C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bImmediate : 1;                                            // 0x001C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataD4VQ[0x2];                                      // 0x0020(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._Types_TA.ClientLoadoutOnlineData
// 0x0010
struct FClientLoadoutOnlineData
{
	TArray<struct FClientLoadoutOnlineProduct>         Products;                                                  // 0x0000(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._AITypes_TA.AICachedGoalInfo
// 0x0014
struct FAICachedGoalInfo
{
	class UGoal_TA*                                    Goal;                                                      // 0x0000(0x0008) (ExportObject, Component, EditInline)
	struct FVector                                     FieldSize;                                                 // 0x0008(0x000C)

};
// ScriptStruct TAGame._Types_TA.OnlineProductData
// 0x002C
struct FOnlineProductData
{
	int                                                ProductID;                                                 // 0x0000(0x0004)
	unsigned char                                      UnknownData991A[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData66IN[0x8];                                      // 0x0004(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._Types_TA.OnlineProductData.InstanceID
	int                                                SeriesID;                                                  // 0x0010(0x0004)
	unsigned char                                      UnknownDataT51N[0x4];                                      // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FOnlineProductAttribute>             Attributes;                                                // 0x0018(0x0010) (NeedCtorLink)
	int                                                TradeHold;                                                 // 0x0028(0x0004)

};
// ScriptStruct TAGame.RPC_MicroTransactions_GetContainerDropTable_TA.RPCContainerDropTable
// 0x0018
struct FRPCContainerDropTable
{
	int                                                SeriesID;                                                  // 0x0000(0x0004) (Transient)
	int                                                ProductID;                                                 // 0x0004(0x0004) (Transient)
	TArray<struct FOnlineProductData>                  Drops;                                                     // 0x0008(0x0010) (Transient, NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.LoadoutProductData
// 0x0020
struct FLoadoutProductData
{
	int                                                SlotIndex;                                                 // 0x0000(0x0004)
	int                                                ProductID;                                                 // 0x0004(0x0004)
	unsigned char                                      UnknownDataPECG[0x8];                                      // 0x0008(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._Types_TA.LoadoutProductData.InstanceID
	TArray<class UProductAttribute_TA*>                Attributes;                                                // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.FXActor_BreakoutPlatform_TA.PlatformParam
// 0x0020
struct FPlatformParam
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit)
	struct FInterpCurveFloat                           ValueOverTime;                                             // 0x0008(0x0018) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.ServerSetLoadoutTeam
// 0x0020
struct FServerSetLoadoutTeam
{
	TArray<struct FLoadoutProductData>                 Products;                                                  // 0x0000(0x0010) (NeedCtorLink)
	struct FLoadoutTeamPaint                           TeamPaint;                                                 // 0x0010(0x0010)

};
// ScriptStruct TAGame._Types_TA.ServerSetLoadoutParams
// 0x0048
struct FServerSetLoadoutParams
{
	struct FName                                       Title;                                                     // 0x0000(0x0008)
	struct FServerSetLoadoutTeam                       Loadouts[0x2];                                             // 0x0008(0x0020) (NeedCtorLink)

};
// ScriptStruct TAGame.GameObserver_TA.CarGoalData
// 0x000C
struct FCarGoalData
{
	float                                              Distance;                                                  // 0x0000(0x0004)
	float                                              Dot;                                                       // 0x0004(0x0004)
	float                                              DotBetweenBall;                                            // 0x0008(0x0004)

};
// ScriptStruct TAGame.GameObserver_TA.CarData
// 0x0058
struct FCarData
{
	class AVehicle_TA*                                 Car;                                                       // 0x0000(0x0008)
	float                                              Dot;                                                       // 0x0008(0x0004)
	float                                              DistToBall;                                                // 0x000C(0x0004)
	float                                              SpeedTowardsBall;                                          // 0x0010(0x0004)
	float                                              TimeToBall;                                                // 0x0014(0x0004)
	struct FCarGoalData                                OffensiveGoal;                                             // 0x0018(0x000C)
	struct FCarGoalData                                DefensiveGoal;                                             // 0x0024(0x000C)
	struct FString                                     LastEvent;                                                 // 0x0030(0x0010) (NeedCtorLink)
	float                                              BallHitProbability;                                        // 0x0040(0x0004)
	float                                              Offense;                                                   // 0x0044(0x0004)
	float                                              Defense;                                                   // 0x0048(0x0004)
	float                                              Aerial;                                                    // 0x004C(0x0004)
	float                                              PredictedDistToBall;                                       // 0x0050(0x0004)
	float                                              TimeInAir;                                                 // 0x0054(0x0004)

};
// ScriptStruct TAGame.GameObserver_TA.BallData
// 0x001C
struct FBallData
{
	class ABall_TA*                                    Ball;                                                      // 0x0000(0x0008)
	float                                              Altitude;                                                  // 0x0008(0x0004)
	float                                              AerialSkill;                                               // 0x000C(0x0004)
	class AVehicle_TA*                                 LastHitBy;                                                 // 0x0010(0x0008)
	float                                              LastHitTime;                                               // 0x0018(0x0004)

};
// ScriptStruct TAGame.RPC_MicroTransactions_GetCatalog_TA.MTCatalogInfo
// 0x004C
struct FMTCatalogInfo
{
	int                                                Id;                                                        // 0x0000(0x0004)
	unsigned char                                      UnknownDataICFP[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FMTProductInfo>                      Items;                                                     // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct FCurrency>                           Currencies;                                                // 0x0018(0x0010) (NeedCtorLink)
	struct FString                                     PlatformProductID;                                         // 0x0028(0x0010) (NeedCtorLink)
	struct FString                                     Category;                                                  // 0x0038(0x0010) (NeedCtorLink)
	int                                                Price;                                                     // 0x0048(0x0004)

};
// ScriptStruct TAGame._Types_TA.RocketPassUnlock
// 0x0038
struct FRocketPassUnlock
{
	int                                                Tier;                                                      // 0x0000(0x0004)
	unsigned char                                      UnknownDataU5N0[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FOnlineProductData>                  ProductData;                                               // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct U_Types_TA_FOnlineXPReward>          RewardDrops;                                               // 0x0018(0x0010) (NeedCtorLink)
	TArray<struct FCurrency>                           CurrencyDrops;                                             // 0x0028(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.RPC_MicroTransactions_GetCatalog_TA.MTProductInfo
// 0x000C
struct FMTProductInfo
{
	unsigned char                                      UnknownDataC7OB[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_MicroTransactions_GetCatalog_TA.MTProductInfo.ProductID
	int                                                Count;                                                     // 0x0008(0x0004)

};
// ScriptStruct TAGame.AIManager_TA.CachedNavMeshLocation
// 0x0020
struct FCachedNavMeshLocation
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)
	struct FVector                                     NavMeshLocation;                                           // 0x0008(0x000C)
	struct FVector                                     OldActorLocation;                                          // 0x0014(0x000C)

};
// ScriptStruct TAGame.GFxData_ContainerDrops_TA.ContainerInfo
// 0x0018
struct FContainerInfo
{
	int                                                SeriesID;                                                  // 0x0000(0x0004) (DataBinding)
	int                                                ProductID;                                                 // 0x0004(0x0004) (DataBinding)
	struct FString                                     PossibleContents;                                          // 0x0008(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame._Types_TA.UISavedKeyValue
// 0x0018
struct FUISavedKeyValue
{
	struct FName                                       Key;                                                       // 0x0000(0x0008)
	struct FString                                     Value;                                                     // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.GFxData_DLC_TA.GFxDLCData
// 0x0060
struct FGFxDLCData
{
	struct FString                                     PackName;                                                  // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	struct FName                                       Id;                                                        // 0x0010(0x0008) (DataBinding)
	int                                                ProductID;                                                 // 0x0018(0x0004) (DataBinding)
	unsigned char                                      UnknownDataXC8W[0x4];                                      // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     SubItems;                                                  // 0x0020(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Price;                                                     // 0x0030(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     DiscountPrice;                                             // 0x0040(0x0010) (NeedCtorLink, DataBinding)
	int                                                DiscountPercentage;                                        // 0x0050(0x0004) (DataBinding)
	int                                                LabelSlotIndex;                                            // 0x0054(0x0004) (DataBinding)
	unsigned char                                      bUnlocked : 1;                                             // 0x0058(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataULSP[0x2];                                      // 0x0058(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIsNew : 1;                                                // 0x0058(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataGO8X[0x2];                                      // 0x005C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                PurchaseTime;                                              // 0x005C(0x0004) (Transient)

};
// ScriptStruct TAGame._Types_TA.ProfileCameraSettings
// 0x001C
struct FProfileCameraSettings
{
	float                                              FOV;                                                       // 0x0000(0x0004)
	float                                              Height;                                                    // 0x0004(0x0004)
	float                                              Pitch;                                                     // 0x0008(0x0004)
	float                                              Distance;                                                  // 0x000C(0x0004)
	float                                              Stiffness;                                                 // 0x0010(0x0004)
	float                                              SwivelSpeed;                                               // 0x0014(0x0004)
	float                                              TransitionSpeed;                                           // 0x0018(0x0004)

};
// ScriptStruct TAGame._Types_TA.ProfileAutoCamSettings
// 0x0028
struct FProfileAutoCamSettings
{
	float                                              FOV;                                                       // 0x0000(0x0004)
	float                                              Height;                                                    // 0x0004(0x0004)
	float                                              Distance;                                                  // 0x0008(0x0004)
	float                                              MoveSpeed;                                                 // 0x000C(0x0004)
	float                                              MoveSpeedZ;                                                // 0x0010(0x0004)
	float                                              RotateSpeed;                                               // 0x0014(0x0004)
	float                                              AerialDistance;                                            // 0x0018(0x0004)
	float                                              FocusBlendSpeed;                                           // 0x001C(0x0004)
	float                                              AerialPrediction;                                          // 0x0020(0x0004)
	unsigned char                                      bUseReplayCamera : 1;                                      // 0x0024(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataE1UA[0x2];                                      // 0x0024(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bFocusOnGoals : 1;                                         // 0x0024(0x0001) BIT_FIELD
	unsigned char                                      UnknownData0XK2[0x2];                                      // 0x0028(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.RPC_MicroTransactions_StartPurchase_TA.MTCartItem
// 0x0008
struct FMTCartItem
{
	int                                                CatalogID;                                                 // 0x0000(0x0004)
	int                                                Count;                                                     // 0x0004(0x0004)

};
// ScriptStruct TAGame._Types_TA.ProductFilter
// 0x0128
struct FProductFilter
{
	TArray<class UOnlineProduct_TA*>                   OnlineProducts;                                            // 0x0000(0x0010) (NeedCtorLink)
	TArray<class UProduct_TA*>                         Products;                                                  // 0x0010(0x0010) (NeedCtorLink)
	TArray<struct FProductHashID>                      ArchivedProducts;                                          // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     Label;                                                     // 0x0030(0x0010) (NeedCtorLink)
	TArray<int>                                        Slots;                                                     // 0x0040(0x0010) (NeedCtorLink)
	TArray<class UProductSlot_TA*>                     ProhibitedSlots;                                           // 0x0050(0x0010) (NeedCtorLink)
	TArray<TEnumAsByte<EProductQuality>>               ExclusiveQualities;                                        // 0x0060(0x0010) (NeedCtorLink)
	TArray<TEnumAsByte<EProductQuality>>               ProhibitedQualities;                                       // 0x0070(0x0010) (NeedCtorLink)
	TArray<TEnumAsByte<EUnlockMethod>>                 UnlockMethods;                                             // 0x0080(0x0010) (NeedCtorLink)
	TArray<TEnumAsByte<EProductTradeRestriction>>      TradeRestrictions;                                         // 0x0090(0x0010) (NeedCtorLink)
	TArray<int>                                        TradeHoldRestrictions;                                     // 0x00A0(0x0010) (NeedCtorLink)
	TArray<class UClass*>                              ExclusiveAttributes;                                       // 0x00B0(0x0010) (NeedCtorLink)
	TArray<class UClass*>                              ProhibitedAttributes;                                      // 0x00C0(0x0010) (NeedCtorLink)
	TEnumAsByte<EProductFilterSortType>                SortType;                                                  // 0x00D0(0x0001)
	unsigned char                                      UnknownDataLB62[0x7];                                      // 0x00D1(0x0007) MISSED OFFSET
	TArray<int>                                        SeriesIDs;                                                 // 0x00D8(0x0010) (NeedCtorLink)
	struct FProductHashID                              PackHashID;                                                // 0x00E8(0x0004)
	unsigned char                                      bExcludePacks : 1;                                         // 0x00EC(0x0001) BIT_FIELD
	unsigned char                                      UnknownData58YK[0x2];                                      // 0x00EC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIgnoreEquipped : 1;                                       // 0x00EC(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataNZQ9[0x2];                                      // 0x00F0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIgnoreLicensedCars : 1;                                   // 0x00EC(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataPONM[0x2];                                      // 0x00F0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bStackProducts : 1;                                        // 0x00EC(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataBHBT[0x2];                                      // 0x00F0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowEquippedArchivedProducts : 1;                        // 0x00EC(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataOQH9[0x2];                                      // 0x00F0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<int>                                        Loadout;                                                   // 0x00F0(0x0010) (NeedCtorLink)
	TArray<struct FProductHashID>                      EquippedHashIDs;                                           // 0x0100(0x0010) (NeedCtorLink)
	unsigned char                                      LogLevel;                                                  // 0x0110(0x0001)
	TEnumAsByte<EArchiveProductFilter>                 ArchivedProductFilter;                                     // 0x0111(0x0001)
	unsigned char                                      UnknownDataWAD6[0x6];                                      // 0x0112(0x0006) MISSED OFFSET
	TArray<TEnumAsByte<EBlueprintType>>                ProhibitedBlueprints;                                      // 0x0118(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.GFxData_MTXGarage_TA.CartInfo
// 0x0008
struct FCartInfo
{
	int                                                CatalogID;                                                 // 0x0000(0x0004) (DataBinding)
	int                                                Count;                                                     // 0x0004(0x0004) (DataBinding)

};
// ScriptStruct TAGame._Types_TA.XPRewardData
// 0x000C
struct FXPRewardData
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (DataBinding)
	float                                              Amount;                                                    // 0x0008(0x0004) (DataBinding)

};
// ScriptStruct TAGame._Types_TA.RocketPassRewardData
// 0x0038
struct FRocketPassRewardData
{
	int                                                Tier;                                                      // 0x0000(0x0004)
	unsigned char                                      UnknownData1XKT[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FOnlineProductData>                  ProductData;                                               // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct FXPRewardData>                       XPRewards;                                                 // 0x0018(0x0010) (NeedCtorLink)
	TArray<struct FCurrency>                           CurrencyDrops;                                             // 0x0028(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._TourTypes_TA.TourSearchSettings
// 0x005C
struct FTourSearchSettings
{
	struct FString                                     Text;                                                      // 0x0000(0x0010) (NeedCtorLink)
	int                                                RankMin;                                                   // 0x0010(0x0004)
	int                                                RankMax;                                                   // 0x0014(0x0004)
	TArray<int>                                        GameModes;                                                 // 0x0018(0x0010) (NeedCtorLink)
	TArray<struct FString>                             Regions;                                                   // 0x0028(0x0010) (NeedCtorLink)
	int                                                TeamSize;                                                  // 0x0038(0x0004)
	int                                                BracketSize;                                               // 0x003C(0x0004)
	unsigned char                                      bEnableCrossplay : 1;                                      // 0x0040(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataRCSC[0x2];                                      // 0x0040(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataWMP4[0x4];                                      // 0x0044(0x0004) MISSED OFFSET
	unsigned char                                      UnknownDataJO1N[0x8];                                      // 0x0044(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._TourTypes_TA.TourSearchSettings.StartTime
	unsigned char                                      UnknownDataH744[0x8];                                      // 0x0050(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._TourTypes_TA.TourSearchSettings.EndTime
	unsigned char                                      UnknownDataFPQ4 : 32;                                      // 0x0058(0x0001)
	unsigned char                                      bShowFull : 1;                                             // 0x0058(0x0001) BIT_FIELD
	unsigned char                                      UnknownData37F4[0x2];                                      // 0x0058(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bShowIneligibleRank : 1;                                   // 0x0058(0x0001) BIT_FIELD
	unsigned char                                      UnknownData51WM[0x2];                                      // 0x005C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.ArenaReflectionsManager_TA.SlapbackActorSetup
// 0x0018
struct FSlapbackActorSetup
{
	struct FName                                       Bus;                                                       // 0x0000(0x0008)
	TEnumAsByte<EPinnedAxisType>                       Axis;                                                      // 0x0008(0x0001)
	unsigned char                                      UnknownDataD359[0x3];                                      // 0x0009(0x0003) MISSED OFFSET
	struct FVector                                     FieldLocation;                                             // 0x000C(0x000C)

};
// ScriptStruct TAGame._TourTypes_TA.TourPrivateCredentials
// 0x0020
struct FTourPrivateCredentials
{
	struct FString                                     Title;                                                     // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Password;                                                  // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._TourTypes_TA.TourReward
// 0x0014
struct FTourReward
{
	TArray<struct FOnlineProductData>                  Rewards;                                                   // 0x0000(0x0010) (NeedCtorLink)
	int                                                Placement;                                                 // 0x0010(0x0004)

};
// ScriptStruct TAGame._TourTypes_TA.TourCreateSettings
// 0x0038
struct FTourCreateSettings
{
	class UTourSettings_TA*                            Settings;                                                  // 0x0000(0x0008)
	struct FTourPrivateCredentials                     PrivateSettings;                                           // 0x0008(0x0020) (NeedCtorLink)
	TArray<struct FTourReward>                         Rewards;                                                   // 0x0028(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.RocketPassBundleInfo
// 0x0038
struct FRocketPassBundleInfo
{
	int                                                PurchasableID;                                             // 0x0000(0x0004) (Transient, DataBinding)
	int                                                KeyCost;                                                   // 0x0004(0x0004) (Transient, DataBinding)
	int                                                OriginalKeyCost;                                           // 0x0008(0x0004) (Transient, DataBinding)
	int                                                OriginalCurrencyCost;                                      // 0x000C(0x0004) (Transient, DataBinding)
	int                                                CurrencyID;                                                // 0x0010(0x0004) (Transient, DataBinding)
	int                                                CurrencyCost;                                              // 0x0014(0x0004) (Transient, DataBinding)
	int                                                Tiers;                                                     // 0x0018(0x0004) (Transient, DataBinding)
	int                                                Savings;                                                   // 0x001C(0x0004) (Transient, DataBinding)
	class UTexture*                                    Image;                                                     // 0x0020(0x0008) (DataBinding)
	struct FString                                     ImageURL;                                                  // 0x0028(0x0010) (Transient, NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.ProductStat
// 0x0008
struct FProductStat
{
	int                                                ProductID;                                                 // 0x0000(0x0004)
	int                                                Value;                                                     // 0x0004(0x0004)

};
// ScriptStruct TAGame.GameObserver_TA.GoalData
// 0x0048
struct FGoalData
{
	class UGoal_TA*                                    Goal;                                                      // 0x0000(0x0008) (ExportObject, Component, EditInline)
	struct FVector                                     GoalFront;                                                 // 0x0008(0x000C)
	struct FVector                                     GoalForward;                                               // 0x0014(0x000C)
	float                                              DotToBall;                                                 // 0x0020(0x0004)
	float                                              DistToBall;                                                // 0x0024(0x0004)
	float                                              BallSpeedTowardsGoal;                                      // 0x0028(0x0004)
	float                                              DotToBallVelocity;                                         // 0x002C(0x0004)
	float                                              RawScorability;                                            // 0x0030(0x0004)
	float                                              Scorability;                                               // 0x0034(0x0004)
	float                                              Defense;                                                   // 0x0038(0x0004)
	int                                                NumDefensiveCars;                                          // 0x003C(0x0004)
	float                                              Offense;                                                   // 0x0040(0x0004)
	int                                                NumOffensiveCars;                                          // 0x0044(0x0004)

};
// ScriptStruct TAGame.ArenaSoundSettings_TA.ArenaStatSound
// 0x0010
struct FArenaStatSound
{
	class UStatEvent_TA*                               StatEvent;                                                 // 0x0000(0x0008) (Edit, EditConst)
	class UAkSoundCue*                                 Sound;                                                     // 0x0008(0x0008) (Edit)

};
// ScriptStruct TAGame._Types_TA.RocketPassStore
// 0x0020
struct FRocketPassStore
{
	TArray<struct FRocketPassBundleInfo>               Tiers;                                                     // 0x0000(0x0010) (Transient, NeedCtorLink)
	TArray<struct FRocketPassBundleInfo>               Bundles;                                                   // 0x0010(0x0010) (Transient, NeedCtorLink)

};
// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductAttribute
// 0x0028
struct FFilterProductAttribute
{
	struct FString                                     Label;                                                     // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	unsigned char                                      bSelected : 1;                                             // 0x0010(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataNVL1[0x2];                                      // 0x0010(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData2DOP[0x4];                                      // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      AttributeClass;                                            // 0x0018(0x0008)
	int                                                PreviewQuantity;                                           // 0x0020(0x0004) (DataBinding)
	unsigned char                                      UnknownData7E81 : 32;                                      // 0x0024(0x0001)
	unsigned char                                      bHidden : 1;                                               // 0x0024(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataLQBF[0x2];                                      // 0x0024(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductQuality
// 0x001C
struct FFilterProductQuality
{
	struct FString                                     Label;                                                     // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	unsigned char                                      bSelected : 1;                                             // 0x0010(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataGNYZ[0x2];                                      // 0x0010(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<EProductQuality>                       Quality;                                                   // 0x0014(0x0001) (DataBinding)
	unsigned char                                      UnknownDataEGRM[0x3];                                      // 0x0015(0x0003) MISSED OFFSET
	int                                                PreviewQuantity;                                           // 0x0018(0x0004) (DataBinding)

};
// ScriptStruct TAGame._Types_TA.RocketPassInfo
// 0x0014
struct FRocketPassInfo
{
	int                                                TierLevel;                                                 // 0x0000(0x0004) (Transient)
	int                                                Pips;                                                      // 0x0004(0x0004) (Transient)
	int                                                PipsPerLevel;                                              // 0x0008(0x0004) (Transient)
	unsigned char                                      bOwnsPremium : 1;                                          // 0x000C(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataKA4H[0x2];                                      // 0x000C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              XPMultiplier;                                              // 0x0010(0x0004) (Transient)

};
// ScriptStruct TAGame.MapDataLoader_TA.MapImageLoadRequest
// 0x0038
struct FMapImageLoadRequest
{
	class UMapData_TA*                                 MapData;                                                   // 0x0000(0x0008)
	struct FName                                       PackageName;                                               // 0x0008(0x0008)
	struct FString                                     AssetPath;                                                 // 0x0010(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                  // 0x0020(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataN1NO[0xC];                                      // 0x0020(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductSorting
// 0x0011
struct FFilterProductSorting
{
	struct FString                                     Label;                                                     // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	TEnumAsByte<EProductFilterSortType>                SortType;                                                  // 0x0010(0x0001) (DataBinding)

};
// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductSeries
// 0x0018
struct FFilterProductSeries
{
	struct FString                                     Label;                                                     // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	unsigned char                                      bSelected : 1;                                             // 0x0010(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData2DS9[0x2];                                      // 0x0010(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                SeriesID;                                                  // 0x0014(0x0004) (DataBinding)

};
// ScriptStruct TAGame.MapDataLoader_TA.MapSelectorPair
// 0x0010
struct FMapSelectorPair
{
	class UMapSet_TA*                                  MapSet;                                                    // 0x0000(0x0008)
	class UMapSelector_TA*                             Selector;                                                  // 0x0008(0x0008) (ExportObject, Component, EditInline)

};
// ScriptStruct TAGame.GFxData_Regions_TA.GFxRegion
// 0x0024
struct FGFxRegion
{
	struct FString                                     Id;                                                        // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (NeedCtorLink, DataBinding)
	unsigned char                                      bSelected : 1;                                             // 0x0020(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataULDR[0x2];                                      // 0x0020(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.NetworkConfig_TA.NetworkLimit
// 0x0010
struct FNetworkLimit
{
	float                                              Min;                                                       // 0x0000(0x0004) (Edit)
	float                                              Max;                                                       // 0x0004(0x0004) (Edit)
	float                                              OldMin;                                                    // 0x0008(0x0004)
	float                                              OldMax;                                                    // 0x000C(0x0004)

};
// ScriptStruct TAGame._Types_TA.ClientFrameData
// 0x0028
struct FClientFrameData
{
	struct FVehicleInputs                              VehicleInput;                                              // 0x0000(0x0020)
	int                                                frame;                                                     // 0x0020(0x0004)
	float                                              TimeStamp;                                                 // 0x0024(0x0004)

};
// ScriptStruct TAGame.NetworkInputBuffer_TA.ClientPacketData
// 0x0030
struct FClientPacketData
{
	float                                              TimeStamp;                                                 // 0x0000(0x0004)
	struct FVector                                     CameraLoc;                                                 // 0x0004(0x000C)
	struct FRotator                                    CameraRot;                                                 // 0x0010(0x000C)
	unsigned char                                      UnknownDataGACU[0x4];                                      // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FClientFrameData>                    Frames;                                                    // 0x0020(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.GFxData_Matchmaking_TA.MessageUpdate
// 0x0018
struct FMessageUpdate
{
	int                                                DelayFromStart;                                            // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownDataQQS9[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     MessageKey;                                                // 0x0008(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame._TourTypes_TA.TourMatchGame
// 0x0014
struct FTourMatchGame
{
	int                                                GameTimeSeconds;                                           // 0x0000(0x0004)
	unsigned char                                      bOverTime : 1;                                             // 0x0004(0x0001) BIT_FIELD
	unsigned char                                      UnknownData5D5H[0x2];                                      // 0x0004(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAborted : 1;                                              // 0x0004(0x0001) BIT_FIELD
	unsigned char                                      UnknownData27MN[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Winner;                                                    // 0x0008(0x0004)
	int                                                Scores[0x2];                                               // 0x000C(0x0004)

};
// ScriptStruct TAGame._TourTypes_TA.TourMatch
// 0x0020
struct FTourMatch
{
	int                                                MatchID;                                                   // 0x0000(0x0004)
	int                                                Teams[0x2];                                                // 0x0004(0x0004)
	int                                                Winner;                                                    // 0x000C(0x0004)
	TArray<struct FTourMatchGame>                      Games;                                                     // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.BeamTraceComponent_TA.BeamTraceProps
// 0x0020
struct FBeamTraceProps
{
	float                                              NextTraceTime;                                             // 0x0000(0x0004)
	struct FVector                                     LastWorldLocation;                                         // 0x0004(0x000C)
	unsigned char                                      LastWorldHit : 1;                                          // 0x0010(0x0001) BIT_FIELD
	unsigned char                                      UnknownData5LB2[0x2];                                      // 0x0010(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataB3E4[0x4];                                      // 0x0014(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    PSC;                                                       // 0x0018(0x0008) (ExportObject, Component, EditInline)

};
// ScriptStruct TAGame.NetworkInputBuffer_TA.InputBufferStats
// 0x0005
struct FInputBufferStats
{
	unsigned char                                      OverBufferFrames;                                          // 0x0000(0x0001)
	unsigned char                                      UnderBufferFrames;                                         // 0x0001(0x0001)
	unsigned char                                      InputBufferLow;                                            // 0x0002(0x0001)
	unsigned char                                      InputBufferHigh;                                           // 0x0003(0x0001)
	unsigned char                                      InputBufferTarget;                                         // 0x0004(0x0001)

};
// ScriptStruct TAGame.GFxData_MTXGarage_TA.MTXPurchaseInfo
// 0x003C
struct FMTXPurchaseInfo
{
	int                                                CatalogID;                                                 // 0x0000(0x0004) (DataBinding)
	unsigned char                                      UnknownDataE1BD[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     PurchasePrice;                                             // 0x0008(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     BundleItems;                                               // 0x0018(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     BundleCurrencies;                                          // 0x0028(0x0010) (NeedCtorLink, DataBinding)
	unsigned char                                      bCanBePlayerTraded : 1;                                    // 0x0038(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataJ0ZO[0x2];                                      // 0x0038(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.PhysicsConfig_TA.SimTimeScaleSettings
// 0x0004
struct FSimTimeScaleSettings
{
	float                                              FixedAdjustSimTimeRate;                                    // 0x0000(0x0004)

};
// ScriptStruct TAGame._Types_TA.ReportPlayerData
// 0x0048
struct FReportPlayerData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	struct FString                                     PlayerName;                                                // 0x0038(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.ReportedPlayerInfo
// 0x0098
struct FReportedPlayerInfo
{
	struct FReportPlayerData                           Reporter;                                                  // 0x0000(0x0048) (NeedCtorLink)
	struct FReportPlayerData                           Offender;                                                  // 0x0048(0x0048) (NeedCtorLink)
	unsigned char                                      ReasonID;                                                  // 0x0090(0x0001)
	unsigned char                                      UnknownDataL6UC[0x3];                                      // 0x0091(0x0003) MISSED OFFSET
	float                                              ReportTimeStamp;                                           // 0x0094(0x0004)

};
// ScriptStruct TAGame.PhysicsConfig_TA.ContinuousSimTimeScaleSettings
// 0x0034
struct FContinuousSimTimeScaleSettings
{
	float                                              TimeDilations[0x5];                                        // 0x0000(0x0004)
	int                                                Inputs_Starved;                                            // 0x0014(0x0004)
	int                                                Inputs_Good;                                               // 0x0018(0x0004)
	int                                                Inputs_Saturated;                                          // 0x001C(0x0004)
	int                                                Inputs_ExtremelySaturated;                                 // 0x0020(0x0004)
	int                                                Inputs_Max;                                                // 0x0024(0x0004)
	int                                                ExtraBufferMax;                                            // 0x0028(0x0004)
	float                                              ExtraBufferHistorySeconds;                                 // 0x002C(0x0004)
	float                                              ExtraBufferUpdatePeriod;                                   // 0x0030(0x0004)

};
// ScriptStruct TAGame.GFxData_Mutators_TA.CustomGameSetting
// 0x0054
struct FCustomGameSetting
{
	struct FString                                     MutatorCategoryName;                                       // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     MutatorCategoryDesc;                                       // 0x0010(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     SettingsName;                                              // 0x0020(0x0010) (NeedCtorLink, DataBinding)
	int                                                SettingIndex;                                              // 0x0030(0x0004) (DataBinding)
	struct FName                                       InternalName;                                              // 0x0034(0x0008)
	int                                                GameSettingCategoryIndex;                                  // 0x003C(0x0004)
	TArray<struct FName>                               SettingNameExplicit;                                       // 0x0040(0x0010) (NeedCtorLink)
	unsigned char                                      bPresetLocked : 1;                                         // 0x0050(0x0001) BIT_FIELD
	unsigned char                                      UnknownData5TYU[0x2];                                      // 0x0050(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.PlayerController_TA.ChatSpamData
// 0x0018
struct FChatSpamData
{
	float                                              RiseAmount;                                                // 0x0000(0x0004) (Edit)
	float                                              RiseMultiplier;                                            // 0x0004(0x0004) (Edit)
	float                                              DecayRate;                                                 // 0x0008(0x0004) (Edit)
	float                                              MaxValue;                                                  // 0x000C(0x0004) (Edit)
	float                                              Value;                                                     // 0x0010(0x0004)
	float                                              LastChatTime;                                              // 0x0014(0x0004)

};
// ScriptStruct TAGame._Types_TA.GameModeData
// 0x0018
struct FGameModeData
{
	int                                                GameMode;                                                  // 0x0000(0x0004) (DataBinding)
	unsigned char                                      UnknownData5IW9[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     LocalizedName;                                             // 0x0008(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductSlot
// 0x0040
struct FFilterProductSlot
{
	struct FName                                       SlotName;                                                  // 0x0000(0x0008) (DataBinding)
	struct FString                                     Label;                                                     // 0x0008(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     PluralLabel;                                               // 0x0018(0x0010) (NeedCtorLink, DataBinding)
	class UTexture*                                    Icon;                                                      // 0x0028(0x0008) (DataBinding)
	unsigned char                                      bSelected : 1;                                             // 0x0030(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataK8Y7[0x2];                                      // 0x0030(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bHasNewItems : 1;                                          // 0x0030(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataYKPN[0x2];                                      // 0x0034(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                SlotIndex;                                                 // 0x0034(0x0004) (DataBinding)
	int                                                PreviewQuantity;                                           // 0x0038(0x0004) (DataBinding)
	unsigned char                                      UnknownData29CP : 32;                                      // 0x003C(0x0001)
	unsigned char                                      bHidden : 1;                                               // 0x003C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataKINU[0x2];                                      // 0x003C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.NetworkInputBuffer_STS_TA.SimTimeAdjustDebugData
// 0x0008
struct FSimTimeAdjustDebugData
{
	float                                              TimeLastSimTimeAdjustStarted;                              // 0x0000(0x0004)
	int                                                NumSimTimeAdjustFrames;                                    // 0x0004(0x0004)

};
// ScriptStruct TAGame._Types_TA.MessageValue
// 0x002C
struct FMessageValue
{
	struct FString                                     StringValue;                                               // 0x0000(0x0010) (NeedCtorLink)
	int                                                IntValue;                                                  // 0x0010(0x0004)
	unsigned char                                      UnknownData4BQ2[0x4];                                      // 0x0014(0x0004) MISSED OFFSET
	class UObject*                                     ObjectValue;                                               // 0x0018(0x0008)
	struct FName                                       NameValue;                                                 // 0x0020(0x0008)
	int                                                ValueType;                                                 // 0x0028(0x0004)

};
// ScriptStruct TAGame._Types_TA.MessagePacket
// 0x0018
struct FMessagePacket
{
	class UMessage_TA*                                 Message;                                                   // 0x0000(0x0008) (Const)
	TArray<struct FMessageValue>                       Values;                                                    // 0x0008(0x0010) (Const, NeedCtorLink)

};
// ScriptStruct TAGame.GFxData_Mutators_TA.ModeMapPair
// 0x000C
struct FModeMapPair
{
	int                                                GameMode;                                                  // 0x0000(0x0004)
	struct FName                                       MapName;                                                   // 0x0004(0x0008)

};
// ScriptStruct TAGame.GFxData_MusicPlayer_TA.GFxMusicPlaylist
// 0x0030
struct FGFxMusicPlaylist
{
	struct FString                                     Label;                                                     // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	class UTexture*                                    Icon;                                                      // 0x0010(0x0008) (DataBinding)
	unsigned char                                      bSelected : 1;                                             // 0x0018(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataETPZ[0x2];                                      // 0x0018(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       PlaylistName;                                              // 0x001C(0x0008)
	unsigned char                                      UnknownDataFTCN[0x4];                                      // 0x0024(0x0004) MISSED OFFSET
	class UMusicPlaylist_TA*                           Playlist;                                                  // 0x0028(0x0008)

};
// ScriptStruct TAGame.ProductMetrics_TA.ProductMetricsData
// 0x0018
struct FProductMetricsData
{
	int                                                Id;                                                        // 0x0000(0x0004)
	unsigned char                                      UnknownDataUUBT[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FOnlineProductAttribute>             Attributes;                                                // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.MusicPlayerSave_TA.PlaylistState
// 0x000C
struct FPlaylistState
{
	struct FName                                       Playlist;                                                  // 0x0000(0x0008)
	unsigned char                                      bEnabled : 1;                                              // 0x0008(0x0001) BIT_FIELD
	unsigned char                                      UnknownData2EQG[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.ProductMetrics_TA.PaintMetricsData
// 0x0010
struct FPaintMetricsData
{
	unsigned char                                      TeamColorID;                                               // 0x0000(0x0001)
	unsigned char                                      UnknownDataKIJJ[0x3];                                      // 0x0001(0x0003) MISSED OFFSET
	int                                                TeamProductID;                                             // 0x0004(0x0004)
	unsigned char                                      CustomColorID;                                             // 0x0008(0x0001)
	unsigned char                                      UnknownDataWFNP[0x3];                                      // 0x0009(0x0003) MISSED OFFSET
	int                                                CustomProductID;                                           // 0x000C(0x0004)

};
// ScriptStruct TAGame.ProductAttribute_SpecialEditionSettings_TA.SpecialEditionConfig
// 0x0010
struct FSpecialEditionConfig
{
	class UProductSpecialEdition_TA*                   SpecialEdition;                                            // 0x0000(0x0008) (Edit)
	class UProductAssetReference_TA*                   SpecialEditionProductAsset;                                // 0x0008(0x0008) (Edit, EditInline)

};
// ScriptStruct TAGame.PlayerController_TA.CrosshairExtentInfo
// 0x0010
struct FCrosshairExtentInfo
{
	struct FVector                                     Extent;                                                    // 0x0000(0x000C)
	float                                              minDot;                                                    // 0x000C(0x0004)

};
// ScriptStruct TAGame.MusicTheme_TA.PlaylistTrack
// 0x0010
struct FPlaylistTrack
{
	class UAkSoundCue*                                 Track;                                                     // 0x0000(0x0008) (Edit)
	class UTexture*                                    Icon;                                                      // 0x0008(0x0008) (Edit)

};
// ScriptStruct TAGame.PremiumSkinSet_TA.PremiumSkinSetItem
// 0x0008
struct FPremiumSkinSetItem
{
	class UPremiumSkin_TA*                             PremiumSkin;                                               // 0x0000(0x0008) (Edit)

};
// ScriptStruct TAGame._Types_TA.PaintWithOverride
// 0x0018
struct FPaintWithOverride
{
	class UProductPaint_TA*                            PaintToOverride;                                           // 0x0000(0x0008) (Edit)
	TArray<class UProductOverride_TA*>                 Overrides;                                                 // 0x0008(0x0010) (Edit, NeedCtorLink, EditInline)

};
// ScriptStruct TAGame.GFxData_MenuSequence_TA.MenuSequencePair
// 0x0010
struct FMenuSequencePair
{
	struct FName                                       MenuSequence;                                              // 0x0000(0x0008)
	struct FName                                       MenuID;                                                    // 0x0008(0x0008)

};
// ScriptStruct TAGame.AssetAttribute_TeamEdition_TA.TeamEditionOverrides
// 0x0028
struct FTeamEditionOverrides
{
	class UDataAsset_ESportsTeam_TA*                   ESportsTeam;                                               // 0x0000(0x0008) (Edit)
	TArray<class UProductOverride_TA*>                 Overrides;                                                 // 0x0008(0x0010) (Edit, NeedCtorLink, EditInline)
	TArray<struct FPaintWithOverride>                  PaintOverrides;                                            // 0x0018(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame.GFxData_PlayerAvatarBorderPreview_TA.GFxPlayerAvatarBorderRef
// 0x0010
struct FGFxPlayerAvatarBorderRef
{
	struct FProductHashID                              HashID;                                                    // 0x0000(0x0004)
	unsigned char                                      UnknownDataN6NN[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	class UGFxData_PlayerAvatarBorder_TA*              PlayerAvatarBorder;                                        // 0x0008(0x0008)

};
// ScriptStruct TAGame.ProductAttribute_SwapMICParameterValues_TA.MICSwapParameters
// 0x0018
struct FMICSwapParameters
{
	class UMaterialInstanceConstant*                   MICToChange;                                               // 0x0000(0x0008) (Edit)
	struct FName                                       FirstParameter;                                            // 0x0008(0x0008) (Edit)
	struct FName                                       SecondParameter;                                           // 0x0010(0x0008) (Edit)

};
// ScriptStruct TAGame.GFxData_TourSubscriptions_TA.SubscriptionInfo
// 0x0008
struct FSubscriptionInfo
{
	unsigned char                                      UnknownData6OTH[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_TourSubscriptions_TA.SubscriptionInfo.Id

};
// ScriptStruct TAGame.GFxData_PlayerBanners_TA.GFxPlayerBannerRef
// 0x0010
struct FGFxPlayerBannerRef
{
	struct FProductHashID                              HashID;                                                    // 0x0000(0x0004)
	unsigned char                                      UnknownData0SZ3[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	class UGFxData_PlayerBanner_TA*                    PlayerBanner;                                              // 0x0008(0x0008)

};
// ScriptStruct TAGame.PlayerReportConfig_TA.PlayerReportReason
// 0x0018
struct FPlayerReportReason
{
	int                                                ReasonID;                                                  // 0x0000(0x0004) (DataBinding)
	unsigned char                                      UnknownDataOLHM[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Reason;                                                    // 0x0008(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame._Types_TA.AccumulatedRigidBodyCollision
// 0x0080
struct FAccumulatedRigidBodyCollision
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)
	class UPrimitiveComponent*                         Component;                                                 // 0x0008(0x0008) (ExportObject, Component, EditInline)
	class UPhysicalMaterial*                           PhysMat;                                                   // 0x0010(0x0008)
	struct FVector                                     Velocity;                                                  // 0x0018(0x000C)
	struct FVector                                     OtherVelocity;                                             // 0x0024(0x000C)
	struct FVector                                     Location;                                                  // 0x0030(0x000C)
	struct FVector                                     Normal;                                                    // 0x003C(0x000C)
	struct FVector                                     NormalForce;                                               // 0x0048(0x000C)
	struct FVector                                     FrictionForce;                                             // 0x0054(0x000C)
	struct FVector                                     NormalVelocity;                                            // 0x0060(0x000C)
	struct FVector                                     FrictionVelocity;                                          // 0x006C(0x000C)
	int                                                NumCollisions;                                             // 0x0078(0x0004)
	int                                                NumContacts;                                               // 0x007C(0x0004)

};
// ScriptStruct TAGame._Types_TA.WeldingInfo
// 0x0024
struct FWeldingInfo
{
	class ARBActor_TA*                                 RBActor;                                                   // 0x0000(0x0008)
	struct FVector                                     Offset;                                                    // 0x0008(0x000C)
	float                                              Mass;                                                      // 0x0014(0x0004)
	struct FRotator                                    Rotation;                                                  // 0x0018(0x000C)

};
// ScriptStruct TAGame.ProductAssetLoader_TA.AssetLoadRequest
// 0x0050
struct FAssetLoadRequest
{
	struct FAssetLoadResult                            Result;                                                    // 0x0000(0x0020)
	class UProduct_TA*                                 Product;                                                   // 0x0020(0x0008)
	int                                                LoadOrder;                                                 // 0x0028(0x0004)
	TEnumAsByte<EAssetLoadState>                       LoadState;                                                 // 0x002C(0x0001)
	unsigned char                                      UnknownDataMWCM[0x3];                                      // 0x002D(0x0003) MISSED OFFSET
	unsigned char                                      bIsThumbnailRequest : 1;                                   // 0x0030(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataUVQE[0x2];                                      // 0x002D(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataG3XM[0x4];                                      // 0x0034(0x0004) MISSED OFFSET
	struct FScriptDelegate                             OnLoadedCallback;                                          // 0x0038(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataR2CR[0xC];                                      // 0x0034(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.MusicUrlConfig_TA.MusicConfigTrack
// 0x0018
struct FMusicConfigTrack
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit)
	struct FString                                     ExternalUrl;                                               // 0x0008(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.PaintAttributeParameter
// 0x0010
struct FPaintAttributeParameter
{
	TEnumAsByte<EPaintColorVariant>                    PaintVariant;                                              // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownDataN67V[0x3];                                      // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       ParameterName;                                             // 0x0004(0x0008) (Edit)
	unsigned char                                      bEnabled : 1;                                              // 0x000C(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataBNRU[0x2];                                      // 0x000C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bGammaCorrect : 1;                                         // 0x000C(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataJXCE[0x2];                                      // 0x0010(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.RBActor_TA.NetworkSyncSettingsData
// 0x0020
struct FNetworkSyncSettingsData
{
	float                                              LocationFixRate;                                           // 0x0000(0x0004) (Edit)
	float                                              AngularFixRate;                                            // 0x0004(0x0004) (Edit)
	float                                              MinDeltaLocation;                                          // 0x0008(0x0004) (Edit)
	float                                              WeldedLerpRate;                                            // 0x000C(0x0004) (Edit)
	int                                                MinDeltaRotation;                                          // 0x0010(0x0004) (Edit, Const)
	float                                              MinDeltaLinearVelocity;                                    // 0x0014(0x0004) (Edit)
	float                                              ForceReplicationDelay;                                     // 0x0018(0x0004) (Edit)
	unsigned char                                      bDebug : 1;                                                // 0x001C(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataVP4O[0x2];                                      // 0x001C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.TourStatus_TA.TourStatus
// 0x0020
struct FTourStatus
{
	unsigned char                                      UnknownDataLMRD[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.TourStatus_TA.TourStatus.Id
	TEnumAsByte<ETourStatus>                           Status;                                                    // 0x0008(0x0001) (DataBinding)
	unsigned char                                      UnknownDataMYCX[0x3];                                      // 0x0009(0x0003) MISSED OFFSET
	int                                                PlayerTeamID;                                              // 0x000C(0x0004) (DataBinding)
	struct FString                                     TeamName;                                                  // 0x0010(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame.RBActor_TA.WorldContactData
// 0x0028
struct FWorldContactData
{
	unsigned char                                      bHasContact : 1;                                           // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataEEBU[0x2];                                      // 0x0000(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector                                     Location;                                                  // 0x0004(0x000C)
	struct FVector                                     Velocity;                                                  // 0x0010(0x000C)
	struct FVector                                     Normal;                                                    // 0x001C(0x000C)

};
// ScriptStruct TAGame._Types_TA.ProductLevelData
// 0x0010
struct FProductLevelData
{
	int                                                Level;                                                     // 0x0000(0x0004) (Edit, DataBinding)
	int                                                SoftCurrency;                                              // 0x0004(0x0004) (Edit, DataBinding)
	int                                                HardCurrency;                                              // 0x0008(0x0004) (Edit, DataBinding)
	float                                              UnlockWeight;                                              // 0x000C(0x0004) (Edit, DataBinding)

};
// ScriptStruct TAGame.ProductThumbnailQueue_TA.RenderThumbnailScene
// 0x0030
struct FRenderThumbnailScene
{
	class UProductThumbnail_TA*                        Thumbnail;                                                 // 0x0000(0x0008) (Const)
	class UProductAsset_TA*                            Asset;                                                     // 0x0008(0x0008) (Const)
	class UOnlineProduct_TA*                           OnlineProduct;                                             // 0x0010(0x0008) (Const)
	class UThumbnailScene_TA*                          Scene;                                                     // 0x0018(0x0008) (Const)
	int                                                TextureWidth;                                              // 0x0020(0x0004) (Const)
	int                                                TextureHeight;                                             // 0x0024(0x0004) (Const)
	float                                              NextRenderTime;                                            // 0x0028(0x0004) (Const)
	unsigned char                                      bBeingRendered : 1;                                        // 0x002C(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownData595X[0x2];                                      // 0x002C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bCanceled : 1;                                             // 0x002C(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownDataILC2[0x2];                                      // 0x0030(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._TourTypes_TA.TourPlayer
// 0x0050
struct FTourPlayer
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	struct FString                                     PlayerName;                                                // 0x0038(0x0010) (NeedCtorLink)
	class UTexture*                                    Avatar;                                                    // 0x0048(0x0008) (Transient)

};
// ScriptStruct TAGame._TourTypes_TA.TourTeam
// 0x0040
struct FTourTeam
{
	int                                                TeamID;                                                    // 0x0000(0x0004)
	unsigned char                                      UnknownDataJZV9[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FCustomMatchTeamSettings                    Settings;                                                  // 0x0008(0x0020) (NeedCtorLink)
	TArray<struct FTourPlayer>                         Players;                                                   // 0x0028(0x0010) (NeedCtorLink)
	int                                                Seed;                                                      // 0x0038(0x0004)
	int                                                Difficulty;                                                // 0x003C(0x0004)

};
// ScriptStruct TAGame._TourTypes_TA.TourBracket
// 0x0028
struct FTourBracket
{
	unsigned char                                      UnknownData9TW1[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._TourTypes_TA.TourBracket.TournamentID
	TArray<struct FTourTeam>                           Teams;                                                     // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct FTourMatch>                          Matches;                                                   // 0x0018(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._TourTypes_TA.TournamentResult
// 0x000C
struct FTournamentResult
{
	int                                                Difficulty;                                                // 0x0000(0x0004) (DataBinding)
	int                                                Placement;                                                 // 0x0004(0x0004) (DataBinding)
	int                                                Score;                                                     // 0x0008(0x0004) (DataBinding)

};
// ScriptStruct TAGame.ProductThumbnailQueue_TA.RenderThumbnailRequest
// 0x0030
struct FRenderThumbnailRequest
{
	struct FProductThumbnailResult                     Result;                                                    // 0x0000(0x0018) (Const)
	struct FScriptDelegate                             Callback;                                                  // 0x0018(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataK72D[0xC];                                      // 0x0018(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._Types_TA.AppliedBreakoutDamage
// 0x0018
struct FAppliedBreakoutDamage
{
	unsigned char                                      Id;                                                        // 0x0000(0x0001)
	unsigned char                                      UnknownDataF6XY[0x3];                                      // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                  // 0x0004(0x000C)
	int                                                DamageIndex;                                               // 0x0010(0x0004)
	int                                                TotalDamage;                                               // 0x0014(0x0004)

};
// ScriptStruct TAGame.AutoTour_TA.TournamentWeek
// 0x0010
struct FTournamentWeek
{
	TArray<struct FTournamentResult>                   Results;                                                   // 0x0000(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.BallPredictionInfo
// 0x003C
struct FBallPredictionInfo
{
	float                                              Time;                                                      // 0x0000(0x0004)
	float                                              ArchTopTime;                                               // 0x0004(0x0004)
	struct FVector                                     Location;                                                  // 0x0008(0x000C)
	struct FVector                                     Velocity;                                                  // 0x0014(0x000C)
	struct FVector                                     ArchTop;                                                   // 0x0020(0x000C)
	struct FVector                                     ArchTopVelocity;                                           // 0x002C(0x000C)
	unsigned char                                      bHitWall : 1;                                              // 0x0038(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataRIUX[0x2];                                      // 0x0038(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bHitGround : 1;                                            // 0x0038(0x0001) BIT_FIELD
	unsigned char                                      UnknownData28FP[0x2];                                      // 0x003C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._ShopTypes_TA.ShopCurrencyInfo
// 0x0008
struct FShopCurrencyInfo
{
	int                                                Id;                                                        // 0x0000(0x0004) (DataBinding)
	int                                                Amount;                                                    // 0x0004(0x0004) (DataBinding)

};
// ScriptStruct TAGame.GFxData_PsyTag_TA.GFxPsyTagSearchResult
// 0x003C
struct FGFxPsyTagSearchResult
{
	struct FUniqueNetId                                PersonaId;                                                 // 0x0000(0x0038) (DataBinding)
	int                                                NumFriendsInCommon;                                        // 0x0038(0x0004) (DataBinding)

};
// ScriptStruct TAGame.Mutator_Freeplay_TA.RumbleItemIndex
// 0x000C
struct FRumbleItemIndex
{
	class APlayerController_TA*                        PC;                                                        // 0x0000(0x0008)
	int                                                ItemIndex;                                                 // 0x0008(0x0004)

};
// ScriptStruct TAGame.Ball_Breakout_TA.BreakoutDamage
// 0x0008
struct FBreakoutDamage
{
	float                                              Time;                                                      // 0x0000(0x0004)
	int                                                Damage;                                                    // 0x0004(0x0004)

};
// ScriptStruct TAGame._Types_TA.BallHitInfo
// 0x010C
struct FBallHitInfo
{
	class APRI_TA*                                     PRI;                                                       // 0x0000(0x0008)
	class APRI_TA*                                     AttackerPRI;                                               // 0x0008(0x0008)
	struct FName                                       CarName;                                                   // 0x0010(0x0008)
	int                                                TeamNum;                                                   // 0x0018(0x0004)
	unsigned char                                      UnknownDataZVB2[0x4];                                      // 0x001C(0x0004) MISSED OFFSET
	struct FReplicatedRBState                          PreHitCarPhysics;                                          // 0x0020(0x0040)
	struct FReplicatedRBState                          PreHitBallPhysics;                                         // 0x0060(0x0040)
	struct FReplicatedRBState                          PostHitBallPhysics;                                        // 0x00A0(0x0040)
	float                                              Distance;                                                  // 0x00E0(0x0004)
	float                                              Time;                                                      // 0x00E4(0x0004)
	struct FVector                                     HitLocation;                                               // 0x00E8(0x000C)
	struct FVector                                     HitNormal;                                                 // 0x00F4(0x000C)
	unsigned char                                      bDodging : 1;                                              // 0x0100(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataJZ53[0x2];                                      // 0x0100(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bWheelsTouching : 1;                                       // 0x0100(0x0001) BIT_FIELD
	unsigned char                                      UnknownData2VJ5[0x2];                                      // 0x0104(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bWorldTouching : 1;                                        // 0x0100(0x0001) BIT_FIELD
	unsigned char                                      UnknownData0VDQ[0x2];                                      // 0x0104(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<EBallHitType>                          HitType;                                                   // 0x0104(0x0001)
	unsigned char                                      UnknownData9MDZ[0x3];                                      // 0x0105(0x0003) MISSED OFFSET
	int                                                HitID;                                                     // 0x0108(0x0004)

};
// ScriptStruct TAGame._Types_TA.ProductAttributesArray
// 0x0010
struct FProductAttributesArray
{
	TArray<class UProductAttribute_TA*>                Attributes;                                                // 0x0000(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.LoadoutAttributesArray
// 0x0010
struct FLoadoutAttributesArray
{
	TArray<struct FProductAttributesArray>             Products;                                                  // 0x0000(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.Ball_TA.CarBallInteractionSettings
// 0x0034
struct FCarBallInteractionSettings
{
	unsigned char                                      bSkipScriptForces : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataFODQ[0x2];                                      // 0x0000(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData53O8[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FInterpCurveFloat                           PushFactorCurve;                                           // 0x0008(0x0018) (Edit, NeedCtorLink)
	float                                              PushZScale;                                                // 0x0020(0x0004) (Edit)
	float                                              PushForwardScale;                                          // 0x0024(0x0004) (Edit)
	float                                              MaxRelativeSpeed;                                          // 0x0028(0x0004) (Edit)
	float                                              Restitution;                                               // 0x002C(0x0004) (Edit)
	float                                              Friction;                                                  // 0x0030(0x0004) (Edit)

};
// ScriptStruct TAGame.Ball_TA.ExplosionData
// 0x0014
struct FExplosionData
{
	class UGoal_TA*                                    Goal;                                                      // 0x0000(0x0008) (ExportObject, Component, EditInline)
	struct FVector                                     Location;                                                  // 0x0008(0x000C)

};
// ScriptStruct TAGame.GFxData_QuickChatBindings_TA.LocalizedQuickChatBinding
// 0x0038
struct FLocalizedQuickChatBinding
{
	struct FString                                     MessageId;                                                 // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Message;                                                   // 0x0010(0x0010) (NeedCtorLink, DataBinding)
	int                                                Group;                                                     // 0x0020(0x0004) (DataBinding)
	unsigned char                                      UnknownDataVV6Z[0x4];                                      // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     Action;                                                    // 0x0028(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame.Ball_TA.ExplosionDataExtended
// 0x0020
struct FExplosionDataExtended
{
	class UGoal_TA*                                    Goal;                                                      // 0x0000(0x0008) (ExportObject, Component, EditInline)
	struct FVector                                     Location;                                                  // 0x0008(0x000C)
	unsigned char                                      UnknownData4L5M[0x4];                                      // 0x0014(0x0004) MISSED OFFSET
	class APRI_TA*                                     Scorer;                                                    // 0x0018(0x0008)

};
// ScriptStruct TAGame.GFxData_QuickChatBindings_TA.LocalizedQuickChat
// 0x0024
struct FLocalizedQuickChat
{
	struct FString                                     MessageId;                                                 // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Message;                                                   // 0x0010(0x0010) (NeedCtorLink, DataBinding)
	unsigned char                                      bPostGame : 1;                                             // 0x0020(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataYVD8[0x2];                                      // 0x0020(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.AutoTour_TA.ScheduledTournament
// 0x0030
struct FScheduledTournament
{
	unsigned char                                      UnknownData4H1Z[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.AutoTour_TA.ScheduledTournament.Time
	unsigned char                                      UnknownDataGF89[0x8];                                      // 0x0008(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.AutoTour_TA.ScheduledTournament.ScheduleID
	struct FString                                     Description;                                               // 0x0010(0x0010) (NeedCtorLink)
	TArray<class UTourSettings_TA*>                    Tournaments;                                               // 0x0020(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.Ball_TA.PredictedPosition
// 0x0018
struct FPredictedPosition
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)
	struct FVector                                     Velocity;                                                  // 0x000C(0x000C)

};
// ScriptStruct TAGame.Ball_TA.GoalPenetrationData
// 0x0024
struct FGoalPenetrationData
{
	class UGoal_TA*                                    Goal;                                                      // 0x0000(0x0008) (ExportObject, Component, EditInline)
	struct FVector                                     PlaneLocation;                                             // 0x0008(0x000C)
	struct FVector                                     PlaneNormal;                                               // 0x0014(0x000C)
	float                                              PenetrationDistance;                                       // 0x0020(0x0004)

};
// ScriptStruct TAGame._TourTypes_TA.IntPair
// 0x0008
struct FIntPair
{
	int                                                A;                                                         // 0x0000(0x0004)
	int                                                B;                                                         // 0x0004(0x0004)

};
// ScriptStruct TAGame.RLBot_Util_TA.BotLoadout
// 0x0028
struct FBotLoadout
{
	TArray<int>                                        Products;                                                  // 0x0000(0x0010) (NeedCtorLink)
	TArray<int>                                        Paints;                                                    // 0x0010(0x0010) (NeedCtorLink)
	struct FColor                                      PrimaryColor;                                              // 0x0020(0x0004)
	struct FColor                                      SecondaryColor;                                            // 0x0024(0x0004)

};
// ScriptStruct TAGame.SampleHistory_TA.GraphSummaryMethod
// 0x000C
struct FGraphSummaryMethod
{
	TEnumAsByte<EGraphSummaryType>                     Type;                                                      // 0x0000(0x0001)
	unsigned char                                      UnknownDataYH4B[0x3];                                      // 0x0001(0x0003) MISSED OFFSET
	float                                              MaxSampleAge;                                              // 0x0004(0x0004)
	unsigned char                                      bAbsoluteValue : 1;                                        // 0x0008(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataE7OF[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.AudioPriorityComponent_TA.PriorityCandidate
// 0x0020
struct FPriorityCandidate
{
	class AVehicle_TA*                                 Candidate;                                                 // 0x0000(0x0008)
	int                                                Priority;                                                  // 0x0008(0x0004)
	unsigned char                                      UnknownData5PLZ[0x4];                                      // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FString>                             BonusReasons;                                              // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.OnlineGameParty_TA.PartyMemberLoadout
// 0x00A1
struct FPartyMemberLoadout
{
	struct FUniqueNetId                                UniqueId;                                                  // 0x0000(0x0038)
	struct U_Types_TA_FLoadoutData                     Loadout;                                                   // 0x0038(0x0040) (NeedCtorLink)
	TArray<struct FOnlineProductData>                  OnlineLoadoutData;                                         // 0x0078(0x0010) (NeedCtorLink)
	int                                                GaragePreviewTeam;                                         // 0x0088(0x0004)
	unsigned char                                      UnknownDataCNV8[0x4];                                      // 0x008C(0x0004) MISSED OFFSET
	class ULocalPlayer*                                LocalPlayer;                                               // 0x0090(0x0008) (Transient)
	class UOnlineProductStoreSet_TA*                   ProductSet;                                                // 0x0098(0x0008) (ExportObject, Component, EditInline)
	unsigned char                                      SortWeight;                                                // 0x00A0(0x0001)

};
// ScriptStruct TAGame.SampleHistory_TA.Sample
// 0x0008
struct FSample
{
	float                                              Low;                                                       // 0x0000(0x0004)
	float                                              High;                                                      // 0x0004(0x0004)

};
// ScriptStruct TAGame._Types_TA.SaveObjectResult
// 0x0011
struct FSaveObjectResult
{
	class UObject*                                     ObjectData;                                                // 0x0000(0x0008)
	class UError*                                      Error;                                                     // 0x0008(0x0008)
	TEnumAsByte<ESaveGameResult>                       Code;                                                      // 0x0010(0x0001)

};
// ScriptStruct TAGame._Types_TA.LoadObjectResult
// 0x0021
struct FLoadObjectResult
{
	struct FString                                     FilePath;                                                  // 0x0000(0x0010) (NeedCtorLink)
	class UObject*                                     ObjectData;                                                // 0x0010(0x0008)
	class UError*                                      Error;                                                     // 0x0018(0x0008)
	TEnumAsByte<EBasicLoadResult>                      Code;                                                      // 0x0020(0x0001)

};
// ScriptStruct TAGame._TourTypes_TA.TourServerSettings
// 0x00CC
struct FTourServerSettings
{
	unsigned char                                      UnknownData4LYS[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._TourTypes_TA.TourServerSettings.TournamentID
	int                                                MatchID;                                                   // 0x0008(0x0004)
	unsigned char                                      UnknownData1WHJ[0x4];                                      // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     GameTags;                                                  // 0x0010(0x0010) (NeedCtorLink)
	TEnumAsByte<EMatchTieBreaker>                      TieBreaker;                                                // 0x0020(0x0001)
	unsigned char                                      GameMode;                                                  // 0x0021(0x0001)
	unsigned char                                      UnknownDataL2AW[0x6];                                      // 0x0022(0x0006) MISSED OFFSET
	TArray<struct FName>                               DisabledMaps;                                              // 0x0028(0x0010) (NeedCtorLink)
	int                                                SeriesLength;                                              // 0x0038(0x0004)
	int                                                TeamSize;                                                  // 0x003C(0x0004)
	TArray<struct FTourTeam>                           Teams;                                                     // 0x0040(0x0010) (NeedCtorLink)
	TArray<int>                                        BotTeams;                                                  // 0x0050(0x0010) (NeedCtorLink)
	TArray<struct FTourMatchGame>                      Games;                                                     // 0x0060(0x0010) (NeedCtorLink)
	TArray<struct FUniqueNetId>                        SpectatorPlayerIDs;                                        // 0x0070(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                CreatorPlayerID;                                           // 0x0080(0x0038)
	unsigned char                                      MinPlayersPerTeam;                                         // 0x00B8(0x0001)
	unsigned char                                      UnknownDataQ5SC[0x7];                                      // 0x00B9(0x0007) MISSED OFFSET
	unsigned char                                      UnknownDataAJ65[0x8];                                      // 0x00B9(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._TourTypes_TA.TourServerSettings.MatchExpireTimestamp
	int                                                MinPlayersMetWaitTimeSeconds;                              // 0x00C8(0x0004)

};
// ScriptStruct TAGame._CrowdTypes_TA.CrowdExcitementSound
// 0x000C
struct FCrowdExcitementSound
{
	class UAkSoundCue*                                 Sound;                                                     // 0x0000(0x0008) (Edit)
	float                                              Value;                                                     // 0x0008(0x0004) (Edit)

};
// ScriptStruct TAGame._CrowdTypes_TA.CrowdExcitementSounds
// 0x0028
struct FCrowdExcitementSounds
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit)
	float                                              Cooldown;                                                  // 0x0008(0x0004) (Edit)
	unsigned char                                      UnknownDataN3XY[0x4];                                      // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FCrowdExcitementSound>               Sounds;                                                    // 0x0010(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<ECrowdValueType>                       CompareType;                                               // 0x0020(0x0001) (Edit)
	unsigned char                                      UnknownData7E7W[0x3];                                      // 0x0021(0x0003) MISSED OFFSET
	float                                              LastPlayed;                                                // 0x0024(0x0004) (Transient)

};
// ScriptStruct TAGame.BallTrajectoryComponent_TA.TrajectorySetup
// 0x0014
struct FTrajectorySetup
{
	float                                              TotalSimulateTime;                                         // 0x0000(0x0004)
	unsigned char                                      bAlwaysEnabled : 1;                                        // 0x0004(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataFO0M[0x2];                                      // 0x0004(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bUpdatePathEveryFrame : 1;                                 // 0x0004(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataK26W[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                TotalPoints;                                               // 0x0008(0x0004)
	int                                                MaxStepsPerFrame;                                          // 0x000C(0x0004)
	int                                                QuickTrajectorySteps;                                      // 0x0010(0x0004)

};
// ScriptStruct TAGame.GFxData_RocketPass_TA.RocketPassProduct
// 0x0008
struct FRocketPassProduct
{
	struct FProductHashID                              HashID;                                                    // 0x0000(0x0004) (DataBinding)
	int                                                Tier;                                                      // 0x0004(0x0004) (DataBinding)

};
// ScriptStruct TAGame.BotDetection_TA.BinaryInput
// 0x0008
struct FBinaryInput
{
	int                                                ChangeCount;                                               // 0x0000(0x0004)
	unsigned char                                      bLastInput : 1;                                            // 0x0004(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData7EGB[0x2];                                      // 0x0004(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.GFxData_RocketPass_TA.RocketPassReward
// 0x0014
struct FRocketPassReward
{
	int                                                CurrencyID;                                                // 0x0000(0x0004) (DataBinding)
	struct FName                                       Name;                                                      // 0x0004(0x0008) (DataBinding)
	float                                              Amount;                                                    // 0x000C(0x0004) (DataBinding)
	int                                                Tier;                                                      // 0x0010(0x0004) (DataBinding)

};
// ScriptStruct TAGame.GFxData_RocketPass_TA.RocketPassXPReward
// 0x0000 (0x0014 - 0x0014)
struct FRocketPassXPReward : public FRocketPassReward
{

};
// ScriptStruct TAGame.BotDetection_TA.AggregateInput
// 0x0010
struct FAggregateInput
{
	int                                                Count;                                                     // 0x0000(0x0004)
	float                                              AverageHeld;                                               // 0x0004(0x0004)
	float                                              CurrentDuration;                                           // 0x0008(0x0004) (Transient)
	unsigned char                                      bLastHeld : 1;                                             // 0x000C(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataOKWP[0x2];                                      // 0x000C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataTask
// 0x0018
struct FSaveDataTask
{
	int                                                ControllerIndex;                                           // 0x0000(0x0004)
	unsigned char                                      UnknownDataIKBZ[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Path;                                                      // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)

};
// ScriptStruct TAGame.GFxData_RocketPass_TA.RocketPassCurrencyReward
// 0x0000 (0x0014 - 0x0014)
struct FRocketPassCurrencyReward : public FRocketPassReward
{

};
// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataDeleteTask
// 0x0004 (0x001C - 0x0018)
struct FSaveDataDeleteTask : public FSaveDataTask
{
	int                                                KeepNewestFileCount;                                       // 0x0018(0x0004)

};
// ScriptStruct TAGame.SaveObjectManager_TA.DingoContentCache
// 0x0008
struct FDingoContentCache
{
	unsigned char                                      UnknownDataWNZ4[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.SaveObjectManager_TA.DingoContentCache.UserXUID

};
// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataListFilesTask
// 0x0021 (0x0039 - 0x0018)
struct FSaveDataListFilesTask : public FSaveDataTask
{
	struct FString                                     Pattern;                                                   // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             Files;                                                     // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)
	TEnumAsByte<EBasicLoadResult>                      Result;                                                    // 0x0038(0x0001)

};
// ScriptStruct TAGame.GFxData_Party_TA.GFxPartyMember
// 0x006C
struct FGFxPartyMember
{
	struct FUniqueNetId                                PersonaId;                                                 // 0x0000(0x0038) (DataBinding)
	struct FString                                     PlayerName;                                                // 0x0038(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     ProfileId;                                                 // 0x0048(0x0010) (NeedCtorLink, DataBinding)
	class UTexture*                                    PlayerAvatarTexture;                                       // 0x0058(0x0008) (DataBinding)
	unsigned char                                      UnknownData44PG[0x8];                                      // 0x0060(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_Party_TA.GFxPartyMember.ClubID
	unsigned char                                      bSplitScreen : 1;                                          // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataV478[0x2];                                      // 0x0068(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bLocalSplitScreen : 1;                                     // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataJWHQ[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bHasProfile : 1;                                           // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData8DOL[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bPartyLeader : 1;                                          // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataEISW[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIsPlayerTrading : 1;                                      // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataS12P[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIsPlayerInMatch : 1;                                      // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataE5NL[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bPlayerCanTrade : 1;                                       // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataAHVU[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataImportTask
// 0x0024 (0x003C - 0x0018)
struct FSaveDataImportTask : public FSaveDataTask
{
	class UObject*                                     SaveDataObject;                                            // 0x0018(0x0008) (AlwaysInit)
	TEnumAsByte<EBasicLoadResult>                      Result;                                                    // 0x0020(0x0001)
	unsigned char                                      UnknownDataCZW9[0x7];                                      // 0x0021(0x0007) MISSED OFFSET
	TArray<unsigned char>                              Data;                                                      // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned char                                      bExactFileMatch : 1;                                       // 0x0038(0x0001) BIT_FIELD (AlwaysInit)
	unsigned char                                      UnknownData0JB1[0x2];                                      // 0x0038(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bPlayerSaveData : 1;                                       // 0x0038(0x0001) BIT_FIELD (AlwaysInit)
	unsigned char                                      UnknownDataDFQE[0x2];                                      // 0x003C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataExportTask
// 0x001C (0x0034 - 0x0018)
struct FSaveDataExportTask : public FSaveDataTask
{
	TArray<unsigned char>                              Data;                                                      // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned char                                      bExactFileMatch : 1;                                       // 0x0028(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataBR3N[0x2];                                      // 0x0028(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bPlayerSaveData : 1;                                       // 0x0028(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataI6P0[0x2];                                      // 0x002C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bEncryptAndCRC : 1;                                        // 0x0028(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataS4IP[0x2];                                      // 0x002C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<ESaveGameResult>                       Result;                                                    // 0x002C(0x0001)
	unsigned char                                      UnknownDataH2G4[0x3];                                      // 0x002D(0x0003) MISSED OFFSET
	int                                                KeepNewestSaveFileCount;                                   // 0x0030(0x0004)

};
// ScriptStruct TAGame.CrowdActor_TA.CrowdNoiseModifierInstance
// 0x0008
struct FCrowdNoiseModifierInstance
{
	float                                              Value;                                                     // 0x0000(0x0004)
	float                                              Duration;                                                  // 0x0004(0x0004)

};
// ScriptStruct TAGame._Types_TA.RandomRange
// 0x0008
struct FRandomRange
{
	float                                              Min;                                                       // 0x0000(0x0004) (Edit)
	float                                              Max;                                                       // 0x0004(0x0004) (Edit)

};
// ScriptStruct TAGame.BallTrajectoryComponent_Beam_TA.TrajectoryFX
// 0x0008
struct FTrajectoryFX
{
	class UParticleSystemComponent*                    Particle;                                                  // 0x0000(0x0008) (ExportObject, Component, EditInline)

};
// ScriptStruct TAGame._Types_TA.ProductDrop
// 0x0014
struct FProductDrop
{
	struct FProductHashID                              GroupId;                                                   // 0x0000(0x0004) (DataBinding)
	unsigned char                                      UnknownData7OCW[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	unsigned char                                      UnknownDataGIIT[0x8];                                      // 0x0004(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._Types_TA.ProductDrop.DropID
	unsigned char                                      bCanEquipNow : 1;                                          // 0x0010(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataW8NO[0x2];                                      // 0x0010(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.BallTrajectoryComponent_Spline_TA.TrajectorySplineFX
// 0x0008
struct FTrajectorySplineFX
{
	class ASplineLoftActorMovable*                     Spline;                                                    // 0x0000(0x0008)

};
// ScriptStruct TAGame.BotDetection_TA.PlayerAggregateStats
// 0x00E0
struct FPlayerAggregateStats
{
	class APRI_TA*                                     PRI;                                                       // 0x0000(0x0008) (Transient)
	struct FUniqueNetId                                PlayerID;                                                  // 0x0008(0x0038)
	struct FAggregateInput                             Throttle;                                                  // 0x0040(0x0010)
	struct FAggregateInput                             Jump;                                                      // 0x0050(0x0010)
	struct FAggregateInput                             Handbrake;                                                 // 0x0060(0x0010)
	struct FAggregateInput                             Boost;                                                     // 0x0070(0x0010)
	struct FAggregateInput                             AirRoll;                                                   // 0x0080(0x0010)
	struct FAggregateInput                             CameraRotate;                                              // 0x0090(0x0010)
	struct FBinaryInput                                CameraMode;                                                // 0x00A0(0x0008)
	int                                                BallTouches;                                               // 0x00A8(0x0004)
	int                                                Clears;                                                    // 0x00AC(0x0004)
	int                                                AerialHits;                                                // 0x00B0(0x0004)
	int                                                JuggleHits;                                                // 0x00B4(0x0004)
	int                                                BicycleHits;                                               // 0x00B8(0x0004)
	int                                                BoostPickupPills;                                          // 0x00BC(0x0004)
	int                                                BoostPickupPads;                                           // 0x00C0(0x0004)
	int                                                AveDistSamples;                                            // 0x00C4(0x0004) (Transient)
	float                                              AveDistanceToBall;                                         // 0x00C8(0x0004)
	float                                              TimeDrivingTowardsBall;                                    // 0x00CC(0x0004)
	float                                              AveSpeed;                                                  // 0x00D0(0x0004)
	int                                                AveSpeedSampleCount;                                       // 0x00D4(0x0004) (Transient)
	float                                              TotalIdleSeconds;                                          // 0x00D8(0x0004)
	float                                              TotalTime;                                                 // 0x00DC(0x0004)

};
// ScriptStruct TAGame._Types_TA.SchematicResourceData
// 0x000C
struct FSchematicResourceData
{
	unsigned char                                      UnknownData1F6Z[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._Types_TA.SchematicResourceData.InstanceID
	int                                                Resources;                                                 // 0x0008(0x0004) (DataBinding)

};
// ScriptStruct TAGame.BallTrajectoryComponent_Mesh_TA.MeshInfo
// 0x0038
struct FMeshInfo
{
	class UStaticMeshComponent*                        Meshes;                                                    // 0x0000(0x0008) (ExportObject, Component, EditInline)
	struct FVector                                     Location;                                                  // 0x0008(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x0014(0x000C)
	int                                                PointIndex;                                                // 0x0020(0x0004)
	struct FVector                                     MoveDirection;                                             // 0x0024(0x000C)
	float                                              DistanceAlongPath;                                         // 0x0030(0x0004)
	unsigned char                                      bCrossedZero : 1;                                          // 0x0034(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataQ5P6[0x2];                                      // 0x0034(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.ConsecutiveMatchTracker_TA.MatchData
// 0x003C
struct FMatchData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	int                                                ConsecutiveMatchesPlayed;                                  // 0x0038(0x0004)

};
// ScriptStruct TAGame.RewardDropGroup_TA.GFxRewardDrop
// 0x0018
struct FGFxRewardDrop
{
	struct FName                                       RewardName;                                                // 0x0000(0x0008) (DataBinding)
	int                                                Total;                                                     // 0x0008(0x0004) (DataBinding)
	int                                                Base;                                                      // 0x000C(0x0004) (DataBinding)
	int                                                BaseLevel;                                                 // 0x0010(0x0004) (DataBinding)
	int                                                Level;                                                     // 0x0014(0x0004) (DataBinding)

};
// ScriptStruct TAGame.SkeletalMeshActorMAT_Products_TA.BothWheelAssets
// 0x0010
struct FBothWheelAssets
{
	class UMeshComponent*                              Left;                                                      // 0x0000(0x0008) (ExportObject, Component, EditInline)
	class UMeshComponent*                              Right;                                                     // 0x0008(0x0008) (ExportObject, Component, EditInline)

};
// ScriptStruct TAGame.BoostMesh_TA.BoostMeshOverride
// 0x0020
struct FBoostMeshOverride
{
	class UActorComponent*                             Mesh;                                                      // 0x0000(0x0008) (Edit, ExportObject, Component, EditInline)
	class AFXActor_X*                                  CarType;                                                   // 0x0008(0x0008) (Edit, EditorOnly)
	struct FString                                     CarTypePath;                                               // 0x0010(0x0010) (Edit, EditConst, NeedCtorLink)

};
// ScriptStruct TAGame.StatGraphDrawer_TA.GraphLine
// 0x0028
struct FGraphLine
{
	struct FVector                                     Start;                                                     // 0x0000(0x000C) (AlwaysInit)
	struct FVector                                     End;                                                       // 0x000C(0x000C) (AlwaysInit)
	struct FLinearColor                                Color;                                                     // 0x0018(0x0010) (AlwaysInit)

};
// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParam
// 0x0008
struct FAnimatedMaterialParam
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit)

};
// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParamFloat
// 0x0008 (0x0010 - 0x0008)
struct FAnimatedMaterialParamFloat : public FAnimatedMaterialParam
{
	class UDistributionFloat*                          Value;                                                     // 0x0008(0x0008) (Edit, ExportObject, Component, EditInline)

};
// ScriptStruct TAGame._ShopTypes_TA.ShopDeliverable
// 0x0048
struct FShopDeliverable
{
	int                                                Count;                                                     // 0x0000(0x0004) (DataBinding)
	unsigned char                                      UnknownDataH6WZ[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	unsigned char                                      UnknownDataL244[0x8];                                      // 0x0004(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._ShopTypes_TA.ShopDeliverable.Id
	struct FProductHashID                              HashID;                                                    // 0x0010(0x0004) (DataBinding)
	unsigned char                                      UnknownDataDNVG[0x4];                                      // 0x0014(0x0004) MISSED OFFSET
	struct FOnlineProductData                          Product;                                                   // 0x0018(0x0030) (NeedCtorLink)

};
// ScriptStruct TAGame.GameEditor_Ring_TA.ActorTouchRecordData
// 0x0014
struct FActorTouchRecordData
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)
	struct FVector                                     TouchDirection;                                            // 0x0008(0x000C)

};
// ScriptStruct TAGame._CrowdTypes_TA.CrowdDefense
// 0x000C
struct FCrowdDefense
{
	float                                              DefenseZoneTime;                                           // 0x0000(0x0004) (Edit)
	float                                              DefenseZoneDistance;                                       // 0x0004(0x0004) (Edit)
	float                                              ReplayDelay;                                               // 0x0008(0x0004) (Edit)

};
// ScriptStruct TAGame.StatGraphDrawer_TA.SummaryLabel
// 0x0024
struct FSummaryLabel
{
	struct FString                                     Label;                                                     // 0x0000(0x0010) (NeedCtorLink)
	int                                                LabelWidth;                                                // 0x0010(0x0004)
	struct FLinearColor                                Color;                                                     // 0x0014(0x0010)

};
// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParamVector
// 0x0008 (0x0010 - 0x0008)
struct FAnimatedMaterialParamVector : public FAnimatedMaterialParam
{
	class UDistributionVector*                         Value;                                                     // 0x0008(0x0008) (Edit, ExportObject, Component, EditInline)

};
// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParamColor
// 0x0008 (0x0018 - 0x0010)
struct FAnimatedMaterialParamColor : public FAnimatedMaterialParamVector
{
	class UDistributionFloat*                          AlphaValue;                                                // 0x0010(0x0008) (Edit, ExportObject, Component, EditInline)

};
// ScriptStruct TAGame._ShopTypes_TA.ShopPrice
// 0x0008
struct FShopPrice
{
	int                                                Id;                                                        // 0x0000(0x0004) (DataBinding)
	int                                                Amount;                                                    // 0x0004(0x0004) (DataBinding)

};
// ScriptStruct TAGame._CrowdTypes_TA.CrowdValueState
// 0x000C
struct FCrowdValueState
{
	float                                              Value;                                                     // 0x0000(0x0004) (Edit)
	struct FName                                       StateName;                                                 // 0x0004(0x0008) (Edit)

};
// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialMesh
// 0x0064
struct FAnimatedMaterialMesh
{
	struct FName                                       MeshAttachmentName;                                        // 0x0000(0x0008) (Edit)
	class UMaterialInterface*                          Material;                                                  // 0x0008(0x0008) (Edit)
	int                                                MaterialIndex;                                             // 0x0010(0x0004) (Edit)
	unsigned char                                      UnknownData8FVR[0x4];                                      // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FBoostMeshOverride>                  MeshOverrides;                                             // 0x0018(0x0010) (Edit, Component, NeedCtorLink)
	TArray<struct FAnimatedMaterialParamFloat>         FloatParams;                                               // 0x0028(0x0010) (Edit, Component, NeedCtorLink)
	TArray<struct FAnimatedMaterialParamVector>        VectorParams;                                              // 0x0038(0x0010) (Edit, Component, NeedCtorLink)
	TArray<struct FAnimatedMaterialParamColor>         ColorParams;                                               // 0x0048(0x0010) (Edit, Component, NeedCtorLink)
	class UActorComponent*                             Mesh;                                                      // 0x0058(0x0008) (ExportObject, Transient, Component, EditInline)
	float                                              ElapsedTime;                                               // 0x0060(0x0004) (Transient)

};
// ScriptStruct TAGame._CrowdTypes_TA.CrowdScoreState
// 0x0010
struct FCrowdScoreState
{
	int                                                MaxIncreaseScoreSeparation;                                // 0x0000(0x0004) (Edit)
	int                                                MaxDecreaseScoreSeparation;                                // 0x0004(0x0004) (Edit)
	struct FName                                       StateName;                                                 // 0x0008(0x0008) (Edit)

};
// ScriptStruct TAGame._ShopTypes_TA.ShopDiscount
// 0x002C
struct FShopDiscount
{
	int                                                Id;                                                        // 0x0000(0x0004) (DataBinding)
	int                                                ShopItemCostID;                                            // 0x0004(0x0004) (DataBinding)
	unsigned char                                      UnknownDataRL41[0x8];                                      // 0x0008(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._ShopTypes_TA.ShopDiscount.StartDate
	unsigned char                                      UnknownDataP2DZ[0x8];                                      // 0x0010(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._ShopTypes_TA.ShopDiscount.EndDate
	TArray<struct FShopPrice>                          Price;                                                     // 0x0018(0x0010) (NeedCtorLink, DataBinding)
	int                                                Quantity;                                                  // 0x0028(0x0004) (DataBinding)

};
// ScriptStruct TAGame.VanityQuery_TA.VanityQuerySet
// 0x0018
struct FVanityQuerySet
{
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                 // 0x0000(0x0010) (NeedCtorLink)
	TEnumAsByte<EVanityType>                           VanityType;                                                // 0x0010(0x0001)
	unsigned char                                      UnknownDataZI9S[0x3];                                      // 0x0011(0x0003) MISSED OFFSET
	unsigned char                                      bForced : 1;                                               // 0x0014(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataKI52[0x2];                                      // 0x0011(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._Types_TA.PartyUpMergeError
// 0x0078
struct FPartyUpMergeError
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	struct FUniqueNetId                                LeaderID;                                                  // 0x0038(0x0038)
	class UError*                                      Error;                                                     // 0x0070(0x0008)

};
// ScriptStruct TAGame._ShopTypes_TA.ShopCost
// 0x0069
struct FShopCost
{
	int                                                ShopItemCostID;                                            // 0x0000(0x0004) (DataBinding)
	unsigned char                                      UnknownData5I3P[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FShopPrice>                          Price;                                                     // 0x0008(0x0010) (NeedCtorLink, DataBinding)
	struct FShopDiscount                               Discount;                                                  // 0x0018(0x0030) (NeedCtorLink, DataBinding)
	unsigned char                                      UnknownData3BZB[0x8];                                      // 0x0048(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._ShopTypes_TA.ShopCost.StartDate
	unsigned char                                      UnknownDataTXS4[0x8];                                      // 0x0050(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._ShopTypes_TA.ShopCost.EndDate
	TArray<struct FShopDiscount>                       BulkDiscounts;                                             // 0x0058(0x0010) (NeedCtorLink, DataBinding)
	TEnumAsByte<EItemDisplayType>                      DisplayTypeID;                                             // 0x0068(0x0001) (DataBinding)

};
// ScriptStruct TAGame._ShopTypes_TA.OnlineShopAttribute
// 0x0018
struct FOnlineShopAttribute
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (DataBinding)
	struct FString                                     Value;                                                     // 0x0008(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame._ShopTypes_TA.ShopItem
// 0x00B8
struct FShopItem
{
	int                                                ShopItemID;                                                // 0x0000(0x0004) (DataBinding)
	unsigned char                                      Purchasable : 1;                                           // 0x0004(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataYZIU[0x2];                                      // 0x0004(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                PurchasedQuantity;                                         // 0x0008(0x0004) (DataBinding)
	int                                                MaxQuantityPerPlayer;                                      // 0x000C(0x0004) (DataBinding)
	unsigned char                                      UnknownDataUDN1[0x8];                                      // 0x0010(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._ShopTypes_TA.ShopItem.StartDate
	unsigned char                                      UnknownDataS40J[0x8];                                      // 0x0018(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._ShopTypes_TA.ShopItem.EndDate
	TArray<struct FShopDeliverable>                    DeliverableProducts;                                       // 0x0020(0x0010) (NeedCtorLink, DataBinding)
	TArray<struct FShopCurrencyInfo>                   DeliverableCurrencies;                                     // 0x0030(0x0010) (NeedCtorLink, DataBinding)
	TArray<struct FShopCost>                           Costs;                                                     // 0x0040(0x0010) (NeedCtorLink, DataBinding)
	TArray<struct FString>                             FeaturedCollections;                                       // 0x0050(0x0010) (NeedCtorLink, DataBinding)
	TArray<int>                                        ShopItemLocations;                                         // 0x0060(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Title;                                                     // 0x0070(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Description;                                               // 0x0080(0x0010) (NeedCtorLink, DataBinding)
	TArray<struct FOnlineShopAttribute>                Attributes;                                                // 0x0090(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     ImageURL;                                                  // 0x00A0(0x0010) (NeedCtorLink, DataBinding)
	class UTexture*                                    ItemTexture;                                               // 0x00B0(0x0008) (DataBinding)

};
// ScriptStruct TAGame.BTComponent.BTStatusLog
// 0x0028
struct FBTStatusLog
{
	class UBTNode*                                     Node;                                                      // 0x0000(0x0008)
	int                                                Depth;                                                     // 0x0008(0x0004)
	TEnumAsByte<EBTStatus>                             Status;                                                    // 0x000C(0x0001)
	unsigned char                                      UnknownData628Q[0x3];                                      // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     Message;                                                   // 0x0010(0x0010) (NeedCtorLink)
	unsigned char                                      bSetMessage : 1;                                           // 0x0020(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataV3H1[0x2];                                      // 0x0020(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bCondition : 1;                                            // 0x0020(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataJJBA[0x2];                                      // 0x0024(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              LastEvalTime;                                              // 0x0024(0x0004)

};
// ScriptStruct TAGame._AITypes_TA.BTDynamicLinkData
// 0x0010
struct FBTDynamicLinkData
{
	struct FName                                       LinkName;                                                  // 0x0000(0x0008) (Edit)
	class UBTNode*                                     Node;                                                      // 0x0008(0x0008) (Edit)

};
// ScriptStruct TAGame.StayAsPartyMetrics_TA.PartyMergeResult
// 0x007C
struct FPartyMergeResult
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	struct FUniqueNetId                                LeaderID;                                                  // 0x0038(0x0038)
	unsigned char                                      bSuccess : 1;                                              // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataJDKR[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       FailReason;                                                // 0x0074(0x0008)

};
// ScriptStruct TAGame.VanityQuery_TA.VanityQueryRequest
// 0x0044
struct FVanityQueryRequest
{
	class UGFxShell_X*                                 Shell;                                                     // 0x0000(0x0008)
	TEnumAsByte<EVanityType>                           VanityType;                                                // 0x0008(0x0001)
	unsigned char                                      UnknownDataH9DW[0x7];                                      // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                 // 0x0010(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             VanityCallback;                                            // 0x0020(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataKM7X[0xC];                                      // 0x0020(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                NumIdsToQuery;                                             // 0x0038(0x0004)
	int                                                NumQueriesCompleted;                                       // 0x003C(0x0004)
	unsigned char                                      bForced : 1;                                               // 0x0040(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataEU04[0x2];                                      // 0x0040(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.ServerStartVoteEvent_TA.PartyInfo
// 0x0050
struct FPartyInfo
{
	struct FUniqueNetId                                LeaderID;                                                  // 0x0000(0x0038)
	TArray<struct FUniqueNetId>                        FollowerIds;                                               // 0x0038(0x0010) (NeedCtorLink)
	class AActor*                                      VoterOwner;                                                // 0x0048(0x0008)

};
// ScriptStruct TAGame.RPC_PsyNetGetVanities_TA.VanityProductData
// 0x0058
struct FVanityProductData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	TArray<int>                                        VanityTypes;                                               // 0x0038(0x0010) (NeedCtorLink)
	TArray<class UOnlineProduct_TA*>                   VanityProducts;                                            // 0x0048(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.StatFactory_TA.BallInfo
// 0x003C
struct FBallInfo
{
	class ABall_TA*                                    Ball;                                                      // 0x0000(0x0008)
	class UGoal_TA*                                    ShotGoal;                                                  // 0x0008(0x0008) (ExportObject, Component, EditInline)
	class UGoal_TA*                                    RedZoneGoal;                                               // 0x0010(0x0008) (ExportObject, Component, EditInline)
	class APRI_TA*                                     RedZonePRI;                                                // 0x0018(0x0008)
	int                                                RedZoneHitID;                                              // 0x0020(0x0004)
	float                                              GroundHitTime;                                             // 0x0024(0x0004)
	float                                              JuggleTime;                                                // 0x0028(0x0004)
	float                                              SpecialHitTime;                                            // 0x002C(0x0004)
	float                                              BallHitTime;                                               // 0x0030(0x0004)
	float                                              SaveTime;                                                  // 0x0034(0x0004)
	float                                              ShotTime;                                                  // 0x0038(0x0004)

};
// ScriptStruct TAGame.BTLockCollection.TimedLock
// 0x0010
struct FTimedLock
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)
	float                                              ReleaseTime;                                               // 0x0008(0x0004)
	unsigned char                                      bLockedOneFrame : 1;                                       // 0x000C(0x0001) BIT_FIELD
	unsigned char                                      UnknownData91CA[0x2];                                      // 0x000C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.RPC_PsyNetGetVanities_TA.VanityProductInfo
// 0x0058
struct FVanityProductInfo
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	TArray<int>                                        VanityTypes;                                               // 0x0038(0x0010) (NeedCtorLink)
	TArray<struct FOnlineProductData>                  ProductData;                                               // 0x0048(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._TourTypes_TA.FaceItPlayerStats
// 0x004C
struct FFaceItPlayerStats
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	int                                                Score;                                                     // 0x0038(0x0004)
	int                                                Saves;                                                     // 0x003C(0x0004)
	int                                                Shots;                                                     // 0x0040(0x0004)
	int                                                Goals;                                                     // 0x0044(0x0004)
	int                                                Assists;                                                   // 0x0048(0x0004)

};
// ScriptStruct TAGame.MatchCompleteMetrics_TA.MatchCompleteHistory
// 0x0024
struct FMatchCompleteHistory
{
	struct FString                                     MatchGUID;                                                 // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FUniqueNetId>                        Players;                                                   // 0x0010(0x0010) (NeedCtorLink)
	float                                              MatchCompleteTime;                                         // 0x0020(0x0004)

};
// ScriptStruct TAGame.StatFactory_TA.StatEventCollection
// 0x0150
struct FStatEventCollection
{
	class UStatEvent_TA*                               Win;                                                       // 0x0000(0x0008) (Edit)
	class UStatEvent_TA*                               Loss;                                                      // 0x0008(0x0008) (Edit)
	class UStatEvent_TA*                               TimePlayed;                                                // 0x0010(0x0008) (Edit)
	class UStatEvent_TA*                               Shot;                                                      // 0x0018(0x0008) (Edit)
	class UStatEvent_TA*                               Assist;                                                    // 0x0020(0x0008) (Edit)
	class UStatEvent_TA*                               Center;                                                    // 0x0028(0x0008) (Edit)
	class UStatEvent_TA*                               Clear;                                                     // 0x0030(0x0008) (Edit)
	class UStatEvent_TA*                               PoolShot;                                                  // 0x0038(0x0008) (Edit)
	class UStatEvent_TA*                               Goal;                                                      // 0x0040(0x0008) (Edit)
	class UStatEvent_TA*                               AerialGoal;                                                // 0x0048(0x0008) (Edit)
	class UStatEvent_TA*                               BicycleGoal;                                               // 0x0050(0x0008) (Edit)
	class UStatEvent_TA*                               BulletGoal;                                                // 0x0058(0x0008) (Edit)
	class UStatEvent_TA*                               BackwardsGoal;                                             // 0x0060(0x0008) (Edit)
	class UStatEvent_TA*                               LongGoal;                                                  // 0x0068(0x0008) (Edit)
	class UStatEvent_TA*                               OvertimeGoal;                                              // 0x0070(0x0008) (Edit)
	class UStatEvent_TA*                               TurtleGoal;                                                // 0x0078(0x0008) (Edit)
	class UStatEvent_TA*                               AerialHit;                                                 // 0x0080(0x0008) (Edit)
	class UStatEvent_TA*                               BicycleHit;                                                // 0x0088(0x0008) (Edit)
	class UStatEvent_TA*                               BulletHit;                                                 // 0x0090(0x0008) (Edit)
	class UStatEvent_TA*                               JuggleHit;                                                 // 0x0098(0x0008) (Edit)
	class UStatEvent_TA*                               FirstTouch;                                                // 0x00A0(0x0008) (Edit)
	class UStatEvent_TA*                               BallHit;                                                   // 0x00A8(0x0008) (Edit)
	class UStatEvent_TA*                               Save;                                                      // 0x00B0(0x0008) (Edit)
	class UStatEvent_TA*                               EpicSave;                                                  // 0x00B8(0x0008) (Edit)
	class UStatEvent_TA*                               FreezeSave;                                                // 0x00C0(0x0008) (Edit)
	class UStatEvent_TA*                               HatTrick;                                                  // 0x00C8(0x0008) (Edit)
	class UStatEvent_TA*                               Savior;                                                    // 0x00D0(0x0008) (Edit)
	class UStatEvent_TA*                               Playmaker;                                                 // 0x00D8(0x0008) (Edit)
	class UStatEvent_TA*                               MVP;                                                       // 0x00E0(0x0008) (Edit)
	class UStatEvent_TA*                               FastestGoal;                                               // 0x00E8(0x0008) (Edit)
	class UStatEvent_TA*                               SlowestGoal;                                               // 0x00F0(0x0008) (Edit)
	class UStatEvent_TA*                               FurthestGoal;                                              // 0x00F8(0x0008) (Edit)
	class UStatEvent_TA*                               OwnGoal;                                                   // 0x0100(0x0008) (Edit)
	class UStatEvent_TA*                               MostBallTouches;                                           // 0x0108(0x0008) (Edit)
	class UStatEvent_TA*                               FewestBallTouches;                                         // 0x0110(0x0008) (Edit)
	class UStatEvent_TA*                               MostBoostPickups;                                          // 0x0118(0x0008) (Edit)
	class UStatEvent_TA*                               FewestBoostPickups;                                        // 0x0120(0x0008) (Edit)
	class UStatEvent_TA*                               CarTouches;                                                // 0x0128(0x0008) (Edit)
	class UStatEvent_TA*                               Demolition;                                                // 0x0130(0x0008) (Edit)
	class UStatEvent_TA*                               Demolish;                                                  // 0x0138(0x0008) (Edit)
	class UStatEvent_TA*                               LowFive;                                                   // 0x0140(0x0008) (Edit)
	class UStatEvent_TA*                               HighFive;                                                  // 0x0148(0x0008) (Edit)

};
// ScriptStruct TAGame.ShopMetrics_TA.ShopItemData
// 0x0008
struct FShopItemData
{
	int                                                ShopItemID;                                                // 0x0000(0x0004)
	int                                                NumTimesPreviewed;                                         // 0x0004(0x0004)

};
// ScriptStruct TAGame.ShopMetrics_TA.ShopTabData
// 0x0028
struct FShopTabData
{
	int                                                FromShopID;                                                // 0x0000(0x0004)
	int                                                NewShopID;                                                 // 0x0004(0x0004)
	unsigned char                                      UnknownDataK34H[0x8];                                      // 0x0008(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.ShopMetrics_TA.ShopTabData.StartTimestamp
	unsigned char                                      UnknownDataJ0OG[0x8];                                      // 0x0010(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.ShopMetrics_TA.ShopTabData.EndTimestamp
	TArray<struct FShopItemData>                       ItemMetrics;                                               // 0x0018(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._TourTypes_TA.TournamentEndData
// 0x0058
struct FTournamentEndData
{
	unsigned char                                      UnknownData0U0Q[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._TourTypes_TA.TournamentEndData.CycleID
	int                                                WeekIndex;                                                 // 0x0008(0x0004)
	struct FTournamentResult                           Result;                                                    // 0x000C(0x000C)
	TArray<struct FShopCurrencyInfo>                   CurrencyRewards;                                           // 0x0018(0x0010) (NeedCtorLink)
	TArray<struct FShopCurrencyInfo>                   WeeklyCurrencies;                                          // 0x0028(0x0010) (NeedCtorLink)
	TArray<struct FShopCurrencyInfo>                   OldWeeklyCurrencies;                                       // 0x0038(0x0010) (NeedCtorLink)
	TArray<struct FTournamentResult>                   OldWeeklyResults;                                          // 0x0048(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._TourTypes_TA.GFxTournamentReward
// 0x0010
struct FGFxTournamentReward
{
	int                                                Placement;                                                 // 0x0000(0x0004) (Edit, DataBinding)
	unsigned char                                      UnknownDataBXSS[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData8MQZ[0x8];                                      // 0x0004(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._TourTypes_TA.GFxTournamentReward.InstanceID

};
// ScriptStruct TAGame._TourTypes_TA.TourMatchNode
// 0x0020
struct FTourMatchNode
{
	int                                                MatchID;                                                   // 0x0000(0x0004)
	int                                                Round;                                                     // 0x0004(0x0004)
	int                                                Order;                                                     // 0x0008(0x0004)
	struct FIntPair                                    Teams;                                                     // 0x000C(0x0008)
	int                                                NextMatchID;                                               // 0x0014(0x0004)
	struct FIntPair                                    PrevMatch;                                                 // 0x0018(0x0008)

};
// ScriptStruct TAGame.RPC_GetSpecialEventCurrencyRewards_TA.SpecialEventReward
// 0x003C
struct FSpecialEventReward
{
	int                                                StoreProductID;                                            // 0x0000(0x0004)
	int                                                ProductID;                                                 // 0x0004(0x0004)
	int                                                SeriesID;                                                  // 0x0008(0x0004)
	int                                                Cost;                                                      // 0x000C(0x0004)
	int                                                CurrencyID;                                                // 0x0010(0x0004)
	int                                                MaxQuantityPerPlayer;                                      // 0x0014(0x0004)
	int                                                PurchasedQuantity;                                         // 0x0018(0x0004)
	unsigned char                                      UnknownDataV0SA[0x4];                                      // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FOnlineProductAttribute>             Attributes;                                                // 0x0020(0x0010) (NeedCtorLink)
	struct FXPRewardData                               XPReward;                                                  // 0x0030(0x000C)

};
// ScriptStruct TAGame.RPC_GetSpecialEventCurrencyRewards_TA.SpecialEventStore
// 0x0018
struct FSpecialEventStore
{
	int                                                EventID;                                                   // 0x0000(0x0004)
	unsigned char                                      UnknownDataGRT8[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FSpecialEventReward>                 Rewards;                                                   // 0x0008(0x0010) (Transient, NeedCtorLink)

};
// ScriptStruct TAGame.MergePartyEvent_TA.MergePartyReplicatedData
// 0x0190
struct FMergePartyReplicatedData
{
	class AStayAsPartyVoter_TA*                        Leader;                                                    // 0x0000(0x0008)
	struct FUniqueNetId                                InviteeIDs[0x7];                                           // 0x0008(0x0038)

};
// ScriptStruct TAGame.GFxData_BlueprintGarage_TA.BlueprintPreviewProduct
// 0x0020
struct FBlueprintPreviewProduct
{
	int                                                BlueprintProductID;                                        // 0x0000(0x0004)
	struct FProductHashID                              BlueprintHashID;                                           // 0x0004(0x0004)
	class UOnlineProduct_TA*                           OnlineProduct;                                             // 0x0008(0x0008)
	TArray<struct FProductHashID>                      PossibleHashIDsForThisProduct;                             // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.GFxData_SpecialEventStore_TA.GFxSpecialEventReward
// 0x0020
struct FGFxSpecialEventReward
{
	int                                                ProductID;                                                 // 0x0000(0x0004)
	struct FProductHashID                              HashID;                                                    // 0x0004(0x0004) (DataBinding)
	int                                                StoreProductID;                                            // 0x0008(0x0004) (DataBinding)
	int                                                Cost;                                                      // 0x000C(0x0004) (DataBinding)
	int                                                Remaining;                                                 // 0x0010(0x0004) (DataBinding)
	struct FXPRewardData                               XPReward;                                                  // 0x0014(0x000C) (DataBinding)

};
// ScriptStruct TAGame.GFxData_ErrorModals_TA.PendingError
// 0x0020
struct FPendingError
{
	class UError*                                      Error;                                                     // 0x0000(0x0008)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataJNZI[0xC];                                      // 0x0008(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._Types_TA.OnlineReward
// 0x0028
struct FOnlineReward
{
	int                                                Id;                                                        // 0x0000(0x0004)
	unsigned char                                      UnknownDataHGYM[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FOnlineProductData>                  ProductData;                                               // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct U_Types_TA_FOnlineXPReward>          RewardDrops;                                               // 0x0018(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.CameraTrack_TA.CameraTrackRotationPoint
// 0x0010
struct FCameraTrackRotationPoint
{
	float                                              Time;                                                      // 0x0000(0x0004)
	struct FRotator                                    Rotation;                                                  // 0x0004(0x000C)

};
// ScriptStruct TAGame._Types_TA.ChallengeRequirementProgress
// 0x0004
struct FChallengeRequirementProgress
{
	int                                                ProgressCount;                                             // 0x0000(0x0004)

};
// ScriptStruct TAGame.CrowdActorSettings_TA.BallHitCrowdNoise
// 0x0010
struct FBallHitCrowdNoise
{
	float                                              RelativeSpeed;                                             // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownDataLRYD[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	class UCrowdNoiseModifier_TA*                      Noise;                                                     // 0x0008(0x0008) (Edit, EditInline)

};
// ScriptStruct TAGame.CrowdActorSettings_TA.CrowdDefenseSettings
// 0x0014
struct FCrowdDefenseSettings
{
	float                                              DefenseZoneTime;                                           // 0x0000(0x0004) (Edit)
	float                                              DefenseZoneDistance;                                       // 0x0004(0x0004) (Edit)
	class UAkSoundCue*                                 Sound;                                                     // 0x0008(0x0008) (Edit)
	float                                              ReplayDelay;                                               // 0x0010(0x0004) (Edit)

};
// ScriptStruct TAGame.CrowdActorSettings_TA.StatCrowdNoise
// 0x0010
struct FStatCrowdNoise
{
	class UStatEvent_TA*                               StatEvent;                                                 // 0x0000(0x0008) (Edit, EditConst)
	class UCrowdNoiseModifier_TA*                      Noise;                                                     // 0x0008(0x0008) (Edit, EditInline)

};
// ScriptStruct TAGame.GFxData_TourPlatforms_TA.GFxTourPlatformGroup
// 0x0024
struct FGFxTourPlatformGroup
{
	TArray<TEnumAsByte<EOnlinePlatform>>               Platforms;                                                 // 0x0000(0x0010) (Transient, NeedCtorLink)
	struct FString                                     Label;                                                     // 0x0010(0x0010) (NeedCtorLink, DataBinding)
	unsigned char                                      bSelected : 1;                                             // 0x0020(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataEC65[0x2];                                      // 0x0020(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.GFxData_PartyInvite_TA.InviteTarget
// 0x0050
struct FInviteTarget
{
	struct FUniqueNetId                                ToPlayer;                                                  // 0x0000(0x0038)
	struct FScriptDelegate                             InviteHandler;                                             // 0x0038(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataF6IW[0xC];                                      // 0x0038(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.CarColorSet_TA.DebugColor
// 0x0014
struct FDebugColor
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010) (Edit, EditConst)
	unsigned char                                      bPreview : 1;                                              // 0x0010(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataTB9A[0x2];                                      // 0x0010(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._Types_TA.ChallengeProgress
// 0x0028
struct FChallengeProgress
{
	int                                                Id;                                                        // 0x0000(0x0004)
	unsigned char                                      bIsHidden : 1;                                             // 0x0004(0x0001) BIT_FIELD
	unsigned char                                      UnknownData1637[0x2];                                      // 0x0004(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                CompleteCount;                                             // 0x0008(0x0004)
	unsigned char                                      UnknownDataQM3G : 32;                                      // 0x000C(0x0001)
	unsigned char                                      bNotifyCompleted : 1;                                      // 0x000C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataM798[0x2];                                      // 0x000C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bNotifyAvailable : 1;                                      // 0x000C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataUAFU[0x2];                                      // 0x0010(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bNotifyNewInfo : 1;                                        // 0x000C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataMQ08[0x2];                                      // 0x0010(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bRewardsAvailable : 1;                                     // 0x000C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataDWMY[0x2];                                      // 0x0010(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bComplete : 1;                                             // 0x000C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataTI33[0x2];                                      // 0x0010(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataWKE8[0x8];                                      // 0x0010(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._Types_TA.ChallengeProgress.ProgressResetTimeUTC
	TArray<struct FChallengeRequirementProgress>       RequirementProgress;                                       // 0x0018(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.OnlineGamePlayerTitles_TA.CachedPlayerData
// 0x0068
struct FCachedPlayerData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	TArray<struct FName>                               Titles;                                                    // 0x0038(0x0010) (NeedCtorLink)
	float                                              CacheTime;                                                 // 0x0048(0x0004)
	unsigned char                                      UnknownData0V9E[0x4];                                      // 0x004C(0x0004) MISSED OFFSET
	class URPC_X*                                      RPC;                                                       // 0x0050(0x0008)
	TArray<struct FScriptDelegate>                     Callbacks;                                                 // 0x0058(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.GFxData_PartyInvite_TA.InviteDatabind
// 0x0048
struct FInviteDatabind
{
	struct FUniqueLobbyId                              LobbyId;                                                   // 0x0000(0x0010)
	struct FUniqueNetId                                FromUser;                                                  // 0x0010(0x0038) (DataBinding)

};
// ScriptStruct TAGame._Types_TA.WaveParams
// 0x0008
struct FWaveParams
{
	float                                              Frequency;                                                 // 0x0000(0x0004) (Edit)
	float                                              Amplitude;                                                 // 0x0004(0x0004) (Edit)

};
// ScriptStruct TAGame.RPC_TourUpdateGame_TA.TeamUpdateInfo
// 0x0008
struct FTeamUpdateInfo
{
	int                                                TeamID;                                                    // 0x0000(0x0004)
	int                                                Difficulty;                                                // 0x0004(0x0004)

};
// ScriptStruct TAGame.ChallengeManager_TA.ChallengeGroup
// 0x0010
struct FChallengeGroup
{
	TArray<class UChallenge_TA*>                       Group;                                                     // 0x0000(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.DebugHelpMenu_TA.DebugHelpItem
// 0x0030
struct FDebugHelpItem
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Command;                                                   // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     Description;                                               // 0x0020(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.RPC_GetDLC_TA.DLCInfo
// 0x000C
struct FDLCInfo
{
	struct FName                                       DLCName;                                                   // 0x0000(0x0008)
	unsigned char                                      bIsNew : 1;                                                // 0x0008(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataZGSX[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.GFxData_ProductTradeIn_TA.TradeIn
// 0x0004
struct UGFxData_ProductTradeIn_TA_FTradeIn
{
	struct FProductHashID                              HashID;                                                    // 0x0000(0x0004) (DataBinding)

};
// ScriptStruct TAGame.RPC_AchievementDataUpload_TA.AchievementUpload
// 0x001C
struct FAchievementUpload
{
	int                                                Id;                                                        // 0x0000(0x0004)
	unsigned char                                      UnknownDataYEVB[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     DisplayName;                                               // 0x0008(0x0010) (NeedCtorLink)
	unsigned char                                      bOnlineUnlockAuthority : 1;                                // 0x0018(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataLFPT[0x2];                                      // 0x0018(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.DebugHelpMenu_TA.DebugCategory
// 0x0020
struct UDebugHelpMenu_TA_FDebugCategory
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FDebugHelpItem>                      Items;                                                     // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.RPCIntroCar
// 0x0038
struct FRPCIntroCar
{
	int                                                TemplateIndex;                                             // 0x0000(0x0004)
	unsigned char                                      UnknownData6A7B[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     TemplateName;                                              // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     TemplateDescription;                                       // 0x0018(0x0010) (NeedCtorLink)
	TArray<int>                                        ProductsList;                                              // 0x0028(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.CurrencyProductSet_TA.CurrencyProduct
// 0x000C
struct FCurrencyProduct
{
	struct FProductHashID                              HashID;                                                    // 0x0000(0x0004)
	int                                                CurrencyID;                                                // 0x0004(0x0004)
	int                                                Quantity;                                                  // 0x0008(0x0004)

};
// ScriptStruct TAGame._Types_TA.IntroCarInfo
// 0x0028
struct FIntroCarInfo
{
	int                                                TemplateIndex;                                             // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownData8KQN[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     TemplateName;                                              // 0x0008(0x0010) (Edit, NeedCtorLink)
	struct FString                                     TemplateDescription;                                       // 0x0018(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.EditorIntroCar
// 0x0038
struct FEditorIntroCar
{
	struct FIntroCarInfo                               Info;                                                      // 0x0000(0x0028) (Edit, NeedCtorLink)
	TArray<class UProduct_TA*>                         ProductList;                                               // 0x0028(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.BodyToEngineAudioPair
// 0x0010
struct FBodyToEngineAudioPair
{
	class UProduct_TA*                                 Body;                                                      // 0x0000(0x0008)
	class UProduct_TA*                                 EngineAudio;                                               // 0x0008(0x0008)

};
// ScriptStruct TAGame.SpecialPickup_TA.PickupReplacement
// 0x0010
struct FPickupReplacement
{
	class UProduct_TA*                                 Body;                                                      // 0x0000(0x0008)
	class ASpecialPickup_TA*                           Pickup;                                                    // 0x0008(0x0008)

};
// ScriptStruct TAGame.EulaSave_TA.EulaVersion
// 0x0004
struct FEulaVersion
{
	int                                                TextHash;                                                  // 0x0000(0x0004)

};
// ScriptStruct TAGame.ListenServer_TA.LoadingPlayer
// 0x0040
struct FLoadingPlayer
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	int                                                NumPlayers;                                                // 0x0038(0x0004)
	float                                              TimeoutTime;                                               // 0x003C(0x0004)

};
// ScriptStruct TAGame.GFxData_TrainingModeConstants_TA.TrainingModeDifficulty
// 0x0001
struct FTrainingModeDifficulty
{
	TEnumAsByte<EDifficulty>                           Difficulty;                                                // 0x0000(0x0001) (DataBinding)

};
// ScriptStruct TAGame.GFxData_TrainingModeConstants_TA.TrainingModeType
// 0x0001
struct FTrainingModeType
{
	TEnumAsByte<ETrainingType>                         Type;                                                      // 0x0000(0x0001) (DataBinding)

};
// ScriptStruct TAGame.GFxData_TrainingModeConstants_TA.TrainingModeTag
// 0x0001
struct FTrainingModeTag
{
	TEnumAsByte<ETrainingTag>                          Tag;                                                       // 0x0000(0x0001) (DataBinding)

};
// ScriptStruct TAGame.MapPrefsMetrics_TA.MapPrefsMetric
// 0x0028
struct FMapPrefsMetric
{
	int                                                Playlist;                                                  // 0x0000(0x0004)
	unsigned char                                      UnknownData1IA8[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               Likes;                                                     // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct FName>                               Dislikes;                                                  // 0x0018(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.PlayerChatMessage
// 0x0058
struct FPlayerChatMessage
{
	float                                              MessageTimeStamp;                                          // 0x0000(0x0004)
	unsigned char                                      UnknownDataMIJ1[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FUniqueNetId                                PlayerID;                                                  // 0x0008(0x0038)
	TEnumAsByte<EChatChannel>                          ChatChannel;                                               // 0x0040(0x0001)
	unsigned char                                      UnknownData0YJV[0x3];                                      // 0x0041(0x0003) MISSED OFFSET
	int                                                Team;                                                      // 0x0044(0x0004)
	struct FString                                     Message;                                                   // 0x0048(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.FXActor_Boost_TA.BoostMeshMaterialOverride
// 0x0018
struct FBoostMeshMaterialOverride
{
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0008) (Edit)
	TArray<int>                                        Index;                                                     // 0x0008(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame.MapsConfig_TA.OnlineMapSet
// 0x0020
struct FOnlineMapSet
{
	struct FName                                       SetName;                                                   // 0x0000(0x0008) (Edit)
	TArray<struct FOnlineMapData>                      Maps;                                                      // 0x0008(0x0010) (Edit, NeedCtorLink)
	class UMapSet_TA*                                  MapSet;                                                    // 0x0018(0x0008)

};
// ScriptStruct TAGame.GFxData_TrainingModeBrowser_TA.FavoritedFileMetaData
// 0x0028
struct FFavoritedFileMetaData
{
	struct FString                                     Code;                                                      // 0x0000(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownDataHKJ9[0x8];                                      // 0x0010(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_TrainingModeBrowser_TA.FavoritedFileMetaData.UpdatedAt
	struct FString                                     Filename;                                                  // 0x0018(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.MapsConfig_TA.OnlineMapData
// 0x000C
struct FOnlineMapData
{
	class UMapData_TA*                                 Map;                                                       // 0x0000(0x0008) (Edit)
	float                                              Frequency;                                                 // 0x0008(0x0004) (Edit)

};
// ScriptStruct TAGame.FXActor_Boost_TA.ParticleBodyParameterSet
// 0x0018
struct FParticleBodyParameterSet
{
	struct FName                                       AttachmentName;                                            // 0x0000(0x0008) (Edit)
	TArray<struct FParticleSysParam>                   Parameters;                                                // 0x0008(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame.FaceIt_TA.FaceItMatchInfo
// 0x0034
struct FFaceItMatchInfo
{
	int                                                MatchID;                                                   // 0x0000(0x0004)
	int                                                serverId;                                                  // 0x0004(0x0004)
	struct FString                                     TeamNameA;                                                 // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     TeamNameB;                                                 // 0x0018(0x0010) (NeedCtorLink)
	unsigned char                                      bIsSpectator : 1;                                          // 0x0028(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataG4KU[0x2];                                      // 0x0028(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIsCrossPlatform : 1;                                      // 0x0028(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataSTGX[0x2];                                      // 0x002C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                TeamSize;                                                  // 0x002C(0x0004)
	int                                                PartnerID;                                                 // 0x0030(0x0004)

};
// ScriptStruct TAGame.FXActor_Boost_TA.PreviewParticleOverride
// 0x0010
struct FPreviewParticleOverride
{
	class UParticleSystem*                             Template;                                                  // 0x0000(0x0008) (Edit)
	struct FName                                       FXAttachmentName;                                          // 0x0008(0x0008) (Edit)

};
// ScriptStruct TAGame.RPC_TrainingEditor_ListPlayerTrainingDataTimestamp_TA.CodeTimePair
// 0x0018
struct FCodeTimePair
{
	struct FString                                     Code;                                                      // 0x0000(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData199B[0x8];                                      // 0x0010(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_TrainingEditor_ListPlayerTrainingDataTimestamp_TA.CodeTimePair.UpdatedAt

};
// ScriptStruct TAGame.GFxData_TrainingModeBrowser_TA.SearchCacheData
// 0x0018
struct FSearchCacheData
{
	float                                              TimeoutTime;                                               // 0x0000(0x0004) (Transient)
	unsigned char                                      UnknownData5NGI[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	TArray<class UTrainingEditorData_TA*>              TrainingModes;                                             // 0x0008(0x0010) (Transient, NeedCtorLink)

};
// ScriptStruct TAGame.GFxData_TrainingModeBrowser_TA.CachedDownloadedFile
// 0x0020
struct FCachedDownloadedFile
{
	struct FString                                     Filename;                                                  // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Code;                                                      // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.ProductsConfig_TA.ReplacementProduct
// 0x0040
struct FReplacementProduct
{
	int                                                ProhibitedID;                                              // 0x0000(0x0004)
	unsigned char                                      bShowForOwningClient : 1;                                  // 0x0004(0x0001) BIT_FIELD
	unsigned char                                      UnknownData5AJA[0x2];                                      // 0x0004(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FOnlineProductData                          Replacement;                                               // 0x0008(0x0030) (NeedCtorLink)
	class UOnlineProduct_TA*                           ReplacementInstance;                                       // 0x0038(0x0008) (Transient)

};
// ScriptStruct TAGame.FXActor_Boost_TA.ParticleParameterSet
// 0x0020
struct FParticleParameterSet
{
	TArray<struct FParticleSysParam>                   Parameters;                                                // 0x0000(0x0010) (Edit, NeedCtorLink)
	TArray<struct FParticleSysParam>                   DrivingParameters;                                         // 0x0010(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.ActorHistory
// 0x0020
struct FActorHistory
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)
	TEnumAsByte<EHistory>                              Type;                                                      // 0x0008(0x0001)
	unsigned char                                      UnknownDataXK5L[0x7];                                      // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     SerializedHistory;                                         // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.SpecialEventConfig_TA.SpecialEventStoreConfigs
// 0x0040
struct FSpecialEventStoreConfigs
{
	int                                                EventID;                                                   // 0x0000(0x0004) (Edit, DataBinding)
	unsigned char                                      UnknownDataF4ZW[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     TabTitle;                                                  // 0x0008(0x0010) (Edit, NeedCtorLink, DataBinding)
	class UTexture*                                    TabIconTexture;                                            // 0x0018(0x0008) (Edit, DataBinding)
	unsigned char                                      UnknownData2AUD[0x8];                                      // 0x0020(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.SpecialEventConfig_TA.SpecialEventStoreConfigs.StartTime
	unsigned char                                      UnknownDataOIJ4[0x8];                                      // 0x0028(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.SpecialEventConfig_TA.SpecialEventStoreConfigs.EndTime
	struct FString                                     TabIconImageURL;                                           // 0x0030(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame.FXActor_Car_TA.WheelFX
// 0x0034
struct FWheelFX
{
	class UParticleSystemComponent*                    PSC;                                                       // 0x0000(0x0008) (ExportObject, Component, EditInline)
	struct FVector                                     Velocity;                                                  // 0x0008(0x000C)
	unsigned char                                      bHasContact : 1;                                           // 0x0014(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataXTGQ[0x2];                                      // 0x0014(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class AFXActor_X*                                  SupersonicFXActor;                                         // 0x0018(0x0008)
	struct FName                                       BoneName;                                                  // 0x0020(0x0008)
	struct FVector                                     BoneOffset;                                                // 0x0028(0x000C)

};
// ScriptStruct TAGame.SpecialEventConfig_TA.DebugMicroEventPlaylistID
// 0x0004
struct FDebugMicroEventPlaylistID
{
	int                                                Id;                                                        // 0x0000(0x0004) (Edit, DataBinding)

};
// ScriptStruct TAGame.ProductDatabase_TA.TemporaryProduct
// 0x0018
struct FTemporaryProduct
{
	struct FString                                     AssetPath;                                                 // 0x0000(0x0010) (Config, NeedCtorLink)
	struct FName                                       SlotName;                                                  // 0x0010(0x0008) (Config)

};
// ScriptStruct TAGame.GameEvent_GameEditor_TA.SpawnArchetypeData
// 0x000C
struct FSpawnArchetypeData
{
	class AActor*                                      Archetype;                                                 // 0x0000(0x0008)
	int                                                MaxSpawnCount;                                             // 0x0008(0x0004)

};
// ScriptStruct TAGame.ProductDatabase_TA.GarageFolderData
// 0x0060
struct FGarageFolderData
{
	TArray<int>                                        FolderIDs;                                                 // 0x0000(0x0010) (Native)
	struct FMap_Mirror                                 ProductIDToFolderID;                                       // 0x0010(0x0050) (Native)

};
// ScriptStruct TAGame._Types_TA.MapGroup
// 0x0010
struct FMapGroup
{
	TArray<class UMapData_TA*>                         Maps;                                                      // 0x0000(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame.GFxData_Chat_TA.ActiveChatTab
// 0x0040
struct FActiveChatTab
{
	TEnumAsByte<EChatChannel>                          Channel;                                                   // 0x0000(0x0001) (DataBinding)
	unsigned char                                      UnknownDataZJ48[0x7];                                      // 0x0001(0x0007) MISSED OFFSET
	struct FUniqueNetId                                PersonaId;                                                 // 0x0008(0x0038) (DataBinding)

};
// ScriptStruct TAGame.GFxData_Chat_TA.ChatPresetMessageGroup
// 0x0018
struct FChatPresetMessageGroup
{
	unsigned char                                      bTeam : 1;                                                 // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataD9AL[0x2];                                      // 0x0000(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData2HL1[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Label;                                                     // 0x0008(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame.GFxData_Chat_TA.ChatPresetMessage
// 0x0020
struct FChatPresetMessage
{
	int                                                GroupIndex;                                                // 0x0000(0x0004) (Edit, DataBinding)
	struct FName                                       Id;                                                        // 0x0004(0x0008) (DataBinding)
	unsigned char                                      bTeam : 1;                                                 // 0x000C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataWYR4[0x2];                                      // 0x000C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     Label;                                                     // 0x0010(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame.EngineAudioComponent_TA.CarStateData
// 0x0010
struct FCarStateData
{
	float                                              Throttle;                                                  // 0x0000(0x0004) (Transient)
	float                                              WheelSpeed;                                                // 0x0004(0x0004) (Transient)
	float                                              EngineRPM;                                                 // 0x0008(0x0004) (Transient)
	float                                              EngineLoad;                                                // 0x000C(0x0004) (Transient)

};
// ScriptStruct TAGame.XPManager_TA.TitleInfo
// 0x000C
struct FTitleInfo
{
	struct FName                                       Title;                                                     // 0x0000(0x0008) (Edit, Const)
	int                                                TitleCap;                                                  // 0x0008(0x0004) (Edit, Const)

};
// ScriptStruct TAGame.GFxData_Chat_TA.GFxChatMessage
// 0x006C
struct FGFxChatMessage
{
	int                                                Team;                                                      // 0x0000(0x0004) (DataBinding)
	unsigned char                                      UnknownData6G2Q[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     PlayerName;                                                // 0x0008(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Message;                                                   // 0x0018(0x0010) (NeedCtorLink, DataBinding)
	TEnumAsByte<EChatChannel>                          ChatChannel;                                               // 0x0028(0x0001) (DataBinding)
	unsigned char                                      UnknownData14FA[0x3];                                      // 0x0029(0x0003) MISSED OFFSET
	unsigned char                                      bLocalPlayer : 1;                                          // 0x002C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataLH6P[0x2];                                      // 0x0029(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bTransient : 1;                                            // 0x002C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataF6EI[0x2];                                      // 0x0030(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FUniqueNetId                                SenderId;                                                  // 0x0030(0x0038) (DataBinding)
	unsigned char                                      UnknownDataH2VH : 32;                                      // 0x0068(0x0001)
	unsigned char                                      bWarning : 1;                                              // 0x0068(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataUIKT[0x2];                                      // 0x0068(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.HUDBase_TA.ChatMessage
// 0x0070
struct FChatMessage
{
	class APlayerReplicationInfo*                      PRI;                                                       // 0x0000(0x0008)
	class ATeam_TA*                                    Team;                                                      // 0x0008(0x0008)
	struct FString                                     PlayerName;                                                // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     Message;                                                   // 0x0020(0x0010) (NeedCtorLink)
	TEnumAsByte<EChatChannel>                          ChatChannel;                                               // 0x0030(0x0001)
	unsigned char                                      UnknownDataFWJ1[0x3];                                      // 0x0031(0x0003) MISSED OFFSET
	unsigned char                                      bPreset : 1;                                               // 0x0034(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataRMJE[0x2];                                      // 0x0031(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FUniqueNetId                                Recipient;                                                 // 0x0038(0x0038)

};
// ScriptStruct TAGame.TourBracketCache_TA.BracketRequest
// 0x0028
struct FBracketRequest
{
	unsigned char                                      UnknownData95IX[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.TourBracketCache_TA.BracketRequest.TourID
	class UAsyncTask*                                  Task;                                                      // 0x0008(0x0008)
	struct FScriptDelegate                             Callback;                                                  // 0x0010(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataOYI2[0xC];                                      // 0x0010(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.FpsBucketRecorder_TA.FpsBucketData
// 0x001C
struct FFpsBucketData
{
	int                                                FPS;                                                       // 0x0000(0x0004) (Edit)
	float                                              TotalTime;                                                 // 0x0004(0x0004)
	float                                              GameThreadTime;                                            // 0x0008(0x0004)
	float                                              RenderThreadTime;                                          // 0x000C(0x0004)
	float                                              GPUFrameTime;                                              // 0x0010(0x0004)
	float                                              AvgFPS;                                                    // 0x0014(0x0004)
	int                                                Count;                                                     // 0x0018(0x0004)

};
// ScriptStruct TAGame._Types_TA.FPSBucketMetrics
// 0x0008
struct FFPSBucketMetrics
{
	int                                                FPS;                                                       // 0x0000(0x0004) (Edit)
	int                                                FrameCount;                                                // 0x0004(0x0004) (Edit)

};
// ScriptStruct TAGame.TourBracketCache_TA.BracketResult
// 0x0068
struct FBracketResult
{
	unsigned char                                      UnknownData63GW[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.TourBracketCache_TA.BracketResult.TourID
	struct FTourBracket                                Bracket;                                                   // 0x0008(0x0028) (NeedCtorLink)
	float                                              RetrieveTime;                                              // 0x0030(0x0004) (Transient)
	unsigned char                                      UnknownData8YYL[0x4];                                      // 0x0034(0x0004) MISSED OFFSET
	struct FScriptDelegate                             BracketChangedCallback;                                    // 0x0038(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData0MJC[0xC];                                      // 0x0034(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             ErrorCallback;                                             // 0x0050(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataJ9BV[0xC];                                      // 0x0050(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.GFxHUD_TA.ScreenLocation
// 0x0010
struct FScreenLocation
{
	struct FVector                                     ScreenPos;                                                 // 0x0000(0x000C)
	unsigned char                                      bOffScreen : 1;                                            // 0x000C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataE2CA[0x2];                                      // 0x000C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.GFxData_Products_TA.ProductStatInfo
// 0x0040
struct FProductStatInfo
{
	struct FString                                     ProductStatLabel;                                          // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     ProductStatDescription;                                    // 0x0010(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     ProductStatValue;                                          // 0x0020(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     CertifiedStatLabel;                                        // 0x0030(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame.TourRewards_TA.RewardsResult
// 0x0018
struct FRewardsResult
{
	unsigned char                                      UnknownDataKGBK[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.TourRewards_TA.RewardsResult.TourID
	TArray<struct FTourReward>                         Rewards;                                                   // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.TourCredentials_TA.CredentialItem
// 0x0028
struct FCredentialItem
{
	unsigned char                                      UnknownDataTRRZ[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.TourCredentials_TA.CredentialItem.TourID
	struct FTourPrivateCredentials                     Credentials;                                               // 0x0008(0x0020) (NeedCtorLink)

};
// ScriptStruct TAGame.TourRewards_TA.RewardsRequest
// 0x0028
struct FRewardsRequest
{
	unsigned char                                      UnknownDataOTFN[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.TourRewards_TA.RewardsRequest.TourID
	class UAsyncTask*                                  Task;                                                      // 0x0008(0x0008)
	struct FScriptDelegate                             Callback;                                                  // 0x0010(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataS7NF[0xC];                                      // 0x0010(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._Types_TA.QuickChatGroup
// 0x0014
struct FQuickChatGroup
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (NeedCtorLink)
	int                                                Count;                                                     // 0x0010(0x0004)

};
// ScriptStruct TAGame.Team_TA.ReplicatedLogoData
// 0x0008
struct FReplicatedLogoData
{
	int                                                LogoID;                                                    // 0x0000(0x0004)
	unsigned char                                      bSwapColors : 1;                                           // 0x0004(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataO3EJ[0x2];                                      // 0x0004(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._Types_TA.StatData
// 0x000C
struct FStatData
{
	struct FName                                       EventName;                                                 // 0x0000(0x0008)
	int                                                Count;                                                     // 0x0008(0x0004)

};
// ScriptStruct TAGame._Types_TA.ReplayHeaderLoadResult
// 0x0010
struct FReplayHeaderLoadResult
{
	class UReplay_TA*                                  Header;                                                    // 0x0000(0x0008)
	class UError*                                      Error;                                                     // 0x0008(0x0008)

};
// ScriptStruct TAGame.GFxData_ReplayViewer_TA.LocalizedCameraMode
// 0x0030
struct FLocalizedCameraMode
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (DataBinding)
	unsigned char                                      bDisabled : 1;                                             // 0x0008(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData1Q19[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData0PS2[0x4];                                      // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     Label;                                                     // 0x0010(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Description;                                               // 0x0020(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame._Types_TA.OnlinePlayerMatchData
// 0x00F0
struct FOnlinePlayerMatchData
{
	class APRI_TA*                                     PRI;                                                       // 0x0000(0x0008) (Transient)
	struct FUniqueNetId                                PlayerID;                                                  // 0x0008(0x0038)
	float                                              GameSecondsPlayed;                                         // 0x0040(0x0004)
	int                                                GameScore;                                                 // 0x0044(0x0004)
	int                                                MatchGoals;                                                // 0x0048(0x0004)
	int                                                MatchAssists;                                              // 0x004C(0x0004)
	int                                                MatchSaves;                                                // 0x0050(0x0004)
	int                                                MatchShots;                                                // 0x0054(0x0004)
	int                                                XPGained;                                                  // 0x0058(0x0004)
	unsigned char                                      UnknownDataNPGO[0x4];                                      // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FOnlineProductData>                  Loadout;                                                   // 0x0060(0x0010) (NeedCtorLink)
	unsigned char                                      bCompletedMatch : 1;                                       // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataBH9Q[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bForfeit : 1;                                              // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownData7X44[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bMvp : 1;                                                  // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataITQP[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bWinner : 1;                                               // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataCMSA[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bLeaver : 1;                                               // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataUBRG[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bInParty : 1;                                              // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataY0IY[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bJoinedInProgress : 1;                                     // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownData1CIX[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                ConsecutiveMatchesPlayed;                                  // 0x0074(0x0004)
	struct FUniqueNetId                                PartyLeader;                                               // 0x0078(0x0038)
	float                                              DistanceDrivenKM;                                          // 0x00B0(0x0004)
	unsigned char                                      UnknownData3C2M : 32;                                      // 0x00B4(0x0001)
	unsigned char                                      bPartyLeaderValid : 1;                                     // 0x00B4(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataJM8S[0x2];                                      // 0x00B4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                TeamIndex;                                                 // 0x00B8(0x0004)
	unsigned char                                      UnknownDataQC4F[0x4];                                      // 0x00BC(0x0004) MISSED OFFSET
	TArray<struct FStatData>                           Stats;                                                     // 0x00C0(0x0010) (NeedCtorLink)
	TArray<struct U_Types_TA_FLoadoutData>             TeamLoadouts;                                              // 0x00D0(0x0010) (NeedCtorLink)
	TArray<struct FQuickChatGroup>                     QuickChat;                                                 // 0x00E0(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.Team_TA.TemporarySpawnSpot
// 0x0028
struct FTemporarySpawnSpot
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)
	struct FVector                                     Velocity;                                                  // 0x0018(0x000C)
	float                                              Time;                                                      // 0x0024(0x0004)

};
// ScriptStruct TAGame.MatchSeries_TA.SeriesTeam
// 0x0014
struct FSeriesTeam
{
	TArray<struct FUniqueNetId>                        Players;                                                   // 0x0000(0x0010) (NeedCtorLink)
	int                                                GamesWon;                                                  // 0x0010(0x0004)

};
// ScriptStruct TAGame.Replay_TA.ReplayKeyframe
// 0x000C
struct FReplayKeyframe
{
	float                                              Time;                                                      // 0x0000(0x0004)
	int                                                frame;                                                     // 0x0004(0x0004)
	int                                                Position;                                                  // 0x0008(0x0004)

};
// ScriptStruct TAGame.Replay_TA.ReplayActorChannel
// 0x0040
struct FReplayActorChannel
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)
	class UClass*                                      ActorClass;                                                // 0x0008(0x0008)
	struct FName                                       actorName;                                                 // 0x0010(0x0008)
	TArray<unsigned char>                              Recent;                                                    // 0x0018(0x0010) (NeedCtorLink)
	TArray<int>                                        StillDirty;                                                // 0x0028(0x0010) (NeedCtorLink)
	float                                              CloseTime;                                                 // 0x0038(0x0004)
	unsigned char                                      bNetInitial : 1;                                           // 0x003C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataCBFM[0x2];                                      // 0x003C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bPlaybackPersistent : 1;                                   // 0x003C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataEBK5[0x2];                                      // 0x0040(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._Types_TA.LoadoutTeam
// 0x0018
struct FLoadoutTeam
{
	unsigned char                                      UnknownData98H7[0x10];                                     // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty TAGame._Types_TA.LoadoutTeam.Products
	struct FLoadoutTeamColor                           TeamColor;                                                 // 0x0010(0x0008)

};
// ScriptStruct TAGame.Replay_TA.ReplayLogItem
// 0x0028
struct FReplayLogItem
{
	int                                                frame;                                                     // 0x0000(0x0004)
	unsigned char                                      UnknownDataDO6N[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     PlayerName;                                                // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     Text;                                                      // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)

};
// ScriptStruct TAGame.SaveData_TA.OptionsValue
// 0x0018
struct FOptionsValue
{
	struct FName                                       Id;                                                        // 0x0000(0x0008)
	struct FString                                     Value;                                                     // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.GlobalLookupTexture_TA.IntVector
// 0x0008
struct FIntVector
{
	int                                                X;                                                         // 0x0000(0x0004) (Edit)
	int                                                Y;                                                         // 0x0004(0x0004) (Edit)

};
// ScriptStruct TAGame.Replay_TA.TimelineKeyframe
// 0x000C
struct FTimelineKeyframe
{
	struct FName                                       Type;                                                      // 0x0000(0x0008) (DataBinding)
	int                                                frame;                                                     // 0x0008(0x0004) (DataBinding)

};
// ScriptStruct TAGame.MapInfo_TA.WorldColorData
// 0x0040
struct FWorldColorData
{
	struct FLinearColor                                EnvironmentA;                                              // 0x0000(0x0010) (Edit)
	struct FLinearColor                                EnvironmentB;                                              // 0x0010(0x0010) (Edit)
	struct FLinearColor                                SunLight;                                                  // 0x0020(0x0010) (Edit)
	struct FLinearColor                                WorldLight;                                                // 0x0030(0x0010) (Edit)

};
// ScriptStruct TAGame._Types_TA.ProductSkinOverride
// 0x0010
struct FProductSkinOverride
{
	struct FName                                       SkinName;                                                  // 0x0000(0x0008) (Edit)
	class UMaterialInterface*                          Material;                                                  // 0x0008(0x0008) (Edit)

};
// ScriptStruct TAGame._Types_TA.SeasonMatch
// 0x001C
struct FSeasonMatch
{
	int                                                Week;                                                      // 0x0000(0x0004) (DataBinding)
	int                                                Team0;                                                     // 0x0004(0x0004) (DataBinding)
	int                                                Team1;                                                     // 0x0008(0x0004) (DataBinding)
	int                                                Score0;                                                    // 0x000C(0x0004) (DataBinding)
	int                                                Score1;                                                    // 0x0010(0x0004) (DataBinding)
	int                                                Winner;                                                    // 0x0014(0x0004) (DataBinding)
	unsigned char                                      bBye : 1;                                                  // 0x0018(0x0001) BIT_FIELD
	unsigned char                                      UnknownData6THW[0x2];                                      // 0x0018(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._Types_TA.SeasonTeamRank
// 0x001C
struct FSeasonTeamRank
{
	int                                                Team;                                                      // 0x0000(0x0004) (DataBinding)
	int                                                Wins;                                                      // 0x0004(0x0004) (DataBinding)
	int                                                Losses;                                                    // 0x0008(0x0004) (DataBinding)
	int                                                PointsFor;                                                 // 0x000C(0x0004) (DataBinding)
	int                                                PointsAgainst;                                             // 0x0010(0x0004) (DataBinding)
	int                                                PointsDifferential;                                        // 0x0014(0x0004) (DataBinding)
	int                                                EliminationWeek;                                           // 0x0018(0x0004) (DataBinding)

};
// ScriptStruct TAGame.GFxData_Season_TA.SeasonWeek
// 0x0004
struct FSeasonWeek
{
	unsigned char                                      bWinner : 1;                                               // 0x0000(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData510W[0x2];                                      // 0x0000(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.ProductTemplate_TA.ProductReplacement2
// 0x0018
struct FProductReplacement2
{
	TArray<TEnumAsByte<EConsoleType>>                  Platforms;                                                 // 0x0000(0x0010) (NeedCtorLink)
	class UProduct_TA*                                 Replacement;                                               // 0x0010(0x0008)

};
// ScriptStruct TAGame._Types_TA.SeasonTeam
// 0x001C
struct FSeasonTeam
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	struct FName                                       LogoAsset;                                                 // 0x0010(0x0008) (DataBinding)
	int                                                EliminationWeek;                                           // 0x0018(0x0004) (DataBinding)

};
// ScriptStruct TAGame._Types_TA.SeasonPlayer
// 0x002C
struct FSeasonPlayer
{
	int                                                Team;                                                      // 0x0000(0x0004) (DataBinding)
	unsigned char                                      UnknownData4WSK[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                      // 0x0008(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Id;                                                        // 0x0018(0x0010) (NeedCtorLink, DataBinding)
	unsigned char                                      bBot : 1;                                                  // 0x0028(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData6CF5[0x2];                                      // 0x0028(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.GFxData_NotificationManager_TA.GFXNotificationInfo
// 0x0020
struct FGFXNotificationInfo
{
	int                                                NotificationID;                                            // 0x0000(0x0004) (DataBinding)
	unsigned char                                      UnknownData42RH[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     TableName;                                                 // 0x0008(0x0010) (NeedCtorLink, DataBinding)
	class UNotification_TA*                            Notification;                                              // 0x0018(0x0008)

};
// ScriptStruct TAGame.GFxData_SeasonMode_TA.GFxBotData
// 0x0020
struct FGFxBotData
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Id;                                                        // 0x0010(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame.GFxData_SeasonMode_TA.GFxLogoData
// 0x002C
struct FGFxLogoData
{
	struct FName                                       AssetName;                                                 // 0x0000(0x0008) (DataBinding)
	class UTexture*                                    Logo;                                                      // 0x0008(0x0008) (DataBinding)
	int                                                TeamColor;                                                 // 0x0010(0x0004) (DataBinding)
	int                                                CustomColor;                                               // 0x0014(0x0004) (DataBinding)
	struct FString                                     DefaultTeamName;                                           // 0x0018(0x0010) (NeedCtorLink, DataBinding)
	unsigned char                                      bIsBotTeam : 1;                                            // 0x0028(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData4S0E[0x2];                                      // 0x0028(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._ShopTypes_TA.ShopData
// 0x0040
struct FShopData
{
	int                                                Id;                                                        // 0x0000(0x0004)
	unsigned char                                      UnknownData748H[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                      // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     Title;                                                     // 0x0018(0x0010) (NeedCtorLink)
	TEnumAsByte<EShopType>                             Type;                                                      // 0x0028(0x0001)
	unsigned char                                      UnknownDataS2R9[0x7];                                      // 0x0029(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData504G[0x8];                                      // 0x0029(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._ShopTypes_TA.ShopData.StartDate
	unsigned char                                      UnknownDataCXBG[0x8];                                      // 0x0038(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._ShopTypes_TA.ShopData.EndDate

};
// ScriptStruct TAGame.Camera_TA.SwivelExtent
// 0x000C
struct FSwivelExtent
{
	int                                                PitchMin;                                                  // 0x0000(0x0004)
	int                                                PitchMax;                                                  // 0x0004(0x0004)
	int                                                YawMax;                                                    // 0x0008(0x0004)

};
// ScriptStruct TAGame._Types_TA.WheelAttachment
// 0x0030
struct FWheelAttachment
{
	class UPrimitiveComponent*                         Component;                                                 // 0x0000(0x0008) (Edit, ExportObject, Component, EditInline)
	TArray<class UAttachmentBehavior_TA*>              Behaviors;                                                 // 0x0008(0x0010) (Edit, NeedCtorLink, EditInline)
	struct FName                                       Socket;                                                    // 0x0018(0x0008) (Edit)
	TArray<class UMaterialInterface*>                  PaintableMaterials;                                        // 0x0020(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame.SaveData_TA.PlaylistSkillData
// 0x000C
struct FPlaylistSkillData
{
	int                                                Playlist;                                                  // 0x0000(0x0004)
	int                                                Tier;                                                      // 0x0004(0x0004)
	int                                                MatchesPlayed;                                             // 0x0008(0x0004)

};
// ScriptStruct TAGame.GameEvent_Soccar_TA.MemberTitleStat
// 0x0020
struct FMemberTitleStat
{
	class UStatCategory_TA*                            Category;                                                  // 0x0000(0x0008)
	class UStatTitle_TA*                               Title;                                                     // 0x0008(0x0008)
	int                                                PointsEarned;                                              // 0x0010(0x0004)
	int                                                StatCount;                                                 // 0x0014(0x0004)
	class APRI_TA*                                     MemberPRI;                                                 // 0x0018(0x0008)

};
// ScriptStruct TAGame.GFxEngine_TA.SoundStateItem
// 0x0011
struct FSoundStateItem
{
	struct FName                                       StateName;                                                 // 0x0000(0x0008)
	class UGFxShell_X*                                 Shell;                                                     // 0x0008(0x0008)
	TEnumAsByte<ESoundStatePriority>                   Priority;                                                  // 0x0010(0x0001)

};
// ScriptStruct TAGame.PRI_TA.OnlineProductStat
// 0x0010
struct FOnlineProductStat
{
	unsigned char                                      UnknownData7VJ9[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.PRI_TA.OnlineProductStat.InstanceID
	class UProductStat_TA*                             ProductStat;                                               // 0x0008(0x0008)

};
// ScriptStruct TAGame.Camera_TA.ProfileSliderLimits
// 0x000C
struct FProfileSliderLimits
{
	float                                              Min;                                                       // 0x0000(0x0004)
	float                                              Max;                                                       // 0x0004(0x0004)
	float                                              interval;                                                  // 0x0008(0x0004)

};
// ScriptStruct TAGame.ProductAttribute_InheritCarSetting_TA.InheritedParameter
// 0x0010
struct FInheritedParameter
{
	struct FName                                       ParentParameterName;                                       // 0x0000(0x0008) (Edit)
	struct FName                                       AssetParameterName;                                        // 0x0008(0x0008) (Edit)

};
// ScriptStruct TAGame.PRI_TA.StatCooldown
// 0x000C
struct FStatCooldown
{
	class UStatEvent_TA*                               Stat;                                                      // 0x0000(0x0008)
	float                                              UnlockWorldTime;                                           // 0x0008(0x0004)

};
// ScriptStruct TAGame._Types_TA.TAPlayerStat
// 0x000C
struct FTAPlayerStat
{
	class UStatEvent_TA*                               StatEvent;                                                 // 0x0000(0x0008)
	int                                                Count;                                                     // 0x0008(0x0004)

};
// ScriptStruct TAGame.HandlingPreset_TA.VehicleAxleData
// 0x0014
struct FVehicleAxleData
{
	float                                              WheelRadius;                                               // 0x0000(0x0004) (Edit)
	float                                              WheelWidth;                                                // 0x0004(0x0004) (Edit)
	struct FVector                                     LocalRestPosition;                                         // 0x0008(0x000C) (Edit)

};
// ScriptStruct TAGame._Types_TA.SimpleSpringSettings
// 0x0050
struct FSimpleSpringSettings
{
	struct FVector                                     Strength;                                                  // 0x0000(0x000C) (Edit)
	struct FVector                                     Damping;                                                   // 0x000C(0x000C) (Edit)
	struct FVector                                     MaxDisplacement;                                           // 0x0018(0x000C) (Edit)
	unsigned char                                      bUseMinDisplacement : 1;                                   // 0x0024(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataJOXR[0x2];                                      // 0x0024(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector                                     MinDisplacement;                                           // 0x0028(0x000C) (Edit)
	float                                              Mass;                                                      // 0x0034(0x0004) (Edit)
	struct FVector                                     MassOffset;                                                // 0x0038(0x000C) (Edit)
	float                                              MaxSpeed;                                                  // 0x0044(0x0004) (Edit)
	unsigned char                                      UnknownData9G8B : 32;                                      // 0x0048(0x0001)
	unsigned char                                      bDebug : 1;                                                // 0x0048(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData0E0A[0x2];                                      // 0x0048(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              DrawDebugOffset;                                           // 0x004C(0x0004) (Edit)

};
// ScriptStruct TAGame.RPC_GetSpecialEventCurrency_TA.EventCurrencyData
// 0x0018
struct FEventCurrencyData
{
	int                                                CurrencyID;                                                // 0x0000(0x0004)
	int                                                PsyonixID;                                                 // 0x0004(0x0004)
	int                                                Total;                                                     // 0x0008(0x0004)
	unsigned char                                      UnknownDataVK9U[0x4];                                      // 0x000C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData8D5F[0x8];                                      // 0x000C(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_GetSpecialEventCurrency_TA.EventCurrencyData.ExpirationTime

};
// ScriptStruct TAGame.RPC_GetSpecialEvents_TA.SpecialEventData
// 0x002C
struct FSpecialEventData
{
	int                                                Id;                                                        // 0x0000(0x0004)
	unsigned char                                      UnknownDataLELB[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                      // 0x0008(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData4J85[0x8];                                      // 0x0018(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_GetSpecialEvents_TA.SpecialEventData.StartTime
	unsigned char                                      UnknownData57AG[0x8];                                      // 0x0020(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_GetSpecialEvents_TA.SpecialEventData.EndTime
	int                                                CurrencyID;                                                // 0x0028(0x0004)

};
// ScriptStruct TAGame.RPC_ProductsDebugAddProduct_TA.AddProductAttribute
// 0x0018
struct FAddProductAttribute
{
	struct FName                                       Key;                                                       // 0x0000(0x0008)
	struct FString                                     Value;                                                     // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.ImpactEffectsComponent_TA.CollisionEffectData
// 0x0058
struct FCollisionEffectData
{
	class UPhysicalMaterial*                           PhysMat;                                                   // 0x0000(0x0008)
	class UPhysicalMaterialProperty_TA*                PhysMatProp;                                               // 0x0008(0x0008)
	struct FEffectsMapping                             ImpactEffects;                                             // 0x0010(0x0010)
	struct FVector                                     HitLocation;                                               // 0x0020(0x000C)
	struct FVector                                     HitNormal;                                                 // 0x002C(0x000C)
	struct FVector                                     Momentum;                                                  // 0x0038(0x000C)
	float                                              ImpactMomentum;                                            // 0x0044(0x0004)
	float                                              SlideMomentum;                                             // 0x0048(0x0004)
	int                                                PhysicsFrame;                                              // 0x004C(0x0004)
	class AActor*                                      HitActor;                                                  // 0x0050(0x0008)

};
// ScriptStruct TAGame.GFxData_Settings_TA.BindingPreset
// 0x0018
struct FBindingPreset
{
	struct FName                                       PresetName;                                                // 0x0000(0x0008)
	struct FString                                     DisplayName;                                               // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.PRI_TA.ClientLoadoutDatas
// 0x0020
struct FClientLoadoutDatas
{
	struct FClientLoadoutData                          Loadouts[0x2];                                             // 0x0000(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.PRI_TA.ClientLoadoutOnlineDatas
// 0x0024
struct FClientLoadoutOnlineDatas
{
	struct FClientLoadoutOnlineData                    Loadouts[0x2];                                             // 0x0000(0x0010) (NeedCtorLink)
	unsigned char                                      bLoadoutSet : 1;                                           // 0x0020(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataRAYX[0x2];                                      // 0x0020(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bDeprecated : 1;                                           // 0x0020(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataATT2[0x2];                                      // 0x0024(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.PRI_TA.SkillTierData
// 0x0008
struct FSkillTierData
{
	unsigned char                                      Tier;                                                      // 0x0000(0x0001)
	unsigned char                                      UnknownDataHPF8[0x3];                                      // 0x0001(0x0003) MISSED OFFSET
	unsigned char                                      bReplicated : 1;                                           // 0x0004(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataQY17[0x2];                                      // 0x0001(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.RPC_PsyNetSetVanity_TA.VanityLoadout
// 0x0014
struct FVanityLoadout
{
	int                                                VanityType;                                                // 0x0000(0x0004) (PrivateWrite)
	unsigned char                                      UnknownData1HWL[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData2EJE[0x8];                                      // 0x0004(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_PsyNetSetVanity_TA.VanityLoadout.InstanceID
	int                                                UserColor;                                                 // 0x0010(0x0004) (PrivateWrite)

};
// ScriptStruct TAGame._Types_TA.OnlineProductDrop
// 0x0068
struct FOnlineProductDrop
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	TArray<struct FOnlineProductData>                  ProductData;                                               // 0x0038(0x0010) (NeedCtorLink)
	TArray<struct FCurrency>                           CurrencyData;                                              // 0x0048(0x0010) (NeedCtorLink)
	TArray<struct U_Types_TA_FOnlineXPReward>          RewardDrops;                                               // 0x0058(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.MaterialTextureParam
// 0x0010
struct FMaterialTextureParam
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit)
	class UTexture*                                    Value;                                                     // 0x0008(0x0008) (Edit)

};
// ScriptStruct TAGame._Types_TA.MaterialVectorParam
// 0x0018
struct FMaterialVectorParam
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit)
	struct FLinearColor                                Value;                                                     // 0x0008(0x0010) (Edit)

};
// ScriptStruct TAGame._Types_TA.MaterialScalarParam
// 0x000C
struct FMaterialScalarParam
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit)
	float                                              Value;                                                     // 0x0008(0x0004) (Edit)

};
// ScriptStruct TAGame.MaxActorsGroup_TA.MaxActorCallback
// 0x0030
struct FMaxActorCallback
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)
	TArray<struct FScriptDelegate>                     EnabledDelegates;                                          // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DisabledDelegates;                                         // 0x0018(0x0010) (NeedCtorLink)
	unsigned char                                      bEnabled : 1;                                              // 0x0028(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataTNIQ[0x2];                                      // 0x0028(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Distance;                                                  // 0x002C(0x0004)

};
// ScriptStruct TAGame.Replay_Soccar_TA.Highlight
// 0x0014
struct FHighlight
{
	int                                                frame;                                                     // 0x0000(0x0004)
	struct FName                                       CarName;                                                   // 0x0004(0x0008)
	struct FName                                       BallName;                                                  // 0x000C(0x0008)

};
// ScriptStruct TAGame.Replay_Soccar_TA.ScoredGoal
// 0x001C
struct FScoredGoal
{
	int                                                frame;                                                     // 0x0000(0x0004) (DataBinding)
	unsigned char                                      UnknownData1BXU[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     PlayerName;                                                // 0x0008(0x0010) (NeedCtorLink, DataBinding)
	int                                                PlayerTeam;                                                // 0x0018(0x0004) (DataBinding)

};
// ScriptStruct TAGame.Replay_Soccar_TA.ReplayPlayerStats
// 0x003C
struct FReplayPlayerStats
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (NeedCtorLink)
	TEnumAsByte<EOnlinePlatform>                       Platform;                                                  // 0x0010(0x0001)
	unsigned char                                      UnknownDataSNAQ[0x7];                                      // 0x0011(0x0007) MISSED OFFSET
	unsigned char                                      UnknownDataCBAO[0x8];                                      // 0x0011(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.Replay_Soccar_TA.ReplayPlayerStats.OnlineID
	int                                                Team;                                                      // 0x0020(0x0004)
	int                                                Score;                                                     // 0x0024(0x0004)
	int                                                Goals;                                                     // 0x0028(0x0004)
	int                                                Assists;                                                   // 0x002C(0x0004)
	int                                                Saves;                                                     // 0x0030(0x0004)
	int                                                Shots;                                                     // 0x0034(0x0004)
	unsigned char                                      bBot : 1;                                                  // 0x0038(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataL5NS[0x2];                                      // 0x0038(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.PRI_TA.ClientOnlineProductStat
// 0x000C
struct FClientOnlineProductStat
{
	unsigned char                                      UnknownData5SM3[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.PRI_TA.ClientOnlineProductStat.InstanceID
	int                                                Value;                                                     // 0x0008(0x0004)

};
// ScriptStruct TAGame.ProductAsset_TA.ProductReplacement
// 0x0018
struct FProductReplacement
{
	TArray<TEnumAsByte<EConsoleType>>                  Platforms;                                                 // 0x0000(0x0010) (Edit, NeedCtorLink)
	class UProductAsset_TA*                            Replacement;                                               // 0x0010(0x0008) (Edit)

};
// ScriptStruct TAGame.ProductAsset_Body_TA.BoostAttachmentToggle
// 0x0028
struct FBoostAttachmentToggle
{
	struct FName                                       BoostAttachment;                                           // 0x0000(0x0008) (Edit)
	TArray<class UFXActorEvent_X*>                     AttachAny;                                                 // 0x0008(0x0010) (Edit, NeedCtorLink)
	TArray<class UFXActorEvent_X*>                     DetachAny;                                                 // 0x0018(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame.ProductAsset_Body_TA.VehicleWheelSettings
// 0x0008
struct FVehicleWheelSettings
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit)

};
// ScriptStruct TAGame.ProductAsset_Body_TA.VehicleAxleSettings
// 0x0028
struct FVehicleAxleSettings
{
	float                                              WheelMeshRadius;                                           // 0x0000(0x0004) (Edit)
	float                                              WheelWidth;                                                // 0x0004(0x0004) (Edit)
	float                                              WheelMeshOffsetSide;                                       // 0x0008(0x0004) (Edit)
	struct FVehicleWheelSettings                       LeftWheel;                                                 // 0x000C(0x0008) (Edit)
	struct FVehicleWheelSettings                       RightWheel;                                                // 0x0014(0x0008) (Edit)
	float                                              WheelRadius;                                               // 0x001C(0x0004) (Edit, EditConst)
	float                                              WheelOffsetForward;                                        // 0x0020(0x0004) (Edit, EditConst)
	float                                              WheelOffsetSide;                                           // 0x0024(0x0004) (Edit, EditConst)

};
// ScriptStruct TAGame._Types_TA.ProductAttachment
// 0x0070
struct FProductAttachment
{
	class UStaticMesh*                                 StaticMesh;                                                // 0x0000(0x0008) (Edit)
	class USkeletalMesh*                               SkeletalMesh;                                              // 0x0008(0x0008) (Edit)
	class UParticleSystem*                             ParticleSystem;                                            // 0x0010(0x0008) (Edit)
	class UMaterialInterface*                          Material;                                                  // 0x0018(0x0008) (Edit)
	float                                              Scale;                                                     // 0x0020(0x0004) (Edit)
	struct FVector                                     Translation;                                               // 0x0024(0x000C) (Edit)
	struct FRotator                                    Rotation;                                                  // 0x0030(0x000C) (Edit)
	TEnumAsByte<EProductAttachmentSocket>              Socket;                                                    // 0x003C(0x0001) (Edit)
	unsigned char                                      UnknownDataDW0K[0x3];                                      // 0x003D(0x0003) MISSED OFFSET
	class UAntennaComponent_TA*                        Antenna;                                                   // 0x0040(0x0008) (Edit, ExportObject, Component, EditInline)
	TArray<class UAttachmentBehavior_TA*>              Behaviors;                                                 // 0x0048(0x0010) (Edit, NeedCtorLink, EditInline)
	class UProductAttribute_InheritCarSetting_TA*      InheritCarAttribute;                                       // 0x0058(0x0008) (Edit, EditInline)
	class UPrimitiveComponent*                         Component;                                                 // 0x0060(0x0008) (Edit, ExportObject, Component, EditInline)
	class AFXActor_X*                                  FXActor;                                                   // 0x0068(0x0008) (Edit)

};
// ScriptStruct TAGame._Types_TA.MaterialParams
// 0x0030
struct FMaterialParams
{
	TArray<struct FMaterialTextureParam>               TextureParameters;                                         // 0x0000(0x0010) (Edit, NeedCtorLink)
	TArray<struct FMaterialVectorParam>                VectorParameters;                                          // 0x0010(0x0010) (Edit, NeedCtorLink)
	TArray<struct FMaterialScalarParam>                ScalarParameters;                                          // 0x0020(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame.ProductAsset_Body_TA.TeamPaintFinish
// 0x0010
struct FTeamPaintFinish
{
	class UProductAsset_PaintFinish_TA*                TeamFinish;                                                // 0x0000(0x0008) (Edit)
	class UProductAsset_PaintFinish_TA*                CustomFinish;                                              // 0x0008(0x0008) (Edit)

};
// ScriptStruct TAGame._Types_TA.SkinBodySettings
// 0x0038
struct FSkinBodySettings
{
	class UProductAssetReferenceBody_TA*               Body;                                                      // 0x0000(0x0008) (Edit, EditInline)
	struct FMaterialParams                             Parameters;                                                // 0x0008(0x0030) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.StickyForceData
// 0x0008
struct FStickyForceData
{
	float                                              Ground;                                                    // 0x0000(0x0004) (Edit)
	float                                              Wall;                                                      // 0x0004(0x0004) (Edit)

};
// ScriptStruct TAGame._Types_TA.AutoFlipData
// 0x0008
struct FAutoFlipData
{
	float                                              Torque;                                                    // 0x0000(0x0004) (Edit)
	float                                              Force;                                                     // 0x0004(0x0004) (Edit)

};
// ScriptStruct TAGame.ProductOverride_ParticleSystemColorParameter_TA.PaintColorParameterOverride
// 0x0028
struct FPaintColorParameterOverride
{
	struct FName                                       PaintParameterName;                                        // 0x0000(0x0008) (Edit)
	TEnumAsByte<EPaintColorVariant>                    PaintType;                                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownDataRHSR[0x7];                                      // 0x0009(0x0007) MISSED OFFSET
	class UProductPaint_TA*                            Paint;                                                     // 0x0010(0x0008) (Edit)
	struct FLinearColor                                CustomColor;                                               // 0x0018(0x0010) (Edit)

};
// ScriptStruct TAGame.ShopAdsConfig_TA.ShopAdData
// 0x0068
struct FShopAdData
{
	struct FString                                     IdleImageURL;                                              // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     HoverImageURL;                                             // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     ClickImageURL;                                             // 0x0020(0x0010) (NeedCtorLink)
	class UTexture*                                    IdleImage;                                                 // 0x0030(0x0008) (DataBinding)
	class UTexture*                                    HoverImage;                                                // 0x0038(0x0008) (DataBinding)
	class UTexture*                                    ClickImage;                                                // 0x0040(0x0008) (DataBinding)
	unsigned char                                      bOpenURLInCoherent : 1;                                    // 0x0048(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataA6D4[0x2];                                      // 0x0048(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       Section;                                                   // 0x004C(0x0008) (DataBinding)
	unsigned char                                      UnknownData82BH[0x4];                                      // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     Link;                                                      // 0x0058(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame._Types_TA.SimilarLogoGroup
// 0x0010
struct FSimilarLogoGroup
{
	TArray<class UProductAsset_Logo_TA*>               SimilarLogoColorAssets;                                    // 0x0000(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame.UserSettingObserverEventCache_TA.SettingEvent
// 0x0050
struct FSettingEvent
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	struct FName                                       Id;                                                        // 0x0038(0x0008)
	struct FString                                     Value;                                                     // 0x0040(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.WheelContactData
// 0x0050
struct FWheelContactData
{
	unsigned char                                      bHasContact : 1;                                           // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataDR17[0x2];                                      // 0x0000(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bHasContactWithWorldGeometry : 1;                          // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownData0T67[0x2];                                      // 0x0004(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              HasContactChangeTime;                                      // 0x0004(0x0004)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008)
	class UPrimitiveComponent*                         Component;                                                 // 0x0010(0x0008) (ExportObject, Component, EditInline)
	struct FVector                                     Location;                                                  // 0x0018(0x000C)
	struct FVector                                     Normal;                                                    // 0x0024(0x000C)
	struct FVector                                     LatDirection;                                              // 0x0030(0x000C)
	struct FVector                                     LongDirection;                                             // 0x003C(0x000C)
	class UPhysicalMaterialProperty_TA*                PhysMatProp;                                               // 0x0048(0x0008)

};
// ScriptStruct TAGame.PitchTekDrawingComponent_TA.PitchTekCarBodyContactData
// 0x0010
struct FPitchTekCarBodyContactData
{
	unsigned char                                      bHasContact : 1;                                           // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataZOP6[0x2];                                      // 0x0000(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector                                     Location;                                                  // 0x0004(0x000C)

};
// ScriptStruct TAGame.GameEvent_Tutorial_TA.CarSpawnData
// 0x0020
struct FCarSpawnData
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)
	struct FVector                                     Location;                                                  // 0x0008(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x0014(0x000C)

};
// ScriptStruct TAGame.RBHistory_TA.RBPhysicsSnapshot
// 0x0070
struct FRBPhysicsSnapshot
{
	struct FReplicatedRBState                          RBState;                                                   // 0x0000(0x0040)
	struct FWorldContactData                           WorldContact;                                              // 0x0040(0x0028)
	class APhysicsVolume*                              PhysicsVolume;                                             // 0x0068(0x0008)

};
// ScriptStruct TAGame.RBVehicleHistory_TA.CarComponentSnapshot
// 0x0009
struct FCarComponentSnapshot
{
	unsigned char                                      bActive : 1;                                               // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataNBP6[0x2];                                      // 0x0000(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              ActivityTime;                                              // 0x0004(0x0004)
	unsigned char                                      ComponentData;                                             // 0x0008(0x0001)

};
// ScriptStruct TAGame.RBVehicleHistory_TA.CarComponentHistory
// 0x0024
struct FCarComponentHistory
{
	class ACarComponent_TA*                            CarComponent;                                              // 0x0000(0x0008)
	TArray<struct FCarComponentSnapshot>               Snapshots;                                                 // 0x0008(0x0010) (NeedCtorLink)
	struct FCarComponentSnapshot                       BackupSnapshot;                                            // 0x0018(0x000C)

};
// ScriptStruct TAGame.GameEvent_Tutorial_TA.FieldSpawnInfo
// 0x003C
struct FFieldSpawnInfo
{
	struct FVector                                     ExtentLoc;                                                 // 0x0000(0x000C)
	struct FVector                                     Extent;                                                    // 0x000C(0x000C)
	float                                              Speed;                                                     // 0x0018(0x0004)
	struct FRotator                                    Rotation;                                                  // 0x001C(0x000C)
	TEnumAsByte<ERotationType>                         RotationType;                                              // 0x0028(0x0001)
	unsigned char                                      UnknownData1531[0x3];                                      // 0x0029(0x0003) MISSED OFFSET
	struct FVector                                     MaxFieldExtentScale;                                       // 0x002C(0x000C)
	unsigned char                                      bSpawnCannon : 1;                                          // 0x0038(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataDSSQ[0x2];                                      // 0x0038(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bDrawDebug : 1;                                            // 0x0038(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataAJFW[0x2];                                      // 0x003C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.GameEvent_Tutorial_TA.FieldSetupWave
// 0x0014
struct FFieldSetupWave
{
	TArray<struct FFieldSpawnInfoPair>                 SpawnList;                                                 // 0x0000(0x0010) (NeedCtorLink)
	int                                                MaxWaveLoops;                                              // 0x0010(0x0004)

};
// ScriptStruct TAGame.GameEvent_Tutorial_TA.DifficultyInfo
// 0x0028
struct FDifficultyInfo
{
	TArray<struct FFieldSetupWave>                     FieldSetupList;                                            // 0x0000(0x0010) (NeedCtorLink)
	int                                                TotalGameEventRounds;                                      // 0x0010(0x0004)
	int                                                TotalGameEventRoundsToWin;                                 // 0x0014(0x0004)
	float                                              ResetCheckTime;                                            // 0x0018(0x0004)
	float                                              ResetCheckTimeAfterBallTouch;                              // 0x001C(0x0004)
	float                                              MinBallVelocityForDestroy;                                 // 0x0020(0x0004)
	float                                              BallStartTime;                                             // 0x0024(0x0004)

};
// ScriptStruct TAGame.Vehicle_TA.CarInteractionData
// 0x000C
struct FCarInteractionData
{
	class AVehicle_TA*                                 LastHitCar;                                                // 0x0000(0x0008) (Transient)
	float                                              LastHitTime;                                               // 0x0008(0x0004) (Transient)

};
// ScriptStruct TAGame.RBVehicleHistory_TA.RBVehicleSnapshot
// 0x0178
struct FRBVehicleSnapshot
{
	struct FVehicleInputs                              Input;                                                     // 0x0000(0x0020)
	struct FWheelContactData                           WheelContact0;                                             // 0x0020(0x0050) (Component)
	struct FWheelContactData                           WheelContact1;                                             // 0x0070(0x0050) (Component)
	struct FWheelContactData                           WheelContact2;                                             // 0x00C0(0x0050) (Component)
	struct FWheelContactData                           WheelContact3;                                             // 0x0110(0x0050) (Component)
	struct FCarInteractionData                         CarInteraction;                                            // 0x0160(0x0010)
	float                                              OutputHandbrake;                                           // 0x0170(0x0004)
	int                                                LastHitBallFrame;                                          // 0x0174(0x0004)

};
// ScriptStruct TAGame.ReplayDirector_TA.ReplayScoreData
// 0x0019
struct FReplayScoreData
{
	class APRI_TA*                                     ScoredBy;                                                  // 0x0000(0x0008)
	class APRI_TA*                                     AssistedBy;                                                // 0x0008(0x0008)
	float                                              Speed;                                                     // 0x0010(0x0004)
	float                                              Time;                                                      // 0x0014(0x0004)
	unsigned char                                      ScoreTeam;                                                 // 0x0018(0x0001)

};
// ScriptStruct TAGame.TourSeeder_TA.TeamSeeds
// 0x0010
struct FTeamSeeds
{
	TArray<int>                                        Seeds;                                                     // 0x0000(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.ReplayDirector_TA.ReplayFocusCar
// 0x0014
struct FReplayFocusCar
{
	float                                              Time;                                                      // 0x0000(0x0004)
	float                                              Duration;                                                  // 0x0004(0x0004)
	struct FName                                       CarName;                                                   // 0x0008(0x0008)
	int                                                BallHitIndex;                                              // 0x0010(0x0004)

};
// ScriptStruct TAGame.ProductAsset_Skin_TA.ParameterInformation
// 0x0038
struct FParameterInformation
{
	class UProductAsset_PaintFinish_TA*                PaintFinishToApply;                                        // 0x0000(0x0008) (Edit, EditorOnly)
	TArray<struct FTextureParameterValue>              TextureParameterValues;                                    // 0x0008(0x0010) (Edit, NeedCtorLink)
	TArray<struct FScalarParameterValue>               ScalarParameterValues;                                     // 0x0018(0x0010) (Edit, NeedCtorLink)
	TArray<struct FVectorParameterValue>               VectorParameterValues;                                     // 0x0028(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame.ReplayManager_TA.ReplayExportCallbackData
// 0x0020
struct FReplayExportCallbackData
{
	struct FPointer                                    Task;                                                      // 0x0000(0x0008) (Const, Native)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x000C) (Const, NeedCtorLink)
	unsigned char                                      UnknownDataTQTK[0xC];                                      // 0x0008(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.GameEvent_Tutorial_TA.FieldSpawnInfoPair
// 0x0078
struct FFieldSpawnInfoPair
{
	struct FFieldSpawnInfo                             PlayerSpawn;                                               // 0x0000(0x003C)
	struct FFieldSpawnInfo                             BallSpawn;                                                 // 0x003C(0x003C)

};
// ScriptStruct TAGame.ReplayManager_TA.ReplayImportCallbackData
// 0x0020
struct FReplayImportCallbackData
{
	struct FPointer                                    Task;                                                      // 0x0000(0x0008) (Const, Native)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x000C) (Const, NeedCtorLink)
	unsigned char                                      UnknownData5W7X[0xC];                                      // 0x0008(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.Tutorial_TA.ActionNameInfo
// 0x0010
struct FActionNameInfo
{
	TArray<struct FName>                               ActionNames;                                               // 0x0000(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame._UserBugReportTypes_TA.UserBugReportCategory
// 0x0028
struct FUserBugReportCategory
{
	struct FName                                       Id;                                                        // 0x0000(0x0008) (Edit)
	struct FName                                       ParentId;                                                  // 0x0008(0x0008) (Edit)
	TEnumAsByte<EUserBugReportCategoryType>            Type;                                                      // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownDataJ0FS[0x7];                                      // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Label;                                                     // 0x0018(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame.GFxData_Stats_TA.GFxStatData
// 0x0050
struct FGFxStatData
{
	struct FString                                     Id;                                                        // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     DisplayValue;                                              // 0x0020(0x0010) (NeedCtorLink, DataBinding)
	class UTexture*                                    Texture;                                                   // 0x0030(0x0008) (DataBinding)
	struct FString                                     Description;                                               // 0x0038(0x0010) (NeedCtorLink, DataBinding)
	class UClass*                                      DisplayProductStatClass;                                   // 0x0048(0x0008)

};
// ScriptStruct TAGame.Tutorial_TA.ButtonInfo
// 0x002C
struct FButtonInfo
{
	struct FString                                     Text;                                                      // 0x0000(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             ClickDelegate;                                             // 0x0010(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataSKZ7[0xC];                                      // 0x0010(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bCorrectAnswer : 1;                                        // 0x0028(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataS6KD[0x2];                                      // 0x0028(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.Tutorial_TA.MessageInfo
// 0x0040
struct FMessageInfo
{
	struct FString                                     Title;                                                     // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Body;                                                      // 0x0010(0x0010) (NeedCtorLink)
	TArray<struct FButtonInfo>                         Buttons;                                                   // 0x0020(0x0010) (NeedCtorLink)
	TArray<struct FActionNameInfo>                     ActionNameList;                                            // 0x0030(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.ReplayManager_TA.ReplayIOTaskBase
// 0x0028
struct FReplayIOTaskBase
{
	class UReplay_TA*                                  Replay;                                                    // 0x0000(0x0008)
	struct FString                                     Path;                                                      // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	class UErrorType*                                  Error;                                                     // 0x0018(0x0008)
	struct FPointer                                    Ar;                                                        // 0x0020(0x0008) (Native)

};
// ScriptStruct TAGame.ReplayManager_TA.ReplayExportTask
// 0x0014 (0x003C - 0x0028)
struct FReplayExportTask : public FReplayIOTaskBase
{
	TArray<unsigned char>                              Data;                                                      // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned char                                      bDebug : 1;                                                // 0x0038(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataG8SM[0x2];                                      // 0x0038(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.ReplayManager_TA.ReplayClassTask
// 0x0010 (0x0038 - 0x0028)
struct FReplayClassTask : public FReplayIOTaskBase
{
	struct FString                                     ClassPath;                                                 // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)

};
// ScriptStruct TAGame.ReplayManager_TA.ReplayImportTask
// 0x0010 (0x0038 - 0x0028)
struct FReplayImportTask : public FReplayIOTaskBase
{
	TArray<unsigned char>                              Data;                                                      // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)

};
// ScriptStruct TAGame.ReplayManager_TA.ReplayHeaderImportTask
// 0x0000 (0x0028 - 0x0028)
struct FReplayHeaderImportTask : public FReplayIOTaskBase
{

};
// ScriptStruct TAGame.ReplayManager_TA.ReplayTypeData
// 0x0020
struct FReplayTypeData
{
	struct FString                                     FilePath;                                                  // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     ClassPath;                                                 // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.ReplayManager_TA.ReplayHeadersCountTask
// 0x0028
struct FReplayHeadersCountTask
{
	struct FString                                     Path;                                                      // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FReplayTypeData>                     Replays;                                                   // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	class UErrorType*                                  Error;                                                     // 0x0020(0x0008)

};
// ScriptStruct TAGame.GFxData_Training_TA.UseAction
// 0x0020
struct FUseAction
{
	struct FString                                     ActionName;                                                // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     LocalizedActionName;                                       // 0x0010(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame.ProductAttribute_PaintSettings_TA.PaintMaterialGroup
// 0x0010
struct FPaintMaterialGroup
{
	TArray<class UMaterialInterface*>                  Materials;                                                 // 0x0000(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame.RPC_ProductsLoadoutGet_TA.InstanceToSlotRow
// 0x0010
struct FInstanceToSlotRow
{
	unsigned char                                      UnknownDataEMAY[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_ProductsLoadoutGet_TA.InstanceToSlotRow.InstanceID
	int                                                SlotIndex;                                                 // 0x0008(0x0004)
	int                                                TeamIndex;                                                 // 0x000C(0x0004)

};
// ScriptStruct TAGame._Types_TA.AimAssistSettings
// 0x0034
struct FAimAssistSettings
{
	unsigned char                                      bOverride : 1;                                             // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataTCHX[0x2];                                      // 0x0000(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              ControlAlpha;                                              // 0x0004(0x0004)
	float                                              MinSteerDot;                                               // 0x0008(0x0004)
	float                                              MaxSteerDot;                                               // 0x000C(0x0004)
	float                                              MinVelocity;                                               // 0x0010(0x0004)
	float                                              MaxVelocity;                                               // 0x0014(0x0004)
	float                                              MinPlayerInputDrive;                                       // 0x0018(0x0004)
	float                                              MinDistanceToBallXY;                                       // 0x001C(0x0004)
	float                                              MaxDistanceToBallXY;                                       // 0x0020(0x0004)
	float                                              MinDistanceToBallZ;                                        // 0x0024(0x0004)
	float                                              MaxDistanceToBallZ;                                        // 0x0028(0x0004)
	float                                              MinDotAngleFromBall;                                       // 0x002C(0x0004)
	float                                              MaxDotAngleFromBall;                                       // 0x0030(0x0004)

};
// ScriptStruct TAGame.VehiclePickup_TA.PickupData
// 0x000C
struct FPickupData
{
	class ACar_TA*                                     Instigator;                                                // 0x0000(0x0008)
	unsigned char                                      bPickedUp : 1;                                             // 0x0008(0x0001) BIT_FIELD
	unsigned char                                      UnknownData8GNC[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.VehiclePickup_TA.PickupData2
// 0x0009
struct FPickupData2
{
	class ACar_TA*                                     Instigator;                                                // 0x0000(0x0008)
	unsigned char                                      PickedUp;                                                  // 0x0008(0x0001)

};
// ScriptStruct TAGame.GameInfo_TA.GameEventData
// 0x001C
struct FGameEventData
{
	class AGameEvent_TA*                               Archetype;                                                 // 0x0000(0x0008) (Edit)
	struct FString                                     LaunchOption;                                              // 0x0008(0x0010) (Edit, NeedCtorLink)
	unsigned char                                      bDestroyCurrentGame : 1;                                   // 0x0018(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataQYKU[0x2];                                      // 0x0018(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAddAllPlayers : 1;                                        // 0x0018(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataCU8C[0x2];                                      // 0x001C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.CameraState_Car_TA.InterpVector
// 0x0028
struct UCameraState_Car_TA_FInterpVector
{
	float                                              Rate;                                                      // 0x0000(0x0004) (Edit)
	float                                              MaxDistance;                                               // 0x0004(0x0004) (Edit)
	struct FVector                                     Location;                                                  // 0x0008(0x000C)
	unsigned char                                      bInitialized : 1;                                          // 0x0014(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataUIVL[0x2];                                      // 0x0014(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Rate_Old;                                                  // 0x0018(0x0004) (Edit)
	struct FVector                                     Velocity;                                                  // 0x001C(0x000C)

};
// ScriptStruct TAGame.VoteActor_TA.Voter
// 0x0009
struct FVoter
{
	class APRI_TA*                                     PRI;                                                       // 0x0000(0x0008)
	TEnumAsByte<EVoteStatus>                           Status;                                                    // 0x0008(0x0001)

};
// ScriptStruct TAGame._Types_TA.DemolishData2
// 0x0008 (0x0030 - 0x0028)
struct FDemolishData2 : public FDemolishData
{
	class AFXActor_X*                                  CustomDemoFX;                                              // 0x0028(0x0008)

};
// ScriptStruct TAGame.CameraState_BallCam_TA.PlaneSelectData
// 0x000C
struct FPlaneSelectData
{
	float                                              YExtent;                                                   // 0x0000(0x0004)
	float                                              ZExtent;                                                   // 0x0004(0x0004)
	float                                              MaxDistance;                                               // 0x0008(0x0004)

};
// ScriptStruct TAGame.CameraState_BallCam_TA.AngleSelectData
// 0x0008
struct FAngleSelectData
{
	float                                              MinAngle;                                                  // 0x0000(0x0004)
	float                                              MaxDistance;                                               // 0x0004(0x0004)

};
// ScriptStruct TAGame.SeqAct_DriveSpline_TA.CarSplineData
// 0x0018
struct FCarSplineData
{
	class ACar_TA*                                     Car;                                                       // 0x0000(0x0008)
	class ASplineActor*                                Spline;                                                    // 0x0008(0x0008)
	float                                              DistanceAlongSpline;                                       // 0x0010(0x0004)
	unsigned char                                      bReachedSpline : 1;                                        // 0x0014(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataNGOY[0x2];                                      // 0x0014(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.CameraState_PodiumSpotlight_TA.CachedPodiumCar
// 0x0014
struct FCachedPodiumCar
{
	class ACar_TA*                                     Car;                                                       // 0x0000(0x0008)
	struct FVector                                     Location;                                                  // 0x0008(0x000C)

};
// ScriptStruct TAGame._Types_TA.MapSkillSettings
// 0x000C
struct FMapSkillSettings
{
	struct FName                                       MapName;                                                   // 0x0000(0x0008) (Edit)
	float                                              MinimumSkill;                                              // 0x0008(0x0004) (Edit)

};
// ScriptStruct TAGame.CameraStateSelector_Priority_TA.StateParams
// 0x0009
struct FStateParams
{
	class UCameraState_X*                              State;                                                     // 0x0000(0x0008) (Edit)
	TEnumAsByte<EStatePriority>                        Priority;                                                  // 0x0008(0x0001) (Edit)

};
// ScriptStruct TAGame.SeqAct_SetLoadout_TA.ProductWithSettings
// 0x0018
struct FProductWithSettings
{
	class UProductAsset_TA*                            Product;                                                   // 0x0000(0x0008) (Edit)
	class UProductPaint_TA*                            Paint;                                                     // 0x0008(0x0008) (Edit)
	class UDataAsset_ESportsTeam_TA*                   ESportsTeam;                                               // 0x0010(0x0008) (Edit)

};
// ScriptStruct TAGame._Types_TA.PlayerActorIDPair
// 0x0040
struct FPlayerActorIDPair
{
	int                                                ActorID;                                                   // 0x0000(0x0004)
	unsigned char                                      UnknownDataAI9I[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FUniqueNetId                                PlayerID;                                                  // 0x0008(0x0038)

};
// ScriptStruct TAGame.SeqAct_SpawnCarColors_TA.SpawnCarColorSet
// 0x000C
struct FSpawnCarColorSet
{
	class UCarColorSet_TA*                             ColorSet;                                                  // 0x0000(0x0008) (Edit)
	unsigned char                                      bRender : 1;                                               // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataDO5P[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.SkelControlSingleBoneCopy_TA.AxisConversion
// 0x000C
struct FAxisConversion
{
	unsigned char                                      bEnabled : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataQQCA[0x2];                                      // 0x0000(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<ECopyAxis>                             Source;                                                    // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData4UKN[0x3];                                      // 0x0005(0x0003) MISSED OFFSET
	float                                              Scale;                                                     // 0x0008(0x0004) (Edit)

};
// ScriptStruct TAGame.StatFactory_TA.StatGroupCollection
// 0x0030
struct FStatGroupCollection
{
	class UStatGroup_TA*                               Wins;                                                      // 0x0000(0x0008) (Edit)
	class UStatGroup_TA*                               Losses;                                                    // 0x0008(0x0008) (Edit)
	class UStatGroup_TA*                               Goals;                                                     // 0x0010(0x0008) (Edit)
	class UStatGroup_TA*                               Saves;                                                     // 0x0018(0x0008) (Edit)
	class UStatGroup_TA*                               Shots;                                                     // 0x0020(0x0008) (Edit)
	class UStatGroup_TA*                               Assists;                                                   // 0x0028(0x0008) (Edit)

};
// ScriptStruct TAGame._ShopTypes_TA.DestructionProductValue
// 0x0018
struct FDestructionProductValue
{
	unsigned char                                      UnknownDataDXOX[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._ShopTypes_TA.DestructionProductValue.ProductInstanceID
	TArray<struct FShopCurrencyInfo>                   Value;                                                     // 0x0008(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame._ShopTypes_TA.CurrencyProductData
// 0x0010
struct U_ShopTypes_TA_FCurrencyProductData
{
	class UProduct_TA*                                 Product;                                                   // 0x0000(0x0008)
	class UOnlineProduct_TA*                           OnlineProduct;                                             // 0x0008(0x0008)

};
// ScriptStruct TAGame._ShopTypes_TA.ShopCurrency
// 0x0058
struct FShopCurrency
{
	TEnumAsByte<ECurrency>                             Type;                                                      // 0x0000(0x0001)
	unsigned char                                      UnknownDataGLKE[0x3];                                      // 0x0001(0x0003) MISSED OFFSET
	int                                                Id;                                                        // 0x0004(0x0004)
	class UTexture*                                    SmallImage;                                                // 0x0008(0x0008)
	class UTexture*                                    LargeImage;                                                // 0x0010(0x0008)
	int                                                Amount;                                                    // 0x0018(0x0004)
	unsigned char                                      UnknownDataIMWQ[0x4];                                      // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                      // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     LocalizedName;                                             // 0x0030(0x0010) (NeedCtorLink)
	unsigned char                                      bCanBeTraded : 1;                                          // 0x0040(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataRGXK[0x2];                                      // 0x0040(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                TradeHold;                                                 // 0x0044(0x0004)
	struct U_ShopTypes_TA_FCurrencyProductData         ProductData;                                               // 0x0048(0x0010)

};
// ScriptStruct TAGame._ShopTypes_TA.ShopCurrencyData
// 0x0008
struct FShopCurrencyData
{
	int                                                Id;                                                        // 0x0000(0x0004)
	int                                                Amount;                                                    // 0x0004(0x0004)

};
// ScriptStruct TAGame.CarMeshComponentBase_TA.InheritedObjects
// 0x0018
struct FInheritedObjects
{
	class UProductAsset_TA*                            Asset;                                                     // 0x0000(0x0008)
	class UObject*                                     ObjectToEdit;                                              // 0x0008(0x0008)
	class UProductAttribute_InheritCarSetting_TA*      InheritSetting;                                            // 0x0010(0x0008)

};
// ScriptStruct TAGame.GFxData_Controls_TA.UIPlayerBinding
// 0x0014 (0x0040 - 0x002C)
struct FUIPlayerBinding : public FPlayerBinding
{
	unsigned char                                      UnknownDataF7KX[0x4];                                      // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     UIKey;                                                     // 0x0030(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame.GFxData_Controls_TA.LocalizedAction
// 0x0024 (0x005C - 0x0038)
struct FLocalizedAction : public FBindingAction
{
	struct FString                                     Label;                                                     // 0x0038(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Description;                                               // 0x0048(0x0010) (NeedCtorLink, DataBinding)
	unsigned char                                      bRebindable : 1;                                           // 0x0058(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataTP0U[0x2];                                      // 0x0058(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.GFxData_Controls_TA.LocalizedBindingCategory
// 0x0028
struct FLocalizedBindingCategory
{
	struct FName                                       Category;                                                  // 0x0000(0x0008) (DataBinding)
	struct FString                                     Label;                                                     // 0x0008(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Description;                                               // 0x0018(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame.GFxData_Credits_TA.LocalizedPostCreditData
// 0x0020
struct FLocalizedPostCreditData
{
	TArray<struct FString>                             Lines;                                                     // 0x0000(0x0010) (Const, Localized, NeedCtorLink)
	TArray<TEnumAsByte<EOnlinePlatform>>               Platforms;                                                 // 0x0010(0x0010) (Config, NeedCtorLink)

};
// ScriptStruct TAGame.GFxData_Credits_TA.PostCreditData
// 0x0040
struct FPostCreditData
{
	struct FString                                     Line0;                                                     // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Line1;                                                     // 0x0010(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Line2;                                                     // 0x0020(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Line3;                                                     // 0x0030(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame._Types_TA.ThumbnailComponent
// 0x0058
struct FThumbnailComponent
{
	class UActorComponent*                             Component;                                                 // 0x0000(0x0008) (ExportObject, Component, EditInline)
	unsigned char                                      UnknownDataPDDD[0x8];                                      // 0x0008(0x0008) MISSED OFFSET
	struct FMatrix                                     BaseTransform;                                             // 0x0010(0x0040)
	struct FName                                       Tag;                                                       // 0x0050(0x0008)

};
// ScriptStruct TAGame.GFxData_Credits_TA.LocalizedNameData
// 0x0020
struct FLocalizedNameData
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Position;                                                  // 0x0010(0x0010) (Const, Localized, NeedCtorLink)

};
// ScriptStruct TAGame.GFxData_Credits_TA.DepartmentData
// 0x0030
struct FDepartmentData
{
	struct FString                                     DepartmentTitle;                                           // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Position;                                                  // 0x0020(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame.GFxData_Credits_TA.LocalizedDepartmentData
// 0x0020
struct FLocalizedDepartmentData
{
	struct FString                                     DepartmentTitle;                                           // 0x0000(0x0010) (Const, Localized, NeedCtorLink)
	TArray<struct FLocalizedNameData>                  Names;                                                     // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.CarMeshComponent_TA.WheelSkelControlSet
// 0x0020
struct FWheelSkelControlSet
{
	class UWheel_TA*                                   Wheel;                                                     // 0x0000(0x0008) (Edit, ExportObject, Component, EditInline)
	class USkelControlSingleBone*                      TranslationControl;                                        // 0x0008(0x0008) (Edit)
	class USkelControlSingleBone*                      SteerControl;                                              // 0x0010(0x0008) (Edit)
	class USkelControlSingleBone*                      RollControl;                                               // 0x0018(0x0008) (Edit)

};
// ScriptStruct TAGame.GFxData_ClubServerBrowser_TA.GFxClubServer
// 0x0018
struct FGFxClubServer
{
	class UClubServerResult_X*                         Server;                                                    // 0x0000(0x0008)
	struct FString                                     ServerName;                                                // 0x0008(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct TAGame.GFxData_Garage_TA.GarageTeam
// 0x0020
struct FGarageTeam
{
	struct FString                                     Label;                                                     // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	int                                                TeamColorID;                                               // 0x0010(0x0004) (DataBinding)
	int                                                CustomColorID;                                             // 0x0014(0x0004) (DataBinding)
	struct FProductHashID                              TeamFinishHashID;                                          // 0x0018(0x0004) (DataBinding)
	struct FProductHashID                              CustomFinishHashID;                                        // 0x001C(0x0004) (DataBinding)

};
// ScriptStruct TAGame.GFxData_CustomTeams_TA.GFxCustomTeamSettings
// 0x0018
struct FGFxCustomTeamSettings
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	int                                                TeamColorID;                                               // 0x0010(0x0004) (DataBinding)
	int                                                CustomColorID;                                             // 0x0014(0x0004) (DataBinding)

};
// ScriptStruct TAGame._Types_TA.TurningCircle
// 0x0010
struct FTurningCircle
{
	struct FVector                                     Center;                                                    // 0x0000(0x000C)
	float                                              Radius;                                                    // 0x000C(0x0004)

};
// ScriptStruct TAGame.GFxData_LoadoutSets_TA.GFxLoadoutSet
// 0x0018
struct FGFxLoadoutSet
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (NeedCtorLink, DataBinding)
	int                                                Index;                                                     // 0x0010(0x0004) (DataBinding)
	unsigned char                                      bEquipped : 1;                                             // 0x0014(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataXUN7[0x2];                                      // 0x0014(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._Types_TA.CycleButtonItem
// 0x0020
struct FCycleButtonItem
{
	struct FString                                     Label;                                                     // 0x0000(0x0010) (Edit, NeedCtorLink)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (Edit, NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.GarageSlotCost
// 0x0008
struct FGarageSlotCost
{
	int                                                Id;                                                        // 0x0000(0x0004) (DataBinding)
	int                                                Amount;                                                    // 0x0004(0x0004) (DataBinding)

};
// ScriptStruct TAGame._Types_TA.GarageComplexRow
// 0x0008
struct FGarageComplexRow
{
	int                                                RowID;                                                     // 0x0000(0x0004)
	int                                                ProductID;                                                 // 0x0004(0x0004)

};
// ScriptStruct TAGame._Types_TA.GarageComplexLoadout
// 0x0020
struct FGarageComplexLoadout
{
	struct FLoadoutTeamPaint                           TeamPaint;                                                 // 0x0000(0x0010)
	unsigned char                                      UnknownData3EA0[0x10];                                     // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty TAGame._Types_TA.GarageComplexLoadout.OnlineProducts

};
// ScriptStruct TAGame._Types_TA.GarageComplexSlot
// 0x0070
struct FGarageComplexSlot
{
	int                                                SlotID;                                                    // 0x0000(0x0004)
	unsigned char                                      UnknownDataD6ML[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                      // 0x0008(0x0010) (NeedCtorLink)
	unsigned char                                      bUnlocked : 1;                                             // 0x0018(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataMH1Q[0x2];                                      // 0x0018(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                TeamIndex;                                                 // 0x001C(0x0004)
	struct FRotator                                    Rotation;                                                  // 0x0020(0x000C)
	unsigned char                                      UnknownData6Z1O[0x4];                                      // 0x002C(0x0004) MISSED OFFSET
	struct FGarageComplexLoadout                       SlotLoadouts[0x2];                                         // 0x0030(0x0020) (NeedCtorLink)

};
// ScriptStruct TAGame._Types_TA.SortedProductData
// 0x002C
struct FSortedProductData
{
	unsigned char                                      UnknownDataRAQN[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._Types_TA.SortedProductData.Id
	struct FProductHashID                              HashID;                                                    // 0x0008(0x0004)
	unsigned char                                      UnknownDataT75T[0x4];                                      // 0x000C(0x0004) MISSED OFFSET
	class UProduct_TA*                                 Product;                                                   // 0x0010(0x0008)
	class UOnlineProduct_TA*                           OnlineProduct;                                             // 0x0018(0x0008)
	int                                                BlueprintSortWeight;                                       // 0x0020(0x0004)
	int                                                Quantity;                                                  // 0x0024(0x0004)
	unsigned char                                      bUnlocked : 1;                                             // 0x0028(0x0001) BIT_FIELD
	unsigned char                                      UnknownData68IT[0x2];                                      // 0x0028(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIsFavorited : 1;                                          // 0x0028(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataU5FM[0x2];                                      // 0x002C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bCurrency : 1;                                             // 0x0028(0x0001) BIT_FIELD
	unsigned char                                      UnknownData0ZPP[0x2];                                      // 0x002C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._Types_TA.UniqueNetIdGroup4
// 0x00E0
struct FUniqueNetIdGroup4
{
	struct FUniqueNetId                                PlayerIDs[0x4];                                            // 0x0000(0x0038)

};
// ScriptStruct TAGame._Types_TA.ChatBanInfo
// 0x000C
struct FChatBanInfo
{
	unsigned char                                      UnknownDataT7E5[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._Types_TA.ChatBanInfo.Expiration
	unsigned char                                      bPermanentlyBanned : 1;                                    // 0x0008(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataB6XK[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame._Types_TA.UIProductSlotData
// 0x0018
struct FUIProductSlotData
{
	class UProductSlot_TA*                             Slot;                                                      // 0x0000(0x0008) (Edit)
	class UTexture2D*                                  Texture;                                                   // 0x0008(0x0008) (Edit)
	class UAkSoundCue*                                 Sound;                                                     // 0x0010(0x0008) (Edit)

};
// ScriptStruct TAGame._Types_TA.RocketPassTierBonusRange
// 0x000C
struct FRocketPassTierBonusRange
{
	int                                                Start;                                                     // 0x0000(0x0004) (DataBinding)
	int                                                End;                                                       // 0x0004(0x0004) (DataBinding)
	int                                                Bonus;                                                     // 0x0008(0x0004) (DataBinding)

};
// ScriptStruct TAGame._Types_TA.SeasonPlayerStat
// 0x001C
struct FSeasonPlayerStat
{
	int                                                PlayerIndex;                                               // 0x0000(0x0004) (DataBinding)
	unsigned char                                      UnknownDataIR4F[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     StatName;                                                  // 0x0008(0x0010) (NeedCtorLink, DataBinding)
	int                                                StatValue;                                                 // 0x0018(0x0004) (DataBinding)

};
// ScriptStruct TAGame.OnlineGameReservations_TA.ReservationLoadout
// 0x0048
struct FReservationLoadout
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	TArray<int>                                        ProductIDs;                                                // 0x0038(0x0010) (NeedCtorLink)

};
// ScriptStruct TAGame.AdManager_TA.BillboardUpdateRequestData
// 0x0020
struct FBillboardUpdateRequestData
{
	int                                                ZoneID;                                                    // 0x0000(0x0004) (Transient)
	int                                                MaterialIndex;                                             // 0x0004(0x0004) (Transient)
	struct FString                                     MaterialName;                                              // 0x0008(0x0010) (Transient, NeedCtorLink)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0018(0x0008) (ExportObject, Transient, Component, EditInline)

};
// ScriptStruct TAGame.AdManager_TA.CachedAdImageData
// 0x0020
struct FCachedAdImageData
{
	struct FString                                     ImageURL;                                                  // 0x0000(0x0010) (Transient, NeedCtorLink)
	unsigned char                                      UnknownData1GLB[0x8];                                      // 0x0010(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.AdManager_TA.CachedAdImageData.CacheEndTime
	class UTexture2DDynamic*                           ImageTexture;                                              // 0x0018(0x0008) (Transient)

};
// ScriptStruct TAGame.AdManager_TA.BillboardData
// 0x0014
struct FBillboardData
{
	struct FString                                     MaterialName;                                              // 0x0000(0x0010) (Transient, NeedCtorLink)
	int                                                ZoneID;                                                    // 0x0010(0x0004) (Transient)

};
// ScriptStruct TAGame.RPC_AdsGet_TA.AdInfo
// 0x0020
struct FAdInfo
{
	struct FString                                     URL;                                                       // 0x0000(0x0010) (NeedCtorLink)
	int                                                ZoneID;                                                    // 0x0010(0x0004)
	unsigned char                                      UnknownDataWTRM[0x4];                                      // 0x0014(0x0004) MISSED OFFSET
	unsigned char                                      UnknownDataT3U6[0x8];                                      // 0x0014(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_AdsGet_TA.AdInfo.UTCEndTime

};
// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState
// 0x0038
struct FEngineAudioNativeState
{
	class UEngineAudioComponent_TA*                    Component;                                                 // 0x0000(0x0008) (ExportObject, Component, EditInline)
	class UEngineAudioProfile_TA*                      Profile;                                                   // 0x0008(0x0008)
	class AVehicle_TA*                                 Car;                                                       // 0x0010(0x0008)
	struct FCarStateData                               OldCarState;                                               // 0x0018(0x0010)
	struct FCarStateData                               CarState;                                                  // 0x0028(0x0010)

};
// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState_Clutched
// 0x0004 (0x003C - 0x0038)
struct FEngineAudioNativeState_Clutched : public FEngineAudioNativeState
{
	unsigned char                                      bUsingRevLimiter : 1;                                      // 0x0038(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataP15M[0x2];                                      // 0x0038(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState_OnGround
// 0x0010 (0x0048 - 0x0038)
struct FEngineAudioNativeState_OnGround : public FEngineAudioNativeState
{
	float                                              GearSwitchTimeRemaining;                                   // 0x0038(0x0004)
	float                                              RPMShiftUp;                                                // 0x003C(0x0004)
	float                                              RPMShiftDown;                                              // 0x0040(0x0004)
	int                                                Gear;                                                      // 0x0044(0x0004)

};
// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState_InAir
// 0x0008 (0x0044 - 0x003C)
struct FEngineAudioNativeState_InAir : public FEngineAudioNativeState_Clutched
{
	unsigned char                                      UnknownDataKYPB[0x4];                                      // 0x003C(0x0004) MISSED OFFSET
	float                                              TimeInAir;                                                 // 0x0040(0x0004)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
