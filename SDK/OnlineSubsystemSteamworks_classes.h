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
// Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks
// 0x0038 (FullSize[0x00B0] - InheritedSize[0x0078])
class UOnlinePurchaseInterfaceSteamworks : public UOnlinePurchaseInterfaceImpl
{
public:
	TArray<struct FAppPriceInfoRequest>                AppPriceInfoRequests;                                      // 0x0090(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FScriptDelegate>                     MicroTxnResponseDelegates;                                 // 0x00A0(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks");
		return ptr;
	}


	void ClearMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate);
	void AddMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate);
	struct FString FormatCurrency(const struct FString& Currency, int Price);
	void HandleGetAppPriceInfoComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed);
	bool GetAppPriceInfo(struct FUniqueNetId* PlayerID, TArray<struct FName>* AppNames, const struct FScriptDelegate& Callback);
	bool AppIdToName(const struct FString& AppID, struct FName* AppName, bool bOptional);
	bool AppNameToId(const struct FName& AppName, struct FString* AppID, bool bOptional);
};

// Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks
// 0x00AE (FullSize[0x03D8] - InheritedSize[0x032A])
class UOnlineAuthInterfaceSteamworks : public UOnlineAuthInterfaceImpl
{
public:
	TArray<unsigned char>                              EncryptedTicket;                                           // 0x03C8(0x0010) (Const, NeedCtorLink)
	unsigned char                                      UnknownDataPTV9[0x8];                                      // 0x03D8(0x0008) UNKNOWN PROPERTY: QWordProperty OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EncryptedTicketHandle


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks");
		return ptr;
	}


	bool RequestAuthTicket(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	bool RequiresAuthTicket();
	bool GetServerAddr(struct FIpAddr* OutServerIP, int* OutServerPort);
	bool GetServerUniqueId(struct FUniqueNetId* OutServerUID);
	bool VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int AuthTicketUID);
	bool CreateServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int* OutAuthTicketUID);
	bool VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int AuthTicketUID);
	bool CreateClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort, bool bSecure, int* OutAuthTicketUID);
	bool SendServerAuthRequest(const struct FUniqueNetId& ServerUID);
	bool SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID);
};

// Class OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks
// 0x00F0 (FullSize[0x0150] - InheritedSize[0x0060])
class UOnlineCommunityContentInterfaceSteamworks : public UObject
{
public:
	class UOnlineSubsystemSteamworks*                  OwningSubsystem;                                           // 0x0060(0x0008)
	struct FWorkshopItemData                           WorkshopItem;                                              // 0x0068(0x00A0) (NeedCtorLink)
	struct FScriptDelegate                             __OnDownloadedWorkshopData__Delegate;                      // 0x0108(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataY2QN[0xC];                                      // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadContentListComplete__Delegate;                     // 0x0120(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataX4QA[0xC];                                      // 0x0120(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadFriendsContentListComplete__Delegate;              // 0x0138(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData34VU[0xC];                                      // 0x0138(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUploadContentComplete__Delegate;                       // 0x0150(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataS25D[0xC];                                      // 0x0150(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDownloadContentComplete__Delegate;                     // 0x0168(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataWMML[0xC];                                      // 0x0168(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnGetContentPayloadComplete__Delegate;                   // 0x0180(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData8T08[0xC];                                      // 0x0180(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks");
		return ptr;
	}


	void UpdateWorkshopItemUploadProgress();
	void DownloadAllWorkshopData(const struct FScriptDelegate& Callback);
	void CreateWorkshopItem();
	void RateContent(unsigned char PlayerNum, struct FCommunityContentFile* FileToRate, int NewRating);
	void ClearGetContentPayloadCompleteDelegate(const struct FScriptDelegate& GetContentPayloadCompleteDelegate);
	void AddGetContentPayloadCompleteDelegate(const struct FScriptDelegate& GetContentPayloadCompleteDelegate);
	void OnGetContentPayloadComplete(bool bWasSuccessful, const struct FCommunityContentFile& FileDownloaded, TArray<unsigned char>* Payload);
	bool GetContentPayload(unsigned char PlayerNum, struct FCommunityContentFile* FileDownloaded);
	void ClearDownloadContentCompleteDelegate(const struct FScriptDelegate& DownloadContentCompleteDelegate);
	void AddDownloadContentCompleteDelegate(const struct FScriptDelegate& DownloadContentCompleteDelegate);
	void OnDownloadContentComplete(bool bWasSuccessful, const struct FCommunityContentFile& FileDownloaded, TArray<unsigned char> Payload);
	bool DownloadContent(unsigned char PlayerNum, struct FCommunityContentFile* FileToDownload);
	void ClearUploadContentCompleteDelegate(const struct FScriptDelegate& UploadContentCompleteDelegate);
	void AddUploadContentCompleteDelegate(const struct FScriptDelegate& UploadContentCompleteDelegate);
	void OnUploadContentComplete(bool bWasSuccessful, const struct FCommunityContentFile& UploadedFile);
	bool UploadContent(unsigned char PlayerNum, TArray<unsigned char>* Payload, struct FCommunityContentMetadata* MetaData);
	bool GetFriendsContentList(unsigned char PlayerNum, struct FOnlineFriend* Friend, TArray<struct FCommunityContentFile>* ContentFiles);
	void ClearReadFriendsContentListCompleteDelegate(const struct FScriptDelegate& ReadFriendsContentListCompleteDelegate);
	void AddReadFriendsContentListCompleteDelegate(const struct FScriptDelegate& ReadFriendsContentListCompleteDelegate);
	void OnReadFriendsContentListComplete(bool bWasSuccessful);
	bool ReadFriendsContentList(unsigned char PlayerNum, TArray<struct FOnlineFriend>* Friends, int StartAt, int NumToRead);
	bool GetContentList(unsigned char PlayerNum, TArray<struct FCommunityContentFile>* ContentFiles);
	void ClearReadContentListCompleteDelegate(const struct FScriptDelegate& ReadContentListCompleteDelegate);
	void AddReadContentListCompleteDelegate(const struct FScriptDelegate& ReadContentListCompleteDelegate);
	void OnReadContentListComplete(bool bWasSuccessful, TArray<struct FCommunityContentFile> ContentFiles);
	bool ReadContentList(unsigned char PlayerNum, const struct FUniqueNetId& NetId, const struct FString& Path, int StartAt, int NumToRead);
	void Exit();
	bool Init();
	void OnDownloadedWorkshopData(TArray<struct FDownloadedWorkshopData>* Items, bool bSuccess);
};

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x0256 (FullSize[0x0496] - InheritedSize[0x0240])
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	struct FMatchmakingQueryState                      ServerBrowserSearchQuery;                                  // 0x0318(0x0078) (Const, NeedCtorLink)
	struct FMatchmakingQueryState                      InviteSearchQuery;                                         // 0x0390(0x0078) (Const, NeedCtorLink)
	float                                              ServerBrowserTimeout;                                      // 0x0408(0x0004)
	float                                              InviteTimeout;                                             // 0x040C(0x0004)
	struct FUniqueNetId                                InviteServerUID;                                           // 0x0410(0x0038) (Const)
	class UOnlineGameSearch*                           InviteGameSearch;                                          // 0x0448(0x0008) (Const)
	struct FString                                     InviteLocationUrl;                                         // 0x0450(0x0010) (Const, NeedCtorLink)
	TArray<struct FScriptDelegate>                     RegisterPlayerCompleteDelegates;                           // 0x0460(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnregisterPlayerCompleteDelegates;                         // 0x0470(0x0010) (NeedCtorLink)
	unsigned char                                      bFilterEngineBuild : 1;                                    // 0x0480(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataIO7F[0x2];                                      // 0x0480(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataBSEL[0x4];                                      // 0x0484(0x0004) MISSED OFFSET
	TArray<struct FFilterKeyToSteamKeyMapping>         FilterKeyToSteamKeyMap;                                    // 0x0488(0x0010) (Config, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks");
		return ptr;
	}


	void PrintDebugInfoNative(class UDebugDrawer* Drawer);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool QueryNonAdvertisedData(int StartAt, int NumberToQuery);
	void ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	void ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited);
	bool AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult, const struct FString& ErrorString);
	bool UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData);
};

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet
// 0x00F8 (FullSize[0x0338] - InheritedSize[0x0240])
class UOnlineGameInterfaceSteamworks_PsyNet : public UOnlineGameInterfaceImpl
{
public:
	TArray<struct FScriptDelegate>                     RegisterPlayerCompleteDelegates;                           // 0x0318(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnregisterPlayerCompleteDelegates;                         // 0x0328(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet");
		return ptr;
	}


	void ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	void ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited);
	bool QueryNonAdvertisedData(int StartAt, int NumberToQuery);
	bool AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName);
	bool UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData);
	void SetFriendJoinLocation(const struct FUniqueNetId& JoinablePlayerID, const struct FString& ServerAddress, TEnumAsByte<ELobbyVisibility> Visibility);
};

// Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks
// 0x00EA (FullSize[0x0302] - InheritedSize[0x0218])
class UOnlineLobbyInterfaceSteamworks : public UOnlineLobbyInterfaceImpl
{
public:
	TArray<struct FLobbyMetaData>                      CreateLobbySettings;                                       // 0x02C0(0x0010) (NeedCtorLink)
	struct FUniqueLobbyId                              PendingCreateLobbyResult;                                  // 0x02D0(0x0010) (Const)
	unsigned char                                      bLobbySearchInProgress : 1;                                // 0x02E0(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownDataZ2ZI[0x2];                                      // 0x02E0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataJQJX[0x4];                                      // 0x02E4(0x0004) MISSED OFFSET
	TArray<struct FString>                             LobbyMemberKeys;                                           // 0x02E8(0x0010) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyKicked__Delegate;                                 // 0x02F8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataLX7N[0xC];                                      // 0x02F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks");
		return ptr;
	}


	bool KickPlayer(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID, TEnumAsByte<ELobbyKickReason> Reason);
	bool GetLobbyFromCommandline(struct FUniqueLobbyId* LobbyId, bool bMarkAsJoined);
	bool ShowInviteUI(unsigned char LocalUserNum, struct FUniqueLobbyId* LobbyId);
	bool InviteToLobby(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
	bool CanInviteToLobby(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
	bool SetLobbyOwner(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* NewOwner);
	bool SetLobbyLock(struct FUniqueLobbyId* LobbyId, bool bLocked);
	bool SetLobbyType(struct FUniqueLobbyId* LobbyId, TEnumAsByte<ELobbyVisibility> Type);
	bool SetLobbyServer(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* ServerUID, const struct FString& ServerIP);
	bool RemoveLobbySetting(struct FUniqueLobbyId* LobbyId, const struct FString& Key);
	bool SetLobbySetting(struct FUniqueLobbyId* LobbyId, const struct FString& Key, const struct FString& Value);
	bool GetLobbyAdmin(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* AdminId);
	void OnLobbyKicked(struct FActiveLobbyInfo* Lobby, int AdminIndex);
	bool SendLobbyBinaryData(struct FUniqueLobbyId* LobbyId, TArray<unsigned char>* Data);
	bool SetLobbyUserSetting(struct FUniqueLobbyId* LobbyId, const struct FString& Key, const struct FString& Value);
	bool LeaveLobby(struct FUniqueLobbyId* LobbyId);
	bool JoinLobby(int LocalPlayerNum, struct FUniqueLobbyId* LobbyId);
	bool UpdateFoundLobbies(const struct FUniqueLobbyId& LobbyId);
	bool FindLobbies(int MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int MinSlots, TEnumAsByte<ELobbyDistance> Distance);
	bool CreateLobby(int LocalPlayerNum, int MaxPlayers, TEnumAsByte<ELobbyVisibility> Type, TArray<struct FLobbyMetaData> InitialSettings);
};

// Class OnlineSubsystemSteamworks.SteamWorkshopCommandlet
// 0x0016 (FullSize[0x00C0] - InheritedSize[0x00AA])
class USteamWorkshopCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownDataFV9U[0x4];                                      // 0x00B4(0x0004) MISSED OFFSET
	class UOnlineSubsystemCommonImpl*                  OnlineSub;                                                 // 0x00B8(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.SteamWorkshopCommandlet");
		return ptr;
	}


	bool Init();
};

// Class OnlineSubsystemSteamworks.SteamWorkshopEngine
// 0x0014 (FullSize[0x0B4A] - InheritedSize[0x0B36])
class USteamWorkshopEngine : public UGameEngine
{
public:
	unsigned char                                      bHasFinsihed : 1;                                          // 0x0B48(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataLWAA[0x2];                                      // 0x0B48(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.SteamWorkshopEngine");
		return ptr;
	}


};

// Class OnlineSubsystemSteamworks.IpNetDriverSteamworks
// 0x0022 (FullSize[0x028A] - InheritedSize[0x0268])
class UIpNetDriverSteamworks : public UTcpNetDriver
{
public:
	unsigned char                                      bSteamSocketsOnly : 1;                                     // 0x0288(0x0001) BIT_FIELD (Config)
	unsigned char                                      UnknownDataUWKI[0x2];                                      // 0x0288(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataW056[0x14];                                     // 0x028C(0x0014) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.IpNetDriverSteamworks");
		return ptr;
	}


};

// Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks
// 0x0028 (FullSize[0xB200] - InheritedSize[0xB1D8])
class UIpNetConnectionSteamworks : public UTcpipConnection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks");
		return ptr;
	}


};

// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x0866 (FullSize[0x0B8C] - InheritedSize[0x0326])
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	struct FPointer                                    Discord;                                                   // 0x0340(0x0008) (Native)
	TArray<struct FName>                               UnlockedDLC;                                               // 0x0348(0x0010) (Transient, NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnlockedDLCDelegates;                                      // 0x0358(0x0010) (Transient, NeedCtorLink)
	unsigned char                                      bStoringAchievement : 1;                                   // 0x0368(0x0001) BIT_FIELD
	unsigned char                                      UnknownData7LGY[0x2];                                      // 0x0368(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bClientStatsStorePending : 1;                              // 0x0368(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataD5BT[0x2];                                      // 0x036C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bGSStatsStoresSuccess : 1;                                 // 0x0368(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataY95R[0x2];                                      // 0x036C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bNeedsKeyboardTicking : 1;                                 // 0x0368(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownData8EGZ[0x2];                                      // 0x036C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bLastHasConnection : 1;                                    // 0x0368(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownDataFV0X[0x2];                                      // 0x036C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIsStatsSessionOk : 1;                                     // 0x0368(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataPN3P[0x2];                                      // 0x036C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bHasSteamworksAccount : 1;                                 // 0x0368(0x0001) BIT_FIELD (Const, Config)
	unsigned char                                      UnknownDataRD1C[0x2];                                      // 0x036C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bShouldUseMcp : 1;                                         // 0x0368(0x0001) BIT_FIELD (Const, Config)
	unsigned char                                      UnknownDataSQVT[0x2];                                      // 0x036C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bShowIPCCount : 1;                                         // 0x0368(0x0001) BIT_FIELD (Const, Config)
	unsigned char                                      UnknownDataVMZ9[0x2];                                      // 0x036C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bInterceptFriendMessages : 1;                              // 0x0368(0x0001) BIT_FIELD (Config)
	unsigned char                                      UnknownDataQIJJ[0x2];                                      // 0x036C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                TotalGSStatsStoresPending;                                 // 0x036C(0x0004)
	TEnumAsByte<EOnlineEnumerationReadState>           UserStatsReceivedState;                                    // 0x0370(0x0001)
	TEnumAsByte<ELoginStatus>                          LoggedInStatus;                                            // 0x0371(0x0001) (Const)
	unsigned char                                      KeyboardInputWasCanceled;                                  // 0x0372(0x0001)
	unsigned char                                      bWasKeyboardInputCanceled;                                 // 0x0373(0x0001) (Const)
	TEnumAsByte<ENetworkNotificationPosition>          CurrentNotificationPosition;                               // 0x0374(0x0001) (Config)
	unsigned char                                      UnknownDataTQ5M[0x3];                                      // 0x0375(0x0003) MISSED OFFSET
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                             // 0x0378(0x0008) (Const)
	struct FString                                     LocalProfileName;                                          // 0x0380(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     LoggedInPlayerName;                                        // 0x0390(0x0010) (Const, NeedCtorLink)
	struct FUniqueNetId                                LoggedInPlayerId;                                          // 0x03A0(0x0038) (Const)
	int                                                LoggedInPlayerNum;                                         // 0x03D8(0x0004) (Const)
	unsigned char                                      UnknownData1TCP[0x4];                                      // 0x03DC(0x0004) MISSED OFFSET
	struct FString                                     LoggedInCountry;                                           // 0x03E0(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<int>                                        AvatarSizes;                                               // 0x03F0(0x0010) (Edit, Const, NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteProfileSettingsDelegates;                             // 0x0400(0x0010) (NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                             // 0x0410(0x0008)
	TArray<struct FScriptDelegate>                     LocalPlayerStorageReadDelegates;                           // 0x0418(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LocalPlayerStorageWriteDelegates;                          // 0x0428(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RemotePlayerStorageReadDelegates;                          // 0x0438(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     SpeechRecognitionCompleteDelegates;                        // 0x0448(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadFriendsDelegates;                                      // 0x0458(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendsChangeDelegates;                                    // 0x0468(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     MutingChangeDelegates;                                     // 0x0478(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginChangeDelegates;                                      // 0x0488(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginFailedDelegates;                                      // 0x0498(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     TalkingDelegates;                                          // 0x04A8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadOnlineStatsCompleteDelegates;                          // 0x04B8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FlushOnlineStatsDelegates;                                 // 0x04C8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ConnectionStatusChangeDelegates;                           // 0x04D8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LinkStatusDelegates;                                       // 0x04E8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                            // 0x04F8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementDelegates;                                      // 0x0508(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementReadDelegates;                                  // 0x0518(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     EnumerateUserFilesCompleteDelegates;                       // 0x0528(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserFileCompleteDelegates;                             // 0x0538(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserFileCompleteDelegates;                            // 0x0548(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeleteUserFileCompleteDelegates;                           // 0x0558(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     SharedFileReadCompleteDelegates;                           // 0x0568(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     SharedFileWriteCompleteDelegates;                          // 0x0578(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ExternalUIChangeDelegates;                                 // 0x0588(0x0010) (Transient, NeedCtorLink)
	TArray<struct FScriptDelegate>                     KeyboardInputCompleteDelegates;                            // 0x0598(0x0010) (Transient, NeedCtorLink)
	struct FString                                     KeyboardInputResults;                                      // 0x05A8(0x0010) (NeedCtorLink)
	struct FLocalTalkerSteam                           CurrentLocalTalker;                                        // 0x05B8(0x0048)
	float                                              LastLocalTalkerNotificationTime;                           // 0x0600(0x0004) (Const, Transient)
	float                                              MaxTalkerNotificationTime;                                 // 0x0604(0x0004) (Const)
	TArray<struct FUniqueNetId>                        PendingRequestUserInformation;                             // 0x0608(0x0010) (Transient, NeedCtorLink)
	TArray<struct FRemoteTalker>                       RemoteTalkers;                                             // 0x0618(0x0010) (NeedCtorLink)
	int                                                AppID;                                                     // 0x0628(0x0004) (Const)
	unsigned char                                      UnknownDataQVCB[0x4];                                      // 0x062C(0x0004) MISSED OFFSET
	class UOnlineStatsRead*                            CurrentStatsRead;                                          // 0x0630(0x0008) (Const)
	TArray<struct FPendingPlayerStats>                 PendingStats;                                              // 0x0638(0x0010) (Const, NeedCtorLink)
	struct FString                                     KeyboardResultsString;                                     // 0x0648(0x0010) (Const, NeedCtorLink)
	TArray<struct FScriptDelegate>                     KeyboardInputDelegates;                                    // 0x0658(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendInviteReceivedDelegates;                             // 0x0668(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendMessageReceivedDelegates;                            // 0x0678(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AddFriendByNameCompleteDelegates;                          // 0x0688(0x0010) (NeedCtorLink)
	struct FProfileSettingsCache                       ProfileCache;                                              // 0x0698(0x0038) (NeedCtorLink)
	class UOnlinePlayerStorage*                        PlayerStorageCache;                                        // 0x06D0(0x0008)
	struct FString                                     CachedFriendMessage;                                       // 0x06D8(0x0010) (Const, NeedCtorLink)
	struct FDeviceIdCache                              DeviceCache;                                               // 0x06E8(0x0030) (NeedCtorLink)
	TArray<struct FString>                             LocationUrlsForInvites;                                    // 0x0718(0x0010) (Const, Config, NeedCtorLink)
	struct FString                                     LocationUrl;                                               // 0x0728(0x0010) (Const, Config, NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceivedGameInviteDelegates;                               // 0x0738(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinFriendGameCompleteDelegates;                           // 0x0748(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     GetNumberOfCurrentPlayersCompleteDelegates;                // 0x0758(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RegisterHostStatGuidCompleteDelegates;                     // 0x0768(0x0010) (NeedCtorLink)
	TArray<struct FOnlineFriendMessage>                CachedFriendMessages;                                      // 0x0778(0x0010) (NeedCtorLink)
	TArray<struct FOnlineStatusMapping>                StatusMappings;                                            // 0x0788(0x0010) (Const, Config, NeedCtorLink)
	struct FString                                     DefaultStatus;                                             // 0x0798(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     GameInviteMessage;                                         // 0x07A8(0x0010) (Const, Localized, NeedCtorLink)
	struct FControllerConnectionState                  ControllerStates[0x4];                                     // 0x07B8(0x0008)
	float                                              ConnectionPresenceTimeInterval;                            // 0x07D8(0x0004)
	float                                              ConnectionPresenceElapsedTime;                             // 0x07DC(0x0004) (Const)
	struct FString                                     EncryptedProductKey;                                       // 0x07E0(0x0010) (Const, Config, NeedCtorLink)
	TArray<struct FUniqueNetId>                        MuteList;                                                  // 0x07F0(0x0010) (Const, NeedCtorLink)
	TArray<struct FSteamUserCloud>                     UserCloudFiles;                                            // 0x0800(0x0010) (NeedCtorLink)
	TArray<struct FSteamUserCloudMetadata>             UserCloudMetadata;                                         // 0x0810(0x0010) (NeedCtorLink)
	TArray<struct FTitleFile>                          SharedFileCache;                                           // 0x0820(0x0010) (NeedCtorLink)
	TArray<struct FQueuedAvatarRequest>                QueuedAvatarRequests;                                      // 0x0830(0x0010) (Const, NeedCtorLink)
	TArray<struct FAchievementMappingInfo>             AchievementMappings;                                       // 0x0840(0x0010) (Config, NeedCtorLink)
	TArray<struct FAchievementProgressStat>            PendingAchievementProgress;                                // 0x0850(0x0010) (Const, NeedCtorLink)
	TArray<struct FLeaderboardTemplate>                LeaderboardList;                                           // 0x0860(0x0010) (NeedCtorLink)
	TArray<struct FDeferredLeaderboardRead>            DeferredLeaderboardReads;                                  // 0x0870(0x0010) (Const, NeedCtorLink)
	TArray<struct FDeferredLeaderboardWrite>           DeferredLeaderboardWrites;                                 // 0x0880(0x0010) (Const, NeedCtorLink)
	TArray<struct FDeferredLeaderboardWrite>           PendingLeaderboardStats;                                   // 0x0890(0x0010) (Const, NeedCtorLink)
	TArray<struct FViewIdToLeaderboardName>            LeaderboardNameMappings;                                   // 0x08A0(0x0010) (Config, NeedCtorLink)
	TArray<int>                                        GameServerStatsMappings;                                   // 0x08B0(0x0010) (Config, NeedCtorLink)
	class UOnlinePurchaseInterfaceSteamworks*          CachedPurchaseInt;                                         // 0x08C0(0x0008) (Const)
	class UOnlineAuthInterfaceSteamworks*              CachedAuthInt;                                             // 0x08C8(0x0008) (Const)
	TArray<struct FIpAddr>                             PendingRedirects;                                          // 0x08D0(0x0010) (Const, NeedCtorLink)
	class UOnlineLobbyInterfaceSteamworks*             LobbyInterfaceImpl;                                        // 0x08E0(0x0008)
	struct FScriptDelegate                             __CanPlayOnlineChanged__Delegate;                          // 0x08E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData9IRU[0xC];                                      // 0x08E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUserSwitchComplete__Delegate;                          // 0x0900(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataS1GA[0xC];                                      // 0x0900(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUserSignInComplete__Delegate;                          // 0x0918(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataE9BH[0xC];                                      // 0x0918(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLoginChange__Delegate;                                 // 0x0930(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataNL6V[0xC];                                      // 0x0930(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                              // 0x0948(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataOGI6[0xC];                                      // 0x0948(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnMutingChange__Delegate;                                // 0x0960(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataLRE9[0xC];                                      // 0x0960(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                               // 0x0978(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataRRX8[0xC];                                      // 0x0978(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __FriendPresenceChange__Delegate;                          // 0x0990(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataBLW6[0xC];                                      // 0x0990(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAvatarChange__Delegate;                                // 0x09A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataNUTM[0xC];                                      // 0x09A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                                 // 0x09C0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5FRZ[0xC];                                      // 0x09C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                             // 0x09D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataCJFU[0xC];                                      // 0x09D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                           // 0x09F0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataPY8P[0xC];                                      // 0x09F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;                 // 0x0A08(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataXQBJ[0xC];                                      // 0x0A08(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;                // 0x0A20(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataMGZS[0xC];                                      // 0x0A20(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;                   // 0x0A38(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataERCB[0xC];                                      // 0x0A38(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;           // 0x0A50(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataDI82[0xC];                                      // 0x0A50(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;                  // 0x0A68(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataME33[0xC];                                      // 0x0A68(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                         // 0x0A80(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData2T0I[0xC];                                      // 0x0A80(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;                    // 0x0A98(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataZT4C[0xC];                                      // 0x0A98(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                         // 0x0AB0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataLTU3[0xC];                                      // 0x0AB0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;                     // 0x0AC8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataSHLU[0xC];                                      // 0x0AC8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;                    // 0x0AE0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataKMUH[0xC];                                      // 0x0AE0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                            // 0x0AF8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData4BIN[0xC];                                      // 0x0AF8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                            // 0x0B10(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataDPV3[0xC];                                      // 0x0B10(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnControllerChange__Delegate;                            // 0x0B28(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataKNHL[0xC];                                      // 0x0B28(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUserOrphaned__Delegate;                                // 0x0B40(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData4EXD[0xC];                                      // 0x0B40(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUserRestored__Delegate;                                // 0x0B58(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02T3[0xC];                                      // 0x0B58(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;                      // 0x0B70(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataLXGU[0xC];                                      // 0x0B70(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                         // 0x0B88(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7IS5[0xC];                                      // 0x0B88(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;                       // 0x0BA0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7NR9[0xC];                                      // 0x0BA0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;                       // 0x0BB8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataTW91[0xC];                                      // 0x0BB8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;                     // 0x0BD0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataKMFJ[0xC];                                      // 0x0BD0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;                        // 0x0BE8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7B18[0xC];                                      // 0x0BE8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                          // 0x0C00(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataMI9O[0xC];                                      // 0x0C00(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;                      // 0x0C18(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataUH4R[0xC];                                      // 0x0C18(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;                       // 0x0C30(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData306H[0xC];                                      // 0x0C30(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;                // 0x0C48(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData4YP4[0xC];                                      // 0x0C48(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;                     // 0x0C60(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7Z66[0xC];                                      // 0x0C60(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;                   // 0x0C78(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5I1H[0xC];                                      // 0x0C78(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                          // 0x0C90(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataF63N[0xC];                                      // 0x0C90(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;                    // 0x0CA8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataXK5K[0xC];                                      // 0x0CA8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;           // 0x0CC0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5HIY[0xC];                                      // 0x0CC0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;       // 0x0CD8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataJELZ[0xC];                                      // 0x0CD8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;                  // 0x0CF0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataTAG3[0xC];                                      // 0x0CF0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;                        // 0x0D08(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData016W[0xC];                                      // 0x0D08(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;                       // 0x0D20(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7KMI[0xC];                                      // 0x0D20(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;                      // 0x0D38(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataE4DD[0xC];                                      // 0x0D38(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadSharedFileComplete__Delegate;                      // 0x0D50(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataR1IY[0xC];                                      // 0x0D50(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWriteSharedFileComplete__Delegate;                     // 0x0D68(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataOQ3S[0xC];                                      // 0x0D68(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnStorePurchaseCompleteDelegate__Delegate;               // 0x0D80(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5VMW[0xC];                                      // 0x0D80(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUnlockedDLCChange__Delegate;                           // 0x0D98(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataQ0V2[0xC];                                      // 0x0D98(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnSaveDataNoSpaceDialogComplete__Delegate;               // 0x0DB0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataOGN4[0xC];                                      // 0x0DB0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCommerceDialogClosed__Delegate;                        // 0x0DC8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataB8RO[0xC];                                      // 0x0DC8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCloseKickPlayerDialog__Delegate;                       // 0x0DE0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData9GQN[0xC];                                      // 0x0DE0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnErrorDialogClosed__Delegate;                           // 0x0DF8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7XFA[0xC];                                      // 0x0DF8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRegisteredController__Delegate;                        // 0x0E10(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataEEHR[0xC];                                      // 0x0E10(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUnregisteredController__Delegate;                      // 0x0E28(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData6XLC[0xC];                                      // 0x0E28(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnInputAPIChanged__Delegate;                             // 0x0E40(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataGX7E[0xC];                                      // 0x0E40(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks");
		return ptr;
	}


	bool TriggerScreenshot();
	void OnControllerConnectionStatusChanged(int LocalPlayerNum, bool bConnected);
	void OnControllerInputAPIChanged(int LocalPlayerNum, TEnumAsByte<EInputAPI> InputAPI);
	TEnumAsByte<EInputPlatformType> GetControllerPlatform(int LocalPlayerNum);
	int GetControllerID(int LocalPlayerNum);
	TArray<struct FName> GetConnectedControllerNames();
	void OnLocalPlayerRemoved(int LocalPlayerNum);
	void UnregisterController(int LocalPlayerNum);
	void RegisterController(int LocalPlayerNum, int ControllerId);
	bool CanRegisterController(int LocalPlayerNum);
	bool ShowBindings(int ControllerId);
	void SetControllerLayout(int ControllerId, const struct FName& LayoutName);
	void SetInputAPI(TEnumAsByte<EInputAPI> TargetAPI);
	void HandleGamepadConnectionStatusChanged(class UGameViewportClient* GVC, int LocalPlayerNum, bool bConnected);
	void HandleGamepadInputAPIChanged(class UGameViewportClient* GVC, int LocalPlayerNum, TEnumAsByte<EInputAPI> InputAPI);
	void ClearInputAPIChangedDelegate(const struct FScriptDelegate& InputAPIChangedDelegate);
	void AddInputAPIChangedDelegate(const struct FScriptDelegate& InputAPIChangedDelegate);
	void ClearUnregisteredControllerDelegate(const struct FScriptDelegate& UnregisteredControllerDelegate);
	void ClearRegisteredControllerDelegate(const struct FScriptDelegate& RegisteredControllerDelegate);
	void AddUnregisteredControllerDelegate(const struct FScriptDelegate& UnregisteredControllerDelegate);
	void AddRegisteredControllerDelegate(const struct FScriptDelegate& RegisteredControllerDelegate);
	void OnInputAPIChanged(TEnumAsByte<EInputAPI> TargetAPI);
	void OnUnregisteredController(int LocalPlayerNum);
	void OnRegisteredController(int LocalPlayerNum, int ControllerId);
	bool HasFriendsFunctionality();
	bool CanSendOfflinePartyInvite(const struct FUniqueNetId& PlayerID);
	bool CheckParentalControlInfo(bool bShowUi);
	bool RecordPlayersRecentlyMetKeys(unsigned char LocalUserNum, TArray<struct FFriendHistoryKey> PlayerKeys);
	bool GetPlayHistoryRegistrationKey(TArray<unsigned char>* Key);
	bool IsOriginalAppOwner();
	void UpdateSessionStatusFromPlayers(int CurrentPlayerCount, int numBotPlayers);
	bool IsAchievementUnlocked(unsigned char LocalUserNum, int AchievementId);
	void UpdateGameProgress(unsigned char LocalPlayerNum, float Progress);
	void FinishOnlineGameSession(const struct FString& serverId);
	void StartOnlineGameSession(const struct FString& serverId);
	void ClearSystemUserControllerPairingChangedDelegate(const struct FScriptDelegate& PairingChangeDelegate);
	void AddSystemUserControllerPairingChangedDelegate(const struct FScriptDelegate& PairingChangeDelegate);
	void OnSystemUserControllerPairingChanged(int NewLocalUserNum, int PreviousLocalUserNum);
	void ClearAccountPickerInput();
	void LookForAccountPickerInput();
	void AddPlayerToSession(unsigned char ControllerId);
	void ClearPrimaryPlayer();
	void RemoveUserAssociation(unsigned char ControllerId);
	void MapEnd();
	void MapStart();
	void OnlineMatchEnd();
	void OnlineMatchStart(const struct FString& MapName);
	void SetSessionDifficultyLevel(int DifficultyLevel);
	void SetSessionGameplayModeName(const struct FName& GameplayModeName);
	void SetSessionGameplayMode(int GameplayMode);
	TArray<unsigned char> GetSyncedAchievements(unsigned char LocalUserNum);
	void SetPlayedWith(const struct FUniqueNetId& PlayerNetId);
	bool HandleBootMessage();
	void ClearErrorDialogClosedDelegate(const struct FScriptDelegate& InDelegate);
	void AddErrorDialogClosedDelegate(const struct FScriptDelegate& InDelegate);
	void OnErrorDialogClosed(int LocalUserNum);
	void ClearCloseKickPlayerDialogDelegate(const struct FScriptDelegate& InDelegate);
	void AddCloseKickPlayerDialogDelegate(const struct FScriptDelegate& InDelegate);
	void OnCloseKickPlayerDialog();
	void ClearCommerceDialogClosedDelegate(const struct FScriptDelegate& InDelegate);
	void AddCommerceDialogClosedDelegate(const struct FScriptDelegate& InDelegate);
	void OnCommerceDialogClosed();
	void GetPlayerAccountID(const struct FUniqueNetId& NetId);
	bool WordFilterSanitizeString(const struct FString& Comment, const struct FScriptDelegate& SanitizeDelegate, const struct FUniqueNetId& PlayerID);
	void RemoveCanPlayOnlineChangedDelegate(const struct FScriptDelegate& Callback);
	void AddCanPlayOnlineChangedDelegate(const struct FScriptDelegate& Callback);
	bool RecordPlayersRecentlyMet(unsigned char LocalUserNum, TArray<struct FUniqueNetId>* Players, const struct FString& GameDescription);
	void ClearSaveDataNoSpaceDialogCompleteDelegate(const struct FScriptDelegate& DeviceDelegate);
	void AddSaveDataNoSpaceDialogCompleteDelegate(const struct FScriptDelegate& DeviceDelegate);
	void OnSaveDataNoSpaceDialogComplete(bool bContinueWithoutSave);
	void ClearUnlockedDLCChangeDelegate(const struct FScriptDelegate& InDelegate);
	void AddUnlockedDLCChangeDelegate(const struct FScriptDelegate& InDelegate);
	TArray<struct FName> GetUnlockedDLC();
	void OnUnlockedDLCChange();
	bool GetOverlayEnabled();
	int GetDLCPurchaseTime(const struct FName& AppName);
	void HandleGetUserInfoComplete(const struct FName& NewCurrency, const struct FString& NewCountry);
	void GetPlayerCountry(unsigned char LocalUserNum);
	struct FString GetPlayerLanguage(unsigned char LocalUserNum);
	void ClearReadPlayerCountryDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerCountryDelegate);
	void AddReadPlayerCountryDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerCountryDelegate);
	bool AnyPlayerChatRestricted();
	void InitializeTrophyAPI();
	void OpenStoreForItems(unsigned char LocalUserNum, TArray<struct FString> Targets);
	void OpenStoreForDLC(unsigned char LocalUserNum, const struct FName& DLC);
	void OpenStoreForItemsAsync(unsigned char LocalUserNum, TArray<struct FString> Targets, const struct FScriptDelegate& OnStorePurchaseCompleteDelegate);
	void OnStorePurchaseCompleteDelegate();
	void OpenErrorDialog(unsigned char LocalUserNum, TEnumAsByte<EPS4ErrorDialog> ErrorCode);
	void OpenPS4DisplayMode(unsigned char LocalUserNum, TEnumAsByte<EPS4DisplayMode> DisplayMode, TArray<struct FString> Targets, int ServiceLabel);
	void ResetControllerColor(int ControllerId);
	void SetControllerColor(int ControllerId, const struct FColor& NewColor);
	bool AddInGamePost(const struct FString& InPostID, unsigned char LocalUserNum, TArray<struct FString> StringReplaceList);
	bool IsEnabled();
	void SetRichPresence(unsigned char LocalUserNum, const struct FString& PresenceString, const struct FString& GameDataString);
	void ClearAllDelegates();
	void ClearWriteSharedFileCompleteDelegate(const struct FScriptDelegate& WriteSharedFileCompleteDelegate);
	void AddWriteSharedFileCompleteDelegate(const struct FScriptDelegate& WriteSharedFileCompleteDelegate);
	bool WriteSharedFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* Contents);
	void OnWriteSharedFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename, const struct FString& SharedHandle);
	void ClearReadSharedFileCompleteDelegate(const struct FScriptDelegate& ReadSharedFileCompleteDelegate);
	void AddReadSharedFileCompleteDelegate(const struct FScriptDelegate& ReadSharedFileCompleteDelegate);
	bool ReadSharedFile(const struct FString& SharedHandle);
	void OnReadSharedFileComplete(bool bWasSuccessful, const struct FString& SharedHandle);
	bool ClearSharedFile(const struct FString& SharedHandle);
	bool ClearSharedFiles();
	bool GetSharedFileContents(const struct FString& SharedHandle, TArray<unsigned char>* FileContents);
	void ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	void AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	bool DeleteUserFile(const struct FString& UserId, const struct FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete);
	void OnDeleteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	void AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	bool WriteUserFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
	void OnWriteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	void AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	bool ReadUserFile(const struct FString& UserId, const struct FString& Filename);
	void OnReadUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void GetUserFileList(const struct FString& UserId, TArray<struct FEmsFile>* UserFiles);
	void ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void EnumerateUserFiles(const struct FString& UserId);
	void OnEnumerateUserFilesComplete(bool bWasSuccessful, const struct FString& UserId);
	bool ClearFile(const struct FString& UserId, const struct FString& Filename);
	bool ClearFiles(const struct FString& UserId);
	bool GetFileContents(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
	bool WriteUserFileInternal(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
	bool SetVoiceReceiveVolume(float VoiceVolume);
	bool GetFriendJoinURL(const struct FUniqueNetId& FriendUID, struct FString* ServerURL, struct FString* ServerUID);
	bool GetCommandlineJoinURL(bool bMarkAsJoined, struct FString* ServerURL, struct FString* ServerUID);
	bool Int64ToUniqueNetId(const struct FString& UIDString, struct FUniqueNetId* OutUID);
	struct FString UniqueNetIdToInt64(struct FUniqueNetId* Uid);
	void NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent);
	void OnVOIPPlaybackFinished(class UAudioComponent* AC);
	bool ShowProfileUI(unsigned char LocalUserNum, const struct FString& SubURL, const struct FUniqueNetId& PlayerUID);
	struct FString UniqueNetIdToPlayerName(struct FUniqueNetId* Uid);
	bool DisplayAchievementProgress(int AchievementId, int ProgressCount, int MaxProgress);
	bool CreateLeaderboard(const struct FString& LeaderboardName, TEnumAsByte<ELeaderboardSortType> SortType, TEnumAsByte<ELeaderboardFormat> DisplayFormat);
	bool ResetStats(bool bResetAchievements);
	bool ShowCustomMessageUI(unsigned char LocalUserNum, TArray<struct FUniqueNetId>* Recipients, const struct FString& MessageTitle, const struct FString& NonEditableMessage, const struct FString& EditableMessage);
	void ClearCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId);
	class UOnlineProfileSettings* GetCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId);
	void ClearReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void AddReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void OnReadCrossTitleProfileSettingsComplete(unsigned char LocalUserNum, int TitleId, bool bWasSuccessful);
	bool ReadCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings);
	bool UnlockAvatarAward(unsigned char LocalUserNum, int AvatarItemId);
	void GetSteamClanData(TArray<struct FSteamPlayerClanData>* Results);
	void ClearGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate);
	void AddGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate);
	void OnGetNumberOfCurrentPlayersComplete(int TotalPlayers);
	bool GetNumberOfCurrentPlayers();
	void ReadOnlineAvatars(TArray<struct FUniqueNetId>* PlayerNetIds, TEnumAsByte<EAvatarSize> Size, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate);
	bool ShowCustomPlayersUI(unsigned char LocalUserNum, TArray<struct FUniqueNetId>* Players, const struct FString& Title, const struct FString& Description);
	TEnumAsByte<EOnlineEnumerationReadState> GetAchievements(unsigned char LocalUserNum, TArray<struct FAchievementDetails>* Achievements, int TitleId);
	void ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void OnReadAchievementsComplete(int TitleId);
	bool ReadAchievements(unsigned char LocalUserNum, int TitleId, bool bShouldReadText, bool bShouldReadImages);
	bool ShowPlayersUI(unsigned char LocalUserNum);
	bool ShowFriendsInviteUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool ShowFriendsUI(unsigned char LocalUserNum);
	void ClearProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void AddProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void OnProfileDataChanged();
	bool UnlockGamerPicture(unsigned char LocalUserNum, int PictureId);
	void ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void OnUnlockAchievementComplete(bool bWasSuccessful);
	bool UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete);
	bool UpdateStat(unsigned char LocalUserNum, const struct FName& StatName, int Points);
	bool IsDeviceValid(int DeviceID, int SizeNeeded);
	int GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString* DeviceName);
	void ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void OnDeviceSelectionComplete(bool bWasSuccessful);
	bool ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, bool bManageStorage);
	bool ShowMembershipMarketplaceUI(unsigned char LocalUserNum);
	bool ShowContentMarketplaceUI(unsigned char LocalUserNum, int CategoryMask, int OfferId);
	bool ShowInviteUI(unsigned char LocalUserNum, const struct FString& InviteText);
	bool ShowAchievementsUI(unsigned char LocalUserNum);
	bool ShowMessagesUI(unsigned char LocalUserNum);
	bool ShowGamerCardUI(unsigned char LocalUserNum, const struct FUniqueNetId& UniqueId, const struct FString& PlayerName);
	bool ShowFeedbackUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool DeleteMessage(unsigned char LocalUserNum, int MessageIndex);
	bool UnmuteAll(unsigned char LocalUserNum);
	bool MuteAll(unsigned char LocalUserNum, bool bAllowFriends);
	void CalcAggregateSkill(TArray<struct FDouble> Mus, TArray<struct FDouble> Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma);
	bool RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid);
	struct FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void OnRegisterHostStatGuidComplete(bool bWasSuccessful);
	bool RegisterHostStatGuid(struct FString* HostStatGuid);
	struct FString GetHostStatGuid();
	void ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message);
	void GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages);
	void ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void OnJoinFriendGameComplete(bool bWasSuccessful);
	bool JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend);
	void ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName);
	bool SendGameInviteToFriends(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Friends, const struct FString& Text);
	bool SendGameInviteToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Text);
	bool SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message);
	void ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message);
	bool DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	bool AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	bool RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend);
	void ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void OnAddFriendByNameComplete(bool bWasSuccessful);
	bool AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message);
	bool AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message);
	struct FString GetKeyboardInputResults(unsigned char* bWasCanceled);
	void ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void OnKeyboardInputComplete(bool bWasSuccessful);
	bool HideKeyboardUI(unsigned char LocalUserNum);
	bool ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength);
	void SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>* LocalizedStringSettings, TArray<struct FSettingsProperty>* Properties);
	TEnumAsByte<EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(const struct FString& FileToRead);
	void OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
	void ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void OnStorageDeviceChange();
	int GetLocale();
	TEnumAsByte<ENATType> GetNATType();
	void ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus);
	TEnumAsByte<EOnlineServerConnectionStatus> GetCurrentConnectionStatus();
	bool IsControllerConnected(int ControllerId);
	void ClearUserRestoredDelegate(const struct FScriptDelegate& UserRestoredDelegate);
	void AddUserRestoredDelegate(const struct FScriptDelegate& UserRestoredDelegate);
	void OnUserRestored(unsigned char ControllerId);
	void ClearUserOrphanedDelegate(const struct FScriptDelegate& UserOrphanedDelegate);
	void AddUserOrphanedDelegate(const struct FScriptDelegate& UserOrphanedDelegate);
	void OnUserOrphaned(unsigned char ControllerId);
	void ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void OnControllerChange(int ControllerId, bool bIsConnected);
	void SetNetworkNotificationPosition(TEnumAsByte<ENetworkNotificationPosition> NewPos);
	TEnumAsByte<ENetworkNotificationPosition> GetNetworkNotificationPosition();
	void ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void OnExternalUIChange(bool bIsOpening);
	void ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void OnLinkStatusChange(bool bIsConnected);
	bool HasLinkConnection();
	struct FString GetPlayerNicknameFromIndex(int UserIndex);
	bool WriteOnlinePlayerScores(const struct FName& SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>* PlayerScores);
	void ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void OnFlushOnlineStatsComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool FlushOnlineStats(const struct FName& SessionName);
	bool WriteOnlineStats(const struct FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(bool bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows);
	bool ReadOnlineStatsByRank(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead);
	bool ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(unsigned char LocalUserNum, TArray<struct FUniqueNetId>* Players, class UOnlineStatsRead* StatsRead);
	bool SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	bool SelectVocabulary(unsigned char LocalUserNum, int VocabularyId);
	void ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void AddRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void OnRecognitionComplete();
	bool GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>* Words);
	bool StopSpeechRecognition(unsigned char LocalUserNum);
	bool StartSpeechRecognition(unsigned char LocalUserNum);
	void StopNetworkedVoice(unsigned char LocalUserNum);
	void StartNetworkedVoice(unsigned char LocalUserNum);
	void ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking);
	bool UnmuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide);
	bool MuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide);
	bool SetRemoteTalkerPriority(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, int Priority);
	bool IsHeadsetPresent(unsigned char LocalUserNum);
	bool IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID);
	bool IsLocalPlayerTalking(unsigned char LocalUserNum);
	bool UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool RegisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool UnregisterLocalTalker(unsigned char LocalUserNum);
	bool RegisterLocalTalker(unsigned char LocalUserNum);
	TEnumAsByte<EOnlineEnumerationReadState> GetFriendsList(unsigned char LocalUserNum, TArray<struct FOnlineFriend>* Friends, int Count, int StartingAt);
	void ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void OnReadFriendsComplete(bool bWasSuccessful);
	bool ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt);
	void ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	void AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	void OnWritePlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(unsigned char LocalUserNum);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	void AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	void OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful);
	bool ReadPlayerStorageForNetId(unsigned char LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage);
	void ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void OnReadPlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	void ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void OnWriteProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	class UOnlineProfileSettings* GetProfileSettings(unsigned char LocalUserNum);
	void ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void ClearAvatarChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& AvatarDelegate);
	void AddAvatarChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& AvatarDelegate);
	void GetFriendPresence(struct FOnlineFriend* FriendData);
	void ClearFriendPresenceChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& PresenceDelegate);
	void AddFriendPresenceChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& PresenceDelegate);
	void AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum);
	void AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum);
	void OnLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId);
	void ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	void AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	void ClearUserSignInCompleteDelegate(const struct FScriptDelegate& UserSignInCompleteDelegate);
	void AddUserSignInCompleteDelegate(const struct FScriptDelegate& UserSignInCompleteDelegate);
	void ClearUserSwitchCompleteDelegate(const struct FScriptDelegate& UserSwitchCompleteDelegate);
	void AddUserSwitchCompleteDelegate(const struct FScriptDelegate& UserSwitchCompleteDelegate);
	void SetPrimaryPlayerGamepadToLastInput();
	bool IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query);
	bool IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	void RequestRestrictedFeatureMessaging(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> RestrictedFeature);
	bool CanUploadFitnessData(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanShareKinectContent(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanShareWithSocialNetwork(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanBrowseInternet(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanAccessPremiumVideoContent(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanAccessPremiumContent(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanUseCloudStorage(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanRecordDVRClips(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanShowPresenceInformation(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanViewPlayerProfiles(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanPurchaseContent(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanDownloadUserContent(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanShareUserCreatedContent(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanCommunicateVoice(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanCommunicateVideo(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	bool CanCommunicateText(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	TEnumAsByte<EFeaturePrivilegeLevel> CanCommunicate(unsigned char LocalUserNum, TEnumAsByte<ECommunicationMethod> CommMethod, bool bAttemptToResolve);
	bool CanPlayOnline(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint, bool bAttemptToResolve, const struct FString& Reason);
	struct FString GetPlayerNickname(unsigned char LocalUserNum);
	bool GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID);
	bool IsLocalLogin(unsigned char LocalUserNum);
	bool IsGuestLogin(unsigned char LocalUserNum);
	TEnumAsByte<ELoginStatus> GetLoginStatus(unsigned char LocalUserNum);
	void ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void OnLogoutCompleted(bool bWasSuccessful);
	bool Logout(unsigned char LocalUserNum);
	void ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode);
	bool AutoLogin();
	bool Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, bool bWantsLocalOnly);
	void SetKickPlayerDialogActive(bool Active);
	bool IsUserSwitchActive();
	void SetKickPreviousUser(unsigned char LocalUserNum);
	bool SupportInGameLogin();
	bool ShowControllerUI();
	bool ShowLoginUIForOrphanedUser(unsigned char LocalUserNum);
	bool ShowLoginUI(unsigned char LocalUserNum, bool bShowOnlineOnly);
	void OnAvatarChange(const struct FUniqueNetId& PlayerID);
	void FriendPresenceChange(const struct FUniqueNetId& PlayerID);
	void OnFriendsChange();
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange(unsigned char LocalUserNum);
	void OnUserSignInComplete(unsigned char LocalUserNum);
	void OnUserSwitchComplete(unsigned char LocalUserNum);
	void Exit();
	bool PostInit();
	bool Init();
	void CanPlayOnlineChanged(unsigned char LocalUserNum);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
