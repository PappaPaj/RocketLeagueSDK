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

// Class Core.Object
// 0x0060
class UObject
{
public:
	static TUObjectArray*                              GObjects;                                                  // 0x0000(0x0008)
	void*                                              VfTable;                                                   // 0x0000(0x0008) NOT AUTO-GENERATED PROPERTY
	void*                                              HashNext;                                                  // 0x0008(0x0008) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_O1K4N7JNXU[0x8];                                       // 0x0010(0x0008) NOT AUTO-GENERATED PROPERTY
	void*                                              HashOuterNext;                                             // 0x0018(0x0008) NOT AUTO-GENERATED PROPERTY
	void*                                              StateFrame;                                                // 0x0020(0x0008) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     Linker;                                                    // 0x0028(0x0008) NOT AUTO-GENERATED PROPERTY
	void*                                              LinkerIndex;                                               // 0x0030(0x0008) NOT AUTO-GENERATED PROPERTY
	int                                                InternalIndex;                                             // 0x0038(0x0004) NOT AUTO-GENERATED PROPERTY
	int                                                NetIndex;                                                  // 0x003C(0x0004) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     Outer;                                                     // 0x0040(0x0008) NOT AUTO-GENERATED PROPERTY
	FName                                              Name;                                                      // 0x0048(0x0008) NOT AUTO-GENERATED PROPERTY
	class UClass*                                      Class;                                                     // 0x0050(0x0008) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     ObjectArchetype;                                           // 0x0058(0x0008) NOT AUTO-GENERATED PROPERTY


	static inline TUObjectArray& GetGlobalObjects()
	{
		return *GObjects;
	}

	std::string GetName() const;

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static T* FindObject()
	{
		auto v = T::StaticClass();
		for (int i = 0; i < UFT::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = UFT::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static std::vector<T*> FindObjects(const std::string& name)
	{
		std::vector<T*> ret;
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->GetFullName() == name)
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	template<typename T>
	static std::vector<T*> FindObjects()
	{
		std::vector<T*> ret;
		auto v = T::StaticClass();
		for (int i = 0; i < UFT::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = UFT::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Object");
		return ptr;
	}


	struct FRotator RSmoothInterpTo(const struct FRotator& From, const struct FRotator& To, float Lambda, float DeltaTime);
	struct FVector VSmoothInterpTo(const struct FVector& From, const struct FVector& To, float Lambda, float DeltaTime);
	float FSmoothInterpTo(float From, float To, float Lambda, float DeltaTime);
	float GetSmoothInterpLerpValue(float Lambda, float DeltaTime);
	class UObject* GetTypedOuter(class UClass* ObjClass);
	void MarkPendingKill();
	bool NotNone(class UObject* O);
	void SwapArrayItems();
	void Swap();
	float SumFloat(float Total, float Value);
	int SumInt(int Total, int Value);
	int SortDescendingFloat(float A, float B);
	int SortAscendingFloat(float A, float B);
	int SortDescendingString(const struct FString& A, const struct FString& B);
	int SortAscendingString(const struct FString& A, const struct FString& B);
	int SortDescendingQWORD();
	int SortAscendingQWORD();
	int SortDescendingInt(int A, int B);
	int SortAscendingInt(int A, int B);
	struct FString PadString(const struct FString& Str, int Characters);
	void GetFrameCounter();
	float GetScaledAxisValue(float Value, float Sensitivity, float MaxSensitivity);
	class UObject* GetSingleton(class UClass* ObjClass);
	class UObjectProvider* GetObjectProvider();
	bool IsAutomationTest();
	TEnumAsByte<EEdition> GetEdition();
	bool IsEdition(TEnumAsByte<EEdition> Edition);
	struct FString ToJson();
	void SetRooted(bool bRooted);
	void ProfNodeEvent(const struct FString& EventName);
	void ProfNodeSetDepthThreshold(int Depth);
	void ProfNodeSetTimeThresholdSeconds(float Threshold);
	void ProfNodeStop(int AssumedTimerIndex);
	int ProfNodeStart(const struct FString& TimerName);
	struct FString CreateGuidString();
	struct FString GetStringFromGuid(struct FGuid* InGuid);
	struct FGuid GetGuidFromString(struct FString* InGuidString);
	struct FGuid CreateGuid();
	bool IsGuidValid(struct FGuid* InGuid);
	void InvalidateGuid(struct FGuid* InGuid);
	class UObject* FindStructProperty(class UClass* PropertyClass, const struct FName& PropertyName, const struct FName& StructName);
	class UObject* FindProperty(class UClass* PropertyClass, const struct FName& PropertyName);
	class UObject* DuplicateObject(class UObject* Template, class UObject* ObjOuter, class UClass* DestClass);
	float RunningAverage(float OldAverage, float NewValue, int NewCount);
	float GetCurrentTime();
	struct FLinearColor GetMaxLinearColorBrightness(const struct FLinearColor& C);
	struct FColor GetMaxColorBrightness(const struct FColor& C);
	struct FLinearColor LABtoRGB(const struct FLinearColor& C);
	struct FLinearColor RGBtoLAB(const struct FLinearColor& C);
	struct FLinearColor HSVtoRGB(const struct FLinearColor& C);
	struct FLinearColor RGBtoHSV(const struct FLinearColor& C);
	struct FLinearColor IntToLinearColor(int I);
	struct FColor IntToColor(int I);
	int LinearColorToInt(const struct FLinearColor& C);
	int ColorToInt(const struct FColor& C);
	bool SolveVelocityQuadratic(float Distance, float Speed, float Accel, float* Time);
	float Sign(float X);
	struct FVector2D MakeVector2D(float X, float Y);
	struct FVector VAbs(const struct FVector& V);
	struct FVector MakeVector(float X, float Y, float Z);
	struct FVector FlattenVector(const struct FVector& NormalToFlatten, const struct FVector& PlaneNormal);
	struct FName GetRealArchetypeName();
	struct FString FormatTime(int Seconds);
	class UObject* GetTextArchetype(class UClass* ArchetypeClass, const struct FString& Path);
	bool IsArchetype();
	void UnsubscribeFromAllEvents();
	class UObject* NewInstance(class UObject* ObjOuter, const struct FName& ObjName);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FRotator RotatorFromInt(int RotationPitchAndYaw);
	int RotatorToInt(const struct FRotator& Rotation);
	struct FString GetLanguage();
	int GetRandomOptionSumFrequency(TArray<float>* FreqList);
	int GetBuildChangelistNumber();
	int GetEngineVersion();
	float GetAppSeconds();
	void GetSystemTime(int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec);
	struct FString TimeStamp();
	struct FVector TransformVectorByRotation(const struct FRotator& SourceRotation, const struct FVector& SourceVector, bool bInverse);
	struct FName GetPackageName();
	bool IsPendingKill();
	float RangeByteToFloatUnsigned(unsigned char inputByte);
	float RangeByteToFloatSigned(unsigned char inputByte);
	unsigned char FloatToRangeByteUnsigned(float inputFloat);
	unsigned char FloatToRangeByteSigned(float inputFloat);
	float UnwindHeading(float A);
	float FindDeltaAngle(float A1, float A2);
	float GetHeadingAngle(const struct FVector& Dir);
	void GetAngularDegreesFromRadians(struct FVector2D* OutFOV);
	void GetAngularFromDotDist(struct FVector2D* OutAngDist, const struct FVector2D& DotDist);
	bool GetAngularDistance(struct FVector2D* OutAngularDist, const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ);
	bool GetDotDistance(struct FVector2D* OutDotDist, const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ);
	bool LinePlaneIntersection(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal, struct FVector* Out_Intersection, float* Out_T, bool bCheckLineSegment);
	struct FVector PointProjectToPlane(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C);
	float PointDistToPlane(const struct FVector& Point, const struct FRotator& Orientation, const struct FVector& Origin, struct FVector* out_ClosestPoint);
	float PointDistToSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint, struct FVector* OutClosestPoint);
	float PointDistToLine(const struct FVector& Point, const struct FVector& Line, const struct FVector& Origin, struct FVector* OutClosestPoint);
	void GetPerObjectConfigObjects(class UClass* SearchClass, class UObject** OutObject, class UObject* ObjectOuter, int MaxResults);
	bool GetPerObjectConfigSections(class UClass* SearchClass, TArray<struct FString>* out_SectionNames, class UObject* ObjectOuter, int MaxResults);
	void ImportJSON(const struct FString& PropertyName, struct FString* JSON);
	void StaticSaveConfig();
	void SaveConfig();
	class UObject* LoadSeekFreeObject(class UClass* ObjClass, const struct FString& Path);
	class UObject* FindObject(const struct FString& ObjectName, class UClass* ObjectClass);
	class UObject* DynamicLoadObject(const struct FString& ObjectName, class UClass* ObjectClass, bool MayFail);
	int EnumFromString(class UObject* E, const struct FName& ValueName);
	struct FName GetEnum(class UObject* E, int I);
	void Disable(const struct FName& ProbeFunc);
	void Enable(const struct FName& ProbeFunc);
	void ContinuedState();
	void PausedState();
	void PoppedState();
	void PushedState();
	void EndState(const struct FName& NextStateName);
	void BeginState(const struct FName& PreviousStateName);
	void DumpStateStack();
	void PopState(bool bPopAll);
	void PushState(const struct FName& NewState, const struct FName& NewLabel);
	struct FName GetStateName();
	bool IsChildState(const struct FName& TestState, const struct FName& TestParentState);
	bool IsInState(const struct FName& TestState, bool bTestStateStack);
	void GotoState(const struct FName& NewState, const struct FName& Label, bool bForceEvents, bool bKeepStack);
	bool IsUTracing();
	void SetUTracing(bool bShouldUTrace);
	struct FName GetFuncName();
	void DebugBreak(int UserFlags, TEnumAsByte<EDebugBreakType> DebuggerType);
	struct FString GetScriptTrace();
	void ScriptTrace();
	struct FString ParseLocalizedPropertyPath(const struct FString& PathName);
	struct FString Localize(const struct FString& SectionName, const struct FString& KeyName, const struct FString& PackageName, bool bOptional);
	void WarnInternal(const struct FString& S);
	void LogInternal(const struct FString& S, const struct FName& Tag, bool bFileOnly);
	struct FLinearColor LinearColorLerp(const struct FLinearColor& ColorA, const struct FLinearColor& ColorB, float Alpha);
	struct FLinearColor Subtract_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B);
	struct FLinearColor Multiply_LinearColorFloat(const struct FLinearColor& LC, float Mult);
	struct FLinearColor ConvertFromSRGB(const struct FLinearColor& OldColor);
	struct FColor LinearColorToColor(const struct FLinearColor& OldColor);
	struct FLinearColor ColorToLinearColor(const struct FColor& OldColor);
	struct FLinearColor MakeLinearColor(float R, float G, float B, float A);
	struct FColor LerpColor(const struct FColor& A, const struct FColor& B, float Alpha);
	struct FColor MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A);
	struct FColor Add_ColorColor(const struct FColor& A, const struct FColor& B);
	struct FColor Multiply_ColorFloat(const struct FColor& A, float B);
	struct FColor Multiply_FloatColor(float A, const struct FColor& B);
	struct FColor Subtract_ColorColor(const struct FColor& A, const struct FColor& B);
	struct FVector2D EvalInterpCurveVector2D(struct FInterpCurveVector2D* Vector2DCurve, float InVal);
	void AutoSetTangentsVector(struct FInterpCurveVector* Curve);
	struct FVector EvalInterpCurveVector(struct FInterpCurveVector* VectorCurve, float InVal);
	void AutoSetTangentsFloat(struct FInterpCurveFloat* Curve);
	float EvalInterpCurveFloat(struct FInterpCurveFloat* FloatCurve, float InVal);
	struct FVector2D vect2d(float InX, float InY);
	float GetMappedRangeValue(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value);
	float GetRangePctByValue(const struct FVector2D& Range, float Value);
	float GetRangeValueByPct(const struct FVector2D& Range, float Pct);
	struct FVector2D V2DNormal(const struct FVector2D& A);
	float V2DSizeSq(const struct FVector2D& A);
	float V2DSize(const struct FVector2D& A);
	float Dot_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D SubtractEqual_Vector2DVector2D(struct FVector2D* A, const struct FVector2D& B);
	struct FVector2D AddEqual_Vector2DVector2D(struct FVector2D* A, const struct FVector2D& B);
	struct FVector2D DivideEqual_Vector2DFloat(struct FVector2D* A, float B);
	struct FVector2D MultiplyEqual_Vector2DFloat(struct FVector2D* A, float B);
	struct FVector2D Divide_Vector2DFloat(const struct FVector2D& A, float B);
	struct FVector2D Multiply_Vector2DFloat(const struct FVector2D& A, float B);
	struct FVector2D Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FQuat Subtract_QuatQuat(const struct FQuat& A, const struct FQuat& B);
	struct FQuat Add_QuatQuat(const struct FQuat& A, const struct FQuat& B);
	struct FQuat QuatSlerp(const struct FQuat& A, const struct FQuat& B, float Alpha, bool bShortestPath);
	struct FRotator QuatToRotator(const struct FQuat& A);
	struct FQuat QuatFromRotator(const struct FRotator& A);
	struct FQuat QuatFromAxisAndAngle(const struct FVector& Axis, float Angle);
	struct FQuat QuatFindBetween(const struct FVector& A, const struct FVector& B);
	struct FVector QuatRotateVector(const struct FQuat& A, const struct FVector& B);
	struct FQuat QuatInvert(const struct FQuat& A);
	float QuatDot(const struct FQuat& A, const struct FQuat& B);
	struct FQuat QuatProduct(const struct FQuat& A, const struct FQuat& B);
	struct FVector MatrixGetAxis(const struct FMatrix& TM, TEnumAsByte<EAxis> Axis);
	struct FVector MatrixGetOrigin(const struct FMatrix& TM);
	struct FRotator MatrixGetRotator(const struct FMatrix& TM);
	struct FMatrix MakeRotationMatrix(const struct FRotator& Rotation);
	struct FMatrix MakeRotationTranslationMatrix(const struct FVector& Translation, const struct FRotator& Rotation);
	struct FVector InverseTransformNormal(const struct FMatrix& TM, const struct FVector& A);
	struct FVector TransformNormal(const struct FMatrix& TM, const struct FVector& A);
	struct FVector InverseTransformVector(const struct FMatrix& TM, const struct FVector& A);
	struct FVector TransformVector(const struct FMatrix& TM, const struct FVector& A);
	struct FMatrix Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B);
	bool NotEqual_NameName(const struct FName& A, const struct FName& B);
	bool EqualEqual_NameName(const struct FName& A, const struct FName& B);
	bool IsA(const struct FName& ClassName);
	bool ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	bool NotEqual_InterfaceInterface(const TScriptInterface<class UInterface>& A, const TScriptInterface<class UInterface>& B);
	bool EqualEqual_InterfaceInterface(const TScriptInterface<class UInterface>& A, const TScriptInterface<class UInterface>& B);
	bool NotEqual_ObjectObject(class UObject* A, class UObject* B);
	bool EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	struct FString GetPathName();
	struct FString PathName(class UObject* CheckObject);
	TArray<struct FString> SplitString(const struct FString& Source, const struct FString& Delimiter, bool bCullEmpty);
	void ParseStringIntoArray(const struct FString& BaseString, TArray<struct FString>* Pieces, const struct FString& delim, bool bCullEmpty);
	bool ContainsWhitespace(const struct FString& Text);
	struct FString RepeatString(const struct FString& InValue, int Count);
	struct FString JoinArrayQWord(const struct FString& delim, bool bIgnoreBlanks);
	struct FString JoinArrayInt(TArray<int>* IntArray, const struct FString& delim, bool bIgnoreBlanks);
	struct FString JoinArrayName(TArray<struct FName>* NameArray, const struct FString& delim, bool bIgnoreBlanks);
	struct FString JoinArrayStr(TArray<struct FString>* StringArray, const struct FString& delim, bool bIgnoreBlanks);
	void JoinArray(TArray<struct FString>* StringArray, struct FString* out_Result, const struct FString& delim, bool bIgnoreBlanks);
	struct FString GetRightMost(const struct FString& Text);
	struct FString Split(const struct FString& Text, const struct FString& SplitStr, bool bOmitSplitStr);
	struct FString Trim(const struct FString& Src);
	struct FString Repl(const struct FString& Src, const struct FString& Match, const struct FString& With, bool bCaseSensitive);
	int Asc(const struct FString& S);
	struct FString Chr(int I);
	struct FString Locs(const struct FString& S);
	struct FString Caps(const struct FString& S);
	struct FString Right(const struct FString& S, int I);
	struct FString Left(const struct FString& S, int I);
	struct FString Mid(const struct FString& S, int I, int J);
	int InStr(const struct FString& S, const struct FString& T, bool bSearchFromRight, bool bIgnoreCase, int StartPos);
	int Len(const struct FString& S);
	struct FString SubtractEqual_StrStr(struct FString* A, const struct FString& B);
	struct FString AtEqual_StrStr(struct FString* A, const struct FString& B);
	struct FString ConcatEqual_StrStr(struct FString* A, const struct FString& B);
	bool ComplementEqual_StrStr(const struct FString& A, const struct FString& B);
	bool NotEqual_StrStr(const struct FString& A, const struct FString& B);
	bool EqualEqual_StrStr(const struct FString& A, const struct FString& B);
	bool GreaterEqual_StrStr(const struct FString& A, const struct FString& B);
	bool LessEqual_StrStr(const struct FString& A, const struct FString& B);
	bool Greater_StrStr(const struct FString& A, const struct FString& B);
	bool Less_StrStr(const struct FString& A, const struct FString& B);
	struct FString At_StrStr(const struct FString& A, const struct FString& B);
	struct FString Concat_StrStr(const struct FString& A, const struct FString& B);
	struct FRotator RotateRotator(const struct FVector& Axis, const struct FRotator& Rot, const struct FRotator& Direction, float Amount);
	struct FQuat MakeQuat(float X, float Y, float Z, float W);
	struct FRotator MakeRotator(int Pitch, int Yaw, int Roll);
	bool SClampRotAxis(float DeltaTime, int ViewAxis, int* out_DeltaViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed);
	int ClampRotAxisFromRange(int Current, int Min, int Max);
	int ClampRotAxisFromBase(int Current, int Center, int MaxDelta);
	void ClampRotAxis(int ViewAxis, int* out_DeltaViewAxis, int MaxLimit, int MinLimit);
	struct FRotator FlattenRotatorOnAxis(const struct FVector& AxisToRemove, const struct FRotator& RotToFlatten, const struct FRotator& RotToFlattenTo);
	float RSize(const struct FRotator& R);
	float RDiff(const struct FRotator& A, const struct FRotator& B);
	int NormalizeRotAxis(int Angle);
	struct FRotator RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, bool bConstantInterpSpeed);
	struct FRotator RTransform(const struct FRotator& R, const struct FRotator& RBasis);
	struct FRotator RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath);
	struct FRotator Normalize(const struct FRotator& Rot);
	struct FRotator OrthoRotation(const struct FVector& X, const struct FVector& Y, const struct FVector& Z);
	struct FRotator RotRand(bool bRoll);
	struct FVector GetRotatorAxis(const struct FRotator& A, int Axis);
	void GetUnAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	void GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	bool ClockwiseFrom_IntInt(int A, int B);
	struct FRotator SubtractEqual_RotatorRotator(struct FRotator* A, const struct FRotator& B);
	struct FRotator AddEqual_RotatorRotator(struct FRotator* A, const struct FRotator& B);
	struct FRotator Subtract_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	struct FRotator Add_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	struct FRotator DivideEqual_RotatorFloat(struct FRotator* A, float B);
	struct FRotator MultiplyEqual_RotatorFloat(struct FRotator* A, float B);
	struct FRotator Divide_RotatorFloat(const struct FRotator& A, float B);
	struct FRotator Multiply_FloatRotator(float A, const struct FRotator& B);
	struct FRotator Multiply_RotatorFloat(const struct FRotator& A, float B);
	bool NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	bool EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	float GetRadiansBetweenVectors(const struct FVector& V0, const struct FVector& v1);
	struct FVector VClamp(const struct FVector& A, const struct FVector& Min, const struct FVector& Max);
	struct FVector vect3d(float X, float Y, float Z);
	bool InCylinder(const struct FVector& Origin, const struct FRotator& Dir, float Width, const struct FVector& A, bool bIgnoreZ);
	float NoZDot(const struct FVector& A, const struct FVector& B);
	struct FVector ClampLength(const struct FVector& V, float MaxLength);
	struct FVector VInterpConstantTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	struct FVector VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	void Construct();
	struct FVector ProjectOnToPlane(const struct FVector& InVector, const struct FVector& InNormal, float OverBounce);
	bool IsZero(const struct FVector& A);
	struct FVector ProjectOnTo(const struct FVector& X, const struct FVector& Y);
	struct FVector MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal);
	struct FVector VRandCone2(const struct FVector& Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians);
	struct FVector VRandCone(const struct FVector& Dir, float ConeHalfAngleRadians);
	struct FVector VRand();
	struct FVector VLerp(const struct FVector& A, const struct FVector& B, float Alpha);
	struct FVector Normal2D(const struct FVector& A);
	struct FVector Normal(const struct FVector& A);
	float VSizeSq2D(const struct FVector& A);
	float VSizeSq(const struct FVector& A);
	float VSize2D(const struct FVector& A);
	float VSize(const struct FVector& A);
	struct FVector SubtractEqual_VectorVector(struct FVector* A, const struct FVector& B);
	struct FVector AddEqual_VectorVector(struct FVector* A, const struct FVector& B);
	struct FVector DivideEqual_VectorFloat(struct FVector* A, float B);
	struct FVector MultiplyEqual_VectorVector(struct FVector* A, const struct FVector& B);
	struct FVector MultiplyEqual_VectorFloat(struct FVector* A, float B);
	struct FVector Cross_VectorVector(const struct FVector& A, const struct FVector& B);
	float Dot_VectorVector(const struct FVector& A, const struct FVector& B);
	bool NotEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	bool EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B);
	struct FVector LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B);
	struct FVector Subtract_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Add_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Divide_VectorFloat(const struct FVector& A, float B);
	struct FVector Multiply_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Multiply_FloatVector(float A, const struct FVector& B);
	struct FVector Multiply_VectorFloat(const struct FVector& A, float B);
	struct FVector Subtract_PreVector(const struct FVector& A);
	float FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float FPctByRange(float Value, float InMin, float InMax);
	float RandSign(float Value);
	struct FVector CalculateGravityPosition(const struct FVector& Location, const struct FVector& Velocity, float Gravity, float Time, const struct FVector& GravityDirection);
	float RandRange(float InMin, float InMax);
	float FInterpEaseInOut(float A, float B, float Alpha, float Exp);
	float FInterpEaseOut(float A, float B, float Alpha, float Exp);
	float FInterpEaseIn(float A, float B, float Alpha, float Exp);
	float FCubicInterp(float P0, float T0, float P1, float T1, float A);
	int FloorLog2(int Value);
	int FCeil(float A);
	int FFloor(float A);
	int Round(float A);
	float Lerp(float A, float B, float Alpha);
	float FClamp(float V, float A, float B);
	float FMax(float A, float B);
	float FMin(float A, float B);
	float FRand();
	float Square(float A);
	float Sqrt(float A);
	float Loge(float A);
	float Exp(float A);
	float Atan2(float A, float B);
	float Atan(float A);
	float Tan(float A);
	float Acos(float A);
	float Cos(float A);
	float Asin(float A);
	float Sin(float A);
	float Abs(float A);
	float SubtractEqual_FloatFloat(float* A, float B);
	float AddEqual_FloatFloat(float* A, float B);
	float DivideEqual_FloatFloat(float* A, float B);
	float MultiplyEqual_FloatFloat(float* A, float B);
	bool NotEqual_FloatFloat(float A, float B);
	bool ComplementEqual_FloatFloat(float A, float B);
	bool EqualEqual_FloatFloat(float A, float B);
	bool GreaterEqual_FloatFloat(float A, float B);
	bool LessEqual_FloatFloat(float A, float B);
	bool Greater_FloatFloat(float A, float B);
	bool Less_FloatFloat(float A, float B);
	float Subtract_FloatFloat(float A, float B);
	float Add_FloatFloat(float A, float B);
	float Percent_FloatFloat(float A, float B);
	float Divide_FloatFloat(float A, float B);
	float Multiply_FloatFloat(float A, float B);
	float MultiplyMultiply_FloatFloat(float Base, float Exp);
	float Subtract_PreFloat(float A);
	struct FString ToHex(int A);
	int Clamp(int V, int A, int B);
	int Max(int A, int B);
	int Min(int A, int B);
	int Rand(int Max);
	struct FColor FromHexColor(const struct FString& Hex);
	int FromHex(const struct FString& Hex);
	void QMin();
	void QMax();
	void QSubtract();
	bool NotEqual_QWordInt(int B);
	bool EqualEqual_QWordInt(int B);
	bool NotEqual_QWordQWord();
	bool EqualEqual_QWordQWord();
	bool GreaterEqual_QWordQWord();
	bool LessEqual_QWordQWord();
	bool Greater_QWordQWord();
	bool Less_QWordQWord();
	int Subtract_QWordQWord();
	void Add_QWordQWord();
	int SubtractSubtract_Int(int* A);
	int AddAdd_Int(int* A);
	int SubtractSubtract_PreInt(int* A);
	int AddAdd_PreInt(int* A);
	int SubtractEqual_IntInt(int* A, int B);
	int AddEqual_IntInt(int* A, int B);
	int DivideEqual_IntFloat(int* A, float B);
	int MultiplyEqual_IntFloat(int* A, float B);
	int Or_IntInt(int A, int B);
	int Xor_IntInt(int A, int B);
	int And_IntInt(int A, int B);
	bool NotEqual_IntInt(int A, int B);
	bool EqualEqual_IntInt(int A, int B);
	bool GreaterEqual_IntInt(int A, int B);
	bool LessEqual_IntInt(int A, int B);
	bool Greater_IntInt(int A, int B);
	bool Less_IntInt(int A, int B);
	int GreaterGreaterGreater_IntInt(int A, int B);
	int GreaterGreater_IntInt(int A, int B);
	int LessLess_IntInt(int A, int B);
	int Subtract_IntInt(int A, int B);
	int Add_IntInt(int A, int B);
	int Percent_IntInt(int A, int B);
	int Divide_IntInt(int A, int B);
	int Multiply_IntInt(int A, int B);
	int Subtract_PreInt(int A);
	int Complement_PreInt(int A);
	unsigned char SubtractSubtract_Byte(unsigned char* A);
	unsigned char AddAdd_Byte(unsigned char* A);
	unsigned char SubtractSubtract_PreByte(unsigned char* A);
	unsigned char AddAdd_PreByte(unsigned char* A);
	unsigned char SubtractEqual_ByteByte(unsigned char* A, unsigned char B);
	unsigned char AddEqual_ByteByte(unsigned char* A, unsigned char B);
	unsigned char DivideEqual_ByteByte(unsigned char* A, unsigned char B);
	unsigned char MultiplyEqual_ByteFloat(unsigned char* A, float B);
	unsigned char MultiplyEqual_ByteByte(unsigned char* A, unsigned char B);
	bool OrOr_BoolBool(bool A, bool B);
	bool XorXor_BoolBool(bool A, bool B);
	bool AndAnd_BoolBool(bool A, bool B);
	bool NotEqual_BoolBool(bool A, bool B);
	bool EqualEqual_BoolBool(bool A, bool B);
	bool Not_PreBool(bool A);
};

// Class Core.Config_ORS
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UConfig_ORS : public UObject
{
public:
	unsigned char                                      UnknownDataUK33[0x60];                                     // 0x0060(0x0060) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Config_ORS");
		return ptr;
	}


};

// Class Core.ClassTupleCollection_ORS
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UClassTupleCollection_ORS : public UObject
{
public:
	unsigned char                                      UnknownData1OIW[0x60];                                     // 0x0060(0x0060) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ClassTupleCollection_ORS");
		return ptr;
	}


};

// Class Core.Component
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                                        // 0x0060(0x0008) (Const, Native)
	struct FName                                       TemplateName;                                              // 0x0068(0x0008) (Const, Native)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Component");
		return ptr;
	}


};

// Class Core.ClassTuple_ORS
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UClassTuple_ORS : public UObject
{
public:
	unsigned char                                      UnknownData46Z5[0x68];                                     // 0x0060(0x0068) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ClassTuple_ORS");
		return ptr;
	}


};

// Class Core.SubscriptionCollection_ORS
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class USubscriptionCollection_ORS : public UObject
{
public:
	unsigned char                                      UnknownDataBJZM[0x20];                                     // 0x0060(0x0020) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.SubscriptionCollection_ORS");
		return ptr;
	}


};

// Class Core.Group_ORS
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UGroup_ORS : public UScriptGroup_ORS
{
public:
	unsigned char                                      UnknownData7QMF[0xD0];                                     // 0x0068(0x00D0) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Group_ORS");
		return ptr;
	}


};

// Class Core.DistributionFloat
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                                 // 0x0070(0x0008) (Const, Native, NoExport)
	unsigned char                                      bCanBeBaked : 1;                                           // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataANMM[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIsDirty : 1;                                              // 0x0078(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataRVEG[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DistributionFloat");
		return ptr;
	}


	float GetFloatValue(float F);
};

// Class Core.Instance_ORS
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UInstance_ORS : public UObject
{
public:
	unsigned char                                      UnknownDataJBZH[0xB0];                                     // 0x0060(0x00B0) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Instance_ORS");
		return ptr;
	}


};

// Class Core.Global_ORS
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UGlobal_ORS : public UObject
{
public:
	unsigned char                                      UnknownData96UY[0x18];                                     // 0x0060(0x0018) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Global_ORS");
		return ptr;
	}


};

// Class Core.UTF8
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UUTF8 : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.UTF8");
		return ptr;
	}


	void DecodeInline(TArray<unsigned char>* Input, struct FString* Output);
	struct FString Decode(TArray<unsigned char>* Input);
	void EncodeInline(const struct FString& Input, TArray<unsigned char>* Output);
	TArray<unsigned char> Encode(const struct FString& Input);
};

// Class Core.AsyncTask
// 0x003C (FullSize[0x009C] - InheritedSize[0x0060])
class UAsyncTask : public UObject
{
public:
	unsigned char                                      bComplete : 1;                                             // 0x0060(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownData7W73[0x2];                                      // 0x0060(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bDisposed : 1;                                             // 0x0060(0x0001) BIT_FIELD (PrivateWrite)
	unsigned char                                      UnknownDataK6NL[0x2];                                      // 0x0064(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataUZU9[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	class UError*                                      Error;                                                     // 0x0068(0x0008) (PrivateWrite)
	struct FScriptDelegate                             __EventAsyncTaskSuccess__Delegate;                         // 0x0070(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData5EYD[0xC];                                      // 0x0070(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAsyncTaskFail__Delegate;                            // 0x0088(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataILJ0[0xC];                                      // 0x0088(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventAsyncTaskComplete__Delegate;                        // 0x00A0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataLNND[0xC];                                      // 0x00A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __EventDisposed__Delegate;                                 // 0x00B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataP6WH[0xC];                                      // 0x00B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.AsyncTask");
		return ptr;
	}


	void QueCallbacks();
	class UAsyncTask* CreateError(class UError* InError);
	class UAsyncTask* CreateSuccess();
	class UAsyncTask* Create();
	class UAsyncTask* All(TArray<class UAsyncTask*> Dependents);
	class UAsyncTask* DependOn(class UAsyncTask* Other);
	class UAsyncTask* NotifyOnDispose(const struct FScriptDelegate& Callback);
	void ClearCallbacks();
	void Dispose();
	void SetComplete(class UError* InError);
	void SetError(class UError* InError);
	class UAsyncTask* NotifyOnComplete(const struct FScriptDelegate& Callback);
	class UAsyncTask* NotifyOnFail(const struct FScriptDelegate& Callback);
	class UAsyncTask* NotifyOnSuccess(const struct FScriptDelegate& Callback);
	void EventDisposed();
	void EventAsyncTaskComplete(class UError* TaskError);
	void EventAsyncTaskFail(class UError* TaskError);
	void EventAsyncTaskSuccess();
};

// Class Core.TextBuffer
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownDataYJEG[0x30];                                     // 0x0060(0x0030) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.TextBuffer");
		return ptr;
	}


};

// Class Core.TAsyncResult
// 0x0034 (FullSize[0x00D0] - InheritedSize[0x009C])
class UTAsyncResult : public UAsyncTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.TAsyncResult");
		return ptr;
	}


};

// Class Core.Subsystem
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                             // 0x0060(0x0008) (Const, Native, NoExport)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Subsystem");
		return ptr;
	}


};

// Class Core.DistributionVector
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                                 // 0x0070(0x0008) (Const, Native, NoExport)
	unsigned char                                      bCanBeBaked : 1;                                           // 0x0078(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataMO5T[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bIsDirty : 1;                                              // 0x0078(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataI3NO[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DistributionVector");
		return ptr;
	}


	struct FVector GetVectorValue(float F, int LastExtreme);
};

// Class Core._Types_Core
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class U_Types_Core : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core._Types_Core");
		return ptr;
	}


};

// Class Core.System
// 0x0004 (FullSize[0x006C] - InheritedSize[0x0068])
class USystem : public USubsystem
{
public:
	unsigned char                                      UnknownDataNOZ3[0x58];                                     // 0x0068(0x0058) MISSED OFFSET
	TArray<struct FString>                             SeekFreePCPaths;                                           // 0x00C0(0x0010) (Config, NeedCtorLink)
	unsigned char                                      UnknownDataPQEL[0x60];                                     // 0x00D0(0x0060) MISSED OFFSET
	TArray<struct FString>                             SeekFreePCExtensions;                                      // 0x0130(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             CutdownPaths;                                              // 0x00F0(0x0010) (Config, NeedCtorLink)
	unsigned char                                      UnknownData0U79[0x40];                                     // 0x0100(0x0040) MISSED OFFSET
	TArray<struct FString>                             LocalizationPaths;                                         // 0x0140(0x0010) (Config, NeedCtorLink)
	struct FString                                     TextureFileCacheExtension;                                 // 0x0150(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             Extensions;                                                // 0x0120(0x0010) (Config, NeedCtorLink)
	TArray<struct FName>                               SuppressPublic;                                            // 0x0110(0x0010) (Config, NeedCtorLink)
	TArray<struct FName>                               Suppress;                                                  // 0x0100(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             FRScriptPaths;                                             // 0x00E0(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             ScriptPaths;                                               // 0x00D0(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             Paths;                                                     // 0x00B0(0x0010) (Config, NeedCtorLink)
	struct FString                                     CacheExt;                                                  // 0x00A0(0x0010) (Config, NeedCtorLink)
	struct FString                                     CachePath;                                                 // 0x0090(0x0010) (Config, NeedCtorLink)
	struct FString                                     SavePath;                                                  // 0x0080(0x0010) (Config, NeedCtorLink)
	float                                              AsyncIOBandwidthLimit;                                     // 0x0078(0x0004) (Config)
	int                                                PackageSizeSoftLimit;                                      // 0x0074(0x0004) (Config)
	int                                                MaxOverallCacheSize;                                       // 0x0070(0x0004) (Config)
	int                                                MaxStaleCacheSize;                                         // 0x006C(0x0004) (Config)
	int                                                StaleCacheDays;                                            // 0x0068(0x0004) (Config)
	unsigned char                                      UnknownDataCCN0[0xF4];                                     // 0x006C(0x00F4) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.System");
		return ptr;
	}


};

// Class Core.Delegates
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UDelegates : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Delegates");
		return ptr;
	}


};

// Class Core.Subscription
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class USubscription : public UObject
{
public:
	struct FScriptDelegate                             __SubscriberCallback__Delegate;                            // 0x0060(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData8H7L[0xC];                                      // 0x0060(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Subscription");
		return ptr;
	}


	void __Subscription__TriggerAll_2026362E4CC3F678790172BAD7A37655(class USubscription* S);
	class USubscription* GetNone();
	void TriggerAll(TArray<class USubscription*>* Subscriptions);
	class USubscription* Create(const struct FScriptDelegate& InCallback);
	void Dispose();
	void TriggerCallback();
	void SetCallback(const struct FScriptDelegate& InCallback);
	void SubscriberCallback();
};

// Class Core.PropertyChangeDispatcher
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPropertyChangeDispatcher : public UObject
{
public:
	unsigned char                                      UnknownData9XQH[0x10];                                     // 0x0060(0x0010) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.PropertyChangeDispatcher");
		return ptr;
	}


};

// Class Core._Types_Generated
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class U_Types_Generated : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core._Types_Generated");
		return ptr;
	}


};

// Class Core.PackageMap
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownDataE2Q1[0xB0];                                     // 0x0060(0x00B0) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.PackageMap");
		return ptr;
	}


};

// Class Core.DelegateTracker
// 0x001C (FullSize[0x007C] - InheritedSize[0x0060])
class UDelegateTracker : public UObject
{
public:
	TArray<struct FAsyncDelegateInfo>                  AsyncDelegates;                                            // 0x0060(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __PlaceholderDelegate__Delegate;                           // 0x0070(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataQ5RG[0xC];                                      // 0x0070(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DelegateTracker");
		return ptr;
	}


	struct FScriptDelegate RemoveDelegate(int CallbackId);
	int AddDelegate(const struct FScriptDelegate& Callback);
	void PlaceholderDelegate();
};

// Class Core.ObjectUtil
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UObjectUtil : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectUtil");
		return ptr;
	}


	bool IdenticalDeep(class UObject* Left, class UObject* Right);
	bool Identical(class UObject* Left, class UObject* Right);
	void InitProperties(class UObject* InObject);
	void AllCDOs(class UClass* BaseClass, class UObject** OutCDO, bool bIncludeAbstract);
	class UObject* GetCDO(class UClass* InClass);
};

// Class Core.ObjectSerializer
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownDataR91T[0x10];                                     // 0x0060(0x0010) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectSerializer");
		return ptr;
	}


};

// Class Core.ObjectRedirector
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownDataHKB5[0x8];                                      // 0x0060(0x0008) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectRedirector");
		return ptr;
	}


};

// Class Core.MetaData
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownDataEB02[0x50];                                     // 0x0060(0x0050) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.MetaData");
		return ptr;
	}


};

// Class Core.Linker
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownDataKKTT[0x188];                                    // 0x0060(0x0188) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Linker");
		return ptr;
	}


};

// Class Core.LinkerSave
// 0x0188 (FullSize[0x01E8] - InheritedSize[0x0060])
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownDataZCOK[0xC0];                                     // 0x01E8(0x00C0) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LinkerSave");
		return ptr;
	}


};

// Class Core.LinkerLoad
// 0x0188 (FullSize[0x01E8] - InheritedSize[0x0060])
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownDataY2Y6[0x628];                                    // 0x01E8(0x0628) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LinkerLoad");
		return ptr;
	}


};

// Class Core.Interface
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UInterface : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Interface");
		return ptr;
	}


};

// Class Core.FileSystem
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UFileSystem : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.FileSystem");
		return ptr;
	}


	void CloseLogFile();
	struct FString GetLogFileName();
	bool DeleteDirectoryTree(const struct FString& Path);
	bool DeleteFile(const struct FString& Path);
	bool AppendStringToFile(const struct FString& Path, const struct FString& Text);
	bool SaveStringToFile(const struct FString& Path, const struct FString& Text);
	bool SaveBytesToFile(const struct FString& Path, TArray<unsigned char>* Bytes);
	bool LoadFileToBytes(const struct FString& Path, TArray<unsigned char>* OutBytes, int StartOffset, int Length);
	bool LoadFileToString(const struct FString& Path, struct FString* OutText);
	int GetFileSize(const struct FString& Path);
	struct FString GetFileExtensionWithoutDot(const struct FString& Path);
	struct FString GetFileExtension(const struct FString& Path);
	struct FString GetFilePathWithoutExtension(const struct FString& Path);
	struct FString GetFileNameWithoutExtension(const struct FString& Path);
	struct FString GetFilename(const struct FString& Path);
	void FindFiles(const struct FString& Path, TArray<struct FString>* OutFilenames);
};

// Class Core._LoggingDoc
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class U_LoggingDoc : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core._LoggingDoc");
		return ptr;
	}


	void TestSpecialLogging();
};

// Class Core.Field
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UField : public UObject
{
public:
	class UField*                                      Next;                                                      // 0x0060(0x0008) NOT AUTO-GENERATED PROPERTY
	void*                                              pad_OCPBZ8ZLCO;                                            // 0x0068(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Field");
		return ptr;
	}


};

// Class Core.Struct
// 0x00C0 (FullSize[0x0130] - InheritedSize[0x0070])
class UStruct : public UField
{
public:
	void*                                              pad_PUV8JPDVWL;                                            // 0x0070(0x0008) NOT AUTO-GENERATED PROPERTY
	void*                                              pad_OF48WVF0O4;                                            // 0x0078(0x0008) NOT AUTO-GENERATED PROPERTY
	class UField*                                      SuperField;                                                // 0x0080(0x0008) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                  // 0x0088(0x0008) NOT AUTO-GENERATED PROPERTY
	int                                                PropertySize;                                              // 0x0090(0x0004) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_R8G36WH2VM[0x20];                                      // 0x0094(0x0020) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Struct");
		return ptr;
	}


};

// Class Core.ScriptStruct
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownDataUOS3[0x28];                                     // 0x0130(0x0028) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ScriptStruct");
		return ptr;
	}


};

// Class Core.Function
// 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
class UFunction : public UStruct
{
public:
	int32_t                                            FunctionFlags;                                             // 0x00B4(0x0004) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RepOffset;                                                 // 0x00B8(0x0002) NOT AUTO-GENERATED PROPERTY
	int8_t                                             NumParms;                                                  // 0x00BA(0x0001) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_MXJWRJOS7D[0x01];                                      // 0x00BB(0x0001) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ParmsSize;                                                 // 0x00BC(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           ReturnValueOffset;                                         // 0x00BE(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           RPCId;                                                     // 0x00C0(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           RPCResponseId;                                             // 0x00C2(0x0002) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   FirstPropertyToInit;                                       // 0x00C4(0x0008) NOT AUTO-GENERATED PROPERTY
	class UFunction*                                   EventGraphFunction;                                        // 0x00CC(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            EventGraphCallOffset;                                      // 0x00D4(0x0004) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_BDJG77VH0J[0x04];                                      // 0x00D8(0x0004) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                      // 0x00DC(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Function");
		return ptr;
	}


};

// Class Core.Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UProperty : public UField
{
public:
	unsigned char                                      UnknownDataSIQC[0x58];                                     // 0x0070(0x0058) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Property");
		return ptr;
	}


};

// Class Core.StructProperty
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData1JAB[0x8];                                      // 0x00C8(0x0008) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StructProperty");
		return ptr;
	}


};

// Class Core.StrProperty
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UStrProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StrProperty");
		return ptr;
	}


};

// Class Core.QWordProperty
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UQWordProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.QWordProperty");
		return ptr;
	}


};

// Class Core.ObjectProperty
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UObjectProperty : public UProperty
{
public:
	unsigned char                                      UnknownDataUXDH[0x10];                                     // 0x00C8(0x0010) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectProperty");
		return ptr;
	}


};

// Class Core.ComponentProperty
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UComponentProperty : public UObjectProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ComponentProperty");
		return ptr;
	}


};

// Class Core.ClassProperty
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownDataHJZW[0x8];                                      // 0x00D8(0x0008) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ClassProperty");
		return ptr;
	}


};

// Class Core.ObjectProvider
// 0x013C (FullSize[0x01AC] - InheritedSize[0x0070])
class UObjectProvider : public UComponent
{
public:
	struct FPointer                                    VfTable_FObjectDestructionSubscriber;                      // 0x0070(0x0008) (Const, Native, NoExport)
	TArray<class UObject*>                             MyObjects;                                                 // 0x0078(0x0010) (Const, Transient, NeedCtorLink, PrivateWrite)
	struct FMap_Mirror                                 ObjectRefs;                                                // 0x0088(0x0050) (Const, Native, Transient)
	TArray<class UObject*>                             TreeObjects;                                               // 0x00D8(0x0010) (Const, Transient, NeedCtorLink)
	TArray<struct FObjectProviderSubscription>         SubscribedToAdds;                                          // 0x00E8(0x0010) (Const, Transient, NeedCtorLink)
	TArray<struct FObjectProviderSubscription>         SubscribedToRemoves;                                       // 0x00F8(0x0010) (Const, Transient, NeedCtorLink)
	TArray<struct FObjectProviderSubscription>         SubscribedToLists;                                         // 0x0108(0x0010) (Const, Transient, NeedCtorLink)
	struct FArray_Mirror                               Injections;                                                // 0x0118(0x0010) (Const, Native, Transient)
	TArray<class UClass*>                              PendingInjectionClasses;                                   // 0x0128(0x0010) (Const, Transient, NeedCtorLink)
	TArray<struct FObjectProviderPendingCallback>      PendingCallbacks;                                          // 0x0138(0x0010) (Const, Transient, NeedCtorLink)
	unsigned char                                      bTriggeringCallbacks;                                      // 0x0148(0x0001) (Const, Transient)
	unsigned char                                      UnknownDataFISS[0x7];                                      // 0x0149(0x0007) MISSED OFFSET
	class UObjectProvider*                             Parent;                                                    // 0x0150(0x0008) (Const, ExportObject, Transient, Component, EditInline)
	TArray<class UObjectProvider*>                     Children;                                                  // 0x0158(0x0010) (Const, ExportObject, Transient, Component, NeedCtorLink, EditInline)
	TArray<class UObjectProvider*>                     Proxies;                                                   // 0x0168(0x0010) (Const, ExportObject, Transient, Component, NeedCtorLink, EditInline)
	TArray<struct FObjectProviderPendingCallback>      PendingInjectionCallbacks;                                 // 0x0178(0x0010) (Const, Transient, NeedCtorLink)
	struct FScriptDelegate                             __ObjectSubscriptionCallback__Delegate;                    // 0x0188(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataQMVY[0xC];                                      // 0x0188(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ObjectListSubscriptionCallback__Delegate;                // 0x01A0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataK5LN[0xC];                                      // 0x01A0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __ObjectChangeCallback__Delegate;                          // 0x01B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataL2PO[0xC];                                      // 0x01B8(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectProvider");
		return ptr;
	}


	void SetParent(class UObjectProvider* InParent);
	void RemoveProxy(class UObjectProvider* InProxy);
	void AddProxy(class UObjectProvider* InProxy);
	void SetSingleton(class UClass* ObjClass, class UObject* Replacement);
	void Replace(class UObject* Existing, class UObject* Replacement);
	void AddAndRemoveObjects(TArray<class UObject*>* AddObjects, TArray<class UObject*>* RemoveObjects);
	void RemoveObjects(TArray<class UObject*>* InObjects);
	void RemoveAllObjects(class UClass* ObjectClass);
	void RemoveObject(class UObject* Obj);
	void AddObjects(TArray<class UObject*>* InObjects);
	void AddObject(class UObject* Obj);
	int GetExactCount(class UClass* ObjClass);
	int GetCount(class UClass* ObjClass);
	class UObject* GetOrCreate(class UClass* ObjClass);
	class UObject* GetExact(class UClass* ObjClass);
	class UObject* GetUnsafe(class UClass* ObjClass);
	class UObject* Get(class UClass* ObjClass);
	void AllObjects(class UClass* BaseClass, class UObject** Obj, class UClass* InterfaceClass);
	void InjectDelayed(class UObject* Subscriber);
	void Inject(class UObject* Subscriber);
	void UnsubscribeAll(class UObject* Subscriber);
	void Unsubscribe(const struct FScriptDelegate& Callback, const struct FScriptDelegate& Callback2);
	void SubscribeList(class UClass* BaseClass, const struct FScriptDelegate& Callback);
	void SubscribeOnce(class UClass* BaseClass, const struct FScriptDelegate& OnAdd, const struct FScriptDelegate& OnRemove);
	void Subscribe(class UClass* BaseClass, const struct FScriptDelegate& OnAdd, const struct FScriptDelegate& OnRemove);
	void ObjectChangeCallback();
	void ObjectListSubscriptionCallback(class UObjectProvider* Provider);
	void ObjectSubscriptionCallback(class UObject* Obj);
};

// Class Core.NameProperty
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UNameProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.NameProperty");
		return ptr;
	}


};

// Class Core.MapProperty
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownDataVB4F[0x10];                                     // 0x00C8(0x0010) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.MapProperty");
		return ptr;
	}


};

// Class Core.IntProperty
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UIntProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.IntProperty");
		return ptr;
	}


};

// Class Core.InterfaceProperty
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownDataNG11[0x8];                                      // 0x00C8(0x0008) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.InterfaceProperty");
		return ptr;
	}


};

// Class Core.FloatProperty
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UFloatProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.FloatProperty");
		return ptr;
	}


};

// Class Core.DelegateProperty
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData6T7A[0x10];                                     // 0x00C8(0x0010) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DelegateProperty");
		return ptr;
	}


};

// Class Core.__AsyncTask__All_0F9C95204427B24A8DA4A0AAE792B682
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class U__AsyncTask__All_0F9C95204427B24A8DA4A0AAE792B682 : public UObject
{
public:
	int                                                DependentsCount;                                           // 0x0060(0x0004)
	unsigned char                                      UnknownDataZZ9H[0x4];                                      // 0x0064(0x0004) MISSED OFFSET
	class UAsyncTask*                                  Parent;                                                    // 0x0068(0x0008)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.__AsyncTask__All_0F9C95204427B24A8DA4A0AAE792B682");
		return ptr;
	}


	void __AsyncTask__All_0F9C95204427B24A8DA4A0AAE792B682();
};

// Class Core.ByteProperty
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData4K3Y[0x8];                                      // 0x00C8(0x0008) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ByteProperty");
		return ptr;
	}


};

// Class Core.IDisposable
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UIDisposable : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.IDisposable");
		return ptr;
	}


	void Dispose();
};

// Class Core.BoolProperty
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownDataZIGB[0x8];                                      // 0x00C8(0x0008) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.BoolProperty");
		return ptr;
	}


};

// Class Core.ArrayFuncs
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UArrayFuncs : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ArrayFuncs");
		return ptr;
	}


	void GetRandomElement();
	void ShuffleArray();
};

// Class Core.ArrayProperty
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData6FRT[0x8];                                      // 0x00C8(0x0008) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ArrayProperty");
		return ptr;
	}


};

// Class Core.Enum
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UEnum : public UField
{
public:
	unsigned char                                      UnknownDataTNIL[0x10];                                     // 0x0070(0x0010) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Enum");
		return ptr;
	}


};

// Class Core.Const
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UConst : public UField
{
public:
	unsigned char                                      UnknownDataNO6D[0x10];                                     // 0x0070(0x0010) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Const");
		return ptr;
	}


};

// Class Core.FeatureSystem
// 0xFFFFFF4C (FullSize[0xFFFFFFAC] - InheritedSize[0x0060])
class UFeatureSystem : public UObject
{
public:
	unsigned char                                      UnknownDataFZXN[0x8];                                      // 0x0060(0x0008) MISSED OFFSET
	unsigned char                                      Prime : 1;                                                 // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData5LRS[0x2];                                      // 0x0060(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Matchmaking : 1;                                           // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataJR0C[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      PrivateMatch : 1;                                          // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataE3KK[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      SplitscreenMatch : 1;                                      // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataNGM7[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      SplitscreenJoin : 1;                                       // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataQDOH[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      SeasonMode : 1;                                            // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataYIHM[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Tutorial : 1;                                              // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataQY3S[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Garage : 1;                                                // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataW35E[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Options : 1;                                               // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataWP2N[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      ReplaySaves : 1;                                           // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData0Y1O[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      MainMenu : 1;                                              // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataPPPZ[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      MidgameMenu : 1;                                           // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataC88H[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Party : 1;                                                 // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataB9XC[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      PsyNetParty : 1;                                           // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataLPZW[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      PartyUpVoting : 1;                                         // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataDFBV[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Achievements : 1;                                          // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataYIPK[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Stats : 1;                                                 // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData8FX7[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Leaderboards : 1;                                          // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataN9G2[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      XP : 1;                                                    // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataL92I[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Chat : 1;                                                  // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData3SJS[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      LicenseAgreement : 1;                                      // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataZWQX[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      FullCredits : 1;                                           // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataG23G[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      TrainingDifficulties : 1;                                  // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData0FJV[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Ads : 1;                                                   // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataXG0H[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Microtransactions : 1;                                     // 0x0068(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData9E06[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataLA4C : 32;                                      // 0x006C(0x0001)
	unsigned char                                      Spectator : 1;                                             // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData241L[0x2];                                      // 0x006C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      CrossPlatformPrivateMatch : 1;                             // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataXQ3V[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Lan : 1;                                                   // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData5S5B[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      PlayerReporting : 1;                                       // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData12DG[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      PodiumSpotlight : 1;                                       // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataMQGH[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      CustomTeamNames : 1;                                       // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataZVEE[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      CustomTeamColors : 1;                                      // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataJUJY[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      PlayerTrading : 1;                                         // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData1NHY[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      GaragePresets : 1;                                         // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData1O4L[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      PartyChat : 1;                                             // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataBRTK[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      OnlineServices : 1;                                        // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataMYZE[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      RemoveCrossPlatformProducts : 1;                           // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataLYPH[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Mutators : 1;                                              // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataBUU4[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      ProductValidation : 1;                                     // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData3WNH[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      PlayerTitle : 1;                                           // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData0WCC[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      DynamicThumbnails : 1;                                     // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataHF4S[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      MapPrefs : 1;                                              // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataLGKN[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Workshop : 1;                                              // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData71E4[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Avatars : 1;                                               // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData765A[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Tournaments : 1;                                           // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData5A2U[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Challenges : 1;                                            // 0x006C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataFCXG[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData3M4F : 32;                                      // 0x0070(0x0001)
	unsigned char                                      Inventory : 1;                                             // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataAXVO[0x2];                                      // 0x0070(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      TrainingEditor : 1;                                        // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataPQDH[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      RedeemCode : 1;                                            // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData4G2F[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      VoiceChat : 1;                                             // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataOBJJ[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      EditBindings : 1;                                          // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataPZ77[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UIScale : 1;                                               // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData1MLZ[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      SplitScreen : 1;                                           // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData4R7E[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Crossplay : 1;                                             // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataRXZ9[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      CompetitiveDivisions : 1;                                  // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataLEMK[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      FreePlayMapSelection : 1;                                  // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataG0PQ[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Clubs : 1;                                                 // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData3YGZ[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      MatchAdmin : 1;                                            // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataHXGD[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      FilterContent : 1;                                         // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData2N0E[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      EncryptContent : 1;                                        // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataO7OY[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      GarageSuperSonicTrail : 1;                                 // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataL6U7[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      GarageBallExplosions : 1;                                  // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataT8ZG[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      GarageEngineAudio : 1;                                     // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataR34J[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      EsportsCamera : 1;                                         // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataY8DZ[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      OnlineXP : 1;                                              // 0x0070(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataJRDC[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataFWRH : 32;                                      // 0x0074(0x0001)
	unsigned char                                      PsyNetFriends : 1;                                         // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataL3MD[0x2];                                      // 0x0074(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      ClanforgeReservation : 1;                                  // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData6VVN[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UserSettingObserver : 1;                                   // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData0Y8J[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Metrics : 1;                                               // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataGS75[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      MusicPlaylistSelection : 1;                                // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData89HO[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      SpecialEvents : 1;                                         // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData26O3[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      OnlineShop : 1;                                            // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataKB46[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      PlayerBannerCustomization : 1;                             // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData3LSZ[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      AvatarBorder : 1;                                          // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataOMVZ[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      SecureUDP : 1;                                             // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataVVK6[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      PsyNet : 1;                                                // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataHQTA[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      OnlinePlayerStorage : 1;                                   // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataA3T1[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      LocalSaveData : 1;                                         // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataTIDG[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      CrowdV2 : 1;                                               // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataODOP[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      ChatBan : 1;                                               // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataOS35[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      BacktraceCrashDumps : 1;                                   // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData0YTO[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      MonsterCarV2 : 1;                                          // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataFJ53[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      SpotifyButton : 1;                                         // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData6HJN[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      LockableGarageSlots : 1;                                   // 0x0074(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataZLGL[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataMN3R : 32;                                      // 0x0078(0x0001)
	unsigned char                                      RocketPass : 1;                                            // 0x0078(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataRDNV[0x2];                                      // 0x0078(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      PsyTag : 1;                                                // 0x0078(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataHMKL[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      SeasonRewards : 1;                                         // 0x0078(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData8FKC[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      BotDetection : 1;                                          // 0x0078(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData2OFT[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      CrateRoulette : 1;                                         // 0x0078(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData7F50[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      NetworkNext : 1;                                           // 0x0078(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData704L[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      FaceIt : 1;                                                // 0x0078(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData90RD[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      OnlinePlayerTitles : 1;                                    // 0x0078(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData6CDA[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      RestrictByRegion : 1;                                      // 0x0078(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataZMNX[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      RLBot : 1;                                                 // 0x0078(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataL8G3[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      SteamInput : 1;                                            // 0x0078(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData8U40[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      ReplayFXControls : 1;                                      // 0x0078(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData7GVK[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      ESportsShop : 1;                                           // 0x0078(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataGXOH[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownDataSCT1 : 32;                                      // 0x007C(0x0001)
	unsigned char                                      TeamColoredBoostMeter : 1;                                 // 0x007C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataIBVR[0x2];                                      // 0x007C(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      GarageArchive : 1;                                         // 0x007C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData5HO5[0x2];                                      // 0x0080(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      DynamicRangeAudioSettings : 1;                             // 0x007C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataCJNQ[0x2];                                      // 0x0080(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      QuickPlay : 1;                                             // 0x007C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataARI8[0x2];                                      // 0x0080(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      NewsPanelV2 : 1;                                           // 0x007C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData8C2N[0x2];                                      // 0x0080(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      Blueprints : 1;                                            // 0x007C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData5EO3[0x2];                                      // 0x0080(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      GodBall : 1;                                               // 0x007C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataFG7J[0x2];                                      // 0x0080(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      RocketBucks : 1;                                           // 0x007C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownDataY5SX[0x2];                                      // 0x0080(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      DiscordRichPresence : 1;                                   // 0x007C(0x0001) BIT_FIELD (DataBinding)
	unsigned char                                      UnknownData2WPJ[0x2];                                      // 0x0080(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.FeatureSystem");
		return ptr;
	}


};

// Class Core.Factory
// 0x004E (FullSize[0x00AE] - InheritedSize[0x0060])
class UFactory : public UObject
{
public:
	struct FString                                     Category;                                                  // 0x0060(0x0010) (NeedCtorLink)
	class UClass*                                      SupportedClass;                                            // 0x0070(0x0008)
	class UClass*                                      ContextClass;                                              // 0x0078(0x0008)
	struct FString                                     Description;                                               // 0x0080(0x0010) (NeedCtorLink)
	TArray<struct FString>                             Formats;                                                   // 0x0090(0x0010) (NeedCtorLink)
	unsigned char                                      bCreateNew : 1;                                            // 0x00A0(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataMZ81[0x2];                                      // 0x00A0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bEditAfterNew : 1;                                         // 0x00A0(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataF8XX[0x2];                                      // 0x00A4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bEditorImport : 1;                                         // 0x00A0(0x0001) BIT_FIELD
	unsigned char                                      UnknownData2FKY[0x2];                                      // 0x00A4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bText : 1;                                                 // 0x00A0(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataPPJQ[0x2];                                      // 0x00A4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bAssetNameMatchesPackageName : 1;                          // 0x00A0(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataKG6E[0x2];                                      // 0x00A4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                AutoPriority;                                              // 0x00A4(0x0004)
	TArray<struct FString>                             ValidGameNames;                                            // 0x00A8(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Factory");
		return ptr;
	}


};

// Class Core.TextBufferFactory
// 0x000A (FullSize[0x00B8] - InheritedSize[0x00AE])
class UTextBufferFactory : public UFactory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.TextBufferFactory");
		return ptr;
	}


};

// Class Core.Exporter
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownDataW2LY[0x18];                                     // 0x0060(0x0018) MISSED OFFSET
	TArray<struct FString>                             FormatDescription;                                         // 0x0078(0x0010) (NeedCtorLink)
	TArray<struct FString>                             FormatExtension;                                           // 0x0068(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownDataKFHG[0x20];                                     // 0x0078(0x0020) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Exporter");
		return ptr;
	}


};

// Class Core.ErrorType
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UErrorType : public UObject
{
public:
	struct FString                                     LocalizationKey;                                           // 0x0060(0x0010) (Const, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ErrorType");
		return ptr;
	}


	class UError* CreateError(const struct FString& InErrorMessage, int InErrorCode);
	struct FString GetLocalizedMessage();
};

// Class Core.ErrorList
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UErrorList : public UObject
{
public:
	struct FString                                     LocalizationPackage;                                       // 0x0060(0x0010) (Edit, Const, NeedCtorLink)
	struct FString                                     LocalizationSection;                                       // 0x0070(0x0010) (Edit, Const, NeedCtorLink)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ErrorList");
		return ptr;
	}


	class UErrorType* GetErrorType(const struct FName& Error);
};

// Class Core.Error
// 0x001C (FullSize[0x007C] - InheritedSize[0x0060])
class UError : public UObject
{
public:
	class UErrorType*                                  Type;                                                      // 0x0060(0x0008) (Const, Transient)
	struct FString                                     Message;                                                   // 0x0068(0x0010) (Const, Transient, NeedCtorLink)
	int                                                Code;                                                      // 0x0078(0x0004) (Const, Transient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Error");
		return ptr;
	}


	struct FString GetDebugMessage();
	struct FString GetLocalizedMessage();
};

// Class Core.DebugDrawer
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class UDebugDrawer : public UObject
{
public:
	struct FColor                                      DefaultTextColor;                                          // 0x0060(0x0004) (Edit)
	unsigned char                                      bSilent : 1;                                               // 0x0064(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownData10XO[0x2];                                      // 0x0064(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      bPrintActorsInline : 1;                                    // 0x0064(0x0001) BIT_FIELD (Edit)
	unsigned char                                      UnknownDataC8WI[0x2];                                      // 0x0068(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Indentation;                                               // 0x0068(0x0004) (Transient, ProtectedWrite)
	unsigned char                                      UnknownDataDAH6[0x4];                                      // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     IndentationString;                                         // 0x0070(0x0010) (Transient, NeedCtorLink, ProtectedWrite)
	TArray<class UObject*>                             PrintedObjects;                                            // 0x0080(0x0010) (Transient, NeedCtorLink)
	TArray<class UObject*>                             QueuedObjects;                                             // 0x0090(0x0010) (Transient, NeedCtorLink)
	int                                                PrintObjectCount;                                          // 0x00A0(0x0004) (Transient)
	unsigned char                                      UnknownDataQ1AA[0x4];                                      // 0x00A4(0x0004) MISSED OFFSET
	struct FScriptDelegate                             __LogFunc__Delegate;                                       // 0x00A8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData6I3I[0xC];                                      // 0x00A4(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DebugDrawer");
		return ptr;
	}


	void Reset();
	void PrintText(const struct FString& Text, const struct FColor& InColor);
	void PrintArrayProperty(const struct FString& PropertyName, int Index, const struct FString& Value);
	void PrintProperty(const struct FString& PropertyName, const struct FString& Value);
	void EndSection();
	void StartSection();
	void PrintObject(const struct FString& Title, class UObject* ForObj);
	void PrintSeperater();
	void DebugArrayObject(const struct FString& Title, int Index, class UObject* ForObj);
	void DebugObject(const struct FString& Title, class UObject* ForObj);
	bool ShouldDisplayDebug(const struct FName& Category);
	void LogFunc(const struct FString& Str);
};

// Class Core.Compression
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UCompression : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Compression");
		return ptr;
	}


	bool ZLibCompress(TArray<unsigned char>* Uncompressed, TArray<unsigned char>* OutCompressed);
};

// Class Core.StringObjectMap
// 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
class UStringObjectMap : public UComponent
{
public:
	struct FMap_Mirror                                 Map;                                                       // 0x0070(0x0050) (Const, Native)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StringObjectMap");
		return ptr;
	}


	bool Contains(const struct FString& Key);
	void Remove(const struct FString& Key);
	bool TryGetObject(const struct FString& Key, class UObject** OutValue);
	void TryGet();
	class UObject* GetObject(const struct FString& Key);
	void Get();
	void Set(const struct FString& Key, class UObject* Value);
};

// Class Core.StringMap
// 0x005C (FullSize[0x00CC] - InheritedSize[0x0070])
class UStringMap : public UComponent
{
public:
	struct FMap_Mirror                                 Map;                                                       // 0x0070(0x0050) (Const, Native)
	struct FScriptDelegate                             __PairCallback__Delegate;                                  // 0x00C0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownDataWBMW[0xC];                                      // 0x00C0(0x000C) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StringMap");
		return ptr;
	}


	void ForEach(const struct FScriptDelegate& Callback);
	void Append(class UStringMap* Other);
	bool Contains(const struct FString& Key);
	void Remove(const struct FString& Key);
	bool TryGet(const struct FString& Key, struct FString* OutValue);
	struct FString Get(const struct FString& Key);
	void Set(const struct FString& Key, const struct FString& Value);
	void PairCallback(const struct FString& Key, const struct FString& Value);
};

// Class Core.Commandlet
// 0x004A (FullSize[0x00AA] - InheritedSize[0x0060])
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                           // 0x0060(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     HelpUsage;                                                 // 0x0070(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     HelpWebLink;                                               // 0x0080(0x0010) (Const, Localized, NeedCtorLink)
	TArray<struct FString>                             HelpParamNames;                                            // 0x0090(0x0010) (Const, Localized, NeedCtorLink)
	TArray<struct FString>                             HelpParamDescriptions;                                     // 0x00A0(0x0010) (Const, Localized, NeedCtorLink)
	unsigned char                                      IsServer : 1;                                              // 0x00B0(0x0001) BIT_FIELD
	unsigned char                                      UnknownData0LXT[0x2];                                      // 0x00B0(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      IsClient : 1;                                              // 0x00B0(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataNJRA[0x2];                                      // 0x00B4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      IsEditor : 1;                                              // 0x00B0(0x0001) BIT_FIELD
	unsigned char                                      UnknownData1R6C[0x2];                                      // 0x00B4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      LogToConsole : 1;                                          // 0x00B0(0x0001) BIT_FIELD
	unsigned char                                      UnknownDataR5WQ[0x2];                                      // 0x00B4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      ShowErrorCount : 1;                                        // 0x00B0(0x0001) BIT_FIELD
	unsigned char                                      UnknownData3AMJ[0x2];                                      // 0x00B4(0x0002) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Commandlet");
		return ptr;
	}


	int Main(const struct FString& Params);
};

// Class Core.HelpCommandlet
// 0x000A (FullSize[0x00B4] - InheritedSize[0x00AA])
class UHelpCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData89X5[0x4];                                      // 0x00B4(0x0004) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.HelpCommandlet");
		return ptr;
	}


	int Main(const struct FString& Params);
};

// Class Core.Base64
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBase64 : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Base64");
		return ptr;
	}


	void DecodeStringInline(const struct FString& Input, TArray<unsigned char>* Output);
	TArray<unsigned char> DecodeString(const struct FString& Input);
	void DecodeInline(TArray<unsigned char>* Input, TArray<unsigned char>* Output);
	TArray<unsigned char> Decode(TArray<unsigned char>* Input);
	void EncodeStringInline(TArray<unsigned char>* Input, struct FString* Output);
	struct FString EncodeString(TArray<unsigned char>* Input);
	void EncodeInline(TArray<unsigned char>* Input, TArray<unsigned char>* Output);
	TArray<unsigned char> Encode(TArray<unsigned char>* Input);
};

// Class Core.AsyncResult
// 0x0034 (FullSize[0x00D0] - InheritedSize[0x009C])
class UAsyncResult : public UAsyncTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.AsyncResult");
		return ptr;
	}


};

// Class Core.State
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData2L2B[0x60];                                     // 0x0130(0x0060) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.State");
		return ptr;
	}


};

// Class Core.Package
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownDataL9UZ[0xE8];                                     // 0x0060(0x00E8) MISSED OFFSET


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Package");
		return ptr;
	}


};

// Class Core.Class
// 0x0288 (FullSize[0x03B8] - InheritedSize[0x0130])
class UClass : public UState
{
public:
	unsigned char                                      pad_N0D7HD3L7E[0x88];                                      // 0x00B4(0x0088) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     ClassDefaultObject;                                        // 0x013C(0x0008) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_12GS6JXQ14[0x70];                                      // 0x0144(0x0070) NOT AUTO-GENERATED PROPERTY


	template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	inline UObject* CreateDefaultObject()
	{
		using Fn = UObject*(__thiscall *)(UClass*, unsigned int);
		//UClass::GetDefaultObject can be found with the sig
		//85 C0 75 21 39 05 ?? ?? ?? ?? 74 19 F7 86 ?? 00 00 00 00 00 00 10 75 0D F6 05 ?? ?? ?? ?? 02 0F 84
		static Fn fn = nullptr;
		
		return fn(this, 0);
		//or use the default object (WARNING: may be null)
		//return ClassDefaultObject;
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Class");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
