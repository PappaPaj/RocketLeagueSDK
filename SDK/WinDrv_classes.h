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

// Class WinDrv.HttpRequestWindows
// 0x003C (FullSize[0x00A8] - InheritedSize[0x006C])
class UHttpRequestWindows : public UHttpRequestInterface
{
public:
	struct FPointer                                    Request;                                                   // 0x0078(0x0008) (Const, Native, Transient)
	struct FString                                     RequestVerb;                                               // 0x0080(0x0010) (Const, Native)
	struct FPointer                                    RequestURL;                                                // 0x0090(0x0008) (Const, Native, Transient)
	TArray<unsigned char>                              Payload;                                                   // 0x0098(0x0010) (Const, Native)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.HttpRequestWindows");
		return ptr;
	}


	bool ProcessRequest();
	class UHttpRequestInterface* SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue);
	class UHttpRequestInterface* SetContentAsString(const struct FString& ContentString);
	class UHttpRequestInterface* SetContent(TArray<unsigned char>* ContentPayload);
	class UHttpRequestInterface* SetURL(const struct FString& URL);
	class UHttpRequestInterface* SetVerb(const struct FString& Verb);
	struct FString GetVerb();
	void GetContent(TArray<unsigned char>* Content);
	struct FString GetURL();
	int GetContentLength();
	struct FString GetContentType();
	struct FString GetURLParameter(const struct FString& ParameterName);
	TArray<struct FString> GetHeaders();
	struct FString GetHeader(const struct FString& HeaderName);
};

// Class WinDrv.FacebookWindows
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class UFacebookWindows : public UFacebookIntegration
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                   // 0x00E8(0x0008) (Const, Native, NoExport)
	struct FPointer                                    ChildProcHandle;                                           // 0x00F0(0x0008) (Const, Native, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.FacebookWindows");
		return ptr;
	}


	void OnFacebookFriendsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void RequestFacebookFriends();
	void OnFacebookMeRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void RequestFacebookMeInfo();
	void FacebookRequestCallback(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void ProcessFacebookRequest(const struct FString& Payload, int ResponseCode);
	void FacebookRequest(const struct FString& GraphRequest, const struct FString& HTTPMethod, TArray<struct FString> ParamKeysAndValues);
	void Disconnect();
	bool IsAuthorized();
	bool Authorize();
	bool Init();
};

// Class WinDrv.HttpRequestWindowsMcp
// 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
class UHttpRequestWindowsMcp : public UHttpRequestWindows
{
public:
	struct FString                                     AppID;                                                     // 0x00A8(0x0010) (Const, Config, NeedCtorLink)
	struct FString                                     AppSecret;                                                 // 0x00B8(0x0010) (Const, Config, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.HttpRequestWindowsMcp");
		return ptr;
	}


	bool ProcessRequest();
};

// Class WinDrv.HttpResponseWindows
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UHttpResponseWindows : public UHttpResponseInterface
{
public:
	struct FPointer                                    Response;                                                  // 0x0060(0x0008) (Const, Native, Transient)
	TArray<unsigned char>                              Payload;                                                   // 0x0068(0x0010) (Const, Native)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.HttpResponseWindows");
		return ptr;
	}


	int GetResponseCode();
	struct FString GetContentAsString();
	void GetContent(TArray<unsigned char>* Content);
	struct FString GetURL();
	int GetContentLength();
	struct FString GetContentType();
	struct FString GetURLParameter(const struct FString& ParameterName);
	TArray<struct FString> GetHeaders();
	struct FString GetHeader(const struct FString& HeaderName);
};

// Class WinDrv.WindowsClient
// 0x0210 (FullSize[0x0280] - InheritedSize[0x0070])
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownDataJ79K[0x240];                                    // 0x0078(0x0240) MISSED OFFSET
	int                                                AllowJoystickInput;                                        // 0x02B8(0x0004) (Config)
	class UClass*                                      AudioDeviceClass;                                          // 0x0278(0x0008) (Config)
	unsigned char                                      UnknownDataBISX[0x140];                                    // 0x0280(0x0140) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.WindowsClient");
		return ptr;
	}


};

// Class WinDrv.XnaForceFeedbackManager
// 0x0004 (FullSize[0x0098] - InheritedSize[0x0094])
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:
	unsigned char                                      UnknownDataEGR3[0x18];                                     // 0x0098(0x0018) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.XnaForceFeedbackManager");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
