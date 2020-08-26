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

// Class XAudio2.XAudio2Device
// 0x01EC (FullSize[0x03A4] - InheritedSize[0x01B8])
class UXAudio2Device : public UAudioDevice
{
public:
	unsigned char                                      UnknownDataWRKN[0xBC];                                     // 0x03A4(0x00BC) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class XAudio2.XAudio2Device");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
