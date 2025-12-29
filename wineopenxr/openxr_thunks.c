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

#if 0
#pragma makedep unix
#endif

#include "config.h"

#include <stdlib.h>

#include "openxr_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(openxr);

#ifdef __GNUC__
static void __attribute__((used)) __wine_debug_channel_warning_suppressor(void)
{
    (void)__wine_dbch___default;
}
#endif

#ifdef _WIN64
static inline void convert_XrInstanceCreateInfo_win64_to_host(struct conversion_context *ctx, const XrInstanceCreateInfo *in, XrInstanceCreateInfo *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure *out_header = (void *)out;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->createFlags = in->createFlags;
    out->applicationInfo = in->applicationInfo;
    out->enabledApiLayerCount = in->enabledApiLayerCount;
    out->enabledApiLayerNames = in->enabledApiLayerNames;
    out->enabledExtensionCount = in->enabledExtensionCount;
    out->enabledExtensionNames = in->enabledExtensionNames;

    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        default:
            if ((in_header->type >> 16) == 0x7ead)
            {
                XrBaseOutStructure *out_ext = conversion_context_alloc(ctx, 32);
                memcpy(out_ext, in_header, 32);
                out_ext->next = NULL;
                out_header->next = (void *)out_ext;
                out_header = (void *)out_ext;
            }
            else
            {
                FIXME("Unhandled type %u.\n", in_header->type);
            }
            break;
        }
    }
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrAcquireEnvironmentDepthImageMETA(void *args)
{
    struct
    {
        PTR32 environmentDepthProvider;
        PTR32 acquireInfo;
        PTR32 environmentDepthImage;
        XrResult result;
    } *params = args;
    XrEnvironmentDepthImageAcquireInfoMETA acquireInfo_host;
    XrEnvironmentDepthImageMETA environmentDepthImage_host;

    TRACE("%#x, %#x, %#x\n", params->environmentDepthProvider, params->acquireInfo, params->environmentDepthImage);

    convert_XrEnvironmentDepthImageAcquireInfoMETA_win32_to_host((const XrEnvironmentDepthImageAcquireInfoMETA32 *)UlongToPtr(params->acquireInfo), &acquireInfo_host);
    convert_XrEnvironmentDepthImageMETA_win32_to_host((XrEnvironmentDepthImageMETA32 *)UlongToPtr(params->environmentDepthImage), &environmentDepthImage_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrAcquireEnvironmentDepthImageMETA((XrEnvironmentDepthProviderMETA)UlongToPtr(params->environmentDepthProvider), &acquireInfo_host, &environmentDepthImage_host);
    convert_XrEnvironmentDepthImageMETA_host_to_win32(&environmentDepthImage_host, (XrEnvironmentDepthImageMETA32 *)UlongToPtr(params->environmentDepthImage));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrAcquireEnvironmentDepthImageMETA(void *args)
{
    struct xrAcquireEnvironmentDepthImageMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->environmentDepthProvider, params->acquireInfo, params->environmentDepthImage);

    params->result = g_xr_host_instance_dispatch_table.p_xrAcquireEnvironmentDepthImageMETA(params->environmentDepthProvider, params->acquireInfo, params->environmentDepthImage);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrAcquireSwapchainImage(void *args)
{
    struct
    {
        PTR32 swapchain;
        PTR32 acquireInfo;
        PTR32 index;
        XrResult result;
    } *params = args;
    XrSwapchainImageAcquireInfo *acquireInfo_host = NULL;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->swapchain, params->acquireInfo, params->index);

    init_conversion_context(ctx);
    if (params->acquireInfo)
    {
        acquireInfo_host = conversion_context_alloc(ctx, sizeof(*acquireInfo_host));
        convert_XrSwapchainImageAcquireInfo_win32_to_host((const XrSwapchainImageAcquireInfo32 *)UlongToPtr(params->acquireInfo), acquireInfo_host);
    }
    params->result = g_xr_host_instance_dispatch_table.p_xrAcquireSwapchainImage(wine_swapchain_from_handle((XrSwapchain)UlongToPtr(params->swapchain))->host_swapchain, acquireInfo_host, (uint32_t *)UlongToPtr(params->index));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrAcquireSwapchainImage(void *args)
{
    struct xrAcquireSwapchainImage_params *params = args;

    TRACE("%p, %p, %p\n", params->swapchain, params->acquireInfo, params->index);

    params->result = g_xr_host_instance_dispatch_table.p_xrAcquireSwapchainImage(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->acquireInfo, params->index);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrAllocateWorldMeshBufferML(void *args)
{
    struct
    {
        PTR32 detector;
        PTR32 size;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrWorldMeshBufferSizeML size_host;
    XrWorldMeshBufferML buffer_host;

    TRACE("%#x, %#x, %#x\n", params->detector, params->size, params->buffer);

    convert_XrWorldMeshBufferSizeML_win32_to_host((const XrWorldMeshBufferSizeML32 *)UlongToPtr(params->size), &size_host);
    convert_XrWorldMeshBufferML_win32_to_host((XrWorldMeshBufferML32 *)UlongToPtr(params->buffer), &buffer_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrAllocateWorldMeshBufferML((XrWorldMeshDetectorML)UlongToPtr(params->detector), &size_host, &buffer_host);
    convert_XrWorldMeshBufferML_host_to_win32(&buffer_host, (XrWorldMeshBufferML32 *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrAllocateWorldMeshBufferML(void *args)
{
    struct xrAllocateWorldMeshBufferML_params *params = args;

    TRACE("%p, %p, %p\n", params->detector, params->size, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrAllocateWorldMeshBufferML(params->detector, params->size, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrApplyForceFeedbackCurlMNDX(void *args)
{
    struct
    {
        PTR32 handTracker;
        PTR32 locations;
        XrResult result;
    } *params = args;
    XrForceFeedbackCurlApplyLocationsMNDX locations_host;

    TRACE("%#x, %#x\n", params->handTracker, params->locations);

    convert_XrForceFeedbackCurlApplyLocationsMNDX_win32_to_host((const XrForceFeedbackCurlApplyLocationsMNDX32 *)UlongToPtr(params->locations), &locations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrApplyForceFeedbackCurlMNDX((XrHandTrackerEXT)UlongToPtr(params->handTracker), &locations_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrApplyForceFeedbackCurlMNDX(void *args)
{
    struct xrApplyForceFeedbackCurlMNDX_params *params = args;

    TRACE("%p, %p\n", params->handTracker, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrApplyForceFeedbackCurlMNDX(params->handTracker, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrApplyHapticFeedback(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 hapticActionInfo;
        PTR32 hapticFeedback;
        XrResult result;
    } *params = args;
    XrHapticActionInfo hapticActionInfo_host;
    XrHapticBaseHeader hapticFeedback_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->hapticActionInfo, params->hapticFeedback);

    convert_XrHapticActionInfo_win32_to_host((const XrHapticActionInfo32 *)UlongToPtr(params->hapticActionInfo), &hapticActionInfo_host);
    convert_XrHapticBaseHeader_win32_to_host((const XrHapticBaseHeader32 *)UlongToPtr(params->hapticFeedback), &hapticFeedback_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrApplyHapticFeedback(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &hapticActionInfo_host, &hapticFeedback_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrApplyHapticFeedback(void *args)
{
    struct xrApplyHapticFeedback_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->hapticActionInfo, params->hapticFeedback);

    params->result = g_xr_host_instance_dispatch_table.p_xrApplyHapticFeedback(wine_session_from_handle(params->session)->host_session, params->hapticActionInfo, params->hapticFeedback);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrAttachSessionActionSets(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 attachInfo;
        XrResult result;
    } *params = args;
    XrSessionActionSetsAttachInfo attachInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x\n", params->session, params->attachInfo);

    init_conversion_context(ctx);
    convert_XrSessionActionSetsAttachInfo_win32_to_host(ctx, (const XrSessionActionSetsAttachInfo32 *)UlongToPtr(params->attachInfo), &attachInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrAttachSessionActionSets(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &attachInfo_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrAttachSessionActionSets(void *args)
{
    struct xrAttachSessionActionSets_params *params = args;

    TRACE("%p, %p\n", params->session, params->attachInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrAttachSessionActionSets(wine_session_from_handle(params->session)->host_session, params->attachInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrBeginFrame(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 frameBeginInfo;
        XrResult result;
    } *params = args;
    XrFrameBeginInfo *frameBeginInfo_host = NULL;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x\n", params->session, params->frameBeginInfo);

    init_conversion_context(ctx);
    if (params->frameBeginInfo)
    {
        frameBeginInfo_host = conversion_context_alloc(ctx, sizeof(*frameBeginInfo_host));
        convert_XrFrameBeginInfo_win32_to_host((const XrFrameBeginInfo32 *)UlongToPtr(params->frameBeginInfo), frameBeginInfo_host);
    }
    params->result = g_xr_host_instance_dispatch_table.p_xrBeginFrame(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, frameBeginInfo_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrBeginFrame(void *args)
{
    struct xrBeginFrame_params *params = args;

    TRACE("%p, %p\n", params->session, params->frameBeginInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrBeginFrame(wine_session_from_handle(params->session)->host_session, params->frameBeginInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrBeginPlaneDetectionEXT(void *args)
{
    struct
    {
        PTR32 planeDetector;
        PTR32 beginInfo;
        XrResult result;
    } *params = args;
    XrPlaneDetectorBeginInfoEXT beginInfo_host;

    TRACE("%#x, %#x\n", params->planeDetector, params->beginInfo);

    convert_XrPlaneDetectorBeginInfoEXT_win32_to_host((const XrPlaneDetectorBeginInfoEXT32 *)UlongToPtr(params->beginInfo), &beginInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrBeginPlaneDetectionEXT((XrPlaneDetectorEXT)UlongToPtr(params->planeDetector), &beginInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrBeginPlaneDetectionEXT(void *args)
{
    struct xrBeginPlaneDetectionEXT_params *params = args;

    TRACE("%p, %p\n", params->planeDetector, params->beginInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrBeginPlaneDetectionEXT(params->planeDetector, params->beginInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrBeginSession(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 beginInfo;
        XrResult result;
    } *params = args;
    XrSessionBeginInfo beginInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x\n", params->session, params->beginInfo);

    init_conversion_context(ctx);
    convert_XrSessionBeginInfo_win32_to_host(ctx, (const XrSessionBeginInfo32 *)UlongToPtr(params->beginInfo), &beginInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrBeginSession(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &beginInfo_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrBeginSession(void *args)
{
    struct xrBeginSession_params *params = args;

    TRACE("%p, %p\n", params->session, params->beginInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrBeginSession(wine_session_from_handle(params->session)->host_session, params->beginInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCancelFutureEXT(void *args)
{
    struct
    {
        PTR32 instance;
        PTR32 cancelInfo;
        XrResult result;
    } *params = args;
    XrFutureCancelInfoEXT cancelInfo_host;

    TRACE("%#x, %#x\n", params->instance, params->cancelInfo);

    convert_XrFutureCancelInfoEXT_win32_to_host((const XrFutureCancelInfoEXT32 *)UlongToPtr(params->cancelInfo), &cancelInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCancelFutureEXT(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, &cancelInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCancelFutureEXT(void *args)
{
    struct xrCancelFutureEXT_params *params = args;

    TRACE("%p, %p\n", params->instance, params->cancelInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrCancelFutureEXT(wine_instance_from_handle(params->instance)->host_instance, params->cancelInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCaptureSceneAsyncBD(void *args)
{
    struct
    {
        PTR32 provider;
        PTR32 info;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSceneCaptureInfoBD info_host;

    TRACE("%#x, %#x, %#x\n", params->provider, params->info, params->future);

    convert_XrSceneCaptureInfoBD_win32_to_host((const XrSceneCaptureInfoBD32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCaptureSceneAsyncBD((XrSenseDataProviderBD)UlongToPtr(params->provider), &info_host, (XrFutureEXT *)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCaptureSceneAsyncBD(void *args)
{
    struct xrCaptureSceneAsyncBD_params *params = args;

    TRACE("%p, %p, %p\n", params->provider, params->info, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrCaptureSceneAsyncBD(params->provider, params->info, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCaptureSceneCompleteBD(void *args)
{
    struct
    {
        PTR32 provider;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrFutureCompletionEXT completion_host;

    TRACE("%#x, %p, %#x\n", params->provider, params->future, params->completion);

    convert_XrFutureCompletionEXT_win32_to_host((XrFutureCompletionEXT32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCaptureSceneCompleteBD((XrSenseDataProviderBD)UlongToPtr(params->provider), params->future, &completion_host);
    convert_XrFutureCompletionEXT_host_to_win32(&completion_host, (XrFutureCompletionEXT32 *)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCaptureSceneCompleteBD(void *args)
{
    struct xrCaptureSceneCompleteBD_params *params = args;

    TRACE("%p, %p, %p\n", params->provider, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrCaptureSceneCompleteBD(params->provider, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrChangeVirtualKeyboardTextContextMETA(void *args)
{
    struct
    {
        PTR32 keyboard;
        PTR32 changeInfo;
        XrResult result;
    } *params = args;
    XrVirtualKeyboardTextContextChangeInfoMETA changeInfo_host;

    TRACE("%#x, %#x\n", params->keyboard, params->changeInfo);

    convert_XrVirtualKeyboardTextContextChangeInfoMETA_win32_to_host((const XrVirtualKeyboardTextContextChangeInfoMETA32 *)UlongToPtr(params->changeInfo), &changeInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrChangeVirtualKeyboardTextContextMETA((XrVirtualKeyboardMETA)UlongToPtr(params->keyboard), &changeInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrChangeVirtualKeyboardTextContextMETA(void *args)
{
    struct xrChangeVirtualKeyboardTextContextMETA_params *params = args;

    TRACE("%p, %p\n", params->keyboard, params->changeInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrChangeVirtualKeyboardTextContextMETA(params->keyboard, params->changeInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrClearSpatialAnchorStoreMSFT(void *args)
{
    struct
    {
        PTR32 spatialAnchorStore;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->spatialAnchorStore);

    params->result = g_xr_host_instance_dispatch_table.p_xrClearSpatialAnchorStoreMSFT((XrSpatialAnchorStoreConnectionMSFT)UlongToPtr(params->spatialAnchorStore));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrClearSpatialAnchorStoreMSFT(void *args)
{
    struct xrClearSpatialAnchorStoreMSFT_params *params = args;

    TRACE("%p\n", params->spatialAnchorStore);

    params->result = g_xr_host_instance_dispatch_table.p_xrClearSpatialAnchorStoreMSFT(params->spatialAnchorStore);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrComputeNewSceneMSFT(void *args)
{
    struct
    {
        PTR32 sceneObserver;
        PTR32 computeInfo;
        XrResult result;
    } *params = args;
    XrNewSceneComputeInfoMSFT computeInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x\n", params->sceneObserver, params->computeInfo);

    init_conversion_context(ctx);
    convert_XrNewSceneComputeInfoMSFT_win32_to_host(ctx, (const XrNewSceneComputeInfoMSFT32 *)UlongToPtr(params->computeInfo), &computeInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrComputeNewSceneMSFT((XrSceneObserverMSFT)UlongToPtr(params->sceneObserver), &computeInfo_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrComputeNewSceneMSFT(void *args)
{
    struct xrComputeNewSceneMSFT_params *params = args;

    TRACE("%p, %p\n", params->sceneObserver, params->computeInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrComputeNewSceneMSFT(params->sceneObserver, params->computeInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateAction(void *args)
{
    struct
    {
        PTR32 actionSet;
        PTR32 createInfo;
        PTR32 action;
        XrResult result;
    } *params = args;
    XrActionCreateInfo createInfo_host;
    XrAction action_host;

    TRACE("%#x, %#x, %#x\n", params->actionSet, params->createInfo, params->action);

    convert_XrActionCreateInfo_win32_to_host((const XrActionCreateInfo32 *)UlongToPtr(params->createInfo), &createInfo_host);
    action_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->action));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateAction((XrActionSet)UlongToPtr(params->actionSet), &createInfo_host, &action_host);
    *(PTR32 *)UlongToPtr(params->action) = PtrToUlong(action_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateAction(void *args)
{
    struct xrCreateAction_params *params = args;

    TRACE("%p, %p, %p\n", params->actionSet, params->createInfo, params->action);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateAction(params->actionSet, params->createInfo, params->action);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateActionSet(void *args)
{
    struct
    {
        PTR32 instance;
        PTR32 createInfo;
        PTR32 actionSet;
        XrResult result;
    } *params = args;
    XrActionSetCreateInfo createInfo_host;
    XrActionSet actionSet_host;

    TRACE("%#x, %#x, %#x\n", params->instance, params->createInfo, params->actionSet);

    convert_XrActionSetCreateInfo_win32_to_host((const XrActionSetCreateInfo32 *)UlongToPtr(params->createInfo), &createInfo_host);
    actionSet_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->actionSet));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateActionSet(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, &createInfo_host, &actionSet_host);
    *(PTR32 *)UlongToPtr(params->actionSet) = PtrToUlong(actionSet_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateActionSet(void *args)
{
    struct xrCreateActionSet_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->createInfo, params->actionSet);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateActionSet(wine_instance_from_handle(params->instance)->host_instance, params->createInfo, params->actionSet);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateActionSpace(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrActionSpaceCreateInfo createInfo_host;
    XrSpace space_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->space);

    convert_XrActionSpaceCreateInfo_win32_to_host((const XrActionSpaceCreateInfo32 *)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateActionSpace(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &space_host);
    *(PTR32 *)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateActionSpace(void *args)
{
    struct xrCreateActionSpace_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateActionSpace(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateAnchorSpaceANDROID(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 anchorOutput;
        XrResult result;
    } *params = args;
    XrAnchorSpaceCreateInfoANDROID createInfo_host;
    XrSpace anchorOutput_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->anchorOutput);

    convert_XrAnchorSpaceCreateInfoANDROID_win32_to_host((const XrAnchorSpaceCreateInfoANDROID32 *)UlongToPtr(params->createInfo), &createInfo_host);
    anchorOutput_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->anchorOutput));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateAnchorSpaceANDROID(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &anchorOutput_host);
    *(PTR32 *)UlongToPtr(params->anchorOutput) = PtrToUlong(anchorOutput_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateAnchorSpaceANDROID(void *args)
{
    struct xrCreateAnchorSpaceANDROID_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->anchorOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateAnchorSpaceANDROID(wine_session_from_handle(params->session)->host_session, params->createInfo, params->anchorOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateAnchorSpaceBD(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrAnchorSpaceCreateInfoBD createInfo_host;
    XrSpace space_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->space);

    convert_XrAnchorSpaceCreateInfoBD_win32_to_host((const XrAnchorSpaceCreateInfoBD32 *)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateAnchorSpaceBD(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &space_host);
    *(PTR32 *)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateAnchorSpaceBD(void *args)
{
    struct xrCreateAnchorSpaceBD_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateAnchorSpaceBD(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateBodyTrackerBD(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 bodyTracker;
        XrResult result;
    } *params = args;
    XrBodyTrackerCreateInfoBD createInfo_host;
    XrBodyTrackerBD bodyTracker_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->bodyTracker);

    convert_XrBodyTrackerCreateInfoBD_win32_to_host((const XrBodyTrackerCreateInfoBD32 *)UlongToPtr(params->createInfo), &createInfo_host);
    bodyTracker_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->bodyTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateBodyTrackerBD(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &bodyTracker_host);
    *(PTR32 *)UlongToPtr(params->bodyTracker) = PtrToUlong(bodyTracker_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateBodyTrackerBD(void *args)
{
    struct xrCreateBodyTrackerBD_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->bodyTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateBodyTrackerBD(wine_session_from_handle(params->session)->host_session, params->createInfo, params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateBodyTrackerFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 bodyTracker;
        XrResult result;
    } *params = args;
    XrBodyTrackerCreateInfoFB createInfo_host;
    XrBodyTrackerFB bodyTracker_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->bodyTracker);

    convert_XrBodyTrackerCreateInfoFB_win32_to_host((const XrBodyTrackerCreateInfoFB32 *)UlongToPtr(params->createInfo), &createInfo_host);
    bodyTracker_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->bodyTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateBodyTrackerFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &bodyTracker_host);
    *(PTR32 *)UlongToPtr(params->bodyTracker) = PtrToUlong(bodyTracker_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateBodyTrackerFB(void *args)
{
    struct xrCreateBodyTrackerFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->bodyTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateBodyTrackerFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateBodyTrackerHTC(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 bodyTracker;
        XrResult result;
    } *params = args;
    XrBodyTrackerCreateInfoHTC createInfo_host;
    XrBodyTrackerHTC bodyTracker_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->bodyTracker);

    convert_XrBodyTrackerCreateInfoHTC_win32_to_host((const XrBodyTrackerCreateInfoHTC32 *)UlongToPtr(params->createInfo), &createInfo_host);
    bodyTracker_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->bodyTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateBodyTrackerHTC(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &bodyTracker_host);
    *(PTR32 *)UlongToPtr(params->bodyTracker) = PtrToUlong(bodyTracker_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateBodyTrackerHTC(void *args)
{
    struct xrCreateBodyTrackerHTC_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->bodyTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateBodyTrackerHTC(wine_session_from_handle(params->session)->host_session, params->createInfo, params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateDeviceAnchorPersistenceANDROID(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 outHandle;
        XrResult result;
    } *params = args;
    XrDeviceAnchorPersistenceCreateInfoANDROID createInfo_host;
    XrDeviceAnchorPersistenceANDROID outHandle_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->outHandle);

    convert_XrDeviceAnchorPersistenceCreateInfoANDROID_win32_to_host((const XrDeviceAnchorPersistenceCreateInfoANDROID32 *)UlongToPtr(params->createInfo), &createInfo_host);
    outHandle_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->outHandle));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateDeviceAnchorPersistenceANDROID(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &outHandle_host);
    *(PTR32 *)UlongToPtr(params->outHandle) = PtrToUlong(outHandle_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateDeviceAnchorPersistenceANDROID(void *args)
{
    struct xrCreateDeviceAnchorPersistenceANDROID_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->outHandle);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateDeviceAnchorPersistenceANDROID(wine_session_from_handle(params->session)->host_session, params->createInfo, params->outHandle);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateEnvironmentDepthProviderMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 environmentDepthProvider;
        XrResult result;
    } *params = args;
    XrEnvironmentDepthProviderCreateInfoMETA createInfo_host;
    XrEnvironmentDepthProviderMETA environmentDepthProvider_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->environmentDepthProvider);

    convert_XrEnvironmentDepthProviderCreateInfoMETA_win32_to_host((const XrEnvironmentDepthProviderCreateInfoMETA32 *)UlongToPtr(params->createInfo), &createInfo_host);
    environmentDepthProvider_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->environmentDepthProvider));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateEnvironmentDepthProviderMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &environmentDepthProvider_host);
    *(PTR32 *)UlongToPtr(params->environmentDepthProvider) = PtrToUlong(environmentDepthProvider_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateEnvironmentDepthProviderMETA(void *args)
{
    struct xrCreateEnvironmentDepthProviderMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->environmentDepthProvider);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateEnvironmentDepthProviderMETA(wine_session_from_handle(params->session)->host_session, params->createInfo, params->environmentDepthProvider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateEnvironmentDepthSwapchainMETA(void *args)
{
    struct
    {
        PTR32 environmentDepthProvider;
        PTR32 createInfo;
        PTR32 swapchain;
        XrResult result;
    } *params = args;
    XrEnvironmentDepthSwapchainCreateInfoMETA createInfo_host;
    XrEnvironmentDepthSwapchainMETA swapchain_host;

    TRACE("%#x, %#x, %#x\n", params->environmentDepthProvider, params->createInfo, params->swapchain);

    convert_XrEnvironmentDepthSwapchainCreateInfoMETA_win32_to_host((const XrEnvironmentDepthSwapchainCreateInfoMETA32 *)UlongToPtr(params->createInfo), &createInfo_host);
    swapchain_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->swapchain));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateEnvironmentDepthSwapchainMETA((XrEnvironmentDepthProviderMETA)UlongToPtr(params->environmentDepthProvider), &createInfo_host, &swapchain_host);
    *(PTR32 *)UlongToPtr(params->swapchain) = PtrToUlong(swapchain_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateEnvironmentDepthSwapchainMETA(void *args)
{
    struct xrCreateEnvironmentDepthSwapchainMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->environmentDepthProvider, params->createInfo, params->swapchain);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateEnvironmentDepthSwapchainMETA(params->environmentDepthProvider, params->createInfo, params->swapchain);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateExportedLocalizationMapML(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 mapUuid;
        PTR32 map;
        XrResult result;
    } *params = args;
    XrExportedLocalizationMapML map_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->mapUuid, params->map);

    map_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->map));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateExportedLocalizationMapML(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, (const XrUuidEXT *)UlongToPtr(params->mapUuid), &map_host);
    *(PTR32 *)UlongToPtr(params->map) = PtrToUlong(map_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateExportedLocalizationMapML(void *args)
{
    struct xrCreateExportedLocalizationMapML_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->mapUuid, params->map);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateExportedLocalizationMapML(wine_session_from_handle(params->session)->host_session, params->mapUuid, params->map);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateEyeTrackerFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 eyeTracker;
        XrResult result;
    } *params = args;
    XrEyeTrackerCreateInfoFB createInfo_host;
    XrEyeTrackerFB eyeTracker_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->eyeTracker);

    convert_XrEyeTrackerCreateInfoFB_win32_to_host((const XrEyeTrackerCreateInfoFB32 *)UlongToPtr(params->createInfo), &createInfo_host);
    eyeTracker_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->eyeTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateEyeTrackerFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &eyeTracker_host);
    *(PTR32 *)UlongToPtr(params->eyeTracker) = PtrToUlong(eyeTracker_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateEyeTrackerFB(void *args)
{
    struct xrCreateEyeTrackerFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->eyeTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateEyeTrackerFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->eyeTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateFaceTracker2FB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 faceTracker;
        XrResult result;
    } *params = args;
    XrFaceTrackerCreateInfo2FB createInfo_host;
    XrFaceTracker2FB faceTracker_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->faceTracker);

    convert_XrFaceTrackerCreateInfo2FB_win32_to_host((const XrFaceTrackerCreateInfo2FB32 *)UlongToPtr(params->createInfo), &createInfo_host);
    faceTracker_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->faceTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFaceTracker2FB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &faceTracker_host);
    *(PTR32 *)UlongToPtr(params->faceTracker) = PtrToUlong(faceTracker_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateFaceTracker2FB(void *args)
{
    struct xrCreateFaceTracker2FB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->faceTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFaceTracker2FB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->faceTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateFaceTrackerFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 faceTracker;
        XrResult result;
    } *params = args;
    XrFaceTrackerCreateInfoFB createInfo_host;
    XrFaceTrackerFB faceTracker_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->faceTracker);

    convert_XrFaceTrackerCreateInfoFB_win32_to_host((const XrFaceTrackerCreateInfoFB32 *)UlongToPtr(params->createInfo), &createInfo_host);
    faceTracker_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->faceTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFaceTrackerFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &faceTracker_host);
    *(PTR32 *)UlongToPtr(params->faceTracker) = PtrToUlong(faceTracker_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateFaceTrackerFB(void *args)
{
    struct xrCreateFaceTrackerFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->faceTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFaceTrackerFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->faceTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateFacialExpressionClientML(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 facialExpressionClient;
        XrResult result;
    } *params = args;
    XrFacialExpressionClientCreateInfoML createInfo_host;
    XrFacialExpressionClientML facialExpressionClient_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->facialExpressionClient);

    convert_XrFacialExpressionClientCreateInfoML_win32_to_host((const XrFacialExpressionClientCreateInfoML32 *)UlongToPtr(params->createInfo), &createInfo_host);
    facialExpressionClient_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->facialExpressionClient));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFacialExpressionClientML(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &facialExpressionClient_host);
    *(PTR32 *)UlongToPtr(params->facialExpressionClient) = PtrToUlong(facialExpressionClient_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateFacialExpressionClientML(void *args)
{
    struct xrCreateFacialExpressionClientML_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->facialExpressionClient);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFacialExpressionClientML(wine_session_from_handle(params->session)->host_session, params->createInfo, params->facialExpressionClient);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateFacialTrackerHTC(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 facialTracker;
        XrResult result;
    } *params = args;
    XrFacialTrackerCreateInfoHTC createInfo_host;
    XrFacialTrackerHTC facialTracker_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->facialTracker);

    convert_XrFacialTrackerCreateInfoHTC_win32_to_host((const XrFacialTrackerCreateInfoHTC32 *)UlongToPtr(params->createInfo), &createInfo_host);
    facialTracker_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->facialTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFacialTrackerHTC(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &facialTracker_host);
    *(PTR32 *)UlongToPtr(params->facialTracker) = PtrToUlong(facialTracker_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateFacialTrackerHTC(void *args)
{
    struct xrCreateFacialTrackerHTC_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->facialTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFacialTrackerHTC(wine_session_from_handle(params->session)->host_session, params->createInfo, params->facialTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateFoveationProfileFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 profile;
        XrResult result;
    } *params = args;
    XrFoveationProfileCreateInfoFB createInfo_host;
    XrFoveationProfileFB profile_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->profile);

    init_conversion_context(ctx);
    convert_XrFoveationProfileCreateInfoFB_win32_to_host(ctx, (const XrFoveationProfileCreateInfoFB32 *)UlongToPtr(params->createInfo), &createInfo_host);
    profile_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->profile));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFoveationProfileFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &profile_host);
    convert_XrFoveationProfileCreateInfoFB_host_to_win32(&createInfo_host, (const XrFoveationProfileCreateInfoFB32 *)UlongToPtr(params->createInfo));
    *(PTR32 *)UlongToPtr(params->profile) = PtrToUlong(profile_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateFoveationProfileFB(void *args)
{
    struct xrCreateFoveationProfileFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->profile);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFoveationProfileFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->profile);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateGeometryInstanceFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 outGeometryInstance;
        XrResult result;
    } *params = args;
    XrGeometryInstanceCreateInfoFB createInfo_host;
    XrGeometryInstanceFB outGeometryInstance_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->outGeometryInstance);

    convert_XrGeometryInstanceCreateInfoFB_win32_to_host((const XrGeometryInstanceCreateInfoFB32 *)UlongToPtr(params->createInfo), &createInfo_host);
    outGeometryInstance_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->outGeometryInstance));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateGeometryInstanceFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &outGeometryInstance_host);
    *(PTR32 *)UlongToPtr(params->outGeometryInstance) = PtrToUlong(outGeometryInstance_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateGeometryInstanceFB(void *args)
{
    struct xrCreateGeometryInstanceFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->outGeometryInstance);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateGeometryInstanceFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->outGeometryInstance);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateHandMeshSpaceMSFT(void *args)
{
    struct
    {
        PTR32 handTracker;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrHandMeshSpaceCreateInfoMSFT createInfo_host;
    XrSpace space_host;

    TRACE("%#x, %#x, %#x\n", params->handTracker, params->createInfo, params->space);

    convert_XrHandMeshSpaceCreateInfoMSFT_win32_to_host((const XrHandMeshSpaceCreateInfoMSFT32 *)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateHandMeshSpaceMSFT((XrHandTrackerEXT)UlongToPtr(params->handTracker), &createInfo_host, &space_host);
    *(PTR32 *)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateHandMeshSpaceMSFT(void *args)
{
    struct xrCreateHandMeshSpaceMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->handTracker, params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateHandMeshSpaceMSFT(params->handTracker, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateHandTrackerEXT(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 handTracker;
        XrResult result;
    } *params = args;
    XrHandTrackerCreateInfoEXT createInfo_host;
    XrHandTrackerEXT handTracker_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->handTracker);

    init_conversion_context(ctx);
    convert_XrHandTrackerCreateInfoEXT_win32_to_host(ctx, (const XrHandTrackerCreateInfoEXT32 *)UlongToPtr(params->createInfo), &createInfo_host);
    handTracker_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->handTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateHandTrackerEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &handTracker_host);
    *(PTR32 *)UlongToPtr(params->handTracker) = PtrToUlong(handTracker_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateHandTrackerEXT(void *args)
{
    struct xrCreateHandTrackerEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->handTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateHandTrackerEXT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->handTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateInstance(void *args)
{
    struct
    {
        PTR32 createInfo;
        PTR32 instance;
        XrResult result;
    } *params = args;
    XrInstanceCreateInfo createInfo_host;
    XrInstance instance_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x\n", params->createInfo, params->instance);

    init_conversion_context(ctx);
    convert_XrInstanceCreateInfo_win32_to_host(ctx, (const XrInstanceCreateInfo32 *)UlongToPtr(params->createInfo), &createInfo_host);
    instance_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->instance));
    params->result = wine_xrCreateInstance(&createInfo_host, &instance_host);
    *(PTR32 *)UlongToPtr(params->instance) = PtrToUlong(instance_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateInstance(void *args)
{
    struct xrCreateInstance_params *params = args;
    XrInstanceCreateInfo createInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%p, %p\n", params->createInfo, params->instance);

    init_conversion_context(ctx);
    convert_XrInstanceCreateInfo_win64_to_host(ctx, params->createInfo, &createInfo_host);
    params->result = wine_xrCreateInstance(&createInfo_host, params->instance);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateKeyboardSpaceFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 keyboardSpace;
        XrResult result;
    } *params = args;
    XrKeyboardSpaceCreateInfoFB createInfo_host;
    XrSpace keyboardSpace_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->keyboardSpace);

    convert_XrKeyboardSpaceCreateInfoFB_win32_to_host((const XrKeyboardSpaceCreateInfoFB32 *)UlongToPtr(params->createInfo), &createInfo_host);
    keyboardSpace_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->keyboardSpace));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateKeyboardSpaceFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &keyboardSpace_host);
    *(PTR32 *)UlongToPtr(params->keyboardSpace) = PtrToUlong(keyboardSpace_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateKeyboardSpaceFB(void *args)
{
    struct xrCreateKeyboardSpaceFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->keyboardSpace);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateKeyboardSpaceFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->keyboardSpace);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateMarkerDetectorML(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 markerDetector;
        XrResult result;
    } *params = args;
    XrMarkerDetectorCreateInfoML createInfo_host;
    XrMarkerDetectorML markerDetector_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->markerDetector);

    init_conversion_context(ctx);
    convert_XrMarkerDetectorCreateInfoML_win32_to_host(ctx, (const XrMarkerDetectorCreateInfoML32 *)UlongToPtr(params->createInfo), &createInfo_host);
    markerDetector_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->markerDetector));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateMarkerDetectorML(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &markerDetector_host);
    *(PTR32 *)UlongToPtr(params->markerDetector) = PtrToUlong(markerDetector_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateMarkerDetectorML(void *args)
{
    struct xrCreateMarkerDetectorML_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->markerDetector);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateMarkerDetectorML(wine_session_from_handle(params->session)->host_session, params->createInfo, params->markerDetector);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateMarkerSpaceML(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrMarkerSpaceCreateInfoML createInfo_host;
    XrSpace space_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->space);

    convert_XrMarkerSpaceCreateInfoML_win32_to_host((const XrMarkerSpaceCreateInfoML32 *)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateMarkerSpaceML(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &space_host);
    *(PTR32 *)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateMarkerSpaceML(void *args)
{
    struct xrCreateMarkerSpaceML_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateMarkerSpaceML(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateMarkerSpaceVARJO(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrMarkerSpaceCreateInfoVARJO createInfo_host;
    XrSpace space_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->space);

    convert_XrMarkerSpaceCreateInfoVARJO_win32_to_host((const XrMarkerSpaceCreateInfoVARJO32 *)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateMarkerSpaceVARJO(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &space_host);
    *(PTR32 *)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateMarkerSpaceVARJO(void *args)
{
    struct xrCreateMarkerSpaceVARJO_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateMarkerSpaceVARJO(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreatePassthroughColorLutMETA(void *args)
{
    struct
    {
        PTR32 passthrough;
        PTR32 createInfo;
        PTR32 colorLut;
        XrResult result;
    } *params = args;
    XrPassthroughColorLutCreateInfoMETA createInfo_host;
    XrPassthroughColorLutMETA colorLut_host;

    TRACE("%#x, %#x, %#x\n", params->passthrough, params->createInfo, params->colorLut);

    convert_XrPassthroughColorLutCreateInfoMETA_win32_to_host((const XrPassthroughColorLutCreateInfoMETA32 *)UlongToPtr(params->createInfo), &createInfo_host);
    colorLut_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->colorLut));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughColorLutMETA((XrPassthroughFB)UlongToPtr(params->passthrough), &createInfo_host, &colorLut_host);
    *(PTR32 *)UlongToPtr(params->colorLut) = PtrToUlong(colorLut_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePassthroughColorLutMETA(void *args)
{
    struct xrCreatePassthroughColorLutMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->passthrough, params->createInfo, params->colorLut);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughColorLutMETA(params->passthrough, params->createInfo, params->colorLut);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreatePassthroughFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 outPassthrough;
        XrResult result;
    } *params = args;
    XrPassthroughCreateInfoFB createInfo_host;
    XrPassthroughFB outPassthrough_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->outPassthrough);

    convert_XrPassthroughCreateInfoFB_win32_to_host((const XrPassthroughCreateInfoFB32 *)UlongToPtr(params->createInfo), &createInfo_host);
    outPassthrough_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->outPassthrough));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &outPassthrough_host);
    *(PTR32 *)UlongToPtr(params->outPassthrough) = PtrToUlong(outPassthrough_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePassthroughFB(void *args)
{
    struct xrCreatePassthroughFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->outPassthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->outPassthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreatePassthroughHTC(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 passthrough;
        XrResult result;
    } *params = args;
    XrPassthroughCreateInfoHTC createInfo_host;
    XrPassthroughHTC passthrough_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->passthrough);

    convert_XrPassthroughCreateInfoHTC_win32_to_host((const XrPassthroughCreateInfoHTC32 *)UlongToPtr(params->createInfo), &createInfo_host);
    passthrough_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->passthrough));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughHTC(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &passthrough_host);
    *(PTR32 *)UlongToPtr(params->passthrough) = PtrToUlong(passthrough_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePassthroughHTC(void *args)
{
    struct xrCreatePassthroughHTC_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->passthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughHTC(wine_session_from_handle(params->session)->host_session, params->createInfo, params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreatePassthroughLayerFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 outLayer;
        XrResult result;
    } *params = args;
    XrPassthroughLayerCreateInfoFB createInfo_host;
    XrPassthroughLayerFB outLayer_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->outLayer);

    convert_XrPassthroughLayerCreateInfoFB_win32_to_host((const XrPassthroughLayerCreateInfoFB32 *)UlongToPtr(params->createInfo), &createInfo_host);
    outLayer_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->outLayer));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughLayerFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &outLayer_host);
    *(PTR32 *)UlongToPtr(params->outLayer) = PtrToUlong(outLayer_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePassthroughLayerFB(void *args)
{
    struct xrCreatePassthroughLayerFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->outLayer);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughLayerFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->outLayer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreatePersistedAnchorSpaceANDROID(void *args)
{
    struct
    {
        PTR32 handle;
        PTR32 createInfo;
        PTR32 anchorOutput;
        XrResult result;
    } *params = args;
    XrPersistedAnchorSpaceCreateInfoANDROID createInfo_host;
    XrSpace anchorOutput_host;

    TRACE("%#x, %#x, %#x\n", params->handle, params->createInfo, params->anchorOutput);

    convert_XrPersistedAnchorSpaceCreateInfoANDROID_win32_to_host((const XrPersistedAnchorSpaceCreateInfoANDROID32 *)UlongToPtr(params->createInfo), &createInfo_host);
    anchorOutput_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->anchorOutput));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePersistedAnchorSpaceANDROID((XrDeviceAnchorPersistenceANDROID)UlongToPtr(params->handle), &createInfo_host, &anchorOutput_host);
    *(PTR32 *)UlongToPtr(params->anchorOutput) = PtrToUlong(anchorOutput_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePersistedAnchorSpaceANDROID(void *args)
{
    struct xrCreatePersistedAnchorSpaceANDROID_params *params = args;

    TRACE("%p, %p, %p\n", params->handle, params->createInfo, params->anchorOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePersistedAnchorSpaceANDROID(params->handle, params->createInfo, params->anchorOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreatePlaneDetectorEXT(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 planeDetector;
        XrResult result;
    } *params = args;
    XrPlaneDetectorCreateInfoEXT createInfo_host;
    XrPlaneDetectorEXT planeDetector_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->planeDetector);

    convert_XrPlaneDetectorCreateInfoEXT_win32_to_host((const XrPlaneDetectorCreateInfoEXT32 *)UlongToPtr(params->createInfo), &createInfo_host);
    planeDetector_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->planeDetector));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePlaneDetectorEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &planeDetector_host);
    *(PTR32 *)UlongToPtr(params->planeDetector) = PtrToUlong(planeDetector_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePlaneDetectorEXT(void *args)
{
    struct xrCreatePlaneDetectorEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->planeDetector);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePlaneDetectorEXT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->planeDetector);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateReferenceSpace(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrReferenceSpaceCreateInfo createInfo_host;
    XrSpace space_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->space);

    convert_XrReferenceSpaceCreateInfo_win32_to_host((const XrReferenceSpaceCreateInfo32 *)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateReferenceSpace(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &space_host);
    *(PTR32 *)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateReferenceSpace(void *args)
{
    struct xrCreateReferenceSpace_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateReferenceSpace(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateRenderModelAssetEXT(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 asset;
        XrResult result;
    } *params = args;
    XrRenderModelAssetCreateInfoEXT createInfo_host;
    XrRenderModelAssetEXT asset_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->asset);

    convert_XrRenderModelAssetCreateInfoEXT_win32_to_host((const XrRenderModelAssetCreateInfoEXT32 *)UlongToPtr(params->createInfo), &createInfo_host);
    asset_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->asset));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateRenderModelAssetEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &asset_host);
    *(PTR32 *)UlongToPtr(params->asset) = PtrToUlong(asset_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateRenderModelAssetEXT(void *args)
{
    struct xrCreateRenderModelAssetEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->asset);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateRenderModelAssetEXT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->asset);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateRenderModelEXT(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 renderModel;
        XrResult result;
    } *params = args;
    XrRenderModelCreateInfoEXT createInfo_host;
    XrRenderModelEXT renderModel_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->renderModel);

    init_conversion_context(ctx);
    convert_XrRenderModelCreateInfoEXT_win32_to_host(ctx, (const XrRenderModelCreateInfoEXT32 *)UlongToPtr(params->createInfo), &createInfo_host);
    renderModel_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->renderModel));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateRenderModelEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &renderModel_host);
    *(PTR32 *)UlongToPtr(params->renderModel) = PtrToUlong(renderModel_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateRenderModelEXT(void *args)
{
    struct xrCreateRenderModelEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->renderModel);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateRenderModelEXT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->renderModel);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateRenderModelSpaceEXT(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrRenderModelSpaceCreateInfoEXT createInfo_host;
    XrSpace space_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->space);

    convert_XrRenderModelSpaceCreateInfoEXT_win32_to_host((const XrRenderModelSpaceCreateInfoEXT32 *)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateRenderModelSpaceEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &space_host);
    *(PTR32 *)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateRenderModelSpaceEXT(void *args)
{
    struct xrCreateRenderModelSpaceEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateRenderModelSpaceEXT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSceneMSFT(void *args)
{
    struct
    {
        PTR32 sceneObserver;
        PTR32 createInfo;
        PTR32 scene;
        XrResult result;
    } *params = args;
    XrSceneCreateInfoMSFT *createInfo_host = NULL;
    XrSceneMSFT scene_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->sceneObserver, params->createInfo, params->scene);

    init_conversion_context(ctx);
    if (params->createInfo)
    {
        createInfo_host = conversion_context_alloc(ctx, sizeof(*createInfo_host));
        convert_XrSceneCreateInfoMSFT_win32_to_host((const XrSceneCreateInfoMSFT32 *)UlongToPtr(params->createInfo), createInfo_host);
    }
    scene_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->scene));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSceneMSFT((XrSceneObserverMSFT)UlongToPtr(params->sceneObserver), createInfo_host, &scene_host);
    *(PTR32 *)UlongToPtr(params->scene) = PtrToUlong(scene_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSceneMSFT(void *args)
{
    struct xrCreateSceneMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->sceneObserver, params->createInfo, params->scene);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSceneMSFT(params->sceneObserver, params->createInfo, params->scene);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSceneObserverMSFT(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 sceneObserver;
        XrResult result;
    } *params = args;
    XrSceneObserverCreateInfoMSFT *createInfo_host = NULL;
    XrSceneObserverMSFT sceneObserver_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->sceneObserver);

    init_conversion_context(ctx);
    if (params->createInfo)
    {
        createInfo_host = conversion_context_alloc(ctx, sizeof(*createInfo_host));
        convert_XrSceneObserverCreateInfoMSFT_win32_to_host((const XrSceneObserverCreateInfoMSFT32 *)UlongToPtr(params->createInfo), createInfo_host);
    }
    sceneObserver_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->sceneObserver));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSceneObserverMSFT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, createInfo_host, &sceneObserver_host);
    *(PTR32 *)UlongToPtr(params->sceneObserver) = PtrToUlong(sceneObserver_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSceneObserverMSFT(void *args)
{
    struct xrCreateSceneObserverMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->sceneObserver);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSceneObserverMSFT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->sceneObserver);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSenseDataProviderBD(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 provider;
        XrResult result;
    } *params = args;
    XrSenseDataProviderCreateInfoBD createInfo_host;
    XrSenseDataProviderBD provider_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->provider);

    init_conversion_context(ctx);
    convert_XrSenseDataProviderCreateInfoBD_win32_to_host(ctx, (const XrSenseDataProviderCreateInfoBD32 *)UlongToPtr(params->createInfo), &createInfo_host);
    provider_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->provider));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSenseDataProviderBD(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &provider_host);
    *(PTR32 *)UlongToPtr(params->provider) = PtrToUlong(provider_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSenseDataProviderBD(void *args)
{
    struct xrCreateSenseDataProviderBD_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->provider);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSenseDataProviderBD(wine_session_from_handle(params->session)->host_session, params->createInfo, params->provider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSession(void *args)
{
    struct
    {
        PTR32 instance;
        PTR32 createInfo;
        PTR32 session;
        XrResult result;
    } *params = args;
    XrSessionCreateInfo createInfo_host;
    XrSession session_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->instance, params->createInfo, params->session);

    init_conversion_context(ctx);
    convert_XrSessionCreateInfo_win32_to_host(ctx, (const XrSessionCreateInfo32 *)UlongToPtr(params->createInfo), &createInfo_host);
    session_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->session));
    params->result = wine_xrCreateSession((XrInstance)UlongToPtr(params->instance), &createInfo_host, &session_host);
    *(PTR32 *)UlongToPtr(params->session) = PtrToUlong(session_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSession(void *args)
{
    struct xrCreateSession_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->createInfo, params->session);

    params->result = wine_xrCreateSession(params->instance, params->createInfo, params->session);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpaceUserFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 user;
        XrResult result;
    } *params = args;
    XrSpaceUserCreateInfoFB info_host;
    XrSpaceUserFB user_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->user);

    convert_XrSpaceUserCreateInfoFB_win32_to_host((const XrSpaceUserCreateInfoFB32 *)UlongToPtr(params->info), &info_host);
    user_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->user));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpaceUserFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, &user_host);
    *(PTR32 *)UlongToPtr(params->user) = PtrToUlong(user_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpaceUserFB(void *args)
{
    struct xrCreateSpaceUserFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->user);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpaceUserFB(wine_session_from_handle(params->session)->host_session, params->info, params->user);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorAsyncBD(void *args)
{
    struct
    {
        PTR32 provider;
        PTR32 info;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorCreateInfoBD info_host;

    TRACE("%#x, %#x, %#x\n", params->provider, params->info, params->future);

    convert_XrSpatialAnchorCreateInfoBD_win32_to_host((const XrSpatialAnchorCreateInfoBD32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorAsyncBD((XrSenseDataProviderBD)UlongToPtr(params->provider), &info_host, (XrFutureEXT *)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorAsyncBD(void *args)
{
    struct xrCreateSpatialAnchorAsyncBD_params *params = args;

    TRACE("%p, %p, %p\n", params->provider, params->info, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorAsyncBD(params->provider, params->info, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorCompleteBD(void *args)
{
    struct
    {
        PTR32 provider;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrSpatialAnchorCreateCompletionBD completion_host;

    TRACE("%#x, %p, %#x\n", params->provider, params->future, params->completion);

    convert_XrSpatialAnchorCreateCompletionBD_win32_to_host((XrSpatialAnchorCreateCompletionBD32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorCompleteBD((XrSenseDataProviderBD)UlongToPtr(params->provider), params->future, &completion_host);
    convert_XrSpatialAnchorCreateCompletionBD_host_to_win32(&completion_host, (XrSpatialAnchorCreateCompletionBD32 *)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorCompleteBD(void *args)
{
    struct xrCreateSpatialAnchorCompleteBD_params *params = args;

    TRACE("%p, %p, %p\n", params->provider, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorCompleteBD(params->provider, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorEXT(void *args)
{
    struct
    {
        PTR32 spatialContext;
        PTR32 createInfo;
        PTR32 anchorEntityId;
        PTR32 anchorEntity;
        XrResult result;
    } *params = args;
    XrSpatialAnchorCreateInfoEXT createInfo_host;
    XrSpatialEntityEXT anchorEntity_host;

    TRACE("%#x, %#x, %#x, %#x\n", params->spatialContext, params->createInfo, params->anchorEntityId, params->anchorEntity);

    convert_XrSpatialAnchorCreateInfoEXT_win32_to_host((const XrSpatialAnchorCreateInfoEXT32 *)UlongToPtr(params->createInfo), &createInfo_host);
    anchorEntity_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->anchorEntity));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorEXT((XrSpatialContextEXT)UlongToPtr(params->spatialContext), &createInfo_host, (XrSpatialEntityIdEXT *)UlongToPtr(params->anchorEntityId), &anchorEntity_host);
    *(PTR32 *)UlongToPtr(params->anchorEntity) = PtrToUlong(anchorEntity_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorEXT(void *args)
{
    struct xrCreateSpatialAnchorEXT_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->spatialContext, params->createInfo, params->anchorEntityId, params->anchorEntity);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorEXT(params->spatialContext, params->createInfo, params->anchorEntityId, params->anchorEntity);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpatialAnchorCreateInfoFB info_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->requestId);

    convert_XrSpatialAnchorCreateInfoFB_win32_to_host((const XrSpatialAnchorCreateInfoFB32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, (XrAsyncRequestIdFB *)UlongToPtr(params->requestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorFB(void *args)
{
    struct xrCreateSpatialAnchorFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorFromPersistedNameMSFT(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 spatialAnchorCreateInfo;
        PTR32 spatialAnchor;
        XrResult result;
    } *params = args;
    XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT spatialAnchorCreateInfo_host;
    XrSpatialAnchorMSFT spatialAnchor_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->spatialAnchorCreateInfo, params->spatialAnchor);

    convert_XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_win32_to_host((const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT32 *)UlongToPtr(params->spatialAnchorCreateInfo), &spatialAnchorCreateInfo_host);
    spatialAnchor_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->spatialAnchor));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorFromPersistedNameMSFT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &spatialAnchorCreateInfo_host, &spatialAnchor_host);
    *(PTR32 *)UlongToPtr(params->spatialAnchor) = PtrToUlong(spatialAnchor_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorFromPersistedNameMSFT(void *args)
{
    struct xrCreateSpatialAnchorFromPersistedNameMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->spatialAnchorCreateInfo, params->spatialAnchor);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorFromPersistedNameMSFT(wine_session_from_handle(params->session)->host_session, params->spatialAnchorCreateInfo, params->spatialAnchor);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorHTC(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 anchor;
        XrResult result;
    } *params = args;
    XrSpatialAnchorCreateInfoHTC createInfo_host;
    XrSpace anchor_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->anchor);

    convert_XrSpatialAnchorCreateInfoHTC_win32_to_host((const XrSpatialAnchorCreateInfoHTC32 *)UlongToPtr(params->createInfo), &createInfo_host);
    anchor_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->anchor));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorHTC(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &anchor_host);
    *(PTR32 *)UlongToPtr(params->anchor) = PtrToUlong(anchor_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorHTC(void *args)
{
    struct xrCreateSpatialAnchorHTC_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->anchor);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorHTC(wine_session_from_handle(params->session)->host_session, params->createInfo, params->anchor);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorMSFT(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 anchor;
        XrResult result;
    } *params = args;
    XrSpatialAnchorCreateInfoMSFT createInfo_host;
    XrSpatialAnchorMSFT anchor_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->anchor);

    convert_XrSpatialAnchorCreateInfoMSFT_win32_to_host((const XrSpatialAnchorCreateInfoMSFT32 *)UlongToPtr(params->createInfo), &createInfo_host);
    anchor_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->anchor));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorMSFT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &anchor_host);
    *(PTR32 *)UlongToPtr(params->anchor) = PtrToUlong(anchor_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorMSFT(void *args)
{
    struct xrCreateSpatialAnchorMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->anchor);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorMSFT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->anchor);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorSpaceMSFT(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrSpatialAnchorSpaceCreateInfoMSFT createInfo_host;
    XrSpace space_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->space);

    convert_XrSpatialAnchorSpaceCreateInfoMSFT_win32_to_host((const XrSpatialAnchorSpaceCreateInfoMSFT32 *)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorSpaceMSFT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &space_host);
    *(PTR32 *)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorSpaceMSFT(void *args)
{
    struct xrCreateSpatialAnchorSpaceMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorSpaceMSFT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorStoreConnectionMSFT(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 spatialAnchorStore;
        XrResult result;
    } *params = args;
    XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore_host;

    TRACE("%#x, %#x\n", params->session, params->spatialAnchorStore);

    spatialAnchorStore_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->spatialAnchorStore));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorStoreConnectionMSFT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &spatialAnchorStore_host);
    *(PTR32 *)UlongToPtr(params->spatialAnchorStore) = PtrToUlong(spatialAnchorStore_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorStoreConnectionMSFT(void *args)
{
    struct xrCreateSpatialAnchorStoreConnectionMSFT_params *params = args;

    TRACE("%p, %p\n", params->session, params->spatialAnchorStore);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorStoreConnectionMSFT(wine_session_from_handle(params->session)->host_session, params->spatialAnchorStore);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorsAsyncML(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsCreateInfoBaseHeaderML createInfo_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->future);

    convert_XrSpatialAnchorsCreateInfoBaseHeaderML_win32_to_host((const XrSpatialAnchorsCreateInfoBaseHeaderML32 *)UlongToPtr(params->createInfo), &createInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorsAsyncML(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, (XrFutureEXT *)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorsAsyncML(void *args)
{
    struct xrCreateSpatialAnchorsAsyncML_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorsAsyncML(wine_session_from_handle(params->session)->host_session, params->createInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorsCompleteML(void *args)
{
    struct
    {
        PTR32 session;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrCreateSpatialAnchorsCompletionML completion_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %p, %#x\n", params->session, params->future, params->completion);

    init_conversion_context(ctx);
    convert_XrCreateSpatialAnchorsCompletionML_win32_to_host(ctx, (XrCreateSpatialAnchorsCompletionML32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorsCompleteML(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->future, &completion_host);
    convert_XrCreateSpatialAnchorsCompletionML_host_to_win32(&completion_host, (XrCreateSpatialAnchorsCompletionML32 *)UlongToPtr(params->completion));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorsCompleteML(void *args)
{
    struct xrCreateSpatialAnchorsCompleteML_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorsCompleteML(wine_session_from_handle(params->session)->host_session, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorsStorageML(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 storage;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsCreateStorageInfoML createInfo_host;
    XrSpatialAnchorsStorageML storage_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->storage);

    convert_XrSpatialAnchorsCreateStorageInfoML_win32_to_host((const XrSpatialAnchorsCreateStorageInfoML32 *)UlongToPtr(params->createInfo), &createInfo_host);
    storage_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->storage));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorsStorageML(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &storage_host);
    *(PTR32 *)UlongToPtr(params->storage) = PtrToUlong(storage_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorsStorageML(void *args)
{
    struct xrCreateSpatialAnchorsStorageML_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->storage);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorsStorageML(wine_session_from_handle(params->session)->host_session, params->createInfo, params->storage);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialContextAsyncEXT(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialContextCreateInfoEXT createInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->future);

    init_conversion_context(ctx);
    convert_XrSpatialContextCreateInfoEXT_win32_to_host(ctx, (const XrSpatialContextCreateInfoEXT32 *)UlongToPtr(params->createInfo), &createInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialContextAsyncEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, (XrFutureEXT *)UlongToPtr(params->future));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialContextAsyncEXT(void *args)
{
    struct xrCreateSpatialContextAsyncEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialContextAsyncEXT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialContextCompleteEXT(void *args)
{
    struct
    {
        PTR32 session;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrCreateSpatialContextCompletionEXT completion_host;

    TRACE("%#x, %p, %#x\n", params->session, params->future, params->completion);

    convert_XrCreateSpatialContextCompletionEXT_win32_to_host((XrCreateSpatialContextCompletionEXT32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialContextCompleteEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->future, &completion_host);
    convert_XrCreateSpatialContextCompletionEXT_host_to_win32(&completion_host, (XrCreateSpatialContextCompletionEXT32 *)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialContextCompleteEXT(void *args)
{
    struct xrCreateSpatialContextCompleteEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialContextCompleteEXT(wine_session_from_handle(params->session)->host_session, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialDiscoverySnapshotAsyncEXT(void *args)
{
    struct
    {
        PTR32 spatialContext;
        PTR32 createInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialDiscoverySnapshotCreateInfoEXT createInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->spatialContext, params->createInfo, params->future);

    init_conversion_context(ctx);
    convert_XrSpatialDiscoverySnapshotCreateInfoEXT_win32_to_host(ctx, (const XrSpatialDiscoverySnapshotCreateInfoEXT32 *)UlongToPtr(params->createInfo), &createInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialDiscoverySnapshotAsyncEXT((XrSpatialContextEXT)UlongToPtr(params->spatialContext), &createInfo_host, (XrFutureEXT *)UlongToPtr(params->future));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialDiscoverySnapshotAsyncEXT(void *args)
{
    struct xrCreateSpatialDiscoverySnapshotAsyncEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->spatialContext, params->createInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialDiscoverySnapshotAsyncEXT(params->spatialContext, params->createInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialDiscoverySnapshotCompleteEXT(void *args)
{
    struct
    {
        PTR32 spatialContext;
        PTR32 createSnapshotCompletionInfo;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrCreateSpatialDiscoverySnapshotCompletionInfoEXT createSnapshotCompletionInfo_host;
    XrCreateSpatialDiscoverySnapshotCompletionEXT completion_host;

    TRACE("%#x, %#x, %#x\n", params->spatialContext, params->createSnapshotCompletionInfo, params->completion);

    convert_XrCreateSpatialDiscoverySnapshotCompletionInfoEXT_win32_to_host((const XrCreateSpatialDiscoverySnapshotCompletionInfoEXT32 *)UlongToPtr(params->createSnapshotCompletionInfo), &createSnapshotCompletionInfo_host);
    convert_XrCreateSpatialDiscoverySnapshotCompletionEXT_win32_to_host((XrCreateSpatialDiscoverySnapshotCompletionEXT32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialDiscoverySnapshotCompleteEXT((XrSpatialContextEXT)UlongToPtr(params->spatialContext), &createSnapshotCompletionInfo_host, &completion_host);
    convert_XrCreateSpatialDiscoverySnapshotCompletionEXT_host_to_win32(&completion_host, (XrCreateSpatialDiscoverySnapshotCompletionEXT32 *)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialDiscoverySnapshotCompleteEXT(void *args)
{
    struct xrCreateSpatialDiscoverySnapshotCompleteEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->spatialContext, params->createSnapshotCompletionInfo, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialDiscoverySnapshotCompleteEXT(params->spatialContext, params->createSnapshotCompletionInfo, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialEntityAnchorBD(void *args)
{
    struct
    {
        PTR32 provider;
        PTR32 createInfo;
        PTR32 anchor;
        XrResult result;
    } *params = args;
    XrSpatialEntityAnchorCreateInfoBD createInfo_host;
    XrAnchorBD anchor_host;

    TRACE("%#x, %#x, %#x\n", params->provider, params->createInfo, params->anchor);

    convert_XrSpatialEntityAnchorCreateInfoBD_win32_to_host((const XrSpatialEntityAnchorCreateInfoBD32 *)UlongToPtr(params->createInfo), &createInfo_host);
    anchor_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->anchor));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialEntityAnchorBD((XrSenseDataProviderBD)UlongToPtr(params->provider), &createInfo_host, &anchor_host);
    *(PTR32 *)UlongToPtr(params->anchor) = PtrToUlong(anchor_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialEntityAnchorBD(void *args)
{
    struct xrCreateSpatialEntityAnchorBD_params *params = args;

    TRACE("%p, %p, %p\n", params->provider, params->createInfo, params->anchor);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialEntityAnchorBD(params->provider, params->createInfo, params->anchor);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialEntityFromIdEXT(void *args)
{
    struct
    {
        PTR32 spatialContext;
        PTR32 createInfo;
        PTR32 spatialEntity;
        XrResult result;
    } *params = args;
    XrSpatialEntityFromIdCreateInfoEXT createInfo_host;
    XrSpatialEntityEXT spatialEntity_host;

    TRACE("%#x, %#x, %#x\n", params->spatialContext, params->createInfo, params->spatialEntity);

    convert_XrSpatialEntityFromIdCreateInfoEXT_win32_to_host((const XrSpatialEntityFromIdCreateInfoEXT32 *)UlongToPtr(params->createInfo), &createInfo_host);
    spatialEntity_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->spatialEntity));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialEntityFromIdEXT((XrSpatialContextEXT)UlongToPtr(params->spatialContext), &createInfo_host, &spatialEntity_host);
    *(PTR32 *)UlongToPtr(params->spatialEntity) = PtrToUlong(spatialEntity_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialEntityFromIdEXT(void *args)
{
    struct xrCreateSpatialEntityFromIdEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->spatialContext, params->createInfo, params->spatialEntity);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialEntityFromIdEXT(params->spatialContext, params->createInfo, params->spatialEntity);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialGraphNodeSpaceMSFT(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrSpatialGraphNodeSpaceCreateInfoMSFT createInfo_host;
    XrSpace space_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->space);

    convert_XrSpatialGraphNodeSpaceCreateInfoMSFT_win32_to_host((const XrSpatialGraphNodeSpaceCreateInfoMSFT32 *)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialGraphNodeSpaceMSFT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &space_host);
    *(PTR32 *)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialGraphNodeSpaceMSFT(void *args)
{
    struct xrCreateSpatialGraphNodeSpaceMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialGraphNodeSpaceMSFT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialPersistenceContextAsyncEXT(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialPersistenceContextCreateInfoEXT createInfo_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->future);

    convert_XrSpatialPersistenceContextCreateInfoEXT_win32_to_host((const XrSpatialPersistenceContextCreateInfoEXT32 *)UlongToPtr(params->createInfo), &createInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialPersistenceContextAsyncEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, (XrFutureEXT *)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialPersistenceContextAsyncEXT(void *args)
{
    struct xrCreateSpatialPersistenceContextAsyncEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialPersistenceContextAsyncEXT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialPersistenceContextCompleteEXT(void *args)
{
    struct
    {
        PTR32 session;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrCreateSpatialPersistenceContextCompletionEXT completion_host;

    TRACE("%#x, %p, %#x\n", params->session, params->future, params->completion);

    convert_XrCreateSpatialPersistenceContextCompletionEXT_win32_to_host((XrCreateSpatialPersistenceContextCompletionEXT32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialPersistenceContextCompleteEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->future, &completion_host);
    convert_XrCreateSpatialPersistenceContextCompletionEXT_host_to_win32(&completion_host, (XrCreateSpatialPersistenceContextCompletionEXT32 *)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialPersistenceContextCompleteEXT(void *args)
{
    struct xrCreateSpatialPersistenceContextCompleteEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialPersistenceContextCompleteEXT(wine_session_from_handle(params->session)->host_session, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialUpdateSnapshotEXT(void *args)
{
    struct
    {
        PTR32 spatialContext;
        PTR32 createInfo;
        PTR32 snapshot;
        XrResult result;
    } *params = args;
    XrSpatialUpdateSnapshotCreateInfoEXT createInfo_host;
    XrSpatialSnapshotEXT snapshot_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->spatialContext, params->createInfo, params->snapshot);

    init_conversion_context(ctx);
    convert_XrSpatialUpdateSnapshotCreateInfoEXT_win32_to_host(ctx, (const XrSpatialUpdateSnapshotCreateInfoEXT32 *)UlongToPtr(params->createInfo), &createInfo_host);
    snapshot_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->snapshot));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialUpdateSnapshotEXT((XrSpatialContextEXT)UlongToPtr(params->spatialContext), &createInfo_host, &snapshot_host);
    *(PTR32 *)UlongToPtr(params->snapshot) = PtrToUlong(snapshot_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialUpdateSnapshotEXT(void *args)
{
    struct xrCreateSpatialUpdateSnapshotEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->spatialContext, params->createInfo, params->snapshot);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialUpdateSnapshotEXT(params->spatialContext, params->createInfo, params->snapshot);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSwapchain(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 swapchain;
        XrResult result;
    } *params = args;
    XrSwapchainCreateInfo createInfo_host;
    XrSwapchain swapchain_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->swapchain);

    init_conversion_context(ctx);
    convert_XrSwapchainCreateInfo_win32_to_host(ctx, (const XrSwapchainCreateInfo32 *)UlongToPtr(params->createInfo), &createInfo_host);
    swapchain_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->swapchain));
    params->result = wine_xrCreateSwapchain((XrSession)UlongToPtr(params->session), &createInfo_host, &swapchain_host);
    *(PTR32 *)UlongToPtr(params->swapchain) = PtrToUlong(swapchain_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSwapchain(void *args)
{
    struct xrCreateSwapchain_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->swapchain);

    params->result = wine_xrCreateSwapchain(params->session, params->createInfo, params->swapchain);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateTrackableTrackerANDROID(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 trackableTracker;
        XrResult result;
    } *params = args;
    XrTrackableTrackerCreateInfoANDROID createInfo_host;
    XrTrackableTrackerANDROID trackableTracker_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->trackableTracker);

    init_conversion_context(ctx);
    convert_XrTrackableTrackerCreateInfoANDROID_win32_to_host(ctx, (const XrTrackableTrackerCreateInfoANDROID32 *)UlongToPtr(params->createInfo), &createInfo_host);
    trackableTracker_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->trackableTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateTrackableTrackerANDROID(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &trackableTracker_host);
    *(PTR32 *)UlongToPtr(params->trackableTracker) = PtrToUlong(trackableTracker_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateTrackableTrackerANDROID(void *args)
{
    struct xrCreateTrackableTrackerANDROID_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->trackableTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateTrackableTrackerANDROID(wine_session_from_handle(params->session)->host_session, params->createInfo, params->trackableTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateTriangleMeshFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 outTriangleMesh;
        XrResult result;
    } *params = args;
    XrTriangleMeshCreateInfoFB createInfo_host;
    XrTriangleMeshFB outTriangleMesh_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->outTriangleMesh);

    convert_XrTriangleMeshCreateInfoFB_win32_to_host((const XrTriangleMeshCreateInfoFB32 *)UlongToPtr(params->createInfo), &createInfo_host);
    outTriangleMesh_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->outTriangleMesh));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateTriangleMeshFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &outTriangleMesh_host);
    *(PTR32 *)UlongToPtr(params->outTriangleMesh) = PtrToUlong(outTriangleMesh_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateTriangleMeshFB(void *args)
{
    struct xrCreateTriangleMeshFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->outTriangleMesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateTriangleMeshFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->outTriangleMesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateVirtualKeyboardMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 keyboard;
        XrResult result;
    } *params = args;
    XrVirtualKeyboardCreateInfoMETA createInfo_host;
    XrVirtualKeyboardMETA keyboard_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->keyboard);

    convert_XrVirtualKeyboardCreateInfoMETA_win32_to_host((const XrVirtualKeyboardCreateInfoMETA32 *)UlongToPtr(params->createInfo), &createInfo_host);
    keyboard_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->keyboard));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateVirtualKeyboardMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &keyboard_host);
    *(PTR32 *)UlongToPtr(params->keyboard) = PtrToUlong(keyboard_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateVirtualKeyboardMETA(void *args)
{
    struct xrCreateVirtualKeyboardMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->keyboard);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateVirtualKeyboardMETA(wine_session_from_handle(params->session)->host_session, params->createInfo, params->keyboard);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateVirtualKeyboardSpaceMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 keyboard;
        PTR32 createInfo;
        PTR32 keyboardSpace;
        XrResult result;
    } *params = args;
    XrVirtualKeyboardSpaceCreateInfoMETA createInfo_host;
    XrSpace keyboardSpace_host;

    TRACE("%#x, %#x, %#x, %#x\n", params->session, params->keyboard, params->createInfo, params->keyboardSpace);

    convert_XrVirtualKeyboardSpaceCreateInfoMETA_win32_to_host((const XrVirtualKeyboardSpaceCreateInfoMETA32 *)UlongToPtr(params->createInfo), &createInfo_host);
    keyboardSpace_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->keyboardSpace));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateVirtualKeyboardSpaceMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, (XrVirtualKeyboardMETA)UlongToPtr(params->keyboard), &createInfo_host, &keyboardSpace_host);
    *(PTR32 *)UlongToPtr(params->keyboardSpace) = PtrToUlong(keyboardSpace_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateVirtualKeyboardSpaceMETA(void *args)
{
    struct xrCreateVirtualKeyboardSpaceMETA_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->session, params->keyboard, params->createInfo, params->keyboardSpace);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateVirtualKeyboardSpaceMETA(wine_session_from_handle(params->session)->host_session, params->keyboard, params->createInfo, params->keyboardSpace);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateWorldMeshDetectorML(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 detector;
        XrResult result;
    } *params = args;
    XrWorldMeshDetectorCreateInfoML createInfo_host;
    XrWorldMeshDetectorML detector_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->detector);

    convert_XrWorldMeshDetectorCreateInfoML_win32_to_host((const XrWorldMeshDetectorCreateInfoML32 *)UlongToPtr(params->createInfo), &createInfo_host);
    detector_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->detector));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateWorldMeshDetectorML(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &detector_host);
    *(PTR32 *)UlongToPtr(params->detector) = PtrToUlong(detector_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateWorldMeshDetectorML(void *args)
{
    struct xrCreateWorldMeshDetectorML_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->detector);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateWorldMeshDetectorML(wine_session_from_handle(params->session)->host_session, params->createInfo, params->detector);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDeleteSpatialAnchorsAsyncML(void *args)
{
    struct
    {
        PTR32 storage;
        PTR32 deleteInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsDeleteInfoML deleteInfo_host;

    TRACE("%#x, %#x, %#x\n", params->storage, params->deleteInfo, params->future);

    convert_XrSpatialAnchorsDeleteInfoML_win32_to_host((const XrSpatialAnchorsDeleteInfoML32 *)UlongToPtr(params->deleteInfo), &deleteInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrDeleteSpatialAnchorsAsyncML((XrSpatialAnchorsStorageML)UlongToPtr(params->storage), &deleteInfo_host, (XrFutureEXT *)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDeleteSpatialAnchorsAsyncML(void *args)
{
    struct xrDeleteSpatialAnchorsAsyncML_params *params = args;

    TRACE("%p, %p, %p\n", params->storage, params->deleteInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrDeleteSpatialAnchorsAsyncML(params->storage, params->deleteInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDeleteSpatialAnchorsCompleteML(void *args)
{
    struct
    {
        PTR32 storage;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsDeleteCompletionML completion_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %p, %#x\n", params->storage, params->future, params->completion);

    init_conversion_context(ctx);
    convert_XrSpatialAnchorsDeleteCompletionML_win32_to_host(ctx, (XrSpatialAnchorsDeleteCompletionML32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrDeleteSpatialAnchorsCompleteML((XrSpatialAnchorsStorageML)UlongToPtr(params->storage), params->future, &completion_host);
    convert_XrSpatialAnchorsDeleteCompletionML_host_to_win32(&completion_host, (XrSpatialAnchorsDeleteCompletionML32 *)UlongToPtr(params->completion));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDeleteSpatialAnchorsCompleteML(void *args)
{
    struct xrDeleteSpatialAnchorsCompleteML_params *params = args;

    TRACE("%p, %p, %p\n", params->storage, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrDeleteSpatialAnchorsCompleteML(params->storage, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDeserializeSceneMSFT(void *args)
{
    struct
    {
        PTR32 sceneObserver;
        PTR32 deserializeInfo;
        XrResult result;
    } *params = args;
    XrSceneDeserializeInfoMSFT deserializeInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x\n", params->sceneObserver, params->deserializeInfo);

    init_conversion_context(ctx);
    convert_XrSceneDeserializeInfoMSFT_win32_to_host(ctx, (const XrSceneDeserializeInfoMSFT32 *)UlongToPtr(params->deserializeInfo), &deserializeInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrDeserializeSceneMSFT((XrSceneObserverMSFT)UlongToPtr(params->sceneObserver), &deserializeInfo_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDeserializeSceneMSFT(void *args)
{
    struct xrDeserializeSceneMSFT_params *params = args;

    TRACE("%p, %p\n", params->sceneObserver, params->deserializeInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrDeserializeSceneMSFT(params->sceneObserver, params->deserializeInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyAction(void *args)
{
    struct
    {
        PTR32 action;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->action);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyAction((XrAction)UlongToPtr(params->action));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyAction(void *args)
{
    struct xrDestroyAction_params *params = args;

    TRACE("%p\n", params->action);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyAction(params->action);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyActionSet(void *args)
{
    struct
    {
        PTR32 actionSet;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->actionSet);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyActionSet((XrActionSet)UlongToPtr(params->actionSet));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyActionSet(void *args)
{
    struct xrDestroyActionSet_params *params = args;

    TRACE("%p\n", params->actionSet);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyActionSet(params->actionSet);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyAnchorBD(void *args)
{
    struct
    {
        PTR32 anchor;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->anchor);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyAnchorBD((XrAnchorBD)UlongToPtr(params->anchor));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyAnchorBD(void *args)
{
    struct xrDestroyAnchorBD_params *params = args;

    TRACE("%p\n", params->anchor);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyAnchorBD(params->anchor);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyBodyTrackerBD(void *args)
{
    struct
    {
        PTR32 bodyTracker;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->bodyTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyBodyTrackerBD((XrBodyTrackerBD)UlongToPtr(params->bodyTracker));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyBodyTrackerBD(void *args)
{
    struct xrDestroyBodyTrackerBD_params *params = args;

    TRACE("%p\n", params->bodyTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyBodyTrackerBD(params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyBodyTrackerFB(void *args)
{
    struct
    {
        PTR32 bodyTracker;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->bodyTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyBodyTrackerFB((XrBodyTrackerFB)UlongToPtr(params->bodyTracker));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyBodyTrackerFB(void *args)
{
    struct xrDestroyBodyTrackerFB_params *params = args;

    TRACE("%p\n", params->bodyTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyBodyTrackerFB(params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyBodyTrackerHTC(void *args)
{
    struct
    {
        PTR32 bodyTracker;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->bodyTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyBodyTrackerHTC((XrBodyTrackerHTC)UlongToPtr(params->bodyTracker));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyBodyTrackerHTC(void *args)
{
    struct xrDestroyBodyTrackerHTC_params *params = args;

    TRACE("%p\n", params->bodyTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyBodyTrackerHTC(params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyDeviceAnchorPersistenceANDROID(void *args)
{
    struct
    {
        PTR32 handle;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->handle);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyDeviceAnchorPersistenceANDROID((XrDeviceAnchorPersistenceANDROID)UlongToPtr(params->handle));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyDeviceAnchorPersistenceANDROID(void *args)
{
    struct xrDestroyDeviceAnchorPersistenceANDROID_params *params = args;

    TRACE("%p\n", params->handle);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyDeviceAnchorPersistenceANDROID(params->handle);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyEnvironmentDepthProviderMETA(void *args)
{
    struct
    {
        PTR32 environmentDepthProvider;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->environmentDepthProvider);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyEnvironmentDepthProviderMETA((XrEnvironmentDepthProviderMETA)UlongToPtr(params->environmentDepthProvider));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyEnvironmentDepthProviderMETA(void *args)
{
    struct xrDestroyEnvironmentDepthProviderMETA_params *params = args;

    TRACE("%p\n", params->environmentDepthProvider);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyEnvironmentDepthProviderMETA(params->environmentDepthProvider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyEnvironmentDepthSwapchainMETA(void *args)
{
    struct
    {
        PTR32 swapchain;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->swapchain);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyEnvironmentDepthSwapchainMETA((XrEnvironmentDepthSwapchainMETA)UlongToPtr(params->swapchain));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyEnvironmentDepthSwapchainMETA(void *args)
{
    struct xrDestroyEnvironmentDepthSwapchainMETA_params *params = args;

    TRACE("%p\n", params->swapchain);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyEnvironmentDepthSwapchainMETA(params->swapchain);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyExportedLocalizationMapML(void *args)
{
    struct
    {
        PTR32 map;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->map);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyExportedLocalizationMapML((XrExportedLocalizationMapML)UlongToPtr(params->map));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyExportedLocalizationMapML(void *args)
{
    struct xrDestroyExportedLocalizationMapML_params *params = args;

    TRACE("%p\n", params->map);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyExportedLocalizationMapML(params->map);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyEyeTrackerFB(void *args)
{
    struct
    {
        PTR32 eyeTracker;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->eyeTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyEyeTrackerFB((XrEyeTrackerFB)UlongToPtr(params->eyeTracker));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyEyeTrackerFB(void *args)
{
    struct xrDestroyEyeTrackerFB_params *params = args;

    TRACE("%p\n", params->eyeTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyEyeTrackerFB(params->eyeTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyFaceTracker2FB(void *args)
{
    struct
    {
        PTR32 faceTracker;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->faceTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFaceTracker2FB((XrFaceTracker2FB)UlongToPtr(params->faceTracker));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyFaceTracker2FB(void *args)
{
    struct xrDestroyFaceTracker2FB_params *params = args;

    TRACE("%p\n", params->faceTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFaceTracker2FB(params->faceTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyFaceTrackerFB(void *args)
{
    struct
    {
        PTR32 faceTracker;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->faceTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFaceTrackerFB((XrFaceTrackerFB)UlongToPtr(params->faceTracker));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyFaceTrackerFB(void *args)
{
    struct xrDestroyFaceTrackerFB_params *params = args;

    TRACE("%p\n", params->faceTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFaceTrackerFB(params->faceTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyFacialExpressionClientML(void *args)
{
    struct
    {
        PTR32 facialExpressionClient;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->facialExpressionClient);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFacialExpressionClientML((XrFacialExpressionClientML)UlongToPtr(params->facialExpressionClient));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyFacialExpressionClientML(void *args)
{
    struct xrDestroyFacialExpressionClientML_params *params = args;

    TRACE("%p\n", params->facialExpressionClient);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFacialExpressionClientML(params->facialExpressionClient);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyFacialTrackerHTC(void *args)
{
    struct
    {
        PTR32 facialTracker;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->facialTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFacialTrackerHTC((XrFacialTrackerHTC)UlongToPtr(params->facialTracker));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyFacialTrackerHTC(void *args)
{
    struct xrDestroyFacialTrackerHTC_params *params = args;

    TRACE("%p\n", params->facialTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFacialTrackerHTC(params->facialTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyFoveationProfileFB(void *args)
{
    struct
    {
        PTR32 profile;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->profile);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFoveationProfileFB((XrFoveationProfileFB)UlongToPtr(params->profile));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyFoveationProfileFB(void *args)
{
    struct xrDestroyFoveationProfileFB_params *params = args;

    TRACE("%p\n", params->profile);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFoveationProfileFB(params->profile);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyGeometryInstanceFB(void *args)
{
    struct
    {
        PTR32 instance;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->instance);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyGeometryInstanceFB((XrGeometryInstanceFB)UlongToPtr(params->instance));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyGeometryInstanceFB(void *args)
{
    struct xrDestroyGeometryInstanceFB_params *params = args;

    TRACE("%p\n", params->instance);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyGeometryInstanceFB(params->instance);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyHandTrackerEXT(void *args)
{
    struct
    {
        PTR32 handTracker;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->handTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyHandTrackerEXT((XrHandTrackerEXT)UlongToPtr(params->handTracker));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyHandTrackerEXT(void *args)
{
    struct xrDestroyHandTrackerEXT_params *params = args;

    TRACE("%p\n", params->handTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyHandTrackerEXT(params->handTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyInstance(void *args)
{
    struct
    {
        PTR32 instance;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->instance);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyInstance(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyInstance(void *args)
{
    struct xrDestroyInstance_params *params = args;

    TRACE("%p\n", params->instance);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyInstance(wine_instance_from_handle(params->instance)->host_instance);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyMarkerDetectorML(void *args)
{
    struct
    {
        PTR32 markerDetector;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->markerDetector);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyMarkerDetectorML((XrMarkerDetectorML)UlongToPtr(params->markerDetector));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyMarkerDetectorML(void *args)
{
    struct xrDestroyMarkerDetectorML_params *params = args;

    TRACE("%p\n", params->markerDetector);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyMarkerDetectorML(params->markerDetector);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyPassthroughColorLutMETA(void *args)
{
    struct
    {
        PTR32 colorLut;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->colorLut);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughColorLutMETA((XrPassthroughColorLutMETA)UlongToPtr(params->colorLut));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyPassthroughColorLutMETA(void *args)
{
    struct xrDestroyPassthroughColorLutMETA_params *params = args;

    TRACE("%p\n", params->colorLut);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughColorLutMETA(params->colorLut);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyPassthroughFB(void *args)
{
    struct
    {
        PTR32 passthrough;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->passthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughFB((XrPassthroughFB)UlongToPtr(params->passthrough));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyPassthroughFB(void *args)
{
    struct xrDestroyPassthroughFB_params *params = args;

    TRACE("%p\n", params->passthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughFB(params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyPassthroughHTC(void *args)
{
    struct
    {
        PTR32 passthrough;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->passthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughHTC((XrPassthroughHTC)UlongToPtr(params->passthrough));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyPassthroughHTC(void *args)
{
    struct xrDestroyPassthroughHTC_params *params = args;

    TRACE("%p\n", params->passthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughHTC(params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyPassthroughLayerFB(void *args)
{
    struct
    {
        PTR32 layer;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->layer);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughLayerFB((XrPassthroughLayerFB)UlongToPtr(params->layer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyPassthroughLayerFB(void *args)
{
    struct xrDestroyPassthroughLayerFB_params *params = args;

    TRACE("%p\n", params->layer);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughLayerFB(params->layer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyPlaneDetectorEXT(void *args)
{
    struct
    {
        PTR32 planeDetector;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->planeDetector);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPlaneDetectorEXT((XrPlaneDetectorEXT)UlongToPtr(params->planeDetector));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyPlaneDetectorEXT(void *args)
{
    struct xrDestroyPlaneDetectorEXT_params *params = args;

    TRACE("%p\n", params->planeDetector);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPlaneDetectorEXT(params->planeDetector);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyRenderModelAssetEXT(void *args)
{
    struct
    {
        PTR32 asset;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->asset);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyRenderModelAssetEXT((XrRenderModelAssetEXT)UlongToPtr(params->asset));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyRenderModelAssetEXT(void *args)
{
    struct xrDestroyRenderModelAssetEXT_params *params = args;

    TRACE("%p\n", params->asset);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyRenderModelAssetEXT(params->asset);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyRenderModelEXT(void *args)
{
    struct
    {
        PTR32 renderModel;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->renderModel);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyRenderModelEXT((XrRenderModelEXT)UlongToPtr(params->renderModel));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyRenderModelEXT(void *args)
{
    struct xrDestroyRenderModelEXT_params *params = args;

    TRACE("%p\n", params->renderModel);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyRenderModelEXT(params->renderModel);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySceneMSFT(void *args)
{
    struct
    {
        PTR32 scene;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->scene);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySceneMSFT((XrSceneMSFT)UlongToPtr(params->scene));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySceneMSFT(void *args)
{
    struct xrDestroySceneMSFT_params *params = args;

    TRACE("%p\n", params->scene);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySceneMSFT(params->scene);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySceneObserverMSFT(void *args)
{
    struct
    {
        PTR32 sceneObserver;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->sceneObserver);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySceneObserverMSFT((XrSceneObserverMSFT)UlongToPtr(params->sceneObserver));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySceneObserverMSFT(void *args)
{
    struct xrDestroySceneObserverMSFT_params *params = args;

    TRACE("%p\n", params->sceneObserver);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySceneObserverMSFT(params->sceneObserver);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySenseDataProviderBD(void *args)
{
    struct
    {
        PTR32 provider;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->provider);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySenseDataProviderBD((XrSenseDataProviderBD)UlongToPtr(params->provider));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySenseDataProviderBD(void *args)
{
    struct xrDestroySenseDataProviderBD_params *params = args;

    TRACE("%p\n", params->provider);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySenseDataProviderBD(params->provider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySenseDataSnapshotBD(void *args)
{
    struct
    {
        PTR32 snapshot;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->snapshot);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySenseDataSnapshotBD((XrSenseDataSnapshotBD)UlongToPtr(params->snapshot));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySenseDataSnapshotBD(void *args)
{
    struct xrDestroySenseDataSnapshotBD_params *params = args;

    TRACE("%p\n", params->snapshot);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySenseDataSnapshotBD(params->snapshot);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySession(void *args)
{
    struct
    {
        PTR32 session;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->session);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySession(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySession(void *args)
{
    struct xrDestroySession_params *params = args;

    TRACE("%p\n", params->session);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySession(wine_session_from_handle(params->session)->host_session);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpace(void *args)
{
    struct
    {
        PTR32 space;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpace((XrSpace)UlongToPtr(params->space));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpace(void *args)
{
    struct xrDestroySpace_params *params = args;

    TRACE("%p\n", params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpace(params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpaceUserFB(void *args)
{
    struct
    {
        PTR32 user;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->user);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpaceUserFB((XrSpaceUserFB)UlongToPtr(params->user));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpaceUserFB(void *args)
{
    struct xrDestroySpaceUserFB_params *params = args;

    TRACE("%p\n", params->user);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpaceUserFB(params->user);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpatialAnchorMSFT(void *args)
{
    struct
    {
        PTR32 anchor;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->anchor);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialAnchorMSFT((XrSpatialAnchorMSFT)UlongToPtr(params->anchor));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialAnchorMSFT(void *args)
{
    struct xrDestroySpatialAnchorMSFT_params *params = args;

    TRACE("%p\n", params->anchor);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialAnchorMSFT(params->anchor);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpatialAnchorStoreConnectionMSFT(void *args)
{
    struct
    {
        PTR32 spatialAnchorStore;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->spatialAnchorStore);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialAnchorStoreConnectionMSFT((XrSpatialAnchorStoreConnectionMSFT)UlongToPtr(params->spatialAnchorStore));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialAnchorStoreConnectionMSFT(void *args)
{
    struct xrDestroySpatialAnchorStoreConnectionMSFT_params *params = args;

    TRACE("%p\n", params->spatialAnchorStore);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialAnchorStoreConnectionMSFT(params->spatialAnchorStore);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpatialAnchorsStorageML(void *args)
{
    struct
    {
        PTR32 storage;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->storage);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialAnchorsStorageML((XrSpatialAnchorsStorageML)UlongToPtr(params->storage));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialAnchorsStorageML(void *args)
{
    struct xrDestroySpatialAnchorsStorageML_params *params = args;

    TRACE("%p\n", params->storage);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialAnchorsStorageML(params->storage);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpatialContextEXT(void *args)
{
    struct
    {
        PTR32 spatialContext;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->spatialContext);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialContextEXT((XrSpatialContextEXT)UlongToPtr(params->spatialContext));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialContextEXT(void *args)
{
    struct xrDestroySpatialContextEXT_params *params = args;

    TRACE("%p\n", params->spatialContext);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialContextEXT(params->spatialContext);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpatialEntityEXT(void *args)
{
    struct
    {
        PTR32 spatialEntity;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->spatialEntity);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialEntityEXT((XrSpatialEntityEXT)UlongToPtr(params->spatialEntity));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialEntityEXT(void *args)
{
    struct xrDestroySpatialEntityEXT_params *params = args;

    TRACE("%p\n", params->spatialEntity);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialEntityEXT(params->spatialEntity);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpatialGraphNodeBindingMSFT(void *args)
{
    struct
    {
        PTR32 nodeBinding;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->nodeBinding);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialGraphNodeBindingMSFT((XrSpatialGraphNodeBindingMSFT)UlongToPtr(params->nodeBinding));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialGraphNodeBindingMSFT(void *args)
{
    struct xrDestroySpatialGraphNodeBindingMSFT_params *params = args;

    TRACE("%p\n", params->nodeBinding);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialGraphNodeBindingMSFT(params->nodeBinding);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpatialPersistenceContextEXT(void *args)
{
    struct
    {
        PTR32 persistenceContext;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->persistenceContext);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialPersistenceContextEXT((XrSpatialPersistenceContextEXT)UlongToPtr(params->persistenceContext));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialPersistenceContextEXT(void *args)
{
    struct xrDestroySpatialPersistenceContextEXT_params *params = args;

    TRACE("%p\n", params->persistenceContext);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialPersistenceContextEXT(params->persistenceContext);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpatialSnapshotEXT(void *args)
{
    struct
    {
        PTR32 snapshot;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->snapshot);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialSnapshotEXT((XrSpatialSnapshotEXT)UlongToPtr(params->snapshot));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialSnapshotEXT(void *args)
{
    struct xrDestroySpatialSnapshotEXT_params *params = args;

    TRACE("%p\n", params->snapshot);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialSnapshotEXT(params->snapshot);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySwapchain(void *args)
{
    struct
    {
        PTR32 swapchain;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->swapchain);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySwapchain(wine_swapchain_from_handle((XrSwapchain)UlongToPtr(params->swapchain))->host_swapchain);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySwapchain(void *args)
{
    struct xrDestroySwapchain_params *params = args;

    TRACE("%p\n", params->swapchain);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySwapchain(wine_swapchain_from_handle(params->swapchain)->host_swapchain);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyTrackableTrackerANDROID(void *args)
{
    struct
    {
        PTR32 trackableTracker;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->trackableTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyTrackableTrackerANDROID((XrTrackableTrackerANDROID)UlongToPtr(params->trackableTracker));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyTrackableTrackerANDROID(void *args)
{
    struct xrDestroyTrackableTrackerANDROID_params *params = args;

    TRACE("%p\n", params->trackableTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyTrackableTrackerANDROID(params->trackableTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyTriangleMeshFB(void *args)
{
    struct
    {
        PTR32 mesh;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->mesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyTriangleMeshFB((XrTriangleMeshFB)UlongToPtr(params->mesh));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyTriangleMeshFB(void *args)
{
    struct xrDestroyTriangleMeshFB_params *params = args;

    TRACE("%p\n", params->mesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyTriangleMeshFB(params->mesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyVirtualKeyboardMETA(void *args)
{
    struct
    {
        PTR32 keyboard;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->keyboard);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyVirtualKeyboardMETA((XrVirtualKeyboardMETA)UlongToPtr(params->keyboard));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyVirtualKeyboardMETA(void *args)
{
    struct xrDestroyVirtualKeyboardMETA_params *params = args;

    TRACE("%p\n", params->keyboard);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyVirtualKeyboardMETA(params->keyboard);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyWorldMeshDetectorML(void *args)
{
    struct
    {
        PTR32 detector;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->detector);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyWorldMeshDetectorML((XrWorldMeshDetectorML)UlongToPtr(params->detector));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyWorldMeshDetectorML(void *args)
{
    struct xrDestroyWorldMeshDetectorML_params *params = args;

    TRACE("%p\n", params->detector);

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyWorldMeshDetectorML(params->detector);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDiscoverSpacesMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpaceDiscoveryInfoMETA info_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->requestId);

    init_conversion_context(ctx);
    convert_XrSpaceDiscoveryInfoMETA_win32_to_host(ctx, (const XrSpaceDiscoveryInfoMETA32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrDiscoverSpacesMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, (XrAsyncRequestIdFB *)UlongToPtr(params->requestId));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDiscoverSpacesMETA(void *args)
{
    struct xrDiscoverSpacesMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrDiscoverSpacesMETA(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDownloadSharedSpatialAnchorAsyncBD(void *args)
{
    struct
    {
        PTR32 provider;
        PTR32 info;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSharedSpatialAnchorDownloadInfoBD info_host;

    TRACE("%#x, %#x, %#x\n", params->provider, params->info, params->future);

    convert_XrSharedSpatialAnchorDownloadInfoBD_win32_to_host((const XrSharedSpatialAnchorDownloadInfoBD32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrDownloadSharedSpatialAnchorAsyncBD((XrSenseDataProviderBD)UlongToPtr(params->provider), &info_host, (XrFutureEXT *)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDownloadSharedSpatialAnchorAsyncBD(void *args)
{
    struct xrDownloadSharedSpatialAnchorAsyncBD_params *params = args;

    TRACE("%p, %p, %p\n", params->provider, params->info, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrDownloadSharedSpatialAnchorAsyncBD(params->provider, params->info, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDownloadSharedSpatialAnchorCompleteBD(void *args)
{
    struct
    {
        PTR32 provider;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrFutureCompletionEXT completion_host;

    TRACE("%#x, %p, %#x\n", params->provider, params->future, params->completion);

    convert_XrFutureCompletionEXT_win32_to_host((XrFutureCompletionEXT32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrDownloadSharedSpatialAnchorCompleteBD((XrSenseDataProviderBD)UlongToPtr(params->provider), params->future, &completion_host);
    convert_XrFutureCompletionEXT_host_to_win32(&completion_host, (XrFutureCompletionEXT32 *)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDownloadSharedSpatialAnchorCompleteBD(void *args)
{
    struct xrDownloadSharedSpatialAnchorCompleteBD_params *params = args;

    TRACE("%p, %p, %p\n", params->provider, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrDownloadSharedSpatialAnchorCompleteBD(params->provider, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnableLocalizationEventsML(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        XrResult result;
    } *params = args;
    XrLocalizationEnableEventsInfoML info_host;

    TRACE("%#x, %#x\n", params->session, params->info);

    convert_XrLocalizationEnableEventsInfoML_win32_to_host((const XrLocalizationEnableEventsInfoML32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnableLocalizationEventsML(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnableLocalizationEventsML(void *args)
{
    struct xrEnableLocalizationEventsML_params *params = args;

    TRACE("%p, %p\n", params->session, params->info);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnableLocalizationEventsML(wine_session_from_handle(params->session)->host_session, params->info);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnableUserCalibrationEventsML(void *args)
{
    struct
    {
        PTR32 instance;
        PTR32 enableInfo;
        XrResult result;
    } *params = args;
    XrUserCalibrationEnableEventsInfoML enableInfo_host;

    TRACE("%#x, %#x\n", params->instance, params->enableInfo);

    convert_XrUserCalibrationEnableEventsInfoML_win32_to_host((const XrUserCalibrationEnableEventsInfoML32 *)UlongToPtr(params->enableInfo), &enableInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnableUserCalibrationEventsML(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, &enableInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnableUserCalibrationEventsML(void *args)
{
    struct xrEnableUserCalibrationEventsML_params *params = args;

    TRACE("%p, %p\n", params->instance, params->enableInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnableUserCalibrationEventsML(wine_instance_from_handle(params->instance)->host_instance, params->enableInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEndFrame(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 frameEndInfo;
        XrResult result;
    } *params = args;
    XrFrameEndInfo frameEndInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x\n", params->session, params->frameEndInfo);

    init_conversion_context(ctx);
    convert_XrFrameEndInfo_win32_to_host(ctx, (const XrFrameEndInfo32 *)UlongToPtr(params->frameEndInfo), &frameEndInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrEndFrame(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &frameEndInfo_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEndFrame(void *args)
{
    struct xrEndFrame_params *params = args;

    TRACE("%p, %p\n", params->session, params->frameEndInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrEndFrame(wine_session_from_handle(params->session)->host_session, params->frameEndInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEndSession(void *args)
{
    struct
    {
        PTR32 session;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->session);

    params->result = g_xr_host_instance_dispatch_table.p_xrEndSession(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEndSession(void *args)
{
    struct xrEndSession_params *params = args;

    TRACE("%p\n", params->session);

    params->result = g_xr_host_instance_dispatch_table.p_xrEndSession(wine_session_from_handle(params->session)->host_session);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateApiLayerProperties(void *args)
{
    struct
    {
        uint32_t propertyCapacityInput;
        PTR32 propertyCountOutput;
        PTR32 properties;
        XrResult result;
    } *params = args;
    XrApiLayerProperties *properties_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%u, %#x, %#x\n", params->propertyCapacityInput, params->propertyCountOutput, params->properties);

    init_conversion_context(ctx);
    properties_host = convert_XrApiLayerProperties_array_win32_to_host(ctx, (XrApiLayerProperties32 *)UlongToPtr(params->properties), params->propertyCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateApiLayerProperties(params->propertyCapacityInput, (uint32_t *)UlongToPtr(params->propertyCountOutput), properties_host);
    convert_XrApiLayerProperties_array_host_to_win32(properties_host, (XrApiLayerProperties32 *)UlongToPtr(params->properties), params->propertyCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateApiLayerProperties(void *args)
{
    struct xrEnumerateApiLayerProperties_params *params = args;

    TRACE("%u, %p, %p\n", params->propertyCapacityInput, params->propertyCountOutput, params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateApiLayerProperties(params->propertyCapacityInput, params->propertyCountOutput, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateBoundSourcesForAction(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 enumerateInfo;
        uint32_t sourceCapacityInput;
        PTR32 sourceCountOutput;
        PTR32 sources;
        XrResult result;
    } *params = args;
    XrBoundSourcesForActionEnumerateInfo enumerateInfo_host;

    TRACE("%#x, %#x, %u, %#x, %#x\n", params->session, params->enumerateInfo, params->sourceCapacityInput, params->sourceCountOutput, params->sources);

    convert_XrBoundSourcesForActionEnumerateInfo_win32_to_host((const XrBoundSourcesForActionEnumerateInfo32 *)UlongToPtr(params->enumerateInfo), &enumerateInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateBoundSourcesForAction(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &enumerateInfo_host, params->sourceCapacityInput, (uint32_t *)UlongToPtr(params->sourceCountOutput), (XrPath *)UlongToPtr(params->sources));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateBoundSourcesForAction(void *args)
{
    struct xrEnumerateBoundSourcesForAction_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->session, params->enumerateInfo, params->sourceCapacityInput, params->sourceCountOutput, params->sources);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateBoundSourcesForAction(wine_session_from_handle(params->session)->host_session, params->enumerateInfo, params->sourceCapacityInput, params->sourceCountOutput, params->sources);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateColorSpacesFB(void *args)
{
    struct
    {
        PTR32 session;
        uint32_t colorSpaceCapacityInput;
        PTR32 colorSpaceCountOutput;
        PTR32 colorSpaces;
        XrResult result;
    } *params = args;

    TRACE("%#x, %u, %#x, %#x\n", params->session, params->colorSpaceCapacityInput, params->colorSpaceCountOutput, params->colorSpaces);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateColorSpacesFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->colorSpaceCapacityInput, (uint32_t *)UlongToPtr(params->colorSpaceCountOutput), (XrColorSpaceFB *)UlongToPtr(params->colorSpaces));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateColorSpacesFB(void *args)
{
    struct xrEnumerateColorSpacesFB_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->session, params->colorSpaceCapacityInput, params->colorSpaceCountOutput, params->colorSpaces);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateColorSpacesFB(wine_session_from_handle(params->session)->host_session, params->colorSpaceCapacityInput, params->colorSpaceCountOutput, params->colorSpaces);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateDisplayRefreshRatesFB(void *args)
{
    struct
    {
        PTR32 session;
        uint32_t displayRefreshRateCapacityInput;
        PTR32 displayRefreshRateCountOutput;
        PTR32 displayRefreshRates;
        XrResult result;
    } *params = args;

    TRACE("%#x, %u, %#x, %#x\n", params->session, params->displayRefreshRateCapacityInput, params->displayRefreshRateCountOutput, params->displayRefreshRates);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateDisplayRefreshRatesFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->displayRefreshRateCapacityInput, (uint32_t *)UlongToPtr(params->displayRefreshRateCountOutput), (float *)UlongToPtr(params->displayRefreshRates));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateDisplayRefreshRatesFB(void *args)
{
    struct xrEnumerateDisplayRefreshRatesFB_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->session, params->displayRefreshRateCapacityInput, params->displayRefreshRateCountOutput, params->displayRefreshRates);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateDisplayRefreshRatesFB(wine_session_from_handle(params->session)->host_session, params->displayRefreshRateCapacityInput, params->displayRefreshRateCountOutput, params->displayRefreshRates);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateEnvironmentBlendModes(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        XrViewConfigurationType viewConfigurationType;
        uint32_t environmentBlendModeCapacityInput;
        PTR32 environmentBlendModeCountOutput;
        PTR32 environmentBlendModes;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %#x, %u, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->environmentBlendModeCapacityInput, params->environmentBlendModeCountOutput, params->environmentBlendModes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateEnvironmentBlendModes(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, params->viewConfigurationType, params->environmentBlendModeCapacityInput, (uint32_t *)UlongToPtr(params->environmentBlendModeCountOutput), (XrEnvironmentBlendMode *)UlongToPtr(params->environmentBlendModes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateEnvironmentBlendModes(void *args)
{
    struct xrEnumerateEnvironmentBlendModes_params *params = args;

    TRACE("%p, 0x%s, %#x, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->environmentBlendModeCapacityInput, params->environmentBlendModeCountOutput, params->environmentBlendModes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateEnvironmentBlendModes(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationType, params->environmentBlendModeCapacityInput, params->environmentBlendModeCountOutput, params->environmentBlendModes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateEnvironmentDepthSwapchainImagesMETA(void *args)
{
    struct
    {
        PTR32 swapchain;
        uint32_t imageCapacityInput;
        PTR32 imageCountOutput;
        PTR32 images;
        XrResult result;
    } *params = args;
    XrSwapchainImageBaseHeader *images_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %u, %#x, %#x\n", params->swapchain, params->imageCapacityInput, params->imageCountOutput, params->images);

    init_conversion_context(ctx);
    images_host = convert_XrSwapchainImageBaseHeader_array_win32_to_host(ctx, (XrSwapchainImageBaseHeader32 *)UlongToPtr(params->images), params->imageCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateEnvironmentDepthSwapchainImagesMETA((XrEnvironmentDepthSwapchainMETA)UlongToPtr(params->swapchain), params->imageCapacityInput, (uint32_t *)UlongToPtr(params->imageCountOutput), images_host);
    convert_XrSwapchainImageBaseHeader_array_host_to_win32(images_host, (XrSwapchainImageBaseHeader32 *)UlongToPtr(params->images), params->imageCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateEnvironmentDepthSwapchainImagesMETA(void *args)
{
    struct xrEnumerateEnvironmentDepthSwapchainImagesMETA_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->swapchain, params->imageCapacityInput, params->imageCountOutput, params->images);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateEnvironmentDepthSwapchainImagesMETA(params->swapchain, params->imageCapacityInput, params->imageCountOutput, params->images);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateExternalCamerasOCULUS(void *args)
{
    struct
    {
        PTR32 session;
        uint32_t cameraCapacityInput;
        PTR32 cameraCountOutput;
        PTR32 cameras;
        XrResult result;
    } *params = args;
    XrExternalCameraOCULUS *cameras_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %u, %#x, %#x\n", params->session, params->cameraCapacityInput, params->cameraCountOutput, params->cameras);

    init_conversion_context(ctx);
    cameras_host = convert_XrExternalCameraOCULUS_array_win32_to_host(ctx, (XrExternalCameraOCULUS32 *)UlongToPtr(params->cameras), params->cameraCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateExternalCamerasOCULUS(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->cameraCapacityInput, (uint32_t *)UlongToPtr(params->cameraCountOutput), cameras_host);
    convert_XrExternalCameraOCULUS_array_host_to_win32(cameras_host, (XrExternalCameraOCULUS32 *)UlongToPtr(params->cameras), params->cameraCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateExternalCamerasOCULUS(void *args)
{
    struct xrEnumerateExternalCamerasOCULUS_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->session, params->cameraCapacityInput, params->cameraCountOutput, params->cameras);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateExternalCamerasOCULUS(wine_session_from_handle(params->session)->host_session, params->cameraCapacityInput, params->cameraCountOutput, params->cameras);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateInstanceExtensionProperties(void *args)
{
    struct
    {
        PTR32 layerName;
        uint32_t propertyCapacityInput;
        PTR32 propertyCountOutput;
        PTR32 properties;
        XrResult result;
    } *params = args;
    XrExtensionProperties *properties_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %u, %#x, %#x\n", params->layerName, params->propertyCapacityInput, params->propertyCountOutput, params->properties);

    init_conversion_context(ctx);
    properties_host = convert_XrExtensionProperties_array_win32_to_host(ctx, (XrExtensionProperties32 *)UlongToPtr(params->properties), params->propertyCapacityInput);
    params->result = wine_xrEnumerateInstanceExtensionProperties((const char *)UlongToPtr(params->layerName), params->propertyCapacityInput, (uint32_t *)UlongToPtr(params->propertyCountOutput), properties_host);
    convert_XrExtensionProperties_array_host_to_win32(properties_host, (XrExtensionProperties32 *)UlongToPtr(params->properties), params->propertyCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateInstanceExtensionProperties(void *args)
{
    struct xrEnumerateInstanceExtensionProperties_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->layerName, params->propertyCapacityInput, params->propertyCountOutput, params->properties);

    params->result = wine_xrEnumerateInstanceExtensionProperties(params->layerName, params->propertyCapacityInput, params->propertyCountOutput, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateInteractionRenderModelIdsEXT(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 getInfo;
        uint32_t renderModelIdCapacityInput;
        PTR32 renderModelIdCountOutput;
        PTR32 renderModelIds;
        XrResult result;
    } *params = args;
    XrInteractionRenderModelIdsEnumerateInfoEXT getInfo_host;

    TRACE("%#x, %#x, %u, %#x, %#x\n", params->session, params->getInfo, params->renderModelIdCapacityInput, params->renderModelIdCountOutput, params->renderModelIds);

    convert_XrInteractionRenderModelIdsEnumerateInfoEXT_win32_to_host((const XrInteractionRenderModelIdsEnumerateInfoEXT32 *)UlongToPtr(params->getInfo), &getInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateInteractionRenderModelIdsEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &getInfo_host, params->renderModelIdCapacityInput, (uint32_t *)UlongToPtr(params->renderModelIdCountOutput), (XrRenderModelIdEXT *)UlongToPtr(params->renderModelIds));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateInteractionRenderModelIdsEXT(void *args)
{
    struct xrEnumerateInteractionRenderModelIdsEXT_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->session, params->getInfo, params->renderModelIdCapacityInput, params->renderModelIdCountOutput, params->renderModelIds);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateInteractionRenderModelIdsEXT(wine_session_from_handle(params->session)->host_session, params->getInfo, params->renderModelIdCapacityInput, params->renderModelIdCountOutput, params->renderModelIds);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumeratePerformanceMetricsCounterPathsMETA(void *args)
{
    struct
    {
        PTR32 instance;
        uint32_t counterPathCapacityInput;
        PTR32 counterPathCountOutput;
        PTR32 counterPaths;
        XrResult result;
    } *params = args;

    TRACE("%#x, %u, %#x, %#x\n", params->instance, params->counterPathCapacityInput, params->counterPathCountOutput, params->counterPaths);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumeratePerformanceMetricsCounterPathsMETA(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->counterPathCapacityInput, (uint32_t *)UlongToPtr(params->counterPathCountOutput), (XrPath *)UlongToPtr(params->counterPaths));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumeratePerformanceMetricsCounterPathsMETA(void *args)
{
    struct xrEnumeratePerformanceMetricsCounterPathsMETA_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->instance, params->counterPathCapacityInput, params->counterPathCountOutput, params->counterPaths);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumeratePerformanceMetricsCounterPathsMETA(wine_instance_from_handle(params->instance)->host_instance, params->counterPathCapacityInput, params->counterPathCountOutput, params->counterPaths);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumeratePersistedAnchorsANDROID(void *args)
{
    struct
    {
        PTR32 handle;
        uint32_t anchorIdCapacityInput;
        PTR32 anchorIdCountOutput;
        PTR32 anchorIds;
        XrResult result;
    } *params = args;

    TRACE("%#x, %u, %#x, %#x\n", params->handle, params->anchorIdCapacityInput, params->anchorIdCountOutput, params->anchorIds);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumeratePersistedAnchorsANDROID((XrDeviceAnchorPersistenceANDROID)UlongToPtr(params->handle), params->anchorIdCapacityInput, (uint32_t *)UlongToPtr(params->anchorIdCountOutput), (XrUuidEXT *)UlongToPtr(params->anchorIds));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumeratePersistedAnchorsANDROID(void *args)
{
    struct xrEnumeratePersistedAnchorsANDROID_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->handle, params->anchorIdCapacityInput, params->anchorIdCountOutput, params->anchorIds);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumeratePersistedAnchorsANDROID(params->handle, params->anchorIdCapacityInput, params->anchorIdCountOutput, params->anchorIds);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumeratePersistedSpatialAnchorNamesMSFT(void *args)
{
    struct
    {
        PTR32 spatialAnchorStore;
        uint32_t spatialAnchorNameCapacityInput;
        PTR32 spatialAnchorNameCountOutput;
        PTR32 spatialAnchorNames;
        XrResult result;
    } *params = args;

    TRACE("%#x, %u, %#x, %#x\n", params->spatialAnchorStore, params->spatialAnchorNameCapacityInput, params->spatialAnchorNameCountOutput, params->spatialAnchorNames);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumeratePersistedSpatialAnchorNamesMSFT((XrSpatialAnchorStoreConnectionMSFT)UlongToPtr(params->spatialAnchorStore), params->spatialAnchorNameCapacityInput, (uint32_t *)UlongToPtr(params->spatialAnchorNameCountOutput), (XrSpatialAnchorPersistenceNameMSFT *)UlongToPtr(params->spatialAnchorNames));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumeratePersistedSpatialAnchorNamesMSFT(void *args)
{
    struct xrEnumeratePersistedSpatialAnchorNamesMSFT_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->spatialAnchorStore, params->spatialAnchorNameCapacityInput, params->spatialAnchorNameCountOutput, params->spatialAnchorNames);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumeratePersistedSpatialAnchorNamesMSFT(params->spatialAnchorStore, params->spatialAnchorNameCapacityInput, params->spatialAnchorNameCountOutput, params->spatialAnchorNames);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateRaycastSupportedTrackableTypesANDROID(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        uint32_t trackableTypeCapacityInput;
        PTR32 trackableTypeCountOutput;
        PTR32 trackableTypes;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %u, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateRaycastSupportedTrackableTypesANDROID(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, params->trackableTypeCapacityInput, (uint32_t *)UlongToPtr(params->trackableTypeCountOutput), (XrTrackableTypeANDROID *)UlongToPtr(params->trackableTypes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateRaycastSupportedTrackableTypesANDROID(void *args)
{
    struct xrEnumerateRaycastSupportedTrackableTypesANDROID_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateRaycastSupportedTrackableTypesANDROID(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateReferenceSpaces(void *args)
{
    struct
    {
        PTR32 session;
        uint32_t spaceCapacityInput;
        PTR32 spaceCountOutput;
        PTR32 spaces;
        XrResult result;
    } *params = args;

    TRACE("%#x, %u, %#x, %#x\n", params->session, params->spaceCapacityInput, params->spaceCountOutput, params->spaces);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateReferenceSpaces(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->spaceCapacityInput, (uint32_t *)UlongToPtr(params->spaceCountOutput), (XrReferenceSpaceType *)UlongToPtr(params->spaces));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateReferenceSpaces(void *args)
{
    struct xrEnumerateReferenceSpaces_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->session, params->spaceCapacityInput, params->spaceCountOutput, params->spaces);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateReferenceSpaces(wine_session_from_handle(params->session)->host_session, params->spaceCapacityInput, params->spaceCountOutput, params->spaces);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateRenderModelPathsFB(void *args)
{
    struct
    {
        PTR32 session;
        uint32_t pathCapacityInput;
        PTR32 pathCountOutput;
        PTR32 paths;
        XrResult result;
    } *params = args;
    XrRenderModelPathInfoFB *paths_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %u, %#x, %#x\n", params->session, params->pathCapacityInput, params->pathCountOutput, params->paths);

    init_conversion_context(ctx);
    paths_host = convert_XrRenderModelPathInfoFB_array_win32_to_host(ctx, (XrRenderModelPathInfoFB32 *)UlongToPtr(params->paths), params->pathCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateRenderModelPathsFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->pathCapacityInput, (uint32_t *)UlongToPtr(params->pathCountOutput), paths_host);
    convert_XrRenderModelPathInfoFB_array_host_to_win32(paths_host, (XrRenderModelPathInfoFB32 *)UlongToPtr(params->paths), params->pathCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateRenderModelPathsFB(void *args)
{
    struct xrEnumerateRenderModelPathsFB_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->session, params->pathCapacityInput, params->pathCountOutput, params->paths);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateRenderModelPathsFB(wine_session_from_handle(params->session)->host_session, params->pathCapacityInput, params->pathCountOutput, params->paths);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateRenderModelSubactionPathsEXT(void *args)
{
    struct
    {
        PTR32 renderModel;
        PTR32 info;
        uint32_t pathCapacityInput;
        PTR32 pathCountOutput;
        PTR32 paths;
        XrResult result;
    } *params = args;
    XrInteractionRenderModelSubactionPathInfoEXT *info_host = NULL;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %u, %#x, %#x\n", params->renderModel, params->info, params->pathCapacityInput, params->pathCountOutput, params->paths);

    init_conversion_context(ctx);
    if (params->info)
    {
        info_host = conversion_context_alloc(ctx, sizeof(*info_host));
        convert_XrInteractionRenderModelSubactionPathInfoEXT_win32_to_host((const XrInteractionRenderModelSubactionPathInfoEXT32 *)UlongToPtr(params->info), info_host);
    }
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateRenderModelSubactionPathsEXT((XrRenderModelEXT)UlongToPtr(params->renderModel), info_host, params->pathCapacityInput, (uint32_t *)UlongToPtr(params->pathCountOutput), (XrPath *)UlongToPtr(params->paths));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateRenderModelSubactionPathsEXT(void *args)
{
    struct xrEnumerateRenderModelSubactionPathsEXT_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->renderModel, params->info, params->pathCapacityInput, params->pathCountOutput, params->paths);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateRenderModelSubactionPathsEXT(params->renderModel, params->info, params->pathCapacityInput, params->pathCountOutput, params->paths);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateReprojectionModesMSFT(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        XrViewConfigurationType viewConfigurationType;
        uint32_t modeCapacityInput;
        PTR32 modeCountOutput;
        PTR32 modes;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %#x, %u, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->modeCapacityInput, params->modeCountOutput, params->modes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateReprojectionModesMSFT(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, params->viewConfigurationType, params->modeCapacityInput, (uint32_t *)UlongToPtr(params->modeCountOutput), (XrReprojectionModeMSFT *)UlongToPtr(params->modes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateReprojectionModesMSFT(void *args)
{
    struct xrEnumerateReprojectionModesMSFT_params *params = args;

    TRACE("%p, 0x%s, %#x, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->modeCapacityInput, params->modeCountOutput, params->modes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateReprojectionModesMSFT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationType, params->modeCapacityInput, params->modeCountOutput, params->modes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSceneComputeFeaturesMSFT(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        uint32_t featureCapacityInput;
        PTR32 featureCountOutput;
        PTR32 features;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %u, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->featureCapacityInput, params->featureCountOutput, params->features);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSceneComputeFeaturesMSFT(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, params->featureCapacityInput, (uint32_t *)UlongToPtr(params->featureCountOutput), (XrSceneComputeFeatureMSFT *)UlongToPtr(params->features));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSceneComputeFeaturesMSFT(void *args)
{
    struct xrEnumerateSceneComputeFeaturesMSFT_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->featureCapacityInput, params->featureCountOutput, params->features);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSceneComputeFeaturesMSFT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->featureCapacityInput, params->featureCountOutput, params->features);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSpaceSupportedComponentsFB(void *args)
{
    struct
    {
        PTR32 space;
        uint32_t componentTypeCapacityInput;
        PTR32 componentTypeCountOutput;
        PTR32 componentTypes;
        XrResult result;
    } *params = args;

    TRACE("%#x, %u, %#x, %#x\n", params->space, params->componentTypeCapacityInput, params->componentTypeCountOutput, params->componentTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpaceSupportedComponentsFB((XrSpace)UlongToPtr(params->space), params->componentTypeCapacityInput, (uint32_t *)UlongToPtr(params->componentTypeCountOutput), (XrSpaceComponentTypeFB *)UlongToPtr(params->componentTypes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSpaceSupportedComponentsFB(void *args)
{
    struct xrEnumerateSpaceSupportedComponentsFB_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->space, params->componentTypeCapacityInput, params->componentTypeCountOutput, params->componentTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpaceSupportedComponentsFB(params->space, params->componentTypeCapacityInput, params->componentTypeCountOutput, params->componentTypes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSpatialCapabilitiesEXT(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        uint32_t capabilityCapacityInput;
        PTR32 capabilityCountOutput;
        PTR32 capabilities;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %u, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->capabilityCapacityInput, params->capabilityCountOutput, params->capabilities);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialCapabilitiesEXT(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, params->capabilityCapacityInput, (uint32_t *)UlongToPtr(params->capabilityCountOutput), (XrSpatialCapabilityEXT *)UlongToPtr(params->capabilities));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSpatialCapabilitiesEXT(void *args)
{
    struct xrEnumerateSpatialCapabilitiesEXT_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->capabilityCapacityInput, params->capabilityCountOutput, params->capabilities);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialCapabilitiesEXT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->capabilityCapacityInput, params->capabilityCountOutput, params->capabilities);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSpatialCapabilityComponentTypesEXT(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        XrSpatialCapabilityEXT capability;
        PTR32 capabilityComponents;
        XrResult result;
    } *params = args;
    XrSpatialCapabilityComponentTypesEXT capabilityComponents_host;

    TRACE("%#x, 0x%s, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->capability, params->capabilityComponents);

    convert_XrSpatialCapabilityComponentTypesEXT_win32_to_host((XrSpatialCapabilityComponentTypesEXT32 *)UlongToPtr(params->capabilityComponents), &capabilityComponents_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialCapabilityComponentTypesEXT(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, params->capability, &capabilityComponents_host);
    convert_XrSpatialCapabilityComponentTypesEXT_host_to_win32(&capabilityComponents_host, (XrSpatialCapabilityComponentTypesEXT32 *)UlongToPtr(params->capabilityComponents));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSpatialCapabilityComponentTypesEXT(void *args)
{
    struct xrEnumerateSpatialCapabilityComponentTypesEXT_params *params = args;

    TRACE("%p, 0x%s, %#x, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->capability, params->capabilityComponents);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialCapabilityComponentTypesEXT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->capability, params->capabilityComponents);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSpatialCapabilityFeaturesEXT(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        XrSpatialCapabilityEXT capability;
        uint32_t capabilityFeatureCapacityInput;
        PTR32 capabilityFeatureCountOutput;
        PTR32 capabilityFeatures;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %#x, %u, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->capability, params->capabilityFeatureCapacityInput, params->capabilityFeatureCountOutput, params->capabilityFeatures);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialCapabilityFeaturesEXT(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, params->capability, params->capabilityFeatureCapacityInput, (uint32_t *)UlongToPtr(params->capabilityFeatureCountOutput), (XrSpatialCapabilityFeatureEXT *)UlongToPtr(params->capabilityFeatures));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSpatialCapabilityFeaturesEXT(void *args)
{
    struct xrEnumerateSpatialCapabilityFeaturesEXT_params *params = args;

    TRACE("%p, 0x%s, %#x, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->capability, params->capabilityFeatureCapacityInput, params->capabilityFeatureCountOutput, params->capabilityFeatures);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialCapabilityFeaturesEXT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->capability, params->capabilityFeatureCapacityInput, params->capabilityFeatureCountOutput, params->capabilityFeatures);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSpatialEntityComponentTypesBD(void *args)
{
    struct
    {
        PTR32 snapshot;
        XrSpatialEntityIdBD entityId;
        uint32_t componentTypeCapacityInput;
        PTR32 componentTypeCountOutput;
        PTR32 componentTypes;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %u, %#x, %#x\n", params->snapshot, wine_dbgstr_longlong(params->entityId), params->componentTypeCapacityInput, params->componentTypeCountOutput, params->componentTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialEntityComponentTypesBD((XrSenseDataSnapshotBD)UlongToPtr(params->snapshot), params->entityId, params->componentTypeCapacityInput, (uint32_t *)UlongToPtr(params->componentTypeCountOutput), (XrSpatialEntityComponentTypeBD *)UlongToPtr(params->componentTypes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSpatialEntityComponentTypesBD(void *args)
{
    struct xrEnumerateSpatialEntityComponentTypesBD_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->snapshot, wine_dbgstr_longlong(params->entityId), params->componentTypeCapacityInput, params->componentTypeCountOutput, params->componentTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialEntityComponentTypesBD(params->snapshot, params->entityId, params->componentTypeCapacityInput, params->componentTypeCountOutput, params->componentTypes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSpatialPersistenceScopesEXT(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        uint32_t persistenceScopeCapacityInput;
        PTR32 persistenceScopeCountOutput;
        PTR32 persistenceScopes;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %u, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->persistenceScopeCapacityInput, params->persistenceScopeCountOutput, params->persistenceScopes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialPersistenceScopesEXT(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, params->persistenceScopeCapacityInput, (uint32_t *)UlongToPtr(params->persistenceScopeCountOutput), (XrSpatialPersistenceScopeEXT *)UlongToPtr(params->persistenceScopes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSpatialPersistenceScopesEXT(void *args)
{
    struct xrEnumerateSpatialPersistenceScopesEXT_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->persistenceScopeCapacityInput, params->persistenceScopeCountOutput, params->persistenceScopes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialPersistenceScopesEXT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->persistenceScopeCapacityInput, params->persistenceScopeCountOutput, params->persistenceScopes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSupportedAnchorTrackableTypesANDROID(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        uint32_t trackableTypeCapacityInput;
        PTR32 trackableTypeCountOutput;
        PTR32 trackableTypes;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %u, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSupportedAnchorTrackableTypesANDROID(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, params->trackableTypeCapacityInput, (uint32_t *)UlongToPtr(params->trackableTypeCountOutput), (XrTrackableTypeANDROID *)UlongToPtr(params->trackableTypes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSupportedAnchorTrackableTypesANDROID(void *args)
{
    struct xrEnumerateSupportedAnchorTrackableTypesANDROID_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSupportedAnchorTrackableTypesANDROID(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSupportedPersistenceAnchorTypesANDROID(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        uint32_t trackableTypeCapacityInput;
        PTR32 trackableTypeCountOutput;
        PTR32 trackableTypes;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %u, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSupportedPersistenceAnchorTypesANDROID(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, params->trackableTypeCapacityInput, (uint32_t *)UlongToPtr(params->trackableTypeCountOutput), (XrTrackableTypeANDROID *)UlongToPtr(params->trackableTypes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSupportedPersistenceAnchorTypesANDROID(void *args)
{
    struct xrEnumerateSupportedPersistenceAnchorTypesANDROID_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSupportedPersistenceAnchorTypesANDROID(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSupportedTrackableTypesANDROID(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        uint32_t trackableTypeCapacityInput;
        PTR32 trackableTypeCountOutput;
        PTR32 trackableTypes;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %u, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSupportedTrackableTypesANDROID(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, params->trackableTypeCapacityInput, (uint32_t *)UlongToPtr(params->trackableTypeCountOutput), (XrTrackableTypeANDROID *)UlongToPtr(params->trackableTypes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSupportedTrackableTypesANDROID(void *args)
{
    struct xrEnumerateSupportedTrackableTypesANDROID_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSupportedTrackableTypesANDROID(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSwapchainFormats(void *args)
{
    struct
    {
        PTR32 session;
        uint32_t formatCapacityInput;
        PTR32 formatCountOutput;
        PTR32 formats;
        XrResult result;
    } *params = args;

    TRACE("%#x, %u, %#x, %#x\n", params->session, params->formatCapacityInput, params->formatCountOutput, params->formats);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSwapchainFormats(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->formatCapacityInput, (uint32_t *)UlongToPtr(params->formatCountOutput), (int64_t *)UlongToPtr(params->formats));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSwapchainFormats(void *args)
{
    struct xrEnumerateSwapchainFormats_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->session, params->formatCapacityInput, params->formatCountOutput, params->formats);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSwapchainFormats(wine_session_from_handle(params->session)->host_session, params->formatCapacityInput, params->formatCountOutput, params->formats);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSwapchainImages(void *args)
{
    struct
    {
        PTR32 swapchain;
        uint32_t imageCapacityInput;
        PTR32 imageCountOutput;
        PTR32 images;
        XrResult result;
    } *params = args;
    XrSwapchainImageBaseHeader *images_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %u, %#x, %#x\n", params->swapchain, params->imageCapacityInput, params->imageCountOutput, params->images);

    init_conversion_context(ctx);
    images_host = convert_XrSwapchainImageBaseHeader_array_win32_to_host(ctx, (XrSwapchainImageBaseHeader32 *)UlongToPtr(params->images), params->imageCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSwapchainImages(wine_swapchain_from_handle((XrSwapchain)UlongToPtr(params->swapchain))->host_swapchain, params->imageCapacityInput, (uint32_t *)UlongToPtr(params->imageCountOutput), images_host);
    convert_XrSwapchainImageBaseHeader_array_host_to_win32(images_host, (XrSwapchainImageBaseHeader32 *)UlongToPtr(params->images), params->imageCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSwapchainImages(void *args)
{
    struct xrEnumerateSwapchainImages_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->swapchain, params->imageCapacityInput, params->imageCountOutput, params->images);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSwapchainImages(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->imageCapacityInput, params->imageCountOutput, params->images);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateViewConfigurationViews(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        XrViewConfigurationType viewConfigurationType;
        uint32_t viewCapacityInput;
        PTR32 viewCountOutput;
        PTR32 views;
        XrResult result;
    } *params = args;
    XrViewConfigurationView *views_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, 0x%s, %#x, %u, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->viewCapacityInput, params->viewCountOutput, params->views);

    init_conversion_context(ctx);
    views_host = convert_XrViewConfigurationView_array_win32_to_host(ctx, (XrViewConfigurationView32 *)UlongToPtr(params->views), params->viewCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateViewConfigurationViews(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, params->viewConfigurationType, params->viewCapacityInput, (uint32_t *)UlongToPtr(params->viewCountOutput), views_host);
    convert_XrViewConfigurationView_array_host_to_win32(views_host, (XrViewConfigurationView32 *)UlongToPtr(params->views), params->viewCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateViewConfigurationViews(void *args)
{
    struct xrEnumerateViewConfigurationViews_params *params = args;

    TRACE("%p, 0x%s, %#x, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->viewCapacityInput, params->viewCountOutput, params->views);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateViewConfigurationViews(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationType, params->viewCapacityInput, params->viewCountOutput, params->views);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateViewConfigurations(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        uint32_t viewConfigurationTypeCapacityInput;
        PTR32 viewConfigurationTypeCountOutput;
        PTR32 viewConfigurationTypes;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %u, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->viewConfigurationTypeCapacityInput, params->viewConfigurationTypeCountOutput, params->viewConfigurationTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateViewConfigurations(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, params->viewConfigurationTypeCapacityInput, (uint32_t *)UlongToPtr(params->viewConfigurationTypeCountOutput), (XrViewConfigurationType *)UlongToPtr(params->viewConfigurationTypes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateViewConfigurations(void *args)
{
    struct xrEnumerateViewConfigurations_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->viewConfigurationTypeCapacityInput, params->viewConfigurationTypeCountOutput, params->viewConfigurationTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateViewConfigurations(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationTypeCapacityInput, params->viewConfigurationTypeCountOutput, params->viewConfigurationTypes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateViveTrackerPathsHTCX(void *args)
{
    struct
    {
        PTR32 instance;
        uint32_t pathCapacityInput;
        PTR32 pathCountOutput;
        PTR32 paths;
        XrResult result;
    } *params = args;
    XrViveTrackerPathsHTCX *paths_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %u, %#x, %#x\n", params->instance, params->pathCapacityInput, params->pathCountOutput, params->paths);

    init_conversion_context(ctx);
    paths_host = convert_XrViveTrackerPathsHTCX_array_win32_to_host(ctx, (XrViveTrackerPathsHTCX32 *)UlongToPtr(params->paths), params->pathCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateViveTrackerPathsHTCX(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->pathCapacityInput, (uint32_t *)UlongToPtr(params->pathCountOutput), paths_host);
    convert_XrViveTrackerPathsHTCX_array_host_to_win32(paths_host, (XrViveTrackerPathsHTCX32 *)UlongToPtr(params->paths), params->pathCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateViveTrackerPathsHTCX(void *args)
{
    struct xrEnumerateViveTrackerPathsHTCX_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->instance, params->pathCapacityInput, params->pathCountOutput, params->paths);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateViveTrackerPathsHTCX(wine_instance_from_handle(params->instance)->host_instance, params->pathCapacityInput, params->pathCountOutput, params->paths);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEraseSpaceFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpaceEraseInfoFB info_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->requestId);

    convert_XrSpaceEraseInfoFB_win32_to_host((const XrSpaceEraseInfoFB32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrEraseSpaceFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, (XrAsyncRequestIdFB *)UlongToPtr(params->requestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEraseSpaceFB(void *args)
{
    struct xrEraseSpaceFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrEraseSpaceFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEraseSpacesMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpacesEraseInfoMETA info_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->requestId);

    init_conversion_context(ctx);
    convert_XrSpacesEraseInfoMETA_win32_to_host(ctx, (const XrSpacesEraseInfoMETA32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrEraseSpacesMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, (XrAsyncRequestIdFB *)UlongToPtr(params->requestId));
    convert_XrSpacesEraseInfoMETA_host_to_win32(&info_host, (const XrSpacesEraseInfoMETA32 *)UlongToPtr(params->info));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEraseSpacesMETA(void *args)
{
    struct xrEraseSpacesMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrEraseSpacesMETA(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrFreeWorldMeshBufferML(void *args)
{
    struct
    {
        PTR32 detector;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrWorldMeshBufferML buffer_host;

    TRACE("%#x, %#x\n", params->detector, params->buffer);

    convert_XrWorldMeshBufferML_win32_to_host((const XrWorldMeshBufferML32 *)UlongToPtr(params->buffer), &buffer_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrFreeWorldMeshBufferML((XrWorldMeshDetectorML)UlongToPtr(params->detector), &buffer_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrFreeWorldMeshBufferML(void *args)
{
    struct xrFreeWorldMeshBufferML_params *params = args;

    TRACE("%p, %p\n", params->detector, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrFreeWorldMeshBufferML(params->detector, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGeometryInstanceSetTransformFB(void *args)
{
    struct
    {
        PTR32 instance;
        PTR32 transformation;
        XrResult result;
    } *params = args;
    XrGeometryInstanceTransformFB transformation_host;

    TRACE("%#x, %#x\n", params->instance, params->transformation);

    convert_XrGeometryInstanceTransformFB_win32_to_host((const XrGeometryInstanceTransformFB32 *)UlongToPtr(params->transformation), &transformation_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGeometryInstanceSetTransformFB((XrGeometryInstanceFB)UlongToPtr(params->instance), &transformation_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGeometryInstanceSetTransformFB(void *args)
{
    struct xrGeometryInstanceSetTransformFB_params *params = args;

    TRACE("%p, %p\n", params->instance, params->transformation);

    params->result = g_xr_host_instance_dispatch_table.p_xrGeometryInstanceSetTransformFB(params->instance, params->transformation);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetActionStateBoolean(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 getInfo;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrActionStateGetInfo getInfo_host;
    XrActionStateBoolean state_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->getInfo, params->state);

    convert_XrActionStateGetInfo_win32_to_host((const XrActionStateGetInfo32 *)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrActionStateBoolean_win32_to_host((XrActionStateBoolean32 *)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStateBoolean(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &getInfo_host, &state_host);
    convert_XrActionStateBoolean_host_to_win32(&state_host, (XrActionStateBoolean32 *)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetActionStateBoolean(void *args)
{
    struct xrGetActionStateBoolean_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->getInfo, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStateBoolean(wine_session_from_handle(params->session)->host_session, params->getInfo, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetActionStateFloat(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 getInfo;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrActionStateGetInfo getInfo_host;
    XrActionStateFloat state_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->getInfo, params->state);

    convert_XrActionStateGetInfo_win32_to_host((const XrActionStateGetInfo32 *)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrActionStateFloat_win32_to_host((XrActionStateFloat32 *)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStateFloat(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &getInfo_host, &state_host);
    convert_XrActionStateFloat_host_to_win32(&state_host, (XrActionStateFloat32 *)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetActionStateFloat(void *args)
{
    struct xrGetActionStateFloat_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->getInfo, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStateFloat(wine_session_from_handle(params->session)->host_session, params->getInfo, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetActionStatePose(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 getInfo;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrActionStateGetInfo getInfo_host;
    XrActionStatePose state_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->getInfo, params->state);

    convert_XrActionStateGetInfo_win32_to_host((const XrActionStateGetInfo32 *)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrActionStatePose_win32_to_host((XrActionStatePose32 *)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStatePose(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &getInfo_host, &state_host);
    convert_XrActionStatePose_host_to_win32(&state_host, (XrActionStatePose32 *)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetActionStatePose(void *args)
{
    struct xrGetActionStatePose_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->getInfo, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStatePose(wine_session_from_handle(params->session)->host_session, params->getInfo, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetActionStateVector2f(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 getInfo;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrActionStateGetInfo getInfo_host;
    XrActionStateVector2f state_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->getInfo, params->state);

    convert_XrActionStateGetInfo_win32_to_host((const XrActionStateGetInfo32 *)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrActionStateVector2f_win32_to_host((XrActionStateVector2f32 *)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStateVector2f(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &getInfo_host, &state_host);
    convert_XrActionStateVector2f_host_to_win32(&state_host, (XrActionStateVector2f32 *)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetActionStateVector2f(void *args)
{
    struct xrGetActionStateVector2f_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->getInfo, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStateVector2f(wine_session_from_handle(params->session)->host_session, params->getInfo, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetAllTrackablesANDROID(void *args)
{
    struct
    {
        PTR32 trackableTracker;
        uint32_t trackableCapacityInput;
        PTR32 trackableCountOutput;
        PTR32 trackables;
        XrResult result;
    } *params = args;

    TRACE("%#x, %u, %#x, %#x\n", params->trackableTracker, params->trackableCapacityInput, params->trackableCountOutput, params->trackables);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAllTrackablesANDROID((XrTrackableTrackerANDROID)UlongToPtr(params->trackableTracker), params->trackableCapacityInput, (uint32_t *)UlongToPtr(params->trackableCountOutput), (XrTrackableANDROID *)UlongToPtr(params->trackables));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetAllTrackablesANDROID(void *args)
{
    struct xrGetAllTrackablesANDROID_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->trackableTracker, params->trackableCapacityInput, params->trackableCountOutput, params->trackables);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAllTrackablesANDROID(params->trackableTracker, params->trackableCapacityInput, params->trackableCountOutput, params->trackables);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetAnchorPersistStateANDROID(void *args)
{
    struct
    {
        PTR32 handle;
        PTR32 anchorId;
        PTR32 persistState;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x, %#x\n", params->handle, params->anchorId, params->persistState);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAnchorPersistStateANDROID((XrDeviceAnchorPersistenceANDROID)UlongToPtr(params->handle), (const XrUuidEXT *)UlongToPtr(params->anchorId), (XrAnchorPersistStateANDROID *)UlongToPtr(params->persistState));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetAnchorPersistStateANDROID(void *args)
{
    struct xrGetAnchorPersistStateANDROID_params *params = args;

    TRACE("%p, %p, %p\n", params->handle, params->anchorId, params->persistState);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAnchorPersistStateANDROID(params->handle, params->anchorId, params->persistState);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetAnchorUuidBD(void *args)
{
    struct
    {
        PTR32 anchor;
        PTR32 uuid;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->anchor, params->uuid);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAnchorUuidBD((XrAnchorBD)UlongToPtr(params->anchor), (XrUuidEXT *)UlongToPtr(params->uuid));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetAnchorUuidBD(void *args)
{
    struct xrGetAnchorUuidBD_params *params = args;

    TRACE("%p, %p\n", params->anchor, params->uuid);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAnchorUuidBD(params->anchor, params->uuid);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetAudioInputDeviceGuidOculus(void *args)
{
    struct
    {
        PTR32 instance;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->instance, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAudioInputDeviceGuidOculus(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, (wchar_t *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetAudioInputDeviceGuidOculus(void *args)
{
    struct xrGetAudioInputDeviceGuidOculus_params *params = args;

    TRACE("%p, %p\n", params->instance, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAudioInputDeviceGuidOculus(wine_instance_from_handle(params->instance)->host_instance, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetAudioOutputDeviceGuidOculus(void *args)
{
    struct
    {
        PTR32 instance;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->instance, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAudioOutputDeviceGuidOculus(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, (wchar_t *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetAudioOutputDeviceGuidOculus(void *args)
{
    struct xrGetAudioOutputDeviceGuidOculus_params *params = args;

    TRACE("%p, %p\n", params->instance, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAudioOutputDeviceGuidOculus(wine_instance_from_handle(params->instance)->host_instance, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetBodySkeletonFB(void *args)
{
    struct
    {
        PTR32 bodyTracker;
        PTR32 skeleton;
        XrResult result;
    } *params = args;
    XrBodySkeletonFB skeleton_host;

    TRACE("%#x, %#x\n", params->bodyTracker, params->skeleton);

    convert_XrBodySkeletonFB_win32_to_host((XrBodySkeletonFB32 *)UlongToPtr(params->skeleton), &skeleton_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetBodySkeletonFB((XrBodyTrackerFB)UlongToPtr(params->bodyTracker), &skeleton_host);
    convert_XrBodySkeletonFB_host_to_win32(&skeleton_host, (XrBodySkeletonFB32 *)UlongToPtr(params->skeleton));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetBodySkeletonFB(void *args)
{
    struct xrGetBodySkeletonFB_params *params = args;

    TRACE("%p, %p\n", params->bodyTracker, params->skeleton);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetBodySkeletonFB(params->bodyTracker, params->skeleton);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetBodySkeletonHTC(void *args)
{
    struct
    {
        PTR32 bodyTracker;
        PTR32 baseSpace;
        uint32_t skeletonGenerationId;
        PTR32 skeleton;
        XrResult result;
    } *params = args;
    XrBodySkeletonHTC skeleton_host;

    TRACE("%#x, %#x, %u, %#x\n", params->bodyTracker, params->baseSpace, params->skeletonGenerationId, params->skeleton);

    convert_XrBodySkeletonHTC_win32_to_host((XrBodySkeletonHTC32 *)UlongToPtr(params->skeleton), &skeleton_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetBodySkeletonHTC((XrBodyTrackerHTC)UlongToPtr(params->bodyTracker), (XrSpace)UlongToPtr(params->baseSpace), params->skeletonGenerationId, &skeleton_host);
    convert_XrBodySkeletonHTC_host_to_win32(&skeleton_host, (XrBodySkeletonHTC32 *)UlongToPtr(params->skeleton));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetBodySkeletonHTC(void *args)
{
    struct xrGetBodySkeletonHTC_params *params = args;

    TRACE("%p, %p, %u, %p\n", params->bodyTracker, params->baseSpace, params->skeletonGenerationId, params->skeleton);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetBodySkeletonHTC(params->bodyTracker, params->baseSpace, params->skeletonGenerationId, params->skeleton);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetControllerModelKeyMSFT(void *args)
{
    struct
    {
        PTR32 session;
        XrPath topLevelUserPath;
        PTR32 controllerModelKeyState;
        XrResult result;
    } *params = args;
    XrControllerModelKeyStateMSFT controllerModelKeyState_host;

    TRACE("%#x, 0x%s, %#x\n", params->session, wine_dbgstr_longlong(params->topLevelUserPath), params->controllerModelKeyState);

    convert_XrControllerModelKeyStateMSFT_win32_to_host((XrControllerModelKeyStateMSFT32 *)UlongToPtr(params->controllerModelKeyState), &controllerModelKeyState_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetControllerModelKeyMSFT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->topLevelUserPath, &controllerModelKeyState_host);
    convert_XrControllerModelKeyStateMSFT_host_to_win32(&controllerModelKeyState_host, (XrControllerModelKeyStateMSFT32 *)UlongToPtr(params->controllerModelKeyState));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetControllerModelKeyMSFT(void *args)
{
    struct xrGetControllerModelKeyMSFT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->topLevelUserPath), params->controllerModelKeyState);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetControllerModelKeyMSFT(wine_session_from_handle(params->session)->host_session, params->topLevelUserPath, params->controllerModelKeyState);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetControllerModelPropertiesMSFT(void *args)
{
    struct
    {
        PTR32 session;
        XrControllerModelKeyMSFT modelKey;
        PTR32 properties;
        XrResult result;
    } *params = args;
    XrControllerModelPropertiesMSFT properties_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, 0x%s, %#x\n", params->session, wine_dbgstr_longlong(params->modelKey), params->properties);

    init_conversion_context(ctx);
    convert_XrControllerModelPropertiesMSFT_win32_to_host(ctx, (XrControllerModelPropertiesMSFT32 *)UlongToPtr(params->properties), &properties_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetControllerModelPropertiesMSFT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->modelKey, &properties_host);
    convert_XrControllerModelPropertiesMSFT_host_to_win32(&properties_host, (XrControllerModelPropertiesMSFT32 *)UlongToPtr(params->properties));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetControllerModelPropertiesMSFT(void *args)
{
    struct xrGetControllerModelPropertiesMSFT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->modelKey), params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetControllerModelPropertiesMSFT(wine_session_from_handle(params->session)->host_session, params->modelKey, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetControllerModelStateMSFT(void *args)
{
    struct
    {
        PTR32 session;
        XrControllerModelKeyMSFT modelKey;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrControllerModelStateMSFT state_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, 0x%s, %#x\n", params->session, wine_dbgstr_longlong(params->modelKey), params->state);

    init_conversion_context(ctx);
    convert_XrControllerModelStateMSFT_win32_to_host(ctx, (XrControllerModelStateMSFT32 *)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetControllerModelStateMSFT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->modelKey, &state_host);
    convert_XrControllerModelStateMSFT_host_to_win32(&state_host, (XrControllerModelStateMSFT32 *)UlongToPtr(params->state));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetControllerModelStateMSFT(void *args)
{
    struct xrGetControllerModelStateMSFT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->modelKey), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetControllerModelStateMSFT(wine_session_from_handle(params->session)->host_session, params->modelKey, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetCurrentInteractionProfile(void *args)
{
    struct
    {
        PTR32 session;
        XrPath topLevelUserPath;
        PTR32 interactionProfile;
        XrResult result;
    } *params = args;
    XrInteractionProfileState interactionProfile_host;

    TRACE("%#x, 0x%s, %#x\n", params->session, wine_dbgstr_longlong(params->topLevelUserPath), params->interactionProfile);

    convert_XrInteractionProfileState_win32_to_host((XrInteractionProfileState32 *)UlongToPtr(params->interactionProfile), &interactionProfile_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetCurrentInteractionProfile(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->topLevelUserPath, &interactionProfile_host);
    convert_XrInteractionProfileState_host_to_win32(&interactionProfile_host, (XrInteractionProfileState32 *)UlongToPtr(params->interactionProfile));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetCurrentInteractionProfile(void *args)
{
    struct xrGetCurrentInteractionProfile_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->topLevelUserPath), params->interactionProfile);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetCurrentInteractionProfile(wine_session_from_handle(params->session)->host_session, params->topLevelUserPath, params->interactionProfile);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetDeviceSampleRateFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 hapticActionInfo;
        PTR32 deviceSampleRate;
        XrResult result;
    } *params = args;
    XrHapticActionInfo hapticActionInfo_host;
    XrDevicePcmSampleRateGetInfoFB deviceSampleRate_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->hapticActionInfo, params->deviceSampleRate);

    convert_XrHapticActionInfo_win32_to_host((const XrHapticActionInfo32 *)UlongToPtr(params->hapticActionInfo), &hapticActionInfo_host);
    convert_XrDevicePcmSampleRateGetInfoFB_win32_to_host((XrDevicePcmSampleRateGetInfoFB32 *)UlongToPtr(params->deviceSampleRate), &deviceSampleRate_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetDeviceSampleRateFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &hapticActionInfo_host, &deviceSampleRate_host);
    convert_XrDevicePcmSampleRateGetInfoFB_host_to_win32(&deviceSampleRate_host, (XrDevicePcmSampleRateGetInfoFB32 *)UlongToPtr(params->deviceSampleRate));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetDeviceSampleRateFB(void *args)
{
    struct xrGetDeviceSampleRateFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->hapticActionInfo, params->deviceSampleRate);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetDeviceSampleRateFB(wine_session_from_handle(params->session)->host_session, params->hapticActionInfo, params->deviceSampleRate);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetDisplayRefreshRateFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 displayRefreshRate;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->session, params->displayRefreshRate);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetDisplayRefreshRateFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, (float *)UlongToPtr(params->displayRefreshRate));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetDisplayRefreshRateFB(void *args)
{
    struct xrGetDisplayRefreshRateFB_params *params = args;

    TRACE("%p, %p\n", params->session, params->displayRefreshRate);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetDisplayRefreshRateFB(wine_session_from_handle(params->session)->host_session, params->displayRefreshRate);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetEnvironmentDepthSwapchainStateMETA(void *args)
{
    struct
    {
        PTR32 swapchain;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrEnvironmentDepthSwapchainStateMETA state_host;

    TRACE("%#x, %#x\n", params->swapchain, params->state);

    convert_XrEnvironmentDepthSwapchainStateMETA_win32_to_host((XrEnvironmentDepthSwapchainStateMETA32 *)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetEnvironmentDepthSwapchainStateMETA((XrEnvironmentDepthSwapchainMETA)UlongToPtr(params->swapchain), &state_host);
    convert_XrEnvironmentDepthSwapchainStateMETA_host_to_win32(&state_host, (XrEnvironmentDepthSwapchainStateMETA32 *)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetEnvironmentDepthSwapchainStateMETA(void *args)
{
    struct xrGetEnvironmentDepthSwapchainStateMETA_params *params = args;

    TRACE("%p, %p\n", params->swapchain, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetEnvironmentDepthSwapchainStateMETA(params->swapchain, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetExportedLocalizationMapDataML(void *args)
{
    struct
    {
        PTR32 map;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("%#x, %u, %#x, %#x\n", params->map, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetExportedLocalizationMapDataML((XrExportedLocalizationMapML)UlongToPtr(params->map), params->bufferCapacityInput, (uint32_t *)UlongToPtr(params->bufferCountOutput), (char *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetExportedLocalizationMapDataML(void *args)
{
    struct xrGetExportedLocalizationMapDataML_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->map, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetExportedLocalizationMapDataML(params->map, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetEyeGazesFB(void *args)
{
    struct
    {
        PTR32 eyeTracker;
        PTR32 gazeInfo;
        PTR32 eyeGazes;
        XrResult result;
    } *params = args;
    XrEyeGazesInfoFB gazeInfo_host;
    XrEyeGazesFB eyeGazes_host;

    TRACE("%#x, %#x, %#x\n", params->eyeTracker, params->gazeInfo, params->eyeGazes);

    convert_XrEyeGazesInfoFB_win32_to_host((const XrEyeGazesInfoFB32 *)UlongToPtr(params->gazeInfo), &gazeInfo_host);
    convert_XrEyeGazesFB_win32_to_host((XrEyeGazesFB32 *)UlongToPtr(params->eyeGazes), &eyeGazes_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetEyeGazesFB((XrEyeTrackerFB)UlongToPtr(params->eyeTracker), &gazeInfo_host, &eyeGazes_host);
    convert_XrEyeGazesFB_host_to_win32(&eyeGazes_host, (XrEyeGazesFB32 *)UlongToPtr(params->eyeGazes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetEyeGazesFB(void *args)
{
    struct xrGetEyeGazesFB_params *params = args;

    TRACE("%p, %p, %p\n", params->eyeTracker, params->gazeInfo, params->eyeGazes);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetEyeGazesFB(params->eyeTracker, params->gazeInfo, params->eyeGazes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetFaceExpressionWeights2FB(void *args)
{
    struct
    {
        PTR32 faceTracker;
        PTR32 expressionInfo;
        PTR32 expressionWeights;
        XrResult result;
    } *params = args;
    XrFaceExpressionInfo2FB expressionInfo_host;
    XrFaceExpressionWeights2FB expressionWeights_host;

    TRACE("%#x, %#x, %#x\n", params->faceTracker, params->expressionInfo, params->expressionWeights);

    convert_XrFaceExpressionInfo2FB_win32_to_host((const XrFaceExpressionInfo2FB32 *)UlongToPtr(params->expressionInfo), &expressionInfo_host);
    convert_XrFaceExpressionWeights2FB_win32_to_host((XrFaceExpressionWeights2FB32 *)UlongToPtr(params->expressionWeights), &expressionWeights_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetFaceExpressionWeights2FB((XrFaceTracker2FB)UlongToPtr(params->faceTracker), &expressionInfo_host, &expressionWeights_host);
    convert_XrFaceExpressionWeights2FB_host_to_win32(&expressionWeights_host, (XrFaceExpressionWeights2FB32 *)UlongToPtr(params->expressionWeights));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetFaceExpressionWeights2FB(void *args)
{
    struct xrGetFaceExpressionWeights2FB_params *params = args;

    TRACE("%p, %p, %p\n", params->faceTracker, params->expressionInfo, params->expressionWeights);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetFaceExpressionWeights2FB(params->faceTracker, params->expressionInfo, params->expressionWeights);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetFaceExpressionWeightsFB(void *args)
{
    struct
    {
        PTR32 faceTracker;
        PTR32 expressionInfo;
        PTR32 expressionWeights;
        XrResult result;
    } *params = args;
    XrFaceExpressionInfoFB expressionInfo_host;
    XrFaceExpressionWeightsFB expressionWeights_host;

    TRACE("%#x, %#x, %#x\n", params->faceTracker, params->expressionInfo, params->expressionWeights);

    convert_XrFaceExpressionInfoFB_win32_to_host((const XrFaceExpressionInfoFB32 *)UlongToPtr(params->expressionInfo), &expressionInfo_host);
    convert_XrFaceExpressionWeightsFB_win32_to_host((XrFaceExpressionWeightsFB32 *)UlongToPtr(params->expressionWeights), &expressionWeights_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetFaceExpressionWeightsFB((XrFaceTrackerFB)UlongToPtr(params->faceTracker), &expressionInfo_host, &expressionWeights_host);
    convert_XrFaceExpressionWeightsFB_host_to_win32(&expressionWeights_host, (XrFaceExpressionWeightsFB32 *)UlongToPtr(params->expressionWeights));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetFaceExpressionWeightsFB(void *args)
{
    struct xrGetFaceExpressionWeightsFB_params *params = args;

    TRACE("%p, %p, %p\n", params->faceTracker, params->expressionInfo, params->expressionWeights);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetFaceExpressionWeightsFB(params->faceTracker, params->expressionInfo, params->expressionWeights);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetFacialExpressionBlendShapePropertiesML(void *args)
{
    struct
    {
        PTR32 facialExpressionClient;
        PTR32 blendShapeGetInfo;
        uint32_t blendShapeCount;
        PTR32 blendShapes;
        XrResult result;
    } *params = args;
    XrFacialExpressionBlendShapeGetInfoML blendShapeGetInfo_host;
    XrFacialExpressionBlendShapePropertiesML *blendShapes_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %u, %#x\n", params->facialExpressionClient, params->blendShapeGetInfo, params->blendShapeCount, params->blendShapes);

    init_conversion_context(ctx);
    convert_XrFacialExpressionBlendShapeGetInfoML_win32_to_host((const XrFacialExpressionBlendShapeGetInfoML32 *)UlongToPtr(params->blendShapeGetInfo), &blendShapeGetInfo_host);
    blendShapes_host = convert_XrFacialExpressionBlendShapePropertiesML_array_win32_to_host(ctx, (XrFacialExpressionBlendShapePropertiesML32 *)UlongToPtr(params->blendShapes), params->blendShapeCount);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetFacialExpressionBlendShapePropertiesML((XrFacialExpressionClientML)UlongToPtr(params->facialExpressionClient), &blendShapeGetInfo_host, params->blendShapeCount, blendShapes_host);
    convert_XrFacialExpressionBlendShapePropertiesML_array_host_to_win32(blendShapes_host, (XrFacialExpressionBlendShapePropertiesML32 *)UlongToPtr(params->blendShapes), params->blendShapeCount);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetFacialExpressionBlendShapePropertiesML(void *args)
{
    struct xrGetFacialExpressionBlendShapePropertiesML_params *params = args;

    TRACE("%p, %p, %u, %p\n", params->facialExpressionClient, params->blendShapeGetInfo, params->blendShapeCount, params->blendShapes);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetFacialExpressionBlendShapePropertiesML(params->facialExpressionClient, params->blendShapeGetInfo, params->blendShapeCount, params->blendShapes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetFacialExpressionsHTC(void *args)
{
    struct
    {
        PTR32 facialTracker;
        PTR32 facialExpressions;
        XrResult result;
    } *params = args;
    XrFacialExpressionsHTC facialExpressions_host;

    TRACE("%#x, %#x\n", params->facialTracker, params->facialExpressions);

    convert_XrFacialExpressionsHTC_win32_to_host((XrFacialExpressionsHTC32 *)UlongToPtr(params->facialExpressions), &facialExpressions_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetFacialExpressionsHTC((XrFacialTrackerHTC)UlongToPtr(params->facialTracker), &facialExpressions_host);
    convert_XrFacialExpressionsHTC_host_to_win32(&facialExpressions_host, (XrFacialExpressionsHTC32 *)UlongToPtr(params->facialExpressions));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetFacialExpressionsHTC(void *args)
{
    struct xrGetFacialExpressionsHTC_params *params = args;

    TRACE("%p, %p\n", params->facialTracker, params->facialExpressions);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetFacialExpressionsHTC(params->facialTracker, params->facialExpressions);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetFoveationEyeTrackedStateMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 foveationState;
        XrResult result;
    } *params = args;
    XrFoveationEyeTrackedStateMETA foveationState_host;

    TRACE("%#x, %#x\n", params->session, params->foveationState);

    convert_XrFoveationEyeTrackedStateMETA_win32_to_host((XrFoveationEyeTrackedStateMETA32 *)UlongToPtr(params->foveationState), &foveationState_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetFoveationEyeTrackedStateMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &foveationState_host);
    convert_XrFoveationEyeTrackedStateMETA_host_to_win32(&foveationState_host, (XrFoveationEyeTrackedStateMETA32 *)UlongToPtr(params->foveationState));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetFoveationEyeTrackedStateMETA(void *args)
{
    struct xrGetFoveationEyeTrackedStateMETA_params *params = args;

    TRACE("%p, %p\n", params->session, params->foveationState);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetFoveationEyeTrackedStateMETA(wine_session_from_handle(params->session)->host_session, params->foveationState);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetHandMeshFB(void *args)
{
    struct
    {
        PTR32 handTracker;
        PTR32 mesh;
        XrResult result;
    } *params = args;
    XrHandTrackingMeshFB mesh_host;

    TRACE("%#x, %#x\n", params->handTracker, params->mesh);

    convert_XrHandTrackingMeshFB_win32_to_host((XrHandTrackingMeshFB32 *)UlongToPtr(params->mesh), &mesh_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetHandMeshFB((XrHandTrackerEXT)UlongToPtr(params->handTracker), &mesh_host);
    convert_XrHandTrackingMeshFB_host_to_win32(&mesh_host, (XrHandTrackingMeshFB32 *)UlongToPtr(params->mesh));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetHandMeshFB(void *args)
{
    struct xrGetHandMeshFB_params *params = args;

    TRACE("%p, %p\n", params->handTracker, params->mesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetHandMeshFB(params->handTracker, params->mesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetInputSourceLocalizedName(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 getInfo;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrInputSourceLocalizedNameGetInfo getInfo_host;

    TRACE("%#x, %#x, %u, %#x, %#x\n", params->session, params->getInfo, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    convert_XrInputSourceLocalizedNameGetInfo_win32_to_host((const XrInputSourceLocalizedNameGetInfo32 *)UlongToPtr(params->getInfo), &getInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetInputSourceLocalizedName(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &getInfo_host, params->bufferCapacityInput, (uint32_t *)UlongToPtr(params->bufferCountOutput), (char *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetInputSourceLocalizedName(void *args)
{
    struct xrGetInputSourceLocalizedName_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->session, params->getInfo, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetInputSourceLocalizedName(wine_session_from_handle(params->session)->host_session, params->getInfo, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetInstanceProperties(void *args)
{
    struct
    {
        PTR32 instance;
        PTR32 instanceProperties;
        XrResult result;
    } *params = args;
    XrInstanceProperties instanceProperties_host;

    TRACE("%#x, %#x\n", params->instance, params->instanceProperties);

    convert_XrInstanceProperties_win32_to_host((XrInstanceProperties32 *)UlongToPtr(params->instanceProperties), &instanceProperties_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetInstanceProperties(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, &instanceProperties_host);
    convert_XrInstanceProperties_host_to_win32(&instanceProperties_host, (XrInstanceProperties32 *)UlongToPtr(params->instanceProperties));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetInstanceProperties(void *args)
{
    struct xrGetInstanceProperties_params *params = args;

    TRACE("%p, %p\n", params->instance, params->instanceProperties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetInstanceProperties(wine_instance_from_handle(params->instance)->host_instance, params->instanceProperties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetMarkerDetectorStateML(void *args)
{
    struct
    {
        PTR32 markerDetector;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrMarkerDetectorStateML state_host;

    TRACE("%#x, %#x\n", params->markerDetector, params->state);

    convert_XrMarkerDetectorStateML_win32_to_host((XrMarkerDetectorStateML32 *)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerDetectorStateML((XrMarkerDetectorML)UlongToPtr(params->markerDetector), &state_host);
    convert_XrMarkerDetectorStateML_host_to_win32(&state_host, (XrMarkerDetectorStateML32 *)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerDetectorStateML(void *args)
{
    struct xrGetMarkerDetectorStateML_params *params = args;

    TRACE("%p, %p\n", params->markerDetector, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerDetectorStateML(params->markerDetector, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetMarkerLengthML(void *args)
{
    struct
    {
        PTR32 markerDetector;
        XrMarkerML marker;
        PTR32 meters;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %#x\n", params->markerDetector, wine_dbgstr_longlong(params->marker), params->meters);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerLengthML((XrMarkerDetectorML)UlongToPtr(params->markerDetector), params->marker, (float *)UlongToPtr(params->meters));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerLengthML(void *args)
{
    struct xrGetMarkerLengthML_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->markerDetector, wine_dbgstr_longlong(params->marker), params->meters);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerLengthML(params->markerDetector, params->marker, params->meters);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetMarkerNumberML(void *args)
{
    struct
    {
        PTR32 markerDetector;
        XrMarkerML marker;
        PTR32 number;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %#x\n", params->markerDetector, wine_dbgstr_longlong(params->marker), params->number);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerNumberML((XrMarkerDetectorML)UlongToPtr(params->markerDetector), params->marker, (uint64_t *)UlongToPtr(params->number));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerNumberML(void *args)
{
    struct xrGetMarkerNumberML_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->markerDetector, wine_dbgstr_longlong(params->marker), params->number);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerNumberML(params->markerDetector, params->marker, params->number);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetMarkerReprojectionErrorML(void *args)
{
    struct
    {
        PTR32 markerDetector;
        XrMarkerML marker;
        PTR32 reprojectionErrorMeters;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %#x\n", params->markerDetector, wine_dbgstr_longlong(params->marker), params->reprojectionErrorMeters);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerReprojectionErrorML((XrMarkerDetectorML)UlongToPtr(params->markerDetector), params->marker, (float *)UlongToPtr(params->reprojectionErrorMeters));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerReprojectionErrorML(void *args)
{
    struct xrGetMarkerReprojectionErrorML_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->markerDetector, wine_dbgstr_longlong(params->marker), params->reprojectionErrorMeters);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerReprojectionErrorML(params->markerDetector, params->marker, params->reprojectionErrorMeters);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetMarkerSizeVARJO(void *args)
{
    struct
    {
        PTR32 session;
        uint64_t DECLSPEC_ALIGN(8) markerId;
        PTR32 size;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %#x\n", params->session, wine_dbgstr_longlong(params->markerId), params->size);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerSizeVARJO(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->markerId, (XrExtent2Df *)UlongToPtr(params->size));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerSizeVARJO(void *args)
{
    struct xrGetMarkerSizeVARJO_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->markerId), params->size);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerSizeVARJO(wine_session_from_handle(params->session)->host_session, params->markerId, params->size);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetMarkerStringML(void *args)
{
    struct
    {
        PTR32 markerDetector;
        XrMarkerML marker;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %u, %#x, %#x\n", params->markerDetector, wine_dbgstr_longlong(params->marker), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerStringML((XrMarkerDetectorML)UlongToPtr(params->markerDetector), params->marker, params->bufferCapacityInput, (uint32_t *)UlongToPtr(params->bufferCountOutput), (char *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerStringML(void *args)
{
    struct xrGetMarkerStringML_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->markerDetector, wine_dbgstr_longlong(params->marker), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerStringML(params->markerDetector, params->marker, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetMarkersML(void *args)
{
    struct
    {
        PTR32 markerDetector;
        uint32_t markerCapacityInput;
        PTR32 markerCountOutput;
        PTR32 markers;
        XrResult result;
    } *params = args;

    TRACE("%#x, %u, %#x, %#x\n", params->markerDetector, params->markerCapacityInput, params->markerCountOutput, params->markers);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkersML((XrMarkerDetectorML)UlongToPtr(params->markerDetector), params->markerCapacityInput, (uint32_t *)UlongToPtr(params->markerCountOutput), (XrMarkerML *)UlongToPtr(params->markers));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkersML(void *args)
{
    struct xrGetMarkersML_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->markerDetector, params->markerCapacityInput, params->markerCountOutput, params->markers);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkersML(params->markerDetector, params->markerCapacityInput, params->markerCountOutput, params->markers);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetOpenGLGraphicsRequirementsKHR(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        PTR32 graphicsRequirements;
        XrResult result;
    } *params = args;
    XrGraphicsRequirementsOpenGLKHR graphicsRequirements_host;

    TRACE("%#x, 0x%s, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->graphicsRequirements);

    convert_XrGraphicsRequirementsOpenGLKHR_win32_to_host((XrGraphicsRequirementsOpenGLKHR32 *)UlongToPtr(params->graphicsRequirements), &graphicsRequirements_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetOpenGLGraphicsRequirementsKHR(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, &graphicsRequirements_host);
    convert_XrGraphicsRequirementsOpenGLKHR_host_to_win32(&graphicsRequirements_host, (XrGraphicsRequirementsOpenGLKHR32 *)UlongToPtr(params->graphicsRequirements));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetOpenGLGraphicsRequirementsKHR(void *args)
{
    struct xrGetOpenGLGraphicsRequirementsKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->graphicsRequirements);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetOpenGLGraphicsRequirementsKHR(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->graphicsRequirements);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetPassthroughCameraStateANDROID(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 getInfo;
        PTR32 cameraStateOutput;
        XrResult result;
    } *params = args;
    XrPassthroughCameraStateGetInfoANDROID getInfo_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->getInfo, params->cameraStateOutput);

    convert_XrPassthroughCameraStateGetInfoANDROID_win32_to_host((const XrPassthroughCameraStateGetInfoANDROID32 *)UlongToPtr(params->getInfo), &getInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetPassthroughCameraStateANDROID(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &getInfo_host, (XrPassthroughCameraStateANDROID *)UlongToPtr(params->cameraStateOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPassthroughCameraStateANDROID(void *args)
{
    struct xrGetPassthroughCameraStateANDROID_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->getInfo, params->cameraStateOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPassthroughCameraStateANDROID(wine_session_from_handle(params->session)->host_session, params->getInfo, params->cameraStateOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetPassthroughPreferencesMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 preferences;
        XrResult result;
    } *params = args;
    XrPassthroughPreferencesMETA preferences_host;

    TRACE("%#x, %#x\n", params->session, params->preferences);

    convert_XrPassthroughPreferencesMETA_win32_to_host((XrPassthroughPreferencesMETA32 *)UlongToPtr(params->preferences), &preferences_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetPassthroughPreferencesMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &preferences_host);
    convert_XrPassthroughPreferencesMETA_host_to_win32(&preferences_host, (XrPassthroughPreferencesMETA32 *)UlongToPtr(params->preferences));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPassthroughPreferencesMETA(void *args)
{
    struct xrGetPassthroughPreferencesMETA_params *params = args;

    TRACE("%p, %p\n", params->session, params->preferences);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPassthroughPreferencesMETA(wine_session_from_handle(params->session)->host_session, params->preferences);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetPerformanceMetricsStateMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrPerformanceMetricsStateMETA state_host;

    TRACE("%#x, %#x\n", params->session, params->state);

    convert_XrPerformanceMetricsStateMETA_win32_to_host((XrPerformanceMetricsStateMETA32 *)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetPerformanceMetricsStateMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &state_host);
    convert_XrPerformanceMetricsStateMETA_host_to_win32(&state_host, (XrPerformanceMetricsStateMETA32 *)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPerformanceMetricsStateMETA(void *args)
{
    struct xrGetPerformanceMetricsStateMETA_params *params = args;

    TRACE("%p, %p\n", params->session, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPerformanceMetricsStateMETA(wine_session_from_handle(params->session)->host_session, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetPlaneDetectionStateEXT(void *args)
{
    struct
    {
        PTR32 planeDetector;
        PTR32 state;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->planeDetector, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPlaneDetectionStateEXT((XrPlaneDetectorEXT)UlongToPtr(params->planeDetector), (XrPlaneDetectionStateEXT *)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPlaneDetectionStateEXT(void *args)
{
    struct xrGetPlaneDetectionStateEXT_params *params = args;

    TRACE("%p, %p\n", params->planeDetector, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPlaneDetectionStateEXT(params->planeDetector, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetPlaneDetectionsEXT(void *args)
{
    struct
    {
        PTR32 planeDetector;
        PTR32 info;
        PTR32 locations;
        XrResult result;
    } *params = args;
    XrPlaneDetectorGetInfoEXT info_host;
    XrPlaneDetectorLocationsEXT locations_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->planeDetector, params->info, params->locations);

    init_conversion_context(ctx);
    convert_XrPlaneDetectorGetInfoEXT_win32_to_host((const XrPlaneDetectorGetInfoEXT32 *)UlongToPtr(params->info), &info_host);
    convert_XrPlaneDetectorLocationsEXT_win32_to_host(ctx, (XrPlaneDetectorLocationsEXT32 *)UlongToPtr(params->locations), &locations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetPlaneDetectionsEXT((XrPlaneDetectorEXT)UlongToPtr(params->planeDetector), &info_host, &locations_host);
    convert_XrPlaneDetectorLocationsEXT_host_to_win32(&locations_host, (XrPlaneDetectorLocationsEXT32 *)UlongToPtr(params->locations));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPlaneDetectionsEXT(void *args)
{
    struct xrGetPlaneDetectionsEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->planeDetector, params->info, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPlaneDetectionsEXT(params->planeDetector, params->info, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetPlanePolygonBufferEXT(void *args)
{
    struct
    {
        PTR32 planeDetector;
        uint64_t DECLSPEC_ALIGN(8) planeId;
        uint32_t polygonBufferIndex;
        PTR32 polygonBuffer;
        XrResult result;
    } *params = args;
    XrPlaneDetectorPolygonBufferEXT polygonBuffer_host;

    TRACE("%#x, 0x%s, %u, %#x\n", params->planeDetector, wine_dbgstr_longlong(params->planeId), params->polygonBufferIndex, params->polygonBuffer);

    convert_XrPlaneDetectorPolygonBufferEXT_win32_to_host((XrPlaneDetectorPolygonBufferEXT32 *)UlongToPtr(params->polygonBuffer), &polygonBuffer_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetPlanePolygonBufferEXT((XrPlaneDetectorEXT)UlongToPtr(params->planeDetector), params->planeId, params->polygonBufferIndex, &polygonBuffer_host);
    convert_XrPlaneDetectorPolygonBufferEXT_host_to_win32(&polygonBuffer_host, (XrPlaneDetectorPolygonBufferEXT32 *)UlongToPtr(params->polygonBuffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPlanePolygonBufferEXT(void *args)
{
    struct xrGetPlanePolygonBufferEXT_params *params = args;

    TRACE("%p, 0x%s, %u, %p\n", params->planeDetector, wine_dbgstr_longlong(params->planeId), params->polygonBufferIndex, params->polygonBuffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPlanePolygonBufferEXT(params->planeDetector, params->planeId, params->polygonBufferIndex, params->polygonBuffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetQueriedSenseDataBD(void *args)
{
    struct
    {
        PTR32 snapshot;
        PTR32 getInfo;
        PTR32 queriedSenseData;
        XrResult result;
    } *params = args;
    XrQueriedSenseDataGetInfoBD getInfo_host;
    XrQueriedSenseDataBD queriedSenseData_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->snapshot, params->getInfo, params->queriedSenseData);

    init_conversion_context(ctx);
    convert_XrQueriedSenseDataGetInfoBD_win32_to_host((XrQueriedSenseDataGetInfoBD32 *)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrQueriedSenseDataBD_win32_to_host(ctx, (XrQueriedSenseDataBD32 *)UlongToPtr(params->queriedSenseData), &queriedSenseData_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetQueriedSenseDataBD((XrSenseDataSnapshotBD)UlongToPtr(params->snapshot), &getInfo_host, &queriedSenseData_host);
    convert_XrQueriedSenseDataGetInfoBD_host_to_win32(&getInfo_host, (XrQueriedSenseDataGetInfoBD32 *)UlongToPtr(params->getInfo));
    convert_XrQueriedSenseDataBD_host_to_win32(&queriedSenseData_host, (XrQueriedSenseDataBD32 *)UlongToPtr(params->queriedSenseData));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetQueriedSenseDataBD(void *args)
{
    struct xrGetQueriedSenseDataBD_params *params = args;

    TRACE("%p, %p, %p\n", params->snapshot, params->getInfo, params->queriedSenseData);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetQueriedSenseDataBD(params->snapshot, params->getInfo, params->queriedSenseData);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetRecommendedLayerResolutionMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 resolution;
        XrResult result;
    } *params = args;
    XrRecommendedLayerResolutionGetInfoMETA info_host;
    XrRecommendedLayerResolutionMETA resolution_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->resolution);

    init_conversion_context(ctx);
    convert_XrRecommendedLayerResolutionGetInfoMETA_win32_to_host(ctx, (const XrRecommendedLayerResolutionGetInfoMETA32 *)UlongToPtr(params->info), &info_host);
    convert_XrRecommendedLayerResolutionMETA_win32_to_host((XrRecommendedLayerResolutionMETA32 *)UlongToPtr(params->resolution), &resolution_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetRecommendedLayerResolutionMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, &resolution_host);
    convert_XrRecommendedLayerResolutionMETA_host_to_win32(&resolution_host, (XrRecommendedLayerResolutionMETA32 *)UlongToPtr(params->resolution));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetRecommendedLayerResolutionMETA(void *args)
{
    struct xrGetRecommendedLayerResolutionMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->resolution);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetRecommendedLayerResolutionMETA(wine_session_from_handle(params->session)->host_session, params->info, params->resolution);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetReferenceSpaceBoundsRect(void *args)
{
    struct
    {
        PTR32 session;
        XrReferenceSpaceType referenceSpaceType;
        PTR32 bounds;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x, %#x\n", params->session, params->referenceSpaceType, params->bounds);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetReferenceSpaceBoundsRect(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->referenceSpaceType, (XrExtent2Df *)UlongToPtr(params->bounds));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetReferenceSpaceBoundsRect(void *args)
{
    struct xrGetReferenceSpaceBoundsRect_params *params = args;

    TRACE("%p, %#x, %p\n", params->session, params->referenceSpaceType, params->bounds);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetReferenceSpaceBoundsRect(wine_session_from_handle(params->session)->host_session, params->referenceSpaceType, params->bounds);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetRenderModelAssetDataEXT(void *args)
{
    struct
    {
        PTR32 asset;
        PTR32 getInfo;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrRenderModelAssetDataGetInfoEXT *getInfo_host = NULL;
    XrRenderModelAssetDataEXT buffer_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->asset, params->getInfo, params->buffer);

    init_conversion_context(ctx);
    if (params->getInfo)
    {
        getInfo_host = conversion_context_alloc(ctx, sizeof(*getInfo_host));
        convert_XrRenderModelAssetDataGetInfoEXT_win32_to_host((const XrRenderModelAssetDataGetInfoEXT32 *)UlongToPtr(params->getInfo), getInfo_host);
    }
    convert_XrRenderModelAssetDataEXT_win32_to_host((XrRenderModelAssetDataEXT32 *)UlongToPtr(params->buffer), &buffer_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelAssetDataEXT((XrRenderModelAssetEXT)UlongToPtr(params->asset), getInfo_host, &buffer_host);
    convert_XrRenderModelAssetDataEXT_host_to_win32(&buffer_host, (XrRenderModelAssetDataEXT32 *)UlongToPtr(params->buffer));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetRenderModelAssetDataEXT(void *args)
{
    struct xrGetRenderModelAssetDataEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->asset, params->getInfo, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelAssetDataEXT(params->asset, params->getInfo, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetRenderModelAssetPropertiesEXT(void *args)
{
    struct
    {
        PTR32 asset;
        PTR32 getInfo;
        PTR32 properties;
        XrResult result;
    } *params = args;
    XrRenderModelAssetPropertiesGetInfoEXT *getInfo_host = NULL;
    XrRenderModelAssetPropertiesEXT properties_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->asset, params->getInfo, params->properties);

    init_conversion_context(ctx);
    if (params->getInfo)
    {
        getInfo_host = conversion_context_alloc(ctx, sizeof(*getInfo_host));
        convert_XrRenderModelAssetPropertiesGetInfoEXT_win32_to_host((const XrRenderModelAssetPropertiesGetInfoEXT32 *)UlongToPtr(params->getInfo), getInfo_host);
    }
    convert_XrRenderModelAssetPropertiesEXT_win32_to_host((XrRenderModelAssetPropertiesEXT32 *)UlongToPtr(params->properties), &properties_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelAssetPropertiesEXT((XrRenderModelAssetEXT)UlongToPtr(params->asset), getInfo_host, &properties_host);
    convert_XrRenderModelAssetPropertiesEXT_host_to_win32(&properties_host, (XrRenderModelAssetPropertiesEXT32 *)UlongToPtr(params->properties));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetRenderModelAssetPropertiesEXT(void *args)
{
    struct xrGetRenderModelAssetPropertiesEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->asset, params->getInfo, params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelAssetPropertiesEXT(params->asset, params->getInfo, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetRenderModelPoseTopLevelUserPathEXT(void *args)
{
    struct
    {
        PTR32 renderModel;
        PTR32 info;
        PTR32 topLevelUserPath;
        XrResult result;
    } *params = args;
    XrInteractionRenderModelTopLevelUserPathGetInfoEXT info_host;

    TRACE("%#x, %#x, %#x\n", params->renderModel, params->info, params->topLevelUserPath);

    convert_XrInteractionRenderModelTopLevelUserPathGetInfoEXT_win32_to_host((const XrInteractionRenderModelTopLevelUserPathGetInfoEXT32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelPoseTopLevelUserPathEXT((XrRenderModelEXT)UlongToPtr(params->renderModel), &info_host, (XrPath *)UlongToPtr(params->topLevelUserPath));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetRenderModelPoseTopLevelUserPathEXT(void *args)
{
    struct xrGetRenderModelPoseTopLevelUserPathEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->renderModel, params->info, params->topLevelUserPath);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelPoseTopLevelUserPathEXT(params->renderModel, params->info, params->topLevelUserPath);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetRenderModelPropertiesEXT(void *args)
{
    struct
    {
        PTR32 renderModel;
        PTR32 getInfo;
        PTR32 properties;
        XrResult result;
    } *params = args;
    XrRenderModelPropertiesGetInfoEXT *getInfo_host = NULL;
    XrRenderModelPropertiesEXT properties_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->renderModel, params->getInfo, params->properties);

    init_conversion_context(ctx);
    if (params->getInfo)
    {
        getInfo_host = conversion_context_alloc(ctx, sizeof(*getInfo_host));
        convert_XrRenderModelPropertiesGetInfoEXT_win32_to_host((const XrRenderModelPropertiesGetInfoEXT32 *)UlongToPtr(params->getInfo), getInfo_host);
    }
    convert_XrRenderModelPropertiesEXT_win32_to_host((XrRenderModelPropertiesEXT32 *)UlongToPtr(params->properties), &properties_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelPropertiesEXT((XrRenderModelEXT)UlongToPtr(params->renderModel), getInfo_host, &properties_host);
    convert_XrRenderModelPropertiesEXT_host_to_win32(&properties_host, (XrRenderModelPropertiesEXT32 *)UlongToPtr(params->properties));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetRenderModelPropertiesEXT(void *args)
{
    struct xrGetRenderModelPropertiesEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->renderModel, params->getInfo, params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelPropertiesEXT(params->renderModel, params->getInfo, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetRenderModelPropertiesFB(void *args)
{
    struct
    {
        PTR32 session;
        XrPath path;
        PTR32 properties;
        XrResult result;
    } *params = args;
    XrRenderModelPropertiesFB properties_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, 0x%s, %#x\n", params->session, wine_dbgstr_longlong(params->path), params->properties);

    init_conversion_context(ctx);
    convert_XrRenderModelPropertiesFB_win32_to_host(ctx, (XrRenderModelPropertiesFB32 *)UlongToPtr(params->properties), &properties_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelPropertiesFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->path, &properties_host);
    convert_XrRenderModelPropertiesFB_host_to_win32(&properties_host, (XrRenderModelPropertiesFB32 *)UlongToPtr(params->properties));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetRenderModelPropertiesFB(void *args)
{
    struct xrGetRenderModelPropertiesFB_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->path), params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelPropertiesFB(wine_session_from_handle(params->session)->host_session, params->path, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetRenderModelStateEXT(void *args)
{
    struct
    {
        PTR32 renderModel;
        PTR32 getInfo;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrRenderModelStateGetInfoEXT getInfo_host;
    XrRenderModelStateEXT state_host;

    TRACE("%#x, %#x, %#x\n", params->renderModel, params->getInfo, params->state);

    convert_XrRenderModelStateGetInfoEXT_win32_to_host((const XrRenderModelStateGetInfoEXT32 *)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrRenderModelStateEXT_win32_to_host((XrRenderModelStateEXT32 *)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelStateEXT((XrRenderModelEXT)UlongToPtr(params->renderModel), &getInfo_host, &state_host);
    convert_XrRenderModelStateEXT_host_to_win32(&state_host, (XrRenderModelStateEXT32 *)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetRenderModelStateEXT(void *args)
{
    struct xrGetRenderModelStateEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->renderModel, params->getInfo, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelStateEXT(params->renderModel, params->getInfo, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSceneComponentsMSFT(void *args)
{
    struct
    {
        PTR32 scene;
        PTR32 getInfo;
        PTR32 components;
        XrResult result;
    } *params = args;
    XrSceneComponentsGetInfoMSFT getInfo_host;
    XrSceneComponentsMSFT components_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->scene, params->getInfo, params->components);

    init_conversion_context(ctx);
    convert_XrSceneComponentsGetInfoMSFT_win32_to_host(ctx, (const XrSceneComponentsGetInfoMSFT32 *)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrSceneComponentsMSFT_win32_to_host(ctx, (XrSceneComponentsMSFT32 *)UlongToPtr(params->components), &components_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneComponentsMSFT((XrSceneMSFT)UlongToPtr(params->scene), &getInfo_host, &components_host);
    convert_XrSceneComponentsMSFT_host_to_win32(&components_host, (XrSceneComponentsMSFT32 *)UlongToPtr(params->components));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSceneComponentsMSFT(void *args)
{
    struct xrGetSceneComponentsMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->scene, params->getInfo, params->components);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneComponentsMSFT(params->scene, params->getInfo, params->components);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSceneComputeStateMSFT(void *args)
{
    struct
    {
        PTR32 sceneObserver;
        PTR32 state;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->sceneObserver, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneComputeStateMSFT((XrSceneObserverMSFT)UlongToPtr(params->sceneObserver), (XrSceneComputeStateMSFT *)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSceneComputeStateMSFT(void *args)
{
    struct xrGetSceneComputeStateMSFT_params *params = args;

    TRACE("%p, %p\n", params->sceneObserver, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneComputeStateMSFT(params->sceneObserver, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSceneMarkerDecodedStringMSFT(void *args)
{
    struct
    {
        PTR32 scene;
        PTR32 markerId;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x, %u, %#x, %#x\n", params->scene, params->markerId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneMarkerDecodedStringMSFT((XrSceneMSFT)UlongToPtr(params->scene), (const XrUuidMSFT *)UlongToPtr(params->markerId), params->bufferCapacityInput, (uint32_t *)UlongToPtr(params->bufferCountOutput), (char *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSceneMarkerDecodedStringMSFT(void *args)
{
    struct xrGetSceneMarkerDecodedStringMSFT_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->scene, params->markerId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneMarkerDecodedStringMSFT(params->scene, params->markerId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSceneMarkerRawDataMSFT(void *args)
{
    struct
    {
        PTR32 scene;
        PTR32 markerId;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x, %u, %#x, %#x\n", params->scene, params->markerId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneMarkerRawDataMSFT((XrSceneMSFT)UlongToPtr(params->scene), (const XrUuidMSFT *)UlongToPtr(params->markerId), params->bufferCapacityInput, (uint32_t *)UlongToPtr(params->bufferCountOutput), (uint8_t *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSceneMarkerRawDataMSFT(void *args)
{
    struct xrGetSceneMarkerRawDataMSFT_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->scene, params->markerId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneMarkerRawDataMSFT(params->scene, params->markerId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSceneMeshBuffersMSFT(void *args)
{
    struct
    {
        PTR32 scene;
        PTR32 getInfo;
        PTR32 buffers;
        XrResult result;
    } *params = args;
    XrSceneMeshBuffersGetInfoMSFT getInfo_host;
    XrSceneMeshBuffersMSFT buffers_host;

    TRACE("%#x, %#x, %#x\n", params->scene, params->getInfo, params->buffers);

    convert_XrSceneMeshBuffersGetInfoMSFT_win32_to_host((const XrSceneMeshBuffersGetInfoMSFT32 *)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrSceneMeshBuffersMSFT_win32_to_host((XrSceneMeshBuffersMSFT32 *)UlongToPtr(params->buffers), &buffers_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneMeshBuffersMSFT((XrSceneMSFT)UlongToPtr(params->scene), &getInfo_host, &buffers_host);
    convert_XrSceneMeshBuffersMSFT_host_to_win32(&buffers_host, (XrSceneMeshBuffersMSFT32 *)UlongToPtr(params->buffers));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSceneMeshBuffersMSFT(void *args)
{
    struct xrGetSceneMeshBuffersMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->scene, params->getInfo, params->buffers);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneMeshBuffersMSFT(params->scene, params->getInfo, params->buffers);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSenseDataProviderStateBD(void *args)
{
    struct
    {
        PTR32 provider;
        PTR32 state;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->provider, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSenseDataProviderStateBD((XrSenseDataProviderBD)UlongToPtr(params->provider), (XrSenseDataProviderStateBD *)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSenseDataProviderStateBD(void *args)
{
    struct xrGetSenseDataProviderStateBD_params *params = args;

    TRACE("%p, %p\n", params->provider, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSenseDataProviderStateBD(params->provider, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSerializedSceneFragmentDataMSFT(void *args)
{
    struct
    {
        PTR32 scene;
        PTR32 getInfo;
        uint32_t countInput;
        PTR32 readOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrSerializedSceneFragmentDataGetInfoMSFT getInfo_host;

    TRACE("%#x, %#x, %u, %#x, %#x\n", params->scene, params->getInfo, params->countInput, params->readOutput, params->buffer);

    convert_XrSerializedSceneFragmentDataGetInfoMSFT_win32_to_host((const XrSerializedSceneFragmentDataGetInfoMSFT32 *)UlongToPtr(params->getInfo), &getInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSerializedSceneFragmentDataMSFT((XrSceneMSFT)UlongToPtr(params->scene), &getInfo_host, params->countInput, (uint32_t *)UlongToPtr(params->readOutput), (uint8_t *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSerializedSceneFragmentDataMSFT(void *args)
{
    struct xrGetSerializedSceneFragmentDataMSFT_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->scene, params->getInfo, params->countInput, params->readOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSerializedSceneFragmentDataMSFT(params->scene, params->getInfo, params->countInput, params->readOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceBoundary2DFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 space;
        PTR32 boundary2DOutput;
        XrResult result;
    } *params = args;
    XrBoundary2DFB boundary2DOutput_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->space, params->boundary2DOutput);

    convert_XrBoundary2DFB_win32_to_host((XrBoundary2DFB32 *)UlongToPtr(params->boundary2DOutput), &boundary2DOutput_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceBoundary2DFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, (XrSpace)UlongToPtr(params->space), &boundary2DOutput_host);
    convert_XrBoundary2DFB_host_to_win32(&boundary2DOutput_host, (XrBoundary2DFB32 *)UlongToPtr(params->boundary2DOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceBoundary2DFB(void *args)
{
    struct xrGetSpaceBoundary2DFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->space, params->boundary2DOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceBoundary2DFB(wine_session_from_handle(params->session)->host_session, params->space, params->boundary2DOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceBoundingBox2DFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 space;
        PTR32 boundingBox2DOutput;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x, %#x\n", params->session, params->space, params->boundingBox2DOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceBoundingBox2DFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, (XrSpace)UlongToPtr(params->space), (XrRect2Df *)UlongToPtr(params->boundingBox2DOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceBoundingBox2DFB(void *args)
{
    struct xrGetSpaceBoundingBox2DFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->space, params->boundingBox2DOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceBoundingBox2DFB(wine_session_from_handle(params->session)->host_session, params->space, params->boundingBox2DOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceBoundingBox3DFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 space;
        PTR32 boundingBox3DOutput;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x, %#x\n", params->session, params->space, params->boundingBox3DOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceBoundingBox3DFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, (XrSpace)UlongToPtr(params->space), (XrRect3DfFB *)UlongToPtr(params->boundingBox3DOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceBoundingBox3DFB(void *args)
{
    struct xrGetSpaceBoundingBox3DFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->space, params->boundingBox3DOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceBoundingBox3DFB(wine_session_from_handle(params->session)->host_session, params->space, params->boundingBox3DOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceComponentStatusFB(void *args)
{
    struct
    {
        PTR32 space;
        XrSpaceComponentTypeFB componentType;
        PTR32 status;
        XrResult result;
    } *params = args;
    XrSpaceComponentStatusFB status_host;

    TRACE("%#x, %#x, %#x\n", params->space, params->componentType, params->status);

    convert_XrSpaceComponentStatusFB_win32_to_host((XrSpaceComponentStatusFB32 *)UlongToPtr(params->status), &status_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceComponentStatusFB((XrSpace)UlongToPtr(params->space), params->componentType, &status_host);
    convert_XrSpaceComponentStatusFB_host_to_win32(&status_host, (XrSpaceComponentStatusFB32 *)UlongToPtr(params->status));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceComponentStatusFB(void *args)
{
    struct xrGetSpaceComponentStatusFB_params *params = args;

    TRACE("%p, %#x, %p\n", params->space, params->componentType, params->status);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceComponentStatusFB(params->space, params->componentType, params->status);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceContainerFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 space;
        PTR32 spaceContainerOutput;
        XrResult result;
    } *params = args;
    XrSpaceContainerFB spaceContainerOutput_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->space, params->spaceContainerOutput);

    convert_XrSpaceContainerFB_win32_to_host((XrSpaceContainerFB32 *)UlongToPtr(params->spaceContainerOutput), &spaceContainerOutput_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceContainerFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, (XrSpace)UlongToPtr(params->space), &spaceContainerOutput_host);
    convert_XrSpaceContainerFB_host_to_win32(&spaceContainerOutput_host, (XrSpaceContainerFB32 *)UlongToPtr(params->spaceContainerOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceContainerFB(void *args)
{
    struct xrGetSpaceContainerFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->space, params->spaceContainerOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceContainerFB(wine_session_from_handle(params->session)->host_session, params->space, params->spaceContainerOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceRoomLayoutFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 space;
        PTR32 roomLayoutOutput;
        XrResult result;
    } *params = args;
    XrRoomLayoutFB roomLayoutOutput_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->space, params->roomLayoutOutput);

    convert_XrRoomLayoutFB_win32_to_host((XrRoomLayoutFB32 *)UlongToPtr(params->roomLayoutOutput), &roomLayoutOutput_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceRoomLayoutFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, (XrSpace)UlongToPtr(params->space), &roomLayoutOutput_host);
    convert_XrRoomLayoutFB_host_to_win32(&roomLayoutOutput_host, (XrRoomLayoutFB32 *)UlongToPtr(params->roomLayoutOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceRoomLayoutFB(void *args)
{
    struct xrGetSpaceRoomLayoutFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->space, params->roomLayoutOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceRoomLayoutFB(wine_session_from_handle(params->session)->host_session, params->space, params->roomLayoutOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceSemanticLabelsFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 space;
        PTR32 semanticLabelsOutput;
        XrResult result;
    } *params = args;
    XrSemanticLabelsFB semanticLabelsOutput_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->space, params->semanticLabelsOutput);

    convert_XrSemanticLabelsFB_win32_to_host((XrSemanticLabelsFB32 *)UlongToPtr(params->semanticLabelsOutput), &semanticLabelsOutput_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceSemanticLabelsFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, (XrSpace)UlongToPtr(params->space), &semanticLabelsOutput_host);
    convert_XrSemanticLabelsFB_host_to_win32(&semanticLabelsOutput_host, (XrSemanticLabelsFB32 *)UlongToPtr(params->semanticLabelsOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceSemanticLabelsFB(void *args)
{
    struct xrGetSpaceSemanticLabelsFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->space, params->semanticLabelsOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceSemanticLabelsFB(wine_session_from_handle(params->session)->host_session, params->space, params->semanticLabelsOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceTriangleMeshMETA(void *args)
{
    struct
    {
        PTR32 space;
        PTR32 getInfo;
        PTR32 triangleMeshOutput;
        XrResult result;
    } *params = args;
    XrSpaceTriangleMeshGetInfoMETA getInfo_host;
    XrSpaceTriangleMeshMETA triangleMeshOutput_host;

    TRACE("%#x, %#x, %#x\n", params->space, params->getInfo, params->triangleMeshOutput);

    convert_XrSpaceTriangleMeshGetInfoMETA_win32_to_host((const XrSpaceTriangleMeshGetInfoMETA32 *)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrSpaceTriangleMeshMETA_win32_to_host((XrSpaceTriangleMeshMETA32 *)UlongToPtr(params->triangleMeshOutput), &triangleMeshOutput_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceTriangleMeshMETA((XrSpace)UlongToPtr(params->space), &getInfo_host, &triangleMeshOutput_host);
    convert_XrSpaceTriangleMeshMETA_host_to_win32(&triangleMeshOutput_host, (XrSpaceTriangleMeshMETA32 *)UlongToPtr(params->triangleMeshOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceTriangleMeshMETA(void *args)
{
    struct xrGetSpaceTriangleMeshMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->space, params->getInfo, params->triangleMeshOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceTriangleMeshMETA(params->space, params->getInfo, params->triangleMeshOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceUserIdFB(void *args)
{
    struct
    {
        PTR32 user;
        PTR32 userId;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->user, params->userId);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceUserIdFB((XrSpaceUserFB)UlongToPtr(params->user), (XrSpaceUserIdFB *)UlongToPtr(params->userId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceUserIdFB(void *args)
{
    struct xrGetSpaceUserIdFB_params *params = args;

    TRACE("%p, %p\n", params->user, params->userId);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceUserIdFB(params->user, params->userId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceUuidFB(void *args)
{
    struct
    {
        PTR32 space;
        PTR32 uuid;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->space, params->uuid);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceUuidFB((XrSpace)UlongToPtr(params->space), (XrUuidEXT *)UlongToPtr(params->uuid));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceUuidFB(void *args)
{
    struct xrGetSpaceUuidFB_params *params = args;

    TRACE("%p, %p\n", params->space, params->uuid);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceUuidFB(params->space, params->uuid);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialAnchorNameHTC(void *args)
{
    struct
    {
        PTR32 anchor;
        PTR32 name;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->anchor, params->name);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialAnchorNameHTC((XrSpace)UlongToPtr(params->anchor), (XrSpatialAnchorNameHTC *)UlongToPtr(params->name));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialAnchorNameHTC(void *args)
{
    struct xrGetSpatialAnchorNameHTC_params *params = args;

    TRACE("%p, %p\n", params->anchor, params->name);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialAnchorNameHTC(params->anchor, params->name);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialAnchorStateML(void *args)
{
    struct
    {
        PTR32 anchor;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrSpatialAnchorStateML state_host;

    TRACE("%#x, %#x\n", params->anchor, params->state);

    convert_XrSpatialAnchorStateML_win32_to_host((XrSpatialAnchorStateML32 *)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialAnchorStateML((XrSpace)UlongToPtr(params->anchor), &state_host);
    convert_XrSpatialAnchorStateML_host_to_win32(&state_host, (XrSpatialAnchorStateML32 *)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialAnchorStateML(void *args)
{
    struct xrGetSpatialAnchorStateML_params *params = args;

    TRACE("%p, %p\n", params->anchor, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialAnchorStateML(params->anchor, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialBufferFloatEXT(void *args)
{
    struct
    {
        PTR32 snapshot;
        PTR32 info;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrSpatialBufferGetInfoEXT info_host;

    TRACE("%#x, %#x, %u, %#x, %#x\n", params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    convert_XrSpatialBufferGetInfoEXT_win32_to_host((const XrSpatialBufferGetInfoEXT32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferFloatEXT((XrSpatialSnapshotEXT)UlongToPtr(params->snapshot), &info_host, params->bufferCapacityInput, (uint32_t *)UlongToPtr(params->bufferCountOutput), (float *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialBufferFloatEXT(void *args)
{
    struct xrGetSpatialBufferFloatEXT_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferFloatEXT(params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialBufferStringEXT(void *args)
{
    struct
    {
        PTR32 snapshot;
        PTR32 info;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrSpatialBufferGetInfoEXT info_host;

    TRACE("%#x, %#x, %u, %#x, %#x\n", params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    convert_XrSpatialBufferGetInfoEXT_win32_to_host((const XrSpatialBufferGetInfoEXT32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferStringEXT((XrSpatialSnapshotEXT)UlongToPtr(params->snapshot), &info_host, params->bufferCapacityInput, (uint32_t *)UlongToPtr(params->bufferCountOutput), (char *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialBufferStringEXT(void *args)
{
    struct xrGetSpatialBufferStringEXT_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferStringEXT(params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialBufferUint16EXT(void *args)
{
    struct
    {
        PTR32 snapshot;
        PTR32 info;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrSpatialBufferGetInfoEXT info_host;

    TRACE("%#x, %#x, %u, %#x, %#x\n", params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    convert_XrSpatialBufferGetInfoEXT_win32_to_host((const XrSpatialBufferGetInfoEXT32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferUint16EXT((XrSpatialSnapshotEXT)UlongToPtr(params->snapshot), &info_host, params->bufferCapacityInput, (uint32_t *)UlongToPtr(params->bufferCountOutput), (uint16_t *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialBufferUint16EXT(void *args)
{
    struct xrGetSpatialBufferUint16EXT_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferUint16EXT(params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialBufferUint32EXT(void *args)
{
    struct
    {
        PTR32 snapshot;
        PTR32 info;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrSpatialBufferGetInfoEXT info_host;

    TRACE("%#x, %#x, %u, %#x, %#x\n", params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    convert_XrSpatialBufferGetInfoEXT_win32_to_host((const XrSpatialBufferGetInfoEXT32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferUint32EXT((XrSpatialSnapshotEXT)UlongToPtr(params->snapshot), &info_host, params->bufferCapacityInput, (uint32_t *)UlongToPtr(params->bufferCountOutput), (uint32_t *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialBufferUint32EXT(void *args)
{
    struct xrGetSpatialBufferUint32EXT_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferUint32EXT(params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialBufferUint8EXT(void *args)
{
    struct
    {
        PTR32 snapshot;
        PTR32 info;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrSpatialBufferGetInfoEXT info_host;

    TRACE("%#x, %#x, %u, %#x, %#x\n", params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    convert_XrSpatialBufferGetInfoEXT_win32_to_host((const XrSpatialBufferGetInfoEXT32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferUint8EXT((XrSpatialSnapshotEXT)UlongToPtr(params->snapshot), &info_host, params->bufferCapacityInput, (uint32_t *)UlongToPtr(params->bufferCountOutput), (uint8_t *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialBufferUint8EXT(void *args)
{
    struct xrGetSpatialBufferUint8EXT_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferUint8EXT(params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialBufferVector2fEXT(void *args)
{
    struct
    {
        PTR32 snapshot;
        PTR32 info;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrSpatialBufferGetInfoEXT info_host;

    TRACE("%#x, %#x, %u, %#x, %#x\n", params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    convert_XrSpatialBufferGetInfoEXT_win32_to_host((const XrSpatialBufferGetInfoEXT32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferVector2fEXT((XrSpatialSnapshotEXT)UlongToPtr(params->snapshot), &info_host, params->bufferCapacityInput, (uint32_t *)UlongToPtr(params->bufferCountOutput), (XrVector2f *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialBufferVector2fEXT(void *args)
{
    struct xrGetSpatialBufferVector2fEXT_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferVector2fEXT(params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialBufferVector3fEXT(void *args)
{
    struct
    {
        PTR32 snapshot;
        PTR32 info;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrSpatialBufferGetInfoEXT info_host;

    TRACE("%#x, %#x, %u, %#x, %#x\n", params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    convert_XrSpatialBufferGetInfoEXT_win32_to_host((const XrSpatialBufferGetInfoEXT32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferVector3fEXT((XrSpatialSnapshotEXT)UlongToPtr(params->snapshot), &info_host, params->bufferCapacityInput, (uint32_t *)UlongToPtr(params->bufferCountOutput), (XrVector3f *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialBufferVector3fEXT(void *args)
{
    struct xrGetSpatialBufferVector3fEXT_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferVector3fEXT(params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialEntityComponentDataBD(void *args)
{
    struct
    {
        PTR32 snapshot;
        PTR32 getInfo;
        PTR32 componentData;
        XrResult result;
    } *params = args;
    XrSpatialEntityComponentGetInfoBD getInfo_host;
    XrSpatialEntityComponentDataBaseHeaderBD componentData_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->snapshot, params->getInfo, params->componentData);

    init_conversion_context(ctx);
    convert_XrSpatialEntityComponentGetInfoBD_win32_to_host((const XrSpatialEntityComponentGetInfoBD32 *)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrSpatialEntityComponentDataBaseHeaderBD_win32_to_host(ctx, (XrSpatialEntityComponentDataBaseHeaderBD32 *)UlongToPtr(params->componentData), &componentData_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialEntityComponentDataBD((XrSenseDataSnapshotBD)UlongToPtr(params->snapshot), &getInfo_host, &componentData_host);
    convert_XrSpatialEntityComponentDataBaseHeaderBD_host_to_win32(&componentData_host, (XrSpatialEntityComponentDataBaseHeaderBD32 *)UlongToPtr(params->componentData));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialEntityComponentDataBD(void *args)
{
    struct xrGetSpatialEntityComponentDataBD_params *params = args;

    TRACE("%p, %p, %p\n", params->snapshot, params->getInfo, params->componentData);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialEntityComponentDataBD(params->snapshot, params->getInfo, params->componentData);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialEntityUuidBD(void *args)
{
    struct
    {
        PTR32 snapshot;
        XrSpatialEntityIdBD entityId;
        PTR32 uuid;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %#x\n", params->snapshot, wine_dbgstr_longlong(params->entityId), params->uuid);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialEntityUuidBD((XrSenseDataSnapshotBD)UlongToPtr(params->snapshot), params->entityId, (XrUuidEXT *)UlongToPtr(params->uuid));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialEntityUuidBD(void *args)
{
    struct xrGetSpatialEntityUuidBD_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->snapshot, wine_dbgstr_longlong(params->entityId), params->uuid);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialEntityUuidBD(params->snapshot, params->entityId, params->uuid);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialGraphNodeBindingPropertiesMSFT(void *args)
{
    struct
    {
        PTR32 nodeBinding;
        PTR32 getInfo;
        PTR32 properties;
        XrResult result;
    } *params = args;
    XrSpatialGraphNodeBindingPropertiesGetInfoMSFT *getInfo_host = NULL;
    XrSpatialGraphNodeBindingPropertiesMSFT properties_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->nodeBinding, params->getInfo, params->properties);

    init_conversion_context(ctx);
    if (params->getInfo)
    {
        getInfo_host = conversion_context_alloc(ctx, sizeof(*getInfo_host));
        convert_XrSpatialGraphNodeBindingPropertiesGetInfoMSFT_win32_to_host((const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT32 *)UlongToPtr(params->getInfo), getInfo_host);
    }
    convert_XrSpatialGraphNodeBindingPropertiesMSFT_win32_to_host((XrSpatialGraphNodeBindingPropertiesMSFT32 *)UlongToPtr(params->properties), &properties_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialGraphNodeBindingPropertiesMSFT((XrSpatialGraphNodeBindingMSFT)UlongToPtr(params->nodeBinding), getInfo_host, &properties_host);
    convert_XrSpatialGraphNodeBindingPropertiesMSFT_host_to_win32(&properties_host, (XrSpatialGraphNodeBindingPropertiesMSFT32 *)UlongToPtr(params->properties));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialGraphNodeBindingPropertiesMSFT(void *args)
{
    struct xrGetSpatialGraphNodeBindingPropertiesMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->nodeBinding, params->getInfo, params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialGraphNodeBindingPropertiesMSFT(params->nodeBinding, params->getInfo, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSwapchainStateFB(void *args)
{
    struct
    {
        PTR32 swapchain;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrSwapchainStateBaseHeaderFB state_host;

    TRACE("%#x, %#x\n", params->swapchain, params->state);

    convert_XrSwapchainStateBaseHeaderFB_win32_to_host((XrSwapchainStateBaseHeaderFB32 *)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSwapchainStateFB(wine_swapchain_from_handle((XrSwapchain)UlongToPtr(params->swapchain))->host_swapchain, &state_host);
    convert_XrSwapchainStateBaseHeaderFB_host_to_win32(&state_host, (XrSwapchainStateBaseHeaderFB32 *)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSwapchainStateFB(void *args)
{
    struct xrGetSwapchainStateFB_params *params = args;

    TRACE("%p, %p\n", params->swapchain, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSwapchainStateFB(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSystem(void *args)
{
    struct
    {
        PTR32 instance;
        PTR32 getInfo;
        PTR32 systemId;
        XrResult result;
    } *params = args;
    XrSystemGetInfo getInfo_host;

    TRACE("%#x, %#x, %#x\n", params->instance, params->getInfo, params->systemId);

    convert_XrSystemGetInfo_win32_to_host((const XrSystemGetInfo32 *)UlongToPtr(params->getInfo), &getInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSystem(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, &getInfo_host, (XrSystemId *)UlongToPtr(params->systemId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSystem(void *args)
{
    struct xrGetSystem_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->getInfo, params->systemId);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSystem(wine_instance_from_handle(params->instance)->host_instance, params->getInfo, params->systemId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSystemProperties(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        PTR32 properties;
        XrResult result;
    } *params = args;
    XrSystemProperties properties_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, 0x%s, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->properties);

    init_conversion_context(ctx);
    convert_XrSystemProperties_win32_to_host(ctx, (XrSystemProperties32 *)UlongToPtr(params->properties), &properties_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSystemProperties(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, &properties_host);
    convert_XrSystemProperties_host_to_win32(&properties_host, (XrSystemProperties32 *)UlongToPtr(params->properties));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSystemProperties(void *args)
{
    struct xrGetSystemProperties_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSystemProperties(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetTrackableMarkerANDROID(void *args)
{
    struct
    {
        PTR32 tracker;
        PTR32 getInfo;
        PTR32 markerOutput;
        XrResult result;
    } *params = args;
    XrTrackableGetInfoANDROID getInfo_host;
    XrTrackableMarkerANDROID markerOutput_host;

    TRACE("%#x, %#x, %#x\n", params->tracker, params->getInfo, params->markerOutput);

    convert_XrTrackableGetInfoANDROID_win32_to_host((const XrTrackableGetInfoANDROID32 *)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrTrackableMarkerANDROID_win32_to_host((XrTrackableMarkerANDROID32 *)UlongToPtr(params->markerOutput), &markerOutput_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetTrackableMarkerANDROID((XrTrackableTrackerANDROID)UlongToPtr(params->tracker), &getInfo_host, &markerOutput_host);
    convert_XrTrackableMarkerANDROID_host_to_win32(&markerOutput_host, (XrTrackableMarkerANDROID32 *)UlongToPtr(params->markerOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetTrackableMarkerANDROID(void *args)
{
    struct xrGetTrackableMarkerANDROID_params *params = args;

    TRACE("%p, %p, %p\n", params->tracker, params->getInfo, params->markerOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetTrackableMarkerANDROID(params->tracker, params->getInfo, params->markerOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetTrackableObjectANDROID(void *args)
{
    struct
    {
        PTR32 tracker;
        PTR32 getInfo;
        PTR32 objectOutput;
        XrResult result;
    } *params = args;
    XrTrackableGetInfoANDROID getInfo_host;
    XrTrackableObjectANDROID objectOutput_host;

    TRACE("%#x, %#x, %#x\n", params->tracker, params->getInfo, params->objectOutput);

    convert_XrTrackableGetInfoANDROID_win32_to_host((const XrTrackableGetInfoANDROID32 *)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrTrackableObjectANDROID_win32_to_host((XrTrackableObjectANDROID32 *)UlongToPtr(params->objectOutput), &objectOutput_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetTrackableObjectANDROID((XrTrackableTrackerANDROID)UlongToPtr(params->tracker), &getInfo_host, &objectOutput_host);
    convert_XrTrackableObjectANDROID_host_to_win32(&objectOutput_host, (XrTrackableObjectANDROID32 *)UlongToPtr(params->objectOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetTrackableObjectANDROID(void *args)
{
    struct xrGetTrackableObjectANDROID_params *params = args;

    TRACE("%p, %p, %p\n", params->tracker, params->getInfo, params->objectOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetTrackableObjectANDROID(params->tracker, params->getInfo, params->objectOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetTrackablePlaneANDROID(void *args)
{
    struct
    {
        PTR32 trackableTracker;
        PTR32 getInfo;
        PTR32 planeOutput;
        XrResult result;
    } *params = args;
    XrTrackableGetInfoANDROID getInfo_host;
    XrTrackablePlaneANDROID planeOutput_host;

    TRACE("%#x, %#x, %#x\n", params->trackableTracker, params->getInfo, params->planeOutput);

    convert_XrTrackableGetInfoANDROID_win32_to_host((const XrTrackableGetInfoANDROID32 *)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrTrackablePlaneANDROID_win32_to_host((XrTrackablePlaneANDROID32 *)UlongToPtr(params->planeOutput), &planeOutput_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetTrackablePlaneANDROID((XrTrackableTrackerANDROID)UlongToPtr(params->trackableTracker), &getInfo_host, &planeOutput_host);
    convert_XrTrackablePlaneANDROID_host_to_win32(&planeOutput_host, (XrTrackablePlaneANDROID32 *)UlongToPtr(params->planeOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetTrackablePlaneANDROID(void *args)
{
    struct xrGetTrackablePlaneANDROID_params *params = args;

    TRACE("%p, %p, %p\n", params->trackableTracker, params->getInfo, params->planeOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetTrackablePlaneANDROID(params->trackableTracker, params->getInfo, params->planeOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetViewConfigurationProperties(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        XrViewConfigurationType viewConfigurationType;
        PTR32 configurationProperties;
        XrResult result;
    } *params = args;
    XrViewConfigurationProperties configurationProperties_host;

    TRACE("%#x, 0x%s, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->configurationProperties);

    convert_XrViewConfigurationProperties_win32_to_host((XrViewConfigurationProperties32 *)UlongToPtr(params->configurationProperties), &configurationProperties_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetViewConfigurationProperties(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, params->viewConfigurationType, &configurationProperties_host);
    convert_XrViewConfigurationProperties_host_to_win32(&configurationProperties_host, (XrViewConfigurationProperties32 *)UlongToPtr(params->configurationProperties));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetViewConfigurationProperties(void *args)
{
    struct xrGetViewConfigurationProperties_params *params = args;

    TRACE("%p, 0x%s, %#x, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->configurationProperties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetViewConfigurationProperties(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationType, params->configurationProperties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVirtualKeyboardDirtyTexturesMETA(void *args)
{
    struct
    {
        PTR32 keyboard;
        uint32_t textureIdCapacityInput;
        PTR32 textureIdCountOutput;
        PTR32 textureIds;
        XrResult result;
    } *params = args;

    TRACE("%#x, %u, %#x, %#x\n", params->keyboard, params->textureIdCapacityInput, params->textureIdCountOutput, params->textureIds);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardDirtyTexturesMETA((XrVirtualKeyboardMETA)UlongToPtr(params->keyboard), params->textureIdCapacityInput, (uint32_t *)UlongToPtr(params->textureIdCountOutput), (uint64_t *)UlongToPtr(params->textureIds));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVirtualKeyboardDirtyTexturesMETA(void *args)
{
    struct xrGetVirtualKeyboardDirtyTexturesMETA_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->keyboard, params->textureIdCapacityInput, params->textureIdCountOutput, params->textureIds);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardDirtyTexturesMETA(params->keyboard, params->textureIdCapacityInput, params->textureIdCountOutput, params->textureIds);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVirtualKeyboardModelAnimationStatesMETA(void *args)
{
    struct
    {
        PTR32 keyboard;
        PTR32 animationStates;
        XrResult result;
    } *params = args;
    XrVirtualKeyboardModelAnimationStatesMETA animationStates_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x\n", params->keyboard, params->animationStates);

    init_conversion_context(ctx);
    convert_XrVirtualKeyboardModelAnimationStatesMETA_win32_to_host(ctx, (XrVirtualKeyboardModelAnimationStatesMETA32 *)UlongToPtr(params->animationStates), &animationStates_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardModelAnimationStatesMETA((XrVirtualKeyboardMETA)UlongToPtr(params->keyboard), &animationStates_host);
    convert_XrVirtualKeyboardModelAnimationStatesMETA_host_to_win32(&animationStates_host, (XrVirtualKeyboardModelAnimationStatesMETA32 *)UlongToPtr(params->animationStates));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVirtualKeyboardModelAnimationStatesMETA(void *args)
{
    struct xrGetVirtualKeyboardModelAnimationStatesMETA_params *params = args;

    TRACE("%p, %p\n", params->keyboard, params->animationStates);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardModelAnimationStatesMETA(params->keyboard, params->animationStates);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVirtualKeyboardScaleMETA(void *args)
{
    struct
    {
        PTR32 keyboard;
        PTR32 scale;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->keyboard, params->scale);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardScaleMETA((XrVirtualKeyboardMETA)UlongToPtr(params->keyboard), (float *)UlongToPtr(params->scale));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVirtualKeyboardScaleMETA(void *args)
{
    struct xrGetVirtualKeyboardScaleMETA_params *params = args;

    TRACE("%p, %p\n", params->keyboard, params->scale);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardScaleMETA(params->keyboard, params->scale);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVirtualKeyboardTextureDataMETA(void *args)
{
    struct
    {
        PTR32 keyboard;
        uint64_t DECLSPEC_ALIGN(8) textureId;
        PTR32 textureData;
        XrResult result;
    } *params = args;
    XrVirtualKeyboardTextureDataMETA textureData_host;

    TRACE("%#x, 0x%s, %#x\n", params->keyboard, wine_dbgstr_longlong(params->textureId), params->textureData);

    convert_XrVirtualKeyboardTextureDataMETA_win32_to_host((XrVirtualKeyboardTextureDataMETA32 *)UlongToPtr(params->textureData), &textureData_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardTextureDataMETA((XrVirtualKeyboardMETA)UlongToPtr(params->keyboard), params->textureId, &textureData_host);
    convert_XrVirtualKeyboardTextureDataMETA_host_to_win32(&textureData_host, (XrVirtualKeyboardTextureDataMETA32 *)UlongToPtr(params->textureData));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVirtualKeyboardTextureDataMETA(void *args)
{
    struct xrGetVirtualKeyboardTextureDataMETA_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->keyboard, wine_dbgstr_longlong(params->textureId), params->textureData);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardTextureDataMETA(params->keyboard, params->textureId, params->textureData);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVisibilityMaskKHR(void *args)
{
    struct
    {
        PTR32 session;
        XrViewConfigurationType viewConfigurationType;
        uint32_t viewIndex;
        XrVisibilityMaskTypeKHR visibilityMaskType;
        PTR32 visibilityMask;
        XrResult result;
    } *params = args;
    XrVisibilityMaskKHR visibilityMask_host;

    TRACE("%#x, %#x, %u, %#x, %#x\n", params->session, params->viewConfigurationType, params->viewIndex, params->visibilityMaskType, params->visibilityMask);

    convert_XrVisibilityMaskKHR_win32_to_host((XrVisibilityMaskKHR32 *)UlongToPtr(params->visibilityMask), &visibilityMask_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetVisibilityMaskKHR(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->viewConfigurationType, params->viewIndex, params->visibilityMaskType, &visibilityMask_host);
    convert_XrVisibilityMaskKHR_host_to_win32(&visibilityMask_host, (XrVisibilityMaskKHR32 *)UlongToPtr(params->visibilityMask));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVisibilityMaskKHR(void *args)
{
    struct xrGetVisibilityMaskKHR_params *params = args;

    TRACE("%p, %#x, %u, %#x, %p\n", params->session, params->viewConfigurationType, params->viewIndex, params->visibilityMaskType, params->visibilityMask);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVisibilityMaskKHR(wine_session_from_handle(params->session)->host_session, params->viewConfigurationType, params->viewIndex, params->visibilityMaskType, params->visibilityMask);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVulkanDeviceExtensionsKHR(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %u, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVulkanDeviceExtensionsKHR(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, params->bufferCapacityInput, (uint32_t *)UlongToPtr(params->bufferCountOutput), (char *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanDeviceExtensionsKHR(void *args)
{
    struct xrGetVulkanDeviceExtensionsKHR_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVulkanDeviceExtensionsKHR(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVulkanGraphicsDevice2KHR(void *args)
{
    struct
    {
        PTR32 instance;
        PTR32 getInfo;
        PTR32 vulkanPhysicalDevice;
        XrResult result;
    } *params = args;
    XrVulkanGraphicsDeviceGetInfoKHR getInfo_host;

    TRACE("%#x, %#x, %#x\n", params->instance, params->getInfo, params->vulkanPhysicalDevice);

    convert_XrVulkanGraphicsDeviceGetInfoKHR_win32_to_host((const XrVulkanGraphicsDeviceGetInfoKHR32 *)UlongToPtr(params->getInfo), &getInfo_host);
    params->result = wine_xrGetVulkanGraphicsDevice2KHR((XrInstance)UlongToPtr(params->instance), &getInfo_host, (VkPhysicalDevice *)UlongToPtr(params->vulkanPhysicalDevice));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanGraphicsDevice2KHR(void *args)
{
    struct xrGetVulkanGraphicsDevice2KHR_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->getInfo, params->vulkanPhysicalDevice);

    params->result = wine_xrGetVulkanGraphicsDevice2KHR(params->instance, params->getInfo, params->vulkanPhysicalDevice);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVulkanGraphicsDeviceKHR(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        VkInstance vkInstance;
        PTR32 vkPhysicalDevice;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %p, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->vkInstance, params->vkPhysicalDevice);

    params->result = wine_xrGetVulkanGraphicsDeviceKHR((XrInstance)UlongToPtr(params->instance), params->systemId, params->vkInstance, (VkPhysicalDevice *)UlongToPtr(params->vkPhysicalDevice));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanGraphicsDeviceKHR(void *args)
{
    struct xrGetVulkanGraphicsDeviceKHR_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->vkInstance, params->vkPhysicalDevice);

    params->result = wine_xrGetVulkanGraphicsDeviceKHR(params->instance, params->systemId, params->vkInstance, params->vkPhysicalDevice);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVulkanGraphicsRequirements2KHR(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        PTR32 graphicsRequirements;
        XrResult result;
    } *params = args;
    XrGraphicsRequirementsVulkanKHR graphicsRequirements_host;

    TRACE("%#x, 0x%s, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->graphicsRequirements);

    convert_XrGraphicsRequirementsVulkanKHR_win32_to_host((XrGraphicsRequirementsVulkanKHR32 *)UlongToPtr(params->graphicsRequirements), &graphicsRequirements_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetVulkanGraphicsRequirements2KHR(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, &graphicsRequirements_host);
    convert_XrGraphicsRequirementsVulkanKHR_host_to_win32(&graphicsRequirements_host, (XrGraphicsRequirementsVulkanKHR32 *)UlongToPtr(params->graphicsRequirements));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanGraphicsRequirements2KHR(void *args)
{
    struct xrGetVulkanGraphicsRequirements2KHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->graphicsRequirements);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVulkanGraphicsRequirements2KHR(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->graphicsRequirements);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVulkanGraphicsRequirementsKHR(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        PTR32 graphicsRequirements;
        XrResult result;
    } *params = args;
    XrGraphicsRequirementsVulkanKHR graphicsRequirements_host;

    TRACE("%#x, 0x%s, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->graphicsRequirements);

    convert_XrGraphicsRequirementsVulkanKHR_win32_to_host((XrGraphicsRequirementsVulkanKHR32 *)UlongToPtr(params->graphicsRequirements), &graphicsRequirements_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetVulkanGraphicsRequirementsKHR(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->systemId, &graphicsRequirements_host);
    convert_XrGraphicsRequirementsVulkanKHR_host_to_win32(&graphicsRequirements_host, (XrGraphicsRequirementsVulkanKHR32 *)UlongToPtr(params->graphicsRequirements));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanGraphicsRequirementsKHR(void *args)
{
    struct xrGetVulkanGraphicsRequirementsKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->graphicsRequirements);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVulkanGraphicsRequirementsKHR(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->graphicsRequirements);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVulkanInstanceExtensionsKHR(void *args)
{
    struct
    {
        PTR32 instance;
        XrSystemId systemId;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %u, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->systemId), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = wine_xrGetVulkanInstanceExtensionsKHR((XrInstance)UlongToPtr(params->instance), params->systemId, params->bufferCapacityInput, (uint32_t *)UlongToPtr(params->bufferCountOutput), (char *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanInstanceExtensionsKHR(void *args)
{
    struct xrGetVulkanInstanceExtensionsKHR_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->systemId), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = wine_xrGetVulkanInstanceExtensionsKHR(params->instance, params->systemId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetWorldMeshBufferRecommendSizeML(void *args)
{
    struct
    {
        PTR32 detector;
        PTR32 sizeInfo;
        PTR32 size;
        XrResult result;
    } *params = args;
    XrWorldMeshBufferRecommendedSizeInfoML sizeInfo_host;
    XrWorldMeshBufferSizeML size_host;

    TRACE("%#x, %#x, %#x\n", params->detector, params->sizeInfo, params->size);

    convert_XrWorldMeshBufferRecommendedSizeInfoML_win32_to_host((const XrWorldMeshBufferRecommendedSizeInfoML32 *)UlongToPtr(params->sizeInfo), &sizeInfo_host);
    convert_XrWorldMeshBufferSizeML_win32_to_host((XrWorldMeshBufferSizeML32 *)UlongToPtr(params->size), &size_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetWorldMeshBufferRecommendSizeML((XrWorldMeshDetectorML)UlongToPtr(params->detector), &sizeInfo_host, &size_host);
    convert_XrWorldMeshBufferSizeML_host_to_win32(&size_host, (XrWorldMeshBufferSizeML32 *)UlongToPtr(params->size));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetWorldMeshBufferRecommendSizeML(void *args)
{
    struct xrGetWorldMeshBufferRecommendSizeML_params *params = args;

    TRACE("%p, %p, %p\n", params->detector, params->sizeInfo, params->size);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetWorldMeshBufferRecommendSizeML(params->detector, params->sizeInfo, params->size);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrImportLocalizationMapML(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 importInfo;
        PTR32 mapUuid;
        XrResult result;
    } *params = args;
    XrLocalizationMapImportInfoML importInfo_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->importInfo, params->mapUuid);

    convert_XrLocalizationMapImportInfoML_win32_to_host((const XrLocalizationMapImportInfoML32 *)UlongToPtr(params->importInfo), &importInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrImportLocalizationMapML(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &importInfo_host, (XrUuidEXT *)UlongToPtr(params->mapUuid));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrImportLocalizationMapML(void *args)
{
    struct xrImportLocalizationMapML_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->importInfo, params->mapUuid);

    params->result = g_xr_host_instance_dispatch_table.p_xrImportLocalizationMapML(wine_session_from_handle(params->session)->host_session, params->importInfo, params->mapUuid);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLoadControllerModelMSFT(void *args)
{
    struct
    {
        PTR32 session;
        XrControllerModelKeyMSFT modelKey;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %u, %#x, %#x\n", params->session, wine_dbgstr_longlong(params->modelKey), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrLoadControllerModelMSFT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->modelKey, params->bufferCapacityInput, (uint32_t *)UlongToPtr(params->bufferCountOutput), (uint8_t *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLoadControllerModelMSFT(void *args)
{
    struct xrLoadControllerModelMSFT_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->session, wine_dbgstr_longlong(params->modelKey), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrLoadControllerModelMSFT(wine_session_from_handle(params->session)->host_session, params->modelKey, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLoadRenderModelFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrRenderModelLoadInfoFB info_host;
    XrRenderModelBufferFB buffer_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->buffer);

    convert_XrRenderModelLoadInfoFB_win32_to_host((const XrRenderModelLoadInfoFB32 *)UlongToPtr(params->info), &info_host);
    convert_XrRenderModelBufferFB_win32_to_host((XrRenderModelBufferFB32 *)UlongToPtr(params->buffer), &buffer_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLoadRenderModelFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, &buffer_host);
    convert_XrRenderModelBufferFB_host_to_win32(&buffer_host, (XrRenderModelBufferFB32 *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLoadRenderModelFB(void *args)
{
    struct xrLoadRenderModelFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrLoadRenderModelFB(wine_session_from_handle(params->session)->host_session, params->info, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateBodyJointsBD(void *args)
{
    struct
    {
        PTR32 bodyTracker;
        PTR32 locateInfo;
        PTR32 locations;
        XrResult result;
    } *params = args;
    XrBodyJointsLocateInfoBD locateInfo_host;
    XrBodyJointLocationsBD locations_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->bodyTracker, params->locateInfo, params->locations);

    init_conversion_context(ctx);
    convert_XrBodyJointsLocateInfoBD_win32_to_host((const XrBodyJointsLocateInfoBD32 *)UlongToPtr(params->locateInfo), &locateInfo_host);
    convert_XrBodyJointLocationsBD_win32_to_host(ctx, (XrBodyJointLocationsBD32 *)UlongToPtr(params->locations), &locations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateBodyJointsBD((XrBodyTrackerBD)UlongToPtr(params->bodyTracker), &locateInfo_host, &locations_host);
    convert_XrBodyJointLocationsBD_host_to_win32(&locations_host, (XrBodyJointLocationsBD32 *)UlongToPtr(params->locations));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateBodyJointsBD(void *args)
{
    struct xrLocateBodyJointsBD_params *params = args;

    TRACE("%p, %p, %p\n", params->bodyTracker, params->locateInfo, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateBodyJointsBD(params->bodyTracker, params->locateInfo, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateBodyJointsFB(void *args)
{
    struct
    {
        PTR32 bodyTracker;
        PTR32 locateInfo;
        PTR32 locations;
        XrResult result;
    } *params = args;
    XrBodyJointsLocateInfoFB locateInfo_host;
    XrBodyJointLocationsFB locations_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->bodyTracker, params->locateInfo, params->locations);

    init_conversion_context(ctx);
    convert_XrBodyJointsLocateInfoFB_win32_to_host((const XrBodyJointsLocateInfoFB32 *)UlongToPtr(params->locateInfo), &locateInfo_host);
    convert_XrBodyJointLocationsFB_win32_to_host(ctx, (XrBodyJointLocationsFB32 *)UlongToPtr(params->locations), &locations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateBodyJointsFB((XrBodyTrackerFB)UlongToPtr(params->bodyTracker), &locateInfo_host, &locations_host);
    convert_XrBodyJointLocationsFB_host_to_win32(&locations_host, (XrBodyJointLocationsFB32 *)UlongToPtr(params->locations));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateBodyJointsFB(void *args)
{
    struct xrLocateBodyJointsFB_params *params = args;

    TRACE("%p, %p, %p\n", params->bodyTracker, params->locateInfo, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateBodyJointsFB(params->bodyTracker, params->locateInfo, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateBodyJointsHTC(void *args)
{
    struct
    {
        PTR32 bodyTracker;
        PTR32 locateInfo;
        PTR32 locations;
        XrResult result;
    } *params = args;
    XrBodyJointsLocateInfoHTC locateInfo_host;
    XrBodyJointLocationsHTC locations_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->bodyTracker, params->locateInfo, params->locations);

    init_conversion_context(ctx);
    convert_XrBodyJointsLocateInfoHTC_win32_to_host((const XrBodyJointsLocateInfoHTC32 *)UlongToPtr(params->locateInfo), &locateInfo_host);
    convert_XrBodyJointLocationsHTC_win32_to_host(ctx, (XrBodyJointLocationsHTC32 *)UlongToPtr(params->locations), &locations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateBodyJointsHTC((XrBodyTrackerHTC)UlongToPtr(params->bodyTracker), &locateInfo_host, &locations_host);
    convert_XrBodyJointLocationsHTC_host_to_win32(&locations_host, (XrBodyJointLocationsHTC32 *)UlongToPtr(params->locations));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateBodyJointsHTC(void *args)
{
    struct xrLocateBodyJointsHTC_params *params = args;

    TRACE("%p, %p, %p\n", params->bodyTracker, params->locateInfo, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateBodyJointsHTC(params->bodyTracker, params->locateInfo, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateHandJointsEXT(void *args)
{
    struct
    {
        PTR32 handTracker;
        PTR32 locateInfo;
        PTR32 locations;
        XrResult result;
    } *params = args;
    XrHandJointsLocateInfoEXT locateInfo_host;
    XrHandJointLocationsEXT locations_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->handTracker, params->locateInfo, params->locations);

    init_conversion_context(ctx);
    convert_XrHandJointsLocateInfoEXT_win32_to_host(ctx, (const XrHandJointsLocateInfoEXT32 *)UlongToPtr(params->locateInfo), &locateInfo_host);
    convert_XrHandJointLocationsEXT_win32_to_host(ctx, (XrHandJointLocationsEXT32 *)UlongToPtr(params->locations), &locations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateHandJointsEXT((XrHandTrackerEXT)UlongToPtr(params->handTracker), &locateInfo_host, &locations_host);
    convert_XrHandJointLocationsEXT_host_to_win32(&locations_host, (XrHandJointLocationsEXT32 *)UlongToPtr(params->locations));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateHandJointsEXT(void *args)
{
    struct xrLocateHandJointsEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->handTracker, params->locateInfo, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateHandJointsEXT(params->handTracker, params->locateInfo, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateSceneComponentsMSFT(void *args)
{
    struct
    {
        PTR32 scene;
        PTR32 locateInfo;
        PTR32 locations;
        XrResult result;
    } *params = args;
    XrSceneComponentsLocateInfoMSFT locateInfo_host;
    XrSceneComponentLocationsMSFT locations_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->scene, params->locateInfo, params->locations);

    init_conversion_context(ctx);
    convert_XrSceneComponentsLocateInfoMSFT_win32_to_host((const XrSceneComponentsLocateInfoMSFT32 *)UlongToPtr(params->locateInfo), &locateInfo_host);
    convert_XrSceneComponentLocationsMSFT_win32_to_host(ctx, (XrSceneComponentLocationsMSFT32 *)UlongToPtr(params->locations), &locations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSceneComponentsMSFT((XrSceneMSFT)UlongToPtr(params->scene), &locateInfo_host, &locations_host);
    convert_XrSceneComponentLocationsMSFT_host_to_win32(&locations_host, (XrSceneComponentLocationsMSFT32 *)UlongToPtr(params->locations));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateSceneComponentsMSFT(void *args)
{
    struct xrLocateSceneComponentsMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->scene, params->locateInfo, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSceneComponentsMSFT(params->scene, params->locateInfo, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateSpace(void *args)
{
    struct
    {
        PTR32 space;
        PTR32 baseSpace;
        XrTime time;
        PTR32 location;
        XrResult result;
    } *params = args;
    XrSpaceLocation location_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, 0x%s, %#x\n", params->space, params->baseSpace, wine_dbgstr_longlong(params->time), params->location);

    init_conversion_context(ctx);
    convert_XrSpaceLocation_win32_to_host(ctx, (XrSpaceLocation32 *)UlongToPtr(params->location), &location_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSpace((XrSpace)UlongToPtr(params->space), (XrSpace)UlongToPtr(params->baseSpace), params->time, &location_host);
    convert_XrSpaceLocation_host_to_win32(&location_host, (XrSpaceLocation32 *)UlongToPtr(params->location));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateSpace(void *args)
{
    struct xrLocateSpace_params *params = args;

    TRACE("%p, %p, 0x%s, %p\n", params->space, params->baseSpace, wine_dbgstr_longlong(params->time), params->location);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSpace(params->space, params->baseSpace, params->time, params->location);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateSpaces(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 locateInfo;
        PTR32 spaceLocations;
        XrResult result;
    } *params = args;
    XrSpacesLocateInfo locateInfo_host;
    XrSpaceLocations spaceLocations_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->locateInfo, params->spaceLocations);

    init_conversion_context(ctx);
    convert_XrSpacesLocateInfo_win32_to_host(ctx, (const XrSpacesLocateInfo32 *)UlongToPtr(params->locateInfo), &locateInfo_host);
    convert_XrSpaceLocations_win32_to_host(ctx, (XrSpaceLocations32 *)UlongToPtr(params->spaceLocations), &spaceLocations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSpaces(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &locateInfo_host, &spaceLocations_host);
    convert_XrSpaceLocations_host_to_win32(&spaceLocations_host, (XrSpaceLocations32 *)UlongToPtr(params->spaceLocations));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateSpaces(void *args)
{
    struct xrLocateSpaces_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->locateInfo, params->spaceLocations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSpaces(wine_session_from_handle(params->session)->host_session, params->locateInfo, params->spaceLocations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateSpacesKHR(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 locateInfo;
        PTR32 spaceLocations;
        XrResult result;
    } *params = args;
    XrSpacesLocateInfo locateInfo_host;
    XrSpaceLocations spaceLocations_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->locateInfo, params->spaceLocations);

    init_conversion_context(ctx);
    convert_XrSpacesLocateInfo_win32_to_host(ctx, (const XrSpacesLocateInfo32 *)UlongToPtr(params->locateInfo), &locateInfo_host);
    convert_XrSpaceLocations_win32_to_host(ctx, (XrSpaceLocations32 *)UlongToPtr(params->spaceLocations), &spaceLocations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSpacesKHR(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &locateInfo_host, &spaceLocations_host);
    convert_XrSpaceLocations_host_to_win32(&spaceLocations_host, (XrSpaceLocations32 *)UlongToPtr(params->spaceLocations));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateSpacesKHR(void *args)
{
    struct xrLocateSpacesKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->locateInfo, params->spaceLocations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSpacesKHR(wine_session_from_handle(params->session)->host_session, params->locateInfo, params->spaceLocations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateViews(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 viewLocateInfo;
        PTR32 viewState;
        uint32_t viewCapacityInput;
        PTR32 viewCountOutput;
        PTR32 views;
        XrResult result;
    } *params = args;
    XrViewLocateInfo viewLocateInfo_host;
    XrViewState viewState_host;
    XrView *views_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x, %u, %#x, %#x\n", params->session, params->viewLocateInfo, params->viewState, params->viewCapacityInput, params->viewCountOutput, params->views);

    init_conversion_context(ctx);
    convert_XrViewLocateInfo_win32_to_host(ctx, (const XrViewLocateInfo32 *)UlongToPtr(params->viewLocateInfo), &viewLocateInfo_host);
    convert_XrViewState_win32_to_host((XrViewState32 *)UlongToPtr(params->viewState), &viewState_host);
    views_host = convert_XrView_array_win32_to_host(ctx, (XrView32 *)UlongToPtr(params->views), params->viewCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateViews(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &viewLocateInfo_host, &viewState_host, params->viewCapacityInput, (uint32_t *)UlongToPtr(params->viewCountOutput), views_host);
    convert_XrViewState_host_to_win32(&viewState_host, (XrViewState32 *)UlongToPtr(params->viewState));
    convert_XrView_array_host_to_win32(views_host, (XrView32 *)UlongToPtr(params->views), params->viewCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateViews(void *args)
{
    struct xrLocateViews_params *params = args;

    TRACE("%p, %p, %p, %u, %p, %p\n", params->session, params->viewLocateInfo, params->viewState, params->viewCapacityInput, params->viewCountOutput, params->views);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateViews(wine_session_from_handle(params->session)->host_session, params->viewLocateInfo, params->viewState, params->viewCapacityInput, params->viewCountOutput, params->views);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPassthroughLayerPauseFB(void *args)
{
    struct
    {
        PTR32 layer;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->layer);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerPauseFB((XrPassthroughLayerFB)UlongToPtr(params->layer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughLayerPauseFB(void *args)
{
    struct xrPassthroughLayerPauseFB_params *params = args;

    TRACE("%p\n", params->layer);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerPauseFB(params->layer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPassthroughLayerResumeFB(void *args)
{
    struct
    {
        PTR32 layer;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->layer);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerResumeFB((XrPassthroughLayerFB)UlongToPtr(params->layer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughLayerResumeFB(void *args)
{
    struct xrPassthroughLayerResumeFB_params *params = args;

    TRACE("%p\n", params->layer);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerResumeFB(params->layer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPassthroughLayerSetKeyboardHandsIntensityFB(void *args)
{
    struct
    {
        PTR32 layer;
        PTR32 intensity;
        XrResult result;
    } *params = args;
    XrPassthroughKeyboardHandsIntensityFB intensity_host;

    TRACE("%#x, %#x\n", params->layer, params->intensity);

    convert_XrPassthroughKeyboardHandsIntensityFB_win32_to_host((const XrPassthroughKeyboardHandsIntensityFB32 *)UlongToPtr(params->intensity), &intensity_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerSetKeyboardHandsIntensityFB((XrPassthroughLayerFB)UlongToPtr(params->layer), &intensity_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughLayerSetKeyboardHandsIntensityFB(void *args)
{
    struct xrPassthroughLayerSetKeyboardHandsIntensityFB_params *params = args;

    TRACE("%p, %p\n", params->layer, params->intensity);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerSetKeyboardHandsIntensityFB(params->layer, params->intensity);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPassthroughLayerSetStyleFB(void *args)
{
    struct
    {
        PTR32 layer;
        PTR32 style;
        XrResult result;
    } *params = args;
    XrPassthroughStyleFB style_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x\n", params->layer, params->style);

    init_conversion_context(ctx);
    convert_XrPassthroughStyleFB_win32_to_host(ctx, (const XrPassthroughStyleFB32 *)UlongToPtr(params->style), &style_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerSetStyleFB((XrPassthroughLayerFB)UlongToPtr(params->layer), &style_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughLayerSetStyleFB(void *args)
{
    struct xrPassthroughLayerSetStyleFB_params *params = args;

    TRACE("%p, %p\n", params->layer, params->style);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerSetStyleFB(params->layer, params->style);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPassthroughPauseFB(void *args)
{
    struct
    {
        PTR32 passthrough;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->passthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughPauseFB((XrPassthroughFB)UlongToPtr(params->passthrough));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughPauseFB(void *args)
{
    struct xrPassthroughPauseFB_params *params = args;

    TRACE("%p\n", params->passthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughPauseFB(params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPassthroughStartFB(void *args)
{
    struct
    {
        PTR32 passthrough;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->passthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughStartFB((XrPassthroughFB)UlongToPtr(params->passthrough));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughStartFB(void *args)
{
    struct xrPassthroughStartFB_params *params = args;

    TRACE("%p\n", params->passthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughStartFB(params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPathToString(void *args)
{
    struct
    {
        PTR32 instance;
        XrPath path;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %u, %#x, %#x\n", params->instance, wine_dbgstr_longlong(params->path), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrPathToString(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->path, params->bufferCapacityInput, (uint32_t *)UlongToPtr(params->bufferCountOutput), (char *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPathToString(void *args)
{
    struct xrPathToString_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->instance, wine_dbgstr_longlong(params->path), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrPathToString(wine_instance_from_handle(params->instance)->host_instance, params->path, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPauseSimultaneousHandsAndControllersTrackingMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 pauseInfo;
        XrResult result;
    } *params = args;
    XrSimultaneousHandsAndControllersTrackingPauseInfoMETA pauseInfo_host;

    TRACE("%#x, %#x\n", params->session, params->pauseInfo);

    convert_XrSimultaneousHandsAndControllersTrackingPauseInfoMETA_win32_to_host((const XrSimultaneousHandsAndControllersTrackingPauseInfoMETA32 *)UlongToPtr(params->pauseInfo), &pauseInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPauseSimultaneousHandsAndControllersTrackingMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &pauseInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPauseSimultaneousHandsAndControllersTrackingMETA(void *args)
{
    struct xrPauseSimultaneousHandsAndControllersTrackingMETA_params *params = args;

    TRACE("%p, %p\n", params->session, params->pauseInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrPauseSimultaneousHandsAndControllersTrackingMETA(wine_session_from_handle(params->session)->host_session, params->pauseInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPerfSettingsSetPerformanceLevelEXT(void *args)
{
    struct
    {
        PTR32 session;
        XrPerfSettingsDomainEXT domain;
        XrPerfSettingsLevelEXT level;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x, %#x\n", params->session, params->domain, params->level);

    params->result = g_xr_host_instance_dispatch_table.p_xrPerfSettingsSetPerformanceLevelEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->domain, params->level);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPerfSettingsSetPerformanceLevelEXT(void *args)
{
    struct xrPerfSettingsSetPerformanceLevelEXT_params *params = args;

    TRACE("%p, %#x, %#x\n", params->session, params->domain, params->level);

    params->result = g_xr_host_instance_dispatch_table.p_xrPerfSettingsSetPerformanceLevelEXT(wine_session_from_handle(params->session)->host_session, params->domain, params->level);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPersistAnchorANDROID(void *args)
{
    struct
    {
        PTR32 handle;
        PTR32 persistedInfo;
        PTR32 anchorIdOutput;
        XrResult result;
    } *params = args;
    XrPersistedAnchorSpaceInfoANDROID persistedInfo_host;

    TRACE("%#x, %#x, %#x\n", params->handle, params->persistedInfo, params->anchorIdOutput);

    convert_XrPersistedAnchorSpaceInfoANDROID_win32_to_host((const XrPersistedAnchorSpaceInfoANDROID32 *)UlongToPtr(params->persistedInfo), &persistedInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPersistAnchorANDROID((XrDeviceAnchorPersistenceANDROID)UlongToPtr(params->handle), &persistedInfo_host, (XrUuidEXT *)UlongToPtr(params->anchorIdOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPersistAnchorANDROID(void *args)
{
    struct xrPersistAnchorANDROID_params *params = args;

    TRACE("%p, %p, %p\n", params->handle, params->persistedInfo, params->anchorIdOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrPersistAnchorANDROID(params->handle, params->persistedInfo, params->anchorIdOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPersistSpatialAnchorAsyncBD(void *args)
{
    struct
    {
        PTR32 provider;
        PTR32 info;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorPersistInfoBD info_host;

    TRACE("%#x, %#x, %#x\n", params->provider, params->info, params->future);

    convert_XrSpatialAnchorPersistInfoBD_win32_to_host((const XrSpatialAnchorPersistInfoBD32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialAnchorAsyncBD((XrSenseDataProviderBD)UlongToPtr(params->provider), &info_host, (XrFutureEXT *)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPersistSpatialAnchorAsyncBD(void *args)
{
    struct xrPersistSpatialAnchorAsyncBD_params *params = args;

    TRACE("%p, %p, %p\n", params->provider, params->info, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialAnchorAsyncBD(params->provider, params->info, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPersistSpatialAnchorCompleteBD(void *args)
{
    struct
    {
        PTR32 provider;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrFutureCompletionEXT completion_host;

    TRACE("%#x, %p, %#x\n", params->provider, params->future, params->completion);

    convert_XrFutureCompletionEXT_win32_to_host((XrFutureCompletionEXT32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialAnchorCompleteBD((XrSenseDataProviderBD)UlongToPtr(params->provider), params->future, &completion_host);
    convert_XrFutureCompletionEXT_host_to_win32(&completion_host, (XrFutureCompletionEXT32 *)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPersistSpatialAnchorCompleteBD(void *args)
{
    struct xrPersistSpatialAnchorCompleteBD_params *params = args;

    TRACE("%p, %p, %p\n", params->provider, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialAnchorCompleteBD(params->provider, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPersistSpatialAnchorMSFT(void *args)
{
    struct
    {
        PTR32 spatialAnchorStore;
        PTR32 spatialAnchorPersistenceInfo;
        XrResult result;
    } *params = args;
    XrSpatialAnchorPersistenceInfoMSFT spatialAnchorPersistenceInfo_host;

    TRACE("%#x, %#x\n", params->spatialAnchorStore, params->spatialAnchorPersistenceInfo);

    convert_XrSpatialAnchorPersistenceInfoMSFT_win32_to_host((const XrSpatialAnchorPersistenceInfoMSFT32 *)UlongToPtr(params->spatialAnchorPersistenceInfo), &spatialAnchorPersistenceInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialAnchorMSFT((XrSpatialAnchorStoreConnectionMSFT)UlongToPtr(params->spatialAnchorStore), &spatialAnchorPersistenceInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPersistSpatialAnchorMSFT(void *args)
{
    struct xrPersistSpatialAnchorMSFT_params *params = args;

    TRACE("%p, %p\n", params->spatialAnchorStore, params->spatialAnchorPersistenceInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialAnchorMSFT(params->spatialAnchorStore, params->spatialAnchorPersistenceInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPersistSpatialEntityAsyncEXT(void *args)
{
    struct
    {
        PTR32 persistenceContext;
        PTR32 persistInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialEntityPersistInfoEXT persistInfo_host;

    TRACE("%#x, %#x, %#x\n", params->persistenceContext, params->persistInfo, params->future);

    convert_XrSpatialEntityPersistInfoEXT_win32_to_host((const XrSpatialEntityPersistInfoEXT32 *)UlongToPtr(params->persistInfo), &persistInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialEntityAsyncEXT((XrSpatialPersistenceContextEXT)UlongToPtr(params->persistenceContext), &persistInfo_host, (XrFutureEXT *)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPersistSpatialEntityAsyncEXT(void *args)
{
    struct xrPersistSpatialEntityAsyncEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->persistenceContext, params->persistInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialEntityAsyncEXT(params->persistenceContext, params->persistInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPersistSpatialEntityCompleteEXT(void *args)
{
    struct
    {
        PTR32 persistenceContext;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrPersistSpatialEntityCompletionEXT completion_host;

    TRACE("%#x, %p, %#x\n", params->persistenceContext, params->future, params->completion);

    convert_XrPersistSpatialEntityCompletionEXT_win32_to_host((XrPersistSpatialEntityCompletionEXT32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialEntityCompleteEXT((XrSpatialPersistenceContextEXT)UlongToPtr(params->persistenceContext), params->future, &completion_host);
    convert_XrPersistSpatialEntityCompletionEXT_host_to_win32(&completion_host, (XrPersistSpatialEntityCompletionEXT32 *)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPersistSpatialEntityCompleteEXT(void *args)
{
    struct xrPersistSpatialEntityCompleteEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->persistenceContext, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialEntityCompleteEXT(params->persistenceContext, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPollEvent(void *args)
{
    struct
    {
        PTR32 instance;
        PTR32 eventData;
        XrResult result;
    } *params = args;
    XrEventDataBuffer eventData_host;

    TRACE("%#x, %#x\n", params->instance, params->eventData);

    convert_XrEventDataBuffer_win32_to_host((XrEventDataBuffer32 *)UlongToPtr(params->eventData), &eventData_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPollEvent(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, &eventData_host);
    convert_XrEventDataBuffer_host_to_win32(&eventData_host, (XrEventDataBuffer32 *)UlongToPtr(params->eventData));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPollEvent(void *args)
{
    struct xrPollEvent_params *params = args;

    TRACE("%p, %p\n", params->instance, params->eventData);

    params->result = g_xr_host_instance_dispatch_table.p_xrPollEvent(wine_instance_from_handle(params->instance)->host_instance, params->eventData);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPollFutureEXT(void *args)
{
    struct
    {
        PTR32 instance;
        PTR32 pollInfo;
        PTR32 pollResult;
        XrResult result;
    } *params = args;
    XrFuturePollInfoEXT pollInfo_host;
    XrFuturePollResultEXT pollResult_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->instance, params->pollInfo, params->pollResult);

    init_conversion_context(ctx);
    convert_XrFuturePollInfoEXT_win32_to_host((const XrFuturePollInfoEXT32 *)UlongToPtr(params->pollInfo), &pollInfo_host);
    convert_XrFuturePollResultEXT_win32_to_host(ctx, (XrFuturePollResultEXT32 *)UlongToPtr(params->pollResult), &pollResult_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPollFutureEXT(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, &pollInfo_host, &pollResult_host);
    convert_XrFuturePollResultEXT_host_to_win32(&pollResult_host, (XrFuturePollResultEXT32 *)UlongToPtr(params->pollResult));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPollFutureEXT(void *args)
{
    struct xrPollFutureEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->pollInfo, params->pollResult);

    params->result = g_xr_host_instance_dispatch_table.p_xrPollFutureEXT(wine_instance_from_handle(params->instance)->host_instance, params->pollInfo, params->pollResult);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPublishSpatialAnchorsAsyncML(void *args)
{
    struct
    {
        PTR32 storage;
        PTR32 publishInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsPublishInfoML publishInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->storage, params->publishInfo, params->future);

    init_conversion_context(ctx);
    convert_XrSpatialAnchorsPublishInfoML_win32_to_host(ctx, (const XrSpatialAnchorsPublishInfoML32 *)UlongToPtr(params->publishInfo), &publishInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPublishSpatialAnchorsAsyncML((XrSpatialAnchorsStorageML)UlongToPtr(params->storage), &publishInfo_host, (XrFutureEXT *)UlongToPtr(params->future));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPublishSpatialAnchorsAsyncML(void *args)
{
    struct xrPublishSpatialAnchorsAsyncML_params *params = args;

    TRACE("%p, %p, %p\n", params->storage, params->publishInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrPublishSpatialAnchorsAsyncML(params->storage, params->publishInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPublishSpatialAnchorsCompleteML(void *args)
{
    struct
    {
        PTR32 storage;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsPublishCompletionML completion_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %p, %#x\n", params->storage, params->future, params->completion);

    init_conversion_context(ctx);
    convert_XrSpatialAnchorsPublishCompletionML_win32_to_host(ctx, (XrSpatialAnchorsPublishCompletionML32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPublishSpatialAnchorsCompleteML((XrSpatialAnchorsStorageML)UlongToPtr(params->storage), params->future, &completion_host);
    convert_XrSpatialAnchorsPublishCompletionML_host_to_win32(&completion_host, (XrSpatialAnchorsPublishCompletionML32 *)UlongToPtr(params->completion));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPublishSpatialAnchorsCompleteML(void *args)
{
    struct xrPublishSpatialAnchorsCompleteML_params *params = args;

    TRACE("%p, %p, %p\n", params->storage, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrPublishSpatialAnchorsCompleteML(params->storage, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQueryLocalizationMapsML(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 queryInfo;
        uint32_t mapCapacityInput;
        PTR32 mapCountOutput;
        PTR32 maps;
        XrResult result;
    } *params = args;
    XrLocalizationMapQueryInfoBaseHeaderML *queryInfo_host = NULL;
    XrLocalizationMapML *maps_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %u, %#x, %#x\n", params->session, params->queryInfo, params->mapCapacityInput, params->mapCountOutput, params->maps);

    init_conversion_context(ctx);
    if (params->queryInfo)
    {
        queryInfo_host = conversion_context_alloc(ctx, sizeof(*queryInfo_host));
        convert_XrLocalizationMapQueryInfoBaseHeaderML_win32_to_host((const XrLocalizationMapQueryInfoBaseHeaderML32 *)UlongToPtr(params->queryInfo), queryInfo_host);
    }
    maps_host = convert_XrLocalizationMapML_array_win32_to_host(ctx, (XrLocalizationMapML32 *)UlongToPtr(params->maps), params->mapCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrQueryLocalizationMapsML(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, queryInfo_host, params->mapCapacityInput, (uint32_t *)UlongToPtr(params->mapCountOutput), maps_host);
    convert_XrLocalizationMapML_array_host_to_win32(maps_host, (XrLocalizationMapML32 *)UlongToPtr(params->maps), params->mapCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQueryLocalizationMapsML(void *args)
{
    struct xrQueryLocalizationMapsML_params *params = args;

    TRACE("%p, %p, %u, %p, %p\n", params->session, params->queryInfo, params->mapCapacityInput, params->mapCountOutput, params->maps);

    params->result = g_xr_host_instance_dispatch_table.p_xrQueryLocalizationMapsML(wine_session_from_handle(params->session)->host_session, params->queryInfo, params->mapCapacityInput, params->mapCountOutput, params->maps);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQueryPerformanceMetricsCounterMETA(void *args)
{
    struct
    {
        PTR32 session;
        XrPath counterPath;
        PTR32 counter;
        XrResult result;
    } *params = args;
    XrPerformanceMetricsCounterMETA counter_host;

    TRACE("%#x, 0x%s, %#x\n", params->session, wine_dbgstr_longlong(params->counterPath), params->counter);

    convert_XrPerformanceMetricsCounterMETA_win32_to_host((XrPerformanceMetricsCounterMETA32 *)UlongToPtr(params->counter), &counter_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrQueryPerformanceMetricsCounterMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->counterPath, &counter_host);
    convert_XrPerformanceMetricsCounterMETA_host_to_win32(&counter_host, (XrPerformanceMetricsCounterMETA32 *)UlongToPtr(params->counter));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQueryPerformanceMetricsCounterMETA(void *args)
{
    struct xrQueryPerformanceMetricsCounterMETA_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->counterPath), params->counter);

    params->result = g_xr_host_instance_dispatch_table.p_xrQueryPerformanceMetricsCounterMETA(wine_session_from_handle(params->session)->host_session, params->counterPath, params->counter);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQuerySenseDataAsyncBD(void *args)
{
    struct
    {
        PTR32 provider;
        PTR32 queryInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSenseDataQueryInfoBD queryInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->provider, params->queryInfo, params->future);

    init_conversion_context(ctx);
    convert_XrSenseDataQueryInfoBD_win32_to_host(ctx, (const XrSenseDataQueryInfoBD32 *)UlongToPtr(params->queryInfo), &queryInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySenseDataAsyncBD((XrSenseDataProviderBD)UlongToPtr(params->provider), &queryInfo_host, (XrFutureEXT *)UlongToPtr(params->future));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQuerySenseDataAsyncBD(void *args)
{
    struct xrQuerySenseDataAsyncBD_params *params = args;

    TRACE("%p, %p, %p\n", params->provider, params->queryInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySenseDataAsyncBD(params->provider, params->queryInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQuerySenseDataCompleteBD(void *args)
{
    struct
    {
        PTR32 provider;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrSenseDataQueryCompletionBD completion_host;

    TRACE("%#x, %p, %#x\n", params->provider, params->future, params->completion);

    convert_XrSenseDataQueryCompletionBD_win32_to_host((XrSenseDataQueryCompletionBD32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySenseDataCompleteBD((XrSenseDataProviderBD)UlongToPtr(params->provider), params->future, &completion_host);
    convert_XrSenseDataQueryCompletionBD_host_to_win32(&completion_host, (XrSenseDataQueryCompletionBD32 *)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQuerySenseDataCompleteBD(void *args)
{
    struct xrQuerySenseDataCompleteBD_params *params = args;

    TRACE("%p, %p, %p\n", params->provider, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySenseDataCompleteBD(params->provider, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQuerySpacesFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpaceQueryInfoBaseHeaderFB info_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->requestId);

    convert_XrSpaceQueryInfoBaseHeaderFB_win32_to_host((const XrSpaceQueryInfoBaseHeaderFB32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpacesFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, (XrAsyncRequestIdFB *)UlongToPtr(params->requestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQuerySpacesFB(void *args)
{
    struct xrQuerySpacesFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpacesFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQuerySpatialAnchorsAsyncML(void *args)
{
    struct
    {
        PTR32 storage;
        PTR32 queryInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsQueryInfoBaseHeaderML queryInfo_host;

    TRACE("%#x, %#x, %#x\n", params->storage, params->queryInfo, params->future);

    convert_XrSpatialAnchorsQueryInfoBaseHeaderML_win32_to_host((const XrSpatialAnchorsQueryInfoBaseHeaderML32 *)UlongToPtr(params->queryInfo), &queryInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpatialAnchorsAsyncML((XrSpatialAnchorsStorageML)UlongToPtr(params->storage), &queryInfo_host, (XrFutureEXT *)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQuerySpatialAnchorsAsyncML(void *args)
{
    struct xrQuerySpatialAnchorsAsyncML_params *params = args;

    TRACE("%p, %p, %p\n", params->storage, params->queryInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpatialAnchorsAsyncML(params->storage, params->queryInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQuerySpatialAnchorsCompleteML(void *args)
{
    struct
    {
        PTR32 storage;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsQueryCompletionML completion_host;

    TRACE("%#x, %p, %#x\n", params->storage, params->future, params->completion);

    convert_XrSpatialAnchorsQueryCompletionML_win32_to_host((XrSpatialAnchorsQueryCompletionML32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpatialAnchorsCompleteML((XrSpatialAnchorsStorageML)UlongToPtr(params->storage), params->future, &completion_host);
    convert_XrSpatialAnchorsQueryCompletionML_host_to_win32(&completion_host, (XrSpatialAnchorsQueryCompletionML32 *)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQuerySpatialAnchorsCompleteML(void *args)
{
    struct xrQuerySpatialAnchorsCompleteML_params *params = args;

    TRACE("%p, %p, %p\n", params->storage, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpatialAnchorsCompleteML(params->storage, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQuerySpatialComponentDataEXT(void *args)
{
    struct
    {
        PTR32 snapshot;
        PTR32 queryCondition;
        PTR32 queryResult;
        XrResult result;
    } *params = args;
    XrSpatialComponentDataQueryConditionEXT queryCondition_host;
    XrSpatialComponentDataQueryResultEXT queryResult_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->snapshot, params->queryCondition, params->queryResult);

    init_conversion_context(ctx);
    convert_XrSpatialComponentDataQueryConditionEXT_win32_to_host(ctx, (const XrSpatialComponentDataQueryConditionEXT32 *)UlongToPtr(params->queryCondition), &queryCondition_host);
    convert_XrSpatialComponentDataQueryResultEXT_win32_to_host(ctx, (XrSpatialComponentDataQueryResultEXT32 *)UlongToPtr(params->queryResult), &queryResult_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpatialComponentDataEXT((XrSpatialSnapshotEXT)UlongToPtr(params->snapshot), &queryCondition_host, &queryResult_host);
    convert_XrSpatialComponentDataQueryResultEXT_host_to_win32(&queryResult_host, (XrSpatialComponentDataQueryResultEXT32 *)UlongToPtr(params->queryResult));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQuerySpatialComponentDataEXT(void *args)
{
    struct xrQuerySpatialComponentDataEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->snapshot, params->queryCondition, params->queryResult);

    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpatialComponentDataEXT(params->snapshot, params->queryCondition, params->queryResult);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQuerySystemTrackedKeyboardFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 queryInfo;
        PTR32 keyboard;
        XrResult result;
    } *params = args;
    XrKeyboardTrackingQueryFB queryInfo_host;
    XrKeyboardTrackingDescriptionFB keyboard_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->queryInfo, params->keyboard);

    convert_XrKeyboardTrackingQueryFB_win32_to_host((const XrKeyboardTrackingQueryFB32 *)UlongToPtr(params->queryInfo), &queryInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySystemTrackedKeyboardFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &queryInfo_host, &keyboard_host);
    convert_XrKeyboardTrackingDescriptionFB_host_to_win32(&keyboard_host, (XrKeyboardTrackingDescriptionFB32 *)UlongToPtr(params->keyboard));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQuerySystemTrackedKeyboardFB(void *args)
{
    struct xrQuerySystemTrackedKeyboardFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->queryInfo, params->keyboard);

    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySystemTrackedKeyboardFB(wine_session_from_handle(params->session)->host_session, params->queryInfo, params->keyboard);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRaycastANDROID(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 rayInfo;
        PTR32 results;
        XrResult result;
    } *params = args;
    XrRaycastInfoANDROID rayInfo_host;
    XrRaycastHitResultsANDROID results_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->rayInfo, params->results);

    init_conversion_context(ctx);
    convert_XrRaycastInfoANDROID_win32_to_host(ctx, (const XrRaycastInfoANDROID32 *)UlongToPtr(params->rayInfo), &rayInfo_host);
    convert_XrRaycastHitResultsANDROID_win32_to_host((XrRaycastHitResultsANDROID32 *)UlongToPtr(params->results), &results_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRaycastANDROID(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &rayInfo_host, &results_host);
    convert_XrRaycastHitResultsANDROID_host_to_win32(&results_host, (XrRaycastHitResultsANDROID32 *)UlongToPtr(params->results));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRaycastANDROID(void *args)
{
    struct xrRaycastANDROID_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->rayInfo, params->results);

    params->result = g_xr_host_instance_dispatch_table.p_xrRaycastANDROID(wine_session_from_handle(params->session)->host_session, params->rayInfo, params->results);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrReleaseSwapchainImage(void *args)
{
    struct
    {
        PTR32 swapchain;
        PTR32 releaseInfo;
        XrResult result;
    } *params = args;
    XrSwapchainImageReleaseInfo *releaseInfo_host = NULL;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x\n", params->swapchain, params->releaseInfo);

    init_conversion_context(ctx);
    if (params->releaseInfo)
    {
        releaseInfo_host = conversion_context_alloc(ctx, sizeof(*releaseInfo_host));
        convert_XrSwapchainImageReleaseInfo_win32_to_host((const XrSwapchainImageReleaseInfo32 *)UlongToPtr(params->releaseInfo), releaseInfo_host);
    }
    params->result = g_xr_host_instance_dispatch_table.p_xrReleaseSwapchainImage(wine_swapchain_from_handle((XrSwapchain)UlongToPtr(params->swapchain))->host_swapchain, releaseInfo_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrReleaseSwapchainImage(void *args)
{
    struct xrReleaseSwapchainImage_params *params = args;

    TRACE("%p, %p\n", params->swapchain, params->releaseInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrReleaseSwapchainImage(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->releaseInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRequestDisplayRefreshRateFB(void *args)
{
    struct
    {
        PTR32 session;
        float displayRefreshRate;
        XrResult result;
    } *params = args;

    TRACE("%#x, %f\n", params->session, params->displayRefreshRate);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestDisplayRefreshRateFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->displayRefreshRate);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestDisplayRefreshRateFB(void *args)
{
    struct xrRequestDisplayRefreshRateFB_params *params = args;

    TRACE("%p, %f\n", params->session, params->displayRefreshRate);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestDisplayRefreshRateFB(wine_session_from_handle(params->session)->host_session, params->displayRefreshRate);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRequestExitSession(void *args)
{
    struct
    {
        PTR32 session;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->session);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestExitSession(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestExitSession(void *args)
{
    struct xrRequestExitSession_params *params = args;

    TRACE("%p\n", params->session);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestExitSession(wine_session_from_handle(params->session)->host_session);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRequestMapLocalizationML(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 requestInfo;
        XrResult result;
    } *params = args;
    XrMapLocalizationRequestInfoML requestInfo_host;

    TRACE("%#x, %#x\n", params->session, params->requestInfo);

    convert_XrMapLocalizationRequestInfoML_win32_to_host((const XrMapLocalizationRequestInfoML32 *)UlongToPtr(params->requestInfo), &requestInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRequestMapLocalizationML(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &requestInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestMapLocalizationML(void *args)
{
    struct xrRequestMapLocalizationML_params *params = args;

    TRACE("%p, %p\n", params->session, params->requestInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestMapLocalizationML(wine_session_from_handle(params->session)->host_session, params->requestInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRequestSceneCaptureFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSceneCaptureRequestInfoFB info_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->requestId);

    convert_XrSceneCaptureRequestInfoFB_win32_to_host((const XrSceneCaptureRequestInfoFB32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRequestSceneCaptureFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, (XrAsyncRequestIdFB *)UlongToPtr(params->requestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestSceneCaptureFB(void *args)
{
    struct xrRequestSceneCaptureFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestSceneCaptureFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRequestWorldMeshAsyncML(void *args)
{
    struct
    {
        PTR32 detector;
        PTR32 getInfo;
        PTR32 buffer;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrWorldMeshGetInfoML getInfo_host;
    XrWorldMeshBufferML buffer_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x, %#x\n", params->detector, params->getInfo, params->buffer, params->future);

    init_conversion_context(ctx);
    convert_XrWorldMeshGetInfoML_win32_to_host(ctx, (const XrWorldMeshGetInfoML32 *)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrWorldMeshBufferML_win32_to_host((XrWorldMeshBufferML32 *)UlongToPtr(params->buffer), &buffer_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRequestWorldMeshAsyncML((XrWorldMeshDetectorML)UlongToPtr(params->detector), &getInfo_host, &buffer_host, (XrFutureEXT *)UlongToPtr(params->future));
    convert_XrWorldMeshGetInfoML_host_to_win32(&getInfo_host, (const XrWorldMeshGetInfoML32 *)UlongToPtr(params->getInfo));
    convert_XrWorldMeshBufferML_host_to_win32(&buffer_host, (XrWorldMeshBufferML32 *)UlongToPtr(params->buffer));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestWorldMeshAsyncML(void *args)
{
    struct xrRequestWorldMeshAsyncML_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->detector, params->getInfo, params->buffer, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestWorldMeshAsyncML(params->detector, params->getInfo, params->buffer, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRequestWorldMeshCompleteML(void *args)
{
    struct
    {
        PTR32 detector;
        PTR32 completionInfo;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrWorldMeshRequestCompletionInfoML completionInfo_host;
    XrWorldMeshRequestCompletionML completion_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %p, %#x\n", params->detector, params->completionInfo, params->future, params->completion);

    init_conversion_context(ctx);
    convert_XrWorldMeshRequestCompletionInfoML_win32_to_host((const XrWorldMeshRequestCompletionInfoML32 *)UlongToPtr(params->completionInfo), &completionInfo_host);
    convert_XrWorldMeshRequestCompletionML_win32_to_host(ctx, (XrWorldMeshRequestCompletionML32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRequestWorldMeshCompleteML((XrWorldMeshDetectorML)UlongToPtr(params->detector), &completionInfo_host, params->future, &completion_host);
    convert_XrWorldMeshRequestCompletionML_host_to_win32(&completion_host, (XrWorldMeshRequestCompletionML32 *)UlongToPtr(params->completion));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestWorldMeshCompleteML(void *args)
{
    struct xrRequestWorldMeshCompleteML_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->detector, params->completionInfo, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestWorldMeshCompleteML(params->detector, params->completionInfo, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRequestWorldMeshStateAsyncML(void *args)
{
    struct
    {
        PTR32 detector;
        PTR32 stateRequest;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrWorldMeshStateRequestInfoML stateRequest_host;

    TRACE("%#x, %#x, %#x\n", params->detector, params->stateRequest, params->future);

    convert_XrWorldMeshStateRequestInfoML_win32_to_host((const XrWorldMeshStateRequestInfoML32 *)UlongToPtr(params->stateRequest), &stateRequest_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRequestWorldMeshStateAsyncML((XrWorldMeshDetectorML)UlongToPtr(params->detector), &stateRequest_host, (XrFutureEXT *)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestWorldMeshStateAsyncML(void *args)
{
    struct xrRequestWorldMeshStateAsyncML_params *params = args;

    TRACE("%p, %p, %p\n", params->detector, params->stateRequest, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestWorldMeshStateAsyncML(params->detector, params->stateRequest, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRequestWorldMeshStateCompleteML(void *args)
{
    struct
    {
        PTR32 detector;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrWorldMeshStateRequestCompletionML completion_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %p, %#x\n", params->detector, params->future, params->completion);

    init_conversion_context(ctx);
    convert_XrWorldMeshStateRequestCompletionML_win32_to_host(ctx, (XrWorldMeshStateRequestCompletionML32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRequestWorldMeshStateCompleteML((XrWorldMeshDetectorML)UlongToPtr(params->detector), params->future, &completion_host);
    convert_XrWorldMeshStateRequestCompletionML_host_to_win32(&completion_host, (XrWorldMeshStateRequestCompletionML32 *)UlongToPtr(params->completion));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestWorldMeshStateCompleteML(void *args)
{
    struct xrRequestWorldMeshStateCompleteML_params *params = args;

    TRACE("%p, %p, %p\n", params->detector, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestWorldMeshStateCompleteML(params->detector, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrResetBodyTrackingCalibrationMETA(void *args)
{
    struct
    {
        PTR32 bodyTracker;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->bodyTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrResetBodyTrackingCalibrationMETA((XrBodyTrackerFB)UlongToPtr(params->bodyTracker));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrResetBodyTrackingCalibrationMETA(void *args)
{
    struct xrResetBodyTrackingCalibrationMETA_params *params = args;

    TRACE("%p\n", params->bodyTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrResetBodyTrackingCalibrationMETA(params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrResultToString(void *args)
{
    struct
    {
        PTR32 instance;
        XrResult value;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x, %#x\n", params->instance, params->value, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrResultToString(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->value, (char *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrResultToString(void *args)
{
    struct xrResultToString_params *params = args;

    TRACE("%p, %#x, %p\n", params->instance, params->value, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrResultToString(wine_instance_from_handle(params->instance)->host_instance, params->value, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrResumeSimultaneousHandsAndControllersTrackingMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 resumeInfo;
        XrResult result;
    } *params = args;
    XrSimultaneousHandsAndControllersTrackingResumeInfoMETA resumeInfo_host;

    TRACE("%#x, %#x\n", params->session, params->resumeInfo);

    convert_XrSimultaneousHandsAndControllersTrackingResumeInfoMETA_win32_to_host((const XrSimultaneousHandsAndControllersTrackingResumeInfoMETA32 *)UlongToPtr(params->resumeInfo), &resumeInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrResumeSimultaneousHandsAndControllersTrackingMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &resumeInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrResumeSimultaneousHandsAndControllersTrackingMETA(void *args)
{
    struct xrResumeSimultaneousHandsAndControllersTrackingMETA_params *params = args;

    TRACE("%p, %p\n", params->session, params->resumeInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrResumeSimultaneousHandsAndControllersTrackingMETA(wine_session_from_handle(params->session)->host_session, params->resumeInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRetrieveSpaceDiscoveryResultsMETA(void *args)
{
    struct
    {
        PTR32 session;
        XrAsyncRequestIdFB requestId;
        PTR32 results;
        XrResult result;
    } *params = args;
    XrSpaceDiscoveryResultsMETA results_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, 0x%s, %#x\n", params->session, wine_dbgstr_longlong(params->requestId), params->results);

    init_conversion_context(ctx);
    convert_XrSpaceDiscoveryResultsMETA_win32_to_host(ctx, (XrSpaceDiscoveryResultsMETA32 *)UlongToPtr(params->results), &results_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRetrieveSpaceDiscoveryResultsMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->requestId, &results_host);
    convert_XrSpaceDiscoveryResultsMETA_host_to_win32(&results_host, (XrSpaceDiscoveryResultsMETA32 *)UlongToPtr(params->results));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRetrieveSpaceDiscoveryResultsMETA(void *args)
{
    struct xrRetrieveSpaceDiscoveryResultsMETA_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->requestId), params->results);

    params->result = g_xr_host_instance_dispatch_table.p_xrRetrieveSpaceDiscoveryResultsMETA(wine_session_from_handle(params->session)->host_session, params->requestId, params->results);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRetrieveSpaceQueryResultsFB(void *args)
{
    struct
    {
        PTR32 session;
        XrAsyncRequestIdFB requestId;
        PTR32 results;
        XrResult result;
    } *params = args;
    XrSpaceQueryResultsFB results_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, 0x%s, %#x\n", params->session, wine_dbgstr_longlong(params->requestId), params->results);

    init_conversion_context(ctx);
    convert_XrSpaceQueryResultsFB_win32_to_host(ctx, (XrSpaceQueryResultsFB32 *)UlongToPtr(params->results), &results_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRetrieveSpaceQueryResultsFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->requestId, &results_host);
    convert_XrSpaceQueryResultsFB_host_to_win32(&results_host, (XrSpaceQueryResultsFB32 *)UlongToPtr(params->results));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRetrieveSpaceQueryResultsFB(void *args)
{
    struct xrRetrieveSpaceQueryResultsFB_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->session, wine_dbgstr_longlong(params->requestId), params->results);

    params->result = g_xr_host_instance_dispatch_table.p_xrRetrieveSpaceQueryResultsFB(wine_session_from_handle(params->session)->host_session, params->requestId, params->results);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSaveSpaceFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpaceSaveInfoFB info_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->requestId);

    convert_XrSpaceSaveInfoFB_win32_to_host((const XrSpaceSaveInfoFB32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSaveSpaceFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, (XrAsyncRequestIdFB *)UlongToPtr(params->requestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSaveSpaceFB(void *args)
{
    struct xrSaveSpaceFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrSaveSpaceFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSaveSpaceListFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpaceListSaveInfoFB info_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->requestId);

    init_conversion_context(ctx);
    convert_XrSpaceListSaveInfoFB_win32_to_host(ctx, (const XrSpaceListSaveInfoFB32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSaveSpaceListFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, (XrAsyncRequestIdFB *)UlongToPtr(params->requestId));
    convert_XrSpaceListSaveInfoFB_host_to_win32(&info_host, (const XrSpaceListSaveInfoFB32 *)UlongToPtr(params->info));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSaveSpaceListFB(void *args)
{
    struct xrSaveSpaceListFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrSaveSpaceListFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSaveSpacesMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpacesSaveInfoMETA info_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->requestId);

    init_conversion_context(ctx);
    convert_XrSpacesSaveInfoMETA_win32_to_host(ctx, (const XrSpacesSaveInfoMETA32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSaveSpacesMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, (XrAsyncRequestIdFB *)UlongToPtr(params->requestId));
    convert_XrSpacesSaveInfoMETA_host_to_win32(&info_host, (const XrSpacesSaveInfoMETA32 *)UlongToPtr(params->info));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSaveSpacesMETA(void *args)
{
    struct xrSaveSpacesMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrSaveSpacesMETA(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSendVirtualKeyboardInputMETA(void *args)
{
    struct
    {
        PTR32 keyboard;
        PTR32 info;
        PTR32 interactorRootPose;
        XrResult result;
    } *params = args;
    XrVirtualKeyboardInputInfoMETA info_host;

    TRACE("%#x, %#x, %#x\n", params->keyboard, params->info, params->interactorRootPose);

    convert_XrVirtualKeyboardInputInfoMETA_win32_to_host((const XrVirtualKeyboardInputInfoMETA32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSendVirtualKeyboardInputMETA((XrVirtualKeyboardMETA)UlongToPtr(params->keyboard), &info_host, (XrPosef *)UlongToPtr(params->interactorRootPose));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSendVirtualKeyboardInputMETA(void *args)
{
    struct xrSendVirtualKeyboardInputMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->keyboard, params->info, params->interactorRootPose);

    params->result = g_xr_host_instance_dispatch_table.p_xrSendVirtualKeyboardInputMETA(params->keyboard, params->info, params->interactorRootPose);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetColorSpaceFB(void *args)
{
    struct
    {
        PTR32 session;
        XrColorSpaceFB colorSpace;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->session, params->colorSpace);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetColorSpaceFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->colorSpace);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetColorSpaceFB(void *args)
{
    struct xrSetColorSpaceFB_params *params = args;

    TRACE("%p, %#x\n", params->session, params->colorSpace);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetColorSpaceFB(wine_session_from_handle(params->session)->host_session, params->colorSpace);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetDigitalLensControlALMALENCE(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 digitalLensControl;
        XrResult result;
    } *params = args;
    XrDigitalLensControlALMALENCE digitalLensControl_host;

    TRACE("%#x, %#x\n", params->session, params->digitalLensControl);

    convert_XrDigitalLensControlALMALENCE_win32_to_host((const XrDigitalLensControlALMALENCE32 *)UlongToPtr(params->digitalLensControl), &digitalLensControl_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSetDigitalLensControlALMALENCE(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &digitalLensControl_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetDigitalLensControlALMALENCE(void *args)
{
    struct xrSetDigitalLensControlALMALENCE_params *params = args;

    TRACE("%p, %p\n", params->session, params->digitalLensControl);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetDigitalLensControlALMALENCE(wine_session_from_handle(params->session)->host_session, params->digitalLensControl);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetEnvironmentDepthEstimationVARJO(void *args)
{
    struct
    {
        PTR32 session;
        XrBool32 enabled;
        XrResult result;
    } *params = args;

    TRACE("%#x, %u\n", params->session, params->enabled);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetEnvironmentDepthEstimationVARJO(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->enabled);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetEnvironmentDepthEstimationVARJO(void *args)
{
    struct xrSetEnvironmentDepthEstimationVARJO_params *params = args;

    TRACE("%p, %u\n", params->session, params->enabled);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetEnvironmentDepthEstimationVARJO(wine_session_from_handle(params->session)->host_session, params->enabled);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetEnvironmentDepthHandRemovalMETA(void *args)
{
    struct
    {
        PTR32 environmentDepthProvider;
        PTR32 setInfo;
        XrResult result;
    } *params = args;
    XrEnvironmentDepthHandRemovalSetInfoMETA setInfo_host;

    TRACE("%#x, %#x\n", params->environmentDepthProvider, params->setInfo);

    convert_XrEnvironmentDepthHandRemovalSetInfoMETA_win32_to_host((const XrEnvironmentDepthHandRemovalSetInfoMETA32 *)UlongToPtr(params->setInfo), &setInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSetEnvironmentDepthHandRemovalMETA((XrEnvironmentDepthProviderMETA)UlongToPtr(params->environmentDepthProvider), &setInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetEnvironmentDepthHandRemovalMETA(void *args)
{
    struct xrSetEnvironmentDepthHandRemovalMETA_params *params = args;

    TRACE("%p, %p\n", params->environmentDepthProvider, params->setInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetEnvironmentDepthHandRemovalMETA(params->environmentDepthProvider, params->setInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetInputDeviceActiveEXT(void *args)
{
    struct
    {
        PTR32 session;
        XrPath interactionProfile;
        XrPath topLevelPath;
        XrBool32 isActive;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, 0x%s, %u\n", params->session, wine_dbgstr_longlong(params->interactionProfile), wine_dbgstr_longlong(params->topLevelPath), params->isActive);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceActiveEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->interactionProfile, params->topLevelPath, params->isActive);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetInputDeviceActiveEXT(void *args)
{
    struct xrSetInputDeviceActiveEXT_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u\n", params->session, wine_dbgstr_longlong(params->interactionProfile), wine_dbgstr_longlong(params->topLevelPath), params->isActive);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceActiveEXT(wine_session_from_handle(params->session)->host_session, params->interactionProfile, params->topLevelPath, params->isActive);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetInputDeviceLocationEXT(void *args)
{
    struct
    {
        PTR32 session;
        XrPath topLevelPath;
        XrPath inputSourcePath;
        PTR32 space;
        XrPosef pose;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, 0x%s, %#x, {{%f, %f, %f, %f}, {%f %f %f}}\n", params->session, wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->space, params->pose.orientation.x, params->pose.orientation.y, params->pose.orientation.z, params->pose.orientation.w, params->pose.position.x, params->pose.position.y, params->pose.position.z);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceLocationEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->topLevelPath, params->inputSourcePath, (XrSpace)UlongToPtr(params->space), params->pose);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetInputDeviceLocationEXT(void *args)
{
    struct xrSetInputDeviceLocationEXT_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %p, {{%f, %f, %f, %f}, {%f %f %f}}\n", params->session, wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->space, params->pose.orientation.x, params->pose.orientation.y, params->pose.orientation.z, params->pose.orientation.w, params->pose.position.x, params->pose.position.y, params->pose.position.z);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceLocationEXT(wine_session_from_handle(params->session)->host_session, params->topLevelPath, params->inputSourcePath, params->space, params->pose);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetInputDeviceStateBoolEXT(void *args)
{
    struct
    {
        PTR32 session;
        XrPath topLevelPath;
        XrPath inputSourcePath;
        XrBool32 state;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, 0x%s, %u\n", params->session, wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceStateBoolEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->topLevelPath, params->inputSourcePath, params->state);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetInputDeviceStateBoolEXT(void *args)
{
    struct xrSetInputDeviceStateBoolEXT_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u\n", params->session, wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceStateBoolEXT(wine_session_from_handle(params->session)->host_session, params->topLevelPath, params->inputSourcePath, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetInputDeviceStateFloatEXT(void *args)
{
    struct
    {
        PTR32 session;
        XrPath topLevelPath;
        XrPath inputSourcePath;
        float state;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, 0x%s, %f\n", params->session, wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceStateFloatEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->topLevelPath, params->inputSourcePath, params->state);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetInputDeviceStateFloatEXT(void *args)
{
    struct xrSetInputDeviceStateFloatEXT_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %f\n", params->session, wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceStateFloatEXT(wine_session_from_handle(params->session)->host_session, params->topLevelPath, params->inputSourcePath, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetInputDeviceStateVector2fEXT(void *args)
{
    struct
    {
        PTR32 session;
        XrPath topLevelPath;
        XrPath inputSourcePath;
        XrVector2f state;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, 0x%s, %f, %f\n", params->session, wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->state.x, params->state.y);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceStateVector2fEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->topLevelPath, params->inputSourcePath, params->state);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetInputDeviceStateVector2fEXT(void *args)
{
    struct xrSetInputDeviceStateVector2fEXT_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %f, %f\n", params->session, wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->state.x, params->state.y);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceStateVector2fEXT(wine_session_from_handle(params->session)->host_session, params->topLevelPath, params->inputSourcePath, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetMarkerTrackingPredictionVARJO(void *args)
{
    struct
    {
        PTR32 session;
        uint64_t DECLSPEC_ALIGN(8) markerId;
        XrBool32 enable;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, %u\n", params->session, wine_dbgstr_longlong(params->markerId), params->enable);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetMarkerTrackingPredictionVARJO(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->markerId, params->enable);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetMarkerTrackingPredictionVARJO(void *args)
{
    struct xrSetMarkerTrackingPredictionVARJO_params *params = args;

    TRACE("%p, 0x%s, %u\n", params->session, wine_dbgstr_longlong(params->markerId), params->enable);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetMarkerTrackingPredictionVARJO(wine_session_from_handle(params->session)->host_session, params->markerId, params->enable);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetMarkerTrackingTimeoutVARJO(void *args)
{
    struct
    {
        PTR32 session;
        uint64_t DECLSPEC_ALIGN(8) markerId;
        XrDuration timeout;
        XrResult result;
    } *params = args;

    TRACE("%#x, 0x%s, 0x%s\n", params->session, wine_dbgstr_longlong(params->markerId), wine_dbgstr_longlong(params->timeout));

    params->result = g_xr_host_instance_dispatch_table.p_xrSetMarkerTrackingTimeoutVARJO(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->markerId, params->timeout);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetMarkerTrackingTimeoutVARJO(void *args)
{
    struct xrSetMarkerTrackingTimeoutVARJO_params *params = args;

    TRACE("%p, 0x%s, 0x%s\n", params->session, wine_dbgstr_longlong(params->markerId), wine_dbgstr_longlong(params->timeout));

    params->result = g_xr_host_instance_dispatch_table.p_xrSetMarkerTrackingTimeoutVARJO(wine_session_from_handle(params->session)->host_session, params->markerId, params->timeout);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetMarkerTrackingVARJO(void *args)
{
    struct
    {
        PTR32 session;
        XrBool32 enabled;
        XrResult result;
    } *params = args;

    TRACE("%#x, %u\n", params->session, params->enabled);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetMarkerTrackingVARJO(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->enabled);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetMarkerTrackingVARJO(void *args)
{
    struct xrSetMarkerTrackingVARJO_params *params = args;

    TRACE("%p, %u\n", params->session, params->enabled);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetMarkerTrackingVARJO(wine_session_from_handle(params->session)->host_session, params->enabled);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetPerformanceMetricsStateMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrPerformanceMetricsStateMETA state_host;

    TRACE("%#x, %#x\n", params->session, params->state);

    convert_XrPerformanceMetricsStateMETA_win32_to_host((const XrPerformanceMetricsStateMETA32 *)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSetPerformanceMetricsStateMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &state_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetPerformanceMetricsStateMETA(void *args)
{
    struct xrSetPerformanceMetricsStateMETA_params *params = args;

    TRACE("%p, %p\n", params->session, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetPerformanceMetricsStateMETA(wine_session_from_handle(params->session)->host_session, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetSpaceComponentStatusFB(void *args)
{
    struct
    {
        PTR32 space;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpaceComponentStatusSetInfoFB info_host;

    TRACE("%#x, %#x, %#x\n", params->space, params->info, params->requestId);

    convert_XrSpaceComponentStatusSetInfoFB_win32_to_host((const XrSpaceComponentStatusSetInfoFB32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSetSpaceComponentStatusFB((XrSpace)UlongToPtr(params->space), &info_host, (XrAsyncRequestIdFB *)UlongToPtr(params->requestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetSpaceComponentStatusFB(void *args)
{
    struct xrSetSpaceComponentStatusFB_params *params = args;

    TRACE("%p, %p, %p\n", params->space, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetSpaceComponentStatusFB(params->space, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetSystemNotificationsML(void *args)
{
    struct
    {
        PTR32 instance;
        PTR32 info;
        XrResult result;
    } *params = args;
    XrSystemNotificationsSetInfoML info_host;

    TRACE("%#x, %#x\n", params->instance, params->info);

    convert_XrSystemNotificationsSetInfoML_win32_to_host((const XrSystemNotificationsSetInfoML32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSetSystemNotificationsML(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, &info_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetSystemNotificationsML(void *args)
{
    struct xrSetSystemNotificationsML_params *params = args;

    TRACE("%p, %p\n", params->instance, params->info);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetSystemNotificationsML(wine_instance_from_handle(params->instance)->host_instance, params->info);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetTrackingOptimizationSettingsHintQCOM(void *args)
{
    struct
    {
        PTR32 session;
        XrTrackingOptimizationSettingsDomainQCOM domain;
        XrTrackingOptimizationSettingsHintQCOM hint;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x, %#x\n", params->session, params->domain, params->hint);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetTrackingOptimizationSettingsHintQCOM(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->domain, params->hint);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetTrackingOptimizationSettingsHintQCOM(void *args)
{
    struct xrSetTrackingOptimizationSettingsHintQCOM_params *params = args;

    TRACE("%p, %#x, %#x\n", params->session, params->domain, params->hint);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetTrackingOptimizationSettingsHintQCOM(wine_session_from_handle(params->session)->host_session, params->domain, params->hint);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetViewOffsetVARJO(void *args)
{
    struct
    {
        PTR32 session;
        float offset;
        XrResult result;
    } *params = args;

    TRACE("%#x, %f\n", params->session, params->offset);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetViewOffsetVARJO(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->offset);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetViewOffsetVARJO(void *args)
{
    struct xrSetViewOffsetVARJO_params *params = args;

    TRACE("%p, %f\n", params->session, params->offset);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetViewOffsetVARJO(wine_session_from_handle(params->session)->host_session, params->offset);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetVirtualKeyboardModelVisibilityMETA(void *args)
{
    struct
    {
        PTR32 keyboard;
        PTR32 modelVisibility;
        XrResult result;
    } *params = args;
    XrVirtualKeyboardModelVisibilitySetInfoMETA modelVisibility_host;

    TRACE("%#x, %#x\n", params->keyboard, params->modelVisibility);

    convert_XrVirtualKeyboardModelVisibilitySetInfoMETA_win32_to_host((const XrVirtualKeyboardModelVisibilitySetInfoMETA32 *)UlongToPtr(params->modelVisibility), &modelVisibility_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSetVirtualKeyboardModelVisibilityMETA((XrVirtualKeyboardMETA)UlongToPtr(params->keyboard), &modelVisibility_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetVirtualKeyboardModelVisibilityMETA(void *args)
{
    struct xrSetVirtualKeyboardModelVisibilityMETA_params *params = args;

    TRACE("%p, %p\n", params->keyboard, params->modelVisibility);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetVirtualKeyboardModelVisibilityMETA(params->keyboard, params->modelVisibility);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrShareSpacesFB(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpaceShareInfoFB info_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->requestId);

    init_conversion_context(ctx);
    convert_XrSpaceShareInfoFB_win32_to_host(ctx, (const XrSpaceShareInfoFB32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpacesFB(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, (XrAsyncRequestIdFB *)UlongToPtr(params->requestId));
    convert_XrSpaceShareInfoFB_host_to_win32(&info_host, (const XrSpaceShareInfoFB32 *)UlongToPtr(params->info));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrShareSpacesFB(void *args)
{
    struct xrShareSpacesFB_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpacesFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrShareSpacesMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrShareSpacesInfoMETA info_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->requestId);

    init_conversion_context(ctx);
    convert_XrShareSpacesInfoMETA_win32_to_host(ctx, (const XrShareSpacesInfoMETA32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpacesMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, (XrAsyncRequestIdFB *)UlongToPtr(params->requestId));
    convert_XrShareSpacesInfoMETA_host_to_win32(&info_host, (const XrShareSpacesInfoMETA32 *)UlongToPtr(params->info));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrShareSpacesMETA(void *args)
{
    struct xrShareSpacesMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpacesMETA(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrShareSpatialAnchorAsyncBD(void *args)
{
    struct
    {
        PTR32 provider;
        PTR32 info;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorShareInfoBD info_host;

    TRACE("%#x, %#x, %#x\n", params->provider, params->info, params->future);

    convert_XrSpatialAnchorShareInfoBD_win32_to_host((const XrSpatialAnchorShareInfoBD32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpatialAnchorAsyncBD((XrSenseDataProviderBD)UlongToPtr(params->provider), &info_host, (XrFutureEXT *)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrShareSpatialAnchorAsyncBD(void *args)
{
    struct xrShareSpatialAnchorAsyncBD_params *params = args;

    TRACE("%p, %p, %p\n", params->provider, params->info, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpatialAnchorAsyncBD(params->provider, params->info, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrShareSpatialAnchorCompleteBD(void *args)
{
    struct
    {
        PTR32 provider;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrFutureCompletionEXT completion_host;

    TRACE("%#x, %p, %#x\n", params->provider, params->future, params->completion);

    convert_XrFutureCompletionEXT_win32_to_host((XrFutureCompletionEXT32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpatialAnchorCompleteBD((XrSenseDataProviderBD)UlongToPtr(params->provider), params->future, &completion_host);
    convert_XrFutureCompletionEXT_host_to_win32(&completion_host, (XrFutureCompletionEXT32 *)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrShareSpatialAnchorCompleteBD(void *args)
{
    struct xrShareSpatialAnchorCompleteBD_params *params = args;

    TRACE("%p, %p, %p\n", params->provider, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpatialAnchorCompleteBD(params->provider, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSnapshotMarkerDetectorML(void *args)
{
    struct
    {
        PTR32 markerDetector;
        PTR32 snapshotInfo;
        XrResult result;
    } *params = args;
    XrMarkerDetectorSnapshotInfoML snapshotInfo_host;

    TRACE("%#x, %#x\n", params->markerDetector, params->snapshotInfo);

    convert_XrMarkerDetectorSnapshotInfoML_win32_to_host((XrMarkerDetectorSnapshotInfoML32 *)UlongToPtr(params->snapshotInfo), &snapshotInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSnapshotMarkerDetectorML((XrMarkerDetectorML)UlongToPtr(params->markerDetector), &snapshotInfo_host);
    convert_XrMarkerDetectorSnapshotInfoML_host_to_win32(&snapshotInfo_host, (XrMarkerDetectorSnapshotInfoML32 *)UlongToPtr(params->snapshotInfo));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSnapshotMarkerDetectorML(void *args)
{
    struct xrSnapshotMarkerDetectorML_params *params = args;

    TRACE("%p, %p\n", params->markerDetector, params->snapshotInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrSnapshotMarkerDetectorML(params->markerDetector, params->snapshotInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStartColocationAdvertisementMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 advertisementRequestId;
        XrResult result;
    } *params = args;
    XrColocationAdvertisementStartInfoMETA info_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->advertisementRequestId);

    convert_XrColocationAdvertisementStartInfoMETA_win32_to_host((const XrColocationAdvertisementStartInfoMETA32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrStartColocationAdvertisementMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, (XrAsyncRequestIdFB *)UlongToPtr(params->advertisementRequestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStartColocationAdvertisementMETA(void *args)
{
    struct xrStartColocationAdvertisementMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->advertisementRequestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrStartColocationAdvertisementMETA(wine_session_from_handle(params->session)->host_session, params->info, params->advertisementRequestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStartColocationDiscoveryMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 discoveryRequestId;
        XrResult result;
    } *params = args;
    XrColocationDiscoveryStartInfoMETA info_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->discoveryRequestId);

    convert_XrColocationDiscoveryStartInfoMETA_win32_to_host((const XrColocationDiscoveryStartInfoMETA32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrStartColocationDiscoveryMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, (XrAsyncRequestIdFB *)UlongToPtr(params->discoveryRequestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStartColocationDiscoveryMETA(void *args)
{
    struct xrStartColocationDiscoveryMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->discoveryRequestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrStartColocationDiscoveryMETA(wine_session_from_handle(params->session)->host_session, params->info, params->discoveryRequestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStartEnvironmentDepthProviderMETA(void *args)
{
    struct
    {
        PTR32 environmentDepthProvider;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->environmentDepthProvider);

    params->result = g_xr_host_instance_dispatch_table.p_xrStartEnvironmentDepthProviderMETA((XrEnvironmentDepthProviderMETA)UlongToPtr(params->environmentDepthProvider));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStartEnvironmentDepthProviderMETA(void *args)
{
    struct xrStartEnvironmentDepthProviderMETA_params *params = args;

    TRACE("%p\n", params->environmentDepthProvider);

    params->result = g_xr_host_instance_dispatch_table.p_xrStartEnvironmentDepthProviderMETA(params->environmentDepthProvider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStartSenseDataProviderAsyncBD(void *args)
{
    struct
    {
        PTR32 provider;
        PTR32 startInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSenseDataProviderStartInfoBD startInfo_host;

    TRACE("%#x, %#x, %#x\n", params->provider, params->startInfo, params->future);

    convert_XrSenseDataProviderStartInfoBD_win32_to_host((const XrSenseDataProviderStartInfoBD32 *)UlongToPtr(params->startInfo), &startInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrStartSenseDataProviderAsyncBD((XrSenseDataProviderBD)UlongToPtr(params->provider), &startInfo_host, (XrFutureEXT *)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStartSenseDataProviderAsyncBD(void *args)
{
    struct xrStartSenseDataProviderAsyncBD_params *params = args;

    TRACE("%p, %p, %p\n", params->provider, params->startInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrStartSenseDataProviderAsyncBD(params->provider, params->startInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStartSenseDataProviderCompleteBD(void *args)
{
    struct
    {
        PTR32 session;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrFutureCompletionEXT completion_host;

    TRACE("%#x, %p, %#x\n", params->session, params->future, params->completion);

    convert_XrFutureCompletionEXT_win32_to_host((XrFutureCompletionEXT32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrStartSenseDataProviderCompleteBD(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->future, &completion_host);
    convert_XrFutureCompletionEXT_host_to_win32(&completion_host, (XrFutureCompletionEXT32 *)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStartSenseDataProviderCompleteBD(void *args)
{
    struct xrStartSenseDataProviderCompleteBD_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrStartSenseDataProviderCompleteBD(wine_session_from_handle(params->session)->host_session, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStopColocationAdvertisementMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrColocationAdvertisementStopInfoMETA info_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->requestId);

    convert_XrColocationAdvertisementStopInfoMETA_win32_to_host((const XrColocationAdvertisementStopInfoMETA32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrStopColocationAdvertisementMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, (XrAsyncRequestIdFB *)UlongToPtr(params->requestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStopColocationAdvertisementMETA(void *args)
{
    struct xrStopColocationAdvertisementMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrStopColocationAdvertisementMETA(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStopColocationDiscoveryMETA(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrColocationDiscoveryStopInfoMETA info_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->info, params->requestId);

    convert_XrColocationDiscoveryStopInfoMETA_win32_to_host((const XrColocationDiscoveryStopInfoMETA32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrStopColocationDiscoveryMETA(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &info_host, (XrAsyncRequestIdFB *)UlongToPtr(params->requestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStopColocationDiscoveryMETA(void *args)
{
    struct xrStopColocationDiscoveryMETA_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrStopColocationDiscoveryMETA(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStopEnvironmentDepthProviderMETA(void *args)
{
    struct
    {
        PTR32 environmentDepthProvider;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->environmentDepthProvider);

    params->result = g_xr_host_instance_dispatch_table.p_xrStopEnvironmentDepthProviderMETA((XrEnvironmentDepthProviderMETA)UlongToPtr(params->environmentDepthProvider));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStopEnvironmentDepthProviderMETA(void *args)
{
    struct xrStopEnvironmentDepthProviderMETA_params *params = args;

    TRACE("%p\n", params->environmentDepthProvider);

    params->result = g_xr_host_instance_dispatch_table.p_xrStopEnvironmentDepthProviderMETA(params->environmentDepthProvider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStopHapticFeedback(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 hapticActionInfo;
        XrResult result;
    } *params = args;
    XrHapticActionInfo hapticActionInfo_host;

    TRACE("%#x, %#x\n", params->session, params->hapticActionInfo);

    convert_XrHapticActionInfo_win32_to_host((const XrHapticActionInfo32 *)UlongToPtr(params->hapticActionInfo), &hapticActionInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrStopHapticFeedback(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &hapticActionInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStopHapticFeedback(void *args)
{
    struct xrStopHapticFeedback_params *params = args;

    TRACE("%p, %p\n", params->session, params->hapticActionInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrStopHapticFeedback(wine_session_from_handle(params->session)->host_session, params->hapticActionInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStopSenseDataProviderBD(void *args)
{
    struct
    {
        PTR32 provider;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->provider);

    params->result = g_xr_host_instance_dispatch_table.p_xrStopSenseDataProviderBD((XrSenseDataProviderBD)UlongToPtr(params->provider));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStopSenseDataProviderBD(void *args)
{
    struct xrStopSenseDataProviderBD_params *params = args;

    TRACE("%p\n", params->provider);

    params->result = g_xr_host_instance_dispatch_table.p_xrStopSenseDataProviderBD(params->provider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStringToPath(void *args)
{
    struct
    {
        PTR32 instance;
        PTR32 pathString;
        PTR32 path;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x, %#x\n", params->instance, params->pathString, params->path);

    params->result = g_xr_host_instance_dispatch_table.p_xrStringToPath(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, (const char *)UlongToPtr(params->pathString), (XrPath *)UlongToPtr(params->path));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStringToPath(void *args)
{
    struct xrStringToPath_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->pathString, params->path);

    params->result = g_xr_host_instance_dispatch_table.p_xrStringToPath(wine_instance_from_handle(params->instance)->host_instance, params->pathString, params->path);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStructureTypeToString(void *args)
{
    struct
    {
        PTR32 instance;
        XrStructureType value;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x, %#x\n", params->instance, params->value, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrStructureTypeToString(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->value, (char *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStructureTypeToString(void *args)
{
    struct xrStructureTypeToString_params *params = args;

    TRACE("%p, %#x, %p\n", params->instance, params->value, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrStructureTypeToString(wine_instance_from_handle(params->instance)->host_instance, params->value, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStructureTypeToString2KHR(void *args)
{
    struct
    {
        PTR32 instance;
        XrStructureType value;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x, %#x\n", params->instance, params->value, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrStructureTypeToString2KHR(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, params->value, (char *)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStructureTypeToString2KHR(void *args)
{
    struct xrStructureTypeToString2KHR_params *params = args;

    TRACE("%p, %#x, %p\n", params->instance, params->value, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrStructureTypeToString2KHR(wine_instance_from_handle(params->instance)->host_instance, params->value, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSuggestBodyTrackingCalibrationOverrideMETA(void *args)
{
    struct
    {
        PTR32 bodyTracker;
        PTR32 calibrationInfo;
        XrResult result;
    } *params = args;
    XrBodyTrackingCalibrationInfoMETA calibrationInfo_host;

    TRACE("%#x, %#x\n", params->bodyTracker, params->calibrationInfo);

    convert_XrBodyTrackingCalibrationInfoMETA_win32_to_host((const XrBodyTrackingCalibrationInfoMETA32 *)UlongToPtr(params->calibrationInfo), &calibrationInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSuggestBodyTrackingCalibrationOverrideMETA((XrBodyTrackerFB)UlongToPtr(params->bodyTracker), &calibrationInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSuggestBodyTrackingCalibrationOverrideMETA(void *args)
{
    struct xrSuggestBodyTrackingCalibrationOverrideMETA_params *params = args;

    TRACE("%p, %p\n", params->bodyTracker, params->calibrationInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrSuggestBodyTrackingCalibrationOverrideMETA(params->bodyTracker, params->calibrationInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSuggestInteractionProfileBindings(void *args)
{
    struct
    {
        PTR32 instance;
        PTR32 suggestedBindings;
        XrResult result;
    } *params = args;
    XrInteractionProfileSuggestedBinding suggestedBindings_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x\n", params->instance, params->suggestedBindings);

    init_conversion_context(ctx);
    convert_XrInteractionProfileSuggestedBinding_win32_to_host(ctx, (const XrInteractionProfileSuggestedBinding32 *)UlongToPtr(params->suggestedBindings), &suggestedBindings_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSuggestInteractionProfileBindings(wine_instance_from_handle((XrInstance)UlongToPtr(params->instance))->host_instance, &suggestedBindings_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSuggestInteractionProfileBindings(void *args)
{
    struct xrSuggestInteractionProfileBindings_params *params = args;

    TRACE("%p, %p\n", params->instance, params->suggestedBindings);

    params->result = g_xr_host_instance_dispatch_table.p_xrSuggestInteractionProfileBindings(wine_instance_from_handle(params->instance)->host_instance, params->suggestedBindings);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSuggestVirtualKeyboardLocationMETA(void *args)
{
    struct
    {
        PTR32 keyboard;
        PTR32 locationInfo;
        XrResult result;
    } *params = args;
    XrVirtualKeyboardLocationInfoMETA locationInfo_host;

    TRACE("%#x, %#x\n", params->keyboard, params->locationInfo);

    convert_XrVirtualKeyboardLocationInfoMETA_win32_to_host((const XrVirtualKeyboardLocationInfoMETA32 *)UlongToPtr(params->locationInfo), &locationInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSuggestVirtualKeyboardLocationMETA((XrVirtualKeyboardMETA)UlongToPtr(params->keyboard), &locationInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSuggestVirtualKeyboardLocationMETA(void *args)
{
    struct xrSuggestVirtualKeyboardLocationMETA_params *params = args;

    TRACE("%p, %p\n", params->keyboard, params->locationInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrSuggestVirtualKeyboardLocationMETA(params->keyboard, params->locationInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSyncActions(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 syncInfo;
        XrResult result;
    } *params = args;
    XrActionsSyncInfo syncInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x\n", params->session, params->syncInfo);

    init_conversion_context(ctx);
    convert_XrActionsSyncInfo_win32_to_host(ctx, (const XrActionsSyncInfo32 *)UlongToPtr(params->syncInfo), &syncInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSyncActions(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &syncInfo_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSyncActions(void *args)
{
    struct xrSyncActions_params *params = args;

    TRACE("%p, %p\n", params->session, params->syncInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrSyncActions(wine_session_from_handle(params->session)->host_session, params->syncInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrThermalGetTemperatureTrendEXT(void *args)
{
    struct
    {
        PTR32 session;
        XrPerfSettingsDomainEXT domain;
        PTR32 notificationLevel;
        PTR32 tempHeadroom;
        PTR32 tempSlope;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x, %#x, %#x, %#x\n", params->session, params->domain, params->notificationLevel, params->tempHeadroom, params->tempSlope);

    params->result = g_xr_host_instance_dispatch_table.p_xrThermalGetTemperatureTrendEXT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, params->domain, (XrPerfSettingsNotificationLevelEXT *)UlongToPtr(params->notificationLevel), (float *)UlongToPtr(params->tempHeadroom), (float *)UlongToPtr(params->tempSlope));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrThermalGetTemperatureTrendEXT(void *args)
{
    struct xrThermalGetTemperatureTrendEXT_params *params = args;

    TRACE("%p, %#x, %p, %p, %p\n", params->session, params->domain, params->notificationLevel, params->tempHeadroom, params->tempSlope);

    params->result = g_xr_host_instance_dispatch_table.p_xrThermalGetTemperatureTrendEXT(wine_session_from_handle(params->session)->host_session, params->domain, params->notificationLevel, params->tempHeadroom, params->tempSlope);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrTriangleMeshBeginUpdateFB(void *args)
{
    struct
    {
        PTR32 mesh;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->mesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshBeginUpdateFB((XrTriangleMeshFB)UlongToPtr(params->mesh));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshBeginUpdateFB(void *args)
{
    struct xrTriangleMeshBeginUpdateFB_params *params = args;

    TRACE("%p\n", params->mesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshBeginUpdateFB(params->mesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrTriangleMeshBeginVertexBufferUpdateFB(void *args)
{
    struct
    {
        PTR32 mesh;
        PTR32 outVertexCount;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->mesh, params->outVertexCount);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshBeginVertexBufferUpdateFB((XrTriangleMeshFB)UlongToPtr(params->mesh), (uint32_t *)UlongToPtr(params->outVertexCount));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshBeginVertexBufferUpdateFB(void *args)
{
    struct xrTriangleMeshBeginVertexBufferUpdateFB_params *params = args;

    TRACE("%p, %p\n", params->mesh, params->outVertexCount);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshBeginVertexBufferUpdateFB(params->mesh, params->outVertexCount);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrTriangleMeshEndUpdateFB(void *args)
{
    struct
    {
        PTR32 mesh;
        uint32_t vertexCount;
        uint32_t triangleCount;
        XrResult result;
    } *params = args;

    TRACE("%#x, %u, %u\n", params->mesh, params->vertexCount, params->triangleCount);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshEndUpdateFB((XrTriangleMeshFB)UlongToPtr(params->mesh), params->vertexCount, params->triangleCount);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshEndUpdateFB(void *args)
{
    struct xrTriangleMeshEndUpdateFB_params *params = args;

    TRACE("%p, %u, %u\n", params->mesh, params->vertexCount, params->triangleCount);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshEndUpdateFB(params->mesh, params->vertexCount, params->triangleCount);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrTriangleMeshEndVertexBufferUpdateFB(void *args)
{
    struct
    {
        PTR32 mesh;
        XrResult result;
    } *params = args;

    TRACE("%#x\n", params->mesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshEndVertexBufferUpdateFB((XrTriangleMeshFB)UlongToPtr(params->mesh));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshEndVertexBufferUpdateFB(void *args)
{
    struct xrTriangleMeshEndVertexBufferUpdateFB_params *params = args;

    TRACE("%p\n", params->mesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshEndVertexBufferUpdateFB(params->mesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrTriangleMeshGetIndexBufferFB(void *args)
{
    struct
    {
        PTR32 mesh;
        PTR32 outIndexBuffer;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->mesh, params->outIndexBuffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshGetIndexBufferFB((XrTriangleMeshFB)UlongToPtr(params->mesh), (uint32_t **)UlongToPtr(params->outIndexBuffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshGetIndexBufferFB(void *args)
{
    struct xrTriangleMeshGetIndexBufferFB_params *params = args;

    TRACE("%p, %p\n", params->mesh, params->outIndexBuffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshGetIndexBufferFB(params->mesh, params->outIndexBuffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrTriangleMeshGetVertexBufferFB(void *args)
{
    struct
    {
        PTR32 mesh;
        PTR32 outVertexBuffer;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->mesh, params->outVertexBuffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshGetVertexBufferFB((XrTriangleMeshFB)UlongToPtr(params->mesh), (XrVector3f **)UlongToPtr(params->outVertexBuffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshGetVertexBufferFB(void *args)
{
    struct xrTriangleMeshGetVertexBufferFB_params *params = args;

    TRACE("%p, %p\n", params->mesh, params->outVertexBuffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshGetVertexBufferFB(params->mesh, params->outVertexBuffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrTryCreateSpatialGraphStaticNodeBindingMSFT(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 createInfo;
        PTR32 nodeBinding;
        XrResult result;
    } *params = args;
    XrSpatialGraphStaticNodeBindingCreateInfoMSFT createInfo_host;
    XrSpatialGraphNodeBindingMSFT nodeBinding_host;

    TRACE("%#x, %#x, %#x\n", params->session, params->createInfo, params->nodeBinding);

    convert_XrSpatialGraphStaticNodeBindingCreateInfoMSFT_win32_to_host((const XrSpatialGraphStaticNodeBindingCreateInfoMSFT32 *)UlongToPtr(params->createInfo), &createInfo_host);
    nodeBinding_host = UlongToPtr(*(PTR32 *)UlongToPtr(params->nodeBinding));
    params->result = g_xr_host_instance_dispatch_table.p_xrTryCreateSpatialGraphStaticNodeBindingMSFT(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, &createInfo_host, &nodeBinding_host);
    *(PTR32 *)UlongToPtr(params->nodeBinding) = PtrToUlong(nodeBinding_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTryCreateSpatialGraphStaticNodeBindingMSFT(void *args)
{
    struct xrTryCreateSpatialGraphStaticNodeBindingMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->createInfo, params->nodeBinding);

    params->result = g_xr_host_instance_dispatch_table.p_xrTryCreateSpatialGraphStaticNodeBindingMSFT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->nodeBinding);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUnpersistAnchorANDROID(void *args)
{
    struct
    {
        PTR32 handle;
        PTR32 anchorId;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->handle, params->anchorId);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistAnchorANDROID((XrDeviceAnchorPersistenceANDROID)UlongToPtr(params->handle), (const XrUuidEXT *)UlongToPtr(params->anchorId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUnpersistAnchorANDROID(void *args)
{
    struct xrUnpersistAnchorANDROID_params *params = args;

    TRACE("%p, %p\n", params->handle, params->anchorId);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistAnchorANDROID(params->handle, params->anchorId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUnpersistSpatialAnchorAsyncBD(void *args)
{
    struct
    {
        PTR32 provider;
        PTR32 info;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorUnpersistInfoBD info_host;

    TRACE("%#x, %#x, %#x\n", params->provider, params->info, params->future);

    convert_XrSpatialAnchorUnpersistInfoBD_win32_to_host((const XrSpatialAnchorUnpersistInfoBD32 *)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialAnchorAsyncBD((XrSenseDataProviderBD)UlongToPtr(params->provider), &info_host, (XrFutureEXT *)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUnpersistSpatialAnchorAsyncBD(void *args)
{
    struct xrUnpersistSpatialAnchorAsyncBD_params *params = args;

    TRACE("%p, %p, %p\n", params->provider, params->info, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialAnchorAsyncBD(params->provider, params->info, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUnpersistSpatialAnchorCompleteBD(void *args)
{
    struct
    {
        PTR32 provider;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrFutureCompletionEXT completion_host;

    TRACE("%#x, %p, %#x\n", params->provider, params->future, params->completion);

    convert_XrFutureCompletionEXT_win32_to_host((XrFutureCompletionEXT32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialAnchorCompleteBD((XrSenseDataProviderBD)UlongToPtr(params->provider), params->future, &completion_host);
    convert_XrFutureCompletionEXT_host_to_win32(&completion_host, (XrFutureCompletionEXT32 *)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUnpersistSpatialAnchorCompleteBD(void *args)
{
    struct xrUnpersistSpatialAnchorCompleteBD_params *params = args;

    TRACE("%p, %p, %p\n", params->provider, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialAnchorCompleteBD(params->provider, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUnpersistSpatialAnchorMSFT(void *args)
{
    struct
    {
        PTR32 spatialAnchorStore;
        PTR32 spatialAnchorPersistenceName;
        XrResult result;
    } *params = args;

    TRACE("%#x, %#x\n", params->spatialAnchorStore, params->spatialAnchorPersistenceName);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialAnchorMSFT((XrSpatialAnchorStoreConnectionMSFT)UlongToPtr(params->spatialAnchorStore), (const XrSpatialAnchorPersistenceNameMSFT *)UlongToPtr(params->spatialAnchorPersistenceName));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUnpersistSpatialAnchorMSFT(void *args)
{
    struct xrUnpersistSpatialAnchorMSFT_params *params = args;

    TRACE("%p, %p\n", params->spatialAnchorStore, params->spatialAnchorPersistenceName);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialAnchorMSFT(params->spatialAnchorStore, params->spatialAnchorPersistenceName);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUnpersistSpatialEntityAsyncEXT(void *args)
{
    struct
    {
        PTR32 persistenceContext;
        PTR32 unpersistInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialEntityUnpersistInfoEXT unpersistInfo_host;

    TRACE("%#x, %#x, %#x\n", params->persistenceContext, params->unpersistInfo, params->future);

    convert_XrSpatialEntityUnpersistInfoEXT_win32_to_host((const XrSpatialEntityUnpersistInfoEXT32 *)UlongToPtr(params->unpersistInfo), &unpersistInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialEntityAsyncEXT((XrSpatialPersistenceContextEXT)UlongToPtr(params->persistenceContext), &unpersistInfo_host, (XrFutureEXT *)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUnpersistSpatialEntityAsyncEXT(void *args)
{
    struct xrUnpersistSpatialEntityAsyncEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->persistenceContext, params->unpersistInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialEntityAsyncEXT(params->persistenceContext, params->unpersistInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUnpersistSpatialEntityCompleteEXT(void *args)
{
    struct
    {
        PTR32 persistenceContext;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrUnpersistSpatialEntityCompletionEXT completion_host;

    TRACE("%#x, %p, %#x\n", params->persistenceContext, params->future, params->completion);

    convert_XrUnpersistSpatialEntityCompletionEXT_win32_to_host((XrUnpersistSpatialEntityCompletionEXT32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialEntityCompleteEXT((XrSpatialPersistenceContextEXT)UlongToPtr(params->persistenceContext), params->future, &completion_host);
    convert_XrUnpersistSpatialEntityCompletionEXT_host_to_win32(&completion_host, (XrUnpersistSpatialEntityCompletionEXT32 *)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUnpersistSpatialEntityCompleteEXT(void *args)
{
    struct xrUnpersistSpatialEntityCompleteEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->persistenceContext, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialEntityCompleteEXT(params->persistenceContext, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUpdateHandMeshMSFT(void *args)
{
    struct
    {
        PTR32 handTracker;
        PTR32 updateInfo;
        PTR32 handMesh;
        XrResult result;
    } *params = args;
    XrHandMeshUpdateInfoMSFT updateInfo_host;
    XrHandMeshMSFT handMesh_host;

    TRACE("%#x, %#x, %#x\n", params->handTracker, params->updateInfo, params->handMesh);

    convert_XrHandMeshUpdateInfoMSFT_win32_to_host((const XrHandMeshUpdateInfoMSFT32 *)UlongToPtr(params->updateInfo), &updateInfo_host);
    convert_XrHandMeshMSFT_win32_to_host((XrHandMeshMSFT32 *)UlongToPtr(params->handMesh), &handMesh_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateHandMeshMSFT((XrHandTrackerEXT)UlongToPtr(params->handTracker), &updateInfo_host, &handMesh_host);
    convert_XrHandMeshMSFT_host_to_win32(&handMesh_host, (XrHandMeshMSFT32 *)UlongToPtr(params->handMesh));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUpdateHandMeshMSFT(void *args)
{
    struct xrUpdateHandMeshMSFT_params *params = args;

    TRACE("%p, %p, %p\n", params->handTracker, params->updateInfo, params->handMesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateHandMeshMSFT(params->handTracker, params->updateInfo, params->handMesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUpdatePassthroughColorLutMETA(void *args)
{
    struct
    {
        PTR32 colorLut;
        PTR32 updateInfo;
        XrResult result;
    } *params = args;
    XrPassthroughColorLutUpdateInfoMETA updateInfo_host;

    TRACE("%#x, %#x\n", params->colorLut, params->updateInfo);

    convert_XrPassthroughColorLutUpdateInfoMETA_win32_to_host((const XrPassthroughColorLutUpdateInfoMETA32 *)UlongToPtr(params->updateInfo), &updateInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUpdatePassthroughColorLutMETA((XrPassthroughColorLutMETA)UlongToPtr(params->colorLut), &updateInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUpdatePassthroughColorLutMETA(void *args)
{
    struct xrUpdatePassthroughColorLutMETA_params *params = args;

    TRACE("%p, %p\n", params->colorLut, params->updateInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrUpdatePassthroughColorLutMETA(params->colorLut, params->updateInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUpdateSpatialAnchorsExpirationAsyncML(void *args)
{
    struct
    {
        PTR32 storage;
        PTR32 updateInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsUpdateExpirationInfoML updateInfo_host;

    TRACE("%#x, %#x, %#x\n", params->storage, params->updateInfo, params->future);

    convert_XrSpatialAnchorsUpdateExpirationInfoML_win32_to_host((const XrSpatialAnchorsUpdateExpirationInfoML32 *)UlongToPtr(params->updateInfo), &updateInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateSpatialAnchorsExpirationAsyncML((XrSpatialAnchorsStorageML)UlongToPtr(params->storage), &updateInfo_host, (XrFutureEXT *)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUpdateSpatialAnchorsExpirationAsyncML(void *args)
{
    struct xrUpdateSpatialAnchorsExpirationAsyncML_params *params = args;

    TRACE("%p, %p, %p\n", params->storage, params->updateInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateSpatialAnchorsExpirationAsyncML(params->storage, params->updateInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUpdateSpatialAnchorsExpirationCompleteML(void *args)
{
    struct
    {
        PTR32 storage;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsUpdateExpirationCompletionML completion_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %p, %#x\n", params->storage, params->future, params->completion);

    init_conversion_context(ctx);
    convert_XrSpatialAnchorsUpdateExpirationCompletionML_win32_to_host(ctx, (XrSpatialAnchorsUpdateExpirationCompletionML32 *)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateSpatialAnchorsExpirationCompleteML((XrSpatialAnchorsStorageML)UlongToPtr(params->storage), params->future, &completion_host);
    convert_XrSpatialAnchorsUpdateExpirationCompletionML_host_to_win32(&completion_host, (XrSpatialAnchorsUpdateExpirationCompletionML32 *)UlongToPtr(params->completion));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUpdateSpatialAnchorsExpirationCompleteML(void *args)
{
    struct xrUpdateSpatialAnchorsExpirationCompleteML_params *params = args;

    TRACE("%p, %p, %p\n", params->storage, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateSpatialAnchorsExpirationCompleteML(params->storage, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUpdateSwapchainFB(void *args)
{
    struct
    {
        PTR32 swapchain;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrSwapchainStateBaseHeaderFB state_host;

    TRACE("%#x, %#x\n", params->swapchain, params->state);

    convert_XrSwapchainStateBaseHeaderFB_win32_to_host((const XrSwapchainStateBaseHeaderFB32 *)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateSwapchainFB(wine_swapchain_from_handle((XrSwapchain)UlongToPtr(params->swapchain))->host_swapchain, &state_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUpdateSwapchainFB(void *args)
{
    struct xrUpdateSwapchainFB_params *params = args;

    TRACE("%p, %p\n", params->swapchain, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateSwapchainFB(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrWaitFrame(void *args)
{
    struct
    {
        PTR32 session;
        PTR32 frameWaitInfo;
        PTR32 frameState;
        XrResult result;
    } *params = args;
    XrFrameWaitInfo *frameWaitInfo_host = NULL;
    XrFrameState frameState_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("%#x, %#x, %#x\n", params->session, params->frameWaitInfo, params->frameState);

    init_conversion_context(ctx);
    if (params->frameWaitInfo)
    {
        frameWaitInfo_host = conversion_context_alloc(ctx, sizeof(*frameWaitInfo_host));
        convert_XrFrameWaitInfo_win32_to_host((const XrFrameWaitInfo32 *)UlongToPtr(params->frameWaitInfo), frameWaitInfo_host);
    }
    convert_XrFrameState_win32_to_host(ctx, (XrFrameState32 *)UlongToPtr(params->frameState), &frameState_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrWaitFrame(wine_session_from_handle((XrSession)UlongToPtr(params->session))->host_session, frameWaitInfo_host, &frameState_host);
    convert_XrFrameState_host_to_win32(&frameState_host, (XrFrameState32 *)UlongToPtr(params->frameState));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrWaitFrame(void *args)
{
    struct xrWaitFrame_params *params = args;

    TRACE("%p, %p, %p\n", params->session, params->frameWaitInfo, params->frameState);

    params->result = g_xr_host_instance_dispatch_table.p_xrWaitFrame(wine_session_from_handle(params->session)->host_session, params->frameWaitInfo, params->frameState);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrWaitSwapchainImage(void *args)
{
    struct
    {
        PTR32 swapchain;
        PTR32 waitInfo;
        XrResult result;
    } *params = args;
    XrSwapchainImageWaitInfo waitInfo_host;

    TRACE("%#x, %#x\n", params->swapchain, params->waitInfo);

    convert_XrSwapchainImageWaitInfo_win32_to_host((const XrSwapchainImageWaitInfo32 *)UlongToPtr(params->waitInfo), &waitInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrWaitSwapchainImage(wine_swapchain_from_handle((XrSwapchain)UlongToPtr(params->swapchain))->host_swapchain, &waitInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrWaitSwapchainImage(void *args)
{
    struct xrWaitSwapchainImage_params *params = args;

    TRACE("%p, %p\n", params->swapchain, params->waitInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrWaitSwapchainImage(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->waitInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

static const char * const xr_extensions[] =
{
    "XR_ALMALENCE_digital_lens_control",
    "XR_ANDROID_device_anchor_persistence",
    "XR_ANDROID_passthrough_camera_state",
    "XR_ANDROID_raycast",
    "XR_ANDROID_trackables",
    "XR_ANDROID_trackables_marker",
    "XR_ANDROID_trackables_object",
    "XR_BD_body_tracking",
    "XR_BD_controller_interaction",
    "XR_BD_future_progress",
    "XR_BD_spatial_anchor",
    "XR_BD_spatial_anchor_sharing",
    "XR_BD_spatial_mesh",
    "XR_BD_spatial_plane",
    "XR_BD_spatial_scene",
    "XR_BD_spatial_sensing",
    "XR_EPIC_view_configuration_fov",
    "XR_EXTX_overlay",
    "XR_EXT_active_action_set_priority",
    "XR_EXT_composition_layer_inverted_alpha",
    "XR_EXT_conformance_automation",
    "XR_EXT_dpad_binding",
    "XR_EXT_eye_gaze_interaction",
    "XR_EXT_frame_synthesis",
    "XR_EXT_future",
    "XR_EXT_hand_interaction",
    "XR_EXT_hand_joints_motion_range",
    "XR_EXT_hand_tracking",
    "XR_EXT_hand_tracking_data_source",
    "XR_EXT_hp_mixed_reality_controller",
    "XR_EXT_interaction_render_model",
    "XR_EXT_loader_init_properties",
    "XR_EXT_local_floor",
    "XR_EXT_palm_pose",
    "XR_EXT_performance_settings",
    "XR_EXT_plane_detection",
    "XR_EXT_render_model",
    "XR_EXT_samsung_odyssey_controller",
    "XR_EXT_spatial_anchor",
    "XR_EXT_spatial_entity",
    "XR_EXT_spatial_marker_tracking",
    "XR_EXT_spatial_persistence",
    "XR_EXT_spatial_persistence_operations",
    "XR_EXT_spatial_plane_tracking",
    "XR_EXT_thermal_query",
    "XR_EXT_user_presence",
    "XR_EXT_uuid",
    "XR_EXT_view_configuration_depth_range",
    "XR_EXT_win32_appcontainer_compatible",
    "XR_FB_body_tracking",
    "XR_FB_color_space",
    "XR_FB_composition_layer_alpha_blend",
    "XR_FB_composition_layer_depth_test",
    "XR_FB_composition_layer_image_layout",
    "XR_FB_composition_layer_secure_content",
    "XR_FB_composition_layer_settings",
    "XR_FB_display_refresh_rate",
    "XR_FB_eye_tracking_social",
    "XR_FB_face_tracking",
    "XR_FB_face_tracking2",
    "XR_FB_foveation",
    "XR_FB_foveation_configuration",
    "XR_FB_foveation_vulkan",
    "XR_FB_hand_tracking_aim",
    "XR_FB_hand_tracking_capsules",
    "XR_FB_hand_tracking_mesh",
    "XR_FB_haptic_amplitude_envelope",
    "XR_FB_haptic_pcm",
    "XR_FB_keyboard_tracking",
    "XR_FB_passthrough",
    "XR_FB_passthrough_keyboard_hands",
    "XR_FB_render_model",
    "XR_FB_scene",
    "XR_FB_scene_capture",
    "XR_FB_space_warp",
    "XR_FB_spatial_entity",
    "XR_FB_spatial_entity_container",
    "XR_FB_spatial_entity_query",
    "XR_FB_spatial_entity_sharing",
    "XR_FB_spatial_entity_storage",
    "XR_FB_spatial_entity_storage_batch",
    "XR_FB_spatial_entity_user",
    "XR_FB_swapchain_update_state",
    "XR_FB_swapchain_update_state_vulkan",
    "XR_FB_touch_controller_pro",
    "XR_FB_touch_controller_proximity",
    "XR_FB_triangle_mesh",
    "XR_HTCX_vive_tracker_interaction",
    "XR_HTC_anchor",
    "XR_HTC_body_tracking",
    "XR_HTC_facial_tracking",
    "XR_HTC_hand_interaction",
    "XR_HTC_passthrough",
    "XR_HTC_vive_cosmos_controller_interaction",
    "XR_HTC_vive_focus3_controller_interaction",
    "XR_HTC_vive_wrist_tracker_interaction",
    "XR_HUAWEI_controller_interaction",
    "XR_KHR_D3D11_enable",
    "XR_KHR_D3D12_enable",
    "XR_KHR_binding_modification",
    "XR_KHR_composition_layer_color_scale_bias",
    "XR_KHR_composition_layer_cube",
    "XR_KHR_composition_layer_cylinder",
    "XR_KHR_composition_layer_depth",
    "XR_KHR_composition_layer_equirect",
    "XR_KHR_composition_layer_equirect2",
    "XR_KHR_extended_struct_name_lengths",
    "XR_KHR_generic_controller",
    "XR_KHR_locate_spaces",
    "XR_KHR_maintenance1",
    "XR_KHR_opengl_enable",
    "XR_KHR_swapchain_usage_input_attachment_bit",
    "XR_KHR_visibility_mask",
    "XR_KHR_vulkan_enable",
    "XR_KHR_vulkan_enable2",
    "XR_KHR_vulkan_swapchain_format_list",
    "XR_KHR_win32_convert_performance_counter_time",
    "XR_LOGITECH_mx_ink_stylus_interaction",
    "XR_META_automatic_layer_filter",
    "XR_META_body_tracking_calibration",
    "XR_META_body_tracking_full_body",
    "XR_META_colocation_discovery",
    "XR_META_detached_controllers",
    "XR_META_environment_depth",
    "XR_META_foveation_eye_tracked",
    "XR_META_hand_tracking_microgestures",
    "XR_META_headset_id",
    "XR_META_local_dimming",
    "XR_META_passthrough_color_lut",
    "XR_META_passthrough_layer_resumed_event",
    "XR_META_passthrough_preferences",
    "XR_META_performance_metrics",
    "XR_META_recommended_layer_resolution",
    "XR_META_simultaneous_hands_and_controllers",
    "XR_META_spatial_entity_discovery",
    "XR_META_spatial_entity_group_sharing",
    "XR_META_spatial_entity_mesh",
    "XR_META_spatial_entity_persistence",
    "XR_META_spatial_entity_sharing",
    "XR_META_touch_controller_plus",
    "XR_META_virtual_keyboard",
    "XR_META_vulkan_swapchain_create_info",
    "XR_ML_facial_expression",
    "XR_ML_frame_end_info",
    "XR_ML_global_dimmer",
    "XR_ML_localization_map",
    "XR_ML_marker_understanding",
    "XR_ML_ml2_controller_interaction",
    "XR_ML_spatial_anchors",
    "XR_ML_spatial_anchors_storage",
    "XR_ML_system_notifications",
    "XR_ML_user_calibration",
    "XR_ML_view_configuration_depth_range_change",
    "XR_ML_world_mesh_detection",
    "XR_MNDX_force_feedback_curl",
    "XR_MND_headless",
    "XR_MND_swapchain_usage_input_attachment_bit",
    "XR_MSFT_composition_layer_reprojection",
    "XR_MSFT_controller_model",
    "XR_MSFT_first_person_observer",
    "XR_MSFT_hand_interaction",
    "XR_MSFT_hand_tracking_mesh",
    "XR_MSFT_holographic_window_attachment",
    "XR_MSFT_scene_marker",
    "XR_MSFT_scene_understanding",
    "XR_MSFT_scene_understanding_serialization",
    "XR_MSFT_secondary_view_configuration",
    "XR_MSFT_spatial_anchor",
    "XR_MSFT_spatial_anchor_persistence",
    "XR_MSFT_spatial_graph_bridge",
    "XR_MSFT_unbounded_reference_space",
    "XR_OCULUS_android_session_state_enable",
    "XR_OCULUS_audio_device_guid",
    "XR_OCULUS_external_camera",
    "XR_OPPO_controller_interaction",
    "XR_QCOM_tracking_optimization_settings",
    "XR_ULTRALEAP_hand_tracking_forearm",
    "XR_VALVE_analog_threshold",
    "XR_VARJO_composition_layer_depth_test",
    "XR_VARJO_environment_depth_estimation",
    "XR_VARJO_foveated_rendering",
    "XR_VARJO_marker_tracking",
    "XR_VARJO_quad_views",
    "XR_VARJO_view_offset",
    "XR_VARJO_xr4_controller_interaction",
    "XR_YVR_controller_interaction",
};

BOOL wine_xr_extension_supported(const char *name)
{
    unsigned int i;
    for (i = 0; i < ARRAY_SIZE(xr_extensions); i++)
    {
        if (strcmp(xr_extensions[i], name) == 0)
            return TRUE;
    }
    return FALSE;
}

BOOL wine_xr_is_type_wrapped(XrObjectType type)
{
    return FALSE ||
        type == XR_OBJECT_TYPE_INSTANCE ||
        type == XR_OBJECT_TYPE_SESSION ||
        type == XR_OBJECT_TYPE_SWAPCHAIN;
}

#ifdef _WIN64

const unixlib_entry_t __wine_unix_call_funcs[] =
{
    init_openxr,
    is_available_instance_function_openxr,
    thunk64_xrAcquireEnvironmentDepthImageMETA,
    thunk64_xrAcquireSwapchainImage,
    thunk64_xrAllocateWorldMeshBufferML,
    thunk64_xrApplyForceFeedbackCurlMNDX,
    thunk64_xrApplyHapticFeedback,
    thunk64_xrAttachSessionActionSets,
    thunk64_xrBeginFrame,
    thunk64_xrBeginPlaneDetectionEXT,
    thunk64_xrBeginSession,
    thunk64_xrCancelFutureEXT,
    thunk64_xrCaptureSceneAsyncBD,
    thunk64_xrCaptureSceneCompleteBD,
    thunk64_xrChangeVirtualKeyboardTextContextMETA,
    thunk64_xrClearSpatialAnchorStoreMSFT,
    thunk64_xrComputeNewSceneMSFT,
    thunk64_xrCreateAction,
    thunk64_xrCreateActionSet,
    thunk64_xrCreateActionSpace,
    thunk64_xrCreateAnchorSpaceANDROID,
    thunk64_xrCreateAnchorSpaceBD,
    thunk64_xrCreateBodyTrackerBD,
    thunk64_xrCreateBodyTrackerFB,
    thunk64_xrCreateBodyTrackerHTC,
    thunk64_xrCreateDeviceAnchorPersistenceANDROID,
    thunk64_xrCreateEnvironmentDepthProviderMETA,
    thunk64_xrCreateEnvironmentDepthSwapchainMETA,
    thunk64_xrCreateExportedLocalizationMapML,
    thunk64_xrCreateEyeTrackerFB,
    thunk64_xrCreateFaceTracker2FB,
    thunk64_xrCreateFaceTrackerFB,
    thunk64_xrCreateFacialExpressionClientML,
    thunk64_xrCreateFacialTrackerHTC,
    thunk64_xrCreateFoveationProfileFB,
    thunk64_xrCreateGeometryInstanceFB,
    thunk64_xrCreateHandMeshSpaceMSFT,
    thunk64_xrCreateHandTrackerEXT,
    thunk64_xrCreateInstance,
    thunk64_xrCreateKeyboardSpaceFB,
    thunk64_xrCreateMarkerDetectorML,
    thunk64_xrCreateMarkerSpaceML,
    thunk64_xrCreateMarkerSpaceVARJO,
    thunk64_xrCreatePassthroughColorLutMETA,
    thunk64_xrCreatePassthroughFB,
    thunk64_xrCreatePassthroughHTC,
    thunk64_xrCreatePassthroughLayerFB,
    thunk64_xrCreatePersistedAnchorSpaceANDROID,
    thunk64_xrCreatePlaneDetectorEXT,
    thunk64_xrCreateReferenceSpace,
    thunk64_xrCreateRenderModelAssetEXT,
    thunk64_xrCreateRenderModelEXT,
    thunk64_xrCreateRenderModelSpaceEXT,
    thunk64_xrCreateSceneMSFT,
    thunk64_xrCreateSceneObserverMSFT,
    thunk64_xrCreateSenseDataProviderBD,
    thunk64_xrCreateSession,
    thunk64_xrCreateSpaceUserFB,
    thunk64_xrCreateSpatialAnchorAsyncBD,
    thunk64_xrCreateSpatialAnchorCompleteBD,
    thunk64_xrCreateSpatialAnchorEXT,
    thunk64_xrCreateSpatialAnchorFB,
    thunk64_xrCreateSpatialAnchorFromPersistedNameMSFT,
    thunk64_xrCreateSpatialAnchorHTC,
    thunk64_xrCreateSpatialAnchorMSFT,
    thunk64_xrCreateSpatialAnchorSpaceMSFT,
    thunk64_xrCreateSpatialAnchorStoreConnectionMSFT,
    thunk64_xrCreateSpatialAnchorsAsyncML,
    thunk64_xrCreateSpatialAnchorsCompleteML,
    thunk64_xrCreateSpatialAnchorsStorageML,
    thunk64_xrCreateSpatialContextAsyncEXT,
    thunk64_xrCreateSpatialContextCompleteEXT,
    thunk64_xrCreateSpatialDiscoverySnapshotAsyncEXT,
    thunk64_xrCreateSpatialDiscoverySnapshotCompleteEXT,
    thunk64_xrCreateSpatialEntityAnchorBD,
    thunk64_xrCreateSpatialEntityFromIdEXT,
    thunk64_xrCreateSpatialGraphNodeSpaceMSFT,
    thunk64_xrCreateSpatialPersistenceContextAsyncEXT,
    thunk64_xrCreateSpatialPersistenceContextCompleteEXT,
    thunk64_xrCreateSpatialUpdateSnapshotEXT,
    thunk64_xrCreateSwapchain,
    thunk64_xrCreateTrackableTrackerANDROID,
    thunk64_xrCreateTriangleMeshFB,
    thunk64_xrCreateVirtualKeyboardMETA,
    thunk64_xrCreateVirtualKeyboardSpaceMETA,
    thunk64_xrCreateWorldMeshDetectorML,
    thunk64_xrDeleteSpatialAnchorsAsyncML,
    thunk64_xrDeleteSpatialAnchorsCompleteML,
    thunk64_xrDeserializeSceneMSFT,
    thunk64_xrDestroyAction,
    thunk64_xrDestroyActionSet,
    thunk64_xrDestroyAnchorBD,
    thunk64_xrDestroyBodyTrackerBD,
    thunk64_xrDestroyBodyTrackerFB,
    thunk64_xrDestroyBodyTrackerHTC,
    thunk64_xrDestroyDeviceAnchorPersistenceANDROID,
    thunk64_xrDestroyEnvironmentDepthProviderMETA,
    thunk64_xrDestroyEnvironmentDepthSwapchainMETA,
    thunk64_xrDestroyExportedLocalizationMapML,
    thunk64_xrDestroyEyeTrackerFB,
    thunk64_xrDestroyFaceTracker2FB,
    thunk64_xrDestroyFaceTrackerFB,
    thunk64_xrDestroyFacialExpressionClientML,
    thunk64_xrDestroyFacialTrackerHTC,
    thunk64_xrDestroyFoveationProfileFB,
    thunk64_xrDestroyGeometryInstanceFB,
    thunk64_xrDestroyHandTrackerEXT,
    thunk64_xrDestroyInstance,
    thunk64_xrDestroyMarkerDetectorML,
    thunk64_xrDestroyPassthroughColorLutMETA,
    thunk64_xrDestroyPassthroughFB,
    thunk64_xrDestroyPassthroughHTC,
    thunk64_xrDestroyPassthroughLayerFB,
    thunk64_xrDestroyPlaneDetectorEXT,
    thunk64_xrDestroyRenderModelAssetEXT,
    thunk64_xrDestroyRenderModelEXT,
    thunk64_xrDestroySceneMSFT,
    thunk64_xrDestroySceneObserverMSFT,
    thunk64_xrDestroySenseDataProviderBD,
    thunk64_xrDestroySenseDataSnapshotBD,
    thunk64_xrDestroySession,
    thunk64_xrDestroySpace,
    thunk64_xrDestroySpaceUserFB,
    thunk64_xrDestroySpatialAnchorMSFT,
    thunk64_xrDestroySpatialAnchorStoreConnectionMSFT,
    thunk64_xrDestroySpatialAnchorsStorageML,
    thunk64_xrDestroySpatialContextEXT,
    thunk64_xrDestroySpatialEntityEXT,
    thunk64_xrDestroySpatialGraphNodeBindingMSFT,
    thunk64_xrDestroySpatialPersistenceContextEXT,
    thunk64_xrDestroySpatialSnapshotEXT,
    thunk64_xrDestroySwapchain,
    thunk64_xrDestroyTrackableTrackerANDROID,
    thunk64_xrDestroyTriangleMeshFB,
    thunk64_xrDestroyVirtualKeyboardMETA,
    thunk64_xrDestroyWorldMeshDetectorML,
    thunk64_xrDiscoverSpacesMETA,
    thunk64_xrDownloadSharedSpatialAnchorAsyncBD,
    thunk64_xrDownloadSharedSpatialAnchorCompleteBD,
    thunk64_xrEnableLocalizationEventsML,
    thunk64_xrEnableUserCalibrationEventsML,
    thunk64_xrEndFrame,
    thunk64_xrEndSession,
    thunk64_xrEnumerateApiLayerProperties,
    thunk64_xrEnumerateBoundSourcesForAction,
    thunk64_xrEnumerateColorSpacesFB,
    thunk64_xrEnumerateDisplayRefreshRatesFB,
    thunk64_xrEnumerateEnvironmentBlendModes,
    thunk64_xrEnumerateEnvironmentDepthSwapchainImagesMETA,
    thunk64_xrEnumerateExternalCamerasOCULUS,
    thunk64_xrEnumerateInstanceExtensionProperties,
    thunk64_xrEnumerateInteractionRenderModelIdsEXT,
    thunk64_xrEnumeratePerformanceMetricsCounterPathsMETA,
    thunk64_xrEnumeratePersistedAnchorsANDROID,
    thunk64_xrEnumeratePersistedSpatialAnchorNamesMSFT,
    thunk64_xrEnumerateRaycastSupportedTrackableTypesANDROID,
    thunk64_xrEnumerateReferenceSpaces,
    thunk64_xrEnumerateRenderModelPathsFB,
    thunk64_xrEnumerateRenderModelSubactionPathsEXT,
    thunk64_xrEnumerateReprojectionModesMSFT,
    thunk64_xrEnumerateSceneComputeFeaturesMSFT,
    thunk64_xrEnumerateSpaceSupportedComponentsFB,
    thunk64_xrEnumerateSpatialCapabilitiesEXT,
    thunk64_xrEnumerateSpatialCapabilityComponentTypesEXT,
    thunk64_xrEnumerateSpatialCapabilityFeaturesEXT,
    thunk64_xrEnumerateSpatialEntityComponentTypesBD,
    thunk64_xrEnumerateSpatialPersistenceScopesEXT,
    thunk64_xrEnumerateSupportedAnchorTrackableTypesANDROID,
    thunk64_xrEnumerateSupportedPersistenceAnchorTypesANDROID,
    thunk64_xrEnumerateSupportedTrackableTypesANDROID,
    thunk64_xrEnumerateSwapchainFormats,
    thunk64_xrEnumerateSwapchainImages,
    thunk64_xrEnumerateViewConfigurationViews,
    thunk64_xrEnumerateViewConfigurations,
    thunk64_xrEnumerateViveTrackerPathsHTCX,
    thunk64_xrEraseSpaceFB,
    thunk64_xrEraseSpacesMETA,
    thunk64_xrFreeWorldMeshBufferML,
    thunk64_xrGeometryInstanceSetTransformFB,
    thunk64_xrGetActionStateBoolean,
    thunk64_xrGetActionStateFloat,
    thunk64_xrGetActionStatePose,
    thunk64_xrGetActionStateVector2f,
    thunk64_xrGetAllTrackablesANDROID,
    thunk64_xrGetAnchorPersistStateANDROID,
    thunk64_xrGetAnchorUuidBD,
    thunk64_xrGetAudioInputDeviceGuidOculus,
    thunk64_xrGetAudioOutputDeviceGuidOculus,
    thunk64_xrGetBodySkeletonFB,
    thunk64_xrGetBodySkeletonHTC,
    thunk64_xrGetControllerModelKeyMSFT,
    thunk64_xrGetControllerModelPropertiesMSFT,
    thunk64_xrGetControllerModelStateMSFT,
    thunk64_xrGetCurrentInteractionProfile,
    thunk64_xrGetDeviceSampleRateFB,
    thunk64_xrGetDisplayRefreshRateFB,
    thunk64_xrGetEnvironmentDepthSwapchainStateMETA,
    thunk64_xrGetExportedLocalizationMapDataML,
    thunk64_xrGetEyeGazesFB,
    thunk64_xrGetFaceExpressionWeights2FB,
    thunk64_xrGetFaceExpressionWeightsFB,
    thunk64_xrGetFacialExpressionBlendShapePropertiesML,
    thunk64_xrGetFacialExpressionsHTC,
    thunk64_xrGetFoveationEyeTrackedStateMETA,
    thunk64_xrGetHandMeshFB,
    thunk64_xrGetInputSourceLocalizedName,
    thunk64_xrGetInstanceProperties,
    thunk64_xrGetMarkerDetectorStateML,
    thunk64_xrGetMarkerLengthML,
    thunk64_xrGetMarkerNumberML,
    thunk64_xrGetMarkerReprojectionErrorML,
    thunk64_xrGetMarkerSizeVARJO,
    thunk64_xrGetMarkerStringML,
    thunk64_xrGetMarkersML,
    thunk64_xrGetOpenGLGraphicsRequirementsKHR,
    thunk64_xrGetPassthroughCameraStateANDROID,
    thunk64_xrGetPassthroughPreferencesMETA,
    thunk64_xrGetPerformanceMetricsStateMETA,
    thunk64_xrGetPlaneDetectionStateEXT,
    thunk64_xrGetPlaneDetectionsEXT,
    thunk64_xrGetPlanePolygonBufferEXT,
    thunk64_xrGetQueriedSenseDataBD,
    thunk64_xrGetRecommendedLayerResolutionMETA,
    thunk64_xrGetReferenceSpaceBoundsRect,
    thunk64_xrGetRenderModelAssetDataEXT,
    thunk64_xrGetRenderModelAssetPropertiesEXT,
    thunk64_xrGetRenderModelPoseTopLevelUserPathEXT,
    thunk64_xrGetRenderModelPropertiesEXT,
    thunk64_xrGetRenderModelPropertiesFB,
    thunk64_xrGetRenderModelStateEXT,
    thunk64_xrGetSceneComponentsMSFT,
    thunk64_xrGetSceneComputeStateMSFT,
    thunk64_xrGetSceneMarkerDecodedStringMSFT,
    thunk64_xrGetSceneMarkerRawDataMSFT,
    thunk64_xrGetSceneMeshBuffersMSFT,
    thunk64_xrGetSenseDataProviderStateBD,
    thunk64_xrGetSerializedSceneFragmentDataMSFT,
    thunk64_xrGetSpaceBoundary2DFB,
    thunk64_xrGetSpaceBoundingBox2DFB,
    thunk64_xrGetSpaceBoundingBox3DFB,
    thunk64_xrGetSpaceComponentStatusFB,
    thunk64_xrGetSpaceContainerFB,
    thunk64_xrGetSpaceRoomLayoutFB,
    thunk64_xrGetSpaceSemanticLabelsFB,
    thunk64_xrGetSpaceTriangleMeshMETA,
    thunk64_xrGetSpaceUserIdFB,
    thunk64_xrGetSpaceUuidFB,
    thunk64_xrGetSpatialAnchorNameHTC,
    thunk64_xrGetSpatialAnchorStateML,
    thunk64_xrGetSpatialBufferFloatEXT,
    thunk64_xrGetSpatialBufferStringEXT,
    thunk64_xrGetSpatialBufferUint16EXT,
    thunk64_xrGetSpatialBufferUint32EXT,
    thunk64_xrGetSpatialBufferUint8EXT,
    thunk64_xrGetSpatialBufferVector2fEXT,
    thunk64_xrGetSpatialBufferVector3fEXT,
    thunk64_xrGetSpatialEntityComponentDataBD,
    thunk64_xrGetSpatialEntityUuidBD,
    thunk64_xrGetSpatialGraphNodeBindingPropertiesMSFT,
    thunk64_xrGetSwapchainStateFB,
    thunk64_xrGetSystem,
    thunk64_xrGetSystemProperties,
    thunk64_xrGetTrackableMarkerANDROID,
    thunk64_xrGetTrackableObjectANDROID,
    thunk64_xrGetTrackablePlaneANDROID,
    thunk64_xrGetViewConfigurationProperties,
    thunk64_xrGetVirtualKeyboardDirtyTexturesMETA,
    thunk64_xrGetVirtualKeyboardModelAnimationStatesMETA,
    thunk64_xrGetVirtualKeyboardScaleMETA,
    thunk64_xrGetVirtualKeyboardTextureDataMETA,
    thunk64_xrGetVisibilityMaskKHR,
    thunk64_xrGetVulkanDeviceExtensionsKHR,
    thunk64_xrGetVulkanGraphicsDevice2KHR,
    thunk64_xrGetVulkanGraphicsDeviceKHR,
    thunk64_xrGetVulkanGraphicsRequirements2KHR,
    thunk64_xrGetVulkanGraphicsRequirementsKHR,
    thunk64_xrGetVulkanInstanceExtensionsKHR,
    thunk64_xrGetWorldMeshBufferRecommendSizeML,
    thunk64_xrImportLocalizationMapML,
    thunk64_xrLoadControllerModelMSFT,
    thunk64_xrLoadRenderModelFB,
    thunk64_xrLocateBodyJointsBD,
    thunk64_xrLocateBodyJointsFB,
    thunk64_xrLocateBodyJointsHTC,
    thunk64_xrLocateHandJointsEXT,
    thunk64_xrLocateSceneComponentsMSFT,
    thunk64_xrLocateSpace,
    thunk64_xrLocateSpaces,
    thunk64_xrLocateSpacesKHR,
    thunk64_xrLocateViews,
    thunk64_xrPassthroughLayerPauseFB,
    thunk64_xrPassthroughLayerResumeFB,
    thunk64_xrPassthroughLayerSetKeyboardHandsIntensityFB,
    thunk64_xrPassthroughLayerSetStyleFB,
    thunk64_xrPassthroughPauseFB,
    thunk64_xrPassthroughStartFB,
    thunk64_xrPathToString,
    thunk64_xrPauseSimultaneousHandsAndControllersTrackingMETA,
    thunk64_xrPerfSettingsSetPerformanceLevelEXT,
    thunk64_xrPersistAnchorANDROID,
    thunk64_xrPersistSpatialAnchorAsyncBD,
    thunk64_xrPersistSpatialAnchorCompleteBD,
    thunk64_xrPersistSpatialAnchorMSFT,
    thunk64_xrPersistSpatialEntityAsyncEXT,
    thunk64_xrPersistSpatialEntityCompleteEXT,
    thunk64_xrPollEvent,
    thunk64_xrPollFutureEXT,
    thunk64_xrPublishSpatialAnchorsAsyncML,
    thunk64_xrPublishSpatialAnchorsCompleteML,
    thunk64_xrQueryLocalizationMapsML,
    thunk64_xrQueryPerformanceMetricsCounterMETA,
    thunk64_xrQuerySenseDataAsyncBD,
    thunk64_xrQuerySenseDataCompleteBD,
    thunk64_xrQuerySpacesFB,
    thunk64_xrQuerySpatialAnchorsAsyncML,
    thunk64_xrQuerySpatialAnchorsCompleteML,
    thunk64_xrQuerySpatialComponentDataEXT,
    thunk64_xrQuerySystemTrackedKeyboardFB,
    thunk64_xrRaycastANDROID,
    thunk64_xrReleaseSwapchainImage,
    thunk64_xrRequestDisplayRefreshRateFB,
    thunk64_xrRequestExitSession,
    thunk64_xrRequestMapLocalizationML,
    thunk64_xrRequestSceneCaptureFB,
    thunk64_xrRequestWorldMeshAsyncML,
    thunk64_xrRequestWorldMeshCompleteML,
    thunk64_xrRequestWorldMeshStateAsyncML,
    thunk64_xrRequestWorldMeshStateCompleteML,
    thunk64_xrResetBodyTrackingCalibrationMETA,
    thunk64_xrResultToString,
    thunk64_xrResumeSimultaneousHandsAndControllersTrackingMETA,
    thunk64_xrRetrieveSpaceDiscoveryResultsMETA,
    thunk64_xrRetrieveSpaceQueryResultsFB,
    thunk64_xrSaveSpaceFB,
    thunk64_xrSaveSpaceListFB,
    thunk64_xrSaveSpacesMETA,
    thunk64_xrSendVirtualKeyboardInputMETA,
    thunk64_xrSetColorSpaceFB,
    thunk64_xrSetDigitalLensControlALMALENCE,
    thunk64_xrSetEnvironmentDepthEstimationVARJO,
    thunk64_xrSetEnvironmentDepthHandRemovalMETA,
    thunk64_xrSetInputDeviceActiveEXT,
    thunk64_xrSetInputDeviceLocationEXT,
    thunk64_xrSetInputDeviceStateBoolEXT,
    thunk64_xrSetInputDeviceStateFloatEXT,
    thunk64_xrSetInputDeviceStateVector2fEXT,
    thunk64_xrSetMarkerTrackingPredictionVARJO,
    thunk64_xrSetMarkerTrackingTimeoutVARJO,
    thunk64_xrSetMarkerTrackingVARJO,
    thunk64_xrSetPerformanceMetricsStateMETA,
    thunk64_xrSetSpaceComponentStatusFB,
    thunk64_xrSetSystemNotificationsML,
    thunk64_xrSetTrackingOptimizationSettingsHintQCOM,
    thunk64_xrSetViewOffsetVARJO,
    thunk64_xrSetVirtualKeyboardModelVisibilityMETA,
    thunk64_xrShareSpacesFB,
    thunk64_xrShareSpacesMETA,
    thunk64_xrShareSpatialAnchorAsyncBD,
    thunk64_xrShareSpatialAnchorCompleteBD,
    thunk64_xrSnapshotMarkerDetectorML,
    thunk64_xrStartColocationAdvertisementMETA,
    thunk64_xrStartColocationDiscoveryMETA,
    thunk64_xrStartEnvironmentDepthProviderMETA,
    thunk64_xrStartSenseDataProviderAsyncBD,
    thunk64_xrStartSenseDataProviderCompleteBD,
    thunk64_xrStopColocationAdvertisementMETA,
    thunk64_xrStopColocationDiscoveryMETA,
    thunk64_xrStopEnvironmentDepthProviderMETA,
    thunk64_xrStopHapticFeedback,
    thunk64_xrStopSenseDataProviderBD,
    thunk64_xrStringToPath,
    thunk64_xrStructureTypeToString,
    thunk64_xrStructureTypeToString2KHR,
    thunk64_xrSuggestBodyTrackingCalibrationOverrideMETA,
    thunk64_xrSuggestInteractionProfileBindings,
    thunk64_xrSuggestVirtualKeyboardLocationMETA,
    thunk64_xrSyncActions,
    thunk64_xrThermalGetTemperatureTrendEXT,
    thunk64_xrTriangleMeshBeginUpdateFB,
    thunk64_xrTriangleMeshBeginVertexBufferUpdateFB,
    thunk64_xrTriangleMeshEndUpdateFB,
    thunk64_xrTriangleMeshEndVertexBufferUpdateFB,
    thunk64_xrTriangleMeshGetIndexBufferFB,
    thunk64_xrTriangleMeshGetVertexBufferFB,
    thunk64_xrTryCreateSpatialGraphStaticNodeBindingMSFT,
    thunk64_xrUnpersistAnchorANDROID,
    thunk64_xrUnpersistSpatialAnchorAsyncBD,
    thunk64_xrUnpersistSpatialAnchorCompleteBD,
    thunk64_xrUnpersistSpatialAnchorMSFT,
    thunk64_xrUnpersistSpatialEntityAsyncEXT,
    thunk64_xrUnpersistSpatialEntityCompleteEXT,
    thunk64_xrUpdateHandMeshMSFT,
    thunk64_xrUpdatePassthroughColorLutMETA,
    thunk64_xrUpdateSpatialAnchorsExpirationAsyncML,
    thunk64_xrUpdateSpatialAnchorsExpirationCompleteML,
    thunk64_xrUpdateSwapchainFB,
    thunk64_xrWaitFrame,
    thunk64_xrWaitSwapchainImage,
};

#else

const unixlib_entry_t __wine_unix_call_funcs[] =
{
    init_openxr,
    is_available_instance_function_openxr,
    thunk32_xrAcquireEnvironmentDepthImageMETA,
    thunk32_xrAcquireSwapchainImage,
    thunk32_xrAllocateWorldMeshBufferML,
    thunk32_xrApplyForceFeedbackCurlMNDX,
    thunk32_xrApplyHapticFeedback,
    thunk32_xrAttachSessionActionSets,
    thunk32_xrBeginFrame,
    thunk32_xrBeginPlaneDetectionEXT,
    thunk32_xrBeginSession,
    thunk32_xrCancelFutureEXT,
    thunk32_xrCaptureSceneAsyncBD,
    thunk32_xrCaptureSceneCompleteBD,
    thunk32_xrChangeVirtualKeyboardTextContextMETA,
    thunk32_xrClearSpatialAnchorStoreMSFT,
    thunk32_xrComputeNewSceneMSFT,
    thunk32_xrCreateAction,
    thunk32_xrCreateActionSet,
    thunk32_xrCreateActionSpace,
    thunk32_xrCreateAnchorSpaceANDROID,
    thunk32_xrCreateAnchorSpaceBD,
    thunk32_xrCreateBodyTrackerBD,
    thunk32_xrCreateBodyTrackerFB,
    thunk32_xrCreateBodyTrackerHTC,
    thunk32_xrCreateDeviceAnchorPersistenceANDROID,
    thunk32_xrCreateEnvironmentDepthProviderMETA,
    thunk32_xrCreateEnvironmentDepthSwapchainMETA,
    thunk32_xrCreateExportedLocalizationMapML,
    thunk32_xrCreateEyeTrackerFB,
    thunk32_xrCreateFaceTracker2FB,
    thunk32_xrCreateFaceTrackerFB,
    thunk32_xrCreateFacialExpressionClientML,
    thunk32_xrCreateFacialTrackerHTC,
    thunk32_xrCreateFoveationProfileFB,
    thunk32_xrCreateGeometryInstanceFB,
    thunk32_xrCreateHandMeshSpaceMSFT,
    thunk32_xrCreateHandTrackerEXT,
    thunk32_xrCreateInstance,
    thunk32_xrCreateKeyboardSpaceFB,
    thunk32_xrCreateMarkerDetectorML,
    thunk32_xrCreateMarkerSpaceML,
    thunk32_xrCreateMarkerSpaceVARJO,
    thunk32_xrCreatePassthroughColorLutMETA,
    thunk32_xrCreatePassthroughFB,
    thunk32_xrCreatePassthroughHTC,
    thunk32_xrCreatePassthroughLayerFB,
    thunk32_xrCreatePersistedAnchorSpaceANDROID,
    thunk32_xrCreatePlaneDetectorEXT,
    thunk32_xrCreateReferenceSpace,
    thunk32_xrCreateRenderModelAssetEXT,
    thunk32_xrCreateRenderModelEXT,
    thunk32_xrCreateRenderModelSpaceEXT,
    thunk32_xrCreateSceneMSFT,
    thunk32_xrCreateSceneObserverMSFT,
    thunk32_xrCreateSenseDataProviderBD,
    thunk32_xrCreateSession,
    thunk32_xrCreateSpaceUserFB,
    thunk32_xrCreateSpatialAnchorAsyncBD,
    thunk32_xrCreateSpatialAnchorCompleteBD,
    thunk32_xrCreateSpatialAnchorEXT,
    thunk32_xrCreateSpatialAnchorFB,
    thunk32_xrCreateSpatialAnchorFromPersistedNameMSFT,
    thunk32_xrCreateSpatialAnchorHTC,
    thunk32_xrCreateSpatialAnchorMSFT,
    thunk32_xrCreateSpatialAnchorSpaceMSFT,
    thunk32_xrCreateSpatialAnchorStoreConnectionMSFT,
    thunk32_xrCreateSpatialAnchorsAsyncML,
    thunk32_xrCreateSpatialAnchorsCompleteML,
    thunk32_xrCreateSpatialAnchorsStorageML,
    thunk32_xrCreateSpatialContextAsyncEXT,
    thunk32_xrCreateSpatialContextCompleteEXT,
    thunk32_xrCreateSpatialDiscoverySnapshotAsyncEXT,
    thunk32_xrCreateSpatialDiscoverySnapshotCompleteEXT,
    thunk32_xrCreateSpatialEntityAnchorBD,
    thunk32_xrCreateSpatialEntityFromIdEXT,
    thunk32_xrCreateSpatialGraphNodeSpaceMSFT,
    thunk32_xrCreateSpatialPersistenceContextAsyncEXT,
    thunk32_xrCreateSpatialPersistenceContextCompleteEXT,
    thunk32_xrCreateSpatialUpdateSnapshotEXT,
    thunk32_xrCreateSwapchain,
    thunk32_xrCreateTrackableTrackerANDROID,
    thunk32_xrCreateTriangleMeshFB,
    thunk32_xrCreateVirtualKeyboardMETA,
    thunk32_xrCreateVirtualKeyboardSpaceMETA,
    thunk32_xrCreateWorldMeshDetectorML,
    thunk32_xrDeleteSpatialAnchorsAsyncML,
    thunk32_xrDeleteSpatialAnchorsCompleteML,
    thunk32_xrDeserializeSceneMSFT,
    thunk32_xrDestroyAction,
    thunk32_xrDestroyActionSet,
    thunk32_xrDestroyAnchorBD,
    thunk32_xrDestroyBodyTrackerBD,
    thunk32_xrDestroyBodyTrackerFB,
    thunk32_xrDestroyBodyTrackerHTC,
    thunk32_xrDestroyDeviceAnchorPersistenceANDROID,
    thunk32_xrDestroyEnvironmentDepthProviderMETA,
    thunk32_xrDestroyEnvironmentDepthSwapchainMETA,
    thunk32_xrDestroyExportedLocalizationMapML,
    thunk32_xrDestroyEyeTrackerFB,
    thunk32_xrDestroyFaceTracker2FB,
    thunk32_xrDestroyFaceTrackerFB,
    thunk32_xrDestroyFacialExpressionClientML,
    thunk32_xrDestroyFacialTrackerHTC,
    thunk32_xrDestroyFoveationProfileFB,
    thunk32_xrDestroyGeometryInstanceFB,
    thunk32_xrDestroyHandTrackerEXT,
    thunk32_xrDestroyInstance,
    thunk32_xrDestroyMarkerDetectorML,
    thunk32_xrDestroyPassthroughColorLutMETA,
    thunk32_xrDestroyPassthroughFB,
    thunk32_xrDestroyPassthroughHTC,
    thunk32_xrDestroyPassthroughLayerFB,
    thunk32_xrDestroyPlaneDetectorEXT,
    thunk32_xrDestroyRenderModelAssetEXT,
    thunk32_xrDestroyRenderModelEXT,
    thunk32_xrDestroySceneMSFT,
    thunk32_xrDestroySceneObserverMSFT,
    thunk32_xrDestroySenseDataProviderBD,
    thunk32_xrDestroySenseDataSnapshotBD,
    thunk32_xrDestroySession,
    thunk32_xrDestroySpace,
    thunk32_xrDestroySpaceUserFB,
    thunk32_xrDestroySpatialAnchorMSFT,
    thunk32_xrDestroySpatialAnchorStoreConnectionMSFT,
    thunk32_xrDestroySpatialAnchorsStorageML,
    thunk32_xrDestroySpatialContextEXT,
    thunk32_xrDestroySpatialEntityEXT,
    thunk32_xrDestroySpatialGraphNodeBindingMSFT,
    thunk32_xrDestroySpatialPersistenceContextEXT,
    thunk32_xrDestroySpatialSnapshotEXT,
    thunk32_xrDestroySwapchain,
    thunk32_xrDestroyTrackableTrackerANDROID,
    thunk32_xrDestroyTriangleMeshFB,
    thunk32_xrDestroyVirtualKeyboardMETA,
    thunk32_xrDestroyWorldMeshDetectorML,
    thunk32_xrDiscoverSpacesMETA,
    thunk32_xrDownloadSharedSpatialAnchorAsyncBD,
    thunk32_xrDownloadSharedSpatialAnchorCompleteBD,
    thunk32_xrEnableLocalizationEventsML,
    thunk32_xrEnableUserCalibrationEventsML,
    thunk32_xrEndFrame,
    thunk32_xrEndSession,
    thunk32_xrEnumerateApiLayerProperties,
    thunk32_xrEnumerateBoundSourcesForAction,
    thunk32_xrEnumerateColorSpacesFB,
    thunk32_xrEnumerateDisplayRefreshRatesFB,
    thunk32_xrEnumerateEnvironmentBlendModes,
    thunk32_xrEnumerateEnvironmentDepthSwapchainImagesMETA,
    thunk32_xrEnumerateExternalCamerasOCULUS,
    thunk32_xrEnumerateInstanceExtensionProperties,
    thunk32_xrEnumerateInteractionRenderModelIdsEXT,
    thunk32_xrEnumeratePerformanceMetricsCounterPathsMETA,
    thunk32_xrEnumeratePersistedAnchorsANDROID,
    thunk32_xrEnumeratePersistedSpatialAnchorNamesMSFT,
    thunk32_xrEnumerateRaycastSupportedTrackableTypesANDROID,
    thunk32_xrEnumerateReferenceSpaces,
    thunk32_xrEnumerateRenderModelPathsFB,
    thunk32_xrEnumerateRenderModelSubactionPathsEXT,
    thunk32_xrEnumerateReprojectionModesMSFT,
    thunk32_xrEnumerateSceneComputeFeaturesMSFT,
    thunk32_xrEnumerateSpaceSupportedComponentsFB,
    thunk32_xrEnumerateSpatialCapabilitiesEXT,
    thunk32_xrEnumerateSpatialCapabilityComponentTypesEXT,
    thunk32_xrEnumerateSpatialCapabilityFeaturesEXT,
    thunk32_xrEnumerateSpatialEntityComponentTypesBD,
    thunk32_xrEnumerateSpatialPersistenceScopesEXT,
    thunk32_xrEnumerateSupportedAnchorTrackableTypesANDROID,
    thunk32_xrEnumerateSupportedPersistenceAnchorTypesANDROID,
    thunk32_xrEnumerateSupportedTrackableTypesANDROID,
    thunk32_xrEnumerateSwapchainFormats,
    thunk32_xrEnumerateSwapchainImages,
    thunk32_xrEnumerateViewConfigurationViews,
    thunk32_xrEnumerateViewConfigurations,
    thunk32_xrEnumerateViveTrackerPathsHTCX,
    thunk32_xrEraseSpaceFB,
    thunk32_xrEraseSpacesMETA,
    thunk32_xrFreeWorldMeshBufferML,
    thunk32_xrGeometryInstanceSetTransformFB,
    thunk32_xrGetActionStateBoolean,
    thunk32_xrGetActionStateFloat,
    thunk32_xrGetActionStatePose,
    thunk32_xrGetActionStateVector2f,
    thunk32_xrGetAllTrackablesANDROID,
    thunk32_xrGetAnchorPersistStateANDROID,
    thunk32_xrGetAnchorUuidBD,
    thunk32_xrGetAudioInputDeviceGuidOculus,
    thunk32_xrGetAudioOutputDeviceGuidOculus,
    thunk32_xrGetBodySkeletonFB,
    thunk32_xrGetBodySkeletonHTC,
    thunk32_xrGetControllerModelKeyMSFT,
    thunk32_xrGetControllerModelPropertiesMSFT,
    thunk32_xrGetControllerModelStateMSFT,
    thunk32_xrGetCurrentInteractionProfile,
    thunk32_xrGetDeviceSampleRateFB,
    thunk32_xrGetDisplayRefreshRateFB,
    thunk32_xrGetEnvironmentDepthSwapchainStateMETA,
    thunk32_xrGetExportedLocalizationMapDataML,
    thunk32_xrGetEyeGazesFB,
    thunk32_xrGetFaceExpressionWeights2FB,
    thunk32_xrGetFaceExpressionWeightsFB,
    thunk32_xrGetFacialExpressionBlendShapePropertiesML,
    thunk32_xrGetFacialExpressionsHTC,
    thunk32_xrGetFoveationEyeTrackedStateMETA,
    thunk32_xrGetHandMeshFB,
    thunk32_xrGetInputSourceLocalizedName,
    thunk32_xrGetInstanceProperties,
    thunk32_xrGetMarkerDetectorStateML,
    thunk32_xrGetMarkerLengthML,
    thunk32_xrGetMarkerNumberML,
    thunk32_xrGetMarkerReprojectionErrorML,
    thunk32_xrGetMarkerSizeVARJO,
    thunk32_xrGetMarkerStringML,
    thunk32_xrGetMarkersML,
    thunk32_xrGetOpenGLGraphicsRequirementsKHR,
    thunk32_xrGetPassthroughCameraStateANDROID,
    thunk32_xrGetPassthroughPreferencesMETA,
    thunk32_xrGetPerformanceMetricsStateMETA,
    thunk32_xrGetPlaneDetectionStateEXT,
    thunk32_xrGetPlaneDetectionsEXT,
    thunk32_xrGetPlanePolygonBufferEXT,
    thunk32_xrGetQueriedSenseDataBD,
    thunk32_xrGetRecommendedLayerResolutionMETA,
    thunk32_xrGetReferenceSpaceBoundsRect,
    thunk32_xrGetRenderModelAssetDataEXT,
    thunk32_xrGetRenderModelAssetPropertiesEXT,
    thunk32_xrGetRenderModelPoseTopLevelUserPathEXT,
    thunk32_xrGetRenderModelPropertiesEXT,
    thunk32_xrGetRenderModelPropertiesFB,
    thunk32_xrGetRenderModelStateEXT,
    thunk32_xrGetSceneComponentsMSFT,
    thunk32_xrGetSceneComputeStateMSFT,
    thunk32_xrGetSceneMarkerDecodedStringMSFT,
    thunk32_xrGetSceneMarkerRawDataMSFT,
    thunk32_xrGetSceneMeshBuffersMSFT,
    thunk32_xrGetSenseDataProviderStateBD,
    thunk32_xrGetSerializedSceneFragmentDataMSFT,
    thunk32_xrGetSpaceBoundary2DFB,
    thunk32_xrGetSpaceBoundingBox2DFB,
    thunk32_xrGetSpaceBoundingBox3DFB,
    thunk32_xrGetSpaceComponentStatusFB,
    thunk32_xrGetSpaceContainerFB,
    thunk32_xrGetSpaceRoomLayoutFB,
    thunk32_xrGetSpaceSemanticLabelsFB,
    thunk32_xrGetSpaceTriangleMeshMETA,
    thunk32_xrGetSpaceUserIdFB,
    thunk32_xrGetSpaceUuidFB,
    thunk32_xrGetSpatialAnchorNameHTC,
    thunk32_xrGetSpatialAnchorStateML,
    thunk32_xrGetSpatialBufferFloatEXT,
    thunk32_xrGetSpatialBufferStringEXT,
    thunk32_xrGetSpatialBufferUint16EXT,
    thunk32_xrGetSpatialBufferUint32EXT,
    thunk32_xrGetSpatialBufferUint8EXT,
    thunk32_xrGetSpatialBufferVector2fEXT,
    thunk32_xrGetSpatialBufferVector3fEXT,
    thunk32_xrGetSpatialEntityComponentDataBD,
    thunk32_xrGetSpatialEntityUuidBD,
    thunk32_xrGetSpatialGraphNodeBindingPropertiesMSFT,
    thunk32_xrGetSwapchainStateFB,
    thunk32_xrGetSystem,
    thunk32_xrGetSystemProperties,
    thunk32_xrGetTrackableMarkerANDROID,
    thunk32_xrGetTrackableObjectANDROID,
    thunk32_xrGetTrackablePlaneANDROID,
    thunk32_xrGetViewConfigurationProperties,
    thunk32_xrGetVirtualKeyboardDirtyTexturesMETA,
    thunk32_xrGetVirtualKeyboardModelAnimationStatesMETA,
    thunk32_xrGetVirtualKeyboardScaleMETA,
    thunk32_xrGetVirtualKeyboardTextureDataMETA,
    thunk32_xrGetVisibilityMaskKHR,
    thunk32_xrGetVulkanDeviceExtensionsKHR,
    thunk32_xrGetVulkanGraphicsDevice2KHR,
    thunk32_xrGetVulkanGraphicsDeviceKHR,
    thunk32_xrGetVulkanGraphicsRequirements2KHR,
    thunk32_xrGetVulkanGraphicsRequirementsKHR,
    thunk32_xrGetVulkanInstanceExtensionsKHR,
    thunk32_xrGetWorldMeshBufferRecommendSizeML,
    thunk32_xrImportLocalizationMapML,
    thunk32_xrLoadControllerModelMSFT,
    thunk32_xrLoadRenderModelFB,
    thunk32_xrLocateBodyJointsBD,
    thunk32_xrLocateBodyJointsFB,
    thunk32_xrLocateBodyJointsHTC,
    thunk32_xrLocateHandJointsEXT,
    thunk32_xrLocateSceneComponentsMSFT,
    thunk32_xrLocateSpace,
    thunk32_xrLocateSpaces,
    thunk32_xrLocateSpacesKHR,
    thunk32_xrLocateViews,
    thunk32_xrPassthroughLayerPauseFB,
    thunk32_xrPassthroughLayerResumeFB,
    thunk32_xrPassthroughLayerSetKeyboardHandsIntensityFB,
    thunk32_xrPassthroughLayerSetStyleFB,
    thunk32_xrPassthroughPauseFB,
    thunk32_xrPassthroughStartFB,
    thunk32_xrPathToString,
    thunk32_xrPauseSimultaneousHandsAndControllersTrackingMETA,
    thunk32_xrPerfSettingsSetPerformanceLevelEXT,
    thunk32_xrPersistAnchorANDROID,
    thunk32_xrPersistSpatialAnchorAsyncBD,
    thunk32_xrPersistSpatialAnchorCompleteBD,
    thunk32_xrPersistSpatialAnchorMSFT,
    thunk32_xrPersistSpatialEntityAsyncEXT,
    thunk32_xrPersistSpatialEntityCompleteEXT,
    thunk32_xrPollEvent,
    thunk32_xrPollFutureEXT,
    thunk32_xrPublishSpatialAnchorsAsyncML,
    thunk32_xrPublishSpatialAnchorsCompleteML,
    thunk32_xrQueryLocalizationMapsML,
    thunk32_xrQueryPerformanceMetricsCounterMETA,
    thunk32_xrQuerySenseDataAsyncBD,
    thunk32_xrQuerySenseDataCompleteBD,
    thunk32_xrQuerySpacesFB,
    thunk32_xrQuerySpatialAnchorsAsyncML,
    thunk32_xrQuerySpatialAnchorsCompleteML,
    thunk32_xrQuerySpatialComponentDataEXT,
    thunk32_xrQuerySystemTrackedKeyboardFB,
    thunk32_xrRaycastANDROID,
    thunk32_xrReleaseSwapchainImage,
    thunk32_xrRequestDisplayRefreshRateFB,
    thunk32_xrRequestExitSession,
    thunk32_xrRequestMapLocalizationML,
    thunk32_xrRequestSceneCaptureFB,
    thunk32_xrRequestWorldMeshAsyncML,
    thunk32_xrRequestWorldMeshCompleteML,
    thunk32_xrRequestWorldMeshStateAsyncML,
    thunk32_xrRequestWorldMeshStateCompleteML,
    thunk32_xrResetBodyTrackingCalibrationMETA,
    thunk32_xrResultToString,
    thunk32_xrResumeSimultaneousHandsAndControllersTrackingMETA,
    thunk32_xrRetrieveSpaceDiscoveryResultsMETA,
    thunk32_xrRetrieveSpaceQueryResultsFB,
    thunk32_xrSaveSpaceFB,
    thunk32_xrSaveSpaceListFB,
    thunk32_xrSaveSpacesMETA,
    thunk32_xrSendVirtualKeyboardInputMETA,
    thunk32_xrSetColorSpaceFB,
    thunk32_xrSetDigitalLensControlALMALENCE,
    thunk32_xrSetEnvironmentDepthEstimationVARJO,
    thunk32_xrSetEnvironmentDepthHandRemovalMETA,
    thunk32_xrSetInputDeviceActiveEXT,
    thunk32_xrSetInputDeviceLocationEXT,
    thunk32_xrSetInputDeviceStateBoolEXT,
    thunk32_xrSetInputDeviceStateFloatEXT,
    thunk32_xrSetInputDeviceStateVector2fEXT,
    thunk32_xrSetMarkerTrackingPredictionVARJO,
    thunk32_xrSetMarkerTrackingTimeoutVARJO,
    thunk32_xrSetMarkerTrackingVARJO,
    thunk32_xrSetPerformanceMetricsStateMETA,
    thunk32_xrSetSpaceComponentStatusFB,
    thunk32_xrSetSystemNotificationsML,
    thunk32_xrSetTrackingOptimizationSettingsHintQCOM,
    thunk32_xrSetViewOffsetVARJO,
    thunk32_xrSetVirtualKeyboardModelVisibilityMETA,
    thunk32_xrShareSpacesFB,
    thunk32_xrShareSpacesMETA,
    thunk32_xrShareSpatialAnchorAsyncBD,
    thunk32_xrShareSpatialAnchorCompleteBD,
    thunk32_xrSnapshotMarkerDetectorML,
    thunk32_xrStartColocationAdvertisementMETA,
    thunk32_xrStartColocationDiscoveryMETA,
    thunk32_xrStartEnvironmentDepthProviderMETA,
    thunk32_xrStartSenseDataProviderAsyncBD,
    thunk32_xrStartSenseDataProviderCompleteBD,
    thunk32_xrStopColocationAdvertisementMETA,
    thunk32_xrStopColocationDiscoveryMETA,
    thunk32_xrStopEnvironmentDepthProviderMETA,
    thunk32_xrStopHapticFeedback,
    thunk32_xrStopSenseDataProviderBD,
    thunk32_xrStringToPath,
    thunk32_xrStructureTypeToString,
    thunk32_xrStructureTypeToString2KHR,
    thunk32_xrSuggestBodyTrackingCalibrationOverrideMETA,
    thunk32_xrSuggestInteractionProfileBindings,
    thunk32_xrSuggestVirtualKeyboardLocationMETA,
    thunk32_xrSyncActions,
    thunk32_xrThermalGetTemperatureTrendEXT,
    thunk32_xrTriangleMeshBeginUpdateFB,
    thunk32_xrTriangleMeshBeginVertexBufferUpdateFB,
    thunk32_xrTriangleMeshEndUpdateFB,
    thunk32_xrTriangleMeshEndVertexBufferUpdateFB,
    thunk32_xrTriangleMeshGetIndexBufferFB,
    thunk32_xrTriangleMeshGetVertexBufferFB,
    thunk32_xrTryCreateSpatialGraphStaticNodeBindingMSFT,
    thunk32_xrUnpersistAnchorANDROID,
    thunk32_xrUnpersistSpatialAnchorAsyncBD,
    thunk32_xrUnpersistSpatialAnchorCompleteBD,
    thunk32_xrUnpersistSpatialAnchorMSFT,
    thunk32_xrUnpersistSpatialEntityAsyncEXT,
    thunk32_xrUnpersistSpatialEntityCompleteEXT,
    thunk32_xrUpdateHandMeshMSFT,
    thunk32_xrUpdatePassthroughColorLutMETA,
    thunk32_xrUpdateSpatialAnchorsExpirationAsyncML,
    thunk32_xrUpdateSpatialAnchorsExpirationCompleteML,
    thunk32_xrUpdateSwapchainFB,
    thunk32_xrWaitFrame,
    thunk32_xrWaitSwapchainImage,
};

#endif /* _WIN64 */

C_ASSERT(ARRAYSIZE(__wine_unix_call_funcs) == unix_count);

