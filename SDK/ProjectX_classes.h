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

// Class ProjectX._NetworkNextTypes_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class U_NetworkNextTypes_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX._NetworkNextTypes_X");
		return ptr;
	}


};

// Class ProjectX.OnlineMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UOnlineMessage_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineMessage_X");
		return ptr;
	}


};

// Class ProjectX.__ServerPlayerTracker_X__AddPlayer_F3B44701475595FEA03FAFAA39C3AA61
// 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
class U__ServerPlayerTracker_X__AddPlayer_F3B44701475595FEA03FAFAA39C3AA61 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__ServerPlayerTracker_X__AddPlayer_F3B44701475595FEA03FAFAA39C3AA61");
		return ptr;
	}


	bool __ServerPlayerTracker_X__AddPlayer_F3B44701475595FEA03FAFAA39C3AA61(const struct FUniqueNetId& P);
};

// Class ProjectX.__MatchRecorder_X__GetPlayerData_9FED17614FE858650887E691D00F49A2
// 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
class U__MatchRecorder_X__GetPlayerData_9FED17614FE858650887E691D00F49A2 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__MatchRecorder_X__GetPlayerData_9FED17614FE858650887E691D00F49A2");
		return ptr;
	}


	bool __MatchRecorder_X__GetPlayerData_9FED17614FE858650887E691D00F49A2(class UMatchPlayerData_X* P);
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__NotifyOnResult_41F8ACC74FAEB5E626A70EA1C7A5888D
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__array_ClubInvite_X__NotifyOnResult_41F8ACC74FAEB5E626A70EA1C7A5888D : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataJMC1[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__array_ClubInvite_X__NotifyOnResult_41F8ACC74FAEB5E626A70EA1C7A5888D");
		return ptr;
	}


	void __TAsyncResult__array_ClubInvite_X__NotifyOnResult_41F8ACC74FAEB5E626A70EA1C7A5888D();
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete_CA307CD349BFA3858DF6169762BC2ADA
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete_CA307CD349BFA3858DF6169762BC2ADA : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData15HJ[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete_CA307CD349BFA3858DF6169762BC2ADA");
		return ptr;
	}


	void __TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete_CA307CD349BFA3858DF6169762BC2ADA(class UError* Err);
};

// Class ProjectX.PartyMessage_X
// 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
class UPartyMessage_X : public UOnlineMessage_X
{
public:
	struct FUniqueNetId                                Sender;                                                    // 0x0060(0x0038) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_X");
		return ptr;
	}


	bool BroadcastOn(const TScriptInterface<class UOnlineLobbyInterface>& LobbyInterface, const struct FUniqueLobbyId& LobbyId);
	bool Broadcast();
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__SetResultWhen_FEFBF3394F994ED9FC0FE3B4F7DBB073
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__array_ClubInvite_X__SetResultWhen_FEFBF3394F994ED9FC0FE3B4F7DBB073 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                         // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataK32N[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__array_ClubInvite_X__SetResultWhen_FEFBF3394F994ED9FC0FE3B4F7DBB073");
		return ptr;
	}


	void __TAsyncResult__array_ClubInvite_X__SetResultWhen_FEFBF3394F994ED9FC0FE3B4F7DBB073();
};

// Class ProjectX.MatchData_X
// 0x00A0 (FullSize[0x0100] - InheritedSize[0x0060])
class UMatchData_X : public UObject
{
public:
	struct FString                                     MatchGUID;                                                 // 0x0060(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData25US[0x8];                                      // 0x0070(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.MatchData_X.RecordStartTimestamp
	unsigned char                                      UnknownDataY5W2[0x8];                                      // 0x0078(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.MatchData_X.RecordEndTimestamp
	unsigned char                                      UnknownDataGN2X[0x8];                                      // 0x0080(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.MatchData_X.MatchStartTimestamp
	unsigned char                                      UnknownDataI85G[0x8];                                      // 0x0088(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.MatchData_X.MatchEndTimestamp
	struct FName                                       MapName;                                                   // 0x0090(0x0008) (DataBinding)
	int                                                Playlist;                                                  // 0x0098(0x0004) (DataBinding)
	int                                                ClubID;                                                    // 0x009C(0x0004)
	unsigned char                                      bClubVsClub : 1;                                           // 0x00A0(0x0001) BIT_FIELD
	unsigned char                                      UnknownData9HX6[0x2];                                      // 0x00A0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bOverTime : 1;                                             // 0x00A0(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataZCWA[0x2];                                      // 0x00A4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bNoContest : 1;                                            // 0x00A0(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData1YMB[0x2];                                      // 0x00A4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bForfeit : 1;                                              // 0x00A0(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData475E[0x2];                                      // 0x00A4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataUW5Y[0x4];                                      // 0x00A4(0x0004) MISSED OFFSET
	struct FUniqueNetId                                CustomMatchCreatorPlayerID;                                // 0x00A8(0x0038)
	struct FString                                     CustomServerName;                                          // 0x00E0(0x0010) (NeedCtorLink)
	struct FString                                     CustomServerPassword;                                      // 0x00F0(0x0010) (NeedCtorLink)
	float                                              SecondsPlayed;                                             // 0x0100(0x0004) (DataBinding)
	float                                              OvertimeSecondsPlayed;                                     // 0x0104(0x0004) (DataBinding)
	int                                                WinningTeam;                                               // 0x0108(0x0004) (DataBinding)
	int                                                Team0Score;                                                // 0x010C(0x0004) (DataBinding)
	int                                                Team1Score;                                                // 0x0110(0x0004) (DataBinding)
	unsigned char                                      UnknownDataR4Y4[0x4];                                      // 0x0114(0x0004) MISSED OFFSET
	TArray<class UMatchPlayerData_X*>                  Players;                                                   // 0x0118(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MatchData_X");
		return ptr;
	}


};

// Class ProjectX.PartyMessage_LobbySettings_X
// 0x0004 (FullSize[0x009C] - InheritedSize[0x0098])
class UPartyMessage_LobbySettings_X : public UPartyMessage_X
{
public:
	int                                                BuildID;                                                   // 0x0098(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_LobbySettings_X");
		return ptr;
	}


	class UPartyMessage_LobbySettings_X* SetBuildID(int InBuildID);
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__Copy_D16CF17C443792719FDD13B76FB88ED8
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__TAsyncResult__array_ClubInvite_X__Copy_D16CF17C443792719FDD13B76FB88ED8 : public UObject
{
public:
	class UTAsyncResult__array_ClubInvite_X*           Instance;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__array_ClubInvite_X__Copy_D16CF17C443792719FDD13B76FB88ED8");
		return ptr;
	}


	void __TAsyncResult__array_ClubInvite_X__Copy_D16CF17C443792719FDD13B76FB88ED8(TArray<class UClubInvite_X*> R, class UError* E);
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__NotifyOnResult_4127AAF84C80E5C88C20A0AB18768EB0
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__array_LanServerRecord_X__NotifyOnResult_4127AAF84C80E5C88C20A0AB18768EB0 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataMJ5N[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__array_LanServerRecord_X__NotifyOnResult_4127AAF84C80E5C88C20A0AB18768EB0");
		return ptr;
	}


	void __TAsyncResult__array_LanServerRecord_X__NotifyOnResult_4127AAF84C80E5C88C20A0AB18768EB0();
};

// Class ProjectX._SharedHelpers
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class U_SharedHelpers : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX._SharedHelpers");
		return ptr;
	}


	int ScoreDeltaFromDefault(class UObject* Object);
	int FindNetId(const struct FUniqueNetId& FindId, TArray<struct FUniqueNetId>* List);
	void DrawShadowedText(class UCanvas* Canvas, const struct FString& Text, int ShadowOffsetX, int ShadowOffsetY, int ShadowAlpha);
	bool IsInTransientPackage(class UObject* Obj);
	class APlayerController* GetAPlayerController(class UClass* PlayerControllerClass);
	class UObject* GetDefaultObject(class UClass* ObjClass);
	void DumpUnreferencedAnims();
	struct FString GetLanguageExtension();
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete_CF02921A454B47A94D73839B21682A12
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete_CF02921A454B47A94D73839B21682A12 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataE22U[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete_CF02921A454B47A94D73839B21682A12");
		return ptr;
	}


	void __TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete_CF02921A454B47A94D73839B21682A12(class UError* Err);
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__SetResultWhen_2EE5C5F048FCD1A67C09B483A2614E97
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__array_LanServerRecord_X__SetResultWhen_2EE5C5F048FCD1A67C09B483A2614E97 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                         // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataHY3V[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__array_LanServerRecord_X__SetResultWhen_2EE5C5F048FCD1A67C09B483A2614E97");
		return ptr;
	}


	void __TAsyncResult__array_LanServerRecord_X__SetResultWhen_2EE5C5F048FCD1A67C09B483A2614E97();
};

// Class ProjectX.PartyMessage_Kick_X
// 0x0071 (FullSize[0x0109] - InheritedSize[0x0098])
class UPartyMessage_Kick_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                KickPlayer;                                                // 0x0098(0x0038)
	struct FUniqueNetId                                Instigator;                                                // 0x00D0(0x0038)
	TEnumAsByte<ELobbyKickReason>                      KickReason;                                                // 0x0108(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_Kick_X");
		return ptr;
	}


	class UPartyMessage_Kick_X* SetReason(TEnumAsByte<ELobbyKickReason> InKickReason);
	class UPartyMessage_Kick_X* SetInstigator(const struct FUniqueNetId& InPlayer);
	class UPartyMessage_Kick_X* SetKicked(const struct FUniqueNetId& InPlayer);
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__Copy_46D6618F4513E73ACECBD9B3C76A4CB9
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__TAsyncResult__array_LanServerRecord_X__Copy_46D6618F4513E73ACECBD9B3C76A4CB9 : public UObject
{
public:
	class UTAsyncResult__array_LanServerRecord_X*      Instance;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__array_LanServerRecord_X__Copy_46D6618F4513E73ACECBD9B3C76A4CB9");
		return ptr;
	}


	void __TAsyncResult__array_LanServerRecord_X__Copy_46D6618F4513E73ACECBD9B3C76A4CB9(TArray<class ULanServerRecord_X*> R, class UError* E);
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__NotifyOnResult_94DA021443D02D4387CDE29A938BC2B8
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__ClubDetails_X__NotifyOnResult_94DA021443D02D4387CDE29A938BC2B8 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataAT2E[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__ClubDetails_X__NotifyOnResult_94DA021443D02D4387CDE29A938BC2B8");
		return ptr;
	}


	void __TAsyncResult__ClubDetails_X__NotifyOnResult_94DA021443D02D4387CDE29A938BC2B8();
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__NotifyOnResultComplete_A6B2AB2B48EF62F68BCBFCBE7151986E
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__ClubDetails_X__NotifyOnResultComplete_A6B2AB2B48EF62F68BCBFCBE7151986E : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataT2V6[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__ClubDetails_X__NotifyOnResultComplete_A6B2AB2B48EF62F68BCBFCBE7151986E");
		return ptr;
	}


	void __TAsyncResult__ClubDetails_X__NotifyOnResultComplete_A6B2AB2B48EF62F68BCBFCBE7151986E(class UError* Err);
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__SetResultWhen_2D9E842841D5A944F187BF88CBCC2949
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__ClubDetails_X__SetResultWhen_2D9E842841D5A944F187BF88CBCC2949 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                         // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataEK76[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__ClubDetails_X__SetResultWhen_2D9E842841D5A944F187BF88CBCC2949");
		return ptr;
	}


	void __TAsyncResult__ClubDetails_X__SetResultWhen_2D9E842841D5A944F187BF88CBCC2949();
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__Copy_37718019462A866D0269D6B592331B33
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__TAsyncResult__ClubDetails_X__Copy_37718019462A866D0269D6B592331B33 : public UObject
{
public:
	class UTAsyncResult__ClubDetails_X*                Instance;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__ClubDetails_X__Copy_37718019462A866D0269D6B592331B33");
		return ptr;
	}


	void __TAsyncResult__ClubDetails_X__Copy_37718019462A866D0269D6B592331B33(class UClubDetails_X* R, class UError* E);
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__NotifyOnResult_4807544341F0A5737B0D4BBE204FC8F1
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__PsyNetClientService_X__NotifyOnResult_4807544341F0A5737B0D4BBE204FC8F1 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataX1NV[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetClientService_X__NotifyOnResult_4807544341F0A5737B0D4BBE204FC8F1");
		return ptr;
	}


	void __TAsyncResult__PsyNetClientService_X__NotifyOnResult_4807544341F0A5737B0D4BBE204FC8F1();
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete_219C2DC248FC9E4D4CF08ABCEB714BF8
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete_219C2DC248FC9E4D4CF08ABCEB714BF8 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataAYBO[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete_219C2DC248FC9E4D4CF08ABCEB714BF8");
		return ptr;
	}


	void __TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete_219C2DC248FC9E4D4CF08ABCEB714BF8(class UError* Err);
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__SetResultWhen_CF2540DE4377326D0CEC8CB39CEF63FB
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__PsyNetClientService_X__SetResultWhen_CF2540DE4377326D0CEC8CB39CEF63FB : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                         // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataC7L9[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetClientService_X__SetResultWhen_CF2540DE4377326D0CEC8CB39CEF63FB");
		return ptr;
	}


	void __TAsyncResult__PsyNetClientService_X__SetResultWhen_CF2540DE4377326D0CEC8CB39CEF63FB();
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__Copy_8BFB9C0F4402483CA88A9EBF444D61FE
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__TAsyncResult__PsyNetClientService_X__Copy_8BFB9C0F4402483CA88A9EBF444D61FE : public UObject
{
public:
	class UTAsyncResult__PsyNetClientService_X*        Instance;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetClientService_X__Copy_8BFB9C0F4402483CA88A9EBF444D61FE");
		return ptr;
	}


	void __TAsyncResult__PsyNetClientService_X__Copy_8BFB9C0F4402483CA88A9EBF444D61FE(class UPsyNetClientService_X* R, class UError* E);
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__NotifyOnResult_BE9FA032445250E6A5FDA48D6562B17F
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__PsyNetMessage_X__NotifyOnResult_BE9FA032445250E6A5FDA48D6562B17F : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7SYB[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetMessage_X__NotifyOnResult_BE9FA032445250E6A5FDA48D6562B17F");
		return ptr;
	}


	void __TAsyncResult__PsyNetMessage_X__NotifyOnResult_BE9FA032445250E6A5FDA48D6562B17F();
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete_CDFB17DB4AC01D56486391B4CFF55F08
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete_CDFB17DB4AC01D56486391B4CFF55F08 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData51G2[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete_CDFB17DB4AC01D56486391B4CFF55F08");
		return ptr;
	}


	void __TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete_CDFB17DB4AC01D56486391B4CFF55F08(class UError* Err);
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__SetResultWhen_D29A59FA4927A776B631F9ACABE68C83
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__PsyNetMessage_X__SetResultWhen_D29A59FA4927A776B631F9ACABE68C83 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                         // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData3ZL0[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetMessage_X__SetResultWhen_D29A59FA4927A776B631F9ACABE68C83");
		return ptr;
	}


	void __TAsyncResult__PsyNetMessage_X__SetResultWhen_D29A59FA4927A776B631F9ACABE68C83();
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__Copy_15A362164D2A6F78F7F8F39D6543E1E4
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__TAsyncResult__PsyNetMessage_X__Copy_15A362164D2A6F78F7F8F39D6543E1E4 : public UObject
{
public:
	class UTAsyncResult__PsyNetMessage_X*              Instance;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetMessage_X__Copy_15A362164D2A6F78F7F8F39D6543E1E4");
		return ptr;
	}


	void __TAsyncResult__PsyNetMessage_X__Copy_15A362164D2A6F78F7F8F39D6543E1E4(class UPsyNetMessage_X* R, class UError* E);
};

// Class ProjectX.TAsyncResult__Texture2DDynamic
// 0x0060 (FullSize[0x00FC] - InheritedSize[0x009C])
class UTAsyncResult__Texture2DDynamic : public UAsyncTask
{
public:
	class UTexture2DDynamic*                           Result;                                                    // 0x00D0(0x0008) (PrivateWrite)
	struct FScriptDelegate                             __EventResult__Delegate;                                   // 0x00D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataD6KM[0xC];                                      // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                           // 0x00F0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData8C62[0xC];                                      // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                                // 0x0108(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData9C4B[0xC];                                      // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TAsyncResult__Texture2DDynamic");
		return ptr;
	}


	class UTAsyncResult__Texture2DDynamic* CreateResultError(class UError* InError);
	class UTAsyncResult__Texture2DDynamic* CreateResult(class UTexture2DDynamic* InResult);
	class UTAsyncResult__Texture2DDynamic* Copy();
	void ClearCallbacks();
	class UTAsyncResult__Texture2DDynamic* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class UTAsyncResult__Texture2DDynamic* SetResult(class UTexture2DDynamic* InResult, class UError* InError);
	class UTAsyncResult__Texture2DDynamic* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class UTAsyncResult__Texture2DDynamic* NotifyOnResult(const struct FScriptDelegate& Callback);
	class UTexture2DDynamic* ResultDelegate();
	void EventResultComplete(class UTexture2DDynamic* OutResult, class UError* OutError);
	void EventResult(class UTexture2DDynamic* OutResult);
};

// Class ProjectX.EventRecorderGroup_X
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UEventRecorderGroup_X : public UComponent
{
public:
	struct FString                                     Category;                                                  // 0x0070(0x0010) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EventRecorderGroup_X");
		return ptr;
	}


	struct FString VectorToString(const struct FVector& V);
	void RecordFunction(int Version);
	class UEventRecorder_X* GetEventRecorder();
};

// Class ProjectX.RPC_X
// 0x0074 (FullSize[0x00D4] - InheritedSize[0x0060])
class URPC_X : public UObject
{
public:
	struct FString                                     Service;                                                   // 0x0060(0x0010) (Edit, Const, NeedCtorLink)
	int                                                Version;                                                   // 0x0070(0x0004) (Edit, Const)
	unsigned char                                      UnknownDataPWRD[0x4];                                      // 0x0074(0x0004) MISSED OFFSET
	TArray<float>                                      RetryDelays;                                               // 0x0078(0x0010) (Edit, Const, NeedCtorLink)
	unsigned char                                      bRetry : 1;                                                // 0x0088(0x0001) BIT_FIELD (Edit, Const)
	unsigned char                                      UnknownDataNYQ9[0x2];                                      // 0x0088(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowBatching : 1;                                        // 0x0088(0x0001) BIT_FIELD (Edit, Const)
	unsigned char                                      UnknownDataATA4[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bRequiresAuth : 1;                                         // 0x0088(0x0001) BIT_FIELD (Edit, Const)
	unsigned char                                      UnknownDataXXOT[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bDisposed : 1;                                             // 0x0088(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData0ZTK[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              ServiceFailRetryDelay;                                     // 0x008C(0x0004) (Edit, Const)
	TEnumAsByte<ERPCPriority>                          Priority;                                                  // 0x0090(0x0001) (Edit, Const)
	unsigned char                                      UnknownData5O2Y[0x7];                                      // 0x0091(0x0007) MISSED OFFSET
	TArray<struct FKeyValuePair>                       Headers;                                                   // 0x0098(0x0010) (Edit, Const, NeedCtorLink)
	class UError*                                      Error;                                                     // 0x00A8(0x0008) (Const, Transient)
	class UAsyncTask*                                  Task;                                                      // 0x00B0(0x0008) (Transient)
	struct FScriptDelegate                             __EventSuccess__Delegate;                                  // 0x00B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData894F[0xC];                                      // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventFail__Delegate;                                     // 0x00D0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataPYRS[0xC];                                      // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventComplete__Delegate;                                 // 0x00E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataK6VA[0xC];                                      // 0x00E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_X");
		return ptr;
	}


	void SetRetry(bool bShouldRetry);
	void NotifySuccess();
	void NotifyError(class UError* InError);
	bool ShouldResendOnFail(class UError* InError);
	class UErrorType* OverrideErrorType(class UErrorType* ErrorType);
	void OnComplete();
	void OnFail();
	void OnSuccess();
	void Dispose();
	class UAsyncTask* CreateTask(const struct FScriptDelegate& InCallback);
	class URPC_X* NotifyOnComplete(const struct FScriptDelegate& Callback);
	class URPC_X* NotifyOnFail(const struct FScriptDelegate& Callback);
	class URPC_X* NotifyOnSuccess(const struct FScriptDelegate& Callback);
	class UObject* GetResponseObject();
	void EventComplete(class URPC_X* RPC);
	void EventFail(class URPC_X* RPC);
	void EventSuccess(class URPC_X* RPC);
};

// Class ProjectX.EpochTimers_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UEpochTimers_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0060(0x0008) (Const, Native, NoExport)
	TArray<struct FEpochTimer>                         Timers;                                                    // 0x0068(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownDataWLBQ[0x8];                                      // 0x0078(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.EpochTimers_X.EpochNow


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EpochTimers_X");
		return ptr;
	}


	bool IsActive(const struct FScriptDelegate& Callback);
	void ClearAll(class UObject* Obj);
	void Clear(const struct FScriptDelegate& Callback, const struct FScriptDelegate& Callback2);
	void SetWindow(const struct FScriptDelegate& StartCallback, const struct FScriptDelegate& EndCallback);
	void SetTime(const struct FScriptDelegate& Callback);
	void Set(const struct FScriptDelegate& Callback);
	void Construct();
};

// Class ProjectX.MetricsGroup_X
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UMetricsGroup_X : public UEventRecorderGroup_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MetricsGroup_X");
		return ptr;
	}


	class UEventRecorder_X* GetEventRecorder();
};

// Class ProjectX.PartyMessage_GetPlatformParty_X
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UPartyMessage_GetPlatformParty_X : public UPartyMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_GetPlatformParty_X");
		return ptr;
	}


};

// Class ProjectX.PartyMessage_GetPlatformPartyResponse_X
// 0x0048 (FullSize[0x00E0] - InheritedSize[0x0098])
class UPartyMessage_GetPlatformPartyResponse_X : public UPartyMessage_X
{
public:
	struct FUniqueLobbyId                              PlatformPartyID;                                           // 0x0098(0x0010)
	struct FUniqueNetId                                OriginalSender;                                            // 0x00A8(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_GetPlatformPartyResponse_X");
		return ptr;
	}


};

// Class ProjectX.__PartySequence_CreateParty_X__CreateParty_B60C07314252B94026C4FAA097A00DE3
// 0x0019 (FullSize[0x0079] - InheritedSize[0x0060])
class U__PartySequence_CreateParty_X__CreateParty_B60C07314252B94026C4FAA097A00DE3 : public UObject
{
public:
	TArray<struct FLobbyMetaData>                      InitialSettings;                                           // 0x0060(0x0010) (NeedCtorLink)
	int                                                LocalPlayerNum;                                            // 0x0070(0x0004)
	int                                                MaxPlayers;                                                // 0x0074(0x0004)
	TEnumAsByte<ELobbyVisibility>                      Type;                                                      // 0x0078(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PartySequence_CreateParty_X__CreateParty_B60C07314252B94026C4FAA097A00DE3");
		return ptr;
	}


	void __PartySequence_CreateParty_X__CreateParty_B60C07314252B94026C4FAA097A00DE3(class URPC_PartyCreate_X* RPC, struct FLobbyMetaData* StructInitializer_CB138FB94DEA6A8BFD9817B8A1AF70D4, struct FLobbyMetaData* StructInitializer_05EF147D4BE4DF14AC9F8B80EC73666E, struct FUniqueLobbyId* StructInitializer_27F2D1DF40BF88C0946ABAB79A31AE15);
};

// Class ProjectX.RPC_CheckReplacementDedicatedServer_X
// 0x005A (FullSize[0x012E] - InheritedSize[0x00D4])
class URPC_CheckReplacementDedicatedServer_X : public URPC_X
{
public:
	unsigned char                                      UnknownDataJS36[0x8];                                      // 0x0100(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_CheckReplacementDedicatedServer_X.serverId
	unsigned char                                      bFoundReplacement : 1;                                     // 0x0108(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData7P8L[0x2];                                      // 0x0108(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataS2XH[0x4];                                      // 0x010C(0x0004) MISSED OFFSET
	struct FCheckReplacementDedicatedServerData        Server;                                                    // 0x0110(0x0028) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CheckReplacementDedicatedServer_X");
		return ptr;
	}


	struct FString GetServerAddress();
	class URPC_CheckReplacementDedicatedServer_X* SetServerID();
};

// Class ProjectX.__PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited_057AFB23470623F25BE9FABDB20C1112
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U__PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited_057AFB23470623F25BE9FABDB20C1112 : public UObject
{
public:
	struct FUniqueLobbyId                              InLobbyId;                                                 // 0x0060(0x0010)
	struct FUniqueNetId                                FriendId;                                                  // 0x0070(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited_057AFB23470623F25BE9FABDB20C1112");
		return ptr;
	}


	void __PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited_057AFB23470623F25BE9FABDB20C1112();
};

// Class ProjectX._Types_X
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class U_Types_X : public UObject
{
public:
	struct FScriptDelegate                             __KeyPressDelegate__Delegate;                              // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataCST0[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPriviledgeChecked__Delegate;                           // 0x0078(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataBOZ2[0xC];                                      // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ServiceExecutionDelegate__Delegate;                      // 0x0090(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataW8IA[0xC];                                      // 0x0090(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnTimer__Delegate;                                       // 0x00A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataTOJ4[0xC];                                      // 0x00A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX._Types_X");
		return ptr;
	}


	void OnTimer();
	struct FServerReservationData GetServerReservationData(struct FCheckReservationResponse* Response);
	void ServiceExecutionDelegate(class UPsyNetClientService_X* Service);
	struct FIntVector3 ToIntVector3(const struct FVector& V);
	void OnPriviledgeChecked(class UPrivilegeCheck_X* PrivilegeCheck);
	bool KeyPressDelegate();
};

// Class ProjectX.LocalCache_X
// 0x0066 (FullSize[0x00C6] - InheritedSize[0x0060])
class ULocalCache_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0060(0x0008) (Const, Native, NoExport)
	TArray<struct FPointer>                            ImportTasks;                                               // 0x0068(0x0010) (Native, Transient, AlwaysInit)
	TArray<struct FCacheImportCallbackData>            ImportCallbacks;                                           // 0x0078(0x0010) (Transient, NeedCtorLink)
	TArray<struct FPointer>                            ExportTasks;                                               // 0x0088(0x0010) (Native, Transient, AlwaysInit)
	TArray<struct FCacheExportCallbackData>            ExportCallbacks;                                           // 0x0098(0x0010) (Transient, NeedCtorLink)
	unsigned char                                      bDebug : 1;                                                // 0x00A8(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataODY5[0x2];                                      // 0x00A8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataNDRV[0x4];                                      // 0x00AC(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventImportFinished__Delegate;                           // 0x00B0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7RDB[0xC];                                      // 0x00AC(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventExportFinished__Delegate;                           // 0x00C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData32EO[0xC];                                      // 0x00C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LocalCache_X");
		return ptr;
	}


	TEnumAsByte<EFlushResult> Flush(float TimeoutSeconds);
	bool HasActiveTasks();
	void ExportObjectAsync(class UObject* CacheObject, const struct FString& Path, const struct FScriptDelegate& Callback);
	void ImportObjectAsync(class UObject* CacheObject, const struct FString& Path, const struct FScriptDelegate& Callback);
	class UError* ImportObject(class UObject* CacheObject, const struct FString& Path);
	void EventExportFinished(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
	void EventImportFinished(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
};

// Class ProjectX.RPC_AddQuitter_X
// 0x0078 (FullSize[0x014C] - InheritedSize[0x00D4])
class URPC_AddQuitter_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038)
	struct FString                                     Reason;                                                    // 0x0138(0x0010) (NeedCtorLink)
	int                                                PlaylistId;                                                // 0x0148(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_AddQuitter_X");
		return ptr;
	}


	class URPC_AddQuitter_X* SetPlaylistID(int InPlaylistID);
	class URPC_AddQuitter_X* SetReason(const struct FString& InReason);
	class URPC_AddQuitter_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.RPC_RemoveQuitter_X
// 0x0064 (FullSize[0x0138] - InheritedSize[0x00D4])
class URPC_RemoveQuitter_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RemoveQuitter_X");
		return ptr;
	}


	class URPC_RemoveQuitter_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.PartyMessage_LocalPlayers_X
// 0x004A (FullSize[0x00E2] - InheritedSize[0x0098])
class UPartyMessage_LocalPlayers_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                PrimaryMemberId;                                           // 0x0098(0x0038)
	TArray<struct FSimplePartyMember>                  Members;                                                   // 0x00D0(0x0010) (NeedCtorLink)
	unsigned char                                      bFromLeader : 1;                                           // 0x00E0(0x0001) BIT_FIELD
	unsigned char                                      UnknownData3KUM[0x2];                                      // 0x00E0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_LocalPlayers_X");
		return ptr;
	}


	class UPartyMessage_LocalPlayers_X* SetFromLeader(bool bIsLeader);
	void AddMember(const struct FPartyMember& Member);
	class UPartyMessage_LocalPlayers_X* AddPlayer(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName);
	class UPartyMessage_LocalPlayers_X* AddOnlinePlayer(class UOnlinePlayer_X* Player);
	class UPartyMessage_LocalPlayers_X* SetPrimaryMemberId(const struct FUniqueNetId& InPrimaryMemberId);
	class UPartyMessage_LocalPlayers_X* AddOnlinePlayers();
};

// Class ProjectX.__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedPrompt_2642B61E42DCE310BD7D14A6576E9E1F
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedPrompt_2642B61E42DCE310BD7D14A6576E9E1F : public UObject
{
public:
	struct FUniqueLobbyId                              InLobbyId;                                                 // 0x0060(0x0010)
	struct FUniqueNetId                                InviterId;                                                 // 0x0070(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedPrompt_2642B61E42DCE310BD7D14A6576E9E1F");
		return ptr;
	}


	void __PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedPrompt_2642B61E42DCE310BD7D14A6576E9E1F();
};

// Class ProjectX.ActorComponent_X
// 0x000B (FullSize[0x00A0] - InheritedSize[0x0095])
class UActorComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownDataIY97[0x3];                                      // 0x009D(0x0003) MISSED OFFSET
	unsigned char                                      bTick : 1;                                                 // 0x00A0(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataHR0A[0x2];                                      // 0x009D(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIgnoreScriptAttach : 1;                                   // 0x00A0(0x0001) BIT_FIELD (Const, Transient)
	unsigned char                                      UnknownDataCNKN[0x2];                                      // 0x00A4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ActorComponent_X");
		return ptr;
	}


	void Reattach();
	void Tick(float DeltaTime);
	void Detached();
	void Attached();
	void BeginPlay();
};

// Class ProjectX.__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedSilent_8F5063964D4E2EBD43B2A0AFE7E24A25
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedSilent_8F5063964D4E2EBD43B2A0AFE7E24A25 : public UObject
{
public:
	struct FUniqueLobbyId                              InLobbyId;                                                 // 0x0060(0x0010)
	struct FUniqueNetId                                InviterId;                                                 // 0x0070(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedSilent_8F5063964D4E2EBD43B2A0AFE7E24A25");
		return ptr;
	}


	void __PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedSilent_8F5063964D4E2EBD43B2A0AFE7E24A25();
};

// Class ProjectX.__OnlineGameDedicatedServer_X__InitLogUpload_C922AD3B49602D0A209494AB5085A272
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__OnlineGameDedicatedServer_X__InitLogUpload_C922AD3B49602D0A209494AB5085A272 : public UObject
{
public:
	class URPC_RecordMatch_X*                          RPC;                                                       // 0x0060(0x0008)
	class UMatchLog_X*                                 Log;                                                       // 0x0068(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameDedicatedServer_X__InitLogUpload_C922AD3B49602D0A209494AB5085A272");
		return ptr;
	}


	void __OnlineGameDedicatedServer_X__InitLogUpload_C922AD3B49602D0A209494AB5085A272(class URPC_X* _);
};

// Class ProjectX.PartyMessage_MatchmakingAvailability_X
// 0x003C (FullSize[0x00D4] - InheritedSize[0x0098])
class UPartyMessage_MatchmakingAvailability_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                MemberId;                                                  // 0x0098(0x0038)
	int                                                MatchmakeRestrictions;                                     // 0x00D0(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_MatchmakingAvailability_X");
		return ptr;
	}


	class UPartyMessage_MatchmakingAvailability_X* SetMatchmakeRestrictions(int InRestrictions);
	class UPartyMessage_MatchmakingAvailability_X* SetMemberId(const struct FUniqueNetId& InMemberId);
};

// Class ProjectX.PerConMetrics_X
// 0x001A (FullSize[0x009A] - InheritedSize[0x0080])
class UPerConMetrics_X : public UMetricsGroup_X
{
public:
	int                                                StartConnectFailCount;                                     // 0x0080(0x0004)
	int                                                ConnectFailCount;                                          // 0x0084(0x0004)
	int                                                DisconnectCount;                                           // 0x0088(0x0004)
	int                                                RPCErrorCount;                                             // 0x008C(0x0004)
	int                                                InvalidMessageCount;                                       // 0x0090(0x0004)
	unsigned char                                      bConnected : 1;                                            // 0x0094(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataTIFG[0x2];                                      // 0x0094(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              StartTime;                                                 // 0x0098(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PerConMetrics_X");
		return ptr;
	}


	void ServiceFail(const struct FUniqueNetId& PlayerID, int Count, const struct FString& Service, const struct FName& Error);
	void InvalidMessage(const struct FUniqueNetId& PlayerID, int Count, const struct FString& Substring);
	void Disconnected(const struct FUniqueNetId& PlayerID, int Count, int Code, const struct FString& Reason, float ElapsedSeconds);
	void Connected(const struct FUniqueNetId& PlayerID, float ElapsedSeconds);
	void ConnectFail(const struct FUniqueNetId& PlayerID, int Count, int Code, const struct FString& Reason, float ElapsedSeconds);
	void StartConnectFail(const struct FUniqueNetId& PlayerID, int Count);
	void StartConnect(const struct FUniqueNetId& PlayerID);
	void Disabled(const struct FUniqueNetId& PlayerID);
	void Enabled(const struct FUniqueNetId& PlayerID);
	void HandleRPCError(class URPCQueue_X* InQueue, class URPC_X* RPC, class UError* Error);
	void HandleInvalidMessage(class UPsyNetMessengerWebSocket_X* InMessenger, const struct FString& Substring);
	void HandleDisconnected(class UPsyNetMessengerWebSocket_X* Socket, int Code, const struct FString& Reason);
	void HandleConnected(class UPsyNetMessengerWebSocket_X* Socket);
	void HandleStartConnectFail(class UPsyNetMessengerWebSocket_X* Socket);
	void HandleStartConnect(class UPsyNetMessengerWebSocket_X* Socket);
	void HandleStatusChanged(class UPerCon_X* PerCon);
	struct FUniqueNetId GetPlayerID(struct FUniqueNetId* StructInitializer_8B8496AA4815B46C037362B4A613C7BA);
	void SetMessenger(class UPsyNetMessengerWebSocket_X* PerConMessenger);
	void Construct();
};

// Class ProjectX.__PartySequence_JoinParty_X__HandleGetPlatformPartyMessage_D10440B849C86C6099131FA34A1722BB
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__PartySequence_JoinParty_X__HandleGetPlatformPartyMessage_D10440B849C86C6099131FA34A1722BB : public UObject
{
public:
	class UPartyMessage_GetPlatformParty_X*            Message;                                                   // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PartySequence_JoinParty_X__HandleGetPlatformPartyMessage_D10440B849C86C6099131FA34A1722BB");
		return ptr;
	}


	bool __PartySequence_JoinParty_X__HandleGetPlatformPartyMessage_D10440B849C86C6099131FA34A1722BB(const struct FPartyMember& M);
};

// Class ProjectX.RPC_GetPlayerSkill_X
// 0x007C (FullSize[0x0150] - InheritedSize[0x00D4])
class URPC_GetPlayerSkill_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038) (PrivateWrite)
	TArray<struct FGetPlayerSkillData>                 Skills;                                                    // 0x0138(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FRPCRewardLevelData                         RewardLevels;                                              // 0x0148(0x0008) (Transient, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPlayerSkill_X");
		return ptr;
	}


	class URPC_GetPlayerSkill_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.ExplosionComponent_X
// 0x003A (FullSize[0x00DA] - InheritedSize[0x00A0])
class UExplosionComponent_X : public UActorComponent_X
{
public:
	unsigned char                                      UnknownDataG27S[0x4];                                      // 0x00A4(0x0004) MISSED OFFSET
	float                                              RBVelocityChange;                                          // 0x00A8(0x0004) (Edit)
	float                                              StartRadius;                                               // 0x00AC(0x0004) (Edit)
	float                                              EndRadius;                                                 // 0x00B0(0x0004) (Edit)
	float                                              Speed;                                                     // 0x00B4(0x0004) (Edit)
	float                                              Falloff;                                                   // 0x00B8(0x0004) (Edit)
	unsigned char                                      bPassThroughWorldGeometry : 1;                             // 0x00BC(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData7WV1[0x2];                                      // 0x00BC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIgnoreInstigator : 1;                                     // 0x00BC(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataC2SS[0x2];                                      // 0x00C0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bDebug : 1;                                                // 0x00BC(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataW7HC[0x2];                                      // 0x00C0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector                                     MomentumOffset;                                            // 0x00C0(0x000C) (Edit)
	float                                              LifeTime;                                                  // 0x00CC(0x0004) (Transient)
	TArray<class AActor*>                              DamagedActors;                                             // 0x00D0(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ExplosionComponent_X");
		return ptr;
	}


	void ProcessHit(class AActor* Victim, const struct FVector& HitLocation, const struct FTraceHitInfo& ExtraHitInfo, float DamageScale);
	void Detached();
};

// Class ProjectX.LoginResponse_X
// 0x0014 (FullSize[0x0074] - InheritedSize[0x0060])
class ULoginResponse_X : public UObject
{
public:
	struct FString                                     BannedMessage;                                             // 0x0060(0x0010) (Transient, NeedCtorLink)
	int                                                BannedMinutes;                                             // 0x0070(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LoginResponse_X");
		return ptr;
	}


};

// Class ProjectX.PsyTagErrors_X
// 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
class UPsyTagErrors_X : public UErrorList
{
public:
	class UErrorType*                                  PsyTagProfane;                                             // 0x0080(0x0008) (Const)
	class UErrorType*                                  PsyTagUnavailable;                                         // 0x0088(0x0008) (Const)
	class UErrorType*                                  PsyTagInvalidCharacters;                                   // 0x0090(0x0008) (Const)
	class UErrorType*                                  PsyTagInvalidWhitespace;                                   // 0x0098(0x0008) (Const)
	class UErrorType*                                  PsyTagInvalidParameters;                                   // 0x00A0(0x0008) (Const)
	class UErrorType*                                  PsyTagCrossPlatformDisabled;                               // 0x00A8(0x0008) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyTagErrors_X");
		return ptr;
	}


};

// Class ProjectX.PartyMessage_JoinGame_X
// 0x0048 (FullSize[0x00E0] - InheritedSize[0x0098])
class UPartyMessage_JoinGame_X : public UPartyMessage_X
{
public:
	struct FPartyJoinMatchSettings                     Settings;                                                  // 0x0098(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_JoinGame_X");
		return ptr;
	}


	class UPartyMessage_JoinGame_X* SetSettings(struct FPartyJoinMatchSettings* InSettings);
};

// Class ProjectX.NetModeBase
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetModeBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetModeBase");
		return ptr;
	}


};

// Class ProjectX.StateObject_X
// 0x0002 (FullSize[0x0062] - InheritedSize[0x0060])
class UStateObject_X : public UObject
{
public:
	unsigned char                                      bDebug : 1;                                                // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataMRLG[0x2];                                      // 0x0060(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.StateObject_X");
		return ptr;
	}


	void InitExecution();
	void Destroyed();
	void Destroy();
};

// Class ProjectX.RPC_RecordMatch_X
// 0x00A4 (FullSize[0x0178] - InheritedSize[0x00D4])
class URPC_RecordMatch_X : public URPC_X
{
public:
	class UObject*                                     Match;                                                     // 0x0100(0x0008)
	struct FString                                     ReplayContentType;                                         // 0x0108(0x0010) (NeedCtorLink)
	struct FString                                     LogContentType;                                            // 0x0118(0x0010) (NeedCtorLink)
	struct FString                                     FlatbufferContentType;                                     // 0x0128(0x0010) (NeedCtorLink)
	struct FString                                     UploadReplayUrl;                                           // 0x0138(0x0010) (Transient, NeedCtorLink)
	struct FString                                     UploadLogUrl;                                              // 0x0148(0x0010) (Transient, NeedCtorLink)
	struct FString                                     UploadFlatbufferUrl;                                       // 0x0158(0x0010) (Transient, NeedCtorLink)
	TArray<struct FKeyValuePair>                       FlatBufferMetaData;                                        // 0x0168(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RecordMatch_X");
		return ptr;
	}


	class URPC_RecordMatch_X* SetSaveFlatbuffer(const struct FString& ContentType);
	class URPC_RecordMatch_X* SetSaveLog(const struct FString& ContentType);
	class URPC_RecordMatch_X* SetSaveReplay(const struct FString& ContentType);
	class URPC_RecordMatch_X* SetMatch(class UObject* InMatch);
};

// Class ProjectX.NetMode_Networked
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMode_Networked : public UNetModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMode_Networked");
		return ptr;
	}


};

// Class ProjectX.PsyTagSearchResult_X
// 0x0074 (FullSize[0x00D4] - InheritedSize[0x0060])
class UPsyTagSearchResult_X : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0038)
	struct FString                                     PlayerName;                                                // 0x0098(0x0010) (NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                                    // 0x00A8(0x0018) (NeedCtorLink)
	unsigned char                                      UnknownDataAZX0[0x8];                                      // 0x00C0(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.PsyTagSearchResult_X.PsyTagLastUpdatedTime
	struct FString                                     PresenceState;                                             // 0x00C8(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownDataKWJK[0x8];                                      // 0x00D8(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.PsyTagSearchResult_X.LastLoginTime
	int                                                NumFriendsInCommon;                                        // 0x00E0(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyTagSearchResult_X");
		return ptr;
	}


};

// Class ProjectX.PauseMetricsState_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPauseMetricsState_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PauseMetricsState_X");
		return ptr;
	}


};

// Class ProjectX.PartyMessage_PartyMemberJoinGame_X
// 0x0060 (FullSize[0x00F8] - InheritedSize[0x0098])
class UPartyMessage_PartyMemberJoinGame_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0098(0x0038)
	struct FPartyMemberServer                          Server;                                                    // 0x00D0(0x0028) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_PartyMemberJoinGame_X");
		return ptr;
	}


	class UPartyMessage_PartyMemberJoinGame_X* SetPartyMemberID(const struct FUniqueNetId& InPlayerId);
	class UPartyMessage_PartyMemberJoinGame_X* SetPartyMemberServer(struct FPartyMemberServer* InServer);
};

// Class ProjectX.MatchLog_X
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UMatchLog_X : public UObject
{
public:
	int                                                LogFileStartSize;                                          // 0x0060(0x0004)
	int                                                LogFileEndSize;                                            // 0x0064(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MatchLog_X");
		return ptr;
	}


	void Upload(const struct FString& URL, int MaxSize);
	int Size();
	struct FString GetLogFileName();
	int GetLogFileSize();
	void End();
	void Start();
};

// Class ProjectX.ExplosionHitHandler_X
// 0x004A (FullSize[0x00EA] - InheritedSize[0x00A0])
class UExplosionHitHandler_X : public UActorComponent_X
{
public:
	unsigned char                                      UnknownData55OV[0x4];                                      // 0x00A4(0x0004) MISSED OFFSET
	float                                              StartTime;                                                 // 0x00A8(0x0004) (Edit)
	float                                              EndTime;                                                   // 0x00AC(0x0004) (Edit)
	class UExplosionCollisionShapes_X*                 CollisionInformation;                                      // 0x00B0(0x0008) (Edit, ExportObject, Component, EditInline)
	unsigned char                                      bIgnoreInstigator : 1;                                     // 0x00B8(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataKQ11[0x2];                                      // 0x00B8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bPassThroughWorldGeometry : 1;                             // 0x00B8(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData9KTH[0x2];                                      // 0x00BC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bOnlyApplyImpulseOnce : 1;                                 // 0x00B8(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataL4ZC[0x2];                                      // 0x00BC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bDebug : 1;                                                // 0x00B8(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData1294[0x2];                                      // 0x00BC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bPullTowardHitLocation : 1;                                // 0x00B8(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData8O92[0x2];                                      // 0x00BC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Falloff;                                                   // 0x00BC(0x0004) (Edit)
	float                                              RBVelocityChange;                                          // 0x00C0(0x0004) (Edit)
	float                                              Speed;                                                     // 0x00C4(0x0004) (Edit)
	struct FVector                                     MomentumOffset;                                            // 0x00C8(0x000C) (Edit)
	struct FBox                                        GoalWorldBox;                                              // 0x00D4(0x001C) (Transient)
	float                                              LifeTime;                                                  // 0x00F0(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ExplosionHitHandler_X");
		return ptr;
	}


	void Destroy();
	void Init();
	void ProcessHit(class AActor* Victim, const struct FVector& HitLocation, struct FContactInformation* ContactInfo, float DamageScale);
};

// Class ProjectX.PartyMessage_DisableCrossPlay_X
// 0x003A (FullSize[0x00D2] - InheritedSize[0x0098])
class UPartyMessage_DisableCrossPlay_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                MemberId;                                                  // 0x0098(0x0038)
	unsigned char                                      bDisableCrossPlay : 1;                                     // 0x00D0(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataKSCG[0x2];                                      // 0x00D0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_DisableCrossPlay_X");
		return ptr;
	}


	class UPartyMessage_DisableCrossPlay_X* SetDisableCrossPlay(bool InDisableCrossplay);
	class UPartyMessage_DisableCrossPlay_X* SetMemberId(const struct FUniqueNetId& InMemberId);
};

// Class ProjectX.PsyNetChannel_X
// 0x003C (FullSize[0x009C] - InheritedSize[0x0060])
class UPsyNetChannel_X : public UObject
{
public:
	struct FString                                     ChannelName;                                               // 0x0060(0x0010) (NeedCtorLink)
	unsigned char                                      bOpen : 1;                                                 // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataDGNQ[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bReceivedFirstMessage : 1;                                 // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataGQLJ[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bClosed : 1;                                               // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataJXW7[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bTimedOut : 1;                                             // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataNPN3[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                NextMessageID;                                             // 0x0074(0x0004)
	float                                              WaitForMessageTime;                                        // 0x0078(0x0004) (Edit)
	unsigned char                                      UnknownDataBH46[0x4];                                      // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FPendingChannelService>              ServiceQueue;                                              // 0x0080(0x0010) (NeedCtorLink)
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                             // 0x0090(0x0008) (ExportObject, Component, EditInline)
	struct FScriptDelegate                             __EventClosed__Delegate;                                   // 0x0098(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataQMS6[0xC];                                      // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetChannel_X");
		return ptr;
	}


	struct FString GetDebugName();
	void Close();
	void Timeout();
	void ClearTimeout();
	void UpdateTimeout();
	void ExecuteService(class UPsyNetClientService_X* Service);
	void ExecuteNext();
	class UAsyncTask* CreatePendingService(class UPsyNetClientService_X* Service, int MessageId);
	class UAsyncTask* QueueServiceCall(class UPsyNetClientService_X* Service, class UPsyNetMessage_X* Message);
	void Open();
	void Unsubscribe(const struct FScriptDelegate& Callback);
	void Subscribe(class UClass* ServiceClass, const struct FScriptDelegate& Callback);
	void Init(const struct FString& InChannelName);
	void EventClosed(class UPsyNetChannel_X* Channel);
};

// Class ProjectX.MICParamDispenserComponent_X
// 0x0028 (FullSize[0x00C8] - InheritedSize[0x00A0])
class UMICParamDispenserComponent_X : public UActorComponent_X
{
public:
	unsigned char                                      UnknownDataKZJK[0x4];                                      // 0x00A4(0x0004) MISSED OFFSET
	struct FPointer                                    VfTable_IISetParameter;                                    // 0x00A8(0x0008) (Const, Native, NoExport)
	int                                                MaterialIndex;                                             // 0x00B0(0x0004) (Edit)
	struct FName                                       AttachedComponentName;                                     // 0x00B4(0x0008) (Edit)
	unsigned char                                      UnknownDataSX2A[0x4];                                      // 0x00BC(0x0004) MISSED OFFSET
	class UMeshComponent*                              MeshComp;                                                  // 0x00C0(0x0008) (ExportObject, Component, EditInline, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MICParamDispenserComponent_X");
		return ptr;
	}


	bool __MICParamDispenserComponent_X__Attached_EF2C561444A6C8C7ACADEEADF860F32B(const struct FFXAttachment& A);
	void Attached();
	void SetActorParameter(const struct FName& Key, class AActor* Value);
	void SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value);
	void SetVectorParameter(const struct FName& Key, const struct FVector& Value);
	void SetFloatParameter(const struct FName& Key, float Value);
	void SetNameParameter(const struct FName& Key, const struct FName& Value);
};

// Class ProjectX.PartyMessage_CrossPlayTextChat_X
// 0x0039 (FullSize[0x00D1] - InheritedSize[0x0098])
class UPartyMessage_CrossPlayTextChat_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                MemberId;                                                  // 0x0098(0x0038)
	TEnumAsByte<ECrossPlatformChatState>               CrossChatState;                                            // 0x00D0(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_CrossPlayTextChat_X");
		return ptr;
	}


	class UPartyMessage_CrossPlayTextChat_X* SetCrossPlayTextChatState(TEnumAsByte<ECrossPlatformChatState> InCrossChatState);
	class UPartyMessage_CrossPlayTextChat_X* SetMemberId(const struct FUniqueNetId& InMemberId);
};

// Class ProjectX.PartyMessage_InviteToTrade_X
// 0x0038 (FullSize[0x00D0] - InheritedSize[0x0098])
class UPartyMessage_InviteToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                InviteMemberId;                                            // 0x0098(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_InviteToTrade_X");
		return ptr;
	}


	class UPartyMessage_InviteToTrade_X* SetInviteMemberId(const struct FUniqueNetId& InMemberId);
};

// Class ProjectX.Online_X
// 0x0016 (FullSize[0x0078] - InheritedSize[0x0062])
class UOnline_X : public UStateObject_X
{
public:
	unsigned char                                      UnknownDataA8OF[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	class UOnlineSubsystem*                            OnlineSub;                                                 // 0x0068(0x0008) (Transient, PrivateWrite)
	class UPsyNet_X*                                   PsyNet;                                                    // 0x0070(0x0008) (Transient, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Online_X");
		return ptr;
	}


	struct FString BuildAddress(const struct FString& Host, int Port, const struct FString& IP);
	bool IsInOnlineGame();
	bool IsInMainMenu();
	class AGRI_X* GetGRI();
	class AWorldInfo* GetWorldInfo();
	struct FUniqueNetId CreateUniqueNetID(TEnumAsByte<EOnlinePlatform> Platform, const struct FString& PlatformName);
	bool UniqueLobbyIDIsSet(const struct FUniqueLobbyId& InID);
	struct FUniqueLobbyId StringToUniqueLobbyId(const struct FString& InID);
	struct FString UniqueLobbyIdToString(const struct FUniqueLobbyId& InID);
	struct FUniqueNetId GetUniqueNetIDWithoutSplitscreenID(const struct FUniqueNetId& Id);
	struct FUniqueNetId GetPrimaryIDForGuest(const struct FUniqueNetId& InGuestID);
	bool UniqueNetIDIsGuest(const struct FUniqueNetId& InID);
	bool UniqueNetIDIsValid(const struct FUniqueNetId& InID);
	struct FUniqueNetId StringToUniqueNetId(const struct FString& InID);
	struct FString UniqueNetIdToString(const struct FUniqueNetId& InID);
	struct FUniqueNetId CleanUniqueNetID(const struct FUniqueNetId& InID);
	int FindUniqueNetID(TArray<struct FUniqueNetId>* List, struct FUniqueNetId* Search);
	class UError* GetConnectionStatusError(int ErrorCode, class UError* FallbackError);
	void OnExit();
	void OnNewGame();
	void OnMainMenuOpened();
	void HandleGRISpawned(class AGRI_X* GRI);
	void OnInit();
	void Init(class UOnlineSubsystem* NewOnlineSubsystem);
};

// Class ProjectX.PartyMessage_AcceptInviteToTrade_X
// 0x004A (FullSize[0x00E2] - InheritedSize[0x0098])
class UPartyMessage_AcceptInviteToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                InviteMemberId;                                            // 0x0098(0x0038)
	unsigned char                                      bInviteAccepted : 1;                                       // 0x00D0(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataGA4B[0x2];                                      // 0x00D0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FGuid                                       TradeId;                                                   // 0x00D4(0x0010)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_AcceptInviteToTrade_X");
		return ptr;
	}


	class UPartyMessage_AcceptInviteToTrade_X* SetTradeId(const struct FGuid& InTradeId);
	class UPartyMessage_AcceptInviteToTrade_X* SetInviteAccepted(bool bInInviteAccepted);
	class UPartyMessage_AcceptInviteToTrade_X* SetInviteMemberId(const struct FUniqueNetId& InMemberId);
};

// Class ProjectX.FXActor_X
// 0x0168 (FullSize[0x0304] - InheritedSize[0x019C])
class AFXActor_X : public AActor
{
public:
	class UFXActorEvent_X*                             SpawnState;                                                // 0x0268(0x0008)
	class UFXActorEvent_X*                             ActivationState;                                           // 0x0270(0x0008)
	TArray<struct FFXAttachment>                       Attachments;                                               // 0x0278(0x0010) (Edit, Component, NeedCtorLink)
	struct FName                                       SocketOrBoneName;                                          // 0x0288(0x0008) (Edit)
	unsigned char                                      bDeactivateWhenOwnerDestroyed : 1;                         // 0x0290(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData6Z13[0x2];                                      // 0x0290(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowShadowCasting : 1;                                   // 0x0290(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataZRQY[0x2];                                      // 0x0294(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAutoActivate : 1;                                         // 0x0290(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData5O2U[0x2];                                      // 0x0294(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bRenderInactive : 1;                                       // 0x0290(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData2NOI[0x2];                                      // 0x0294(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bActive : 1;                                               // 0x0290(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData64BY[0x2];                                      // 0x0294(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bHadOwner : 1;                                             // 0x0290(0x0001) BIT_FIELD (Const, Transient, PrivateWrite)
	unsigned char                                      UnknownDataYT30[0x2];                                      // 0x0294(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataYWGO[0x4];                                      // 0x0294(0x0004) MISSED OFFSET
	class AFXActor_X*                                  Parent;                                                    // 0x0298(0x0008) (Edit)
	class AActor*                                      AttachmentActor;                                           // 0x02A0(0x0008) (Transient, PrivateWrite)
	TArray<class UFXActorEvent_X*>                     FXStates;                                                  // 0x02A8(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FFXActorEventCheck>                  FXEvents;                                                  // 0x02B8(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	float                                              DestroyWaitTime;                                           // 0x02C8(0x0004) (Edit)
	float                                              DestroyTime;                                               // 0x02CC(0x0004) (PrivateWrite)
	class UParameterDispenser_X*                       Parameters;                                                // 0x02D0(0x0008) (Edit, ExportObject, Component, EditInline)
	int                                                EditID;                                                    // 0x02D8(0x0004) (Edit, Const, EditConst, EditorOnly)
	unsigned char                                      UnknownDataO0ZB[0x4];                                      // 0x02DC(0x0004) MISSED OFFSET
	TArray<struct FFXEventSubscription>                EventSubscriptions;                                        // 0x02E0(0x0010) (Const, Transient, NeedCtorLink, PrivateWrite)
	class UFXActorEvent_X*                             AnimationEndState;                                         // 0x02F0(0x0008)
	struct FScriptDelegate                             __EventFXStatePushed__Delegate;                            // 0x02F8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataT7VP[0xC];                                      // 0x02F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventFXStatePopped__Delegate;                            // 0x0310(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData1Y8T[0xC];                                      // 0x0310(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.FXActor_X");
		return ptr;
	}


	void DumpDebugInfo();
	class UFXAttachmentTraitBase_X* GetTrait(class UClass* TraitClass, int AttachmentIdx);
	void OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void OnAnimPlay(class UAnimNodeSequence* SeqNode);
	void Destroyed();
	void SubscribeState(class UFXActorEvent_X* FXEvent, const struct FScriptDelegate& OnPushed, const struct FScriptDelegate& OnPopped);
	void SetStateEnabled(class UFXActorEvent_X* State, bool bEnable);
	void OnToggle(class USeqAct_Toggle* Action);
	void OnTriggerFXActor_X(class USeqAct_TriggerFXActor_X* SeqAct);
	void Inherit(class AFXActor_X* Other);
	void ResetParticles();
	void StopAllEffects();
	void DeactivateAndDestroy();
	void OnDetached(class UActorComponent* AC);
	void DeactivateFXComponent(class UActorComponent* AC);
	void ActivateFXComponent(class UActorComponent* AC);
	void OnAttached(class UActorComponent* AC);
	void UpdateFXStates();
	bool IsLocallyControlled();
	class AController* GetControllerOwner();
	void ToggleState(class UFXActorEvent_X* NewState);
	bool RemoveStateForceUpdate(class UFXActorEvent_X* OldState);
	bool RemoveEvent(class UFXActorEvent_X* OldEvent);
	bool RemoveState(class UFXActorEvent_X* OldState);
	void AddEvent(class UFXActorEvent_X* NewEvent);
	void AddState(class UFXActorEvent_X* NewState);
	bool CanRemoveEvent(struct FFXActorEventCheck* InEvent);
	bool IsStateActive(class UFXActorEvent_X* InState);
	void Deactivate();
	void Activate();
	void HandleParentStatePopped(class AFXActor_X* P, class UFXActorEvent_X* Event);
	void HandleParentStatePushed(class AFXActor_X* P, class UFXActorEvent_X* Event);
	void BindTo(class AFXActor_X* ParentFXActor);
	void SetAttachmentActor(class AActor* AttachToActor);
	void PostBeginPlay();
	void AllAttachments(class UClass* ComponentClass, class UActorComponent** OutComponent, int* OutAttachmentIdx);
	class UActorComponent* GetComponentByName(class UClass* ComponentClass, const struct FName& ComponentName);
	void EventFXStatePopped(class AFXActor_X* FXActor, class UFXActorEvent_X* Event);
	void EventFXStatePushed(class AFXActor_X* FXActor, class UFXActorEvent_X* Event);
};

// Class ProjectX.PartyMessage_PlayerTradeComplete_X
// 0x0038 (FullSize[0x00D0] - InheritedSize[0x0098])
class UPartyMessage_PlayerTradeComplete_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                TradingMemberId;                                           // 0x0098(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_PlayerTradeComplete_X");
		return ptr;
	}


	class UPartyMessage_PlayerTradeComplete_X* SetTradingMemberId(const struct FUniqueNetId& InMemberId);
};

// Class ProjectX.PartyMessage_SetPlatformParty_X
// 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
class UPartyMessage_SetPlatformParty_X : public UPartyMessage_X
{
public:
	struct FUniqueLobbyId                              PlatformPartyID;                                           // 0x0098(0x0010)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_SetPlatformParty_X");
		return ptr;
	}


};

// Class ProjectX.SeqAct_TriggerFXActor_X
// 0x0012 (FullSize[0x0170] - InheritedSize[0x015E])
class USeqAct_TriggerFXActor_X : public USequenceAction
{
public:
	class UFXActorEvent_X*                             Event;                                                     // 0x0160(0x0008) (Edit)
	class AActor*                                      AttachTo;                                                  // 0x0168(0x0008) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SeqAct_TriggerFXActor_X");
		return ptr;
	}


};

// Class ProjectX.__OnlineGameParty_X__JoinParty_C579BD03455A30D7C2F103BD52E9628E
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__OnlineGameParty_X__JoinParty_C579BD03455A30D7C2F103BD52E9628E : public UObject
{
public:
	int                                                LocalPlayerNum;                                            // 0x0060(0x0004)
	unsigned char                                      UnknownData2TBH[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	struct FUniqueLobbyId                              InPartyId;                                                 // 0x0068(0x0010)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__JoinParty_C579BD03455A30D7C2F103BD52E9628E");
		return ptr;
	}


	void __OnlineGameParty_X__JoinParty_C579BD03455A30D7C2F103BD52E9628E(class UPrivilegeCheck_X* PrivilegeCheck);
};

// Class ProjectX.__OnlineGameParty_X__HandleConfirmJoinGame_545AADAF4C0371CF4980318DDE4EC4C1
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class U__OnlineGameParty_X__HandleConfirmJoinGame_545AADAF4C0371CF4980318DDE4EC4C1 : public UObject
{
public:
	struct FPartyJoinMatchSettings                     InSettings;                                                // 0x0060(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__HandleConfirmJoinGame_545AADAF4C0371CF4980318DDE4EC4C1");
		return ptr;
	}


	void __OnlineGameParty_X__HandleConfirmJoinGame_545AADAF4C0371CF4980318DDE4EC4C1();
};

// Class ProjectX.__OnlineGameParty_X__HandleJoinLobby_4AD3D0764B64D6A6F3CAC0BC1FD468FB
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__OnlineGameParty_X__HandleJoinLobby_4AD3D0764B64D6A6F3CAC0BC1FD468FB : public UObject
{
public:
	struct FString                                     Error;                                                     // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__HandleJoinLobby_4AD3D0764B64D6A6F3CAC0BC1FD468FB");
		return ptr;
	}


	void __OnlineGameParty_X__HandleJoinLobby_4AD3D0764B64D6A6F3CAC0BC1FD468FB();
};

// Class ProjectX.PartyJoinedEvent_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPartyJoinedEvent_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyJoinedEvent_X");
		return ptr;
	}


};

// Class ProjectX.__OnlineGameParty_X__UpdatePartyInfo_9092DC7B403E7F13E3976E8CDE22665E
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class U__OnlineGameParty_X__UpdatePartyInfo_9092DC7B403E7F13E3976E8CDE22665E : public UObject
{
public:
	struct FActiveLobbyInfo                            Lobby;                                                     // 0x0060(0x0030) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__UpdatePartyInfo_9092DC7B403E7F13E3976E8CDE22665E");
		return ptr;
	}


	bool __OnlineGameParty_X__UpdatePartyInfo_9092DC7B403E7F13E3976E8CDE22665E(const struct FPartyMember& PM);
};

// Class ProjectX.NetMetrics_X
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UNetMetrics_X : public UMetricsGroup_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMetrics_X");
		return ptr;
	}


	void UseInputBuffer(const struct FUniqueNetId& PlayerID, const struct FName& Type);
	void LaunchURL(const struct FString& URL);
	void ServerReported(const struct FUniqueNetId& PlayerID);
	void RpcSignatureMismatch(int ServiceID);
	void ConnectionChangedIP(const struct FUniqueNetId& PlayerID);
	void PlayerNetworkError(const struct FUniqueNetId& PlayerID, const struct FString& Reason);
	void PlayerTimeout(const struct FUniqueNetId& PlayerID);
	void NetStats(int PeriodMS, int PsyPingMed, int PsyPingAvg, int PsyPingMax, int PsyPingMin, float NNLossPct, int NNJitter, int NNPingMin, float DLossPct, int DJitter, int DPingMin, int PsyReceived, int NNState, int OutBytes, int OutOfOrder, int InLost, int OutLost, int InPackets, int OutPackets, int PingMed, int PingAvg, int PingMax, int PingMin, int InBytes, int PsyLost);
	void PlayerNetwork(const struct FUniqueNetId& PlayerID, int PingMin, int PingMax, int PingAvg, int PktLossRateMin, int PktLossRateMax, int PktLossAvg, int InBpsMax, int InBpsAvg, int InBytesTotal, int OutBpsMax, int OutBpsAvg, int OutBytesTotal);
	void RecordPlayerNetwork(class APlayerController* PC);
};

// Class ProjectX.PartyPlatformSession_X
// 0x001C (FullSize[0x007C] - InheritedSize[0x0060])
class UPartyPlatformSession_X : public UObject
{
public:
	struct FUniqueLobbyId                              PartyID;                                                   // 0x0060(0x0010) (PrivateWrite)
	struct FScriptDelegate                             __EventPartyIdChanged__Delegate;                           // 0x0070(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData6ROF[0xC];                                      // 0x0070(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyPlatformSession_X");
		return ptr;
	}


	void ClearPlatformParty(struct FUniqueLobbyId* StructInitializer_904A09EF46AB75CCAF6279B99F8AAB3E);
	void LeaveParty();
	void BroadcastPlatformParty(class UPartyMessage_SetPlatformParty_X** ObjectInitializer_BCCE660444FF6976F7CC3FA502640497);
	void HandleJoinPlatformParty(const struct FUniqueLobbyId& InPartyId);
	bool IsInParty();
	void EventPartyIdChanged(class UPartyPlatformSession_X* Session);
};

// Class ProjectX.__OnlineGameParty_X__BroadcastAllLocalPlayers_26E726BC4270E21D39FABEB358CB6BAB
// 0x0118 (FullSize[0x0178] - InheritedSize[0x0060])
class U__OnlineGameParty_X__BroadcastAllLocalPlayers_26E726BC4270E21D39FABEB358CB6BAB : public UObject
{
public:
	struct FPartyMember                                Primary;                                                   // 0x0060(0x0118) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__BroadcastAllLocalPlayers_26E726BC4270E21D39FABEB358CB6BAB");
		return ptr;
	}


	bool __OnlineGameParty_X__BroadcastAllLocalPlayers_26E726BC4270E21D39FABEB358CB6BAB(const struct FPartyMember& PM);
};

// Class ProjectX.OnlineGameStats_X
// 0x0014 (FullSize[0x008C] - InheritedSize[0x0078])
class UOnlineGameStats_X : public UOnline_X
{
public:
	struct FString                                     MatchGUID;                                                 // 0x0078(0x0010) (NeedCtorLink)
	int                                                PlaylistId;                                                // 0x0088(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameStats_X");
		return ptr;
	}


	void UploadStats(const struct FString& StatType, TArray<struct FUploadStatDataSet>* DataSet);
	void SetPlaylistID(int InID);
	void SetMatchGUID(const struct FString& InGuid);
};

// Class ProjectX.RPC_GetBlockList_X
// 0x004C (FullSize[0x0120] - InheritedSize[0x00D4])
class URPC_GetBlockList_X : public URPC_X
{
public:
	TArray<struct FBlockedListRequestData>             bLocked;                                                   // 0x0100(0x0010) (Transient, NeedCtorLink)
	TArray<struct FOnlineFriend>                       FriendsData;                                               // 0x0110(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetBlockList_X");
		return ptr;
	}


	struct FOnlineFriend ConvertToBlockedOnlineFriend(const struct FBlockedListRequestData& FromPlayer);
	void OnComplete(TArray<struct FOnlineFriend>* MapLocal_61C2B5C94301A8EEC4162289BF201C1F);
};

// Class ProjectX.OnlineConfig_X
// 0x0016 (FullSize[0x0076] - InheritedSize[0x0060])
class UOnlineConfig_X : public UObject
{
public:
	unsigned char                                      bAllowOnServer : 1;                                        // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData7YYQ[0x2];                                      // 0x0060(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataB4P3[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	TArray<struct FModifierSubscription>               AllSubscriptions;                                          // 0x0068(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineConfig_X");
		return ptr;
	}


	void UnsubscribeModifiers();
	void ModifyObjects(class UClass* ObjClass, const struct FScriptDelegate& ApplyCallback, const struct FScriptDelegate& ResetCallback);
	void Undo();
	void Apply();
};

// Class ProjectX.PartyConfig_X
// 0x0004 (FullSize[0x007A] - InheritedSize[0x0076])
class UPartyConfig_X : public UOnlineConfig_X
{
public:
	unsigned char                                      bCompressMessages : 1;                                     // 0x0078(0x0001) BIT_FIELD (Config)
	unsigned char                                      UnknownDataDDDO[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyConfig_X");
		return ptr;
	}


};

// Class ProjectX.ClanforgeReservation_X
// 0x0068 (FullSize[0x00C8] - InheritedSize[0x0060])
class UClanforgeReservation_X : public UObject
{
public:
	struct FString                                     ReserveURLs[0x3];                                          // 0x0060(0x0010) (NeedCtorLink, PrivateWrite)
	TEnumAsByte<EReserveState>                         ReserveState;                                              // 0x0090(0x0001) (Transient)
	unsigned char                                      UnknownDataK2MK[0x7];                                      // 0x0091(0x0007) MISSED OFFSET
	TArray<float>                                      RetryDelays;                                               // 0x0098(0x0010) (Edit, NeedCtorLink)
	int                                                SendFailures;                                              // 0x00A8(0x0004) (Transient)
	unsigned char                                      UnknownDataXADM[0x4];                                      // 0x00AC(0x0004) MISSED OFFSET
	TArray<class UWebRequest_X*>                       QueuedRequests;                                            // 0x00B0(0x0010) (Transient, NeedCtorLink)
	class UWebRequest_X*                               PendingRequest;                                            // 0x00C0(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClanforgeReservation_X");
		return ptr;
	}


	void HandleRetry();
	void Retry();
	void HandleSendComplete(class UWebRequest_X* Request);
	void ProcessNextRequest();
	void Send(const struct FString& URL);
	void SetReserveState(TEnumAsByte<EReserveState> NewState);
	void HandleActivate(class UOnlineGameDedicatedServer_X* Server);
	void HandleInactive(class UOnlineGameDedicatedServer_X* Server);
	void Init(class UOnlineGameDedicatedServer_X* Server, const struct FString& ReserveURL, const struct FString& UnreserveURL);
};

// Class ProjectX.PsyNetRequestQue_X
// 0x0024 (FullSize[0x0084] - InheritedSize[0x0060])
class UPsyNetRequestQue_X : public UObject
{
public:
	float                                              RequestTimeout;                                            // 0x0060(0x0004) (Edit)
	unsigned char                                      UnknownDataZ0JN[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	TArray<struct FPsyNetRequest>                      Requests;                                                  // 0x0068(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __SendMessageDelegate__Delegate;                           // 0x0078(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataSP2K[0xC];                                      // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetRequestQue_X");
		return ptr;
	}


	void FailAllPending(class UError* Error);
	void TimeoutRequests();
	bool ProcessResponseMessage(class UPsyNetMessage_X* Message);
	void RemoveRequest(const struct FName& RequestID);
	void SetRequestComplete(const struct FName& RequestID, class UPsyNetMessage_X* Response, class UError* Error);
	class UTAsyncResult__PsyNetMessage_X* SendRequest(class UPsyNetMessage_X* Message);
	class UAsyncTask* SendMessageDelegate(class UPsyNetMessage_X* Message);
};

// Class ProjectX.RPC_UpdateLeaderboard_X
// 0x0050 (FullSize[0x0124] - InheritedSize[0x00D4])
class URPC_UpdateLeaderboard_X : public URPC_X
{
public:
	TArray<struct FUploadStatDataSet>                  Updates;                                                   // 0x0100(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     MatchGUID;                                                 // 0x0110(0x0010) (NeedCtorLink, PrivateWrite)
	int                                                PlaylistId;                                                // 0x0120(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateLeaderboard_X");
		return ptr;
	}


	class URPC_UpdateLeaderboard_X* SetPlaylistID(int InID);
	class URPC_UpdateLeaderboard_X* SetMatchGUID(const struct FString& InGuid);
	class URPC_UpdateLeaderboard_X* SetUpdates(TArray<struct FUploadStatDataSet>* InUpdates);
};

// Class ProjectX.ServerMetrics_X
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UServerMetrics_X : public UMetricsGroup_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ServerMetrics_X");
		return ptr;
	}


	void Crashed();
	void ShutDown();
	void Created(const struct FString& Host);
};

// Class ProjectX.PartyMessage_ReadyToTrade_X
// 0x003A (FullSize[0x00D2] - InheritedSize[0x0098])
class UPartyMessage_ReadyToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                TradingMemberId;                                           // 0x0098(0x0038)
	unsigned char                                      bReadyToTrade : 1;                                         // 0x00D0(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataWB0W[0x2];                                      // 0x00D0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_ReadyToTrade_X");
		return ptr;
	}


	class UPartyMessage_ReadyToTrade_X* SetReadyToTrade(bool bInReadyToTrade);
	class UPartyMessage_ReadyToTrade_X* SetTradingMemberId(const struct FUniqueNetId& InTradingMemberId);
};

// Class ProjectX.RPC_SearchPsyTag_X
// 0x0074 (FullSize[0x0148] - InheritedSize[0x00D4])
class URPC_SearchPsyTag_X : public URPC_X
{
public:
	struct FString                                     PsyTagName;                                                // 0x0100(0x0010) (NeedCtorLink)
	int                                                PsyTagCode;                                                // 0x0110(0x0004)
	int                                                PageIndex;                                                 // 0x0114(0x0004)
	int                                                PageSize;                                                  // 0x0118(0x0004)
	unsigned char                                      UnknownData7YDV[0x4];                                      // 0x011C(0x0004) MISSED OFFSET
	struct FString                                     SortType;                                                  // 0x0120(0x0010) (NeedCtorLink)
	int                                                TotalRows;                                                 // 0x0130(0x0004) (Transient)
	unsigned char                                      UnknownDataKT4N[0x4];                                      // 0x0134(0x0004) MISSED OFFSET
	TArray<class UPsyTagSearchResult_X*>               MatchedPlayers;                                            // 0x0138(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SearchPsyTag_X");
		return ptr;
	}


	class UErrorType* OverrideErrorType(class UErrorType* ErrorType);
	class URPC_SearchPsyTag_X* SetPage(int InPage);
	class URPC_SearchPsyTag_X* SetTag(const struct FString& InName, int InCode);
};

// Class ProjectX.PsyNetClientService_X
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UPsyNetClientService_X : public UObject
{
public:
	struct FString                                     Service;                                                   // 0x0060(0x0010) (Edit, Const, NeedCtorLink)
	int                                                Version;                                                   // 0x0070(0x0004) (Edit, Const)
	unsigned char                                      UnknownDataI22P[0x4];                                      // 0x0074(0x0004) MISSED OFFSET
	class UError*                                      Error;                                                     // 0x0078(0x0008) (Const)
	class UPsyNetConnection_X*                         Connection;                                                // 0x0080(0x0008)
	unsigned char                                      UnknownData6Z6G[0x8];                                      // 0x0088(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.PsyNetClientService_X.Expiration


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetClientService_X");
		return ptr;
	}


	void Execute();
	void SetError(class UError* InError);
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__NotifyOnResult_116B6DE846B321DEC3D2E1BD2D15CEFB
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__Texture2DDynamic__NotifyOnResult_116B6DE846B321DEC3D2E1BD2D15CEFB : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataDYNB[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__Texture2DDynamic__NotifyOnResult_116B6DE846B321DEC3D2E1BD2D15CEFB");
		return ptr;
	}


	void __TAsyncResult__Texture2DDynamic__NotifyOnResult_116B6DE846B321DEC3D2E1BD2D15CEFB();
};

// Class ProjectX.PartyMetrics_X
// 0x000C (FullSize[0x008C] - InheritedSize[0x0080])
class UPartyMetrics_X : public UMetricsGroup_X
{
public:
	struct FPartyMetricsData                           PartyData;                                                 // 0x0080(0x000C) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMetrics_X");
		return ptr;
	}


	void PartyChannelBroken(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, int MissingMessageID);
	void PartyMessage(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FName& MessageType);
	void PartyChanged(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, bool bLeader, int PartySize, int LocalPlayers, int RemotePlayers);
	struct FPartyMetricsData CreatePartyMetricsData(class UOnlineGameParty_X* Party);
	void RecordPartyChanged(class UOnlineGameParty_X* Party);
	void PartyError(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FString& Error);
	void PartyKickRemotePlayer(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FString& Reason);
	void PartyKickLocalPlayer(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FString& Reason);
	void PartyLeave(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FString& Reason);
	void PartyCreationFailed(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FString& Error);
	void PartyCreated(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID);
};

// Class ProjectX.RPC_DeactivateGameServer_X
// 0x002C (FullSize[0x0100] - InheritedSize[0x00D4])
class URPC_DeactivateGameServer_X : public URPC_X
{
public:
	unsigned char                                      UnknownData9Z3R[0x8];                                      // 0x0100(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_DeactivateGameServer_X.serverId


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_DeactivateGameServer_X");
		return ptr;
	}


	class URPC_DeactivateGameServer_X* SetServerID();
};

// Class ProjectX.PsyNetService_DuplicateLogin_X
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UPsyNetService_DuplicateLogin_X : public UPsyNetClientService_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_DuplicateLogin_X");
		return ptr;
	}


};

// Class ProjectX.__PsyNetConnection_X__ProcessServiceCall_514D1DBA4D753CF02800509DDB88F1BA
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__PsyNetConnection_X__ProcessServiceCall_514D1DBA4D753CF02800509DDB88F1BA : public UObject
{
public:
	class UPsyNetMessage_X*                            Response;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetConnection_X__ProcessServiceCall_514D1DBA4D753CF02800509DDB88F1BA");
		return ptr;
	}


	void __PsyNetConnection_X__ProcessServiceCall_514D1DBA4D753CF02800509DDB88F1BA(class UError* _);
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__NotifyOnResultComplete_AD4A45444057B95186A42EA4A81ADC70
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__Texture2DDynamic__NotifyOnResultComplete_AD4A45444057B95186A42EA4A81ADC70 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7DDC[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__Texture2DDynamic__NotifyOnResultComplete_AD4A45444057B95186A42EA4A81ADC70");
		return ptr;
	}


	void __TAsyncResult__Texture2DDynamic__NotifyOnResultComplete_AD4A45444057B95186A42EA4A81ADC70(class UError* Err);
};

// Class ProjectX.WordFilterTypes_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UWordFilterTypes_X : public UObject
{
public:
	struct FScriptDelegate                             __CommentSanitizedDelegate__Delegate;                      // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataA834[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __CommentErrorDelegate__Delegate;                          // 0x0078(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataC01T[0xC];                                      // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WordFilterTypes_X");
		return ptr;
	}


	void SortRequestTimeAscending(TArray<struct FWordFilterPair>* Filtered);
	void SortPendingFront(TArray<struct FWordFilterPair>* Filtered);
	void CommentErrorDelegate(const struct FString& OriginalPhrase, class UError* Error);
	void CommentSanitizedDelegate(const struct FString& Original, const struct FString& Sanitized);
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__SetResultWhen_27C75B71464D7B444BA73CA557643D61
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__Texture2DDynamic__SetResultWhen_27C75B71464D7B444BA73CA557643D61 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                         // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataF3QT[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__Texture2DDynamic__SetResultWhen_27C75B71464D7B444BA73CA557643D61");
		return ptr;
	}


	void __TAsyncResult__Texture2DDynamic__SetResultWhen_27C75B71464D7B444BA73CA557643D61();
};

// Class ProjectX.OnlinePlayerRegionRestrictions_X
// 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
class UOnlinePlayerRegionRestrictions_X : public UOnline_X
{
public:
	TArray<TEnumAsByte<ERegionRestriction>>            Restrictions;                                              // 0x0078(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerRegionRestrictions_X");
		return ptr;
	}


	TEnumAsByte<ERegionRestriction> __OnlinePlayerRegionRestrictions_X__HandleLoginChanged_74BC35BE483A6DEEA79AFCB6A906C897(const struct FName& S);
	bool IsRestricted(TEnumAsByte<ERegionRestriction> Restriction);
	void HandleLoginChanged(class UOnlinePlayerAuthentication_X* Auth, TArray<TEnumAsByte<ERegionRestriction>>* MapLocal_7131C4334406B0B1725E4BB3DD24187B);
	void OnExit();
	void OnInit();
};

// Class ProjectX.__PsyNetMessengerHttp_X__SendMessage_7A28F473467DB1B86979BAA13C50C78F
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__PsyNetMessengerHttp_X__SendMessage_7A28F473467DB1B86979BAA13C50C78F : public UObject
{
public:
	struct FString                                     PsyRequestID;                                              // 0x0060(0x0010) (NeedCtorLink)
	class UAsyncTask*                                  Task;                                                      // 0x0070(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetMessengerHttp_X__SendMessage_7A28F473467DB1B86979BAA13C50C78F");
		return ptr;
	}


	void __PsyNetMessengerHttp_X__SendMessage_7A28F473467DB1B86979BAA13C50C78F(class UWebRequest_X* Request);
};

// Class ProjectX.ShakeComponent_X
// 0x010C (FullSize[0x01AC] - InheritedSize[0x00A0])
class UShakeComponent_X : public UActorComponent_X
{
public:
	unsigned char                                      UnknownDataJ488[0x4];                                      // 0x00A4(0x0004) MISSED OFFSET
	float                                              InnerRadius;                                               // 0x00A8(0x0004) (Edit)
	float                                              OuterRadius;                                               // 0x00AC(0x0004) (Edit)
	float                                              Falloff;                                                   // 0x00B0(0x0004) (Edit)
	unsigned char                                      bAutoPlay : 1;                                             // 0x00B4(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataDI7D[0x2];                                      // 0x00B4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAutoDetach : 1;                                           // 0x00B4(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataFDRQ[0x2];                                      // 0x00B8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bOnlyAffectPlayersWithPawns : 1;                           // 0x00B4(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataUDTD[0x2];                                      // 0x00B8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAttenuate : 1;                                            // 0x00B4(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataO7EN[0x2];                                      // 0x00B8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bPlaying : 1;                                              // 0x00B4(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownDataU20K[0x2];                                      // 0x00B8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bStopping : 1;                                             // 0x00B4(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownDataUCK4[0x2];                                      // 0x00B8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<EShakeReceiver>                        Receiver;                                                  // 0x00B8(0x0001) (Edit)
	unsigned char                                      UnknownData9CGT[0x3];                                      // 0x00B9(0x0003) MISSED OFFSET
	float                                              RadiusScale;                                               // 0x00BC(0x0004) (Edit)
	float                                              BlendInTime;                                               // 0x00C0(0x0004) (Edit)
	float                                              BlendOutTime;                                              // 0x00C4(0x0004) (Edit)
	class UCameraShake*                                ShakeParams;                                               // 0x00C8(0x0008) (Edit)
	struct FRawDistributionFloat                       AmplitudeScale;                                            // 0x00D0(0x0028) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       FrequencyScale;                                            // 0x00F8(0x0028) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       DurationScale;                                             // 0x0120(0x0028) (Edit, Component, NeedCtorLink)
	float                                              CurrentAmplitudeScale;                                     // 0x0148(0x0004) (Const, Transient)
	float                                              CurrentFrequencyScale;                                     // 0x014C(0x0004) (Const, Transient)
	class UForceFeedbackWaveform*                      ForceFeedbackWaveform;                                     // 0x0150(0x0008) (Edit)
	float                                              ForceFeedbackScale;                                        // 0x0158(0x0004) (Edit)
	float                                              ForceFeedbackBalance;                                      // 0x015C(0x0004) (Edit)
	TArray<struct FParticleSysParam>                   InstanceParameters;                                        // 0x0160(0x0010) (Edit, NeedCtorLink, EditInline)
	float                                              PlayTime;                                                  // 0x0170(0x0004) (Transient, PrivateWrite)
	float                                              StopTime;                                                  // 0x0174(0x0004) (Transient, PrivateWrite)
	struct FVector                                     ShakeLocTimeOffset;                                        // 0x0178(0x000C) (Transient, PrivateWrite)
	struct FVector                                     ShakeRotTimeOffset;                                        // 0x0184(0x000C) (Transient, PrivateWrite)
	float                                              ShakeFOVTimeOffset;                                        // 0x0190(0x0004) (Transient, PrivateWrite)
	float                                              CameraShakeDuration;                                       // 0x0194(0x0004) (Transient, PrivateWrite)
	float                                              ForceFeedbackDuration;                                     // 0x0198(0x0004) (Transient, PrivateWrite)
	float                                              ForceFeedbackSamplesTime;                                  // 0x019C(0x0004) (Transient, PrivateWrite)
	class AActor*                                      PrevOwner;                                                 // 0x01A0(0x0008) (Transient, PrivateWrite)
	TArray<struct FShakeReceiver>                      Receivers;                                                 // 0x01A8(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ShakeComponent_X");
		return ptr;
	}


	bool GetColorParameter(const struct FName& InName, struct FColor* OutColor);
	bool GetVectorParameter(const struct FName& InName, struct FVector* OutVector);
	bool GetFloatParameter(const struct FName& InName, float* OutFloat);
	void SetColorParameter(const struct FName& ParameterName, const struct FColor& Param);
	void SetVectorRandParameter(const struct FName& ParameterName, struct FVector* Param, struct FVector* ParamLow);
	void SetVectorParameter(const struct FName& ParameterName, const struct FVector& Param);
	void SetFloatRandParameter(const struct FName& ParameterName, float Param, float ParamLow);
	void SetFloatParameter(const struct FName& ParameterName, float Param);
	bool IsPlaying();
	void StopShake(float InBlendOutTime);
	void InitParams();
	void PlayShake();
	void Detached();
	void Attached();
};

// Class ProjectX.CacheTimer_X
// 0x001A (FullSize[0x008A] - InheritedSize[0x0070])
class UCacheTimer_X : public UComponent
{
public:
	float                                              CacheTimeoutSeconds;                                       // 0x0070(0x0004) (Edit)
	float                                              CacheExpireTime;                                           // 0x0074(0x0004) (Transient, PrivateWrite)
	unsigned char                                      bEnabled : 1;                                              // 0x0078(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownDataCEB1[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataJ58K[0x4];                                      // 0x007C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventExpired__Delegate;                                  // 0x0080(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataGAUH[0xC];                                      // 0x007C(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CacheTimer_X");
		return ptr;
	}


	float GetRandomCacheTimeoutTime();
	void OnExpired();
	void OnDisabled();
	void OnEnabled();
	void SetEnabled(bool bEnableExpiration);
	void Reset(float TimeoutTime);
	bool IsExpired();
	void EventExpired(class UCacheTimer_X* Timer);
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__Copy_97B3CCF74ADF731F8FFE14AC2944713D
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__TAsyncResult__Texture2DDynamic__Copy_97B3CCF74ADF731F8FFE14AC2944713D : public UObject
{
public:
	class UTAsyncResult__Texture2DDynamic*             Instance;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__Texture2DDynamic__Copy_97B3CCF74ADF731F8FFE14AC2944713D");
		return ptr;
	}


	void __TAsyncResult__Texture2DDynamic__Copy_97B3CCF74ADF731F8FFE14AC2944713D(class UTexture2DDynamic* R, class UError* E);
};

// Class ProjectX.PartyMessage_InviteToTradeError_X
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UPartyMessage_InviteToTradeError_X : public UPartyMessage_X
{
public:
	struct FName                                       ErrorTypeName;                                             // 0x0098(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_InviteToTradeError_X");
		return ptr;
	}


	class UPartyMessage_InviteToTradeError_X* SetError(class UErrorType* Type);
};

// Class ProjectX.RPC_SetServerNotJoinable_X
// 0x002C (FullSize[0x0100] - InheritedSize[0x00D4])
class URPC_SetServerNotJoinable_X : public URPC_X
{
public:
	unsigned char                                      UnknownDataNMBO[0x8];                                      // 0x0100(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_SetServerNotJoinable_X.serverId


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetServerNotJoinable_X");
		return ptr;
	}


	class URPC_SetServerNotJoinable_X* SetServerID();
};

// Class ProjectX.PsyNetMessenger_X
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class UPsyNetMessenger_X : public UObject
{
public:
	struct FScriptDelegate                             __EventMessageReceived__Delegate;                          // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataE265[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetMessenger_X");
		return ptr;
	}


	void Dispose();
	void EventMessageReceived(class UPsyNetMessage_X* Message);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
	void Connect();
};

// Class ProjectX.GameInfo_X
// 0x0076 (FullSize[0x04B0] - InheritedSize[0x043A])
class AGameInfo_X : public AGameInfo
{
public:
	class AGameReplicationInfo*                        GameReplicationInfoArchetype;                              // 0x0470(0x0008) (Edit)
	class APlayerController*                           PlayerControllerArchetype;                                 // 0x0478(0x0008) (Edit)
	class APawn*                                       PawnArchetype;                                             // 0x0480(0x0008) (Edit)
	TArray<struct FPauserData>                         PCPausers;                                                 // 0x0488(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventSpawned__Delegate;                                  // 0x0498(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataPJR8[0xC];                                      // 0x0498(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventInit__Delegate;                                     // 0x04B0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataWUE5[0xC];                                      // 0x04B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameInfo_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void ClientMapLoadFail(const struct FUniqueNetId& PlayerID, const struct FString& MapName);
	void RemovePauser(class APlayerController* PC, bool bForceRemove);
	void AddPauser(class APlayerController* PC);
	void SetPaused(class APlayerController* PC, bool bPause);
	void TogglePause(class APlayerController* PC);
	bool IsPaused(class APlayerController* PC);
	TScriptInterface<class UIOnlineGameHost_X> GetOnlineGameHost();
	class UOnlineGameLanServer_X* GetOnlineGameLanServer();
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicatedServer();
	class UOnlineGame_Base_X* GetOnlineGame();
	void EndOnlineGame();
	void Logout(class AController* Exiting);
	void GenericPlayerInitialization(class AController* C);
	void DisconnectExistingPlayer(struct FUniqueNetId* PlayerID);
	class APlayerController* Login(const struct FString& Portal, const struct FString& Options, const struct FUniqueNetId& UniqueId, struct FString* ErrorMessage);
	void PreLogin(const struct FString& Options, const struct FString& Address, const struct FUniqueNetId& UniqueId, bool bSupportsAuth, struct FString* ErrorMessage);
	void UpdateGameSettingsCounts();
	void PostBeginPlay();
	bool ProcessServerLogin();
	void RegisterServer();
	class APawn* SpawnDefaultPawnFor(class AController* NewPlayer, class ANavigationPoint* StartSpot);
	void PreBeginPlay();
	class APlayerController* SpawnPlayerController(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	class UClass* SetGameType(const struct FString& MapName, const struct FString& Options, const struct FString& Portal);
	struct FString GetDefaultGameClassPath(const struct FString& MapName, const struct FString& Options, const struct FString& Portal);
	void PDI(class UClass* ActorClass, bool bOnlybDebug);
	void InitGame(const struct FString& Options, struct FString* ErrorMessage);
	void EventInit(class AGameInfo_X* G, const struct FString& Options);
	void EventSpawned(class AGameInfo_X* G);
};

// Class ProjectX.WebCache_X
// 0x001C (FullSize[0x007C] - InheritedSize[0x0060])
class UWebCache_X : public UObject
{
public:
	TArray<struct FCachedDataRequest>                  Requests;                                                  // 0x0060(0x0010) (Transient, Component, NeedCtorLink)
	struct FScriptDelegate                             __CachedDataCallback__Delegate;                            // 0x0070(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData4VRV[0xC];                                      // 0x0070(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WebCache_X");
		return ptr;
	}


	struct FString GetRequestDebugString(const struct FCachedDataRequest& Request);
	void HandleWebRequest(class UWebRequest_X* WebRequest);
	void DownloadData(const struct FString& URL, const struct FString& ETag, class UStringMap* Headers, bool bZipResponse);
	void HandleLoadFromCache(class ULocalCache_X* Cache, class UCachedWebData_X* CacheObject, class UError* Error);
	void RaiseUrlEmptyError(const struct FScriptDelegate& Callback);
	void SyncDataInternal(const struct FString& URL, const struct FScriptDelegate& Callback, bool bZipResponse, class UStringMap* Headers);
	void SyncDataZipped(const struct FString& URL, const struct FScriptDelegate& Callback, class UStringMap* Headers);
	void SyncData(const struct FString& URL, const struct FScriptDelegate& Callback, class UStringMap* Headers);
	struct FString GetCachedPath(const struct FString& URL);
	void CachedDataCallback(class UCachedWebData_X* CachedData);
};

// Class ProjectX.WordFilterConfig_X
// 0x002E (FullSize[0x00A4] - InheritedSize[0x0076])
class UWordFilterConfig_X : public UOnlineConfig_X
{
public:
	unsigned char                                      bSanitizeEntirePhrase : 1;                                 // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataRHZJ[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      PsyNetFilterEnabled : 1;                                   // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataKIVO[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                NameHistoryCacheLength;                                    // 0x007C(0x0004) (Edit)
	TArray<TEnumAsByte<EWordFilterUsage>>              IgnoreFilterList;                                          // 0x0080(0x0010) (Edit, Config, NeedCtorLink)
	TArray<TEnumAsByte<EWordFilterUsage>>              PlatformFilterList;                                        // 0x0090(0x0010) (Edit, Config, NeedCtorLink)
	float                                              PsyNetWordFilterBatchDelay;                                // 0x00A0(0x0004) (Edit)
	int                                                PsyNetWordFilterBatchMaxSize;                              // 0x00A4(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WordFilterConfig_X");
		return ptr;
	}


};

// Class ProjectX.__OnlineGameParty_X__GetLocalMemberIDs_CD227BE949CAAC191ADC1FA452572A4B
// 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
class U__OnlineGameParty_X__GetLocalMemberIDs_CD227BE949CAAC191ADC1FA452572A4B : public UObject
{
public:
	struct FUniqueNetId                                PrimaryPlayerID;                                           // 0x0060(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__GetLocalMemberIDs_CD227BE949CAAC191ADC1FA452572A4B");
		return ptr;
	}


	bool __OnlineGameParty_X__GetLocalMemberIDs_CD227BE949CAAC191ADC1FA452572A4B(const struct FPartyMember& Member);
};

// Class ProjectX.WebImageDownload_X
// 0x0026 (FullSize[0x0086] - InheritedSize[0x0060])
class UWebImageDownload_X : public UObject
{
public:
	struct FString                                     URL;                                                       // 0x0060(0x0010) (NeedCtorLink)
	unsigned char                                      bSRGB : 1;                                                 // 0x0070(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataO0SN[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataQAPE[0x4];                                      // 0x0074(0x0004) MISSED OFFSET
	class UTexture2DDynamic*                           Texture;                                                   // 0x0078(0x0008)
	class UTAsyncResult__Texture2DDynamic*             AsyncResult;                                               // 0x0080(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WebImageDownload_X");
		return ptr;
	}


};

// Class ProjectX.__OnlineGameWordFilter_X__InternalSanitize_1736197745EF8F166D6BAC897013EAC9
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__OnlineGameWordFilter_X__InternalSanitize_1736197745EF8F166D6BAC897013EAC9 : public UObject
{
public:
	struct FString                                     Id;                                                        // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameWordFilter_X__InternalSanitize_1736197745EF8F166D6BAC897013EAC9");
		return ptr;
	}


	void __OnlineGameWordFilter_X__InternalSanitize_1736197745EF8F166D6BAC897013EAC9(const struct FWordFilterResult& Result);
};

// Class ProjectX.AdHocBeacon_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UAdHocBeacon_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0060(0x0008) (Const, Native, NoExport)
	struct FPointer                                    pAdHoc;                                                    // 0x0068(0x0008) (Const, Native, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AdHocBeacon_X");
		return ptr;
	}


	int GetNodeCountMax();
	void AdHocJoinMatch();
	void AdHocCreateMatch();
	bool AdHocIsActive();
	void AdHocDisconnectFromAccessPoint();
	void AdHocConnectToAccessPoint(int ScanResultIndex);
	void AdHocScanForAccessPoints();
	void AdHocBecomeStation();
	void AdHocRejectStation(int NetworkNodeIndex);
	void AdHocBecomeAccessPoint();
	void AdHocSetAdvertiseData(const struct FString& AdvertiseData);
	void AdHocDestroy();
	void AdHocCreate();
	void AdHocCreateWithUsername(const struct FString& Username);
	void Construct();
};

// Class ProjectX.__OnlineGameParty_X__CreatePartyInternal_15CA611F481EE67F604333A0139A1A52
// 0x0024 (FullSize[0x0084] - InheritedSize[0x0060])
class U__OnlineGameParty_X__CreatePartyInternal_15CA611F481EE67F604333A0139A1A52 : public UObject
{
public:
	TScriptInterface<class UOnlineLobbyInterface>      LobbyInterface;                                            // 0x0060(0x0010)
	int                                                LocalPlayerNum;                                            // 0x0070(0x0004)
	unsigned char                                      UnknownData1366[0x4];                                      // 0x0074(0x0004) MISSED OFFSET
	struct FScriptDelegate                             Handler;                                                   // 0x0078(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5AQX[0xC];                                      // 0x0074(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__CreatePartyInternal_15CA611F481EE67F604333A0139A1A52");
		return ptr;
	}


	void __OnlineGameParty_X__CreatePartyInternal_15CA611F481EE67F604333A0139A1A52(class UError* ConnectionError);
};

// Class ProjectX.__WebImageCache_X__SyncUncachedImage_85DCE60843CFECCBC9BD2FB270E6A45C
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__WebImageCache_X__SyncUncachedImage_85DCE60843CFECCBC9BD2FB270E6A45C : public UObject
{
public:
	class UTAsyncResult__Texture2DDynamic*             Task;                                                      // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__WebImageCache_X__SyncUncachedImage_85DCE60843CFECCBC9BD2FB270E6A45C");
		return ptr;
	}


	void __WebImageCache_X__SyncUncachedImage_85DCE60843CFECCBC9BD2FB270E6A45C(const struct FOnlineImageDownload& ImageInfo);
};

// Class ProjectX.__WebCache_X__DownloadData_5871A4A6487F784E0479CAA139F2383F
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__WebCache_X__DownloadData_5871A4A6487F784E0479CAA139F2383F : public UObject
{
public:
	class UWebRequest_X*                               WebRequest;                                                // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__WebCache_X__DownloadData_5871A4A6487F784E0479CAA139F2383F");
		return ptr;
	}


	void __WebCache_X__DownloadData_5871A4A6487F784E0479CAA139F2383F(const struct FString& Key, const struct FString& Value);
};

// Class ProjectX.GameInfo_MapProfiler_X
// 0x0018 (FullSize[0x04C8] - InheritedSize[0x04B0])
class AGameInfo_MapProfiler_X : public AGameInfo_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameInfo_MapProfiler_X");
		return ptr;
	}


	void GenericPlayerInitialization(class AController* C);
	class APlayerController* SpawnPlayerController(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
};

// Class ProjectX.__WebImageCache_X__StartSync_652B8F2E4D116023F9DF3C8A3E07E5C7
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__WebImageCache_X__StartSync_652B8F2E4D116023F9DF3C8A3E07E5C7 : public UObject
{
public:
	class UWebImageDownload_X*                         Download;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__WebImageCache_X__StartSync_652B8F2E4D116023F9DF3C8A3E07E5C7");
		return ptr;
	}


	void __WebImageCache_X__StartSync_652B8F2E4D116023F9DF3C8A3E07E5C7(class UCachedWebData_X* Data);
};

// Class ProjectX.__WebImageCache_X__HandleImageData_EB4640E04BDA8E5CB709C882D76DEAE3
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__WebImageCache_X__HandleImageData_EB4640E04BDA8E5CB709C882D76DEAE3 : public UObject
{
public:
	class UWebImageDownload_X*                         Download;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__WebImageCache_X__HandleImageData_EB4640E04BDA8E5CB709C882D76DEAE3");
		return ptr;
	}


	void __WebImageCache_X__HandleImageData_EB4640E04BDA8E5CB709C882D76DEAE3(const struct FString& _, const struct FImageLayout& Image);
};

// Class ProjectX.PresetMutators_X
// 0x0034 (FullSize[0x0094] - InheritedSize[0x0060])
class UPresetMutators_X : public UObject
{
public:
	TArray<struct FCategorySettingPair>                PresetTags;                                                // 0x0060(0x0010) (NeedCtorLink)
	TArray<struct FName>                               RequiresMaps;                                              // 0x0070(0x0010) (NeedCtorLink)
	unsigned char                                      bLockSettings : 1;                                         // 0x0080(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataL390[0x2];                                      // 0x0080(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bHideSettings : 1;                                         // 0x0080(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataZAU5[0x2];                                      // 0x0084(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataDOUD[0x4];                                      // 0x0084(0x0004) MISSED OFFSET
	struct FString                                     OverrideName;                                              // 0x0088(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PresetMutators_X");
		return ptr;
	}


};

// Class ProjectX.PartySequence_InvitedToPsyNetParty_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPartySequence_InvitedToPsyNetParty_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartySequence_InvitedToPsyNetParty_X");
		return ptr;
	}


	void JoinPsyNetPartyCallback(int LocalPlayerNum, struct FUniqueLobbyId* InLobbyId);
	class UAsyncTask* HandlePlayerInvited(struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* InviterId, bool bAccepted);
	void HandlePlayerInvitedPrompt(struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* InviterId, bool bAccepted);
	void HandlePlayerInvitedSilent(struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* InviterId);
	void Init();
};

// Class ProjectX.AnimateParametersComponent_X
// 0x0045 (FullSize[0x00DA] - InheritedSize[0x0095])
class UAnimateParametersComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownData6DPX[0x3];                                      // 0x009D(0x0003) MISSED OFFSET
	TArray<struct FAnimatedFloatParam>                 FloatParameters;                                           // 0x00A0(0x0010) (Edit, NeedCtorLink)
	TArray<struct FAnimatedVectorParam>                VectorParameters;                                          // 0x00B0(0x0010) (Edit, NeedCtorLink)
	TArray<struct FAnimatedLinearColorParam>           ColorParameters;                                           // 0x00C0(0x0010) (Edit, NeedCtorLink)
	unsigned char                                      bResetMaterialsOnComplete : 1;                             // 0x00D0(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataWD7K[0x2];                                      // 0x00D0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              AnimTime;                                                  // 0x00D4(0x0004) (Transient)
	float                                              EndTime;                                                   // 0x00D8(0x0004) (Const, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimateParametersComponent_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetWordFilter_X
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UPsyNetWordFilter_X : public UComponent
{
public:
	class UWordFilterConfig_X*                         Config;                                                    // 0x0070(0x0008) (Edit)
	class URPC_FilterContent_X*                        PendingFilterRPC;                                          // 0x0078(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetWordFilter_X");
		return ptr;
	}


	void __PsyNetWordFilter_X__WordFilterSanitizeString_F0EA7B634EF63CFFEDB03BB112813928(class URPC_FilterContent_X* RPC);
	void HandlePsyNetWordFilterFail(class URPC_FilterContent_X* RPC, struct FWordFilterResult* StructInitializer_11A596F746D4AD4B274621A7C8F4CF90);
	void HandlePsyNetWordFilterSuccess(class URPC_FilterContent_X* RPC, struct FWordFilterResult* StructInitializer_52F3E08846B3816B43A7D096BEBF495D);
	void HandlePsyNetWordFilter(class URPC_FilterContent_X* RPC);
	void SendPendingFilterRPC();
	bool WordFilterSanitizeString(const struct FString& Comment, const struct FScriptDelegate& SanitizeDelegate, const struct FUniqueNetId& PlayerID);
};

// Class ProjectX.ArchetypePrefab_X
// 0x00EC (FullSize[0x0288] - InheritedSize[0x019C])
class AArchetypePrefab_X : public AActor
{
public:
	TArray<class AActor*>                              PrefabArchetypes;                                          // 0x0268(0x0010) (Edit, NeedCtorLink)
	TArray<class AActor*>                              ArchetypeInstances;                                        // 0x0278(0x0010) (Const, Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ArchetypePrefab_X");
		return ptr;
	}


};

// Class ProjectX.PartySequence_InvitedToPlatformParty_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPartySequence_InvitedToPlatformParty_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartySequence_InvitedToPlatformParty_X");
		return ptr;
	}


	void HandleJoinPlatformLobby(bool bWasSuccessful, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID, const struct FString& Error);
	void JoinPlatformPartyCallback(int LocalPlayerNum, struct FUniqueLobbyId* InLobbyId);
	void HandlePlayerInvited(struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* FriendId, bool bAccepted);
	void Init();
};

// Class ProjectX.PlaylistSettings_X
// 0x0058 (FullSize[0x00B8] - InheritedSize[0x0060])
class UPlaylistSettings_X : public UObject
{
public:
	struct FString                                     Title;                                                     // 0x0060(0x0010) (Edit, NeedCtorLink)
	struct FString                                     Description;                                               // 0x0070(0x0010) (Edit, NeedCtorLink)
	int                                                PlaylistId;                                                // 0x0080(0x0004) (Edit)
	int                                                PlayerCount;                                               // 0x0084(0x0004) (Edit)
	unsigned char                                      bStandard : 1;                                             // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData531O[0x2];                                      // 0x0088(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bRanked : 1;                                               // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData3RPE[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bSolo : 1;                                                 // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataNACQ[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bHidden : 1;                                               // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData7ETV[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bNew : 1;                                                  // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData841W[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bApplyQuitPenalty : 1;                                     // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataXACF[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowForfeit : 1;                                         // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData0UCS[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bDisableRankedReconnect : 1;                               // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataWXY9[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIgnoreAssignTeams : 1;                                    // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataMYRI[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bKickOnMigrate : 1;                                        // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData0HBB[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIsMicroEventPlaylist : 1;                                 // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataAOX0[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bHasVariablePlayerCount : 1;                               // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataLCU3[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowBotFills : 1;                                        // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataQQIJ[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowClubs : 1;                                           // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataMTCD[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bPlayersVSBots : 1;                                        // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataIFE1[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowStayAsParty : 1;                                     // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData4O1P[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataVW70[0x4];                                      // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     PlaylistImageURL;                                          // 0x0090(0x0010) (Edit, NeedCtorLink)
	class UTimeWindow*                                 PlaylistTimeWindow;                                        // 0x00A0(0x0008) (Edit)
	TArray<class UPresetMutators_X*>                   PresetMutators;                                            // 0x00A8(0x0010) (Edit, NeedCtorLink)
	struct FName                                       MapName;                                                   // 0x00B8(0x0008) (Edit)
	struct FString                                     ServerCommand;                                             // 0x00C0(0x0010) (Edit, NeedCtorLink)
	struct FName                                       MapSetName;                                                // 0x00D0(0x0008) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlaylistSettings_X");
		return ptr;
	}


};

// Class ProjectX.OnlineGameWordFilterProcessor_X
// 0x0024 (FullSize[0x009C] - InheritedSize[0x0078])
class UOnlineGameWordFilterProcessor_X : public UOnline_X
{
public:
	float                                              ResponseDelay;                                             // 0x0078(0x0004) (Const)
	unsigned char                                      UnknownData82YT[0x4];                                      // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FWordFilterRequest>                  SanitizeCallbacks;                                         // 0x0080(0x0010) (Transient, NeedCtorLink)
	struct FScriptDelegate                             __OnSanitizeStringComplete__Delegate;                      // 0x0090(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataGXHW[0xC];                                      // 0x0090(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameWordFilterProcessor_X");
		return ptr;
	}


	void TriggerCallbacks(int Index);
	void ProcessSanitizedDelayed();
	void HandleWordSanitized(class UWebRequest_X* Request);
	bool SanitizeString(const struct FString& Comment, const struct FScriptDelegate& SanitizeDelegate);
	void OnSanitizeStringComplete(const struct FString& Original, const struct FString& Sanitized);
};

// Class ProjectX.RPC_UpdateGameServer_X
// 0x009E (FullSize[0x0172] - InheritedSize[0x00D4])
class URPC_UpdateGameServer_X : public URPC_X
{
public:
	unsigned char                                      UnknownDataM17D[0x8];                                      // 0x0100(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_UpdateGameServer_X.serverId
	int                                                Playlist;                                                  // 0x0108(0x0004) (PrivateWrite)
	int                                                MaxPlayers;                                                // 0x010C(0x0004) (PrivateWrite)
	int                                                NumPlayersTeam1;                                           // 0x0110(0x0004) (PrivateWrite)
	int                                                NumPlayersTeam2;                                           // 0x0114(0x0004) (PrivateWrite)
	int                                                ReservationsTeam1;                                         // 0x0118(0x0004) (PrivateWrite)
	int                                                ReservationsTeam2;                                         // 0x011C(0x0004) (PrivateWrite)
	unsigned char                                      bIsPostGame : 1;                                           // 0x0120(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownDataERH9[0x2];                                      // 0x0120(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                TimeRemaining;                                             // 0x0124(0x0004) (PrivateWrite)
	struct FString                                     ExclusivePlatform;                                         // 0x0128(0x0010) (NeedCtorLink, PrivateWrite)
	TArray<struct FString>                             PlayersPlatforms;                                          // 0x0138(0x0010) (NeedCtorLink, PrivateWrite)
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                 // 0x0148(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     CustomServerName;                                          // 0x0158(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     CustomServerPassword;                                      // 0x0168(0x0010) (NeedCtorLink, PrivateWrite)
	int                                                ClubID;                                                    // 0x0178(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateGameServer_X");
		return ptr;
	}


	class URPC_UpdateGameServer_X* SetClubID();
	class URPC_UpdateGameServer_X* SetCustomServerPassword(const struct FString& InCustomServerPassword);
	class URPC_UpdateGameServer_X* SetCustomServerName(const struct FString& InCustomServerName);
	class URPC_UpdateGameServer_X* SetPlayersPlatforms(TArray<struct FString> InPlayersPlatforms);
	class URPC_UpdateGameServer_X* SetExclusivePlatform(const struct FString& InExclusivePlatform);
	class URPC_UpdateGameServer_X* SetTimeRemaining(int InTimeRemaining);
	class URPC_UpdateGameServer_X* SetIsPostGame(bool bInIsPostGame);
	class URPC_UpdateGameServer_X* SetPlayerIDs(TArray<struct FUniqueNetId> InPlayerIDs);
	class URPC_UpdateGameServer_X* SetReservationsTeam2(int InReservationsTeam2);
	class URPC_UpdateGameServer_X* SetReservationsTeam1(int InReservationsTeam1);
	class URPC_UpdateGameServer_X* SetNumPlayersTeam2(int InNumPlayersTeam2);
	class URPC_UpdateGameServer_X* SetNumPlayersTeam1(int InNumPlayersTeam1);
	class URPC_UpdateGameServer_X* SetMaxPlayers(int InMaxPlayers);
	class URPC_UpdateGameServer_X* SetPlaylist(int InPlaylist);
	class URPC_UpdateGameServer_X* SetServerID();
};

// Class ProjectX.PartySequence_PsyNetPartyUpgrade_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPartySequence_PsyNetPartyUpgrade_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartySequence_PsyNetPartyUpgrade_X");
		return ptr;
	}


	void HandleJoinPsyNetLobby(bool bWasSuccessful, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID, const struct FString& Error, struct FActiveLobbyInfo* StructInitializer_3FCDC93E47DBA112F562B685F64BB1FB, struct FUniqueLobbyId* StructInitializer_724F2E654BD2ECC5771AC490E3926E9C);
	void TryUpgrade(struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* PlatformLobbyUID);
};

// Class ProjectX.PsyNetMessengerWebSocket_X
// 0x0088 (FullSize[0x00F4] - InheritedSize[0x006C])
class UPsyNetMessengerWebSocket_X : public UPsyNetMessenger_X
{
public:
	float                                              MessageSendTimeout;                                        // 0x0078(0x0004) (Edit)
	unsigned char                                      UnknownData3K29[0x4];                                      // 0x007C(0x0004) MISSED OFFSET
	class UStringMap*                                  HandshakeHeaders;                                          // 0x0080(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	struct FString                                     URL;                                                       // 0x0088(0x0010) (NeedCtorLink, PrivateWrite)
	class UWebSocketConnection_X*                      Connection;                                                // 0x0098(0x0008) (PrivateWrite)
	TArray<struct FQueuedPsyNetMessage>                QueuedMessages;                                            // 0x00A0(0x0010) (NeedCtorLink)
	class UPsyNetConfig_X*                             PsyNetConfig;                                              // 0x00B0(0x0008)
	struct FScriptDelegate                             __EventStartConnect__Delegate;                             // 0x00B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5DXC[0xC];                                      // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventStartConnectFail__Delegate;                         // 0x00D0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataUU26[0xC];                                      // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventConnected__Delegate;                                // 0x00E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataB90Y[0xC];                                      // 0x00E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                             // 0x0100(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataCE02[0xC];                                      // 0x0100(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventInvalidMessageReceived__Delegate;                   // 0x0118(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataOKOB[0xC];                                      // 0x0118(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetMessengerWebSocket_X");
		return ptr;
	}


	void __PsyNetMessengerWebSocket_X__SendQueuedMessages_62C995A24D1F885EB211F6ABEAEA29D0(const struct FQueuedPsyNetMessage& QueuedMessage);
	void Dispose();
	void HandleReceivedBunch(class UTcpConnection* C);
	void SerializeMessage(class UPsyNetMessage_X* Message);
	void FailQueuedMessages(class UError* Error);
	void TimeoutQueuedMessages();
	void SendMessageWithTask(class UPsyNetMessage_X* Message, class UAsyncTask* Task);
	void SendQueuedMessages();
	void QueueMessage(class UPsyNetMessage_X* Message, class UAsyncTask* Task);
	void StripHandshakeHeaders(class UPsyNetMessage_X* Message);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
	void HandleDisconnected(class UWebSocketConnection_X* InConnection);
	void HandleConnected(class UWebSocketConnection_X* InConnection);
	void Disconnect();
	void Connect();
	bool IsConnected();
	void Init(const struct FString& InURL, class UStringMap* InHandshakeHeaders);
	void EventInvalidMessageReceived(class UPsyNetMessengerWebSocket_X* Messenger, const struct FString& MessageSubstring);
	void EventDisconnected(class UPsyNetMessengerWebSocket_X* Messenger, int Code, const struct FString& Reason);
	void EventConnected(class UPsyNetMessengerWebSocket_X* Messenger);
	void EventStartConnectFail(class UPsyNetMessengerWebSocket_X* Messenger);
	void EventStartConnect(class UPsyNetMessengerWebSocket_X* Messenger);
};

// Class ProjectX.FakeData_X
// 0x0320 (FullSize[0x0380] - InheritedSize[0x0060])
class UFakeData_X : public UObject
{
public:
	int                                                RandomSeed;                                                // 0x0060(0x0004) (PrivateWrite)
	unsigned char                                      UnknownData664U[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	struct FFakeData1                                  Data1;                                                     // 0x0068(0x0038) (NeedCtorLink)
	struct FFakeData2                                  Data2;                                                     // 0x00A0(0x0090) (NeedCtorLink)
	struct FFakeData3                                  Data3;                                                     // 0x0130(0x0130) (NeedCtorLink)
	struct FFakeData4                                  Data4;                                                     // 0x0260(0x0120) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.FakeData_X");
		return ptr;
	}


	int RandomizeValues(class UObject* Target, int InRandomSeed);
	class UFakeData_X* RandomizeFakeData(class UFakeData_X* FakeData, int InRandomSeed);
	class UFakeData_X* GenerateFakeData(int InRandomSeed);
};

// Class ProjectX.BanMessage_X
// 0x008A (FullSize[0x00EA] - InheritedSize[0x0060])
class UBanMessage_X : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0038) (DataBinding)
	TEnumAsByte<EBanType>                              BanType;                                                   // 0x0098(0x0001) (DataBinding)
	unsigned char                                      UnknownData22IF[0x7];                                      // 0x0099(0x0007) MISSED OFFSET
	struct FString                                     Title;                                                     // 0x00A0(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Body;                                                      // 0x00B0(0x0010) (NeedCtorLink, DataBinding)
	int                                                BannedMinutes;                                             // 0x00C0(0x0004) (DataBinding)
	unsigned char                                      bContributedToBan : 1;                                     // 0x00C4(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataROYB[0x2];                                      // 0x00C4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FString>                             Citations;                                                 // 0x00C8(0x0010) (NeedCtorLink)
	float                                              BannedUntilTime;                                           // 0x00D8(0x0004) (DataBinding)
	unsigned char                                      UnknownDataKJPE[0x4];                                      // 0x00DC(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventBanEnded__Delegate;                                 // 0x00E0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData0M00[0xC];                                      // 0x00DC(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BanMessage_X");
		return ptr;
	}


	void __BanMessage_X__Init_65B7A7CD45B8B31F20BA1A84CE4C75A7();
	bool IsPermanentlyBanned();
	bool IsBanned();
	int GetMinutesRemaining();
	float GetSecondsRemaining();
	void Init();
	void EventBanEnded(class UBanMessage_X* BanMessage);
};

// Class ProjectX.ArchetypeSpawnPoint_X
// 0x012A (FullSize[0x02C6] - InheritedSize[0x019C])
class AArchetypeSpawnPoint_X : public AActor
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;                      // 0x0268(0x0008) (Const, Native, NoExport)
	struct FString                                     ArchetypePath;                                             // 0x0270(0x0010) (Edit, Const, NeedCtorLink)
	unsigned char                                      bSeedNavMesh : 1;                                          // 0x0280(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataUFM8[0x2];                                      // 0x0280(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bSpawnOnLevelStart : 1;                                    // 0x0280(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData7OYY[0x2];                                      // 0x0284(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bOnlyAllowOneInstance : 1;                                 // 0x0280(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataKP5W[0x2];                                      // 0x0284(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataIWTZ[0x4];                                      // 0x0284(0x0004) MISSED OFFSET
	class AActor*                                      ActorArchetype;                                            // 0x0288(0x0008) (Edit)
	class USpriteComponent*                            PlacementSprite;                                           // 0x0290(0x0008) (ExportObject, Component, EditInline)
	class USkeletalMeshComponent*                      ArchetypeSkeletalMesh;                                     // 0x0298(0x0008) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        ArchetypeStaticMesh;                                       // 0x02A0(0x0008) (ExportObject, Component, EditInline)
	TArray<class AActor*>                              SpawnedActors;                                             // 0x02A8(0x0010) (Transient, NeedCtorLink)
	class AActor*                                      SpawnedActor;                                              // 0x02B8(0x0008) (Transient)
	struct FScriptDelegate                             __EventSpawned__Delegate;                                  // 0x02C0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataPVR1[0xC];                                      // 0x02C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ArchetypeSpawnPoint_X");
		return ptr;
	}


	void OnSpawned(class AActor* Spawned);
	class AActor* DoSpawn();
	void OnToggle(class USeqAct_Toggle* Action);
	void OnDestroy(class USeqAct_Destroy* Action);
	void PostBeginPlay();
	void EventSpawned(class AArchetypeSpawnPoint_X* SpawnPoint, class AActor* Spawned);
};

// Class ProjectX.RPC_CreateGameServer_X
// 0x00B2 (FullSize[0x0186] - InheritedSize[0x00D4])
class URPC_CreateGameServer_X : public URPC_X
{
public:
	struct FString                                     ServerName;                                                // 0x0100(0x0010) (NeedCtorLink, PrivateWrite)
	int                                                MachineId;                                                 // 0x0110(0x0004) (PrivateWrite)
	unsigned char                                      UnknownDataF2KN[0x4];                                      // 0x0114(0x0004) MISSED OFFSET
	struct FString                                     IP;                                                        // 0x0118(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     Region;                                                    // 0x0128(0x0010) (NeedCtorLink, PrivateWrite)
	int                                                BuildID;                                                   // 0x0138(0x0004) (PrivateWrite)
	unsigned char                                      UnknownDataKMYY[0x4];                                      // 0x013C(0x0004) MISSED OFFSET
	struct FString                                     ServerType;                                                // 0x0140(0x0010) (NeedCtorLink, PrivateWrite)
	unsigned char                                      UnknownDataMRJY[0x8];                                      // 0x0150(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_CreateGameServer_X.serverId
	struct FString                                     Host;                                                      // 0x0158(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	int                                                Zone;                                                      // 0x0168(0x0004) (Transient, PrivateWrite)
	unsigned char                                      UseWebSocket : 1;                                          // 0x016C(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataL1SU[0x2];                                      // 0x016C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     PerConURL;                                                 // 0x0170(0x0010) (Transient, NeedCtorLink)
	struct FString                                     PsyToken;                                                  // 0x0180(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CreateGameServer_X");
		return ptr;
	}


	class URPC_CreateGameServer_X* SetBuildID(int InBuildID);
	class URPC_CreateGameServer_X* SetRegion(const struct FString& InRegion);
	class URPC_CreateGameServer_X* SetIP(const struct FString& InIP);
	class URPC_CreateGameServer_X* SetMachineID(int InMachineID);
	class URPC_CreateGameServer_X* SetServerType(const struct FString& InServerType);
	class URPC_CreateGameServer_X* SetServerName(const struct FString& InServerName);
};

// Class ProjectX.Aws4Signature_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UAws4Signature_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Aws4Signature_X");
		return ptr;
	}


	void SignRequest(class UHttpRequestInterface* HTTPRequest);
};

// Class ProjectX.StatusObserver_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UStatusObserver_X : public UObject
{
public:
	TArray<class UTriggerInfo*>                        TriggerTypes;                                              // 0x0060(0x0010) (NeedCtorLink)
	TArray<class UClass*>                              AcceptedTypes;                                             // 0x0070(0x0010) (Const, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.StatusObserver_X");
		return ptr;
	}


	class UTriggerInfo* __StatusObserver_X__Init_75BD54E94AA3F46215A0F6BA91F57F9E(class UClass* T);
	void DebugPrint();
	bool ObservesTriggerType(class UStatusTrigger_X* InTrigger);
	void UpdateTriggers(class UClass* InType);
	void UnRegisterTriggers(TArray<class UStatusTrigger_X*>* InTriggers, TArray<class UStatusTrigger_X*>* FilterLocal_294D78A14762FD08B133B89EE3E40AA1);
	void RegisterTriggers(TArray<class UStatusTrigger_X*>* InTriggers, TArray<class UStatusTrigger_X*>* FilterLocal_63CB33F549D36EEB8CB705A7109F1B8B);
	void AddCallback(class UClass* InType, const struct FScriptDelegate& InCallback);
	class UTriggerInfo* FindByAcceptedType(class UClass* InType);
	void Init(class ULocalPlayer_X* LP, TArray<class UClass*>* DistinctLocal_2C76F2214EFE3C9EE96175BC8A5E030C, TArray<class UTriggerInfo*>* MapLocal_4D5A50C74A66E6CE70FDB6BE7E653414);
};

// Class ProjectX.LocalCacheTests_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class ULocalCacheTests_X : public UObject
{
public:
	struct FString                                     CacheFilePath;                                             // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LocalCacheTests_X");
		return ptr;
	}


	void HandleLocalCacheImported(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
	void ImportTest();
	void HandleLocalCacheExported(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
	void ToCacheAndBack(int RandomSeed);
};

// Class ProjectX.PsyNetMetrics_X
// 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
class UPsyNetMetrics_X : public UMetricsGroup_X
{
public:
	TArray<struct FServiceMetricsData>                 ServiceData;                                               // 0x0080(0x0010) (NeedCtorLink)
	TArray<struct FServiceErrorData>                   ErrorData;                                                 // 0x0090(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetMetrics_X");
		return ptr;
	}


	void ServiceErrors(TArray<struct FServiceErrorData> Errors);
	void ServiceCalls(TArray<struct FServiceMetricsData> Services);
	void HandleMapChange(const struct FString& M);
	void RecordServiceError(const struct FString& Service, class UError* Error);
	void RecordServiceCall(const struct FString& Service, float Latency);
};

// Class ProjectX.TriggerInfo
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UTriggerInfo : public UObject
{
public:
	class UClass*                                      AcceptedType;                                              // 0x0060(0x0008)
	TArray<class UStatusTrigger_X*>                    Triggers;                                                  // 0x0068(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                  // 0x0078(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataMUVW[0xC];                                      // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __UpdateTrigger__Delegate;                                 // 0x0090(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataUOWP[0xC];                                      // 0x0090(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TriggerInfo");
		return ptr;
	}


	class UTriggerInfo* SetType(class UClass* InType);
	void UpdateTrigger(class UStatusTrigger_X* InTrigger);
};

// Class ProjectX.__PsyNetRequestQue_X__SendRequest_6695481E4C269A62429EF891A491C66A
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__PsyNetRequestQue_X__SendRequest_6695481E4C269A62429EF891A491C66A : public UObject
{
public:
	struct FName                                       RequestID;                                                 // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetRequestQue_X__SendRequest_6695481E4C269A62429EF891A491C66A");
		return ptr;
	}


	void __PsyNetRequestQue_X__SendRequest_6695481E4C269A62429EF891A491C66A();
};

// Class ProjectX.StatusTrigger_X
// 0x0012 (FullSize[0x0072] - InheritedSize[0x0060])
class UStatusTrigger_X : public UObject
{
public:
	unsigned char                                      bTriggered : 1;                                            // 0x0060(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataHUBV[0x2];                                      // 0x0060(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataYH10[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	struct FScriptDelegate                             EventPropertyChange;                                       // 0x0068(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataF2JK[0xC];                                      // 0x0064(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.StatusTrigger_X");
		return ptr;
	}


	void EventPropertyChangeFunc();
	void EvaluateCondition(bool InConditionalValue);
	bool IsTriggered();
	void ToggleTriggered();
	void DebugPrint();
};

// Class ProjectX.SkelControlBlendTargetComponent_X
// 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
class USkelControlBlendTargetComponent_X : public UActorComponent_X
{
public:
	unsigned char                                      UnknownDataAYS7[0x4];                                      // 0x00A4(0x0004) MISSED OFFSET
	struct FName                                       SkelControlName;                                           // 0x00A8(0x0008) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SkelControlBlendTargetComponent_X");
		return ptr;
	}


	void SetControlActiveInComponent(class USkeletalMeshComponent* SKC, bool bActive);
	void SetControlActive(bool bActive);
	void Detached();
	void Attached();
};

// Class ProjectX.PsyNetService_AAS_X
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UPsyNetService_AAS_X : public UPsyNetClientService_X
{
public:
	int                                                AdtTime;                                                   // 0x0090(0x0004)
	int                                                OnlineHours;                                               // 0x0094(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_AAS_X");
		return ptr;
	}


	int GetOnlineHours();
};

// Class ProjectX.RPC_LoginAuthPlayer_X
// 0x0108 (FullSize[0x01DC] - InheritedSize[0x00D4])
class URPC_LoginAuthPlayer_X : public URPC_X
{
public:
	struct FString                                     Platform;                                                  // 0x0100(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     PlayerName;                                                // 0x0110(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     PlayerID;                                                  // 0x0120(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     Language;                                                  // 0x0130(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     AuthTicket;                                                // 0x0140(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     BuildRegion;                                               // 0x0150(0x0010) (NeedCtorLink, PrivateWrite)
	struct FName                                       FeatureSet;                                                // 0x0160(0x0008) (PrivateWrite)
	unsigned char                                      bSkipAuth : 1;                                             // 0x0168(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownDataET3A[0x2];                                      // 0x0168(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UseWebSocket : 1;                                          // 0x0168(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownDataFAZT[0x2];                                      // 0x016C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData05EB[0x4];                                      // 0x016C(0x0004) MISSED OFFSET
	struct FString                                     SessionId;                                                 // 0x0170(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     PsyToken;                                                  // 0x0180(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	class UBanMessage_X*                               BanMessage;                                                // 0x0190(0x0008) (Transient, PrivateWrite)
	struct FString                                     VerifiedPlayerName;                                        // 0x0198(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     PerConURL;                                                 // 0x01A8(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FPsyTag                                     PsyTag;                                                    // 0x01B8(0x0018) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FName>                               CountryRestrictions;                                       // 0x01D0(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_LoginAuthPlayer_X");
		return ptr;
	}


	class URPC_LoginAuthPlayer_X* SetFeatureSet(const struct FName& InFeatureSet);
	class URPC_LoginAuthPlayer_X* SetBuildRegion(const struct FString& InBuildRegion);
	class URPC_LoginAuthPlayer_X* SetAuthTicket(const struct FString& InAuthTicket);
	class URPC_LoginAuthPlayer_X* SetLanguage(const struct FString& InLanguage);
	class URPC_LoginAuthPlayer_X* SetPlayerID();
	class URPC_LoginAuthPlayer_X* SetPlayerName(const struct FString& InPlayerName);
	class URPC_LoginAuthPlayer_X* SetPlatform(const struct FString& InPlatform);
};

// Class ProjectX.PsyNetService_Echo_X
// 0x0028 (FullSize[0x00B0] - InheritedSize[0x0088])
class UPsyNetService_Echo_X : public UPsyNetClientService_X
{
public:
	struct FString                                     RequestString;                                             // 0x0090(0x0010) (NeedCtorLink)
	struct FString                                     ResponseString;                                            // 0x00A0(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_Echo_X");
		return ptr;
	}


	void Execute();
};

// Class ProjectX.__StatusObserver_X__FindByAcceptedType_453F5DA24BEA91E4D5BFC1B30AE4C16C
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__StatusObserver_X__FindByAcceptedType_453F5DA24BEA91E4D5BFC1B30AE4C16C : public UObject
{
public:
	class UClass*                                      InType;                                                    // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__StatusObserver_X__FindByAcceptedType_453F5DA24BEA91E4D5BFC1B30AE4C16C");
		return ptr;
	}


	bool __StatusObserver_X__FindByAcceptedType_453F5DA24BEA91E4D5BFC1B30AE4C16C(class UTriggerInfo* TT);
};

// Class ProjectX.AprilConfig_X
// 0x0008 (FullSize[0x007E] - InheritedSize[0x0076])
class UAprilConfig_X : public UOnlineConfig_X
{
public:
	unsigned char                                      UnknownDataK6IV[0x8];                                      // 0x0078(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.AprilConfig_X.StartTime
	unsigned char                                      UnknownDataS2C6[0x8];                                      // 0x0080(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.AprilConfig_X.EndTime
	unsigned char                                      bChangeRankedIcons : 1;                                    // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataSBPP[0x2];                                      // 0x0088(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bChangePlaylists : 1;                                      // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataB6RQ[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bChangeCrowd : 1;                                          // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataRRG5[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              HatScale;                                                  // 0x008C(0x0004) (Edit)
	float                                              AntennaScale;                                              // 0x0090(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AprilConfig_X");
		return ptr;
	}


	bool IsActive();
};

// Class ProjectX.OnlinePlayerStorage_X
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UOnlinePlayerStorage_X : public UOnline_X
{
public:
	class UOnlinePlayerStorageQueue_X*                 Queue;                                                     // 0x0078(0x0008) (PrivateWrite)
	class UOnlinePlayerStorageSync_X*                  Sync;                                                      // 0x0080(0x0008) (PrivateWrite)
	class UOnlinePlayerStorageManifest_X*              Manifest;                                                  // 0x0088(0x0008) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerStorage_X");
		return ptr;
	}


	void OnInit();
};

// Class ProjectX.PsyNetService_PersonaInfo_X
// 0x0088 (FullSize[0x0110] - InheritedSize[0x0088])
class UPsyNetService_PersonaInfo_X : public UPsyNetClientService_X
{
public:
	struct FOnlinePersonaData                          FromPlayer;                                                // 0x0090(0x0080) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PersonaInfo_X");
		return ptr;
	}


	struct FOnlineFriend GetData();
};

// Class ProjectX.__StatusObserver_X__ObservesTriggerType_2C2DB53B4A048722A7DD9FA0BE83124F
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__StatusObserver_X__ObservesTriggerType_2C2DB53B4A048722A7DD9FA0BE83124F : public UObject
{
public:
	class UStatusTrigger_X*                            InTrigger;                                                 // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__StatusObserver_X__ObservesTriggerType_2C2DB53B4A048722A7DD9FA0BE83124F");
		return ptr;
	}


	bool __StatusObserver_X__ObservesTriggerType_2C2DB53B4A048722A7DD9FA0BE83124F(class UClass* C);
};

// Class ProjectX.OnlineGameDLC_X
// 0x0034 (FullSize[0x00AC] - InheritedSize[0x0078])
class UOnlineGameDLC_X : public UOnline_X
{
public:
	int                                                SyncInterval;                                              // 0x0078(0x0004) (Edit)
	float                                              PlayerOwnershipSyncInterval;                               // 0x007C(0x0004)
	TArray<struct FPlayerDLCInfo>                      PlayerDLCInfos;                                            // 0x0080(0x0010) (NeedCtorLink)
	TArray<struct FSteamWebRequestData>                SteamWebRequests;                                          // 0x0090(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventValidationReady__Delegate;                          // 0x00A0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataVJ41[0xC];                                      // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameDLC_X");
		return ptr;
	}


	bool DoesPlayerOwnDLC(struct FUniqueNetId* PlayerID, struct FName* DLCName);
	void HandleGetPublisherAppOwnership(class UWebRequest_X* Request);
	void OnMatchFinished();
	void SyncPlayerDLC(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	void UpdatePlayerDLCInfo(int PlayerInfoIndex);
	int CreatePlayerDLCInfo(struct FUniqueNetId* PlayerID);
	bool IsPlayerReadyForValidation(struct FUniqueNetId* PlayerID);
	void EventValidationReady();
};

// Class ProjectX.__RegionConfig_X__GetSubRegions_183752FA4ED885B20D8EF5B97B876D89
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__RegionConfig_X__GetSubRegions_183752FA4ED885B20D8EF5B97B876D89 : public UObject
{
public:
	struct FString                                     SuperRegionID;                                             // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__RegionConfig_X__GetSubRegions_183752FA4ED885B20D8EF5B97B876D89");
		return ptr;
	}


	bool __RegionConfig_X__GetSubRegions_183752FA4ED885B20D8EF5B97B876D89(class URegion_X* R);
};

// Class ProjectX.GFxDataStore_X
// 0x0072 (FullSize[0x00E2] - InheritedSize[0x0070])
class UGFxDataStore_X : public UComponent
{
public:
	TArray<struct FGFxDataStoreTable>                  Tables;                                                    // 0x0070(0x0010) (Const, Transient, NeedCtorLink)
	TArray<struct FGFxDirtyTable>                      DirtyTables;                                               // 0x0080(0x0010) (Const, Transient, NeedCtorLink)
	struct FMap_Mirror                                 ObjectNameToTable;                                         // 0x0090(0x0050) (Const, Native, Transient)
	unsigned char                                      bDebugGetValue : 1;                                        // 0x00E0(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataKERQ[0x2];                                      // 0x00E0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxDataStore_X");
		return ptr;
	}


	void ExportFakeData(const struct FName& InTableName);
	void PrintData(const struct FName& InTableName);
	int GetObjectRow(class UGFxDataRow_X* O);
	void AllObjects(class UClass* ObjClass, class UGFxDataRow_X** OutObject, int* Row);
	class UGFxDataRow_X* GetObjectByPrimaryKey(class UClass* ObjClass, const struct FString& Value);
	class UGFxDataRow_X* GetObject(class UClass* ObjClass, int Row);
	void RemoveObject(class UGFxDataRow_X* O);
	void BindObject(class UGFxDataRow_X* Object, int Row);
	class UGFxDataRow_X* CreateObject(class UClass* ObjClass, int Row, int* PlacedRow);
	void RemoveAllObjects(class UClass* ObjClass);
	void SetObjectCount(class UClass* ObjClass, int Count);
	int GetObjectCount(class UClass* ObjClass);
	void EmptyTables();
	void EmptyTable(const struct FName& Table);
	void RemoveRow(const struct FName& Table, int Row);
	void SetRowCount(const struct FName& Table, int Count);
	int GetRowCount(const struct FName& Table);
	struct FASValue GetValue(const struct FName& Table, int Row, const struct FName& Column);
	int GetObjectIndex(class UGFxDataRow_X* TargetObject);
	void SetASValue(const struct FName& Table, int Row, const struct FName& Column, struct FASValue* Value);
	void SetTextureValue(const struct FName& Table, int Row, const struct FName& Column, class UTexture* Value);
	void SetStringValue(const struct FName& Table, int Row, const struct FName& Column, const struct FString& Value);
	void SetQWordValue(const struct FName& Table, int Row, const struct FName& Column);
	void SetFloatValue(const struct FName& Table, int Row, const struct FName& Column, float Value);
	void SetIntValue(const struct FName& Table, int Row, const struct FName& Column, int Value);
	void SetBoolValue(const struct FName& Table, int Row, const struct FName& Column, bool Value);
	void SetDirty(const struct FName& InTableName, int RowNum, const struct FName& Value);
};

// Class ProjectX.PsyTagComponent_X
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UPsyTagComponent_X : public UComponent
{
public:
	struct FPsyTag                                     PsyTag;                                                    // 0x0070(0x0018) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyTagComponent_X");
		return ptr;
	}


	void HandleClaimTagSuccess(class UPsyTagCheckResult_X* Result);
	class UTAsyncResult__PsyTagCheckResult_X* ClaimTag(const struct FString& NewTagName);
	void SetPsyTag(const struct FPsyTag& InPsyTag);
};

// Class ProjectX.RPC_ClearClubInvites_X
// 0x002C (FullSize[0x0100] - InheritedSize[0x00D4])
class URPC_ClearClubInvites_X : public URPC_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ClearClubInvites_X");
		return ptr;
	}


};

// Class ProjectX.PsyTagCheckResult_X
// 0x002E (FullSize[0x008E] - InheritedSize[0x0060])
class UPsyTagCheckResult_X : public UObject
{
public:
	struct FPsyTag                                     PsyTag;                                                    // 0x0060(0x0018) (NeedCtorLink)
	unsigned char                                      bValid : 1;                                                // 0x0078(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataCQCT[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData4YJW[0x4];                                      // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     ErrorMessage;                                              // 0x0080(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyTagCheckResult_X");
		return ptr;
	}


	void SetPsyTag(const struct FPsyTag& InPsyTag);
};

// Class ProjectX.RPC_ClearFriendInvites_X
// 0x002C (FullSize[0x0100] - InheritedSize[0x00D4])
class URPC_ClearFriendInvites_X : public URPC_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ClearFriendInvites_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetService_FriendStatusUpdate_X
// 0x0060 (FullSize[0x00E8] - InheritedSize[0x0088])
class UPsyNetService_FriendStatusUpdate_X : public UPsyNetClientService_X
{
public:
	struct FPsyNetOnlineStatus                         FromPlayer;                                                // 0x0090(0x0058) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_FriendStatusUpdate_X");
		return ptr;
	}


	struct FOnlineStatus GetData();
};

// Class ProjectX.RPC_FileStorage_GetFileDownloadUrl_X
// 0x004C (FullSize[0x0120] - InheritedSize[0x00D4])
class URPC_FileStorage_GetFileDownloadUrl_X : public URPC_X
{
public:
	struct FString                                     Path;                                                      // 0x0100(0x0010) (NeedCtorLink)
	struct FString                                     URL;                                                       // 0x0110(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_FileStorage_GetFileDownloadUrl_X");
		return ptr;
	}


};

// Class ProjectX.RPC_FileStorage_GetFileUploadUrl_X
// 0x005C (FullSize[0x0130] - InheritedSize[0x00D4])
class URPC_FileStorage_GetFileUploadUrl_X : public URPC_X
{
public:
	struct FString                                     Path;                                                      // 0x0100(0x0010) (NeedCtorLink)
	struct FString                                     ContentType;                                               // 0x0110(0x0010) (NeedCtorLink)
	struct FString                                     URL;                                                       // 0x0120(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_FileStorage_GetFileUploadUrl_X");
		return ptr;
	}


};

// Class ProjectX.__PsyNetServiceProvider_X__CreateChannel_E7F0270148249B78C0C2B38BAD53A80A
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__PsyNetServiceProvider_X__CreateChannel_E7F0270148249B78C0C2B38BAD53A80A : public UObject
{
public:
	struct FString                                     ChannelName;                                               // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetServiceProvider_X__CreateChannel_E7F0270148249B78C0C2B38BAD53A80A");
		return ptr;
	}


	bool __PsyNetServiceProvider_X__CreateChannel_E7F0270148249B78C0C2B38BAD53A80A(class UPsyNetChannel_X* C);
};

// Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__NotifyOnResult_3AD269EB4EC32A234768CAB60B5906DF
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__PsyTagCheckResult_X__NotifyOnResult_3AD269EB4EC32A234768CAB60B5906DF : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataJ59V[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__NotifyOnResult_3AD269EB4EC32A234768CAB60B5906DF");
		return ptr;
	}


	void __TAsyncResult__PsyTagCheckResult_X__NotifyOnResult_3AD269EB4EC32A234768CAB60B5906DF();
};

// Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__NotifyOnResultComplete_F9BA5AE44ECA8D791F7EB694E9116882
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__PsyTagCheckResult_X__NotifyOnResultComplete_F9BA5AE44ECA8D791F7EB694E9116882 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataV1S3[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__NotifyOnResultComplete_F9BA5AE44ECA8D791F7EB694E9116882");
		return ptr;
	}


	void __TAsyncResult__PsyTagCheckResult_X__NotifyOnResultComplete_F9BA5AE44ECA8D791F7EB694E9116882(class UError* Err);
};

// Class ProjectX.ReservationBeacon_X
// 0x0044 (FullSize[0x00B4] - InheritedSize[0x0070])
class UReservationBeacon_X : public UComponent
{
public:
	TArray<struct FBeaconMessageHandler>               MessageHandlers;                                           // 0x0070(0x0010) (Const, NeedCtorLink)
	class UTcpMessageBeacon*                           TcpBeacon;                                                 // 0x0080(0x0008) (ExportObject, Component, EditInline)
	class UPsyNetBeacon_X*                             PsyNetBeacon;                                              // 0x0088(0x0008) (ExportObject, Component, EditInline)
	struct FScriptDelegate                             __MessageReceivedDelegate__Delegate;                       // 0x0090(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataS97N[0xC];                                      // 0x0090(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventConnected__Delegate;                                // 0x00A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataW5KH[0xC];                                      // 0x00A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                             // 0x00C0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataPHWW[0xC];                                      // 0x00C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationBeacon_X");
		return ptr;
	}


	void __ReservationBeacon_X__Construct_75C9F51D4572115C73000DBAB3A507DB();
	void __ReservationBeacon_X__Construct_EEDFBDBC4DBCD532D5FE3AAF983874A1(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	void __ReservationBeacon_X__Construct_68DA6D0A45453AF25FBAA686F5A48968(class UPsyNetBeacon_X* _, class UPsyNetBeaconConnection_X* Connection);
	void __ReservationBeacon_X__Construct_20189EA2468F1B4D1404F08901962798(class UPsyNetBeacon_X* _, class UPsyNetBeaconConnection_X* Connection);
	void __ReservationBeacon_X__Construct_DFCCB62543E9695679FF0D9F5B14CBB9(class UTcpConnection* Connection, class UObject* Message);
	void __ReservationBeacon_X__Construct_1DDC728E4A1FA030B0D35683B5AFED7B(class UTcpBeacon* _, class UTcpConnection* Connection);
	void __ReservationBeacon_X__Construct_9F5DE8554BBF1E9B5763D39797133CF0(class UTcpBeacon* _, class UTcpConnection* Connection);
	TScriptInterface<class UIReservationConnection_X> BeginPsyNetConnect(const struct FString& ReservationID, const struct FString& DSRToken);
	TScriptInterface<class UIReservationConnection_X> BeginTcpConnect(const struct FString& BeaconURL);
	TScriptInterface<class UIReservationConnection_X> BeginConnect(const struct FServerReservationData& Reservation);
	void Close();
	void CloseConnection(const TScriptInterface<class UIReservationConnection_X>& Connection);
	void BroadcastMessage(class UObject* Message);
	void SendMessage(const TScriptInterface<class UIReservationConnection_X>& Connection, class UObject* Message);
	class UBeaconMessage_X* CreateMessage(class UClass* MessageClass);
	void ReceiveMessage(const TScriptInterface<class UIReservationConnection_X>& Connection, class UObject* Message);
	void RemoveMessageHandler(const struct FScriptDelegate& Callback);
	void AddMessageHandler(class UClass* MessageClass, const struct FScriptDelegate& Callback);
	void BeginListen();
	void Construct();
	void EventDisconnected(class UReservationBeacon_X* Beacon, const TScriptInterface<class UIReservationConnection_X>& Connection);
	void EventConnected(class UReservationBeacon_X* Beacon, const TScriptInterface<class UIReservationConnection_X>& Connection);
	void MessageReceivedDelegate(const TScriptInterface<class UIReservationConnection_X>& Connection, class UObject* Message);
};

// Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__SetResultWhen_7257C7B14CC930C21A17CBB975432A26
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__TAsyncResult__PsyTagCheckResult_X__SetResultWhen_7257C7B14CC930C21A17CBB975432A26 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                         // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataLX49[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__SetResultWhen_7257C7B14CC930C21A17CBB975432A26");
		return ptr;
	}


	void __TAsyncResult__PsyTagCheckResult_X__SetResultWhen_7257C7B14CC930C21A17CBB975432A26();
};

// Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__Copy_70798CEA4BE1E293BC69FEA809DE6C6B
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__TAsyncResult__PsyTagCheckResult_X__Copy_70798CEA4BE1E293BC69FEA809DE6C6B : public UObject
{
public:
	class UTAsyncResult__PsyTagCheckResult_X*          Instance;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__Copy_70798CEA4BE1E293BC69FEA809DE6C6B");
		return ptr;
	}


	void __TAsyncResult__PsyTagCheckResult_X__Copy_70798CEA4BE1E293BC69FEA809DE6C6B(class UPsyTagCheckResult_X* R, class UError* E);
};

// Class ProjectX.RPC_CheckPsyTag_X
// 0x007C (FullSize[0x0150] - InheritedSize[0x00D4])
class URPC_CheckPsyTag_X : public URPC_X
{
public:
	struct FString                                     PsyTagName;                                                // 0x0100(0x0010) (NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                                    // 0x0110(0x0018) (Transient, NeedCtorLink)
	unsigned char                                      bIsValid : 1;                                              // 0x0128(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataOFYL[0x2];                                      // 0x0128(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIsProfane : 1;                                            // 0x0128(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataWXVB[0x2];                                      // 0x012C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIsAvailable : 1;                                          // 0x0128(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataSVUA[0x2];                                      // 0x012C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIsUpdated : 1;                                            // 0x0128(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData4GZD[0x2];                                      // 0x012C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataD0P6[0x4];                                      // 0x012C(0x0004) MISSED OFFSET
	TArray<struct FString>                             InvalidCharacters;                                         // 0x0130(0x0010) (Transient, NeedCtorLink)
	TArray<struct FString>                             SuggestedNames;                                            // 0x0140(0x0010) (Transient, NeedCtorLink)
	class UTAsyncResult__PsyTagCheckResult_X*          CheckTask;                                                 // 0x0150(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CheckPsyTag_X");
		return ptr;
	}


	bool __RPC_CheckPsyTag_X__GetTagCheckError_1ECFE5174CCF11D5F9090A9EAC6A1206(const struct FString& S);
	class UErrorType* OverrideErrorType(class UErrorType* ErrorType);
	class URPC_CheckPsyTag_X* SetPsyTagName(const struct FString& InName);
	struct FString GetTagCheckError();
	class UPsyTagCheckResult_X* CreateTaskResult();
	class UTAsyncResult__PsyTagCheckResult_X* CreatePsyTagTask();
};

// Class ProjectX.BeaconMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBeaconMessage_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BeaconMessage_X");
		return ptr;
	}


	class UBeaconMessage_X* Broadcast();
	class UBeaconMessage_X* Send(const TScriptInterface<class UIReservationConnection_X>& Connection);
};

// Class ProjectX.RPC_ClaimPsyTag_X
// 0x0008 (FullSize[0x0158] - InheritedSize[0x0150])
class URPC_ClaimPsyTag_X : public URPC_CheckPsyTag_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ClaimPsyTag_X");
		return ptr;
	}


};

// Class ProjectX.PsyNet_X
// 0x00A6 (FullSize[0x0106] - InheritedSize[0x0060])
class UPsyNet_X : public UObject
{
public:
	TEnumAsByte<EDatabaseEnvironment>                  Environment;                                               // 0x0060(0x0001) (Transient, PrivateWrite)
	unsigned char                                      UnknownDataLPFO[0x7];                                      // 0x0061(0x0007) MISSED OFFSET
	struct FString                                     EnvironmentName;                                           // 0x0068(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FPsyNetKeys                                 Keys;                                                      // 0x0078(0x0030) (Const, Transient, NeedCtorLink)
	class UStringMap*                                  Headers;                                                   // 0x00A8(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UPsyNetServiceSubscriptions_X*               Services;                                                  // 0x00B0(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UPsyNetConnection_X*                         PrimaryEnabledConnection;                                  // 0x00B8(0x0008) (PrivateWrite)
	class UPsyNetConnection_X*                         PrimaryAuthedConnection;                                   // 0x00C0(0x0008) (PrivateWrite)
	class UPsyNetConnection_X*                         AnonymousConnection;                                       // 0x00C8(0x0008) (PrivateWrite)
	float                                              LastReportCheaterTime;                                     // 0x00D0(0x0004)
	unsigned char                                      bUsePsynetEnvironment : 1;                                 // 0x00D4(0x0001) BIT_FIELD (Config)
	unsigned char                                      UnknownData3FEY[0x2];                                      // 0x00D4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPrimaryConnectionEnabled__Delegate;                 // 0x00D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataA7AC[0xC];                                      // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPrimaryConnectionDisabled__Delegate;                // 0x00F0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataW9KY[0xC];                                      // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPrimaryPlayerLoggedIn__Delegate;                    // 0x0108(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataL90V[0xC];                                      // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPrimaryPlayerLoggedOut__Delegate;                   // 0x0120(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData68FF[0xC];                                      // 0x0120(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNet_X");
		return ptr;
	}


	void ReportCheater(const struct FUniqueNetId& Id, const struct FString& Reason);
	struct FString AssignQWordToString();
	void AssignStringToQWord(const struct FString& S);
	float GetRetryDelay(int Failures, TArray<float> Delays);
	void ConnectionChangedIP(const struct FUniqueNetId& PlayerID);
	void NetworkError(const struct FUniqueNetId& PlayerID, const struct FString& Reason);
	void InitHeaders();
	void NotifyWhenLoggedIn(const struct FScriptDelegate& LoginCallback, const struct FScriptDelegate& LogoutCallback);
	void NotifyWhenPrimaryConnectionEnabled(const struct FScriptDelegate& EnabledCallback, const struct FScriptDelegate& DisabledCallback);
	void SetPrimaryAuthedConnection(class UPsyNetConnection_X* Connection);
	void SetPrimaryEnabledConnection(class UPsyNetConnection_X* Connection);
	void HandleConnectionChanged(class UPsyNetConnection_X* Connection);
	class UPsyNetConnection_X* GetPrimaryConnection();
	void HandleServiceExecuted(class UPsyNetServiceProvider_X* P, class UPsyNetClientService_X* Service);
	void Init();
	void Flush(float TimeoutSeconds);
	class URPC_X* QueueRPC(class URPC_X* RPC);
	class URPC_X* RPC(class UClass* RPCClass);
	class UPsyNet_X* GetInstance();
	void EventPrimaryPlayerLoggedOut();
	void EventPrimaryPlayerLoggedIn();
	void EventPrimaryConnectionDisabled();
	void EventPrimaryConnectionEnabled();
};

// Class ProjectX.TAsyncResult__PsyNetClientService_X
// 0x0060 (FullSize[0x00FC] - InheritedSize[0x009C])
class UTAsyncResult__PsyNetClientService_X : public UAsyncTask
{
public:
	class UPsyNetClientService_X*                      Result;                                                    // 0x00D0(0x0008) (PrivateWrite)
	struct FScriptDelegate                             __EventResult__Delegate;                                   // 0x00D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataH0LW[0xC];                                      // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                           // 0x00F0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataW498[0xC];                                      // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                                // 0x0108(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData2VZC[0xC];                                      // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TAsyncResult__PsyNetClientService_X");
		return ptr;
	}


	class UTAsyncResult__PsyNetClientService_X* CreateResultError(class UError* InError);
	class UTAsyncResult__PsyNetClientService_X* CreateResult(class UPsyNetClientService_X* InResult);
	class UTAsyncResult__PsyNetClientService_X* Copy();
	void ClearCallbacks();
	class UTAsyncResult__PsyNetClientService_X* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class UTAsyncResult__PsyNetClientService_X* SetResult(class UPsyNetClientService_X* InResult, class UError* InError);
	class UTAsyncResult__PsyNetClientService_X* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class UTAsyncResult__PsyNetClientService_X* NotifyOnResult(const struct FScriptDelegate& Callback);
	class UPsyNetClientService_X* ResultDelegate();
	void EventResultComplete(class UPsyNetClientService_X* OutResult, class UError* OutError);
	void EventResult(class UPsyNetClientService_X* OutResult);
};

// Class ProjectX.__PsyNetServiceProvider_X__ExecuteRequest_92249523495857D304FA98B3DB7847ED
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__PsyNetServiceProvider_X__ExecuteRequest_92249523495857D304FA98B3DB7847ED : public UObject
{
public:
	class UPsyNetMessage_X*                            Response;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetServiceProvider_X__ExecuteRequest_92249523495857D304FA98B3DB7847ED");
		return ptr;
	}


	void __PsyNetServiceProvider_X__ExecuteRequest_92249523495857D304FA98B3DB7847ED(class UPsyNetClientService_X* Result, class UError* Error);
};

// Class ProjectX.GFxEngine_X
// 0x0052 (FullSize[0x016A] - InheritedSize[0x0118])
class UGFxEngine_X : public UGFxEngine
{
public:
	class UGFxShell_X*                                 ShellArchetype;                                            // 0x0118(0x0008) (PrivateWrite)
	TArray<class UGFxShell_X*>                         Shells;                                                    // 0x0120(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FDirtyObject>                        DirtyObjects;                                              // 0x0130(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	unsigned char                                      bAnyShellHasInput : 1;                                     // 0x0140(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownDataPFGY[0x2];                                      // 0x0140(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<EInputPlatformType>                    AvailableGamepadType;                                      // 0x0144(0x0001) (Const, Transient)
	unsigned char                                      UnknownDataBBDF[0x3];                                      // 0x0145(0x0003) MISSED OFFSET
	struct FScriptDelegate                             __EventShellCreated__Delegate;                             // 0x0148(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData0MJW[0xC];                                      // 0x0145(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAvailableGamepadTypeChanged__Delegate;              // 0x0160(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataQ3SM[0xC];                                      // 0x0160(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventGameSessionEnded__Delegate;                         // 0x0178(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7IDM[0xC];                                      // 0x0178(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxEngine_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void OnGameSessionEnded();
	void GetFlashKey(const struct FName& UnrealKey, int* KeyCode, int* MouseButton);
	void UpdateHardwareMouseCursorVisibility();
	void HandleShellInputTypeChanged(class UGFxShell_X* InShell);
	void HandleGFxEnabledChanged(class UGameViewportClient* GVC);
	void HandleShellInputCaptureChanged(class UGFxShell_X* InShell);
	void FlushDirtyObjects();
	void Tick(float DeltaTime);
	class UGFxShell_X* FindShell(class ULocalPlayer_X* ForPlayer);
	void OnShellDestroyed(class UGFxShell_X* Shell);
	void DestroyShell(class ULocalPlayer* ForPlayer);
	class UGFxShell_X* CreateShell();
	class UGFxShell_X* GetShell(class ULocalPlayer_X* ForPlayer);
	void SetShellArchetype(class UGFxShell_X* InShellArchetype);
	class UGFxEngine_X* GetInstance(class UClass* Type);
	void EventGameSessionEnded();
	void EventAvailableGamepadTypeChanged(class UGFxEngine_X* Engine);
	void EventShellCreated(class UGFxEngine_X* Engine, class UGFxShell_X* Shell);
};

// Class ProjectX.__PsyNetServiceProvider_X__ExecuteServiceMessage_8141588041E584E4A2474D9F9A77634E
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class U__PsyNetServiceProvider_X__ExecuteServiceMessage_8141588041E584E4A2474D9F9A77634E : public UObject
{
public:
	struct FString                                     ServiceName;                                               // 0x0060(0x0010) (NeedCtorLink)
	class UPsyNetClientService_X*                      Service;                                                   // 0x0070(0x0008)
	class UTAsyncResult__PsyNetClientService_X*        Task;                                                      // 0x0078(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetServiceProvider_X__ExecuteServiceMessage_8141588041E584E4A2474D9F9A77634E");
		return ptr;
	}


	void __PsyNetServiceProvider_X__ExecuteServiceMessage_99FFB13C408919AC94C612AFC4342AE1(class UError* Err);
	void __PsyNetServiceProvider_X__ExecuteServiceMessage_8141588041E584E4A2474D9F9A77634E(class UPsyNetClientService_X* R, class UError* E);
};

// Class ProjectX.RPC_PartyBase_X
// 0x003C (FullSize[0x0110] - InheritedSize[0x00D4])
class URPC_PartyBase_X : public URPC_X
{
public:
	struct FString                                     PartyID;                                                   // 0x0100(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyBase_X");
		return ptr;
	}


	class URPC_PartyBase_X* SetPartyIdStr(const struct FString& InPartyId);
	class URPC_PartyBase_X* SetPartyId(const struct FUniqueLobbyId& InLobbyId);
};

// Class ProjectX.TAsyncResult__PsyTagCheckResult_X
// 0x0060 (FullSize[0x00FC] - InheritedSize[0x009C])
class UTAsyncResult__PsyTagCheckResult_X : public UAsyncTask
{
public:
	class UPsyTagCheckResult_X*                        Result;                                                    // 0x00D0(0x0008) (PrivateWrite)
	struct FScriptDelegate                             __EventResult__Delegate;                                   // 0x00D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData97GY[0xC];                                      // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                           // 0x00F0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataCIMJ[0xC];                                      // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                                // 0x0108(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataUMU5[0xC];                                      // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TAsyncResult__PsyTagCheckResult_X");
		return ptr;
	}


	class UTAsyncResult__PsyTagCheckResult_X* CreateResultError(class UError* InError);
	class UTAsyncResult__PsyTagCheckResult_X* CreateResult(class UPsyTagCheckResult_X* InResult);
	class UTAsyncResult__PsyTagCheckResult_X* Copy();
	void ClearCallbacks();
	class UTAsyncResult__PsyTagCheckResult_X* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class UTAsyncResult__PsyTagCheckResult_X* SetResult(class UPsyTagCheckResult_X* InResult, class UError* InError);
	class UTAsyncResult__PsyTagCheckResult_X* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class UTAsyncResult__PsyTagCheckResult_X* NotifyOnResult(const struct FScriptDelegate& Callback);
	class UPsyTagCheckResult_X* ResultDelegate();
	void EventResultComplete(class UPsyTagCheckResult_X* OutResult, class UError* OutError);
	void EventResult(class UPsyTagCheckResult_X* OutResult);
};

// Class ProjectX.ClientNetMetrics_X
// 0x006C (FullSize[0x00CC] - InheritedSize[0x0060])
class UClientNetMetrics_X : public UObject
{
public:
	float                                              RecordPeriod;                                              // 0x0060(0x0004)
	float                                              LastRecordTime;                                            // 0x0064(0x0004)
	TEnumAsByte<ENetworkNextState>                     PrevNetworkNextState;                                      // 0x0068(0x0001)
	unsigned char                                      UnknownDataYIQJ[0x3];                                      // 0x0069(0x0003) MISSED OFFSET
	struct FNetworkNextStats                           PrevNetworkNextStats;                                      // 0x006C(0x0018)
	struct FNetPacketStats                             OldStats;                                                  // 0x0084(0x001C)
	TArray<float>                                      GamePings;                                                 // 0x00A0(0x0010) (NeedCtorLink)
	class UGameServerPinger_X*                         Pinger;                                                    // 0x00B0(0x0008) (ExportObject, Component, EditInline)
	TArray<float>                                      PsyPings;                                                  // 0x00B8(0x0010) (NeedCtorLink)
	int                                                PsyPacketsLost;                                            // 0x00C8(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClientNetMetrics_X");
		return ptr;
	}


	void __ClientNetMetrics_X__StartRecording_6DF6AA5E442777138C6F2B9C9192D029(class UGameServerPinger_X* _);
	void __ClientNetMetrics_X__StartRecording_5AD6E621413259339ABB32A34763C508(class UGameServerPinger_X* _, float DelaySeconds);
	struct FPingStats CalcPingStats(TArray<float>* Pings, float* ReduceLocal_D0A7F9E644B5BE71CC899C8DBB05B4AD);
	void Record();
	void RecordTimer();
	void StopRecording();
	void StartRecording();
	void Construct();
};

// Class ProjectX.BugReport_X
// 0x0150 (FullSize[0x01B0] - InheritedSize[0x0060])
class UBugReport_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0060(0x0008) (Const, Native, NoExport)
	struct FString                                     BugReportClassName;                                        // 0x0068(0x0010) (Config, GlobalConfig, NeedCtorLink)
	struct FString                                     URL;                                                       // 0x0078(0x0010) (Edit, NeedCtorLink)
	int                                                MaxFileSizeMegabytes;                                      // 0x0088(0x0004) (Edit)
	unsigned char                                      UnknownDataVLWE[0x4];                                      // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     BugID;                                                     // 0x0090(0x0010) (Const, Transient, NeedCtorLink)
	struct FBugReportSubmitterData                     SubmitterData;                                             // 0x00A0(0x0030) (Const, Transient, NeedCtorLink)
	struct FBugReportSystemData                        SystemData;                                                // 0x00D0(0x0038) (Const, Transient, NeedCtorLink)
	struct FBugReportPathData                          PathData;                                                  // 0x0108(0x0040) (Const, Transient, NeedCtorLink)
	struct FBugReportDescriptionData                   DescriptionData;                                           // 0x0148(0x0050) (Const, Transient, NeedCtorLink)
	struct FPointer                                    LogFile;                                                   // 0x0198(0x0008) (Const, Native, Transient)
	TArray<struct FFileUploadData>                     FileUploads;                                               // 0x01A0(0x0010) (Const, Transient, NeedCtorLink)
	unsigned char                                      bUploadNextFile : 1;                                       // 0x01B0(0x0001) BIT_FIELD (Const, Transient)
	unsigned char                                      UnknownDataLI3L[0x2];                                      // 0x01B0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bSubmitted : 1;                                            // 0x01B0(0x0001) BIT_FIELD (Const, Transient)
	unsigned char                                      UnknownDataA0T5[0x2];                                      // 0x01B4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BugReport_X");
		return ptr;
	}


	void HandleHttpRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, bool bDidSucceed);
	void LogText(const struct FString& Str);
	void PDIReport();
	void CancelBugReport();
	void SubmitBugReport(const struct FString& Title, const struct FString& Description, const struct FString& Email);
	void StartBugReport();
	void StaticSubmitBugReport(const struct FString& Title);
	class UBugReport_X* CreateBugReport();
};

// Class ProjectX.RPC_PartyChatMessage_X
// 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
class URPC_PartyChatMessage_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                                   // 0x0110(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyChatMessage_X");
		return ptr;
	}


	class URPC_PartyChatMessage_X* SetMessage(const struct FString& InMessage);
};

// Class ProjectX.Camera_X
// 0x0114 (FullSize[0x06B8] - InheritedSize[0x05A4])
class ACamera_X : public ACamera
{
public:
	TArray<class UCameraState_X*>                      States;                                                    // 0x05B8(0x0010) (Edit, NeedCtorLink)
	struct FRotator                                    PCDeltaRotation;                                           // 0x05C8(0x000C) (Transient)
	struct FRotator                                    OldControllerRotation;                                     // 0x05D4(0x000C) (Transient)
	struct FVector                                     PCDeltaLocation;                                           // 0x05E0(0x000C) (Transient)
	struct FVector                                     OldControllerLocation;                                     // 0x05EC(0x000C) (Transient)
	struct FCameraOrientation                          PreProcessPOV;                                             // 0x05F8(0x002C) (Transient)
	struct FCameraOrientation                          PostProcessPOV;                                            // 0x0624(0x002C) (Transient)
	class UCameraStateBlender_X*                       Blender;                                                   // 0x0650(0x0008) (ExportObject, Component, EditInline)
	struct FVector                                     ShakeLocationOffset;                                       // 0x0658(0x000C) (Const, Transient)
	struct FRotator                                    ShakeRotationOffset;                                       // 0x0664(0x000C) (Const, Transient)
	float                                              ShakeFOVOffset;                                            // 0x0670(0x0004) (Const, Transient)
	struct FColor                                      StartFadeColor;                                            // 0x0674(0x0004) (Transient)
	struct FColor                                      EndFadeColor;                                              // 0x0678(0x0004) (Transient)
	struct FVector                                     ClipOffset;                                                // 0x067C(0x000C) (Transient)
	TArray<struct FLocationCameraKnock>                LocationKnocks;                                            // 0x0688(0x0010) (Transient, NeedCtorLink)
	TArray<struct FRotationCameraKnock>                RotationKnocks;                                            // 0x0698(0x0010) (Transient, NeedCtorLink)
	unsigned char                                      bDisableCameraShake : 1;                                   // 0x06A8(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataKAGD[0x2];                                      // 0x06A8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bSnapNextTransition : 1;                                   // 0x06A8(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData4SBF[0x2];                                      // 0x06AC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData8BKB[0x4];                                      // 0x06AC(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventCameraStateChanged__Delegate;                       // 0x06B0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataJHJF[0xC];                                      // 0x06AC(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Camera_X");
		return ptr;
	}


	void __Camera_X__Destroyed_648939314304937BDCBA8194BD55EAB1(class UCameraState_X* S);
	void Destroyed();
	void OnViewTargetChanged();
	void SetViewTarget(class AActor* NewViewTarget, const struct FViewTargetTransitionParams& TransitionParams);
	bool IsTransitioning();
	void HandleBlenderStateChanged(class UCameraStateBlender_X* CameraBlender);
	void SnapTransition();
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void ApplyCameraModifiers(float DeltaTime, struct FTPOV* OutPOV);
	bool CameraTrace(const struct FVector& End, const struct FVector& Start, const struct FVector& Extent, struct FVector* HitLoc, class AActor** HitActor);
	class UCameraState_X* InstanceCameraState(class UCameraState_X* Archetype);
	void ModifyPostProcessSettings(struct FPostProcessSettings* PP);
	void ProcessViewRotation(float DeltaTime, struct FRotator* OutViewRotation, struct FRotator* OutDeltaRot);
	void PostProcessCameraState(float DeltaTime, struct FCameraOrientation* OutPOV);
	void ProcessCameraState(float DeltaTime, struct FCameraOrientation* OutPOV);
	void CheckViewTarget(struct FTViewTarget* VT);
	void CopyFade(class ACamera_X* Other);
	void SetCameraFade(bool bNewEnableFading, const struct FColor& NewFadeColor, const struct FVector2D& NewFadeAlpha, float NewFadeTime, bool bNewFadeAudio);
	void UpdateFade(float DeltaTime);
	void UpdateCamera(float DeltaTime);
	void ClampPOV(struct FCameraOrientation* OutPOV);
	struct FRotator RemoveRoll(const struct FRotator& InRot);
	class UCameraState_X* GetCameraState();
	class UCameraState_X* SelectCameraState();
	void UpdateCameraState();
	void UpdateCameraKnocks(float DeltaTime, struct FCameraOrientation* OutPOV);
	void AddRotationKnock(const struct FRotationCameraKnock& Knock, float Scale);
	void AddLocationKnock(const struct FLocationCameraKnock& Knock, float Scale, const struct FRotator& Transform);
	void InstanceCameraStates();
	void InitializeFor(class APlayerController* PC);
	void ModifyCameraShakeScale(class UCameraShake* Shake, float NewScale);
	void OnLoadingMovieClosesd();
	void PostBeginPlay();
	struct FVector InterpVector(const struct FVector& OldValue, const struct FVector& NewValue, const struct FVectorInterpRate& Rate, const struct FRotator& Orientation, float DeltaTime);
	void FinalizeOrientation(struct FCameraOrientation* OutPOV);
	struct FCameraOrientation BlendCameraOrientations(struct FCameraOrientation* A, struct FCameraOrientation* B, float Alpha);
	void EventCameraStateChanged(class ACamera_X* Camera, class UCameraState_X* CameraState);
};

// Class ProjectX.PsyNetService_FriendChatReceived_X
// 0x0056 (FullSize[0x00DE] - InheritedSize[0x0088])
class UPsyNetService_FriendChatReceived_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                FromPlayerID;                                              // 0x0090(0x0038)
	struct FString                                     Message;                                                   // 0x00C8(0x0010) (NeedCtorLink)
	unsigned char                                      IsLocalMessage : 1;                                        // 0x00D8(0x0001) BIT_FIELD
	unsigned char                                      UnknownData302H[0x2];                                      // 0x00D8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataM6J9[0x4];                                      // 0x00DC(0x0004) MISSED OFFSET
	unsigned char                                      UnknownDataCG5J[0x8];                                      // 0x00DC(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.PsyNetService_FriendChatReceived_X.TimeStamp


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_FriendChatReceived_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetService_FriendAcceptedRequest_X
// 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
class UPsyNetService_FriendAcceptedRequest_X : public UPsyNetService_PersonaInfo_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_FriendAcceptedRequest_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetService_FriendPsyTagUpdated_X
// 0x0058 (FullSize[0x00E0] - InheritedSize[0x0088])
class UPsyNetService_FriendPsyTagUpdated_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0090(0x0038) (Const)
	struct FPsyTag                                     PsyTag;                                                    // 0x00C8(0x0018) (Const, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_FriendPsyTagUpdated_X");
		return ptr;
	}


};

// Class ProjectX.CachedWebData_X
// 0x004A (FullSize[0x00AA] - InheritedSize[0x0060])
class UCachedWebData_X : public UObject
{
public:
	TArray<unsigned char>                              Data;                                                      // 0x0060(0x0010) (Const, NeedCtorLink)
	int                                                DataCRC;                                                   // 0x0070(0x0004) (Const)
	unsigned char                                      UnknownData6T3X[0x4];                                      // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     ETag;                                                      // 0x0078(0x0010) (Const, NeedCtorLink)
	struct FString                                     ContentType;                                               // 0x0088(0x0010) (Const, NeedCtorLink)
	class UError*                                      LoadError;                                                 // 0x0098(0x0008) (Transient)
	class UError*                                      DownloadError;                                             // 0x00A0(0x0008) (Transient)
	unsigned char                                      bNewData : 1;                                              // 0x00A8(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataQZH0[0x2];                                      // 0x00A8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CachedWebData_X");
		return ptr;
	}


	struct FString GetText();
	void SetData(TArray<unsigned char> NewData, const struct FString& NewETag, const struct FString& NewContentType);
};

// Class ProjectX.PsyNetService_IncomingFriendRequest_X
// 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
class UPsyNetService_IncomingFriendRequest_X : public UPsyNetService_PersonaInfo_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_IncomingFriendRequest_X");
		return ptr;
	}


};

// Class ProjectX.PartyErrors_X
// 0x0120 (FullSize[0x01A0] - InheritedSize[0x0080])
class UPartyErrors_X : public UErrorList
{
public:
	class UErrorType*                                  CreatePartyFailed;                                         // 0x0080(0x0008) (Const)
	class UErrorType*                                  CreatePartyFailedTeamFull;                                 // 0x0088(0x0008) (Const)
	class UErrorType*                                  CreatePlayerFailedPartyFull;                               // 0x0090(0x0008) (Const)
	class UErrorType*                                  InvitePlayerToPartyFailedPartyFull;                        // 0x0098(0x0008) (Const)
	class UErrorType*                                  JoinPartyFailedPartyFull;                                  // 0x00A0(0x0008) (Const)
	class UErrorType*                                  JoinPartyFailedPartyMatchmaking;                           // 0x00A8(0x0008) (Const)
	class UErrorType*                                  JoinPartyFailedPartyInGame;                                // 0x00B0(0x0008) (Const)
	class UErrorType*                                  KickedFromParty;                                           // 0x00B8(0x0008) (Const)
	class UErrorType*                                  PartyDestroyedConnectionError;                             // 0x00C0(0x0008) (Const)
	class UErrorType*                                  PartyDestroyedSignedOut;                                   // 0x00C8(0x0008) (Const)
	class UErrorType*                                  JoinPartyFailed;                                           // 0x00D0(0x0008) (Const)
	class UErrorType*                                  JoinPartyFailedNotAllowed;                                 // 0x00D8(0x0008) (Const)
	class UErrorType*                                  JoinPartyFailedNotJoinable;                                // 0x00E0(0x0008) (Const)
	class UErrorType*                                  PartyBuildID;                                              // 0x00E8(0x0008) (Const)
	class UErrorType*                                  PartyNotFound;                                             // 0x00F0(0x0008) (Const)
	class UErrorType*                                  UserNotOwner;                                              // 0x00F8(0x0008) (Const)
	class UErrorType*                                  PartyIsFull;                                               // 0x0100(0x0008) (Const)
	class UErrorType*                                  CannotAddToParty;                                          // 0x0108(0x0008) (Const)
	class UErrorType*                                  UserListInvalid;                                           // 0x0110(0x0008) (Const)
	class UErrorType*                                  InvalidOwner;                                              // 0x0118(0x0008) (Const)
	class UErrorType*                                  ChatDisabled;                                              // 0x0120(0x0008) (Const)
	class UErrorType*                                  MissingOrExpiredInvite;                                    // 0x0128(0x0008) (Const)
	class UErrorType*                                  MemberNotFound;                                            // 0x0130(0x0008) (Const)
	class UErrorType*                                  PartyIdConflict;                                           // 0x0138(0x0008) (Const)
	class UErrorType*                                  CannotKickSelf;                                            // 0x0140(0x0008) (Const)
	class UErrorType*                                  RegionRestrictedTrade;                                     // 0x0148(0x0008) (Const)
	class UErrorType*                                  CannotCrossPlatformTrade;                                  // 0x0150(0x0008) (Const)
	class UErrorType*                                  CannotCrossPlayInvite;                                     // 0x0158(0x0008) (Const)
	class UErrorType*                                  RestrictedPlatformInvite;                                  // 0x0160(0x0008) (Const)
	class UErrorType*                                  PlatformNotSupported;                                      // 0x0168(0x0008) (Const)
	class UErrorType*                                  KickedCrossplayDisabled;                                   // 0x0170(0x0008) (Const)
	class UErrorType*                                  KickedLeaderPartyUp;                                       // 0x0178(0x0008) (Const)
	class UErrorType*                                  VoterDisconnected;                                         // 0x0180(0x0008) (Const)
	class UErrorType*                                  VoteEnded;                                                 // 0x0188(0x0008) (Const)
	class UErrorType*                                  UsePlatformPartySystem;                                    // 0x0190(0x0008) (Const)
	class UErrorType*                                  InvitationRejected;                                        // 0x0198(0x0008) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyErrors_X");
		return ptr;
	}


};

// Class ProjectX.CameraAttachmentComponent_X
// 0x001D (FullSize[0x00B2] - InheritedSize[0x0095])
class UCameraAttachmentComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownDataTP2P[0x3];                                      // 0x009D(0x0003) MISSED OFFSET
	TArray<class UActorComponent*>                     Attachments;                                               // 0x00A0(0x0010) (Edit, ExportObject, Component, NeedCtorLink, EditInline)
	unsigned char                                      bDirtyTransform : 1;                                       // 0x00B0(0x0001) BIT_FIELD (Const, Transient)
	unsigned char                                      UnknownData93J3[0x2];                                      // 0x00B0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraAttachmentComponent_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetService_PlayerUnfriended_X
// 0x0040 (FullSize[0x00C8] - InheritedSize[0x0088])
class UPsyNetService_PlayerUnfriended_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0090(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PlayerUnfriended_X");
		return ptr;
	}


};

// Class ProjectX.ReservationsFullMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsFullMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsFullMessage_X");
		return ptr;
	}


};

// Class ProjectX.OSSConfig_X
// 0x0004 (FullSize[0x007A] - InheritedSize[0x0076])
class UOSSConfig_X : public UOnlineConfig_X
{
public:
	unsigned char                                      bEnablePresence : 1;                                       // 0x0078(0x0001) BIT_FIELD (Edit, Config)
	unsigned char                                      UnknownDataATIR[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OSSConfig_X");
		return ptr;
	}


};

// Class ProjectX.GameServerPinger_X
// 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
class UGameServerPinger_X : public UComponent
{
public:
	int                                                PingsPerSecond;                                            // 0x0070(0x0004) (Edit)
	struct FName                                       Address;                                                   // 0x0074(0x0008)
	unsigned char                                      UnknownDataE5YM[0x4];                                      // 0x007C(0x0004) MISSED OFFSET
	class UUdpPingBeaconClient_X*                      PingBeacon;                                                // 0x0080(0x0008) (ExportObject, Component, EditInline)
	struct FScriptDelegate                             __EventPong__Delegate;                                     // 0x0088(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataYQ4Z[0xC];                                      // 0x0088(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLost__Delegate;                                     // 0x00A0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataF5XY[0xC];                                      // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameServerPinger_X");
		return ptr;
	}


	void HandleLost(class UUdpPingBeaconClient_X* _, const struct FName& __);
	void HandlePong(class UUdpPingBeaconClient_X* _, const struct FName& __, float DeltaSeconds);
	void SendPing();
	void StopPinging();
	void StartPinging();
	void SetAddress(const struct FString& InAddress);
	void EventLost(class UGameServerPinger_X* Pinger);
	void EventPong(class UGameServerPinger_X* Pinger, float DeltaSeconds);
};

// Class ProjectX.ReservationsTeamFullMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsTeamFullMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsTeamFullMessage_X");
		return ptr;
	}


};

// Class ProjectX.GFxModal_X
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class UGFxModal_X : public UObject
{
public:
	struct FString                                     ActionScriptModalName;                                     // 0x0060(0x0010) (Edit, Const, NeedCtorLink)
	class UGFxObject*                                  GFxPopup;                                                  // 0x0070(0x0008)
	TArray<struct FScriptDelegate>                     Callbacks;                                                 // 0x0078(0x0010) (Transient, NeedCtorLink)
	struct FString                                     ConfirmString;                                             // 0x0088(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FScriptDelegate                             __ClickDelegate__Delegate;                                 // 0x0098(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataO4GY[0xC];                                      // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventClosed__Delegate;                                   // 0x00B0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataHA67[0xC];                                      // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxModal_X");
		return ptr;
	}


	class UGFxModal_X* NotifyOnClosed(const struct FScriptDelegate& Callback);
	void Close();
	void FlashAddButton(const struct FString& Label);
	void FlashAddCancelButton(const struct FString& LocalizedText);
	void HandleButtonClicked(int Index);
	class UGFxModal_X* AddButtonCallback(int Index, const struct FScriptDelegate& OnClick);
	class UGFxModal_X* AddButton(const struct FString& Label, const struct FScriptDelegate& OnClick);
	class UGFxModal_X* AddCancelButton(const struct FString& LocalizedText, const struct FScriptDelegate& OnClick);
	class UGFxModal_X* SetCancellable(bool bCancellable);
	class UGFxModal_X* SetDefaultSelectedButtonIndex(int buttonIndex);
	class UGFxModal_X* SetIcon(const struct FString& IconName);
	class UGFxModal_X* SetBody(const struct FString& LocalizedText);
	class UGFxModal_X* SetTitle(const struct FString& LocalizedText);
	void SetGFxObject(class UGFxObject* Obj);
	void EventClosed(class UGFxModal_X* Modal);
	void ClickDelegate(class UGFxModal_X* Modal);
};

// Class ProjectX.CanvasTexture_X
// 0x001A (FullSize[0x019C] - InheritedSize[0x0182])
class UCanvasTexture_X : public UTextureRenderTarget2D
{
public:
	struct FScriptDelegate                             __Draw__Delegate;                                          // 0x0190(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataSG8N[0xC];                                      // 0x0190(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CanvasTexture_X");
		return ptr;
	}


	void Draw(class UCanvas* C);
};

// Class ProjectX.ReservationsWaitingMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsWaitingMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsWaitingMessage_X");
		return ptr;
	}


};

// Class ProjectX.CameraState_X
// 0x0028 (FullSize[0x008A] - InheritedSize[0x0062])
class UCameraState_X : public UStateObject_X
{
public:
	unsigned char                                      UnknownDataBQS5[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	struct FViewTargetTransitionParams                 DefaultBlendParams;                                        // 0x0068(0x0010) (Edit)
	class AWorldInfo*                                  WorldInfo;                                                 // 0x0078(0x0008) (Transient, PrivateWrite)
	class ACamera_X*                                   Camera;                                                    // 0x0080(0x0008) (Transient, PrivateWrite)
	unsigned char                                      bCanSwivel : 1;                                            // 0x0088(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownDataCT4G[0x2];                                      // 0x0088(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraState_X");
		return ptr;
	}


	void OnSnap();
	void ModifyPostProcessSettings(struct FPostProcessSettings* PP);
	void ProcessViewRotation(float DeltaTime, struct FRotator* OutViewRotation, struct FRotator* OutDeltaRot);
	void UpdatePOV(float DeltaTime, struct FCameraOrientation* OutPOV);
	void Tick(float DeltaTime);
	void EndCameraState();
	void BeginCameraState();
	struct FViewTargetTransitionParams GetEndBlendParams(class UCameraState_X* NewState);
	struct FViewTargetTransitionParams GetStartBlendParams(class UCameraState_X* PreviousState);
	bool ShouldKeepExecuting();
	bool ShouldExecute();
	void ShutDown();
	void Init(class ACamera_X* InCamera);
};

// Class ProjectX.CanvasTextureComponent_X
// 0x002B (FullSize[0x00C0] - InheritedSize[0x0095])
class UCanvasTextureComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownDataD7EB[0x3];                                      // 0x009D(0x0003) MISSED OFFSET
	class UMeshComponent*                              Mesh;                                                      // 0x00A0(0x0008) (Edit, Const, ExportObject, Component, EditInline)
	int                                                MaterialIndex;                                             // 0x00A8(0x0004) (Edit, Const)
	struct FName                                       MaterialParamName;                                         // 0x00AC(0x0008) (Edit, Const)
	unsigned char                                      UnknownData720K[0x4];                                      // 0x00B4(0x0004) MISSED OFFSET
	class UCanvasTexture_X*                            Texture;                                                   // 0x00B8(0x0008) (Edit, Const, ExportObject, NeedCtorLink, EditInline)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CanvasTextureComponent_X");
		return ptr;
	}


	void OnDraw(class UCanvas* C);
};

// Class ProjectX.RPC_PsyNetFriendRequestAccept_X
// 0x016C (FullSize[0x0240] - InheritedSize[0x00D4])
class URPC_PsyNetFriendRequestAccept_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038)
	struct FPsyNetPersonaData                          Requester;                                                 // 0x0138(0x0080) (Transient, NeedCtorLink)
	struct FOnlineFriend                               NewFriend;                                                 // 0x01B8(0x0088) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PsyNetFriendRequestAccept_X");
		return ptr;
	}


	class URPC_PsyNetFriendRequestAccept_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
	void OnFail();
	void OnSuccess();
};

// Class ProjectX.GFxSoundPack_X
// 0x0022 (FullSize[0x0082] - InheritedSize[0x0060])
class UGFxSoundPack_X : public UObject
{
public:
	struct FString                                     ExportClassName;                                           // 0x0060(0x0010) (Edit, NeedCtorLink)
	TArray<struct FSoundPackSoundRef>                  Sounds;                                                    // 0x0070(0x0010) (Edit, Const, NeedCtorLink, PrivateWrite)
	unsigned char                                      bHasSubtitles : 1;                                         // 0x0080(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataW4QP[0x2];                                      // 0x0080(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxSoundPack_X");
		return ptr;
	}


	bool ToggleSound(int Idx, class AActor* Target, bool bPlay);
	void StopAll(class AActor* Target);
	bool StopSound(const struct FName& SoundName, class AActor* Target);
	bool PlaySound(const struct FName& SoundName, class AActor* Target);
};

// Class ProjectX.NetMetricsSystem_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMetricsSystem_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMetricsSystem_X");
		return ptr;
	}


	void Exit(class UPreExitEvent_X* Event, class UClientNetMetrics_X* Metrics);
	void RecordGamePing(class UNetworkPingEvent_X* Ping, class UClientNetMetrics_X* Metrics);
	void PlayerRemoved(class UClientNetMetrics_X* Metrics);
	void PlayerAdded(class UPrimaryPlayer* PP, class UNetMode_DedicatedClient* NetMode, class APlayerReplicationInfo* PRI);
};

// Class ProjectX.ReservationsReadyMessage_X
// 0x0042 (FullSize[0x00A2] - InheritedSize[0x0060])
class UReservationsReadyMessage_X : public UBeaconMessage_X
{
public:
	struct FString                                     ServerAddress;                                             // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     BeaconAddress;                                             // 0x0070(0x0010) (NeedCtorLink)
	struct FString                                     PingAddress;                                               // 0x0080(0x0010) (NeedCtorLink)
	TArray<int>                                        ProductIDs;                                                // 0x0090(0x0010) (NeedCtorLink)
	unsigned char                                      bUseNetworkNextDriver : 1;                                 // 0x00A0(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataR8YV[0x2];                                      // 0x00A0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsReadyMessage_X");
		return ptr;
	}


	class UReservationsReadyMessage_X* SetProductIDs(TArray<int> InProductIDs);
	class UReservationsReadyMessage_X* SetPingAddress(const struct FString& InAddress);
	class UReservationsReadyMessage_X* SetBeaconAddress(const struct FString& InAddress);
	class UReservationsReadyMessage_X* SetServerAddress(const struct FString& InAddress);
};

// Class ProjectX.RPC_PsyNetSendIndividualChat_X
// 0x0074 (FullSize[0x0148] - InheritedSize[0x00D4])
class URPC_PsyNetSendIndividualChat_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038)
	struct FString                                     Message;                                                   // 0x0138(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PsyNetSendIndividualChat_X");
		return ptr;
	}


	class URPC_PsyNetSendIndividualChat_X* SetMessage(const struct FString& InMessage);
	class URPC_PsyNetSendIndividualChat_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.NetMode_DedicatedClient
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMode_DedicatedClient : public UNetModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMode_DedicatedClient");
		return ptr;
	}


};

// Class ProjectX.ReservationsTimedOutMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsTimedOutMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsTimedOutMessage_X");
		return ptr;
	}


};

// Class ProjectX.NetworkPingEvent_X
// 0x0004 (FullSize[0x0064] - InheritedSize[0x0060])
class UNetworkPingEvent_X : public UObject
{
public:
	float                                              DeltaSeconds;                                              // 0x0060(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkPingEvent_X");
		return ptr;
	}


};

// Class ProjectX.CameraState_CamActor_X
// 0x0180 (FullSize[0x020A] - InheritedSize[0x008A])
class UCameraState_CamActor_X : public UCameraState_X
{
public:
	unsigned char                                      UnknownDataXG5F[0x4];                                      // 0x008C(0x0004) MISSED OFFSET
	unsigned char                                      bUseOverridePostProcess : 1;                               // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataZS4C[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData66MQ[0x4];                                      // 0x0094(0x0004) MISSED OFFSET
	class ACameraActor*                                CamActor;                                                  // 0x0098(0x0008) (Transient)
	struct FPostProcessSettings                        PrevPost;                                                  // 0x00A0(0x0168) (Transient, NeedCtorLink)
	float                                              PrevPostAlpha;                                             // 0x0208(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraState_CamActor_X");
		return ptr;
	}


	void UpdatePOV(float DeltaTime, struct FCameraOrientation* OutPOV);
	void EndCameraState();
	void BeginCameraState();
	struct FViewTargetTransitionParams GetBlendParams(class UCameraState_X* PrevState);
	bool ShouldExecute();
};

// Class ProjectX.ReservationsPrivateMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsPrivateMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsPrivateMessage_X");
		return ptr;
	}


};

// Class ProjectX.NetMode_Authoritative
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMode_Authoritative : public UNetModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMode_Authoritative");
		return ptr;
	}


};

// Class ProjectX.RPC_PsyNetRemoveFriend_X
// 0x0064 (FullSize[0x0138] - InheritedSize[0x00D4])
class URPC_PsyNetRemoveFriend_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PsyNetRemoveFriend_X");
		return ptr;
	}


	class URPC_PsyNetRemoveFriend_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.NetMode_Client
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMode_Client : public UNetModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMode_Client");
		return ptr;
	}


};

// Class ProjectX.CameraState_CamActorCinematic_X
// 0x0002 (FullSize[0x020C] - InheritedSize[0x020A])
class UCameraState_CamActorCinematic_X : public UCameraState_CamActor_X
{
public:
	unsigned char                                      UnknownDataPSLG[0x4];                                      // 0x020C(0x0004) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraState_CamActorCinematic_X");
		return ptr;
	}


	void UpdatePOV(float DeltaTime, struct FCameraOrientation* OutPOV);
	void EndCameraState();
};

// Class ProjectX.__OnlinePlayerFriends_X__DeclinePsyNetFriendRequest_03C4966048D7DD386C99329EDEC369BA
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__OnlinePlayerFriends_X__DeclinePsyNetFriendRequest_03C4966048D7DD386C99329EDEC369BA : public UObject
{
public:
	struct FScriptDelegate                             CompleteCallback;                                          // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataU2D6[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__DeclinePsyNetFriendRequest_03C4966048D7DD386C99329EDEC369BA");
		return ptr;
	}


	void __OnlinePlayerFriends_X__DeclinePsyNetFriendRequest_03C4966048D7DD386C99329EDEC369BA(class URPC_PsyNetFriendRequestDecline_X* RPC);
};

// Class ProjectX.ReservationsPasswordMessage_X
// 0x0001 (FullSize[0x0061] - InheritedSize[0x0060])
class UReservationsPasswordMessage_X : public UBeaconMessage_X
{
public:
	TEnumAsByte<EPasswordFailureReason>                Reason;                                                    // 0x0060(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsPasswordMessage_X");
		return ptr;
	}


	class UReservationsPasswordMessage_X* SetReason(TEnumAsByte<EPasswordFailureReason> InReason);
};

// Class ProjectX.NetMode_DedicatedServer
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMode_DedicatedServer : public UNetModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMode_DedicatedServer");
		return ptr;
	}


};

// Class ProjectX.ReservationsWrongPlaylistMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsWrongPlaylistMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsWrongPlaylistMessage_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetService_Reservation_X
// 0x0080 (FullSize[0x0108] - InheritedSize[0x0088])
class UPsyNetService_Reservation_X : public UPsyNetClientService_X
{
public:
	struct FCheckReservationResponse                   Reservation;                                               // 0x0090(0x0078) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_Reservation_X");
		return ptr;
	}


	struct FServerReservationData GetReservation();
};

// Class ProjectX.NetMode_ListenServer
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMode_ListenServer : public UNetModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMode_ListenServer");
		return ptr;
	}


};

// Class ProjectX.ReservationsWrongRankedMatchMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsWrongRankedMatchMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsWrongRankedMatchMessage_X");
		return ptr;
	}


};

// Class ProjectX.RPC_PsyNetFriendRequestDecline_X
// 0x0064 (FullSize[0x0138] - InheritedSize[0x00D4])
class URPC_PsyNetFriendRequestDecline_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PsyNetFriendRequestDecline_X");
		return ptr;
	}


	class URPC_PsyNetFriendRequestDecline_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.NetMode_Server
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMode_Server : public UNetModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMode_Server");
		return ptr;
	}


};

// Class ProjectX.ReservationsKeysFailedMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsKeysFailedMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsKeysFailedMessage_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetService_Reservation2_X
// 0x0080 (FullSize[0x0108] - InheritedSize[0x0088])
class UPsyNetService_Reservation2_X : public UPsyNetClientService_X
{
public:
	struct FCheckReservationResponse                   Reservation;                                               // 0x0090(0x0078) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_Reservation2_X");
		return ptr;
	}


	struct FServerReservationData GetReservation();
};

// Class ProjectX.NetMode_Standalone
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetMode_Standalone : public UNetModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMode_Standalone");
		return ptr;
	}


};

// Class ProjectX.ReservationCrossplayDisabledMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationCrossplayDisabledMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationCrossplayDisabledMessage_X");
		return ptr;
	}


};

// Class ProjectX.__OnlinePlayerFriends_X__AcceptPsyNetFriendRequest_45A8A36444DD7860C6211B97B3E60A5A
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__OnlinePlayerFriends_X__AcceptPsyNetFriendRequest_45A8A36444DD7860C6211B97B3E60A5A : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataGVGR[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__AcceptPsyNetFriendRequest_45A8A36444DD7860C6211B97B3E60A5A");
		return ptr;
	}


	void __OnlinePlayerFriends_X__AcceptPsyNetFriendRequest_45A8A36444DD7860C6211B97B3E60A5A(class URPC_PsyNetFriendRequestAccept_X* RPC);
};

// Class ProjectX.RPC_ReservationHeartbeat_X
// 0x002C (FullSize[0x0100] - InheritedSize[0x00D4])
class URPC_ReservationHeartbeat_X : public URPC_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ReservationHeartbeat_X");
		return ptr;
	}


};

// Class ProjectX.NetModeReplicator_X
// 0x0000 (FullSize[0x0268] - InheritedSize[0x0268])
class ANetModeReplicator_X : public AReplicationInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetModeReplicator_X");
		return ptr;
	}


};

// Class ProjectX.ReservationsMaxPlayersMessage_X
// 0x0004 (FullSize[0x0064] - InheritedSize[0x0060])
class UReservationsMaxPlayersMessage_X : public UBeaconMessage_X
{
public:
	int                                                MaxPlayerCount;                                            // 0x0060(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsMaxPlayersMessage_X");
		return ptr;
	}


	class UReservationsMaxPlayersMessage_X* SetMaxPlayerCount(int inMaxPlayerCount);
};

// Class ProjectX.RPC_PsyNetSendFriendRequest_X
// 0x0064 (FullSize[0x0138] - InheritedSize[0x00D4])
class URPC_PsyNetSendFriendRequest_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PsyNetSendFriendRequest_X");
		return ptr;
	}


	class URPC_PsyNetSendFriendRequest_X* SetFriendRequestedID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.PingMessage_X
// 0x0002 (FullSize[0x0062] - InheritedSize[0x0060])
class UPingMessage_X : public UBeaconMessage_X
{
public:
	unsigned char                                      bIsResponse : 1;                                           // 0x0060(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataH1WH[0x2];                                      // 0x0060(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PingMessage_X");
		return ptr;
	}


	class UPingMessage_X* SetIsResponse();
};

// Class ProjectX.__OnlinePlayerFriends_X__DownloadPendingFriendRequests_AB169ED344A0D1DE06DAA8A765F10847
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__OnlinePlayerFriends_X__DownloadPendingFriendRequests_AB169ED344A0D1DE06DAA8A765F10847 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData8MTH[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__DownloadPendingFriendRequests_AB169ED344A0D1DE06DAA8A765F10847");
		return ptr;
	}


	void __OnlinePlayerFriends_X__DownloadPendingFriendRequests_AB169ED344A0D1DE06DAA8A765F10847(class URPC_PsyNetGetPendingFriendRequests_X* R);
};

// Class ProjectX.RPC_KeysBase_X
// 0x0086 (FullSize[0x015A] - InheritedSize[0x00D4])
class URPC_KeysBase_X : public URPC_X
{
public:
	struct FString                                     ServerHost;                                                // 0x0100(0x0010) (NeedCtorLink)
	int                                                ServerPort;                                                // 0x0110(0x0004)
	unsigned char                                      UnknownDataBC0R[0x4];                                      // 0x0114(0x0004) MISSED OFFSET
	struct FString                                     Key;                                                       // 0x0118(0x0010) (Transient, NeedCtorLink)
	struct FString                                     IV;                                                        // 0x0128(0x0010) (Transient, NeedCtorLink)
	struct FString                                     HMACKey;                                                   // 0x0138(0x0010) (Transient, NeedCtorLink)
	struct FString                                     SessionId;                                                 // 0x0148(0x0010) (Transient, NeedCtorLink)
	unsigned char                                      bPrimaryPlayer : 1;                                        // 0x0158(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataBROQ[0x2];                                      // 0x0158(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_KeysBase_X");
		return ptr;
	}


	class URPC_KeysBase_X* SetPrimaryPlayer();
	class URPC_KeysBase_X* SetServerAddress(const struct FString& ServerAddress);
};

// Class ProjectX.RPC_GenerateKeys_X
// 0x0002 (FullSize[0x015C] - InheritedSize[0x015A])
class URPC_GenerateKeys_X : public URPC_KeysBase_X
{
public:
	unsigned char                                      UnknownDataYUAW[0x4];                                      // 0x015C(0x0004) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GenerateKeys_X");
		return ptr;
	}


};

// Class ProjectX.CancelJoinMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UCancelJoinMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CancelJoinMessage_X");
		return ptr;
	}


};

// Class ProjectX.RPC_PsyNetGetPendingFriendRequests_X
// 0x004C (FullSize[0x0120] - InheritedSize[0x00D4])
class URPC_PsyNetGetPendingFriendRequests_X : public URPC_X
{
public:
	TArray<struct FPsyNetPersonaData>                  FriendRequests;                                            // 0x0100(0x0010) (Transient, NeedCtorLink)
	TArray<struct FOnlineFriend>                       FriendsData;                                               // 0x0110(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PsyNetGetPendingFriendRequests_X");
		return ptr;
	}


	void OnSuccess(TArray<struct FOnlineFriend>* MapLocal_B8A3911A40336EEECBEBE8AB88907190);
};

// Class ProjectX.RPC_GetKeys_X
// 0x005C (FullSize[0x01B6] - InheritedSize[0x015A])
class URPC_GetKeys_X : public URPC_KeysBase_X
{
public:
	unsigned char                                      UnknownDataPT88[0x4];                                      // 0x015C(0x0004) MISSED OFFSET
	struct FUniqueNetId                                PlayerID;                                                  // 0x0160(0x0038)
	unsigned char                                      bServerKey : 1;                                            // 0x0198(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataW3PE[0x2];                                      // 0x0198(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataKW8O[0x4];                                      // 0x019C(0x0004) MISSED OFFSET
	class UAddReservationMessage_X*                    Message;                                                   // 0x01A0(0x0008) (Transient)
	TScriptInterface<class UIReservationConnection_X>  Connection;                                                // 0x01A8(0x0010) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetKeys_X");
		return ptr;
	}


	class URPC_GetKeys_X* SetPlayer(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.__OnlinePlayerFriends_X__SearchForPlayerByName_A324035B4B0BCE38D151FE8235995BF3
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__OnlinePlayerFriends_X__SearchForPlayerByName_A324035B4B0BCE38D151FE8235995BF3 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataA62B[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__SearchForPlayerByName_A324035B4B0BCE38D151FE8235995BF3");
		return ptr;
	}


	void __OnlinePlayerFriends_X__SearchForPlayerByName_A324035B4B0BCE38D151FE8235995BF3(class URPC_PsyNetSearchPlayerByName_X* R);
};

// Class ProjectX.RPC_CheckKeys_X
// 0x0012 (FullSize[0x01C8] - InheritedSize[0x01B6])
class URPC_CheckKeys_X : public URPC_GetKeys_X
{
public:
	struct FString                                     KeyToCheck;                                                // 0x01B8(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CheckKeys_X");
		return ptr;
	}


	bool KeysMatch();
	class URPC_CheckKeys_X* SetKeyToCheck(const struct FString& InKey);
};

// Class ProjectX.NetModeSystem_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetModeSystem_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetModeSystem_X");
		return ptr;
	}


	void AddModes(TArray<class UClass*>* NetModes);
	void HandleDedicatedClient(class ANetModeReplicator_X* _, class UNetMode_Client* NetMode, TArray<class UClass*>* ArrayInitializer_0EE9437B424913E07E9BEEAAA60AB59D);
	void LevelUnloaded(class AWorldInfo* WorldInfo);
	void LevelLoaded(class AWorldInfo* WorldInfo, TArray<class UClass*>* ArrayInitializer_423FD7284A307A6B1B21F8B3860EEC0B, TArray<class UClass*>* ArrayInitializer_6D6D519D4887BCFA55D5FAA044E7687D, TArray<class UClass*>* ArrayInitializer_12AECF144F58C5F4F3AD959EC362E831, TArray<class UClass*>* ArrayInitializer_370FBFFF4F75E6D152118ABF040EF668);
};

// Class ProjectX.Platform_Console
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_Console : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_Console");
		return ptr;
	}


};

// Class ProjectX.RPC_PsyNetSearchPlayerByName_X
// 0x0084 (FullSize[0x0158] - InheritedSize[0x00D4])
class URPC_PsyNetSearchPlayerByName_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038)
	struct FString                                     PlayerName;                                                // 0x0138(0x0010) (NeedCtorLink)
	TArray<struct FOnlineFriend>                       Players;                                                   // 0x0148(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PsyNetSearchPlayerByName_X");
		return ptr;
	}


	class URPC_PsyNetSearchPlayerByName_X* SetSearchName(const struct FString& InPlayerName);
	class URPC_PsyNetSearchPlayerByName_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.Platform_DedicatedServer
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_DedicatedServer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_DedicatedServer");
		return ptr;
	}


};

// Class ProjectX.Platform_Dingo
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_Dingo : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_Dingo");
		return ptr;
	}


};

// Class ProjectX.RPC_GetGenericDataAll_X
// 0x003C (FullSize[0x0110] - InheritedSize[0x00D4])
class URPC_GetGenericDataAll_X : public URPC_X
{
public:
	TArray<struct FGetGenericDataAllData>              GenericData;                                               // 0x0100(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetGenericDataAll_X");
		return ptr;
	}


};

// Class ProjectX.Platform_GameClient
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_GameClient : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_GameClient");
		return ptr;
	}


};

// Class ProjectX.Platform_LanServer
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_LanServer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_LanServer");
		return ptr;
	}


};

// Class ProjectX.Platform_NNX
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_NNX : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_NNX");
		return ptr;
	}


};

// Class ProjectX.Platform_Orbis
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_Orbis : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_Orbis");
		return ptr;
	}


};

// Class ProjectX.MatchmakingMetrics_X
// 0x0014 (FullSize[0x0094] - InheritedSize[0x0080])
class UMatchmakingMetrics_X : public UMetricsGroup_X
{
public:
	float                                              StartTime;                                                 // 0x0080(0x0004)
	struct FGuid                                       MMGuid;                                                    // 0x0084(0x0010)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MatchmakingMetrics_X");
		return ptr;
	}


	void SendReservationRetryFail();
	void SendReservationRetrySuccess();
	void SendReservationRetry();
	void RankedReconnect(const struct FString& Address, const struct FGuid& MatchMakingGuid);
	void End(const struct FGuid& MatchMakingGuid);
	void FoundServer(const struct FString& Address, const struct FString& ServerName, int Playlist, const struct FString& ReservationID, bool bFromNotification, float ElapsedTime, const struct FGuid& MatchMakingGuid);
	void RecordFoundServer(struct FServerReservationData* Reservation, bool bFromNotification, const struct FGuid& MatchMakingGuid);
	void Cancel(float ElapsedTime, const struct FGuid& MatchMakingGuid);
	void RecordCancel(const struct FGuid& MatchMakingGuid);
	void ErrorID(int Error, const struct FGuid& MatchMakingGuid);
	void ErrorUnknown(const struct FString& Message, const struct FGuid& MatchMakingGuid);
	void RecordError(const struct FString& Error, const struct FGuid& MatchMakingGuid);
	void Start(TArray<class URegionPing_X*> Regions, TArray<int> Playlists, bool bDisableCrossPlay, bool bUseRecommendedRegions, const struct FGuid& MatchMakingGuid);
};

// Class ProjectX.RPC_GetPlayerTitles_X
// 0x0074 (FullSize[0x0148] - InheritedSize[0x00D4])
class URPC_GetPlayerTitles_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038) (PrivateWrite)
	TArray<struct FString>                             Titles;                                                    // 0x0138(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPlayerTitles_X");
		return ptr;
	}


	class URPC_GetPlayerTitles_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.Platform_PC
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_PC : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_PC");
		return ptr;
	}


};

// Class ProjectX.RetryDelayer_X
// 0x003E (FullSize[0x00AE] - InheritedSize[0x0070])
class URetryDelayer_X : public UComponent
{
public:
	TArray<float>                                      RetryDelays;                                               // 0x0070(0x0010) (Edit, NeedCtorLink)
	float                                              RepeatBackoff;                                             // 0x0080(0x0004) (Edit)
	int                                                RepeatCycleCount;                                          // 0x0084(0x0004) (Edit)
	unsigned char                                      bRepeatUntilSuccess : 1;                                   // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData3T34[0x2];                                      // 0x0088(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                FailedAttempts;                                            // 0x008C(0x0004)
	int                                                FailedCycles;                                              // 0x0090(0x0004)
	unsigned char                                      UnknownDataRJJG[0x4];                                      // 0x0094(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __RepeatedDelegate__Delegate;                              // 0x0098(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataY449[0xC];                                      // 0x0094(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __NotifyAbandondedDelegate__Delegate;                      // 0x00B0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataVL8C[0xC];                                      // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RetryDelayer_X");
		return ptr;
	}


	void Abandon();
	void ExecuteNextStep();
	void Cancel();
	void RetryOrAbandon();
	void Start(const struct FScriptDelegate& ToRepeat, const struct FScriptDelegate& Abandoned);
	void NotifyAbandondedDelegate();
	void RepeatedDelegate();
};

// Class ProjectX.RPC_GetStaticDataURL_X
// 0x003C (FullSize[0x0110] - InheritedSize[0x00D4])
class URPC_GetStaticDataURL_X : public URPC_X
{
public:
	struct FString                                     URL;                                                       // 0x0100(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetStaticDataURL_X");
		return ptr;
	}


};

// Class ProjectX.Platform_Server
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatform_Server : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Platform_Server");
		return ptr;
	}


};

// Class ProjectX.DSPendingMessage_X
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class UDSPendingMessage_X : public UObject
{
public:
	class UDSR_DSMessage_X*                            Message;                                                   // 0x0060(0x0008)
	float                                              ReceiveTime;                                               // 0x0068(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DSPendingMessage_X");
		return ptr;
	}


};

// Class ProjectX.DSR_DSMessage_X
// 0x0048 (FullSize[0x00D0] - InheritedSize[0x0088])
class UDSR_DSMessage_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PlayerID;                                                  // 0x0090(0x0010) (Transient, NeedCtorLink)
	struct FString                                     ReservationID;                                             // 0x00A0(0x0010) (Transient, NeedCtorLink)
	struct FString                                     MessageType;                                               // 0x00B0(0x0010) (Transient, NeedCtorLink)
	struct FString                                     MessagePayload;                                            // 0x00C0(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DSR_DSMessage_X");
		return ptr;
	}


};

// Class ProjectX.DSR_ClientMessage_X
// 0x0038 (FullSize[0x00C0] - InheritedSize[0x0088])
class UDSR_ClientMessage_X : public UPsyNetClientService_X
{
public:
	struct FString                                     ReservationID;                                             // 0x0090(0x0010) (Transient, NeedCtorLink)
	struct FString                                     MessageType;                                               // 0x00A0(0x0010) (Transient, NeedCtorLink)
	struct FString                                     MessagePayload;                                            // 0x00B0(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DSR_ClientMessage_X");
		return ptr;
	}


};

// Class ProjectX.RPC_RelayToServer_X
// 0x006C (FullSize[0x0140] - InheritedSize[0x00D4])
class URPC_RelayToServer_X : public URPC_X
{
public:
	struct FString                                     DSConnectToken;                                            // 0x0100(0x0010) (NeedCtorLink)
	struct FString                                     ReservationID;                                             // 0x0110(0x0010) (NeedCtorLink)
	struct FString                                     MessageType;                                               // 0x0120(0x0010) (NeedCtorLink)
	struct FString                                     MessagePayload;                                            // 0x0130(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RelayToServer_X");
		return ptr;
	}


};

// Class ProjectX.RPC_PsyNetReadFriends_X
// 0x004C (FullSize[0x0120] - InheritedSize[0x00D4])
class URPC_PsyNetReadFriends_X : public URPC_X
{
public:
	TArray<struct FPsyNetPersonaData>                  Friends;                                                   // 0x0100(0x0010) (Transient, NeedCtorLink)
	TArray<struct FOnlineFriend>                       FriendsData;                                               // 0x0110(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PsyNetReadFriends_X");
		return ptr;
	}


	void OnSuccess(TArray<struct FOnlineFriend>* MapLocal_E643E636424FC58ABA5F6883AC5E0649);
};

// Class ProjectX.__PsyNetBeacon_X__SendMessageToClients_D85595A3446D8272839D71A046ABB354
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__PsyNetBeacon_X__SendMessageToClients_D85595A3446D8272839D71A046ABB354 : public UObject
{
public:
	class UPsyNetBeaconConnection_X*                   Connection;                                                // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetBeacon_X__SendMessageToClients_D85595A3446D8272839D71A046ABB354");
		return ptr;
	}


	bool __PsyNetBeacon_X__SendMessageToClients_D85595A3446D8272839D71A046ABB354(class URPC_RelayToClient_X* OtherRPC);
};

// Class ProjectX.RPC_RelayToClient_X
// 0x006E (FullSize[0x0142] - InheritedSize[0x00D4])
class URPC_RelayToClient_X : public URPC_X
{
public:
	TArray<struct FString>                             PlayerIDs;                                                 // 0x0100(0x0010) (NeedCtorLink)
	struct FString                                     ReservationID;                                             // 0x0110(0x0010) (NeedCtorLink)
	struct FString                                     MessageType;                                               // 0x0120(0x0010) (NeedCtorLink)
	struct FString                                     MessagePayload;                                            // 0x0130(0x0010) (NeedCtorLink)
	unsigned char                                      AllowPartialSuccess : 1;                                   // 0x0140(0x0001) BIT_FIELD
	unsigned char                                      UnknownData2O5Z[0x2];                                      // 0x0140(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RelayToClient_X");
		return ptr;
	}


};

// Class ProjectX.RPC_ReportLowFPS_X
// 0x005C (FullSize[0x0130] - InheritedSize[0x00D4])
class URPC_ReportLowFPS_X : public URPC_X
{
public:
	struct FString                                     IP;                                                        // 0x0100(0x0010) (NeedCtorLink, PrivateWrite)
	int                                                MachineId;                                                 // 0x0110(0x0004) (PrivateWrite)
	unsigned char                                      UnknownDataXWHU[0x4];                                      // 0x0114(0x0004) MISSED OFFSET
	unsigned char                                      UnknownDataMM1M[0x8];                                      // 0x0114(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_ReportLowFPS_X.serverId
	struct FString                                     ServerName;                                                // 0x0120(0x0010) (NeedCtorLink, PrivateWrite)
	int                                                NumHumans;                                                 // 0x0130(0x0004) (PrivateWrite)
	int                                                NumBots;                                                   // 0x0134(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ReportLowFPS_X");
		return ptr;
	}


	class URPC_ReportLowFPS_X* SetNumBots(int InNumBots);
	class URPC_ReportLowFPS_X* SetNumHumans(int InNumHumans);
	class URPC_ReportLowFPS_X* SetServerName(const struct FString& InServerName);
	class URPC_ReportLowFPS_X* SetServerID();
	class URPC_ReportLowFPS_X* SetMachineID(int InMachineID);
	class URPC_ReportLowFPS_X* SetIP(const struct FString& InIP);
};

// Class ProjectX.__OnlinePlayerFriends_X__UnblockPlayer_36F7267F49AB1353A558618DFD4D06D9
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__OnlinePlayerFriends_X__UnblockPlayer_36F7267F49AB1353A558618DFD4D06D9 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataXPY4[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__UnblockPlayer_36F7267F49AB1353A558618DFD4D06D9");
		return ptr;
	}


	void __OnlinePlayerFriends_X__UnblockPlayer_0767FE2C43F8013573542FBF5A83448C(class URPC_UnblockPlayer_X* RPC);
	void __OnlinePlayerFriends_X__UnblockPlayer_36F7267F49AB1353A558618DFD4D06D9(class URPC_UnblockPlayer_X* RPC);
};

// Class ProjectX.PlatformSystem_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPlatformSystem_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlatformSystem_X");
		return ptr;
	}


	void AddPlatforms(TArray<class UClass*>* Platforms);
	void AddServer(class UClass* PlatformClass, TArray<class UClass*>* ArrayInitializer_A4887DCA475AF47C9B58728CF8F5127A);
	void AddConsole(class UClass* PlatformClass, TArray<class UClass*>* ArrayInitializer_02B4F28D4571176DEDAE4CB7334C7E20);
	void Init(class UGameEngine* Engine, TArray<class UClass*>* ArrayInitializer_1329F7434B3AE08A929280A9CE8564B6);
};

// Class ProjectX.GRI_X
// 0x02EA (FullSize[0x05BC] - InheritedSize[0x02D2])
class AGRI_X : public AGameReplicationInfo
{
public:
	int                                                ReplicatedGamePlaylist;                                    // 0x02D8(0x0004) (Net, Transient, RepNotify, PrivateWrite)
	int                                                ReplicatedGameMutatorIndex;                                // 0x02DC(0x0004) (Net, Transient, RepNotify, PrivateWrite)
	struct FReplicatedReservationData                  Reservations[0x8];                                         // 0x02E0(0x0050) (Net, Transient, NeedCtorLink, RepNotify, PrivateWrite)
	unsigned char                                      UnknownDataKNYR[0x8];                                      // 0x0560(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.GRI_X.GameServerID
	unsigned char                                      bGameStarted : 1;                                          // 0x0568(0x0001) BIT_FIELD (Net, Transient, RepNotify, PrivateWrite)
	unsigned char                                      UnknownDataH5SQ[0x2];                                      // 0x0568(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bGameEnded : 1;                                            // 0x0568(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData3TOY[0x2];                                      // 0x056C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData9MQW[0x4];                                      // 0x056C(0x0004) MISSED OFFSET
	struct FString                                     MatchGUID;                                                 // 0x0570(0x0010) (Net, NeedCtorLink, RepNotify, PrivateWrite)
	struct FScriptDelegate                             __EventSpawned__Delegate;                                  // 0x0580(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData0A1Q[0xC];                                      // 0x0580(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventGameDataSelected__Delegate;                         // 0x0598(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataS9WI[0xC];                                      // 0x0598(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventReservationsUpdated__Delegate;                      // 0x05B0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataWWGP[0xC];                                      // 0x05B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventServerNameChanged__Delegate;                        // 0x05C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataS9PC[0xC];                                      // 0x05C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventGameStarted__Delegate;                              // 0x05E0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataUS6K[0xC];                                      // 0x05E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMatchGUIDChanged__Delegate;                         // 0x05F8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5TOT[0xC];                                      // 0x05F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GRI_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetMatchGUID(const struct FString& Id);
	void HandleMatchGUIDChanged(class UOnlineGameDedicatedServer_X* OnlineGameDS);
	bool IsPlaylistRanked();
	class UGameSettingPlaylist_X* GetPlaylist();
	bool PlayerIsInCurrentGame(const struct FUniqueNetId& MemberId);
	struct FString GetReservationDebugString(const struct FReplicatedReservationData& Data);
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicated();
	class UOnlineGame_Base_X* GetOnlineGameBase();
	class UOnlineGame_X* GetOnlineGame();
	bool HasSelectedGameData();
	void SetGameStarted();
	void SetOfflineGameData(const struct FName& PlaylistName);
	void NotifyOnGameDataSelected(const struct FScriptDelegate& Callback);
	void SetGameData(int NewPlaylistID, int MutatorIndex);
	void HandleGamePlaylistSet(class UOnlineGameDedicatedServer_X* DedicatedServer);
	void OnReservationsUpdated();
	void SetReservations(TArray<struct FReplicatedReservationData> InReservations, struct FReplicatedReservationData* StructInitializer_0FB735CD43630DAEBFA193993A082F0B);
	struct FReplicatedReservationData ConvertReservation(const struct FReservationData& Data, struct FReplicatedReservationData* StructInitializer_88C208D2428901FD4B99A885391A8B2D);
	void UpdateReservations(TArray<struct FReplicatedReservationData>* MapLocal_54A3EC104058B613204A7C9B000DC396);
	void ReplicatedEvent(const struct FName& VarName);
	void PostBeginPlay();
	void EventMatchGUIDChanged(class AGRI_X* GRI);
	void EventGameStarted(class AGRI_X* GRI);
	void EventServerNameChanged(class AGRI_X* GRI);
	void EventReservationsUpdated(class AGRI_X* GRI);
	void EventGameDataSelected(int PlaylistId, int MutatorIndex);
	void EventSpawned(class AGRI_X* GRI);
};

// Class ProjectX.RPC_UnblockPlayer_X
// 0x0064 (FullSize[0x0138] - InheritedSize[0x00D4])
class URPC_UnblockPlayer_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UnblockPlayer_X");
		return ptr;
	}


	class URPC_UnblockPlayer_X* SetUnblockedPlayerId(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.RPC_SetPlayerSkill_X
// 0x003C (FullSize[0x0110] - InheritedSize[0x00D4])
class URPC_SetPlayerSkill_X : public URPC_X
{
public:
	int                                                Playlist;                                                  // 0x0100(0x0004) (PrivateWrite)
	float                                              Mu;                                                        // 0x0104(0x0004) (PrivateWrite)
	float                                              Sigma;                                                     // 0x0108(0x0004) (PrivateWrite)
	int                                                MatchesPlayed;                                             // 0x010C(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetPlayerSkill_X");
		return ptr;
	}


	class URPC_SetPlayerSkill_X* SetSigma(float InSigma);
	class URPC_SetPlayerSkill_X* SetMu(float InMu);
	class URPC_SetPlayerSkill_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.PsyNetService_DSReservation_X
// 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
class UPsyNetService_DSReservation_X : public UPsyNetClientService_X
{
public:
	struct FPsyNetBeaconReservation                    Reservation;                                               // 0x0090(0x0028) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_DSReservation_X");
		return ptr;
	}


};

// Class ProjectX.ContentConfig_X
// 0x0012 (FullSize[0x0088] - InheritedSize[0x0076])
class UContentConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FContentPair>                        ContentMap;                                                // 0x0078(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ContentConfig_X");
		return ptr;
	}


	void Undo();
	void Apply();
	bool EncryptedKeyIndexIsValid(const struct FEncryptedKeyIndex& KeyIndex);
	struct FEncryptedKeyIndex FindKeyIndex(const struct FName& ContentKeyName);
	void UndoNative();
	void ApplyNative();
};

// Class ProjectX.__OnlinePlayerFriends_X__BlockPlayer_BB5E043D4D80C721C2D0FBB764D7D754
// 0x0034 (FullSize[0x0094] - InheritedSize[0x0060])
class U__OnlinePlayerFriends_X__BlockPlayer_BB5E043D4D80C721C2D0FBB764D7D754 : public UObject
{
public:
	struct FString                                     BlockedPlayerName;                                         // 0x0060(0x0010) (NeedCtorLink)
	struct FPsyTag                                     BlockedTag;                                                // 0x0070(0x0018) (NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                  // 0x0088(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataPVN8[0xC];                                      // 0x0088(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__BlockPlayer_BB5E043D4D80C721C2D0FBB764D7D754");
		return ptr;
	}


	void __OnlinePlayerFriends_X__BlockPlayer_590DB70648445F343E51798261A4688A(class URPC_BlockPlayer_X* RPC);
	void __OnlinePlayerFriends_X__BlockPlayer_BB5E043D4D80C721C2D0FBB764D7D754(class URPC_BlockPlayer_X* RPC, struct FOnlineFriend* StructInitializer_7D0E80004A46BC6C7CAA9F9FB892F930);
};

// Class ProjectX.PlayerController_X
// 0x00DA (FullSize[0x0822] - InheritedSize[0x0748])
class APlayerController_X : public APlayerController
{
public:
	class ACamera*                                     CameraArchetype;                                           // 0x07B8(0x0008) (Edit)
	class AHUD*                                        HUDArchetype;                                              // 0x07C0(0x0008) (Edit)
	class APawn*                                       OldPawnReference;                                          // 0x07C8(0x0008) (Transient)
	class AActor*                                      LockedDebugActor;                                          // 0x07D0(0x0008) (Transient)
	unsigned char                                      bPausedForExternalUI : 1;                                  // 0x07D8(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataBSFD[0x2];                                      // 0x07D8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataO1F7[0x4];                                      // 0x07DC(0x0004) MISSED OFFSET
	class UNetConnection*                              NetConnection;                                             // 0x07E0(0x0008) (Transient, PrivateWrite)
	struct FScriptDelegate                             __EventReceivedPRI__Delegate;                              // 0x07E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataFMYA[0xC];                                      // 0x07E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPawnChange__Delegate;                               // 0x0800(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataELSL[0xC];                                      // 0x0800(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventReceivedPlayer__Delegate;                           // 0x0818(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData1Q4U[0xC];                                      // 0x0818(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDestroyed__Delegate;                                // 0x0830(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataYC73[0xC];                                      // 0x0830(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerCameraChange__Delegate;                       // 0x0848(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataEMEQ[0xC];                                      // 0x0848(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlayerController_X");
		return ptr;
	}


	void ToggleDebugCamera();
	void DebugCrosshair();
	void DebugKill();
	void DebugKillAllExcept();
	bool GetAutoAimTarget(class AActor** HitActor, struct FVector* HitLoc);
	void __PlayerController_X__ReceivedPlayer_EA9A4B764E3C955390235FABE630C648(class UObject* _);
	void ClientSetSeasonReward(const struct FPlayerSeasonRewardProgress& Reward);
	void ServerUpdateCustomMatchSettings(const struct U_Types_X_FCustomMatchSettings& Settings);
	void ServerSetParty(const struct FUniqueNetId& MemberId, const struct FUniqueNetId& NewPartyID);
	void DisconnectSplitScreenPlayer(class UPlayer* P);
	void ServerDestroy();
	void KickPlayerForReason(const struct FString& Reason, const struct FString& Title);
	void ClientNetLag(float PktLag, float PktVariance, float PktLoss, float PktDup, float PktSpike);
	void ServerNetLag(float PktLag, float PktVariance, float PktLoss, float PktDup, float PktSpike);
	void Pause();
	void RemoveOptionFromLastURL(const struct FString& OptName);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void ClearOnlineDelegates();
	void RegisterOnlineDelegates();
	void ClientPlayForceFeedbackWaveform(class UForceFeedbackWaveform* FFWaveform, class AActor* FFWaveformInstigator);
	void ClientCommand(const struct FString& Command);
	void ServerCommand(const struct FString& Command);
	void UnPossess();
	void Possess(class APawn* aPawn);
	void OnPawnChange(class APawn* OldPawn, class APawn* NewPawn);
	void PawnReferenceUpdated();
	void ClientRestart(class APawn* NewPawn);
	void GivePawn(class APawn* NewPawn);
	void InitInputSystem();
	class ACamera* GetCameraArchetype();
	void SpawnPlayerCamera();
	void SetPlayerCamera(class ACamera* NewCamera);
	void AddCheats(bool bForce);
	class UOnlineGameAccount_X* GetOnlineAccount();
	class UOnlinePlayer_X* GetOnlinePlayer();
	void OnReceivedPlayerAndPRI();
	void InitPlayerReplicationInfo();
	void Destroyed();
	void OnExternalUIChanged(bool bIsOpening);
	void SetPaused(bool bPaused);
	void ReceivedPlayer();
	class UOnlineGame_X* GetOnlineGame();
	TScriptInterface<class UIOnlineGameHost_X> GetOnlineGameHost();
	class UOnlineGameLanServer_X* GetOnlineGameLanServer();
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicatedServer();
	void SpawnDefaultHUD();
	void SetPRI(class APlayerReplicationInfo* PRI);
	void ReplicatedEvent(const struct FName& VarName);
	void EventPlayerCameraChange(class APlayerController_X* PC);
	void EventDestroyed(class APlayerController_X* PC);
	void EventReceivedPlayer(class APlayerController_X* PC);
	void EventPawnChange(class APlayerController_X* PC, class APawn* OldPawn, class APawn* NewPawn);
	void EventReceivedPRI(class APlayerController_X* PC);
};

// Class ProjectX.DecodeObject_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UDecodeObject_X : public UObject
{
public:
	int                                                Checksum;                                                  // 0x0060(0x0004) (ProtectedWrite)
	unsigned char                                      UnknownDataVMOP[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	class UError*                                      Error;                                                     // 0x0068(0x0008) (ProtectedWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DecodeObject_X");
		return ptr;
	}


	void Decode(class UObject* OutObj);
};

// Class ProjectX.RPC_BlockPlayer_X
// 0x0064 (FullSize[0x0138] - InheritedSize[0x00D4])
class URPC_BlockPlayer_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_BlockPlayer_X");
		return ptr;
	}


	class URPC_BlockPlayer_X* SetBlockedPlayerId(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.RPC_SetPlayerSkillTier_X
// 0x0038 (FullSize[0x010C] - InheritedSize[0x00D4])
class URPC_SetPlayerSkillTier_X : public URPC_X
{
public:
	int                                                Playlist;                                                  // 0x0100(0x0004) (PrivateWrite)
	int                                                Tier;                                                      // 0x0104(0x0004) (PrivateWrite)
	int                                                MatchesPlayed;                                             // 0x0108(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetPlayerSkillTier_X");
		return ptr;
	}


	class URPC_SetPlayerSkillTier_X* SetMatchesPlayed(int InMatchesPlayed);
	class URPC_SetPlayerSkillTier_X* SetTier(int InTier);
	class URPC_SetPlayerSkillTier_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.__OnlinePlayerFriends_X__DownloadBlockedListAttempt_09D6692D40ACE442C889AAB92E940D89
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__OnlinePlayerFriends_X__DownloadBlockedListAttempt_09D6692D40ACE442C889AAB92E940D89 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataV4MZ[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__DownloadBlockedListAttempt_09D6692D40ACE442C889AAB92E940D89");
		return ptr;
	}


	void __OnlinePlayerFriends_X__DownloadBlockedListAttempt_09D6692D40ACE442C889AAB92E940D89(class URPC_GetBlockList_X* RPC);
};

// Class ProjectX.__OnlinePlayerFriends_X__DownloadBlockedList_7FF80CD440E5753B7ED9AB95C657E97E
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__OnlinePlayerFriends_X__DownloadBlockedList_7FF80CD440E5753B7ED9AB95C657E97E : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData6WZ8[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__DownloadBlockedList_7FF80CD440E5753B7ED9AB95C657E97E");
		return ptr;
	}


	void __OnlinePlayerFriends_X__DownloadBlockedList_9F4B90624F7ED2D7D045C7BC3B15564D();
	void __OnlinePlayerFriends_X__DownloadBlockedList_7FF80CD440E5753B7ED9AB95C657E97E();
};

// Class ProjectX.DecodeObjectJson_X
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UDecodeObjectJson_X : public UDecodeObject_X
{
public:
	class UJSONSerializer_X*                           JsonSerializer;                                            // 0x0070(0x0008) (PrivateWrite)
	struct FString                                     Stream;                                                    // 0x0078(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DecodeObjectJson_X");
		return ptr;
	}


	void Decode(class UObject* OutObj);
	class UDecodeObjectJson_X* SetStream(struct FString* InStream);
};

// Class ProjectX.DecodeObjectTypes_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UDecodeObjectTypes_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DecodeObjectTypes_X");
		return ptr;
	}


};

// Class ProjectX.OnlineMessageComponent_X
// 0x002C (FullSize[0x009C] - InheritedSize[0x0070])
class UOnlineMessageComponent_X : public UComponent
{
public:
	class USerializer_X*                               Serializer;                                                // 0x0070(0x0008) (Edit)
	class UCompression_X*                              Compressor;                                                // 0x0078(0x0008) (Edit)
	TArray<struct FOnlineMessageHandler>               MessageHandlers;                                           // 0x0080(0x0010) (Const, Transient, NeedCtorLink)
	struct FScriptDelegate                             __MessageReceivedDelegate__Delegate;                       // 0x0090(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataQS6I[0xC];                                      // 0x0090(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineMessageComponent_X");
		return ptr;
	}


	class UOnlineMessageComponent_X* EnableCompression(bool bEnabled);
	class UOnlineMessageComponent_X* SetSerializer(class USerializer_X* InSerializer);
	void InvokeHandlers(class UObject* Message);
	class UObject* DeserializeMessage(TArray<unsigned char>* Data, class UObject* MessageOuter);
	bool SerializeMessage(class UObject* Message, TArray<unsigned char>* OutData);
	class UOnlineMessage_X* CreateMessage(class UClass* MessageClass, class UObject* MessageOuter);
	void RemoveMessageHandler(const struct FScriptDelegate& Callback);
	void AddMessageHandler(class UClass* MessageClass, const struct FScriptDelegate& Callback);
	void MessageReceivedDelegate(class UOnlineMessageComponent_X* Component, class UObject* Message);
};

// Class ProjectX.DecodeObjectUObject_X
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UDecodeObjectUObject_X : public UDecodeObject_X
{
public:
	class UObjectSerializer_X*                         ObjectSerializer;                                          // 0x0070(0x0008) (PrivateWrite)
	TArray<unsigned char>                              Stream;                                                    // 0x0078(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DecodeObjectUObject_X");
		return ptr;
	}


	void Decode(class UObject* OutObj);
	class UDecodeObjectUObject_X* SetStream(struct FString* InStream, int RequestChecksum);
};

// Class ProjectX.LanMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class ULanMessage_X : public UOnlineMessage_X
{
public:
	unsigned char                                      UnknownDataE1Z8[0x8];                                      // 0x0060(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.LanMessage_X.Nonce


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanMessage_X");
		return ptr;
	}


	bool Broadcast();
	class ULanMessage_X* SetNonce();
};

// Class ProjectX.EncodeObject_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UEncodeObject_X : public UObject
{
public:
	TEnumAsByte<EObjectEncoding>                       Encoding;                                                  // 0x0060(0x0001) (PrivateWrite)
	unsigned char                                      UnknownDataO2F5[0x3];                                      // 0x0061(0x0003) MISSED OFFSET
	int                                                Checksum;                                                  // 0x0064(0x0004) (ProtectedWrite)
	struct FString                                     Encoded;                                                   // 0x0068(0x0010) (NeedCtorLink, ProtectedWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EncodeObject_X");
		return ptr;
	}


};

// Class ProjectX.CheatManager_X
// 0x000C (FullSize[0x008C] - InheritedSize[0x0080])
class UCheatManager_X : public UCheatManager
{
public:
	struct FScriptDelegate                             __EventDelegateTest__Delegate;                             // 0x0080(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataSRHU[0xC];                                      // 0x0080(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CheatManager_X");
		return ptr;
	}


	void HandleImageDownloaded(const struct FOnlineImageDownload& Image);
	void DownloadImage(const struct FString& URL, TArray<struct FString>* ArrayInitializer_98814BCD4414F0B7D8A4618C3551EF8C);
	void RandomSleep(float MinDelay, float MaxDelay, float MinSleep, float MaxSleep);
	void Sleep(float Seconds);
	void LoadKismetLevel(const struct FName& LeveFileName);
	void DrawBulletContacts(float LifeTime);
	void PrintReproPhysics(const struct FString& Command, class AActor* A);
	void ReproPhysics(class AActor* A, float LX, float LY, float LZ, float RX, float RY, float RZ, float RW, float VX, float VY, float VZ, float AX, float AY, float AZ);
	void DisableCCD();
	void SimulateInputKey(const struct FName& KeyName);
	void SetNetServerMaxTickRate(float Rate);
	void ScreenShotDir(const struct FString& Directory);
	void ListVisiblePrimitives();
	void HideVisiblePrimitives(const struct FString& NameMatch, const struct FString& NameIgnore);
	void ToggleReplicateVoiceToSelf();
	void ToggleReplicateVoiceToSender();
	void ShutdownCheatManager();
	void InitCheatManager();
	void EventDelegateTest();
};

// Class ProjectX.CheatObject_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UCheatObject_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CheatObject_X");
		return ptr;
	}


};

// Class ProjectX.EncodeObjectJson_X
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UEncodeObjectJson_X : public UEncodeObject_X
{
public:
	class UJSONSerializer_X*                           JsonSerializer;                                            // 0x0078(0x0008) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EncodeObjectJson_X");
		return ptr;
	}


	class UEncodeObject_X* Encode(class UObject* inObj);
};

// Class ProjectX.RPC_GetPlayerPermissions_X
// 0x004C (FullSize[0x0120] - InheritedSize[0x00D4])
class URPC_GetPlayerPermissions_X : public URPC_X
{
public:
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                 // 0x0100(0x0010) (NeedCtorLink)
	TArray<struct FPlayerPermissionsReponse>           PlayerPermissions;                                         // 0x0110(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPlayerPermissions_X");
		return ptr;
	}


	bool GetPermissionFromString(const struct FName& PermissionName, TEnumAsByte<EOnlinePlayerPermission>* Permission);
	TArray<TEnumAsByte<EOnlinePlayerPermission>> ConvertPermissions(TArray<struct FName> PermissionNames);
	struct FPlayerPermissionsList ConvertPlayerPermissions(const struct FUniqueNetId& PlayerID);
	TArray<struct FPlayerPermissionsList> GetPlayerPermissions(TArray<struct FPlayerPermissionsList>* MapLocal_1DBF02A646FE4F42F801E8B36AC9897B);
	class URPC_GetPlayerPermissions_X* SetPlayers(TArray<struct FUniqueNetId>* InPlayerIDs);
};

// Class ProjectX.LanMessage_HostQuery_X
// 0x009E (FullSize[0x00FE] - InheritedSize[0x0060])
class ULanMessage_HostQuery_X : public ULanMessage_X
{
public:
	struct U_Types_X_FCustomMatchSettings              Filter;                                                    // 0x0068(0x0090) (NeedCtorLink)
	int                                                BuildID;                                                   // 0x00F8(0x0004)
	unsigned char                                      bHost : 1;                                                 // 0x00FC(0x0001) BIT_FIELD
	unsigned char                                      UnknownData5H5P[0x2];                                      // 0x00FC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanMessage_HostQuery_X");
		return ptr;
	}


	class ULanMessage_HostQuery_X* SetHost(bool bValue);
	class ULanMessage_HostQuery_X* SetBuildID(int InBuildID);
	class ULanMessage_HostQuery_X* SetFilter(const struct U_Types_X_FCustomMatchSettings& InFilter);
};

// Class ProjectX.EncodeObjectUObject_X
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UEncodeObjectUObject_X : public UEncodeObject_X
{
public:
	class UObjectSerializer_X*                         ObjectSerializer;                                          // 0x0078(0x0008) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EncodeObjectUObject_X");
		return ptr;
	}


	class UEncodeObject_X* Encode(class UObject* inObj);
};

// Class ProjectX.PauseStaticDataSync_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPauseStaticDataSync_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PauseStaticDataSync_X");
		return ptr;
	}


};

// Class ProjectX.EncodeObjectTypes_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UEncodeObjectTypes_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EncodeObjectTypes_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetStaticDataMetrics_X
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UPsyNetStaticDataMetrics_X : public UMetricsGroup_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetStaticDataMetrics_X");
		return ptr;
	}


	void SyncDataTime(float Seconds);
	void SyncUrlTime(float Seconds);
};

// Class ProjectX.____OnlineGameParty_X__UpdatePartyInfo_9092DC7B403E7F13E3976E8CDE22665E____OnlineGameParty_X__UpdatePartyInfo_9092DC7B403E7F13E3976E8CDE22665E_3BEA6205474F5781851B948D20E993FE
// 0x0118 (FullSize[0x0178] - InheritedSize[0x0060])
class U____OnlineGameParty_X__UpdatePartyInfo_9092DC7B403E7F13E3976E8CDE22665E____OnlineGameParty_X__UpdatePartyInfo_9092DC7B403E7F13E3976E8CDE22665E_3BEA6205474F5781851B948D20E993FE : public UObject
{
public:
	struct FPartyMember                                PM;                                                        // 0x0060(0x0118) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.____OnlineGameParty_X__UpdatePartyInfo_9092DC7B403E7F13E3976E8CDE22665E____OnlineGameParty_X__UpdatePartyInfo_9092DC7B403E7F13E3976E8CDE22665E_3BEA6205474F5781851B948D20E993FE");
		return ptr;
	}


	bool ____OnlineGameParty_X__UpdatePartyInfo_9092DC7B403E7F13E3976E8CDE22665E____OnlineGameParty_X__UpdatePartyInfo_9092DC7B403E7F13E3976E8CDE22665E_3BEA6205474F5781851B948D20E993FE(const struct FLobbyMember& LM);
};

// Class ProjectX.PsyNetServiceProvider_X
// 0x002C (FullSize[0x008C] - InheritedSize[0x0060])
class UPsyNetServiceProvider_X : public UObject
{
public:
	class UPsyNetClientServiceCollection_X*            ServiceCollection;                                         // 0x0060(0x0008) (PrivateWrite)
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                             // 0x0068(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	TArray<class UPsyNetChannel_X*>                    Channels;                                                  // 0x0070(0x0010) (NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventServiceExecuted__Delegate;                          // 0x0080(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataHYEP[0xC];                                      // 0x0080(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetServiceProvider_X");
		return ptr;
	}


	void FinalizeServiceTask(class UPsyNetClientService_X* Service, class UTAsyncResult__PsyNetClientService_X* Task, class UError* Error);
	void PrintServiceResult(const struct FString& ServiceName, class UError* Error);
	class UTAsyncResult__PsyNetClientService_X* ExecuteServiceMessage(class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Message);
	bool IsServiceRequest(class UPsyNetMessage_X* Message);
	class UTAsyncResult__PsyNetClientService_X* ExecuteNotification(class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Message);
	void SetResponse(class UPsyNetClientService_X* Service, class UError* Error, class UPsyNetMessage_X* Response);
	class UTAsyncResult__PsyNetClientService_X* ExecuteRequest(class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Request, class UPsyNetMessage_X* Response);
	void HandleChannelClosed(class UPsyNetChannel_X* Channel);
	class UPsyNetChannel_X* CreateChannel(const struct FString& ChannelName);
	void Unsubscribe(const struct FScriptDelegate& Callback);
	void Subscribe(class UClass* ServiceClass, const struct FScriptDelegate& Callback);
	void Construct();
	void EventServiceExecuted(class UPsyNetServiceProvider_X* ServiceProvider, class UPsyNetClientService_X* Service);
};

// Class ProjectX.ColorPalette_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UColorPalette_X : public UObject
{
public:
	int                                                DefaultId;                                                 // 0x0060(0x0004) (Edit)
	int                                                HueCount;                                                  // 0x0064(0x0004) (Edit, Const, EditConst)
	int                                                ValueCount;                                                // 0x0068(0x0004) (Edit, Const, EditConst)
	unsigned char                                      UnknownDataVXXN[0x4];                                      // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FLinearColor>                        Colors;                                                    // 0x0070(0x0010) (Edit, Const, EditConst, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ColorPalette_X");
		return ptr;
	}


	int IntColorToID(int ColorInt);
	int IdToColorInt(int ColorID);
	struct FColorPosition GetColorPosition(int ColorID);
	struct FLinearColor GetValidColor(const struct FLinearColor& InColor);
	int GetClosestID(const struct FLinearColor& InColor);
	struct FLinearColor GetColor(int ColorID);
};

// Class ProjectX.Stopwatch
// 0x0004 (FullSize[0x0074] - InheritedSize[0x0070])
class UStopwatch : public UComponent
{
public:
	float                                              StartTime;                                                 // 0x0070(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Stopwatch");
		return ptr;
	}


	float Elapsed();
	void Start();
};

// Class ProjectX.PsyConfigResponse
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UPsyConfigResponse : public UObject
{
public:
	struct FString                                     URL;                                                       // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyConfigResponse");
		return ptr;
	}


};

// Class ProjectX.SetPlayerStorageResult_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class USetPlayerStorageResult_X : public UObject
{
public:
	TArray<struct FSetPlayerStorageResultItem>         Items;                                                     // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SetPlayerStorageResult_X");
		return ptr;
	}


};

// Class ProjectX.LanMessage_HostResponse_X
// 0x00D8 (FullSize[0x0138] - InheritedSize[0x0060])
class ULanMessage_HostResponse_X : public ULanMessage_X
{
public:
	struct FServerResult                               Result;                                                    // 0x0068(0x00B0) (NeedCtorLink)
	struct FString                                     serverId;                                                  // 0x0118(0x0010) (NeedCtorLink)
	struct FString                                     MetaData;                                                  // 0x0128(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanMessage_HostResponse_X");
		return ptr;
	}


	struct FString GetDebugString();
	class ULanMessage_HostResponse_X* SetMetaData(const struct FString& InMetaData);
	class ULanMessage_HostResponse_X* SetServerID(const struct FString& InServerID);
	class ULanMessage_HostResponse_X* SetResult(const struct FServerResult& InResult);
};

// Class ProjectX.__PsyNetStaticData_X__SyncURL_PsyConfig_94E49A13459839C16C61C29934A365A5
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__PsyNetStaticData_X__SyncURL_PsyConfig_94E49A13459839C16C61C29934A365A5 : public UObject
{
public:
	class UWebRequest_X*                               Request;                                                   // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetStaticData_X__SyncURL_PsyConfig_94E49A13459839C16C61C29934A365A5");
		return ptr;
	}


	void __PsyNetStaticData_X__SyncURL_PsyConfig_94E49A13459839C16C61C29934A365A5(const struct FString& Key, const struct FString& Value);
};

// Class ProjectX.Compression_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UCompression_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Compression_X");
		return ptr;
	}


	bool Uncompress(TArray<unsigned char>* Compressed, TArray<unsigned char>* Uncompressed);
	bool Compress(TArray<unsigned char>* Uncompressed, TArray<unsigned char>* Compressed);
};

// Class ProjectX.LanMessage_Ping_X
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class ULanMessage_Ping_X : public ULanMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanMessage_Ping_X");
		return ptr;
	}


};

// Class ProjectX.RPC_ClientGetStaticDataURL_X
// 0x0020 (FullSize[0x0130] - InheritedSize[0x0110])
class URPC_ClientGetStaticDataURL_X : public URPC_GetStaticDataURL_X
{
public:
	struct FString                                     Platform;                                                  // 0x0110(0x0010) (NeedCtorLink)
	struct FString                                     Language;                                                  // 0x0120(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ClientGetStaticDataURL_X");
		return ptr;
	}


	class URPC_ClientGetStaticDataURL_X* Init(const struct FString& InPlatform, const struct FString& InLanguage);
};

// Class ProjectX.RPC_PlayerStorageSet_X
// 0x007C (FullSize[0x0150] - InheritedSize[0x00D4])
class URPC_PlayerStorageSet_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038)
	TArray<struct FSetPlayerStorageRequestItem>        Items;                                                     // 0x0138(0x0010) (NeedCtorLink)
	class USetPlayerStorageResult_X*                   Result;                                                    // 0x0148(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PlayerStorageSet_X");
		return ptr;
	}


	class UObject* GetResponseObject();
};

// Class ProjectX.__PsyNetStaticData_X__SyncURL_RPC_11897E9B406B341DD4D9A483009A3298
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__PsyNetStaticData_X__SyncURL_RPC_11897E9B406B341DD4D9A483009A3298 : public UObject
{
public:
	class URPC_GetStaticDataURL_X*                     RPC;                                                       // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetStaticData_X__SyncURL_RPC_11897E9B406B341DD4D9A483009A3298");
		return ptr;
	}


	void __PsyNetStaticData_X__SyncURL_RPC_11897E9B406B341DD4D9A483009A3298(class URPC_X* _);
};

// Class ProjectX.ControlPreset_X
// 0x0034 (FullSize[0x0094] - InheritedSize[0x0060])
class UControlPreset_X : public UObject
{
public:
	TArray<struct FPlayerBinding>                      PCBindings;                                                // 0x0060(0x0010) (Config, NeedCtorLink, PrivateWrite)
	TArray<struct FPlayerBinding>                      GamepadBindings;                                           // 0x0070(0x0010) (Config, NeedCtorLink, PrivateWrite)
	unsigned char                                      bRemovedPCOverrides : 1;                                   // 0x0080(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataR445[0x2];                                      // 0x0080(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bRemovedGamepadOverrides : 1;                              // 0x0080(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataR0VU[0x2];                                      // 0x0084(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData9YQR[0x4];                                      // 0x0084(0x0004) MISSED OFFSET
	TArray<struct FPlayerBinding>                      SteamInputBindings;                                        // 0x0088(0x0010) (Config, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ControlPreset_X");
		return ptr;
	}


	TArray<struct FPlayerBinding> GetGamepadBindings();
	TArray<struct FPlayerBinding> GetPCBindings();
};

// Class ProjectX.LensFlareComponent_X
// 0x0092 (FullSize[0x033C] - InheritedSize[0x02AA])
class ULensFlareComponent_X : public ULensFlareComponent
{
public:
	unsigned char                                      UnknownData3FVI[0x4];                                      // 0x02BC(0x0004) MISSED OFFSET
	struct FPointer                                    VfTable_IISetParameter;                                    // 0x02C0(0x0008) (Const, Native, NoExport)
	struct FRawDistributionFloat                       AlphaOverTime;                                             // 0x02C8(0x0028) (Edit, Component, NeedCtorLink)
	struct FRawDistributionVector                      ColorOverTime;                                             // 0x02F0(0x0028) (Edit, Component, NeedCtorLink)
	TArray<struct FLensFlareFloatParamCurve>           MaterialFloatParamValuesOverTime;                          // 0x0318(0x0010) (Edit, Component, NeedCtorLink)
	struct FName                                       SourceColorParamName;                                      // 0x0328(0x0008) (Edit, Const)
	struct FName                                       SourceColorAlphaParamName;                                 // 0x0330(0x0008) (Edit, Const)
	float                                              AttachTime;                                                // 0x0338(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LensFlareComponent_X");
		return ptr;
	}


	void SetActorParameter(const struct FName& Key, class AActor* Value);
	void SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value);
	void SetVectorParameter(const struct FName& Key, const struct FVector& Value);
	void SetFloatParameter(const struct FName& Key, float Value);
	void SetNameParameter(const struct FName& Key, const struct FName& Value);
};

// Class ProjectX.CrashReport_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UCrashReport_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CrashReport_X");
		return ptr;
	}


	void HandleHttpRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bSuccess);
};

// Class ProjectX.RPC_AddPlayerToRole_X
// 0x0030 (FullSize[0x0104] - InheritedSize[0x00D4])
class URPC_AddPlayerToRole_X : public URPC_X
{
public:
	int                                                RoleID;                                                    // 0x0100(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_AddPlayerToRole_X");
		return ptr;
	}


	class URPC_AddPlayerToRole_X* SetRole(TEnumAsByte<EOnlinePlayerRole> Role);
};

// Class ProjectX.MatchEndedMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UMatchEndedMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MatchEndedMessage_X");
		return ptr;
	}


};

// Class ProjectX.CRC_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UCRC_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CRC_X");
		return ptr;
	}


	int CrcBytes(TArray<unsigned char>* Bytes);
	int CrcString(const struct FString& Text);
};

// Class ProjectX.RPC_RemovePlayerFromRole_X
// 0x0030 (FullSize[0x0104] - InheritedSize[0x00D4])
class URPC_RemovePlayerFromRole_X : public URPC_X
{
public:
	int                                                RoleID;                                                    // 0x0100(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RemovePlayerFromRole_X");
		return ptr;
	}


	class URPC_RemovePlayerFromRole_X* SetRole(TEnumAsByte<EOnlinePlayerRole> Role);
};

// Class ProjectX.CycleLog_X
// 0x001C (FullSize[0x008C] - InheritedSize[0x0070])
class UCycleLog_X : public UComponent
{
public:
	int                                                MaxLogs;                                                   // 0x0070(0x0004) (Edit)
	unsigned char                                      UnknownDataR32D[0x4];                                      // 0x0074(0x0004) MISSED OFFSET
	TArray<struct FString>                             Logs;                                                      // 0x0078(0x0010) (Transient, NeedCtorLink)
	int                                                LogIndex;                                                  // 0x0088(0x0004) (Const, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CycleLog_X");
		return ptr;
	}


	void AllLogs(struct FString* S);
};

// Class ProjectX.DistributionFloatShakeParameter_X
// 0x0000 (FullSize[0x00A1] - InheritedSize[0x00A1])
class UDistributionFloatShakeParameter_X : public UDistributionFloatParameterBase
{
public:
	unsigned char                                      UnknownDataJ2OP[0x7];                                      // 0x00A1(0x0007) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DistributionFloatShakeParameter_X");
		return ptr;
	}


};

// Class ProjectX.RPC_SetSeasonReward_X
// 0x0034 (FullSize[0x0108] - InheritedSize[0x00D4])
class URPC_SetSeasonReward_X : public URPC_X
{
public:
	int                                                SeasonLevel;                                               // 0x0100(0x0004)
	int                                                SeasonLevelWins;                                           // 0x0104(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetSeasonReward_X");
		return ptr;
	}


	class URPC_SetSeasonReward_X* SetReward(int Level, int Wins);
};

// Class ProjectX.OnlineGameLanReservations_X
// 0x0022 (FullSize[0x009A] - InheritedSize[0x0078])
class UOnlineGameLanReservations_X : public UOnline_X
{
public:
	class ULanBeacon_X*                                LanBeacon;                                                 // 0x0078(0x0008) (ExportObject, Component, EditInline)
	class UReservationBeacon_X*                        Beacon;                                                    // 0x0080(0x0008) (ExportObject, Component, EditInline)
	float                                              ReservationTimeout;                                        // 0x0088(0x0004) (Edit)
	unsigned char                                      bServerTraveling : 1;                                      // 0x008C(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData79S9[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventReservationsTimeout__Delegate;                      // 0x0090(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataI82M[0xC];                                      // 0x0090(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameLanReservations_X");
		return ptr;
	}


	void HandleReservationDisconnected(class UTcpConnection* Connection);
	void HackForceNotServerTravelling();
	void SetServerTraveling(bool bTraveling);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	int GetNumPlayers();
	void AllowPlayerLogin(const struct FString& Options, const struct FUniqueNetId& PlayerID, struct FString* ErrorMessage);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void Reset();
	void CheckReservationTimeout();
	bool HandlePublicReservation(class UTcpConnection* Connection, class UAddReservationMessagePublic_X* Message);
	void HandlePublicReservationMessage(class UTcpConnection* Connection, class UObject* Message);
	void StartReservationTimeout();
	bool HandlePrivateReservation(class UTcpConnection* Connection, class UAddReservationMessagePrivate_X* Message);
	void HandlePrivateReservationMessage(class UTcpConnection* Connection, class UObject* Message);
	void HandlePingMessage(class UTcpConnection* Connection, class UObject* Message);
	void HandleLanQueryMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void OnInit();
	void EventReservationsTimeout();
};

// Class ProjectX.PlayerInput_X
// 0x0118 (FullSize[0x03F4] - InheritedSize[0x02DC])
class UPlayerInput_X : public UPlayerInput
{
public:
	float                                              GamepadDeadzone;                                           // 0x02F8(0x0004) (Config)
	unsigned char                                      UnknownData2185[0x4];                                      // 0x02FC(0x0004) MISSED OFFSET
	TArray<struct FGamepadDeadzoneSettings>            GamepadDeadzones;                                          // 0x0300(0x0010) (Config, NeedCtorLink)
	float                                              KeyboardAxisBlendTime;                                     // 0x0310(0x0004) (Config)
	unsigned char                                      UnknownData7RF3[0x4];                                      // 0x0314(0x0004) MISSED OFFSET
	TArray<struct FKeyboardAxisBlendSettings>          KeyboardAxisBlendTimes;                                    // 0x0318(0x0010) (Config, NeedCtorLink)
	struct FName                                       CurrentKey;                                                // 0x0328(0x0008) (Const, Transient)
	struct FName                                       ActiveDPadButton;                                          // 0x0330(0x0008) (Const, Transient)
	struct FName                                       LastDoubleTapKey;                                          // 0x0338(0x0008) (Const, Transient)
	TArray<struct FName>                               DisabledActions;                                           // 0x0340(0x0010) (Const, Transient, NeedCtorLink)
	TArray<struct FName>                               DisabledActionsUntilNextUse;                               // 0x0350(0x0010) (Const, Transient, NeedCtorLink)
	TArray<struct FBindingAction>                      Actions;                                                   // 0x0360(0x0010) (NeedCtorLink)
	class UControlPreset_X*                            ControlPreset;                                             // 0x0370(0x0008)
	TArray<struct FPlayerBinding>                      PCBindings;                                                // 0x0378(0x0010) (Config, NeedCtorLink)
	TArray<struct FPlayerBinding>                      GamepadBindings;                                           // 0x0388(0x0010) (Config, NeedCtorLink)
	TArray<struct FPlayerBinding>                      SteamInputBindings;                                        // 0x0398(0x0010) (Config, NeedCtorLink)
	float                                              TapTime;                                                   // 0x03A8(0x0004) (Config)
	float                                              DoubleTapTime;                                             // 0x03AC(0x0004) (Config)
	TArray<struct FPointer>                            HeldBindings;                                              // 0x03B0(0x0010) (Native, Transient)
	unsigned char                                      bDebugInput : 1;                                           // 0x03C0(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataSA0V[0x2];                                      // 0x03C0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAbsorbCurrentKeyPress : 1;                                // 0x03C0(0x0001) BIT_FIELD (Const, Transient)
	unsigned char                                      UnknownDataUV7B[0x2];                                      // 0x03C4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataD265[0x4];                                      // 0x03C4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownDataJT39[0x50];                                     // 0x03C4(0x0050) UNKNOWN PROPERTY: MapProperty ProjectX.PlayerInput_X.RawAxisValues
	struct FScriptDelegate                             __EventActionToggled__Delegate;                            // 0x0418(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataN7JG[0xC];                                      // 0x0418(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventBindingsChanged__Delegate;                          // 0x0430(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataBGYY[0xC];                                      // 0x0430(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSetBindingsToUserBindings__Delegate;                // 0x0448(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData1JDE[0xC];                                      // 0x0448(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventInitialized__Delegate;                              // 0x0460(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataI9SD[0xC];                                      // 0x0460(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlayerInput_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FName GetKeyForActionArray(const struct FName& Action, TArray<struct FPlayerBinding>* PlayerBindings);
	void AbsorbCurrentKeyPress();
	void SetBindings(TArray<struct FPlayerBinding>* PC, TArray<struct FPlayerBinding>* Gamepad);
	void ClearDisableActionUntilNextUseList();
	void DisableActionUntilNextUse(const struct FName& ActionName);
	void ClearDisabledActions();
	void RemoveFromDisabledActions(const struct FName& ActionName);
	void AddToDisabledActions(const struct FName& ActionName);
	void ReleaseKey(const struct FName& Key, bool bTriggerEvents);
	struct FString GetUIKey(const struct FName& KeyName);
	void ShutdownInputSystem();
	void InitInputSystem();
	void ResetInput();
	float GetRawSplitAxisValue(const struct FName& AxisNegative, const struct FName& AxisPositive);
	float GetRawAxisValue(const struct FName& AxisName);
	void SetControlPreset(const struct FName& PresetName);
	void ResetActiveBindingsToProfileBindings();
	void ResetBindingsToDefault();
	void EventInitialized(class UPlayerInput_X* PlayerInput);
	void EventSetBindingsToUserBindings(class UPlayerInput_X* PlayerInput);
	void EventBindingsChanged(class UPlayerInput_X* PlayerInput);
	void EventActionToggled(class UPlayerInput_X* PlayerInput, const struct FName& ActionName, bool bEnabled);
};

// Class ProjectX.EffectsMap_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UEffectsMap_X : public UObject
{
public:
	TArray<struct FEffectsMapping>                     Effects;                                                   // 0x0060(0x0010) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EffectsMap_X");
		return ptr;
	}


	struct FEffectsMapping GetEffects(class UPhysicalMaterial* PhysMat);
};

// Class ProjectX.BugMetrics_X
// 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
class UBugMetrics_X : public UMetricsGroup_X
{
public:
	TArray<struct FName>                               ReportedIDs;                                               // 0x0080(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BugMetrics_X");
		return ptr;
	}


	void Report(const struct FName& Id, const struct FString& Details, const struct FString& Trace);
	void BugReport(const struct FName& Id, const struct FString& Details);
	void StaticReport(const struct FName& Id, const struct FString& Details);
};

// Class ProjectX.MaterialEffect_X
// 0x0038 (FullSize[0x00C8] - InheritedSize[0x0090])
class UMaterialEffect_X : public UMaterialEffect
{
public:
	struct FName                                       TimeParamName;                                             // 0x0090(0x0008) (Edit)
	float                                              FadeInTime;                                                // 0x0098(0x0004) (Edit)
	float                                              FadeInFalloff;                                             // 0x009C(0x0004) (Edit)
	float                                              FadeOutTime;                                               // 0x00A0(0x0004) (Edit)
	float                                              FadeOutFalloff;                                            // 0x00A4(0x0004) (Edit)
	float                                              ActiveTime;                                                // 0x00A8(0x0004) (Edit)
	float                                              ValueMin;                                                  // 0x00AC(0x0004) (Edit)
	float                                              ValueMax;                                                  // 0x00B0(0x0004) (Edit)
	unsigned char                                      UnknownDataLYHM[0x4];                                      // 0x00B4(0x0004) MISSED OFFSET
	class UMaterialInstanceConstant*                   MatInst;                                                   // 0x00B8(0x0008) (Transient)
	TEnumAsByte<EMaterialEffectStage>                  Stage;                                                     // 0x00C0(0x0001) (Transient)
	unsigned char                                      UnknownDataZG5V[0x3];                                      // 0x00C1(0x0003) MISSED OFFSET
	float                                              StageTime;                                                 // 0x00C4(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MaterialEffect_X");
		return ptr;
	}


	struct FString GetActiveEffects();
	bool HasAnyEffectsActive();
	float GetMaterialParameterValue(const struct FName& MaterialParamName);
	void SetMaterialParameterLinearColorValue(const struct FName& MaterialParamName, const struct FLinearColor& NewValue);
	void SetMaterialParameterValue(const struct FName& MaterialParamName, float NewValue);
	void HandleParametersChanged();
	void UpdateFade(float Alpha);
	void SetStage(TEnumAsByte<EMaterialEffectStage> NewStage);
	bool Tick(float dt);
	void End();
	void Start();
	void Init();
	bool IsInitialized();
};

// Class ProjectX.Parties_X
// 0x01CE (FullSize[0x022E] - InheritedSize[0x0060])
class UParties_X : public UObject
{
public:
	struct FActiveLobbyInfo                            ActiveLobby;                                               // 0x0060(0x0030) (NeedCtorLink, ProtectedWrite)
	struct FUniqueLobbyId                              LastActiveLobby;                                           // 0x0090(0x0010) (PrivateWrite)
	struct FUniqueNetId                                PartyLeaderID;                                             // 0x00A0(0x0038) (PrivateWrite)
	class UPsyNet_X*                                   PsyNet;                                                    // 0x00D8(0x0008)
	class UOnlineGameParty_X*                          OnlineGameParty;                                           // 0x00E0(0x0008)
	class UPartyMessageQueue_X*                        MessageQueue;                                              // 0x00E8(0x0008) (Edit, ExportObject, Component, EditInline)
	class UPsyNetConnection_X*                         PsyNetConnection;                                          // 0x00F0(0x0008) (PrivateWrite)
	class UPsyNetChannel_X*                            PsyNetChannel;                                             // 0x00F8(0x0008) (PrivateWrite)
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                             // 0x0100(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UPartyPlatformSession_X*                     PlatformSession;                                           // 0x0108(0x0008) (PrivateWrite)
	class UPartySequence_CreateParty_X*                SequenceCreateParty;                                       // 0x0110(0x0008) (PrivateWrite)
	class UPartySequence_JoinParty_X*                  SequenceJoinParty;                                         // 0x0118(0x0008) (PrivateWrite)
	class UPartySequence_LeaveParty_X*                 SequenceLeaveParty;                                        // 0x0120(0x0008) (PrivateWrite)
	class UPartySequence_InviteToParty_X*              SequenceInviteToParty;                                     // 0x0128(0x0008) (PrivateWrite)
	unsigned char                                      bRejoiningParty : 1;                                       // 0x0130(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataZ1VW[0x2];                                      // 0x0130(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              SecondToWaitForPerConReconnect;                            // 0x0134(0x0004) (Edit)
	struct FString                                     PartySetting_PsyNetPartyId;                                // 0x0138(0x0010) (Edit, NeedCtorLink)
	struct FString                                     PartySetting_JoinKey;                                      // 0x0148(0x0010) (Edit, NeedCtorLink)
	struct FScriptDelegate                             __EventShowInviteUI__Delegate;                             // 0x0158(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7TEW[0xC];                                      // 0x0158(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLobbyInviteComplete__Delegate;                      // 0x0170(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5S13[0xC];                                      // 0x0170(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCreateLobbyComplete__Delegate;                         // 0x0188(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataHQPZ[0xC];                                      // 0x0188(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyError__Delegate;                                  // 0x01A0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataV1X5[0xC];                                      // 0x01A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbySessionCreated__Delegate;                         // 0x01B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataW0YL[0xC];                                      // 0x01B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFindLobbiesComplete__Delegate;                         // 0x01D0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataFU2N[0xC];                                      // 0x01D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnJoinLobbyComplete__Delegate;                           // 0x01E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData73NE[0xC];                                      // 0x01E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbySettingsUpdate__Delegate;                         // 0x0200(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataPTQ9[0xC];                                      // 0x0200(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyMemberSettingsUpdate__Delegate;                   // 0x0218(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataTCHD[0xC];                                      // 0x0218(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyMemberStatusUpdate__Delegate;                     // 0x0230(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataRVY4[0xC];                                      // 0x0230(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyReceiveMessage__Delegate;                         // 0x0248(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataV7FH[0xC];                                      // 0x0248(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyReceiveBinaryData__Delegate;                      // 0x0260(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData99IA[0xC];                                      // 0x0260(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyJoinGame__Delegate;                               // 0x0278(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData09C8[0xC];                                      // 0x0278(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyInvite__Delegate;                                 // 0x0290(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataDKRN[0xC];                                      // 0x0290(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLobbyInvitePending__Delegate;                       // 0x02A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01YC[0xC];                                      // 0x02A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLobbyDestroyed__Delegate;                              // 0x02C0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataEWOY[0xC];                                      // 0x02C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPartyChatRecieved__Delegate;                        // 0x02D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData9PGS[0xC];                                      // 0x02D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnHostStartPlayTogether__Delegate;                       // 0x02F0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataTUOB[0xC];                                      // 0x02F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Parties_X");
		return ptr;
	}


	void __Parties_X__CreateLobby_B8B899B945A82EC81B4BE8B9EC99898E(class UError* Error, struct FUniqueLobbyId* StructInitializer_5F00FBB44C3F8097C4454EA225D8B4EC);
	void __Parties_X__HandlePsyNetPartyJoined_564240DF4AE30448F2BDA1A601D06971(const struct FPsyNetPartyMember& Member);
	void __Parties_X__SetLobbyOwner_46E56EDC4F624668E0844F877009339D(class URPC_PartyChangeOwner_X* RPC);
	int __Parties_X__HandlePartyInfoSuccess_3E68C7A34B5C917575D6BEB08A741D5C(const struct FPartyInvite& L, const struct FPartyInvite& R);
	void HandlePsyNetPartyInviteAccepted(const struct FString& PartyID, struct FUniqueNetId* StructInitializer_3C8C1F4B4A45D6B8687551B4E134B2A6);
	struct FString GetPsyNetPartyID();
	struct FUniqueNetId FindPartyLeaderID(TArray<struct FPsyNetPartyMember>* Members, struct FUniqueNetId* StructInitializer_B0CE55EB4E88DF9B5CE18AA3EDE0B8A5);
	void HandleOwnerChanged(class UPsyNetService_PartyOwnerChanged_X* Notification);
	void HandleChatNotification(class UPsyNetService_PartyChat_X* Notifications);
	void HandleSystemNotification(class UPsyNetService_PartySystem_X* Notifications);
	void HandleUserKicked(class UPsyNetService_PartyUserKicked_X* Notification);
	void HandleUserDisconnected(class UPsyNetService_PartyUserDisconnected_X* Notification);
	void HandleUserLeft(class UPsyNetService_PartyUserLeft_X* Notification);
	void HandleUserJoined(class UPsyNetService_PartyUserJoined_X* Notification);
	void HandleMemberStatusUpdate(const struct FUniqueNetId& MemberUID, const struct FString& Status);
	void HandleUserInvitedResponse(const struct FUniqueLobbyId& LobbyId, const struct FUniqueNetId& ForUserId, bool bAccepted);
	void HandleUserInvited(class UPsyNetService_PartyUserInvited_X* Notifications);
	void SetRejoiningParty(bool bRejoining);
	void HandleChannelClosed(class UPsyNetChannel_X* InChannel);
	class UPsyNetChannel_X* CreatePsyNetChannel(const struct FUniqueLobbyId& PsyNetPartyId);
	void SetPsyNetSubscriptions(class UPsyNetServiceSubscriptions_X* InSubscriptions);
	void SetPsyNetChannel(class UPsyNetChannel_X* InChannel);
	void TimeoutPerconReconnect();
	void SetPsyNetConnection(class UPsyNetConnection_X* InConnection);
	void ClearLobbyData(struct FActiveLobbyInfo* StructInitializer_59702ACF44F3188EE7B354B85CD1F3A7);
	void DestroyLobby(TEnumAsByte<ELobbyKickReason> Reason);
	void HandlePerConDisconnected(class UPsyNetConnection_X* Connection);
	void HandlePerConConnected(class UPsyNetConnection_X* Connection);
	void HandlePartyInfoFail(class URPC_X* RPC);
	void HandlePartyInfoSuccess(class URPC_PartyInfo_X* RPC_PartyInfo, TArray<struct FPartyInvite>* FilterLocal_1500B82D4CC5F66F8A13949977C2FCAB, TArray<struct FPartyInvite>* SortLocal_3E3773404FA7A1127ABEE49A57696700);
	void GetPartyInfo();
	class UOnlinePlayer_X* GetPrimaryPlayer();
	bool IsInLobby();
	struct FUniqueLobbyId CreatePsyNetPartyID(const struct FString& S, struct FUniqueLobbyId* StructInitializer_D84507D347B4AEF0BFF57DA8A7920944);
	void ClearHostStartPlayTogetherDelegate(const struct FScriptDelegate& InDelegate);
	void AddHostStartPlayTogetherDelegate(const struct FScriptDelegate& InDelegate);
	void OnHostStartPlayTogether(unsigned char LocalUserNum);
	int FindMemberId(struct FLobbyMember* MemberData);
	int PlayerIdToMemberId(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID, int* MemberIndex);
	struct FUniqueNetId MemberIdToPlayerId(struct FUniqueLobbyId* LobbyId, int MemberId, int* MemberIndex);
	bool KickPlayer(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID, TEnumAsByte<ELobbyKickReason> Reason);
	bool ShowInviteUI(unsigned char LocalUserNum, struct FUniqueLobbyId* LobbyId);
	bool InviteToPsyNetLobbyExclusively(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
	bool InviteToLobby(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
	bool CanInviteToLobby(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
	bool InviteToActiveLobby(struct FUniqueNetId* PlayerID);
	bool SetLobbyOwner(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* NewOwnerId);
	bool SetLobbyLock(struct FUniqueLobbyId* LobbyId, bool bLocked);
	bool SetLobbyType(struct FUniqueLobbyId* LobbyId, TEnumAsByte<ELobbyVisibility> Type);
	bool SetLobbyServer(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* ServerUID, const struct FString& ServerIP);
	bool RemoveLobbySetting(struct FUniqueLobbyId* LobbyId, const struct FString& Key);
	bool SetLobbySetting(struct FUniqueLobbyId* LobbyId, const struct FString& Key, const struct FString& Value);
	bool GetLobbyAdmin(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* AdminId);
	bool SendLobbyBinaryData(struct FUniqueLobbyId* LobbyId, TArray<unsigned char>* Data);
	bool SendLobbyMessage(struct FUniqueLobbyId* LobbyId, const struct FString& Message);
	bool SetLobbyUserSetting(struct FUniqueLobbyId* LobbyId, const struct FString& Key, const struct FString& Value);
	bool LeaveLobby(struct FUniqueLobbyId* LobbyId);
	void RemoveLobbyMember(const struct FUniqueNetId& PlayerUID);
	void AddLobbyMember(const struct FUniqueNetId& PlayerUID, const struct FString& Username, struct FLobbyMember* StructInitializer_72F0DEDC4FE0D747FE83169EF15DE86D);
	void HandleLobbyJoinFailed(class UError* InError, struct FActiveLobbyInfo* StructInitializer_E20BB13B41CC1328B1D90F97F27488F3, struct FUniqueLobbyId* StructInitializer_C057DF0A445F0448DE28649A1B0B1662);
	void HandlePsyNetPartyJoined(const struct FUniqueLobbyId& PsyNetPartyId, TArray<struct FPsyNetPartyMember>* Members);
	void HandlePsyNetPartyCreated(const struct FUniqueLobbyId& PsyNetPartyId, TArray<struct FPsyNetPartyMember>* Members);
	bool JoinLobbyWithKey(const struct FString& PsyNetPartyId, const struct FString& JoinKey);
	bool JoinLobby(int LocalPlayerNum, struct FUniqueLobbyId* LobbyId);
	bool UpdateFoundLobbies(const struct FUniqueLobbyId& LobbyId);
	int FindMemberIndex(const struct FUniqueNetId& MemberId);
	bool FindLobbies(int MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int MinSlots, TEnumAsByte<ELobbyDistance> Distance);
	bool CreateLobby(int LocalPlayerNum, int MaxPlayers, TEnumAsByte<ELobbyVisibility> Type, TArray<struct FLobbyMetaData> InitialSettings);
	void EventPartyChatRecieved(const struct FUniqueNetId& PlayerID, const struct FString& Text);
	void ClearLobbyDestroyedDelegate(const struct FScriptDelegate& LobbyDestroyedDelegate);
	void AddLobbyDestroyedDelegate(const struct FScriptDelegate& LobbyDestroyedDelegate);
	void OnLobbyDestroyed(struct FUniqueLobbyId* LobbyId, TEnumAsByte<ELobbyKickReason> Reason);
	void RemoveLocalPlayerFromSession(struct FUniqueNetId* PartyMember);
	void AddLocalPartyMemberToSession(struct FUniqueNetId* NewPartyMember);
	bool GetLobbyMembers(struct FUniqueLobbyId* LobbyId, TArray<struct FLobbyMember>* Members);
	void PlayTogether_Invite(struct FUniqueLobbyId* LobbyId, const struct FString& InviteMessage);
	void EventLobbyInvitePending(const struct FUniqueLobbyId& LobbyId, const struct FUniqueNetId& FromUserId, const struct FString& FromUserName);
	void ClearLobbyInviteDelegate(const struct FScriptDelegate& LobbyInviteDelegate);
	void AddLobbyInviteDelegate(const struct FScriptDelegate& LobbyInviteDelegate);
	void OnLobbyInvite(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* FriendId, bool bAccepted);
	void ClearLobbyJoinGameDelegate(const struct FScriptDelegate& LobbyJoinGameDelegate);
	void AddLobbyJoinGameDelegate(const struct FScriptDelegate& LobbyJoinGameDelegate);
	void OnLobbyJoinGame(struct FActiveLobbyInfo* LobbyInfo, struct FUniqueNetId* serverId, const struct FString& ServerIP);
	void TriggerLobbyReceiveBinaryDataDelegate(int MemberIndex, TArray<unsigned char> Data);
	void ClearLobbyReceiveBinaryDataDelegate(const struct FScriptDelegate& LobbyReceiveBinaryDataDelegate);
	void AddLobbyReceiveBinaryDataDelegate(const struct FScriptDelegate& LobbyReceiveBinaryDataDelegate);
	void OnLobbyReceiveBinaryData(struct FActiveLobbyInfo* LobbyInfo, int MemberIndex, TArray<unsigned char>* Data);
	void ClearLobbyReceiveMessageDelegate(const struct FScriptDelegate& LobbyReceiveMessageDelegate);
	void AddLobbyReceiveMessageDelegate(const struct FScriptDelegate& LobbyReceiveMessageDelegate);
	void OnLobbyReceiveMessage(struct FActiveLobbyInfo* LobbyInfo, int MemberIndex, const struct FString& Type, const struct FString& Message);
	void ClearLobbyMemberStatusUpdateDelegate(const struct FScriptDelegate& LobbyMemberStatusUpdateDelegate);
	void AddLobbyMemberStatusUpdateDelegate(const struct FScriptDelegate& LobbyMemberStatusUpdateDelegate);
	void TriggerLobbyMemberStatusUpdateDelegates(int MemberIndex, int InstigatorIndex, const struct FString& Status);
	void OnLobbyMemberStatusUpdate(struct FActiveLobbyInfo* LobbyInfo, int MemberIndex, int InstigatorIndex, const struct FString& Status);
	void ClearLobbyMemberSettingsUpdateDelegate(const struct FScriptDelegate& LobbyMemberSettingsUpdateDelegate);
	void AddLobbyMemberSettingsUpdateDelegate(const struct FScriptDelegate& LobbyMemberSettingsUpdateDelegate);
	void OnLobbyMemberSettingsUpdate(struct FActiveLobbyInfo* LobbyInfo, int MemberIndex);
	void ClearLobbySettingsUpdateDelegate(const struct FScriptDelegate& LobbySettingsUpdateDelegate);
	void AddLobbySettingsUpdateDelegate(const struct FScriptDelegate& LobbySettingsUpdateDelegate);
	void OnLobbySettingsUpdate(struct FActiveLobbyInfo* LobbyInfo);
	void ClearJoinLobbyCompleteDelegate(const struct FScriptDelegate& JoinLobbyCompleteDelegate);
	void AddJoinLobbyCompleteDelegate(const struct FScriptDelegate& JoinLobbyCompleteDelegate);
	void OnJoinLobbyComplete(bool bWasSuccessful, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyId, const struct FString& Error);
	void ClearFindLobbiesCompleteDelegate(const struct FScriptDelegate& FindLobbiesCompleteDelegate);
	void AddFindLobbiesCompleteDelegate(const struct FScriptDelegate& FindLobbiesCompleteDelegate);
	void OnFindLobbiesComplete(bool bWasSuccessful, TArray<struct FBasicLobbyInfo>* LobbyList);
	void ClearLobbySessionCreatedDelegate(const struct FScriptDelegate& LobbySessionCreatedDelegate);
	void AddLobbySessionCreatedDelegate(const struct FScriptDelegate& LobbySessionCreatedDelegate);
	void OnLobbySessionCreated();
	void ClearLobbyErrorDelegate(const struct FScriptDelegate& LobbyErrorDelegate);
	void AddLobbyErrorDelegate(const struct FScriptDelegate& LobbyErrorDelegate);
	void OnLobbyError(const struct FString& Error);
	void ClearCreateLobbyCompleteDelegate(const struct FScriptDelegate& CreateLobbyCompleteDelegate);
	void AddCreateLobbyCompleteDelegate(const struct FScriptDelegate& CreateLobbyCompleteDelegate);
	void OnCreateLobbyComplete(bool bWasSuccessful, struct FUniqueLobbyId* LobbyId, const struct FString& Error);
	void OnExit();
	void Init();
	void Construct();
	void EventLobbyInviteComplete(bool bSucceeded, const struct FUniqueNetId& InviteeID, const struct FString& Error);
	void EventShowInviteUI();
};

// Class ProjectX.RPC_PartyCreate_X
// 0x00A2 (FullSize[0x0176] - InheritedSize[0x00D4])
class URPC_PartyCreate_X : public URPC_X
{
public:
	unsigned char                                      bForcePartyonix : 1;                                       // 0x0100(0x0001) BIT_FIELD
	unsigned char                                      UnknownData37XA[0x2];                                      // 0x0100(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataXORJ[0x4];                                      // 0x0104(0x0004) MISSED OFFSET
	struct FPsyNetPartyInfo                            Info;                                                      // 0x0108(0x0060) (Transient, NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Members;                                                   // 0x0168(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyCreate_X");
		return ptr;
	}


	class URPC_PartyCreate_X* SetRequirePsyNetParty(bool bValue);
};

// Class ProjectX.RPC_PartyJoin_X
// 0x0080 (FullSize[0x0190] - InheritedSize[0x0110])
class URPC_PartyJoin_X : public URPC_PartyBase_X
{
public:
	struct FString                                     JoinID;                                                    // 0x0110(0x0010) (NeedCtorLink)
	struct FPsyNetPartyInfo                            Info;                                                      // 0x0120(0x0060) (Transient, NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Members;                                                   // 0x0180(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyJoin_X");
		return ptr;
	}


	class URPC_PartyBase_X* SetJoinKey(const struct FString& InJoinKey);
};

// Class ProjectX.RPC_PartyLeave_X
// 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
class URPC_PartyLeave_X : public URPC_PartyBase_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyLeave_X");
		return ptr;
	}


};

// Class ProjectX.EngineShare_X
// 0x00AE (FullSize[0x010E] - InheritedSize[0x0060])
class UEngineShare_X : public UEngineShare
{
public:
	class UOnlineGame_Base_X*                          OnlineGame;                                                // 0x0060(0x0008) (Transient, PrivateWrite)
	class ULocalCache_X*                               LocalCache;                                                // 0x0068(0x0008) (Transient, PrivateWrite)
	struct FString                                     ArchetypeString_OnlineGame;                                // 0x0070(0x0010) (Edit, Const, NeedCtorLink)
	struct FString                                     ArchetypeString_OnlineGameDedicatedServer;                 // 0x0080(0x0010) (Edit, Const, NeedCtorLink)
	struct FString                                     ArchetypeString_OnlineGameLanServer;                       // 0x0090(0x0010) (Edit, Const, NeedCtorLink)
	unsigned char                                      bDisableSaving : 1;                                        // 0x00A0(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataFIWW[0x2];                                      // 0x00A0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIsShowingLoadmapMovie : 1;                                // 0x00A0(0x0001) BIT_FIELD (Const, Transient)
	unsigned char                                      UnknownDataWSW0[0x2];                                      // 0x00A4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bUndocked : 1;                                             // 0x00A0(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownData85NH[0x2];                                      // 0x00A4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataOC0A[0x4];                                      // 0x00A4(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventPreExit__Delegate;                                  // 0x00A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataVAQM[0xC];                                      // 0x00A4(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLoadingMovieClosed__Delegate;                       // 0x00C0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData854R[0xC];                                      // 0x00C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPreScriptsReloaded__Delegate;                       // 0x00D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataMH3V[0xC];                                      // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPostScriptsReloaded__Delegate;                      // 0x00F0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5K1W[0xC];                                      // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventOnlineGameInitialized__Delegate;                    // 0x0108(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData4OJX[0xC];                                      // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPreLoadMap__Delegate;                               // 0x0120(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData0QC6[0xC];                                      // 0x0120(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPostLoadMap__Delegate;                              // 0x0138(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData3LUO[0xC];                                      // 0x0138(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventCrashed__Delegate;                                  // 0x0150(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataEW81[0xC];                                      // 0x0150(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventUndockedChanged__Delegate;                          // 0x0168(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData8KGK[0xC];                                      // 0x0168(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EngineShare_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void PreExit();
	bool IsRequestingExit();
	struct FString GetUserAgentHeader();
	struct FString GetRegionString();
	struct FString GetPlatformString();
	bool ConfigGetString(const struct FString& SectionName, const struct FString& KeyName, struct FString* OutValue);
	bool ParseCommandlineString(const struct FString& Param, struct FString* OutValue);
	bool ParseCommandlineQWORD(const struct FString& Param);
	bool ParseCommandlineFloat(const struct FString& Param, float* OutValue);
	bool ParseCommandlineInt(const struct FString& Param, int* OutValue);
	bool ParseCommandlineParam(const struct FString& Param);
	void InitOnlineGame(class UOnlineSubsystem* NewOnlineSubsystem);
	bool IsUsingNullRHI();
	bool IsAuthoritative();
	bool IsNetServer();
	bool IsNetClient();
	bool IsHeadlessGameClient();
	bool IsGameClient();
	bool IsLanServer();
	bool IsDedicatedServer();
	void EventUndockedChanged();
	void EventCrashed();
	void EventPostLoadMap();
	void EventPreLoadMap(const struct FString& MapName);
	void EventOnlineGameInitialized();
	void EventPostScriptsReloaded();
	void EventPreScriptsReloaded();
	void EventLoadingMovieClosed();
	void EventPreExit();
};

// Class ProjectX.TAsyncResult__array_LanServerRecord_X
// 0x0068 (FullSize[0x0104] - InheritedSize[0x009C])
class UTAsyncResult__array_LanServerRecord_X : public UAsyncTask
{
public:
	TArray<class ULanServerRecord_X*>                  Result;                                                    // 0x00D0(0x0010) (NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventResult__Delegate;                                   // 0x00E0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData1GT9[0xC];                                      // 0x00E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                           // 0x00F8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataQ5XT[0xC];                                      // 0x00F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                                // 0x0110(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData1PXF[0xC];                                      // 0x0110(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TAsyncResult__array_LanServerRecord_X");
		return ptr;
	}


	class UTAsyncResult__array_LanServerRecord_X* CreateResultError(class UError* InError);
	class UTAsyncResult__array_LanServerRecord_X* CreateResult(TArray<class ULanServerRecord_X*> InResult);
	class UTAsyncResult__array_LanServerRecord_X* Copy();
	void ClearCallbacks();
	class UTAsyncResult__array_LanServerRecord_X* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class UTAsyncResult__array_LanServerRecord_X* SetResult(TArray<class ULanServerRecord_X*> InResult, class UError* InError);
	class UTAsyncResult__array_LanServerRecord_X* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class UTAsyncResult__array_LanServerRecord_X* NotifyOnResult(const struct FScriptDelegate& Callback);
	TArray<class ULanServerRecord_X*> ResultDelegate();
	void EventResultComplete(TArray<class ULanServerRecord_X*> OutResult, class UError* OutError);
	void EventResult(TArray<class ULanServerRecord_X*> OutResult);
};

// Class ProjectX.TaskGate_X
// 0x0016 (FullSize[0x0076] - InheritedSize[0x0060])
class UTaskGate_X : public UObject
{
public:
	unsigned char                                      bOpen : 1;                                                 // 0x0060(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownDataTWKC[0x2];                                      // 0x0060(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataC213[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	TArray<class UAsyncTask*>                          Tasks;                                                     // 0x0068(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TaskGate_X");
		return ptr;
	}


	class UAsyncTask* AddWithTimeout(float TimeoutSeconds, class UErrorType* TimeoutError, const struct FString& ErrorMessage);
	class UAsyncTask* Add();
	void CompleteTasks();
	void SetOpen(bool bIsOpen);
};

// Class ProjectX.LanBrowser_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class ULanBrowser_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanBrowser_X");
		return ptr;
	}


	class UAsyncTask* JoinServer(const struct FString& serverId, const struct FString& Options);
	class UTAsyncResult__array_LanServerRecord_X* GetServerList();
	void DestroyServer();
	class UAsyncTask* SetServerMetaData(const struct FString& MetaData);
	class UAsyncTask* CreateServer(const struct FString& MetaData);
	void HandleGameInfoSpawned(class AGameInfo_X* G);
	void Construct();
};

// Class ProjectX.OnlinePlayerStorageQueue_X
// 0x0064 (FullSize[0x00C4] - InheritedSize[0x0060])
class UOnlinePlayerStorageQueue_X : public UObject
{
public:
	class UOnlinePlayerStorageConfig_X*                Config;                                                    // 0x0060(0x0008) (Edit)
	TArray<struct FPendingStorage>                     QueuedObjects;                                             // 0x0068(0x0010) (NeedCtorLink)
	TArray<struct FPendingStorage>                     PendingObjects;                                            // 0x0078(0x0010) (NeedCtorLink)
	float                                              DefaultStorageMaxSizeBytes;                                // 0x0088(0x0004) (Edit, Const)
	unsigned char                                      UnknownDataOFKO[0x4];                                      // 0x008C(0x0004) MISSED OFFSET
	TArray<struct FStorageMaxSize>                     StorageMaxSizes;                                           // 0x0090(0x0010) (Edit, Const, NeedCtorLink)
	struct FScriptDelegate                             __EventStorageSuccess__Delegate;                           // 0x00A0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataZA5X[0xC];                                      // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventOutOfSync__Delegate;                                // 0x00B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataD0M9[0xC];                                      // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventStorageError__Delegate;                             // 0x00D0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData2CME[0xC];                                      // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerStorageQueue_X");
		return ptr;
	}


	void __OnlinePlayerStorageQueue_X__Construct_0CD04CDC450A018CC1C42B8A5B39A614(const struct FString& _);
	void __OnlinePlayerStorageQueue_X__SendBatch_Internal_19D7896948AA8B7FFDEC29A912008B86(class URPC_X* RPC);
	bool __OnlinePlayerStorageQueue_X__HandleStorageSuccess_328E2E1D46885A5F9137DE9A6D514D84(const struct FPendingStorage& P);
	void __OnlinePlayerStorageQueue_X__HandleStorageSuccess_E042F32347D4DCC7AB279B8E96D218F8(const struct FSetPlayerStorageRequestItem& R);
	bool __OnlinePlayerStorageQueue_X__HandleStorageSuccess_CB0DA24540386F5C21F6F9A0169EF0A5(const struct FSetPlayerStorageResultItem& Item);
	void __OnlinePlayerStorageQueue_X__HandleStorageError_B5098321476BD2165CADB89D6F12158F(const struct FPendingStorage& P);
	bool __OnlinePlayerStorageQueue_X__HandleStorageError_36CB0AFC4526D2065E0A178CE6CD2EDE(const struct FPendingStorage& P);
	int GetStorageMaxSizeBytes(const struct FName& Category);
	void HandleStorageError(class UError* Error, TArray<struct FPendingStorage>* FilterLocal_C80A8EDB495E37281BADC5B98F07F407);
	struct FPendingStorage MapResultItem(const struct FSetPlayerStorageResultItem& Item, struct FPendingStorage* StructInitializer_E1148B7E4D58F3568B9F4D9CE9B9E50B);
	void HandleStorageSuccess(class URPC_PlayerStorageSet_X* RPC, TArray<struct FSetPlayerStorageResultItem>* FilterLocal_94FD74CF4E86874B65DEDB9EA16E3376, TArray<struct FSetPlayerStorageRequestItem>* FilterLocal_F93AA2284B4A79FF8C615190725A14E6, TArray<struct FSetPlayerStorageResultItem>* DifferenceLocal_EB9F195243ABCA1DE6867CB4C179136F, TArray<struct FPendingStorage>* MapLocal_D1BAD990427B9856A935B197B5E8B80A);
	void PartitionStorageRequests(TArray<struct FPendingStorage>* OutQueue, TArray<struct FSetPlayerStorageRequestItem>* OutOfDate, struct FSetPlayerStorageRequestItem* StructInitializer_D7C137234AF4F84D5AEF859D8A862264);
	void SendBatch_Internal(TArray<struct FPendingStorage>* OutQueue);
	void SendBatch(TArray<struct FPendingStorage>* UnionLocal_BFCC8770483F4D47EA4C5FB15F841D93);
	void QueueBatch();
	void SendImmediate(class UObject* DataObj, int ClientTick, TArray<struct FPendingStorage>* ArrayInitializer_A73781C640D09E0FFFD08D94F50D44AC, TArray<struct FPendingStorage>* UnionLocal_7473CDC04D1711AC78A0C9BA10BF9C75);
	void UpdateQueuedObject(class UObject* DataObj, int ClientTick);
	void QueueObject(class UObject* DataObj, int ClientTick);
	void Construct();
	void EventStorageError(class UError* Error);
	void EventOutOfSync(TArray<struct FPendingStorage>* FailedObjects);
	void EventStorageSuccess(class UObject* Data, int ServerTick, TEnumAsByte<EObjectEncoding> Encoding);
};

// Class ProjectX.__TaskGate_X__Add_CE55FA8444666DB02A7DE28284172767
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__TaskGate_X__Add_CE55FA8444666DB02A7DE28284172767 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                      // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TaskGate_X__Add_CE55FA8444666DB02A7DE28284172767");
		return ptr;
	}


	void __TaskGate_X__Add_CE55FA8444666DB02A7DE28284172767();
};

// Class ProjectX.__TaskGate_X__AddWithTimeout_D4DB1AAB43311D184BC7F0BAC32F62CD
// 0x002C (FullSize[0x008C] - InheritedSize[0x0060])
class U__TaskGate_X__AddWithTimeout_D4DB1AAB43311D184BC7F0BAC32F62CD : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                      // 0x0060(0x0008)
	class UErrorType*                                  TimeoutError;                                              // 0x0068(0x0008)
	struct FString                                     ErrorMessage;                                              // 0x0070(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             TimeoutDelegate;                                           // 0x0080(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataZ15T[0xC];                                      // 0x0080(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TaskGate_X__AddWithTimeout_D4DB1AAB43311D184BC7F0BAC32F62CD");
		return ptr;
	}


	void __TaskGate_X__AddWithTimeout_C51A34EF47C451277A7132BE57ACE8F9();
	void __TaskGate_X__AddWithTimeout_D4DB1AAB43311D184BC7F0BAC32F62CD();
};

// Class ProjectX.____OnlinePlayerStorageQueue_X__HandleStorageSuccess_19ED80E340BD5082298343BA27D938B2____OnlinePlayerStorageQueue_X__HandleStorageSuccess_1D14F76D47BC820255520A86C132D912_EEEACEB64A54150F9DC37581C30BCA52
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U____OnlinePlayerStorageQueue_X__HandleStorageSuccess_19ED80E340BD5082298343BA27D938B2____OnlinePlayerStorageQueue_X__HandleStorageSuccess_1D14F76D47BC820255520A86C132D912_EEEACEB64A54150F9DC37581C30BCA52 : public UObject
{
public:
	struct FSetPlayerStorageResultItem                 R;                                                         // 0x0060(0x0010)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.____OnlinePlayerStorageQueue_X__HandleStorageSuccess_19ED80E340BD5082298343BA27D938B2____OnlinePlayerStorageQueue_X__HandleStorageSuccess_1D14F76D47BC820255520A86C132D912_EEEACEB64A54150F9DC37581C30BCA52");
		return ptr;
	}


	bool ____OnlinePlayerStorageQueue_X__HandleStorageSuccess_19ED80E340BD5082298343BA27D938B2____OnlinePlayerStorageQueue_X__HandleStorageSuccess_1D14F76D47BC820255520A86C132D912_EEEACEB64A54150F9DC37581C30BCA52(const struct FPendingStorage& P);
};

// Class ProjectX.UdpLanServer_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UUdpLanServer_X : public UObject
{
public:
	class ULanBeacon_X*                                Beacon;                                                    // 0x0060(0x0008) (Edit, ExportObject, Component, EditInline)
	struct FString                                     MetaData;                                                  // 0x0068(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UdpLanServer_X");
		return ptr;
	}


	void HandleLanQueryMessage(class UOnlineMessageComponent_X* Component, class ULanMessage_HostQuery_X* Query);
	void Destroy();
	class UAsyncTask* SetServerMetaData(const struct FString& InMetaData);
	void Construct();
};

// Class ProjectX.OnlineClubProvider_X
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class UOnlineClubProvider_X : public UObject
{
public:
	class UOnlineClubCache_X*                          Cache;                                                     // 0x0060(0x0008) (ExportObject, Component, EditInline)
	TArray<class URPC_GetClubDetails_X*>               SyncingClubs;                                              // 0x0068(0x0010) (NeedCtorLink)
	TArray<class URPC_GetPlayerClubDetails_X*>         SyncingPlayers;                                            // 0x0078(0x0010) (NeedCtorLink)
	TArray<struct FPlayerClubSyncResult>               PlayerClubSyncResults;                                     // 0x0088(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __EventSyncComplete__Delegate;                             // 0x0098(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData337K[0xC];                                      // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerSynced__Delegate;                             // 0x00B0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataO66O[0xC];                                      // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineClubProvider_X");
		return ptr;
	}


	void ClubSynced(class UClubDetails_X* Club);
	bool IsSyncing();
	void NotifyWhenSyncComplete(const struct FScriptDelegate& Callback);
	struct FPlayerClubSyncResult GetPlayerClubSyncResult(const struct FUniqueNetId& PlayerID, struct FPlayerClubSyncResult* StructInitializer_5450F6EA4DBD082531170BA601FDB515);
	void SetPlayerClubSyncResult(const struct FUniqueNetId& PlayerID, class UError* Error, struct FPlayerClubSyncResult* StructInitializer_039562C741E9B4A690D87A9DE4999D5F);
	void HandlePlayerSynced(class URPC_GetPlayerClubDetails_X* RPC);
	class UTAsyncResult__ClubDetails_X* SyncPlayerClubDetails(const struct FUniqueNetId& PlayerID);
	class UTAsyncResult__ClubDetails_X* GetPlayerClubDetails(const struct FUniqueNetId& PlayerID);
	void HandleClubSynced(class URPC_GetClubDetails_X* RPC);
	class UTAsyncResult__ClubDetails_X* SyncClubDetails();
	class UTAsyncResult__ClubDetails_X* GetClubDetails();
	void EventPlayerSynced(class UOnlineClubProvider_X* Provider, const struct FUniqueNetId& PlayerID);
	void EventSyncComplete(class UOnlineClubProvider_X* Provider);
};

// Class ProjectX.OnlineGameLeaderboards_X
// 0x006A (FullSize[0x00E2] - InheritedSize[0x0078])
class UOnlineGameLeaderboards_X : public UOnline_X
{
public:
	int                                                NumResults;                                                // 0x0078(0x0004) (Edit)
	unsigned char                                      UnknownDataMAYU[0x4];                                      // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FCachedLeaderboardData>              CachedLeaderboards;                                        // 0x0080(0x0010) (Transient, NeedCtorLink)
	int                                                NumFriendsLeaderboardRequests;                             // 0x0090(0x0004) (Transient)
	struct FName                                       CurrentLeaderboardID;                                      // 0x0094(0x0008) (Transient)
	int                                                CurrentFriendIndex;                                        // 0x009C(0x0004) (Transient)
	unsigned char                                      bGlobalLeaderboards : 1;                                   // 0x00A0(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataVP3D[0x2];                                      // 0x00A0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData8UVB[0x4];                                      // 0x00A4(0x0004) MISSED OFFSET
	class URPC_X*                                      GetLoaderboardPlayerValueRPC;                              // 0x00A8(0x0008) (Transient)
	TArray<class URPC_X*>                              LeaderboardRequests;                                       // 0x00B0(0x0010) (Transient, NeedCtorLink)
	struct FScriptDelegate                             __OnGetLeaderboardPlayerValue__Delegate;                   // 0x00C0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataJ4L6[0xC];                                      // 0x00C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventNewLeaderboard__Delegate;                           // 0x00D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataYYRQ[0xC];                                      // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventGetLeaderboardFailed__Delegate;                     // 0x00F0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataRJ1K[0xC];                                      // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameLeaderboards_X");
		return ptr;
	}


	void __OnlineGameLeaderboards_X__ClearPreviousTasks_D6C35E50433FC9D937284789BE1E01AA(class URPC_X* RPC);
	void ClearPreviousTasks();
	bool IsSkillLeaderboard(const struct FString& NewLeaderboardID, int* Playlist);
	TArray<struct FLeaderboardData> SortLeaderboardDataMMR(TArray<struct FLeaderboardData> Leaderboard);
	TArray<struct FLeaderboardData> SortLeaderboardData(TArray<struct FLeaderboardData> Leaderboard);
	void HandleGetLeaderboardFriendsRPC(class URPC_GetLeaderboardRankForUsersBase_X* RPC);
	void DispatchLeaderboardFriendsRequest();
	void GetLeaderboardsForAllFriends(const struct FName& LeaderboardId);
	void GetLeaderboardFriends(class UOnlinePlayer_X* OnlinePlayer, const struct FName& NewLeaderboardID, const struct FScriptDelegate& NewDelegate, const struct FScriptDelegate& FailedDelegate);
	void RequestClearPendingAvatarDownloads();
	void HandleGetLeaderboardRPC(class URPC_GetLeaderboardBase_X* RPC);
	void GetLeaderboard(const struct FName& NewLeaderboardID, bool bGlobal, const struct FScriptDelegate& NewDelegate, const struct FScriptDelegate& FailedDelegate);
	bool GetCachedLeaderboardData(const struct FName& LeaderboardId, TArray<struct FLeaderboardData>* LeaderboardDataList);
	int CalcDivision(float TopValue, float Value);
	void GetRankForPrimaryPlayer(const struct FName& LeaderboardId, int Value, int* Rank, int* Division);
	void HandleGetLeaderboardPlayerValueRPC(class URPC_GetLeaderboardValueForUserBase_X* RPC);
	void GetLeaderboardPlayerValue(const struct FName& NewLeaderboardID, const struct FScriptDelegate& NewDelegate);
	void EventGetLeaderboardFailed(class UError* Error);
	void EventNewLeaderboard(const struct FName& NewLeaderboardID, TArray<struct FLeaderboardData>* NewLeaderboardData);
	void OnGetLeaderboardPlayerValue(class UOnlineGameLeaderboards_X* LeaderboardsRef, struct FLeaderboardData* PlayerLeaderboardData, const struct FName& LeaderboardId, class UError* Error);
};

// Class ProjectX.PostProcessManager_X
// 0x006E (FullSize[0x00CE] - InheritedSize[0x0060])
class UPostProcessManager_X : public UObject
{
public:
	class ULocalPlayer*                                PlayerOwner;                                               // 0x0060(0x0008) (Transient, ProtectedWrite)
	TArray<class UMaterialEffect_X*>                   ActiveEffects;                                             // 0x0068(0x0010) (Transient, NeedCtorLink)
	unsigned char                                      bNeedsReset : 1;                                           // 0x0078(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataEUBC[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData3P9S[0x4];                                      // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FPPEffectDefaults>                   EffectDefaults;                                            // 0x0080(0x0010) (Edit, NeedCtorLink)
	TArray<struct FPPPersistentEffectDefaults>         PersistentEffectDefaults;                                  // 0x0090(0x0010) (Edit, NeedCtorLink)
	TArray<struct FPPChainInfo>                        ActiveChains;                                              // 0x00A0(0x0010) (Transient, NeedCtorLink)
	TArray<struct FPPChainInfo>                        ChainDefaults;                                             // 0x00B0(0x0010) (Edit, NeedCtorLink)
	TArray<struct FPostProcessOverride>                PostProcessOverrides;                                      // 0x00C0(0x0010) (Edit, NeedCtorLink, ProtectedWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PostProcessManager_X");
		return ptr;
	}


	int GetNextPostProcessOverride();
	void TogglePostProcessSettings(const struct FName& Id, bool bEnabled);
	void SetMaterialEffectValue(const struct FName& EffectName, float NewValue);
	void ResetEffectsToDefaults(bool bRebuildPostProcessChains);
	void ToggleChainNamed(class UPostProcessChain* Chain, const struct FName& ChainName, bool bEnabled);
	void StopChainNamed(const struct FName& ChainName);
	void StartChainNamed(class UPostProcessChain* Chain, const struct FName& ChainName);
	bool RemovePostProcessChain(int OldChain);
	int AddPostProcessChain(class UPostProcessChain* NewChain, const struct FName& ChainName);
	class UMaterialEffect_X* GetEffect(const struct FName& EffectName);
	void TickPostProcess(float dt);
	void ToggleEffect(class UMaterialEffect_X* Effect, bool bEnabled);
	void StopEffectNamed(const struct FName& EffectName);
	void StartEffectNamed(const struct FName& EffectName);
	void ToggleEffectNamed(const struct FName& EffectName, bool bEnabled);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	class UUberPostProcessEffect* GetUberPostProcessEffect();
	class UPostProcessChain* GetPlayerChain();
	void Exit();
	void Init(class APlayerController_X* NewOwner);
};

// Class ProjectX.OnlineConfigDispatcher_X
// 0x0002 (FullSize[0x0062] - InheritedSize[0x0060])
class UOnlineConfigDispatcher_X : public UObject
{
public:
	unsigned char                                      bDebug : 1;                                                // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataE0AG[0x2];                                      // 0x0060(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineConfigDispatcher_X");
		return ptr;
	}


	struct FString GetDebugString(class UOnlineConfig_X* Config);
	void UndoConfigObject(class UOnlineConfig_X* Config);
	void ApplyConfigObject(class UOnlineConfig_X* Config);
	void Construct();
};

// Class ProjectX.AdHocBrowser_X
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class UAdHocBrowser_X : public ULanBrowser_X
{
public:
	class UAdHocBeacon_X*                              AdHocBeacon;                                               // 0x0060(0x0008)
	TArray<struct FAdHocAccessPointInfo>               AdHocNodesOnNetwork;                                       // 0x0068(0x0010) (NeedCtorLink)
	float                                              SearchTimeout;                                             // 0x0078(0x0004) (Edit, Const)
	unsigned char                                      UnknownDataR2B6[0x4];                                      // 0x007C(0x0004) MISSED OFFSET
	class UTAsyncResult__array_LanServerRecord_X*      SearchTask;                                                // 0x0080(0x0008)
	TArray<class ULanServerRecord_X*>                  SearchResults;                                             // 0x0088(0x0010) (NeedCtorLink)
	TArray<struct FAdHocAccessPointInfo>               AdHocAccessPointsAvailable;                                // 0x0098(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AdHocBrowser_X");
		return ptr;
	}


	void __AdHocBrowser_X__GetServerList_9F2426AE494FDB1B5A0FEBA7B5A71C97();
	void HandleSearchTimeout();
	void AdHocHandleOnNetworkChanged(TArray<struct FAdHocAccessPointInfo> Ahapis);
	int FindIndexFromServerID(const struct FString& InServerID);
	class UAsyncTask* JoinServer(const struct FString& serverId, const struct FString& Options);
	void CreateErrorDelegate(class UAsyncTask* Task);
	class UTAsyncResult__array_LanServerRecord_X* GetServerList();
	class UAsyncTask* SetServerMetaData(const struct FString& MetaData);
	class UAsyncTask* CreateServer(const struct FString& MetaData);
};

// Class ProjectX.Errors_X
// 0x02A0 (FullSize[0x0320] - InheritedSize[0x0080])
class UErrors_X : public UErrorList
{
public:
	class UErrorType*                                  UnknownError;                                              // 0x0080(0x0008) (Const)
	class UPsyNetErrorType_X*                          RequestError;                                              // 0x0088(0x0008) (Const)
	class UErrorType*                                  HTTPError;                                                 // 0x0090(0x0008) (Const)
	class UErrorType*                                  SessionNotActive;                                          // 0x0098(0x0008) (Const)
	class UErrorType*                                  OSCS_NotConnected;                                         // 0x00A0(0x0008) (Const)
	class UErrorType*                                  OSCS_Connected;                                            // 0x00A8(0x0008) (Const)
	class UErrorType*                                  OSCS_ConnectionDropped;                                    // 0x00B0(0x0008) (Const)
	class UErrorType*                                  OSCS_NoNetworkConnection;                                  // 0x00B8(0x0008) (Const)
	class UErrorType*                                  OSCS_ServiceUnavailable;                                   // 0x00C0(0x0008) (Const)
	class UErrorType*                                  OSCS_UpdateRequired;                                       // 0x00C8(0x0008) (Const)
	class UErrorType*                                  OSCS_ServersTooBusy;                                       // 0x00D0(0x0008) (Const)
	class UErrorType*                                  OSCS_DuplicateLoginDetected;                               // 0x00D8(0x0008) (Const)
	class UErrorType*                                  OSCS_InvalidUser;                                          // 0x00E0(0x0008) (Const)
	class UErrorType*                                  OSCS_InvalidResponse;                                      // 0x00E8(0x0008) (Const)
	class UErrorType*                                  ConnectionStatusErrors[0xB];                               // 0x00F0(0x0008) (Const)
	class UErrorType*                                  VersionMismatch;                                           // 0x0148(0x0008) (Const)
	class UErrorType*                                  NoServers;                                                 // 0x0150(0x0008) (Const)
	class UErrorType*                                  FileDoesNotExist;                                          // 0x0158(0x0008) (Const)
	class UErrorType*                                  FileLoadFail;                                              // 0x0160(0x0008) (Const)
	class UErrorType*                                  FileLoadCorrupt;                                           // 0x0168(0x0008) (Const)
	class UErrorType*                                  FileMountCorrupt;                                          // 0x0170(0x0008) (Const)
	class UErrorType*                                  FileSaveFail;                                              // 0x0178(0x0008) (Const)
	class UErrorType*                                  FileSaveNoSpace;                                           // 0x0180(0x0008) (Const)
	class UErrorType*                                  FileSaveCorrupt;                                           // 0x0188(0x0008) (Const)
	class UErrorType*                                  UserBanned;                                                // 0x0190(0x0008) (Const)
	class UErrorType*                                  NotLoggedInToPsynet;                                       // 0x0198(0x0008) (Const)
	class UErrorType*                                  FriendsList;                                               // 0x01A0(0x0008) (Const)
	class UErrorType*                                  InviteLimitReached;                                        // 0x01A8(0x0008) (Const)
	class UErrorType*                                  OutOfRetries;                                              // 0x01B0(0x0008) (Const)
	class UErrorType*                                  AuthenticationFailed;                                      // 0x01B8(0x0008) (Const)
	class UErrorType*                                  NoExportCountry;                                           // 0x01C0(0x0008) (Const)
	class UErrorType*                                  UnauthorizedAccess;                                        // 0x01C8(0x0008) (Const)
	class UErrorType*                                  ServiceNotFound;                                           // 0x01D0(0x0008) (Const)
	class UErrorType*                                  FeatureDisabled;                                           // 0x01D8(0x0008) (Const)
	class UErrorType*                                  MatchmakingDisabled;                                       // 0x01E0(0x0008) (Const)
	class UErrorType*                                  PlaylistNotAvailable;                                      // 0x01E8(0x0008) (Const)
	class UErrorType*                                  PlayerNameNotSet;                                          // 0x01F0(0x0008) (Const)
	class UErrorType*                                  PlayerNameAlreadyTaken;                                    // 0x01F8(0x0008) (Const)
	class UErrorType*                                  PlayerNameTooShort;                                        // 0x0200(0x0008) (Const)
	class UErrorType*                                  PlayerNameTooLong;                                         // 0x0208(0x0008) (Const)
	class UErrorType*                                  PlayerNameInappropriate;                                   // 0x0210(0x0008) (Const)
	class UErrorType*                                  PlayerNameInvalidCharacter;                                // 0x0218(0x0008) (Const)
	class UErrorType*                                  PlayerNameFailed;                                          // 0x0220(0x0008) (Const)
	class UErrorType*                                  NotAuthorized;                                             // 0x0228(0x0008) (Const)
	class UErrorType*                                  SessionAlreadyActive;                                      // 0x0230(0x0008) (Const)
	class UErrorType*                                  GameServerPending;                                         // 0x0238(0x0008) (Const)
	class UErrorType*                                  CacheError;                                                // 0x0240(0x0008) (Const)
	class UErrorType*                                  WordFilterEvil;                                            // 0x0248(0x0008) (Const)
	class UErrorType*                                  WordFilterPlatformError;                                   // 0x0250(0x0008) (Const)
	class UErrorType*                                  WordFilterPlatformChatError;                               // 0x0258(0x0008) (Const)
	class UErrorType*                                  InvalidSettings;                                           // 0x0260(0x0008) (Const)
	class UErrorType*                                  Maintenance;                                               // 0x0268(0x0008) (Const)
	class UErrorType*                                  PlatformAuthError;                                         // 0x0270(0x0008) (Const)
	class UErrorType*                                  MicrotransactionAuthExpired;                               // 0x0278(0x0008) (Const)
	class UErrorType*                                  CannotFriendSelf;                                          // 0x0280(0x0008) (Const)
	class UErrorType*                                  InvalidPlayer;                                             // 0x0288(0x0008) (Const)
	class UErrorType*                                  FriendRequestNotFound;                                     // 0x0290(0x0008) (Const)
	class UErrorType*                                  AlreadyFriends;                                            // 0x0298(0x0008) (Const)
	class UErrorType*                                  FriendLimitReached;                                        // 0x02A0(0x0008) (Const)
	class UErrorType*                                  LocalFriendLimitReached;                                   // 0x02A8(0x0008) (Const)
	class UErrorType*                                  RemoteFriendLimitReached;                                  // 0x02B0(0x0008) (Const)
	class UErrorType*                                  LocalHostConnectionError;                                  // 0x02B8(0x0008) (Const)
	class UErrorType*                                  UGCRestricted;                                             // 0x02C0(0x0008) (Const)
	class UPsyNetErrorType_X*                          PerConBroken;                                              // 0x02C8(0x0008) (Const)
	class UErrorType*                                  MicrotransactionServiceMaintenance;                        // 0x02D0(0x0008) (Const)
	class UErrorType*                                  GenericStorageOutOfSync;                                   // 0x02D8(0x0008) (Const)
	class UErrorType*                                  GenericStorageSync_RequestNotFound;                        // 0x02E0(0x0008) (Const)
	class UErrorType*                                  SignatureMismatch;                                         // 0x02E8(0x0008) (Const)
	class UErrorType*                                  JsonDeserialization;                                       // 0x02F0(0x0008) (Const)
	class UErrorType*                                  InvalidPlatform;                                           // 0x02F8(0x0008) (Const)
	class UErrorType*                                  InvalidPlatformForCodeRedemption;                          // 0x0300(0x0008) (Const)
	class UErrorType*                                  InvalidParameters;                                         // 0x0308(0x0008) (Const)
	class UPsyNetErrorType_X*                          NotMatchmaking;                                            // 0x0310(0x0008) (Const)
	class UErrorType*                                  AccessDenied;                                              // 0x0318(0x0008) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Errors_X");
		return ptr;
	}


	bool DisplayPlatformError(class UErrorType* InErrorType);
};

// Class ProjectX.RPC_GetLeaderboardValueForUserBase_X
// 0x007C (FullSize[0x0150] - InheritedSize[0x00D4])
class URPC_GetLeaderboardValueForUserBase_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038) (PrivateWrite)
	struct FString                                     LeaderboardId;                                             // 0x0138(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	unsigned char                                      bHasSkill : 1;                                             // 0x0148(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData32IQ[0x2];                                      // 0x0148(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bHasValue : 1;                                             // 0x0148(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData6AS2[0x2];                                      // 0x014C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Value;                                                     // 0x014C(0x0004) (Transient, PrivateWrite)
	float                                              MMR;                                                       // 0x0150(0x0004) (Transient, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardValueForUserBase_X");
		return ptr;
	}


	class URPC_GetLeaderboardValueForUserBase_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.LanServerRecord_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class ULanServerRecord_X : public UObject
{
public:
	struct FString                                     serverId;                                                  // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     MetaData;                                                  // 0x0070(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanServerRecord_X");
		return ptr;
	}


};

// Class ProjectX.__AdHocBrowser_X__CreateServer_1058C36F460A57BADD3324B388CBFB2C
// 0x0024 (FullSize[0x0084] - InheritedSize[0x0060])
class U__AdHocBrowser_X__CreateServer_1058C36F460A57BADD3324B388CBFB2C : public UObject
{
public:
	struct FString                                     MetaData;                                                  // 0x0060(0x0010) (NeedCtorLink)
	class UAsyncTask*                                  Task;                                                      // 0x0070(0x0008)
	struct FScriptDelegate                             ApcDelegate;                                               // 0x0078(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataIZRE[0xC];                                      // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__AdHocBrowser_X__CreateServer_1058C36F460A57BADD3324B388CBFB2C");
		return ptr;
	}


	void __AdHocBrowser_X__CreateServer_A782BECC40A9A380BDF0B38BD092B153();
	void __AdHocBrowser_X__CreateServer_1058C36F460A57BADD3324B388CBFB2C();
};

// Class ProjectX.RPC_GetSkillLeaderboardValueForUser_X
// 0x000C (FullSize[0x015C] - InheritedSize[0x0150])
class URPC_GetSkillLeaderboardValueForUser_X : public URPC_GetLeaderboardValueForUserBase_X
{
public:
	unsigned char                                      UnknownData2DM6[0x4];                                      // 0x0154(0x0004) MISSED OFFSET
	int                                                Playlist;                                                  // 0x0158(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetSkillLeaderboardValueForUser_X");
		return ptr;
	}


	class URPC_GetSkillLeaderboardValueForUser_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.__AdHocBrowser_X__CreateErrorDelegate_F2CB895647264C3A40BE80AFD0D3CDBB
// 0x0014 (FullSize[0x0074] - InheritedSize[0x0060])
class U__AdHocBrowser_X__CreateErrorDelegate_F2CB895647264C3A40BE80AFD0D3CDBB : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                      // 0x0060(0x0008)
	struct FScriptDelegate                             ErrorDelegate;                                             // 0x0068(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataW2NK[0xC];                                      // 0x0068(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__AdHocBrowser_X__CreateErrorDelegate_F2CB895647264C3A40BE80AFD0D3CDBB");
		return ptr;
	}


	void __AdHocBrowser_X__CreateErrorDelegate_2390B974475AB462F5A33CB2715096DA();
	void __AdHocBrowser_X__CreateErrorDelegate_F2CB895647264C3A40BE80AFD0D3CDBB(class UError* Error);
};

// Class ProjectX.RPC_GetLeaderboardValueForUser_X
// 0x0018 (FullSize[0x0168] - InheritedSize[0x0150])
class URPC_GetLeaderboardValueForUser_X : public URPC_GetLeaderboardValueForUserBase_X
{
public:
	unsigned char                                      UnknownData6HLA[0x4];                                      // 0x0154(0x0004) MISSED OFFSET
	struct FString                                     Stat;                                                      // 0x0158(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardValueForUser_X");
		return ptr;
	}


	class URPC_GetLeaderboardValueForUser_X* SetStat(const struct FString& InStat);
};

// Class ProjectX.SystemMetrics_X
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class USystemMetrics_X : public UMetricsGroup_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SystemMetrics_X");
		return ptr;
	}


	void Specs(const struct FOSMetrics& OS, const struct FCpuMetrics& CPU, const struct FMemoryMetrics& Memory, const struct FVideoCardMetrics& Video, const struct FNetworkAdapterMetrics& Network);
	void RecordSpecs();
};

// Class ProjectX.__AdHocBrowser_X__JoinServer_95046B96481B8732B7CF1EAC3AB9E0E2
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class U__AdHocBrowser_X__JoinServer_95046B96481B8732B7CF1EAC3AB9E0E2 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                      // 0x0060(0x0008)
	struct FString                                     serverId;                                                  // 0x0068(0x0010) (NeedCtorLink)
	struct FString                                     Options;                                                   // 0x0078(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__AdHocBrowser_X__JoinServer_95046B96481B8732B7CF1EAC3AB9E0E2");
		return ptr;
	}


	void __AdHocBrowser_X__JoinServer_95046B96481B8732B7CF1EAC3AB9E0E2();
};

// Class ProjectX.EventRecorder_X
// 0x005E (FullSize[0x00CE] - InheritedSize[0x0070])
class UEventRecorder_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0070(0x0008) (Const, Native, NoExport)
	class UEventRecorderConfig_X*                      Config;                                                    // 0x0078(0x0008)
	int                                                MaxQueuedEvents;                                           // 0x0080(0x0004) (Edit)
	int                                                MaxQueuedMinutes;                                          // 0x0084(0x0004) (Edit)
	unsigned char                                      bPaused : 1;                                               // 0x0088(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataZ6JO[0x2];                                      // 0x0088(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataU5IB[0x4];                                      // 0x008C(0x0004) MISSED OFFSET
	TArray<struct FMetricsEvent>                       QueuedEvents;                                              // 0x0090(0x0010) (Const, Transient, NeedCtorLink)
	struct FGuid                                       AppSessionID;                                              // 0x00A0(0x0010) (Const, Transient, PrivateWrite)
	struct FGuid                                       LevelSessionID;                                            // 0x00B0(0x0010) (Const, Transient, PrivateWrite)
	float                                              NextSendTime;                                              // 0x00C0(0x0004) (Const, Transient)
	float                                              FloodPreventionTimeSeconds;                                // 0x00C4(0x0004) (Edit)
	float                                              LastFullSendTime;                                          // 0x00C8(0x0004) (Const, Transient)
	int                                                AppEventCount;                                             // 0x00CC(0x0004) (Const, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EventRecorder_X");
		return ptr;
	}


	void MetricsNotSent(int Count);
	void MetricsFlood(const struct FString& LastEventName);
	void SetLevelSessionID(const struct FGuid& Id);
	bool Send();
	void RecordEvent(const struct FString& Category, const struct FName& Event, struct FString* Data, const struct FUniqueNetId& PlayerID, int Version);
	void RecordFunction(const struct FString& Category, int Version);
};

// Class ProjectX.RPC_GetLeaderboardBase_X
// 0x0052 (FullSize[0x0126] - InheritedSize[0x00D4])
class URPC_GetLeaderboardBase_X : public URPC_X
{
public:
	unsigned char                                      bDisableCrossPlay : 1;                                     // 0x0100(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownData37MM[0x2];                                      // 0x0100(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataQP8D[0x4];                                      // 0x0104(0x0004) MISSED OFFSET
	struct FString                                     LeaderboardId;                                             // 0x0108(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FGetLeaderboardPlatformBaseData>     Platforms;                                                 // 0x0118(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardBase_X");
		return ptr;
	}


	class URPC_GetLeaderboardBase_X* SetDisableCrossPlay(bool InDisableCrossplay);
};

// Class ProjectX.AdHocInterface_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UAdHocInterface_X : public UObject
{
public:
	class ULanBrowser_X*                               OldLanBrowser;                                             // 0x0060(0x0008)
	class UAdHocBeacon_X*                              AdHocBeacon;                                               // 0x0068(0x0008)
	class UOnlineGameParty_X*                          OnlineGameParty;                                           // 0x0070(0x0008)
	class UOnlineGameMatchmaking_X*                    Matchmaking;                                               // 0x0078(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AdHocInterface_X");
		return ptr;
	}


	void CreateErrorDelegate(class UAsyncTask* Task);
	class UAsyncTask* DisableAdHoc();
	void HandleGameInfoSpawned(class AGameInfo_X* InGameInfo);
	class UAsyncTask* EnableAdHoc();
};

// Class ProjectX.MetricsSystem_X
// 0x0002 (FullSize[0x00D0] - InheritedSize[0x00CE])
class UMetricsSystem_X : public UEventRecorder_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MetricsSystem_X");
		return ptr;
	}


	void Construct();
	void HandleUnpause(class UNetMode_Networked* NetMode, class UMetricsSystem_X* Metrics, class UPauseMetricsState_X* State);
	void HandlePause(class UNetMode_Networked* NetMode, class UMetricsSystem_X* Metrics, class UPauseMetricsState_X* State);
};

// Class ProjectX.RPC_GetSkillLeaderboard_X
// 0x0006 (FullSize[0x012C] - InheritedSize[0x0126])
class URPC_GetSkillLeaderboard_X : public URPC_GetLeaderboardBase_X
{
public:
	int                                                Playlist;                                                  // 0x0128(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetSkillLeaderboard_X");
		return ptr;
	}


	class URPC_GetSkillLeaderboard_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.WebImageCache_X
// 0x001C (FullSize[0x007C] - InheritedSize[0x0060])
class UWebImageCache_X : public UObject
{
public:
	class UImageDecoder*                               Decoder;                                                   // 0x0060(0x0008)
	class UStringObjectMap*                            Downloads;                                                 // 0x0068(0x0008) (ExportObject, Component, EditInline)
	struct FScriptDelegate                             __ImageSyncCallback__Delegate;                             // 0x0070(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData2B5A[0xC];                                      // 0x0070(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WebImageCache_X");
		return ptr;
	}


	void SyncImageURL(const struct FString& URL, const struct FScriptDelegate& Callback);
	void HandleImageDecoded(class UWebImageDownload_X* Download, const struct FImageLayout& Image);
	void SetDownloadError(class UWebImageDownload_X* Download, class UError* Error);
	void HandleImageData(class UWebImageDownload_X* Download, class UCachedWebData_X* Data);
	class UWebImageDownload_X* StartSync(const struct FString& URL);
	void HandleUncachedImageDownload(class UTAsyncResult__Texture2DDynamic* Task, class UTexture2DDynamic* Texture);
	class UTAsyncResult__Texture2DDynamic* SyncUncachedImage(const struct FString& URL, bool bSRGB, TArray<struct FString>* ArrayInitializer_BC4A53D049AC4DD50C4158A35450FC4C);
	class UWebImageDownload_X* GetDownload(const struct FString& URL);
	class UTAsyncResult__Texture2DDynamic* SyncImageSRGB(const struct FString& URL);
	class UTAsyncResult__Texture2DDynamic* SyncImage(const struct FString& URL);
	void Construct();
	void ImageSyncCallback(class UTexture2DDynamic* Texture);
};

// Class ProjectX.__AdHocInterface_X__EnableAdHoc_EAEC72D24DF5D02C16A2299B3EFBC861
// 0x0014 (FullSize[0x0074] - InheritedSize[0x0060])
class U__AdHocInterface_X__EnableAdHoc_EAEC72D24DF5D02C16A2299B3EFBC861 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                      // 0x0060(0x0008)
	struct FScriptDelegate                             InitDelegate;                                              // 0x0068(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataHYA3[0xC];                                      // 0x0068(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__AdHocInterface_X__EnableAdHoc_EAEC72D24DF5D02C16A2299B3EFBC861");
		return ptr;
	}


	void __AdHocInterface_X__EnableAdHoc_AC2E0EC149AACA30A4FBE487F894F64B();
	void __AdHocInterface_X__EnableAdHoc_EAEC72D24DF5D02C16A2299B3EFBC861();
};

// Class ProjectX.DynamicValue_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UDynamicValue_X : public UObject
{
public:
	float                                              DefaultValue;                                              // 0x0060(0x0004) (Edit)
	unsigned char                                      bClampMax : 1;                                             // 0x0064(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataQIX5[0x2];                                      // 0x0064(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bClampMin : 1;                                             // 0x0064(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataESC5[0x2];                                      // 0x0068(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              MaxValue;                                                  // 0x0068(0x0004) (Edit)
	float                                              MinValue;                                                  // 0x006C(0x0004) (Edit)
	TArray<class UDynamicValueModifier_X*>             Modifiers;                                                 // 0x0070(0x0010) (NeedCtorLink, PrivateWrite)
	float                                              CachedValue;                                               // 0x0080(0x0004) (ProtectedWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DynamicValue_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FString GetDebugValue();
	float GetValue();
	void Tick(float DeltaTime);
	void RemoveAllModifiers();
	void RemoveModifier(class UDynamicValueModifier_X* Mod);
	class UDynamicValueModifier_X* AddModifier(class UDynamicValueModifier_X* Mod);
	void Construct();
};

// Class ProjectX.NetworkNextMetrics_X
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UNetworkNextMetrics_X : public UMetricsGroup_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkNextMetrics_X");
		return ptr;
	}


	void ClientInitFail();
	void ServerInitFail();
	void RouteEstablished();
};

// Class ProjectX.RPC_GetLeaderboard_X
// 0x0012 (FullSize[0x0138] - InheritedSize[0x0126])
class URPC_GetLeaderboard_X : public URPC_GetLeaderboardBase_X
{
public:
	struct FString                                     Stat;                                                      // 0x0128(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboard_X");
		return ptr;
	}


	class URPC_GetLeaderboard_X* SetStat(const struct FString& InStat);
};

// Class ProjectX.RPCQueue_X
// 0x00B2 (FullSize[0x0122] - InheritedSize[0x0070])
class URPCQueue_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0070(0x0008) (Const, Native, NoExport)
	float                                              AuthTimeoutSeconds;                                        // 0x0078(0x0004) (Edit)
	int                                                MaxRPCsPerBatch;                                           // 0x007C(0x0004) (Edit)
	class URPCConfig_X*                                RPCConfig;                                                 // 0x0080(0x0008) (Edit)
	TArray<struct FPendingRPC>                         PendingRPCs;                                               // 0x0088(0x0010) (Const, NeedCtorLink)
	TArray<class URPCBatch_X*>                         PendingBatches;                                            // 0x0098(0x0010) (NeedCtorLink)
	struct FMap_Mirror                                 ServiceFailureDelayTimes;                                  // 0x00A8(0x0050) (Const, Native)
	unsigned char                                      bAuthorized : 1;                                           // 0x00F8(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataGTVY[0x2];                                      // 0x00F8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataJD1O[0x4];                                      // 0x00FC(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventRPCError__Delegate;                                 // 0x0100(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataQEYY[0xC];                                      // 0x00FC(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventBatchError__Delegate;                               // 0x0118(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData6BML[0xC];                                      // 0x0118(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __SendRequestDelegate__Delegate;                           // 0x0130(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataN0JV[0xC];                                      // 0x0130(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPCQueue_X");
		return ptr;
	}


	void OnError(class URPC_X* RPC, class UError* Error);
	class UPsyNetMetrics_X* GetPsyNetMetrics();
	void RecordBatchMetrics(class URPCBatch_X* Batch);
	void HandleBatchComplete(class URPCBatch_X* Batch, class UPsyNetMessage_X* Response, class UError* Error);
	void CreateBatch(TArray<struct FPendingRPC>* BatchRPCs, class UPsyNetMessage_X* Message);
	void SignatureMismatch(int ServiceID);
	void FailAllPending(class UError* Error);
	void FailPending(class URPC_X* RPC, class UError* Error);
	void TickReceive();
	void TickSend();
	void QueueRPC(class URPC_X* RPC);
	class UTAsyncResult__PsyNetMessage_X* SendRequestDelegate(class UPsyNetMessage_X* Message);
	void EventBatchError(class URPCQueue_X* RPCQueue, class UError* Error);
	void EventRPCError(class URPCQueue_X* RPCQueue, class URPC_X* RPC, class UError* Error);
};

// Class ProjectX.__AdHocInterface_X__DisableAdHoc_C48300A94F6462A7F17EAF8D97F0E662
// 0x0014 (FullSize[0x0074] - InheritedSize[0x0060])
class U__AdHocInterface_X__DisableAdHoc_C48300A94F6462A7F17EAF8D97F0E662 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                      // 0x0060(0x0008)
	struct FScriptDelegate                             DestroyedDelegate;                                         // 0x0068(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataP6TX[0xC];                                      // 0x0068(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__AdHocInterface_X__DisableAdHoc_C48300A94F6462A7F17EAF8D97F0E662");
		return ptr;
	}


	void __AdHocInterface_X__DisableAdHoc_5FE0DCD54B247EF5721F20AC90A930C4();
	void __AdHocInterface_X__DisableAdHoc_C48300A94F6462A7F17EAF8D97F0E662();
};

// Class ProjectX.OnlineGameParty_X
// 0x0288 (FullSize[0x0300] - InheritedSize[0x0078])
class UOnlineGameParty_X : public UOnline_X
{
public:
	TArray<struct FPartyMember>                        PartyMembers;                                              // 0x0078(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	struct FUniqueLobbyId                              PartyID;                                                   // 0x0088(0x0010) (Transient, PrivateWrite)
	struct FUniqueNetId                                PartyLeader;                                               // 0x0098(0x0038) (Transient, PrivateWrite)
	int                                                MaxPartySize;                                              // 0x00D0(0x0004) (Const)
	unsigned char                                      UnknownDataQF0H[0x4];                                      // 0x00D4(0x0004) MISSED OFFSET
	class UOnlineMessageComponent_X*                   MessageComponent;                                          // 0x00D8(0x0008) (Const, ExportObject, Component, EditInline)
	class UPartyMessage_SearchStatus_X*                PendingSearchStatus;                                       // 0x00E0(0x0008) (Transient)
	class UPartyMessage_SearchStatus_X*                NullSearchStatus;                                          // 0x00E8(0x0008)
	int                                                PartyTimeout;                                              // 0x00F0(0x0004) (Edit, Const)
	int                                                CurrentPartySize;                                          // 0x00F4(0x0004) (Transient, PrivateWrite)
	unsigned char                                      LastbSearchingStatus : 1;                                  // 0x00F8(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataVHO9[0x2];                                      // 0x00F8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      LastLockStatus : 1;                                        // 0x00F8(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataLO7I[0x2];                                      // 0x00FC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       LastSearchState;                                           // 0x00FC(0x0008) (Transient)
	unsigned char                                      UnknownData9UTP[0x4];                                      // 0x0104(0x0004) MISSED OFFSET
	struct FPartyJoinMatchSettings                     MatchSettings;                                             // 0x0108(0x0048) (Transient, NeedCtorLink)
	TEnumAsByte<EPartyProcessingStatus>                ProcessingStatus;                                          // 0x0150(0x0001) (Transient, PrivateWrite)
	unsigned char                                      UnknownDataXYQA[0x7];                                      // 0x0151(0x0007) MISSED OFFSET
	struct FString                                     NotInSameOnlineGameError;                                  // 0x0158(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     MissingLicenseAgreementError;                              // 0x0168(0x0010) (Const, Localized, NeedCtorLink)
	class UPartySequence_InvitedToPlatformParty_X*     SequenceInvitedToPlatformParty;                            // 0x0178(0x0008) (PrivateWrite)
	class UPartySequence_PsyNetPartyUpgrade_X*         SequencePsyNetPartyUpgrade;                                // 0x0180(0x0008) (PrivateWrite)
	class UPartySequence_InvitedToPsyNetParty_X*       SequenceInvitedToPsyNetParty;                              // 0x0188(0x0008) (PrivateWrite)
	class UPartyConfig_X*                              PartyConfig;                                               // 0x0190(0x0008) (Edit)
	class UPsyNetConfig_X*                             Config;                                                    // 0x0198(0x0008) (Edit)
	TScriptInterface<class UOnlineLobbyInterface>      PlatformLobbyInterface;                                    // 0x01A0(0x0010) (PrivateWrite)
	class UParties_X*                                  PsyNetLobbyInterface;                                      // 0x01B0(0x0008) (PrivateWrite)
	int                                                CreatePartyLocalPlayerNum;                                 // 0x01B8(0x0004) (PrivateWrite)
	unsigned char                                      UnknownDataVQP6[0x4];                                      // 0x01BC(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventPartyCreated__Delegate;                             // 0x01C0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData6TSH[0xC];                                      // 0x01BC(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPartyInviteAccepted__Delegate;                         // 0x01D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataX9DP[0xC];                                      // 0x01D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerInvited__Delegate;                            // 0x01F0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData21SZ[0xC];                                      // 0x01F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerInvitedSilent__Delegate;                      // 0x0208(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataO5R5[0xC];                                      // 0x0208(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPartyChanged__Delegate;                             // 0x0220(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataVLS1[0xC];                                      // 0x0220(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPartySizeChanged__Delegate;                         // 0x0238(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataMPOR[0xC];                                      // 0x0238(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPartyLeaderChanged__Delegate;                       // 0x0250(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataU1H3[0xC];                                      // 0x0250(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSearchStatusChanged__Delegate;                      // 0x0268(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData2JV4[0xC];                                      // 0x0268(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPartyError__Delegate;                               // 0x0280(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData9BLQ[0xC];                                      // 0x0280(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPartyJoinGameError__Delegate;                       // 0x0298(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataCL2Y[0xC];                                      // 0x0298(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPartyJoinGameSuccess__Delegate;                     // 0x02B0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData0PG4[0xC];                                      // 0x02B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPartyDestroyed__Delegate;                           // 0x02C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData3JX1[0xC];                                      // 0x02C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventConfirmJoinGameMessage__Delegate;                   // 0x02E0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataGVOJ[0xC];                                      // 0x02E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLeaderLeftOnlineGame__Delegate;                     // 0x02F8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData8XTR[0xC];                                      // 0x02F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventProcessingStatusChanged__Delegate;                  // 0x0310(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataEAX5[0xC];                                      // 0x0310(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisableCrossPlayChanged__Delegate;                  // 0x0328(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData2KWT[0xC];                                      // 0x0328(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerTradingChanged__Delegate;                     // 0x0340(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataGY0N[0xC];                                      // 0x0340(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventInviteToTrade__Delegate;                            // 0x0358(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataTA3J[0xC];                                      // 0x0358(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAcceptedInviteToTrade__Delegate;                    // 0x0370(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataT3A7[0xC];                                      // 0x0370(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventCloseInviteToTrade__Delegate;                       // 0x0388(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataJTXK[0xC];                                      // 0x0388(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventReadyToTrade__Delegate;                             // 0x03A0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataEPWH[0xC];                                      // 0x03A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventNotReadyToTrade__Delegate;                          // 0x03B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData4L5L[0xC];                                      // 0x03B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventTradeReady__Delegate;                               // 0x03D0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataR4LB[0xC];                                      // 0x03D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAnotherInviteToTrade__Delegate;                     // 0x03E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataY66Q[0xC];                                      // 0x03E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerInMatchChanged__Delegate;                     // 0x0400(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData2WYF[0xC];                                      // 0x0400(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerIsCurrentlyTrading__Delegate;                 // 0x0418(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataTKIF[0xC];                                      // 0x0418(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventStartedJoinFriend__Delegate;                        // 0x0430(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData1FZE[0xC];                                      // 0x0430(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameParty_X");
		return ptr;
	}


	void __OnlineGameParty_X__UpdatePartyInfo_B436B7184D566E14266495ADA01F4379(const struct FPartyMember& PM);
	bool __OnlineGameParty_X__UpdatePartyInfo_AA796A2B4D584ED41CD506BE01E69B74(const struct FLobbyMember& LM);
	bool __OnlineGameParty_X__BroadcastAllLocalPlayers_E91019A249BA17D1B8CD89B60E0411F6(const struct FPartyMember& PM);
	bool __OnlineGameParty_X__HasMultiplePlatforms_034F8718434CC5BBA46A129D0A76F8CC(const struct FPartyMember& P);
	struct FUniqueNetId __OnlineGameParty_X__GetLocalMemberIDs_AB721DCB45E3D9D141369BAE0D2624F2(const struct FPartyMember& Member);
	void HandlePlatformPartyIdChanged(class UPartyPlatformSession_X* Session);
	void HandleSetPlatformPartyMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_SetPlatformParty_X* Message);
	void RequestRejoinPartyInfo();
	void SendPartyInvite(const struct FUniqueNetId& PlayerID);
	void HandlePartyConfigChanged();
	void HandleMessageForMetrics(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void HandlePlayerTradeComplete(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void SendPlayerTradeComplete();
	void SendPlayerTradeCompleteAndClear(bool bWasCanceled);
	void HandleReadyToTrade(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void ReadyToTrade(bool bReadyToTrade);
	void SetPartyMessageHandlerTradeProductUpdate(bool bAddHandler);
	void ClearLocalTradingPlayer(bool bWasCanceled);
	bool ClearTradingPartyMember(struct FPartyMember* TradingMember);
	bool ClearTradingPlayer(const struct FUniqueNetId& PartyMemberID);
	void ClearAllTradingPlayers();
	void HandleAcceptInviteToTrade(class UOnlineMessageComponent_X* Component, class UObject* Message);
	bool CanAcceptTrade();
	void AcceptInviteToTrade(bool bAccepted);
	struct FGuid ResolveGuids(struct FGuid* A, struct FGuid* B);
	struct FGuid GetTradingPlayerTradeID();
	struct FUniqueNetId GetTradingPlayerID();
	struct FString GetTradingPlayerName();
	void HandleInviteToTradeMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_InviteToTrade_X* Message);
	void InvitePlayerToTrade(const struct FUniqueNetId& InMemberId);
	bool IsPlayerTrading(const struct FUniqueNetId& InMemberId);
	void SetPlayersTrading(const struct FUniqueNetId& InMember1Id, const struct FUniqueNetId& InMember2Id, bool bTrading);
	struct FString GetMemberName(const struct FUniqueNetId& InMemberId);
	TArray<struct FUniqueNetId> GetLocalMemberIDs(TArray<struct FPartyMember>* FilterLocal_6EFCFAA847F25F172A6E73BAA5CD8B45, TArray<struct FUniqueNetId>* MapLocal_80C607D644CA6458B4994EAFB0A140EA);
	TArray<struct FUniqueNetId> GetOrderedPartyMemberIDs();
	TArray<struct FUniqueNetId> GetPartyMemberIDs();
	void HandleSessionCreated();
	bool IsProcessing();
	void SetProcessingStatus(TEnumAsByte<EPartyProcessingStatus> Status);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FString GetPlayerRatingString(const struct FUniqueNetId& PlayerID, int Playlist);
	void OnPartyError(class UError* Error);
	void HandlePartyError(const struct FString& Error);
	void OnPartyChanged(TEnumAsByte<EPartyProcessingStatus> NewProcessingStatus);
	bool TryGetValueInt(TArray<struct FLobbyMetaData>* MetaData, const struct FString& Key, int* Value);
	bool PartyHasDisableCrossPlay();
	void KickForCrossplayDisabled(const struct FUniqueNetId& MemberId);
	bool HasMultiplePlatforms();
	void KickCrossplayDisabledMembers();
	void SetCrossPlayTextChatForMember(const struct FUniqueNetId& PartyMemberID, TEnumAsByte<ECrossPlatformChatState> CrossChatState);
	void BroadcastCrossTextChatState();
	void HandleCrossPlatformTextChatMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void SetDisableCrossPlayForMember(const struct FUniqueNetId& PartyMemberID, bool bDisableCrossPlay);
	void HandleDisableCrossPlayMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void BroadcastDisableCrossPlay();
	struct FString GetAnyLoggedInRestrictionPlayerName();
	struct FString GetAnyAppOwnerRestrictionPlayerName();
	struct FString GetMatchmakingRestrictionPlayerName(TEnumAsByte<EPartyMatchmakingRestriction> Restriction);
	struct FString GetMatchmakingRestrictionError();
	bool IsPlayerInMainMenu(const struct FUniqueNetId& MemberId);
	bool IsPlayerInMatch(const struct FUniqueNetId& MemberId);
	void SetAvailableForMatchmakingForMember(const struct FUniqueNetId& PartyMemberID, int MatchmakeRestrictions);
	void HandleMatchmakingAvailability(class UOnlineMessageComponent_X* Component, class UObject* Message);
	int BuildMatchmakingRestrictions();
	void BroadcastMatchmakingAvailabilityDelayed();
	void BroadcastMatchmakingAvailability();
	void BroadcastAllLocalPlayers(TArray<struct FPartyMember>* FilterLocal_29D8F5764ACC6A76F1F86095DE904C3C, TArray<struct FPartyMember>* FilterLocal_F3BDD53648420B6F86D87CAB78E86918);
	void BroadcastLocalPlayersDelayed();
	void BroadcastLocalPlayers();
	bool ShouldLeavePartyOnDisconnect();
	void HandlePsyNetLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	void HandleLocalPlayerLoginStatusChanged(class UOnlinePlayer_X* Player);
	void HandleLocalPlayerLeave(class ULocalPlayer* Player);
	void UpdatePartyMember(class ULocalPlayer_X* Player);
	void HandleOnlinePlayerNameChanged(class UOnlinePlayer_X* Player);
	void HandleLocalPlayerJoin(class ULocalPlayer* Player);
	void ProcessLocalPlayersMessage(class UPartyMessage_LocalPlayers_X* Message);
	void HandleLocalPlayers(class UOnlineMessageComponent_X* Component, class UObject* ObjMessage);
	bool AllowSplitScreenPlayer(int ControllerId, class UError** OutError);
	bool HasPartyMembers();
	int GetPartySize();
	void HandleSearchStatus(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void BroadcastSearchStatus();
	class UPartyMessage_SearchStatus_X* GetSearchStatusMessage();
	bool TogglePartyLock();
	int GetMaxPartySize();
	bool AllowPartySize(int InSize);
	bool IsPartyOverFull();
	bool AllowNewMember();
	void UpdatePartyLock();
	void HandleFindGameStateChanged(const struct FName& NewState);
	void ClearLastServerAddress(struct FPartyJoinMatchSettings* StructInitializer_5B139D594DB5002C6EE649A8A990A403, struct FPartyMemberServer* StructInitializer_F91A225A4C7453CF470FC891C6CB390A, struct FPartyMemberServer* StructInitializer_EB356E894AA2B6C9DEDBA59AEEA08BEA);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void OnNewSettingsChosen(int PlaylistId);
	void OnNewGame();
	void SetMatchmakingSearching(bool bState);
	void SetSearchState(const struct FName& SearchState);
	struct FUniqueNetId GetLocalMemberId();
	bool IsMemberLocal(const struct FUniqueNetId& MemberId);
	bool HasRemoteMember();
	void OnPartyLeaderChanged();
	void KickedFromParty(TEnumAsByte<ELobbyKickReason> Reason);
	void HandleKickMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void HandleLobbySettingsUpdateMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_LobbySettings_X* LobbySettingsMessage);
	void HandleLobbyDestroyed(struct FUniqueLobbyId* LobbyId, TEnumAsByte<ELobbyKickReason> Reason);
	void HandleLobbyReceiveBinaryData(struct FActiveLobbyInfo* LobbyInfo, int MemberIndex, TArray<unsigned char>* Data);
	void RemoveAllPartyMembers();
	void RemovePartyMemberByLocalPlayer(class ULocalPlayer* Player);
	void RemovePartyMemberByIDWithNotify(const struct FUniqueNetId& MemberId);
	void RemovePartyMemberByID(const struct FUniqueNetId& MemberId);
	int AddPartyMember(const struct FUniqueNetId& PrimaryMemberId, const struct FUniqueNetId& MemberId, const struct FString& MemberName, int ControllerId);
	void OnEditExistingPartyMember(int PartyMemberIdx);
	void OnAddNewPartyMember(int PartyMemberIdx);
	void UpdatePartyInfo(struct FActiveLobbyInfo* Lobby, TArray<struct FPartyMember>* FilterLocal_9338B40A47F165B2637A4F87AC7E8790);
	void UpdatePartyLeader(struct FActiveLobbyInfo* Lobby);
	void HandleLobbySettingsUpdated(struct FActiveLobbyInfo* Lobby);
	void OnNewLobby();
	void BroadcastPartyInfo();
	void HandleJoinLobby_ConnectionValid(const struct FString& LobbyError);
	void HandleJoinLobby(bool bWasSuccessful, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID, const struct FString& Error);
	void BroadcastStateDelayed();
	void BroadcastState();
	void HandleLobbyMemberStatusUpdate(struct FActiveLobbyInfo* LobbyInfo, int MemberIndex, int InstigatorIndex, const struct FString& Status);
	void CancelJoinGameFromPartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void HandlePartyJoinGameComplete(bool bSuccess, const struct FString& FailReason);
	void HandleConfirmJoinGame_ConnectionValid(const struct FPartyJoinMatchSettings& InSettings, struct FServerReservationData* StructInitializer_AB8C854745BEC9C722DF85A03CA7F332);
	void HandleConfirmJoinGame(const struct FPartyJoinMatchSettings& InSettings);
	bool JoinFriend(const struct FUniqueNetId& PartyMemberID);
	bool WantsToFollowTheLeaderOutOfGame();
	bool IsInSameMatch(const struct FUniqueNetId& PartyMemberA, const struct FUniqueNetId& PartymemberB);
	void HandlePartyJoinGame(class UOnlineMessageComponent_X* Component, class UPartyMessage_JoinGame_X* Message);
	bool CanBroadcastMatchmakingMessages();
	void BroadcastCancelJoinMessage();
	void BroadcastPartyServer();
	void HandleServerReserved();
	void HandleJoinGameComplete(bool bSuccess, const struct FString& FailReason);
	struct FPartyMemberServer GetPartyMemberServer(struct FPartyMemberServer* StructInitializer_2E3C58AB48B148272918D9AD06185C8D);
	void HandlePartyMemberJoinGame(class UOnlineMessageComponent_X* Component, class UPartyMessage_PartyMemberJoinGame_X* MessageObject);
	bool ClearServersForPostGameRankedMatch();
	bool SetPartyMemberJoinGame(struct FUniqueNetId* PlayerID, struct FPartyMemberServer* Server);
	void BroadcastPartyMemberServer(const struct FUniqueNetId& PlayerID, const struct FPartyMemberServer& Server);
	void BroadcastLobbySettings(const struct FActiveLobbyInfo& LobbyInfo);
	bool SetLeader(const struct FUniqueNetId& NewLeader);
	bool IsPrimaryPlayerIndex(int MemberIdx);
	bool IsPrimaryPlayer(struct FUniqueNetId* PlayerID);
	bool IsPlayerInParty(struct FUniqueNetId* PlayerID);
	bool KickPlayer(const struct FUniqueNetId& PlayerID, TEnumAsByte<ELobbyKickReason> Reason);
	bool ShowPlatformInviteUI(unsigned char LocalUserNum);
	struct FString GetShowPlatformInviteUIError();
	bool CanShowPlatformInviteUI();
	bool ShowInviteUI(unsigned char LocalUserNum);
	bool LeaveParty(const struct FString& Reason, struct FUniqueLobbyId* StructInitializer_D5E1D4EE43910906F2CFF490400ACA8F);
	bool IsInCurrentGame(const struct FUniqueNetId& MemberId);
	bool IsPartyLeader();
	bool IsInPartyID(const struct FUniqueLobbyId& InPartyId);
	bool IsInParty(struct FUniqueLobbyId* StructInitializer_C537957D42FCE99C50C2D7A27365ECD8);
	void JoinParty(int LocalPlayerNum, struct FUniqueLobbyId* InPartyId);
	void CheckPartyTimeout();
	void StartPartyTimeout();
	void OnPartyCreated(bool bWasSuccessful, struct FUniqueLobbyId* InPartyId, const struct FString& Error);
	void CreatePartyInternal_ConnectionChecked(class UError* ConnectionError, const TScriptInterface<class UOnlineLobbyInterface>& LobbyInterface, int LocalPlayerNum, const struct FScriptDelegate& Handler);
	void CreatePartyInternal(const TScriptInterface<class UOnlineLobbyInterface>& LobbyInterface, int LocalPlayerNum, const struct FScriptDelegate& Handler);
	void CreatePlatformParty(int LocalPlayerNum, const struct FScriptDelegate& Handler);
	void CreateParty(int LocalPlayerNum, const struct FScriptDelegate& Handler);
	TScriptInterface<class UOnlineLobbyInterface> GetCreatePartyLobbyInterface();
	bool ShouldCreatePsyNetParty();
	void SetLobbyInterfacePsyNet();
	void SetLobbyInterfacePlatform();
	void ShortCircuitPartyInvitedPrompt(struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* InviterId);
	void HandlePartySizeTracker(class UOnlineGameParty_X* PartyObject);
	void HandlePrimaryPlayerIdChanged(class UOnlineGameAccount_X* InAccount, const struct FUniqueNetId& PlayerID);
	class UPartyMetrics_X* GetMetrics();
	void SetLobbyInterface(const TScriptInterface<class UOnlineLobbyInterface>& Lobby);
	bool IsUsingPsyNetParty();
	void InitLobbyInterfaces();
	void OnExit();
	void OnInit();
	void EventStartedJoinFriend();
	void EventPlayerIsCurrentlyTrading(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId);
	void EventPlayerInMatchChanged(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId);
	void EventAnotherInviteToTrade(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId);
	void EventTradeReady(class UOnlineGameParty_X* PartyObject);
	void EventNotReadyToTrade(class UOnlineGameParty_X* PartyObject);
	void EventReadyToTrade(class UOnlineGameParty_X* PartyObject);
	void EventCloseInviteToTrade(class UOnlineGameParty_X* PartyObject, bool bWasCanceled);
	void EventAcceptedInviteToTrade(class UOnlineGameParty_X* PartyObject);
	void EventInviteToTrade(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId);
	void EventPlayerTradingChanged(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId, bool bIsPlayerTrading);
	void EventDisableCrossPlayChanged(class UOnlineGameParty_X* PartyObject);
	void EventProcessingStatusChanged(class UOnlineGameParty_X* PartyObject);
	void EventLeaderLeftOnlineGame(class UOnlineGameParty_X* PartyObject);
	void EventConfirmJoinGameMessage(class UOnlineGameParty_X* PartyObject);
	void EventPartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void EventPartyJoinGameSuccess(class UOnlineGameParty_X* PartyObject);
	void EventPartyJoinGameError(class UOnlineGameParty_X* PartyObject, const struct FString& LocalizedErrorString);
	void EventPartyError(class UOnlineGameParty_X* PartyObject, class UError* Error);
	void EventSearchStatusChanged(class UOnlineGameParty_X* PartyObject, class UPartyMessage_SearchStatus_X* StatusMessage);
	void EventPartyLeaderChanged(class UOnlineGameParty_X* PartyObject);
	void EventPartySizeChanged(class UOnlineGameParty_X* PartyObject, int NewSize, int OldSize);
	void EventPartyChanged(class UOnlineGameParty_X* PartyObject);
	void EventPlayerInvitedSilent(class UOnlineGameParty_X* PartyObject, struct FUniqueLobbyId* InPartyId, struct FUniqueNetId* InviterId, const struct FScriptDelegate& Callback);
	void EventPlayerInvited(class UOnlineGameParty_X* PartyObject, struct FUniqueLobbyId* InPartyId, struct FUniqueNetId* FriendId, const struct FScriptDelegate& Callback);
	void OnPartyInviteAccepted(int LocalPlayerNum, struct FUniqueLobbyId* InPartyId);
	void EventPartyCreated(class UOnlineGameParty_X* PartyObject, bool bWasSuccessful);
};

// Class ProjectX.ExplosionCollisionShapes_X
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UExplosionCollisionShapes_X : public UComponent
{
public:
	struct FVector                                     Location;                                                  // 0x0070(0x000C)
	float                                              GrowthAmount;                                              // 0x007C(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ExplosionCollisionShapes_X");
		return ptr;
	}


	void Destroy();
	void Init();
};

// Class ProjectX.DynamicValueModifier_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UDynamicValueModifier_X : public UObject
{
public:
	struct FString                                     DisplayName;                                               // 0x0060(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<EDynamicValueModType>                  Type;                                                      // 0x0070(0x0001) (Edit)
	unsigned char                                      UnknownDataMGDY[0x3];                                      // 0x0071(0x0003) MISSED OFFSET
	int                                                Priority;                                                  // 0x0074(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DynamicValueModifier_X");
		return ptr;
	}


	struct FString GetDebugValue();
	struct FString GetDebugString();
	bool Expired();
	float GetValue();
	void Tick(float DeltaTime);
};

// Class ProjectX.BoxCollisionShape_X
// 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
class UBoxCollisionShape_X : public UExplosionCollisionShapes_X
{
public:
	struct FVector                                     StartSize;                                                 // 0x0080(0x000C) (Edit)
	struct FVector                                     EndSize;                                                   // 0x008C(0x000C) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BoxCollisionShape_X");
		return ptr;
	}


};

// Class ProjectX.BlogTile_X
// 0x0086 (FullSize[0x00E6] - InheritedSize[0x0060])
class UBlogTile_X : public UObject
{
public:
	struct FString                                     Title;                                                     // 0x0060(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     DescriptionHeader;                                         // 0x0070(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     Description;                                               // 0x0080(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     WebURL;                                                    // 0x0090(0x0010) (NeedCtorLink, DataBinding)
	struct FString                                     CarName;                                                   // 0x00A0(0x0010) (NeedCtorLink, DataBinding)
	unsigned char                                      bOpenURLInCoherent : 1;                                    // 0x00B0(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataT8A3[0x2];                                      // 0x00B0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataWXU7[0x4];                                      // 0x00B4(0x0004) MISSED OFFSET
	struct FString                                     ImageURL;                                                  // 0x00B8(0x0010) (NeedCtorLink)
	struct FString                                     TileStartTimeUTC;                                          // 0x00C8(0x0010) (NeedCtorLink)
	struct FString                                     LiveStartTimeUTC;                                          // 0x00D8(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData50T1[0x8];                                      // 0x00E8(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.BlogTile_X.TileStartTimeSecondsUTC
	unsigned char                                      UnknownDataB6VS[0x8];                                      // 0x00F0(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.BlogTile_X.LiveStartTimeSecondsUTC


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BlogTile_X");
		return ptr;
	}


	void UTCtoEpoch();
	struct FString GetTileID();
};

// Class ProjectX.GoalCollisionShape_X
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UGoalCollisionShape_X : public UExplosionCollisionShapes_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GoalCollisionShape_X");
		return ptr;
	}


};

// Class ProjectX.RankedConfig_X
// 0x0030 (FullSize[0x00A6] - InheritedSize[0x0076])
class URankedConfig_X : public UOnlineConfig_X
{
public:
	int                                                ReconnectTimeoutSeconds;                                   // 0x0078(0x0004) (Edit)
	unsigned char                                      UnknownData2LIQ[0x4];                                      // 0x007C(0x0004) MISSED OFFSET
	TArray<int>                                        SkillTierToSeasonRewardLevel;                              // 0x0080(0x0010) (Edit, NeedCtorLink)
	TArray<int>                                        SeasonRewardRequiredWinsPerLevel;                          // 0x0090(0x0010) (Edit, NeedCtorLink)
	unsigned char                                      bCheckReservationID : 1;                                   // 0x00A0(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataDJEZ[0x2];                                      // 0x00A0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataZQFU[0x4];                                      // 0x00A4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownDataYAS8[0x8];                                      // 0x00A4(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RankedConfig_X.SeasonEndTimeSeconds


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RankedConfig_X");
		return ptr;
	}


	bool HasSeasonEnded();
	int GetSeasonTimeRemaining();
};

// Class ProjectX.SphereCollisionShape_X
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class USphereCollisionShape_X : public UExplosionCollisionShapes_X
{
public:
	float                                              StartRadius;                                               // 0x0080(0x0004) (Edit)
	float                                              EndRadius;                                                 // 0x0084(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SphereCollisionShape_X");
		return ptr;
	}


};

// Class ProjectX.DynamicValueModifierCurve_X
// 0x0024 (FullSize[0x009C] - InheritedSize[0x0078])
class UDynamicValueModifierCurve_X : public UDynamicValueModifier_X
{
public:
	struct FInterpCurveFloat                           Curve;                                                     // 0x0078(0x0018) (Edit, NeedCtorLink)
	struct FScriptDelegate                             __GetValueDelegate__Delegate;                              // 0x0090(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7S03[0xC];                                      // 0x0090(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DynamicValueModifierCurve_X");
		return ptr;
	}


	struct FString GetDebugValue();
	float GetValue();
	float GetValueDelegate();
};

// Class ProjectX.FXActorEvent_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UFXActorEvent_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.FXActorEvent_X");
		return ptr;
	}


};

// Class ProjectX.CountTrigger_X
// 0x0014 (FullSize[0x0084] - InheritedSize[0x0070])
class UCountTrigger_X : public UComponent
{
public:
	int                                                Threshold;                                                 // 0x0070(0x0004) (Edit)
	int                                                Count;                                                     // 0x0074(0x0004) (PrivateWrite)
	struct FScriptDelegate                             __EventTriggered__Delegate;                                // 0x0078(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5AIQ[0xC];                                      // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CountTrigger_X");
		return ptr;
	}


	void Reset();
	void Increment();
	void EventTriggered(class UCountTrigger_X* Trigger);
};

// Class ProjectX.DownloadedPlaylistsData_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UDownloadedPlaylistsData_X : public UObject
{
public:
	TArray<class UGameSettingPlaylist_X*>              Playlists;                                                 // 0x0060(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DownloadedPlaylistsData_X");
		return ptr;
	}


};

// Class ProjectX.__RPCQueue_X__CreateBatch_CDEA5F694C828C0063C073A0B5F66862
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__RPCQueue_X__CreateBatch_CDEA5F694C828C0063C073A0B5F66862 : public UObject
{
public:
	class URPCBatch_X*                                 Batch;                                                     // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__RPCQueue_X__CreateBatch_CDEA5F694C828C0063C073A0B5F66862");
		return ptr;
	}


	void __RPCQueue_X__CreateBatch_CDEA5F694C828C0063C073A0B5F66862(class UPsyNetMessage_X* Response, class UError* Error);
};

// Class ProjectX.FXAttachmentTraitBase_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UFXAttachmentTraitBase_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.FXAttachmentTraitBase_X");
		return ptr;
	}


	class UActorComponent* GetComponent();
	void Init();
};

// Class ProjectX.DynamicValueModifierDuration_X
// 0x0022 (FullSize[0x009A] - InheritedSize[0x0078])
class UDynamicValueModifierDuration_X : public UDynamicValueModifier_X
{
public:
	float                                              Duration;                                                  // 0x0078(0x0004) (Edit)
	float                                              Value;                                                     // 0x007C(0x0004) (Edit)
	struct FInterpCurveFloat                           CurveValue;                                                // 0x0080(0x0018) (Edit, NeedCtorLink)
	unsigned char                                      bUseCurve : 1;                                             // 0x0098(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataEJ1T[0x2];                                      // 0x0098(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DynamicValueModifierDuration_X");
		return ptr;
	}


	struct FString GetDebugString();
	float GetValue();
	bool Expired();
	void Tick(float DeltaTime);
};

// Class ProjectX.RPC_GetPopulation_X
// 0x003C (FullSize[0x0110] - InheritedSize[0x00D4])
class URPC_GetPopulation_X : public URPC_X
{
public:
	TArray<struct FGetPopulationData>                  Playlists;                                                 // 0x0100(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPopulation_X");
		return ptr;
	}


};

// Class ProjectX.RPC_PlayerCancelPrivateMatch_X
// 0x002C (FullSize[0x0100] - InheritedSize[0x00D4])
class URPC_PlayerCancelPrivateMatch_X : public URPC_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PlayerCancelPrivateMatch_X");
		return ptr;
	}


};

// Class ProjectX.GetPlayerStorageResult_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UGetPlayerStorageResult_X : public UObject
{
public:
	TArray<class UGetPlayerStorageResultItem_X*>       Items;                                                     // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GetPlayerStorageResult_X");
		return ptr;
	}


};

// Class ProjectX.GameEngine_X
// 0x0012 (FullSize[0x0B48] - InheritedSize[0x0B36])
class UGameEngine_X : public UGameEngine
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameEngine_X");
		return ptr;
	}


	void __GameEngine_X__Construct_1C822C45419B4A9AEF959BA4708A74A6(const struct FString& InURL);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void OnlineSubsystemInitialized();
	void Construct();
};

// Class ProjectX.OnlineGameWordFilter_X
// 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
class UOnlineGameWordFilter_X : public UOnline_X
{
public:
	TArray<struct FWordFilterPair>                     Filtered;                                                  // 0x0078(0x0010) (Transient, NeedCtorLink)
	class UWordFilterConfig_X*                         Config;                                                    // 0x0088(0x0008) (Edit)
	class UPsyNetWordFilter_X*                         PsyNetWordFilter;                                          // 0x0090(0x0008) (ExportObject, Component, EditInline)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameWordFilter_X");
		return ptr;
	}


	struct FString SanitizePhraseAndNotify(const struct FString& Comment, const struct FScriptDelegate& Callback);
	struct FString SanitizePhrase(const struct FString& Comment);
	class UError* CreateError(struct FWordFilterResult* Result, TEnumAsByte<EWordFilterUsage> Usage);
	bool IsChat(TEnumAsByte<EWordFilterUsage> Usage);
	void HandleCommentSanitized(const struct FString& Id, struct FWordFilterResult* Result);
	bool StartWordFilterTask(TEnumAsByte<EWordFilterUsage> Usage, const struct FString& Comment, const struct FScriptDelegate& SanitizeDelegate, const struct FUniqueNetId& PlayerID);
	struct FString InternalSanitize(const struct FString& Comment, const struct FScriptDelegate& Callback, const struct FScriptDelegate& ErrorCallback, TEnumAsByte<EWordFilterUsage> Usage, const struct FUniqueNetId& PlayerID);
	bool IsPending(const struct FString& Comment);
	struct FString Sanitize(TEnumAsByte<EWordFilterUsage> Usage, const struct FString& Comment, const struct FScriptDelegate& Callback, const struct FScriptDelegate& ErrorCallback, const struct FUniqueNetId& PlayerID);
	struct FString SanitizePlayerName(TEnumAsByte<EOnlinePlatform> PlayerPlatform, const struct FString& PlayerName, const struct FScriptDelegate& Callback, const struct FScriptDelegate& ErrorCallback, const struct FUniqueNetId& PlayerID);
	void OnMainMenuOpened();
};

// Class ProjectX.RPC_PlayerSearchPrivateMatch_X
// 0x003C (FullSize[0x0110] - InheritedSize[0x00D4])
class URPC_PlayerSearchPrivateMatch_X : public URPC_X
{
public:
	struct FString                                     Region;                                                    // 0x0100(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PlayerSearchPrivateMatch_X");
		return ptr;
	}


	class URPC_PlayerSearchPrivateMatch_X* SetRegion(const struct FString& InRegion);
};

// Class ProjectX.GetPlayerStorageResultItem_X
// 0x0027 (FullSize[0x0087] - InheritedSize[0x0060])
class UGetPlayerStorageResultItem_X : public UObject
{
public:
	struct FName                                       Category;                                                  // 0x0060(0x0008)
	int                                                Tick;                                                      // 0x0068(0x0004)
	unsigned char                                      UnknownDataLA5A[0x4];                                      // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     Data;                                                      // 0x0070(0x0010) (NeedCtorLink)
	int                                                Checksum;                                                  // 0x0080(0x0004)
	unsigned char                                      bChecksumMatch : 1;                                        // 0x0084(0x0001) BIT_FIELD
	unsigned char                                      UnknownData8WUK[0x2];                                      // 0x0084(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<EObjectEncoding>                       Encoding;                                                  // 0x0088(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GetPlayerStorageResultItem_X");
		return ptr;
	}


};

// Class ProjectX.GameSetting_X
// 0x0002 (FullSize[0x0062] - InheritedSize[0x0060])
class UGameSetting_X : public UObject
{
public:
	unsigned char                                      bHidden : 1;                                               // 0x0060(0x0001) BIT_FIELD (Edit, ProtectedWrite)
	unsigned char                                      UnknownData4LEG[0x2];                                      // 0x0060(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameSetting_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsSetting(const struct FName& SettingName);
	void AddGameSettingToList(class UOnlineGameSettings_X* OnlineGameSettings, TArray<class UGameSetting_X*>* GameSettingsArray);
};

// Class ProjectX.RPC_GetGameServerPingList_X
// 0x003C (FullSize[0x0110] - InheritedSize[0x00D4])
class URPC_GetGameServerPingList_X : public URPC_X
{
public:
	TArray<struct FGetGameServerPingListData>          Servers;                                                   // 0x0100(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetGameServerPingList_X");
		return ptr;
	}


	void OnSuccess();
};

// Class ProjectX.RegionPingMessage_X
// 0x0002 (FullSize[0x0062] - InheritedSize[0x0060])
class URegionPingMessage_X : public UObject
{
public:
	unsigned char                                      bIsResponse : 1;                                           // 0x0060(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataES92[0x2];                                      // 0x0060(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RegionPingMessage_X");
		return ptr;
	}


	class URegionPingMessage_X* SetIsResponse();
};

// Class ProjectX.PartyMessageQueue_X
// 0x0032 (FullSize[0x00A2] - InheritedSize[0x0070])
class UPartyMessageQueue_X : public UComponent
{
public:
	TArray<struct FPendingMessage>                     Pending;                                                   // 0x0070(0x0010) (Transient, NeedCtorLink)
	TArray<class UAsyncTask*>                          CurrentBatch;                                              // 0x0080(0x0010) (Transient, NeedCtorLink)
	unsigned char                                      bPaused : 1;                                               // 0x0090(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownDataRAJ5[0x2];                                      // 0x0090(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              BatchDelayTime;                                            // 0x0094(0x0004) (Edit)
	struct FScriptDelegate                             __SendMessageServiceDelegate__Delegate;                    // 0x0098(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataU0VJ[0xC];                                      // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessageQueue_X");
		return ptr;
	}


	void __PartyMessageQueue_X__CancelAll_5A847CB048B5B028C74CE6A73E715674(class UAsyncTask* Task);
	void HandleTaskComplete(class UAsyncTask* Task);
	class UAsyncTask* SendMessage(const struct FUniqueLobbyId& LobbyId, const struct FString& Message);
	void SendBatch();
	void SendBatchTimer();
	void QueueBatch();
	void CancelAll();
	void QueueMessage(const struct FUniqueLobbyId& LobbyId, const struct FString& Message);
	void SetPaused(bool bPause);
	class UAsyncTask* SendMessageServiceDelegate(const struct FUniqueLobbyId& LobbyId, const struct FString& Message);
};

// Class ProjectX.OnlinePlayerStorageManifest_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UOnlinePlayerStorageManifest_X : public UObject
{
public:
	TArray<struct UOnlinePlayerStorageManifest_X_FStorageMetadata> MetaData;                                                  // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerStorageManifest_X");
		return ptr;
	}


	bool ChecksumMatches(const struct FName& Category, int Checksum, TEnumAsByte<EObjectEncoding> Encoding);
	void SetChecksum(const struct FName& Category, int Checksum, TEnumAsByte<EObjectEncoding> Encoding);
	int GetIndex(const struct FName& Category);
};

// Class ProjectX.RegionPingData_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class URegionPingData_X : public UObject
{
public:
	struct FName                                       Address;                                                   // 0x0060(0x0008)
	int                                                PingsSent;                                                 // 0x0068(0x0004)
	int                                                PingsReceived;                                             // 0x006C(0x0004)
	float                                              LowestPing;                                                // 0x0070(0x0004)
	float                                              LastSendTime;                                              // 0x0074(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RegionPingData_X");
		return ptr;
	}


};

// Class ProjectX.RPC_PartyMessage_X
// 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
class URPC_PartyMessage_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                                   // 0x0110(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyMessage_X");
		return ptr;
	}


	class URPC_PartyMessage_X* SetMessage(const struct FString& InMessage);
};

// Class ProjectX.__PartyMessageQueue_X__SendMessage_74811D6041CBED7035D1668EA60FE3E1
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__PartyMessageQueue_X__SendMessage_74811D6041CBED7035D1668EA60FE3E1 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                      // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PartyMessageQueue_X__SendMessage_74811D6041CBED7035D1668EA60FE3E1");
		return ptr;
	}


	void __PartyMessageQueue_X__SendMessage_74811D6041CBED7035D1668EA60FE3E1(class UError* _);
};

// Class ProjectX.OnlineGamePrivileges_X
// 0x002E (FullSize[0x00A6] - InheritedSize[0x0078])
class UOnlineGamePrivileges_X : public UOnline_X
{
public:
	TArray<class UPrivilegeCheck_X*>                   PendingChecks;                                             // 0x0078(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	unsigned char                                      bIsCheckingPrivileges : 1;                                 // 0x0088(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData3BAV[0x2];                                      // 0x0088(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataOUM5[0x4];                                      // 0x008C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventCheckingPrivilegesChanged__Delegate;                // 0x0090(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData1MJS[0xC];                                      // 0x008C(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPrivilegeCheckRestriction__Delegate;                // 0x00A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData6E9U[0xC];                                      // 0x00A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGamePrivileges_X");
		return ptr;
	}


	bool IsCheckingPrivileges();
	void RemoveCallback(const struct FScriptDelegate& Callback);
	void HandlePrivilegeCheckFinished(class UPrivilegeCheck_X* PrivilegeCheck);
	class UPrivilegeCheck_X* CreatePrivilegeCheck(int ControllerId, const struct FScriptDelegate& Callback);
	void TryToUseUGC(int ControllerId, const struct FScriptDelegate& Callback);
	void TryToPlayOnline(int ControllerId, const struct FScriptDelegate& Callback);
	void TryToUsePsyNet(int ControllerId, const struct FScriptDelegate& Callback);
	void TryToViewLeaderboards(int ControllerId, const struct FScriptDelegate& Callback);
	void TryToBrowseInternet(int ControllerId, const struct FScriptDelegate& Callback);
	void EventPrivilegeCheckRestriction(class UPrivilegeCheck_X* Check);
	void EventCheckingPrivilegesChanged(class UOnlineGamePrivileges_X* PrivilegesObject);
};

// Class ProjectX.RPC_PlayerStorageGet_X
// 0x007C (FullSize[0x0150] - InheritedSize[0x00D4])
class URPC_PlayerStorageGet_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038)
	TArray<struct FGetPlayerStorageRequestItem>        Items;                                                     // 0x0138(0x0010) (NeedCtorLink)
	class UGetPlayerStorageResult_X*                   Result;                                                    // 0x0148(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PlayerStorageGet_X");
		return ptr;
	}


	void __RPC_PlayerStorageGet_X__OnSuccess_6DEC2B084B9CEADE97B448981D222D6E(class UGetPlayerStorageResultItem_X* Item);
	bool __RPC_PlayerStorageGet_X__OnSuccess_A3626732488E9B143684F7A42C5E2900(class UGetPlayerStorageResultItem_X* Item);
	void OnSuccess(TArray<class UGetPlayerStorageResultItem_X*>* FilterLocal_D7A6E36D46FF23EBF9C7068A4A19AF24);
	class UObject* GetResponseObject();
};

// Class ProjectX.GameSettingCategory_X
// 0x0024 (FullSize[0x0084] - InheritedSize[0x0060])
class UGameSettingCategory_X : public UObject
{
public:
	TArray<struct FName>                               SelectedNames;                                             // 0x0060(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	unsigned char                                      bHidden : 1;                                               // 0x0070(0x0001) BIT_FIELD (Edit, Const)
	unsigned char                                      UnknownDataOWPT[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bUseableWhileHidden : 1;                                   // 0x0070(0x0001) BIT_FIELD (Edit, Const)
	unsigned char                                      UnknownDataARIG[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData0YR5[0x4];                                      // 0x0074(0x0004) MISSED OFFSET
	TArray<class UGameSetting_X*>                      GameSettings;                                              // 0x0078(0x0010) (Edit, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameSettingCategory_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	int GetGameSettingIndex(const struct FName& SettingName);
	bool HasSetting(const struct FName& SettingName);
	void GetSelectedGameSettings(TArray<class UGameSetting_X*>* SelectedGameSettings);
	class UGameSetting_X* GetFirstSelectedGameSetting();
	void ClearSelected();
	void AddSelectedSetting(const struct FName& NewSelectedName);
	void SetGameSettings(TArray<class UGameSetting_X*> NewGameSettings);
};

// Class ProjectX.TAsyncResult__PsyNetMessage_X
// 0x0060 (FullSize[0x00FC] - InheritedSize[0x009C])
class UTAsyncResult__PsyNetMessage_X : public UAsyncTask
{
public:
	class UPsyNetMessage_X*                            Result;                                                    // 0x00D0(0x0008) (PrivateWrite)
	struct FScriptDelegate                             __EventResult__Delegate;                                   // 0x00D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataVOVD[0xC];                                      // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                           // 0x00F0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataBXUQ[0xC];                                      // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                                // 0x0108(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataYWJY[0xC];                                      // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TAsyncResult__PsyNetMessage_X");
		return ptr;
	}


	class UTAsyncResult__PsyNetMessage_X* CreateResultError(class UError* InError);
	class UTAsyncResult__PsyNetMessage_X* CreateResult(class UPsyNetMessage_X* InResult);
	class UTAsyncResult__PsyNetMessage_X* Copy();
	void ClearCallbacks();
	class UTAsyncResult__PsyNetMessage_X* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class UTAsyncResult__PsyNetMessage_X* SetResult(class UPsyNetMessage_X* InResult, class UError* InError);
	class UTAsyncResult__PsyNetMessage_X* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class UTAsyncResult__PsyNetMessage_X* NotifyOnResult(const struct FScriptDelegate& Callback);
	class UPsyNetMessage_X* ResultDelegate();
	void EventResultComplete(class UPsyNetMessage_X* OutResult, class UError* OutError);
	void EventResult(class UPsyNetMessage_X* OutResult);
};

// Class ProjectX.RegionPinger_X
// 0x004C (FullSize[0x00BC] - InheritedSize[0x0070])
class URegionPinger_X : public UComponent
{
public:
	float                                              MaxPing;                                                   // 0x0070(0x0004) (Edit)
	int                                                PingsPerRegion;                                            // 0x0074(0x0004) (Edit)
	float                                              DelayBetweenPings;                                         // 0x0078(0x0004) (Edit)
	unsigned char                                      UnknownDataWU3S[0x4];                                      // 0x007C(0x0004) MISSED OFFSET
	TArray<class URegionPingData_X*>                   ActivePings;                                               // 0x0080(0x0010) (NeedCtorLink)
	class UUdpPingBeaconClient_X*                      PingBeacon;                                                // 0x0090(0x0008) (ExportObject, Component, EditInline)
	int                                                TickIndex;                                                 // 0x0098(0x0004)
	unsigned char                                      UnknownData094A[0x4];                                      // 0x009C(0x0004) MISSED OFFSET
	TArray<class URegionPingData_X*>                   PingResults;                                               // 0x00A0(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __EventRegionsPinged__Delegate;                            // 0x00B0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataC0LY[0xC];                                      // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RegionPinger_X");
		return ptr;
	}


	class URegionPingData_X* __RegionPinger_X__PingRegions_75554D1048EB6570ED76F69A0225DED6(const struct FString& Address, class URegionPingData_X** ObjectInitializer_4455817D476A70C109F8B49B325EB6B4);
	void HandlePong(class UUdpPingBeaconClient_X* _, const struct FName& Address, float DeltaSeconds);
	void SendPing(int Idx);
	void Tick(float _);
	void StopPingBeacon();
	void StartPingBeacon();
	void PingRegions(TArray<struct FString>* Addresses, TArray<class URegionPingData_X*>* MapLocal_4776A3994D2DE5399BFDB09C49D1DA7C);
	void EventRegionsPinged(class URegionPinger_X* Pinger);
};

// Class ProjectX.BeaconConfig_X
// 0x0002 (FullSize[0x0078] - InheritedSize[0x0076])
class UBeaconConfig_X : public UOnlineConfig_X
{
public:
	unsigned char                                      bUdpPingRegions : 1;                                       // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataR6U8[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bUdpPingMetrics : 1;                                       // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataYCIQ[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BeaconConfig_X");
		return ptr;
	}


};

// Class ProjectX.RPC_ReportCheater_X
// 0x0074 (FullSize[0x0148] - InheritedSize[0x00D4])
class URPC_ReportCheater_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038) (PrivateWrite)
	struct FString                                     Reason;                                                    // 0x0138(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ReportCheater_X");
		return ptr;
	}


	class URPC_ReportCheater_X* SetReason(const struct FString& InReason);
	class URPC_ReportCheater_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.PartySequence_CreateParty_X
// 0x0014 (FullSize[0x0074] - InheritedSize[0x0060])
class UPartySequence_CreateParty_X : public UObject
{
public:
	class URPC_PartyCreate_X*                          PendingRPC;                                                // 0x0060(0x0008)
	struct FScriptDelegate                             __EventPartyCreated__Delegate;                             // 0x0068(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataR8HM[0xC];                                      // 0x0068(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartySequence_CreateParty_X");
		return ptr;
	}


	void __PartySequence_CreateParty_X__CreateParty_D406EBD743966ABBC27A86B6862A762C(class URPC_X* _);
	void HandleCreatePartyComplete();
	void HandlePlatformPartyCreated(bool bWasSuccessful, struct FUniqueLobbyId* PlatformPartyID, const struct FString& Error);
	class UAsyncTask* CreateParty(int LocalPlayerNum, int MaxPlayers, TEnumAsByte<ELobbyVisibility> Type, TArray<struct FLobbyMetaData> InitialSettings);
	void EventPartyCreated(const struct FUniqueLobbyId& PsyNetPartyId, TArray<struct FPsyNetPartyMember>* Members);
};

// Class ProjectX.OnlineGameReservations_AssignTeamsByParty_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UOnlineGameReservations_AssignTeamsByParty_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameReservations_AssignTeamsByParty_X");
		return ptr;
	}


	int PartySort(const struct FPartyByTeam& Left, const struct FPartyByTeam& Right);
	void AssignTeams(int TeamSize, TArray<struct FReservationData>* TestPlayers);
};

// Class ProjectX.PsyNetServiceSubscriptions_X
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UPsyNetServiceSubscriptions_X : public UComponent
{
public:
	TArray<struct FServiceSubscription>                Subscriptions;                                             // 0x0070(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetServiceSubscriptions_X");
		return ptr;
	}


	void NotifyServiceExecuted(class UPsyNetClientService_X* Service);
	void UnsubscribeAll(class UObject* Listener);
	void Unsubscribe(const struct FScriptDelegate& Callback);
	void Subscribe(class UClass* ServiceClass, const struct FScriptDelegate& Callback);
};

// Class ProjectX.OnlinePlayerStorageSync_X
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class UOnlinePlayerStorageSync_X : public UObject
{
public:
	struct FScriptDelegate                             __EventSyncSuccess__Delegate;                              // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataKR39[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerStorageSync_X");
		return ptr;
	}


	void __OnlinePlayerStorageSync_X__HandleSyncSuccess_980EB46F4598BE30C38935BC88A9E772(const struct FOnlinePlayerStorageSyncResult& Result);
	class UObject* InstanceSyncData(class UObject* LocalObject, class UDecodeObject_X* DecodeObj);
	void HandleSyncSuccess(class URPC_PlayerStorageGet_X* RPC, class UAsyncTask* ResponseTask, struct FOnlinePlayerStorageSyncResult* StructInitializer_34622D464E30663CD4D730B8E2B1EA46);
	int CrcObject(TEnumAsByte<EObjectEncoding> Encoding, class UObject* Data);
	struct FGetPlayerStorageRequestItem MapRequestItem(const struct FOnlinePlayerStorageSyncRequest& Request, struct FGetPlayerStorageRequestItem* StructInitializer_9FFE7E6F478F7E6B306D3FB556D8D25C);
	class UAsyncTask* SyncObjects(TArray<struct FOnlinePlayerStorageSyncRequest>* Requests, class URPC_PlayerStorageGet_X** ObjectInitializer_E96965E54462B2CC76F4BE8DDAD5409D, TArray<struct FGetPlayerStorageRequestItem>* MapLocal_837E92B3456D2F9C4CAE68BB5399ED9F);
	void EventSyncSuccess(struct FOnlinePlayerStorageSyncResult* Result);
};

// Class ProjectX.OnlinePlayerStorageConfig_X
// 0x0006 (FullSize[0x007C] - InheritedSize[0x0076])
class UOnlinePlayerStorageConfig_X : public UOnlineConfig_X
{
public:
	float                                              QueueBatchDelay;                                           // 0x0078(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerStorageConfig_X");
		return ptr;
	}


};

// Class ProjectX.RandomStream_X
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class URandomStream_X : public UObject
{
public:
	struct FRandomStream_Mirror                        Stream;                                                    // 0x0060(0x0004) (Native)
	int                                                CurrentSeed;                                               // 0x0064(0x0004) (Transient, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RandomStream_X");
		return ptr;
	}


	void SetCurrentSeed(int NewSeed);
	float GetNextValue();
};

// Class ProjectX.SaveLock_X
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class USaveLock_X : public UObject
{
public:
	class UGFxEngine_X*                                GFxEngine;                                                 // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SaveLock_X");
		return ptr;
	}


	bool StaticAllowSave();
	bool AllowSave();
};

// Class ProjectX.RenderProfiler_X
// 0x00FE (FullSize[0x029A] - InheritedSize[0x019C])
class ARenderProfiler_X : public AActor
{
public:
	float                                              TimePerPrimitive;                                          // 0x0268(0x0004) (Edit)
	unsigned char                                      UnknownDataSC02[0x4];                                      // 0x026C(0x0004) MISSED OFFSET
	TArray<struct FPrimitiveComponentProfile>          PrimitiveProfiles;                                         // 0x0270(0x0010) (Transient, Component, NeedCtorLink)
	int                                                CurrentIndex;                                              // 0x0280(0x0004) (Transient)
	unsigned char                                      bInclusive : 1;                                            // 0x0284(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataWM6O[0x2];                                      // 0x0284(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              PrimitiveTime;                                             // 0x0288(0x0004) (Transient)
	unsigned char                                      UnknownData0DTE[0x4];                                      // 0x028C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventFinished__Delegate;                                 // 0x0290(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData2A4P[0xC];                                      // 0x028C(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RenderProfiler_X");
		return ptr;
	}


	void SetupPlayers();
	void PostBeginPlay();
	void EventFinished(class ARenderProfiler_X* Profiler);
};

// Class ProjectX.PartySequence_JoinParty_X
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class UPartySequence_JoinParty_X : public UObject
{
public:
	struct FScriptDelegate                             __EventJoinedParty__Delegate;                              // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataTHSI[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartySequence_JoinParty_X");
		return ptr;
	}


	void HandlePlatformPartyCreated(bool bWasSuccessful, struct FUniqueLobbyId* PlatformPartyID, const struct FString& Error);
	void HandleJoinLobby(bool bWasSuccessful, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID, const struct FString& Error);
	void HandleGetPlatformPartyResponseMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_GetPlatformPartyResponse_X* Message, struct FUniqueLobbyId* StructInitializer_9031B418494E50B998F3598583A5268A);
	void HandleGetPlatformPartyMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_GetPlatformParty_X* Message, class UPartyMessage_GetPlatformPartyResponse_X** ObjectInitializer_E55A26A948B23F56DEBDFC8EA80EAA88);
	void HandlePsyNetLobbyJoinSucceeded(class URPC_PartyJoin_X* RpcPartyJoin, struct FLobbyMetaData* StructInitializer_AF8860CB41FB42A2428EED8AA2DC448C, struct FLobbyMetaData* StructInitializer_2EE7615644C3661B6F7BFFB408A2DE6D);
	class UAsyncTask* JoinLobbyWithKey(const struct FString& PsyNetPartyId, const struct FString& JoinKey);
	class UAsyncTask* JoinLobby(struct FUniqueLobbyId* LobbyId);
	void Init();
	void EventJoinedParty(const struct FUniqueLobbyId& PsyNetPartyId, TArray<struct FPsyNetPartyMember>* Members);
};

// Class ProjectX.PartySequence_LeaveParty_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPartySequence_LeaveParty_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartySequence_LeaveParty_X");
		return ptr;
	}


	void LeaveParty(struct FUniqueLobbyId* LobbyId);
};

// Class ProjectX.GameViewportClient_X
// 0x00A6 (FullSize[0x027E] - InheritedSize[0x01D8])
class UGameViewportClient_X : public UGameViewportClient
{
public:
	unsigned char                                      bHandCursor : 1;                                           // 0x0248(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataXPP5[0x2];                                      // 0x0248(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                MaxSplitScreenPlayers;                                     // 0x024C(0x0004) (Const)
	struct FScriptDelegate                             __EventLocalPlayerJoin__Delegate;                          // 0x0250(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataUCID[0xC];                                      // 0x0250(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLocalPlayerLeave__Delegate;                         // 0x0268(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData2G1G[0xC];                                      // 0x0268(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventNotifyConnectionError__Delegate;                    // 0x0280(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataVXQG[0xC];                                      // 0x0280(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPrimaryPlayerChange__Delegate;                      // 0x0298(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData2O68[0xC];                                      // 0x0298(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameViewportClient_X");
		return ptr;
	}


	void OnPrimaryPlayerSwitch(class ULocalPlayer* OldPrimaryPlayer, class ULocalPlayer* NewPrimaryPlayer);
	bool ForceRemovePlayer(class ULocalPlayer* ExPlayer);
	bool RemovePlayer(class ULocalPlayer* ExPlayer);
	bool RemovePlayerByID(int ControllerId);
	void SetHardwareMouseCursorVisibility(bool bIsVisible);
	void NotifyConnectionError(TEnumAsByte<EProgressMessageType> MessageType, const struct FString& Message, const struct FString& Title);
	void SetProgressMessage(TEnumAsByte<EProgressMessageType> MessageType, const struct FString& Message, const struct FString& Title, bool bIgnoreFutureNetworkMessages);
	class ULocalPlayer* CreatePlayer(int ControllerId, struct FString* OutError, bool bSpawnActor);
	void NotifyPlayerRemoved(int PlayerIndex, class ULocalPlayer* RemovedPlayer);
	void NotifyPlayerAdded(int PlayerIndex, class ULocalPlayer* AddedPlayer);
	bool IsGameRecordingEnabled();
	float GetDefaultSafeZone();
	void FlashWindow();
	void SaveCurrentWindowState();
	void SaveWindowState(int ResX, int ResY, bool bFullScreen, bool bBorderless, bool bVsync);
	bool GetAvailableResolutions(TArray<struct FIntPoint>* Resolutions);
	bool GetAvailableResolutionsStr(TArray<struct FString>* Resolutions);
	bool IsBorderlessViewport();
	struct FIntPoint GetViewportSizePoint();
	struct FString GetViewportSizeStr();
	class UGameViewportClient_X* GetInstance();
	void EventPrimaryPlayerChange(class ULocalPlayer* OldPrimaryPlayer, class ULocalPlayer* NewPrimaryPlayer);
	void EventNotifyConnectionError(TEnumAsByte<EProgressMessageType> MessageType, const struct FString& Title, const struct FString& Message);
	void EventLocalPlayerLeave(class ULocalPlayer* OldPlayer);
	void EventLocalPlayerJoin(class ULocalPlayer* NewPlayer);
};

// Class ProjectX.EncodeObjectFactory_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UEncodeObjectFactory_X : public UObject
{
public:
	class UJSONSerializer_X*                           JsonSerializer;                                            // 0x0060(0x0008) (Edit, PrivateWrite)
	class UObjectSerializer_X*                         ObjectSerializer;                                          // 0x0068(0x0008) (Edit, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EncodeObjectFactory_X");
		return ptr;
	}


	class UDecodeObject_X* DecodeObject(TEnumAsByte<EObjectEncoding> Encoding, struct FString* Stream, int RequestChecksum, class UDecodeObjectJson_X** ObjectInitializer_7BB5114946D700AB7132FB97F344C001, class UDecodeObjectUObject_X** ObjectInitializer_3032F7EF48C226F6024658A6D82968FB);
	class UEncodeObject_X* EncodeObject(TEnumAsByte<EObjectEncoding> Encoding, class UObject* Target, class UEncodeObjectJson_X** ObjectInitializer_D4B10BD540DC5DE4FDFC158038789B44, class UEncodeObjectUObject_X** ObjectInitializer_481CF44545964E1790CB0C907046B73D);
};

// Class ProjectX.RPC_PartyChat_X
// 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
class URPC_PartyChat_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                                   // 0x0110(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyChat_X");
		return ptr;
	}


	class URPC_PartyChat_X* SetText(const struct FString& InText);
};

// Class ProjectX.ReservationsSettingUpMatchMessage_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UReservationsSettingUpMatchMessage_X : public UBeaconMessage_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsSettingUpMatchMessage_X");
		return ptr;
	}


};

// Class ProjectX.__RPC_X__CreateTask_8DB705EF44B212C367AFEB9F2B8EDA02
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class U__RPC_X__CreateTask_8DB705EF44B212C367AFEB9F2B8EDA02 : public UObject
{
public:
	struct FScriptDelegate                             InCallback;                                                // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataMHTP[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__RPC_X__CreateTask_8DB705EF44B212C367AFEB9F2B8EDA02");
		return ptr;
	}


	void __RPC_X__CreateTask_8DB705EF44B212C367AFEB9F2B8EDA02(class UError* Err);
};

// Class ProjectX.__OnlinePlayerStorageQueue_X__HandleStorageSuccess_19ED80E340BD5082298343BA27D938B2
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class U__OnlinePlayerStorageQueue_X__HandleStorageSuccess_19ED80E340BD5082298343BA27D938B2 : public UObject
{
public:
	TArray<struct FSetPlayerStorageResultItem>         OutOfSync;                                                 // 0x0060(0x0010) (NeedCtorLink)
	class URPC_PlayerStorageSet_X*                     RPC;                                                       // 0x0070(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerStorageQueue_X__HandleStorageSuccess_19ED80E340BD5082298343BA27D938B2");
		return ptr;
	}


	void __OnlinePlayerStorageQueue_X__HandleStorageSuccess_1D14F76D47BC820255520A86C132D912(const struct FSetPlayerStorageResultItem& R);
	bool __OnlinePlayerStorageQueue_X__HandleStorageSuccess_19ED80E340BD5082298343BA27D938B2(const struct FSetPlayerStorageRequestItem& R);
};

// Class ProjectX.RPC_PartyChangeOwner_X
// 0x00A8 (FullSize[0x01B8] - InheritedSize[0x0110])
class URPC_PartyChangeOwner_X : public URPC_PartyBase_X
{
public:
	struct FUniqueNetId                                NewOwnerId;                                                // 0x0110(0x0038)
	struct FPsyNetPartyInfo                            Info;                                                      // 0x0148(0x0060) (Transient, NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Members;                                                   // 0x01A8(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyChangeOwner_X");
		return ptr;
	}


	class URPC_PartyChangeOwner_X* SetNewOwnerId(const struct FUniqueNetId& InNewOwnerId);
};

// Class ProjectX.GFxDataRow_X
// 0x0032 (FullSize[0x0092] - InheritedSize[0x0060])
class UGFxDataRow_X : public UObject
{
public:
	struct FName                                       TableName;                                                 // 0x0060(0x0008) (Edit, Const)
	struct FName                                       PrimaryKeyName;                                            // 0x0068(0x0008) (Edit, Const)
	class UClass*                                      ProxyClass;                                                // 0x0070(0x0008) (Edit, Const)
	unsigned char                                      bLevelTransitionPersistent : 1;                            // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataRRHQ[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataYOSS[0x4];                                      // 0x007C(0x0004) MISSED OFFSET
	class UObject*                                     ProxyObject;                                               // 0x0080(0x0008) (Const, Transient)
	class UGFxShell_X*                                 Shell;                                                     // 0x0088(0x0008) (Const, Transient)
	int                                                RowIndex;                                                  // 0x0090(0x0004) (Const, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxDataRow_X");
		return ptr;
	}


	class UGFxObject* FlashEventObject();
	struct FString FlashEventString();
	float FlashEventFloat();
	int FlashEventInt();
	void FlashEventVoid();
	void SetProxy(class UObject* InProxyObject);
	void OnRemoved();
	void OnShellSet();
};

// Class ProjectX.__OnlinePlayerStorageQueue_X__MapResultItem_8C242D904381394D87E8FA9840635616
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__OnlinePlayerStorageQueue_X__MapResultItem_8C242D904381394D87E8FA9840635616 : public UObject
{
public:
	struct FSetPlayerStorageResultItem                 Item;                                                      // 0x0060(0x0010)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerStorageQueue_X__MapResultItem_8C242D904381394D87E8FA9840635616");
		return ptr;
	}


	bool __OnlinePlayerStorageQueue_X__MapResultItem_8C242D904381394D87E8FA9840635616(const struct FPendingStorage& P);
};

// Class ProjectX.GFxDataSingleton_X
// 0x0002 (FullSize[0x0094] - InheritedSize[0x0092])
class UGFxDataSingleton_X : public UGFxDataRow_X
{
public:
	unsigned char                                      UnknownData7LJL[0x4];                                      // 0x0094(0x0004) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxDataSingleton_X");
		return ptr;
	}


};

// Class ProjectX.__OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes_9DCAE35F44F7052F1121988F0B2D8808
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes_9DCAE35F44F7052F1121988F0B2D8808 : public UObject
{
public:
	struct FName                                       Category;                                                  // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes_9DCAE35F44F7052F1121988F0B2D8808");
		return ptr;
	}


	bool __OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes_9DCAE35F44F7052F1121988F0B2D8808(const struct FStorageMaxSize& C);
};

// Class ProjectX.OnlinePlayerFriends_X
// 0x0138 (FullSize[0x01B0] - InheritedSize[0x0078])
class UOnlinePlayerFriends_X : public UOnline_X
{
public:
	unsigned char                                      bAllowSamePlatformPsyNetFriends : 1;                       // 0x0078(0x0001) BIT_FIELD (Config)
	unsigned char                                      UnknownDataOBTT[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bRepeatFriendsListDownloadsUntilSuccess : 1;               // 0x0078(0x0001) BIT_FIELD (Const, Config)
	unsigned char                                      UnknownDataWYJS[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataCQ1M[0x4];                                      // 0x007C(0x0004) MISSED OFFSET
	class UOnlineFriendMap_X*                          CachedFriends;                                             // 0x0080(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UOnlineFriendMap_X*                          PlatformFriends;                                           // 0x0088(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UOnlineFriendMap_X*                          PsyNetFriends;                                             // 0x0090(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UOnlineFriendMap_X*                          BlockedPlayers;                                            // 0x0098(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class URetryDelayer_X*                             PlatformFriendsDownloadDelayer;                            // 0x00A0(0x0008) (ExportObject, Component, EditInline)
	class URetryDelayer_X*                             PsyNetFriendsDownloadDelayer;                              // 0x00A8(0x0008) (ExportObject, Component, EditInline)
	class URetryDelayer_X*                             BlockedListDownloadDelayer;                                // 0x00B0(0x0008) (ExportObject, Component, EditInline)
	TArray<struct FUniqueNetId>                        PendingFriendAccepts;                                      // 0x00B8(0x0010) (NeedCtorLink)
	class UOSSConfig_X*                                OSSConfig;                                                 // 0x00C8(0x0008) (Edit)
	struct FScriptDelegate                             __EventFriendsListChanged__Delegate;                       // 0x00D0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData2440[0xC];                                      // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetPlayerSearch__Delegate;                       // 0x00E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataCRDG[0xC];                                      // 0x00E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetPendingFriendRequests__Delegate;              // 0x0100(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataVT6M[0xC];                                      // 0x0100(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetBlockedListDownloadComplete__Delegate;        // 0x0118(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataKQ4P[0xC];                                      // 0x0118(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetBlockedListChanged__Delegate;                 // 0x0130(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData1OQK[0xC];                                      // 0x0130(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetBlockedPlayer__Delegate;                      // 0x0148(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataFU1Z[0xC];                                      // 0x0148(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetUnblockedPlayer__Delegate;                    // 0x0160(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataE7IC[0xC];                                      // 0x0160(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAcceptFriendRequest__Delegate;                      // 0x0178(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataLIWG[0xC];                                      // 0x0178(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDeclinePsyNetFriendRequest__Delegate;               // 0x0190(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData2R05[0xC];                                      // 0x0190(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventChatMessage__Delegate;                              // 0x01A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataED8V[0xC];                                      // 0x01A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAcceptedFriendRequest__Delegate;                    // 0x01C0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataWFC5[0xC];                                      // 0x01C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetStatusUpdate__Delegate;                       // 0x01D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataEGJG[0xC];                                      // 0x01D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetPsyTagUpdate__Delegate;                       // 0x01F0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData440Y[0xC];                                      // 0x01F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlatformStatusUpdate__Delegate;                     // 0x0208(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData9QGI[0xC];                                      // 0x0208(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventIncomingFriendRequest__Delegate;                    // 0x0220(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataCFVE[0xC];                                      // 0x0220(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerUnfriended__Delegate;                         // 0x0238(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataIB5N[0xC];                                      // 0x0238(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventRemotePlayerUnfriended__Delegate;                   // 0x0250(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData60T3[0xC];                                      // 0x0250(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlatformFriendsListDownloadCompleted__Delegate;     // 0x0268(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData08KX[0xC];                                      // 0x0268(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetFriendsListDownloadCompleted__Delegate;       // 0x0280(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataQ5YA[0xC];                                      // 0x0280(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerFriends_X");
		return ptr;
	}


	void __OnlinePlayerFriends_X__OnInit_CEDDC8024D4EC33A6DA98FB7B52F7DF2(class UPsyNetService_IncomingFriendRequest_X* N);
	void __OnlinePlayerFriends_X__OnInit_B4D6D3E34990A31CF6D277982A1F6BDC(class UPsyNetService_FriendStatusUpdate_X* N);
	void __OnlinePlayerFriends_X__OnInit_AF2A2D384A8465EA9A2EE39ADAEB4E06(class UPsyNetService_FriendChatReceived_X* N);
	void RebuildFriendsCache();
	void RemovePsyNetFriendLocally(const struct FUniqueNetId& RemovedID);
	void HandleRemoteUnfriend(class UPsyNetService_PlayerUnfriended_X* Service);
	void HandlePsyNetAcceptRequest(class URPC_PsyNetFriendRequestAccept_X* RPC);
	void HandlePsyNetFriendAcceptedRequest(class UPsyNetService_FriendAcceptedRequest_X* Service);
	void SendChatMessage(const struct FString& InMessage, const struct FUniqueNetId& Recipient);
	void ShowPlayerCard(const struct FUniqueNetId& FriendId, const struct FString& FriendName);
	void SetPlatformRichPresence(unsigned char LocalUserNum, const struct FString& PresenceString, const struct FString& GameDataString);
	void HandleRemovePsyNetFriendSuccess(class URPC_PsyNetRemoveFriend_X* RPC);
	void RemovePsyNetFriend(const struct FUniqueNetId& FriendId);
	void DeclinePsyNetFriendRequest(const struct FUniqueNetId& FriendId, const struct FScriptDelegate& CompleteCallback);
	void AcceptPsyNetFriendRequest(const struct FUniqueNetId& FriendId, const struct FScriptDelegate& Callback);
	class UAsyncTask* AddPsyNetFriend(const struct FUniqueNetId& FriendId);
	bool UsePlatformFriendSystem(const struct FUniqueNetId& FriendId);
	void DownloadPendingFriendRequests(const struct FScriptDelegate& Callback);
	class UAsyncTask* SearchForPlayerByName(const struct FString& FriendName, const struct FScriptDelegate& Callback);
	bool IsFriend(const struct FUniqueNetId& FriendId);
	bool IsPsyNetFriend(const struct FUniqueNetId& FriendId);
	void HandleFriendsChange();
	void ConditionalUpdateFriendInMap(class UOnlineFriendMap_X* FriendMap, const struct FOnlineFriend& NewFriendData);
	void HandlePsyTagUpdated(class UPsyNetService_FriendPsyTagUpdated_X* Notification);
	void HandlePlatformPresenceChange(const struct FUniqueNetId& FriendId);
	struct FOnlineStatus ExtractStatusData(const struct FOnlineFriend& InFriend);
	void HandleReadPsyNetFriendsAbandoned();
	void HandleReadPsyNetFriendsFail(class URPC_PsyNetReadFriends_X* RPC);
	void HandleReadPsyNetFriendsSuccess(class URPC_PsyNetReadFriends_X* RPC);
	void DownloadPsyNetFriendsList();
	void BeginPsyNetFriendsDownloadAttempts();
	void UpdateFriendsFromOnlineSub();
	void OnPlatformFriendsDownloadAbandoned();
	void HandleDownloadPlatformFriendsTryComplete(bool bSuccess);
	void DownloadPlatformFriendsList();
	void BeginDownloadPlatformFriendsListAttempts();
	void UnblockPlayer(const struct FUniqueNetId& UnblockID, const struct FScriptDelegate& Callback);
	void BlockPlayer(const struct FUniqueNetId& BlockedID, const struct FString& BlockedPlayerName, const struct FPsyTag& BlockedTag, const struct FScriptDelegate& Callback);
	void OnBlockedListDownloadAbandoned(const struct FScriptDelegate& Callback);
	void HandleDownloadBlockedListAttemptComplete(class URPC_GetBlockList_X* RPC, const struct FScriptDelegate& Callback);
	void DownloadBlockedListAttempt(const struct FScriptDelegate& Callback);
	void DownloadBlockedList(const struct FScriptDelegate& Callback);
	void HandlePsyNetConnected(class UPsyNetConnection_X* C);
	TEnumAsByte<EOnlineFriendState> GetFriendState(const struct FString& PresenceState);
	struct FOnlineFriend ConvertPsyNetResponseToOnlineFriend(const struct FPsyNetPersonaData& InData, struct FOnlineFriend* StructInitializer_2205C7EA4BEE14410C8472B5752280BE);
	void Construct();
	void HandleOSSConfigChanged(class UOSSConfig_X* InOSSConfig);
	void OnInit();
	void EventPsyNetFriendsListDownloadCompleted(bool bSuccess);
	void EventPlatformFriendsListDownloadCompleted(bool bSuccess);
	void EventRemotePlayerUnfriended(const struct FUniqueNetId& RemoteId);
	void EventPlayerUnfriended(const struct FUniqueNetId& SenderId);
	void EventIncomingFriendRequest(const struct FOnlineFriend& FriendData);
	void EventPlatformStatusUpdate(const struct FOnlineStatus& StatusData);
	void EventPsyNetPsyTagUpdate(struct FOnlineFriend* FriendData);
	void EventPsyNetStatusUpdate(const struct FOnlineStatus& StatusData);
	void EventAcceptedFriendRequest(const struct FOnlineFriend& FriendData);
	void EventChatMessage(const struct FString& InMessage, const struct FUniqueNetId& SenderId, bool bIsLocal);
	void EventDeclinePsyNetFriendRequest(const struct FUniqueNetId& DeclinedID, class UError* RequestError);
	void EventAcceptFriendRequest(const struct FOnlineFriend& FriendData, class UError* RequestError);
	void EventPsyNetUnblockedPlayer(const struct FUniqueNetId& BlockedID, class UError* RequestError);
	void EventPsyNetBlockedPlayer(const struct FUniqueNetId& BlockedID, class UError* RequestError);
	void EventPsyNetBlockedListChanged(class UOnlinePlayerFriends_X* FriendsObject);
	void EventPsyNetBlockedListDownloadComplete(class UError* RequestError);
	void EventPsyNetPendingFriendRequests(TArray<struct FOnlineFriend>* FriendData);
	void EventPsyNetPlayerSearch(TArray<struct FOnlineFriend>* FriendData, const struct FString& SearchString);
	void EventFriendsListChanged(class UOnlinePlayerFriends_X* FriendsRef, class UError* Error);
};

// Class ProjectX.__OnlinePlayerStorageSync_X__SyncObjects_FBF8999A4046F98970A826891E8088B8
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__OnlinePlayerStorageSync_X__SyncObjects_FBF8999A4046F98970A826891E8088B8 : public UObject
{
public:
	class UAsyncTask*                                  ResponseTask;                                              // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerStorageSync_X__SyncObjects_FBF8999A4046F98970A826891E8088B8");
		return ptr;
	}


	void __OnlinePlayerStorageSync_X__SyncObjects_FBF8999A4046F98970A826891E8088B8(class URPC_X* RPC);
};

// Class ProjectX.PartySequence_InviteToParty_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPartySequence_InviteToParty_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartySequence_InviteToParty_X");
		return ptr;
	}


	void __PartySequence_InviteToParty_X__InviteToPsyNetParty_3CC17BF140F812DB703D23998E0B8CD4(class URPC_PartySendInvite_X* RPC);
	void __PartySequence_InviteToParty_X__InviteToPsyNetParty_50397FCB4122D0EE9052108E2748A101(class URPC_PartySendInvite_X* RPC);
	bool InviteToPsyNetParty(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
	bool InviteToParty(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
};

// Class ProjectX.OnlineGameRegions_X
// 0x0070 (FullSize[0x00E8] - InheritedSize[0x0078])
class UOnlineGameRegions_X : public UOnline_X
{
public:
	float                                              PingRegionsCacheTime;                                      // 0x0078(0x0004) (Edit)
	float                                              LastPingRegionsTime;                                       // 0x007C(0x0004) (Transient)
	int                                                RegionIdxPingCur;                                          // 0x0080(0x0004)
	unsigned char                                      UnknownDataFLFW[0x4];                                      // 0x0084(0x0004) MISSED OFFSET
	class URegionConfig_X*                             Config;                                                    // 0x0088(0x0008) (PrivateWrite)
	TArray<class URegionPing_X*>                       RegionPings;                                               // 0x0090(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FCachedRegionPing>                   CachedRegionPings;                                         // 0x00A0(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	class UTcpMessageBeacon*                           Beacon;                                                    // 0x00B0(0x0008) (ExportObject, Component, EditInline)
	class UBeaconConfig_X*                             BeaconConfig;                                              // 0x00B8(0x0008)
	unsigned char                                      bWaitingToPingRegions : 1;                                 // 0x00C0(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData7GLI[0x2];                                      // 0x00C0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bPingingRegions : 1;                                       // 0x00C0(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData0WO4[0x2];                                      // 0x00C4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataMG35[0x4];                                      // 0x00C4(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventRegionsSynced__Delegate;                            // 0x00C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData6HZJ[0xC];                                      // 0x00C4(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventRegionsPinged__Delegate;                            // 0x00E0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7VV0[0xC];                                      // 0x00E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventRegionsError__Delegate;                             // 0x00F8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataQ9IP[0xC];                                      // 0x00F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameRegions_X");
		return ptr;
	}


	struct FString __OnlineGameRegions_X__HandleGetPingRegionPingsRPC_697378A74FCBEC35C569C0A2CC6B9035(class URegionPing_X* R);
	bool __OnlineGameRegions_X__HandleGetPingRegionPingsRPC_AAD7F24840F22F874C5529BB143180C8(class URegionPing_X* R);
	void __OnlineGameRegions_X__HandleGetPingRegionPingsRPC_FC4348334FA6B2CE1304CBBC393FEF1E(const struct FGetGameServerPingListData& Server);
	void __OnlineGameRegions_X__HandleGetPingRegionPingsRPC_E7868B1E46C2A39DB856B09FF52E0AE0(class URegionPing_X* RegionPing);
	bool __OnlineGameRegions_X__HandlePingMessage_D9A388CC4F35A9E989F3B5B2EB2963F6(class URegionPing_X* RegionPing);
	struct FString GetLocalizedName(const struct FString& RegionID);
	bool Exists(const struct FString& RegionID);
	void SetCachedRegionPings(TArray<struct FCachedRegionPing>* InCachedRegionPings);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void NotifyWhenSynced(const struct FScriptDelegate& Callback);
	struct FString GetRegionDebugString(class URegionPing_X* RegionPing);
	struct FString GetRegionsDebugString(TArray<struct FString>* MapLocal_8CED28544003027DB4C2A7AEFC246022);
	int SortRegionDelegate(class URegionPing_X* A, class URegionPing_X* B);
	void FinalizeRegionPing(class URegionPing_X* RegionPing);
	void OnAllRegionsPinged();
	void HandlePingMessage(class UTcpConnection* Connection, class URegionPingMessage_X* PingMessage);
	void HandleBeaconMessage(class UTcpConnection* Connection, class UObject* Message);
	void PingRegionsPieceWise(int PingCount);
	void HandleRegionPinged(class URegionPingData_X* Data);
	void HandleRegionsPinged(class URegionPinger_X* Pinger);
	void HandleGetPingRegionPingsRPC(class URPC_GetGameServerPingList_X* RPC, TArray<class URegionPing_X*>* FilterLocal_749F626C4715988945F1CCA39852F45C, TArray<struct FString>* MapLocal_C04739464CC8B07CE3D4068A4CF257A0);
	void PingRegions(const struct FScriptDelegate& Callback);
	void UpdateRegionPings();
	void OnRegionsSynced();
	void AddRegionPing(class URegion_X* Region, class URegionPing_X** ObjectInitializer_A2AB045043A8EAF4A8C60A9A4806FDB4);
	class URegionPing_X* GetRegionPing(const struct FString& RegionID);
	void OnInit();
	void EventRegionsError(class UOnlineGameRegions_X* RegionsObj, class UError* Error);
	void EventRegionsPinged(class UOnlineGameRegions_X* RegionsObj);
	void EventRegionsSynced(class UOnlineGameRegions_X* RegionsObj);
};

// Class ProjectX.SmoothDynamicValue_X
// 0x0014 (FullSize[0x0094] - InheritedSize[0x0080])
class USmoothDynamicValue_X : public UDynamicValue_X
{
public:
	unsigned char                                      UnknownDataWXRF[0x4];                                      // 0x0084(0x0004) MISSED OFFSET
	float                                              LerpUpSpeed;                                               // 0x0088(0x0004) (Edit)
	float                                              LerpDownSpeed;                                             // 0x008C(0x0004) (Edit)
	float                                              SmoothedCachedValue;                                       // 0x0090(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SmoothDynamicValue_X");
		return ptr;
	}


	struct FString GetDebugValue();
	float GetValue();
	void Tick(float DeltaTime);
	void Construct();
};

// Class ProjectX.RPC_PartyKickMember_X
// 0x0011 (FullSize[0x0121] - InheritedSize[0x0110])
class URPC_PartyKickMember_X : public URPC_PartyBase_X
{
public:
	TArray<struct FString>                             Members;                                                   // 0x0110(0x0010) (NeedCtorLink)
	TEnumAsByte<ELobbyKickReason>                      KickReason;                                                // 0x0120(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyKickMember_X");
		return ptr;
	}


	class URPC_PartyKickMember_X* SetReason(TEnumAsByte<ELobbyKickReason> InReason);
	class URPC_PartyKickMember_X* AddMember(const struct FString& InMemberId);
};

// Class ProjectX.RPC_GetLeaderboardRankForUsersBase_X
// 0x005C (FullSize[0x0130] - InheritedSize[0x00D4])
class URPC_GetLeaderboardRankForUsersBase_X : public URPC_X
{
public:
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                 // 0x0100(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     LeaderboardId;                                             // 0x0110(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FGetLeaderboardRankForUserData>      Players;                                                   // 0x0120(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardRankForUsersBase_X");
		return ptr;
	}


	class URPC_GetLeaderboardRankForUsersBase_X* SetPlayerIDs(TArray<struct FUniqueNetId> InPlayerIDs);
};

// Class ProjectX.RPC_PartyInfo_X
// 0x004C (FullSize[0x0120] - InheritedSize[0x00D4])
class URPC_PartyInfo_X : public URPC_X
{
public:
	TArray<struct FPartyInvite>                        Invites;                                                   // 0x0100(0x0010) (Transient, NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Member;                                                    // 0x0110(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyInfo_X");
		return ptr;
	}


};

// Class ProjectX.RPC_GetSkillLeaderboardRankForUsers_X
// 0x0004 (FullSize[0x0134] - InheritedSize[0x0130])
class URPC_GetSkillLeaderboardRankForUsers_X : public URPC_GetLeaderboardRankForUsersBase_X
{
public:
	int                                                Playlist;                                                  // 0x0130(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetSkillLeaderboardRankForUsers_X");
		return ptr;
	}


	class URPC_GetSkillLeaderboardRankForUsers_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.__Parties_X__HandlePartyInfoSuccess_39D4998740292D75239C908D74E3A2AF
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__Parties_X__HandlePartyInfoSuccess_39D4998740292D75239C908D74E3A2AF : public UObject
{
public:
	class UOnlinePlayer_X*                             PrimaryPlayer;                                             // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__Parties_X__HandlePartyInfoSuccess_39D4998740292D75239C908D74E3A2AF");
		return ptr;
	}


	bool __Parties_X__HandlePartyInfoSuccess_39D4998740292D75239C908D74E3A2AF(const struct FPartyInvite& Invite);
};

// Class ProjectX.RPC_GetLeaderboardRankForUsers_X
// 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
class URPC_GetLeaderboardRankForUsers_X : public URPC_GetLeaderboardRankForUsersBase_X
{
public:
	struct FString                                     Stat;                                                      // 0x0130(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardRankForUsers_X");
		return ptr;
	}


	class URPC_GetLeaderboardRankForUsers_X* SetStat(const struct FString& InStat);
};

// Class ProjectX.PsyNetService_Party_X
// 0x00C0 (FullSize[0x0148] - InheritedSize[0x0088])
class UPsyNetService_Party_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                                   // 0x0090(0x0010) (NeedCtorLink)
	struct FString                                     NotificationType;                                          // 0x00A0(0x0010) (NeedCtorLink)
	struct FString                                     Content;                                                   // 0x00B0(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                FromUserId;                                                // 0x00C0(0x0038)
	struct FString                                     FromUserName;                                              // 0x00F8(0x0010) (NeedCtorLink)
	int                                                CreatedAt;                                                 // 0x0108(0x0004)
	unsigned char                                      UnknownData2O1S[0x4];                                      // 0x010C(0x0004) MISSED OFFSET
	struct FUniqueNetId                                ForUserId;                                                 // 0x0110(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_Party_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetService_PartyUserInvited_X
// 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
class UPsyNetService_PartyUserInvited_X : public UPsyNetService_Party_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserInvited_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetService_PartySystem_X
// 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
class UPsyNetService_PartySystem_X : public UPsyNetService_Party_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartySystem_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetService_PartyUserJoined_X
// 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
class UPsyNetService_PartyUserJoined_X : public UPsyNetService_Party_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserJoined_X");
		return ptr;
	}


};

// Class ProjectX.RPC_Test_X
// 0x017C (FullSize[0x0250] - InheritedSize[0x00D4])
class URPC_Test_X : public URPC_X
{
public:
	struct FString                                     TestParamLocalizedString;                                  // 0x0100(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     TestParamString;                                           // 0x0110(0x0010) (NeedCtorLink)
	struct FRPCTestParam                               TestParamStruct;                                           // 0x0120(0x0078) (NeedCtorLink)
	TArray<struct FRPCTestParam>                       TestParamStructs;                                          // 0x0198(0x0010) (NeedCtorLink)
	struct FString                                     TestResultLocalizedString;                                 // 0x01A8(0x0010) (Transient, NeedCtorLink)
	struct FString                                     TestResultString;                                          // 0x01B8(0x0010) (Transient, NeedCtorLink)
	struct FRPCTestParam                               TestResultStruct;                                          // 0x01C8(0x0078) (Transient, NeedCtorLink)
	TArray<struct FRPCTestParam>                       TestResultStructs;                                         // 0x0240(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_Test_X");
		return ptr;
	}


	bool Check(bool Assertion, const struct FString& Message);
	bool CheckParamArraysMatch(TArray<struct FRPCTestParam> A, TArray<struct FRPCTestParam> B, const struct FString& Message);
	bool CheckItemArraysMatch(TArray<struct FRPCTestItem> A, TArray<struct FRPCTestItem> B, const struct FString& Message);
	bool CheckStringArraysMatch(TArray<struct FString> A, TArray<struct FString> B, const struct FString& Message);
	bool CheckItemsMatch(const struct FRPCTestItem& A, const struct FRPCTestItem& B, const struct FString& Message);
	bool CheckParamsMatch(const struct FRPCTestParam& A, const struct FRPCTestParam& B, const struct FString& Message);
	bool ValidateResults();
	void OnComplete();
	TArray<struct FRPCTestParam> GetRandomTestParams();
	struct FRPCTestParam GetRandomTestParam();
	TArray<struct FRPCTestItem> GetRandomTestItems();
	struct FRPCTestItem GetRandomTestItem();
	void Init();
};

// Class ProjectX.PsyNetService_PartyUserKicked_X
// 0x00D9 (FullSize[0x0161] - InheritedSize[0x0088])
class UPsyNetService_PartyUserKicked_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                                   // 0x0090(0x0010) (NeedCtorLink)
	struct FString                                     NotificationType;                                          // 0x00A0(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                Content;                                                   // 0x00B0(0x0038)
	struct FUniqueNetId                                FromUserId;                                                // 0x00E8(0x0038)
	int                                                CreatedAt;                                                 // 0x0120(0x0004)
	unsigned char                                      UnknownDataUSK0[0x4];                                      // 0x0124(0x0004) MISSED OFFSET
	struct FUniqueNetId                                ForUserId;                                                 // 0x0128(0x0038)
	TEnumAsByte<ELobbyKickReason>                      KickReason;                                                // 0x0160(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserKicked_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetService_PartyUserLeft_X
// 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
class UPsyNetService_PartyUserLeft_X : public UPsyNetService_Party_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserLeft_X");
		return ptr;
	}


};

// Class ProjectX.TestsHelper_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UTestsHelper_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TestsHelper_X");
		return ptr;
	}


	struct FString GetRandomUppercaseString();
	TArray<struct FString> GetRandomStringArray();
	struct FString GetRandomString();
};

// Class ProjectX.PsyNetService_PartyUserDisconnected_X
// 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
class UPsyNetService_PartyUserDisconnected_X : public UPsyNetService_Party_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserDisconnected_X");
		return ptr;
	}


};

// Class ProjectX.GFxShell_X
// 0x0074 (FullSize[0x0108] - InheritedSize[0x0094])
class UGFxShell_X : public UGFxDataSingleton_X
{
public:
	class UGFxMoviePlayer_X*                           MoviePlayerArchetype;                                      // 0x0098(0x0008) (Edit)
	class ULocalPlayer_X*                              Player;                                                    // 0x00A0(0x0008) (Const, Transient)
	unsigned char                                      bGamePaused : 1;                                           // 0x00A8(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataR3Y1[0x2];                                      // 0x00A8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bWasFullscreen : 1;                                        // 0x00A8(0x0001) BIT_FIELD (Const, Transient)
	unsigned char                                      UnknownDataO8RF[0x2];                                      // 0x00AC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              LeftX;                                                     // 0x00AC(0x0004) (DataBinding)
	float                                              LeftY;                                                     // 0x00B0(0x0004) (DataBinding)
	float                                              RightX;                                                    // 0x00B4(0x0004) (DataBinding)
	float                                              RightY;                                                    // 0x00B8(0x0004) (DataBinding)
	unsigned char                                      UnknownDataXNNL[0x4];                                      // 0x00BC(0x0004) MISSED OFFSET
	TArray<class UGFxMoviePlayer_X*>                   Movies;                                                    // 0x00C0(0x0010) (Const, Transient, NeedCtorLink)
	class UGFxDataStore_X*                             DataStore;                                                 // 0x00D0(0x0008) (Const, ExportObject, Component, EditInline)
	TEnumAsByte<EUINavigationMode>                     NavigationMode;                                            // 0x00D8(0x0001) (Transient, PrivateWrite)
	TEnumAsByte<EInputPlatformType>                    InputType;                                                 // 0x00D9(0x0001) (Const, Transient)
	TEnumAsByte<EOnlinePlatform>                       OnlinePlatformType;                                        // 0x00DA(0x0001) (DataBinding)
	unsigned char                                      UnknownDataZGMW[0x5];                                      // 0x00DB(0x0005) MISSED OFFSET
	class UOnlineSubsystem*                            OnlineSub;                                                 // 0x00E0(0x0008) (Edit)
	struct FScriptDelegate                             __EventInputCaptureChanged__Delegate;                      // 0x00E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataLKQU[0xC];                                      // 0x00E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventInputTypeChanged__Delegate;                         // 0x0100(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData9LDR[0xC];                                      // 0x0100(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventReceivedInput__Delegate;                            // 0x0118(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5E24[0xC];                                      // 0x0118(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxShell_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetMouseKeyPressed(const struct FName& Key, bool bPressed);
	void HandleOnlineSubSet();
	void SetAllowAnyPlayerInput(bool bAllow);
	void HandlePauseChanged();
	void OnShowKeyboardCanceled();
	void OnShowKeyboardComplete(const struct FString& NewText);
	void HandleShowKeyboardComplete(const struct FString& NewText, bool bCanceled);
	struct FString PasteFromClipboard();
	void CopyToClipboard(const struct FString& ClipboardText);
	void HideKeyboard();
	bool ShowKeyboard(const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, const struct FString& DefaultText, int MaxLength);
	void SetGamePaused(bool bPaused);
	void ExitToMainMenu();
	void ExitGame();
	void HandleMovieInputCaptureChanged(class UGFxMoviePlayer_X* MoviePlayer);
	void TriggerDataCallbacks();
	void Tick(float DeltaTime);
	void OnMovieClosed(class UGFxMoviePlayer_X* Movie);
	void OnMovieStarted(class UGFxMoviePlayer_X* Movie);
	void StopMovie(class UGFxMoviePlayer_X* Movie);
	void StartMovie(class UGFxMoviePlayer_X* Movie);
	void Stop();
	void OnStart();
	void Start(class ULocalPlayer_X* InPlayer);
	void EventReceivedInput(class UGFxShell_X* InShell);
	void EventInputTypeChanged(class UGFxShell_X* InShell);
	void EventInputCaptureChanged(class UGFxShell_X* InShell);
};

// Class ProjectX.CheckReservation_X
// 0x00B4 (FullSize[0x0114] - InheritedSize[0x0060])
class UCheckReservation_X : public UObject
{
public:
	float                                              StartDelay;                                                // 0x0060(0x0004) (Edit)
	float                                              Rate;                                                      // 0x0064(0x0004) (Edit)
	float                                              HeartbeatDelay;                                            // 0x0068(0x0004) (Edit)
	float                                              LastMatchmakingHeartbeatTime;                              // 0x006C(0x0004) (Transient, PrivateWrite)
	class UAsyncTask*                                  CheckReservationTask;                                      // 0x0070(0x0008) (Transient)
	struct FScriptDelegate                             FoundReservationCallback;                                  // 0x0078(0x000C) (Transient, NeedCtorLink)
	unsigned char                                      UnknownDataL53H[0xC];                                      // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FServerReservationData                      FoundReservation;                                          // 0x0090(0x0070) (NeedCtorLink)
	class UPsyNetConfig_X*                             Config;                                                    // 0x0100(0x0008)
	struct FScriptDelegate                             __OnStartSearch__Delegate;                                 // 0x0108(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataMD1D[0xC];                                      // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFoundReservation__Delegate;                            // 0x0120(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData4AJT[0xC];                                      // 0x0120(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CheckReservation_X");
		return ptr;
	}


	void HandleReservationData(struct FServerReservationData* Reservation);
	void HandleReservation2Notification(class UPsyNetService_Reservation2_X* Service);
	void HandlePendingReservation();
	void HandleReservationNotification(class UPsyNetService_Reservation_X* Service);
	void SendRequest();
	void HandlePreLoadMap(const struct FString& _);
	void Cancel();
	bool IsSearching();
	void StartSearch(const struct FScriptDelegate& Callback);
	class UCheckReservation_X* NotifyOnStartSearch(const struct FScriptDelegate& Callback);
	void OnFoundReservation(const struct FServerReservationData& Reservation);
	void OnStartSearch(class UAsyncTask* Task);
};

// Class ProjectX.PsyNetService_PartyOwnerChanged_X
// 0x00D8 (FullSize[0x0160] - InheritedSize[0x0088])
class UPsyNetService_PartyOwnerChanged_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                                   // 0x0090(0x0010) (NeedCtorLink)
	struct FString                                     NotificationType;                                          // 0x00A0(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                Content;                                                   // 0x00B0(0x0038)
	struct FUniqueNetId                                FromUserId;                                                // 0x00E8(0x0038)
	int                                                CreatedAt;                                                 // 0x0120(0x0004)
	unsigned char                                      UnknownDataP618[0x4];                                      // 0x0124(0x0004) MISSED OFFSET
	struct FUniqueNetId                                ForUserId;                                                 // 0x0128(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyOwnerChanged_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetService_PartyChat_X
// 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
class UPsyNetService_PartyChat_X : public UPsyNetService_Party_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyChat_X");
		return ptr;
	}


};

// Class ProjectX.TAsyncResult__array_ClubInvite_X
// 0x0068 (FullSize[0x0104] - InheritedSize[0x009C])
class UTAsyncResult__array_ClubInvite_X : public UAsyncTask
{
public:
	TArray<class UClubInvite_X*>                       Result;                                                    // 0x00D0(0x0010) (NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventResult__Delegate;                                   // 0x00E0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData3EX5[0xC];                                      // 0x00E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                           // 0x00F8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataSXE6[0xC];                                      // 0x00F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                                // 0x0110(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataE3ZP[0xC];                                      // 0x0110(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TAsyncResult__array_ClubInvite_X");
		return ptr;
	}


	class UTAsyncResult__array_ClubInvite_X* CreateResultError(class UError* InError);
	class UTAsyncResult__array_ClubInvite_X* CreateResult(TArray<class UClubInvite_X*> InResult);
	class UTAsyncResult__array_ClubInvite_X* Copy();
	void ClearCallbacks();
	class UTAsyncResult__array_ClubInvite_X* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class UTAsyncResult__array_ClubInvite_X* SetResult(TArray<class UClubInvite_X*> InResult, class UError* InError);
	class UTAsyncResult__array_ClubInvite_X* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class UTAsyncResult__array_ClubInvite_X* NotifyOnResult(const struct FScriptDelegate& Callback);
	TArray<class UClubInvite_X*> ResultDelegate();
	void EventResultComplete(TArray<class UClubInvite_X*> OutResult, class UError* OutError);
	void EventResult(TArray<class UClubInvite_X*> OutResult);
};

// Class ProjectX.ClubInvite_X
// 0x0068 (FullSize[0x00C8] - InheritedSize[0x0060])
class UClubInvite_X : public UObject
{
public:
	unsigned char                                      UnknownDataWUCM[0x8];                                      // 0x0060(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.ClubInvite_X.ClubID
	struct FString                                     ClubName;                                                  // 0x0068(0x0010) (NeedCtorLink)
	struct FString                                     ClubTag;                                                   // 0x0078(0x0010) (NeedCtorLink)
	struct FClubMember                                 InvitedBy;                                                 // 0x0088(0x0048) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClubInvite_X");
		return ptr;
	}


};

// Class ProjectX.RegionPing_X
// 0x0039 (FullSize[0x0099] - InheritedSize[0x0060])
class URegionPing_X : public UObject
{
public:
	class URegion_X*                                   Region;                                                    // 0x0060(0x0008)
	struct FString                                     RegionID;                                                  // 0x0068(0x0010) (NeedCtorLink)
	struct FName                                       Address;                                                   // 0x0078(0x0008)
	class UTcpConnection*                              Connection;                                                // 0x0080(0x0008)
	float                                              PingSendTime;                                              // 0x0088(0x0004)
	float                                              Ping;                                                      // 0x008C(0x0004)
	float                                              AvgPing;                                                   // 0x0090(0x0004)
	int                                                PingCount;                                                 // 0x0094(0x0004)
	TEnumAsByte<ERegionPingResult>                     PingResult;                                                // 0x0098(0x0001)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RegionPing_X");
		return ptr;
	}


	void Reset();
};

// Class ProjectX.SeqAct_SpawnArchetype_X
// 0x0042 (FullSize[0x01A0] - InheritedSize[0x015E])
class USeqAct_SpawnArchetype_X : public USequenceAction
{
public:
	class AActor*                                      ActorArchetype;                                            // 0x0160(0x0008) (Edit)
	struct FVector                                     Velocity;                                                  // 0x0168(0x000C) (Edit)
	float                                              Speed;                                                     // 0x0174(0x0004) (Edit)
	TArray<class AActor*>                              SpawnOwners;                                               // 0x0178(0x0010) (NeedCtorLink)
	TArray<class AActor*>                              SpawnPoints;                                               // 0x0188(0x0010) (NeedCtorLink)
	class AActor*                                      Spawned;                                                   // 0x0198(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SeqAct_SpawnArchetype_X");
		return ptr;
	}


	void Init(class AActor* SpawnedActor);
	void Activated();
};

// Class ProjectX.ActionQueue_X
// 0x002C (FullSize[0x009C] - InheritedSize[0x0070])
class UActionQueue_X : public UComponent
{
public:
	float                                              ActionsPerSecond;                                          // 0x0070(0x0004) (Edit)
	unsigned char                                      UnknownDataND9A[0x4];                                      // 0x0074(0x0004) MISSED OFFSET
	TArray<struct FScriptDelegate>                     Queue;                                                     // 0x0078(0x0010) (NeedCtorLink)
	int                                                QueueIndex;                                                // 0x0088(0x0004)
	unsigned char                                      UnknownDataK9LR[0x4];                                      // 0x008C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __ActionDelegate__Delegate;                                // 0x0090(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataJC91[0xC];                                      // 0x008C(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ActionQueue_X");
		return ptr;
	}


	void Tick();
	void Add(const struct FScriptDelegate& Callback);
	void ActionDelegate();
};

// Class ProjectX.RPC_PlayerCancelMatchmaking_X
// 0x002C (FullSize[0x0100] - InheritedSize[0x00D4])
class URPC_PlayerCancelMatchmaking_X : public URPC_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PlayerCancelMatchmaking_X");
		return ptr;
	}


};

// Class ProjectX.AppConfig_X
// 0x0004 (FullSize[0x007A] - InheritedSize[0x0076])
class UAppConfig_X : public UOnlineConfig_X
{
public:
	unsigned char                                      bSpinSleep : 1;                                            // 0x0078(0x0001) BIT_FIELD (Edit, Config)
	unsigned char                                      UnknownDataEPFX[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AppConfig_X");
		return ptr;
	}


	void Undo();
	void Apply();
};

// Class ProjectX.RPC_TestPlayerID_X
// 0x009C (FullSize[0x0170] - InheritedSize[0x00D4])
class URPC_TestPlayerID_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038)
	struct FUniqueNetId                                ResponsePlayerID;                                          // 0x0138(0x0038) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_TestPlayerID_X");
		return ptr;
	}


	void OnSuccess();
	void Init();
};

// Class ProjectX.GFxMoviePlayer_X
// 0x022E (FullSize[0x0314] - InheritedSize[0x00E6])
class UGFxMoviePlayer_X : public UGFxMoviePlayer
{
public:
	class UGFxShell_X*                                 Shell;                                                     // 0x0218(0x0008) (Const, Transient)
	class UGFxDataStore_X*                             DataStore;                                                 // 0x0220(0x0008) (Const, ExportObject, Transient, Component, EditInline)
	TArray<class UGFxDataCallback_X*>                  DataCallbacks;                                             // 0x0228(0x0010) (Const, Transient, NeedCtorLink)
	TArray<class UGFxObjectReference_X*>               ActionScriptClasses;                                       // 0x0238(0x0010) (Const, Transient, NeedCtorLink)
	struct FMap_Mirror                                 ActionScriptClassMap;                                      // 0x0248(0x0050) (Const, Native, Transient)
	TArray<struct FString>                             CursorScenes;                                              // 0x0298(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FString>                             InputScenes;                                               // 0x02A8(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FString>                             CaptureScenes;                                             // 0x02B8(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FName                                       DebugTableCallback;                                        // 0x02C8(0x0008) (Edit)
	struct FName                                       DebugColumnCallback;                                       // 0x02D0(0x0008) (Edit)
	class UGFxObjectReference_X*                       ShellHooksClass;                                           // 0x02D8(0x0008) (Const, Transient)
	TArray<class UGFxSoundPack_X*>                     LoadedSoundPacks;                                          // 0x02E0(0x0010) (Transient, NeedCtorLink)
	struct FScriptDelegate                             __EventStarted__Delegate;                                  // 0x02F0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataZF9W[0xC];                                      // 0x02F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventClosed__Delegate;                                   // 0x0308(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData8UCW[0xC];                                      // 0x0308(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventInputCaptureChanged__Delegate;                      // 0x0320(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataG1WT[0xC];                                      // 0x0320(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxMoviePlayer_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetAllowAnyPlayerInput(bool bAllow);
	bool PopString(TArray<struct FString>* Items, const struct FString& Value);
	void SetGlobalRTCP(const struct FName& Key, float Value);
	void StopAllSounds(class UGFxSoundPack_X* SoundPack);
	void StopSound(const struct FName& EventName);
	void PlaySound(const struct FName& EventName);
	void PlaySoundFromTheme(const struct FName& EventName, const struct FName& SoundThemeName);
	class AActor* GetSoundSource();
	void UpdateCursorVisibility();
	void SetCaptureAllInput(bool bNewCaptureInput, const struct FString& SceneName);
	void SetReceiveInput(bool bNewReceiveInput, const struct FString& SceneName);
	void SetCursorVisible(bool bVisible, const struct FString& SceneName);
	void InitShellHooks();
	void InitDataHooks();
	void OnClose();
	bool Start(bool StartPaused);
	void EventInputCaptureChanged(class UGFxMoviePlayer_X* Player);
	void EventClosed(class UGFxMoviePlayer_X* Player);
	void EventStarted(class UGFxMoviePlayer_X* Player);
};

// Class ProjectX.GFxObjectReference_X
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UGFxObjectReference_X : public UObject
{
public:
	int                                                Value[0xC];                                                // 0x0060(0x0004) (Const, Native)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxObjectReference_X");
		return ptr;
	}


};

// Class ProjectX.GFxDataCallback_X
// 0x0015 (FullSize[0x00A5] - InheritedSize[0x0090])
class UGFxDataCallback_X : public UGFxObjectReference_X
{
public:
	struct FName                                       Table;                                                     // 0x0090(0x0008) (Transient)
	int                                                Row;                                                       // 0x0098(0x0004) (Transient)
	struct FName                                       Column;                                                    // 0x009C(0x0008) (Transient)
	TEnumAsByte<EDataCallbackType>                     Type;                                                      // 0x00A4(0x0001) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxDataCallback_X");
		return ptr;
	}


};

// Class ProjectX.RPC_CustomGameServerGet_X
// 0x006C (FullSize[0x0140] - InheritedSize[0x00D4])
class URPC_CustomGameServerGet_X : public URPC_X
{
public:
	struct FString                                     ServerName;                                                // 0x0100(0x0010) (NeedCtorLink, PrivateWrite)
	struct FString                                     Password;                                                  // 0x0110(0x0010) (NeedCtorLink, PrivateWrite)
	TArray<struct FFindPrivateServerResult>            Servers;                                                   // 0x0120(0x0010) (Transient, NeedCtorLink)
	TArray<struct FServerResult>                       Results;                                                   // 0x0130(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CustomGameServerGet_X");
		return ptr;
	}


	void OnSuccess();
	class URPC_CustomGameServerGet_X* SetPassword(const struct FString& InPassword);
	class URPC_CustomGameServerGet_X* SetServerName(const struct FString& InServerName);
};

// Class ProjectX.ClubErrors_X
// 0x0098 (FullSize[0x0118] - InheritedSize[0x0080])
class UClubErrors_X : public UErrorList
{
public:
	class UErrorType*                                  ClubNotFound;                                              // 0x0080(0x0008) (Const)
	class UErrorType*                                  PlayerAlreadyInClub;                                       // 0x0088(0x0008) (Const)
	class UErrorType*                                  PlayerInSameClub;                                          // 0x0090(0x0008) (Const)
	class UErrorType*                                  PlayerInDifferentClub;                                     // 0x0098(0x0008) (Const)
	class UErrorType*                                  NotClubOwner;                                              // 0x00A0(0x0008) (Const)
	class UErrorType*                                  ClubNameChangeNotAllowed;                                  // 0x00A8(0x0008) (Const)
	class UErrorType*                                  ClubFull;                                                  // 0x00B0(0x0008) (Const)
	class UErrorType*                                  ClubMemberNotFound;                                        // 0x00B8(0x0008) (Const)
	class UErrorType*                                  ClubInviteNotFound;                                        // 0x00C0(0x0008) (Const)
	class UErrorType*                                  ClubInvalidParameters;                                     // 0x00C8(0x0008) (Const)
	class UErrorType*                                  ClubNameInvalid;                                           // 0x00D0(0x0008) (Const)
	class UErrorType*                                  ClubTagInvalid;                                            // 0x00D8(0x0008) (Const)
	class UErrorType*                                  ClubTagPlusNameInvalid;                                    // 0x00E0(0x0008) (Const)
	class UErrorType*                                  ClubMotdInvalid;                                           // 0x00E8(0x0008) (Const)
	class UErrorType*                                  ClubNameTaken;                                             // 0x00F0(0x0008) (Const)
	class UErrorType*                                  ClubOwnerCannotLeaveUnlessEmpty;                           // 0x00F8(0x0008) (Const)
	class UErrorType*                                  CrossPlatformClubsDisabled;                                // 0x0100(0x0008) (Const)
	class UErrorType*                                  ClubInviteCrossPlatformClubsDisabled;                      // 0x0108(0x0008) (Const)
	class UErrorType*                                  ClubBanned;                                                // 0x0110(0x0008) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClubErrors_X");
		return ptr;
	}


};

// Class ProjectX.ClubServerResult_X
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class UClubServerResult_X : public UObject
{
public:
	struct FString                                     Host;                                                      // 0x0060(0x0010) (NeedCtorLink)
	int                                                Port;                                                      // 0x0070(0x0004)
	unsigned char                                      UnknownDataRXPS[0x4];                                      // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     ServerName;                                                // 0x0078(0x0010) (NeedCtorLink)
	struct FString                                     CustomServerName;                                          // 0x0088(0x0010) (NeedCtorLink)
	struct FString                                     CustomServerPassword;                                      // 0x0098(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClubServerResult_X");
		return ptr;
	}


	struct FString GetAddress();
};

// Class ProjectX.RPC_StartMatchmaking_X
// 0x007E (FullSize[0x0152] - InheritedSize[0x00D4])
class URPC_StartMatchmaking_X : public URPC_X
{
public:
	TArray<struct FString>                             Regions;                                                   // 0x0100(0x0010) (NeedCtorLink)
	TArray<int>                                        Playlists;                                                 // 0x0110(0x0010) (NeedCtorLink)
	int                                                SecondsSearching;                                          // 0x0120(0x0004)
	unsigned char                                      UnknownDataAC9H[0x4];                                      // 0x0124(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData7338[0x8];                                      // 0x0124(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_StartMatchmaking_X.CurrentServerId
	unsigned char                                      bDisableCrossPlay : 1;                                     // 0x0130(0x0001) BIT_FIELD
	unsigned char                                      UnknownData2NWC[0x2];                                      // 0x0130(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataLDR8[0x4];                                      // 0x0134(0x0004) MISSED OFFSET
	struct FString                                     PartyID;                                                   // 0x0138(0x0010) (NeedCtorLink)
	TArray<struct FUniqueNetId>                        PartyMembers;                                              // 0x0148(0x0010) (NeedCtorLink)
	float                                              BannedSecondsRemaining;                                    // 0x0158(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_StartMatchmaking_X");
		return ptr;
	}


	class URPC_StartMatchmaking_X* SetIgnoreSkill(bool bInIgnoreSkill);
	class URPC_StartMatchmaking_X* SetPartyId(const struct FString& InPartyId);
	class URPC_StartMatchmaking_X* SetPartyMembers(TArray<struct FUniqueNetId> InPartyMembers);
	class URPC_StartMatchmaking_X* SetDisableCrossPlay(bool bInDisableCrossplay);
	class URPC_StartMatchmaking_X* SetCurrentServerID();
	class URPC_StartMatchmaking_X* SetSecondsSearching(int InSecondsSearching);
	class URPC_StartMatchmaking_X* SetPlaylists(TArray<int> InPlaylists);
	class URPC_StartMatchmaking_X* SetRegions(TArray<struct FString> InRegions);
};

// Class ProjectX.InterpComponent_X
// 0x00E3 (FullSize[0x0178] - InheritedSize[0x0095])
class UInterpComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownDataJXD9[0x3];                                      // 0x009D(0x0003) MISSED OFFSET
	struct FMatrix                                     InterpStart;                                               // 0x00A0(0x0040) (Const, Transient)
	struct FMatrix                                     InterpEnd;                                                 // 0x00E0(0x0040) (Const, Transient)
	struct FMatrix                                     InterpLocalToWorld;                                        // 0x0120(0x0040) (Const, Transient)
	float                                              InterpStartTime;                                           // 0x0160(0x0004) (Transient)
	float                                              InterpEndTime;                                             // 0x0164(0x0004) (Transient)
	TArray<struct FAttachment>                         Attachments;                                               // 0x0168(0x0010) (Const, Component, DuplicateTransient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.InterpComponent_X");
		return ptr;
	}


	void DetachComponent(class UActorComponent* Component);
	void AttachComponent(class UActorComponent* Component, const struct FVector& RelativeLocation, const struct FRotator& RelativeRotation, const struct FVector& RelativeScale);
};

// Class ProjectX.IReservationConnection_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UIReservationConnection_X : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.IReservationConnection_X");
		return ptr;
	}


};

// Class ProjectX.__OnlineGameMatchmaking_X__OnReceiveGameServer_595F786441007C9435B634834C3F4F29
// 0x0070 (FullSize[0x00D0] - InheritedSize[0x0060])
class U__OnlineGameMatchmaking_X__OnReceiveGameServer_595F786441007C9435B634834C3F4F29 : public UObject
{
public:
	struct FServerReservationData                      Reservation;                                               // 0x0060(0x0070) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameMatchmaking_X__OnReceiveGameServer_595F786441007C9435B634834C3F4F29");
		return ptr;
	}


	bool __OnlineGameMatchmaking_X__OnReceiveGameServer_595F786441007C9435B634834C3F4F29(const struct FString& R);
};

// Class ProjectX.JsonTests_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UJsonTests_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.JsonTests_X");
		return ptr;
	}


	bool ToJsonAndBack(class UObject* Target);
	void RunJsonTests(int RandomSeed);
};

// Class ProjectX.OnlineGameJoinGame_X
// 0x034A (FullSize[0x03C2] - InheritedSize[0x0078])
class UOnlineGameJoinGame_X : public UOnline_X
{
public:
	int                                                JoinCountdownTime;                                         // 0x0078(0x0004) (Edit)
	unsigned char                                      UnknownDataCN2G[0x4];                                      // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     FailCommand;                                               // 0x0080(0x0010) (Edit, NeedCtorLink)
	struct FString                                     LoadingScreenCommand;                                      // 0x0090(0x0010) (Edit, NeedCtorLink)
	class UShakeComponent_X*                           JoinGameShake;                                             // 0x00A0(0x0008) (Edit, ExportObject, Component, EditInline)
	class UReservationBeacon_X*                        ReservationBeacon;                                         // 0x00A8(0x0008) (ExportObject, Component, EditInline)
	struct FString                                     WaitingForPlayersString;                                   // 0x00B0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ReservationNotRespondingString;                            // 0x00C0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ReservationFullString;                                     // 0x00D0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     PartyTeamReservationFullString;                            // 0x00E0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     NoFriendJoinPrivateMatchString;                            // 0x00F0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     BeaconTimedOutString;                                      // 0x0100(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     NotAllPlayersJoinedString;                                 // 0x0110(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     CanceledString;                                            // 0x0120(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     SecurityKeyAcquisitionFailed;                              // 0x0130(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     SecurityKeyVerificationFailed;                             // 0x0140(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     SendingReservationMessage;                                 // 0x0150(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     JoiningPartyLeadersGame;                                   // 0x0160(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     InvalidPassword;                                           // 0x0170(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     WrongPlaylistString;                                       // 0x0180(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     WrongRankedMatchString;                                    // 0x0190(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     MatchEndedString;                                          // 0x01A0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     CrossplayDisabled;                                         // 0x01B0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     AnotherPlayerCanceled;                                     // 0x01C0(0x0010) (Const, Localized, NeedCtorLink)
	struct FActiveServerData                           ActiveServer;                                              // 0x01D0(0x00A0) (Transient, NeedCtorLink, PrivateWrite)
	unsigned char                                      bUseNetworkNextDriver : 1;                                 // 0x0270(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataGHNC[0x2];                                      // 0x0270(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataOMSF[0x4];                                      // 0x0274(0x0004) MISSED OFFSET
	struct FJoinMatchSettings                          Settings;                                                  // 0x0278(0x0020) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     PendingFailMessage;                                        // 0x0298(0x0010) (Transient, NeedCtorLink)
	TArray<class UPlayer*>                             JoinedPlayers;                                             // 0x02A8(0x0010) (Transient, NeedCtorLink)
	struct U_Types_X_FCustomMatchSettings              CustomMatch;                                               // 0x02B8(0x0090) (NeedCtorLink, PrivateWrite)
	TArray<class URPC_GenerateKeys_X*>                 GenerateKeysRPCs;                                          // 0x0348(0x0010) (Transient, NeedCtorLink)
	struct FScriptDelegate                             __EventJoinGameComplete__Delegate;                         // 0x0358(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataJ1SX[0xC];                                      // 0x0358(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventStatusUpdate__Delegate;                             // 0x0370(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData9BD2[0xC];                                      // 0x0370(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventCountdownStarted__Delegate;                         // 0x0388(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5EL9[0xC];                                      // 0x0388(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventCountdownEnded__Delegate;                           // 0x03A0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataMORH[0xC];                                      // 0x03A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventActiveServerChanged__Delegate;                      // 0x03B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataC1N7[0xC];                                      // 0x03B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventServerReserved__Delegate;                           // 0x03D0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataCWU1[0xC];                                      // 0x03D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPasswordRequired__Delegate;                         // 0x03E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataBP6X[0xC];                                      // 0x03E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventJoiningGame__Delegate;                              // 0x0400(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataXHEI[0xC];                                      // 0x0400(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMaxPlayersChanged__Delegate;                        // 0x0418(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataAFRX[0xC];                                      // 0x0418(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameJoinGame_X");
		return ptr;
	}


	void HandleCanPlayOnline(class UPrivilegeCheck_X* PrivilegeCheck);
	void RemoveKeysRPC(class URPC_X* RPC);
	void SendGenerateKeysRPCs();
	void HandleGenerateKeys(class URPC_GenerateKeys_X* RPC);
	void SetNetworkKeys(class URPC_GenerateKeys_X* RPC);
	void SetNetworkKeysData(const struct FString& Key, const struct FString& IV, const struct FString& HMACKey, const struct FString& SessionId);
	void GoToNextState();
	void HandleCancelJoin(const TScriptInterface<class UIReservationConnection_X>& Connection, class UObject* Message);
	void SendReservation();
	void SendReservationMessage();
	class UMatchmakingMetrics_X* GetMetrics();
	void HandleConnection(class UReservationBeacon_X* Beacon, const TScriptInterface<class UIReservationConnection_X>& Connection);
	void HandleDisconnection(class UReservationBeacon_X* Beacon, const TScriptInterface<class UIReservationConnection_X>& Connection);
	void JoinServer(class UReservationsReadyMessage_X* Message);
	void TravelToServer();
	class UAddReservationMessage_X* CreateReservationMessage();
	void SendServerReservedEvent();
	void StartConnectToServer();
	void CheckAllLocalPlayersHaveJoined(class UPlayer* JoinedPlayer);
	void HandleInternetConnectionChanged(bool bConnected);
	void OnAllPlayersJoined();
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsInTransition();
	void SendPing();
	void GotoJoinGameState(const struct FName& NewStateName);
	void HandleConnectionResponse(const TScriptInterface<class UIReservationConnection_X>& Connection, class UObject* Message);
	void HandleReservationResponse(const TScriptInterface<class UIReservationConnection_X>& Connection, class UObject* Message);
	void HandleConnectionFailed(TEnumAsByte<EProgressMessageType> MessageType, const struct FString& Title, const struct FString& Message);
	void OnJoinGameComplete(bool bSuccess, const struct FString& FailReason);
	void SetActiveServerData(struct FActiveServerData* NewValue);
	void ClearActiveServerData();
	void HandleGameInfoSpawned(class AGameInfo_X* InGameInfo);
	bool IsJoiningGame();
	void CancelJoin();
	bool StartJoinCustomMatch(const struct FServerReservationData& Reservation, struct U_Types_X_FCustomMatchSettings* InSettings, const struct FJoinMatchSettings& JoinSettings);
	bool StartJoinPrivateMatch(const struct FServerReservationData& Reservation, struct U_Types_X_FCustomMatchSettings* InSettings, const struct FJoinMatchSettings& JoinSettings);
	bool StartJoin(const struct FServerReservationData& Reservation, const struct FJoinMatchSettings& JoinSettings);
	void OnInit();
	void EventMaxPlayersChanged(class UOnlineGameJoinGame_X* OnlineGameJoinGame, int MaxPlayers);
	void EventJoiningGame(class UOnlineGameJoinGame_X* OnlineGameJoinGame);
	void EventPasswordRequired();
	void EventServerReserved();
	void EventActiveServerChanged();
	void EventCountdownEnded();
	void EventCountdownStarted();
	void EventStatusUpdate(const struct FString& NewStatus);
	void EventJoinGameComplete(bool bSuccess, const struct FString& FailReason);
};

// Class ProjectX.__OnlineGameMatchmaking_X__AddRecommendedServers_503334ED415E40EDB2F31498A4B070AE
// 0x0004 (FullSize[0x0064] - InheritedSize[0x0060])
class U__OnlineGameMatchmaking_X__AddRecommendedServers_503334ED415E40EDB2F31498A4B070AE : public UObject
{
public:
	float                                              AccPingThreshold;                                          // 0x0060(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameMatchmaking_X__AddRecommendedServers_503334ED415E40EDB2F31498A4B070AE");
		return ptr;
	}


	bool __OnlineGameMatchmaking_X__AddRecommendedServers_503334ED415E40EDB2F31498A4B070AE(class URegionPing_X* R);
};

// Class ProjectX.SuperRegion_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class USuperRegion_X : public UObject
{
public:
	struct FString                                     Id;                                                        // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     Label;                                                     // 0x0070(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SuperRegion_X");
		return ptr;
	}


};

// Class ProjectX.LanBeacon_X
// 0x002C (FullSize[0x009C] - InheritedSize[0x0070])
class ULanBeacon_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0070(0x0008) (Const, Native, NoExport)
	struct FPointer                                    LanBeacon;                                                 // 0x0078(0x0008) (Const, Native, Transient)
	int                                                LanAnnouncePort;                                           // 0x0080(0x0004) (Const, Config)
	unsigned char                                      UnknownDataS1IX[0x4];                                      // 0x0084(0x0004) MISSED OFFSET
	unsigned char                                      UnknownDataWL5Y[0x8];                                      // 0x0084(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.LanBeacon_X.QueryNonce
	TEnumAsByte<ELanBeaconState>                       BeaconState;                                               // 0x0090(0x0001) (Const)
	unsigned char                                      UnknownDataLBGG[0x7];                                      // 0x0091(0x0007) MISSED OFFSET
	class UOnlineMessageComponent_X*                   MessageComponent;                                          // 0x0098(0x0008) (Const, ExportObject, Component, EditInline)
	int                                                MaxPacketSize;                                             // 0x00A0(0x0004) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanBeacon_X");
		return ptr;
	}


	bool BroadcastMessage(class UObject* Message);
	bool BroadcastData(TArray<unsigned char>* Data);
	void Stop();
	bool Start(TEnumAsByte<ELanBeaconState> InitialState);
};

// Class ProjectX.OnlineGameInvite_X
// 0x00BC (FullSize[0x0134] - InheritedSize[0x0078])
class UOnlineGameInvite_X : public UOnline_X
{
public:
	struct FUniqueNetId                                FriendJoinPlayerID;                                        // 0x0078(0x0038) (Transient, PrivateWrite)
	struct FString                                     UnableToFindFriendsGameString;                             // 0x00B0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     AlreadyInSameServerString;                                 // 0x00C0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     FriendNotJoinable;                                         // 0x00D0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     GameInviteBeaconAddress;                                   // 0x00E0(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FName                                       ActionRequired;                                            // 0x00F0(0x0008) (Transient, PrivateWrite)
	struct FScriptDelegate                             __EventGameInviteAccepted__Delegate;                       // 0x00F8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataWYRD[0xC];                                      // 0x00F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventGameInviteComplete__Delegate;                       // 0x0110(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataTNN4[0xC];                                      // 0x0110(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventConfirmationRequired__Delegate;                     // 0x0128(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataL5NH[0xC];                                      // 0x0128(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPasswordRequired__Delegate;                         // 0x0140(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataH8NT[0xC];                                      // 0x0140(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPsyNetPartyInviteAccepted__Delegate;                // 0x0158(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataX1UE[0xC];                                      // 0x0158(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameInvite_X");
		return ptr;
	}


	void HandleJoinGameComplete(bool bSuccess, const struct FString& FailReason);
	void HandlePasswordRequired();
	void OnGameInviteComplete(bool bSuccess, const struct FString& FailReason);
	void JoinGameInviteGame(const struct FJoinMatchSettings& Settings, struct FServerReservationData* StructInitializer_B81AF83F4AA251A936654888C7CC4758);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult, const struct FString& ErrorString);
	void OnInit();
	void EventPsyNetPartyInviteAccepted(const struct FString& PartyID);
	void EventPasswordRequired();
	void EventConfirmationRequired(const struct FName& ConfirmationReason);
	void EventGameInviteComplete(bool bSuccess, const struct FString& FailReason);
	void EventGameInviteAccepted();
};

// Class ProjectX.LocalPlayer_X
// 0x0014 (FullSize[0x04B0] - InheritedSize[0x049C])
class ULocalPlayer_X : public ULocalPlayer
{
public:
	class UOnlinePlayer_X*                             OnlinePlayer;                                              // 0x04A8(0x0008) (Transient, ProtectedWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LocalPlayer_X");
		return ptr;
	}


	bool SpawnPlayActor(const struct FString& URL, struct FString* OutError);
	void NotifyServerConnectionOpen();
	void OnRemoved();
	void OnCreated();
};

// Class ProjectX.ClubUtil_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UClubUtil_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClubUtil_X");
		return ptr;
	}


	int Wrap(int Column, int Count);
	struct FClubColorSet SwapPrimaryAccentColors(const struct FClubColorSet& Colors, class UColorPalette_X* TeamPalette, class UColorPalette_X* AccentPalette);
	bool AreColorsDifferent(class UColorPalette_X* Palette, int Color0, int Color1);
	TEnumAsByte<EClubColorChange> EnsureDifferentColors(class UColorPalette_X* TeamPalette, class UColorPalette_X* AccentPalette, int DefaultColorID0, int DefaultColorID1, struct FClubColorSet* Set0, struct FClubColorSet* Set1);
	bool IsClubTeam(int TeamSize);
	bool IsClubMatch(int TeamSize);
};

// Class ProjectX.RegionConfig_X
// 0x0022 (FullSize[0x0098] - InheritedSize[0x0076])
class URegionConfig_X : public UOnlineConfig_X
{
public:
	TArray<class USuperRegion_X*>                      SuperRegions;                                              // 0x0078(0x0010) (NeedCtorLink)
	TArray<class URegion_X*>                           Regions;                                                   // 0x0088(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RegionConfig_X");
		return ptr;
	}


	TArray<class URegion_X*> GetSubRegions(const struct FString& SuperRegionID, TArray<class URegion_X*>* FilterLocal_7CAE0E2343A056C69D5B4C83A93AAC18);
	class URegion_X* FindRegion(const struct FString& RegionID);
	class USuperRegion_X* FindSuperRegion(const struct FString& SuperRegionID);
	void Apply(class USuperRegion_X** ObjectInitializer_94E7EC4C4D8DE441F6E675ACB405FE58);
};

// Class ProjectX.__ClubUtil_X__IsClubTeam_4D75C5BC4DD61DF0F566F4971DFDCD83
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class U__ClubUtil_X__IsClubTeam_4D75C5BC4DD61DF0F566F4971DFDCD83 : public UObject
{
public:
	unsigned char                                      UnknownDataURDG[0x10];                                     // 0x0060(0x0010) UNKNOWN PROPERTY: ArrayProperty ProjectX.__ClubUtil_X__IsClubTeam_4D75C5BC4DD61DF0F566F4971DFDCD83.TeamClubs


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__ClubUtil_X__IsClubTeam_4D75C5BC4DD61DF0F566F4971DFDCD83");
		return ptr;
	}


	bool __ClubUtil_X__IsClubTeam_4D75C5BC4DD61DF0F566F4971DFDCD83();
};

// Class ProjectX.Region_X
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class URegion_X : public UObject
{
public:
	struct FString                                     SuperRegionID;                                             // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     Id;                                                        // 0x0070(0x0010) (NeedCtorLink)
	struct FString                                     Label;                                                     // 0x0080(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Region_X");
		return ptr;
	}


};

// Class ProjectX.MapFlythroughProfiler_X
// 0x0118 (FullSize[0x02B4] - InheritedSize[0x019C])
class AMapFlythroughProfiler_X : public AActor
{
public:
	float                                              Accel;                                                     // 0x0268(0x0004) (Edit)
	float                                              TurnRate;                                                  // 0x026C(0x0004) (Edit)
	float                                              ProfileTime;                                               // 0x0270(0x0004) (Edit)
	float                                              FinishTime;                                                // 0x0274(0x0004) (Transient)
	float                                              Speed;                                                     // 0x0278(0x0004) (Transient)
	struct FRenderProfile                              Profile;                                                   // 0x027C(0x0028) (Transient)
	unsigned char                                      UnknownData1XR8[0x4];                                      // 0x02A4(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventFinished__Delegate;                                 // 0x02A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData2OYQ[0xC];                                      // 0x02A4(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MapFlythroughProfiler_X");
		return ptr;
	}


	void SetupPlayers();
	void PostBeginPlay();
	void EventFinished(class AMapFlythroughProfiler_X* Profiler);
};

// Class ProjectX.__OnlineGameMatchmaking_X__GetSubRegionPings_01D1957B4A243F0F3C877192628795F3
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__OnlineGameMatchmaking_X__GetSubRegionPings_01D1957B4A243F0F3C877192628795F3 : public UObject
{
public:
	struct FString                                     SuperRegionID;                                             // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameMatchmaking_X__GetSubRegionPings_01D1957B4A243F0F3C877192628795F3");
		return ptr;
	}


	bool __OnlineGameMatchmaking_X__GetSubRegionPings_01D1957B4A243F0F3C877192628795F3(class URegionPing_X* R);
};

// Class ProjectX.NetworkNextClient_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetworkNextClient_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkNextClient_X");
		return ptr;
	}


	void FlagSession();
	struct FNetworkNextStats GetStats();
	TEnumAsByte<ENetworkNextState> GetState();
};

// Class ProjectX.NetworkNextServer_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNetworkNextServer_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkNextServer_X");
		return ptr;
	}


	void Upgrade(class UNetConnection* Connection, const struct FString& SessionTag);
	bool IsEnabled();
};

// Class ProjectX.PartyMessage_SearchStatus_X
// 0x000A (FullSize[0x00A2] - InheritedSize[0x0098])
class UPartyMessage_SearchStatus_X : public UPartyMessage_X
{
public:
	struct FName                                       SearchState;                                               // 0x0098(0x0008)
	unsigned char                                      bIsSearching : 1;                                          // 0x00A0(0x0001) BIT_FIELD
	unsigned char                                      UnknownData3WAW[0x2];                                      // 0x00A0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_SearchStatus_X");
		return ptr;
	}


	class UPartyMessage_SearchStatus_X* SetIsSearching(bool bValue);
	class UPartyMessage_SearchStatus_X* SetSearchState(const struct FName& InSearchState);
};

// Class ProjectX.NNXErrors_X
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UNNXErrors_X : public UErrorList
{
public:
	class UErrorType*                                  SwitchServiceMaintenance;                                  // 0x0080(0x0008) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NNXErrors_X");
		return ptr;
	}


};

// Class ProjectX.OnlineGameVoice_X
// 0x000C (FullSize[0x0084] - InheritedSize[0x0078])
class UOnlineGameVoice_X : public UOnline_X
{
public:
	struct FScriptDelegate                             __EventPlayerTalking__Delegate;                            // 0x0078(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataQJ5F[0xC];                                      // 0x0078(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameVoice_X");
		return ptr;
	}


	unsigned char GetControllerID(class APlayerReplicationInfo* PRI);
	int GetNumTalkers();
	bool IsRemotePlayerTalking(class APlayerReplicationInfo* PRI);
	void HandlePlayerTalkingStateChange(const struct FUniqueNetId& PlayerID, bool bTalking);
	void UnregisterTalker(class UOnlinePlayer_X* Player);
	void RegisterTalker(class UOnlinePlayer_X* Player);
	void OnInit();
	void EventPlayerTalking(class UOnlineGameVoice_X* SelfRef, const struct FUniqueNetId& PlayerID, bool bTalking);
};

// Class ProjectX.LocalClubData_X
// 0x0024 (FullSize[0x0084] - InheritedSize[0x0060])
class ULocalClubData_X : public UObject
{
public:
	TArray<class UClubDetails_X*>                      Clubs;                                                     // 0x0060(0x0010) (NeedCtorLink)
	TArray<struct FPlayerClubPair>                     Invites;                                                   // 0x0070(0x0010) (NeedCtorLink)
	int                                                NextClubID;                                                // 0x0080(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LocalClubData_X");
		return ptr;
	}


	class UClubDetails_X* GetClubForPlayer(const struct FUniqueNetId& PlayerID);
	class UClubDetails_X* GetClubByID();
	void Save();
	void Load();
};

// Class ProjectX.__LocalClubData_X__GetClubByID_89214C6146C8CDE595DE928F67347D63
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class U__LocalClubData_X__GetClubByID_89214C6146C8CDE595DE928F67347D63 : public UObject
{
public:
	unsigned char                                      UnknownDataNBPX[0x8];                                      // 0x0060(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.__LocalClubData_X__GetClubByID_89214C6146C8CDE595DE928F67347D63.Id


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__LocalClubData_X__GetClubByID_89214C6146C8CDE595DE928F67347D63");
		return ptr;
	}


	bool __LocalClubData_X__GetClubByID_89214C6146C8CDE595DE928F67347D63(class UClubDetails_X* C);
};

// Class ProjectX.CrossplayConfig_X
// 0x0012 (FullSize[0x0088] - InheritedSize[0x0076])
class UCrossplayConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FCrossplayGroup>                     Groups;                                                    // 0x0078(0x0010) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CrossplayConfig_X");
		return ptr;
	}


	bool PlatformsShareGroup(TEnumAsByte<EOnlinePlatform> Platform1, TEnumAsByte<EOnlinePlatform> Platform2);
};

// Class ProjectX.__LocalClubData_X__GetClubForPlayer_F063483841589E9A7E405FAE30EECB01
// 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
class U__LocalClubData_X__GetClubForPlayer_F063483841589E9A7E405FAE30EECB01 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__LocalClubData_X__GetClubForPlayer_F063483841589E9A7E405FAE30EECB01");
		return ptr;
	}


	bool __LocalClubData_X__GetClubForPlayer_F063483841589E9A7E405FAE30EECB01(class UClubDetails_X* C);
};

// Class ProjectX.EventRecorderConfig_X
// 0x0020 (FullSize[0x0096] - InheritedSize[0x0076])
class UEventRecorderConfig_X : public UOnlineConfig_X
{
public:
	unsigned char                                      bEnabled : 1;                                              // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataVKM6[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bSeparatePlayerIDs : 1;                                    // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData5PC7[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bExcludePlayerIDs : 1;                                     // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataH708[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataDHQX[0x4];                                      // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FName>                               DisabledEvents;                                            // 0x0080(0x0010) (Edit, NeedCtorLink)
	class UClass*                                      EventRecorderClass;                                        // 0x0090(0x0008) (Edit)
	float                                              PlayerNetMetricsPeriod;                                    // 0x0098(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EventRecorderConfig_X");
		return ptr;
	}


};

// Class ProjectX.OnlineGamePopulation_X
// 0x0034 (FullSize[0x00AC] - InheritedSize[0x0078])
class UOnlineGamePopulation_X : public UOnline_X
{
public:
	float                                              UpdatePopulationDelay;                                     // 0x0078(0x0004) (Edit)
	float                                              LastUpdatePopulationTime;                                  // 0x007C(0x0004) (Transient, PrivateWrite)
	class URPC_X*                                      GetPopulationRPC;                                          // 0x0080(0x0008) (Transient, PrivateWrite)
	int                                                TotalPlayers;                                              // 0x0088(0x0004) (Transient, PrivateWrite)
	unsigned char                                      UnknownData7LAU[0x4];                                      // 0x008C(0x0004) MISSED OFFSET
	TArray<struct FGetPopulationData>                  Populations;                                               // 0x0090(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventGetPlaylistPopulations__Delegate;                   // 0x00A0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataRCWF[0xC];                                      // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGamePopulation_X");
		return ptr;
	}


	int __OnlineGamePopulation_X__HandleGotAllPopulationPlaylistsRPC_4AB1EA5948BA73830D9DD1B0D3A40A91(const struct FGetPopulationData& P);
	bool __OnlineGamePopulation_X__HandleGotAllPopulationPlaylistsRPC_7E7379214B88C602EB010C993384B1A6(const struct FGetPopulationData& P);
	void HandleGotAllPopulationPlaylistsRPC(class URPC_GetPopulation_X* RPC, TArray<struct FGetPopulationData>* FilterLocal_1FA759B44D5643AC4AB94091E7BED642, TArray<int>* MapLocal_7B9CA9BC49CF180A59D897B760FFC06A, int* ReduceLocal_A5689400444E648D08C010B77FF249F9);
	void GetPlaylistPopulations(const struct FScriptDelegate& Callback);
	void EventGetPlaylistPopulations(class UOnlineGamePopulation_X* PopulationsObject);
};

// Class ProjectX.NetworkNextConfig_X
// 0x002A (FullSize[0x00A0] - InheritedSize[0x0076])
class UNetworkNextConfig_X : public UOnlineConfig_X
{
public:
	float                                              ClientLibraryProbability;                                  // 0x0078(0x0004) (Edit)
	float                                              ClientDriverProbability;                                   // 0x007C(0x0004) (Edit)
	float                                              ServerLibraryProbability;                                  // 0x0080(0x0004) (Edit)
	float                                              SessionProbability;                                        // 0x0084(0x0004) (Edit)
	TArray<struct FString>                             UserCountryCodes;                                          // 0x0088(0x0010) (Edit, NeedCtorLink)
	unsigned char                                      bEnableTryBeforeBuy : 1;                                   // 0x0098(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataIVK8[0x2];                                      // 0x0098(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bHighPriorityServerThread : 1;                             // 0x0098(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataQQ20[0x2];                                      // 0x009C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                SocketSendBufferBytes;                                     // 0x009C(0x0004) (Edit)
	int                                                SocketReceiveBufferBytes;                                  // 0x00A0(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkNextConfig_X");
		return ptr;
	}


	void Undo();
	void Apply();
};

// Class ProjectX.MatchPlayerData_X
// 0x00C8 (FullSize[0x0128] - InheritedSize[0x0060])
class UMatchPlayerData_X : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0038) (DataBinding)
	struct FString                                     PlayerName;                                                // 0x0098(0x0010) (NeedCtorLink, DataBinding)
	unsigned char                                      UnknownDataH4AQ[0x8];                                      // 0x00A8(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.MatchPlayerData_X.ConnectTimestamp
	unsigned char                                      UnknownDataNE8N[0x8];                                      // 0x00B0(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.MatchPlayerData_X.JoinTimestamp
	unsigned char                                      UnknownDataW0U1[0x8];                                      // 0x00B8(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.MatchPlayerData_X.LeaveTimestamp
	struct FUniqueNetId                                PartyLeaderID;                                             // 0x00C0(0x0038)
	unsigned char                                      bAbandoned : 1;                                            // 0x00F8(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataYWDO[0x2];                                      // 0x00F8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bMvp : 1;                                                  // 0x00F8(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataTDPQ[0x2];                                      // 0x00FC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                LastTeam;                                                  // 0x00FC(0x0004) (DataBinding)
	float                                              SecondsPlayed;                                             // 0x0100(0x0004)
	int                                                Goals;                                                     // 0x0104(0x0004) (DataBinding)
	int                                                Assists;                                                   // 0x0108(0x0004) (DataBinding)
	int                                                Saves;                                                     // 0x010C(0x0004) (DataBinding)
	int                                                Shots;                                                     // 0x0110(0x0004) (DataBinding)
	int                                                Demolishes;                                                // 0x0114(0x0004) (DataBinding)
	int                                                Score;                                                     // 0x0118(0x0004) (DataBinding)
	int                                                OwnGoals;                                                  // 0x011C(0x0004) (DataBinding)
	unsigned char                                      UnknownDataKRT0[0x8];                                      // 0x0120(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.MatchPlayerData_X.ClubID
	struct FMatchSkillUpdate                           Skills;                                                    // 0x0128(0x0020)
	int                                                ActorID;                                                   // 0x0148(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MatchPlayerData_X");
		return ptr;
	}


	void SetSkills(const struct FUpdatedPlayerSkillRating& Update);
};

// Class ProjectX.PsyNetConfig_X
// 0xFFFFFFFA (FullSize[0x0070] - InheritedSize[0x0076])
class UPsyNetConfig_X : public UOnlineConfig_X
{
public:
	unsigned char                                      bAllowPerCon : 1;                                          // 0x0078(0x0001) BIT_FIELD (Edit, Config)
	unsigned char                                      UnknownData5NM6[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bRequiresPerCon : 1;                                       // 0x0078(0x0001) BIT_FIELD (Config)
	unsigned char                                      UnknownData2YYE[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowPsyNetParty : 1;                                     // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataSWYB[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bSendPingMessage : 1;                                      // 0x0078(0x0001) BIT_FIELD (Edit, Config)
	unsigned char                                      UnknownDataPVTD[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bUploadServerBugReports : 1;                               // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData8MMM[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowServerBacktraceUploads : 1;                          // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataXY8V[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowServerBacktraceLogUploads : 1;                       // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataS6ON[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowClientBacktraceUploads : 1;                          // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataBMP0[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowClientBacktraceLogUploads : 1;                       // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataKJVA[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bUseMatchmakingNotifications : 1;                          // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData2CV7[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bUsePsyNetBeacon : 1;                                      // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataCPJC[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowPlayerCancelMatch : 1;                               // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData7B88[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              PerConTimeout;                                             // 0x007C(0x0004) (Edit, Config)
	float                                              PerConPingInterval;                                        // 0x0080(0x0004) (Edit, Config)
	float                                              FreshConnectionWindow;                                     // 0x0084(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetConfig_X");
		return ptr;
	}


};

// Class ProjectX.__OnlineClubCache_X__GetClubDetails_3C4873D44FABA1D295BDC189CEFB8B77
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class U__OnlineClubCache_X__GetClubDetails_3C4873D44FABA1D295BDC189CEFB8B77 : public UObject
{
public:
	unsigned char                                      UnknownDataULR7[0x8];                                      // 0x0060(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.__OnlineClubCache_X__GetClubDetails_3C4873D44FABA1D295BDC189CEFB8B77.ClubID


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineClubCache_X__GetClubDetails_3C4873D44FABA1D295BDC189CEFB8B77");
		return ptr;
	}


	bool __OnlineClubCache_X__GetClubDetails_3C4873D44FABA1D295BDC189CEFB8B77(class UClubDetails_X* C);
};

// Class ProjectX.RPCConfig_X
// 0x0022 (FullSize[0x0098] - InheritedSize[0x0076])
class URPCConfig_X : public UOnlineConfig_X
{
public:
	TArray<class UClass*>                              DisabledClasses;                                           // 0x0078(0x0010) (Edit, NeedCtorLink)
	TArray<struct FString>                             DisabledServices;                                          // 0x0088(0x0010) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPCConfig_X");
		return ptr;
	}


	bool IsRPCDisabled(class URPC_X* RPC);
};

// Class ProjectX.__OnlineClubCache_X__GetPlayerClubDetails_8921C38D4F08FF7CB4F11598CA0589CD
// 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
class U__OnlineClubCache_X__GetPlayerClubDetails_8921C38D4F08FF7CB4F11598CA0589CD : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineClubCache_X__GetPlayerClubDetails_8921C38D4F08FF7CB4F11598CA0589CD");
		return ptr;
	}


	bool __OnlineClubCache_X__GetPlayerClubDetails_8921C38D4F08FF7CB4F11598CA0589CD(class UClubDetails_X* C);
};

// Class ProjectX.ServerConfig_X
// 0x0022 (FullSize[0x0098] - InheritedSize[0x0076])
class UServerConfig_X : public UOnlineConfig_X
{
public:
	float                                              HeartbeatSeconds;                                          // 0x0078(0x0004) (Edit, Config)
	float                                              HeartbeatRetrySeconds;                                     // 0x007C(0x0004) (Edit, Config)
	unsigned char                                      bUploadLogFiles : 1;                                       // 0x0080(0x0001) BIT_FIELD (Edit, Config)
	unsigned char                                      UnknownDataEHCG[0x2];                                      // 0x0080(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bUploadReplays : 1;                                        // 0x0080(0x0001) BIT_FIELD (Edit, Config)
	unsigned char                                      UnknownDataP0O5[0x2];                                      // 0x0084(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                MaxUploadLogFileSize;                                      // 0x0084(0x0004) (Edit, Config)
	float                                              NetServerMaxTickRate;                                      // 0x0088(0x0004) (Edit, Config)
	float                                              IdleNetServerMaxTickRate;                                  // 0x008C(0x0004) (Edit, Config)
	float                                              FlatbufferChance;                                          // 0x0090(0x0004) (Edit, Config)
	int                                                FlatbufferMaxRecordSizeMB;                                 // 0x0094(0x0004) (Edit, Config)
	int                                                FlatbufferPacketSendRate;                                  // 0x0098(0x0004) (Edit, Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ServerConfig_X");
		return ptr;
	}


};

// Class ProjectX.OnlineFriendMap_X
// 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
class UOnlineFriendMap_X : public UComponent
{
public:
	struct FMap_Mirror                                 PlayerMap;                                                 // 0x0070(0x0050) (Native)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineFriendMap_X");
		return ptr;
	}


	void ValueArray(TArray<struct FOnlineFriend>* OutArray);
	void AppendArray(TArray<struct FOnlineFriend>* InArray);
	void CopyArray(TArray<struct FOnlineFriend>* InArray);
	bool Contains(struct FUniqueNetId* Key);
	void Clear(int ExpectedElements);
	void Remove(struct FUniqueNetId* Key);
	bool TryGet(struct FUniqueNetId* Key, struct FOnlineFriend* OutValue);
	void Set(struct FUniqueNetId* Key, struct FOnlineFriend* Value);
	int Count();
	void AllValues(struct FOnlineFriend* OutFriend, int StartIndex, int MaxValues);
};

// Class ProjectX.OnlineGameSearch_X
// 0x004A (FullSize[0x0198] - InheritedSize[0x014E])
class UOnlineGameSearch_X : public UOnlineGameSearch
{
public:
	unsigned char                                      UnknownDataHPUB[0x4];                                      // 0x0154(0x0004) MISSED OFFSET
	TArray<struct FString>                             InclusiveGameTagsArray;                                    // 0x0158(0x0010) (Transient, NeedCtorLink)
	TArray<struct FString>                             ExclusiveGameTagsArray;                                    // 0x0168(0x0010) (Transient, NeedCtorLink)
	struct FString                                     MapName;                                                   // 0x0178(0x0010) (Transient, NeedCtorLink)
	struct FString                                     GameTagsDelimiter;                                         // 0x0188(0x0010) (Edit, Const, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameSearch_X");
		return ptr;
	}


	bool GetStringProperty(int PropertyId, struct FString* Value);
	struct FString GetExclusiveGameTags();
	struct FString GetInclusiveGameTags();
	void SetMap(const struct FString& inMapName);
	void SetExclusiveGameTags(TArray<struct FString> inGameTagsArray);
	void SetInclusiveGameTags(TArray<struct FString> inGameTagsArray);
};

// Class ProjectX.OnlineGameLanBrowser_X
// 0x010A (FullSize[0x0182] - InheritedSize[0x0078])
class UOnlineGameLanBrowser_X : public UOnline_X
{
public:
	struct FString                                     StartSearchFailString;                                     // 0x0078(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     SearchingString;                                           // 0x0088(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     FoundServerString;                                         // 0x0098(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct U_Types_X_FCustomMatchSettings              Filter;                                                    // 0x00A8(0x0090) (Transient, NeedCtorLink)
	unsigned char                                      bIsHostQuery : 1;                                          // 0x0138(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataKKCF[0x2];                                      // 0x0138(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              SearchTimeout;                                             // 0x013C(0x0004) (Edit, Const)
	class ULanBeacon_X*                                LanBeacon;                                                 // 0x0140(0x0008) (ExportObject, Component, EditInline)
	struct FScriptDelegate                             __EventSearchNewResponse__Delegate;                        // 0x0148(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataG81F[0xC];                                      // 0x0148(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSearchStatus__Delegate;                             // 0x0160(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataATL6[0xC];                                      // 0x0160(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSearchStateChanged__Delegate;                       // 0x0178(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData0OKH[0xC];                                      // 0x0178(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSearchComplete__Delegate;                           // 0x0190(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataP5XQ[0xC];                                      // 0x0190(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSearchError__Delegate;                              // 0x01A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7Q2Z[0xC];                                      // 0x01A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameLanBrowser_X");
		return ptr;
	}


	void HandleGameStarted(class AGRI_X* GRI);
	void PerformSearch();
	void UpdateStatusMessage();
	void HandleSearchTimeout();
	void HandleStatusUpdate(const struct FString& NewStatus);
	void HandleJoinGameComplete(bool bSuccess, const struct FString& FailReason);
	void CreateLanGame(struct FServerResult* HostResponse, const struct U_Types_X_FCustomMatchSettings& MatchSettings, struct FServerReservationData* StructInitializer_728ACC5B44A18799184D41A3013823D7);
	void HandleHostResponse(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void OnSearchComplete(bool bCancelled);
	void OnSearchError(const struct FString& Message);
	bool IsSearching();
	void Cancel();
	bool StartSearch(const struct U_Types_X_FCustomMatchSettings& InFilter, bool bHostQuery);
	class UOnlineGameLanBrowser_X* ClearCompleteDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* ClearNewResponseDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* ClearStateChangedDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* ClearStatusDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* ClearErrorDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* SetCompleteDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* SetNewResponseDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* SetStateChangedDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* SetStatusDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* SetErrorDelegate(const struct FScriptDelegate& Callback);
	void OnInit();
	void EventSearchError(const struct FString& NewStatus);
	void EventSearchComplete(bool bCancelled);
	void EventSearchStateChanged(const struct FName& SearchState);
	void EventSearchStatus(const struct FString& NewStatus);
	void EventSearchNewResponse(struct FServerResult* Result);
};

// Class ProjectX.OnlineClubManager_X
// 0x0014 (FullSize[0x0074] - InheritedSize[0x0060])
class UOnlineClubManager_X : public UObject
{
public:
	class UPsyNetConnection_X*                         Connection;                                                // 0x0060(0x0008)
	struct FScriptDelegate                             __EventClubChanged__Delegate;                              // 0x0068(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5RVD[0xC];                                      // 0x0068(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineClubManager_X");
		return ptr;
	}


	void OnLeaveClub();
	void OnClubChanged(class UClubDetails_X* Club);
	class UAsyncTask* LeaveClub();
	class UAsyncTask* RejectClubInvite();
	class UTAsyncResult__ClubDetails_X* AcceptClubInvite();
	class UTAsyncResult__array_ClubInvite_X* SyncClubInvites();
	class UTAsyncResult__ClubDetails_X* SetClubOwner(const struct FUniqueNetId& NewOwner);
	class UTAsyncResult__ClubDetails_X* RemoveFromClub(const struct FUniqueNetId& PlayerID);
	class UAsyncTask* InviteToClub(const struct FUniqueNetId& PlayerID);
	class UTAsyncResult__ClubDetails_X* UpdateClubMotD(const struct FString& Text);
	class UTAsyncResult__ClubDetails_X* UpdateClubColors(int Primary, int Accent);
	class UTAsyncResult__ClubDetails_X* UpdateClubName(const struct FString& ClubName, const struct FString& ClubTag);
	void OnClubCreated(class UClubDetails_X* Club, class UError* ActionError);
	class UTAsyncResult__ClubDetails_X* CreateClub(class UClubSettings_X* Settings);
	void EventClubChanged(class UOnlineClubManager_X* Manager);
};

// Class ProjectX.OnlineGameReservations_X
// 0x00A2 (FullSize[0x011A] - InheritedSize[0x0078])
class UOnlineGameReservations_X : public UOnline_X
{
public:
	TArray<class URPC_GetKeys_X*>                      GetKeysRPCs;                                               // 0x0078(0x0010) (Transient, NeedCtorLink)
	float                                              ExtraMapLoadTime;                                          // 0x0088(0x0004) (Edit)
	float                                              WaitForReservationsTimeout;                                // 0x008C(0x0004) (Edit)
	unsigned char                                      bAllowPrivateMatchCrossPlayDisable : 1;                    // 0x0090(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataQF7S[0x2];                                      // 0x0090(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bSkipReservationCheck : 1;                                 // 0x0090(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownDataHRJP[0x2];                                      // 0x0094(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bSinglePlayerMatchmaking : 1;                              // 0x0090(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownDataD4QW[0x2];                                      // 0x0094(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bServerTraveling : 1;                                      // 0x0090(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownDataRP55[0x2];                                      // 0x0094(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bScrambleTeams : 1;                                        // 0x0090(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData4XRG[0x2];                                      // 0x0094(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bMatchStarted : 1;                                         // 0x0090(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataD136[0x2];                                      // 0x0094(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bLockTeams : 1;                                            // 0x0090(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataLA4V[0x2];                                      // 0x0094(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData79LD[0x4];                                      // 0x0094(0x0004) MISSED OFFSET
	class UReservationBeacon_X*                        Beacon;                                                    // 0x0098(0x0008) (ExportObject, Component, EditInline)
	class UUdpPingBeaconServer_X*                      PingBeacon;                                                // 0x00A0(0x0008) (ExportObject, Component, EditInline)
	TArray<struct FReservationData>                    Players;                                                   // 0x00A8(0x0010) (Transient, NeedCtorLink)
	TArray<struct FTeamPairHistory>                    TeamPairHistories;                                         // 0x00B8(0x0010) (Transient, NeedCtorLink)
	class UCrossplayConfig_X*                          Crossplay;                                                 // 0x00C8(0x0008) (Edit)
	class UMapPrefsConfig_X*                           MapPrefsConfig;                                            // 0x00D0(0x0008) (Edit)
	class UBeaconConfig_X*                             BeaconConfig;                                              // 0x00D8(0x0008) (Edit)
	TArray<struct FPendingReservation>                 PendingReservations;                                       // 0x00E0(0x0010) (NeedCtorLink)
	class UTAsyncResult__ClubDetails_X*                GetClubTask;                                               // 0x00F0(0x0008)
	struct FString                                     RankedMatchReservationID;                                  // 0x00F8(0x0010) (NeedCtorLink)
	class UOnlineClubProvider_X*                       Clubs;                                                     // 0x0108(0x0008)
	struct FScriptDelegate                             __EventReservationsUpdated__Delegate;                      // 0x0110(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData3UEC[0xC];                                      // 0x0110(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMigrationJoinOccurred__Delegate;                    // 0x0128(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataMHQM[0xC];                                      // 0x0128(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameReservations_X");
		return ptr;
	}


	void __OnlineGameReservations_X__HandlePublicReservation_A05037BB4A98A9ABF12A6D839701C7D2(const struct FReservationData& P);
	void __OnlineGameReservations_X__HandlePublicReservation_BC1A240C45EE7E15D808F297FECF4FEE(const struct FReservationData& P);
	bool __OnlineGameReservations_X__HasTimeoutPlayers_86B381A944001B33D228C38706AA1DE5(const struct FReservationData& P);
	bool __OnlineGameReservations_X__HasMultipleReservedTeams_79BEB90549FF6FE003DA1CA668676338(int TeamID);
	int __OnlineGameReservations_X__HasMultipleReservedTeams_171D52C14507D14F099B13BFCCC2C59E(const struct FReservationData& P);
	bool __OnlineGameReservations_X__AllPlayersReserved_97F1761D4E02675C014AFAB094AF96A5(const struct FReservationData& P);
	bool __OnlineGameReservations_X__AllPlayersInGame_BE26C63D432EF97EE972F8AE14946762(const struct FReservationData& P);
	void __OnlineGameReservations_X__SetServerTraveling_DDF9ECE14C731C27565E48ACDE806A78(const struct FPendingReservation& P);
	struct FUniqueNetId __OnlineGameReservations_X__GetPlayerIDs_1D28BCB44D2F01C3B562369F4F49F635(const struct FReservationData& Player);
	TArray<struct FUniqueNetId> GetPlayerIDs(TArray<struct FUniqueNetId>* MapLocal_D710C88B422CF44D3A745B9FC6993DC5);
	float GetMapLoadTimeout(TEnumAsByte<EOnlinePlatform> Platform);
	void GetAccumulatedPrefs(TArray<struct FName>* Likes, TArray<struct FName>* Dislikes);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	class UReservationsMetrics_X* GetMetrics();
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	bool HasSplitscreenPlayers();
	void SetParty(const struct FUniqueNetId& MemberId, const struct FUniqueNetId& PartyID);
	struct FUniqueNetId GetPartyID(const struct FUniqueNetId& PlayerID);
	unsigned char GetTeamNum(const struct FUniqueNetId& PlayerID);
	struct FString GetPlayersPlatformsString();
	struct FString GetPlatformsString(TArray<TEnumAsByte<EOnlinePlatform>>* Platforms);
	TArray<TEnumAsByte<EOnlinePlatform>> GetPlayerPlatforms();
	bool CanPlayTogether(TEnumAsByte<EOnlinePlatform> Platform1, TEnumAsByte<EOnlinePlatform> Platform2);
	bool CanAcceptReservationsForPlatform(class UAddReservationMessagePublic_X* Message);
	bool ShouldCheckPlatformRestrictions(class UAddReservationMessagePublic_X* Message);
	TEnumAsByte<EOnlinePlatform> GetExclusivePlatform();
	bool CanAcceptReservations(class UAddReservationMessagePublic_X* Message);
	void GetPlayerCounts(int* Team0Reserved, int* Team0Joined, int* Team1Reserved, int* Team1Joined);
	void NotifyReservationsUpdated();
	void OnReservationsUpdated();
	void CheckMapLoadTimeout();
	void StartMapLoadTimeout();
	void SyncSkills();
	void HackForceNotServerTravelling();
	void SwapTeams();
	void SetServerTraveling(bool bTraveling);
	void CloseConnection(int Index);
	void RemoveReservationIndex(int Index);
	int AddSpecialReservation(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, const struct FUniqueNetId& PartyID);
	void HandleTeamChanged(class APRI_X* PRI);
	void RemoveReservation(const struct FUniqueNetId& PlayerID);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(const struct FString& Options, const struct FUniqueNetId& PlayerID, struct FString* ErrorMessage);
	bool AllPlayersInGame();
	bool AllPlayersReserved();
	bool HasGameEnded();
	bool HasGameStarted();
	bool CanStartMatch();
	bool HasMultipleReservedTeams(TArray<int>* MapLocal_7AF4283B461090444FDA9390D5B3484B, TArray<int>* FilterLocal_CD53A62D40FC6BDF26F11F96FB25EC3C, TArray<int>* DistinctLocal_A2E8890147D77D3F6EB40DB1DADF068C);
	bool HasTimeoutPlayers();
	bool HasJoiningPlayers();
	bool IsEmpty();
	bool IsNearlyFull();
	bool IsFull();
	int GetNumReservedPlayers();
	bool IsCustomMatch();
	void HandleReservationDisconnected(class UReservationBeacon_X* _, const TScriptInterface<class UIReservationConnection_X>& Connection);
	void ClearGetKeysRPCs();
	void ClearTeamHistory();
	void ClearReservations();
	void Reset();
	void RecordTeamHistory(TArray<struct FReservationData>* TestPlayers, TArray<struct FTeamPairHistory>* History);
	void ScrambleTeams();
	void UpdateTeams();
	void AssignTeamsByPartySize();
	bool AssignScrambledTeams(int TeamSize, TArray<struct FTeamPairHistory>* History, TArray<struct FReservationData>* TestPlayers);
	bool AssignTeams(int TeamSize, TArray<struct FReservationData>* TestPlayers, bool bKeepTeams);
	void HandleSkillSynced(class UOnlineGameSkill_X* SkillSystem, const struct FUniqueNetId& PlayerID, class UError* Error);
	bool AllowSplitscreenJoin(class APlayerReplicationInfo* PrimaryPRI, const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, struct FString* Error);
	bool IsCheatingSplitscreenReservation(class UAddReservationMessage_X* Message);
	bool IsCheatingSplitscreen(const struct FUniqueNetId& PrimaryPlayerID, const struct FUniqueNetId& SplitscreenPlayerID);
	struct FReservationData CreateReservationData(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, const struct FUniqueNetId& PartyID, TEnumAsByte<EReservationStatus> Status);
	void HandlePlayerCancel(const TScriptInterface<class UIReservationConnection_X>& Connection, class UObject* Message);
	struct FUniqueNetId GetConnectionPlayerID(const TScriptInterface<class UIReservationConnection_X>& Connection, struct FUniqueNetId* StructInitializer_067F93364E8FD60FE30578A91E33EED3);
	void NotAllPlayersJoined();
	void DisconnectExistingPlayers(class UAddReservationMessage_X* ReservationMessage);
	void SetPlayers(TArray<struct FReservationData>* TempPlayers);
	void HandleClubSyncComplete(class UOnlineClubProvider_X* _);
	TArray<struct FReservationData> AddPlayersFromReservationMessage(class UAddReservationMessage_X* ReservationMessage, const TScriptInterface<class UIReservationConnection_X>& Connection, struct FReservationData* StructInitializer_9828CFE84DD3E0705AB5669F74196FD3);
	bool IsUnique(TArray<struct FName>* Prefs);
	void ForcePrivateMatch(const struct U_Types_X_FCustomMatchSettings& InSettings, struct FUniqueNetId* StructInitializer_7047131E4EE94736D6A4568FD3D13A94);
	void SetClubServer(class UClubDetails_X* Details);
	bool HandlePrivateReservation(const TScriptInterface<class UIReservationConnection_X>& Connection, class UAddReservationMessagePrivate_X* Message, struct FPendingReservation* StructInitializer_9748F85145560F0AEB677C8429356B1E);
	void SendGetKeysRPCs(const TScriptInterface<class UIReservationConnection_X>& Connection, class UAddReservationMessage_X* Message);
	void HandlePrivateReservationMessage(const TScriptInterface<class UIReservationConnection_X>& Connection, class UAddReservationMessagePrivate_X* Message);
	bool NeedToGetKeys(const TScriptInterface<class UIReservationConnection_X>& Connection);
	bool CanAcceptReservationsForServerKey(class UAddReservationMessagePublic_X* Message, bool bServerKey);
	void RemoveKeysRPC(class URPC_GetKeys_X* RPC);
	void HandleGetKeysRPCFail(class URPC_GetKeys_X* RPC);
	void AddNetworkKeys(class URPC_GetKeys_X* RPC);
	void ProcessReservationMessage(const TScriptInterface<class UIReservationConnection_X>& Connection, class UAddReservationMessage_X* Message);
	void HandleGetKeysRPCSuccess(class URPC_GetKeys_X* RPC);
	void HandleGetKeysRPC(class URPC_GetKeys_X* RPC);
	void StartMatch();
	class UReservationsReadyMessage_X* CreateReadyMessage();
	void SendReadyMessage(class UReservationsReadyMessage_X* Message, const TScriptInterface<class UIReservationConnection_X>& Connection);
	void NotifyReady(const TScriptInterface<class UIReservationConnection_X>& Connection);
	void BroadcastReady();
	bool ShouldSyncSkills();
	bool IsSoloPlaylist(int PlaylistId);
	bool HandlePublicReservation(const TScriptInterface<class UIReservationConnection_X>& Connection, class UAddReservationMessagePublic_X* Message, struct FPendingReservation* StructInitializer_FF462BC5450A6006DDFEBDBC56B9B30A);
	void HandlePublicReservationMessage(const TScriptInterface<class UIReservationConnection_X>& Connection, class UAddReservationMessagePublic_X* Message);
	void RecordReservation(class UAddReservationMessage_X* Message);
	void HandleRegionPingMessage(const TScriptInterface<class UIReservationConnection_X>& Connection, class URegionPingMessage_X* Message);
	void HandlePingMessage(const TScriptInterface<class UIReservationConnection_X>& Connection, class UPingMessage_X* Message);
	void HandlePsyNetReservation(class UPsyNetService_DSReservation_X* Notification);
	void InitUdpBeacon();
	void StartBeacons();
	void OnInit();
	void EventMigrationJoinOccurred();
	void EventReservationsUpdated();
};

// Class ProjectX.RPC_ClubDetailsBase_X
// 0x003C (FullSize[0x0110] - InheritedSize[0x00D4])
class URPC_ClubDetailsBase_X : public URPC_X
{
public:
	class UClubDetails_X*                              ClubDetails;                                               // 0x0100(0x0008) (Transient)
	class UTAsyncResult__ClubDetails_X*                ClubDetailsTask;                                           // 0x0108(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ClubDetailsBase_X");
		return ptr;
	}


	class UClubDetails_X* __RPC_ClubDetailsBase_X__CreateClubDetailsTask_181570A2477513B0392AC88385366E63();
	class UTAsyncResult__ClubDetails_X* CreateClubDetailsTask();
};

// Class ProjectX.ReservationsMetrics_X
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UReservationsMetrics_X : public UMetricsGroup_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsMetrics_X");
		return ptr;
	}


	void PlayerCanceled();
	void NotAllPlayersJoined();
	void GetKeysInvalidOrigin();
	void GetKeysFailed();
	void ReservationsFull();
	void PlatformExclusiveReservation();
	void WrongReservationRankedMatch();
	void WrongReservationPlaylist();
	void InvalidReservationPlaylist();
	void RankedReconnect();
	void RankedReconnectFinished();
	void PrivateMatchFinished();
	void FriendJoin();
	void FriendJoinEmpty();
	void FriendJoinRanked();
	void AddReservation(const struct FUniqueNetId& PlayerID, int Playlist, const struct FString& ReservationID);
	void FirstReservation(int Playlist, const struct FString& ReservationID);
};

// Class ProjectX.RPC_CreateClub_X
// 0x0028 (FullSize[0x0138] - InheritedSize[0x0110])
class URPC_CreateClub_X : public URPC_ClubDetailsBase_X
{
public:
	struct FString                                     ClubName;                                                  // 0x0110(0x0010) (NeedCtorLink)
	struct FString                                     ClubTag;                                                   // 0x0120(0x0010) (NeedCtorLink)
	int                                                PrimaryColor;                                              // 0x0130(0x0004)
	int                                                AccentColor;                                               // 0x0134(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CreateClub_X");
		return ptr;
	}


	class UErrorType* OverrideErrorType(class UErrorType* ErrorType);
	class URPC_CreateClub_X* SetSettings(class UClubSettings_X* Settings);
};

// Class ProjectX.OnlineGameServerBrowser_X
// 0x00FC (FullSize[0x0174] - InheritedSize[0x0078])
class UOnlineGameServerBrowser_X : public UOnline_X
{
public:
	struct FString                                     PreferredRegion;                                           // 0x0078(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct U_Types_X_FCustomMatchSettings              Filter;                                                    // 0x0088(0x0090) (Transient, NeedCtorLink)
	struct FString                                     StartSearchFailString;                                     // 0x0118(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     NoResultsFound;                                            // 0x0128(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     NotLoggedInToPsynet;                                       // 0x0138(0x0010) (Edit, Const, Localized, NeedCtorLink)
	float                                              SearchTimeout;                                             // 0x0148(0x0004) (Edit, Const)
	unsigned char                                      UnknownDataY0X1[0x4];                                      // 0x014C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventSearchComplete__Delegate;                           // 0x0150(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataMD69[0xC];                                      // 0x014C(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSearchError__Delegate;                              // 0x0168(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataJ37B[0xC];                                      // 0x0168(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventBrowserError__Delegate;                             // 0x0180(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataAUG0[0xC];                                      // 0x0180(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameServerBrowser_X");
		return ptr;
	}


	void HandleGameStarted(class AGRI_X* GRI);
	void PerformSearch();
	void HandleSearchTimeout();
	void HandleGameServerList(class URPC_CustomGameServerGet_X* RPC);
	struct FString GetRegionsString();
	void OnSearchComplete(TArray<struct FServerResult>* Results);
	void OnSearchError(const struct FString& Message);
	bool IsSearching();
	void Cancel();
	bool StartSearch(const struct U_Types_X_FCustomMatchSettings& InFilter, const struct FString& InPreferredRegion);
	class UOnlineGameServerBrowser_X* SetCompleteDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameServerBrowser_X* SetErrorDelegate(const struct FScriptDelegate& Callback);
	void EventBrowserError(class UOnlineGameServerBrowser_X* Browser, class UError* Error);
	void EventSearchError(const struct FString& NewStatus);
	void EventSearchComplete(TArray<struct FServerResult>* Results);
};

// Class ProjectX.RPC_UpdateClubName_X
// 0x0020 (FullSize[0x0130] - InheritedSize[0x0110])
class URPC_UpdateClubName_X : public URPC_ClubDetailsBase_X
{
public:
	struct FString                                     ClubName;                                                  // 0x0110(0x0010) (NeedCtorLink)
	struct FString                                     ClubTag;                                                   // 0x0120(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateClubName_X");
		return ptr;
	}


	class UErrorType* OverrideErrorType(class UErrorType* ErrorType);
	class URPC_UpdateClubName_X* SetName(const struct FString& InName, const struct FString& InTag);
};

// Class ProjectX.RPC_UpdateClubColors_X
// 0x0008 (FullSize[0x0118] - InheritedSize[0x0110])
class URPC_UpdateClubColors_X : public URPC_ClubDetailsBase_X
{
public:
	int                                                PrimaryColor;                                              // 0x0110(0x0004)
	int                                                AccentColor;                                               // 0x0114(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateClubColors_X");
		return ptr;
	}


	class URPC_UpdateClubColors_X* SetColors(int InPrimary, int InAccent);
};

// Class ProjectX.OnlineGameSettings_X
// 0x003A (FullSize[0x00DA] - InheritedSize[0x00A0])
class UOnlineGameSettings_X : public USettings
{
public:
	int                                                NumPublicConnections;                                      // 0x00A0(0x0004)
	int                                                NumOpenPublicConnections;                                  // 0x00A4(0x0004)
	TArray<class UGameSettingCategory_X*>              GameSettingCategories;                                     // 0x00A8(0x0010) (Edit, NeedCtorLink)
	unsigned char                                      bOffline : 1;                                              // 0x00B8(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData641T[0x2];                                      // 0x00B8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                MinimumPlayersRequired;                                    // 0x00BC(0x0004) (PrivateWrite)
	int                                                NumSecondsWaitingForPlayers;                               // 0x00C0(0x0004)
	int                                                SearchScore;                                               // 0x00C4(0x0004)
	float                                              LogTime;                                                   // 0x00C8(0x0004) (Transient, DataBinding, PrivateWrite)
	unsigned char                                      UnknownDataD774[0x4];                                      // 0x00CC(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventNumPlayersUpdated__Delegate;                        // 0x00D0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataSNKY[0xC];                                      // 0x00CC(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameSettings_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool Equals(class UOnlineGameSettings_X* OtherGameSettings);
	void CalculateMinAndMaxNumPlayers();
	void CopyFrom(class UOnlineGameSettings_X* OtherGameSettings);
	class UGameSettingPlaylist_X* GetPlaylist();
	bool IsValid();
	void RemoveMismatchedTags(class UOnlineGameSettings_X* OtherGameSettings);
	class UGameSettingCategory_X* GetGameSettingCategoryByName(const struct FName& CategoryName);
	void SetIntProperty(int PropertyId, int Value);
	void SetGameTag(const struct FName& NewGameTag);
	void UpdateFromURL(struct FString* URL, class AGameInfo* Game);
	bool HasSetting(const struct FName& SettingName);
	void GetActiveGameSettings(TArray<class UGameSetting_X*>* GameSettings);
	class UGameSetting_X* GetGameSetting(const struct FString& SettingName, class UGameSettingCategory_X** Category);
	struct FString GetGameTags();
	bool GetStringProperty(int PropertyId, struct FString* Value);
	void Init();
	void EventNumPlayersUpdated(class UOnlineGameSettings_X* GameSettings, int NewMinimumPlayersRequired);
};

// Class ProjectX.RPC_UpdateClubMotD_X
// 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
class URPC_UpdateClubMotD_X : public URPC_ClubDetailsBase_X
{
public:
	struct FString                                     MotD;                                                      // 0x0110(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateClubMotD_X");
		return ptr;
	}


	class UErrorType* OverrideErrorType(class UErrorType* ErrorType);
	class URPC_UpdateClubMotD_X* SetMotD(const struct FString& InMotD);
};

// Class ProjectX.RPC_InviteToClub_X
// 0x0064 (FullSize[0x0138] - InheritedSize[0x00D4])
class URPC_InviteToClub_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0100(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_InviteToClub_X");
		return ptr;
	}


	class UErrorType* OverrideErrorType(class UErrorType* ErrorType);
	class URPC_InviteToClub_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.OnlineLegalText_X
// 0x0024 (FullSize[0x0094] - InheritedSize[0x0070])
class UOnlineLegalText_X : public UComponent
{
public:
	struct FString                                     Folder;                                                    // 0x0070(0x0010) (Edit, NeedCtorLink)
	class UCachedWebData_X*                            CachedData;                                                // 0x0080(0x0008) (Transient, PrivateWrite)
	struct FScriptDelegate                             __EventNewText__Delegate;                                  // 0x0088(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData23I9[0xC];                                      // 0x0088(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineLegalText_X");
		return ptr;
	}


	void __OnlineLegalText_X__Sync_9FAD6F6744F03587E30B2C8C6C01F5AE(class UUrlConfig_X* UrlConfig);
	void HandleWebText(class UCachedWebData_X* InCachedData);
	struct FString GetWebUrl(class UUrlConfig_X* UrlConfig);
	struct FString GetPlatformString();
	struct FString GetRelativeUrl();
	struct FString GetFileSystemUrl();
	struct FString GetText();
	void Sync();
	void EventNewText(class UOnlineLegalText_X* Text);
};

// Class ProjectX.RPC_RemoveFromClub_X
// 0x0038 (FullSize[0x0148] - InheritedSize[0x0110])
class URPC_RemoveFromClub_X : public URPC_ClubDetailsBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0110(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RemoveFromClub_X");
		return ptr;
	}


	class URPC_RemoveFromClub_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.TAsyncResult__ClubDetails_X
// 0x0060 (FullSize[0x00FC] - InheritedSize[0x009C])
class UTAsyncResult__ClubDetails_X : public UAsyncTask
{
public:
	class UClubDetails_X*                              Result;                                                    // 0x00D0(0x0008) (PrivateWrite)
	struct FScriptDelegate                             __EventResult__Delegate;                                   // 0x00D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataMY8V[0xC];                                      // 0x00D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventResultComplete__Delegate;                           // 0x00F0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData8JHA[0xC];                                      // 0x00F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ResultDelegate__Delegate;                                // 0x0108(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData0T4L[0xC];                                      // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TAsyncResult__ClubDetails_X");
		return ptr;
	}


	class UTAsyncResult__ClubDetails_X* CreateResultError(class UError* InError);
	class UTAsyncResult__ClubDetails_X* CreateResult(class UClubDetails_X* InResult);
	class UTAsyncResult__ClubDetails_X* Copy();
	void ClearCallbacks();
	class UTAsyncResult__ClubDetails_X* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class UTAsyncResult__ClubDetails_X* SetResult(class UClubDetails_X* InResult, class UError* InError);
	class UTAsyncResult__ClubDetails_X* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class UTAsyncResult__ClubDetails_X* NotifyOnResult(const struct FScriptDelegate& Callback);
	class UClubDetails_X* ResultDelegate();
	void EventResultComplete(class UClubDetails_X* OutResult, class UError* OutError);
	void EventResult(class UClubDetails_X* OutResult);
};

// Class ProjectX.OnlineGameMatchmakingBase_X
// 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
class UOnlineGameMatchmakingBase_X : public UOnline_X
{
public:
	class UCheckReservation_X*                         CheckReservation;                                          // 0x0078(0x0008) (Transient)
	class UAsyncTask*                                  StartMatchmakingTask;                                      // 0x0080(0x0008) (Transient)
	struct FString                                     PingingRegionsString;                                      // 0x0088(0x0010) (Const, Localized, NeedCtorLink)
	struct FScriptDelegate                             __EventFindGameComplete__Delegate;                         // 0x0098(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData9XHE[0xC];                                      // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventFindGameStatus__Delegate;                           // 0x00B0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataS0ZK[0xC];                                      // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventFindGameError__Delegate;                            // 0x00C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataK5GM[0xC];                                      // 0x00C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventFindGameStateChanged__Delegate;                     // 0x00E0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataYB81[0xC];                                      // 0x00E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameMatchmakingBase_X");
		return ptr;
	}


	void WaitForRegionsPinged();
	void StopListeningRegionsPinged();
	void HandleRegionsPinged(class UOnlineGameRegions_X* InRegions);
	void HandleGameStarted(class AGRI_X* GRI);
	void HandleStatusUpdate(const struct FString& NewStatus);
	void HandleJoinGameComplete(bool bSuccess, const struct FString& FailReason);
	class UCheckReservation_X* CreateCheckReservation();
	void GotoMatchmakingState(const struct FName& StateName);
	void ClearStartMatchmakingRPC();
	void ClearCheckReservation();
	void OnSearchComplete(bool bCanceled);
	void Cancel();
	bool IsSearching();
	class UOnlineGameMatchmakingBase_X* AddFindGameStateChangedDelegate(const struct FScriptDelegate& NewDelegate);
	class UOnlineGameMatchmakingBase_X* AddFindGameCompleteDelegate(const struct FScriptDelegate& HandleFindGameComplete);
	class UOnlineGameMatchmakingBase_X* AddFindGameErrorDelegate(const struct FScriptDelegate& HandleFindGameError);
	class UOnlineGameMatchmakingBase_X* AddFindGameStatusChangedDelegate(const struct FScriptDelegate& HandleFindGameStatusChanged);
	void EventFindGameStateChanged(const struct FName& NewState);
	void EventFindGameError(const struct FString& NewStatus);
	void EventFindGameStatus(const struct FString& NewStatus);
	void EventFindGameComplete(bool bCancelled);
};

// Class ProjectX.MapPrefsConfig_X
// 0x000E (FullSize[0x0084] - InheritedSize[0x0076])
class UMapPrefsConfig_X : public UOnlineConfig_X
{
public:
	float                                              PreferenceWeight;                                          // 0x0078(0x0004) (Edit)
	int                                                MaxLikes;                                                  // 0x007C(0x0004) (Edit)
	int                                                MaxDislikes;                                               // 0x0080(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MapPrefsConfig_X");
		return ptr;
	}


};

// Class ProjectX.RPC_SetClubOwner_X
// 0x0038 (FullSize[0x0148] - InheritedSize[0x0110])
class URPC_SetClubOwner_X : public URPC_ClubDetailsBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0110(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetClubOwner_X");
		return ptr;
	}


	class URPC_SetClubOwner_X* SetNewOwner(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.RPC_GetClubInvites_X
// 0x003C (FullSize[0x0110] - InheritedSize[0x00D4])
class URPC_GetClubInvites_X : public URPC_X
{
public:
	TArray<class UClubInvite_X*>                       ClubInvites;                                               // 0x0100(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetClubInvites_X");
		return ptr;
	}


	TArray<class UClubInvite_X*> __RPC_GetClubInvites_X__CreateClubInvitesTask_2D3287E6400E8614CCF36E89224185B1();
	class UTAsyncResult__array_ClubInvite_X* CreateClubInvitesTask();
};

// Class ProjectX.RPC_AcceptClubInvite_X
// 0x0004 (FullSize[0x0114] - InheritedSize[0x0110])
class URPC_AcceptClubInvite_X : public URPC_ClubDetailsBase_X
{
public:
	int                                                ClubID;                                                    // 0x0110(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_AcceptClubInvite_X");
		return ptr;
	}


	class URPC_AcceptClubInvite_X* SetClubID();
};

// Class ProjectX.OnlineGamePrivateMatch_X
// 0x0144 (FullSize[0x020C] - InheritedSize[0x00C8])
class UOnlineGamePrivateMatch_X : public UOnlineGameMatchmakingBase_X
{
public:
	struct FString                                     PreferredRegion;                                           // 0x00F8(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     SearchingString;                                           // 0x0108(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     StartSearchFailString;                                     // 0x0118(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     FoundServerString;                                         // 0x0128(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     AlreadyJoiningGameString;                                  // 0x0138(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     TimeoutString;                                             // 0x0148(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     WrongRegionString;                                         // 0x0158(0x0010) (Edit, Const, Localized, NeedCtorLink)
	struct U_Types_X_FCustomMatchSettings              Settings;                                                  // 0x0168(0x0090) (Transient, NeedCtorLink, PrivateWrite)
	float                                              SearchTimeout;                                             // 0x01F8(0x0004) (Edit, Const)
	unsigned char                                      UnknownData3HXV[0x4];                                      // 0x01FC(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventPrivateMatchError__Delegate;                        // 0x0200(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5MD0[0xC];                                      // 0x01FC(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGamePrivateMatch_X");
		return ptr;
	}


	void UpdateStatusMessage();
	void HandleError(class UError* Error);
	void OnStartMatchmakingSucceededRPC(class URPC_PlayerSearchPrivateMatch_X* RPC);
	void HandleStartSearch(class UAsyncTask* Task);
	void OnReceiveGameServer(const struct FServerReservationData& Reservation);
	void HandleSearchTimeout();
	void OnPrivateMatchError(const struct FString& Message);
	bool StartSearch(const struct FString& InPreferredRegion, const struct U_Types_X_FCustomMatchSettings& InSettings);
	void EventPrivateMatchError(class UOnlineGamePrivateMatch_X* InPrivateMatch, class UError* Error);
};

// Class ProjectX.RPC_RejectClubInvite_X
// 0x0030 (FullSize[0x0104] - InheritedSize[0x00D4])
class URPC_RejectClubInvite_X : public URPC_X
{
public:
	int                                                ClubID;                                                    // 0x0100(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RejectClubInvite_X");
		return ptr;
	}


	class URPC_RejectClubInvite_X* SetClubID();
};

// Class ProjectX.PRI_X
// 0x0046 (FullSize[0x0424] - InheritedSize[0x03DE])
class APRI_X : public APlayerReplicationInfo
{
public:
	struct FScriptDelegate                             __EventPlayerNameChanged__Delegate;                        // 0x0400(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataMG9N[0xC];                                      // 0x0400(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventUniqueIdChanged__Delegate;                          // 0x0418(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData9PTP[0xC];                                      // 0x0418(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDestroyed__Delegate;                                // 0x0430(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03M2[0xC];                                      // 0x0430(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PRI_X");
		return ptr;
	}


	void Destroyed();
	void OnUniqueIdChanged();
	void SetUniqueId(const struct FUniqueNetId& PlayerUniqueId);
	void UnregisterPlayerFromSession();
	void RegisterPlayerWithSession();
	void AddPlayerHistoryKey(class UOnlineRecentPlayersList* PlayersList);
	void OnOwnerChanged();
	void SetPlayerName(const struct FString& S);
	void ReplicatedEvent(const struct FName& VarName);
	void EventDestroyed(class APRI_X* PRI);
	void EventUniqueIdChanged(class APRI_X* PRI);
	void EventPlayerNameChanged(class APRI_X* PRI);
};

// Class ProjectX.__OnlineClubManager_X__LeaveClub_B6853B2446D12A0209C9B1AFCF110D36
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class U__OnlineClubManager_X__LeaveClub_B6853B2446D12A0209C9B1AFCF110D36 : public UObject
{
public:
	unsigned char                                      UnknownDataY9NR[0x8];                                      // 0x0060(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.__OnlineClubManager_X__LeaveClub_B6853B2446D12A0209C9B1AFCF110D36.ClubID


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineClubManager_X__LeaveClub_B6853B2446D12A0209C9B1AFCF110D36");
		return ptr;
	}


	void __OnlineClubManager_X__LeaveClub_B6853B2446D12A0209C9B1AFCF110D36();
};

// Class ProjectX.RPC_LeaveClub_X
// 0x002C (FullSize[0x0100] - InheritedSize[0x00D4])
class URPC_LeaveClub_X : public URPC_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_LeaveClub_X");
		return ptr;
	}


};

// Class ProjectX.ClubSettings_X
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UClubSettings_X : public UObject
{
public:
	struct FString                                     ClubName;                                                  // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     ClubTag;                                                   // 0x0070(0x0010) (NeedCtorLink)
	int                                                PrimaryColor;                                              // 0x0080(0x0004)
	int                                                AccentColor;                                               // 0x0084(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClubSettings_X");
		return ptr;
	}


	bool IsAccentColorSet();
	bool IsPrimaryColorSet();
	class UClubSettings_X* Create(const struct FString& InName, const struct FString& InTag, int InPrimaryColor, int InSecondaryColor);
};

// Class ProjectX.ParameterDispenser_X
// 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
class UParameterDispenser_X : public UComponent
{
public:
	struct FPointer                                    VfTable_IISetParameter;                                    // 0x0070(0x0008) (Const, Native, NoExport)
	TArray<struct FNameParamPair>                      NameParams;                                                // 0x0078(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	TArray<struct FFloatParamPair>                     FloatParams;                                               // 0x0088(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	TArray<struct FVectorParamPair>                    VectorParams;                                              // 0x0098(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	TArray<struct FColorParamPair>                     ColorParams;                                               // 0x00A8(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	TArray<struct FActorParamPair>                     ActorParams;                                               // 0x00B8(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	TArray<TScriptInterface<class UISetParameter>>     AllComponents;                                             // 0x00C8(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParameterDispenser_X");
		return ptr;
	}


	void Inherit(class UParameterDispenser_X* Other);
	void ResetMaterials();
	void ApplyAllParameters(const TScriptInterface<class UISetParameter>& ActorComp);
	class AActor* GetActorParameter(const struct FName& Key);
	void SetActorParameter(const struct FName& Key, class AActor* Value);
	void SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value);
	void SetVectorParameter(const struct FName& Key, const struct FVector& Value);
	void SetFloatParameter(const struct FName& Key, float Value);
	void SetNameParameter(const struct FName& Key, const struct FName& Value);
	void RemoveComponent(const TScriptInterface<class UISetParameter>& ActorComp);
	void AddComponent(const TScriptInterface<class UISetParameter>& ActorComp);
};

// Class ProjectX.RPC_GetClubDetails_X
// 0x0004 (FullSize[0x0114] - InheritedSize[0x0110])
class URPC_GetClubDetails_X : public URPC_ClubDetailsBase_X
{
public:
	int                                                ClubID;                                                    // 0x0110(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetClubDetails_X");
		return ptr;
	}


	class URPC_GetClubDetails_X* SetClubID();
};

// Class ProjectX.ParticleModuleBeamTarget_X
// 0x0008 (FullSize[0x010C] - InheritedSize[0x0104])
class UParticleModuleBeamTarget_X : public UParticleModuleBeamTarget
{
public:
	unsigned char                                      UnknownDataRV67[0x4];                                      // 0x010C(0x0004) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParticleModuleBeamTarget_X");
		return ptr;
	}


};

// Class ProjectX.ParticleModuleLocationBoneSocket_X
// 0x0006 (FullSize[0x00AC] - InheritedSize[0x00A6])
class UParticleModuleLocationBoneSocket_X : public UParticleModuleLocationBoneSocket
{
public:
	unsigned char                                      UnknownDataLQI6[0x4];                                      // 0x00AC(0x0004) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParticleModuleLocationBoneSocket_X");
		return ptr;
	}


};

// Class ProjectX.ParticleModuleLocationSkelVertSurface_X
// 0x0006 (FullSize[0x00D0] - InheritedSize[0x00CA])
class UParticleModuleLocationSkelVertSurface_X : public UParticleModuleLocationSkelVertSurface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParticleModuleLocationSkelVertSurface_X");
		return ptr;
	}


};

// Class ProjectX.RPC_GetPlayerClubDetails_X
// 0x0038 (FullSize[0x0148] - InheritedSize[0x0110])
class URPC_GetPlayerClubDetails_X : public URPC_ClubDetailsBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0110(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPlayerClubDetails_X");
		return ptr;
	}


	class URPC_GetPlayerClubDetails_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};

// Class ProjectX.ParticleModuleVelocitySurfaceNormal_X
// 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
class UParticleModuleVelocitySurfaceNormal_X : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownDataRTA8[0x4];                                      // 0x0074(0x0004) MISSED OFFSET
	struct FName                                       MeshActorParamName;                                        // 0x0078(0x0008) (Edit)
	struct FRawDistributionFloat                       VelocityMultiplier;                                        // 0x0080(0x0028) (Edit, Component, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParticleModuleVelocitySurfaceNormal_X");
		return ptr;
	}


};

// Class ProjectX.ParticleModuleVelocitySurfaceNormalStatic_X
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UParticleModuleVelocitySurfaceNormalStatic_X : public UParticleModuleVelocitySurfaceNormal_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParticleModuleVelocitySurfaceNormalStatic_X");
		return ptr;
	}


};

// Class ProjectX.ClubDetails_X
// 0x005E (FullSize[0x00E6] - InheritedSize[0x0088])
class UClubDetails_X : public UClubSettings_X
{
public:
	unsigned char                                      UnknownDataK5R2[0x8];                                      // 0x0088(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.ClubDetails_X.ClubID
	struct FUniqueNetId                                OwnerPlayerID;                                             // 0x0090(0x0038)
	struct FString                                     MotD;                                                      // 0x00C8(0x0010) (NeedCtorLink)
	unsigned char                                      bVerified : 1;                                             // 0x00D8(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataAVJF[0x2];                                      // 0x00D8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataX87E[0x4];                                      // 0x00DC(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData53MI[0x8];                                      // 0x00DC(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.ClubDetails_X.LastUpdatedTime
	TArray<struct FClubMember>                         Members;                                                   // 0x00E8(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClubDetails_X");
		return ptr;
	}


	struct FString GetMemberDebugString(const struct FClubMember& Member);
	struct FString GetMembersDebugString();
	struct FString GetDebugString();
	bool IsMember(const struct FUniqueNetId& PlayerID);
	bool IsDestroyed();
	void Destroy(struct FUniqueNetId* StructInitializer_3F9AD9D148E29D10D54E32964569145C);
};

// Class ProjectX.ParticleModuleWind_X
// 0x0054 (FullSize[0x00C0] - InheritedSize[0x006C])
class UParticleModuleWind_X : public UParticleModuleWorldForcesBase
{
public:
	struct FRawDistributionFloat                       StrengthScaleOverLife;                                     // 0x0070(0x0028) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       AccelerationOverLife;                                      // 0x0098(0x0028) (Edit, Component, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParticleModuleWind_X");
		return ptr;
	}


};

// Class ProjectX.__OnlineClubProvider_X__SyncClubDetails_C259DBC84DF6E9383316DFA64D1DB01C
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__OnlineClubProvider_X__SyncClubDetails_C259DBC84DF6E9383316DFA64D1DB01C : public UObject
{
public:
	unsigned char                                      UnknownDataRQL4[0x8];                                      // 0x0060(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.__OnlineClubProvider_X__SyncClubDetails_C259DBC84DF6E9383316DFA64D1DB01C.ClubID
	class URPC_GetClubDetails_X*                       RPC;                                                       // 0x0068(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineClubProvider_X__SyncClubDetails_C259DBC84DF6E9383316DFA64D1DB01C");
		return ptr;
	}


	void __OnlineClubProvider_X__SyncClubDetails_E197FFFE40324BC7A9B533A4B1A2D3CF(class URPC_X* _);
	bool __OnlineClubProvider_X__SyncClubDetails_C259DBC84DF6E9383316DFA64D1DB01C(class URPC_GetClubDetails_X* R);
};

// Class ProjectX.__OnlineGameReservations_X__RecordReservation_26FF9703423721C1A2CEB7A9B23DD9B4
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__OnlineGameReservations_X__RecordReservation_26FF9703423721C1A2CEB7A9B23DD9B4 : public UObject
{
public:
	class UAddReservationMessage_X*                    Message;                                                   // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameReservations_X__RecordReservation_26FF9703423721C1A2CEB7A9B23DD9B4");
		return ptr;
	}


	void __OnlineGameReservations_X__RecordReservation_26FF9703423721C1A2CEB7A9B23DD9B4(const struct FReservationPlayerData& P);
};

// Class ProjectX.__OnlineClubProvider_X__HandleClubSynced_FAE220D14E2184F3C32CAE96A3E3B731
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__OnlineClubProvider_X__HandleClubSynced_FAE220D14E2184F3C32CAE96A3E3B731 : public UObject
{
public:
	class URPC_GetClubDetails_X*                       RPC;                                                       // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineClubProvider_X__HandleClubSynced_FAE220D14E2184F3C32CAE96A3E3B731");
		return ptr;
	}


	void __OnlineClubProvider_X__HandleClubSynced_FAE220D14E2184F3C32CAE96A3E3B731(const struct FClubMember& Member);
};

// Class ProjectX.PlaylistSkillCache_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UPlaylistSkillCache_X : public UObject
{
public:
	TArray<struct FPlayerSkillRating>                  Players;                                                   // 0x0060(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlaylistSkillCache_X");
		return ptr;
	}


	int GetPlayerIndex(const struct FUniqueNetId& PlayerID);
	struct FPlayerSkillRating GetPlayerRating(const struct FUniqueNetId& PlayerID);
	void ClearSkill(const struct FUniqueNetId& PlayerID);
	void CacheSkill(const struct FPlayerSkillRating& Rating);
	void PreCacheSkill(const struct FPlayerSkillRating& Rating);
};

// Class ProjectX.__OnlineClubProvider_X__SyncPlayerClubDetails_8AE1EB4E4C5A3D94FC1A13AF953833C0
// 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
class U__OnlineClubProvider_X__SyncPlayerClubDetails_8AE1EB4E4C5A3D94FC1A13AF953833C0 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                  // 0x0060(0x0038)
	class URPC_GetPlayerClubDetails_X*                 RPC;                                                       // 0x0098(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineClubProvider_X__SyncPlayerClubDetails_8AE1EB4E4C5A3D94FC1A13AF953833C0");
		return ptr;
	}


	void __OnlineClubProvider_X__SyncPlayerClubDetails_D6A5FC4C437015711547AB9F509E5CC1(class URPC_X* _);
	bool __OnlineClubProvider_X__SyncPlayerClubDetails_8AE1EB4E4C5A3D94FC1A13AF953833C0(class URPC_GetPlayerClubDetails_X* R);
};

// Class ProjectX.Pawn_X
// 0x009E (FullSize[0x0540] - InheritedSize[0x04A2])
class APawn_X : public APawn
{
public:
	unsigned char                                      UnknownData3GDJ[0x4];                                      // 0x0514(0x0004) MISSED OFFSET
	float                                              GravityScale;                                              // 0x0518(0x0004) (Edit)
	unsigned char                                      UnknownDataPGP6[0x4];                                      // 0x051C(0x0004) MISSED OFFSET
	class AController*                                 PreviousController;                                        // 0x0520(0x0008) (Transient)
	struct FScriptDelegate                             __EventDestroyed__Delegate;                                // 0x0528(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData8DDE[0xC];                                      // 0x0528(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAnimEnd__Delegate;                                  // 0x0540(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData71OE[0xC];                                      // 0x0540(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Pawn_X");
		return ptr;
	}


	bool IsSameTeam(class APawn* Other);
	void Destroyed();
	float GetGravityZ();
	void OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void OnControllerChanged();
	void PossessedBy(class AController* C);
	void UpdateControllerRef();
	void ReplicatedEvent(const struct FName& VarName);
	void EventAnimEnd(class APawn_X* ForPawn, class UAnimNodeSequence* SeqNode);
	void EventDestroyed(class APawn_X* Pawn);
};

// Class ProjectX.OnlineClubServerList_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UOnlineClubServerList_X : public UObject
{
public:
	TArray<class UClubServerResult_X*>                 Servers;                                                   // 0x0060(0x0010) (NeedCtorLink)
	class URPC_GetClubPrivateMatches_X*                RPC;                                                       // 0x0070(0x0008) (PrivateWrite)
	class UError*                                      Error;                                                     // 0x0078(0x0008) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineClubServerList_X");
		return ptr;
	}


	void __OnlineClubServerList_X__Refresh_FC99B49F445284BBA48E44A8710E9B22(class URPC_X* _);
	void __OnlineClubServerList_X__Refresh_5E5B22144365455E55628F9CD62218D9(class URPC_X* _);
	void __OnlineClubServerList_X__Refresh_0D8F3DF646E684EC2C539EB68FA327CA(class URPC_X* _);
	class UAsyncTask* Refresh();
};

// Class ProjectX.PerCon_X
// 0x002C (FullSize[0x008C] - InheritedSize[0x0060])
class UPerCon_X : public UObject
{
public:
	class UPsyNetConfig_X*                             Config;                                                    // 0x0060(0x0008)
	struct FString                                     URL;                                                       // 0x0068(0x0010) (NeedCtorLink)
	TEnumAsByte<EPerConStatus>                         Status;                                                    // 0x0078(0x0001) (PrivateWrite)
	unsigned char                                      UnknownDataS9ZQ[0x7];                                      // 0x0079(0x0007) MISSED OFFSET
	struct FScriptDelegate                             __EventStatusChanged__Delegate;                            // 0x0080(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataSBF2[0xC];                                      // 0x0079(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PerCon_X");
		return ptr;
	}


	bool UseWebSocket(bool bRpcWebSocket);
	void HandleConfigChanged();
	void SetStatus(TEnumAsByte<EPerConStatus> InStatus);
	void SetEnabled(bool bEnable);
	void EventStatusChanged(class UPerCon_X* PerCon);
};

// Class ProjectX.PhysicalMaterialProperty_X
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UPhysicalMaterialProperty_X : public UPhysicalMaterialPropertyBase
{
public:
	struct FName                                       SurfaceType;                                               // 0x0060(0x0008) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PhysicalMaterialProperty_X");
		return ptr;
	}


};

// Class ProjectX.RPC_GetClubPrivateMatches_X
// 0x003C (FullSize[0x0110] - InheritedSize[0x00D4])
class URPC_GetClubPrivateMatches_X : public URPC_X
{
public:
	TArray<class UClubServerResult_X*>                 Servers;                                                   // 0x0100(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetClubPrivateMatches_X");
		return ptr;
	}


};

// Class ProjectX.PointLightComponent_X
// 0x0010 (FullSize[0x0274] - InheritedSize[0x0264])
class UPointLightComponent_X : public UPointLightComponent
{
public:
	unsigned char                                      UnknownDataZIK0[0x4];                                      // 0x0264(0x0004) MISSED OFFSET
	class UDistributionFloatConstantCurve*             BrightnessOverTime;                                        // 0x0268(0x0008) (Edit, ExportObject, Component, EditInline)
	float                                              AttachTime;                                                // 0x0270(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PointLightComponent_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetBeaconConnection_X
// 0x002C (FullSize[0x008C] - InheritedSize[0x0060])
class UPsyNetBeaconConnection_X : public UObject
{
public:
	struct FPointer                                    VfTable_IIReservationConnection_X;                         // 0x0060(0x0008) (Const, Native, NoExport)
	struct FString                                     ReservationID;                                             // 0x0068(0x0010) (NeedCtorLink)
	struct FString                                     ConnectionID;                                              // 0x0078(0x0010) (NeedCtorLink)
	float                                              LastReceiveMessageTime;                                    // 0x0088(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetBeaconConnection_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetClientServiceCollection_X
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UPsyNetClientServiceCollection_X : public UObject
{
public:
	TArray<class UPsyNetClientService_X*>              ServiceArchetypes;                                         // 0x0060(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetClientServiceCollection_X");
		return ptr;
	}


	class UPsyNetClientService_X* GetServiceArchetype(const struct FString& ServiceName, int Version);
	void CollectServiceArchetypes();
	void Construct();
};

// Class ProjectX.PlayerTitleConfig_X
// 0x0022 (FullSize[0x0098] - InheritedSize[0x0076])
class UPlayerTitleConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FPlayerTitleCategory>                Categories;                                                // 0x0078(0x0010) (Edit, NeedCtorLink)
	TArray<struct FPlayerTitleData>                    Titles;                                                    // 0x0088(0x0010) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlayerTitleConfig_X");
		return ptr;
	}


	struct FPlayerTitleData InitTitleColors(const struct FPlayerTitleData& Data);
	struct FPlayerTitleData GetTitleData(const struct FName& TitleId, struct FPlayerTitleData* StructInitializer_9EF4B6CD4DBAABE6556E24AAC6ADB3E7);
	struct FPlayerTitleCategory GetCategory(const struct FName& CategoryID, struct FPlayerTitleCategory* StructInitializer_B4CC025B4267181D3407F0A2704DE1DA);
	void Apply(struct FPlayerTitleCategory* StructInitializer_0C4E1427493F7A9CD9957BB97D3321BF, struct FPlayerTitleCategory* StructInitializer_8690E1414787F57061A4EC878150B524, struct FPlayerTitleData* StructInitializer_762BAC484E906FE5A58030892AFFFB21, struct FPlayerTitleData* StructInitializer_EAB8FDC845B3AF5E7C5A73A0D601D726, TArray<struct FPlayerTitleData>* MapLocal_8E02C81E4BAD743D1A90AB967E26DC8C);
};

// Class ProjectX.RPC_FilterContent_X
// 0x006C (FullSize[0x0140] - InheritedSize[0x00D4])
class URPC_FilterContent_X : public URPC_X
{
public:
	TArray<struct FString>                             Content;                                                   // 0x0100(0x0010) (NeedCtorLink)
	TArray<struct FString>                             FilteredContent;                                           // 0x0110(0x0010) (Transient, NeedCtorLink)
	TArray<struct FScriptDelegate>                     Callbacks;                                                 // 0x0120(0x0010) (Transient, NeedCtorLink)
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                 // 0x0130(0x0010) (Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_FilterContent_X");
		return ptr;
	}


	class URPC_FilterContent_X* AddComment(const struct FString& Comment, const struct FScriptDelegate& Callback, const struct FUniqueNetId& PlayerID);
};

// Class ProjectX.RPC_PartySendInvite_X
// 0x0038 (FullSize[0x0148] - InheritedSize[0x0110])
class URPC_PartySendInvite_X : public URPC_PartyBase_X
{
public:
	struct FUniqueNetId                                InviteeID;                                                 // 0x0110(0x0038)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartySendInvite_X");
		return ptr;
	}


	class URPC_PartySendInvite_X* Invite(const struct FUniqueNetId& InInviteeUserId);
};

// Class ProjectX.OnlineGameMatchmaking_X
// 0x00FA (FullSize[0x01C2] - InheritedSize[0x00C8])
class UOnlineGameMatchmaking_X : public UOnlineGameMatchmakingBase_X
{
public:
	TArray<int>                                        PreferredPlaylists;                                        // 0x00F8(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TArray<struct FString>                             PreferredRegions;                                          // 0x0108(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FString                                     SearchingString;                                           // 0x0118(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     StartSearchFailString;                                     // 0x0128(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     FoundServerString;                                         // 0x0138(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     PlaylistsHaveChangedString;                                // 0x0148(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     RegionsHaveChangedString;                                  // 0x0158(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     MatchmakingAttemptString;                                  // 0x0168(0x0010) (Const, Localized, NeedCtorLink)
	float                                              MatchmakingStartTime;                                      // 0x0178(0x0004) (Transient, PrivateWrite)
	int                                                MatchmakingBanTime;                                        // 0x017C(0x0004) (PrivateWrite)
	unsigned char                                      bIgnoreSkill : 1;                                          // 0x0180(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownDataUGE0[0x2];                                      // 0x0180(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              MatchmakingDisabledDuration;                               // 0x0184(0x0004) (Edit)
	float                                              MatchmakingDisabledUntilTime;                              // 0x0188(0x0004) (Transient, PrivateWrite)
	unsigned char                                      UnknownDataBJWY[0x4];                                      // 0x018C(0x0004) MISSED OFFSET
	struct FString                                     LastReservationID;                                         // 0x0190(0x0010) (Transient, NeedCtorLink)
	struct FScriptDelegate                             __EventStartSearch__Delegate;                              // 0x01A0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataIYP2[0xC];                                      // 0x01A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMatchmakingError__Delegate;                         // 0x01B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataQJP3[0xC];                                      // 0x01B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMatchmakingCanceledOnPartySizeChanged__Delegate;    // 0x01D0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataUX84[0xC];                                      // 0x01D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameMatchmaking_X");
		return ptr;
	}


	bool AddRecommendedServers(float PingThreshold, float PingIncrement, float MaxPing);
	void RecordStart(bool bUseRecommendedRegions);
	void StartMatchmaking();
	void UpdateMatchmaking();
	void SendMatchmakingState();
	void HandleError(class UError* Error);
	void HandleMatchmakingStartSuccessRPC(class URPC_StartMatchmaking_X* RPC);
	void HandleStartSearch(class UAsyncTask* Task);
	void OnReceiveGameServer(const struct FServerReservationData& Reservation);
	void SetupForTimeConstraints();
	void OnPlaylistTimeEnded();
	struct FString __OnlineGameMatchmaking_X__StartSearch_E9AFE701474548AACEB742A2E653D708(class URegionPing_X* R);
	struct FString __OnlineGameMatchmaking_X__GetLocalizedRegionsString_89C8D46D442447B8CE83ACB39FC39468(class USuperRegion_X* SuperRegion);
	class USuperRegion_X* __OnlineGameMatchmaking_X__GetLocalizedRegionsString_601A0DFE4C5571B095C42999E242AED5(class URegion_X* R);
	struct FString __OnlineGameMatchmaking_X__GetDebugSuperRegionString_614E895D4E118DDFA71370A0EBD1B059(class URegionPing_X* R);
	struct FString __OnlineGameMatchmaking_X__AddRecommendedServers_99F1CF004F81AFF9205D8FB9F385BEF5(class URegionPing_X* R);
	struct FString __OnlineGameMatchmaking_X__AddRecommendedServers_6F7E132843994C39D85EDBBE23FC933E(class URegionPing_X* R);
	bool __OnlineGameMatchmaking_X__RecordStart_7AB4E49F46F0851D56BA719898E00310(class URegionPing_X* R);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsMatchmakingDisabled();
	class UMatchmakingMetrics_X* GetMetrics();
	void SetSkillIgnored(bool bIgnore);
	void ToggleSkill();
	void ClearMatchmakingBanTime();
	void SetMatchmakingBanTime(int Duration);
	void HandlePartyLeaderChanged(class UOnlineGameParty_X* PartyObject);
	void HandlePartySizeChanged(class UOnlineGameParty_X* PartyObject, int NewSize, int OldSize);
	void HandlePartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void OnFindGameWarning(const struct FString& FailReason);
	void GetGameServerID();
	int SortPlaylists(int A, int B);
	struct FString GetPartyMembersString();
	TArray<class URegionPing_X*> GetSubRegionPings(const struct FString& SuperRegionID, TArray<class URegionPing_X*>* FilterLocal_CF9B0F4F4A63EA8B3005A29A0434C961);
	struct FString GetDebugSuperRegionString(class USuperRegion_X* SuperRegion, TArray<struct FString>* MapLocal_94679E714A5819B74AD121AB7B0255F7);
	struct FString GetLocalizedRegionsString(TArray<class URegion_X*>* MapLocal_824A3F814070ACEF86EC1F9269F48477, TArray<class USuperRegion_X*>* MapLocal_905BE30D475D7B8B2D45AB9C57594730, TArray<class USuperRegion_X*>* FilterLocal_B42A511A47F398BE7710548251332FC1, TArray<class USuperRegion_X*>* DistinctLocal_26A5B6D348B69C8200E783BB26FEF2CE, TArray<struct FString>* MapLocal_B29BB5BD4063DB893EDD8C8D08F8BB85);
	struct FString GetRegionsString();
	struct FString GetLocalizedPlaylistsString();
	struct FString GetPlaylistsString();
	void OnExit();
	bool StartSearch(TArray<int> InPreferredPlaylists, TArray<struct FString> InPreferredSuperRegions, TArray<int>* SortLocal_9AC8DECC4298D2E51F2E62B0297E4A76, TArray<class URegionPing_X*>* MapManyLocal_A06AC95540720D0AB9BF789ED9383926, TArray<struct FString>* MapLocal_1EA67DD346FEC45B72CAD0B9C219DC07);
	void OnInit();
	void EventMatchmakingCanceledOnPartySizeChanged(class UOnlineGameMatchmaking_X* InMatchMaking);
	void EventMatchmakingError(class UOnlineGameMatchmaking_X* InMatchMaking, class UError* Error);
	void EventStartSearch(class UOnlineGameMatchmakingBase_X* InMatchMaking);
};

// Class ProjectX.RPC_SetClubMotD_X
// 0x0010 (FullSize[0x0148] - InheritedSize[0x0138])
class URPC_SetClubMotD_X : public URPC_CreateClub_X
{
public:
	struct FString                                     Text;                                                      // 0x0138(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetClubMotD_X");
		return ptr;
	}


	class URPC_SetClubMotD_X* SetText(const struct FString& InText);
};

// Class ProjectX.RPC_SetRichPresence_X
// 0x004C (FullSize[0x0120] - InheritedSize[0x00D4])
class URPC_SetRichPresence_X : public URPC_X
{
public:
	struct FString                                     PresenceInfo;                                              // 0x0100(0x0010) (NeedCtorLink)
	struct FString                                     PresenceState;                                             // 0x0110(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetRichPresence_X");
		return ptr;
	}


	class URPC_SetRichPresence_X* SetPresenceState(const struct FString& InState);
	class URPC_SetRichPresence_X* SetPresenceInfo(const struct FString& InInfo);
};

// Class ProjectX.OnlineGameSkill_X
// 0x004C (FullSize[0x00C4] - InheritedSize[0x0078])
class UOnlineGameSkill_X : public UOnline_X
{
public:
	TArray<class UPlaylistSkillCache_X*>               Playlists;                                                 // 0x0078(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	TArray<struct FPlayerSeasonRewardProgress>         SeasonRewards;                                             // 0x0088(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	TArray<struct FSkillSyncRequest>                   SyncRequests;                                              // 0x0098(0x0010) (Transient, NeedCtorLink)
	TArray<struct FUniqueNetId>                        SkillsSyncedPlayers;                                       // 0x00A8(0x0010) (Transient, NeedCtorLink)
	struct FScriptDelegate                             __EventSkillSynced__Delegate;                              // 0x00B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataE5OK[0xC];                                      // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameSkill_X");
		return ptr;
	}


	bool SkillsSynced(const struct FUniqueNetId& PlayerID);
	int GetHighestSkillTier(const struct FUniqueNetId& PlayerID);
	struct FPlayerSeasonRewardProgress GetPlayerSeasonRewardProgress(const struct FUniqueNetId& PlayerID);
	class UPlaylistSkillCache_X* GetPlaylistSkillCache(int Playlist);
	void HandleSkillsUpdateFailed(class URPC_X* RPC);
	void SetPlayerSeasonReward(const struct FPlayerSeasonRewardProgress& Reward);
	void ReplicateSeasonReward(const struct FPlayerSeasonRewardProgress& Reward);
	void HandleSkillsUpdated(class URPC_UpdateSkills_X* RPC, struct FPlayerSeasonRewardProgress* StructInitializer_22CAFB4743BE329979C86CA0CA5B83BA);
	void SubmitMatch(class UMatchData_X* Match, const struct FString& MatchGUID);
	void Clear();
	float GetConservativeMMR(float Mu, float Sigma);
	float GetPlayerConservativeMMR(const struct FUniqueNetId& PlayerID, int Playlist);
	float GetMMR(float Mu, float Sigma);
	float GetPlayerMMR(const struct FUniqueNetId& PlayerID, int Playlist);
	struct FPlayerSkillRating GetPlayerRating(const struct FUniqueNetId& PlayerID, int Playlist);
	void OnSkillSynced(const struct FUniqueNetId& PlayerID, class UError* Error, class USyncedSkillData_X** ObjectInitializer_C5AC54A6499E1BDBCEE677AD9E7BAACC);
	void CacheSeasonReward(const struct FPlayerSeasonRewardProgress& Reward);
	void HandleSkillRequestCompleteRPC(class URPC_GetPlayerSkill_X* RPC);
	void SyncPlayerSkill(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	void CacheSkill(const struct FPlayerSkillRating& Rating, int Playlist);
	void PreCacheSkill(const struct FPlayerSkillRating& Rating, int Playlist);
	int GetSkillPlaylistID(int PlaylistId);
	void EventSkillSynced(class UOnlineGameSkill_X* Skill, const struct FUniqueNetId& PlayerID, class UError* Error);
};

// Class ProjectX.RPC_UpdateClub_X
// 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
class URPC_UpdateClub_X : public URPC_CreateClub_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateClub_X");
		return ptr;
	}


};

// Class ProjectX.OnlineGameBlog_X
// 0x003C (FullSize[0x00B4] - InheritedSize[0x0078])
class UOnlineGameBlog_X : public UOnline_X
{
public:
	class UOnlineResource_X*                           TextSync;                                                  // 0x0078(0x0008) (ExportObject, Component, EditInline)
	class UBlogTiles_X*                                BlogTiles;                                                 // 0x0080(0x0008) (Transient)
	TArray<struct FMotDMessage>                        MotDAdditionalMessages;                                    // 0x0088(0x0010) (NeedCtorLink)
	class UUrlConfig_X*                                UrlConfig;                                                 // 0x0098(0x0008)
	class UWebConfig_X*                                WebConfig;                                                 // 0x00A0(0x0008)
	struct FScriptDelegate                             __EventBlogUpdated__Delegate;                              // 0x00A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataJ43X[0xC];                                      // 0x00A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameBlog_X");
		return ptr;
	}


	struct FString __OnlineGameBlog_X__GetMotD_3B10645F4BD764A94CDB87A5D0F433CC(const struct FMotDMessage& M);
	void AddUniqueMotDMessage(const struct FString& NewMessage, const struct FName& NewMessageTag);
	void AddAdditionalMotDMessage(const struct FString& NewMessage, const struct FName& NewMessageTag, struct FMotDMessage* StructInitializer_D88847DA49187C0FA2CE1B99436919B5);
	void RemoveAdditionalMessagesByTag(const struct FName& MessageTag, TArray<struct FMotDMessage>* FilterLocal_68B8C24C40AEF09358AB7E8B3B475AEF);
	struct FString GetMotD(TArray<struct FString>* MapLocal_02CFF01B451B53D8354FC480A5D368C9);
	void HandleTextSynced(class UOnlineResource_X* _);
	void HandleDataChanged(class UOnlineResource_X* _);
	void Sync(const struct FScriptDelegate& Callback);
	void HandleUrlChanged();
	void HandleWebConfigChanged();
	void EventBlogUpdated(class UOnlineGameBlog_X* Blog);
};

// Class ProjectX.UdpLanBrowser_X
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UUdpLanBrowser_X : public ULanBrowser_X
{
public:
	float                                              SearchTimeout;                                             // 0x0060(0x0004) (Edit, Const)
	unsigned char                                      UnknownData1VON[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	class ULanBeacon_X*                                LanBeacon;                                                 // 0x0068(0x0008) (ExportObject, Component, EditInline)
	class UTAsyncResult__array_LanServerRecord_X*      SearchTask;                                                // 0x0070(0x0008)
	TArray<class ULanServerRecord_X*>                  SearchResults;                                             // 0x0078(0x0010) (NeedCtorLink)
	class UUdpLanServer_X*                             LocalServer;                                               // 0x0088(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UdpLanBrowser_X");
		return ptr;
	}


	class UAsyncTask* JoinServer(const struct FString& serverId, const struct FString& Options);
	void HandleSearchTimeout();
	void HandleHostResponse(class UOnlineMessageComponent_X* Component, class ULanMessage_HostResponse_X* Response);
	void SearchTaskDisposed();
	class UTAsyncResult__array_LanServerRecord_X* GetServerList();
	void DestroyServer();
	class UAsyncTask* SetServerMetaData(const struct FString& MetaData);
	class UAsyncTask* CreateServer(const struct FString& MetaData);
};

// Class ProjectX.RPC_RecordMatchResults_X
// 0x00AC (FullSize[0x0180] - InheritedSize[0x00D4])
class URPC_RecordMatchResults_X : public URPC_X
{
public:
	struct FString                                     MatchGUID;                                                 // 0x0100(0x0010) (NeedCtorLink)
	struct FSkillMatchData                             Match;                                                     // 0x0110(0x0020)
	struct FString                                     MatchName;                                                 // 0x0130(0x0010) (NeedCtorLink)
	TArray<struct FSkillMatchPlayer>                   Winners;                                                   // 0x0140(0x0010) (NeedCtorLink)
	TArray<struct FSkillMatchPlayer>                   Losers;                                                    // 0x0150(0x0010) (NeedCtorLink)
	struct FGuid                                       AppSessionID;                                              // 0x0160(0x0010)
	struct FGuid                                       LevelSessionID;                                            // 0x0170(0x0010)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RecordMatchResults_X");
		return ptr;
	}


	int GetPartyIndex(TArray<struct FUniqueNetId>* PartyIDs, const struct FUniqueNetId& LeaderID);
	void InitSkillMatchPlayers(class UMatchData_X* MatchData);
	struct FSkillMatchPlayer InitSkillMatchPlayer(TArray<struct FUniqueNetId>* PartyIDs, class UMatchData_X* MatchData, class UMatchPlayerData_X* Player);
	class URPC_RecordMatchResults_X* SetMetrics(class UMetricsSystem_X* MetricsSystem);
	class URPC_RecordMatchResults_X* SetMatchName(const struct FString& InName);
	class URPC_RecordMatchResults_X* SetMatch(class UMatchData_X* InMatch);
	class URPC_RecordMatchResults_X* SetMatchGUID(const struct FString& InGuid);
};

// Class ProjectX.PsyNetConnection_X
// 0x00F4 (FullSize[0x0154] - InheritedSize[0x0060])
class UPsyNetConnection_X : public UObject
{
public:
	float                                              MaintenanceTime;                                           // 0x0060(0x0004) (Edit)
	unsigned char                                      UnknownDataLV2U[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	class UPsyNet_X*                                   PsyNet;                                                    // 0x0068(0x0008)
	class UOnlineSubsystem*                            OnlineSub;                                                 // 0x0070(0x0008)
	class UPsyNetConfig_X*                             Config;                                                    // 0x0078(0x0008)
	class UPsyNetUrl_X*                                URL;                                                       // 0x0080(0x0008)
	class UStringMap*                                  Headers;                                                   // 0x0088(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UPsyNetRequestQue_X*                         RequestQue;                                                // 0x0090(0x0008) (PrivateWrite)
	class URPCQueue_X*                                 RPCQueue;                                                  // 0x0098(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UPsyNetServiceProvider_X*                    ServiceProvider;                                           // 0x00A0(0x0008) (PrivateWrite)
	class UPsyNetMessengerHttp_X*                      HttpMessenger;                                             // 0x00A8(0x0008) (PrivateWrite)
	class UPsyNetMessengerWebSocket_X*                 PerConMessenger;                                           // 0x00B0(0x0008) (PrivateWrite)
	class UPerCon_X*                                   PerCon;                                                    // 0x00B8(0x0008) (PrivateWrite)
	class UPerConMetrics_X*                            PerConMetrics;                                             // 0x00C0(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	unsigned char                                      bAuthorized : 1;                                           // 0x00C8(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownDataUOA1[0x2];                                      // 0x00C8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bConnected : 1;                                            // 0x00C8(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownData1XPZ[0x2];                                      // 0x00CC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bFreshConnection : 1;                                      // 0x00C8(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownDataYJUJ[0x2];                                      // 0x00CC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bPerConConnected : 1;                                      // 0x00C8(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownData2UWU[0x2];                                      // 0x00CC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              ConnectedChangeTime;                                       // 0x00CC(0x0004) (PrivateWrite)
	class UError*                                      DisabledError;                                             // 0x00D0(0x0008) (PrivateWrite)
	TArray<class UError*>                              DisabledErrorStack;                                        // 0x00D8(0x0010) (NeedCtorLink)
	class UError*                                      MaintenanceError;                                          // 0x00E8(0x0008)
	class UError*                                      DuplicateLoginError;                                       // 0x00F0(0x0008)
	class UError*                                      NoInternetError;                                           // 0x00F8(0x0008)
	class UError*                                      NoUrlError;                                                // 0x0100(0x0008)
	struct FScriptDelegate                             __EventConnected__Delegate;                                // 0x0108(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataRYHA[0xC];                                      // 0x0108(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                             // 0x0120(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataD48A[0xC];                                      // 0x0120(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventConnectFailed__Delegate;                            // 0x0138(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataNYYU[0xC];                                      // 0x0138(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPerConConnected__Delegate;                          // 0x0150(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData4ER8[0xC];                                      // 0x0150(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPerConDisconnected__Delegate;                       // 0x0168(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5OKD[0xC];                                      // 0x0168(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventEnabled__Delegate;                                  // 0x0180(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData87Z5[0xC];                                      // 0x0180(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisabled__Delegate;                                 // 0x0198(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataVQDQ[0xC];                                      // 0x0198(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetConnection_X");
		return ptr;
	}


	void SendPingMessage();
	void WatchPerConConnection(const struct FScriptDelegate& OnConnected, const struct FScriptDelegate& OnDisconnected);
	void StopWatchConnection(const struct FScriptDelegate& OnConnected, const struct FScriptDelegate& OnDisconnected);
	void WatchConnection(const struct FScriptDelegate& OnConnected, const struct FScriptDelegate& OnDisconnected);
	void WatchEnabled(const struct FScriptDelegate& OnEnabled, const struct FScriptDelegate& OnDisabled);
	void Dispose();
	void UpdateLinkConnection(bool bHasConnection);
	void ClearDuplicateLoginError();
	void OnDuplicateLogin();
	void HandleDuplicateLoginMessage(class UPsyNetClientService_X* Service);
	void HandleWebSocketDisconnect(class UPsyNetMessengerWebSocket_X* WS, int Code, const struct FString& Reason);
	void HandleWebSocketConnect(class UPsyNetMessengerWebSocket_X* WS);
	void HandleWebSocketStartConnectFail(class UPsyNetMessengerWebSocket_X* WS);
	void UpdateConnectionState();
	void ClearMaintenance();
	void HandleErrorRPC(class URPCQueue_X* InQueue, class URPC_X* InRPC, class UError* Error);
	bool IsEnabled();
	void UpdateDisabledError(class UError** Error, class UErrorType* Type, bool bIsError);
	void AddDisabledError(class UError* Error);
	void RemoveDisabledError(class UError* Error);
	TEnumAsByte<EFlushResult> Flush(float TimeoutSeconds);
	class URPC_X* QueueRPC(class URPC_X* RPC);
	class URPC_X* RPC(class UClass* RPCClass);
	bool ProcessServiceCall(class UPsyNetMessage_X* Message);
	void ProcessMessage(class UPsyNetMessage_X* Message);
	void UpdatePsyTime(class UPsyNetMessage_X* Message);
	void ReceiveMessage(class UPsyNetMessage_X* Message);
	class UTAsyncResult__PsyNetMessage_X* SendRequest(class UPsyNetMessage_X* Request);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
	void RemoveHeader(const struct FString& Key);
	void SetHeader(const struct FString& Key, const struct FString& Value);
	void SetAuthorized(bool bAuth);
	class UStringMap* BuildHandshakeHeaders();
	class UPsyNetMessenger_X* GetMessenger();
	void CreatePerConMessenger();
	void CreateHttpMessenger(const struct FString& InURL);
	void KillPerConMessenger();
	void KillHttpMessenger();
	void KillMessengers();
	void CreateMessengers();
	void InitMessengers();
	void InitServiceProvider();
	void HandlePerConStatusChanged(class UPerCon_X* P);
	void InitPerCon();
	void InitRPCQueue();
	void InitRequestQue();
	void InitHeaders();
	void UpdateNoUrlError();
	void HandleUrlChanged();
	struct FString GetPsyNetURL();
	void Construct();
	void EventDisabled(class UPsyNetConnection_X* Connection);
	void EventEnabled(class UPsyNetConnection_X* Connection);
	void EventPerConDisconnected(class UPsyNetConnection_X* Connection);
	void EventPerConConnected(class UPsyNetConnection_X* Connection);
	void EventConnectFailed(class UPsyNetConnection_X* Connection);
	void EventDisconnected(class UPsyNetConnection_X* Connection);
	void EventConnected(class UPsyNetConnection_X* Connection);
};

// Class ProjectX.__OnlineGame_X__CheckPsyNetConnection_6F67B56847FC7E258D53E1A444D4C693
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__OnlineGame_X__CheckPsyNetConnection_6F67B56847FC7E258D53E1A444D4C693 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                      // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGame_X__CheckPsyNetConnection_6F67B56847FC7E258D53E1A444D4C693");
		return ptr;
	}


	void __OnlineGame_X__CheckPsyNetConnection_6F67B56847FC7E258D53E1A444D4C693(class UOnlinePlayerAuthentication_X* Auth);
};

// Class ProjectX.PsyNetErrorType_X
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UPsyNetErrorType_X : public UErrorType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetErrorType_X");
		return ptr;
	}


};

// Class ProjectX.RPC_GetPublicIP_X
// 0x003C (FullSize[0x0110] - InheritedSize[0x00D4])
class URPC_GetPublicIP_X : public URPC_X
{
public:
	struct FString                                     IP;                                                        // 0x0100(0x0010) (Transient, NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPublicIP_X");
		return ptr;
	}


};

// Class ProjectX.RPC_UpdateSkills_X
// 0x0030 (FullSize[0x01B0] - InheritedSize[0x0180])
class URPC_UpdateSkills_X : public URPC_RecordMatchResults_X
{
public:
	int                                                Playlist;                                                  // 0x0180(0x0004)
	unsigned char                                      UnknownDataKSVU[0x4];                                      // 0x0184(0x0004) MISSED OFFSET
	TArray<struct FUpdatedPlayerSkillRating>           NewSkills;                                                 // 0x0188(0x0010) (Transient, NeedCtorLink)
	TArray<struct FRPCPlayerRewardLevelData>           NewRewardLevels;                                           // 0x0198(0x0010) (Transient, NeedCtorLink)
	class UMatchData_X*                                MatchData;                                                 // 0x01A8(0x0008) (Transient, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateSkills_X");
		return ptr;
	}


	class URPC_RecordMatchResults_X* SetMatch(class UMatchData_X* InMatch);
};

// Class ProjectX.PsyNetMessage_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UPsyNetMessage_X : public UObject
{
public:
	class UStringMap*                                  Headers;                                                   // 0x0060(0x0008) (Const, ExportObject, Component, EditInline)
	TArray<unsigned char>                              Body;                                                      // 0x0068(0x0010) (NeedCtorLink, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetMessage_X");
		return ptr;
	}


	struct FString GetBodyText();
	void SetBodyText(const struct FString& Value);
	void SetBody(TArray<unsigned char>* Value);
};

// Class ProjectX.SyncedSkillData_X
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class USyncedSkillData_X : public UObject
{
public:
	class UOnlineGameSkill_X*                          OnlineGameSkill;                                           // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SyncedSkillData_X");
		return ptr;
	}


};

// Class ProjectX.OnlineGameVersion_X
// 0x0002 (FullSize[0x007A] - InheritedSize[0x0078])
class UOnlineGameVersion_X : public UOnline_X
{
public:
	unsigned char                                      bUpdateRequired : 1;                                       // 0x0078(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData8MOX[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameVersion_X");
		return ptr;
	}


	void __OnlineGameVersion_X__OnInit_C3E94B8A4012B31201A9B6A2EE57B995(class UOnlineGameServerBrowser_X* _, class UError* Error);
	void __OnlineGameVersion_X__OnInit_BDEEA6A048173261D094F392EC07A9B8(class UOnlineGamePrivateMatch_X* _, class UError* Error);
	void __OnlineGameVersion_X__OnInit_498530A7456AC28C52D1FD9B4BBFAB44(class UOnlineGameRegions_X* _, class UError* Error);
	void __OnlineGameVersion_X__OnInit_75B6E95B4BE9E5DC3678A2AC51CB37A9(class UOnlineGameMatchmaking_X* _, class UError* Error);
	void HandleError(class UError* Error);
	void OnInit();
};

// Class ProjectX.PsyNetMessengerHttp_X
// 0x001C (FullSize[0x0088] - InheritedSize[0x006C])
class UPsyNetMessengerHttp_X : public UPsyNetMessenger_X
{
public:
	struct FString                                     URL;                                                       // 0x0078(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetMessengerHttp_X");
		return ptr;
	}


	void CopyHeadersToMessage(class UWebRequest_X* From, class UPsyNetMessage_X* To);
	void CopyHeadersToRequest(class UPsyNetMessage_X* From, class UWebRequest_X* To);
	void HandleWebRequestComplete(const struct FString& PsyRequestID, class UWebRequest_X* Request, class UAsyncTask* Task);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
};

// Class ProjectX.UrlConfig_X
// 0x0060 (FullSize[0x00C0] - InheritedSize[0x0060])
class UUrlConfig_X : public UObject
{
public:
	struct FString                                     CDN;                                                       // 0x0060(0x0010) (Config, NeedCtorLink)
	struct FString                                     BlogURL;                                                   // 0x0070(0x0010) (NeedCtorLink)
	struct FString                                     ESportsURL;                                                // 0x0080(0x0010) (NeedCtorLink)
	struct FString                                     ChinaPaymentURL;                                           // 0x0090(0x0010) (Config, NeedCtorLink)
	struct FString                                     CrossPlatformSupportURL;                                   // 0x00A0(0x0010) (Config, NeedCtorLink)
	struct FString                                     LegalTextWebFolder;                                        // 0x00B0(0x0010) (Config, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UrlConfig_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetServiceSerializer_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPsyNetServiceSerializer_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetServiceSerializer_X");
		return ptr;
	}


	struct FString SerializeResponse(class UPsyNetClientService_X* Service);
	void DeserializeRequest(const struct FString& JSON, class UPsyNetClientService_X* Service);
};

// Class ProjectX.RPC_UpdatePlayerPlaylist_X
// 0x0034 (FullSize[0x0108] - InheritedSize[0x00D4])
class URPC_UpdatePlayerPlaylist_X : public URPC_X
{
public:
	int                                                Playlist;                                                  // 0x0100(0x0004) (PrivateWrite)
	int                                                NumLocalPlayers;                                           // 0x0104(0x0004) (PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdatePlayerPlaylist_X");
		return ptr;
	}


	class URPC_UpdatePlayerPlaylist_X* SetNumLocalPlayers(int InNumLocalPlayers);
	class URPC_UpdatePlayerPlaylist_X* SetPlaylist(int InPlaylist);
};

// Class ProjectX.__OnlineGameBlog_X__RemoveAdditionalMessagesByTag_676717FC497AE38311AB87ABF0B50010
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class U__OnlineGameBlog_X__RemoveAdditionalMessagesByTag_676717FC497AE38311AB87ABF0B50010 : public UObject
{
public:
	struct FName                                       MessageTag;                                                // 0x0060(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameBlog_X__RemoveAdditionalMessagesByTag_676717FC497AE38311AB87ABF0B50010");
		return ptr;
	}


	bool __OnlineGameBlog_X__RemoveAdditionalMessagesByTag_676717FC497AE38311AB87ABF0B50010(const struct FMotDMessage& M);
};

// Class ProjectX.BlogTiles_X
// 0x0044 (FullSize[0x00A4] - InheritedSize[0x0060])
class UBlogTiles_X : public UObject
{
public:
	TArray<class UBlogTile_X*>                         CarouselTiles;                                             // 0x0060(0x0010) (NeedCtorLink)
	TArray<class UBlogTile_X*>                         RLCSTiles;                                                 // 0x0070(0x0010) (NeedCtorLink)
	TArray<class UBlogTile_X*>                         CommunityTiles;                                            // 0x0080(0x0010) (NeedCtorLink)
	struct FString                                     MotD;                                                      // 0x0090(0x0010) (NeedCtorLink)
	int                                                NumOfCarouselTiles;                                        // 0x00A0(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BlogTiles_X");
		return ptr;
	}


	void __BlogTiles_X__UTCtoEpochArray_90D1863943898AEE1EE599A60D56460F(class UBlogTile_X* BlogTile);
	void UTCtoEpochArray(TArray<class UBlogTile_X*>* BlogTiles);
	void UTCtoEpoch();
};

// Class ProjectX.OnlineResource_X
// 0x0060 (FullSize[0x00D0] - InheritedSize[0x0070])
class UOnlineResource_X : public UComponent
{
public:
	struct FString                                     URL;                                                       // 0x0070(0x0010) (Edit, NeedCtorLink)
	TArray<float>                                      RetryDelays;                                               // 0x0080(0x0010) (Edit, NeedCtorLink)
	float                                              CacheSeconds;                                              // 0x0090(0x0004) (Edit)
	unsigned char                                      bZipResponse : 1;                                          // 0x0094(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataK4UD[0x2];                                      // 0x0094(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bSyncing : 1;                                              // 0x0094(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownDataTW60[0x2];                                      // 0x0098(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UStringMap*                                  Headers;                                                   // 0x0098(0x0008) (Edit, ExportObject, Component, EditInline)
	class UCachedWebData_X*                            CachedData;                                                // 0x00A0(0x0008) (Transient, PrivateWrite)
	int                                                RetryCount;                                                // 0x00A8(0x0004) (Transient)
	float                                              LastSyncTime;                                              // 0x00AC(0x0004) (Transient)
	struct FScriptDelegate                             __EventSyncComplete__Delegate;                             // 0x00B0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataIJYB[0xC];                                      // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventSyncError__Delegate;                                // 0x00C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataN396[0xC];                                      // 0x00C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDataChanged__Delegate;                              // 0x00E0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataYBN4[0xC];                                      // 0x00E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineResource_X");
		return ptr;
	}


	void SetCachedData(class UCachedWebData_X* NewData);
	bool IsValidNewData(class UCachedWebData_X* Data);
	void ClearRetryTimer();
	void SetRetryTimer(float Delay);
	void HandleSync(class UCachedWebData_X* Data);
	void RetrySync();
	void SyncData(const struct FScriptDelegate& Callback);
	void EventDataChanged(class UOnlineResource_X* DataSync);
	void EventSyncError(class UOnlineResource_X* DataSync, class UError* Error);
	void EventSyncComplete(class UOnlineResource_X* DataSync);
};

// Class ProjectX.WebConfig_X
// 0x0008 (FullSize[0x007E] - InheritedSize[0x0076])
class UWebConfig_X : public UOnlineConfig_X
{
public:
	unsigned char                                      bCacheWebImages : 1;                                       // 0x0078(0x0001) BIT_FIELD (Edit, Config)
	unsigned char                                      UnknownDataBKP0[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bZipPsyNetStaticData : 1;                                  // 0x0078(0x0001) BIT_FIELD (Edit, Config)
	unsigned char                                      UnknownData4XAM[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bZipBlog : 1;                                              // 0x0078(0x0001) BIT_FIELD (Edit, Config)
	unsigned char                                      UnknownDataQXBG[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              PsyNetStaticDataCacheMinutes;                              // 0x007C(0x0004) (Edit, Config)
	float                                              BlogCacheMinutes;                                          // 0x0080(0x0004) (Edit, Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WebConfig_X");
		return ptr;
	}


};

// Class ProjectX.PsyNetStaticData_X
// 0x0096 (FullSize[0x0106] - InheritedSize[0x0070])
class UPsyNetStaticData_X : public UComponent
{
public:
	struct FString                                     PsyConfigTemplateURL;                                      // 0x0070(0x0010) (Edit, Config, NeedCtorLink)
	float                                              SyncUrlTimeoutSeconds;                                     // 0x0080(0x0004) (Edit, Config)
	float                                              LocalCacheTimeoutSeconds;                                  // 0x0084(0x0004) (Edit, Config)
	float                                              SyncDataTimeoutSeconds;                                    // 0x0088(0x0004) (Edit, Config)
	unsigned char                                      UnknownData0SMM[0x4];                                      // 0x008C(0x0004) MISSED OFFSET
	class UPsyNet_X*                                   PsyNet;                                                    // 0x0090(0x0008)
	class UOnlineSubsystem*                            OnlineSub;                                                 // 0x0098(0x0008)
	class UWebConfig_X*                                WebConfig;                                                 // 0x00A0(0x0008)
	unsigned char                                      bDebug : 1;                                                // 0x00A8(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataZEK9[0x2];                                      // 0x00A8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bLoaded : 1;                                               // 0x00A8(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData7UX8[0x2];                                      // 0x00AC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bBlockingSync : 1;                                         // 0x00A8(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownDataVTYC[0x2];                                      // 0x00AC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataWUJ0[0x4];                                      // 0x00AC(0x0004) MISSED OFFSET
	class UCacheTimer_X*                               CacheTimer;                                                // 0x00B0(0x0008) (Edit, ExportObject, Component, EditInline)
	class UOnlineResource_X*                           WebData;                                                   // 0x00B8(0x0008) (Edit, ExportObject, Component, EditInline)
	TArray<class UObject*>                             DefaultObjects;                                            // 0x00C0(0x0010) (Edit, NeedCtorLink)
	TArray<class UObject*>                             DownloadedObjects;                                         // 0x00D0(0x0010) (Transient, NeedCtorLink)
	TArray<class UObject*>                             RegisteredObjects;                                         // 0x00E0(0x0010) (Transient, NeedCtorLink)
	class UStopwatch*                                  SyncUrlStopwatch;                                          // 0x00F0(0x0008) (ExportObject, Component, EditInline)
	class UStopwatch*                                  SyncDataStopwatch;                                         // 0x00F8(0x0008) (ExportObject, Component, EditInline)
	struct FScriptDelegate                             __EventLoaded__Delegate;                                   // 0x0100(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataU5J7[0xC];                                      // 0x0100(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetStaticData_X");
		return ptr;
	}


	void __PsyNetStaticData_X__Init_46C57FA642770B6E02B3C2AEDA21BCB6(class UObject* _);
	void __PsyNetStaticData_X__Init_D35F0A3642132626549AEDA73B6C7B47(class UObject* _);
	void __PsyNetStaticData_X__Init_B2C2650A40D286CE74E53B8BE9A4A43B();
	void __PsyNetStaticData_X__Init_0E9E32D845256E24151ECFBF28E52F11(class UOnlineResource_X* _, class UError* Error);
	void __PsyNetStaticData_X__SyncURL_RPC_758D66CC4924D798B2842FB4D048D52B(class URPC_X* _);
	void __PsyNetStaticData_X__HandleGetURL_9315F0324F8901C7D778DE932A5087C9(class UOnlineResource_X* _);
	class UPsyNetStaticDataMetrics_X* GetMetrics();
	void UpdateRegisteredObjects();
	bool LoadFromUTF8(TArray<unsigned char>* SignedData);
	bool LoadFromSignedUTF8(TArray<unsigned char>* SignedData);
	void InstantiateObjects();
	void HandleDataChanged(class UOnlineResource_X* Resource);
	void HandleStaticDataURL(class UWebRequest_X* Request);
	struct FString GetPlatform();
	void SyncURL_PsyConfig();
	void HandleGetURLFail();
	void HandleGetURL(const struct FString& URL);
	class URPC_GetStaticDataURL_X* CreateRPC();
	void SyncURL_RPC();
	void SyncURL();
	void Sync();
	void HandleCacheExpired(class UCacheTimer_X* Timer);
	void UpdateLinkConnection(bool bHasConnection);
	void UpdateCacheTimerEnabled();
	bool ShouldEnableCacheTimer();
	void HandlePsyNetDisabled(class UPsyNetConnection_X* C);
	void HandlePsyNetEnabled(class UPsyNetConnection_X* C);
	void HandleWebConfigChanged();
	bool UsePsyConfig();
	void Init();
	void EventLoaded(class UPsyNetStaticData_X* Data);
};

// Class ProjectX.PsyNetUrl_X
// 0x0016 (FullSize[0x0076] - InheritedSize[0x0060])
class UPsyNetUrl_X : public UObject
{
public:
	unsigned char                                      bUseSubsystemURL : 1;                                      // 0x0060(0x0001) BIT_FIELD (Edit, Config)
	unsigned char                                      UnknownData4K0E[0x2];                                      // 0x0060(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData5U0B[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     URL;                                                       // 0x0068(0x0010) (Edit, Config, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetUrl_X");
		return ptr;
	}


	struct FString GetURL(TEnumAsByte<EDatabaseEnvironment> Environment);
};

// Class ProjectX.RadialBlurComponent_X
// 0x000C (FullSize[0x0118] - InheritedSize[0x010C])
class URadialBlurComponent_X : public URadialBlurComponent
{
public:
	float                                              FadeTime;                                                  // 0x0110(0x0004) (Edit)
	float                                              FadeFalloff;                                               // 0x0114(0x0004) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RadialBlurComponent_X");
		return ptr;
	}


};

// Class ProjectX.RPC_CrashReport_X
// 0x002C (FullSize[0x0100] - InheritedSize[0x00D4])
class URPC_CrashReport_X : public URPC_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CrashReport_X");
		return ptr;
	}


};

// Class ProjectX.RPC_RecordMetrics_X
// 0x0064 (FullSize[0x0138] - InheritedSize[0x00D4])
class URPC_RecordMetrics_X : public URPC_X
{
public:
	struct FGuid                                       AppSessionID;                                              // 0x0100(0x0010)
	struct FGuid                                       LevelSessionID;                                            // 0x0110(0x0010)
	float                                              CurrentTimeSeconds;                                        // 0x0120(0x0004)
	int                                                FirstEventIndex;                                           // 0x0124(0x0004)
	TArray<struct FMetricsEvent>                       Events;                                                    // 0x0128(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RecordMetrics_X");
		return ptr;
	}


};

// Class ProjectX.RPCBatch_X
// 0x0060 (FullSize[0x00C0] - InheritedSize[0x0060])
class URPCBatch_X : public UObject
{
public:
	float                                              SendTime;                                                  // 0x0060(0x0004)
	unsigned char                                      UnknownDataFSZE[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	TArray<struct FPendingRPC>                         Requests;                                                  // 0x0068(0x0010) (NeedCtorLink)
	TArray<struct FRPCResponse>                        Responses;                                                 // 0x0078(0x0010) (NeedCtorLink)
	struct FRPCError                                   Error;                                                     // 0x0088(0x0020) (NeedCtorLink)
	class UPsyNetMessage_X*                            RequestMessage;                                            // 0x00A8(0x0008)
	class UPsyNetMessage_X*                            ResponseMessage;                                           // 0x00B0(0x0008)
	class UError*                                      ResponseError;                                             // 0x00B8(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPCBatch_X");
		return ptr;
	}


};

// Class ProjectX.OnlineGameDedicatedServerRegistration_X
// 0x0024 (FullSize[0x009C] - InheritedSize[0x0078])
class UOnlineGameDedicatedServerRegistration_X : public UOnline_X
{
public:
	class UServerConfig_X*                             MyConfig;                                                  // 0x0078(0x0008) (Edit)
	class UCacheTimer_X*                               HeartbeatTimer;                                            // 0x0080(0x0008) (Edit, ExportObject, Component, EditInline)
	int                                                GameTimeTimer;                                             // 0x0088(0x0004) (Edit)
	int                                                GameTimeSeconds;                                           // 0x008C(0x0004) (Transient, PrivateWrite)
	class URPC_UpdateGameServer_X*                     UpdateGameServerRPC;                                       // 0x0090(0x0008) (Transient)
	float                                              PsyNetDisconnectShutdownTime;                              // 0x0098(0x0004) (Edit, Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameDedicatedServerRegistration_X");
		return ptr;
	}


	void __OnlineGameDedicatedServerRegistration_X__HandleCreateServerSucces_2C4EFAB44C745CA3253329B438D8242E(class UCacheTimer_X* Timer);
	void HandleCrashed();
	class UServerMetrics_X* GetServerMetrics();
	struct FString GetExclusivePlatformString(TEnumAsByte<EOnlinePlatform> Platform);
	void UpdateGameTime(int TimeSeconds);
	bool ShouldShutdownWhenEmpty();
	void TimerShutdownWhenEmpty();
	void HandleUpdateServerFailed(class URPC_UpdateGameServer_X* RPC);
	void HandleUpdateServerSucces(class URPC_UpdateGameServer_X* RPC);
	void HandleCreateServerFailed(class URPC_CreateGameServer_X* RPC);
	void HandlePerConDisconnect(class UPsyNetConnection_X* _);
	void HandlePerConConnect(class UPsyNetConnection_X* Connection);
	void ConnectToPerCon();
	void HandleCreateServerSucces(class URPC_CreateGameServer_X* RPC, struct U_Types_X_FCustomMatchSettings* StructInitializer_D946F3FF46090913FF1C4AB815C136DD);
	void SetServerNotJoinable();
	void SendUpdateServerRPC();
	struct FString GetServerType();
	void SendCreateServerRPC();
	void SendUpdateRequest();
	void UpdateServer();
	void HandleConfigUpdate();
	void UnregisterServer();
	void RegisterServer();
	void OnInit();
};

// Class ProjectX.RuntimeParameterBase_X
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class URuntimeParameterBase_X : public UObject
{
public:
	struct FName                                       ParameterName;                                             // 0x0060(0x0008) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RuntimeParameterBase_X");
		return ptr;
	}


};

// Class ProjectX.RuntimeParameter_Speed_X
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class URuntimeParameter_Speed_X : public URuntimeParameterBase_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RuntimeParameter_Speed_X");
		return ptr;
	}


};

// Class ProjectX.RuntimeParameters_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class URuntimeParameters_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RuntimeParameters_X");
		return ptr;
	}


};

// Class ProjectX.SeqAct_NonNativeUpdate_X
// 0x0002 (FullSize[0x0160] - InheritedSize[0x015E])
class USeqAct_NonNativeUpdate_X : public USequenceAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SeqAct_NonNativeUpdate_X");
		return ptr;
	}


	bool Update(float dt);
};

// Class ProjectX.SequenceCondition_X
// 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
class USequenceCondition_X : public USequenceCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SequenceCondition_X");
		return ptr;
	}


	void Activated();
};

// Class ProjectX.Serializer_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class USerializer_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Serializer_X");
		return ptr;
	}


	void DeserializeObject(class UObject* Target, TArray<unsigned char>* InData);
	void SerializeObject(class UObject* Target, TArray<unsigned char>* OutData);
};

// Class ProjectX.JSONSerializer_X
// 0x0002 (FullSize[0x0062] - InheritedSize[0x0060])
class UJSONSerializer_X : public USerializer_X
{
public:
	unsigned char                                      bDebug : 1;                                                // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataU1KS[0x2];                                      // 0x0060(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.JSONSerializer_X");
		return ptr;
	}


	bool Validate(const struct FString& Stream);
	struct FString func();
	void DecodeObject(class UObject* Target, struct FString* Stream);
	void EncodeObject(class UObject* Target, struct FString* Stream);
	void DeserializeObject(class UObject* Target, TArray<unsigned char>* InData);
	void SerializeObject(class UObject* Target, TArray<unsigned char>* OutData);
};

// Class ProjectX.ObjectSerializer_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UObjectSerializer_X : public USerializer_X
{
public:
	unsigned char                                      bPersistent : 1;                                           // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataET5V[0x2];                                      // 0x0060(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bDebug : 1;                                                // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataIMVZ[0x2];                                      // 0x0064(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ObjectSerializer_X");
		return ptr;
	}


	void DeserializeObject(class UObject* Target, TArray<unsigned char>* InData);
	void SerializeObject(class UObject* Target, TArray<unsigned char>* OutData);
};

// Class ProjectX.ServerPlayerTracker_X
// 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
class UServerPlayerTracker_X : public UComponent
{
public:
	TArray<struct FUniqueNetId>                        Players;                                                   // 0x0070(0x0010) (NeedCtorLink)
	TArray<class UAddReservationMessage_X*>            Messages;                                                  // 0x0080(0x0010) (NeedCtorLink)
	class UOnlineGameReservations_X*                   Reservations;                                              // 0x0090(0x0008)
	struct FScriptDelegate                             __EventPlayerAdded__Delegate;                              // 0x0098(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataJBG0[0xC];                                      // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerRemoved__Delegate;                            // 0x00B0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataK0BL[0xC];                                      // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ServerPlayerTracker_X");
		return ptr;
	}


	TArray<struct FUniqueNetId> __ServerPlayerTracker_X__Refresh_C9E4A38B4B607EC37C066885AFACF874(class UAddReservationMessage_X* Message);
	struct FUniqueNetId __ServerPlayerTracker_X__Refresh_48FD982848AFC93DFB7FC0A86508712C(const struct FReservationData& P);
	bool __ServerPlayerTracker_X__Refresh_FB6C9CE14BC72D5318D5A2ADF4FAEC8B(const struct FReservationData& P);
	struct FString GetPlayerName(const struct FUniqueNetId& PlayerID);
	void Reset();
	void Refresh(TArray<struct FReservationData>* FilterLocal_1A29D25347A97D8FDB46ACA813356C82, TArray<struct FUniqueNetId>* MapLocal_A1E17BA54226D6B28E0C25A44E97CB48, TArray<struct FUniqueNetId>* MapManyLocal_8A9F2FC648B910CD18E97F9057731E2A, TArray<struct FUniqueNetId>* UnionLocal_517B28494CD4D1F720ED9A855F0C4E03, TArray<struct FUniqueNetId>* DifferenceLocal_42E9A9F7499BD4297B5252A4713A235D, TArray<struct FUniqueNetId>* DifferenceLocal_AF77576E4A682A1CDED8D28DE7EBB28A);
	void RemoveReservationMessage(class UAddReservationMessage_X* Message);
	void AddReservationMessage(class UAddReservationMessage_X* Message);
	void RemovePlayer(const struct FUniqueNetId& PlayerID);
	void AddPlayer(const struct FUniqueNetId& PlayerID);
	void EventPlayerRemoved(class UServerPlayerTracker_X* Tracker, const struct FUniqueNetId& PlayerID);
	void EventPlayerAdded(class UServerPlayerTracker_X* Tracker, const struct FUniqueNetId& PlayerID);
};

// Class ProjectX.OnlinePlayerPermissions_X
// 0x0034 (FullSize[0x0094] - InheritedSize[0x0060])
class UOnlinePlayerPermissions_X : public UObject
{
public:
	float                                              SyncDelay;                                                 // 0x0060(0x0004) (Edit)
	unsigned char                                      UnknownData13CN[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	TArray<struct FUniqueNetId>                        PendingPlayerRequests;                                     // 0x0068(0x0010) (NeedCtorLink)
	TArray<struct FPlayerPermissionsList>              PlayerPermissions;                                         // 0x0078(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __EventUpdated__Delegate;                                  // 0x0088(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataLI9A[0xC];                                      // 0x0088(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerPermissions_X");
		return ptr;
	}


	bool HasPermission(const struct FUniqueNetId& PlayerID, TEnumAsByte<EOnlinePlayerPermission> Permission);
	void HandlePlayerPermissions(class URPC_GetPlayerPermissions_X* RPC);
	void SendRequest();
	void SyncPermissions(const struct FUniqueNetId& PlayerID);
	void EventUpdated(class UOnlinePlayerPermissions_X* Permissions);
};

// Class ProjectX.MatchRecorder_X
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UMatchRecorder_X : public UObject
{
public:
	class UClass*                                      MatchDataClass;                                            // 0x0060(0x0008) (Edit)
	class UClass*                                      PlayerDataClass;                                           // 0x0068(0x0008) (Edit)
	class UMatchData_X*                                Match;                                                     // 0x0070(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MatchRecorder_X");
		return ptr;
	}


	void Finished();
	void UpdateServer(class UOnlineGameDedicatedServer_X* Server);
	class UMatchPlayerData_X* CreatePlayer(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName);
	class UMatchPlayerData_X* GetPlayerData(const struct FUniqueNetId& PlayerID);
	void RemovePlayer(const struct FUniqueNetId& PlayerID);
	void ReservePlayer(const struct FUniqueNetId& PlayerID, const struct FUniqueNetId& PartyID);
	void AddPlayer(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName);
	struct FString MatchGUID();
	void Construct();
};

// Class ProjectX.OnlineGame_Base_X
// 0x00D0 (FullSize[0x0148] - InheritedSize[0x0078])
class UOnlineGame_Base_X : public UOnline_X
{
public:
	struct FString                                     OnlineSubPlayerInterfaceName;                              // 0x0078(0x0010) (Edit, Config, NeedCtorLink)
	struct FString                                     OnlineSubGameInterfaceName;                                // 0x0088(0x0010) (Edit, Config, NeedCtorLink)
	class UOnlineGameSettings_X*                       DefaultGameSettingsArchetype;                              // 0x0098(0x0008) (Edit)
	class UOnlineGameSettings_X*                       DefaultGameSettings;                                       // 0x00A0(0x0008)
	class UOnlineGameSettings_X*                       GameSettings;                                              // 0x00A8(0x0008) (Transient)
	class UOnlineGamePlaylists_X*                      Playlists;                                                 // 0x00B0(0x0008) (Edit)
	class UOnlineImageDownloaderWeb*                   ImageDownloader;                                           // 0x00B8(0x0008)
	class UOnlineGameDLC_X*                            DLC;                                                       // 0x00C0(0x0008) (Edit)
	class UOnlineGameSkill_X*                          Skill;                                                     // 0x00C8(0x0008) (Edit)
	struct FString                                     StartServerCommand;                                        // 0x00D0(0x0010) (Edit, Const, NeedCtorLink)
	class UWebCache_X*                                 WebCache;                                                  // 0x00E0(0x0008)
	class UWebImageCache_X*                            WebImageCache;                                             // 0x00E8(0x0008)
	class UPsyNetStaticData_X*                         PsyNetStaticData;                                          // 0x00F0(0x0008) (ExportObject, Component, EditInline)
	unsigned char                                      bLockGameSettings : 1;                                     // 0x00F8(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataEH2S[0x2];                                      // 0x00F8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bUseEnvironmentZone : 1;                                   // 0x00F8(0x0001) BIT_FIELD (Config)
	unsigned char                                      UnknownDataVLFD[0x2];                                      // 0x00FC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<EOnlineServerConnectionStatus>         CurrentConnectionStatus;                                   // 0x00FC(0x0001) (Transient, PrivateWrite)
	unsigned char                                      UnknownDataNSCO[0x3];                                      // 0x00FD(0x0003) MISSED OFFSET
	struct FString                                     ServerName;                                                // 0x0100(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	struct FString                                     CachedOptions;                                             // 0x0110(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	class UOnlineConfigDispatcher_X*                   OnlineConfigDispatcher;                                    // 0x0120(0x0008) (Transient)
	class UOnlineGameWordFilter_X*                     WordFilter;                                                // 0x0128(0x0008) (Transient, PrivateWrite)
	TArray<class UOnline_X*>                           OnlineComponents;                                          // 0x0130(0x0010) (NeedCtorLink, ProtectedWrite)
	struct FScriptDelegate                             __EventInternetConnectionChanged__Delegate;                // 0x0140(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataRL5D[0xC];                                      // 0x0140(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGame_Base_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool HasInternetConnection();
	int GetBeaconPort();
	struct FString GetBeaconExternalHostAddress(bool bWithPort);
	struct FString GetBeaconLocalHostAddress(bool bWithPort);
	int GetUdpPort();
	struct FString GetUdpExternalHostAddress(bool bWithPort);
	struct FString GetUdpLocalHostAddress(bool bWithPort);
	void HandleInternetConnectionChanged(bool bConnected);
	void HandleConnectionStatusChanged(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus);
	void SetDefaultSearchType(class UClass* OnlineSearchClass);
	void KickAllPlayers(const struct FString& Reason);
	void DelayedShutdownServer();
	void OnExit();
	int GetPlaylistPlayerCount(class UGameSettingPlaylist_X* Playlist);
	void OnNewSettingsChosen(int PlaylistId);
	void UpdateGameSettingsPlayerCount(int NumPlayers);
	void UpdateGameSettings(class UOnlineGameSettings_X* InGameSettings, const struct FString& Options);
	class UOnlineGameSettings_X* CreateOnlineGameSettings(const struct FString& Options);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void InitOnlineSubsystemInterfaces();
	void OnInit();
	void Construct();
	void EventInternetConnectionChanged(bool bConnected);
};

// Class ProjectX.OnlineGame_X
// 0x00FA (FullSize[0x0242] - InheritedSize[0x0148])
class UOnlineGame_X : public UOnlineGame_Base_X
{
public:
	class UOnlineGameAccount_X*                        Account;                                                   // 0x0158(0x0008) (Edit)
	class UOnlineGameMatchmaking_X*                    Matchmaking;                                               // 0x0160(0x0008) (Edit)
	class UOnlineGamePrivateMatch_X*                   PrivateMatch;                                              // 0x0168(0x0008) (Edit)
	class UOnlineGameServerBrowser_X*                  ServerBrowser;                                             // 0x0170(0x0008) (Edit)
	class UOnlineGameLanBrowser_X*                     LanBrowser;                                                // 0x0178(0x0008) (Edit)
	class UOnlineGameLeaderboards_X*                   Leaderboards;                                              // 0x0180(0x0008) (Edit)
	class UOnlineGamePopulation_X*                     Population;                                                // 0x0188(0x0008) (Transient, PrivateWrite)
	class UOnlineGameBlog_X*                           Blog;                                                      // 0x0190(0x0008) (Transient, PrivateWrite)
	class UOnlineGameVoice_X*                          Voice;                                                     // 0x0198(0x0008) (Transient, PrivateWrite)
	class UOnlineGameParty_X*                          Party;                                                     // 0x01A0(0x0008) (Edit)
	class UOnlineGameInvite_X*                         GameInvite;                                                // 0x01A8(0x0008) (Edit)
	class UOnlineGameJoinGame_X*                       JoinGame;                                                  // 0x01B0(0x0008) (Edit)
	class UOnlineGameRegions_X*                        Regions;                                                   // 0x01B8(0x0008) (Edit)
	class UOnlineGamePrivileges_X*                     Privileges;                                                // 0x01C0(0x0008)
	class UOnlineGameWordFilterProcessor_X*            WordFilterProcessor;                                       // 0x01C8(0x0008) (Transient, PrivateWrite)
	class UOnlineGameVersion_X*                        GameVersion;                                               // 0x01D0(0x0008) (Edit)
	class UOnlinePlayer_X*                             PlayerArchetype;                                           // 0x01D8(0x0008) (Edit)
	TArray<class UOnlinePlayer_X*>                     OnlinePlayers;                                             // 0x01E0(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	class UOnlineLegalText_X*                          Eula;                                                      // 0x01F0(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UOnlineLegalText_X*                          PrivacyPolicy;                                             // 0x01F8(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	class UOnlineLegalText_X*                          ToS;                                                       // 0x0200(0x0008) (ExportObject, Component, EditInline, PrivateWrite)
	unsigned char                                      bRequestPublicIP : 1;                                      // 0x0208(0x0001) BIT_FIELD (Config)
	unsigned char                                      UnknownDataJOAM[0x2];                                      // 0x0208(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataYF32[0x4];                                      // 0x020C(0x0004) MISSED OFFSET
	struct FString                                     PublicIP;                                                  // 0x0210(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	struct FScriptDelegate                             __EventConnectionError__Delegate;                          // 0x0220(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData69M0[0xC];                                      // 0x0220(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerPsyNetLogin__Delegate;                        // 0x0238(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataY6GB[0xC];                                      // 0x0238(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerPsyNetLogout__Delegate;                       // 0x0250(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataCFVD[0xC];                                      // 0x0250(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGame_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void HandlePublicIPComplete(class URPC_GetPublicIP_X* RPC);
	void HandlePsyNetLogin(class UPsyNetConnection_X* Connection);
	void NotifyPlayerPsyNetLogout(const struct FScriptDelegate& Callback);
	void NotifyPlayerPsyNetLogin(const struct FScriptDelegate& Callback);
	bool IsSignedIn(int ControllerId);
	bool CheckUpToDate(class UError** Error);
	bool CheckNotTooYoung(class UError** Error);
	class UError* GetPsyNetLoginError(class UOnlinePlayer_X* OnlinePlayer);
	void HandleLoginCompleted(class UOnlinePlayerAuthentication_X* Auth, class UAsyncTask* Task);
	class UAsyncTask* CheckPsyNetConnection();
	bool ValidateUserOnlineAccount(class UError** Error);
	bool CheckInternetConnection(class UError** Error);
	bool IsOnlinePlayerID(const struct FUniqueNetId& PlayerID);
	class UOnlinePlayer_X* GetOnlinePlayerByID(const struct FUniqueNetId& PlayerID);
	void OnNewSettingsChosen(int PlaylistId);
	struct FUniqueNetId GetPrimaryPlayerID();
	class UOnlinePlayer_X* GetPrimaryPlayer();
	void RemoveOnlinePlayer(class ULocalPlayer_X* LocalPlayer);
	void AddOnlinePlayer(class UOnlinePlayer_X* OnlinePlayer);
	class UOnlinePlayer_X* CreateOnlinePlayer(class ULocalPlayer_X* LocalPlayer);
	void SetPlayedWith(const struct FUniqueNetId& PlayerID);
	void GetPlayerAvatars(TArray<struct FUniqueNetId> PlayerIDs, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate, TEnumAsByte<EAvatarSize> Size, struct FUniqueNetId* StructInitializer_8F1D64DA4B56CCE191F258ACDA7325F7);
	void ClearPendingAvatarDownloads();
	void SetVoiceVolume(float NewValue);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void OnMainMenuOpened();
	void HandlePlayerLogin(class UOnlinePlayer_X* OnlinePlayer, class UError* Error);
	void HandlePsyNetLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	bool IsLoggedInToPsyNet(class UOnlinePlayer_X* OnlinePlayer);
	void OnInit();
	void EventPlayerPsyNetLogout(class UOnlinePlayer_X* Player);
	void EventPlayerPsyNetLogin(class UOnlinePlayer_X* Player);
	void EventConnectionError(class UError* Error, class UOnlinePlayer_X* Player);
};

// Class ProjectX.OnlineGameServer_X
// 0x0018 (FullSize[0x0160] - InheritedSize[0x0148])
class UOnlineGameServer_X : public UOnlineGame_Base_X
{
public:
	class UPsyNetConnection_X*                         PsyNetConnection;                                          // 0x0158(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameServer_X");
		return ptr;
	}


	void OnInit();
};

// Class ProjectX.OnlineGameDedicatedServer_X
// 0x01A2 (FullSize[0x0302] - InheritedSize[0x0160])
class UOnlineGameDedicatedServer_X : public UOnlineGameServer_X
{
public:
	unsigned char                                      UnknownData8T03[0x8];                                      // 0x0160(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameDedicatedServer_X.GameServerID
	struct FString                                     GameServerHost;                                            // 0x0168(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	int                                                EnvironmentZone;                                           // 0x0178(0x0004) (Transient, ProtectedWrite)
	unsigned char                                      UnknownDataN1IZ[0x4];                                      // 0x017C(0x0004) MISSED OFFSET
	class UOnlineGameStats_X*                          GameStats;                                                 // 0x0180(0x0008) (Transient)
	class UOnlineGameDedicatedServerRegistration_X*    Registration;                                              // 0x0188(0x0008) (Edit)
	class UOnlineGameReservations_X*                   Reservations;                                              // 0x0190(0x0008) (Edit)
	class UClanforgeReservation_X*                     Clanforge;                                                 // 0x0198(0x0008) (Transient, PrivateWrite)
	struct FString                                     Region;                                                    // 0x01A0(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	int                                                CurrentPlaylistId;                                         // 0x01B0(0x0004) (ProtectedWrite)
	int                                                MutatorIndex;                                              // 0x01B4(0x0004) (ProtectedWrite)
	float                                              AverageMMR;                                                // 0x01B8(0x0004) (Transient, ProtectedWrite)
	float                                              AverageConservativeMMR;                                    // 0x01BC(0x0004) (Transient, ProtectedWrite)
	int                                                MachineId;                                                 // 0x01C0(0x0004) (Transient, PrivateWrite)
	unsigned char                                      UnknownDataJHIQ[0x4];                                      // 0x01C4(0x0004) MISSED OFFSET
	struct U_Types_X_FCustomMatchSettings              CustomMatch;                                               // 0x01C8(0x0090) (Transient, NeedCtorLink, PrivateWrite)
	struct FUniqueNetId                                CustomMatchOwner;                                          // 0x0258(0x0038) (Transient, PrivateWrite)
	unsigned char                                      UnknownData88E6[0x8];                                      // 0x0290(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameDedicatedServer_X.CustomMatchClubID
	unsigned char                                      bQueuedShutdown : 1;                                       // 0x0298(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownDataIWL9[0x2];                                      // 0x0298(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bFindingReplacementServer : 1;                             // 0x0298(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownDataN9VV[0x2];                                      // 0x029C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bDisableMatchmakingBan : 1;                                // 0x0298(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData9OPR[0x2];                                      // 0x029C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bBotTest : 1;                                              // 0x0298(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownDataLBML[0x2];                                      // 0x029C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bUseNetworkNextDriver : 1;                                 // 0x0298(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataZ1F0[0x2];                                      // 0x029C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataYH86[0x4];                                      // 0x029C(0x0004) MISSED OFFSET
	class UServerPlayerTracker_X*                      PlayerTracker;                                             // 0x02A0(0x0008) (ExportObject, Component, EditInline)
	class UClass*                                      MatchRecorderClass;                                        // 0x02A8(0x0008) (Edit)
	class UMatchRecorder_X*                            MatchRecorder;                                             // 0x02B0(0x0008)
	class UMatchLog_X*                                 MatchLog;                                                  // 0x02B8(0x0008)
	class UServerConfig_X*                             Config;                                                    // 0x02C0(0x0008) (Edit)
	struct FScriptDelegate                             __EventFoundNewDedicatedServerForPlayers__Delegate;        // 0x02C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7DSZ[0xC];                                      // 0x02C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAverageMMRChanged__Delegate;                        // 0x02E0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData152Z[0xC];                                      // 0x02E0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlaylistSet__Delegate;                              // 0x02F8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData1K3P[0xC];                                      // 0x02F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPrivateMatchSettingsChanged__Delegate;              // 0x0310(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData4W08[0xC];                                      // 0x0310(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventInactive__Delegate;                                 // 0x0328(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7E38[0xC];                                      // 0x0328(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventActive__Delegate;                                   // 0x0340(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataM1NI[0xC];                                      // 0x0340(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMatchGUIDChanged__Delegate;                         // 0x0358(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData461G[0xC];                                      // 0x0358(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameDedicatedServer_X");
		return ptr;
	}


	void HandlePsyNetDataLoaded(class UPsyNetStaticData_X* D);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void InitLogUpload(class URPC_RecordMatch_X* RPC, class UMatchLog_X* Log);
	class URPC_RecordMatch_X* SendRecordMatchRPC();
	void ReportMatch();
	void HandleTrackerPlayerRemoved(class UServerPlayerTracker_X* Tracker, const struct FUniqueNetId& PlayerID);
	void CreateMatchRecorder();
	void HandleTrackerPlayerAdded(class UServerPlayerTracker_X* Tracker, const struct FUniqueNetId& PlayerID);
	struct FString MatchGUID();
	struct FName GetCurrentMapName();
	void ClearMatchmakingBan(const struct FUniqueNetId& PlayerID);
	void IssueMatchmakingBan(const struct FUniqueNetId& PlayerID, const struct FString& Reason);
	unsigned char GetTeamNum(const struct FUniqueNetId& PlayerID);
	bool KickPlayersOnGameEventDestroyed();
	bool CanIssueMatchmakingBan();
	bool IsRankedMatch();
	class UGameSettingPlaylist_X* GetPlaylist();
	void OnExit();
	void HandleNewServerIPRPC(class URPC_CheckReplacementDedicatedServer_X* RPC);
	void CheckNewServerIP();
	void CheckNewServerTimeout();
	void CheckStartShutdown(int GameTimeRemaining);
	bool AllowServerMigration();
	void UpdateGameTime(int TimeSeconds);
	void FindNewDedicatedServerForPlayers(const struct FScriptDelegate& InDelegate);
	bool IsInactive();
	bool IsInPostGameLobby();
	void UpdateOnlineGame();
	bool AllowSplitscreenJoinRankedMatch();
	bool AllowSplitscreenJoin(class APlayerReplicationInfo* PrimaryPRI, const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, struct FString* Error);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(const struct FString& Options, const struct FUniqueNetId& PlayerID, struct FString* ErrorMessage);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void TravelToMap(const struct FString& ServerCommand);
	void GotoPrivateMatchMap(const struct FName& MapName, int GameMode, const struct FString& GameTags);
	void GotoNextPrivateMatchMap();
	void OnPrivateEventDestroyed();
	struct FString GetStartServerCommand();
	struct FName GetNextRandomMapName(int GameMode);
	struct FName GetNextMapName(int GameMode);
	struct U_Types_X_FCustomMatchSettings GetCustomMatchSettings();
	struct FUniqueNetId GetCustomMatchOwner();
	void UpdateCustomMatchOwner(const struct FUniqueNetId& NewOwner);
	void SetCustomSettings(const struct U_Types_X_FCustomMatchSettings& Settings);
	void SetupPrivateMatch(const struct U_Types_X_FCustomMatchSettings& Settings, const struct FUniqueNetId& Creator);
	void GoToNextMap();
	struct FName GetNextMutatorMapName();
	void GoToMap(const struct FString& MapName);
	struct FString GetPlaylistTags();
	void UpdateAverageMMR();
	void SetCustomMatchClubID();
	void ClearSettings(struct FUniqueNetId* StructInitializer_5F4717E748E3D146411349BA019149D1, struct U_Types_X_FCustomMatchSettings* StructInitializer_A7D3CA594A01AFFBB630A6B35CA4B353);
	void SetPlaylist(int PlaylistId);
	void HandleReservationsUpdated();
	void InitClanforge();
	void OnInit();
	void EventMatchGUIDChanged(class UOnlineGameDedicatedServer_X* Server);
	void EventActive(class UOnlineGameDedicatedServer_X* Server);
	void EventInactive(class UOnlineGameDedicatedServer_X* Server);
	void EventPrivateMatchSettingsChanged(class UOnlineGameDedicatedServer_X* Server, const struct U_Types_X_FCustomMatchSettings& NewSettings);
	void EventPlaylistSet(class UOnlineGameDedicatedServer_X* Server);
	void EventAverageMMRChanged(class UOnlineGameDedicatedServer_X* Server);
	void EventFoundNewDedicatedServerForPlayers(const struct FString& NewIP);
};

// Class ProjectX.OnlinePlayer_X
// 0x012C (FullSize[0x01A4] - InheritedSize[0x0078])
class UOnlinePlayer_X : public UOnline_X
{
public:
	class UOnlinePlayerFriends_X*                      Friends;                                                   // 0x0078(0x0008) (Edit, ProtectedWrite)
	class UOnlinePlayerAuthentication_X*               Authentication;                                            // 0x0080(0x0008) (Edit, PrivateWrite)
	class UPsyNetConnection_X*                         PsyNetConnection;                                          // 0x0088(0x0008) (Edit, PrivateWrite)
	class UOnlinePlayerStorage_X*                      Storage;                                                   // 0x0090(0x0008) (Edit, PrivateWrite)
	class UOnlinePlayerRegionRestrictions_X*           RegionRestrictions;                                        // 0x0098(0x0008) (Edit, PrivateWrite)
	struct FString                                     PlayerName;                                                // 0x00A0(0x0010) (Transient, NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                  // 0x00B0(0x0038) (Transient, ProtectedWrite)
	struct FUniqueNetId                                CleanPlayerID;                                             // 0x00E8(0x0038) (Transient, ProtectedWrite)
	TEnumAsByte<ELoginStatus>                          LoginStatus;                                               // 0x0120(0x0001) (Transient, ProtectedWrite)
	unsigned char                                      UnknownData2OIA[0x3];                                      // 0x0121(0x0003) MISSED OFFSET
	int                                                LocalPlayerNum;                                            // 0x0124(0x0004) (Transient)
	unsigned char                                      bLoggingIn : 1;                                            // 0x0128(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownDataXOBJ[0x2];                                      // 0x0128(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bLoggingOut : 1;                                           // 0x0128(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownDataQ54E[0x2];                                      // 0x012C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataWZ0B[0x4];                                      // 0x012C(0x0004) MISSED OFFSET
	class UError*                                      LoginError;                                                // 0x0130(0x0008) (Transient, PrivateWrite)
	class UError*                                      LoginStatusError;                                          // 0x0138(0x0008)
	class UError*                                      BannedError;                                               // 0x0140(0x0008)
	struct FScriptDelegate                             __EventLoginComplete__Delegate;                            // 0x0148(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataI7RC[0xC];                                      // 0x0148(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLogoutComplete__Delegate;                           // 0x0160(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataBH2U[0xC];                                      // 0x0160(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLoginStatusChanged__Delegate;                       // 0x0178(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataNAUG[0xC];                                      // 0x0178(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventCountryUpdated__Delegate;                           // 0x0190(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataZK55[0xC];                                      // 0x0190(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventCanPlayOnlineChanged__Delegate;                     // 0x01A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataEV7M[0xC];                                      // 0x01A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventShowKeyboardComplete__Delegate;                     // 0x01C0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataB21P[0xC];                                      // 0x01C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventOnlineNameChanged__Delegate;                        // 0x01D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataUQSC[0xC];                                      // 0x01D8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventRemoved__Delegate;                                  // 0x01F0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataJZMX[0xC];                                      // 0x01F0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayer_X");
		return ptr;
	}


	void __OnlinePlayer_X__UpdatePsyNetEnabled_7F9AB912422158831EB3DA8993D91FE6(class UBanMessage_X* _);
	void GetPlayersLikesDislikes(class UGameSettingPlaylist_X* Playlist, TArray<struct FName>* PlayerLikes, TArray<struct FName>* PlayerDislikes);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsGuestAccount();
	void SetPlayerName(const struct FString& InName);
	void UpdateSplitscreenId();
	bool IsUpdateRequired();
	struct FString GetOnlineName();
	struct FString GetLocalName();
	struct FString GetRemoteName(int LocalPlayerIndex);
	void HandleCanPlayOnlineChanged(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanPlayOnline();
	void HandlePlayerCountryReceived(const struct FUniqueNetId& InPlayerId, const struct FString& Country);
	void GetPlayerCountry(const struct FScriptDelegate& Handler);
	TEnumAsByte<EFeaturePrivilegeLevel> CanCommunicateText(bool bTryToResolve);
	void OpenErrorDialog(TEnumAsByte<EPS4ErrorDialog> ErrorCode);
	void OpenPS4DisplayMode(TEnumAsByte<EPS4DisplayMode> DisplayMode, TArray<struct FString> Targets, int ServiceLabel);
	void ResetControllerColor(int InControllerID);
	void SetControllerColor(int InControllerID, const struct FColor& NewColor);
	void PostActivityFeedMessage(const struct FString& Id, TArray<struct FString> StringReplaceList);
	TArray<unsigned char> GetSyncedAchievements(unsigned char LocalUserNum);
	void UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete);
	void UpdateStat(const struct FName& StatName, int Points);
	void HandleShowKeyboardComplete(bool bWasSuccessful);
	void HideKeyboard();
	bool ShowKeyboard(const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, const struct FString& DefaultText, int MaxLength, const struct FScriptDelegate& OnCompleteDelegate, int LocalPlayerNumOverride);
	void OnNewGame();
	void HandleControllerChange(int InControllerID, bool bIsConnected);
	void HandleUserLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId);
	bool IsLoggedIn(bool bRequireOnlineLogin);
	void HandleLogoutComplete(bool bWasSuccessful);
	void HandleLoginChanged(unsigned char PlayerNum);
	struct FString GetSanitizedPlayerName();
	void HandleLoginFailed(unsigned char PlayerNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode);
	void Logout(const struct FScriptDelegate& Callback);
	void Login(const struct FString& LoginName, const struct FString& LoginPassword, const struct FScriptDelegate& Callback);
	void OnRemoved();
	void InitPlayer();
	bool IsPrimaryPlayer();
	void HandleErrorRPC(class URPCQueue_X* InQueue, class URPC_X* RPC, class UError* Error);
	void HandlePsyNetDisconnect(class UPsyNetConnection_X* Connection);
	void UpdatePsyNetEnabled();
	void HandleBanned(class UOnlinePlayerAuthentication_X* Auth);
	void HandleAuthLoginChange(class UOnlinePlayerAuthentication_X* Auth);
	void OnInit();
	void Construct();
	class UOnlineGame_X* GetOnlineGame();
	void EventRemoved(class UOnlinePlayer_X* Player);
	void EventOnlineNameChanged(class UOnlinePlayer_X* Player);
	void EventShowKeyboardComplete(const struct FString& NewText, bool bCanceled);
	void EventCanPlayOnlineChanged(class UOnlinePlayer_X* Player);
	void EventCountryUpdated(const struct FString& Country);
	void EventLoginStatusChanged(class UOnlinePlayer_X* Player);
	void EventLogoutComplete(class UOnlinePlayer_X* Player);
	void EventLoginComplete(class UOnlinePlayer_X* Player, class UError* Error);
};

// Class ProjectX.OnlinePlayerAuthentication_X
// 0x00F2 (FullSize[0x016A] - InheritedSize[0x0078])
class UOnlinePlayerAuthentication_X : public UOnline_X
{
public:
	class URPC_LoginAuthPlayer_X*                      LoginRPC;                                                  // 0x0078(0x0008) (Transient)
	class URPC_LoginAuthPlayer_X*                      LoginSuccessRPC;                                           // 0x0080(0x0008) (Transient, PrivateWrite)
	struct FUniqueNetId                                LoggedInPlayerId;                                          // 0x0088(0x0038) (Transient, PrivateWrite)
	struct FString                                     LoggedInPlayerName;                                        // 0x00C0(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	unsigned char                                      UnknownDataAMA7[0x8];                                      // 0x00D0(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlinePlayerAuthentication_X.PlayerUID
	struct FString                                     Platform;                                                  // 0x00D8(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	unsigned char                                      bLoggedIn : 1;                                             // 0x00E8(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownDataPYFV[0x2];                                      // 0x00E8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bPlatformTokenAuthenticationFailed : 1;                    // 0x00E8(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownDataWXXX[0x2];                                      // 0x00EC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bSkipAuth : 1;                                             // 0x00E8(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownData45UG[0x2];                                      // 0x00EC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataA99A[0x4];                                      // 0x00EC(0x0004) MISSED OFFSET
	class UError*                                      AuthLoginError;                                            // 0x00F0(0x0008) (PrivateWrite)
	class UBanMessage_X*                               BanMessage;                                                // 0x00F8(0x0008) (Transient, PrivateWrite)
	class UPsyTagComponent_X*                          PsyTagInfo;                                                // 0x0100(0x0008) (ExportObject, Component, EditInline)
	struct FString                                     EncryptedAuthTicket;                                       // 0x0108(0x0010) (Transient, NeedCtorLink)
	int                                                AuthRequestFailureMax;                                     // 0x0118(0x0004) (Config)
	int                                                AuthRequestRetryTime;                                      // 0x011C(0x0004) (Const)
	int                                                AuthRequestFailureCount;                                   // 0x0120(0x0004) (Transient)
	unsigned char                                      UnknownData2N9P[0x4];                                      // 0x0124(0x0004) MISSED OFFSET
	struct FString                                     AuthenticatedName;                                         // 0x0128(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	TEnumAsByte<EPlayerAuthState>                      PlayerAuthState;                                           // 0x0138(0x0001) (Transient, PrivateWrite)
	unsigned char                                      UnknownDataFBRU[0x3];                                      // 0x0139(0x0003) MISSED OFFSET
	float                                              LoginRetryDelay;                                           // 0x013C(0x0004) (Edit)
	float                                              DelayBetweenAuthRPCs;                                      // 0x0140(0x0004) (Edit)
	float                                              LastSendAuthRPCTime;                                       // 0x0144(0x0004)
	struct FScriptDelegate                             __EventLoginChanged__Delegate;                             // 0x0148(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataZZKY[0xC];                                      // 0x0148(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventBanned__Delegate;                                   // 0x0160(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataX7FN[0xC];                                      // 0x0160(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventPlayerAuthStateChanged__Delegate;                   // 0x0178(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataK7QP[0xC];                                      // 0x0178(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLoginResult__Delegate;                              // 0x0190(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataQLZO[0xC];                                      // 0x0190(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerAuthentication_X");
		return ptr;
	}


	struct FString GetDebugName();
	void GotoAuthState(const struct FName& AuthStateName);
	bool IsLoginAttemptActive();
	struct FName GetFeatureSet();
	struct FString GetBuildRegion();
	void OnChangeAuthenticatedName(const struct FString& NewName);
	bool NeedToAuthenticateName();
	void HandleAuthTicket(bool bSuccess, const struct FString& AuthTicket);
	void RequestAuthTicket();
	bool RequiresAuthTicket();
	void ReLogin();
	void Logout();
	void SetAuthLoginError(class UError* E);
	void UpdateLoginState();
	void UpdateAuthLoginError();
	void HandlePsyNetLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	void HandleLinkStatusChanged(bool B);
	void HandleConnectionChanged(class UPsyNetConnection_X* C);
	void HandleLoginStatusChanged(class UOnlinePlayer_X* Player);
	void SetDefaultPlayerAuthState();
	void SetPlayerAuthState(TEnumAsByte<EPlayerAuthState> InPlayerAuthState);
	void OnLoginFail(class UError* Error);
	void OnLoginFailRPC(class URPC_LoginAuthPlayer_X* RPC);
	void OnLoginSuccessRPC(class URPC_LoginAuthPlayer_X* RPC);
	void SendLoginRPC();
	void PsyNetLogin(const struct FScriptDelegate& Callback);
	void OnRemoved();
	void OnInit();
	void EventLoginResult(class UOnlinePlayerAuthentication_X* Auth);
	void EventPlayerAuthStateChanged(class UOnlinePlayerAuthentication_X* Auth);
	void EventBanned(class UOnlinePlayerAuthentication_X* Auth);
	void EventLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
};

// Class ProjectX.TickableStateObject_X
// 0x0026 (FullSize[0x0088] - InheritedSize[0x0062])
class UTickableStateObject_X : public UStateObject_X
{
public:
	unsigned char                                      UnknownDataEDVY[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0068(0x0008) (Const, Native, NoExport)
	unsigned char                                      bTickWhenGamePaused : 1;                                   // 0x0070(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData6LCK[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAutoTick : 1;                                             // 0x0070(0x0001) BIT_FIELD (Edit, Const)
	unsigned char                                      UnknownDataZM4X[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataMU1N[0x4];                                      // 0x0074(0x0004) MISSED OFFSET
	TArray<struct FTimerData>                          Timers;                                                    // 0x0078(0x0010) (Const, NeedCtorLink)
	float                                              LatentFloat;                                               // 0x0088(0x0004) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TickableStateObject_X");
		return ptr;
	}


	void Sleep(float Seconds);
	void Tick(float DeltaTime);
	void ProcessState(float DeltaSeconds);
	void UpdateTimers(float DeltaSeconds);
	void NativeTick(float DeltaTime);
	void Destroy();
	void SetTickable(bool bTick);
	bool IsTimerActive(const struct FName& inTimerFunc, class UObject* inObj);
	void PauseTimer(bool bPause, const struct FName& inTimerFunc, class UObject* inObj);
	void ClearAllTimers(class UObject* inObj);
	void ClearTimer(const struct FName& inTimerFunc, class UObject* inObj);
	void SetStateTimer(float InRate, bool inbLoop, const struct FName& inTimerFunc);
	void SetTimer(float InRate, bool inbLoop, const struct FName& inTimerFunc, class UObject* inObj);
};

// Class ProjectX.EpicOnlineServices_X
// 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
class UEpicOnlineServices_X : public UTickableStateObject_X
{
public:
	unsigned char                                      UnknownDataHU67[0x4];                                      // 0x008C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventLoginComplete__Delegate;                            // 0x0090(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataN997[0xC];                                      // 0x008C(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLogoutComplete__Delegate;                           // 0x00A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData0G5C[0xC];                                      // 0x00A8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EpicOnlineServices_X");
		return ptr;
	}


	bool ShutDown();
	void NativeTick(float DeltaTime);
	bool Logout(int LocalUserNum);
	bool Login(int LocalUserNum, const struct FString& PlatformUserID, const struct FString& PlatformAuthToken);
	bool Initialize();
	void EventLogoutComplete(int LocalUserNum, class UError* LogoutError);
	void EventLoginComplete(int LocalUserNum, class UError* LoginError);
};

// Class ProjectX.SystemInfo_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class USystemInfo_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SystemInfo_X");
		return ptr;
	}


	struct FString GetComputerName();
	void GetNetworkInfo(TArray<struct FString>* Types);
	void GetOSInfo(struct FString* Type, struct FString* Bit);
	void GetVideoCardInfo(struct FString* CardName, int* RAM);
	void GetMemoryInfo(float* Physical, float* PageFile, float* Virtual, int* Used, int* Allocated);
	void GetCPUInfo(struct FString* Type, struct FString* Description, struct FString* Cores, struct FString* Threads);
	bool IsSupported();
};

// Class ProjectX.TickActorComponent_X
// 0x002D (FullSize[0x00C2] - InheritedSize[0x0095])
class UTickActorComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownDataTTUQ[0x3];                                      // 0x009D(0x0003) MISSED OFFSET
	TArray<struct FTimerData>                          Timers;                                                    // 0x00A0(0x0010) (Const, NeedCtorLink)
	unsigned char                                      bTick : 1;                                                 // 0x00B0(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownDataYVLB[0x2];                                      // 0x00B0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataP2YN[0x4];                                      // 0x00B4(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventTick__Delegate;                                     // 0x00B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataXA8L[0xC];                                      // 0x00B4(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TickActorComponent_X");
		return ptr;
	}


	void SetTickable(bool bWantsTick);
	void ClearAllTimers(class UObject* inObj);
	void ClearTimer(const struct FName& inTimerFunc, class UObject* inObj);
	void SetTimer(float InRate, bool inbLoop, const struct FName& inTimerFunc, class UObject* inObj);
	void EventTick(float DeltaTime);
};

// Class ProjectX.Timers_X
// 0x0014 (FullSize[0x0074] - InheritedSize[0x0060])
class UTimers_X : public UObject
{
public:
	class UTickComponent_X*                            TickComponent;                                             // 0x0060(0x0008) (ExportObject, Transient, Component, EditInline)
	struct FScriptDelegate                             __TickDelegate__Delegate;                                  // 0x0068(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataCRA0[0xC];                                      // 0x0068(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Timers_X");
		return ptr;
	}


	void ClearTick(const struct FScriptDelegate& Callback);
	void SetTick(const struct FScriptDelegate& Callback);
	bool IsActive(const struct FScriptDelegate& Callback);
	float GetElapsedTime(const struct FScriptDelegate& Callback);
	float GetRemainingTime(const struct FScriptDelegate& Callback);
	float GetRate(const struct FScriptDelegate& Callback);
	void ClearAll(class UObject* Obj);
	void Clear(const struct FScriptDelegate& Callback);
	void SetStateTimer(const struct FScriptDelegate& Callback, float Rate, bool bLoop);
	void Set(const struct FScriptDelegate& Callback, float Rate, bool bLoop);
	void TickDelegate(float DeltaTime);
};

// Class ProjectX.TimersComponent_X
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UTimersComponent_X : public UComponent
{
public:
	TArray<struct FTimerData>                          Timers;                                                    // 0x0070(0x0010) (Const, Transient, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TimersComponent_X");
		return ptr;
	}


	void UpdateTimers(float DeltaSeconds);
	bool IsActive(const struct FScriptDelegate& Callback);
	float GetElapsedTime(const struct FScriptDelegate& Callback);
	float GetRemainingTime(const struct FScriptDelegate& Callback);
	float GetRate(const struct FScriptDelegate& Callback);
	void ClearAll(class UObject* Obj);
	void Clear(const struct FScriptDelegate& Callback);
	void SetStateTimer(const struct FScriptDelegate& Callback, float Rate, bool bLoop);
	void Set(const struct FScriptDelegate& Callback, float Rate, bool bLoop);
};

// Class ProjectX.TickComponent_X
// 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
class UTickComponent_X : public UTimersComponent_X
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0080(0x0008) (Const, Native, NoExport)
	unsigned char                                      bTickWhenGamePaused : 1;                                   // 0x0088(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataFCI5[0x2];                                      // 0x0088(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bTick : 1;                                                 // 0x0088(0x0001) BIT_FIELD (Const)
	unsigned char                                      UnknownDataO2AF[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataDY8Z[0x4];                                      // 0x008C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __TickDelegate__Delegate;                                  // 0x0090(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataQ91F[0xC];                                      // 0x008C(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TickComponent_X");
		return ptr;
	}


	void SetTickable(bool bWantsTick);
	void TickDelegate(float DeltaTime);
};

// Class ProjectX.UIStrings_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UUIStrings_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UIStrings_X");
		return ptr;
	}


};

// Class ProjectX.WebRequest_X
// 0x0062 (FullSize[0x00C2] - InheritedSize[0x0060])
class UWebRequest_X : public UObject
{
public:
	unsigned char                                      bZipRequest : 1;                                           // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData1O90[0x2];                                      // 0x0060(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bZipResponse : 1;                                          // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataJZ7O[0x2];                                      // 0x0064(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bLogRequest : 1;                                           // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData6TJN[0x2];                                      // 0x0064(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bLogResponse : 1;                                          // 0x0060(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataAY5I[0x2];                                      // 0x0064(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bConnectionReset : 1;                                      // 0x0060(0x0001) BIT_FIELD (Const, Transient)
	unsigned char                                      UnknownDataFF7Q[0x2];                                      // 0x0064(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<EWebRequestState>                      RequestState;                                              // 0x0064(0x0001) (Const, Transient)
	unsigned char                                      UnknownDataLYB5[0x3];                                      // 0x0065(0x0003) MISSED OFFSET
	struct FString                                     URL;                                                       // 0x0068(0x0010) (Const, Transient, NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                               // 0x0078(0x0008) (Transient, PrivateWrite)
	class UHttpResponseInterface*                      HttpResponse;                                              // 0x0080(0x0008) (Const, Transient, PrivateWrite)
	TArray<unsigned char>                              Content;                                                   // 0x0088(0x0010) (Const, Transient, NeedCtorLink)
	struct FString                                     StringContent;                                             // 0x0098(0x0010) (Const, Transient, NeedCtorLink)
	TArray<unsigned char>                              ResponseData;                                              // 0x00A8(0x0010) (Const, Transient, NeedCtorLink)
	class UError*                                      Error;                                                     // 0x00B8(0x0008) (Const, Transient)
	struct FScriptDelegate                             __EventCompleted__Delegate;                                // 0x00C0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataUF81[0xC];                                      // 0x00C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WebRequest_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetError(class UError* InError);
	bool HasInternetConnection();
	void HandleHttpRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void ConstructHttpRequest();
	struct FString GetResponseHeader(const struct FString& Key);
	struct FString GetResponseString();
	bool HasNewData();
	bool IsSuccess();
	bool IsError();
	bool IsComplete();
	bool IsSent();
	class UHttpRequestInterface* GetHttpRequest();
	class UWebRequest_X* Send(const struct FString& InURL, const struct FScriptDelegate& OnCompleteCallback);
	void PrepareRequest(const struct FString& InURL);
	void SetContentFromString(const struct FString& ContentString);
	void SetContent(TArray<unsigned char>* ContentBytes);
	struct FString GetETag();
	void SetETag(const struct FString& ETag);
	class UWebRequest_X* SetHeader(const struct FString& Key, const struct FString& Value);
	class UWebRequest_X* AddPlayerIDParam(const struct FUniqueNetId& PlayerID);
	class UWebRequest_X* AddStringParam(const struct FString& Key, const struct FString& Value);
	class UWebRequest_X* AddFloatParam(const struct FString& Key, float Value);
	class UWebRequest_X* AddQwordParam(const struct FString& Key);
	class UWebRequest_X* AddIntParam(const struct FString& Key, int Value);
	TEnumAsByte<EFlushResult> FlushWebRequests(float TimeoutSeconds);
	class UWebRequest_X* Create();
	void EventCompleted(class UWebRequest_X* Request);
};

// Class ProjectX.AnimNodeBlendBase_X
// 0x0022 (FullSize[0x0188] - InheritedSize[0x0166])
class UAnimNodeBlendBase_X : public UAnimNodeBlendList
{
public:
	unsigned char                                      UnknownData496Y[0x4];                                      // 0x016C(0x0004) MISSED OFFSET
	float                                              BlendTime;                                                 // 0x0170(0x0004) (Edit)
	unsigned char                                      UnknownDataI3TY[0x4];                                      // 0x0174(0x0004) MISSED OFFSET
	TArray<float>                                      ChildBlendTimes;                                           // 0x0178(0x0010) (Edit, NeedCtorLink)
	unsigned char                                      bRebuildChildren : 1;                                      // 0x0188(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataSKRP[0x2];                                      // 0x0188(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bChildrenUpdated : 1;                                      // 0x0188(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataE495[0x2];                                      // 0x018C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNodeBlendBase_X");
		return ptr;
	}


	void SetActiveChildNamed(const struct FName& ChildName, bool bForce);
	float GetAnimDuration(int ChildIndex);
	float GetBlendTime(int ChildIndex, bool bGetDefault);
};

// Class ProjectX.AnimNodeSeries_X
// 0x001C (FullSize[0x01A4] - InheritedSize[0x0188])
class UAnimNodeSeries_X : public UAnimNodeBlendBase_X
{
public:
	unsigned char                                      UnknownDataTXFP[0x4];                                      // 0x018C(0x0004) MISSED OFFSET
	unsigned char                                      bActive : 1;                                               // 0x0190(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownData2ZTL[0x2];                                      // 0x018C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bInitialized : 1;                                          // 0x0190(0x0001) BIT_FIELD (Const, Transient)
	unsigned char                                      UnknownDataCK4C[0x2];                                      // 0x0194(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataMDGD[0x4];                                      // 0x0194(0x0004) MISSED OFFSET
	class UAnimNodeSequence*                           IntroAnim;                                                 // 0x0198(0x0008) (Const, Transient)
	class UAnimNodeSequence*                           OutroAnim;                                                 // 0x01A0(0x0008) (Const, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNodeSeries_X");
		return ptr;
	}


};

// Class ProjectX.AnimNodeSequence_X
// 0x003C (FullSize[0x01BE] - InheritedSize[0x0182])
class UAnimNodeSequence_X : public UAnimNodeSequence
{
public:
	float                                              AnimSetBlendTime;                                          // 0x01A8(0x0004) (Edit)
	unsigned char                                      bResetOnRelevant : 1;                                      // 0x01AC(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData1FU7[0x2];                                      // 0x01AC(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UAnimSequence*                               PrevAnimSeq;                                               // 0x01B0(0x0008) (Transient)
	int                                                PrevAnimLinkupIndex;                                       // 0x01B8(0x0004) (Transient)
	float                                              BlendTimeLeft;                                             // 0x01BC(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNodeSequence_X");
		return ptr;
	}


};

// Class ProjectX.AnimNodePose_X
// 0x0002 (FullSize[0x01C0] - InheritedSize[0x01BE])
class UAnimNodePose_X : public UAnimNodeSequence_X
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNodePose_X");
		return ptr;
	}


	void PlayAnim(bool bLoop, float InRate, float StartTime);
};

// Class ProjectX.AnimNodeSlot_X
// 0x000C (FullSize[0x016C] - InheritedSize[0x0160])
class UAnimNodeSlot_X : public UAnimNodeSlot
{
public:
	unsigned char                                      UnknownData9S9F[0x4];                                      // 0x016C(0x0004) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNodeSlot_X");
		return ptr;
	}


	void AddNodeToGroup(const struct FName& GroupName);
	float PlaySettings(const struct FCustomAnimSettings& Settings);
};

// Class ProjectX.AnimNotify_PlayParticleEffect_X
// 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
class UAnimNotify_PlayParticleEffect_X : public UAnimNotify_PlayParticleEffect
{
public:
	class UParticleSystemComponent*                    PSC;                                                       // 0x0098(0x0008) (ExportObject, Component, EditInline)
	class UAnimNodeSequence*                           CachedAnimSequence;                                        // 0x00A0(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNotify_PlayParticleEffect_X");
		return ptr;
	}


	void OnParticleSystemFinished(class UParticleSystemComponent* Component);
	void NotifyEnd(class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator);
	void Notify(class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator);
};

// Class ProjectX.PsyNetBeacon_X
// 0x0054 (FullSize[0x00C4] - InheritedSize[0x0070])
class UPsyNetBeacon_X : public UComponent
{
public:
	float                                              ConnectionTimeoutSeconds;                                  // 0x0070(0x0004) (Config)
	unsigned char                                      UnknownDataPVV8[0x4];                                      // 0x0074(0x0004) MISSED OFFSET
	class UPsyNetConnection_X*                         PsyNetConnection;                                          // 0x0078(0x0008)
	TArray<class UPsyNetBeaconConnection_X*>           Connections;                                               // 0x0080(0x0010) (NeedCtorLink)
	TArray<class UDSPendingMessage_X*>                 PendingMessages;                                           // 0x0090(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __EventConnected__Delegate;                                // 0x00A0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData8RLP[0xC];                                      // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                             // 0x00B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataDNX9[0xC];                                      // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventMessageReceived__Delegate;                          // 0x00D0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataKCI7[0xC];                                      // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetBeacon_X");
		return ptr;
	}


	void SerializeMessage(class UObject* Message, struct FString* OutMessageType, struct FString* OutMessagePayload);
	class UObject* DeserializeMessage(const struct FString& MessageType, const struct FString& MessagePayload);
	void TimeoutPendingMessages();
	void TimeoutConnections();
	void Tick();
	bool IsGameClient();
	void IssuePendingMessages(class UPsyNetBeaconConnection_X* Connection);
	void AddPendingMessage(class UDSR_DSMessage_X* Message, class UDSPendingMessage_X** ObjectInitializer_4F4816754D73A2B8BAA3358E48D460C7);
	void HandleMessage(class UPsyNetBeaconConnection_X* Connection, const struct FString& MessageType, const struct FString& MessagePayload);
	void ClientHandleMessage(class UDSR_ClientMessage_X* Message);
	void ServerHandleMessage(class UDSR_DSMessage_X* Message);
	void SendMessageToServer(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	void SendMessageToClients(TArray<class UPsyNetBeaconConnection_X*> ToConnections, class UObject* Message, TArray<class URPC_RelayToClient_X*>* ArrayInitializer_DBF4481E420F6620A50782B67E1F9491);
	class UPsyNetBeaconConnection_X* ServerFindConnection(const struct FString& ReservationID, const struct FString& ConnectionID);
	void ServerHandleReservation(class UPsyNetService_DSReservation_X* Notification);
	void Close();
	void CloseConnection(class UPsyNetBeaconConnection_X* Connection);
	void BroadcastMessage(class UObject* Message);
	void SendMessage(class UPsyNetBeaconConnection_X* Connection, class UObject* Message, TArray<class UPsyNetBeaconConnection_X*>* ArrayInitializer_BB5997044B6004B483C3D2A7CB477393);
	class UPsyNetBeaconConnection_X* ReserveConnection(const struct FString& ReservationID, const struct FString& ConnectionID, class UPsyNetBeaconConnection_X** ObjectInitializer_07CE247F41FAD3718DD751974A9445D2);
	void SetPsyNetConnection(class UPsyNetConnection_X* InPsyNetConnection);
	void EventMessageReceived(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	void EventDisconnected(class UPsyNetBeacon_X* Beacon, class UPsyNetBeaconConnection_X* Connection);
	void EventConnected(class UPsyNetBeacon_X* Beacon, class UPsyNetBeaconConnection_X* Connection);
};

// Class ProjectX.TcpBeacon
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UTcpBeacon : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0070(0x0008) (Const, Native, NoExport)
	int                                                MaxConnections;                                            // 0x0078(0x0004) (Config)
	unsigned char                                      UnknownDataT8KV[0x4];                                      // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     ConnectionClassName;                                       // 0x0080(0x0010) (Config, NeedCtorLink)
	class UClass*                                      ConnectionClass;                                           // 0x0090(0x0008)
	struct FPointer                                    ListenSocket;                                              // 0x0098(0x0008) (Const, Native, Transient)
	TArray<class UTcpConnection*>                      Connections;                                               // 0x00A0(0x0010) (Const, Transient, NeedCtorLink)
	struct FScriptDelegate                             __EventConnected__Delegate;                                // 0x00B0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData9YWV[0xC];                                      // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                             // 0x00C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData7NNF[0xC];                                      // 0x00C8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TcpBeacon");
		return ptr;
	}


	void ReceivedBunch(class UTcpConnection* Connection);
	void OnDisconnected(class UTcpConnection* Connection);
	void OnConnected(class UTcpConnection* Connection);
	void OnConnectionRemoved(class UTcpConnection* Connection);
	void OnConnectionAdded(class UTcpConnection* Connection);
	class UTcpConnection* GetConnection(const struct FString& Address);
	void Close();
	bool BeginListen();
	class UTcpConnection* BeginConnect(const struct FString& Address);
	void EventDisconnected(class UTcpBeacon* Beacon, class UTcpConnection* Connection);
	void EventConnected(class UTcpBeacon* Beacon, class UTcpConnection* Connection);
};

// Class ProjectX.TcpMessageBeacon
// 0x002C (FullSize[0x00F4] - InheritedSize[0x00C8])
class UTcpMessageBeacon : public UTcpBeacon
{
public:
	class UOnlineMessageComponent_X*                   MessageComponent;                                          // 0x00E0(0x0008) (Const, ExportObject, Component, EditInline)
	struct FScriptDelegate                             __EventMessageReceived__Delegate;                          // 0x00E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData0JEJ[0xC];                                      // 0x00E8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TcpMessageBeacon");
		return ptr;
	}


	void BroadcastMessage(class UObject* Message);
	void SendMessage(class UTcpConnection* Connection, class UObject* Message);
	void EventMessageReceived(class UTcpConnection* Connection, class UObject* Message);
};

// Class ProjectX.TcpConnection
// 0x00BC (FullSize[0x011C] - InheritedSize[0x0060])
class UTcpConnection : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x0060(0x0008) (Const, Native, NoExport)
	struct FPointer                                    VfTable_IIReservationConnection_X;                         // 0x0068(0x0008) (Const, Native, NoExport)
	float                                              InitialConnectionTimeout;                                  // 0x0070(0x0004) (Config)
	float                                              ConnectionTimeout;                                         // 0x0074(0x0004) (Config)
	struct FPointer                                    Socket;                                                    // 0x0078(0x0008) (Const, Native, Transient)
	TEnumAsByte<ETcpConnectionState>                   ConnectionState;                                           // 0x0080(0x0001) (Const, Transient)
	TEnumAsByte<EWebSocketState>                       WebSocketState;                                            // 0x0081(0x0001) (Const, Transient)
	unsigned char                                      UnknownDataGORB[0x2];                                      // 0x0082(0x0002) MISSED OFFSET
	float                                              LastReceiveTime;                                           // 0x0084(0x0004) (Const, Transient)
	TArray<unsigned char>                              InBytes;                                                   // 0x0088(0x0010) (Const, Transient, NeedCtorLink)
	TArray<unsigned char>                              OutBytes;                                                  // 0x0098(0x0010) (Const, Transient, NeedCtorLink)
	TArray<int>                                        OutMessageLengths;                                         // 0x00A8(0x0010) (Const, Transient, NeedCtorLink)
	TArray<unsigned char>                              QueuedWebSocketBytes;                                      // 0x00B8(0x0010) (Const, Transient, NeedCtorLink)
	TArray<int>                                        QueuedWebSocketMessageLengths;                             // 0x00C8(0x0010) (Const, Transient, NeedCtorLink)
	TArray<unsigned char>                              InBytesDecoded;                                            // 0x00D8(0x0010) (Const, Transient, NeedCtorLink)
	TArray<unsigned char>                              BunchBytes;                                                // 0x00E8(0x0010) (Const, Transient, NeedCtorLink)
	struct FScriptDelegate                             __EventConnected__Delegate;                                // 0x00F8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData9FIX[0xC];                                      // 0x00F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisconnected__Delegate;                             // 0x0110(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5K1K[0xC];                                      // 0x0110(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventReceivedBunch__Delegate;                            // 0x0128(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData3NGX[0xC];                                      // 0x0128(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TcpConnection");
		return ptr;
	}


	void OnDisconnected();
	void OnConnected();
	void Close();
	struct FString GetRemoteAddress();
	struct FString GetAddress();
	void EventReceivedBunch(class UTcpConnection* Connection);
	void EventDisconnected(class UTcpConnection* Connection);
	void EventConnected(class UTcpConnection* Connection);
};

// Class ProjectX.WebSocketConnection_X
// 0x0040 (FullSize[0x015C] - InheritedSize[0x011C])
class UWebSocketConnection_X : public UTcpConnection
{
public:
	float                                              PingInterval;                                              // 0x0140(0x0004) (Config)
	unsigned char                                      UnknownData7PNB[0x4];                                      // 0x0144(0x0004) MISSED OFFSET
	struct FString                                     ClosedReason;                                              // 0x0148(0x0010) (Const, NeedCtorLink)
	int                                                ClosedCode;                                                // 0x0158(0x0004) (Const)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WebSocketConnection_X");
		return ptr;
	}


	void PretendClose(int Code, const struct FString& Reason);
	void Close();
	bool BeginWebSocketConnect(const struct FString& Address, class UStringMap* HandshakeHeaders);
	bool BeginConnect(const struct FString& Address);
};

// Class ProjectX.UdpPingBeaconBase_X
// 0x001E (FullSize[0x008E] - InheritedSize[0x0070])
class UUdpPingBeaconBase_X : public UComponent
{
public:
	struct FPointer                                    Beacon;                                                    // 0x0070(0x0008) (Const, Native)
	struct FPointer                                    Thread;                                                    // 0x0078(0x0008) (Const, Native)
	struct FPointer                                    Runnable;                                                  // 0x0080(0x0008) (Const, Native)
	int                                                SocketErrorLogDelaySeconds;                                // 0x0088(0x0004) (Config)
	unsigned char                                      bThreaded : 1;                                             // 0x008C(0x0001) BIT_FIELD (Config)
	unsigned char                                      UnknownDataHNG1[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UdpPingBeaconBase_X");
		return ptr;
	}


	void TickSocket(float DeltaTime);
	void SetTickSocket(bool bTick);
	void Close();
};

// Class ProjectX.UdpPingBeaconClient_X
// 0x0022 (FullSize[0x00B0] - InheritedSize[0x008E])
class UUdpPingBeaconClient_X : public UUdpPingBeaconBase_X
{
public:
	float                                              MaxPingSeconds;                                            // 0x0090(0x0004) (Config)
	unsigned char                                      UnknownData8AAV[0x4];                                      // 0x0094(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __EventPong__Delegate;                                     // 0x0098(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataDGY4[0xC];                                      // 0x0094(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventLost__Delegate;                                     // 0x00B0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataIO25[0xC];                                      // 0x00B0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UdpPingBeaconClient_X");
		return ptr;
	}


	void TickPongs(float DeltaTime);
	void SetTickPongs(bool bTick);
	void Close();
	void SendPing(const struct FName& Address);
	bool InitClient();
	class UUdpPingBeaconClient_X* GetInstance();
	void EventLost(class UUdpPingBeaconClient_X* TheBeacon, const struct FName& Address);
	void EventPong(class UUdpPingBeaconClient_X* TheBeacon, const struct FName& Address, float DeltaSeconds);
};

// Class ProjectX.UdpPingBeaconServer_X
// 0x000E (FullSize[0x009C] - InheritedSize[0x008E])
class UUdpPingBeaconServer_X : public UUdpPingBeaconBase_X
{
public:
	int                                                MaxPingsPerAddress;                                        // 0x0090(0x0004) (Config)
	int                                                MaxPingsWindowSeconds;                                     // 0x0094(0x0004) (Config)
	int                                                StatsLogDelaySeconds;                                      // 0x0098(0x0004) (Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UdpPingBeaconServer_X");
		return ptr;
	}


	bool InitServer(int Port);
};

// Class ProjectX.NetworkNextDriver_X
// 0x0170 (FullSize[0x0210] - InheritedSize[0x00A0])
class UNetworkNextDriver_X : public UNetDriver
{
public:
	unsigned char                                      UnknownDataUH7O[0x58];                                     // 0x0210(0x0058) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkNextDriver_X");
		return ptr;
	}


};

// Class ProjectX.NetworkNextConnection_X
// 0x0032 (FullSize[0xB1D8] - InheritedSize[0xB1A6])
class UNetworkNextConnection_X : public UNetConnection
{
public:
	unsigned char                                      UnknownDataZX0Y[0x20];                                     // 0xB1D8(0x0020) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkNextConnection_X");
		return ptr;
	}


};

// Class ProjectX.NetworkNextDriverProxy_X
// 0x0020 (FullSize[0x0288] - InheritedSize[0x0268])
class UNetworkNextDriverProxy_X : public UTcpNetDriver
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkNextDriverProxy_X");
		return ptr;
	}


};

// Class ProjectX.NetworkNextConnectionProxy_X
// 0x0028 (FullSize[0xB200] - InheritedSize[0xB1D8])
class UNetworkNextConnectionProxy_X : public UTcpipConnection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetworkNextConnectionProxy_X");
		return ptr;
	}


};

// Class ProjectX.PrivilegeCheck_X
// 0x006C (FullSize[0x00CC] - InheritedSize[0x0060])
class UPrivilegeCheck_X : public UObject
{
public:
	TArray<int>                                        ControllerIDs;                                             // 0x0060(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	unsigned char                                      bHasRestriction : 1;                                       // 0x0070(0x0001) BIT_FIELD (Transient, PrivateWrite)
	unsigned char                                      UnknownData6M1U[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bFinished : 1;                                             // 0x0070(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataGZIL[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData5DB2[0x4];                                      // 0x0074(0x0004) MISSED OFFSET
	class UError*                                      FailReason;                                                // 0x0078(0x0008) (Transient, PrivateWrite)
	TArray<TEnumAsByte<EFeaturePrivilege>>             PendingPrivileges;                                         // 0x0080(0x0010) (Transient, NeedCtorLink)
	int                                                FailedControllerID;                                        // 0x0090(0x0004) (Transient)
	TEnumAsByte<EFeaturePrivilege>                     FailedPrivilege;                                           // 0x0094(0x0001) (Transient)
	unsigned char                                      UnknownDataI0C9[0x3];                                      // 0x0095(0x0003) MISSED OFFSET
	TArray<int>                                        PendingControllerIDs;                                      // 0x0098(0x0010) (Transient, NeedCtorLink)
	TArray<struct FScriptDelegate>                     CheckDelegates;                                            // 0x00A8(0x0010) (Transient, NeedCtorLink)
	struct FScriptDelegate                             EventFinished;                                             // 0x00B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataEXTZ[0xC];                                      // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __CheckDelegate__Delegate;                                 // 0x00D0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataW7CO[0xC];                                      // 0x00D0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PrivilegeCheck_X");
		return ptr;
	}


	bool HasFeatureRestriction(int* OutControllerID, TEnumAsByte<EFeaturePrivilege>* OutFailedPrivilege);
	void OnFinished();
	void Fail(const struct FString& Reason);
	void HandlePrivilege(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> Level, class UError* InFailReason);
	void CheckPrivilege();
	void CheckPsyNetComplete(class UError* ConnectionError);
	void CheckPsyNet();
	void ValidateUserOnlineAccount();
	void CheckInternet();
	class UPrivilegeCheck_X* RequirePrivilege(TEnumAsByte<EFeaturePrivilege> Privilege);
	class UPrivilegeCheck_X* RequirePsyNet();
	class UPrivilegeCheck_X* RequireUserOnlineAccount();
	class UPrivilegeCheck_X* RequireInternet();
	void StartNextCheck();
	void Start();
	void Init(int ControllerId);
	void CheckDelegate();
};

// Class ProjectX.UdpEncryptionKeys
// 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
class UUdpEncryptionKeys : public UObject
{
public:
	struct FString                                     Key;                                                       // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     IV;                                                        // 0x0070(0x0010) (NeedCtorLink)
	struct FString                                     HMACKey;                                                   // 0x0080(0x0010) (NeedCtorLink)
	struct FString                                     SessionId;                                                 // 0x0090(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UdpEncryptionKeys");
		return ptr;
	}


};

// Class ProjectX.AddReservationMessage_X
// 0x005A (FullSize[0x00BA] - InheritedSize[0x0060])
class UAddReservationMessage_X : public UBeaconMessage_X
{
public:
	TArray<struct FReservationPlayerData>              Players;                                                   // 0x0060(0x0010) (NeedCtorLink)
	struct FUniqueNetId                                PartyLeaderID;                                             // 0x0070(0x0038)
	struct FString                                     ReservationID;                                             // 0x00A8(0x0010) (NeedCtorLink)
	unsigned char                                      bDisableCrossPlay : 1;                                     // 0x00B8(0x0001) BIT_FIELD
	unsigned char                                      UnknownData8M9F[0x2];                                      // 0x00B8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AddReservationMessage_X");
		return ptr;
	}


	struct FUniqueNetId __AddReservationMessage_X__GetPlayerIDs_F91B34E54B74755EC19A0F90A02111D1(const struct FReservationPlayerData& P);
	TArray<struct FUniqueNetId> GetPlayerIDs(TArray<struct FUniqueNetId>* MapLocal_42C782AA4B911FF303C100BB0E49775C);
	void GetPlayerMapPrefs(const struct FUniqueNetId& PlayerID, TArray<struct FName>* Likes, TArray<struct FName>* Dislikes);
	class UAddReservationMessage_X* SetDisableCrossPlay(bool bValue);
	class UAddReservationMessage_X* AddPlayer(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, bool bRemotePlayer);
	class UAddReservationMessage_X* AddOnlinePlayer(class UOnlinePlayer_X* Player, bool bFriendJoin);
	class UAddReservationMessage_X* AddPlayers();
	class UAddReservationMessage_X* SetReservationID(const struct FString& Id);
};

// Class ProjectX.ActivateAnimSeriesComponent_X
// 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
class UActivateAnimSeriesComponent_X : public UActorComponent_X
{
public:
	unsigned char                                      UnknownData5P0Y[0x4];                                      // 0x00A4(0x0004) MISSED OFFSET
	struct FName                                       AnimNodeName;                                              // 0x00A8(0x0008) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ActivateAnimSeriesComponent_X");
		return ptr;
	}


	void SetAnimSeriesActiveInComponent(class USkeletalMeshComponent* SKC, bool bActive);
	void SetAnimSeriesActive(bool bActive);
	void Detached();
	void Attached();
};

// Class ProjectX.OnlineGameAccount_X
// 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
class UOnlineGameAccount_X : public UOnline_X
{
public:
	class UOnlinePlayer_X*                             PrimaryPlayer;                                             // 0x0078(0x0008) (Transient, PrivateWrite)
	float                                              UpdateCurrentGameTaskTimer;                                // 0x0080(0x0004) (Edit)
	int                                                CurrentPlaylistId;                                         // 0x0084(0x0004) (Transient, PrivateWrite)
	struct FScriptDelegate                             __EventPrimaryPlayerIdChanged__Delegate;                   // 0x0088(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataIE1J[0xC];                                      // 0x0088(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventCurrentPlaylistSet__Delegate;                       // 0x00A0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData76BU[0xC];                                      // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameAccount_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void OnMainMenuOpened();
	int GetNumLocalPlayers();
	void SendUpdatePlayerCurrentGameRPC();
	void SendUpdatePlayerCurrentGameRequest();
	void UpdateCurrentGame();
	void ClearCurrentPlaylist();
	void SetCurrentPlaylist(int PlaylistId);
	void HandleActiveServerChanged();
	void HandlePsyNetConnectionChanged(class UPsyNetConnection_X* C);
	void HandlePlayerLoginStatusChanged(class UOnlinePlayer_X* Player);
	void OnPrimaryPlayerIdChanged();
	void SetPrimaryPlayer(class UOnlinePlayer_X* Player);
	void OnInit();
	void EventCurrentPlaylistSet(class UOnlineGameAccount_X* InAccount, class UGameSettingPlaylist_X* NewPlaylist);
	void EventPrimaryPlayerIdChanged(class UOnlineGameAccount_X* InAccount, const struct FUniqueNetId& PlayerID);
};

// Class ProjectX.OnlineClubCache_X
// 0x001C (FullSize[0x008C] - InheritedSize[0x0070])
class UOnlineClubCache_X : public UComponent
{
public:
	TArray<class UClubDetails_X*>                      ClubDetailsCache;                                          // 0x0070(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __EventClubUpdated__Delegate;                              // 0x0080(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataYJVT[0xC];                                      // 0x0080(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineClubCache_X");
		return ptr;
	}


	void __OnlineClubCache_X__ClearAllExcept_2696C1824A18B9AF60FB729644F383AF(class UClubDetails_X* C);
	void ClearAllExcept();
	void Clear();
	void Destroy();
	void Add(class UClubDetails_X* ClubDetails);
	void GetPlayerClubID(const struct FUniqueNetId& PlayerID);
	class UClubDetails_X* GetPlayerClubDetails(const struct FUniqueNetId& PlayerID);
	class UClubDetails_X* GetClubDetails();
	void NotifyWhenClubUpdated(const struct FScriptDelegate& Callback);
	void EventClubUpdated(class UOnlineClubCache_X* Cache, class UClubDetails_X* ClubDetails);
};

// Class ProjectX.AddReservationMessagePrivate_X
// 0x0096 (FullSize[0x0150] - InheritedSize[0x00BA])
class UAddReservationMessagePrivate_X : public UAddReservationMessage_X
{
public:
	unsigned char                                      UnknownDataZJQX[0x4];                                      // 0x00BC(0x0004) MISSED OFFSET
	struct U_Types_X_FCustomMatchSettings              Settings;                                                  // 0x00C0(0x0090) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AddReservationMessagePrivate_X");
		return ptr;
	}


	struct FString GetDebugString();
	class UAddReservationMessagePrivate_X* SetSettings(struct U_Types_X_FCustomMatchSettings* InSettings);
};

// Class ProjectX.AddReservationMessagePublic_X
// 0x0036 (FullSize[0x00F0] - InheritedSize[0x00BA])
class UAddReservationMessagePublic_X : public UAddReservationMessage_X
{
public:
	unsigned char                                      UnknownDataP5M5[0x4];                                      // 0x00BC(0x0004) MISSED OFFSET
	struct FJoinMatchSettings                          Settings;                                                  // 0x00C0(0x0020) (NeedCtorLink)
	TArray<struct FOnlinePlayerMapPrefs>               MapPrefs;                                                  // 0x00E0(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AddReservationMessagePublic_X");
		return ptr;
	}


	class UAddReservationMessage_X* AddPlayers();
	void SetPlayerPref(class UGameSettingPlaylist_X* Playlist, class UOnlinePlayer_X* OnlinePlayer);
	void GetPlayerMapPrefs(const struct FUniqueNetId& PlayerID, TArray<struct FName>* Likes, TArray<struct FName>* Dislikes);
	class UAddReservationMessage_X* AddPlayer(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, bool bRemotePlayer);
	struct FString GetDebugString();
	struct FString GetPlayerDebugString(const struct FReservationPlayerData& Player);
	class UAddReservationMessagePublic_X* SetSettings(struct FJoinMatchSettings* InSettings);
};

// Class ProjectX.OnlineGamePlaylists_X
// 0x002C (FullSize[0x00A4] - InheritedSize[0x0078])
class UOnlineGamePlaylists_X : public UOnline_X
{
public:
	class UClass*                                      PlaylistClass;                                             // 0x0078(0x0008) (Edit)
	TArray<class UGameSettingPlaylist_X*>              DownloadedPlaylists;                                       // 0x0080(0x0010) (Transient, NeedCtorLink, PrivateWrite)
	class URankedConfig_X*                             RankedConfig;                                              // 0x0090(0x0008) (Edit)
	struct FScriptDelegate                             __EventPlaylistsChanged__Delegate;                         // 0x0098(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataPT2Q[0xC];                                      // 0x0098(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGamePlaylists_X");
		return ptr;
	}


	bool __OnlineGamePlaylists_X__GetPrivateMatch_CA5377164B5EEED648AC7EB089EC4782(class UGameSettingPlaylist_X* P);
	bool __OnlineGamePlaylists_X__GetLanMatch_A3A218AE416BECE41ECEB594318318CC(class UGameSettingPlaylist_X* P);
	class UGameSettingPlaylist_X* GetLanMatch();
	class UGameSettingPlaylist_X* GetPrivateMatch();
	TArray<struct FName> GetAccessiblePlaylists(TArray<struct FName>* SelectedPlaylists);
	bool IsRankedEnabled();
	bool IsRankedPlaylistID(int PlaylistId);
	bool IsRankedPlaylistName(const struct FName& PlaylistName);
	bool IsUnankedPlaylistName(const struct FName& PlaylistName);
	bool IsStandardPlaylistID(int PlaylistId);
	bool IsStandardPlaylistName(const struct FName& PlaylistName);
	bool IsNonStandardPlaylistName(const struct FName& PlaylistName);
	void NamesToIDs(TArray<struct FName>* Names, TArray<int>* Ids);
	struct FString GetPlaylistFriendlyName(int PlaylistId);
	void CopyPlaylistGameTags();
	void UpdateORSPlaylistData(class UDownloadedPlaylistsData_X** ObjectInitializer_EFBB9CB646B5BD05209F069A81E3A9DA);
	void HandlePlaylistsChanged(class UObjectProvider* Provider);
	int NameToID(const struct FName& PlaylistName);
	int GetTimeRemaining(int PlaylistId);
	bool IsTimeConstrained(int PlaylistId);
	class UGameSettingPlaylist_X* GetPlaylistByID(int PlaylistId);
	class UGameSettingPlaylist_X* GetPlaylistByName(const struct FName& PlaylistName);
	bool IsPlaylistEnabled(class UGameSettingPlaylist_X* Playlist);
	void NotifyWhenChanged(const struct FScriptDelegate& Callback);
	void OnInit();
	void EventPlaylistsChanged(class UOnlineGamePlaylists_X* PlaylistsObj);
};

// Class ProjectX.GameSettingPlaylist_X
// 0x0060 (FullSize[0x00C2] - InheritedSize[0x0062])
class UGameSettingPlaylist_X : public UGameSetting_X
{
public:
	unsigned char                                      UnknownDataSDO6[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     Title;                                                     // 0x0068(0x0010) (Edit, NeedCtorLink)
	struct FString                                     Description;                                               // 0x0078(0x0010) (Edit, NeedCtorLink)
	int                                                PlayerCount;                                               // 0x0088(0x0004) (Edit, PrivateWrite)
	unsigned char                                      bStandard : 1;                                             // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned char                                      UnknownData457Z[0x2];                                      // 0x008C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bRanked : 1;                                               // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned char                                      UnknownDataHV38[0x2];                                      // 0x0090(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bSolo : 1;                                                 // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned char                                      UnknownDataJ2BN[0x2];                                      // 0x0090(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bNew : 1;                                                  // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned char                                      UnknownDataLPGM[0x2];                                      // 0x0090(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bApplyQuitPenalty : 1;                                     // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned char                                      UnknownData6LGR[0x2];                                      // 0x0090(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowForfeit : 1;                                         // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned char                                      UnknownDataASMA[0x2];                                      // 0x0090(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bDisableRankedReconnect : 1;                               // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned char                                      UnknownDataD4IZ[0x2];                                      // 0x0090(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIgnoreAssignTeams : 1;                                    // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned char                                      UnknownDataML14[0x2];                                      // 0x0090(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bKickOnMigrate : 1;                                        // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned char                                      UnknownDataRF03[0x2];                                      // 0x0090(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIsMicroEventPlaylist : 1;                                 // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned char                                      UnknownDataM5LE[0x2];                                      // 0x0090(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bHasVariablePlayerCount : 1;                               // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned char                                      UnknownDataQRNW[0x2];                                      // 0x0090(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowBotFills : 1;                                        // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned char                                      UnknownData38UA[0x2];                                      // 0x0090(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowClubs : 1;                                           // 0x008C(0x0001) BIT_FIELD (Edit, PrivateWrite)
	unsigned char                                      UnknownDataMPTG[0x2];                                      // 0x0090(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bPlayersVSBots : 1;                                        // 0x008C(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData665M[0x2];                                      // 0x0090(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAllowStayAsParty : 1;                                     // 0x008C(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataS7VM[0x2];                                      // 0x0090(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     PlaylistImageURL;                                          // 0x0090(0x0010) (Edit, NeedCtorLink, PrivateWrite)
	int                                                PlaylistId;                                                // 0x00A0(0x0004) (Edit, PrivateWrite)
	unsigned char                                      UnknownDataMDW8[0x4];                                      // 0x00A4(0x0004) MISSED OFFSET
	class UTimeWindow*                                 PlaylistTimeWindow;                                        // 0x00A8(0x0008) (Edit)
	TArray<class UPresetMutators_X*>                   PresetMutators;                                            // 0x00B0(0x0010) (Edit, NeedCtorLink, ProtectedWrite)
	struct FName                                       MapName;                                                   // 0x00C0(0x0008) (Edit)
	struct FString                                     ServerCommand;                                             // 0x00C8(0x0010) (Edit, NeedCtorLink)
	struct FName                                       MapSetName;                                                // 0x00D8(0x0008) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameSettingPlaylist_X");
		return ptr;
	}


	bool IsLanMatch();
	bool IsPrivateMatch();
	bool ShouldUpdateSkills();
	bool IsValidID(int InPlaylistID);
	bool IsValid();
	struct FString GetLocalizedDescription();
	struct FString GetLocalizedName();
	void Setup(class UPlaylistSettings_X* Settings);
};

// Class ProjectX.SeqEvent_Spawned_X
// 0x0014 (FullSize[0x0188] - InheritedSize[0x0174])
class USeqEvent_Spawned_X : public USequenceEvent
{
public:
	unsigned char                                      UnknownDataBG6F[0x4];                                      // 0x017C(0x0004) MISSED OFFSET
	class AActor*                                      Spawned;                                                   // 0x0180(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SeqEvent_Spawned_X");
		return ptr;
	}


	void TriggerFor(class AActor* A);
};

// Class ProjectX.CameraStateBlender_X
// 0x0094 (FullSize[0x0104] - InheritedSize[0x0070])
class UCameraStateBlender_X : public UComponent
{
public:
	struct FCameraTransition                           Transition;                                                // 0x0070(0x0050) (Transient, PrivateWrite)
	struct FCameraOrientation                          TransitionDelta;                                           // 0x00C0(0x002C) (Transient)
	unsigned char                                      UnknownData9BBS[0x4];                                      // 0x00EC(0x0004) MISSED OFFSET
	class UCameraState_X*                              CameraState;                                               // 0x00F0(0x0008) (Transient, PrivateWrite)
	struct FScriptDelegate                             __EventBlenderStateChanged__Delegate;                      // 0x00F8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataE0GE[0xC];                                      // 0x00F8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraStateBlender_X");
		return ptr;
	}


	bool IsTransitioning();
	void BlendCameraState(struct FCameraOrientation* OutPOV, float DeltaTime);
	void PostProcessPOV(float DeltaTime, struct FCameraOrientation* OutPOV);
	void UpdatePOV(float DeltaTime, struct FCameraOrientation* OutPOV);
	void Tick(float DeltaTime);
	void ClearTransitionDelta();
	void ClearTransition();
	bool TransitionToState(class UCameraState_X* NewState);
	void Snap();
	void EventBlenderStateChanged(class UCameraStateBlender_X* CameraBender);
};

// Class ProjectX.CameraUtils_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UCameraUtils_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraUtils_X");
		return ptr;
	}


	void BlendPOVs(const struct FCameraOrientation& FromPOV, const struct FCameraOrientation& ToPOV, struct FCameraOrientation* OutPOV, float Percent);
	float GetBlendPercent(const struct FViewTargetTransitionParams& BlendParams, float Time);
	bool IsPointInView(const struct FVector& Point, const struct FVector& ViewStart, const struct FRotator& ViewRotation, float FOV);
	float GetFrustumDistanceFromWidth(float FOV, float Width, float AspectRatio);
	float GetFrustumDistanceFromHeight(float FOV, float Height);
	void GetFrustumSize(float Dist, float FOV, float AspectRatio, float* OutWidth, float* OutHeight);
	void CalculateDistanceRotation(const struct FVector& Focus, const struct FVector& Origin, float* OutDistance, struct FRotator* OutRotation);
};

// Class ProjectX.CameraModifier_CameraShake_X
// 0x0000 (FullSize[0x009C] - InheritedSize[0x009C])
class UCameraModifier_CameraShake_X : public UCameraModifier_CameraShake
{
public:
	unsigned char                                      UnknownDataJIM6[0x4];                                      // 0x009C(0x0004) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraModifier_CameraShake_X");
		return ptr;
	}


	void ModifyCameraShakeScale(class UCameraShake* Shake, float NewScale);
	void RemoveCameraShake(class UCameraShake* Shake);
};

// Class ProjectX.CDN_X
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UCDN_X : public UObject
{
public:
	struct FString                                     URL;                                                       // 0x0060(0x0010) (Config, NeedCtorLink)
	struct FString                                     BlogURL;                                                   // 0x0070(0x0010) (Config, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CDN_X");
		return ptr;
	}


};

// Class ProjectX.HUD_X
// 0x002C (FullSize[0x0320] - InheritedSize[0x02F4])
class AHUD_X : public AHUD
{
public:
	class UObject*                                     ShowDebugObject;                                           // 0x0308(0x0008) (Transient)
	class UDebugDrawer_X*                              DebugDrawer;                                               // 0x0310(0x0008) (Transient)
	class UTexture*                                    DebugTexture;                                              // 0x0318(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.HUD_X");
		return ptr;
	}


	void SetShowDebugObject(class UObject* inObj);
	void ShowDebugInfo(float* out_YL, float* out_YPos);
	void ShowDebug(const struct FName& DebugType);
	void DebugCategory(const struct FName& DebugType);
	void DebugCategorySwitch(bool bForward);
	void DrawPauseScreen();
	bool ShouldShowConsoleMessage(const struct FConsoleMessage& InConsoleMessage);
	void DrawDebugTexture();
	void DrawHUD();
};

// Class ProjectX.__CheatManager_X__RandomSleep_BAD6F5BA4DC4AA520BA3249B0B15FEA3
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__CheatManager_X__RandomSleep_BAD6F5BA4DC4AA520BA3249B0B15FEA3 : public UObject
{
public:
	float                                              MinDelay;                                                  // 0x0060(0x0004)
	float                                              MaxDelay;                                                  // 0x0064(0x0004)
	float                                              MinSleep;                                                  // 0x0068(0x0004)
	float                                              MaxSleep;                                                  // 0x006C(0x0004)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__CheatManager_X__RandomSleep_BAD6F5BA4DC4AA520BA3249B0B15FEA3");
		return ptr;
	}


	void __CheatManager_X__RandomSleep_BAD6F5BA4DC4AA520BA3249B0B15FEA3();
};

// Class ProjectX.DebugDrawer_X
// 0x004E (FullSize[0x00FE] - InheritedSize[0x00B0])
class UDebugDrawer_X : public UDebugDrawer
{
public:
	float                                              TextScale;                                                 // 0x00C0(0x0004) (Edit)
	unsigned char                                      UnknownDataKNKO[0x4];                                      // 0x00C4(0x0004) MISSED OFFSET
	class UCanvas*                                     Canvas;                                                    // 0x00C8(0x0008) (Transient)
	TArray<struct FName>                               DebugCategories;                                           // 0x00D0(0x0010) (Transient, NeedCtorLink)
	TArray<struct FName>                               PossibleDebugCategories;                                   // 0x00E0(0x0010) (Transient, NeedCtorLink)
	float                                              CharWidth;                                                 // 0x00F0(0x0004) (Transient)
	float                                              LastWidestElement;                                         // 0x00F4(0x0004) (Transient)
	unsigned char                                      bHideDebug : 1;                                            // 0x00F8(0x0001) BIT_FIELD (Transient)
	unsigned char                                      UnknownDataK82M[0x2];                                      // 0x00F8(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              OffsetX;                                                   // 0x00FC(0x0004) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DebugDrawer_X");
		return ptr;
	}


	void DrawHeader();
	void DrawSpacer(float Height);
	void DrawBackground(float Width, float Height);
	void FinishDrawDebug();
	void StartDrawDebug(class UCanvas* C);
	void PrintText(const struct FString& Text, const struct FColor& InColor);
	void PrintProperty(const struct FString& PropertyName, const struct FString& Value);
	void PrintSeperater();
	void UpdateCanvasIndentation();
	void EndSection();
	void StartSection();
	void SetPos(float X, float Y);
	bool ShouldDisplayDebug(const struct FName& Category);
};

// Class ProjectX.OnlineGameLanServer_X
// 0x00D0 (FullSize[0x0230] - InheritedSize[0x0160])
class UOnlineGameLanServer_X : public UOnlineGameServer_X
{
public:
	class UOnlineGameLanReservations_X*                Reservations;                                              // 0x0160(0x0008) (Edit)
	struct U_Types_X_FCustomMatchSettings              CustomMatch;                                               // 0x0168(0x0090) (Transient, NeedCtorLink, PrivateWrite)
	struct FUniqueNetId                                CustomMatchOwner;                                          // 0x01F8(0x0038) (Transient, PrivateWrite)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameLanServer_X");
		return ptr;
	}


	void StartReservationTimeout();
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	bool AllowSplitscreenJoin(class APlayerReplicationInfo* PrimaryPRI, const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, struct FString* Error);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(const struct FString& Options, const struct FUniqueNetId& PlayerID, struct FString* ErrorMessage);
	void TravelToMap(const struct FString& ServerCommand);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void GoToNextMap();
	void ClearSettings();
	void HandleReservationsTimeout();
	struct U_Types_X_FCustomMatchSettings GetCustomMatchSettings();
	struct FUniqueNetId GetCustomMatchOwner();
	void UpdateCustomMatchOwner(const struct FUniqueNetId& NewOwner);
	void SetupPrivateMatch(const struct U_Types_X_FCustomMatchSettings& Settings, const struct FUniqueNetId& Creator);
	void OnInit();
};

// Class ProjectX.IOnlineGameHost_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UIOnlineGameHost_X : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.IOnlineGameHost_X");
		return ptr;
	}


	struct FUniqueNetId GetCustomMatchOwner();
	struct U_Types_X_FCustomMatchSettings GetCustomMatchSettings();
	bool AllowSplitscreenJoin(class APlayerReplicationInfo* PrimaryPRI, const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, struct FString* Error);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(const struct FString& Options, const struct FUniqueNetId& PlayerID, struct FString* ErrorMessage);
};

// Class ProjectX.PreExitEvent_X
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPreExitEvent_X : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PreExitEvent_X");
		return ptr;
	}


};

// Class ProjectX.Explosion_X
// 0x00E4 (FullSize[0x0280] - InheritedSize[0x019C])
class AExplosion_X : public AActor
{
public:
	class UExplosionComponent_X*                       ExplosionComponent;                                        // 0x0268(0x0008) (Edit, ExportObject, Component, EditInline)
	class AFXActor_X*                                  FXActorArchetype;                                          // 0x0270(0x0008) (Edit, Net, RepNotify)
	class AFXActor_X*                                  FXActor;                                                   // 0x0278(0x0008) (Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Explosion_X");
		return ptr;
	}


	void Destroyed();
	void ForceNetRelevant();
	void SetFXActorArchetype(class AFXActor_X* A);
	void SpawnFX();
	void SetExplosionHandler(TArray<class UExplosionHitHandler_X*> InExplosionHandlers, const struct FBox& GoalBox);
	void PostBeginPlay();
	void ReplicatedEvent(const struct FName& VarName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
