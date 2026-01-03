/* Automatically generated from Vulkan xr.xml; DO NOT EDIT!
 *
 * This file is generated from Vulkan xr.xml file covered
 * by the following copyright and permission notice:
 *
 * Copyright (c) 2017-2025 The Khronos Group Inc.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * ------------------------------------------------------------------------
 *
 * This file, xr.xml, is the OpenXR API Registry. It is a critically important
 * and normative part of the OpenXR Specification, including a canonical
 * machine-readable definition of the API, parameter and member validation
 * language incorporated into the Specification and reference pages, and other
 * material which is registered by Khronos, such as tags used by extension and
 * layer authors. The only authoritative version of xr.xml is the one
 * maintained in the default branch of the Khronos OpenXR GitHub project.
 *
 */

#ifndef __WINE_OPENXR_LOADER_THUNKS_H
#define __WINE_OPENXR_LOADER_THUNKS_H

enum unix_call
{
    unix_init,
    unix_is_available_instance_function,
    unix_xrAcquireEnvironmentDepthImageMETA,
    unix_xrAcquireSwapchainImage,
    unix_xrAllocateWorldMeshBufferML,
    unix_xrApplyForceFeedbackCurlMNDX,
    unix_xrApplyHapticFeedback,
    unix_xrAttachSessionActionSets,
    unix_xrBeginFrame,
    unix_xrBeginPlaneDetectionEXT,
    unix_xrBeginSession,
    unix_xrCancelFutureEXT,
    unix_xrCaptureSceneAsyncBD,
    unix_xrCaptureSceneCompleteBD,
    unix_xrChangeVirtualKeyboardTextContextMETA,
    unix_xrClearSpatialAnchorStoreMSFT,
    unix_xrComputeNewSceneMSFT,
    unix_xrConvertTimeToTimespecTimeKHR,
    unix_xrConvertTimespecTimeToTimeKHR,
    unix_xrCreateAction,
    unix_xrCreateActionSet,
    unix_xrCreateActionSpace,
    unix_xrCreateAnchorSpaceANDROID,
    unix_xrCreateAnchorSpaceBD,
    unix_xrCreateBodyTrackerBD,
    unix_xrCreateBodyTrackerFB,
    unix_xrCreateBodyTrackerHTC,
    unix_xrCreateDeviceAnchorPersistenceANDROID,
    unix_xrCreateEnvironmentDepthProviderMETA,
    unix_xrCreateEnvironmentDepthSwapchainMETA,
    unix_xrCreateExportedLocalizationMapML,
    unix_xrCreateEyeTrackerFB,
    unix_xrCreateFaceTracker2FB,
    unix_xrCreateFaceTrackerFB,
    unix_xrCreateFacialExpressionClientML,
    unix_xrCreateFacialTrackerHTC,
    unix_xrCreateFoveationProfileFB,
    unix_xrCreateGeometryInstanceFB,
    unix_xrCreateHandMeshSpaceMSFT,
    unix_xrCreateHandTrackerEXT,
    unix_xrCreateInstance,
    unix_xrCreateKeyboardSpaceFB,
    unix_xrCreateMarkerDetectorML,
    unix_xrCreateMarkerSpaceML,
    unix_xrCreateMarkerSpaceVARJO,
    unix_xrCreatePassthroughColorLutMETA,
    unix_xrCreatePassthroughFB,
    unix_xrCreatePassthroughHTC,
    unix_xrCreatePassthroughLayerFB,
    unix_xrCreatePersistedAnchorSpaceANDROID,
    unix_xrCreatePlaneDetectorEXT,
    unix_xrCreateReferenceSpace,
    unix_xrCreateRenderModelAssetEXT,
    unix_xrCreateRenderModelEXT,
    unix_xrCreateRenderModelSpaceEXT,
    unix_xrCreateSceneMSFT,
    unix_xrCreateSceneObserverMSFT,
    unix_xrCreateSenseDataProviderBD,
    unix_xrCreateSession,
    unix_xrCreateSpaceUserFB,
    unix_xrCreateSpatialAnchorAsyncBD,
    unix_xrCreateSpatialAnchorCompleteBD,
    unix_xrCreateSpatialAnchorEXT,
    unix_xrCreateSpatialAnchorFB,
    unix_xrCreateSpatialAnchorFromPersistedNameMSFT,
    unix_xrCreateSpatialAnchorHTC,
    unix_xrCreateSpatialAnchorMSFT,
    unix_xrCreateSpatialAnchorSpaceMSFT,
    unix_xrCreateSpatialAnchorStoreConnectionMSFT,
    unix_xrCreateSpatialAnchorsAsyncML,
    unix_xrCreateSpatialAnchorsCompleteML,
    unix_xrCreateSpatialAnchorsStorageML,
    unix_xrCreateSpatialContextAsyncEXT,
    unix_xrCreateSpatialContextCompleteEXT,
    unix_xrCreateSpatialDiscoverySnapshotAsyncEXT,
    unix_xrCreateSpatialDiscoverySnapshotCompleteEXT,
    unix_xrCreateSpatialEntityAnchorBD,
    unix_xrCreateSpatialEntityFromIdEXT,
    unix_xrCreateSpatialGraphNodeSpaceMSFT,
    unix_xrCreateSpatialPersistenceContextAsyncEXT,
    unix_xrCreateSpatialPersistenceContextCompleteEXT,
    unix_xrCreateSpatialUpdateSnapshotEXT,
    unix_xrCreateSwapchain,
    unix_xrCreateTrackableTrackerANDROID,
    unix_xrCreateTriangleMeshFB,
    unix_xrCreateVirtualKeyboardMETA,
    unix_xrCreateVirtualKeyboardSpaceMETA,
    unix_xrCreateWorldMeshDetectorML,
    unix_xrDeleteSpatialAnchorsAsyncML,
    unix_xrDeleteSpatialAnchorsCompleteML,
    unix_xrDeserializeSceneMSFT,
    unix_xrDestroyAction,
    unix_xrDestroyActionSet,
    unix_xrDestroyAnchorBD,
    unix_xrDestroyBodyTrackerBD,
    unix_xrDestroyBodyTrackerFB,
    unix_xrDestroyBodyTrackerHTC,
    unix_xrDestroyDeviceAnchorPersistenceANDROID,
    unix_xrDestroyEnvironmentDepthProviderMETA,
    unix_xrDestroyEnvironmentDepthSwapchainMETA,
    unix_xrDestroyExportedLocalizationMapML,
    unix_xrDestroyEyeTrackerFB,
    unix_xrDestroyFaceTracker2FB,
    unix_xrDestroyFaceTrackerFB,
    unix_xrDestroyFacialExpressionClientML,
    unix_xrDestroyFacialTrackerHTC,
    unix_xrDestroyFoveationProfileFB,
    unix_xrDestroyGeometryInstanceFB,
    unix_xrDestroyHandTrackerEXT,
    unix_xrDestroyInstance,
    unix_xrDestroyMarkerDetectorML,
    unix_xrDestroyPassthroughColorLutMETA,
    unix_xrDestroyPassthroughFB,
    unix_xrDestroyPassthroughHTC,
    unix_xrDestroyPassthroughLayerFB,
    unix_xrDestroyPlaneDetectorEXT,
    unix_xrDestroyRenderModelAssetEXT,
    unix_xrDestroyRenderModelEXT,
    unix_xrDestroySceneMSFT,
    unix_xrDestroySceneObserverMSFT,
    unix_xrDestroySenseDataProviderBD,
    unix_xrDestroySenseDataSnapshotBD,
    unix_xrDestroySession,
    unix_xrDestroySpace,
    unix_xrDestroySpaceUserFB,
    unix_xrDestroySpatialAnchorMSFT,
    unix_xrDestroySpatialAnchorStoreConnectionMSFT,
    unix_xrDestroySpatialAnchorsStorageML,
    unix_xrDestroySpatialContextEXT,
    unix_xrDestroySpatialEntityEXT,
    unix_xrDestroySpatialGraphNodeBindingMSFT,
    unix_xrDestroySpatialPersistenceContextEXT,
    unix_xrDestroySpatialSnapshotEXT,
    unix_xrDestroySwapchain,
    unix_xrDestroyTrackableTrackerANDROID,
    unix_xrDestroyTriangleMeshFB,
    unix_xrDestroyVirtualKeyboardMETA,
    unix_xrDestroyWorldMeshDetectorML,
    unix_xrDiscoverSpacesMETA,
    unix_xrDownloadSharedSpatialAnchorAsyncBD,
    unix_xrDownloadSharedSpatialAnchorCompleteBD,
    unix_xrEnableLocalizationEventsML,
    unix_xrEnableUserCalibrationEventsML,
    unix_xrEndFrame,
    unix_xrEndSession,
    unix_xrEnumerateApiLayerProperties,
    unix_xrEnumerateBoundSourcesForAction,
    unix_xrEnumerateColorSpacesFB,
    unix_xrEnumerateDisplayRefreshRatesFB,
    unix_xrEnumerateEnvironmentBlendModes,
    unix_xrEnumerateEnvironmentDepthSwapchainImagesMETA,
    unix_xrEnumerateExternalCamerasOCULUS,
    unix_xrEnumerateInstanceExtensionProperties,
    unix_xrEnumerateInteractionRenderModelIdsEXT,
    unix_xrEnumeratePerformanceMetricsCounterPathsMETA,
    unix_xrEnumeratePersistedAnchorsANDROID,
    unix_xrEnumeratePersistedSpatialAnchorNamesMSFT,
    unix_xrEnumerateRaycastSupportedTrackableTypesANDROID,
    unix_xrEnumerateReferenceSpaces,
    unix_xrEnumerateRenderModelPathsFB,
    unix_xrEnumerateRenderModelSubactionPathsEXT,
    unix_xrEnumerateReprojectionModesMSFT,
    unix_xrEnumerateSceneComputeFeaturesMSFT,
    unix_xrEnumerateSpaceSupportedComponentsFB,
    unix_xrEnumerateSpatialCapabilitiesEXT,
    unix_xrEnumerateSpatialCapabilityComponentTypesEXT,
    unix_xrEnumerateSpatialCapabilityFeaturesEXT,
    unix_xrEnumerateSpatialEntityComponentTypesBD,
    unix_xrEnumerateSpatialPersistenceScopesEXT,
    unix_xrEnumerateSupportedAnchorTrackableTypesANDROID,
    unix_xrEnumerateSupportedPersistenceAnchorTypesANDROID,
    unix_xrEnumerateSupportedTrackableTypesANDROID,
    unix_xrEnumerateSwapchainFormats,
    unix_xrEnumerateSwapchainImages,
    unix_xrEnumerateViewConfigurationViews,
    unix_xrEnumerateViewConfigurations,
    unix_xrEnumerateViveTrackerPathsHTCX,
    unix_xrEraseSpaceFB,
    unix_xrEraseSpacesMETA,
    unix_xrFreeWorldMeshBufferML,
    unix_xrGeometryInstanceSetTransformFB,
    unix_xrGetActionStateBoolean,
    unix_xrGetActionStateFloat,
    unix_xrGetActionStatePose,
    unix_xrGetActionStateVector2f,
    unix_xrGetAllTrackablesANDROID,
    unix_xrGetAnchorPersistStateANDROID,
    unix_xrGetAnchorUuidBD,
    unix_xrGetAudioInputDeviceGuidOculus,
    unix_xrGetAudioOutputDeviceGuidOculus,
    unix_xrGetBodySkeletonFB,
    unix_xrGetBodySkeletonHTC,
    unix_xrGetControllerModelKeyMSFT,
    unix_xrGetControllerModelPropertiesMSFT,
    unix_xrGetControllerModelStateMSFT,
    unix_xrGetCurrentInteractionProfile,
    unix_xrGetDeviceSampleRateFB,
    unix_xrGetDisplayRefreshRateFB,
    unix_xrGetEnvironmentDepthSwapchainStateMETA,
    unix_xrGetExportedLocalizationMapDataML,
    unix_xrGetEyeGazesFB,
    unix_xrGetFaceExpressionWeights2FB,
    unix_xrGetFaceExpressionWeightsFB,
    unix_xrGetFacialExpressionBlendShapePropertiesML,
    unix_xrGetFacialExpressionsHTC,
    unix_xrGetFoveationEyeTrackedStateMETA,
    unix_xrGetHandMeshFB,
    unix_xrGetInputSourceLocalizedName,
    unix_xrGetInstanceProperties,
    unix_xrGetMarkerDetectorStateML,
    unix_xrGetMarkerLengthML,
    unix_xrGetMarkerNumberML,
    unix_xrGetMarkerReprojectionErrorML,
    unix_xrGetMarkerSizeVARJO,
    unix_xrGetMarkerStringML,
    unix_xrGetMarkersML,
    unix_xrGetOpenGLGraphicsRequirementsKHR,
    unix_xrGetPassthroughCameraStateANDROID,
    unix_xrGetPassthroughPreferencesMETA,
    unix_xrGetPerformanceMetricsStateMETA,
    unix_xrGetPlaneDetectionStateEXT,
    unix_xrGetPlaneDetectionsEXT,
    unix_xrGetPlanePolygonBufferEXT,
    unix_xrGetQueriedSenseDataBD,
    unix_xrGetRecommendedLayerResolutionMETA,
    unix_xrGetReferenceSpaceBoundsRect,
    unix_xrGetRenderModelAssetDataEXT,
    unix_xrGetRenderModelAssetPropertiesEXT,
    unix_xrGetRenderModelPoseTopLevelUserPathEXT,
    unix_xrGetRenderModelPropertiesEXT,
    unix_xrGetRenderModelPropertiesFB,
    unix_xrGetRenderModelStateEXT,
    unix_xrGetSceneComponentsMSFT,
    unix_xrGetSceneComputeStateMSFT,
    unix_xrGetSceneMarkerDecodedStringMSFT,
    unix_xrGetSceneMarkerRawDataMSFT,
    unix_xrGetSceneMeshBuffersMSFT,
    unix_xrGetSenseDataProviderStateBD,
    unix_xrGetSerializedSceneFragmentDataMSFT,
    unix_xrGetSpaceBoundary2DFB,
    unix_xrGetSpaceBoundingBox2DFB,
    unix_xrGetSpaceBoundingBox3DFB,
    unix_xrGetSpaceComponentStatusFB,
    unix_xrGetSpaceContainerFB,
    unix_xrGetSpaceRoomLayoutFB,
    unix_xrGetSpaceSemanticLabelsFB,
    unix_xrGetSpaceTriangleMeshMETA,
    unix_xrGetSpaceUserIdFB,
    unix_xrGetSpaceUuidFB,
    unix_xrGetSpatialAnchorNameHTC,
    unix_xrGetSpatialAnchorStateML,
    unix_xrGetSpatialBufferFloatEXT,
    unix_xrGetSpatialBufferStringEXT,
    unix_xrGetSpatialBufferUint16EXT,
    unix_xrGetSpatialBufferUint32EXT,
    unix_xrGetSpatialBufferUint8EXT,
    unix_xrGetSpatialBufferVector2fEXT,
    unix_xrGetSpatialBufferVector3fEXT,
    unix_xrGetSpatialEntityComponentDataBD,
    unix_xrGetSpatialEntityUuidBD,
    unix_xrGetSpatialGraphNodeBindingPropertiesMSFT,
    unix_xrGetSwapchainStateFB,
    unix_xrGetSystem,
    unix_xrGetSystemProperties,
    unix_xrGetTrackableMarkerANDROID,
    unix_xrGetTrackableObjectANDROID,
    unix_xrGetTrackablePlaneANDROID,
    unix_xrGetViewConfigurationProperties,
    unix_xrGetVirtualKeyboardDirtyTexturesMETA,
    unix_xrGetVirtualKeyboardModelAnimationStatesMETA,
    unix_xrGetVirtualKeyboardScaleMETA,
    unix_xrGetVirtualKeyboardTextureDataMETA,
    unix_xrGetVisibilityMaskKHR,
    unix_xrGetVulkanDeviceExtensionsKHR,
    unix_xrGetVulkanGraphicsDevice2KHR,
    unix_xrGetVulkanGraphicsDeviceKHR,
    unix_xrGetVulkanGraphicsRequirements2KHR,
    unix_xrGetVulkanGraphicsRequirementsKHR,
    unix_xrGetVulkanInstanceExtensionsKHR,
    unix_xrGetWorldMeshBufferRecommendSizeML,
    unix_xrImportLocalizationMapML,
    unix_xrLoadControllerModelMSFT,
    unix_xrLoadRenderModelFB,
    unix_xrLocateBodyJointsBD,
    unix_xrLocateBodyJointsFB,
    unix_xrLocateBodyJointsHTC,
    unix_xrLocateHandJointsEXT,
    unix_xrLocateSceneComponentsMSFT,
    unix_xrLocateSpace,
    unix_xrLocateSpaces,
    unix_xrLocateSpacesKHR,
    unix_xrLocateViews,
    unix_xrPassthroughLayerPauseFB,
    unix_xrPassthroughLayerResumeFB,
    unix_xrPassthroughLayerSetKeyboardHandsIntensityFB,
    unix_xrPassthroughLayerSetStyleFB,
    unix_xrPassthroughPauseFB,
    unix_xrPassthroughStartFB,
    unix_xrPathToString,
    unix_xrPauseSimultaneousHandsAndControllersTrackingMETA,
    unix_xrPerfSettingsSetPerformanceLevelEXT,
    unix_xrPersistAnchorANDROID,
    unix_xrPersistSpatialAnchorAsyncBD,
    unix_xrPersistSpatialAnchorCompleteBD,
    unix_xrPersistSpatialAnchorMSFT,
    unix_xrPersistSpatialEntityAsyncEXT,
    unix_xrPersistSpatialEntityCompleteEXT,
    unix_xrPollEvent,
    unix_xrPollFutureEXT,
    unix_xrPublishSpatialAnchorsAsyncML,
    unix_xrPublishSpatialAnchorsCompleteML,
    unix_xrQueryLocalizationMapsML,
    unix_xrQueryPerformanceMetricsCounterMETA,
    unix_xrQuerySenseDataAsyncBD,
    unix_xrQuerySenseDataCompleteBD,
    unix_xrQuerySpacesFB,
    unix_xrQuerySpatialAnchorsAsyncML,
    unix_xrQuerySpatialAnchorsCompleteML,
    unix_xrQuerySpatialComponentDataEXT,
    unix_xrQuerySystemTrackedKeyboardFB,
    unix_xrRaycastANDROID,
    unix_xrReleaseSwapchainImage,
    unix_xrRequestDisplayRefreshRateFB,
    unix_xrRequestExitSession,
    unix_xrRequestMapLocalizationML,
    unix_xrRequestSceneCaptureFB,
    unix_xrRequestWorldMeshAsyncML,
    unix_xrRequestWorldMeshCompleteML,
    unix_xrRequestWorldMeshStateAsyncML,
    unix_xrRequestWorldMeshStateCompleteML,
    unix_xrResetBodyTrackingCalibrationMETA,
    unix_xrResultToString,
    unix_xrResumeSimultaneousHandsAndControllersTrackingMETA,
    unix_xrRetrieveSpaceDiscoveryResultsMETA,
    unix_xrRetrieveSpaceQueryResultsFB,
    unix_xrSaveSpaceFB,
    unix_xrSaveSpaceListFB,
    unix_xrSaveSpacesMETA,
    unix_xrSendVirtualKeyboardInputMETA,
    unix_xrSetColorSpaceFB,
    unix_xrSetDigitalLensControlALMALENCE,
    unix_xrSetEnvironmentDepthEstimationVARJO,
    unix_xrSetEnvironmentDepthHandRemovalMETA,
    unix_xrSetInputDeviceActiveEXT,
    unix_xrSetInputDeviceLocationEXT,
    unix_xrSetInputDeviceStateBoolEXT,
    unix_xrSetInputDeviceStateFloatEXT,
    unix_xrSetInputDeviceStateVector2fEXT,
    unix_xrSetMarkerTrackingPredictionVARJO,
    unix_xrSetMarkerTrackingTimeoutVARJO,
    unix_xrSetMarkerTrackingVARJO,
    unix_xrSetPerformanceMetricsStateMETA,
    unix_xrSetSpaceComponentStatusFB,
    unix_xrSetSystemNotificationsML,
    unix_xrSetTrackingOptimizationSettingsHintQCOM,
    unix_xrSetViewOffsetVARJO,
    unix_xrSetVirtualKeyboardModelVisibilityMETA,
    unix_xrShareSpacesFB,
    unix_xrShareSpacesMETA,
    unix_xrShareSpatialAnchorAsyncBD,
    unix_xrShareSpatialAnchorCompleteBD,
    unix_xrSnapshotMarkerDetectorML,
    unix_xrStartColocationAdvertisementMETA,
    unix_xrStartColocationDiscoveryMETA,
    unix_xrStartEnvironmentDepthProviderMETA,
    unix_xrStartSenseDataProviderAsyncBD,
    unix_xrStartSenseDataProviderCompleteBD,
    unix_xrStopColocationAdvertisementMETA,
    unix_xrStopColocationDiscoveryMETA,
    unix_xrStopEnvironmentDepthProviderMETA,
    unix_xrStopHapticFeedback,
    unix_xrStopSenseDataProviderBD,
    unix_xrStringToPath,
    unix_xrStructureTypeToString,
    unix_xrStructureTypeToString2KHR,
    unix_xrSuggestBodyTrackingCalibrationOverrideMETA,
    unix_xrSuggestInteractionProfileBindings,
    unix_xrSuggestVirtualKeyboardLocationMETA,
    unix_xrSyncActions,
    unix_xrThermalGetTemperatureTrendEXT,
    unix_xrTriangleMeshBeginUpdateFB,
    unix_xrTriangleMeshBeginVertexBufferUpdateFB,
    unix_xrTriangleMeshEndUpdateFB,
    unix_xrTriangleMeshEndVertexBufferUpdateFB,
    unix_xrTriangleMeshGetIndexBufferFB,
    unix_xrTriangleMeshGetVertexBufferFB,
    unix_xrTryCreateSpatialGraphStaticNodeBindingMSFT,
    unix_xrUnpersistAnchorANDROID,
    unix_xrUnpersistSpatialAnchorAsyncBD,
    unix_xrUnpersistSpatialAnchorCompleteBD,
    unix_xrUnpersistSpatialAnchorMSFT,
    unix_xrUnpersistSpatialEntityAsyncEXT,
    unix_xrUnpersistSpatialEntityCompleteEXT,
    unix_xrUpdateHandMeshMSFT,
    unix_xrUpdatePassthroughColorLutMETA,
    unix_xrUpdateSpatialAnchorsExpirationAsyncML,
    unix_xrUpdateSpatialAnchorsExpirationCompleteML,
    unix_xrUpdateSwapchainFB,
    unix_xrWaitFrame,
    unix_xrWaitSwapchainImage,
    unix_count,
};

struct xrAcquireEnvironmentDepthImageMETA_params
{
    XrEnvironmentDepthProviderMETA DECLSPEC_ALIGN(8) environmentDepthProvider;
    const XrEnvironmentDepthImageAcquireInfoMETA *acquireInfo;
    XrEnvironmentDepthImageMETA *environmentDepthImage;
    XrResult result;
};

struct xrAcquireSwapchainImage_params
{
    XrSwapchain DECLSPEC_ALIGN(8) swapchain;
    const XrSwapchainImageAcquireInfo *acquireInfo;
    uint32_t *index;
    XrResult result;
};

struct xrAllocateWorldMeshBufferML_params
{
    XrWorldMeshDetectorML DECLSPEC_ALIGN(8) detector;
    const XrWorldMeshBufferSizeML *size;
    XrWorldMeshBufferML *buffer;
    XrResult result;
};

struct xrApplyForceFeedbackCurlMNDX_params
{
    XrHandTrackerEXT DECLSPEC_ALIGN(8) handTracker;
    const XrForceFeedbackCurlApplyLocationsMNDX *locations;
    XrResult result;
};

struct xrApplyHapticFeedback_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrHapticActionInfo *hapticActionInfo;
    const XrHapticBaseHeader *hapticFeedback;
    XrResult result;
};

struct xrAttachSessionActionSets_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSessionActionSetsAttachInfo *attachInfo;
    XrResult result;
};

struct xrBeginFrame_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrFrameBeginInfo *frameBeginInfo;
    XrResult result;
};

struct xrBeginPlaneDetectionEXT_params
{
    XrPlaneDetectorEXT DECLSPEC_ALIGN(8) planeDetector;
    const XrPlaneDetectorBeginInfoEXT *beginInfo;
    XrResult result;
};

struct xrBeginSession_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSessionBeginInfo *beginInfo;
    XrResult result;
};

struct xrCancelFutureEXT_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    const XrFutureCancelInfoEXT *cancelInfo;
    XrResult result;
};

struct xrCaptureSceneAsyncBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    const XrSceneCaptureInfoBD *info;
    XrFutureEXT *future;
    XrResult result;
};

struct xrCaptureSceneCompleteBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    XrFutureEXT future;
    XrFutureCompletionEXT *completion;
    XrResult result;
};

struct xrChangeVirtualKeyboardTextContextMETA_params
{
    XrVirtualKeyboardMETA DECLSPEC_ALIGN(8) keyboard;
    const XrVirtualKeyboardTextContextChangeInfoMETA *changeInfo;
    XrResult result;
};

struct xrClearSpatialAnchorStoreMSFT_params
{
    XrSpatialAnchorStoreConnectionMSFT DECLSPEC_ALIGN(8) spatialAnchorStore;
    XrResult result;
};

struct xrComputeNewSceneMSFT_params
{
    XrSceneObserverMSFT DECLSPEC_ALIGN(8) sceneObserver;
    const XrNewSceneComputeInfoMSFT *computeInfo;
    XrResult result;
};

struct xrConvertTimeToTimespecTimeKHR_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrTime DECLSPEC_ALIGN(8) time;
    struct timespec *timespecTime;
    XrResult result;
};

struct xrConvertTimespecTimeToTimeKHR_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    const struct timespec *timespecTime;
    XrTime *time;
    XrResult result;
};

struct xrCreateAction_params
{
    XrActionSet DECLSPEC_ALIGN(8) actionSet;
    const XrActionCreateInfo *createInfo;
    XrAction *action;
    XrResult result;
};

struct xrCreateActionSet_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    const XrActionSetCreateInfo *createInfo;
    XrActionSet *actionSet;
    XrResult result;
};

struct xrCreateActionSpace_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrActionSpaceCreateInfo *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreateAnchorSpaceANDROID_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrAnchorSpaceCreateInfoANDROID *createInfo;
    XrSpace *anchorOutput;
    XrResult result;
};

struct xrCreateAnchorSpaceBD_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrAnchorSpaceCreateInfoBD *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreateBodyTrackerBD_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrBodyTrackerCreateInfoBD *createInfo;
    XrBodyTrackerBD *bodyTracker;
    XrResult result;
};

struct xrCreateBodyTrackerFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrBodyTrackerCreateInfoFB *createInfo;
    XrBodyTrackerFB *bodyTracker;
    XrResult result;
};

struct xrCreateBodyTrackerHTC_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrBodyTrackerCreateInfoHTC *createInfo;
    XrBodyTrackerHTC *bodyTracker;
    XrResult result;
};

struct xrCreateDeviceAnchorPersistenceANDROID_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrDeviceAnchorPersistenceCreateInfoANDROID *createInfo;
    XrDeviceAnchorPersistenceANDROID *outHandle;
    XrResult result;
};

struct xrCreateEnvironmentDepthProviderMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrEnvironmentDepthProviderCreateInfoMETA *createInfo;
    XrEnvironmentDepthProviderMETA *environmentDepthProvider;
    XrResult result;
};

struct xrCreateEnvironmentDepthSwapchainMETA_params
{
    XrEnvironmentDepthProviderMETA DECLSPEC_ALIGN(8) environmentDepthProvider;
    const XrEnvironmentDepthSwapchainCreateInfoMETA *createInfo;
    XrEnvironmentDepthSwapchainMETA *swapchain;
    XrResult result;
};

struct xrCreateExportedLocalizationMapML_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrUuidEXT *mapUuid;
    XrExportedLocalizationMapML *map;
    XrResult result;
};

struct xrCreateEyeTrackerFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrEyeTrackerCreateInfoFB *createInfo;
    XrEyeTrackerFB *eyeTracker;
    XrResult result;
};

struct xrCreateFaceTracker2FB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrFaceTrackerCreateInfo2FB *createInfo;
    XrFaceTracker2FB *faceTracker;
    XrResult result;
};

struct xrCreateFaceTrackerFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrFaceTrackerCreateInfoFB *createInfo;
    XrFaceTrackerFB *faceTracker;
    XrResult result;
};

struct xrCreateFacialExpressionClientML_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrFacialExpressionClientCreateInfoML *createInfo;
    XrFacialExpressionClientML *facialExpressionClient;
    XrResult result;
};

struct xrCreateFacialTrackerHTC_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrFacialTrackerCreateInfoHTC *createInfo;
    XrFacialTrackerHTC *facialTracker;
    XrResult result;
};

struct xrCreateFoveationProfileFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrFoveationProfileCreateInfoFB *createInfo;
    XrFoveationProfileFB *profile;
    XrResult result;
};

struct xrCreateGeometryInstanceFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrGeometryInstanceCreateInfoFB *createInfo;
    XrGeometryInstanceFB *outGeometryInstance;
    XrResult result;
};

struct xrCreateHandMeshSpaceMSFT_params
{
    XrHandTrackerEXT DECLSPEC_ALIGN(8) handTracker;
    const XrHandMeshSpaceCreateInfoMSFT *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreateHandTrackerEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrHandTrackerCreateInfoEXT *createInfo;
    XrHandTrackerEXT *handTracker;
    XrResult result;
};

struct xrCreateInstance_params
{
    const XrInstanceCreateInfo *createInfo;
    XrInstance *instance;
    XrResult result;
};

struct xrCreateKeyboardSpaceFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrKeyboardSpaceCreateInfoFB *createInfo;
    XrSpace *keyboardSpace;
    XrResult result;
};

struct xrCreateMarkerDetectorML_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrMarkerDetectorCreateInfoML *createInfo;
    XrMarkerDetectorML *markerDetector;
    XrResult result;
};

struct xrCreateMarkerSpaceML_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrMarkerSpaceCreateInfoML *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreateMarkerSpaceVARJO_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrMarkerSpaceCreateInfoVARJO *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreatePassthroughColorLutMETA_params
{
    XrPassthroughFB DECLSPEC_ALIGN(8) passthrough;
    const XrPassthroughColorLutCreateInfoMETA *createInfo;
    XrPassthroughColorLutMETA *colorLut;
    XrResult result;
};

struct xrCreatePassthroughFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrPassthroughCreateInfoFB *createInfo;
    XrPassthroughFB *outPassthrough;
    XrResult result;
};

struct xrCreatePassthroughHTC_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrPassthroughCreateInfoHTC *createInfo;
    XrPassthroughHTC *passthrough;
    XrResult result;
};

struct xrCreatePassthroughLayerFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrPassthroughLayerCreateInfoFB *createInfo;
    XrPassthroughLayerFB *outLayer;
    XrResult result;
};

struct xrCreatePersistedAnchorSpaceANDROID_params
{
    XrDeviceAnchorPersistenceANDROID DECLSPEC_ALIGN(8) handle;
    const XrPersistedAnchorSpaceCreateInfoANDROID *createInfo;
    XrSpace *anchorOutput;
    XrResult result;
};

struct xrCreatePlaneDetectorEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrPlaneDetectorCreateInfoEXT *createInfo;
    XrPlaneDetectorEXT *planeDetector;
    XrResult result;
};

struct xrCreateReferenceSpace_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrReferenceSpaceCreateInfo *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreateRenderModelAssetEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrRenderModelAssetCreateInfoEXT *createInfo;
    XrRenderModelAssetEXT *asset;
    XrResult result;
};

struct xrCreateRenderModelEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrRenderModelCreateInfoEXT *createInfo;
    XrRenderModelEXT *renderModel;
    XrResult result;
};

struct xrCreateRenderModelSpaceEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrRenderModelSpaceCreateInfoEXT *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreateSceneMSFT_params
{
    XrSceneObserverMSFT DECLSPEC_ALIGN(8) sceneObserver;
    const XrSceneCreateInfoMSFT *createInfo;
    XrSceneMSFT *scene;
    XrResult result;
};

struct xrCreateSceneObserverMSFT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSceneObserverCreateInfoMSFT *createInfo;
    XrSceneObserverMSFT *sceneObserver;
    XrResult result;
};

struct xrCreateSenseDataProviderBD_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSenseDataProviderCreateInfoBD *createInfo;
    XrSenseDataProviderBD *provider;
    XrResult result;
};

struct xrCreateSession_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    const XrSessionCreateInfo *createInfo;
    XrSession *session;
    XrResult result;
};

struct xrCreateSpaceUserFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpaceUserCreateInfoFB *info;
    XrSpaceUserFB *user;
    XrResult result;
};

struct xrCreateSpatialAnchorAsyncBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    const XrSpatialAnchorCreateInfoBD *info;
    XrFutureEXT *future;
    XrResult result;
};

struct xrCreateSpatialAnchorCompleteBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    XrFutureEXT future;
    XrSpatialAnchorCreateCompletionBD *completion;
    XrResult result;
};

struct xrCreateSpatialAnchorEXT_params
{
    XrSpatialContextEXT DECLSPEC_ALIGN(8) spatialContext;
    const XrSpatialAnchorCreateInfoEXT *createInfo;
    XrSpatialEntityIdEXT *anchorEntityId;
    XrSpatialEntityEXT *anchorEntity;
    XrResult result;
};

struct xrCreateSpatialAnchorFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpatialAnchorCreateInfoFB *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrCreateSpatialAnchorFromPersistedNameMSFT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT *spatialAnchorCreateInfo;
    XrSpatialAnchorMSFT *spatialAnchor;
    XrResult result;
};

struct xrCreateSpatialAnchorHTC_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpatialAnchorCreateInfoHTC *createInfo;
    XrSpace *anchor;
    XrResult result;
};

struct xrCreateSpatialAnchorMSFT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpatialAnchorCreateInfoMSFT *createInfo;
    XrSpatialAnchorMSFT *anchor;
    XrResult result;
};

struct xrCreateSpatialAnchorSpaceMSFT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpatialAnchorSpaceCreateInfoMSFT *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreateSpatialAnchorStoreConnectionMSFT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrSpatialAnchorStoreConnectionMSFT *spatialAnchorStore;
    XrResult result;
};

struct xrCreateSpatialAnchorsAsyncML_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpatialAnchorsCreateInfoBaseHeaderML *createInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrCreateSpatialAnchorsCompleteML_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrFutureEXT future;
    XrCreateSpatialAnchorsCompletionML *completion;
    XrResult result;
};

struct xrCreateSpatialAnchorsStorageML_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpatialAnchorsCreateStorageInfoML *createInfo;
    XrSpatialAnchorsStorageML *storage;
    XrResult result;
};

struct xrCreateSpatialContextAsyncEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpatialContextCreateInfoEXT *createInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrCreateSpatialContextCompleteEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrFutureEXT future;
    XrCreateSpatialContextCompletionEXT *completion;
    XrResult result;
};

struct xrCreateSpatialDiscoverySnapshotAsyncEXT_params
{
    XrSpatialContextEXT DECLSPEC_ALIGN(8) spatialContext;
    const XrSpatialDiscoverySnapshotCreateInfoEXT *createInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrCreateSpatialDiscoverySnapshotCompleteEXT_params
{
    XrSpatialContextEXT DECLSPEC_ALIGN(8) spatialContext;
    const XrCreateSpatialDiscoverySnapshotCompletionInfoEXT *createSnapshotCompletionInfo;
    XrCreateSpatialDiscoverySnapshotCompletionEXT *completion;
    XrResult result;
};

struct xrCreateSpatialEntityAnchorBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    const XrSpatialEntityAnchorCreateInfoBD *createInfo;
    XrAnchorBD *anchor;
    XrResult result;
};

struct xrCreateSpatialEntityFromIdEXT_params
{
    XrSpatialContextEXT DECLSPEC_ALIGN(8) spatialContext;
    const XrSpatialEntityFromIdCreateInfoEXT *createInfo;
    XrSpatialEntityEXT *spatialEntity;
    XrResult result;
};

struct xrCreateSpatialGraphNodeSpaceMSFT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpatialGraphNodeSpaceCreateInfoMSFT *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreateSpatialPersistenceContextAsyncEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpatialPersistenceContextCreateInfoEXT *createInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrCreateSpatialPersistenceContextCompleteEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrFutureEXT future;
    XrCreateSpatialPersistenceContextCompletionEXT *completion;
    XrResult result;
};

struct xrCreateSpatialUpdateSnapshotEXT_params
{
    XrSpatialContextEXT DECLSPEC_ALIGN(8) spatialContext;
    const XrSpatialUpdateSnapshotCreateInfoEXT *createInfo;
    XrSpatialSnapshotEXT *snapshot;
    XrResult result;
};

struct xrCreateSwapchain_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSwapchainCreateInfo *createInfo;
    XrSwapchain *swapchain;
    XrResult result;
};

struct xrCreateTrackableTrackerANDROID_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrTrackableTrackerCreateInfoANDROID *createInfo;
    XrTrackableTrackerANDROID *trackableTracker;
    XrResult result;
};

struct xrCreateTriangleMeshFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrTriangleMeshCreateInfoFB *createInfo;
    XrTriangleMeshFB *outTriangleMesh;
    XrResult result;
};

struct xrCreateVirtualKeyboardMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrVirtualKeyboardCreateInfoMETA *createInfo;
    XrVirtualKeyboardMETA *keyboard;
    XrResult result;
};

struct xrCreateVirtualKeyboardSpaceMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrVirtualKeyboardMETA DECLSPEC_ALIGN(8) keyboard;
    const XrVirtualKeyboardSpaceCreateInfoMETA *createInfo;
    XrSpace *keyboardSpace;
    XrResult result;
};

struct xrCreateWorldMeshDetectorML_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrWorldMeshDetectorCreateInfoML *createInfo;
    XrWorldMeshDetectorML *detector;
    XrResult result;
};

struct xrDeleteSpatialAnchorsAsyncML_params
{
    XrSpatialAnchorsStorageML DECLSPEC_ALIGN(8) storage;
    const XrSpatialAnchorsDeleteInfoML *deleteInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrDeleteSpatialAnchorsCompleteML_params
{
    XrSpatialAnchorsStorageML DECLSPEC_ALIGN(8) storage;
    XrFutureEXT future;
    XrSpatialAnchorsDeleteCompletionML *completion;
    XrResult result;
};

struct xrDeserializeSceneMSFT_params
{
    XrSceneObserverMSFT DECLSPEC_ALIGN(8) sceneObserver;
    const XrSceneDeserializeInfoMSFT *deserializeInfo;
    XrResult result;
};

struct xrDestroyAction_params
{
    XrAction DECLSPEC_ALIGN(8) action;
    XrResult result;
};

struct xrDestroyActionSet_params
{
    XrActionSet DECLSPEC_ALIGN(8) actionSet;
    XrResult result;
};

struct xrDestroyAnchorBD_params
{
    XrAnchorBD DECLSPEC_ALIGN(8) anchor;
    XrResult result;
};

struct xrDestroyBodyTrackerBD_params
{
    XrBodyTrackerBD DECLSPEC_ALIGN(8) bodyTracker;
    XrResult result;
};

struct xrDestroyBodyTrackerFB_params
{
    XrBodyTrackerFB DECLSPEC_ALIGN(8) bodyTracker;
    XrResult result;
};

struct xrDestroyBodyTrackerHTC_params
{
    XrBodyTrackerHTC DECLSPEC_ALIGN(8) bodyTracker;
    XrResult result;
};

struct xrDestroyDeviceAnchorPersistenceANDROID_params
{
    XrDeviceAnchorPersistenceANDROID DECLSPEC_ALIGN(8) handle;
    XrResult result;
};

struct xrDestroyEnvironmentDepthProviderMETA_params
{
    XrEnvironmentDepthProviderMETA DECLSPEC_ALIGN(8) environmentDepthProvider;
    XrResult result;
};

struct xrDestroyEnvironmentDepthSwapchainMETA_params
{
    XrEnvironmentDepthSwapchainMETA DECLSPEC_ALIGN(8) swapchain;
    XrResult result;
};

struct xrDestroyExportedLocalizationMapML_params
{
    XrExportedLocalizationMapML DECLSPEC_ALIGN(8) map;
    XrResult result;
};

struct xrDestroyEyeTrackerFB_params
{
    XrEyeTrackerFB DECLSPEC_ALIGN(8) eyeTracker;
    XrResult result;
};

struct xrDestroyFaceTracker2FB_params
{
    XrFaceTracker2FB DECLSPEC_ALIGN(8) faceTracker;
    XrResult result;
};

struct xrDestroyFaceTrackerFB_params
{
    XrFaceTrackerFB DECLSPEC_ALIGN(8) faceTracker;
    XrResult result;
};

struct xrDestroyFacialExpressionClientML_params
{
    XrFacialExpressionClientML DECLSPEC_ALIGN(8) facialExpressionClient;
    XrResult result;
};

struct xrDestroyFacialTrackerHTC_params
{
    XrFacialTrackerHTC DECLSPEC_ALIGN(8) facialTracker;
    XrResult result;
};

struct xrDestroyFoveationProfileFB_params
{
    XrFoveationProfileFB DECLSPEC_ALIGN(8) profile;
    XrResult result;
};

struct xrDestroyGeometryInstanceFB_params
{
    XrGeometryInstanceFB DECLSPEC_ALIGN(8) instance;
    XrResult result;
};

struct xrDestroyHandTrackerEXT_params
{
    XrHandTrackerEXT DECLSPEC_ALIGN(8) handTracker;
    XrResult result;
};

struct xrDestroyInstance_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrResult result;
};

struct xrDestroyMarkerDetectorML_params
{
    XrMarkerDetectorML DECLSPEC_ALIGN(8) markerDetector;
    XrResult result;
};

struct xrDestroyPassthroughColorLutMETA_params
{
    XrPassthroughColorLutMETA DECLSPEC_ALIGN(8) colorLut;
    XrResult result;
};

struct xrDestroyPassthroughFB_params
{
    XrPassthroughFB DECLSPEC_ALIGN(8) passthrough;
    XrResult result;
};

struct xrDestroyPassthroughHTC_params
{
    XrPassthroughHTC DECLSPEC_ALIGN(8) passthrough;
    XrResult result;
};

struct xrDestroyPassthroughLayerFB_params
{
    XrPassthroughLayerFB DECLSPEC_ALIGN(8) layer;
    XrResult result;
};

struct xrDestroyPlaneDetectorEXT_params
{
    XrPlaneDetectorEXT DECLSPEC_ALIGN(8) planeDetector;
    XrResult result;
};

struct xrDestroyRenderModelAssetEXT_params
{
    XrRenderModelAssetEXT DECLSPEC_ALIGN(8) asset;
    XrResult result;
};

struct xrDestroyRenderModelEXT_params
{
    XrRenderModelEXT DECLSPEC_ALIGN(8) renderModel;
    XrResult result;
};

struct xrDestroySceneMSFT_params
{
    XrSceneMSFT DECLSPEC_ALIGN(8) scene;
    XrResult result;
};

struct xrDestroySceneObserverMSFT_params
{
    XrSceneObserverMSFT DECLSPEC_ALIGN(8) sceneObserver;
    XrResult result;
};

struct xrDestroySenseDataProviderBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    XrResult result;
};

struct xrDestroySenseDataSnapshotBD_params
{
    XrSenseDataSnapshotBD DECLSPEC_ALIGN(8) snapshot;
    XrResult result;
};

struct xrDestroySession_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrResult result;
};

struct xrDestroySpace_params
{
    XrSpace DECLSPEC_ALIGN(8) space;
    XrResult result;
};

struct xrDestroySpaceUserFB_params
{
    XrSpaceUserFB DECLSPEC_ALIGN(8) user;
    XrResult result;
};

struct xrDestroySpatialAnchorMSFT_params
{
    XrSpatialAnchorMSFT DECLSPEC_ALIGN(8) anchor;
    XrResult result;
};

struct xrDestroySpatialAnchorStoreConnectionMSFT_params
{
    XrSpatialAnchorStoreConnectionMSFT DECLSPEC_ALIGN(8) spatialAnchorStore;
    XrResult result;
};

struct xrDestroySpatialAnchorsStorageML_params
{
    XrSpatialAnchorsStorageML DECLSPEC_ALIGN(8) storage;
    XrResult result;
};

struct xrDestroySpatialContextEXT_params
{
    XrSpatialContextEXT DECLSPEC_ALIGN(8) spatialContext;
    XrResult result;
};

struct xrDestroySpatialEntityEXT_params
{
    XrSpatialEntityEXT DECLSPEC_ALIGN(8) spatialEntity;
    XrResult result;
};

struct xrDestroySpatialGraphNodeBindingMSFT_params
{
    XrSpatialGraphNodeBindingMSFT DECLSPEC_ALIGN(8) nodeBinding;
    XrResult result;
};

struct xrDestroySpatialPersistenceContextEXT_params
{
    XrSpatialPersistenceContextEXT DECLSPEC_ALIGN(8) persistenceContext;
    XrResult result;
};

struct xrDestroySpatialSnapshotEXT_params
{
    XrSpatialSnapshotEXT DECLSPEC_ALIGN(8) snapshot;
    XrResult result;
};

struct xrDestroySwapchain_params
{
    XrSwapchain DECLSPEC_ALIGN(8) swapchain;
    XrResult result;
};

struct xrDestroyTrackableTrackerANDROID_params
{
    XrTrackableTrackerANDROID DECLSPEC_ALIGN(8) trackableTracker;
    XrResult result;
};

struct xrDestroyTriangleMeshFB_params
{
    XrTriangleMeshFB DECLSPEC_ALIGN(8) mesh;
    XrResult result;
};

struct xrDestroyVirtualKeyboardMETA_params
{
    XrVirtualKeyboardMETA DECLSPEC_ALIGN(8) keyboard;
    XrResult result;
};

struct xrDestroyWorldMeshDetectorML_params
{
    XrWorldMeshDetectorML DECLSPEC_ALIGN(8) detector;
    XrResult result;
};

struct xrDiscoverSpacesMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpaceDiscoveryInfoMETA *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrDownloadSharedSpatialAnchorAsyncBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    const XrSharedSpatialAnchorDownloadInfoBD *info;
    XrFutureEXT *future;
    XrResult result;
};

struct xrDownloadSharedSpatialAnchorCompleteBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    XrFutureEXT future;
    XrFutureCompletionEXT *completion;
    XrResult result;
};

struct xrEnableLocalizationEventsML_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrLocalizationEnableEventsInfoML *info;
    XrResult result;
};

struct xrEnableUserCalibrationEventsML_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    const XrUserCalibrationEnableEventsInfoML *enableInfo;
    XrResult result;
};

struct xrEndFrame_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrFrameEndInfo *frameEndInfo;
    XrResult result;
};

struct xrEndSession_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrResult result;
};

struct xrEnumerateApiLayerProperties_params
{
    uint32_t propertyCapacityInput;
    uint32_t *propertyCountOutput;
    XrApiLayerProperties *properties;
    XrResult result;
};

struct xrEnumerateBoundSourcesForAction_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrBoundSourcesForActionEnumerateInfo *enumerateInfo;
    uint32_t sourceCapacityInput;
    uint32_t *sourceCountOutput;
    XrPath *sources;
    XrResult result;
};

struct xrEnumerateColorSpacesFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    uint32_t colorSpaceCapacityInput;
    uint32_t *colorSpaceCountOutput;
    XrColorSpaceFB *colorSpaces;
    XrResult result;
};

struct xrEnumerateDisplayRefreshRatesFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    uint32_t displayRefreshRateCapacityInput;
    uint32_t *displayRefreshRateCountOutput;
    float *displayRefreshRates;
    XrResult result;
};

struct xrEnumerateEnvironmentBlendModes_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    XrViewConfigurationType viewConfigurationType;
    uint32_t environmentBlendModeCapacityInput;
    uint32_t *environmentBlendModeCountOutput;
    XrEnvironmentBlendMode *environmentBlendModes;
    XrResult result;
};

struct xrEnumerateEnvironmentDepthSwapchainImagesMETA_params
{
    XrEnvironmentDepthSwapchainMETA DECLSPEC_ALIGN(8) swapchain;
    uint32_t imageCapacityInput;
    uint32_t *imageCountOutput;
    XrSwapchainImageBaseHeader *images;
    XrResult result;
};

struct xrEnumerateExternalCamerasOCULUS_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    uint32_t cameraCapacityInput;
    uint32_t *cameraCountOutput;
    XrExternalCameraOCULUS *cameras;
    XrResult result;
};

struct xrEnumerateInstanceExtensionProperties_params
{
    const char *layerName;
    uint32_t propertyCapacityInput;
    uint32_t *propertyCountOutput;
    XrExtensionProperties *properties;
    XrResult result;
};

struct xrEnumerateInteractionRenderModelIdsEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrInteractionRenderModelIdsEnumerateInfoEXT *getInfo;
    uint32_t renderModelIdCapacityInput;
    uint32_t *renderModelIdCountOutput;
    XrRenderModelIdEXT *renderModelIds;
    XrResult result;
};

struct xrEnumeratePerformanceMetricsCounterPathsMETA_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    uint32_t counterPathCapacityInput;
    uint32_t *counterPathCountOutput;
    XrPath *counterPaths;
    XrResult result;
};

struct xrEnumeratePersistedAnchorsANDROID_params
{
    XrDeviceAnchorPersistenceANDROID DECLSPEC_ALIGN(8) handle;
    uint32_t anchorIdCapacityInput;
    uint32_t *anchorIdCountOutput;
    XrUuidEXT *anchorIds;
    XrResult result;
};

struct xrEnumeratePersistedSpatialAnchorNamesMSFT_params
{
    XrSpatialAnchorStoreConnectionMSFT DECLSPEC_ALIGN(8) spatialAnchorStore;
    uint32_t spatialAnchorNameCapacityInput;
    uint32_t *spatialAnchorNameCountOutput;
    XrSpatialAnchorPersistenceNameMSFT *spatialAnchorNames;
    XrResult result;
};

struct xrEnumerateRaycastSupportedTrackableTypesANDROID_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    uint32_t trackableTypeCapacityInput;
    uint32_t *trackableTypeCountOutput;
    XrTrackableTypeANDROID *trackableTypes;
    XrResult result;
};

struct xrEnumerateReferenceSpaces_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    uint32_t spaceCapacityInput;
    uint32_t *spaceCountOutput;
    XrReferenceSpaceType *spaces;
    XrResult result;
};

struct xrEnumerateRenderModelPathsFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    uint32_t pathCapacityInput;
    uint32_t *pathCountOutput;
    XrRenderModelPathInfoFB *paths;
    XrResult result;
};

struct xrEnumerateRenderModelSubactionPathsEXT_params
{
    XrRenderModelEXT DECLSPEC_ALIGN(8) renderModel;
    const XrInteractionRenderModelSubactionPathInfoEXT *info;
    uint32_t pathCapacityInput;
    uint32_t *pathCountOutput;
    XrPath *paths;
    XrResult result;
};

struct xrEnumerateReprojectionModesMSFT_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    XrViewConfigurationType viewConfigurationType;
    uint32_t modeCapacityInput;
    uint32_t *modeCountOutput;
    XrReprojectionModeMSFT *modes;
    XrResult result;
};

struct xrEnumerateSceneComputeFeaturesMSFT_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    uint32_t featureCapacityInput;
    uint32_t *featureCountOutput;
    XrSceneComputeFeatureMSFT *features;
    XrResult result;
};

struct xrEnumerateSpaceSupportedComponentsFB_params
{
    XrSpace DECLSPEC_ALIGN(8) space;
    uint32_t componentTypeCapacityInput;
    uint32_t *componentTypeCountOutput;
    XrSpaceComponentTypeFB *componentTypes;
    XrResult result;
};

struct xrEnumerateSpatialCapabilitiesEXT_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    uint32_t capabilityCapacityInput;
    uint32_t *capabilityCountOutput;
    XrSpatialCapabilityEXT *capabilities;
    XrResult result;
};

struct xrEnumerateSpatialCapabilityComponentTypesEXT_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    XrSpatialCapabilityEXT capability;
    XrSpatialCapabilityComponentTypesEXT *capabilityComponents;
    XrResult result;
};

struct xrEnumerateSpatialCapabilityFeaturesEXT_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    XrSpatialCapabilityEXT capability;
    uint32_t capabilityFeatureCapacityInput;
    uint32_t *capabilityFeatureCountOutput;
    XrSpatialCapabilityFeatureEXT *capabilityFeatures;
    XrResult result;
};

struct xrEnumerateSpatialEntityComponentTypesBD_params
{
    XrSenseDataSnapshotBD DECLSPEC_ALIGN(8) snapshot;
    XrSpatialEntityIdBD entityId;
    uint32_t componentTypeCapacityInput;
    uint32_t *componentTypeCountOutput;
    XrSpatialEntityComponentTypeBD *componentTypes;
    XrResult result;
};

struct xrEnumerateSpatialPersistenceScopesEXT_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    uint32_t persistenceScopeCapacityInput;
    uint32_t *persistenceScopeCountOutput;
    XrSpatialPersistenceScopeEXT *persistenceScopes;
    XrResult result;
};

struct xrEnumerateSupportedAnchorTrackableTypesANDROID_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    uint32_t trackableTypeCapacityInput;
    uint32_t *trackableTypeCountOutput;
    XrTrackableTypeANDROID *trackableTypes;
    XrResult result;
};

struct xrEnumerateSupportedPersistenceAnchorTypesANDROID_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    uint32_t trackableTypeCapacityInput;
    uint32_t *trackableTypeCountOutput;
    XrTrackableTypeANDROID *trackableTypes;
    XrResult result;
};

struct xrEnumerateSupportedTrackableTypesANDROID_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    uint32_t trackableTypeCapacityInput;
    uint32_t *trackableTypeCountOutput;
    XrTrackableTypeANDROID *trackableTypes;
    XrResult result;
};

struct xrEnumerateSwapchainFormats_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    uint32_t formatCapacityInput;
    uint32_t *formatCountOutput;
    int64_t *formats;
    XrResult result;
};

struct xrEnumerateSwapchainImages_params
{
    XrSwapchain DECLSPEC_ALIGN(8) swapchain;
    uint32_t imageCapacityInput;
    uint32_t *imageCountOutput;
    XrSwapchainImageBaseHeader *images;
    XrResult result;
};

struct xrEnumerateViewConfigurationViews_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    XrViewConfigurationType viewConfigurationType;
    uint32_t viewCapacityInput;
    uint32_t *viewCountOutput;
    XrViewConfigurationView *views;
    XrResult result;
};

struct xrEnumerateViewConfigurations_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    uint32_t viewConfigurationTypeCapacityInput;
    uint32_t *viewConfigurationTypeCountOutput;
    XrViewConfigurationType *viewConfigurationTypes;
    XrResult result;
};

struct xrEnumerateViveTrackerPathsHTCX_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    uint32_t pathCapacityInput;
    uint32_t *pathCountOutput;
    XrViveTrackerPathsHTCX *paths;
    XrResult result;
};

struct xrEraseSpaceFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpaceEraseInfoFB *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrEraseSpacesMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpacesEraseInfoMETA *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrFreeWorldMeshBufferML_params
{
    XrWorldMeshDetectorML DECLSPEC_ALIGN(8) detector;
    const XrWorldMeshBufferML *buffer;
    XrResult result;
};

struct xrGeometryInstanceSetTransformFB_params
{
    XrGeometryInstanceFB DECLSPEC_ALIGN(8) instance;
    const XrGeometryInstanceTransformFB *transformation;
    XrResult result;
};

struct xrGetActionStateBoolean_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrActionStateGetInfo *getInfo;
    XrActionStateBoolean *state;
    XrResult result;
};

struct xrGetActionStateFloat_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrActionStateGetInfo *getInfo;
    XrActionStateFloat *state;
    XrResult result;
};

struct xrGetActionStatePose_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrActionStateGetInfo *getInfo;
    XrActionStatePose *state;
    XrResult result;
};

struct xrGetActionStateVector2f_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrActionStateGetInfo *getInfo;
    XrActionStateVector2f *state;
    XrResult result;
};

struct xrGetAllTrackablesANDROID_params
{
    XrTrackableTrackerANDROID DECLSPEC_ALIGN(8) trackableTracker;
    uint32_t trackableCapacityInput;
    uint32_t *trackableCountOutput;
    XrTrackableANDROID *trackables;
    XrResult result;
};

struct xrGetAnchorPersistStateANDROID_params
{
    XrDeviceAnchorPersistenceANDROID DECLSPEC_ALIGN(8) handle;
    const XrUuidEXT *anchorId;
    XrAnchorPersistStateANDROID *persistState;
    XrResult result;
};

struct xrGetAnchorUuidBD_params
{
    XrAnchorBD DECLSPEC_ALIGN(8) anchor;
    XrUuidEXT *uuid;
    XrResult result;
};

struct xrGetAudioInputDeviceGuidOculus_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    wchar_t *buffer;
    XrResult result;
};

struct xrGetAudioOutputDeviceGuidOculus_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    wchar_t *buffer;
    XrResult result;
};

struct xrGetBodySkeletonFB_params
{
    XrBodyTrackerFB DECLSPEC_ALIGN(8) bodyTracker;
    XrBodySkeletonFB *skeleton;
    XrResult result;
};

struct xrGetBodySkeletonHTC_params
{
    XrBodyTrackerHTC DECLSPEC_ALIGN(8) bodyTracker;
    XrSpace DECLSPEC_ALIGN(8) baseSpace;
    uint32_t skeletonGenerationId;
    XrBodySkeletonHTC *skeleton;
    XrResult result;
};

struct xrGetControllerModelKeyMSFT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrPath topLevelUserPath;
    XrControllerModelKeyStateMSFT *controllerModelKeyState;
    XrResult result;
};

struct xrGetControllerModelPropertiesMSFT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrControllerModelKeyMSFT modelKey;
    XrControllerModelPropertiesMSFT *properties;
    XrResult result;
};

struct xrGetControllerModelStateMSFT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrControllerModelKeyMSFT modelKey;
    XrControllerModelStateMSFT *state;
    XrResult result;
};

struct xrGetCurrentInteractionProfile_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrPath topLevelUserPath;
    XrInteractionProfileState *interactionProfile;
    XrResult result;
};

struct xrGetDeviceSampleRateFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrHapticActionInfo *hapticActionInfo;
    XrDevicePcmSampleRateGetInfoFB *deviceSampleRate;
    XrResult result;
};

struct xrGetDisplayRefreshRateFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    float *displayRefreshRate;
    XrResult result;
};

struct xrGetEnvironmentDepthSwapchainStateMETA_params
{
    XrEnvironmentDepthSwapchainMETA DECLSPEC_ALIGN(8) swapchain;
    XrEnvironmentDepthSwapchainStateMETA *state;
    XrResult result;
};

struct xrGetExportedLocalizationMapDataML_params
{
    XrExportedLocalizationMapML DECLSPEC_ALIGN(8) map;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    char *buffer;
    XrResult result;
};

struct xrGetEyeGazesFB_params
{
    XrEyeTrackerFB DECLSPEC_ALIGN(8) eyeTracker;
    const XrEyeGazesInfoFB *gazeInfo;
    XrEyeGazesFB *eyeGazes;
    XrResult result;
};

struct xrGetFaceExpressionWeights2FB_params
{
    XrFaceTracker2FB DECLSPEC_ALIGN(8) faceTracker;
    const XrFaceExpressionInfo2FB *expressionInfo;
    XrFaceExpressionWeights2FB *expressionWeights;
    XrResult result;
};

struct xrGetFaceExpressionWeightsFB_params
{
    XrFaceTrackerFB DECLSPEC_ALIGN(8) faceTracker;
    const XrFaceExpressionInfoFB *expressionInfo;
    XrFaceExpressionWeightsFB *expressionWeights;
    XrResult result;
};

struct xrGetFacialExpressionBlendShapePropertiesML_params
{
    XrFacialExpressionClientML DECLSPEC_ALIGN(8) facialExpressionClient;
    const XrFacialExpressionBlendShapeGetInfoML *blendShapeGetInfo;
    uint32_t blendShapeCount;
    XrFacialExpressionBlendShapePropertiesML *blendShapes;
    XrResult result;
};

struct xrGetFacialExpressionsHTC_params
{
    XrFacialTrackerHTC DECLSPEC_ALIGN(8) facialTracker;
    XrFacialExpressionsHTC *facialExpressions;
    XrResult result;
};

struct xrGetFoveationEyeTrackedStateMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrFoveationEyeTrackedStateMETA *foveationState;
    XrResult result;
};

struct xrGetHandMeshFB_params
{
    XrHandTrackerEXT DECLSPEC_ALIGN(8) handTracker;
    XrHandTrackingMeshFB *mesh;
    XrResult result;
};

struct xrGetInputSourceLocalizedName_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrInputSourceLocalizedNameGetInfo *getInfo;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    char *buffer;
    XrResult result;
};

struct xrGetInstanceProperties_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrInstanceProperties *instanceProperties;
    XrResult result;
};

struct xrGetMarkerDetectorStateML_params
{
    XrMarkerDetectorML DECLSPEC_ALIGN(8) markerDetector;
    XrMarkerDetectorStateML *state;
    XrResult result;
};

struct xrGetMarkerLengthML_params
{
    XrMarkerDetectorML DECLSPEC_ALIGN(8) markerDetector;
    XrMarkerML marker;
    float *meters;
    XrResult result;
};

struct xrGetMarkerNumberML_params
{
    XrMarkerDetectorML DECLSPEC_ALIGN(8) markerDetector;
    XrMarkerML marker;
    uint64_t *number;
    XrResult result;
};

struct xrGetMarkerReprojectionErrorML_params
{
    XrMarkerDetectorML DECLSPEC_ALIGN(8) markerDetector;
    XrMarkerML marker;
    float *reprojectionErrorMeters;
    XrResult result;
};

struct xrGetMarkerSizeVARJO_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    uint64_t DECLSPEC_ALIGN(8) markerId;
    XrExtent2Df *size;
    XrResult result;
};

struct xrGetMarkerStringML_params
{
    XrMarkerDetectorML DECLSPEC_ALIGN(8) markerDetector;
    XrMarkerML marker;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    char *buffer;
    XrResult result;
};

struct xrGetMarkersML_params
{
    XrMarkerDetectorML DECLSPEC_ALIGN(8) markerDetector;
    uint32_t markerCapacityInput;
    uint32_t *markerCountOutput;
    XrMarkerML *markers;
    XrResult result;
};

struct xrGetOpenGLGraphicsRequirementsKHR_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    XrGraphicsRequirementsOpenGLKHR *graphicsRequirements;
    XrResult result;
};

struct xrGetPassthroughCameraStateANDROID_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrPassthroughCameraStateGetInfoANDROID *getInfo;
    XrPassthroughCameraStateANDROID *cameraStateOutput;
    XrResult result;
};

struct xrGetPassthroughPreferencesMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrPassthroughPreferencesMETA *preferences;
    XrResult result;
};

struct xrGetPerformanceMetricsStateMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrPerformanceMetricsStateMETA *state;
    XrResult result;
};

struct xrGetPlaneDetectionStateEXT_params
{
    XrPlaneDetectorEXT DECLSPEC_ALIGN(8) planeDetector;
    XrPlaneDetectionStateEXT *state;
    XrResult result;
};

struct xrGetPlaneDetectionsEXT_params
{
    XrPlaneDetectorEXT DECLSPEC_ALIGN(8) planeDetector;
    const XrPlaneDetectorGetInfoEXT *info;
    XrPlaneDetectorLocationsEXT *locations;
    XrResult result;
};

struct xrGetPlanePolygonBufferEXT_params
{
    XrPlaneDetectorEXT DECLSPEC_ALIGN(8) planeDetector;
    uint64_t DECLSPEC_ALIGN(8) planeId;
    uint32_t polygonBufferIndex;
    XrPlaneDetectorPolygonBufferEXT *polygonBuffer;
    XrResult result;
};

struct xrGetQueriedSenseDataBD_params
{
    XrSenseDataSnapshotBD DECLSPEC_ALIGN(8) snapshot;
    XrQueriedSenseDataGetInfoBD *getInfo;
    XrQueriedSenseDataBD *queriedSenseData;
    XrResult result;
};

struct xrGetRecommendedLayerResolutionMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrRecommendedLayerResolutionGetInfoMETA *info;
    XrRecommendedLayerResolutionMETA *resolution;
    XrResult result;
};

struct xrGetReferenceSpaceBoundsRect_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrReferenceSpaceType referenceSpaceType;
    XrExtent2Df *bounds;
    XrResult result;
};

struct xrGetRenderModelAssetDataEXT_params
{
    XrRenderModelAssetEXT DECLSPEC_ALIGN(8) asset;
    const XrRenderModelAssetDataGetInfoEXT *getInfo;
    XrRenderModelAssetDataEXT *buffer;
    XrResult result;
};

struct xrGetRenderModelAssetPropertiesEXT_params
{
    XrRenderModelAssetEXT DECLSPEC_ALIGN(8) asset;
    const XrRenderModelAssetPropertiesGetInfoEXT *getInfo;
    XrRenderModelAssetPropertiesEXT *properties;
    XrResult result;
};

struct xrGetRenderModelPoseTopLevelUserPathEXT_params
{
    XrRenderModelEXT DECLSPEC_ALIGN(8) renderModel;
    const XrInteractionRenderModelTopLevelUserPathGetInfoEXT *info;
    XrPath *topLevelUserPath;
    XrResult result;
};

struct xrGetRenderModelPropertiesEXT_params
{
    XrRenderModelEXT DECLSPEC_ALIGN(8) renderModel;
    const XrRenderModelPropertiesGetInfoEXT *getInfo;
    XrRenderModelPropertiesEXT *properties;
    XrResult result;
};

struct xrGetRenderModelPropertiesFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrPath path;
    XrRenderModelPropertiesFB *properties;
    XrResult result;
};

struct xrGetRenderModelStateEXT_params
{
    XrRenderModelEXT DECLSPEC_ALIGN(8) renderModel;
    const XrRenderModelStateGetInfoEXT *getInfo;
    XrRenderModelStateEXT *state;
    XrResult result;
};

struct xrGetSceneComponentsMSFT_params
{
    XrSceneMSFT DECLSPEC_ALIGN(8) scene;
    const XrSceneComponentsGetInfoMSFT *getInfo;
    XrSceneComponentsMSFT *components;
    XrResult result;
};

struct xrGetSceneComputeStateMSFT_params
{
    XrSceneObserverMSFT DECLSPEC_ALIGN(8) sceneObserver;
    XrSceneComputeStateMSFT *state;
    XrResult result;
};

struct xrGetSceneMarkerDecodedStringMSFT_params
{
    XrSceneMSFT DECLSPEC_ALIGN(8) scene;
    const XrUuidMSFT *markerId;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    char *buffer;
    XrResult result;
};

struct xrGetSceneMarkerRawDataMSFT_params
{
    XrSceneMSFT DECLSPEC_ALIGN(8) scene;
    const XrUuidMSFT *markerId;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    uint8_t *buffer;
    XrResult result;
};

struct xrGetSceneMeshBuffersMSFT_params
{
    XrSceneMSFT DECLSPEC_ALIGN(8) scene;
    const XrSceneMeshBuffersGetInfoMSFT *getInfo;
    XrSceneMeshBuffersMSFT *buffers;
    XrResult result;
};

struct xrGetSenseDataProviderStateBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    XrSenseDataProviderStateBD *state;
    XrResult result;
};

struct xrGetSerializedSceneFragmentDataMSFT_params
{
    XrSceneMSFT DECLSPEC_ALIGN(8) scene;
    const XrSerializedSceneFragmentDataGetInfoMSFT *getInfo;
    uint32_t countInput;
    uint32_t *readOutput;
    uint8_t *buffer;
    XrResult result;
};

struct xrGetSpaceBoundary2DFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrSpace DECLSPEC_ALIGN(8) space;
    XrBoundary2DFB *boundary2DOutput;
    XrResult result;
};

struct xrGetSpaceBoundingBox2DFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrSpace DECLSPEC_ALIGN(8) space;
    XrRect2Df *boundingBox2DOutput;
    XrResult result;
};

struct xrGetSpaceBoundingBox3DFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrSpace DECLSPEC_ALIGN(8) space;
    XrRect3DfFB *boundingBox3DOutput;
    XrResult result;
};

struct xrGetSpaceComponentStatusFB_params
{
    XrSpace DECLSPEC_ALIGN(8) space;
    XrSpaceComponentTypeFB componentType;
    XrSpaceComponentStatusFB *status;
    XrResult result;
};

struct xrGetSpaceContainerFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrSpace DECLSPEC_ALIGN(8) space;
    XrSpaceContainerFB *spaceContainerOutput;
    XrResult result;
};

struct xrGetSpaceRoomLayoutFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrSpace DECLSPEC_ALIGN(8) space;
    XrRoomLayoutFB *roomLayoutOutput;
    XrResult result;
};

struct xrGetSpaceSemanticLabelsFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrSpace DECLSPEC_ALIGN(8) space;
    XrSemanticLabelsFB *semanticLabelsOutput;
    XrResult result;
};

struct xrGetSpaceTriangleMeshMETA_params
{
    XrSpace DECLSPEC_ALIGN(8) space;
    const XrSpaceTriangleMeshGetInfoMETA *getInfo;
    XrSpaceTriangleMeshMETA *triangleMeshOutput;
    XrResult result;
};

struct xrGetSpaceUserIdFB_params
{
    XrSpaceUserFB DECLSPEC_ALIGN(8) user;
    XrSpaceUserIdFB *userId;
    XrResult result;
};

struct xrGetSpaceUuidFB_params
{
    XrSpace DECLSPEC_ALIGN(8) space;
    XrUuidEXT *uuid;
    XrResult result;
};

struct xrGetSpatialAnchorNameHTC_params
{
    XrSpace DECLSPEC_ALIGN(8) anchor;
    XrSpatialAnchorNameHTC *name;
    XrResult result;
};

struct xrGetSpatialAnchorStateML_params
{
    XrSpace DECLSPEC_ALIGN(8) anchor;
    XrSpatialAnchorStateML *state;
    XrResult result;
};

struct xrGetSpatialBufferFloatEXT_params
{
    XrSpatialSnapshotEXT DECLSPEC_ALIGN(8) snapshot;
    const XrSpatialBufferGetInfoEXT *info;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    float *buffer;
    XrResult result;
};

struct xrGetSpatialBufferStringEXT_params
{
    XrSpatialSnapshotEXT DECLSPEC_ALIGN(8) snapshot;
    const XrSpatialBufferGetInfoEXT *info;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    char *buffer;
    XrResult result;
};

struct xrGetSpatialBufferUint16EXT_params
{
    XrSpatialSnapshotEXT DECLSPEC_ALIGN(8) snapshot;
    const XrSpatialBufferGetInfoEXT *info;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    uint16_t *buffer;
    XrResult result;
};

struct xrGetSpatialBufferUint32EXT_params
{
    XrSpatialSnapshotEXT DECLSPEC_ALIGN(8) snapshot;
    const XrSpatialBufferGetInfoEXT *info;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    uint32_t *buffer;
    XrResult result;
};

struct xrGetSpatialBufferUint8EXT_params
{
    XrSpatialSnapshotEXT DECLSPEC_ALIGN(8) snapshot;
    const XrSpatialBufferGetInfoEXT *info;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    uint8_t *buffer;
    XrResult result;
};

struct xrGetSpatialBufferVector2fEXT_params
{
    XrSpatialSnapshotEXT DECLSPEC_ALIGN(8) snapshot;
    const XrSpatialBufferGetInfoEXT *info;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    XrVector2f *buffer;
    XrResult result;
};

struct xrGetSpatialBufferVector3fEXT_params
{
    XrSpatialSnapshotEXT DECLSPEC_ALIGN(8) snapshot;
    const XrSpatialBufferGetInfoEXT *info;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    XrVector3f *buffer;
    XrResult result;
};

struct xrGetSpatialEntityComponentDataBD_params
{
    XrSenseDataSnapshotBD DECLSPEC_ALIGN(8) snapshot;
    const XrSpatialEntityComponentGetInfoBD *getInfo;
    XrSpatialEntityComponentDataBaseHeaderBD *componentData;
    XrResult result;
};

struct xrGetSpatialEntityUuidBD_params
{
    XrSenseDataSnapshotBD DECLSPEC_ALIGN(8) snapshot;
    XrSpatialEntityIdBD entityId;
    XrUuidEXT *uuid;
    XrResult result;
};

struct xrGetSpatialGraphNodeBindingPropertiesMSFT_params
{
    XrSpatialGraphNodeBindingMSFT DECLSPEC_ALIGN(8) nodeBinding;
    const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT *getInfo;
    XrSpatialGraphNodeBindingPropertiesMSFT *properties;
    XrResult result;
};

struct xrGetSwapchainStateFB_params
{
    XrSwapchain DECLSPEC_ALIGN(8) swapchain;
    XrSwapchainStateBaseHeaderFB *state;
    XrResult result;
};

struct xrGetSystem_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    const XrSystemGetInfo *getInfo;
    XrSystemId *systemId;
    XrResult result;
};

struct xrGetSystemProperties_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    XrSystemProperties *properties;
    XrResult result;
};

struct xrGetTrackableMarkerANDROID_params
{
    XrTrackableTrackerANDROID DECLSPEC_ALIGN(8) tracker;
    const XrTrackableGetInfoANDROID *getInfo;
    XrTrackableMarkerANDROID *markerOutput;
    XrResult result;
};

struct xrGetTrackableObjectANDROID_params
{
    XrTrackableTrackerANDROID DECLSPEC_ALIGN(8) tracker;
    const XrTrackableGetInfoANDROID *getInfo;
    XrTrackableObjectANDROID *objectOutput;
    XrResult result;
};

struct xrGetTrackablePlaneANDROID_params
{
    XrTrackableTrackerANDROID DECLSPEC_ALIGN(8) trackableTracker;
    const XrTrackableGetInfoANDROID *getInfo;
    XrTrackablePlaneANDROID *planeOutput;
    XrResult result;
};

struct xrGetViewConfigurationProperties_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    XrViewConfigurationType viewConfigurationType;
    XrViewConfigurationProperties *configurationProperties;
    XrResult result;
};

struct xrGetVirtualKeyboardDirtyTexturesMETA_params
{
    XrVirtualKeyboardMETA DECLSPEC_ALIGN(8) keyboard;
    uint32_t textureIdCapacityInput;
    uint32_t *textureIdCountOutput;
    uint64_t *textureIds;
    XrResult result;
};

struct xrGetVirtualKeyboardModelAnimationStatesMETA_params
{
    XrVirtualKeyboardMETA DECLSPEC_ALIGN(8) keyboard;
    XrVirtualKeyboardModelAnimationStatesMETA *animationStates;
    XrResult result;
};

struct xrGetVirtualKeyboardScaleMETA_params
{
    XrVirtualKeyboardMETA DECLSPEC_ALIGN(8) keyboard;
    float *scale;
    XrResult result;
};

struct xrGetVirtualKeyboardTextureDataMETA_params
{
    XrVirtualKeyboardMETA DECLSPEC_ALIGN(8) keyboard;
    uint64_t DECLSPEC_ALIGN(8) textureId;
    XrVirtualKeyboardTextureDataMETA *textureData;
    XrResult result;
};

struct xrGetVisibilityMaskKHR_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrViewConfigurationType viewConfigurationType;
    uint32_t viewIndex;
    XrVisibilityMaskTypeKHR visibilityMaskType;
    XrVisibilityMaskKHR *visibilityMask;
    XrResult result;
};

struct xrGetVulkanDeviceExtensionsKHR_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    char *buffer;
    XrResult result;
};

struct xrGetVulkanGraphicsDevice2KHR_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    const XrVulkanGraphicsDeviceGetInfoKHR *getInfo;
    VkPhysicalDevice *vulkanPhysicalDevice;
    XrResult result;
};

struct xrGetVulkanGraphicsDeviceKHR_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    VkInstance vkInstance;
    VkPhysicalDevice *vkPhysicalDevice;
    XrResult result;
};

struct xrGetVulkanGraphicsRequirements2KHR_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    XrGraphicsRequirementsVulkanKHR *graphicsRequirements;
    XrResult result;
};

struct xrGetVulkanGraphicsRequirementsKHR_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    XrGraphicsRequirementsVulkanKHR *graphicsRequirements;
    XrResult result;
};

struct xrGetVulkanInstanceExtensionsKHR_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrSystemId systemId;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    char *buffer;
    XrResult result;
};

struct xrGetWorldMeshBufferRecommendSizeML_params
{
    XrWorldMeshDetectorML DECLSPEC_ALIGN(8) detector;
    const XrWorldMeshBufferRecommendedSizeInfoML *sizeInfo;
    XrWorldMeshBufferSizeML *size;
    XrResult result;
};

struct xrImportLocalizationMapML_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrLocalizationMapImportInfoML *importInfo;
    XrUuidEXT *mapUuid;
    XrResult result;
};

struct xrLoadControllerModelMSFT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrControllerModelKeyMSFT modelKey;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    uint8_t *buffer;
    XrResult result;
};

struct xrLoadRenderModelFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrRenderModelLoadInfoFB *info;
    XrRenderModelBufferFB *buffer;
    XrResult result;
};

struct xrLocateBodyJointsBD_params
{
    XrBodyTrackerBD DECLSPEC_ALIGN(8) bodyTracker;
    const XrBodyJointsLocateInfoBD *locateInfo;
    XrBodyJointLocationsBD *locations;
    XrResult result;
};

struct xrLocateBodyJointsFB_params
{
    XrBodyTrackerFB DECLSPEC_ALIGN(8) bodyTracker;
    const XrBodyJointsLocateInfoFB *locateInfo;
    XrBodyJointLocationsFB *locations;
    XrResult result;
};

struct xrLocateBodyJointsHTC_params
{
    XrBodyTrackerHTC DECLSPEC_ALIGN(8) bodyTracker;
    const XrBodyJointsLocateInfoHTC *locateInfo;
    XrBodyJointLocationsHTC *locations;
    XrResult result;
};

struct xrLocateHandJointsEXT_params
{
    XrHandTrackerEXT DECLSPEC_ALIGN(8) handTracker;
    const XrHandJointsLocateInfoEXT *locateInfo;
    XrHandJointLocationsEXT *locations;
    XrResult result;
};

struct xrLocateSceneComponentsMSFT_params
{
    XrSceneMSFT DECLSPEC_ALIGN(8) scene;
    const XrSceneComponentsLocateInfoMSFT *locateInfo;
    XrSceneComponentLocationsMSFT *locations;
    XrResult result;
};

struct xrLocateSpace_params
{
    XrSpace DECLSPEC_ALIGN(8) space;
    XrSpace DECLSPEC_ALIGN(8) baseSpace;
    XrTime DECLSPEC_ALIGN(8) time;
    XrSpaceLocation *location;
    XrResult result;
};

struct xrLocateSpaces_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpacesLocateInfo *locateInfo;
    XrSpaceLocations *spaceLocations;
    XrResult result;
};

struct xrLocateSpacesKHR_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpacesLocateInfo *locateInfo;
    XrSpaceLocations *spaceLocations;
    XrResult result;
};

struct xrLocateViews_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrViewLocateInfo *viewLocateInfo;
    XrViewState *viewState;
    uint32_t viewCapacityInput;
    uint32_t *viewCountOutput;
    XrView *views;
    XrResult result;
};

struct xrPassthroughLayerPauseFB_params
{
    XrPassthroughLayerFB DECLSPEC_ALIGN(8) layer;
    XrResult result;
};

struct xrPassthroughLayerResumeFB_params
{
    XrPassthroughLayerFB DECLSPEC_ALIGN(8) layer;
    XrResult result;
};

struct xrPassthroughLayerSetKeyboardHandsIntensityFB_params
{
    XrPassthroughLayerFB DECLSPEC_ALIGN(8) layer;
    const XrPassthroughKeyboardHandsIntensityFB *intensity;
    XrResult result;
};

struct xrPassthroughLayerSetStyleFB_params
{
    XrPassthroughLayerFB DECLSPEC_ALIGN(8) layer;
    const XrPassthroughStyleFB *style;
    XrResult result;
};

struct xrPassthroughPauseFB_params
{
    XrPassthroughFB DECLSPEC_ALIGN(8) passthrough;
    XrResult result;
};

struct xrPassthroughStartFB_params
{
    XrPassthroughFB DECLSPEC_ALIGN(8) passthrough;
    XrResult result;
};

struct xrPathToString_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrPath path;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    char *buffer;
    XrResult result;
};

struct xrPauseSimultaneousHandsAndControllersTrackingMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSimultaneousHandsAndControllersTrackingPauseInfoMETA *pauseInfo;
    XrResult result;
};

struct xrPerfSettingsSetPerformanceLevelEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrPerfSettingsDomainEXT domain;
    XrPerfSettingsLevelEXT level;
    XrResult result;
};

struct xrPersistAnchorANDROID_params
{
    XrDeviceAnchorPersistenceANDROID DECLSPEC_ALIGN(8) handle;
    const XrPersistedAnchorSpaceInfoANDROID *persistedInfo;
    XrUuidEXT *anchorIdOutput;
    XrResult result;
};

struct xrPersistSpatialAnchorAsyncBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    const XrSpatialAnchorPersistInfoBD *info;
    XrFutureEXT *future;
    XrResult result;
};

struct xrPersistSpatialAnchorCompleteBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    XrFutureEXT future;
    XrFutureCompletionEXT *completion;
    XrResult result;
};

struct xrPersistSpatialAnchorMSFT_params
{
    XrSpatialAnchorStoreConnectionMSFT DECLSPEC_ALIGN(8) spatialAnchorStore;
    const XrSpatialAnchorPersistenceInfoMSFT *spatialAnchorPersistenceInfo;
    XrResult result;
};

struct xrPersistSpatialEntityAsyncEXT_params
{
    XrSpatialPersistenceContextEXT DECLSPEC_ALIGN(8) persistenceContext;
    const XrSpatialEntityPersistInfoEXT *persistInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrPersistSpatialEntityCompleteEXT_params
{
    XrSpatialPersistenceContextEXT DECLSPEC_ALIGN(8) persistenceContext;
    XrFutureEXT future;
    XrPersistSpatialEntityCompletionEXT *completion;
    XrResult result;
};

struct xrPollEvent_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrEventDataBuffer *eventData;
    XrResult result;
};

struct xrPollFutureEXT_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    const XrFuturePollInfoEXT *pollInfo;
    XrFuturePollResultEXT *pollResult;
    XrResult result;
};

struct xrPublishSpatialAnchorsAsyncML_params
{
    XrSpatialAnchorsStorageML DECLSPEC_ALIGN(8) storage;
    const XrSpatialAnchorsPublishInfoML *publishInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrPublishSpatialAnchorsCompleteML_params
{
    XrSpatialAnchorsStorageML DECLSPEC_ALIGN(8) storage;
    XrFutureEXT future;
    XrSpatialAnchorsPublishCompletionML *completion;
    XrResult result;
};

struct xrQueryLocalizationMapsML_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrLocalizationMapQueryInfoBaseHeaderML *queryInfo;
    uint32_t mapCapacityInput;
    uint32_t *mapCountOutput;
    XrLocalizationMapML *maps;
    XrResult result;
};

struct xrQueryPerformanceMetricsCounterMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrPath counterPath;
    XrPerformanceMetricsCounterMETA *counter;
    XrResult result;
};

struct xrQuerySenseDataAsyncBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    const XrSenseDataQueryInfoBD *queryInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrQuerySenseDataCompleteBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    XrFutureEXT future;
    XrSenseDataQueryCompletionBD *completion;
    XrResult result;
};

struct xrQuerySpacesFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpaceQueryInfoBaseHeaderFB *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrQuerySpatialAnchorsAsyncML_params
{
    XrSpatialAnchorsStorageML DECLSPEC_ALIGN(8) storage;
    const XrSpatialAnchorsQueryInfoBaseHeaderML *queryInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrQuerySpatialAnchorsCompleteML_params
{
    XrSpatialAnchorsStorageML DECLSPEC_ALIGN(8) storage;
    XrFutureEXT future;
    XrSpatialAnchorsQueryCompletionML *completion;
    XrResult result;
};

struct xrQuerySpatialComponentDataEXT_params
{
    XrSpatialSnapshotEXT DECLSPEC_ALIGN(8) snapshot;
    const XrSpatialComponentDataQueryConditionEXT *queryCondition;
    XrSpatialComponentDataQueryResultEXT *queryResult;
    XrResult result;
};

struct xrQuerySystemTrackedKeyboardFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrKeyboardTrackingQueryFB *queryInfo;
    XrKeyboardTrackingDescriptionFB *keyboard;
    XrResult result;
};

struct xrRaycastANDROID_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrRaycastInfoANDROID *rayInfo;
    XrRaycastHitResultsANDROID *results;
    XrResult result;
};

struct xrReleaseSwapchainImage_params
{
    XrSwapchain DECLSPEC_ALIGN(8) swapchain;
    const XrSwapchainImageReleaseInfo *releaseInfo;
    XrResult result;
};

struct xrRequestDisplayRefreshRateFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    float displayRefreshRate;
    XrResult result;
};

struct xrRequestExitSession_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrResult result;
};

struct xrRequestMapLocalizationML_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrMapLocalizationRequestInfoML *requestInfo;
    XrResult result;
};

struct xrRequestSceneCaptureFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSceneCaptureRequestInfoFB *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrRequestWorldMeshAsyncML_params
{
    XrWorldMeshDetectorML DECLSPEC_ALIGN(8) detector;
    const XrWorldMeshGetInfoML *getInfo;
    XrWorldMeshBufferML *buffer;
    XrFutureEXT *future;
    XrResult result;
};

struct xrRequestWorldMeshCompleteML_params
{
    XrWorldMeshDetectorML DECLSPEC_ALIGN(8) detector;
    const XrWorldMeshRequestCompletionInfoML *completionInfo;
    XrFutureEXT future;
    XrWorldMeshRequestCompletionML *completion;
    XrResult result;
};

struct xrRequestWorldMeshStateAsyncML_params
{
    XrWorldMeshDetectorML DECLSPEC_ALIGN(8) detector;
    const XrWorldMeshStateRequestInfoML *stateRequest;
    XrFutureEXT *future;
    XrResult result;
};

struct xrRequestWorldMeshStateCompleteML_params
{
    XrWorldMeshDetectorML DECLSPEC_ALIGN(8) detector;
    XrFutureEXT future;
    XrWorldMeshStateRequestCompletionML *completion;
    XrResult result;
};

struct xrResetBodyTrackingCalibrationMETA_params
{
    XrBodyTrackerFB DECLSPEC_ALIGN(8) bodyTracker;
    XrResult result;
};

struct xrResultToString_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrResult value;
    char *buffer;
    XrResult result;
};

struct xrResumeSimultaneousHandsAndControllersTrackingMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSimultaneousHandsAndControllersTrackingResumeInfoMETA *resumeInfo;
    XrResult result;
};

struct xrRetrieveSpaceDiscoveryResultsMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrAsyncRequestIdFB requestId;
    XrSpaceDiscoveryResultsMETA *results;
    XrResult result;
};

struct xrRetrieveSpaceQueryResultsFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrAsyncRequestIdFB requestId;
    XrSpaceQueryResultsFB *results;
    XrResult result;
};

struct xrSaveSpaceFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpaceSaveInfoFB *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrSaveSpaceListFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpaceListSaveInfoFB *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrSaveSpacesMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpacesSaveInfoMETA *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrSendVirtualKeyboardInputMETA_params
{
    XrVirtualKeyboardMETA DECLSPEC_ALIGN(8) keyboard;
    const XrVirtualKeyboardInputInfoMETA *info;
    XrPosef *interactorRootPose;
    XrResult result;
};

struct xrSetColorSpaceFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrColorSpaceFB colorSpace;
    XrResult result;
};

struct xrSetDigitalLensControlALMALENCE_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrDigitalLensControlALMALENCE *digitalLensControl;
    XrResult result;
};

struct xrSetEnvironmentDepthEstimationVARJO_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrBool32 enabled;
    XrResult result;
};

struct xrSetEnvironmentDepthHandRemovalMETA_params
{
    XrEnvironmentDepthProviderMETA DECLSPEC_ALIGN(8) environmentDepthProvider;
    const XrEnvironmentDepthHandRemovalSetInfoMETA *setInfo;
    XrResult result;
};

struct xrSetInputDeviceActiveEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrPath interactionProfile;
    XrPath topLevelPath;
    XrBool32 isActive;
    XrResult result;
};

struct xrSetInputDeviceLocationEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrPath topLevelPath;
    XrPath inputSourcePath;
    XrSpace DECLSPEC_ALIGN(8) space;
    XrPosef pose;
    XrResult result;
};

struct xrSetInputDeviceStateBoolEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrPath topLevelPath;
    XrPath inputSourcePath;
    XrBool32 state;
    XrResult result;
};

struct xrSetInputDeviceStateFloatEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrPath topLevelPath;
    XrPath inputSourcePath;
    float state;
    XrResult result;
};

struct xrSetInputDeviceStateVector2fEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrPath topLevelPath;
    XrPath inputSourcePath;
    XrVector2f state;
    XrResult result;
};

struct xrSetMarkerTrackingPredictionVARJO_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    uint64_t DECLSPEC_ALIGN(8) markerId;
    XrBool32 enable;
    XrResult result;
};

struct xrSetMarkerTrackingTimeoutVARJO_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    uint64_t DECLSPEC_ALIGN(8) markerId;
    XrDuration timeout;
    XrResult result;
};

struct xrSetMarkerTrackingVARJO_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrBool32 enabled;
    XrResult result;
};

struct xrSetPerformanceMetricsStateMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrPerformanceMetricsStateMETA *state;
    XrResult result;
};

struct xrSetSpaceComponentStatusFB_params
{
    XrSpace DECLSPEC_ALIGN(8) space;
    const XrSpaceComponentStatusSetInfoFB *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrSetSystemNotificationsML_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    const XrSystemNotificationsSetInfoML *info;
    XrResult result;
};

struct xrSetTrackingOptimizationSettingsHintQCOM_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrTrackingOptimizationSettingsDomainQCOM domain;
    XrTrackingOptimizationSettingsHintQCOM hint;
    XrResult result;
};

struct xrSetViewOffsetVARJO_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    float offset;
    XrResult result;
};

struct xrSetVirtualKeyboardModelVisibilityMETA_params
{
    XrVirtualKeyboardMETA DECLSPEC_ALIGN(8) keyboard;
    const XrVirtualKeyboardModelVisibilitySetInfoMETA *modelVisibility;
    XrResult result;
};

struct xrShareSpacesFB_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpaceShareInfoFB *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrShareSpacesMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrShareSpacesInfoMETA *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrShareSpatialAnchorAsyncBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    const XrSpatialAnchorShareInfoBD *info;
    XrFutureEXT *future;
    XrResult result;
};

struct xrShareSpatialAnchorCompleteBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    XrFutureEXT future;
    XrFutureCompletionEXT *completion;
    XrResult result;
};

struct xrSnapshotMarkerDetectorML_params
{
    XrMarkerDetectorML DECLSPEC_ALIGN(8) markerDetector;
    XrMarkerDetectorSnapshotInfoML *snapshotInfo;
    XrResult result;
};

struct xrStartColocationAdvertisementMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrColocationAdvertisementStartInfoMETA *info;
    XrAsyncRequestIdFB *advertisementRequestId;
    XrResult result;
};

struct xrStartColocationDiscoveryMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrColocationDiscoveryStartInfoMETA *info;
    XrAsyncRequestIdFB *discoveryRequestId;
    XrResult result;
};

struct xrStartEnvironmentDepthProviderMETA_params
{
    XrEnvironmentDepthProviderMETA DECLSPEC_ALIGN(8) environmentDepthProvider;
    XrResult result;
};

struct xrStartSenseDataProviderAsyncBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    const XrSenseDataProviderStartInfoBD *startInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrStartSenseDataProviderCompleteBD_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrFutureEXT future;
    XrFutureCompletionEXT *completion;
    XrResult result;
};

struct xrStopColocationAdvertisementMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrColocationAdvertisementStopInfoMETA *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrStopColocationDiscoveryMETA_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrColocationDiscoveryStopInfoMETA *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrStopEnvironmentDepthProviderMETA_params
{
    XrEnvironmentDepthProviderMETA DECLSPEC_ALIGN(8) environmentDepthProvider;
    XrResult result;
};

struct xrStopHapticFeedback_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrHapticActionInfo *hapticActionInfo;
    XrResult result;
};

struct xrStopSenseDataProviderBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    XrResult result;
};

struct xrStringToPath_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    const char *pathString;
    XrPath *path;
    XrResult result;
};

struct xrStructureTypeToString_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrStructureType value;
    char *buffer;
    XrResult result;
};

struct xrStructureTypeToString2KHR_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    XrStructureType value;
    char *buffer;
    XrResult result;
};

struct xrSuggestBodyTrackingCalibrationOverrideMETA_params
{
    XrBodyTrackerFB DECLSPEC_ALIGN(8) bodyTracker;
    const XrBodyTrackingCalibrationInfoMETA *calibrationInfo;
    XrResult result;
};

struct xrSuggestInteractionProfileBindings_params
{
    XrInstance DECLSPEC_ALIGN(8) instance;
    const XrInteractionProfileSuggestedBinding *suggestedBindings;
    XrResult result;
};

struct xrSuggestVirtualKeyboardLocationMETA_params
{
    XrVirtualKeyboardMETA DECLSPEC_ALIGN(8) keyboard;
    const XrVirtualKeyboardLocationInfoMETA *locationInfo;
    XrResult result;
};

struct xrSyncActions_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrActionsSyncInfo *syncInfo;
    XrResult result;
};

struct xrThermalGetTemperatureTrendEXT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    XrPerfSettingsDomainEXT domain;
    XrPerfSettingsNotificationLevelEXT *notificationLevel;
    float *tempHeadroom;
    float *tempSlope;
    XrResult result;
};

struct xrTriangleMeshBeginUpdateFB_params
{
    XrTriangleMeshFB DECLSPEC_ALIGN(8) mesh;
    XrResult result;
};

struct xrTriangleMeshBeginVertexBufferUpdateFB_params
{
    XrTriangleMeshFB DECLSPEC_ALIGN(8) mesh;
    uint32_t *outVertexCount;
    XrResult result;
};

struct xrTriangleMeshEndUpdateFB_params
{
    XrTriangleMeshFB DECLSPEC_ALIGN(8) mesh;
    uint32_t vertexCount;
    uint32_t triangleCount;
    XrResult result;
};

struct xrTriangleMeshEndVertexBufferUpdateFB_params
{
    XrTriangleMeshFB DECLSPEC_ALIGN(8) mesh;
    XrResult result;
};

struct xrTriangleMeshGetIndexBufferFB_params
{
    XrTriangleMeshFB DECLSPEC_ALIGN(8) mesh;
    uint32_t **outIndexBuffer;
    XrResult result;
};

struct xrTriangleMeshGetVertexBufferFB_params
{
    XrTriangleMeshFB DECLSPEC_ALIGN(8) mesh;
    XrVector3f **outVertexBuffer;
    XrResult result;
};

struct xrTryCreateSpatialGraphStaticNodeBindingMSFT_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrSpatialGraphStaticNodeBindingCreateInfoMSFT *createInfo;
    XrSpatialGraphNodeBindingMSFT *nodeBinding;
    XrResult result;
};

struct xrUnpersistAnchorANDROID_params
{
    XrDeviceAnchorPersistenceANDROID DECLSPEC_ALIGN(8) handle;
    const XrUuidEXT *anchorId;
    XrResult result;
};

struct xrUnpersistSpatialAnchorAsyncBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    const XrSpatialAnchorUnpersistInfoBD *info;
    XrFutureEXT *future;
    XrResult result;
};

struct xrUnpersistSpatialAnchorCompleteBD_params
{
    XrSenseDataProviderBD DECLSPEC_ALIGN(8) provider;
    XrFutureEXT future;
    XrFutureCompletionEXT *completion;
    XrResult result;
};

struct xrUnpersistSpatialAnchorMSFT_params
{
    XrSpatialAnchorStoreConnectionMSFT DECLSPEC_ALIGN(8) spatialAnchorStore;
    const XrSpatialAnchorPersistenceNameMSFT *spatialAnchorPersistenceName;
    XrResult result;
};

struct xrUnpersistSpatialEntityAsyncEXT_params
{
    XrSpatialPersistenceContextEXT DECLSPEC_ALIGN(8) persistenceContext;
    const XrSpatialEntityUnpersistInfoEXT *unpersistInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrUnpersistSpatialEntityCompleteEXT_params
{
    XrSpatialPersistenceContextEXT DECLSPEC_ALIGN(8) persistenceContext;
    XrFutureEXT future;
    XrUnpersistSpatialEntityCompletionEXT *completion;
    XrResult result;
};

struct xrUpdateHandMeshMSFT_params
{
    XrHandTrackerEXT DECLSPEC_ALIGN(8) handTracker;
    const XrHandMeshUpdateInfoMSFT *updateInfo;
    XrHandMeshMSFT *handMesh;
    XrResult result;
};

struct xrUpdatePassthroughColorLutMETA_params
{
    XrPassthroughColorLutMETA DECLSPEC_ALIGN(8) colorLut;
    const XrPassthroughColorLutUpdateInfoMETA *updateInfo;
    XrResult result;
};

struct xrUpdateSpatialAnchorsExpirationAsyncML_params
{
    XrSpatialAnchorsStorageML DECLSPEC_ALIGN(8) storage;
    const XrSpatialAnchorsUpdateExpirationInfoML *updateInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrUpdateSpatialAnchorsExpirationCompleteML_params
{
    XrSpatialAnchorsStorageML DECLSPEC_ALIGN(8) storage;
    XrFutureEXT future;
    XrSpatialAnchorsUpdateExpirationCompletionML *completion;
    XrResult result;
};

struct xrUpdateSwapchainFB_params
{
    XrSwapchain DECLSPEC_ALIGN(8) swapchain;
    const XrSwapchainStateBaseHeaderFB *state;
    XrResult result;
};

struct xrWaitFrame_params
{
    XrSession DECLSPEC_ALIGN(8) session;
    const XrFrameWaitInfo *frameWaitInfo;
    XrFrameState *frameState;
    XrResult result;
};

struct xrWaitSwapchainImage_params
{
    XrSwapchain DECLSPEC_ALIGN(8) swapchain;
    const XrSwapchainImageWaitInfo *waitInfo;
    XrResult result;
};

#endif /* __WINE_OPENXR_LOADER_THUNKS_H */
