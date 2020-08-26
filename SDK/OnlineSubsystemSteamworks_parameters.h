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

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.ClearMicroTxnResponseDelegate
struct UOnlinePurchaseInterfaceSteamworks_ClearMicroTxnResponseDelegate_Params
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AddMicroTxnResponseDelegate
struct UOnlinePurchaseInterfaceSteamworks_AddMicroTxnResponseDelegate_Params
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.FormatCurrency
struct UOnlinePurchaseInterfaceSteamworks_FormatCurrency_Params
{
	struct FString                                     Currency;                                                  // (Parm, NeedCtorLink)
	int                                                Price;                                                     // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.HandleGetAppPriceInfoComplete
struct UOnlinePurchaseInterfaceSteamworks_HandleGetAppPriceInfoComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                   // (Parm)
	class UHttpResponseInterface*                      Response;                                                  // (Parm)
	bool                                               bDidSucceed;                                               // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.GetAppPriceInfo
struct UOnlinePurchaseInterfaceSteamworks_GetAppPriceInfo_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Const, Parm, OutParm)
	TArray<struct FName>                               AppNames;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppIdToName
struct UOnlinePurchaseInterfaceSteamworks_AppIdToName_Params
{
	struct FString                                     AppID;                                                     // (Parm, NeedCtorLink)
	struct FName                                       AppName;                                                   // (Parm, OutParm)
	bool                                               bOptional;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppNameToId
struct UOnlinePurchaseInterfaceSteamworks_AppNameToId_Params
{
	struct FName                                       AppName;                                                   // (Parm)
	struct FString                                     AppID;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               bOptional;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequestAuthTicket
struct UOnlineAuthInterfaceSteamworks_RequestAuthTicket_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequiresAuthTicket
struct UOnlineAuthInterfaceSteamworks_RequiresAuthTicket_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
struct UOnlineAuthInterfaceSteamworks_GetServerAddr_Params
{
	struct FIpAddr                                     OutServerIP;                                               // (Parm, OutParm)
	int                                                OutServerPort;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
struct UOnlineAuthInterfaceSteamworks_GetServerUniqueId_Params
{
	struct FUniqueNetId                                OutServerUID;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
struct UOnlineAuthInterfaceSteamworks_VerifyServerAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                                 // (Parm)
	struct FIpAddr                                     ServerIP;                                                  // (Parm)
	int                                                AuthTicketUID;                                             // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
struct UOnlineAuthInterfaceSteamworks_CreateServerAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                                 // (Parm)
	struct FIpAddr                                     ClientIP;                                                  // (Parm)
	int                                                ClientPort;                                                // (Parm)
	int                                                OutAuthTicketUID;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
struct UOnlineAuthInterfaceSteamworks_VerifyClientAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                                 // (Parm)
	struct FIpAddr                                     ClientIP;                                                  // (Parm)
	int                                                ClientPort;                                                // (Parm)
	int                                                AuthTicketUID;                                             // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
struct UOnlineAuthInterfaceSteamworks_CreateClientAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                                 // (Parm)
	struct FIpAddr                                     ServerIP;                                                  // (Parm)
	int                                                ServerPort;                                                // (Parm)
	bool                                               bSecure;                                                   // (Parm)
	int                                                OutAuthTicketUID;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
struct UOnlineAuthInterfaceSteamworks_SendServerAuthRequest_Params
{
	struct FUniqueNetId                                ServerUID;                                                 // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
struct UOnlineAuthInterfaceSteamworks_SendClientAuthRequest_Params
{
	class UPlayer*                                     ClientConnection;                                          // (Parm)
	struct FUniqueNetId                                ClientUID;                                                 // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UpdateWorkshopItemUploadProgress
struct UOnlineCommunityContentInterfaceSteamworks_UpdateWorkshopItemUploadProgress_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadAllWorkshopData
struct UOnlineCommunityContentInterfaceSteamworks_DownloadAllWorkshopData_Params
{
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.CreateWorkshopItem
struct UOnlineCommunityContentInterfaceSteamworks_CreateWorkshopItem_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.RateContent
struct UOnlineCommunityContentInterfaceSteamworks_RateContent_Params
{
	unsigned char                                      PlayerNum;                                                 // (Parm)
	struct FCommunityContentFile                       FileToRate;                                                // (Const, Parm, OutParm, NeedCtorLink)
	int                                                NewRating;                                                 // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearGetContentPayloadCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_ClearGetContentPayloadCompleteDelegate_Params
{
	struct FScriptDelegate                             GetContentPayloadCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddGetContentPayloadCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_AddGetContentPayloadCompleteDelegate_Params
{
	struct FScriptDelegate                             GetContentPayloadCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnGetContentPayloadComplete
struct UOnlineCommunityContentInterfaceSteamworks_OnGetContentPayloadComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	struct FCommunityContentFile                       FileDownloaded;                                            // (Parm, NeedCtorLink)
	TArray<unsigned char>                              Payload;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentPayload
struct UOnlineCommunityContentInterfaceSteamworks_GetContentPayload_Params
{
	unsigned char                                      PlayerNum;                                                 // (Parm)
	struct FCommunityContentFile                       FileDownloaded;                                            // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearDownloadContentCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_ClearDownloadContentCompleteDelegate_Params
{
	struct FScriptDelegate                             DownloadContentCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddDownloadContentCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_AddDownloadContentCompleteDelegate_Params
{
	struct FScriptDelegate                             DownloadContentCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadContentComplete
struct UOnlineCommunityContentInterfaceSteamworks_OnDownloadContentComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	struct FCommunityContentFile                       FileDownloaded;                                            // (Parm, NeedCtorLink)
	TArray<unsigned char>                              Payload;                                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadContent
struct UOnlineCommunityContentInterfaceSteamworks_DownloadContent_Params
{
	unsigned char                                      PlayerNum;                                                 // (Parm)
	struct FCommunityContentFile                       FileToDownload;                                            // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearUploadContentCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_ClearUploadContentCompleteDelegate_Params
{
	struct FScriptDelegate                             UploadContentCompleteDelegate;                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddUploadContentCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_AddUploadContentCompleteDelegate_Params
{
	struct FScriptDelegate                             UploadContentCompleteDelegate;                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnUploadContentComplete
struct UOnlineCommunityContentInterfaceSteamworks_OnUploadContentComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	struct FCommunityContentFile                       UploadedFile;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UploadContent
struct UOnlineCommunityContentInterfaceSteamworks_UploadContent_Params
{
	unsigned char                                      PlayerNum;                                                 // (Parm)
	TArray<unsigned char>                              Payload;                                                   // (Const, Parm, OutParm, NeedCtorLink)
	struct FCommunityContentMetadata                   MetaData;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetFriendsContentList
struct UOnlineCommunityContentInterfaceSteamworks_GetFriendsContentList_Params
{
	unsigned char                                      PlayerNum;                                                 // (Parm)
	struct FOnlineFriend                               Friend;                                                    // (Const, Parm, OutParm, NeedCtorLink)
	TArray<struct FCommunityContentFile>               ContentFiles;                                              // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadFriendsContentListCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_ClearReadFriendsContentListCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadFriendsContentListCompleteDelegate;                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadFriendsContentListCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_AddReadFriendsContentListCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadFriendsContentListCompleteDelegate;                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadFriendsContentListComplete
struct UOnlineCommunityContentInterfaceSteamworks_OnReadFriendsContentListComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadFriendsContentList
struct UOnlineCommunityContentInterfaceSteamworks_ReadFriendsContentList_Params
{
	unsigned char                                      PlayerNum;                                                 // (Parm)
	TArray<struct FOnlineFriend>                       Friends;                                                   // (Const, Parm, OutParm, NeedCtorLink)
	int                                                StartAt;                                                   // (OptionalParm, Parm)
	int                                                NumToRead;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentList
struct UOnlineCommunityContentInterfaceSteamworks_GetContentList_Params
{
	unsigned char                                      PlayerNum;                                                 // (Parm)
	TArray<struct FCommunityContentFile>               ContentFiles;                                              // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadContentListCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_ClearReadContentListCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadContentListCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadContentListCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_AddReadContentListCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadContentListCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadContentListComplete
struct UOnlineCommunityContentInterfaceSteamworks_OnReadContentListComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	TArray<struct FCommunityContentFile>               ContentFiles;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadContentList
struct UOnlineCommunityContentInterfaceSteamworks_ReadContentList_Params
{
	unsigned char                                      PlayerNum;                                                 // (Parm)
	struct FUniqueNetId                                NetId;                                                     // (Parm)
	struct FString                                     Path;                                                      // (OptionalParm, Parm, NeedCtorLink)
	int                                                StartAt;                                                   // (OptionalParm, Parm)
	int                                                NumToRead;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Exit
struct UOnlineCommunityContentInterfaceSteamworks_Exit_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Init
struct UOnlineCommunityContentInterfaceSteamworks_Init_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadedWorkshopData
struct UOnlineCommunityContentInterfaceSteamworks_OnDownloadedWorkshopData_Params
{
	TArray<struct FDownloadedWorkshopData>             Items;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               bSuccess;                                                  // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfoNative
struct UOnlineGameInterfaceSteamworks_PrintDebugInfoNative_Params
{
	class UDebugDrawer*                                Drawer;                                                    // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfo
struct UOnlineGameInterfaceSteamworks_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                    // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
struct UOnlineGameInterfaceSteamworks_QueryNonAdvertisedData_Params
{
	int                                                StartAt;                                                   // (Parm)
	int                                                NumberToQuery;                                             // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_ClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_AddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
struct UOnlineGameInterfaceSteamworks_OnUnregisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
struct UOnlineGameInterfaceSteamworks_UnregisterPlayer_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_ClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_AddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
struct UOnlineGameInterfaceSteamworks_OnRegisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
struct UOnlineGameInterfaceSteamworks_RegisterPlayer_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               bWasInvited;                                               // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
struct UOnlineGameInterfaceSteamworks_AcceptGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FName                                       SessionName;                                               // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
struct UOnlineGameInterfaceSteamworks_OnGameInviteAccepted_Params
{
	struct FOnlineGameSearchResult                     InviteResult;                                              // (Const, Parm, OutParm)
	struct FString                                     ErrorString;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
struct UOnlineGameInterfaceSteamworks_UpdateOnlineGame_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	class UOnlineGameSettings*                         UpdatedGameSettings;                                       // (Parm)
	bool                                               bShouldRefreshOnlineData;                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_PsyNet_ClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_PsyNet_AddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnUnregisterPlayerComplete
struct UOnlineGameInterfaceSteamworks_PsyNet_OnUnregisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UnregisterPlayer
struct UOnlineGameInterfaceSteamworks_PsyNet_UnregisterPlayer_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_PsyNet_ClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_PsyNet_AddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnRegisterPlayerComplete
struct UOnlineGameInterfaceSteamworks_PsyNet_OnRegisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.RegisterPlayer
struct UOnlineGameInterfaceSteamworks_PsyNet_RegisterPlayer_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               bWasInvited;                                               // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.QueryNonAdvertisedData
struct UOnlineGameInterfaceSteamworks_PsyNet_QueryNonAdvertisedData_Params
{
	int                                                StartAt;                                                   // (Parm)
	int                                                NumberToQuery;                                             // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AcceptGameInvite
struct UOnlineGameInterfaceSteamworks_PsyNet_AcceptGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FName                                       SessionName;                                               // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UpdateOnlineGame
struct UOnlineGameInterfaceSteamworks_PsyNet_UpdateOnlineGame_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	class UOnlineGameSettings*                         UpdatedGameSettings;                                       // (Parm)
	bool                                               bShouldRefreshOnlineData;                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.SetFriendJoinLocation
struct UOnlineGameInterfaceSteamworks_PsyNet_SetFriendJoinLocation_Params
{
	struct FUniqueNetId                                JoinablePlayerID;                                          // (Parm)
	struct FString                                     ServerAddress;                                             // (Parm, NeedCtorLink)
	TEnumAsByte<ELobbyVisibility>                      Visibility;                                                // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.KickPlayer
struct UOnlineLobbyInterfaceSteamworks_KickPlayer_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                   // (Const, Parm, OutParm)
	struct FUniqueNetId                                PlayerID;                                                  // (Const, Parm, OutParm)
	TEnumAsByte<ELobbyKickReason>                      Reason;                                                    // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyFromCommandline
struct UOnlineLobbyInterfaceSteamworks_GetLobbyFromCommandline_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                   // (Parm, OutParm)
	bool                                               bMarkAsJoined;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ShowInviteUI
struct UOnlineLobbyInterfaceSteamworks_ShowInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Const, Parm)
	struct FUniqueLobbyId                              LobbyId;                                                   // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.InviteToLobby
struct UOnlineLobbyInterfaceSteamworks_InviteToLobby_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                   // (Const, Parm, OutParm)
	struct FUniqueNetId                                PlayerID;                                                  // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CanInviteToLobby
struct UOnlineLobbyInterfaceSteamworks_CanInviteToLobby_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                   // (Const, Parm, OutParm)
	struct FUniqueNetId                                PlayerID;                                                  // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyOwner
struct UOnlineLobbyInterfaceSteamworks_SetLobbyOwner_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                   // (Const, Parm, OutParm)
	struct FUniqueNetId                                NewOwner;                                                  // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyLock
struct UOnlineLobbyInterfaceSteamworks_SetLobbyLock_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                   // (Const, Parm, OutParm)
	bool                                               bLocked;                                                   // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyType
struct UOnlineLobbyInterfaceSteamworks_SetLobbyType_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                   // (Const, Parm, OutParm)
	TEnumAsByte<ELobbyVisibility>                      Type;                                                      // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyServer
struct UOnlineLobbyInterfaceSteamworks_SetLobbyServer_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                   // (Const, Parm, OutParm)
	struct FUniqueNetId                                ServerUID;                                                 // (Const, Parm, OutParm)
	struct FString                                     ServerIP;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.RemoveLobbySetting
struct UOnlineLobbyInterfaceSteamworks_RemoveLobbySetting_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                   // (Const, Parm, OutParm)
	struct FString                                     Key;                                                       // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbySetting
struct UOnlineLobbyInterfaceSteamworks_SetLobbySetting_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                   // (Const, Parm, OutParm)
	struct FString                                     Key;                                                       // (Parm, NeedCtorLink)
	struct FString                                     Value;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyAdmin
struct UOnlineLobbyInterfaceSteamworks_GetLobbyAdmin_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                   // (Const, Parm, OutParm)
	struct FUniqueNetId                                AdminId;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyKicked
struct UOnlineLobbyInterfaceSteamworks_OnLobbyKicked_Params
{
	struct FActiveLobbyInfo                            Lobby;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	int                                                AdminIndex;                                                // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyBinaryData
struct UOnlineLobbyInterfaceSteamworks_SendLobbyBinaryData_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                   // (Const, Parm, OutParm)
	TArray<unsigned char>                              Data;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyUserSetting
struct UOnlineLobbyInterfaceSteamworks_SetLobbyUserSetting_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                   // (Const, Parm, OutParm)
	struct FString                                     Key;                                                       // (Parm, NeedCtorLink)
	struct FString                                     Value;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LeaveLobby
struct UOnlineLobbyInterfaceSteamworks_LeaveLobby_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                   // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.JoinLobby
struct UOnlineLobbyInterfaceSteamworks_JoinLobby_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
	struct FUniqueLobbyId                              LobbyId;                                                   // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.UpdateFoundLobbies
struct UOnlineLobbyInterfaceSteamworks_UpdateFoundLobbies_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                   // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.FindLobbies
struct UOnlineLobbyInterfaceSteamworks_FindLobbies_Params
{
	int                                                MaxResults;                                                // (OptionalParm, Parm)
	TArray<struct FLobbyFilter>                        Filters;                                                   // (OptionalParm, Parm, NeedCtorLink)
	TArray<struct FLobbySortFilter>                    SortFilters;                                               // (OptionalParm, Parm, NeedCtorLink)
	int                                                MinSlots;                                                  // (OptionalParm, Parm)
	TEnumAsByte<ELobbyDistance>                        Distance;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CreateLobby
struct UOnlineLobbyInterfaceSteamworks_CreateLobby_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
	int                                                MaxPlayers;                                                // (Parm)
	TEnumAsByte<ELobbyVisibility>                      Type;                                                      // (OptionalParm, Parm)
	TArray<struct FLobbyMetaData>                      InitialSettings;                                           // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.SteamWorkshopCommandlet.Init
struct USteamWorkshopCommandlet_Init_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.TriggerScreenshot
struct UOnlineSubsystemSteamworks_TriggerScreenshot_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerConnectionStatusChanged
struct UOnlineSubsystemSteamworks_OnControllerConnectionStatusChanged_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
	bool                                               bConnected;                                                // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerInputAPIChanged
struct UOnlineSubsystemSteamworks_OnControllerInputAPIChanged_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
	TEnumAsByte<EInputAPI>                             InputAPI;                                                  // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerPlatform
struct UOnlineSubsystemSteamworks_GetControllerPlatform_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
	TEnumAsByte<EInputPlatformType>                    ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerID
struct UOnlineSubsystemSteamworks_GetControllerID_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetConnectedControllerNames
struct UOnlineSubsystemSteamworks_GetConnectedControllerNames_Params
{
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLocalPlayerRemoved
struct UOnlineSubsystemSteamworks_OnLocalPlayerRemoved_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterController
struct UOnlineSubsystemSteamworks_UnregisterController_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterController
struct UOnlineSubsystemSteamworks_RegisterController_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
	int                                                ControllerId;                                              // (OptionalParm, Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRegisterController
struct UOnlineSubsystemSteamworks_CanRegisterController_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowBindings
struct UOnlineSubsystemSteamworks_ShowBindings_Params
{
	int                                                ControllerId;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerLayout
struct UOnlineSubsystemSteamworks_SetControllerLayout_Params
{
	int                                                ControllerId;                                              // (Parm)
	struct FName                                       LayoutName;                                                // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetInputAPI
struct UOnlineSubsystemSteamworks_SetInputAPI_Params
{
	TEnumAsByte<EInputAPI>                             TargetAPI;                                                 // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGamepadConnectionStatusChanged
struct UOnlineSubsystemSteamworks_HandleGamepadConnectionStatusChanged_Params
{
	class UGameViewportClient*                         GVC;                                                       // (Parm)
	int                                                LocalPlayerNum;                                            // (Parm)
	bool                                               bConnected;                                                // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGamepadInputAPIChanged
struct UOnlineSubsystemSteamworks_HandleGamepadInputAPIChanged_Params
{
	class UGameViewportClient*                         GVC;                                                       // (Parm)
	int                                                LocalPlayerNum;                                            // (Parm)
	TEnumAsByte<EInputAPI>                             InputAPI;                                                  // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearInputAPIChangedDelegate
struct UOnlineSubsystemSteamworks_ClearInputAPIChangedDelegate_Params
{
	struct FScriptDelegate                             InputAPIChangedDelegate;                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInputAPIChangedDelegate
struct UOnlineSubsystemSteamworks_AddInputAPIChangedDelegate_Params
{
	struct FScriptDelegate                             InputAPIChangedDelegate;                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisteredControllerDelegate
struct UOnlineSubsystemSteamworks_ClearUnregisteredControllerDelegate_Params
{
	struct FScriptDelegate                             UnregisteredControllerDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisteredControllerDelegate
struct UOnlineSubsystemSteamworks_ClearRegisteredControllerDelegate_Params
{
	struct FScriptDelegate                             RegisteredControllerDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisteredControllerDelegate
struct UOnlineSubsystemSteamworks_AddUnregisteredControllerDelegate_Params
{
	struct FScriptDelegate                             UnregisteredControllerDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisteredControllerDelegate
struct UOnlineSubsystemSteamworks_AddRegisteredControllerDelegate_Params
{
	struct FScriptDelegate                             RegisteredControllerDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnInputAPIChanged
struct UOnlineSubsystemSteamworks_OnInputAPIChanged_Params
{
	TEnumAsByte<EInputAPI>                             TargetAPI;                                                 // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisteredController
struct UOnlineSubsystemSteamworks_OnUnregisteredController_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisteredController
struct UOnlineSubsystemSteamworks_OnRegisteredController_Params
{
	int                                                LocalPlayerNum;                                            // (Parm)
	int                                                ControllerId;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasFriendsFunctionality
struct UOnlineSubsystemSteamworks_HasFriendsFunctionality_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanSendOfflinePartyInvite
struct UOnlineSubsystemSteamworks_CanSendOfflinePartyInvite_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckParentalControlInfo
struct UOnlineSubsystemSteamworks_CheckParentalControlInfo_Params
{
	bool                                               bShowUi;                                                   // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMetKeys
struct UOnlineSubsystemSteamworks_RecordPlayersRecentlyMetKeys_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FFriendHistoryKey>                   PlayerKeys;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayHistoryRegistrationKey
struct UOnlineSubsystemSteamworks_GetPlayHistoryRegistrationKey_Params
{
	TArray<unsigned char>                              Key;                                                       // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsOriginalAppOwner
struct UOnlineSubsystemSteamworks_IsOriginalAppOwner_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateSessionStatusFromPlayers
struct UOnlineSubsystemSteamworks_UpdateSessionStatusFromPlayers_Params
{
	int                                                CurrentPlayerCount;                                        // (Parm)
	int                                                numBotPlayers;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsAchievementUnlocked
struct UOnlineSubsystemSteamworks_IsAchievementUnlocked_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                AchievementId;                                             // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateGameProgress
struct UOnlineSubsystemSteamworks_UpdateGameProgress_Params
{
	unsigned char                                      LocalPlayerNum;                                            // (Parm)
	float                                              Progress;                                                  // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FinishOnlineGameSession
struct UOnlineSubsystemSteamworks_FinishOnlineGameSession_Params
{
	struct FString                                     serverId;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartOnlineGameSession
struct UOnlineSubsystemSteamworks_StartOnlineGameSession_Params
{
	struct FString                                     serverId;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserControllerPairingChangedDelegate
struct UOnlineSubsystemSteamworks_ClearSystemUserControllerPairingChangedDelegate_Params
{
	struct FScriptDelegate                             PairingChangeDelegate;                                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserControllerPairingChangedDelegate
struct UOnlineSubsystemSteamworks_AddSystemUserControllerPairingChangedDelegate_Params
{
	struct FScriptDelegate                             PairingChangeDelegate;                                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged
struct UOnlineSubsystemSteamworks_OnSystemUserControllerPairingChanged_Params
{
	int                                                NewLocalUserNum;                                           // (Parm)
	int                                                PreviousLocalUserNum;                                      // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAccountPickerInput
struct UOnlineSubsystemSteamworks_ClearAccountPickerInput_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LookForAccountPickerInput
struct UOnlineSubsystemSteamworks_LookForAccountPickerInput_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerToSession
struct UOnlineSubsystemSteamworks_AddPlayerToSession_Params
{
	unsigned char                                      ControllerId;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrimaryPlayer
struct UOnlineSubsystemSteamworks_ClearPrimaryPlayer_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveUserAssociation
struct UOnlineSubsystemSteamworks_RemoveUserAssociation_Params
{
	unsigned char                                      ControllerId;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapEnd
struct UOnlineSubsystemSteamworks_MapEnd_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapStart
struct UOnlineSubsystemSteamworks_MapStart_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchEnd
struct UOnlineSubsystemSteamworks_OnlineMatchEnd_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchStart
struct UOnlineSubsystemSteamworks_OnlineMatchStart_Params
{
	struct FString                                     MapName;                                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionDifficultyLevel
struct UOnlineSubsystemSteamworks_SetSessionDifficultyLevel_Params
{
	int                                                DifficultyLevel;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayModeName
struct UOnlineSubsystemSteamworks_SetSessionGameplayModeName_Params
{
	struct FName                                       GameplayModeName;                                          // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayMode
struct UOnlineSubsystemSteamworks_SetSessionGameplayMode_Params
{
	int                                                GameplayMode;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSyncedAchievements
struct UOnlineSubsystemSteamworks_GetSyncedAchievements_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<unsigned char>                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPlayedWith
struct UOnlineSubsystemSteamworks_SetPlayedWith_Params
{
	struct FUniqueNetId                                PlayerNetId;                                               // (Const, Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleBootMessage
struct UOnlineSubsystemSteamworks_HandleBootMessage_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearErrorDialogClosedDelegate
struct UOnlineSubsystemSteamworks_ClearErrorDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddErrorDialogClosedDelegate
struct UOnlineSubsystemSteamworks_AddErrorDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnErrorDialogClosed
struct UOnlineSubsystemSteamworks_OnErrorDialogClosed_Params
{
	int                                                LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCloseKickPlayerDialogDelegate
struct UOnlineSubsystemSteamworks_ClearCloseKickPlayerDialogDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCloseKickPlayerDialogDelegate
struct UOnlineSubsystemSteamworks_AddCloseKickPlayerDialogDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCloseKickPlayerDialog
struct UOnlineSubsystemSteamworks_OnCloseKickPlayerDialog_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCommerceDialogClosedDelegate
struct UOnlineSubsystemSteamworks_ClearCommerceDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCommerceDialogClosedDelegate
struct UOnlineSubsystemSteamworks_AddCommerceDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCommerceDialogClosed
struct UOnlineSubsystemSteamworks_OnCommerceDialogClosed_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerAccountID
struct UOnlineSubsystemSteamworks_GetPlayerAccountID_Params
{
	struct FUniqueNetId                                NetId;                                                     // (Const, Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WordFilterSanitizeString
struct UOnlineSubsystemSteamworks_WordFilterSanitizeString_Params
{
	struct FString                                     Comment;                                                   // (Const, Parm, NeedCtorLink)
	struct FScriptDelegate                             SanitizeDelegate;                                          // (Parm, NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveCanPlayOnlineChangedDelegate
struct UOnlineSubsystemSteamworks_RemoveCanPlayOnlineChangedDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCanPlayOnlineChangedDelegate
struct UOnlineSubsystemSteamworks_AddCanPlayOnlineChangedDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMet
struct UOnlineSubsystemSteamworks_RecordPlayersRecentlyMet_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                   // (Parm, OutParm, NeedCtorLink)
	struct FString                                     GameDescription;                                           // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveDataNoSpaceDialogCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearSaveDataNoSpaceDialogCompleteDelegate_Params
{
	struct FScriptDelegate                             DeviceDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSaveDataNoSpaceDialogCompleteDelegate
struct UOnlineSubsystemSteamworks_AddSaveDataNoSpaceDialogCompleteDelegate_Params
{
	struct FScriptDelegate                             DeviceDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSaveDataNoSpaceDialogComplete
struct UOnlineSubsystemSteamworks_OnSaveDataNoSpaceDialogComplete_Params
{
	bool                                               bContinueWithoutSave;                                      // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockedDLCChangeDelegate
struct UOnlineSubsystemSteamworks_ClearUnlockedDLCChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockedDLCChangeDelegate
struct UOnlineSubsystemSteamworks_AddUnlockedDLCChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUnlockedDLC
struct UOnlineSubsystemSteamworks_GetUnlockedDLC_Params
{
	TArray<struct FName>                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockedDLCChange
struct UOnlineSubsystemSteamworks_OnUnlockedDLCChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetOverlayEnabled
struct UOnlineSubsystemSteamworks_GetOverlayEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDLCPurchaseTime
struct UOnlineSubsystemSteamworks_GetDLCPurchaseTime_Params
{
	struct FName                                       AppName;                                                   // (Parm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGetUserInfoComplete
struct UOnlineSubsystemSteamworks_HandleGetUserInfoComplete_Params
{
	struct FName                                       NewCurrency;                                               // (Parm)
	struct FString                                     NewCountry;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerCountry
struct UOnlineSubsystemSteamworks_GetPlayerCountry_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerLanguage
struct UOnlineSubsystemSteamworks_GetPlayerLanguage_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerCountryDelegate
struct UOnlineSubsystemSteamworks_ClearReadPlayerCountryDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadPlayerCountryDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerCountryDelegate
struct UOnlineSubsystemSteamworks_AddReadPlayerCountryDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadPlayerCountryDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AnyPlayerChatRestricted
struct UOnlineSubsystemSteamworks_AnyPlayerChatRestricted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.InitializeTrophyAPI
struct UOnlineSubsystemSteamworks_InitializeTrophyAPI_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItems
struct UOnlineSubsystemSteamworks_OpenStoreForItems_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FString>                             Targets;                                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForDLC
struct UOnlineSubsystemSteamworks_OpenStoreForDLC_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FName                                       DLC;                                                       // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItemsAsync
struct UOnlineSubsystemSteamworks_OpenStoreForItemsAsync_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FString>                             Targets;                                                   // (Parm, NeedCtorLink)
	struct FScriptDelegate                             OnStorePurchaseCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorePurchaseCompleteDelegate
struct UOnlineSubsystemSteamworks_OnStorePurchaseCompleteDelegate_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenErrorDialog
struct UOnlineSubsystemSteamworks_OpenErrorDialog_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EPS4ErrorDialog>                       ErrorCode;                                                 // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenPS4DisplayMode
struct UOnlineSubsystemSteamworks_OpenPS4DisplayMode_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EPS4DisplayMode>                       DisplayMode;                                               // (Parm)
	TArray<struct FString>                             Targets;                                                   // (OptionalParm, Parm, NeedCtorLink)
	int                                                ServiceLabel;                                              // (OptionalParm, Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetControllerColor
struct UOnlineSubsystemSteamworks_ResetControllerColor_Params
{
	int                                                ControllerId;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerColor
struct UOnlineSubsystemSteamworks_SetControllerColor_Params
{
	int                                                ControllerId;                                              // (Parm)
	struct FColor                                      NewColor;                                                  // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInGamePost
struct UOnlineSubsystemSteamworks_AddInGamePost_Params
{
	struct FString                                     InPostID;                                                  // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FString>                             StringReplaceList;                                         // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsEnabled
struct UOnlineSubsystemSteamworks_IsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRichPresence
struct UOnlineSubsystemSteamworks_SetRichPresence_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     PresenceString;                                            // (Parm, NeedCtorLink)
	struct FString                                     GameDataString;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
struct UOnlineSubsystemSteamworks_ClearAllDelegates_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearWriteSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteSharedFileCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddWriteSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteSharedFileCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
struct UOnlineSubsystemSteamworks_WriteSharedFile_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
	TArray<unsigned char>                              Contents;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
struct UOnlineSubsystemSteamworks_OnWriteSharedFileComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
	struct FString                                     SharedHandle;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadSharedFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadSharedFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
struct UOnlineSubsystemSteamworks_ReadSharedFile_Params
{
	struct FString                                     SharedHandle;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
struct UOnlineSubsystemSteamworks_OnReadSharedFileComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	struct FString                                     SharedHandle;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
struct UOnlineSubsystemSteamworks_ClearSharedFile_Params
{
	struct FString                                     SharedHandle;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
struct UOnlineSubsystemSteamworks_ClearSharedFiles_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
struct UOnlineSubsystemSteamworks_GetSharedFileContents_Params
{
	struct FString                                     SharedHandle;                                              // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                              // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
struct UOnlineSubsystemSteamworks_DeleteUserFile_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
	bool                                               bShouldCloudDelete;                                        // (Parm)
	bool                                               bShouldLocallyDelete;                                      // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
struct UOnlineSubsystemSteamworks_OnDeleteUserFileComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
struct UOnlineSubsystemSteamworks_WriteUserFile_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                              // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
struct UOnlineSubsystemSteamworks_OnWriteUserFileComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
struct UOnlineSubsystemSteamworks_ReadUserFile_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
struct UOnlineSubsystemSteamworks_OnReadUserFileComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
struct UOnlineSubsystemSteamworks_GetUserFileList_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	TArray<struct FEmsFile>                            UserFiles;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
struct UOnlineSubsystemSteamworks_EnumerateUserFiles_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
struct UOnlineSubsystemSteamworks_OnEnumerateUserFilesComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
struct UOnlineSubsystemSteamworks_ClearFile_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
struct UOnlineSubsystemSteamworks_ClearFiles_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
struct UOnlineSubsystemSteamworks_GetFileContents_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                              // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
struct UOnlineSubsystemSteamworks_WriteUserFileInternal_Params
{
	struct FString                                     UserId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                              // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoiceReceiveVolume
struct UOnlineSubsystemSteamworks_SetVoiceReceiveVolume_Params
{
	float                                              VoiceVolume;                                               // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
struct UOnlineSubsystemSteamworks_GetFriendJoinURL_Params
{
	struct FUniqueNetId                                FriendUID;                                                 // (Parm)
	struct FString                                     ServerURL;                                                 // (Parm, OutParm, NeedCtorLink)
	struct FString                                     ServerUID;                                                 // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
struct UOnlineSubsystemSteamworks_GetCommandlineJoinURL_Params
{
	bool                                               bMarkAsJoined;                                             // (Parm)
	struct FString                                     ServerURL;                                                 // (Parm, OutParm, NeedCtorLink)
	struct FString                                     ServerUID;                                                 // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
struct UOnlineSubsystemSteamworks_Int64ToUniqueNetId_Params
{
	struct FString                                     UIDString;                                                 // (Parm, NeedCtorLink)
	struct FUniqueNetId                                OutUID;                                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
struct UOnlineSubsystemSteamworks_UniqueNetIdToInt64_Params
{
	struct FUniqueNetId                                Uid;                                                       // (Const, Parm, OutParm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
struct UOnlineSubsystemSteamworks_NotifyVOIPPlaybackFinished_Params
{
	class UAudioComponent*                             VOIPAudioComponent;                                        // (Parm, EditInline)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
struct UOnlineSubsystemSteamworks_OnVOIPPlaybackFinished_Params
{
	class UAudioComponent*                             AC;                                                        // (Parm, EditInline)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
struct UOnlineSubsystemSteamworks_ShowProfileUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     SubURL;                                                    // (OptionalParm, Parm, NeedCtorLink)
	struct FUniqueNetId                                PlayerUID;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
struct UOnlineSubsystemSteamworks_UniqueNetIdToPlayerName_Params
{
	struct FUniqueNetId                                Uid;                                                       // (Const, Parm, OutParm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
struct UOnlineSubsystemSteamworks_DisplayAchievementProgress_Params
{
	int                                                AchievementId;                                             // (Parm)
	int                                                ProgressCount;                                             // (Parm)
	int                                                MaxProgress;                                               // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
struct UOnlineSubsystemSteamworks_CreateLeaderboard_Params
{
	struct FString                                     LeaderboardName;                                           // (Parm, NeedCtorLink)
	TEnumAsByte<ELeaderboardSortType>                  SortType;                                                  // (Parm)
	TEnumAsByte<ELeaderboardFormat>                    DisplayFormat;                                             // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
struct UOnlineSubsystemSteamworks_ResetStats_Params
{
	bool                                               bResetAchievements;                                        // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
struct UOnlineSubsystemSteamworks_ShowCustomMessageUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Recipients;                                                // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     MessageTitle;                                              // (Parm, NeedCtorLink)
	struct FString                                     NonEditableMessage;                                        // (Parm, NeedCtorLink)
	struct FString                                     EditableMessage;                                           // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
struct UOnlineSubsystemSteamworks_ClearCrossTitleProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                TitleId;                                                   // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
struct UOnlineSubsystemSteamworks_GetCrossTitleProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                TitleId;                                                   // (Parm)
	class UOnlineProfileSettings*                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
struct UOnlineSubsystemSteamworks_OnReadCrossTitleProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                TitleId;                                                   // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
struct UOnlineSubsystemSteamworks_ReadCrossTitleProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                TitleId;                                                   // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                           // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
struct UOnlineSubsystemSteamworks_UnlockAvatarAward_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                AvatarItemId;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
struct UOnlineSubsystemSteamworks_GetSteamClanData_Params
{
	TArray<struct FSteamPlayerClanData>                Results;                                                   // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
struct UOnlineSubsystemSteamworks_AddGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
struct UOnlineSubsystemSteamworks_OnGetNumberOfCurrentPlayersComplete_Params
{
	int                                                TotalPlayers;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
struct UOnlineSubsystemSteamworks_GetNumberOfCurrentPlayers_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatars
struct UOnlineSubsystemSteamworks_ReadOnlineAvatars_Params
{
	TArray<struct FUniqueNetId>                        PlayerNetIds;                                              // (Const, Parm, OutParm, NeedCtorLink)
	TEnumAsByte<EAvatarSize>                           Size;                                                      // (Parm)
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
struct UOnlineSubsystemSteamworks_ShowCustomPlayersUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                   // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     Title;                                                     // (Parm, NeedCtorLink)
	struct FString                                     Description;                                               // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
struct UOnlineSubsystemSteamworks_GetAchievements_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FAchievementDetails>                 Achievements;                                              // (Parm, OutParm, NeedCtorLink)
	int                                                TitleId;                                                   // (OptionalParm, Parm)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadAchievementsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadAchievementsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
struct UOnlineSubsystemSteamworks_OnReadAchievementsComplete_Params
{
	int                                                TitleId;                                                   // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
struct UOnlineSubsystemSteamworks_ReadAchievements_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                TitleId;                                                   // (OptionalParm, Parm)
	bool                                               bShouldReadText;                                           // (OptionalParm, Parm)
	bool                                               bShouldReadImages;                                         // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
struct UOnlineSubsystemSteamworks_ShowPlayersUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
struct UOnlineSubsystemSteamworks_ShowFriendsInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
struct UOnlineSubsystemSteamworks_ShowFriendsUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
struct UOnlineSubsystemSteamworks_ClearProfileDataChangedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ProfileDataChangedDelegate;                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
struct UOnlineSubsystemSteamworks_AddProfileDataChangedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ProfileDataChangedDelegate;                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
struct UOnlineSubsystemSteamworks_OnProfileDataChanged_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
struct UOnlineSubsystemSteamworks_UnlockGamerPicture_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                PictureId;                                                 // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
struct UOnlineSubsystemSteamworks_AddUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
struct UOnlineSubsystemSteamworks_OnUnlockAchievementComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
struct UOnlineSubsystemSteamworks_UnlockAchievement_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                AchievementId;                                             // (Parm)
	float                                              PercentComplete;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateStat
struct UOnlineSubsystemSteamworks_UpdateStat_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FName                                       StatName;                                                  // (Parm)
	int                                                Points;                                                    // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
struct UOnlineSubsystemSteamworks_IsDeviceValid_Params
{
	int                                                DeviceID;                                                  // (Parm)
	int                                                SizeNeeded;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
struct UOnlineSubsystemSteamworks_GetDeviceSelectionResults_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     DeviceName;                                                // (Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
struct UOnlineSubsystemSteamworks_ClearDeviceSelectionDoneDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             DeviceDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
struct UOnlineSubsystemSteamworks_AddDeviceSelectionDoneDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             DeviceDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
struct UOnlineSubsystemSteamworks_OnDeviceSelectionComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
struct UOnlineSubsystemSteamworks_ShowDeviceSelectionUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                SizeNeeded;                                                // (Parm)
	bool                                               bManageStorage;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
struct UOnlineSubsystemSteamworks_ShowMembershipMarketplaceUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
struct UOnlineSubsystemSteamworks_ShowContentMarketplaceUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                CategoryMask;                                              // (OptionalParm, Parm)
	int                                                OfferId;                                                   // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
struct UOnlineSubsystemSteamworks_ShowInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     InviteText;                                                // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
struct UOnlineSubsystemSteamworks_ShowAchievementsUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
struct UOnlineSubsystemSteamworks_ShowMessagesUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
struct UOnlineSubsystemSteamworks_ShowGamerCardUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                UniqueId;                                                  // (OptionalParm, Parm)
	struct FString                                     PlayerName;                                                // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
struct UOnlineSubsystemSteamworks_ShowFeedbackUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
struct UOnlineSubsystemSteamworks_DeleteMessage_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                MessageIndex;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
struct UOnlineSubsystemSteamworks_UnmuteAll_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
struct UOnlineSubsystemSteamworks_MuteAll_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               bAllowFriends;                                             // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
struct UOnlineSubsystemSteamworks_CalcAggregateSkill_Params
{
	TArray<struct FDouble>                             Mus;                                                       // (Parm, NeedCtorLink)
	TArray<struct FDouble>                             Sigmas;                                                    // (Parm, NeedCtorLink)
	struct FDouble                                     OutAggregateMu;                                            // (Parm, OutParm)
	struct FDouble                                     OutAggregateSigma;                                         // (Parm, OutParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
struct UOnlineSubsystemSteamworks_RegisterStatGuid_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	struct FString                                     ClientStatGuid;                                            // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
struct UOnlineSubsystemSteamworks_GetClientStatGuid_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
struct UOnlineSubsystemSteamworks_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
struct UOnlineSubsystemSteamworks_AddRegisterHostStatGuidCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
struct UOnlineSubsystemSteamworks_OnRegisterHostStatGuidComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
struct UOnlineSubsystemSteamworks_RegisterHostStatGuid_Params
{
	struct FString                                     HostStatGuid;                                              // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
struct UOnlineSubsystemSteamworks_GetHostStatGuid_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
struct UOnlineSubsystemSteamworks_ClearFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             MessageDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
struct UOnlineSubsystemSteamworks_AddFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             MessageDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
struct UOnlineSubsystemSteamworks_OnFriendMessageReceived_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                SendingPlayer;                                             // (Parm)
	struct FString                                     SendingNick;                                               // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
struct UOnlineSubsystemSteamworks_GetFriendMessages_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FOnlineFriendMessage>                FriendMessages;                                            // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
struct UOnlineSubsystemSteamworks_AddJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
struct UOnlineSubsystemSteamworks_OnJoinFriendGameComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
struct UOnlineSubsystemSteamworks_JoinFriendGame_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                Friend;                                                    // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
struct UOnlineSubsystemSteamworks_ClearReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
struct UOnlineSubsystemSteamworks_AddReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
struct UOnlineSubsystemSteamworks_OnReceivedGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     InviterName;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
struct UOnlineSubsystemSteamworks_SendGameInviteToFriends_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Friends;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                      // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
struct UOnlineSubsystemSteamworks_SendGameInviteToFriend_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                Friend;                                                    // (Parm)
	struct FString                                     Text;                                                      // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
struct UOnlineSubsystemSteamworks_SendMessageToFriend_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                Friend;                                                    // (Parm)
	struct FString                                     Message;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
struct UOnlineSubsystemSteamworks_ClearFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
struct UOnlineSubsystemSteamworks_AddFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
struct UOnlineSubsystemSteamworks_OnFriendInviteReceived_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                          // (Parm)
	struct FString                                     RequestingNick;                                            // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
struct UOnlineSubsystemSteamworks_DenyFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                          // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
struct UOnlineSubsystemSteamworks_AcceptFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                          // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
struct UOnlineSubsystemSteamworks_RemoveFriend_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                FormerFriend;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
struct UOnlineSubsystemSteamworks_AddAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
struct UOnlineSubsystemSteamworks_OnAddFriendByNameComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
struct UOnlineSubsystemSteamworks_AddFriendByName_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     FriendName;                                                // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
struct UOnlineSubsystemSteamworks_AddFriend_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                NewFriend;                                                 // (Parm)
	struct FString                                     Message;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
struct UOnlineSubsystemSteamworks_GetKeyboardInputResults_Params
{
	unsigned char                                      bWasCanceled;                                              // (Parm, OutParm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
struct UOnlineSubsystemSteamworks_ClearKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
struct UOnlineSubsystemSteamworks_AddKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
struct UOnlineSubsystemSteamworks_OnKeyboardInputComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI
struct UOnlineSubsystemSteamworks_HideKeyboardUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
struct UOnlineSubsystemSteamworks_ShowKeyboardUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     TitleText;                                                 // (Parm, NeedCtorLink)
	struct FString                                     DescriptionText;                                           // (Parm, NeedCtorLink)
	bool                                               bIsPassword;                                               // (OptionalParm, Parm)
	bool                                               bShouldValidate;                                           // (OptionalParm, Parm)
	struct FString                                     DefaultText;                                               // (OptionalParm, Parm, NeedCtorLink)
	int                                                MaxResultLength;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
struct UOnlineSubsystemSteamworks_SetOnlineStatus_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                StatusId;                                                  // (Parm)
	TArray<struct FLocalizedStringSetting>             LocalizedStringSettings;                                   // (Const, Parm, OutParm, NeedCtorLink)
	TArray<struct FSettingsProperty>                   Properties;                                                // (Const, Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
struct UOnlineSubsystemSteamworks_GetTitleFileState_Params
{
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
struct UOnlineSubsystemSteamworks_GetTitleFileContents_Params
{
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                              // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
struct UOnlineSubsystemSteamworks_ReadTitleFile_Params
{
	struct FString                                     FileToRead;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
struct UOnlineSubsystemSteamworks_OnReadTitleFileComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
	struct FString                                     Filename;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
struct UOnlineSubsystemSteamworks_ClearStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
struct UOnlineSubsystemSteamworks_AddStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
struct UOnlineSubsystemSteamworks_OnStorageDeviceChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
struct UOnlineSubsystemSteamworks_GetLocale_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
struct UOnlineSubsystemSteamworks_GetNATType_Params
{
	TEnumAsByte<ENATType>                              ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
struct UOnlineSubsystemSteamworks_ClearConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
struct UOnlineSubsystemSteamworks_AddConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
struct UOnlineSubsystemSteamworks_OnConnectionStatusChange_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ConnectionStatus;                                          // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus
struct UOnlineSubsystemSteamworks_GetCurrentConnectionStatus_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
struct UOnlineSubsystemSteamworks_IsControllerConnected_Params
{
	int                                                ControllerId;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserRestoredDelegate
struct UOnlineSubsystemSteamworks_ClearUserRestoredDelegate_Params
{
	struct FScriptDelegate                             UserRestoredDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserRestoredDelegate
struct UOnlineSubsystemSteamworks_AddUserRestoredDelegate_Params
{
	struct FScriptDelegate                             UserRestoredDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserRestored
struct UOnlineSubsystemSteamworks_OnUserRestored_Params
{
	unsigned char                                      ControllerId;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserOrphanedDelegate
struct UOnlineSubsystemSteamworks_ClearUserOrphanedDelegate_Params
{
	struct FScriptDelegate                             UserOrphanedDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserOrphanedDelegate
struct UOnlineSubsystemSteamworks_AddUserOrphanedDelegate_Params
{
	struct FScriptDelegate                             UserOrphanedDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserOrphaned
struct UOnlineSubsystemSteamworks_OnUserOrphaned_Params
{
	unsigned char                                      ControllerId;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
struct UOnlineSubsystemSteamworks_ClearControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
struct UOnlineSubsystemSteamworks_AddControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
struct UOnlineSubsystemSteamworks_OnControllerChange_Params
{
	int                                                ControllerId;                                              // (Parm)
	bool                                               bIsConnected;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
struct UOnlineSubsystemSteamworks_SetNetworkNotificationPosition_Params
{
	TEnumAsByte<ENetworkNotificationPosition>          NewPos;                                                    // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
struct UOnlineSubsystemSteamworks_GetNetworkNotificationPosition_Params
{
	TEnumAsByte<ENetworkNotificationPosition>          ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
struct UOnlineSubsystemSteamworks_ClearExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
struct UOnlineSubsystemSteamworks_AddExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
struct UOnlineSubsystemSteamworks_OnExternalUIChange_Params
{
	bool                                               bIsOpening;                                                // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
struct UOnlineSubsystemSteamworks_ClearLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
struct UOnlineSubsystemSteamworks_AddLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
struct UOnlineSubsystemSteamworks_OnLinkStatusChange_Params
{
	bool                                               bIsConnected;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
struct UOnlineSubsystemSteamworks_HasLinkConnection_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
struct UOnlineSubsystemSteamworks_GetPlayerNicknameFromIndex_Params
{
	int                                                UserIndex;                                                 // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
struct UOnlineSubsystemSteamworks_WriteOnlinePlayerScores_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	int                                                LeaderboardId;                                             // (Parm)
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                              // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
struct UOnlineSubsystemSteamworks_OnFlushOnlineStatsComplete_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
struct UOnlineSubsystemSteamworks_FlushOnlineStats_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
struct UOnlineSubsystemSteamworks_WriteOnlineStats_Params
{
	struct FName                                       SessionName;                                               // (Parm)
	struct FUniqueNetId                                Player;                                                    // (Parm)
	class UOnlineStatsWrite*                           StatsWrite;                                                // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
struct UOnlineSubsystemSteamworks_FreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                 // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
struct UOnlineSubsystemSteamworks_OnReadOnlineStatsComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
struct UOnlineSubsystemSteamworks_ReadOnlineStatsByRankAroundPlayer_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                 // (Parm)
	int                                                NumRows;                                                   // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
struct UOnlineSubsystemSteamworks_ReadOnlineStatsByRank_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                 // (Parm)
	int                                                StartIndex;                                                // (OptionalParm, Parm)
	int                                                NumToRead;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
struct UOnlineSubsystemSteamworks_ReadOnlineStatsForFriends_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                 // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
struct UOnlineSubsystemSteamworks_ReadOnlineStats_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                   // (Const, Parm, OutParm, NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                                 // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
struct UOnlineSubsystemSteamworks_SetSpeechRecognitionObject_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class USpeechRecognition*                          SpeechRecogObj;                                            // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
struct UOnlineSubsystemSteamworks_SelectVocabulary_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                VocabularyId;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearRecognitionCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             RecognitionDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
struct UOnlineSubsystemSteamworks_AddRecognitionCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             RecognitionDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
struct UOnlineSubsystemSteamworks_OnRecognitionComplete_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
struct UOnlineSubsystemSteamworks_GetRecognitionResults_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FSpeechRecognizedWord>               Words;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
struct UOnlineSubsystemSteamworks_StopSpeechRecognition_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
struct UOnlineSubsystemSteamworks_StartSpeechRecognition_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
struct UOnlineSubsystemSteamworks_StopNetworkedVoice_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
struct UOnlineSubsystemSteamworks_StartNetworkedVoice_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
struct UOnlineSubsystemSteamworks_ClearPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
struct UOnlineSubsystemSteamworks_AddPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
struct UOnlineSubsystemSteamworks_OnPlayerTalkingStateChange_Params
{
	struct FUniqueNetId                                Player;                                                    // (Parm)
	bool                                               bIsTalking;                                                // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
struct UOnlineSubsystemSteamworks_UnmuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               bIsSystemWide;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
struct UOnlineSubsystemSteamworks_MuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               bIsSystemWide;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
struct UOnlineSubsystemSteamworks_SetRemoteTalkerPriority_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	int                                                Priority;                                                  // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
struct UOnlineSubsystemSteamworks_IsHeadsetPresent_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
struct UOnlineSubsystemSteamworks_IsRemotePlayerTalking_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
struct UOnlineSubsystemSteamworks_IsLocalPlayerTalking_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
struct UOnlineSubsystemSteamworks_UnregisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
struct UOnlineSubsystemSteamworks_RegisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
struct UOnlineSubsystemSteamworks_UnregisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
struct UOnlineSubsystemSteamworks_RegisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
struct UOnlineSubsystemSteamworks_GetFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FOnlineFriend>                       Friends;                                                   // (Parm, OutParm, NeedCtorLink)
	int                                                Count;                                                     // (OptionalParm, Parm)
	int                                                StartingAt;                                                // (OptionalParm, Parm)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
struct UOnlineSubsystemSteamworks_OnReadFriendsComplete_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
struct UOnlineSubsystemSteamworks_ReadFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	int                                                Count;                                                     // (OptionalParm, Parm)
	int                                                StartingAt;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearWritePlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_AddWritePlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
struct UOnlineSubsystemSteamworks_OnWritePlayerStorageComplete_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
struct UOnlineSubsystemSteamworks_WritePlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                             // (Parm)
	int                                                DeviceID;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
struct UOnlineSubsystemSteamworks_GetPlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlinePlayerStorage*                        ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                                     // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                                     // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
struct UOnlineSubsystemSteamworks_OnReadPlayerStorageForNetIdComplete_Params
{
	struct FUniqueNetId                                NetId;                                                     // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
struct UOnlineSubsystemSteamworks_ReadPlayerStorageForNetId_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                NetId;                                                     // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                             // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadPlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadPlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
struct UOnlineSubsystemSteamworks_OnReadPlayerStorageComplete_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
struct UOnlineSubsystemSteamworks_ReadPlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                             // (Parm)
	int                                                DeviceID;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
struct UOnlineSubsystemSteamworks_OnWriteProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
struct UOnlineSubsystemSteamworks_WriteProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                           // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
struct UOnlineSubsystemSteamworks_GetProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlineProfileSettings*                      ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
struct UOnlineSubsystemSteamworks_OnReadProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
struct UOnlineSubsystemSteamworks_ReadProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                           // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
struct UOnlineSubsystemSteamworks_ClearFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             FriendsDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAvatarChangeDelegate
struct UOnlineSubsystemSteamworks_ClearAvatarChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             AvatarDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAvatarChangeDelegate
struct UOnlineSubsystemSteamworks_AddAvatarChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             AvatarDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendPresence
struct UOnlineSubsystemSteamworks_GetFriendPresence_Params
{
	struct FOnlineFriend                               FriendData;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendPresenceChangeDelegate
struct UOnlineSubsystemSteamworks_ClearFriendPresenceChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             PresenceDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendPresenceChangeDelegate
struct UOnlineSubsystemSteamworks_AddFriendPresenceChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             PresenceDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
struct UOnlineSubsystemSteamworks_AddFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             FriendsDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
struct UOnlineSubsystemSteamworks_ClearMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
struct UOnlineSubsystemSteamworks_AddMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
struct UOnlineSubsystemSteamworks_ClearLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
struct UOnlineSubsystemSteamworks_AddLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
struct UOnlineSubsystemSteamworks_ClearLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                                       // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
struct UOnlineSubsystemSteamworks_AddLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                                       // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
struct UOnlineSubsystemSteamworks_OnLoginStatusChange_Params
{
	TEnumAsByte<ELoginStatus>                          NewStatus;                                                 // (Parm)
	struct FUniqueNetId                                NewId;                                                     // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
struct UOnlineSubsystemSteamworks_ClearLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
struct UOnlineSubsystemSteamworks_AddLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSignInCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearUserSignInCompleteDelegate_Params
{
	struct FScriptDelegate                             UserSignInCompleteDelegate;                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSignInCompleteDelegate
struct UOnlineSubsystemSteamworks_AddUserSignInCompleteDelegate_Params
{
	struct FScriptDelegate                             UserSignInCompleteDelegate;                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSwitchCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearUserSwitchCompleteDelegate_Params
{
	struct FScriptDelegate                             UserSwitchCompleteDelegate;                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSwitchCompleteDelegate
struct UOnlineSubsystemSteamworks_AddUserSwitchCompleteDelegate_Params
{
	struct FScriptDelegate                             UserSwitchCompleteDelegate;                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPrimaryPlayerGamepadToLastInput
struct UOnlineSubsystemSteamworks_SetPrimaryPlayerGamepadToLastInput_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
struct UOnlineSubsystemSteamworks_IsMuted_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
struct UOnlineSubsystemSteamworks_AreAnyFriends_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TArray<struct FFriendsQuery>                       Query;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
struct UOnlineSubsystemSteamworks_IsFriend_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RequestRestrictedFeatureMessaging
struct UOnlineSubsystemSteamworks_RequestRestrictedFeatureMessaging_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     RestrictedFeature;                                         // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData
struct UOnlineSubsystemSteamworks_CanUploadFitnessData_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent
struct UOnlineSubsystemSteamworks_CanShareKinectContent_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork
struct UOnlineSubsystemSteamworks_CanShareWithSocialNetwork_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet
struct UOnlineSubsystemSteamworks_CanBrowseInternet_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent
struct UOnlineSubsystemSteamworks_CanAccessPremiumVideoContent_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent
struct UOnlineSubsystemSteamworks_CanAccessPremiumContent_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage
struct UOnlineSubsystemSteamworks_CanUseCloudStorage_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips
struct UOnlineSubsystemSteamworks_CanRecordDVRClips_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
struct UOnlineSubsystemSteamworks_CanShowPresenceInformation_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
struct UOnlineSubsystemSteamworks_CanViewPlayerProfiles_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
struct UOnlineSubsystemSteamworks_CanPurchaseContent_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
struct UOnlineSubsystemSteamworks_CanDownloadUserContent_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent
struct UOnlineSubsystemSteamworks_CanShareUserCreatedContent_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice
struct UOnlineSubsystemSteamworks_CanCommunicateVoice_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo
struct UOnlineSubsystemSteamworks_CanCommunicateVideo_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText
struct UOnlineSubsystemSteamworks_CanCommunicateText_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
struct UOnlineSubsystemSteamworks_CanCommunicate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<ECommunicationMethod>                  CommMethod;                                                // (Parm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
struct UOnlineSubsystemSteamworks_CanPlayOnline_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                        // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                         // (OptionalParm, Parm)
	struct FString                                     Reason;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
struct UOnlineSubsystemSteamworks_GetPlayerNickname_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
struct UOnlineSubsystemSteamworks_GetUniquePlayerId_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
struct UOnlineSubsystemSteamworks_IsLocalLogin_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
struct UOnlineSubsystemSteamworks_IsGuestLogin_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
struct UOnlineSubsystemSteamworks_GetLoginStatus_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<ELoginStatus>                          ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
struct UOnlineSubsystemSteamworks_ClearLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             LogoutDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
struct UOnlineSubsystemSteamworks_AddLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             LogoutDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
struct UOnlineSubsystemSteamworks_OnLogoutCompleted_Params
{
	bool                                               bWasSuccessful;                                            // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
struct UOnlineSubsystemSteamworks_Logout_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
struct UOnlineSubsystemSteamworks_ClearLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             LoginFailedDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
struct UOnlineSubsystemSteamworks_AddLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FScriptDelegate                             LoginFailedDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
struct UOnlineSubsystemSteamworks_OnLoginFailed_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	TEnumAsByte<EOnlineServerConnectionStatus>         ErrorCode;                                                 // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
struct UOnlineSubsystemSteamworks_AutoLogin_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
struct UOnlineSubsystemSteamworks_Login_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	struct FString                                     LoginName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                  // (Parm, NeedCtorLink)
	bool                                               bWantsLocalOnly;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPlayerDialogActive
struct UOnlineSubsystemSteamworks_SetKickPlayerDialogActive_Params
{
	bool                                               Active;                                                    // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsUserSwitchActive
struct UOnlineSubsystemSteamworks_IsUserSwitchActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPreviousUser
struct UOnlineSubsystemSteamworks_SetKickPreviousUser_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SupportInGameLogin
struct UOnlineSubsystemSteamworks_SupportInGameLogin_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowControllerUI
struct UOnlineSubsystemSteamworks_ShowControllerUI_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUIForOrphanedUser
struct UOnlineSubsystemSteamworks_ShowLoginUIForOrphanedUser_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
struct UOnlineSubsystemSteamworks_ShowLoginUI_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
	bool                                               bShowOnlineOnly;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAvatarChange
struct UOnlineSubsystemSteamworks_OnAvatarChange_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FriendPresenceChange
struct UOnlineSubsystemSteamworks_FriendPresenceChange_Params
{
	struct FUniqueNetId                                PlayerID;                                                  // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
struct UOnlineSubsystemSteamworks_OnFriendsChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
struct UOnlineSubsystemSteamworks_OnMutingChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
struct UOnlineSubsystemSteamworks_OnLoginCancelled_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
struct UOnlineSubsystemSteamworks_OnLoginChange_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSignInComplete
struct UOnlineSubsystemSteamworks_OnUserSignInComplete_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSwitchComplete
struct UOnlineSubsystemSteamworks_OnUserSwitchComplete_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
struct UOnlineSubsystemSteamworks_Exit_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PostInit
struct UOnlineSubsystemSteamworks_PostInit_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
struct UOnlineSubsystemSteamworks_Init_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnlineChanged
struct UOnlineSubsystemSteamworks_CanPlayOnlineChanged_Params
{
	unsigned char                                      LocalUserNum;                                              // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
