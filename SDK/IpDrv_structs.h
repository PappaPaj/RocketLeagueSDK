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

#define CONST_PLAYER_MATCH                                       0
#define CONST_RANKED_MATCH                                       1
#define CONST_REC_MATCH                                          2
#define CONST_PRIVATE_MATCH                                      3
#define CONST_RANKEDPROVIDERTAG                                  "PlaylistsRanked"
#define CONST_UNRANKEDPROVIDERTAG                                "PlaylistsUnranked"
#define CONST_RECMODEPROVIDERTAG                                 "PlaylistsRecMode"
#define CONST_PRIVATEPROVIDERTAG                                 "PlaylistsPrivate"
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum IpDrv.OnlineTitleFileDownloadBase.EMcpFileCompressionType
enum class EMcpFileCompressionType : uint8_t
{
	MFCT_NONE                      = 0,
	MFCT_ZLIB                      = 1,
	MFCT_MAX                       = 2,

};

// Enum IpDrv.OnlineEventsInterfaceMcp.EEventUploadType
enum class EEventUploadType : uint8_t
{
	EUT_GenericStats               = 0,
	EUT_ProfileData                = 1,
	EUT_MatchmakingData            = 2,
	EUT_PlaylistPopulation         = 3,
	EUT_MAX                        = 4,

};

// Enum IpDrv.PartyBeacon.EReservationPacketType
enum class EReservationPacketType : uint8_t
{
	RPT_UnknownPacketType          = 0,
	RPT_ClientReservationRequest   = 1,
	RPT_ClientReservationUpdateRequest = 2,
	RPT_ClientCancellationRequest  = 3,
	RPT_HostReservationResponse    = 4,
	RPT_HostReservationCountUpdate = 5,
	RPT_HostTravelRequest          = 6,
	RPT_HostIsReady                = 7,
	RPT_HostHasCancelled           = 8,
	RPT_Heartbeat                  = 9,
	RPT_MAX                        = 10,

};

// Enum IpDrv.PartyBeacon.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	PRR_GeneralError               = 0,
	PRR_PartyLimitReached          = 1,
	PRR_IncorrectPlayerCount       = 2,
	PRR_RequestTimedOut            = 3,
	PRR_ReservationDuplicate       = 4,
	PRR_ReservationNotFound        = 5,
	PRR_ReservationAccepted        = 6,
	PRR_ReservationDenied          = 7,
	PRR_MAX                        = 8,

};

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientRequest
enum class EPartyBeaconClientRequest : uint8_t
{
	PBClientRequest_NewReservation = 0,
	PBClientRequest_UpdateReservation = 1,
	PBClientRequest_MAX            = 2,

};

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientState
enum class EPartyBeaconClientState : uint8_t
{
	PBCS_None                      = 0,
	PBCS_Connecting                = 1,
	PBCS_Connected                 = 2,
	PBCS_ConnectionFailed          = 3,
	PBCS_AwaitingResponse          = 4,
	PBCS_Closed                    = 5,
	PBCS_MAX                       = 6,

};

// Enum IpDrv.PartyBeaconHost.EPartyBeaconHostState
enum class EPartyBeaconHostState : uint8_t
{
	PBHS_AllowReservations         = 0,
	PBHS_DenyReservations          = 1,
	PBHS_MAX                       = 2,

};

// Enum IpDrv.TcpLink.ELinkState
enum class ELinkState : uint8_t
{
	STATE_Initialized              = 0,
	STATE_Ready                    = 1,
	STATE_Listening                = 2,
	STATE_Connecting               = 3,
	STATE_Connected                = 4,
	STATE_ListenClosePending       = 5,
	STATE_ConnectClosePending      = 6,
	STATE_ListenClosing            = 7,
	STATE_ConnectClosing           = 8,
	STATE_MAX                      = 9,

};

// Enum IpDrv.TitleFileDownloadCache.ETitleFileFileOp
enum class ETitleFileFileOp : uint8_t
{
	TitleFile_None                 = 0,
	TitleFile_Save                 = 1,
	TitleFile_Load                 = 2,
	TitleFile_MAX                  = 3,

};

// Enum IpDrv.MeshBeacon.EMeshBeaconPacketType
enum class EMeshBeaconPacketType : uint8_t
{
	MB_Packet_UnknownType          = 0,
	MB_Packet_ClientNewConnectionRequest = 1,
	MB_Packet_ClientBeginBandwidthTest = 2,
	MB_Packet_ClientCreateNewSessionResponse = 3,
	MB_Packet_HostNewConnectionResponse = 4,
	MB_Packet_HostBandwidthTestRequest = 5,
	MB_Packet_HostCompletedBandwidthTest = 6,
	MB_Packet_HostTravelRequest    = 7,
	MB_Packet_HostCreateNewSessionRequest = 8,
	MB_Packet_DummyData            = 9,
	MB_Packet_Heartbeat            = 10,
	MB_Packet_MAX                  = 11,

};

// Enum IpDrv.MeshBeacon.EMeshBeaconConnectionResult
enum class EMeshBeaconConnectionResult : uint8_t
{
	MB_ConnectionResult_Succeeded  = 0,
	MB_ConnectionResult_Duplicate  = 1,
	MB_ConnectionResult_Timeout    = 2,
	MB_ConnectionResult_Error      = 3,
	MB_ConnectionResult_MAX        = 4,

};

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestState
enum class EMeshBeaconBandwidthTestState : uint8_t
{
	MB_BandwidthTestState_NotStarted = 0,
	MB_BandwidthTestState_RequestPending = 1,
	MB_BandwidthTestState_StartPending = 2,
	MB_BandwidthTestState_InProgress = 3,
	MB_BandwidthTestState_Completed = 4,
	MB_BandwidthTestState_Incomplete = 5,
	MB_BandwidthTestState_Timeout  = 6,
	MB_BandwidthTestState_Error    = 7,
	MB_BandwidthTestState_MAX      = 8,

};

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestResult
enum class EMeshBeaconBandwidthTestResult : uint8_t
{
	MB_BandwidthTestResult_Succeeded = 0,
	MB_BandwidthTestResult_Timeout = 1,
	MB_BandwidthTestResult_Error   = 2,
	MB_BandwidthTestResult_MAX     = 3,

};

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestType
enum class EMeshBeaconBandwidthTestType : uint8_t
{
	MB_BandwidthTestType_Upstream  = 0,
	MB_BandwidthTestType_Downstream = 1,
	MB_BandwidthTestType_RoundtripLatency = 2,
	MB_BandwidthTestType_MAX       = 3,

};

// Enum IpDrv.MeshBeaconClient.EMeshBeaconClientState
enum class EMeshBeaconClientState : uint8_t
{
	MBCS_None                      = 0,
	MBCS_Connecting                = 1,
	MBCS_Connected                 = 2,
	MBCS_ConnectionFailed          = 3,
	MBCS_AwaitingResponse          = 4,
	MBCS_Closed                    = 5,
	MBCS_MAX                       = 6,

};

// Enum IpDrv.McpMessageBase.EMcpMessageCompressionType
enum class EMcpMessageCompressionType : uint8_t
{
	MMCT_NONE                      = 0,
	MMCT_LZO                       = 1,
	MMCT_ZLIB                      = 2,
	MMCT_MAX                       = 3,

};

// Enum IpDrv.WebRequest.ERequestType
enum class ERequestType : uint8_t
{
	Request_GET                    = 0,
	Request_POST                   = 1,
	Request_MAX                    = 2,

};

// Enum IpDrv.McpGroupsBase.EMcpGroupAccessLevel
enum class EMcpGroupAccessLevel : uint8_t
{
	MGAL_Owner                     = 0,
	MGAL_Member                    = 1,
	MGAL_Public                    = 2,
	MGAL_MAX                       = 3,

};

// Enum IpDrv.McpGroupsBase.EMcpGroupAcceptState
enum class EMcpGroupAcceptState : uint8_t
{
	MGAS_Error                     = 0,
	MGAS_Pending                   = 1,
	MGAS_Accepted                  = 2,
	MGAS_MAX                       = 3,

};

// Enum IpDrv.AdHocDelegates.EAdHocDesiredState
enum class EAdHocDesiredState : uint8_t
{
	AHDS_None                      = 0,
	AHDS_Initialized               = 1,
	AHDS_CreateAccessPoint         = 2,
	AHDS_CreateStation             = 3,
	AHDS_ScanForAccessPoints       = 4,
	AHDS_ConnectToChosenStation    = 5,
	AHDS_DisconnectSpecifiedStation = 6,
	AHDS_DisconnectFromAccessPoint = 7,
	AHDS_AccessPointRejecting      = 8,
	AHDS_Exit                      = 9,
	AHDS_Max                       = 10,

};

// Enum IpDrv.AdHocDelegates.EAdHocCurrentState
enum class EAdHocCurrentState : uint8_t
{
	AHCS_None                      = 0,
	AHCS_Initializing              = 1,
	AHCS_Initialized               = 2,
	AHCS_Station                   = 3,
	AHCS_StationScanning           = 4,
	AHCS_StationConnecting         = 5,
	AHCS_StationConnected          = 6,
	AHCS_StationDisconnected       = 7,
	AHCS_StationClosing            = 8,
	AHCS_AccessPointCreating       = 9,
	AHCS_AccessPointCreated        = 10,
	AHCS_AccessPointScanning       = 11,
	AHCS_AccessPointRejecting      = 12,
	AHCS_AccessPointClosing        = 13,
	AHCS_Finalizing                = 14,
	AHCS_Error                     = 15,
	AHCS_MAX                       = 16,

};

// Enum IpDrv.OnlineImageDownloaderWeb.EOnlineImageDownloadState
enum class EOnlineImageDownloadState : uint8_t
{
	PIDS_NotStarted                = 0,
	PIDS_Downloading               = 1,
	PIDS_Succeeded                 = 2,
	PIDS_Failed                    = 3,
	PIDS_MAX                       = 4,

};

// Enum IpDrv.InternetLink.ELinkMode
enum class ELinkMode : uint8_t
{
	MODE_Text                      = 0,
	MODE_Line                      = 1,
	MODE_Binary                    = 2,
	MODE_MAX                       = 3,

};

// Enum IpDrv.InternetLink.EReceiveMode
enum class EReceiveMode : uint8_t
{
	RMODE_Manual                   = 0,
	RMODE_Event                    = 1,
	RMODE_MAX                      = 2,

};

// Enum IpDrv.InternetLink.ELineMode
enum class ELineMode : uint8_t
{
	LMODE_auto                     = 0,
	LMODE_DOS                      = 1,
	LMODE_UNIX                     = 2,
	LMODE_MAC                      = 3,
	LMODE_MAX                      = 4,

};

// Enum IpDrv.McpClashMobBase.McpChallengeFileStatus
enum class EMcpChallengeFileStatus : uint8_t
{
	MCFS_NotStarted                = 0,
	MCFS_Pending                   = 1,
	MCFS_Success                   = 2,
	MCFS_Failed                    = 3,
	MCFS_MAX                       = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct IpDrv.McpIdMappingBase.McpIdMapping
// 0x0030
struct FMcpIdMapping
{
	struct FString                                     McpId;                                                     // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     ExternalId;                                                // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     ExternalType;                                              // 0x0020(0x0010) (NeedCtorLink)

};
// ScriptStruct IpDrv.AdHocDelegates.AdHocAccessPointInfo
// 0x0038
struct FAdHocAccessPointInfo
{
	struct FString                                     Ipv4Addr;                                                  // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     Username;                                                  // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     AdvertiseData;                                             // 0x0020(0x0010) (NeedCtorLink)
	int                                                ScanResultIndex;                                           // 0x0030(0x0004)
	int                                                NetworkNodeIndex;                                          // 0x0034(0x0004)

};
// ScriptStruct IpDrv.McpUserManagerBase.McpUserStatus
// 0x0068
struct FMcpUserStatus
{
	struct FString                                     McpId;                                                     // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     SecretKey;                                                 // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     Ticket;                                                    // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     UDID;                                                      // 0x0030(0x0010) (NeedCtorLink)
	struct FString                                     RegisteredDate;                                            // 0x0040(0x0010) (NeedCtorLink)
	struct FString                                     LastActiveDate;                                            // 0x0050(0x0010) (NeedCtorLink)
	int                                                DaysInactive;                                              // 0x0060(0x0004)
	unsigned char                                      bIsBanned : 1;                                             // 0x0064(0x0001) BIT_FIELD
	unsigned char                                      UnknownData53BU[0x2];                                      // 0x0064(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct IpDrv.PartyBeacon.PlayerReservation
// 0x0054
struct FPlayerReservation
{
	struct FUniqueNetId                                NetId;                                                     // 0x0000(0x0038)
	int                                                Skill;                                                     // 0x0038(0x0004)
	int                                                XpLevel;                                                   // 0x003C(0x0004)
	struct FDouble                                     Mu;                                                        // 0x0040(0x0008)
	struct FDouble                                     Sigma;                                                     // 0x0048(0x0008)
	float                                              ElapsedSessionTime;                                        // 0x0050(0x0004)

};
// ScriptStruct IpDrv.PartyBeacon.PartyReservation
// 0x0050
struct FPartyReservation
{
	int                                                TeamNum;                                                   // 0x0000(0x0004)
	unsigned char                                      UnknownDataKKOG[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FUniqueNetId                                PartyLeader;                                               // 0x0008(0x0038)
	TArray<struct FPlayerReservation>                  PartyMembers;                                              // 0x0040(0x0010) (NeedCtorLink)

};
// ScriptStruct IpDrv.OnlineNewsInterfaceMcp.NewsCacheEntry
// 0x0038
struct FNewsCacheEntry
{
	struct FString                                     NewsUrl;                                                   // 0x0000(0x0010) (Const, NeedCtorLink)
	TEnumAsByte<EOnlineEnumerationReadState>           ReadState;                                                 // 0x0010(0x0001)
	TEnumAsByte<EOnlineNewsType>                       NewsType;                                                  // 0x0011(0x0001) (Const)
	unsigned char                                      UnknownDataBX1B[0x6];                                      // 0x0012(0x0006) MISSED OFFSET
	struct FString                                     NewsItem;                                                  // 0x0018(0x0010) (NeedCtorLink)
	float                                              Timeout;                                                   // 0x0028(0x0004) (Const)
	unsigned char                                      bIsUnicode : 1;                                            // 0x002C(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownDataVC3B[0x2];                                      // 0x002C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FPointer                                    HttpDownloader;                                            // 0x0030(0x0008) (Const, Native)

};
// ScriptStruct IpDrv.OnlineEventsInterfaceMcp.EventUploadConfig
// 0x0020
struct FEventUploadConfig
{
	TEnumAsByte<EEventUploadType>                      UploadType;                                                // 0x0000(0x0001) (Const)
	unsigned char                                      UnknownDataUXD1[0x7];                                      // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     UploadUrl;                                                 // 0x0008(0x0010) (Const, NeedCtorLink)
	float                                              Timeout;                                                   // 0x0018(0x0004) (Const)
	unsigned char                                      bUseCompression : 1;                                       // 0x001C(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownDataG7YT[0x2];                                      // 0x001C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct IpDrv.OnlineTitleFileDownloadBase.FileNameToURLMapping
// 0x0010
struct FFileNameToURLMapping
{
	struct FName                                       Filename;                                                  // 0x0000(0x0008)
	struct FName                                       UrlMapping;                                                // 0x0008(0x0008)

};
// ScriptStruct IpDrv.McpIdMappingManager.AddMappingRequest
// 0x0038
struct FAddMappingRequest
{
	struct FString                                     McpId;                                                     // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     ExternalId;                                                // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     ExternalType;                                              // 0x0020(0x0010) (NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                                   // 0x0030(0x0008)

};
// ScriptStruct IpDrv.OnlineTitleFileDownloadBase.TitleFileWeb
// 0x0019 (0x0041 - 0x0028)
struct FTitleFileWeb : public FTitleFile
{
	struct FString                                     StringData;                                                // 0x0028(0x0010) (NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                               // 0x0038(0x0008)
	TEnumAsByte<EMcpFileCompressionType>               FileCompressionType;                                       // 0x0040(0x0001)

};
// ScriptStruct IpDrv.McpIdMappingManager.QueryMappingRequest
// 0x0018
struct FQueryMappingRequest
{
	struct FString                                     ExternalType;                                              // 0x0000(0x0010) (NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                                   // 0x0010(0x0008)

};
// ScriptStruct IpDrv.OnlinePlaylistManager.PlaylistPopulation
// 0x000C
struct FPlaylistPopulation
{
	int                                                PlaylistId;                                                // 0x0000(0x0004)
	int                                                WorldwideTotal;                                            // 0x0004(0x0004)
	int                                                RegionTotal;                                               // 0x0008(0x0004)

};
// ScriptStruct IpDrv.McpManagedValueManagerBase.ManagedValue
// 0x000C
struct FManagedValue
{
	struct FName                                       ValueId;                                                   // 0x0000(0x0008)
	int                                                Value;                                                     // 0x0008(0x0004)

};
// ScriptStruct IpDrv.McpUserManager.UserRequest
// 0x0018
struct FUserRequest
{
	struct FString                                     McpId;                                                     // 0x0000(0x0010) (NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                                   // 0x0010(0x0008)

};
// ScriptStruct IpDrv.McpUserCloudFileDownload.McpUserCloudFileInfo
// 0x0034 (0x0068 - 0x0034)
struct FMcpUserCloudFileInfo : public FEmsFile
{
	unsigned char                                      UnknownDataEPAT[0x4];                                      // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     CreationDate;                                              // 0x0038(0x0010) (NeedCtorLink)
	struct FString                                     LastUpdateDate;                                            // 0x0048(0x0010) (NeedCtorLink)
	struct FString                                     CompressionType;                                           // 0x0058(0x0010) (NeedCtorLink)

};
// ScriptStruct IpDrv.McpUserCloudFileDownload.McpUserCloudFilesEntry
// 0x0038
struct FMcpUserCloudFilesEntry
{
	struct FString                                     UserId;                                                    // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FTitleFileWeb>                       DownloadedFiles;                                           // 0x0010(0x0010) (NeedCtorLink)
	TArray<struct FMcpUserCloudFileInfo>               EnumeratedFiles;                                           // 0x0020(0x0010) (NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequestEnumerateFiles;                                 // 0x0030(0x0008)

};
// ScriptStruct IpDrv.McpUserInventoryBase.McpInventoryItemContainer
// 0x0014
struct FMcpInventoryItemContainer
{
	struct FString                                     GlobalItemId;                                              // 0x0000(0x0010) (NeedCtorLink)
	int                                                Quantity;                                                  // 0x0010(0x0004)

};
// ScriptStruct IpDrv.PartyBeaconHost.ClientBeaconConnection
// 0x0048
struct FClientBeaconConnection
{
	struct FUniqueNetId                                PartyLeader;                                               // 0x0000(0x0038)
	float                                              ElapsedHeartbeatTime;                                      // 0x0038(0x0004)
	unsigned char                                      UnknownData5B9S[0x4];                                      // 0x003C(0x0004) MISSED OFFSET
	struct FPointer                                    Socket;                                                    // 0x0040(0x0008) (Native, Transient)

};
// ScriptStruct IpDrv.McpManagedValueManagerBase.ManagedValueSaveSlot
// 0x0030
struct FManagedValueSaveSlot
{
	struct FString                                     OwningMcpId;                                               // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     SaveSlot;                                                  // 0x0010(0x0010) (NeedCtorLink)
	TArray<struct FManagedValue>                       Values;                                                    // 0x0020(0x0010) (NeedCtorLink)

};
// ScriptStruct IpDrv.McpClashMobBase.McpClashMobChallengeUserStatus
// 0x008C
struct FMcpClashMobChallengeUserStatus
{
	struct FString                                     unique_challenge_id;                                       // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     unique_user_id;                                            // 0x0010(0x0010) (NeedCtorLink)
	int                                                num_attempts;                                              // 0x0020(0x0004)
	int                                                num_successful_attempts;                                   // 0x0024(0x0004)
	int                                                goal_progress;                                             // 0x0028(0x0004)
	unsigned char                                      did_complete : 1;                                          // 0x002C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataG0F0[0x2];                                      // 0x002C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     last_update_time;                                          // 0x0030(0x0010) (NeedCtorLink)
	int                                                user_award_given;                                          // 0x0040(0x0004)
	unsigned char                                      UnknownData8R26[0x4];                                      // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     accept_time;                                               // 0x0048(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData80QS : 32;                                      // 0x0058(0x0001)
	unsigned char                                      did_preregister : 1;                                       // 0x0058(0x0001) BIT_FIELD
	unsigned char                                      UnknownData25NY[0x2];                                      // 0x0058(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData578S[0x4];                                      // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     facebook_like_time;                                        // 0x0060(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownDataE890 : 32;                                      // 0x0070(0x0001)
	unsigned char                                      enrolled_via_facebook : 1;                                 // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataZQE7[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      liked_via_facebook : 1;                                    // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownData31B2[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      commented_via_facebook : 1;                                // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataBFGM[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataDOY8[0x4];                                      // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     twitter_retweet_time;                                      // 0x0078(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData3PD3 : 32;                                      // 0x0088(0x0001)
	unsigned char                                      enrolled_via_twitter : 1;                                  // 0x0088(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataVQZ3[0x2];                                      // 0x0088(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      retweeted : 1;                                             // 0x0088(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataES67[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct IpDrv.OnlinePlaylistManager.ConfiguredGameSetting
// 0x0030
struct FConfiguredGameSetting
{
	int                                                GameSettingId;                                             // 0x0000(0x0004)
	unsigned char                                      UnknownDataCQOH[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     GameSettingsClassName;                                     // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     URL;                                                       // 0x0018(0x0010) (NeedCtorLink)
	class UOnlineGameSettings*                         GameSettings;                                              // 0x0028(0x0008) (Transient)

};
// ScriptStruct IpDrv.McpUserInventoryBase.McpInventoryItemAttribute
// 0x0014
struct FMcpInventoryItemAttribute
{
	struct FString                                     AttributeId;                                               // 0x0000(0x0010) (NeedCtorLink)
	int                                                Value;                                                     // 0x0010(0x0004)

};
// ScriptStruct IpDrv.McpUserInventoryBase.McpInventoryItem
// 0x0050
struct FMcpInventoryItem
{
	struct FString                                     InstanceItemId;                                            // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     GlobalItemId;                                              // 0x0010(0x0010) (NeedCtorLink)
	int                                                Quantity;                                                  // 0x0020(0x0004)
	int                                                QuantityIAP;                                               // 0x0024(0x0004)
	float                                              Scalar;                                                    // 0x0028(0x0004)
	unsigned char                                      UnknownData0PBR[0x4];                                      // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     LastUpdateTime;                                            // 0x0030(0x0010) (NeedCtorLink)
	TArray<struct FMcpInventoryItemAttribute>          Attributes;                                                // 0x0040(0x0010) (NeedCtorLink)

};
// ScriptStruct IpDrv.OnlinePlaylistManager.Playlist
// 0x0080
struct FPlaylist
{
	TArray<struct FConfiguredGameSetting>              ConfiguredGames;                                           // 0x0000(0x0010) (NeedCtorLink)
	int                                                PlaylistId;                                                // 0x0010(0x0004)
	int                                                LoadBalanceId;                                             // 0x0014(0x0004)
	struct FString                                     LocalizationString;                                        // 0x0018(0x0010) (NeedCtorLink)
	TArray<int>                                        ContentIds;                                                // 0x0028(0x0010) (NeedCtorLink)
	int                                                TeamSize;                                                  // 0x0038(0x0004)
	int                                                TeamCount;                                                 // 0x003C(0x0004)
	int                                                MaxPartySize;                                              // 0x0040(0x0004)
	unsigned char                                      UnknownDataM4CG[0x4];                                      // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                      // 0x0048(0x0010) (NeedCtorLink)
	struct FString                                     URL;                                                       // 0x0058(0x0010) (NeedCtorLink)
	int                                                MatchType;                                                 // 0x0068(0x0004)
	unsigned char                                      bDisableDedicatedServerSearches : 1;                       // 0x006C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataYXRW[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FName>                               MapCycle;                                                  // 0x0070(0x0010) (NeedCtorLink)

};
// ScriptStruct IpDrv.McpClashMobBase.McpClashMobChallengeFile
// 0x0059
struct FMcpClashMobChallengeFile
{
	unsigned char                                      should_keep_post_challenge : 1;                            // 0x0000(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataZBVR[0x2];                                      // 0x0000(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataJAZY[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     title_id;                                                  // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     file_name;                                                 // 0x0018(0x0010) (NeedCtorLink)
	struct FString                                     dl_name;                                                   // 0x0028(0x0010) (NeedCtorLink)
	struct FString                                     hash_code;                                                 // 0x0038(0x0010) (NeedCtorLink)
	struct FString                                     Type;                                                      // 0x0048(0x0010) (NeedCtorLink)
	TEnumAsByte<EMcpChallengeFileStatus>               Status;                                                    // 0x0058(0x0001)

};
// ScriptStruct IpDrv.OnlineSubsystemCommonImpl.SanitizeCallbackData
// 0x0030
struct FSanitizeCallbackData
{
	int                                                Id;                                                        // 0x0000(0x0004)
	unsigned char                                      UnknownData5D0U[0x4];                                      // 0x0004(0x0004) MISSED OFFSET
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData08VY[0xC];                                      // 0x0004(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     Comment;                                                   // 0x0020(0x0010) (NeedCtorLink)

};
// ScriptStruct IpDrv.OnlineImageDownloaderWeb.OnlineImageDownload
// 0x0040
struct FOnlineImageDownload
{
	struct FString                                     URL;                                                       // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                               // 0x0010(0x0008)
	TEnumAsByte<EOnlineImageDownloadState>             Status;                                                    // 0x0018(0x0001)
	unsigned char                                      UnknownDataMGV8[0x7];                                      // 0x0019(0x0007) MISSED OFFSET
	class UTexture2DDynamic*                           Texture;                                                   // 0x0020(0x0008)
	struct FScriptDelegate                             DecodedCallbacks;                                          // 0x0028(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataN6E7[0xC];                                      // 0x0028(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct IpDrv.McpManagedValueManager.SaveSlotRequestState
// 0x0028
struct UMcpManagedValueManager_FSaveSlotRequestState
{
	struct FString                                     McpId;                                                     // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     SaveSlot;                                                  // 0x0010(0x0010) (NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                                   // 0x0020(0x0008)

};
// ScriptStruct IpDrv.McpClashMobBase.McpClashMobChallengeEvent
// 0x00E0
struct FMcpClashMobChallengeEvent
{
	struct FString                                     unique_challenge_id;                                       // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     visible_date;                                              // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     start_date;                                                // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     end_date;                                                  // 0x0030(0x0010) (NeedCtorLink)
	struct FString                                     completed_date;                                            // 0x0040(0x0010) (NeedCtorLink)
	struct FString                                     purge_date;                                                // 0x0050(0x0010) (NeedCtorLink)
	struct FString                                     challenge_type;                                            // 0x0060(0x0010) (NeedCtorLink)
	int                                                num_attempts;                                              // 0x0070(0x0004)
	int                                                num_successful_attempts;                                   // 0x0074(0x0004)
	int                                                goal_value;                                                // 0x0078(0x0004)
	int                                                goal_start_value;                                          // 0x007C(0x0004)
	int                                                goal_current_value;                                        // 0x0080(0x0004)
	unsigned char                                      has_started : 1;                                           // 0x0084(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataPY3A[0x2];                                      // 0x0084(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      is_visible : 1;                                            // 0x0084(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataVBOU[0x2];                                      // 0x0088(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      has_completed : 1;                                         // 0x0084(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataQT7V[0x2];                                      // 0x0088(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      was_successful : 1;                                        // 0x0084(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataVTAD[0x2];                                      // 0x0088(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FMcpClashMobChallengeFile>           file_list;                                                 // 0x0088(0x0010) (NeedCtorLink)
	int                                                facebook_likes;                                            // 0x0098(0x0004)
	int                                                facebook_comments;                                         // 0x009C(0x0004)
	float                                              facebook_like_scaler;                                      // 0x00A0(0x0004)
	float                                              facebook_comment_scaler;                                   // 0x00A4(0x0004)
	int                                                facebook_like_goal_progress;                               // 0x00A8(0x0004)
	int                                                facebook_comment_goal_progress;                            // 0x00AC(0x0004)
	struct FString                                     facebook_id;                                               // 0x00B0(0x0010) (NeedCtorLink)
	int                                                twitter_retweets;                                          // 0x00C0(0x0004)
	float                                              twitter_retweets_scaler;                                   // 0x00C4(0x0004)
	int                                                twitter_goal_progress;                                     // 0x00C8(0x0004)
	unsigned char                                      UnknownDataGOXA[0x4];                                      // 0x00CC(0x0004) MISSED OFFSET
	struct FString                                     twitter_id;                                                // 0x00D0(0x0010) (NeedCtorLink)

};
// ScriptStruct IpDrv.McpManagedValueManager.ValueRequestState
// 0x0008 (0x0030 - 0x0028)
struct FValueRequestState : public UMcpManagedValueManager_FSaveSlotRequestState
{
	struct FName                                       ValueId;                                                   // 0x0028(0x0008)

};
// ScriptStruct IpDrv.MeshBeacon.ConnectionBandwidthStats
// 0x000C
struct FConnectionBandwidthStats
{
	int                                                UpstreamRate;                                              // 0x0000(0x0004)
	int                                                DownstreamRate;                                            // 0x0004(0x0004)
	int                                                RoundtripLatency;                                          // 0x0008(0x0004)

};
// ScriptStruct IpDrv.OnlineTitleFileDownloadMcp.TitleFileMcp
// 0x0008 (0x0030 - 0x0028)
struct FTitleFileMcp : public FTitleFile
{
	struct FPointer                                    HttpDownloader;                                            // 0x0028(0x0008) (Const, Native)

};
// ScriptStruct IpDrv.MeshBeacon.PlayerMember
// 0x0040
struct FPlayerMember
{
	int                                                TeamNum;                                                   // 0x0000(0x0004)
	int                                                Skill;                                                     // 0x0004(0x0004)
	struct FUniqueNetId                                NetId;                                                     // 0x0008(0x0038)

};
// ScriptStruct IpDrv.TitleFileDownloadCache.TitleFileCacheEntry
// 0x0030 (0x0058 - 0x0028)
struct FTitleFileCacheEntry : public FTitleFile
{
	struct FString                                     LogicalName;                                               // 0x0028(0x0010) (NeedCtorLink)
	struct FString                                     Hash;                                                      // 0x0038(0x0010) (NeedCtorLink)
	TEnumAsByte<ETitleFileFileOp>                      FileOp;                                                    // 0x0048(0x0001)
	unsigned char                                      UnknownDataSLAP[0x7];                                      // 0x0049(0x0007) MISSED OFFSET
	struct FPointer                                    Ar;                                                        // 0x0050(0x0008) (Const, Native)

};
// ScriptStruct IpDrv.AvatarDownloadMap.AvatarKey
// 0x0039
struct FAvatarKey
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	TEnumAsByte<EAvatarSize>                           Size;                                                      // 0x0038(0x0001)

};
// ScriptStruct IpDrv.MeshBeaconClient.ClientConnectionRequest
// 0x005C
struct FClientConnectionRequest
{
	struct FUniqueNetId                                PlayerNetId;                                               // 0x0000(0x0038)
	TEnumAsByte<ENATType>                              NatType;                                                   // 0x0038(0x0001)
	unsigned char                                      UnknownDataXWH1[0x3];                                      // 0x0039(0x0003) MISSED OFFSET
	unsigned char                                      bCanHostVs : 1;                                            // 0x003C(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataN2AK[0x2];                                      // 0x0039(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              GoodHostRatio;                                             // 0x0040(0x0004)
	unsigned char                                      UnknownDataJJSZ[0x4];                                      // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FConnectionBandwidthStats>           BandwidthHistory;                                          // 0x0048(0x0010) (NeedCtorLink)
	int                                                MinutesSinceLastTest;                                      // 0x0058(0x0004)

};
// ScriptStruct IpDrv.McpMessageBase.McpMessageList
// 0x0020
struct FMcpMessageList
{
	struct FString                                     ToUniqueUserId;                                            // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FMcpMessage>                         Messages;                                                  // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct IpDrv.McpUserInventoryBase.McpInventorySaveSlot
// 0x0030
struct FMcpInventorySaveSlot
{
	struct FString                                     OwningMcpId;                                               // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     SaveSlotId;                                                // 0x0010(0x0010) (NeedCtorLink)
	TArray<struct FMcpInventoryItem>                   Items;                                                     // 0x0020(0x0010) (NeedCtorLink)

};
// ScriptStruct IpDrv.McpMessageBase.McpMessageContents
// 0x0020
struct FMcpMessageContents
{
	struct FString                                     MessageId;                                                 // 0x0000(0x0010) (NeedCtorLink)
	TArray<unsigned char>                              MessageContents;                                           // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct IpDrv.McpClashMobManager.McpChallengeRequest
// 0x0018
struct FMcpChallengeRequest
{
	struct FString                                     UniqueChallengeId;                                         // 0x0000(0x0010) (NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                               // 0x0010(0x0008)

};
// ScriptStruct IpDrv.MeshBeaconClient.ClientBandwidthTestData
// 0x0014
struct FClientBandwidthTestData
{
	TEnumAsByte<EMeshBeaconBandwidthTestType>          TestType;                                                  // 0x0000(0x0001)
	TEnumAsByte<EMeshBeaconBandwidthTestState>         CurrentState;                                              // 0x0001(0x0001)
	unsigned char                                      UnknownDataPD3L[0x2];                                      // 0x0002(0x0002) MISSED OFFSET
	int                                                NumBytesToSendTotal;                                       // 0x0004(0x0004)
	int                                                NumBytesSentTotal;                                         // 0x0008(0x0004)
	int                                                NumBytesSentLast;                                          // 0x000C(0x0004)
	float                                              ElapsedTestTime;                                           // 0x0010(0x0004)

};
// ScriptStruct IpDrv.McpUserInventoryManager.SaveSlotRequestState
// 0x0028
struct UMcpUserInventoryManager_FSaveSlotRequestState
{
	struct FString                                     McpId;                                                     // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     SaveSlotId;                                                // 0x0010(0x0010) (NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                                   // 0x0020(0x0008)

};
// ScriptStruct IpDrv.McpClashMobManager.McpChallengeUserRequest
// 0x0050
struct FMcpChallengeUserRequest
{
	struct FString                                     UniqueUserId;                                              // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FMcpChallengeRequest>                ChallengeStatusRequests;                                   // 0x0010(0x0010) (NeedCtorLink)
	TArray<struct FMcpChallengeRequest>                ChallengeAcceptRequests;                                   // 0x0020(0x0010) (NeedCtorLink)
	TArray<struct FMcpChallengeRequest>                ChallengeUpdateProgressRequests;                           // 0x0030(0x0010) (NeedCtorLink)
	TArray<struct FMcpChallengeRequest>                ChallengeUpdateRewardRequests;                             // 0x0040(0x0010) (NeedCtorLink)

};
// ScriptStruct IpDrv.McpUserInventoryManager.InventoryItemRequestState
// 0x0010 (0x0038 - 0x0028)
struct FInventoryItemRequestState : public UMcpUserInventoryManager_FSaveSlotRequestState
{
	struct FString                                     ItemID;                                                    // 0x0028(0x0010) (NeedCtorLink)

};
// ScriptStruct IpDrv.McpMessageBase.McpMessage
// 0x0061
struct FMcpMessage
{
	struct FString                                     MessageId;                                                 // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     ToUniqueUserId;                                            // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     FromUniqueUserId;                                          // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     FromFriendlyName;                                          // 0x0030(0x0010) (NeedCtorLink)
	struct FString                                     MessageType;                                               // 0x0040(0x0010) (NeedCtorLink)
	struct FString                                     ValidUntil;                                                // 0x0050(0x0010) (NeedCtorLink)
	TEnumAsByte<EMcpMessageCompressionType>            MessageCompressionType;                                    // 0x0060(0x0001)

};
// ScriptStruct IpDrv.ImageDecoder.DecodeImageRequest
// 0x0030
struct FDecodeImageRequest
{
	struct FString                                     RequestURL;                                                // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FScriptDelegate                             OnFinishedCallback;                                        // 0x0010(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataI4A2[0xC];                                      // 0x0010(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FPointer                                    Task;                                                      // 0x0028(0x0008) (Native)

};
// ScriptStruct IpDrv.McpMessageManager.McpUncompressMessageRequest
// 0x0040
struct FMcpUncompressMessageRequest
{
	struct FString                                     MessageId;                                                 // 0x0000(0x0010) (NeedCtorLink)
	TArray<unsigned char>                              SourceBuffer;                                              // 0x0010(0x0010) (NeedCtorLink)
	TArray<unsigned char>                              DestBuffer;                                                // 0x0020(0x0010) (NeedCtorLink)
	int                                                OutUncompressedSize;                                       // 0x0030(0x0004)
	unsigned char                                      UnknownData8Y3O[0x4];                                      // 0x0034(0x0004) MISSED OFFSET
	struct FPointer                                    UncompressionWorker;                                       // 0x0038(0x0008) (Native)

};
// ScriptStruct IpDrv.MeshBeaconHost.ClientConnectionBandwidthTestData
// 0x002C
struct FClientConnectionBandwidthTestData
{
	TEnumAsByte<EMeshBeaconBandwidthTestState>         CurrentState;                                              // 0x0000(0x0001)
	TEnumAsByte<EMeshBeaconBandwidthTestType>          TestType;                                                  // 0x0001(0x0001)
	unsigned char                                      UnknownDataD7VA[0x2];                                      // 0x0002(0x0002) MISSED OFFSET
	int                                                BytesTotalNeeded;                                          // 0x0004(0x0004)
	int                                                BytesReceived;                                             // 0x0008(0x0004)
	unsigned char                                      UnknownData23UZ[0x4];                                      // 0x000C(0x0004) MISSED OFFSET
	struct FDouble                                     RequestTestStartTime;                                      // 0x0010(0x0008)
	struct FDouble                                     TestStartTime;                                             // 0x0018(0x0008)
	struct FConnectionBandwidthStats                   BandwidthStats;                                            // 0x0020(0x000C)

};
// ScriptStruct IpDrv.MeshBeaconHost.ClientMeshBeaconConnection
// 0x00A4
struct FClientMeshBeaconConnection
{
	struct FUniqueNetId                                PlayerNetId;                                               // 0x0000(0x0038)
	float                                              ElapsedHeartbeatTime;                                      // 0x0038(0x0004)
	unsigned char                                      UnknownData11LP[0x4];                                      // 0x003C(0x0004) MISSED OFFSET
	struct FPointer                                    Socket;                                                    // 0x0040(0x0008) (Native, Transient)
	unsigned char                                      bConnectionAccepted : 1;                                   // 0x0048(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataSEES[0x2];                                      // 0x0048(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataVQ6C[0x4];                                      // 0x004C(0x0004) MISSED OFFSET
	struct FClientConnectionBandwidthTestData          BandwidthTest;                                             // 0x0050(0x0030)
	TEnumAsByte<ENATType>                              NatType;                                                   // 0x0080(0x0001)
	unsigned char                                      UnknownDataVBO6[0x3];                                      // 0x0081(0x0003) MISSED OFFSET
	unsigned char                                      UnknownDataZ3HP : 32;                                      // 0x0084(0x0001)
	unsigned char                                      bCanHostVs : 1;                                            // 0x0084(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataRUBM[0x2];                                      // 0x0081(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              GoodHostRatio;                                             // 0x0088(0x0004)
	unsigned char                                      UnknownDataGFUJ[0x4];                                      // 0x008C(0x0004) MISSED OFFSET
	TArray<struct FConnectionBandwidthStats>           BandwidthHistory;                                          // 0x0090(0x0010) (NeedCtorLink)
	int                                                MinutesSinceLastTest;                                      // 0x00A0(0x0004)

};
// ScriptStruct IpDrv.OnlineAuthInterfaceImpl.AuthCodeRequest
// 0x0054
struct FAuthCodeRequest
{
	struct FUniqueNetId                                PlayerID;                                                  // 0x0000(0x0038)
	struct FScriptDelegate                             Callback;                                                  // 0x0038(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataDUG2[0xC];                                      // 0x0038(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                RequestID;                                                 // 0x0050(0x0004)

};
// ScriptStruct IpDrv.McpGroupsBase.McpGroupMember
// 0x0011
struct FMcpGroupMember
{
	struct FString                                     MemberId;                                                  // 0x0000(0x0010) (NeedCtorLink)
	TEnumAsByte<EMcpGroupAcceptState>                  AcceptState;                                               // 0x0010(0x0001)

};
// ScriptStruct IpDrv.McpGroupsBase.McpGroup
// 0x0048
struct FMcpGroup
{
	struct FString                                     OwnerId;                                                   // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     GroupId;                                                   // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     GroupName;                                                 // 0x0020(0x0010) (NeedCtorLink)
	TEnumAsByte<EMcpGroupAccessLevel>                  AccessLevel;                                               // 0x0030(0x0001)
	unsigned char                                      UnknownDataZ29R[0x7];                                      // 0x0031(0x0007) MISSED OFFSET
	TArray<struct FMcpGroupMember>                     Members;                                                   // 0x0038(0x0010) (NeedCtorLink)

};
// ScriptStruct IpDrv.McpGroupsBase.McpGroupList
// 0x0020
struct FMcpGroupList
{
	struct FString                                     RequesterId;                                               // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FMcpGroup>                           Groups;                                                    // 0x0010(0x0010) (NeedCtorLink)

};
// ScriptStruct IpDrv.McpMessageManager.McpCompressMessageRequest
// 0x0038
struct FMcpCompressMessageRequest
{
	TArray<unsigned char>                              SourceBuffer;                                              // 0x0000(0x0010) (NeedCtorLink)
	TArray<unsigned char>                              DestBuffer;                                                // 0x0010(0x0010) (NeedCtorLink)
	int                                                OutCompressedSize;                                         // 0x0020(0x0004)
	unsigned char                                      UnknownDataTUJU[0x4];                                      // 0x0024(0x0004) MISSED OFFSET
	class UHttpRequestInterface*                       Request;                                                   // 0x0028(0x0008)
	struct FPointer                                    CompressionWorker;                                         // 0x0030(0x0008) (Native)

};
// ScriptStruct IpDrv.AdHocDelegates.AdHocStationInfo
// 0x0010
struct FAdHocStationInfo
{
	struct FString                                     Username;                                                  // 0x0000(0x0010) (NeedCtorLink, DataBinding)

};
// ScriptStruct IpDrv.ImageDecoder.DecodeImageTask
// 0x0040
struct FDecodeImageTask
{
	struct FString                                     RequestURL;                                                // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	TEnumAsByte<EImageType>                            ImageType;                                                 // 0x0010(0x0001)
	unsigned char                                      UnknownDataOEDN[0x7];                                      // 0x0011(0x0007) MISSED OFFSET
	TArray<unsigned char>                              ImageData;                                                 // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	struct FImageLayout                                Result;                                                    // 0x0028(0x0018) (NeedCtorLink)

};
// ScriptStruct IpDrv.McpClashMobBase.McpClashMobPushNotificationParams
// 0x0004
struct FMcpClashMobPushNotificationParams
{
	int                                                bah;                                                       // 0x0000(0x0004)

};
// ScriptStruct IpDrv.McpClashMobBase.McpClashMobPushNotification
// 0x0044
struct FMcpClashMobPushNotification
{
	TArray<struct FString>                             device_tokens;                                             // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     badge_type;                                                // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     Sound;                                                     // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     Message;                                                   // 0x0030(0x0010) (NeedCtorLink)
	struct FMcpClashMobPushNotificationParams          Params;                                                    // 0x0040(0x0004)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
