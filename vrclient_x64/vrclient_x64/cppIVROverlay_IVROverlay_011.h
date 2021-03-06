#ifdef __cplusplus
extern "C" {
#endif
extern EVROverlayError cppIVROverlay_IVROverlay_011_FindOverlay(void *, const char *, VROverlayHandle_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_CreateOverlay(void *, const char *, const char *, VROverlayHandle_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_DestroyOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetHighQualityOverlay(void *, VROverlayHandle_t);
extern VROverlayHandle_t cppIVROverlay_IVROverlay_011_GetHighQualityOverlay(void *);
extern uint32_t cppIVROverlay_IVROverlay_011_GetOverlayKey(void *, VROverlayHandle_t, char *, uint32_t, EVROverlayError *);
extern uint32_t cppIVROverlay_IVROverlay_011_GetOverlayName(void *, VROverlayHandle_t, char *, uint32_t, EVROverlayError *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetOverlayImageData(void *, VROverlayHandle_t, void *, uint32_t, uint32_t *, uint32_t *);
extern const char * cppIVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum(void *, EVROverlayError);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayRenderingPid(void *, VROverlayHandle_t, uint32_t);
extern uint32_t cppIVROverlay_IVROverlay_011_GetOverlayRenderingPid(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayColor(void *, VROverlayHandle_t, float, float, float);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetOverlayColor(void *, VROverlayHandle_t, float *, float *, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayAlpha(void *, VROverlayHandle_t, float);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetOverlayAlpha(void *, VROverlayHandle_t, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayWidthInMeters(void *, VROverlayHandle_t, float);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetOverlayWidthInMeters(void *, VROverlayHandle_t, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters(void *, VROverlayHandle_t, float, float);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters(void *, VROverlayHandle_t, float *, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayTextureColorSpace(void *, VROverlayHandle_t, EColorSpace);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetOverlayTextureColorSpace(void *, VROverlayHandle_t, EColorSpace *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetOverlayTransformType(void *, VROverlayHandle_t, VROverlayTransformType *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayTransformAbsolute(void *, VROverlayHandle_t, ETrackingUniverseOrigin, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetOverlayTransformAbsolute(void *, VROverlayHandle_t, ETrackingUniverseOrigin *, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent(void *, VROverlayHandle_t, TrackedDeviceIndex_t, const char *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, char *, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_011_ShowOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_011_HideOverlay(void *, VROverlayHandle_t);
extern bool cppIVROverlay_IVROverlay_011_IsOverlayVisible(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates(void *, VROverlayHandle_t, ETrackingUniverseOrigin, HmdVector2_t, HmdMatrix34_t *);
extern bool cppIVROverlay_IVROverlay_011_PollNextOverlayEvent(void *, VROverlayHandle_t, winVREvent_t_0920 *, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern bool cppIVROverlay_IVROverlay_011_ComputeOverlayIntersection(void *, VROverlayHandle_t, VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t *);
extern bool cppIVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse(void *, VROverlayHandle_t, TrackedDeviceIndex_t);
extern bool cppIVROverlay_IVROverlay_011_IsHoverTargetOverlay(void *, VROverlayHandle_t);
extern VROverlayHandle_t cppIVROverlay_IVROverlay_011_GetGamepadFocusOverlay(void *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetGamepadFocusOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayNeighbor(void *, EOverlayDirection, VROverlayHandle_t, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor(void *, EOverlayDirection, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayTexture(void *, VROverlayHandle_t, Texture_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_ClearOverlayTexture(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayRaw(void *, VROverlayHandle_t, void *, uint32_t, uint32_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetOverlayFromFile(void *, VROverlayHandle_t, const char *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetOverlayTexture(void *, VROverlayHandle_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, EGraphicsAPIConvention *, EColorSpace *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle(void *, VROverlayHandle_t, void *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_CreateDashboardOverlay(void *, const char *, const char *, VROverlayHandle_t *, VROverlayHandle_t *);
extern bool cppIVROverlay_IVROverlay_011_IsDashboardVisible(void *);
extern bool cppIVROverlay_IVROverlay_011_IsActiveDashboardOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t *);
extern void cppIVROverlay_IVROverlay_011_ShowDashboard(void *, const char *);
extern TrackedDeviceIndex_t cppIVROverlay_IVROverlay_011_GetPrimaryDashboardDevice(void *);
extern EVROverlayError cppIVROverlay_IVROverlay_011_ShowKeyboard(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32_t, const char *, bool, uint64_t);
extern EVROverlayError cppIVROverlay_IVROverlay_011_ShowKeyboardForOverlay(void *, VROverlayHandle_t, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32_t, const char *, bool, uint64_t);
extern uint32_t cppIVROverlay_IVROverlay_011_GetKeyboardText(void *, char *, uint32_t);
extern void cppIVROverlay_IVROverlay_011_HideKeyboard(void *);
extern void cppIVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute(void *, ETrackingUniverseOrigin, HmdMatrix34_t *);
extern void cppIVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay(void *, VROverlayHandle_t, HmdRect2_t);
#ifdef __cplusplus
}
#endif
