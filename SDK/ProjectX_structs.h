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

#define CONST_InMatchmakingID                                    -2
#define CONST_LocalPlayersBroadcastDelay                         0.1f
#define CONST_MaxPing                                            1.0f
#define CONST_MAX_CONTROLLER_IDS                                 4
#define CONST_ClosedReason_DuplicateLogin                        "DuplicateLogin"
#define CONST_NumFriendsPerRequest                               100
#define CONST_QueueMax                                           100
#define CONST_MatchLog_X_HttpContentType                         "plain/text"
#define CONST_XpTitleID                                          'XP'
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum ProjectX.PerCon_X.EPerConStatus
enum class EPerConStatus : uint8_t
{
	PerConStatus_Disabled          = 0,
	PerConStatus_Enabled           = 1,
	PerConStatus_MAX               = 2,

};

// Enum ProjectX.FXActor_X.EAttachActorLocationUnlockFlags
enum class EAttachActorLocationUnlockFlags : uint8_t
{
	EAALUF_None                    = 0,
	EAALUF_X                       = 1,
	EAALUF_Y                       = 2,
	EAALUF_Z                       = 3,
	EAALUF_MAX                     = 4,

};

// Enum ProjectX.WordFilterTypes_X.EWordFilterUsage
enum class EWordFilterUsage : uint8_t
{
	WordFilterUsage_PlayerName     = 0,
	WordFilterUsage_TrainingName   = 1,
	WordFilterUsage_LanServerName  = 2,
	WordFilterUsage_CustomTeamName = 3,
	WordFilterUsage_TourName       = 4,
	WordFilterUsage_TourTeamName   = 5,
	WordFilterUsage_ClubName       = 6,
	WordFilterUsage_ClubTag        = 7,
	WordFilterUsage_ClubMotD       = 8,
	WordFilterUsage_ClubTagPlayerName = 9,
	WordFilterUsage_MatchChat      = 10,
	WordFilterUsage_PartyChat      = 11,
	WordFilterUsage_MAX            = 12,

};

// Enum ProjectX.FakeData_X.FakeDataEnum
enum class EFakeDataEnum : uint8_t
{
	FakeData                       = 0,
	FakeData01                     = 1,
	FakeData02                     = 2,
	FakeData_Count                 = 3,
	FakeData_MAX                   = 4,

};

// Enum ProjectX.GFxDataCallback_X.EDataCallbackType
enum class EDataCallbackType : uint8_t
{
	DataCallbackType_All           = 0,
	DataCallbackType_Table         = 1,
	DataCallbackType_Row           = 2,
	DataCallbackType_Value         = 3,
	DataCallbackType_MAX           = 4,

};

// Enum ProjectX.OnlineGameDLC_X.DLCOwnershipState
enum class EDLCOwnershipState : uint8_t
{
	DLCOwnershipState_Unknown      = 0,
	DLCOwnershipState_Owned        = 1,
	DLCOwnershipState_NotOwned     = 2,
	DLCOwnershipState_Error        = 3,
	DLCOwnershipState_MAX          = 4,

};

// Enum ProjectX.RegionPing_X.RegionPingResult
enum class ERegionPingResult : uint8_t
{
	PingResult_NotUsable           = 0,
	PingResult_UsingCache          = 1,
	PingResult_UsingSuccessfulPing = 2,
	PingResult_MAX                 = 3,

};

// Enum ProjectX.ClanforgeReservation_X.EReserveState
enum class EReserveState : uint8_t
{
	ReserveState_Unitialized       = 0,
	ReserveState_Unreserved        = 1,
	ReserveState_Reserved          = 2,
	ReserveState_MAX               = 3,

};

// Enum ProjectX.MaterialEffect_X.EMaterialEffectStage
enum class EMaterialEffectStage : uint8_t
{
	EFFECT_INACTIVE                = 0,
	EFFECT_FADE_IN                 = 1,
	EFFECT_ACTIVE                  = 2,
	EFFECT_FADE_OUT                = 3,
	EFFECT_MAX                     = 4,

};

// Enum ProjectX.DynamicValue_X.EDynamicValueModType
enum class EDynamicValueModType : uint8_t
{
	ModType_Add                    = 0,
	ModType_Multiply               = 1,
	ModType_MultiplyAdd            = 2,
	ModType_Set                    = 3,
	ModType_MAX                    = 4,

};

// Enum ProjectX.EncodeObject_X.EObjectEncoding
enum class EObjectEncoding : uint8_t
{
	OPSE_UObject                   = 0,
	OPSE_Json                      = 1,
	OPSE_MAX                       = 2,

};

// Enum ProjectX.ReservationsPasswordMessage_X.EPasswordFailureReason
enum class EPasswordFailureReason : uint8_t
{
	PFR_Empty                      = 0,
	PFR_Mismatch                   = 1,
	PFR_MAX                        = 2,

};

// Enum ProjectX.RPC_X.ERPCPriority
enum class ERPCPriority : uint8_t
{
	RPC_Low                        = 0,
	RPC_Medium                     = 1,
	RPC_High                       = 2,
	RPC_MAX                        = 3,

};

// Enum ProjectX.ShakeComponent_X.EShakeReceiver
enum class EShakeReceiver : uint8_t
{
	ShakeReceiver_All              = 0,
	ShakeReceiver_Local            = 1,
	ShakeReceiver_NonLocal         = 2,
	ShakeReceiver_MAX              = 3,

};

// Enum ProjectX.TcpConnection.EWebSocketState
enum class EWebSocketState : uint8_t
{
	WebSocketState_NotRequired     = 0,
	WebSocketState_NeedsHandshake  = 1,
	WebSocketState_Connected       = 2,
	WebSocketState_MAX             = 3,

};

// Enum ProjectX.TcpConnection.ETcpConnectionState
enum class ETcpConnectionState : uint8_t
{
	TcpConnectionState_Invalid     = 0,
	TcpConnectionState_Connecting  = 1,
	TcpConnectionState_Connected   = 2,
	TcpConnectionState_Disconnected = 3,
	TcpConnectionState_MAX         = 4,

};

// Enum ProjectX.WebRequest_X.EWebRequestState
enum class EWebRequestState : uint8_t
{
	WebRequestState_PendingSend    = 0,
	WebRequestState_PendingResponse = 1,
	WebRequestState_Success        = 2,
	WebRequestState_Error          = 3,
	WebRequestState_MAX            = 4,

};

// Enum ProjectX.ClubUtil_X.EClubColorChange
enum class EClubColorChange : uint8_t
{
	ClubColorChange_None           = 0,
	ClubColorChange_SwapTeams      = 1,
	ClubColorChange_SwapPrimaryAccent0 = 2,
	ClubColorChange_SwapPrimaryAccent1 = 3,
	ClubColorChange_SwapPrimaryAccent = 4,
	ClubColorChange_WhiteVsBlack   = 5,
	ClubColorChange_Gray1          = 6,
	ClubColorChange_MAX            = 7,

};

// Enum ProjectX.OnlineGameParty_X.PartyProcessingStatus
enum class EPartyProcessingStatus : uint8_t
{
	PPS_None                       = 0,
	PPS_Create                     = 1,
	PPS_Join                       = 2,
	PPS_MAX                        = 3,

};

// Enum ProjectX._NetworkNextTypes_X.ENetworkNextState
enum class ENetworkNextState : uint8_t
{
	NetworkNextState_Disabled      = 0,
	NetworkNextState_ForceDirect   = 1,
	NetworkNextState_UseDirect     = 2,
	NetworkNextState_UseRoute      = 3,
	NetworkNextState_MAX           = 4,

};

// Enum ProjectX.OnlinePlayerRegionRestrictions_X.ERegionRestriction
enum class ERegionRestriction : uint8_t
{
	RegionRestriction_Unknown      = 0,
	RegionRestriction_KeyCrate     = 1,
	RegionRestriction_Trade        = 2,
	RegionRestriction_KeyRocketPassTier = 3,
	RegionRestriction_MAX          = 4,

};

// Enum ProjectX._Types_X.EJoinMatchType
enum class EJoinMatchType : uint8_t
{
	JMT_Public                     = 0,
	JMT_Private                    = 1,
	JMT_LanHost                    = 2,
	JMT_LanGuest                   = 3,
	JMT_MAX                        = 4,

};

// Enum ProjectX._Types_X.EAuthResult
enum class EAuthResult : uint8_t
{
	AuthResult_OK                  = 0,
	AuthResult_Unauthorized        = 1,
	AuthResult_MAX                 = 2,

};

// Enum ProjectX._Types_X.EWebRequestAuthorization
enum class EWebRequestAuthorization : uint8_t
{
	WRA_Offline                    = 0,
	WRA_Authorizing                = 1,
	WRA_Authorized                 = 2,
	WRA_Banned                     = 3,
	WRA_MAX                        = 4,

};

// Enum ProjectX._Types_X.EBanType
enum class EBanType : uint8_t
{
	BanType_None                   = 0,
	BanType_Auth                   = 1,
	BanType_Chat                   = 2,
	BanType_Parental               = 3,
	BanType_Club                   = 4,
	BanType_Trade                  = 5,
	BanType_MAX                    = 6,

};

// Enum ProjectX._Types_X.EConsoleQualityMode
enum class EConsoleQualityMode : uint8_t
{
	ConsoleQualityMode_Performance = 0,
	ConsoleQualityMode_Quality     = 1,
	ConsoleQualityMode_MAX         = 2,

};

// Enum ProjectX._Types_X.EPlayerAuthState
enum class EPlayerAuthState : uint8_t
{
	EPlayerAuthState_None          = 0,
	EPlayerAuthState_NewUserFlow   = 1,
	EPlayerAuthState_HighlightReel = 2,
	EPlayerAuthState_SetName       = 3,
	EPlayerAuthState_RequestingInitialLoadout = 4,
	EPlayerAuthState_InitialLoadoutFailed = 5,
	EPlayerAuthState_CarSelect     = 6,
	EPlayerAuthState_CarSelected   = 7,
	EPlayerAuthState_MAX           = 8,

};

// Enum ProjectX._Types_X.EReservationStatus
enum class EReservationStatus : uint8_t
{
	ReservationStatus_None         = 0,
	ReservationStatus_Reserved     = 1,
	ReservationStatus_Joining      = 2,
	ReservationStatus_InGame       = 3,
	ReservationStatus_MAX          = 4,

};

// Enum ProjectX._Types_X.EDatabaseEnvironment
enum class EDatabaseEnvironment : uint8_t
{
	DBE_DevLocal                   = 0,
	DBE_Dev                        = 1,
	DBE_Test                       = 2,
	DBE_Production                 = 3,
	DBE_MAX                        = 4,

};

// Enum ProjectX._Types_X.EAxisSign
enum class EAxisSign : uint8_t
{
	AxisSign_None                  = 0,
	AxisSign_Positive              = 1,
	AxisSign_Negative              = 2,
	AxisSign_MAX                   = 3,

};

// Enum ProjectX._Types_X.EButtonPressType
enum class EButtonPressType : uint8_t
{
	BPT_Normal                     = 0,
	BPT_Tap                        = 1,
	BPT_Hold                       = 2,
	BPT_DoubleTap                  = 3,
	BPT_Toggle                     = 4,
	BPT_MAX                        = 5,

};

// Enum ProjectX._Types_X.ERemappable
enum class ERemappable : uint8_t
{
	Remappable_All                 = 0,
	Remappable_Key                 = 1,
	Remappable_Axis                = 2,
	Remappable_KeyTriggerAxis      = 3,
	Remappable_None                = 4,
	Remappable_MAX                 = 5,

};

// Enum ProjectX._Types_X.EUINavigationMode
enum class EUINavigationMode : uint8_t
{
	UINavigationMode_Keyboard      = 0,
	UINavigationMode_Gamepad       = 1,
	UINavigationMode_Cursor        = 2,
	UINavigationMode_MAX           = 3,

};

// Enum ProjectX._Types_X.EPartyMatchmakingRestriction
enum class EPartyMatchmakingRestriction : uint8_t
{
	PMR_NotOriginalAppOwner        = 0,
	PMR_PendingLicenseAgreement    = 1,
	PMR_InMainMenu                 = 2,
	PMR_NotLoggedInPsyNet          = 3,
	PMR_MAX                        = 4,

};

// Enum ProjectX._Types_X.EBlogTileType
enum class EBlogTileType : uint8_t
{
	EBlogTileType_Carousel         = 0,
	EBlogTileType_RLCS             = 1,
	EBlogTileType_Community        = 2,
	EBlogTileType_MAX              = 3,

};

// Enum ProjectX._Types_X.EOnlinePlayerPermission
enum class EOnlinePlayerPermission : uint8_t
{
	OPP_PrivateMatchAdmin          = 0,
	OPP_SuperPrivateMatchAdmin     = 1,
	OPP_MAX                        = 2,

};

// Enum ProjectX._Types_X.EOnlinePlayerRole
enum class EOnlinePlayerRole : uint8_t
{
	OPR_PrivateMatchAdmin          = 0,
	OPR_SuperPrivateMatchAdmin     = 1,
	OPR_MAX                        = 2,

};

// Enum ProjectX._Types_X.EPsyNetTransportType
enum class EPsyNetTransportType : uint8_t
{
	PsyNetTransport_HTTP           = 0,
	PsyNetTransport_WebSocket      = 1,
	PsyNetTransport_MAX            = 2,

};

// Enum ProjectX.AnimNodeSeries_X.EAnimNodeSeriesChild
enum class EAnimNodeSeriesChild : uint8_t
{
	AnimNodeSeries_Idle            = 0,
	AnimNodeSeries_Intro           = 1,
	AnimNodeSeries_Loop            = 2,
	AnimNodeSeries_Outro           = 3,
	AnimNodeSeries_MAX             = 4,

};

// Enum ProjectX.BugReport_X.EFileTruncateType
enum class EFileTruncateType : uint8_t
{
	FileTruncate_None              = 0,
	FileTruncate_KeepStart         = 1,
	FileTruncate_KeepEnd           = 2,
	FileTruncate_MAX               = 3,

};

// Enum ProjectX.FXActor_X.EFXComponentTarget
enum class EFXComponentTarget : uint8_t
{
	FXComponentTarget_All          = 0,
	FXComponentTarget_Local        = 1,
	FXComponentTarget_NonLocal     = 2,
	FXComponentTarget_MAX          = 3,

};

// Enum ProjectX.FXActor_X.EFXComponentState
enum class EFXComponentState : uint8_t
{
	FXComponentState_Detached      = 0,
	FXComponentState_Attached      = 1,
	FXComponentState_PendingDetach = 2,
	FXComponentState_MAX           = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ProjectX._Types_X.CheckReservationResponse
// 0x0078
struct FCheckReservationResponse
{
	struct FString                                     IP;                                                        // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     ServerName;                                                // 0x0010(0x0010) (NeedCtorLink)
	int                                                Playlist;                                                  // 0x0020(0x0004)
	unsigned char                                      UnknownDataIVAR[0x4];                                      // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     Region;                                                    // 0x0028(0x0010) (NeedCtorLink)
	struct FString                                     Host;                                                      // 0x0038(0x0010) (NeedCtorLink)
	int                                                Port;                                                      // 0x0048(0x0004)
	unsigned char                                      UnknownDataA13L[0x4];                                      // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     ReservationID;                                             // 0x0050(0x0010) (NeedCtorLink)
	struct FString                                     DSConnectToken;                                            // 0x0060(0x0010) (NeedCtorLink)
	class UUdpEncryptionKeys*                          Keys;                                                      // 0x0070(0x0008)

};
// ScriptStruct ProjectX._Types_X.ServerReservationData
// 0x0070
struct FServerReservationData
{
	struct FString                                     serverId;                                                  // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     BeaconURL;                                                 // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     ServerName;                                                // 0x0020(0x0010) (NeedCtorLink)
	int                                                Playlist;                                                  // 0x0030(0x0004)
	unsigned char                                      UnknownDataD0VE[0x4];                                      // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     Region;                                                    // 0x0038(0x0010) (NeedCtorLink)
	struct FString                                     ReservationID;                                             // 0x0048(0x0010) (NeedCtorLink)
	struct FString                                     DSRToken;                                                  // 0x0058(0x0010) (NeedCtorLink)
	class UUdpEncryptionKeys*                          Keys;                                                      // 0x0068(0x0008)

};
// ScriptStruct ProjectX._Types_X.PartyMemberServer
// 0x0024
struct FPartyMemberServer
{
	struct FString                                     BeaconAddress;                                             // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Password;                                                  // 0x0010(0x0010) (NeedCtorLink)
	int                                                PlaylistId;                                                // 0x0020(0x0004)

};
// ScriptStruct ProjectX._Types_X.PartyMember
// 0x0118
struct FPartyMember
{
	struct FUniqueNetId                                PrimaryMemberId;                                           // 0x0000(0x0038)
	struct FUniqueNetId                                MemberId;                                                  // 0x0038(0x0038)
	struct FString                                     MemberName;                                                // 0x0070(0x0010) (NeedCtorLink)
	int                                                MatchmakeRestrictions;                                     // 0x0080(0x0004)
	int                                                LocalControllerId;                                         // 0x0084(0x0004)
	TEnumAsByte<ECrossPlatformChatState>               CrossChatState;                                            // 0x0088(0x0001)
	unsigned char                                      UnknownDataJIYS[0x3];                                      // 0x0089(0x0003) MISSED OFFSET
	unsigned char                                      bDisableCrossPlay : 1;                                     // 0x008C(0x0001) BIT_FIELD
	unsigned char                                      UnknownData296B[0x2];                                      // 0x0089(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FUniqueNetId                                TradingMemberId;                                           // 0x0090(0x0038)
	struct FGuid                                       TradeId;                                                   // 0x00C8(0x0010)
	unsigned char                                      UnknownData3JP5 : 32;                                      // 0x00D8(0x0001)
	unsigned char                                      bReadyToTrade : 1;                                         // 0x00D8(0x0001) BIT_FIELD
	unsigned char                                      UnknownData3G4S[0x2];                                      // 0x00D8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData9RJV[0x4];                                      // 0x00DC(0x0004) MISSED OFFSET
	struct FPartyMemberServer                          Server;                                                    // 0x00E0(0x0028) (NeedCtorLink)
	struct FUniqueLobbyId                              PlatformParty;                                             // 0x0108(0x0010)

};
// ScriptStruct ProjectX._Types_X.IntVector3
// 0x000C
struct FIntVector3
{
	int                                                X;                                                         // 0x0000(0x0004) (Edit)
	int                                                Y;                                                         // 0x0004(0x0004) (Edit)
	int                                                Z;                                                         // 0x0008(0x0004) (Edit)

};
// ScriptStruct ProjectX.RPC_CheckReplacementDedicatedServer_X.CheckReplacementDedicatedServerData
// 0x0024
struct FCheckReplacementDedicatedServerData
{
	struct FString                                     IP;                                                        // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Host;                                                      // 0x0010(0x0010) (NeedCtorLink)
	int                                                Port;                                                      // 0x0020(0x0004)

};
// ScriptStruct ProjectX.PartyMessage_LocalPlayers_X.SimplePartyMember
// 0x0048
struct FSimplePartyMember
{
	struct FUniqueNetId                                MemberId;                                                  // 0x0000(0x0038)
	struct FString                                     MemberName;                                                // 0x0038(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.LocalCache_X.CacheExportCallbackData
// 0x0020
struct FCacheExportCallbackData
{
	struct FPointer                                    Task;                                                      // 0x0000(0x0008) (Native)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataLQ28[0xC];                                      // 0x0008(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX.EpochTimers_X.EpochTimer
// 0x0020
struct FEpochTimer
{
	struct FScriptDelegate                             Callback;                                                  // 0x0000(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData47DU[0xC];                                      // 0x0000(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataC45O[0x8];                                      // 0x0018(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.EpochTimers_X.EpochTimer.EpochTime

};
// ScriptStruct ProjectX.FXActor_X.AttachToParameterWithUnlockAxes
// 0x0009
struct FAttachToParameterWithUnlockAxes
{
	struct FName                                       Parameter;                                                 // 0x0000(0x0008) (Edit)
	TEnumAsByte<EAttachActorLocationUnlockFlags>       IgnoredAxis;                                               // 0x0008(0x0001) (Edit)

};
// ScriptStruct ProjectX.FXActor_X.FXAttachment
// 0x010C
struct FFXAttachment
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit)
	struct FName                                       SkeletalMeshAttachName;                                    // 0x0008(0x0008) (Edit)
	struct FName                                       SocketOrBoneName;                                          // 0x0010(0x0008) (Edit)
	struct FName                                       AttachToParameter;                                         // 0x0018(0x0008) (Edit, EditConst)
	float                                              AttachDelay;                                               // 0x0020(0x0004) (Edit)
	float                                              DetachDelay;                                               // 0x0024(0x0004) (Edit)
	float                                              LifeTime;                                                  // 0x0028(0x0004) (Edit)
	TEnumAsByte<EFXComponentTarget>                    Target;                                                    // 0x002C(0x0001) (Edit)
	unsigned char                                      UnknownDataL91L[0x3];                                      // 0x002D(0x0003) MISSED OFFSET
	class UActorComponent*                             Component;                                                 // 0x0030(0x0008) (Edit, ExportObject, Component, EditInline)
	TArray<class UFXActorEvent_X*>                     AttachAny;                                                 // 0x0038(0x0010) (Edit, NeedCtorLink)
	TArray<class UFXActorEvent_X*>                     DetachAny;                                                 // 0x0048(0x0010) (Edit, NeedCtorLink)
	TArray<class UFXActorEvent_X*>                     AttachAll;                                                 // 0x0058(0x0010) (Edit, NeedCtorLink)
	TArray<class URuntimeParameterBase_X*>             RuntimeParameters;                                         // 0x0068(0x0010) (Edit, NeedCtorLink, EditInline)
	TArray<class UFXAttachmentTraitBase_X*>            Traits;                                                    // 0x0078(0x0010) (Edit, NeedCtorLink, EditInline)
	struct FAttachToParameterWithUnlockAxes            AttachToParameterActor;                                    // 0x0088(0x000C) (Edit)
	unsigned char                                      bCreateDuplicates : 1;                                     // 0x0094(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownDataH5V3[0x2];                                      // 0x0094(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bWantsAttachment : 1;                                      // 0x0094(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData3UGB[0x2];                                      // 0x0098(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bInitializedTraits : 1;                                    // 0x0094(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData3Y11[0x2];                                      // 0x0098(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bExistingComponent : 1;                                    // 0x0094(0x0001) BIT_FIELD (EditorOnly)
	unsigned char                                      UnknownDataKTL6[0x2];                                      // 0x0098(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bExistingAttachment : 1;                                   // 0x0094(0x0001) BIT_FIELD (EditorOnly)
	unsigned char                                      UnknownDataU739[0x2];                                      // 0x0098(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              AttachedTime;                                              // 0x0098(0x0004) (Transient)
	TEnumAsByte<EFXComponentState>                     State;                                                     // 0x009C(0x0001) (Transient)
	unsigned char                                      UnknownDataNY88[0x3];                                      // 0x009D(0x0003) MISSED OFFSET
	float                                              WantsAttachmentChangeTime;                                 // 0x00A0(0x0004) (Transient)
	unsigned char                                      UnknownDataICRO[0x4];                                      // 0x00A4(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      AttachedToMesh;                                            // 0x00A8(0x0008) (ExportObject, Transient, Component, EditInline)
	struct FMatrix                                     RelativeTransform;                                         // 0x00B0(0x0040) (Transient)
	int                                                BoneIndex;                                                 // 0x00F0(0x0004) (Transient)
	unsigned char                                      UnknownDataTKC3[0x4];                                      // 0x00F4(0x0004) MISSED OFFSET
	class AActor*                                      AttachToActor;                                             // 0x00F8(0x0008) (Transient)
	struct FVector                                     OffsetToAttachActor;                                       // 0x0100(0x000C) (Transient)

};
// ScriptStruct ProjectX.LocalCache_X.CacheImportCallbackData
// 0x0020
struct FCacheImportCallbackData
{
	struct FPointer                                    Task;                                                      // 0x0000(0x0008) (Native)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7Z7Q[0xC];                                      // 0x0008(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX._Types_X.RPCRewardLevelData
// 0x0008
struct FRPCRewardLevelData
{
	int                                                SeasonLevel;                                               // 0x0000(0x0004)
	int                                                SeasonLevelWins;                                           // 0x0004(0x0004)

};
// ScriptStruct ProjectX.LocalCache_X.CacheIOTaskBase
// 0x0030
struct FCacheIOTaskBase
{
	class UObject*                                     CacheObject;                                               // 0x0000(0x0008)
	TArray<unsigned char>                              Data;                                                      // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     Path;                                                      // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	class UErrorType*                                  Error;                                                     // 0x0028(0x0008)

};
// ScriptStruct ProjectX.LocalCache_X.CacheExportTask
// 0x0000 (0x0030 - 0x0030)
struct FCacheExportTask : public FCacheIOTaskBase
{

};
// ScriptStruct ProjectX.LocalCache_X.CacheImportTask
// 0x0000 (0x0030 - 0x0030)
struct FCacheImportTask : public FCacheIOTaskBase
{

};
// ScriptStruct ProjectX._Types_X.PartyJoinMatchSettings
// 0x0048
struct FPartyJoinMatchSettings
{
	struct FString                                     BeaconAddress;                                             // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     GameAddress;                                               // 0x0010(0x0010) (NeedCtorLink)
	int                                                PlaylistId;                                                // 0x0020(0x0004)
	unsigned char                                      bFriendJoin : 1;                                           // 0x0024(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataNF94[0x2];                                      // 0x0024(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     Password;                                                  // 0x0028(0x0010) (NeedCtorLink)
	struct FString                                     ReservationID;                                             // 0x0038(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.RPC_GetPlayerSkill_X.GetPlayerSkillData
// 0x0020
struct FGetPlayerSkillData
{
	int                                                Playlist;                                                  // 0x0000(0x0004)
	float                                              Mu;                                                        // 0x0004(0x0004)
	float                                              Sigma;                                                     // 0x0008(0x0004)
	int                                                Tier;                                                      // 0x000C(0x0004)
	int                                                Division;                                                  // 0x0010(0x0004)
	int                                                MatchesPlayed;                                             // 0x0014(0x0004)
	float                                              MMR;                                                       // 0x0018(0x0004)
	int                                                WinStreak;                                                 // 0x001C(0x0004)

};
// ScriptStruct ProjectX.FXActor_X.FXEventSubscription
// 0x0038
struct FFXEventSubscription
{
	class UFXActorEvent_X*                             Event;                                                     // 0x0000(0x0008)
	struct FScriptDelegate                             OnPushed;                                                  // 0x0008(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataAN0Z[0xC];                                      // 0x0008(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             OnPopped;                                                  // 0x0020(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataYB00[0xC];                                      // 0x0020(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX.ExplosionHitHandler_X.ContactInformation
// 0x001C
struct FContactInformation
{
	struct FVector                                     ContactLocation;                                           // 0x0000(0x000C) (Transient)
	struct FVector                                     ContactVelocity;                                           // 0x000C(0x000C) (Transient)
	float                                              ContactTime;                                               // 0x0018(0x0004) (Transient)

};
// ScriptStruct ProjectX.PsyNetChannel_X.PendingChannelService
// 0x001C
struct FPendingChannelService
{
	class UPsyNetClientService_X*                      Service;                                                   // 0x0000(0x0008)
	int                                                MessageId;                                                 // 0x0008(0x0004)
	unsigned char                                      UnknownDataND61[0x4];                                      // 0x000C(0x0004) MISSED OFFSET
	class UAsyncTask*                                  Task;                                                      // 0x0010(0x0008)
	float                                              ReceiveTime;                                               // 0x0018(0x0004)

};
// ScriptStruct ProjectX.FXActor_X.FXActorEventCheck
// 0x000C
struct FFXActorEventCheck
{
	class UFXActorEvent_X*                             Event;                                                     // 0x0000(0x0008)
	unsigned char                                      bHasTicked : 1;                                            // 0x0008(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataD8KA[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX.OnlineGameStats_X.UploadStatDataSet
// 0x0018
struct FUploadStatDataSet
{
	struct FName                                       StatId;                                                    // 0x0000(0x0008)
	TArray<struct FUploadStatData>                     Data;                                                      // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.OnlineConfig_X.ModifierSubscription
// 0x0038
struct FModifierSubscription
{
	class UClass*                                      ObjClass;                                                  // 0x0000(0x0008)
	struct FScriptDelegate                             OnAdd;                                                     // 0x0008(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataRXQ8[0xC];                                      // 0x0008(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             OnRemove;                                                  // 0x0020(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataN660[0xC];                                      // 0x0020(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX.PsyNetRequestQue_X.PsyNetRequest
// 0x0018
struct FPsyNetRequest
{
	struct FName                                       Id;                                                        // 0x0000(0x0008)
	class UTAsyncResult__PsyNetMessage_X*              Task;                                                      // 0x0008(0x0008)
	float                                              TimeoutTime;                                               // 0x0010(0x0004)
	float                                              SendTime;                                                  // 0x0014(0x0004)

};
// ScriptStruct ProjectX.OnlineGameStats_X.UploadStatData
// 0x003C
struct FUploadStatData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	int                                                Value;                                                     // 0x0038(0x0004)

};
// ScriptStruct ProjectX.ShakeComponent_X.ShakeReceiver
// 0x000C
struct FShakeReceiver
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)
	float                                              Scale;                                                     // 0x0008(0x0004)

};
// ScriptStruct ProjectX.RPC_GetBlockList_X.BlockedListRequestData
// 0x0048
struct FBlockedListRequestData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	struct FString                                     PlayerName;                                                // 0x0038(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.PartyMetrics_X.PartyMetricsData
// 0x000C
struct FPartyMetricsData
{
	int                                                LocalPlayers;                                              // 0x0000(0x0004)
	int                                                RemotePlayers;                                             // 0x0004(0x0004)
	unsigned char                                      bPartyLeader : 1;                                          // 0x0008(0x0001) BIT_FIELD
	unsigned char                                      UnknownData68T5[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX.WordFilterTypes_X.WordFilterPair
// 0x0078
struct FWordFilterPair
{
	struct FString                                     Id;                                                        // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Key;                                                       // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     Value;                                                     // 0x0020(0x0010) (NeedCtorLink)
	TEnumAsByte<EWordFilterUsage>                      Usage;                                                     // 0x0030(0x0001)
	unsigned char                                      UnknownData7XZK[0x3];                                      // 0x0031(0x0003) MISSED OFFSET
	unsigned char                                      bPending : 1;                                              // 0x0034(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataI6O7[0x2];                                      // 0x0031(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              LastRequestTime;                                           // 0x0038(0x0004)
	unsigned char                                      UnknownData5BDJ[0x4];                                      // 0x003C(0x0004) MISSED OFFSET
	class UError*                                      Error;                                                     // 0x0040(0x0008)
	struct FScriptDelegate                             Callback;                                                  // 0x0048(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData8KO9[0xC];                                      // 0x0048(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             ErrorCallback;                                             // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataWW1B[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX.GameInfo_X.PauserData
// 0x000C
struct FPauserData
{
	class APlayerController*                           PC;                                                        // 0x0000(0x0008)
	int                                                PauseNum;                                                  // 0x0008(0x0004)

};
// ScriptStruct ProjectX.WebCache_X.CachedDataRequest
// 0x0050
struct FCachedDataRequest
{
	struct FString                                     URL;                                                       // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Path;                                                      // 0x0010(0x0010) (NeedCtorLink)
	class UStringMap*                                  Headers;                                                   // 0x0020(0x0008) (ExportObject, Component, EditInline)
	class UCachedWebData_X*                            CachedWebData;                                             // 0x0028(0x0008)
	unsigned char                                      bZipResponse : 1;                                          // 0x0030(0x0001) BIT_FIELD
	unsigned char                                      UnknownData7KIT[0x2];                                      // 0x0030(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataHR9T[0x4];                                      // 0x0034(0x0004) MISSED OFFSET
	struct FScriptDelegate                             Callback;                                                  // 0x0038(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataBOOF[0xC];                                      // 0x0034(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedParam
// 0x0008
struct FAnimatedParam
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit)

};
// ScriptStruct ProjectX.PresetMutators_X.CategorySettingPair
// 0x0010
struct FCategorySettingPair
{
	struct FName                                       Category;                                                  // 0x0000(0x0008)
	struct FName                                       Setting;                                                   // 0x0008(0x0008)

};
// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedFloatParam
// 0x0018 (0x0020 - 0x0008)
struct FAnimatedFloatParam : public FAnimatedParam
{
	struct FInterpCurveFloat                           ValueOverTime;                                             // 0x0008(0x0018) (Edit, NeedCtorLink)

};
// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedVectorParam
// 0x0018 (0x0020 - 0x0008)
struct FAnimatedVectorParam : public FAnimatedParam
{
	struct FInterpCurveVector                          ValueOverTime;                                             // 0x0008(0x0018) (Edit, NeedCtorLink)

};
// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedLinearColorParam
// 0x0018 (0x0020 - 0x0008)
struct FAnimatedLinearColorParam : public FAnimatedParam
{
	struct FInterpCurveLinearColor                     ValueOverTime;                                             // 0x0008(0x0018) (Edit, NeedCtorLink)

};
// ScriptStruct ProjectX.FakeData_X.FakeData1
// 0x0035
struct FFakeData1
{
	struct FString                                     string1;                                                   // 0x0000(0x0010) (NeedCtorLink)
	struct FName                                       name1;                                                     // 0x0010(0x0008)
	unsigned char                                      bool1 : 1;                                                 // 0x0018(0x0001) BIT_FIELD
	unsigned char                                      UnknownData9YAF[0x2];                                      // 0x0018(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataFSH6[0x4];                                      // 0x001C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData04M9[0x8];                                      // 0x001C(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.FakeData_X.FakeData1.qword1
	float                                              float1;                                                    // 0x0028(0x0004)
	unsigned char                                      byte1;                                                     // 0x002C(0x0001)
	unsigned char                                      UnknownDataGP8U[0x3];                                      // 0x002D(0x0003) MISSED OFFSET
	int                                                int1;                                                      // 0x0030(0x0004)
	TEnumAsByte<EFakeDataEnum>                         enum1;                                                     // 0x0034(0x0001)

};
// ScriptStruct ProjectX.FakeData_X.FakeData2
// 0x0090
struct FFakeData2
{
	struct FFakeData1                                  struct1;                                                   // 0x0000(0x0038) (NeedCtorLink)
	struct FString                                     string1;                                                   // 0x0038(0x0010) (NeedCtorLink)
	struct FName                                       name1;                                                     // 0x0048(0x0008)
	unsigned char                                      bool1 : 1;                                                 // 0x0050(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataIGH6[0x2];                                      // 0x0050(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData3PWU[0x4];                                      // 0x0054(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData3WRQ[0x8];                                      // 0x0054(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.FakeData_X.FakeData2.qword1
	float                                              float1;                                                    // 0x0060(0x0004)
	unsigned char                                      byte1;                                                     // 0x0064(0x0001)
	unsigned char                                      UnknownDataU13D[0x3];                                      // 0x0065(0x0003) MISSED OFFSET
	int                                                int1;                                                      // 0x0068(0x0004)
	TEnumAsByte<EFakeDataEnum>                         enum1;                                                     // 0x006C(0x0001)
	unsigned char                                      UnknownDataLR4G[0x3];                                      // 0x006D(0x0003) MISSED OFFSET
	TArray<struct FFakeData1>                          array1;                                                    // 0x0070(0x0010) (NeedCtorLink)
	TArray<struct FString>                             array2;                                                    // 0x0080(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.OnlineGameWordFilterProcessor_X.WordFilterRequest
// 0x0040
struct FWordFilterRequest
{
	class UWebRequest_X*                               Request;                                                   // 0x0000(0x0008)
	struct FString                                     Comment;                                                   // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     Sanitized;                                                 // 0x0018(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                  // 0x0028(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataWHFY[0xC];                                      // 0x0028(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX.FakeData_X.FakeData3
// 0x0130
struct FFakeData3
{
	TArray<struct FFakeData2>                          array1;                                                    // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     string1;                                                   // 0x0010(0x0010) (NeedCtorLink)
	struct FFakeData1                                  struct1;                                                   // 0x0020(0x0038) (NeedCtorLink)
	struct FName                                       name1;                                                     // 0x0058(0x0008)
	TArray<struct FFakeData2>                          array2;                                                    // 0x0060(0x0010) (NeedCtorLink)
	TArray<struct FFakeData2>                          array3;                                                    // 0x0070(0x0010) (NeedCtorLink)
	unsigned char                                      bool1 : 1;                                                 // 0x0080(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataM5YC[0x2];                                      // 0x0080(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataKPIG[0x4];                                      // 0x0084(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData6CV8[0x8];                                      // 0x0084(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.FakeData_X.FakeData3.qword1
	float                                              float1;                                                    // 0x0090(0x0004)
	unsigned char                                      byte1;                                                     // 0x0094(0x0001)
	unsigned char                                      UnknownDataO6HK[0x3];                                      // 0x0095(0x0003) MISSED OFFSET
	int                                                int1;                                                      // 0x0098(0x0004)
	TEnumAsByte<EFakeDataEnum>                         enum1;                                                     // 0x009C(0x0001)
	unsigned char                                      UnknownDataCXUI[0x3];                                      // 0x009D(0x0003) MISSED OFFSET
	struct FFakeData2                                  struct2;                                                   // 0x00A0(0x0090) (NeedCtorLink)

};
// ScriptStruct ProjectX.PsyNetMessengerWebSocket_X.QueuedPsyNetMessage
// 0x0014
struct FQueuedPsyNetMessage
{
	class UPsyNetMessage_X*                            Message;                                                   // 0x0000(0x0008)
	class UAsyncTask*                                  Task;                                                      // 0x0008(0x0008)
	float                                              TimeoutTime;                                               // 0x0010(0x0004)

};
// ScriptStruct ProjectX.FakeData_X.FakeData4
// 0x011D
struct FFakeData4
{
	struct FFakeData2                                  struct2;                                                   // 0x0000(0x0090) (NeedCtorLink)
	TArray<struct FFakeData3>                          array1;                                                    // 0x0090(0x0010) (NeedCtorLink)
	struct FFakeData1                                  struct1;                                                   // 0x00A0(0x0038) (NeedCtorLink)
	TArray<struct FFakeData2>                          array2;                                                    // 0x00D8(0x0010) (NeedCtorLink)
	struct FString                                     string1;                                                   // 0x00E8(0x0010) (NeedCtorLink)
	struct FName                                       name1;                                                     // 0x00F8(0x0008)
	unsigned char                                      bool1 : 1;                                                 // 0x0100(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataE4RV[0x2];                                      // 0x0100(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData2G96[0x4];                                      // 0x0104(0x0004) MISSED OFFSET
	unsigned char                                      UnknownDataK6GF[0x8];                                      // 0x0104(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.FakeData_X.FakeData4.qword1
	float                                              float1;                                                    // 0x0110(0x0004)
	unsigned char                                      byte1;                                                     // 0x0114(0x0001)
	unsigned char                                      UnknownDataGRQ3[0x3];                                      // 0x0115(0x0003) MISSED OFFSET
	int                                                int1;                                                      // 0x0118(0x0004)
	TEnumAsByte<EFakeDataEnum>                         enum1;                                                     // 0x011C(0x0001)

};
// ScriptStruct ProjectX.PsyNetMetrics_X.ServiceErrorData
// 0x000C
struct FServiceErrorData
{
	struct FName                                       Type;                                                      // 0x0000(0x0008)
	int                                                Count;                                                     // 0x0008(0x0004)

};
// ScriptStruct ProjectX.GFxDataStore_X.GFxDirtyRow
// 0x0018
struct FGFxDirtyRow
{
	int                                                RowNum;                                                    // 0x0000(0x0004)
	unsigned char                                      UnknownDataGDPX[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               DirtyValues;                                               // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.GFxDataStore_X.GFxDirtyTable
// 0x0018
struct FGFxDirtyTable
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)
	TArray<struct FGFxDirtyRow>                        DirtyRows;                                                 // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.OnlineGameDLC_X.SteamWebRequestData
// 0x0040
struct FSteamWebRequestData
{
	class UWebRequest_X*                               Request;                                                   // 0x0000(0x0008)
	struct FUniqueNetId                                PlayerID;                                                  // 0x0008(0x0038)

};
// ScriptStruct ProjectX.OnlineGameDLC_X.SteamPlayerDLCOwnershipState
// 0x0011
struct FSteamPlayerDLCOwnershipState
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)
	unsigned char                                      UnknownDataSYSH[0x8];                                      // 0x0008(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameDLC_X.SteamPlayerDLCOwnershipState.AppID
	TEnumAsByte<EDLCOwnershipState>                    State;                                                     // 0x0010(0x0001) (Transient)

};
// ScriptStruct ProjectX.PsyNetMetrics_X.ServiceMetricsData
// 0x0024
struct FServiceMetricsData
{
	struct FString                                     Service;                                                   // 0x0000(0x0010) (NeedCtorLink)
	int                                                Attempts;                                                  // 0x0010(0x0004)
	int                                                Failures;                                                  // 0x0014(0x0004)
	float                                              MinLatency;                                                // 0x0018(0x0004)
	float                                              MaxLatency;                                                // 0x001C(0x0004)
	float                                              AvgLatency;                                                // 0x0020(0x0004)

};
// ScriptStruct ProjectX.OnlineGameDLC_X.PlayerDLCInfo
// 0x0064
struct FPlayerDLCInfo
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	TArray<struct FSteamPlayerDLCOwnershipState>       DLCs;                                                      // 0x0038(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             ValidationReadyDelegate;                                   // 0x0048(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataM5J5[0xC];                                      // 0x0048(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              TimeLastOwnershipRequest;                                  // 0x0060(0x0004) (Transient)

};
// ScriptStruct ProjectX.ReservationBeacon_X.BeaconMessageHandler
// 0x0018
struct FBeaconMessageHandler
{
	class UClass*                                      MessageClass;                                              // 0x0000(0x0008)
	TArray<struct FScriptDelegate>                     Delegates;                                                 // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX._Types_X.SkillRating
// 0x0008
struct FSkillRating
{
	float                                              Mu;                                                        // 0x0000(0x0004)
	float                                              Sigma;                                                     // 0x0004(0x0004)

};
// ScriptStruct ProjectX._Types_X.TierSkillRating
// 0x0010 (0x0018 - 0x0008)
struct FTierSkillRating : public FSkillRating
{
	int                                                Tier;                                                      // 0x0008(0x0004)
	int                                                Division;                                                  // 0x000C(0x0004)
	int                                                MatchesPlayed;                                             // 0x0010(0x0004)
	float                                              MMR;                                                       // 0x0014(0x0004)

};
// ScriptStruct ProjectX.PsyNetService_PersonaInfo_X.OnlinePersonaData
// 0x0080
struct FOnlinePersonaData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	struct FString                                     PlayerName;                                                // 0x0038(0x0010) (NeedCtorLink)
	struct FString                                     PresenceInfo;                                              // 0x0048(0x0010) (NeedCtorLink)
	struct FString                                     PresenceState;                                             // 0x0058(0x0010) (NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                                    // 0x0068(0x0018) (NeedCtorLink)

};
// ScriptStruct ProjectX._Types_X.PlayerSkillRating
// 0x0038 (0x0050 - 0x0018)
struct FPlayerSkillRating : public FTierSkillRating
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0018(0x0038)

};
// ScriptStruct ProjectX._Types_X.PlaylistSkillRating
// 0x0004 (0x0054 - 0x0050)
struct FPlaylistSkillRating : public FPlayerSkillRating
{
	int                                                Playlist;                                                  // 0x0050(0x0004)

};
// ScriptStruct ProjectX.Online_X.OnlineStatus
// 0x0049
struct FOnlineStatus
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	struct FString                                     PresenceInfo;                                              // 0x0038(0x0010) (NeedCtorLink)
	TEnumAsByte<EOnlineFriendState>                    PresenceState;                                             // 0x0048(0x0001)

};
// ScriptStruct ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership3
// 0x0028
struct FSteamJsonResponseGetPublisherAppOwnership3
{
	unsigned char                                      UnknownDataQ6ZU[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership3.AppID
	unsigned char                                      UnknownData2MNG[0x8];                                      // 0x0008(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership3.OwnerSteamID
	unsigned char                                      OwnsApp : 1;                                               // 0x0010(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataEWU2[0x2];                                      // 0x0010(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Permanent : 1;                                             // 0x0010(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataZLJX[0x2];                                      // 0x0014(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataWNYB[0x4];                                      // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     TimeStamp;                                                 // 0x0018(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.GFxDataStore_X.GFxDataStoreColumn
// 0x000C
struct FGFxDataStoreColumn
{
	TEnumAsByte<EASType>                               Type;                                                      // 0x0000(0x0001)
	unsigned char                                      UnknownData0IA3[0x3];                                      // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                      // 0x0004(0x0008)

};
// ScriptStruct ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership2
// 0x0010
struct FSteamJsonResponseGetPublisherAppOwnership2
{
	TArray<struct FSteamJsonResponseGetPublisherAppOwnership3> Apps;                                                      // 0x0000(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership
// 0x0010
struct FSteamJsonResponseGetPublisherAppOwnership
{
	struct FSteamJsonResponseGetPublisherAppOwnership2 AppOwnership;                                              // 0x0000(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.PsyNetService_FriendStatusUpdate_X.PsyNetOnlineStatus
// 0x0058
struct FPsyNetOnlineStatus
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	struct FString                                     PresenceInfo;                                              // 0x0038(0x0010) (NeedCtorLink)
	struct FString                                     PresenceState;                                             // 0x0048(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.GFxDataStore_X.GFxDataStoreRow
// 0x0018
struct FGFxDataStoreRow
{
	TArray<struct FASValue>                            Values;                                                    // 0x0000(0x0010) (NeedCtorLink)
	class UGFxDataRow_X*                               BoundObject;                                               // 0x0010(0x0008)

};
// ScriptStruct ProjectX.GFxDataStore_X.GFxDataStoreTable
// 0x0080
struct FGFxDataStoreTable
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)
	TArray<struct FGFxDataStoreColumn>                 Columns;                                                   // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct FGFxDataStoreRow>                    Rows;                                                      // 0x0018(0x0010) (NeedCtorLink)
	unsigned char                                      bLevelTransitionPersistent : 1;                            // 0x0028(0x0001) BIT_FIELD
	unsigned char                                      UnknownData2WCJ[0x2];                                      // 0x0028(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData5XX6[0x4];                                      // 0x002C(0x0004) MISSED OFFSET
	struct FMap_Mirror                                 PrimaryKeyMap;                                             // 0x0030(0x0050) (Native)

};
// ScriptStruct ProjectX.Camera_X.CameraKnockBase
// 0x0010
struct FCameraKnockBase
{
	float                                              BlendInTime;                                               // 0x0000(0x0004) (Edit)
	float                                              BlendOutTime;                                              // 0x0004(0x0004) (Edit)
	float                                              Falloff;                                                   // 0x0008(0x0004) (Edit)
	float                                              Time;                                                      // 0x000C(0x0004) (Transient)

};
// ScriptStruct ProjectX.Camera_X.LocationCameraKnock
// 0x000C (0x001C - 0x0010)
struct FLocationCameraKnock : public FCameraKnockBase
{
	struct FVector                                     Amount;                                                    // 0x0010(0x000C) (Edit)

};
// ScriptStruct ProjectX.Camera_X.RotationCameraKnock
// 0x000C (0x001C - 0x0010)
struct FRotationCameraKnock : public FCameraKnockBase
{
	struct FRotator                                    Amount;                                                    // 0x0010(0x000C) (Edit)

};
// ScriptStruct ProjectX.Camera_X.VectorInterpRate
// 0x0018
struct FVectorInterpRate
{
	float                                              MaxDistance;                                               // 0x0000(0x0004)
	float                                              InterpRate;                                                // 0x0004(0x0004)
	float                                              ForwardScale;                                              // 0x0008(0x0004)
	float                                              BackwardScale;                                             // 0x000C(0x0004)
	float                                              SideScale;                                                 // 0x0010(0x0004)
	float                                              UpDownScale;                                               // 0x0014(0x0004)

};
// ScriptStruct ProjectX.ClientNetMetrics_X.PingStats
// 0x0010
struct FPingStats
{
	float                                              Min;                                                       // 0x0000(0x0004)
	float                                              Max;                                                       // 0x0004(0x0004)
	float                                              Average;                                                   // 0x0008(0x0004)
	float                                              Median;                                                    // 0x000C(0x0004)

};
// ScriptStruct ProjectX.BugReport_X.BugReportSubmitterData
// 0x0030
struct FBugReportSubmitterData
{
	class APlayerController*                           Submitter;                                                 // 0x0000(0x0008)
	struct FString                                     Name;                                                      // 0x0008(0x0010) (NeedCtorLink)
	struct FVector                                     Location;                                                  // 0x0018(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x0024(0x000C)

};
// ScriptStruct ProjectX._Types_X.NetStats
// 0x000C
struct U_Types_X_FNetStats
{
	float                                              PingMin;                                                   // 0x0000(0x0004)
	float                                              Jitter;                                                    // 0x0004(0x0004)
	float                                              LossPct;                                                   // 0x0008(0x0004)

};
// ScriptStruct ProjectX.BugReport_X.BugReportSystemData
// 0x0034
struct FBugReportSystemData
{
	struct FString                                     ComputerName;                                              // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     GameName;                                                  // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     NetMode;                                                   // 0x0020(0x0010) (NeedCtorLink)
	unsigned char                                      bClient : 1;                                               // 0x0030(0x0001) BIT_FIELD
	unsigned char                                      UnknownData2CU5[0x2];                                      // 0x0030(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX.PsyNet_X.PsyNetKeys
// 0x0030
struct FPsyNetKeys
{
	struct FString                                     Environment;                                               // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     PsyNetAuth;                                                // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     SteamPublisher;                                            // 0x0020(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.BugReport_X.BugReportPathData
// 0x0040
struct FBugReportPathData
{
	struct FString                                     OutputPath;                                                // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     LogName;                                                   // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     LogPath;                                                   // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     ScreenShotPath;                                            // 0x0030(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX._Types_X.JoinMatchSettings
// 0x0020
struct FJoinMatchSettings
{
	TEnumAsByte<EJoinMatchType>                        MatchType;                                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData5AO5[0x3];                                      // 0x0001(0x0003) MISSED OFFSET
	int                                                PlaylistId;                                                // 0x0004(0x0004)
	unsigned char                                      bFriendJoin : 1;                                           // 0x0008(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataQZG3[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bMigration : 1;                                            // 0x0008(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataMWBT[0x2];                                      // 0x000C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bRankedReconnect : 1;                                      // 0x0008(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataRN2P[0x2];                                      // 0x000C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData8D4T[0x4];                                      // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     Password;                                                  // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.BugReport_X.BugReportDescriptionData
// 0x0050
struct FBugReportDescriptionData
{
	struct FString                                     Title;                                                     // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     ShortTitle;                                                // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     MetaTitle;                                                 // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     Description;                                               // 0x0030(0x0010) (NeedCtorLink)
	struct FString                                     Email;                                                     // 0x0040(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX._NetworkNextTypes_X.NetworkNextStats
// 0x0018
struct FNetworkNextStats
{
	struct U_Types_X_FNetStats                         Direct;                                                    // 0x0000(0x000C)
	struct U_Types_X_FNetStats                         Next;                                                      // 0x000C(0x000C)

};
// ScriptStruct ProjectX.GFxEngine_X.DirtyObject
// 0x0014
struct FDirtyObject
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)
	class UProperty*                                   Property;                                                  // 0x0008(0x0008)
	int                                                Index;                                                     // 0x0010(0x0004)

};
// ScriptStruct ProjectX.BugReport_X.FileUploadData
// 0x0039
struct FFileUploadData
{
	class UBugReport_X*                                BugReport;                                                 // 0x0000(0x0008)
	struct FString                                     BugID;                                                     // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     Folder;                                                    // 0x0018(0x0010) (NeedCtorLink)
	struct FString                                     FilePath;                                                  // 0x0028(0x0010) (NeedCtorLink)
	TEnumAsByte<EFileTruncateType>                     TruncateType;                                              // 0x0038(0x0001)

};
// ScriptStruct ProjectX.Camera_X.CameraOrientation
// 0x002C
struct FCameraOrientation
{
	struct FVector                                     Focus;                                                     // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)
	float                                              Distance;                                                  // 0x0018(0x0004)
	float                                              FOV;                                                       // 0x001C(0x0004)
	struct FVector                                     CalculatedLocation;                                        // 0x0020(0x000C)

};
// ScriptStruct ProjectX.Parties_X.PsyNetPartyMember
// 0x0070
struct FPsyNetPartyMember
{
	struct FString                                     PartyID;                                                   // 0x0000(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                UserId;                                                    // 0x0010(0x0038)
	struct FString                                     Username;                                                  // 0x0048(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownDataLTQ5[0x8];                                      // 0x0058(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.Parties_X.PsyNetPartyMember.JoinedAt
	struct FString                                     Role;                                                      // 0x0060(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.Parties_X.PartyInvite
// 0x0068
struct FPartyInvite
{
	struct FUniqueNetId                                UserId;                                                    // 0x0000(0x0038)
	struct FString                                     Username;                                                  // 0x0038(0x0010) (NeedCtorLink)
	struct FString                                     PartyID;                                                   // 0x0048(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData5J95[0x8];                                      // 0x0058(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.Parties_X.PartyInvite.InvitedAt
	unsigned char                                      UnknownData3F38[0x8];                                      // 0x0060(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.Parties_X.PartyInvite.AcceptedAt

};
// ScriptStruct ProjectX._Types_X.PsyNetPersonaData
// 0x0080
struct FPsyNetPersonaData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	struct FString                                     PlayerName;                                                // 0x0038(0x0010) (NeedCtorLink)
	struct FString                                     PresenceInfo;                                              // 0x0048(0x0010) (NeedCtorLink)
	struct FString                                     PresenceState;                                             // 0x0058(0x0010) (NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                                    // 0x0068(0x0018) (NeedCtorLink)

};
// ScriptStruct ProjectX._Types_X.PlayerSeasonRewardProgress
// 0x0040
struct FPlayerSeasonRewardProgress
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	int                                                Level;                                                     // 0x0038(0x0004)
	int                                                Wins;                                                      // 0x003C(0x0004)

};
// ScriptStruct ProjectX.GFxSoundPack_X.SoundPackSoundRef
// 0x0010
struct FSoundPackSoundRef
{
	class UAkSoundCue*                                 Sound;                                                     // 0x0000(0x0008) (Edit)
	struct FName                                       Name;                                                      // 0x0008(0x0008) (Edit)

};
// ScriptStruct ProjectX._Types_X.ClubColorSet
// 0x0008
struct FClubColorSet
{
	unsigned char                                      TeamColorID;                                               // 0x0000(0x0001)
	unsigned char                                      CustomColorID;                                             // 0x0001(0x0001)
	unsigned char                                      UnknownData9CKY[0x2];                                      // 0x0002(0x0002) MISSED OFFSET
	unsigned char                                      bTeamColorSet : 1;                                         // 0x0004(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataLV2D[0x2];                                      // 0x0002(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bCustomColorSet : 1;                                       // 0x0004(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataPGTA[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX._Types_X.CustomMatchTeamSettings
// 0x001C
struct FCustomMatchTeamSettings
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (NeedCtorLink)
	struct FClubColorSet                               Colors;                                                    // 0x0010(0x0008)
	int                                                GameScore;                                                 // 0x0018(0x0004)

};
// ScriptStruct ProjectX._Types_X.ReplicatedReservationData
// 0x0049
struct FReplicatedReservationData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	struct FString                                     PlayerName;                                                // 0x0038(0x0010) (NeedCtorLink)
	TEnumAsByte<EReservationStatus>                    Status;                                                    // 0x0048(0x0001)

};
// ScriptStruct ProjectX._Types_X.CustomMatchSettings
// 0x008C
struct U_Types_X_FCustomMatchSettings
{
	struct FString                                     GameTags;                                                  // 0x0000(0x0010) (NeedCtorLink)
	struct FName                                       MapName;                                                   // 0x0010(0x0008)
	unsigned char                                      GameMode;                                                  // 0x0018(0x0001)
	unsigned char                                      UnknownData9DND[0x3];                                      // 0x0019(0x0003) MISSED OFFSET
	int                                                MaxPlayerCount;                                            // 0x001C(0x0004)
	struct FString                                     ServerName;                                                // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     Password;                                                  // 0x0030(0x0010) (NeedCtorLink)
	unsigned char                                      bPublic : 1;                                               // 0x0040(0x0001) BIT_FIELD
	unsigned char                                      UnknownData4ITM[0x2];                                      // 0x0040(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataL2YU[0x4];                                      // 0x0044(0x0004) MISSED OFFSET
	struct FCustomMatchTeamSettings                    TeamSettings[0x2];                                         // 0x0048(0x0020) (NeedCtorLink)
	unsigned char                                      UnknownDataDBFB : 32;                                      // 0x0088(0x0001)
	unsigned char                                      bClubServer : 1;                                           // 0x0088(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataQKLU[0x2];                                      // 0x0088(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX._Types_X.ReservationData
// 0x00E8
struct FReservationData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	struct FString                                     PlayerName;                                                // 0x0038(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                PartyID;                                                   // 0x0048(0x0038)
	TEnumAsByte<EReservationStatus>                    Status;                                                    // 0x0080(0x0001)
	unsigned char                                      UnknownDataW40G[0x3];                                      // 0x0081(0x0003) MISSED OFFSET
	float                                              TimeoutTime;                                               // 0x0084(0x0004)
	unsigned char                                      bDisableCrossPlay : 1;                                     // 0x0088(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataGXD2[0x2];                                      // 0x0088(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataSIW0[0x4];                                      // 0x008C(0x0004) MISSED OFFSET
	class APlayerReplicationInfo*                      PRI;                                                       // 0x0090(0x0008)
	unsigned char                                      Team;                                                      // 0x0098(0x0001)
	unsigned char                                      UnknownDataT7MT[0x7];                                      // 0x0099(0x0007) MISSED OFFSET
	class UAddReservationMessage_X*                    ReservationMessage;                                        // 0x00A0(0x0008)
	TScriptInterface<class UIReservationConnection_X>  Connection;                                                // 0x00A8(0x0010)
	unsigned char                                      UnknownData7H9N : 32;                                      // 0x00B8(0x0001)
	unsigned char                                      bIgnoreBeaconDisconnect : 1;                               // 0x00B8(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataBSUE[0x2];                                      // 0x00B8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FSkillRating                                Skill;                                                     // 0x00BC(0x0008)
	unsigned char                                      UnknownDataAR7I[0x4];                                      // 0x00C4(0x0004) MISSED OFFSET
	TArray<struct FName>                               MapLikes;                                                  // 0x00C8(0x0010) (NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                               // 0x00D8(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.RPC_GetGenericDataAll_X.GetGenericDataAllData
// 0x0018
struct FGetGenericDataAllData
{
	struct FName                                       DataKey;                                                   // 0x0000(0x0008)
	struct FString                                     DataValue;                                                 // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.PsyNetService_DSReservation_X.PsyNetBeaconPlayerReservation
// 0x0040
struct FPsyNetBeaconPlayerReservation
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	class UUdpEncryptionKeys*                          Keys;                                                      // 0x0038(0x0008)

};
// ScriptStruct ProjectX.PsyNetService_DSReservation_X.PsyNetBeaconReservation
// 0x0028
struct FPsyNetBeaconReservation
{
	struct FString                                     ReservationID;                                             // 0x0000(0x0010) (NeedCtorLink)
	int                                                Playlist;                                                  // 0x0010(0x0004)
	unsigned char                                      IsBackfill : 1;                                            // 0x0014(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataB3ZI[0x2];                                      // 0x0014(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FPsyNetBeaconPlayerReservation>      Players;                                                   // 0x0018(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.ContentConfig_X.ContentPair
// 0x001C
struct FContentPair
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008)
	struct FString                                     Content;                                                   // 0x0008(0x0010) (NeedCtorLink)
	struct FEncryptedKeyIndex                          Index;                                                     // 0x0018(0x0004) (Transient)

};
// ScriptStruct ProjectX._Types_X.PlayerPermissionsList
// 0x0048
struct FPlayerPermissionsList
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	TArray<TEnumAsByte<EOnlinePlayerPermission>>       Permissions;                                               // 0x0038(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.OnlineMessageComponent_X.OnlineMessageHandler
// 0x0018
struct FOnlineMessageHandler
{
	class UClass*                                      MessageClass;                                              // 0x0000(0x0008)
	TArray<struct FScriptDelegate>                     Delegates;                                                 // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX._Types_X.PlayerBinding
// 0x002C
struct FPlayerBinding
{
	struct FName                                       Action;                                                    // 0x0000(0x0008) (DataBinding)
	struct FName                                       Key;                                                       // 0x0008(0x0008) (DataBinding)
	TEnumAsByte<EAxisSign>                             AxisSign;                                                  // 0x0010(0x0001) (DataBinding)
	TEnumAsByte<EButtonPressType>                      PressType;                                                 // 0x0011(0x0001) (DataBinding)
	unsigned char                                      UnknownData3ZRG[0x2];                                      // 0x0012(0x0002) MISSED OFFSET
	float                                              Speed;                                                     // 0x0014(0x0004) (DataBinding)
	unsigned char                                      bRequired : 1;                                             // 0x0018(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataUB6J[0x2];                                      // 0x0018(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<ERemappable>                           Remappable;                                                // 0x001C(0x0001)
	unsigned char                                      UnknownDataUI8E[0x3];                                      // 0x001D(0x0003) MISSED OFFSET
	float                                              PressedTime;                                               // 0x0020(0x0004) (Transient)
	float                                              ReleasedTime;                                              // 0x0024(0x0004) (Transient)
	unsigned char                                      UnknownDataO0Q2 : 32;                                      // 0x0028(0x0001)
	unsigned char                                      bTapped : 1;                                               // 0x0028(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataI8HR[0x2];                                      // 0x0028(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bToggled : 1;                                              // 0x0028(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataS77Z[0x2];                                      // 0x002C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX.RPC_GetPlayerPermissions_X.PlayerPermissionsReponse
// 0x0048
struct FPlayerPermissionsReponse
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	TArray<struct FName>                               Permissions;                                               // 0x0038(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.ColorPalette_X.ColorPosition
// 0x0008
struct FColorPosition
{
	int                                                Row;                                                       // 0x0000(0x0004)
	int                                                Column;                                                    // 0x0004(0x0004)

};
// ScriptStruct ProjectX.PlayerInput_X.KeyboardAxisBlendSettings
// 0x000C
struct FKeyboardAxisBlendSettings
{
	struct FName                                       Axis;                                                      // 0x0000(0x0008) (Edit)
	float                                              BlendTime;                                                 // 0x0008(0x0004) (Edit)

};
// ScriptStruct ProjectX._Types_X.ServerResult
// 0x00B0
struct FServerResult
{
	struct FString                                     Address;                                                   // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     ServerName;                                                // 0x0010(0x0010) (NeedCtorLink)
	struct U_Types_X_FCustomMatchSettings              Settings;                                                  // 0x0020(0x0090) (NeedCtorLink)

};
// ScriptStruct ProjectX._Types_X.BindingAction
// 0x0038
struct FBindingAction
{
	struct FName                                       Action;                                                    // 0x0000(0x0008) (DataBinding)
	struct FName                                       Category;                                                  // 0x0008(0x0008) (DataBinding)
	struct FName                                       Axis;                                                      // 0x0010(0x0008) (DataBinding)
	TEnumAsByte<EAxisSign>                             AxisSign;                                                  // 0x0018(0x0001) (DataBinding)
	unsigned char                                      UnknownData5HLG[0x7];                                      // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     Command;                                                   // 0x0020(0x0010) (NeedCtorLink)
	unsigned char                                      bDisableRemapping : 1;                                     // 0x0030(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataF7ZT[0x2];                                      // 0x0030(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Priority;                                                  // 0x0034(0x0004)

};
// ScriptStruct ProjectX.SetPlayerStorageResult_X.SetPlayerStorageResultItem
// 0x0010
struct FSetPlayerStorageResultItem
{
	struct FName                                       Category;                                                  // 0x0000(0x0008)
	int                                                Tick;                                                      // 0x0008(0x0004)
	unsigned char                                      bOutOfSync : 1;                                            // 0x000C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataJZB5[0x2];                                      // 0x000C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX.RPC_PlayerStorageSet_X.SetPlayerStorageRequestItem
// 0x0021
struct FSetPlayerStorageRequestItem
{
	struct FName                                       Category;                                                  // 0x0000(0x0008)
	int                                                Tick;                                                      // 0x0008(0x0004)
	int                                                Checksum;                                                  // 0x000C(0x0004)
	struct FString                                     Data;                                                      // 0x0010(0x0010) (NeedCtorLink)
	TEnumAsByte<EObjectEncoding>                       Encoding;                                                  // 0x0020(0x0001)

};
// ScriptStruct ProjectX.LensFlareComponent_X.LensFlareFloatParamCurve
// 0x0038
struct FLensFlareFloatParamCurve
{
	struct FName                                       MaterialParamName;                                         // 0x0000(0x0008) (Edit)
	int                                                MaterialParamIndex;                                        // 0x0008(0x0004) (Edit)
	unsigned char                                      UnknownDataLB4K[0x4];                                      // 0x000C(0x0004) MISSED OFFSET
	struct FRawDistributionFloat                       ValueOverTime;                                             // 0x0010(0x0028) (Edit, Component, NeedCtorLink)

};
// ScriptStruct ProjectX.EffectsMap_X.EffectsMapping
// 0x0010
struct FEffectsMapping
{
	class UPhysicalMaterial*                           PhysicalMaterial;                                          // 0x0000(0x0008) (Edit)
	class UParticleSystem*                             Particle;                                                  // 0x0008(0x0008) (Edit)

};
// ScriptStruct ProjectX.PlayerInput_X.GamepadDeadzoneSettings
// 0x0010
struct FGamepadDeadzoneSettings
{
	TEnumAsByte<EInputPlatformType>                    Type;                                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownDataZ8SW[0x3];                                      // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       Key;                                                       // 0x0004(0x0008) (Edit)
	float                                              Deadzone;                                                  // 0x000C(0x0004) (Edit)

};
// ScriptStruct ProjectX.PlayerInput_X.RawAxisValue
// 0x0010
struct FRawAxisValue
{
	float                                              Value;                                                     // 0x0000(0x0004)
	unsigned char                                      UnknownDataX5GJ[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	unsigned char                                      UnknownDataRS4T[0x8];                                      // 0x0004(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.PlayerInput_X.RawAxisValue.LastFrameChanged

};
// ScriptStruct ProjectX.OnlineGameLeaderboards_X.LeaderboardData
// 0x0070
struct FLeaderboardData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038) (DataBinding)
	struct FString                                     UnSanitizedPlayerName;                                     // 0x0038(0x0010) (NeedCtorLink)
	struct FString                                     PlayerName;                                                // 0x0048(0x0010) (NeedCtorLink, DataBinding)
	unsigned char                                      bPsyNetUser : 1;                                           // 0x0058(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataCRTP[0x2];                                      // 0x0058(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Rank;                                                      // 0x005C(0x0004) (DataBinding)
	int                                                Value;                                                     // 0x0060(0x0004) (DataBinding)
	float                                              MMR;                                                       // 0x0064(0x0004) (DataBinding)
	int                                                Division;                                                  // 0x0068(0x0004) (DataBinding)
	unsigned char                                      UnknownData6LDG : 32;                                      // 0x006C(0x0001)
	unsigned char                                      bIsPrimaryPlayer : 1;                                      // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData6MHA[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX._Types_X.ClubMember
// 0x0048
struct FClubMember
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	struct FString                                     PlayerName;                                                // 0x0038(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.OnlineClubProvider_X.PlayerClubSyncResult
// 0x0040
struct FPlayerClubSyncResult
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	class UError*                                      Error;                                                     // 0x0038(0x0008)

};
// ScriptStruct ProjectX.OnlinePlayerStorageQueue_X.StorageMaxSize
// 0x000C
struct FStorageMaxSize
{
	struct FName                                       Category;                                                  // 0x0000(0x0008)
	int                                                MaxSizeBytes;                                              // 0x0008(0x0004)

};
// ScriptStruct ProjectX.Parties_X.PsyNetPartyInfo
// 0x0060
struct FPsyNetPartyInfo
{
	struct FString                                     PartyID;                                                   // 0x0000(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownDataYQUN[0x8];                                      // 0x0010(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.Parties_X.PsyNetPartyInfo.CreatedAt
	struct FUniqueNetId                                CreatedByUserId;                                           // 0x0018(0x0038)
	struct FString                                     JoinID;                                                    // 0x0050(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.PostProcessManager_X.PPEffectDefaults
// 0x000C
struct FPPEffectDefaults
{
	struct FName                                       EffectName;                                                // 0x0000(0x0008) (Edit, Const)
	unsigned char                                      bEnabled : 1;                                              // 0x0008(0x0001) BIT_FIELD (Edit, Const)
	unsigned char                                      UnknownDataPCWR[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX.PostProcessManager_X.PPPersistentEffectDefaults
// 0x001C
struct FPPPersistentEffectDefaults
{
	struct FName                                       EffectName;                                                // 0x0000(0x0008) (Edit, Const)
	struct FName                                       MaterialEffectName;                                        // 0x0008(0x0008) (Edit, Const)
	struct FName                                       MaterialParamName;                                         // 0x0010(0x0008) (Edit, Const)
	float                                              DefaultValue;                                              // 0x0018(0x0004) (Edit, Const)

};
// ScriptStruct ProjectX.PostProcessManager_X.PPChainInfo
// 0x0010
struct FPPChainInfo
{
	struct FName                                       ChainName;                                                 // 0x0000(0x0008) (Edit)
	class UPostProcessChain*                           ChainReference;                                            // 0x0008(0x0008) (Edit)

};
// ScriptStruct ProjectX.PostProcessManager_X.PostProcessOverride
// 0x0184
struct FPostProcessOverride
{
	struct FPostProcessSettings                        Settings;                                                  // 0x0000(0x0168) (NeedCtorLink)
	class APostProcessVolume*                          Volume;                                                    // 0x0168(0x0008)
	struct FName                                       Id;                                                        // 0x0170(0x0008)
	float                                              BlendInTime;                                               // 0x0178(0x0004)
	float                                              BlendOutTime;                                              // 0x017C(0x0004)
	unsigned char                                      bEnabled : 1;                                              // 0x0180(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataI9JS[0x2];                                      // 0x0180(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bDefaultEnabled : 1;                                       // 0x0180(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataGFYZ[0x2];                                      // 0x0184(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX.OnlinePlayerStorageQueue_X.PendingStorage
// 0x0014
struct FPendingStorage
{
	class UObject*                                     Data;                                                      // 0x0000(0x0008)
	class UClass*                                      DataClass;                                                 // 0x0008(0x0008)
	int                                                Tick;                                                      // 0x0010(0x0004)

};
// ScriptStruct ProjectX.OnlineGameLeaderboards_X.CachedLeaderboardData
// 0x0020
struct FCachedLeaderboardData
{
	struct FName                                       LeaderboardId;                                             // 0x0000(0x0008) (Transient)
	TArray<struct FLeaderboardData>                    DataList;                                                  // 0x0008(0x0010) (Transient, NeedCtorLink)
	unsigned char                                      UnknownDataONG9[0x8];                                      // 0x0018(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameLeaderboards_X.CachedLeaderboardData.LastLeaderboardSyncTime

};
// ScriptStruct ProjectX.SystemMetrics_X.CpuMetrics
// 0x0040
struct FCpuMetrics
{
	struct FString                                     Type;                                                      // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Desc;                                                      // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     Cores;                                                     // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     Threads;                                                   // 0x0030(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.SystemMetrics_X.MemoryMetrics
// 0x0004
struct FMemoryMetrics
{
	float                                              Physical;                                                  // 0x0000(0x0004)

};
// ScriptStruct ProjectX.SystemMetrics_X.VideoCardMetrics
// 0x0014
struct FVideoCardMetrics
{
	struct FString                                     Type;                                                      // 0x0000(0x0010) (NeedCtorLink)
	int                                                RAM;                                                       // 0x0010(0x0004)

};
// ScriptStruct ProjectX.SystemMetrics_X.NetworkAdapterMetrics
// 0x0010
struct FNetworkAdapterMetrics
{
	TArray<struct FString>                             Types;                                                     // 0x0000(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX._Types_X.MetricsEvent
// 0x0060
struct FMetricsEvent
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	float                                              TimeSeconds;                                               // 0x0038(0x0004)
	int                                                Version;                                                   // 0x003C(0x0004)
	struct FString                                     EventName;                                                 // 0x0040(0x0010) (NeedCtorLink)
	struct FString                                     EventData;                                                 // 0x0050(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.SystemMetrics_X.OSMetrics
// 0x0020
struct FOSMetrics
{
	struct FString                                     Type;                                                      // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Bits;                                                      // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.RPC_GetLeaderboardBase_X.GetLeaderboardBaseData
// 0x0050
struct FGetLeaderboardBaseData
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                  // 0x0010(0x0038)
	int                                                Value;                                                     // 0x0048(0x0004)
	float                                              MMR;                                                       // 0x004C(0x0004)

};
// ScriptStruct ProjectX.RPC_GetLeaderboardBase_X.GetLeaderboardPlatformBaseData
// 0x0020
struct FGetLeaderboardPlatformBaseData
{
	struct FString                                     Platform;                                                  // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FGetLeaderboardBaseData>             Players;                                                   // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.RPCQueue_X.PendingRPC
// 0x0020
struct FPendingRPC
{
	class URPC_X*                                      RPC;                                                       // 0x0000(0x0008)
	int                                                UniqueId;                                                  // 0x0008(0x0004)
	float                                              CreationTime;                                              // 0x000C(0x0004)
	int                                                Failures;                                                  // 0x0010(0x0004)
	float                                              NextSendTime;                                              // 0x0014(0x0004)
	class UError*                                      PendingError;                                              // 0x0018(0x0008)

};
// ScriptStruct ProjectX.OnlineGameParty_X.PlaylistRestrictionPlayer
// 0x003C
struct FPlaylistRestrictionPlayer
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	int                                                Tier;                                                      // 0x0038(0x0004)

};
// ScriptStruct ProjectX.RPCQueue_X.RPCError
// 0x0020
struct FRPCError
{
	struct FString                                     Type;                                                      // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Message;                                                   // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.RPCQueue_X.RPCResponse
// 0x0030
struct FRPCResponse
{
	int                                                Id;                                                        // 0x0000(0x0004)
	unsigned char                                      UnknownDataOOL4[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FRPCError                                   Error;                                                     // 0x0008(0x0020) (NeedCtorLink)
	class URPC_X*                                      Result;                                                    // 0x0028(0x0008)

};
// ScriptStruct ProjectX.RPC_GetPopulation_X.GetPopulationData
// 0x0008
struct FGetPopulationData
{
	int                                                Playlist;                                                  // 0x0000(0x0004)
	int                                                PlayerCount;                                               // 0x0004(0x0004)

};
// ScriptStruct ProjectX.PartyMessageQueue_X.PendingMessage
// 0x0020
struct FPendingMessage
{
	struct FUniqueLobbyId                              LobbyId;                                                   // 0x0000(0x0010)
	TArray<struct FString>                             Messages;                                                  // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.RPC_GetGameServerPingList_X.GetGameServerPingListData
// 0x0048
struct FGetGameServerPingListData
{
	struct FString                                     Region;                                                    // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     IP;                                                        // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     Host;                                                      // 0x0020(0x0010) (NeedCtorLink)
	int                                                Port;                                                      // 0x0030(0x0004)
	unsigned char                                      UnknownDataHVMX[0x4];                                      // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     Address;                                                   // 0x0038(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.OnlinePlayerStorageManifest_X.StorageMetadata
// 0x000D
struct UOnlinePlayerStorageManifest_X_FStorageMetadata
{
	struct FName                                       Category;                                                  // 0x0000(0x0008)
	int                                                Checksum;                                                  // 0x0008(0x0004)
	TEnumAsByte<EObjectEncoding>                       Encoding;                                                  // 0x000C(0x0001)

};
// ScriptStruct ProjectX.OnlinePlayerStorageSync_X.OnlinePlayerStorageSyncResult
// 0x001D
struct FOnlinePlayerStorageSyncResult
{
	class UClass*                                      DataClass;                                                 // 0x0000(0x0008)
	class UObject*                                     RemoteData;                                                // 0x0008(0x0008)
	int                                                ServerTick;                                                // 0x0010(0x0004)
	int                                                Checksum;                                                  // 0x0014(0x0004)
	unsigned char                                      bChecksumMatch : 1;                                        // 0x0018(0x0001) BIT_FIELD
	unsigned char                                      UnknownData1U0Z[0x2];                                      // 0x0018(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<EObjectEncoding>                       Encoding;                                                  // 0x001C(0x0001)

};
// ScriptStruct ProjectX.OnlinePlayerStorageSync_X.OnlinePlayerStorageSyncRequest
// 0x000D
struct FOnlinePlayerStorageSyncRequest
{
	class UObject*                                     DataObj;                                                   // 0x0000(0x0008)
	int                                                ClientTick;                                                // 0x0008(0x0004)
	TEnumAsByte<EObjectEncoding>                       Encoding;                                                  // 0x000C(0x0001)

};
// ScriptStruct ProjectX.RPC_PlayerStorageGet_X.GetPlayerStorageRequestItem
// 0x0018
struct FGetPlayerStorageRequestItem
{
	struct FName                                       Category;                                                  // 0x0000(0x0008)
	int                                                Tick;                                                      // 0x0008(0x0004)
	int                                                Checksum;                                                  // 0x000C(0x0004)
	class UObject*                                     LocalRef;                                                  // 0x0010(0x0008) (Transient)

};
// ScriptStruct ProjectX._Types_X.CachedRegionPing
// 0x000C
struct FCachedRegionPing
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)
	float                                              Ping;                                                      // 0x0008(0x0004)

};
// ScriptStruct ProjectX.OnlineGameReservations_AssignTeamsByParty_X.PartyByTeam
// 0x0040
struct FPartyByTeam
{
	struct FUniqueNetId                                PartyID;                                                   // 0x0000(0x0038)
	unsigned char                                      Team;                                                      // 0x0038(0x0001)
	unsigned char                                      UnknownDataS3NV[0x3];                                      // 0x0039(0x0003) MISSED OFFSET
	int                                                Size;                                                      // 0x003C(0x0004)

};
// ScriptStruct ProjectX.PsyNetServiceSubscriptions_X.ServiceSubscription
// 0x0020
struct FServiceSubscription
{
	class UClass*                                      Class;                                                     // 0x0000(0x0008)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataJZ8O[0xC];                                      // 0x0008(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX.OnlineGameReservations_X.PendingReservation
// 0x0018
struct FPendingReservation
{
	TScriptInterface<class UIReservationConnection_X>  Connection;                                                // 0x0000(0x0010)
	class UAddReservationMessage_X*                    Message;                                                   // 0x0010(0x0008)

};
// ScriptStruct ProjectX.RandomStream_X.RandomStream_Mirror
// 0x0004
struct FRandomStream_Mirror
{
	int                                                Seed;                                                      // 0x0000(0x0004) (Edit, Native)

};
// ScriptStruct ProjectX._Types_X.RenderProfile
// 0x0028
struct FRenderProfile
{
	float                                              GameThreadTime;                                            // 0x0000(0x0004)
	float                                              RenderThreadTime;                                          // 0x0004(0x0004)
	float                                              GPUTime;                                                   // 0x0008(0x0004)
	float                                              FrameTime;                                                 // 0x000C(0x0004)
	float                                              FPS;                                                       // 0x0010(0x0004)
	float                                              AccumGameThreadTime;                                       // 0x0014(0x0004)
	float                                              AccumRenderThreadTime;                                     // 0x0018(0x0004)
	float                                              AccumGPUTime;                                              // 0x001C(0x0004)
	float                                              AccumFrameTime;                                            // 0x0020(0x0004)
	int                                                NumSamples;                                                // 0x0024(0x0004)

};
// ScriptStruct ProjectX.RenderProfiler_X.PrimitiveComponentProfile
// 0x0070
struct FPrimitiveComponentProfile
{
	struct FString                                     ContentName;                                               // 0x0000(0x0010) (NeedCtorLink)
	TArray<class UPrimitiveComponent*>                 Components;                                                // 0x0010(0x0010) (ExportObject, Component, NeedCtorLink, EditInline)
	struct FRenderProfile                              InclusiveProfile;                                          // 0x0020(0x0028)
	struct FRenderProfile                              ExclusiveProfile;                                          // 0x0048(0x0028)

};
// ScriptStruct ProjectX.RPC_Test_X.RPCTestItem
// 0x0068
struct FRPCTestItem
{
	unsigned char                                      BoolItem : 1;                                              // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataJ597[0x2];                                      // 0x0000(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                IntItem;                                                   // 0x0004(0x0004)
	float                                              FloatItem;                                                 // 0x0008(0x0004)
	unsigned char                                      UnknownDataL5LP[0x4];                                      // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     StringItem;                                                // 0x0010(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                PlayerItem;                                                // 0x0020(0x0038)
	TArray<struct FString>                             StringItems;                                               // 0x0058(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.RPC_Test_X.RPCTestParam
// 0x0078
struct FRPCTestParam
{
	struct FRPCTestItem                                TestItem;                                                  // 0x0000(0x0068) (NeedCtorLink)
	TArray<struct FRPCTestItem>                        TestItems;                                                 // 0x0068(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.RPC_GetLeaderboardRankForUsersBase_X.GetLeaderboardRankForUserData
// 0x0050
struct FGetLeaderboardRankForUserData
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                  // 0x0010(0x0038)
	int                                                Value;                                                     // 0x0048(0x0004)
	float                                              MMR;                                                       // 0x004C(0x0004)

};
// ScriptStruct ProjectX._Types_X.ActiveServerData
// 0x00A0
struct FActiveServerData
{
	struct FServerReservationData                      Reservation;                                               // 0x0000(0x0070) (NeedCtorLink)
	struct FString                                     BeaconURL;                                                 // 0x0070(0x0010) (NeedCtorLink)
	struct FString                                     PingURL;                                                   // 0x0080(0x0010) (NeedCtorLink)
	struct FString                                     GameURL;                                                   // 0x0090(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX._Types_X.ReservationPlayerData
// 0x0090
struct FReservationPlayerData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	struct FString                                     PlayerName;                                                // 0x0038(0x0010) (NeedCtorLink)
	float                                              SkillMu;                                                   // 0x0048(0x0004)
	float                                              SkillSigma;                                                // 0x004C(0x0004)
	int                                                Tier;                                                      // 0x0050(0x0004)
	unsigned char                                      bRemotePlayer : 1;                                         // 0x0054(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataAC84[0x2];                                      // 0x0054(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<int>                                        Loadout;                                                   // 0x0058(0x0010) (NeedCtorLink)
	TArray<struct FName>                               MapLikes;                                                  // 0x0068(0x0010) (NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                               // 0x0078(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData00E8[0x8];                                      // 0x0088(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX._Types_X.ReservationPlayerData.ClubID

};
// ScriptStruct ProjectX.RPC_CustomGameServerGet_X.FindPrivateServerResult
// 0x00C4
struct FFindPrivateServerResult
{
	struct FString                                     IP;                                                        // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     ServerName;                                                // 0x0010(0x0010) (NeedCtorLink)
	struct U_Types_X_FCustomMatchSettings              Settings;                                                  // 0x0020(0x0090) (NeedCtorLink)
	struct FString                                     Host;                                                      // 0x00B0(0x0010) (NeedCtorLink)
	int                                                Port;                                                      // 0x00C0(0x0004)

};
// ScriptStruct ProjectX.LocalClubData_X.PlayerClubPair
// 0x0040
struct FPlayerClubPair
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	unsigned char                                      UnknownDataCAS9[0x8];                                      // 0x0038(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.LocalClubData_X.PlayerClubPair.ClubID

};
// ScriptStruct ProjectX._Types_X.CrossplayGroup
// 0x0010
struct FCrossplayGroup
{
	TArray<TEnumAsByte<EOnlinePlatform>>               Platforms;                                                 // 0x0000(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX._Types_X.UpdatedPlayerSkillRating
// 0x0010 (0x0060 - 0x0050)
struct FUpdatedPlayerSkillRating : public FPlayerSkillRating
{
	float                                              PrevMu;                                                    // 0x0050(0x0004)
	float                                              PrevSigma;                                                 // 0x0054(0x0004)
	int                                                PrevTier;                                                  // 0x0058(0x0004)
	int                                                PrevDivision;                                              // 0x005C(0x0004)

};
// ScriptStruct ProjectX.MatchPlayerData_X.MatchSkillUpdate
// 0x0020
struct FMatchSkillUpdate
{
	float                                              Mu;                                                        // 0x0000(0x0004)
	float                                              Sigma;                                                     // 0x0004(0x0004)
	int                                                Tier;                                                      // 0x0008(0x0004)
	int                                                Division;                                                  // 0x000C(0x0004)
	float                                              PrevMu;                                                    // 0x0010(0x0004)
	float                                              PrevSigma;                                                 // 0x0014(0x0004)
	int                                                PrevTier;                                                  // 0x0018(0x0004)
	int                                                PrevDivision;                                              // 0x001C(0x0004)

};
// ScriptStruct ProjectX.OnlineGameReservations_X.TeamPairHistory
// 0x0074
struct FTeamPairHistory
{
	struct FUniqueNetId                                PartyA;                                                    // 0x0000(0x0038)
	struct FUniqueNetId                                PartyB;                                                    // 0x0038(0x0038)
	int                                                Count;                                                     // 0x0070(0x0004)

};
// ScriptStruct ProjectX.ParameterDispenser_X.NameParamPair
// 0x0010
struct FNameParamPair
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (Edit)
	struct FName                                       Value;                                                     // 0x0008(0x0008) (Edit)

};
// ScriptStruct ProjectX.ParameterDispenser_X.FloatParamPair
// 0x000C
struct FFloatParamPair
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (Edit)
	float                                              Value;                                                     // 0x0008(0x0004) (Edit)

};
// ScriptStruct ProjectX.ParameterDispenser_X.VectorParamPair
// 0x0014
struct FVectorParamPair
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (Edit)
	struct FVector                                     Value;                                                     // 0x0008(0x000C) (Edit)

};
// ScriptStruct ProjectX.ParameterDispenser_X.ColorParamPair
// 0x0018
struct FColorParamPair
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (Edit)
	struct FLinearColor                                Value;                                                     // 0x0008(0x0010) (Edit)

};
// ScriptStruct ProjectX.ParameterDispenser_X.ActorParamPair
// 0x0010
struct FActorParamPair
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (Edit)
	class AActor*                                      Value;                                                     // 0x0008(0x0008) (Edit)

};
// ScriptStruct ProjectX._Types_X.RPCPlayerRewardLevelData
// 0x0038 (0x0040 - 0x0008)
struct FRPCPlayerRewardLevelData : public FRPCRewardLevelData
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0008(0x0038)

};
// ScriptStruct ProjectX._Types_X.PlayerTitleData
// 0x0028
struct FPlayerTitleData
{
	struct FName                                       Id;                                                        // 0x0000(0x0008) (DataBinding)
	struct FString                                     Text;                                                      // 0x0008(0x0010) (NeedCtorLink, DataBinding)
	struct FName                                       Category;                                                  // 0x0018(0x0008)
	struct FColor                                      Color;                                                     // 0x0020(0x0004) (DataBinding)
	struct FColor                                      GlowColor;                                                 // 0x0024(0x0004) (DataBinding)

};
// ScriptStruct ProjectX._Types_X.PlayerTitleCategory
// 0x0028
struct FPlayerTitleCategory
{
	struct FName                                       Id;                                                        // 0x0000(0x0008)
	struct FString                                     Color;                                                     // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     GlowColor;                                                 // 0x0018(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.OnlineGameBlog_X.MotDMessage
// 0x0018
struct FMotDMessage
{
	struct FName                                       MessageTag;                                                // 0x0000(0x0008)
	struct FString                                     Message;                                                   // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.OnlineGameSkill_X.SkillSyncRequest
// 0x0058
struct FSkillSyncRequest
{
	class URPC_GetPlayerSkill_X*                       RPC;                                                       // 0x0000(0x0008)
	struct FUniqueNetId                                PlayerID;                                                  // 0x0008(0x0038)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataXA8T[0xC];                                      // 0x0040(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX._Types_X.SkillMatchPlayer
// 0x004C
struct FSkillMatchPlayer
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	float                                              PctTimePlayed;                                             // 0x0038(0x0004)
	unsigned char                                      bQuitter : 1;                                              // 0x003C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataN2QZ[0x2];                                      // 0x003C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                PartyID;                                                   // 0x0040(0x0004)
	int                                                Score;                                                     // 0x0044(0x0004)
	int                                                Team;                                                      // 0x0048(0x0004)

};
// ScriptStruct ProjectX._Types_X.SkillMatchData
// 0x001C
struct FSkillMatchData
{
	unsigned char                                      UnknownDataPAOC[0x8];                                      // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX._Types_X.SkillMatchData.serverId
	int                                                Playlist;                                                  // 0x0008(0x0004)
	int                                                WinningTeam;                                               // 0x000C(0x0004)
	int                                                Team0Score;                                                // 0x0010(0x0004)
	int                                                Team1Score;                                                // 0x0014(0x0004)
	unsigned char                                      bOverTime : 1;                                             // 0x0018(0x0001) BIT_FIELD
	unsigned char                                      UnknownData955T[0x2];                                      // 0x0018(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX._Types_X.CustomAnimSettings
// 0x0034
struct FCustomAnimSettings
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008) (Edit)
	unsigned char                                      bLoop : 1;                                                 // 0x0008(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataWVEH[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              BlendInTime;                                               // 0x000C(0x0004) (Edit)
	float                                              BlendOutTime;                                              // 0x0010(0x0004) (Edit)
	float                                              StartTime;                                                 // 0x0014(0x0004) (Edit)
	float                                              EndTime;                                                   // 0x0018(0x0004) (Edit)
	float                                              Rate;                                                      // 0x001C(0x0004) (Edit)
	TEnumAsByte<ERootMotionMode>                       RootMotionMode;                                            // 0x0020(0x0001) (Edit)
	TEnumAsByte<ERootBoneAxis>                         RootBoneAxis;                                              // 0x0021(0x0001) (Edit)
	TEnumAsByte<ERootMotionRotationMode>               RootMotionRotationMode;                                    // 0x0022(0x0001) (Edit)
	TEnumAsByte<ERootRotationOption>                   RootBoneRotationAxis;                                      // 0x0023(0x0001) (Edit)
	struct FVector                                     RootMotionAccelScale;                                      // 0x0024(0x000C) (Edit)
	unsigned char                                      UnknownDataEH05 : 32;                                      // 0x0030(0x0001)
	unsigned char                                      bOverride : 1;                                             // 0x0030(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataYRMR[0x2];                                      // 0x0030(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bMirrored : 1;                                             // 0x0030(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataZGM7[0x2];                                      // 0x0034(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX._SharedHelpers.Orientation
// 0x0018
struct FOrientation
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)

};
// ScriptStruct ProjectX._Types_X.MapPrefs
// 0x0020
struct U_Types_X_FMapPrefs
{
	TArray<struct FName>                               Likes;                                                     // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FName>                               Dislikes;                                                  // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX._Types_X.DownloadedImage
// 0x0018
struct FDownloadedImage
{
	struct FString                                     URL;                                                       // 0x0000(0x0010) (NeedCtorLink)
	class UTexture2DDynamic*                           Texture;                                                   // 0x0010(0x0008)

};
// ScriptStruct ProjectX._Types_X.BumpAngleCheckConfig
// 0x0014
struct FBumpAngleCheckConfig
{
	unsigned char                                      bEnabled : 1;                                              // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataULD0[0x2];                                      // 0x0000(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              BumpAngleYaw;                                              // 0x0004(0x0004)
	float                                              BumpAnglePitch;                                            // 0x0008(0x0004)
	float                                              DemolishAngleYaw;                                          // 0x000C(0x0004)
	float                                              DemolishAnglePitch;                                        // 0x0010(0x0004)

};
// ScriptStruct ProjectX._Types_X.BumpAngleCurveCheckConfig
// 0x0068
struct FBumpAngleCurveCheckConfig
{
	unsigned char                                      bEnabled : 1;                                              // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataR9LU[0x2];                                      // 0x0000(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataXR4W[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FInterpCurveFloat                           BumpAngleCurveYaw;                                         // 0x0008(0x0018) (NeedCtorLink)
	struct FInterpCurveFloat                           BumpAngleCurvePitch;                                       // 0x0020(0x0018) (NeedCtorLink)
	struct FInterpCurveFloat                           DemolishAngleCurveYaw;                                     // 0x0038(0x0018) (NeedCtorLink)
	struct FInterpCurveFloat                           DemolishAngleCurvePitch;                                   // 0x0050(0x0018) (NeedCtorLink)

};
// ScriptStruct ProjectX._Types_X.CarInteractionConfig
// 0x00B8
struct FCarInteractionConfig
{
	float                                              PushFactor;                                                // 0x0000(0x0004)
	float                                              BumperPushFactor;                                          // 0x0004(0x0004)
	float                                              ZPushFactor;                                               // 0x0008(0x0004)
	float                                              BumpInterval;                                              // 0x000C(0x0004)
	struct FBumpAngleCheckConfig                       COMAngleCheck;                                             // 0x0010(0x0014)
	struct FBumpAngleCheckConfig                       VictimHitAngleCheck;                                       // 0x0024(0x0014)
	struct FBumpAngleCheckConfig                       AttackerHitAngleCheck;                                     // 0x0038(0x0014)
	unsigned char                                      UnknownDataIPOO[0x4];                                      // 0x004C(0x0004) MISSED OFFSET
	struct FBumpAngleCurveCheckConfig                  VictimHitAngleCurveCheck;                                  // 0x0050(0x0068) (NeedCtorLink)

};
// ScriptStruct ProjectX._Types_X.SuperSonicConfig
// 0x000C
struct FSuperSonicConfig
{
	float                                              Speed;                                                     // 0x0000(0x0004)
	float                                              TurnoffSpeedBuffer;                                        // 0x0004(0x0004)
	float                                              TurnoffTime;                                               // 0x0008(0x0004)

};
// ScriptStruct ProjectX._Types_X.SkillMatchPartyRating
// 0x0004 (0x001C - 0x0018)
struct FSkillMatchPartyRating : public FTierSkillRating
{
	int                                                PartyID;                                                   // 0x0018(0x0004)

};
// ScriptStruct ProjectX._Types_X.SkillMatchParty
// 0x0020
struct FSkillMatchParty
{
	int                                                PartyID;                                                   // 0x0000(0x0004)
	float                                              PctTimePlayed;                                             // 0x0004(0x0004)
	unsigned char                                      bQuitter : 1;                                              // 0x0008(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataN9W3[0x2];                                      // 0x0008(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataF8JC[0x4];                                      // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FUniqueNetId>                        Players;                                                   // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX._Types_X.LastTimePeriodLeaderData
// 0x0024
struct FLastTimePeriodLeaderData
{
	struct FString                                     LeaderboardId;                                             // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FString>                             PlayerNames;                                               // 0x0010(0x0010) (NeedCtorLink)
	int                                                Value;                                                     // 0x0020(0x0004)

};
// ScriptStruct ProjectX._Types_X.GamePlaylist
// 0x0028
struct FGamePlaylist
{
	struct FString                                     FriendlyName;                                              // 0x0000(0x0010) (NeedCtorLink)
	struct FName                                       Id;                                                        // 0x0010(0x0008)
	TArray<struct FName>                               GameTags;                                                  // 0x0018(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX._Types_X.ReplicatedRBStateNoQuat
// 0x0038
struct FReplicatedRBStateNoQuat
{
	float                                              QuatX;                                                     // 0x0000(0x0004)
	float                                              QuatY;                                                     // 0x0004(0x0004)
	float                                              QuatZ;                                                     // 0x0008(0x0004)
	float                                              QuatW;                                                     // 0x000C(0x0004)
	struct FVector                                     Location;                                                  // 0x0010(0x000C)
	struct FVector                                     LinearVelocity;                                            // 0x001C(0x000C)
	struct FVector                                     AngularVelocity;                                           // 0x0028(0x000C)
	unsigned char                                      bSleeping : 1;                                             // 0x0034(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataDAC9[0x2];                                      // 0x0034(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX._Types_X.ReplicatedRBState
// 0x003C
struct FReplicatedRBState
{
	struct FQuat                                       Quaternion;                                                // 0x0000(0x0010)
	struct FVector                                     Location;                                                  // 0x0010(0x000C)
	struct FVector                                     LinearVelocity;                                            // 0x001C(0x000C)
	struct FVector                                     AngularVelocity;                                           // 0x0028(0x000C)
	float                                              Time;                                                      // 0x0034(0x0004)
	unsigned char                                      bSleeping : 1;                                             // 0x0038(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataKMA5[0x2];                                      // 0x0038(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bNewData : 1;                                              // 0x0038(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataWR46[0x2];                                      // 0x003C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX._Types_X.ProcedureKeyValuePair
// 0x0018
struct FProcedureKeyValuePair
{
	struct FName                                       Key;                                                       // 0x0000(0x0008)
	struct FString                                     Value;                                                     // 0x0008(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX._Types_X.ProcedureResult
// 0x0010
struct FProcedureResult
{
	TArray<struct FProcedureKeyValuePair>              KVPairs;                                                   // 0x0000(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX._Types_X.UITimer
// 0x000C
struct FUITimer
{
	struct FName                                       Event;                                                     // 0x0000(0x0008) (Edit)
	float                                              Delay;                                                     // 0x0008(0x0004) (Edit)

};
// ScriptStruct ProjectX._Types_X.UIAnimValue
// 0x0018
struct FUIAnimValue
{
	float                                              X;                                                         // 0x0000(0x0004)
	float                                              Y;                                                         // 0x0004(0x0004)
	float                                              R;                                                         // 0x0008(0x0004)
	float                                              G;                                                         // 0x000C(0x0004)
	float                                              B;                                                         // 0x0010(0x0004)
	float                                              A;                                                         // 0x0014(0x0004)

};
// ScriptStruct ProjectX._Types_X.UIWidgetMatrix
// 0x0034
struct FUIWidgetMatrix
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C)
	struct FVector                                     Size;                                                      // 0x000C(0x000C)
	struct FVector                                     Scale;                                                     // 0x0018(0x000C)
	struct FLinearColor                                Tint;                                                      // 0x0024(0x0010)

};
// ScriptStruct ProjectX._Types_X.Ray
// 0x0018
struct FRay
{
	struct FVector                                     Origin;                                                    // 0x0000(0x000C)
	struct FVector                                     Dir;                                                       // 0x000C(0x000C)

};
// ScriptStruct ProjectX._Types_X.KeyHandler
// 0x0020
struct FKeyHandler
{
	struct FName                                       Key;                                                       // 0x0000(0x0008)
	struct FScriptDelegate                             Handler;                                                   // 0x0008(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData1RF1[0xC];                                      // 0x0008(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX._Types_X.PlaylistTierSkillRating
// 0x0004 (0x001C - 0x0018)
struct FPlaylistTierSkillRating : public FTierSkillRating
{
	int                                                Playlist;                                                  // 0x0018(0x0004)

};
// ScriptStruct ProjectX.AddReservationMessagePublic_X.OnlinePlayerMapPrefs
// 0x0058
struct FOnlinePlayerMapPrefs
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	TArray<struct FName>                               MapLikes;                                                  // 0x0038(0x0010) (NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                               // 0x0048(0x0010) (NeedCtorLink)

};
// ScriptStruct ProjectX.BugReport_X.BugReportUploadTask
// 0x00A0
struct FBugReportUploadTask
{
	struct FFileUploadData                             Data;                                                      // 0x0000(0x0040) (NeedCtorLink)
	struct FBugReportSystemData                        SystemData;                                                // 0x0040(0x0038) (NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                               // 0x0078(0x0008)
	struct FString                                     TaskName;                                                  // 0x0080(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     Error;                                                     // 0x0090(0x0010) (AlwaysInit, NeedCtorLink)

};
// ScriptStruct ProjectX.CameraStateBlender_X.CameraTransition
// 0x004C
struct FCameraTransition
{
	class UCameraState_X*                              CameraState;                                               // 0x0000(0x0008)
	struct FViewTargetTransitionParams                 BlendParams;                                               // 0x0008(0x0010)
	float                                              RemainingTime;                                             // 0x0018(0x0004)
	struct FCameraOrientation                          SnapshotPOV;                                               // 0x001C(0x002C)
	unsigned char                                      bStarted : 1;                                              // 0x0048(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataZNAB[0x2];                                      // 0x0048(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX.CheatManager_X.TestStructEvent
// 0x0018
struct FTestStructEvent
{
	struct FScriptDelegate                             Callback;                                                  // 0x0000(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData1U7U[0xC];                                      // 0x0000(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct ProjectX.EngineShare_X.DynamicallyLoadedPackage
// 0x0020
struct FDynamicallyLoadedPackage
{
	struct FString                                     Tag;                                                       // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     PackageName;                                               // 0x0010(0x0010) (NeedCtorLink)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
