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

static inline void convert_XrEnvironmentDepthImageAcquireInfoMETA_win32_to_host(const XrEnvironmentDepthImageAcquireInfoMETA32 *in, XrEnvironmentDepthImageAcquireInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->space = in->space;
    out->displayTime = in->displayTime;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrEnvironmentDepthImageViewMETA_win32_to_host(const XrEnvironmentDepthImageViewMETA32 *in, XrEnvironmentDepthImageViewMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->fov = in->fov;
    out->pose = in->pose;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrEnvironmentDepthImageViewMETA_host_to_win32(const XrEnvironmentDepthImageViewMETA *in, XrEnvironmentDepthImageViewMETA32 *out)
{
    if (!in) return;

    out->fov = in->fov;
    out->pose = in->pose;
}

static inline void convert_XrEnvironmentDepthImageViewMETA_array_win32_to_host(struct conversion_context *ctx, const XrEnvironmentDepthImageViewMETA32 *in, XrEnvironmentDepthImageViewMETA *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrEnvironmentDepthImageViewMETA_win32_to_host(&in[i], &out[i]);
    }
}

static inline void convert_XrEnvironmentDepthImageViewMETA_array_host_to_win32(const XrEnvironmentDepthImageViewMETA *in, XrEnvironmentDepthImageViewMETA32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrEnvironmentDepthImageViewMETA_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrEnvironmentDepthImageMETA_win32_to_host(const XrEnvironmentDepthImageMETA32 *in, XrEnvironmentDepthImageMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->swapchainIndex = in->swapchainIndex;
    out->nearZ = in->nearZ;
    out->farZ = in->farZ;
    {
        unsigned int i;
        for (i = 0; i < 2; i++)
        {
            convert_XrEnvironmentDepthImageViewMETA_win32_to_host(&in->views[i], &out->views[i]);
        }
    }
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrEnvironmentDepthImageMETA_host_to_win32(const XrEnvironmentDepthImageMETA *in, XrEnvironmentDepthImageMETA32 *out)
{
    if (!in) return;

    out->swapchainIndex = in->swapchainIndex;
    out->nearZ = in->nearZ;
    out->farZ = in->farZ;
    convert_XrEnvironmentDepthImageViewMETA_array_host_to_win32(in->views, out->views, 2);
}

static inline void convert_XrSwapchainImageAcquireInfo_win32_to_host(const XrSwapchainImageAcquireInfo32 *in, XrSwapchainImageAcquireInfo *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrWorldMeshBufferSizeML_win32_to_host(const XrWorldMeshBufferSizeML32 *in, XrWorldMeshBufferSizeML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->size = in->size;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrWorldMeshBufferML_win32_to_host(const XrWorldMeshBufferML32 *in, XrWorldMeshBufferML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->bufferSize = in->bufferSize;
    out->buffer = (void *)(uintptr_t)UlongToPtr(in->buffer);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrWorldMeshBufferML_host_to_win32(const XrWorldMeshBufferML *in, XrWorldMeshBufferML32 *out)
{
    if (!in) return;

    out->bufferSize = in->bufferSize;
    out->buffer = PtrToUlong(in->buffer);
}

static inline void convert_XrForceFeedbackCurlApplyLocationsMNDX_win32_to_host(const XrForceFeedbackCurlApplyLocationsMNDX32 *in, XrForceFeedbackCurlApplyLocationsMNDX *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->locationCount = in->locationCount;
    out->locations = (XrForceFeedbackCurlApplyLocationMNDX *)(uintptr_t)UlongToPtr(in->locations);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrHapticActionInfo_win32_to_host(const XrHapticActionInfo32 *in, XrHapticActionInfo *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->action = in->action;
    out->subactionPath = in->subactionPath;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrHapticBaseHeader_win32_to_host(const XrHapticBaseHeader32 *in, XrHapticBaseHeader *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline const XrActionSet *convert_XrActionSet_array_win32_to_host(struct conversion_context *ctx, const PTR32 *in, uint32_t count)
{
    XrActionSet *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        out[i] = (XrActionSet)(uintptr_t)UlongToPtr(in[i]);
    }

    return out;
}

static inline void convert_XrSessionActionSetsAttachInfo_win32_to_host(struct conversion_context *ctx, const XrSessionActionSetsAttachInfo32 *in, XrSessionActionSetsAttachInfo *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->countActionSets = in->countActionSets;
    out->actionSets = convert_XrActionSet_array_win32_to_host(ctx, (const PTR32 *)(uintptr_t)UlongToPtr(in->actionSets), in->countActionSets);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFrameBeginInfo_win32_to_host(const XrFrameBeginInfo32 *in, XrFrameBeginInfo *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPlaneDetectorBeginInfoEXT_win32_to_host(const XrPlaneDetectorBeginInfoEXT32 *in, XrPlaneDetectorBeginInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->baseSpace = in->baseSpace;
    out->time = in->time;
    out->orientationCount = in->orientationCount;
    out->orientations = (const XrPlaneDetectorOrientationEXT *)(uintptr_t)UlongToPtr(in->orientations);
    out->semanticTypeCount = in->semanticTypeCount;
    out->semanticTypes = (const XrPlaneDetectorSemanticTypeEXT *)(uintptr_t)UlongToPtr(in->semanticTypes);
    out->maxPlanes = in->maxPlanes;
    out->minArea = in->minArea;
    out->boundingBoxPose = in->boundingBoxPose;
    out->boundingBoxExtent = in->boundingBoxExtent;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSessionBeginInfo_win32_to_host(struct conversion_context *ctx, const XrSessionBeginInfo32 *in, XrSessionBeginInfo *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->primaryViewConfigurationType = in->primaryViewConfigurationType;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SESSION_BEGIN_INFO_MSFT:
        {
            XrSecondaryViewConfigurationSessionBeginInfoMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSecondaryViewConfigurationSessionBeginInfoMSFT32 *in_ext = (const XrSecondaryViewConfigurationSessionBeginInfoMSFT32 *)in_header;
            out_ext->type = XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SESSION_BEGIN_INFO_MSFT;
            out_ext->next = NULL;
            out_ext->viewConfigurationCount = in_ext->viewConfigurationCount;
            out_ext->enabledViewConfigurationTypes = (const XrViewConfigurationType *)(uintptr_t)UlongToPtr(in_ext->enabledViewConfigurationTypes);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrFutureCancelInfoEXT_win32_to_host(const XrFutureCancelInfoEXT32 *in, XrFutureCancelInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->future = in->future;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSceneCaptureInfoBD_win32_to_host(const XrSceneCaptureInfoBD32 *in, XrSceneCaptureInfoBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFutureCompletionEXT_win32_to_host(const XrFutureCompletionEXT32 *in, XrFutureCompletionEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->futureResult = in->futureResult;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFutureCompletionEXT_host_to_win32(const XrFutureCompletionEXT *in, XrFutureCompletionEXT32 *out)
{
    if (!in) return;

    out->futureResult = in->futureResult;
}

static inline void convert_XrVirtualKeyboardTextContextChangeInfoMETA_win32_to_host(const XrVirtualKeyboardTextContextChangeInfoMETA32 *in, XrVirtualKeyboardTextContextChangeInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->textContext = (const char *)(uintptr_t)UlongToPtr(in->textContext);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSceneBoundsMSFT_win32_to_host(const XrSceneBoundsMSFT32 *in, XrSceneBoundsMSFT *out)
{
    if (!in) return;

    out->space = in->space;
    out->time = in->time;
    out->sphereCount = in->sphereCount;
    out->spheres = (const XrSceneSphereBoundMSFT *)(uintptr_t)UlongToPtr(in->spheres);
    out->boxCount = in->boxCount;
    out->boxes = (const XrSceneOrientedBoxBoundMSFT *)(uintptr_t)UlongToPtr(in->boxes);
    out->frustumCount = in->frustumCount;
    out->frustums = (const XrSceneFrustumBoundMSFT *)(uintptr_t)UlongToPtr(in->frustums);
}

static inline void convert_XrNewSceneComputeInfoMSFT_win32_to_host(struct conversion_context *ctx, const XrNewSceneComputeInfoMSFT32 *in, XrNewSceneComputeInfoMSFT *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->requestedFeatureCount = in->requestedFeatureCount;
    out->requestedFeatures = (const XrSceneComputeFeatureMSFT *)(uintptr_t)UlongToPtr(in->requestedFeatures);
    out->consistency = in->consistency;
    convert_XrSceneBoundsMSFT_win32_to_host(&in->bounds, &out->bounds);

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_VISUAL_MESH_COMPUTE_LOD_INFO_MSFT:
        {
            XrVisualMeshComputeLodInfoMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrVisualMeshComputeLodInfoMSFT32 *in_ext = (const XrVisualMeshComputeLodInfoMSFT32 *)in_header;
            out_ext->type = XR_TYPE_VISUAL_MESH_COMPUTE_LOD_INFO_MSFT;
            out_ext->next = NULL;
            out_ext->lod = in_ext->lod;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrActionCreateInfo_win32_to_host(const XrActionCreateInfo32 *in, XrActionCreateInfo *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    memcpy(out->actionName, in->actionName, XR_MAX_ACTION_NAME_SIZE * sizeof(char));
    out->actionType = in->actionType;
    out->countSubactionPaths = in->countSubactionPaths;
    out->subactionPaths = (const XrPath *)(uintptr_t)UlongToPtr(in->subactionPaths);
    memcpy(out->localizedActionName, in->localizedActionName, XR_MAX_LOCALIZED_ACTION_NAME_SIZE * sizeof(char));
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrActionSetCreateInfo_win32_to_host(const XrActionSetCreateInfo32 *in, XrActionSetCreateInfo *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    memcpy(out->actionSetName, in->actionSetName, XR_MAX_ACTION_SET_NAME_SIZE * sizeof(char));
    memcpy(out->localizedActionSetName, in->localizedActionSetName, XR_MAX_LOCALIZED_ACTION_SET_NAME_SIZE * sizeof(char));
    out->priority = in->priority;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrActionSpaceCreateInfo_win32_to_host(const XrActionSpaceCreateInfo32 *in, XrActionSpaceCreateInfo *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->action = in->action;
    out->subactionPath = in->subactionPath;
    out->poseInActionSpace = in->poseInActionSpace;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrAnchorSpaceCreateInfoANDROID_win32_to_host(const XrAnchorSpaceCreateInfoANDROID32 *in, XrAnchorSpaceCreateInfoANDROID *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->space = in->space;
    out->time = in->time;
    out->pose = in->pose;
    out->trackable = in->trackable;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrAnchorSpaceCreateInfoBD_win32_to_host(const XrAnchorSpaceCreateInfoBD32 *in, XrAnchorSpaceCreateInfoBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->anchor = in->anchor;
    out->poseInAnchorSpace = in->poseInAnchorSpace;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline const char * const*convert_char_pointer_array_win32_to_host(struct conversion_context *ctx, const char * const*in, uint32_t count)
{
    char **out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        out[i] = (char *)in[i];
    }

    return (void *)out;
}

static inline void convert_XrInstanceCreateInfo_win32_to_host(struct conversion_context *ctx, const XrInstanceCreateInfo32 *in, XrInstanceCreateInfo *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->createFlags = in->createFlags;
    out->applicationInfo = in->applicationInfo;
    out->enabledApiLayerCount = in->enabledApiLayerCount;
    out->enabledApiLayerNames = convert_char_pointer_array_win32_to_host(ctx, (const char * const*)(uintptr_t)UlongToPtr(in->enabledApiLayerNames), in->enabledApiLayerCount);
    out->enabledExtensionCount = in->enabledExtensionCount;
    out->enabledExtensionNames = convert_char_pointer_array_win32_to_host(ctx, (const char * const*)(uintptr_t)UlongToPtr(in->enabledExtensionNames), in->enabledExtensionCount);

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
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

#ifdef _WIN64
static inline void convert_XrInstanceCreateInfo_win64_to_host(struct conversion_context *ctx, const XrInstanceCreateInfo *in, XrInstanceCreateInfo *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

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

static inline void convert_XrApiLayerNextInfo_win32_to_host(const XrApiLayerNextInfo32 *in, XrApiLayerNextInfo *out)
{
    if (!in) return;

    out->structType = in->structType;
    out->structVersion = in->structVersion;
    out->structSize = in->structSize;
    memcpy(out->layerName, in->layerName, XR_MAX_API_LAYER_NAME_SIZE * sizeof(char));
    out->nextGetInstanceProcAddr = in->nextGetInstanceProcAddr;
    out->nextCreateApiLayerInstance = in->nextCreateApiLayerInstance;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrApiLayerNextInfo_host_to_win32(const XrApiLayerNextInfo *in, XrApiLayerNextInfo32 *out)
{
    if (!in) return;

    out->structType = in->structType;
    out->structVersion = in->structVersion;
    out->structSize = in->structSize;
    memcpy(out->layerName, in->layerName, XR_MAX_API_LAYER_NAME_SIZE * sizeof(char));
    out->nextGetInstanceProcAddr = in->nextGetInstanceProcAddr;
    out->nextCreateApiLayerInstance = in->nextCreateApiLayerInstance;
}

static inline XrApiLayerNextInfo *convert_XrApiLayerNextInfo_array_win32_to_host(struct conversion_context *ctx, const XrApiLayerNextInfo32 *in, uint32_t count)
{
    XrApiLayerNextInfo *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrApiLayerNextInfo_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrApiLayerNextInfo_array_host_to_win32(const XrApiLayerNextInfo *in, XrApiLayerNextInfo32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrApiLayerNextInfo_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrApiLayerCreateInfo_win32_to_host(struct conversion_context *ctx, const XrApiLayerCreateInfo32 *in, XrApiLayerCreateInfo *out)
{
    if (!in) return;

    out->structType = in->structType;
    out->structVersion = in->structVersion;
    out->structSize = in->structSize;
    out->loaderInstance = (void *)(uintptr_t)UlongToPtr(in->loaderInstance);
    memcpy(out->settings_file_location, in->settings_file_location, XR_API_LAYER_MAX_SETTINGS_PATH_SIZE * sizeof(char));
    out->nextInfo = convert_XrApiLayerNextInfo_array_win32_to_host(ctx, (XrApiLayerNextInfo32 *)(uintptr_t)UlongToPtr(in->nextInfo), 1);
}

static inline void convert_XrApiLayerCreateInfo_host_to_win32(const XrApiLayerCreateInfo *in, XrApiLayerCreateInfo32 *out)
{
    if (!in) return;

    out->loaderInstance = PtrToUlong(in->loaderInstance);
    convert_XrApiLayerNextInfo_array_host_to_win32(in->nextInfo, (XrApiLayerNextInfo32 *)(uintptr_t)UlongToPtr(out->nextInfo), 1);
}

static inline void convert_XrBodyTrackerCreateInfoBD_win32_to_host(const XrBodyTrackerCreateInfoBD32 *in, XrBodyTrackerCreateInfoBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->jointSet = in->jointSet;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrBodyTrackerCreateInfoFB_win32_to_host(const XrBodyTrackerCreateInfoFB32 *in, XrBodyTrackerCreateInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->bodyJointSet = in->bodyJointSet;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrBodyTrackerCreateInfoHTC_win32_to_host(const XrBodyTrackerCreateInfoHTC32 *in, XrBodyTrackerCreateInfoHTC *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->bodyJointSet = in->bodyJointSet;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrDeviceAnchorPersistenceCreateInfoANDROID_win32_to_host(const XrDeviceAnchorPersistenceCreateInfoANDROID32 *in, XrDeviceAnchorPersistenceCreateInfoANDROID *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrEnvironmentDepthProviderCreateInfoMETA_win32_to_host(const XrEnvironmentDepthProviderCreateInfoMETA32 *in, XrEnvironmentDepthProviderCreateInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->createFlags = in->createFlags;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrEnvironmentDepthSwapchainCreateInfoMETA_win32_to_host(const XrEnvironmentDepthSwapchainCreateInfoMETA32 *in, XrEnvironmentDepthSwapchainCreateInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->createFlags = in->createFlags;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrEyeTrackerCreateInfoFB_win32_to_host(const XrEyeTrackerCreateInfoFB32 *in, XrEyeTrackerCreateInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFaceTrackerCreateInfo2FB_win32_to_host(const XrFaceTrackerCreateInfo2FB32 *in, XrFaceTrackerCreateInfo2FB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->faceExpressionSet = in->faceExpressionSet;
    out->requestedDataSourceCount = in->requestedDataSourceCount;
    out->requestedDataSources = (XrFaceTrackingDataSource2FB *)(uintptr_t)UlongToPtr(in->requestedDataSources);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFaceTrackerCreateInfoFB_win32_to_host(const XrFaceTrackerCreateInfoFB32 *in, XrFaceTrackerCreateInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->faceExpressionSet = in->faceExpressionSet;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFacialExpressionClientCreateInfoML_win32_to_host(const XrFacialExpressionClientCreateInfoML32 *in, XrFacialExpressionClientCreateInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->requestedCount = in->requestedCount;
    out->requestedFacialBlendShapes = (const XrFacialBlendShapeML *)(uintptr_t)UlongToPtr(in->requestedFacialBlendShapes);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFacialTrackerCreateInfoHTC_win32_to_host(const XrFacialTrackerCreateInfoHTC32 *in, XrFacialTrackerCreateInfoHTC *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->facialTrackingType = in->facialTrackingType;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFoveationProfileCreateInfoFB_win32_to_host(struct conversion_context *ctx, const XrFoveationProfileCreateInfoFB32 *in, XrFoveationProfileCreateInfoFB *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_FOVEATION_LEVEL_PROFILE_CREATE_INFO_FB:
        {
            XrFoveationLevelProfileCreateInfoFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrFoveationLevelProfileCreateInfoFB32 *in_ext = (const XrFoveationLevelProfileCreateInfoFB32 *)in_header;
            out_ext->type = XR_TYPE_FOVEATION_LEVEL_PROFILE_CREATE_INFO_FB;
            out_ext->next = NULL;
            out_ext->level = in_ext->level;
            out_ext->verticalOffset = in_ext->verticalOffset;
            out_ext->dynamic = in_ext->dynamic;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrFoveationProfileCreateInfoFB_host_to_win32(const XrFoveationProfileCreateInfoFB *in, XrFoveationProfileCreateInfoFB32 *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure32 *out_header = (void *)out;
    (void)out_header;

    if (!in) return;


    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        default:
            break;
        }
    }
}

static inline void convert_XrGeometryInstanceCreateInfoFB_win32_to_host(const XrGeometryInstanceCreateInfoFB32 *in, XrGeometryInstanceCreateInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->layer = in->layer;
    out->mesh = in->mesh;
    out->baseSpace = in->baseSpace;
    out->pose = in->pose;
    out->scale = in->scale;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrHandMeshSpaceCreateInfoMSFT_win32_to_host(const XrHandMeshSpaceCreateInfoMSFT32 *in, XrHandMeshSpaceCreateInfoMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->handPoseType = in->handPoseType;
    out->poseInHandMeshSpace = in->poseInHandMeshSpace;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrHandTrackerCreateInfoEXT_win32_to_host(struct conversion_context *ctx, const XrHandTrackerCreateInfoEXT32 *in, XrHandTrackerCreateInfoEXT *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->hand = in->hand;
    out->handJointSet = in->handJointSet;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_HAND_TRACKING_DATA_SOURCE_INFO_EXT:
        {
            XrHandTrackingDataSourceInfoEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrHandTrackingDataSourceInfoEXT32 *in_ext = (const XrHandTrackingDataSourceInfoEXT32 *)in_header;
            out_ext->type = XR_TYPE_HAND_TRACKING_DATA_SOURCE_INFO_EXT;
            out_ext->next = NULL;
            out_ext->requestedDataSourceCount = in_ext->requestedDataSourceCount;
            out_ext->requestedDataSources = (XrHandTrackingDataSourceEXT *)(uintptr_t)UlongToPtr(in_ext->requestedDataSources);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_HAND_POSE_TYPE_INFO_MSFT:
        {
            XrHandPoseTypeInfoMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrHandPoseTypeInfoMSFT32 *in_ext = (const XrHandPoseTypeInfoMSFT32 *)in_header;
            out_ext->type = XR_TYPE_HAND_POSE_TYPE_INFO_MSFT;
            out_ext->next = NULL;
            out_ext->handPoseType = in_ext->handPoseType;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrKeyboardSpaceCreateInfoFB_win32_to_host(const XrKeyboardSpaceCreateInfoFB32 *in, XrKeyboardSpaceCreateInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->trackedKeyboardId = in->trackedKeyboardId;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrMarkerDetectorCreateInfoML_win32_to_host(struct conversion_context *ctx, const XrMarkerDetectorCreateInfoML32 *in, XrMarkerDetectorCreateInfoML *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->profile = in->profile;
    out->markerType = in->markerType;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_MARKER_DETECTOR_ARUCO_INFO_ML:
        {
            XrMarkerDetectorArucoInfoML *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrMarkerDetectorArucoInfoML32 *in_ext = (const XrMarkerDetectorArucoInfoML32 *)in_header;
            out_ext->type = XR_TYPE_MARKER_DETECTOR_ARUCO_INFO_ML;
            out_ext->next = NULL;
            out_ext->arucoDict = in_ext->arucoDict;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_MARKER_DETECTOR_SIZE_INFO_ML:
        {
            XrMarkerDetectorSizeInfoML *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrMarkerDetectorSizeInfoML32 *in_ext = (const XrMarkerDetectorSizeInfoML32 *)in_header;
            out_ext->type = XR_TYPE_MARKER_DETECTOR_SIZE_INFO_ML;
            out_ext->next = NULL;
            out_ext->markerLength = in_ext->markerLength;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_MARKER_DETECTOR_APRIL_TAG_INFO_ML:
        {
            XrMarkerDetectorAprilTagInfoML *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrMarkerDetectorAprilTagInfoML32 *in_ext = (const XrMarkerDetectorAprilTagInfoML32 *)in_header;
            out_ext->type = XR_TYPE_MARKER_DETECTOR_APRIL_TAG_INFO_ML;
            out_ext->next = NULL;
            out_ext->aprilTagDict = in_ext->aprilTagDict;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_MARKER_DETECTOR_CUSTOM_PROFILE_INFO_ML:
        {
            XrMarkerDetectorCustomProfileInfoML *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrMarkerDetectorCustomProfileInfoML32 *in_ext = (const XrMarkerDetectorCustomProfileInfoML32 *)in_header;
            out_ext->type = XR_TYPE_MARKER_DETECTOR_CUSTOM_PROFILE_INFO_ML;
            out_ext->next = NULL;
            out_ext->fpsHint = in_ext->fpsHint;
            out_ext->resolutionHint = in_ext->resolutionHint;
            out_ext->cameraHint = in_ext->cameraHint;
            out_ext->cornerRefineMethod = in_ext->cornerRefineMethod;
            out_ext->useEdgeRefinement = in_ext->useEdgeRefinement;
            out_ext->fullAnalysisIntervalHint = in_ext->fullAnalysisIntervalHint;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrMarkerSpaceCreateInfoML_win32_to_host(const XrMarkerSpaceCreateInfoML32 *in, XrMarkerSpaceCreateInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->markerDetector = in->markerDetector;
    out->marker = in->marker;
    out->poseInMarkerSpace = in->poseInMarkerSpace;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrMarkerSpaceCreateInfoVARJO_win32_to_host(const XrMarkerSpaceCreateInfoVARJO32 *in, XrMarkerSpaceCreateInfoVARJO *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->markerId = in->markerId;
    out->poseInMarkerSpace = in->poseInMarkerSpace;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPassthroughColorLutDataMETA_win32_to_host(const XrPassthroughColorLutDataMETA32 *in, XrPassthroughColorLutDataMETA *out)
{
    if (!in) return;

    out->bufferSize = in->bufferSize;
    out->buffer = (const uint8_t *)(uintptr_t)UlongToPtr(in->buffer);
}

static inline void convert_XrPassthroughColorLutCreateInfoMETA_win32_to_host(const XrPassthroughColorLutCreateInfoMETA32 *in, XrPassthroughColorLutCreateInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->channels = in->channels;
    out->resolution = in->resolution;
    convert_XrPassthroughColorLutDataMETA_win32_to_host(&in->data, &out->data);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPassthroughCreateInfoFB_win32_to_host(const XrPassthroughCreateInfoFB32 *in, XrPassthroughCreateInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->flags = in->flags;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPassthroughCreateInfoHTC_win32_to_host(const XrPassthroughCreateInfoHTC32 *in, XrPassthroughCreateInfoHTC *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->form = in->form;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPassthroughLayerCreateInfoFB_win32_to_host(const XrPassthroughLayerCreateInfoFB32 *in, XrPassthroughLayerCreateInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->passthrough = in->passthrough;
    out->flags = in->flags;
    out->purpose = in->purpose;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPersistedAnchorSpaceCreateInfoANDROID_win32_to_host(const XrPersistedAnchorSpaceCreateInfoANDROID32 *in, XrPersistedAnchorSpaceCreateInfoANDROID *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->anchorId = in->anchorId;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPlaneDetectorCreateInfoEXT_win32_to_host(const XrPlaneDetectorCreateInfoEXT32 *in, XrPlaneDetectorCreateInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->flags = in->flags;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrReferenceSpaceCreateInfo_win32_to_host(const XrReferenceSpaceCreateInfo32 *in, XrReferenceSpaceCreateInfo *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->referenceSpaceType = in->referenceSpaceType;
    out->poseInReferenceSpace = in->poseInReferenceSpace;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelAssetCreateInfoEXT_win32_to_host(const XrRenderModelAssetCreateInfoEXT32 *in, XrRenderModelAssetCreateInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->cacheId = in->cacheId;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelCreateInfoEXT_win32_to_host(struct conversion_context *ctx, const XrRenderModelCreateInfoEXT32 *in, XrRenderModelCreateInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->renderModelId = in->renderModelId;
    out->gltfExtensionCount = in->gltfExtensionCount;
    out->gltfExtensions = convert_char_pointer_array_win32_to_host(ctx, (const char * const*)(uintptr_t)UlongToPtr(in->gltfExtensions), in->gltfExtensionCount);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelSpaceCreateInfoEXT_win32_to_host(const XrRenderModelSpaceCreateInfoEXT32 *in, XrRenderModelSpaceCreateInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->renderModel = in->renderModel;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSceneCreateInfoMSFT_win32_to_host(const XrSceneCreateInfoMSFT32 *in, XrSceneCreateInfoMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSceneObserverCreateInfoMSFT_win32_to_host(const XrSceneObserverCreateInfoMSFT32 *in, XrSceneObserverCreateInfoMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSenseDataProviderCreateInfoBD_win32_to_host(struct conversion_context *ctx, const XrSenseDataProviderCreateInfoBD32 *in, XrSenseDataProviderCreateInfoBD *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->providerType = in->providerType;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_SPATIAL_MESH_BD:
        {
            XrSenseDataProviderCreateInfoSpatialMeshBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSenseDataProviderCreateInfoSpatialMeshBD32 *in_ext = (const XrSenseDataProviderCreateInfoSpatialMeshBD32 *)in_header;
            out_ext->type = XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_SPATIAL_MESH_BD;
            out_ext->next = NULL;
            out_ext->configFlags = in_ext->configFlags;
            out_ext->lod = in_ext->lod;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrSessionCreateInfo_win32_to_host(struct conversion_context *ctx, const XrSessionCreateInfo32 *in, XrSessionCreateInfo *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->createFlags = in->createFlags;
    out->systemId = in->systemId;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_GRAPHICS_BINDING_OPENGL_WIN32_KHR:
        {
            XrGraphicsBindingOpenGLWin32KHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrGraphicsBindingOpenGLWin32KHR32 *in_ext = (const XrGraphicsBindingOpenGLWin32KHR32 *)in_header;
            out_ext->type = XR_TYPE_GRAPHICS_BINDING_OPENGL_WIN32_KHR;
            out_ext->next = NULL;
            out_ext->hDC = in_ext->hDC;
            out_ext->hGLRC = in_ext->hGLRC;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_GRAPHICS_BINDING_D3D11_KHR:
        {
            XrGraphicsBindingD3D11KHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrGraphicsBindingD3D11KHR32 *in_ext = (const XrGraphicsBindingD3D11KHR32 *)in_header;
            out_ext->type = XR_TYPE_GRAPHICS_BINDING_D3D11_KHR;
            out_ext->next = NULL;
            out_ext->device = (ID3D11Device *)(uintptr_t)UlongToPtr(in_ext->device);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_GRAPHICS_BINDING_D3D12_KHR:
        {
            XrGraphicsBindingD3D12KHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrGraphicsBindingD3D12KHR32 *in_ext = (const XrGraphicsBindingD3D12KHR32 *)in_header;
            out_ext->type = XR_TYPE_GRAPHICS_BINDING_D3D12_KHR;
            out_ext->next = NULL;
            out_ext->device = (ID3D12Device *)(uintptr_t)UlongToPtr(in_ext->device);
            out_ext->queue = (ID3D12CommandQueue *)(uintptr_t)UlongToPtr(in_ext->queue);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR:
        {
            XrGraphicsBindingVulkanKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrGraphicsBindingVulkanKHR32 *in_ext = (const XrGraphicsBindingVulkanKHR32 *)in_header;
            out_ext->type = XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR;
            out_ext->next = NULL;
            out_ext->instance = in_ext->instance;
            out_ext->physicalDevice = in_ext->physicalDevice;
            out_ext->device = in_ext->device;
            out_ext->queueFamilyIndex = in_ext->queueFamilyIndex;
            out_ext->queueIndex = in_ext->queueIndex;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SESSION_CREATE_INFO_OVERLAY_EXTX:
        {
            XrSessionCreateInfoOverlayEXTX *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSessionCreateInfoOverlayEXTX32 *in_ext = (const XrSessionCreateInfoOverlayEXTX32 *)in_header;
            out_ext->type = XR_TYPE_SESSION_CREATE_INFO_OVERLAY_EXTX;
            out_ext->next = NULL;
            out_ext->createFlags = in_ext->createFlags;
            out_ext->sessionLayersPlacement = in_ext->sessionLayersPlacement;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_HOLOGRAPHIC_WINDOW_ATTACHMENT_MSFT:
        {
            XrHolographicWindowAttachmentMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrHolographicWindowAttachmentMSFT32 *in_ext = (const XrHolographicWindowAttachmentMSFT32 *)in_header;
            out_ext->type = XR_TYPE_HOLOGRAPHIC_WINDOW_ATTACHMENT_MSFT;
            out_ext->next = NULL;
            out_ext->holographicSpace = (IUnknown *)(uintptr_t)UlongToPtr(in_ext->holographicSpace);
            out_ext->coreWindow = (IUnknown *)(uintptr_t)UlongToPtr(in_ext->coreWindow);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrSpaceUserCreateInfoFB_win32_to_host(const XrSpaceUserCreateInfoFB32 *in, XrSpaceUserCreateInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->userId = in->userId;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorCreateInfoBD_win32_to_host(const XrSpatialAnchorCreateInfoBD32 *in, XrSpatialAnchorCreateInfoBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->space = in->space;
    out->pose = in->pose;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorCreateCompletionBD_win32_to_host(const XrSpatialAnchorCreateCompletionBD32 *in, XrSpatialAnchorCreateCompletionBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->futureResult = in->futureResult;
    out->uuid = in->uuid;
    out->anchor = in->anchor;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorCreateCompletionBD_host_to_win32(const XrSpatialAnchorCreateCompletionBD *in, XrSpatialAnchorCreateCompletionBD32 *out)
{
    if (!in) return;

    out->futureResult = in->futureResult;
    out->uuid = in->uuid;
    out->anchor = in->anchor;
}

static inline void convert_XrSpatialAnchorCreateInfoEXT_win32_to_host(const XrSpatialAnchorCreateInfoEXT32 *in, XrSpatialAnchorCreateInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->baseSpace = in->baseSpace;
    out->time = in->time;
    out->pose = in->pose;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorCreateInfoFB_win32_to_host(const XrSpatialAnchorCreateInfoFB32 *in, XrSpatialAnchorCreateInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->space = in->space;
    out->poseInSpace = in->poseInSpace;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_win32_to_host(const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT32 *in, XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->spatialAnchorStore = in->spatialAnchorStore;
    out->spatialAnchorPersistenceName = in->spatialAnchorPersistenceName;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorCreateInfoHTC_win32_to_host(const XrSpatialAnchorCreateInfoHTC32 *in, XrSpatialAnchorCreateInfoHTC *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->space = in->space;
    out->poseInSpace = in->poseInSpace;
    out->name = in->name;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorCreateInfoMSFT_win32_to_host(const XrSpatialAnchorCreateInfoMSFT32 *in, XrSpatialAnchorCreateInfoMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->space = in->space;
    out->pose = in->pose;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorSpaceCreateInfoMSFT_win32_to_host(const XrSpatialAnchorSpaceCreateInfoMSFT32 *in, XrSpatialAnchorSpaceCreateInfoMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->anchor = in->anchor;
    out->poseInAnchorSpace = in->poseInAnchorSpace;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorsCreateInfoBaseHeaderML_win32_to_host(const XrSpatialAnchorsCreateInfoBaseHeaderML32 *in, XrSpatialAnchorsCreateInfoBaseHeaderML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline XrSpace *convert_XrSpace_array_win32_to_host(struct conversion_context *ctx, const PTR32 *in, uint32_t count)
{
    XrSpace *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        out[i] = (XrSpace)(uintptr_t)UlongToPtr(in[i]);
    }

    return out;
}

static inline void convert_XrSpace_array_host_to_win32(const XrSpace *in, PTR32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        out[i] = PtrToUlong(in[i]);
    }
}

static inline void convert_XrCreateSpatialAnchorsCompletionML_win32_to_host(struct conversion_context *ctx, const XrCreateSpatialAnchorsCompletionML32 *in, XrCreateSpatialAnchorsCompletionML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->futureResult = in->futureResult;
    out->spaceCount = in->spaceCount;
    out->spaces = convert_XrSpace_array_win32_to_host(ctx, (PTR32 *)(uintptr_t)UlongToPtr(in->spaces), in->spaceCount);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrCreateSpatialAnchorsCompletionML_host_to_win32(const XrCreateSpatialAnchorsCompletionML *in, XrCreateSpatialAnchorsCompletionML32 *out)
{
    if (!in) return;

    out->futureResult = in->futureResult;
    out->spaceCount = in->spaceCount;
    convert_XrSpace_array_host_to_win32(in->spaces, (PTR32 *)(uintptr_t)UlongToPtr(out->spaces), in->spaceCount);
}

static inline void convert_XrSpatialAnchorsCreateStorageInfoML_win32_to_host(const XrSpatialAnchorsCreateStorageInfoML32 *in, XrSpatialAnchorsCreateStorageInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline const XrSpatialPersistenceContextEXT *convert_XrSpatialPersistenceContextEXT_array_win32_to_host(struct conversion_context *ctx, const PTR32 *in, uint32_t count)
{
    XrSpatialPersistenceContextEXT *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        out[i] = (XrSpatialPersistenceContextEXT)(uintptr_t)UlongToPtr(in[i]);
    }

    return out;
}

static inline void convert_XrSpatialCapabilityConfigurationBaseHeaderEXT_win32_to_host(const XrSpatialCapabilityConfigurationBaseHeaderEXT32 *in, XrSpatialCapabilityConfigurationBaseHeaderEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->capability = in->capability;
    out->enabledComponentCount = in->enabledComponentCount;
    out->enabledComponents = (const XrSpatialComponentTypeEXT *)(uintptr_t)UlongToPtr(in->enabledComponents);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline const XrSpatialCapabilityConfigurationBaseHeaderEXT * const*convert_XrSpatialCapabilityConfigurationBaseHeaderEXT_pointer_array_win32_to_host(struct conversion_context *ctx, const XrSpatialCapabilityConfigurationBaseHeaderEXT32 * const*in, uint32_t count)
{
    XrSpatialCapabilityConfigurationBaseHeaderEXT **out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        if (in[i])
        {
            out[i] = conversion_context_alloc(ctx, sizeof(*out[i]));
            convert_XrSpatialCapabilityConfigurationBaseHeaderEXT_win32_to_host((XrSpatialCapabilityConfigurationBaseHeaderEXT32 *)in[i], out[i]);
        }
        else
            out[i] = NULL;
    }

    return (void *)out;
}

static inline void convert_XrSpatialContextCreateInfoEXT_win32_to_host(struct conversion_context *ctx, const XrSpatialContextCreateInfoEXT32 *in, XrSpatialContextCreateInfoEXT *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->capabilityConfigCount = in->capabilityConfigCount;
    out->capabilityConfigs = convert_XrSpatialCapabilityConfigurationBaseHeaderEXT_pointer_array_win32_to_host(ctx, (const XrSpatialCapabilityConfigurationBaseHeaderEXT32 * const*)(uintptr_t)UlongToPtr(in->capabilityConfigs), in->capabilityConfigCount);

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPATIAL_CONTEXT_PERSISTENCE_CONFIG_EXT:
        {
            XrSpatialContextPersistenceConfigEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialContextPersistenceConfigEXT32 *in_ext = (const XrSpatialContextPersistenceConfigEXT32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_CONTEXT_PERSISTENCE_CONFIG_EXT;
            out_ext->next = NULL;
            out_ext->persistenceContextCount = in_ext->persistenceContextCount;
            out_ext->persistenceContexts = convert_XrSpatialPersistenceContextEXT_array_win32_to_host(ctx, (const PTR32 *)(uintptr_t)UlongToPtr(in_ext->persistenceContexts), in_ext->persistenceContextCount);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrCreateSpatialContextCompletionEXT_win32_to_host(const XrCreateSpatialContextCompletionEXT32 *in, XrCreateSpatialContextCompletionEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->futureResult = in->futureResult;
    out->spatialContext = in->spatialContext;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrCreateSpatialContextCompletionEXT_host_to_win32(const XrCreateSpatialContextCompletionEXT *in, XrCreateSpatialContextCompletionEXT32 *out)
{
    if (!in) return;

    out->futureResult = in->futureResult;
    out->spatialContext = in->spatialContext;
}

static inline void convert_XrSpatialDiscoverySnapshotCreateInfoEXT_win32_to_host(struct conversion_context *ctx, const XrSpatialDiscoverySnapshotCreateInfoEXT32 *in, XrSpatialDiscoverySnapshotCreateInfoEXT *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->componentTypeCount = in->componentTypeCount;
    out->componentTypes = (const XrSpatialComponentTypeEXT *)(uintptr_t)UlongToPtr(in->componentTypes);

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPATIAL_FILTER_TRACKING_STATE_EXT:
        {
            XrSpatialFilterTrackingStateEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialFilterTrackingStateEXT32 *in_ext = (const XrSpatialFilterTrackingStateEXT32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_FILTER_TRACKING_STATE_EXT;
            out_ext->next = NULL;
            out_ext->trackingState = in_ext->trackingState;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_DISCOVERY_PERSISTENCE_UUID_FILTER_EXT:
        {
            XrSpatialDiscoveryPersistenceUuidFilterEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialDiscoveryPersistenceUuidFilterEXT32 *in_ext = (const XrSpatialDiscoveryPersistenceUuidFilterEXT32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_DISCOVERY_PERSISTENCE_UUID_FILTER_EXT;
            out_ext->next = NULL;
            out_ext->persistedUuidCount = in_ext->persistedUuidCount;
            out_ext->persistedUuids = (const XrUuid *)(uintptr_t)UlongToPtr(in_ext->persistedUuids);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrCreateSpatialDiscoverySnapshotCompletionInfoEXT_win32_to_host(const XrCreateSpatialDiscoverySnapshotCompletionInfoEXT32 *in, XrCreateSpatialDiscoverySnapshotCompletionInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->baseSpace = in->baseSpace;
    out->time = in->time;
    out->future = in->future;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrCreateSpatialDiscoverySnapshotCompletionEXT_win32_to_host(const XrCreateSpatialDiscoverySnapshotCompletionEXT32 *in, XrCreateSpatialDiscoverySnapshotCompletionEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->futureResult = in->futureResult;
    out->snapshot = in->snapshot;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrCreateSpatialDiscoverySnapshotCompletionEXT_host_to_win32(const XrCreateSpatialDiscoverySnapshotCompletionEXT *in, XrCreateSpatialDiscoverySnapshotCompletionEXT32 *out)
{
    if (!in) return;

    out->futureResult = in->futureResult;
    out->snapshot = in->snapshot;
}

static inline void convert_XrSpatialEntityAnchorCreateInfoBD_win32_to_host(const XrSpatialEntityAnchorCreateInfoBD32 *in, XrSpatialEntityAnchorCreateInfoBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->snapshot = in->snapshot;
    out->entityId = in->entityId;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialEntityFromIdCreateInfoEXT_win32_to_host(const XrSpatialEntityFromIdCreateInfoEXT32 *in, XrSpatialEntityFromIdCreateInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->entityId = in->entityId;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialGraphNodeSpaceCreateInfoMSFT_win32_to_host(const XrSpatialGraphNodeSpaceCreateInfoMSFT32 *in, XrSpatialGraphNodeSpaceCreateInfoMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->nodeType = in->nodeType;
    memcpy(out->nodeId, in->nodeId, XR_GUID_SIZE_MSFT * sizeof(uint8_t));
    out->pose = in->pose;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialPersistenceContextCreateInfoEXT_win32_to_host(const XrSpatialPersistenceContextCreateInfoEXT32 *in, XrSpatialPersistenceContextCreateInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->scope = in->scope;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrCreateSpatialPersistenceContextCompletionEXT_win32_to_host(const XrCreateSpatialPersistenceContextCompletionEXT32 *in, XrCreateSpatialPersistenceContextCompletionEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->futureResult = in->futureResult;
    out->createResult = in->createResult;
    out->persistenceContext = in->persistenceContext;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrCreateSpatialPersistenceContextCompletionEXT_host_to_win32(const XrCreateSpatialPersistenceContextCompletionEXT *in, XrCreateSpatialPersistenceContextCompletionEXT32 *out)
{
    if (!in) return;

    out->futureResult = in->futureResult;
    out->createResult = in->createResult;
    out->persistenceContext = in->persistenceContext;
}

static inline const XrSpatialEntityEXT *convert_XrSpatialEntityEXT_array_win32_to_host(struct conversion_context *ctx, const PTR32 *in, uint32_t count)
{
    XrSpatialEntityEXT *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        out[i] = (XrSpatialEntityEXT)(uintptr_t)UlongToPtr(in[i]);
    }

    return out;
}

static inline void convert_XrSpatialUpdateSnapshotCreateInfoEXT_win32_to_host(struct conversion_context *ctx, const XrSpatialUpdateSnapshotCreateInfoEXT32 *in, XrSpatialUpdateSnapshotCreateInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->entityCount = in->entityCount;
    out->entities = convert_XrSpatialEntityEXT_array_win32_to_host(ctx, (const PTR32 *)(uintptr_t)UlongToPtr(in->entities), in->entityCount);
    out->componentTypeCount = in->componentTypeCount;
    out->componentTypes = (const XrSpatialComponentTypeEXT *)(uintptr_t)UlongToPtr(in->componentTypes);
    out->baseSpace = in->baseSpace;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSwapchainCreateInfo_win32_to_host(struct conversion_context *ctx, const XrSwapchainCreateInfo32 *in, XrSwapchainCreateInfo *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->createFlags = in->createFlags;
    out->usageFlags = in->usageFlags;
    out->format = in->format;
    out->sampleCount = in->sampleCount;
    out->width = in->width;
    out->height = in->height;
    out->faceCount = in->faceCount;
    out->arraySize = in->arraySize;
    out->mipCount = in->mipCount;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_VULKAN_SWAPCHAIN_CREATE_INFO_META:
        {
            XrVulkanSwapchainCreateInfoMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrVulkanSwapchainCreateInfoMETA32 *in_ext = (const XrVulkanSwapchainCreateInfoMETA32 *)in_header;
            out_ext->type = XR_TYPE_VULKAN_SWAPCHAIN_CREATE_INFO_META;
            out_ext->next = NULL;
            out_ext->additionalCreateFlags = in_ext->additionalCreateFlags;
            out_ext->additionalUsageFlags = in_ext->additionalUsageFlags;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SWAPCHAIN_CREATE_INFO_MSFT:
        {
            XrSecondaryViewConfigurationSwapchainCreateInfoMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSecondaryViewConfigurationSwapchainCreateInfoMSFT32 *in_ext = (const XrSecondaryViewConfigurationSwapchainCreateInfoMSFT32 *)in_header;
            out_ext->type = XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SWAPCHAIN_CREATE_INFO_MSFT;
            out_ext->next = NULL;
            out_ext->viewConfigurationType = in_ext->viewConfigurationType;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SWAPCHAIN_CREATE_INFO_FOVEATION_FB:
        {
            XrSwapchainCreateInfoFoveationFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSwapchainCreateInfoFoveationFB32 *in_ext = (const XrSwapchainCreateInfoFoveationFB32 *)in_header;
            out_ext->type = XR_TYPE_SWAPCHAIN_CREATE_INFO_FOVEATION_FB;
            out_ext->next = NULL;
            out_ext->flags = in_ext->flags;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrTrackableMarkerDatabaseANDROID_win32_to_host(const XrTrackableMarkerDatabaseANDROID32 *in, XrTrackableMarkerDatabaseANDROID *out)
{
    if (!in) return;

    out->dictionary = in->dictionary;
    out->entryCount = in->entryCount;
    out->entries = (const XrTrackableMarkerDatabaseEntryANDROID *)(uintptr_t)UlongToPtr(in->entries);
}

static inline const XrTrackableMarkerDatabaseANDROID *convert_XrTrackableMarkerDatabaseANDROID_array_win32_to_host(struct conversion_context *ctx, const XrTrackableMarkerDatabaseANDROID32 *in, uint32_t count)
{
    XrTrackableMarkerDatabaseANDROID *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrTrackableMarkerDatabaseANDROID_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrTrackableTrackerCreateInfoANDROID_win32_to_host(struct conversion_context *ctx, const XrTrackableTrackerCreateInfoANDROID32 *in, XrTrackableTrackerCreateInfoANDROID *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->trackableType = in->trackableType;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_TRACKABLE_OBJECT_CONFIGURATION_ANDROID:
        {
            XrTrackableObjectConfigurationANDROID *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrTrackableObjectConfigurationANDROID32 *in_ext = (const XrTrackableObjectConfigurationANDROID32 *)in_header;
            out_ext->type = XR_TYPE_TRACKABLE_OBJECT_CONFIGURATION_ANDROID;
            out_ext->next = NULL;
            out_ext->labelCount = in_ext->labelCount;
            out_ext->activeLabels = (const XrObjectLabelANDROID *)(uintptr_t)UlongToPtr(in_ext->activeLabels);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_TRACKABLE_MARKER_CONFIGURATION_ANDROID:
        {
            XrTrackableMarkerConfigurationANDROID *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrTrackableMarkerConfigurationANDROID32 *in_ext = (const XrTrackableMarkerConfigurationANDROID32 *)in_header;
            out_ext->type = XR_TYPE_TRACKABLE_MARKER_CONFIGURATION_ANDROID;
            out_ext->next = NULL;
            out_ext->trackingMode = in_ext->trackingMode;
            out_ext->databaseCount = in_ext->databaseCount;
            out_ext->databases = convert_XrTrackableMarkerDatabaseANDROID_array_win32_to_host(ctx, (const XrTrackableMarkerDatabaseANDROID32 *)(uintptr_t)UlongToPtr(in_ext->databases), in_ext->databaseCount);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrTriangleMeshCreateInfoFB_win32_to_host(const XrTriangleMeshCreateInfoFB32 *in, XrTriangleMeshCreateInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->flags = in->flags;
    out->windingOrder = in->windingOrder;
    out->vertexCount = in->vertexCount;
    out->vertexBuffer = (const XrVector3f *)(uintptr_t)UlongToPtr(in->vertexBuffer);
    out->triangleCount = in->triangleCount;
    out->indexBuffer = (const uint32_t *)(uintptr_t)UlongToPtr(in->indexBuffer);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrVirtualKeyboardCreateInfoMETA_win32_to_host(const XrVirtualKeyboardCreateInfoMETA32 *in, XrVirtualKeyboardCreateInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrVirtualKeyboardSpaceCreateInfoMETA_win32_to_host(const XrVirtualKeyboardSpaceCreateInfoMETA32 *in, XrVirtualKeyboardSpaceCreateInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->locationType = in->locationType;
    out->space = in->space;
    out->poseInSpace = in->poseInSpace;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrVulkanDeviceCreateInfoKHR_win32_to_host(const XrVulkanDeviceCreateInfoKHR32 *in, XrVulkanDeviceCreateInfoKHR *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->systemId = in->systemId;
    out->createFlags = in->createFlags;
    out->pfnGetInstanceProcAddr = in->pfnGetInstanceProcAddr;
    out->vulkanPhysicalDevice = in->vulkanPhysicalDevice;
    out->vulkanCreateInfo = (const VkDeviceCreateInfo *)(uintptr_t)UlongToPtr(in->vulkanCreateInfo);
    out->vulkanAllocator = (const VkAllocationCallbacks *)(uintptr_t)UlongToPtr(in->vulkanAllocator);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrVulkanInstanceCreateInfoKHR_win32_to_host(const XrVulkanInstanceCreateInfoKHR32 *in, XrVulkanInstanceCreateInfoKHR *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->systemId = in->systemId;
    out->createFlags = in->createFlags;
    out->pfnGetInstanceProcAddr = in->pfnGetInstanceProcAddr;
    out->vulkanCreateInfo = (const VkInstanceCreateInfo *)(uintptr_t)UlongToPtr(in->vulkanCreateInfo);
    out->vulkanAllocator = (const VkAllocationCallbacks *)(uintptr_t)UlongToPtr(in->vulkanAllocator);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrWorldMeshDetectorCreateInfoML_win32_to_host(const XrWorldMeshDetectorCreateInfoML32 *in, XrWorldMeshDetectorCreateInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorsDeleteInfoML_win32_to_host(const XrSpatialAnchorsDeleteInfoML32 *in, XrSpatialAnchorsDeleteInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->uuidCount = in->uuidCount;
    out->uuids = (const XrUuidEXT *)(uintptr_t)UlongToPtr(in->uuids);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorsDeleteCompletionML_win32_to_host(struct conversion_context *ctx, const XrSpatialAnchorsDeleteCompletionML32 *in, XrSpatialAnchorsDeleteCompletionML *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->futureResult = in->futureResult;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_DETAILS_ML:
        {
            XrSpatialAnchorsDeleteCompletionDetailsML *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialAnchorsDeleteCompletionDetailsML32 *in_ext = (const XrSpatialAnchorsDeleteCompletionDetailsML32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_DETAILS_ML;
            out_ext->next = NULL;
            out_ext->resultCount = in_ext->resultCount;
            out_ext->results = (XrSpatialAnchorCompletionResultML *)(uintptr_t)UlongToPtr(in_ext->results);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrSpatialAnchorsDeleteCompletionML_host_to_win32(const XrSpatialAnchorsDeleteCompletionML *in, XrSpatialAnchorsDeleteCompletionML32 *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure32 *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->futureResult = in->futureResult;

    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_DETAILS_ML:
        {
            XrSpatialAnchorsDeleteCompletionDetailsML32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_DETAILS_ML);
            const XrSpatialAnchorsDeleteCompletionDetailsML *in_ext = (const XrSpatialAnchorsDeleteCompletionDetailsML *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_DETAILS_ML;
            out_ext->resultCount = in_ext->resultCount;
            out_ext->results = PtrToUlong(in_ext->results);
            out_header = (void *)out_ext;
            break;
        }
        default:
            break;
        }
    }
}

static inline void convert_XrDeserializeSceneFragmentMSFT_win32_to_host(const XrDeserializeSceneFragmentMSFT32 *in, XrDeserializeSceneFragmentMSFT *out)
{
    if (!in) return;

    out->bufferSize = in->bufferSize;
    out->buffer = (const uint8_t *)(uintptr_t)UlongToPtr(in->buffer);
}

static inline const XrDeserializeSceneFragmentMSFT *convert_XrDeserializeSceneFragmentMSFT_array_win32_to_host(struct conversion_context *ctx, const XrDeserializeSceneFragmentMSFT32 *in, uint32_t count)
{
    XrDeserializeSceneFragmentMSFT *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrDeserializeSceneFragmentMSFT_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrSceneDeserializeInfoMSFT_win32_to_host(struct conversion_context *ctx, const XrSceneDeserializeInfoMSFT32 *in, XrSceneDeserializeInfoMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->fragmentCount = in->fragmentCount;
    out->fragments = convert_XrDeserializeSceneFragmentMSFT_array_win32_to_host(ctx, (const XrDeserializeSceneFragmentMSFT32 *)(uintptr_t)UlongToPtr(in->fragments), in->fragmentCount);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpaceFilterBaseHeaderMETA_win32_to_host(const XrSpaceFilterBaseHeaderMETA32 *in, XrSpaceFilterBaseHeaderMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline const XrSpaceFilterBaseHeaderMETA * const *convert_XrSpaceFilterBaseHeaderMETA_pointer_array_win32_to_host(struct conversion_context *ctx, const XrSpaceFilterBaseHeaderMETA32 * const *in, uint32_t count)
{
    XrSpaceFilterBaseHeaderMETA **out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        if (in[i])
        {
            out[i] = conversion_context_alloc(ctx, sizeof(*out[i]));
            convert_XrSpaceFilterBaseHeaderMETA_win32_to_host((XrSpaceFilterBaseHeaderMETA32 *)in[i], out[i]);
        }
        else
            out[i] = NULL;
    }

    return (void *)out;
}

static inline void convert_XrSpaceDiscoveryInfoMETA_win32_to_host(struct conversion_context *ctx, const XrSpaceDiscoveryInfoMETA32 *in, XrSpaceDiscoveryInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->filterCount = in->filterCount;
    out->filters = convert_XrSpaceFilterBaseHeaderMETA_pointer_array_win32_to_host(ctx, (const XrSpaceFilterBaseHeaderMETA32 * const *)(uintptr_t)UlongToPtr(in->filters), in->filterCount);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSharedSpatialAnchorDownloadInfoBD_win32_to_host(const XrSharedSpatialAnchorDownloadInfoBD32 *in, XrSharedSpatialAnchorDownloadInfoBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->uuid = in->uuid;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrLocalizationEnableEventsInfoML_win32_to_host(const XrLocalizationEnableEventsInfoML32 *in, XrLocalizationEnableEventsInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->enabled = in->enabled;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrUserCalibrationEnableEventsInfoML_win32_to_host(const XrUserCalibrationEnableEventsInfoML32 *in, XrUserCalibrationEnableEventsInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->enabled = in->enabled;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrCompositionLayerBaseHeader_win32_to_host(struct conversion_context *ctx, const XrCompositionLayerBaseHeader32 *in, XrCompositionLayerBaseHeader *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->layerFlags = in->layerFlags;
    out->space = in->space;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_COMPOSITION_LAYER_IMAGE_LAYOUT_FB:
        {
            XrCompositionLayerImageLayoutFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrCompositionLayerImageLayoutFB32 *in_ext = (const XrCompositionLayerImageLayoutFB32 *)in_header;
            out_ext->type = XR_TYPE_COMPOSITION_LAYER_IMAGE_LAYOUT_FB;
            out_ext->next = NULL;
            out_ext->flags = in_ext->flags;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_COMPOSITION_LAYER_ALPHA_BLEND_FB:
        {
            XrCompositionLayerAlphaBlendFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrCompositionLayerAlphaBlendFB32 *in_ext = (const XrCompositionLayerAlphaBlendFB32 *)in_header;
            out_ext->type = XR_TYPE_COMPOSITION_LAYER_ALPHA_BLEND_FB;
            out_ext->next = NULL;
            out_ext->srcFactorColor = in_ext->srcFactorColor;
            out_ext->dstFactorColor = in_ext->dstFactorColor;
            out_ext->srcFactorAlpha = in_ext->srcFactorAlpha;
            out_ext->dstFactorAlpha = in_ext->dstFactorAlpha;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_COMPOSITION_LAYER_SECURE_CONTENT_FB:
        {
            XrCompositionLayerSecureContentFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrCompositionLayerSecureContentFB32 *in_ext = (const XrCompositionLayerSecureContentFB32 *)in_header;
            out_ext->type = XR_TYPE_COMPOSITION_LAYER_SECURE_CONTENT_FB;
            out_ext->next = NULL;
            out_ext->flags = in_ext->flags;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_COMPOSITION_LAYER_COLOR_SCALE_BIAS_KHR:
        {
            XrCompositionLayerColorScaleBiasKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrCompositionLayerColorScaleBiasKHR32 *in_ext = (const XrCompositionLayerColorScaleBiasKHR32 *)in_header;
            out_ext->type = XR_TYPE_COMPOSITION_LAYER_COLOR_SCALE_BIAS_KHR;
            out_ext->next = NULL;
            out_ext->colorScale = in_ext->colorScale;
            out_ext->colorBias = in_ext->colorBias;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_COMPOSITION_LAYER_SETTINGS_FB:
        {
            XrCompositionLayerSettingsFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrCompositionLayerSettingsFB32 *in_ext = (const XrCompositionLayerSettingsFB32 *)in_header;
            out_ext->type = XR_TYPE_COMPOSITION_LAYER_SETTINGS_FB;
            out_ext->next = NULL;
            out_ext->layerFlags = in_ext->layerFlags;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_FB:
        {
            XrCompositionLayerDepthTestFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrCompositionLayerDepthTestFB32 *in_ext = (const XrCompositionLayerDepthTestFB32 *)in_header;
            out_ext->type = XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_FB;
            out_ext->next = NULL;
            out_ext->depthMask = in_ext->depthMask;
            out_ext->compareOp = in_ext->compareOp;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline const XrCompositionLayerBaseHeader * const*convert_XrCompositionLayerBaseHeader_pointer_array_win32_to_host(struct conversion_context *ctx, const XrCompositionLayerBaseHeader32 * const*in, uint32_t count)
{
    XrCompositionLayerBaseHeader **out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        if (in[i])
        {
            out[i] = conversion_context_alloc(ctx, sizeof(*out[i]));
            convert_XrCompositionLayerBaseHeader_win32_to_host(ctx, (XrCompositionLayerBaseHeader32 *)in[i], out[i]);
        }
        else
            out[i] = NULL;
    }

    return (void *)out;
}

static inline void convert_XrSecondaryViewConfigurationLayerInfoMSFT_win32_to_host(struct conversion_context *ctx, const XrSecondaryViewConfigurationLayerInfoMSFT32 *in, XrSecondaryViewConfigurationLayerInfoMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->viewConfigurationType = in->viewConfigurationType;
    out->environmentBlendMode = in->environmentBlendMode;
    out->layerCount = in->layerCount;
    out->layers = convert_XrCompositionLayerBaseHeader_pointer_array_win32_to_host(ctx, (const XrCompositionLayerBaseHeader32 * const*)(uintptr_t)UlongToPtr(in->layers), in->layerCount);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline const XrSecondaryViewConfigurationLayerInfoMSFT *convert_XrSecondaryViewConfigurationLayerInfoMSFT_array_win32_to_host(struct conversion_context *ctx, const XrSecondaryViewConfigurationLayerInfoMSFT32 *in, uint32_t count)
{
    XrSecondaryViewConfigurationLayerInfoMSFT *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrSecondaryViewConfigurationLayerInfoMSFT_win32_to_host(ctx, &in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrFrameEndInfo_win32_to_host(struct conversion_context *ctx, const XrFrameEndInfo32 *in, XrFrameEndInfo *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->displayTime = in->displayTime;
    out->environmentBlendMode = in->environmentBlendMode;
    out->layerCount = in->layerCount;
    out->layers = convert_XrCompositionLayerBaseHeader_pointer_array_win32_to_host(ctx, (const XrCompositionLayerBaseHeader32 * const*)(uintptr_t)UlongToPtr(in->layers), in->layerCount);

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_END_INFO_MSFT:
        {
            XrSecondaryViewConfigurationFrameEndInfoMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSecondaryViewConfigurationFrameEndInfoMSFT32 *in_ext = (const XrSecondaryViewConfigurationFrameEndInfoMSFT32 *)in_header;
            out_ext->type = XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_END_INFO_MSFT;
            out_ext->next = NULL;
            out_ext->viewConfigurationCount = in_ext->viewConfigurationCount;
            out_ext->viewConfigurationLayersInfo = convert_XrSecondaryViewConfigurationLayerInfoMSFT_array_win32_to_host(ctx, (const XrSecondaryViewConfigurationLayerInfoMSFT32 *)(uintptr_t)UlongToPtr(in_ext->viewConfigurationLayersInfo), in_ext->viewConfigurationCount);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_LOCAL_DIMMING_FRAME_END_INFO_META:
        {
            XrLocalDimmingFrameEndInfoMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrLocalDimmingFrameEndInfoMETA32 *in_ext = (const XrLocalDimmingFrameEndInfoMETA32 *)in_header;
            out_ext->type = XR_TYPE_LOCAL_DIMMING_FRAME_END_INFO_META;
            out_ext->next = NULL;
            out_ext->localDimmingMode = in_ext->localDimmingMode;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_GLOBAL_DIMMER_FRAME_END_INFO_ML:
        {
            XrGlobalDimmerFrameEndInfoML *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrGlobalDimmerFrameEndInfoML32 *in_ext = (const XrGlobalDimmerFrameEndInfoML32 *)in_header;
            out_ext->type = XR_TYPE_GLOBAL_DIMMER_FRAME_END_INFO_ML;
            out_ext->next = NULL;
            out_ext->dimmerValue = in_ext->dimmerValue;
            out_ext->flags = in_ext->flags;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_FRAME_END_INFO_ML:
        {
            XrFrameEndInfoML *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrFrameEndInfoML32 *in_ext = (const XrFrameEndInfoML32 *)in_header;
            out_ext->type = XR_TYPE_FRAME_END_INFO_ML;
            out_ext->next = NULL;
            out_ext->focusDistance = in_ext->focusDistance;
            out_ext->flags = in_ext->flags;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrApiLayerProperties_win32_to_host(const XrApiLayerProperties32 *in, XrApiLayerProperties *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrApiLayerProperties_host_to_win32(const XrApiLayerProperties *in, XrApiLayerProperties32 *out)
{
    if (!in) return;

    memcpy(out->layerName, in->layerName, XR_MAX_API_LAYER_NAME_SIZE * sizeof(char));
    out->specVersion = in->specVersion;
    out->layerVersion = in->layerVersion;
    memcpy(out->description, in->description, XR_MAX_API_LAYER_DESCRIPTION_SIZE * sizeof(char));
}

static inline XrApiLayerProperties *convert_XrApiLayerProperties_array_win32_to_host(struct conversion_context *ctx, const XrApiLayerProperties32 *in, uint32_t count)
{
    XrApiLayerProperties *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrApiLayerProperties_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrApiLayerProperties_array_host_to_win32(const XrApiLayerProperties *in, XrApiLayerProperties32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrApiLayerProperties_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrBoundSourcesForActionEnumerateInfo_win32_to_host(const XrBoundSourcesForActionEnumerateInfo32 *in, XrBoundSourcesForActionEnumerateInfo *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->action = in->action;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSwapchainImageBaseHeader_win32_to_host(const XrSwapchainImageBaseHeader32 *in, XrSwapchainImageBaseHeader *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSwapchainImageBaseHeader_host_to_win32(const XrSwapchainImageBaseHeader *in, XrSwapchainImageBaseHeader32 *out)
{
    if (!in) return;

}

static inline XrSwapchainImageBaseHeader *convert_XrSwapchainImageBaseHeader_array_win32_to_host(struct conversion_context *ctx, const XrSwapchainImageBaseHeader32 *in, uint32_t count)
{
    XrSwapchainImageBaseHeader *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrSwapchainImageBaseHeader_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrSwapchainImageBaseHeader_array_host_to_win32(const XrSwapchainImageBaseHeader *in, XrSwapchainImageBaseHeader32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrSwapchainImageBaseHeader_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrExternalCameraExtrinsicsOCULUS_win32_to_host(const XrExternalCameraExtrinsicsOCULUS32 *in, XrExternalCameraExtrinsicsOCULUS *out)
{
    if (!in) return;

    out->lastChangeTime = in->lastChangeTime;
    out->cameraStatusFlags = in->cameraStatusFlags;
    out->attachedToDevice = in->attachedToDevice;
    out->relativePose = in->relativePose;
}

static inline void convert_XrExternalCameraExtrinsicsOCULUS_host_to_win32(const XrExternalCameraExtrinsicsOCULUS *in, XrExternalCameraExtrinsicsOCULUS32 *out)
{
    if (!in) return;

    out->lastChangeTime = in->lastChangeTime;
    out->cameraStatusFlags = in->cameraStatusFlags;
    out->attachedToDevice = in->attachedToDevice;
    out->relativePose = in->relativePose;
}

static inline void convert_XrExternalCameraOCULUS_win32_to_host(const XrExternalCameraOCULUS32 *in, XrExternalCameraOCULUS *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrExternalCameraOCULUS_host_to_win32(const XrExternalCameraOCULUS *in, XrExternalCameraOCULUS32 *out)
{
    if (!in) return;

    memcpy(out->name, in->name, XR_MAX_EXTERNAL_CAMERA_NAME_SIZE_OCULUS * sizeof(char));
    out->intrinsics = in->intrinsics;
    convert_XrExternalCameraExtrinsicsOCULUS_host_to_win32(&in->extrinsics, &out->extrinsics);
}

static inline XrExternalCameraOCULUS *convert_XrExternalCameraOCULUS_array_win32_to_host(struct conversion_context *ctx, const XrExternalCameraOCULUS32 *in, uint32_t count)
{
    XrExternalCameraOCULUS *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrExternalCameraOCULUS_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrExternalCameraOCULUS_array_host_to_win32(const XrExternalCameraOCULUS *in, XrExternalCameraOCULUS32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrExternalCameraOCULUS_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrExtensionProperties_win32_to_host(const XrExtensionProperties32 *in, XrExtensionProperties *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrExtensionProperties_host_to_win32(const XrExtensionProperties *in, XrExtensionProperties32 *out)
{
    if (!in) return;

    memcpy(out->extensionName, in->extensionName, XR_MAX_EXTENSION_NAME_SIZE * sizeof(char));
    out->extensionVersion = in->extensionVersion;
}

static inline XrExtensionProperties *convert_XrExtensionProperties_array_win32_to_host(struct conversion_context *ctx, const XrExtensionProperties32 *in, uint32_t count)
{
    XrExtensionProperties *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrExtensionProperties_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrExtensionProperties_array_host_to_win32(const XrExtensionProperties *in, XrExtensionProperties32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrExtensionProperties_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrInteractionRenderModelIdsEnumerateInfoEXT_win32_to_host(const XrInteractionRenderModelIdsEnumerateInfoEXT32 *in, XrInteractionRenderModelIdsEnumerateInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelPathInfoFB_win32_to_host(const XrRenderModelPathInfoFB32 *in, XrRenderModelPathInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->path = in->path;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelPathInfoFB_host_to_win32(const XrRenderModelPathInfoFB *in, XrRenderModelPathInfoFB32 *out)
{
    if (!in) return;

    out->path = in->path;
}

static inline XrRenderModelPathInfoFB *convert_XrRenderModelPathInfoFB_array_win32_to_host(struct conversion_context *ctx, const XrRenderModelPathInfoFB32 *in, uint32_t count)
{
    XrRenderModelPathInfoFB *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrRenderModelPathInfoFB_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrRenderModelPathInfoFB_array_host_to_win32(const XrRenderModelPathInfoFB *in, XrRenderModelPathInfoFB32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrRenderModelPathInfoFB_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrInteractionRenderModelSubactionPathInfoEXT_win32_to_host(const XrInteractionRenderModelSubactionPathInfoEXT32 *in, XrInteractionRenderModelSubactionPathInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialCapabilityComponentTypesEXT_win32_to_host(const XrSpatialCapabilityComponentTypesEXT32 *in, XrSpatialCapabilityComponentTypesEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->componentTypeCapacityInput = in->componentTypeCapacityInput;
    out->componentTypeCountOutput = in->componentTypeCountOutput;
    out->componentTypes = (XrSpatialComponentTypeEXT *)(uintptr_t)UlongToPtr(in->componentTypes);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialCapabilityComponentTypesEXT_host_to_win32(const XrSpatialCapabilityComponentTypesEXT *in, XrSpatialCapabilityComponentTypesEXT32 *out)
{
    if (!in) return;

    out->componentTypeCapacityInput = in->componentTypeCapacityInput;
    out->componentTypeCountOutput = in->componentTypeCountOutput;
    out->componentTypes = PtrToUlong(in->componentTypes);
}

static inline void convert_XrViewConfigurationView_win32_to_host(struct conversion_context *ctx, const XrViewConfigurationView32 *in, XrViewConfigurationView *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->recommendedImageRectWidth = in->recommendedImageRectWidth;
    out->maxImageRectWidth = in->maxImageRectWidth;
    out->recommendedImageRectHeight = in->recommendedImageRectHeight;
    out->maxImageRectHeight = in->maxImageRectHeight;
    out->recommendedSwapchainSampleCount = in->recommendedSwapchainSampleCount;
    out->maxSwapchainSampleCount = in->maxSwapchainSampleCount;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_VIEW_CONFIGURATION_DEPTH_RANGE_EXT:
        {
            XrViewConfigurationDepthRangeEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrViewConfigurationDepthRangeEXT32 *in_ext = (const XrViewConfigurationDepthRangeEXT32 *)in_header;
            out_ext->type = XR_TYPE_VIEW_CONFIGURATION_DEPTH_RANGE_EXT;
            out_ext->next = NULL;
            out_ext->recommendedNearZ = in_ext->recommendedNearZ;
            out_ext->minNearZ = in_ext->minNearZ;
            out_ext->recommendedFarZ = in_ext->recommendedFarZ;
            out_ext->maxFarZ = in_ext->maxFarZ;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_VIEW_CONFIGURATION_VIEW_FOV_EPIC:
        {
            XrViewConfigurationViewFovEPIC *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrViewConfigurationViewFovEPIC32 *in_ext = (const XrViewConfigurationViewFovEPIC32 *)in_header;
            out_ext->type = XR_TYPE_VIEW_CONFIGURATION_VIEW_FOV_EPIC;
            out_ext->next = NULL;
            out_ext->recommendedFov = in_ext->recommendedFov;
            out_ext->maxMutableFov = in_ext->maxMutableFov;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_FRAME_SYNTHESIS_CONFIG_VIEW_EXT:
        {
            XrFrameSynthesisConfigViewEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrFrameSynthesisConfigViewEXT32 *in_ext = (const XrFrameSynthesisConfigViewEXT32 *)in_header;
            out_ext->type = XR_TYPE_FRAME_SYNTHESIS_CONFIG_VIEW_EXT;
            out_ext->next = NULL;
            out_ext->recommendedMotionVectorImageRectWidth = in_ext->recommendedMotionVectorImageRectWidth;
            out_ext->recommendedMotionVectorImageRectHeight = in_ext->recommendedMotionVectorImageRectHeight;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_FOVEATED_VIEW_CONFIGURATION_VIEW_VARJO:
        {
            XrFoveatedViewConfigurationViewVARJO *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrFoveatedViewConfigurationViewVARJO32 *in_ext = (const XrFoveatedViewConfigurationViewVARJO32 *)in_header;
            out_ext->type = XR_TYPE_FOVEATED_VIEW_CONFIGURATION_VIEW_VARJO;
            out_ext->next = NULL;
            out_ext->foveatedRenderingActive = in_ext->foveatedRenderingActive;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrViewConfigurationView_host_to_win32(const XrViewConfigurationView *in, XrViewConfigurationView32 *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure32 *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->recommendedImageRectWidth = in->recommendedImageRectWidth;
    out->maxImageRectWidth = in->maxImageRectWidth;
    out->recommendedImageRectHeight = in->recommendedImageRectHeight;
    out->maxImageRectHeight = in->maxImageRectHeight;
    out->recommendedSwapchainSampleCount = in->recommendedSwapchainSampleCount;
    out->maxSwapchainSampleCount = in->maxSwapchainSampleCount;

    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        case XR_TYPE_VIEW_CONFIGURATION_DEPTH_RANGE_EXT:
        {
            XrViewConfigurationDepthRangeEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_VIEW_CONFIGURATION_DEPTH_RANGE_EXT);
            const XrViewConfigurationDepthRangeEXT *in_ext = (const XrViewConfigurationDepthRangeEXT *)in_header;
            out_ext->type = XR_TYPE_VIEW_CONFIGURATION_DEPTH_RANGE_EXT;
            out_ext->recommendedNearZ = in_ext->recommendedNearZ;
            out_ext->minNearZ = in_ext->minNearZ;
            out_ext->recommendedFarZ = in_ext->recommendedFarZ;
            out_ext->maxFarZ = in_ext->maxFarZ;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_VIEW_CONFIGURATION_VIEW_FOV_EPIC:
        {
            XrViewConfigurationViewFovEPIC32 *out_ext = find_next_struct32(out_header, XR_TYPE_VIEW_CONFIGURATION_VIEW_FOV_EPIC);
            const XrViewConfigurationViewFovEPIC *in_ext = (const XrViewConfigurationViewFovEPIC *)in_header;
            out_ext->type = XR_TYPE_VIEW_CONFIGURATION_VIEW_FOV_EPIC;
            out_ext->recommendedFov = in_ext->recommendedFov;
            out_ext->maxMutableFov = in_ext->maxMutableFov;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_FRAME_SYNTHESIS_CONFIG_VIEW_EXT:
        {
            XrFrameSynthesisConfigViewEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_FRAME_SYNTHESIS_CONFIG_VIEW_EXT);
            const XrFrameSynthesisConfigViewEXT *in_ext = (const XrFrameSynthesisConfigViewEXT *)in_header;
            out_ext->type = XR_TYPE_FRAME_SYNTHESIS_CONFIG_VIEW_EXT;
            out_ext->recommendedMotionVectorImageRectWidth = in_ext->recommendedMotionVectorImageRectWidth;
            out_ext->recommendedMotionVectorImageRectHeight = in_ext->recommendedMotionVectorImageRectHeight;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_FOVEATED_VIEW_CONFIGURATION_VIEW_VARJO:
        {
            XrFoveatedViewConfigurationViewVARJO32 *out_ext = find_next_struct32(out_header, XR_TYPE_FOVEATED_VIEW_CONFIGURATION_VIEW_VARJO);
            const XrFoveatedViewConfigurationViewVARJO *in_ext = (const XrFoveatedViewConfigurationViewVARJO *)in_header;
            out_ext->type = XR_TYPE_FOVEATED_VIEW_CONFIGURATION_VIEW_VARJO;
            out_ext->foveatedRenderingActive = in_ext->foveatedRenderingActive;
            out_header = (void *)out_ext;
            break;
        }
        default:
            break;
        }
    }
}

static inline XrViewConfigurationView *convert_XrViewConfigurationView_array_win32_to_host(struct conversion_context *ctx, const XrViewConfigurationView32 *in, uint32_t count)
{
    XrViewConfigurationView *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrViewConfigurationView_win32_to_host(ctx, &in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrViewConfigurationView_array_host_to_win32(const XrViewConfigurationView *in, XrViewConfigurationView32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrViewConfigurationView_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrViveTrackerPathsHTCX_win32_to_host(const XrViveTrackerPathsHTCX32 *in, XrViveTrackerPathsHTCX *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrViveTrackerPathsHTCX_host_to_win32(const XrViveTrackerPathsHTCX *in, XrViveTrackerPathsHTCX32 *out)
{
    if (!in) return;

    out->persistentPath = in->persistentPath;
    out->rolePath = in->rolePath;
}

static inline XrViveTrackerPathsHTCX *convert_XrViveTrackerPathsHTCX_array_win32_to_host(struct conversion_context *ctx, const XrViveTrackerPathsHTCX32 *in, uint32_t count)
{
    XrViveTrackerPathsHTCX *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrViveTrackerPathsHTCX_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrViveTrackerPathsHTCX_array_host_to_win32(const XrViveTrackerPathsHTCX *in, XrViveTrackerPathsHTCX32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrViveTrackerPathsHTCX_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrSpaceEraseInfoFB_win32_to_host(const XrSpaceEraseInfoFB32 *in, XrSpaceEraseInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->space = in->space;
    out->location = in->location;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpacesEraseInfoMETA_win32_to_host(struct conversion_context *ctx, const XrSpacesEraseInfoMETA32 *in, XrSpacesEraseInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->spaceCount = in->spaceCount;
    out->spaces = convert_XrSpace_array_win32_to_host(ctx, (PTR32 *)(uintptr_t)UlongToPtr(in->spaces), in->spaceCount);
    out->uuidCount = in->uuidCount;
    out->uuids = (XrUuidEXT *)(uintptr_t)UlongToPtr(in->uuids);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpacesEraseInfoMETA_host_to_win32(const XrSpacesEraseInfoMETA *in, XrSpacesEraseInfoMETA32 *out)
{
    if (!in) return;

    convert_XrSpace_array_host_to_win32(in->spaces, (PTR32 *)(uintptr_t)UlongToPtr(out->spaces), in->spaceCount);
    out->uuids = PtrToUlong(in->uuids);
}

static inline void convert_XrGeometryInstanceTransformFB_win32_to_host(const XrGeometryInstanceTransformFB32 *in, XrGeometryInstanceTransformFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->baseSpace = in->baseSpace;
    out->time = in->time;
    out->pose = in->pose;
    out->scale = in->scale;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrActionStateGetInfo_win32_to_host(const XrActionStateGetInfo32 *in, XrActionStateGetInfo *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->action = in->action;
    out->subactionPath = in->subactionPath;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrActionStateBoolean_win32_to_host(const XrActionStateBoolean32 *in, XrActionStateBoolean *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->currentState = in->currentState;
    out->changedSinceLastSync = in->changedSinceLastSync;
    out->lastChangeTime = in->lastChangeTime;
    out->isActive = in->isActive;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrActionStateBoolean_host_to_win32(const XrActionStateBoolean *in, XrActionStateBoolean32 *out)
{
    if (!in) return;

    out->currentState = in->currentState;
    out->changedSinceLastSync = in->changedSinceLastSync;
    out->lastChangeTime = in->lastChangeTime;
    out->isActive = in->isActive;
}

static inline void convert_XrActionStateFloat_win32_to_host(const XrActionStateFloat32 *in, XrActionStateFloat *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->currentState = in->currentState;
    out->changedSinceLastSync = in->changedSinceLastSync;
    out->lastChangeTime = in->lastChangeTime;
    out->isActive = in->isActive;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrActionStateFloat_host_to_win32(const XrActionStateFloat *in, XrActionStateFloat32 *out)
{
    if (!in) return;

    out->currentState = in->currentState;
    out->changedSinceLastSync = in->changedSinceLastSync;
    out->lastChangeTime = in->lastChangeTime;
    out->isActive = in->isActive;
}

static inline void convert_XrActionStatePose_win32_to_host(const XrActionStatePose32 *in, XrActionStatePose *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->isActive = in->isActive;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrActionStatePose_host_to_win32(const XrActionStatePose *in, XrActionStatePose32 *out)
{
    if (!in) return;

    out->isActive = in->isActive;
}

static inline void convert_XrActionStateVector2f_win32_to_host(const XrActionStateVector2f32 *in, XrActionStateVector2f *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->currentState = in->currentState;
    out->changedSinceLastSync = in->changedSinceLastSync;
    out->lastChangeTime = in->lastChangeTime;
    out->isActive = in->isActive;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrActionStateVector2f_host_to_win32(const XrActionStateVector2f *in, XrActionStateVector2f32 *out)
{
    if (!in) return;

    out->currentState = in->currentState;
    out->changedSinceLastSync = in->changedSinceLastSync;
    out->lastChangeTime = in->lastChangeTime;
    out->isActive = in->isActive;
}

static inline void convert_XrBodySkeletonFB_win32_to_host(const XrBodySkeletonFB32 *in, XrBodySkeletonFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->jointCount = in->jointCount;
    out->joints = (XrBodySkeletonJointFB *)(uintptr_t)UlongToPtr(in->joints);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrBodySkeletonFB_host_to_win32(const XrBodySkeletonFB *in, XrBodySkeletonFB32 *out)
{
    if (!in) return;

    out->jointCount = in->jointCount;
    out->joints = PtrToUlong(in->joints);
}

static inline void convert_XrBodySkeletonHTC_win32_to_host(const XrBodySkeletonHTC32 *in, XrBodySkeletonHTC *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->jointCount = in->jointCount;
    out->joints = (XrBodySkeletonJointHTC *)(uintptr_t)UlongToPtr(in->joints);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrBodySkeletonHTC_host_to_win32(const XrBodySkeletonHTC *in, XrBodySkeletonHTC32 *out)
{
    if (!in) return;

    out->jointCount = in->jointCount;
    out->joints = PtrToUlong(in->joints);
}

static inline void convert_XrControllerModelKeyStateMSFT_win32_to_host(const XrControllerModelKeyStateMSFT32 *in, XrControllerModelKeyStateMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->modelKey = in->modelKey;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrControllerModelKeyStateMSFT_host_to_win32(const XrControllerModelKeyStateMSFT *in, XrControllerModelKeyStateMSFT32 *out)
{
    if (!in) return;

    out->modelKey = in->modelKey;
}

static inline void convert_XrControllerModelNodePropertiesMSFT_win32_to_host(const XrControllerModelNodePropertiesMSFT32 *in, XrControllerModelNodePropertiesMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    memcpy(out->parentNodeName, in->parentNodeName, XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT * sizeof(char));
    memcpy(out->nodeName, in->nodeName, XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT * sizeof(char));
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrControllerModelNodePropertiesMSFT_host_to_win32(const XrControllerModelNodePropertiesMSFT *in, XrControllerModelNodePropertiesMSFT32 *out)
{
    if (!in) return;

    memcpy(out->parentNodeName, in->parentNodeName, XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT * sizeof(char));
    memcpy(out->nodeName, in->nodeName, XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT * sizeof(char));
}

static inline XrControllerModelNodePropertiesMSFT *convert_XrControllerModelNodePropertiesMSFT_array_win32_to_host(struct conversion_context *ctx, const XrControllerModelNodePropertiesMSFT32 *in, uint32_t count)
{
    XrControllerModelNodePropertiesMSFT *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrControllerModelNodePropertiesMSFT_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrControllerModelNodePropertiesMSFT_array_host_to_win32(const XrControllerModelNodePropertiesMSFT *in, XrControllerModelNodePropertiesMSFT32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrControllerModelNodePropertiesMSFT_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrControllerModelPropertiesMSFT_win32_to_host(struct conversion_context *ctx, const XrControllerModelPropertiesMSFT32 *in, XrControllerModelPropertiesMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->nodeCapacityInput = in->nodeCapacityInput;
    out->nodeCountOutput = in->nodeCountOutput;
    out->nodeProperties = convert_XrControllerModelNodePropertiesMSFT_array_win32_to_host(ctx, (XrControllerModelNodePropertiesMSFT32 *)(uintptr_t)UlongToPtr(in->nodeProperties), in->nodeCapacityInput);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrControllerModelPropertiesMSFT_host_to_win32(const XrControllerModelPropertiesMSFT *in, XrControllerModelPropertiesMSFT32 *out)
{
    if (!in) return;

    out->nodeCapacityInput = in->nodeCapacityInput;
    out->nodeCountOutput = in->nodeCountOutput;
    convert_XrControllerModelNodePropertiesMSFT_array_host_to_win32(in->nodeProperties, (XrControllerModelNodePropertiesMSFT32 *)(uintptr_t)UlongToPtr(out->nodeProperties), in->nodeCapacityInput);
}

static inline void convert_XrControllerModelNodeStateMSFT_win32_to_host(const XrControllerModelNodeStateMSFT32 *in, XrControllerModelNodeStateMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->nodePose = in->nodePose;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrControllerModelNodeStateMSFT_host_to_win32(const XrControllerModelNodeStateMSFT *in, XrControllerModelNodeStateMSFT32 *out)
{
    if (!in) return;

    out->nodePose = in->nodePose;
}

static inline XrControllerModelNodeStateMSFT *convert_XrControllerModelNodeStateMSFT_array_win32_to_host(struct conversion_context *ctx, const XrControllerModelNodeStateMSFT32 *in, uint32_t count)
{
    XrControllerModelNodeStateMSFT *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrControllerModelNodeStateMSFT_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrControllerModelNodeStateMSFT_array_host_to_win32(const XrControllerModelNodeStateMSFT *in, XrControllerModelNodeStateMSFT32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrControllerModelNodeStateMSFT_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrControllerModelStateMSFT_win32_to_host(struct conversion_context *ctx, const XrControllerModelStateMSFT32 *in, XrControllerModelStateMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->nodeCapacityInput = in->nodeCapacityInput;
    out->nodeCountOutput = in->nodeCountOutput;
    out->nodeStates = convert_XrControllerModelNodeStateMSFT_array_win32_to_host(ctx, (XrControllerModelNodeStateMSFT32 *)(uintptr_t)UlongToPtr(in->nodeStates), in->nodeCapacityInput);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrControllerModelStateMSFT_host_to_win32(const XrControllerModelStateMSFT *in, XrControllerModelStateMSFT32 *out)
{
    if (!in) return;

    out->nodeCapacityInput = in->nodeCapacityInput;
    out->nodeCountOutput = in->nodeCountOutput;
    convert_XrControllerModelNodeStateMSFT_array_host_to_win32(in->nodeStates, (XrControllerModelNodeStateMSFT32 *)(uintptr_t)UlongToPtr(out->nodeStates), in->nodeCapacityInput);
}

static inline void convert_XrInteractionProfileState_win32_to_host(const XrInteractionProfileState32 *in, XrInteractionProfileState *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->interactionProfile = in->interactionProfile;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrInteractionProfileState_host_to_win32(const XrInteractionProfileState *in, XrInteractionProfileState32 *out)
{
    if (!in) return;

    out->interactionProfile = in->interactionProfile;
}

static inline void convert_XrGraphicsRequirementsD3D11KHR_win32_to_host(const XrGraphicsRequirementsD3D11KHR32 *in, XrGraphicsRequirementsD3D11KHR *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->adapterLuid = in->adapterLuid;
    out->minFeatureLevel = in->minFeatureLevel;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrGraphicsRequirementsD3D11KHR_host_to_win32(const XrGraphicsRequirementsD3D11KHR *in, XrGraphicsRequirementsD3D11KHR32 *out)
{
    if (!in) return;

    out->adapterLuid = in->adapterLuid;
    out->minFeatureLevel = in->minFeatureLevel;
}

static inline void convert_XrGraphicsRequirementsD3D12KHR_win32_to_host(const XrGraphicsRequirementsD3D12KHR32 *in, XrGraphicsRequirementsD3D12KHR *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->adapterLuid = in->adapterLuid;
    out->minFeatureLevel = in->minFeatureLevel;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrGraphicsRequirementsD3D12KHR_host_to_win32(const XrGraphicsRequirementsD3D12KHR *in, XrGraphicsRequirementsD3D12KHR32 *out)
{
    if (!in) return;

    out->adapterLuid = in->adapterLuid;
    out->minFeatureLevel = in->minFeatureLevel;
}

static inline void convert_XrDevicePcmSampleRateGetInfoFB_win32_to_host(const XrDevicePcmSampleRateGetInfoFB32 *in, XrDevicePcmSampleRateGetInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->sampleRate = in->sampleRate;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrDevicePcmSampleRateGetInfoFB_host_to_win32(const XrDevicePcmSampleRateGetInfoFB *in, XrDevicePcmSampleRateGetInfoFB32 *out)
{
    if (!in) return;

    out->sampleRate = in->sampleRate;
}

static inline void convert_XrEnvironmentDepthSwapchainStateMETA_win32_to_host(const XrEnvironmentDepthSwapchainStateMETA32 *in, XrEnvironmentDepthSwapchainStateMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->width = in->width;
    out->height = in->height;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrEnvironmentDepthSwapchainStateMETA_host_to_win32(const XrEnvironmentDepthSwapchainStateMETA *in, XrEnvironmentDepthSwapchainStateMETA32 *out)
{
    if (!in) return;

    out->width = in->width;
    out->height = in->height;
}

static inline void convert_XrEyeGazesInfoFB_win32_to_host(const XrEyeGazesInfoFB32 *in, XrEyeGazesInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->baseSpace = in->baseSpace;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrEyeGazesFB_win32_to_host(const XrEyeGazesFB32 *in, XrEyeGazesFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    memcpy(out->gaze, in->gaze, XR_EYE_POSITION_COUNT_FB * sizeof(XrEyeGazeFB));
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrEyeGazesFB_host_to_win32(const XrEyeGazesFB *in, XrEyeGazesFB32 *out)
{
    if (!in) return;

    memcpy(out->gaze, in->gaze, XR_EYE_POSITION_COUNT_FB * sizeof(XrEyeGazeFB));
    out->time = in->time;
}

static inline void convert_XrFaceExpressionInfo2FB_win32_to_host(const XrFaceExpressionInfo2FB32 *in, XrFaceExpressionInfo2FB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFaceExpressionWeights2FB_win32_to_host(const XrFaceExpressionWeights2FB32 *in, XrFaceExpressionWeights2FB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->weightCount = in->weightCount;
    out->weights = (float *)(uintptr_t)UlongToPtr(in->weights);
    out->confidenceCount = in->confidenceCount;
    out->confidences = (float *)(uintptr_t)UlongToPtr(in->confidences);
    out->isValid = in->isValid;
    out->isEyeFollowingBlendshapesValid = in->isEyeFollowingBlendshapesValid;
    out->dataSource = in->dataSource;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFaceExpressionWeights2FB_host_to_win32(const XrFaceExpressionWeights2FB *in, XrFaceExpressionWeights2FB32 *out)
{
    if (!in) return;

    out->weightCount = in->weightCount;
    out->weights = PtrToUlong(in->weights);
    out->confidenceCount = in->confidenceCount;
    out->confidences = PtrToUlong(in->confidences);
    out->isValid = in->isValid;
    out->isEyeFollowingBlendshapesValid = in->isEyeFollowingBlendshapesValid;
    out->dataSource = in->dataSource;
    out->time = in->time;
}

static inline void convert_XrFaceExpressionInfoFB_win32_to_host(const XrFaceExpressionInfoFB32 *in, XrFaceExpressionInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFaceExpressionWeightsFB_win32_to_host(const XrFaceExpressionWeightsFB32 *in, XrFaceExpressionWeightsFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->weightCount = in->weightCount;
    out->weights = (float *)(uintptr_t)UlongToPtr(in->weights);
    out->confidenceCount = in->confidenceCount;
    out->confidences = (float *)(uintptr_t)UlongToPtr(in->confidences);
    out->status = in->status;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFaceExpressionWeightsFB_host_to_win32(const XrFaceExpressionWeightsFB *in, XrFaceExpressionWeightsFB32 *out)
{
    if (!in) return;

    out->weightCount = in->weightCount;
    out->weights = PtrToUlong(in->weights);
    out->confidenceCount = in->confidenceCount;
    out->confidences = PtrToUlong(in->confidences);
    out->status = in->status;
    out->time = in->time;
}

static inline void convert_XrFacialExpressionBlendShapeGetInfoML_win32_to_host(const XrFacialExpressionBlendShapeGetInfoML32 *in, XrFacialExpressionBlendShapeGetInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFacialExpressionBlendShapePropertiesML_win32_to_host(const XrFacialExpressionBlendShapePropertiesML32 *in, XrFacialExpressionBlendShapePropertiesML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->requestedFacialBlendShape = in->requestedFacialBlendShape;
    out->weight = in->weight;
    out->flags = in->flags;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFacialExpressionBlendShapePropertiesML_host_to_win32(const XrFacialExpressionBlendShapePropertiesML *in, XrFacialExpressionBlendShapePropertiesML32 *out)
{
    if (!in) return;

    out->requestedFacialBlendShape = in->requestedFacialBlendShape;
    out->weight = in->weight;
    out->flags = in->flags;
    out->time = in->time;
}

static inline XrFacialExpressionBlendShapePropertiesML *convert_XrFacialExpressionBlendShapePropertiesML_array_win32_to_host(struct conversion_context *ctx, const XrFacialExpressionBlendShapePropertiesML32 *in, uint32_t count)
{
    XrFacialExpressionBlendShapePropertiesML *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrFacialExpressionBlendShapePropertiesML_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrFacialExpressionBlendShapePropertiesML_array_host_to_win32(const XrFacialExpressionBlendShapePropertiesML *in, XrFacialExpressionBlendShapePropertiesML32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrFacialExpressionBlendShapePropertiesML_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrFacialExpressionsHTC_win32_to_host(const XrFacialExpressionsHTC32 *in, XrFacialExpressionsHTC *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->isActive = in->isActive;
    out->sampleTime = in->sampleTime;
    out->expressionCount = in->expressionCount;
    out->expressionWeightings = (float *)(uintptr_t)UlongToPtr(in->expressionWeightings);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFacialExpressionsHTC_host_to_win32(const XrFacialExpressionsHTC *in, XrFacialExpressionsHTC32 *out)
{
    if (!in) return;

    out->isActive = in->isActive;
    out->sampleTime = in->sampleTime;
    out->expressionCount = in->expressionCount;
    out->expressionWeightings = PtrToUlong(in->expressionWeightings);
}

static inline void convert_XrFoveationEyeTrackedStateMETA_win32_to_host(const XrFoveationEyeTrackedStateMETA32 *in, XrFoveationEyeTrackedStateMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFoveationEyeTrackedStateMETA_host_to_win32(const XrFoveationEyeTrackedStateMETA *in, XrFoveationEyeTrackedStateMETA32 *out)
{
    if (!in) return;

    memcpy(out->foveationCenter, in->foveationCenter, XR_FOVEATION_CENTER_SIZE_META * sizeof(XrVector2f));
    out->flags = in->flags;
}

static inline void convert_XrHandTrackingMeshFB_win32_to_host(const XrHandTrackingMeshFB32 *in, XrHandTrackingMeshFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->jointCapacityInput = in->jointCapacityInput;
    out->jointCountOutput = in->jointCountOutput;
    out->jointBindPoses = (XrPosef *)(uintptr_t)UlongToPtr(in->jointBindPoses);
    out->jointRadii = (float *)(uintptr_t)UlongToPtr(in->jointRadii);
    out->jointParents = (XrHandJointEXT *)(uintptr_t)UlongToPtr(in->jointParents);
    out->vertexCapacityInput = in->vertexCapacityInput;
    out->vertexCountOutput = in->vertexCountOutput;
    out->vertexPositions = (XrVector3f *)(uintptr_t)UlongToPtr(in->vertexPositions);
    out->vertexNormals = (XrVector3f *)(uintptr_t)UlongToPtr(in->vertexNormals);
    out->vertexUVs = (XrVector2f *)(uintptr_t)UlongToPtr(in->vertexUVs);
    out->vertexBlendIndices = (XrVector4sFB *)(uintptr_t)UlongToPtr(in->vertexBlendIndices);
    out->vertexBlendWeights = (XrVector4f *)(uintptr_t)UlongToPtr(in->vertexBlendWeights);
    out->indexCapacityInput = in->indexCapacityInput;
    out->indexCountOutput = in->indexCountOutput;
    out->indices = (int16_t *)(uintptr_t)UlongToPtr(in->indices);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrHandTrackingMeshFB_host_to_win32(const XrHandTrackingMeshFB *in, XrHandTrackingMeshFB32 *out)
{
    if (!in) return;

    out->jointCapacityInput = in->jointCapacityInput;
    out->jointCountOutput = in->jointCountOutput;
    out->jointBindPoses = PtrToUlong(in->jointBindPoses);
    out->jointRadii = PtrToUlong(in->jointRadii);
    out->jointParents = PtrToUlong(in->jointParents);
    out->vertexCapacityInput = in->vertexCapacityInput;
    out->vertexCountOutput = in->vertexCountOutput;
    out->vertexPositions = PtrToUlong(in->vertexPositions);
    out->vertexNormals = PtrToUlong(in->vertexNormals);
    out->vertexUVs = PtrToUlong(in->vertexUVs);
    out->vertexBlendIndices = PtrToUlong(in->vertexBlendIndices);
    out->vertexBlendWeights = PtrToUlong(in->vertexBlendWeights);
    out->indexCapacityInput = in->indexCapacityInput;
    out->indexCountOutput = in->indexCountOutput;
    out->indices = PtrToUlong(in->indices);
}

static inline void convert_XrInputSourceLocalizedNameGetInfo_win32_to_host(const XrInputSourceLocalizedNameGetInfo32 *in, XrInputSourceLocalizedNameGetInfo *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->sourcePath = in->sourcePath;
    out->whichComponents = in->whichComponents;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrInstanceProperties_win32_to_host(const XrInstanceProperties32 *in, XrInstanceProperties *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrInstanceProperties_host_to_win32(const XrInstanceProperties *in, XrInstanceProperties32 *out)
{
    if (!in) return;

    out->runtimeVersion = in->runtimeVersion;
    memcpy(out->runtimeName, in->runtimeName, XR_MAX_RUNTIME_NAME_SIZE * sizeof(char));
}

static inline void convert_XrMarkerDetectorStateML_win32_to_host(const XrMarkerDetectorStateML32 *in, XrMarkerDetectorStateML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrMarkerDetectorStateML_host_to_win32(const XrMarkerDetectorStateML *in, XrMarkerDetectorStateML32 *out)
{
    if (!in) return;

    out->state = in->state;
}

static inline void convert_XrGraphicsRequirementsOpenGLKHR_win32_to_host(const XrGraphicsRequirementsOpenGLKHR32 *in, XrGraphicsRequirementsOpenGLKHR *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->minApiVersionSupported = in->minApiVersionSupported;
    out->maxApiVersionSupported = in->maxApiVersionSupported;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrGraphicsRequirementsOpenGLKHR_host_to_win32(const XrGraphicsRequirementsOpenGLKHR *in, XrGraphicsRequirementsOpenGLKHR32 *out)
{
    if (!in) return;

    out->minApiVersionSupported = in->minApiVersionSupported;
    out->maxApiVersionSupported = in->maxApiVersionSupported;
}

static inline void convert_XrPassthroughCameraStateGetInfoANDROID_win32_to_host(const XrPassthroughCameraStateGetInfoANDROID32 *in, XrPassthroughCameraStateGetInfoANDROID *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPassthroughPreferencesMETA_win32_to_host(const XrPassthroughPreferencesMETA32 *in, XrPassthroughPreferencesMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPassthroughPreferencesMETA_host_to_win32(const XrPassthroughPreferencesMETA *in, XrPassthroughPreferencesMETA32 *out)
{
    if (!in) return;

    out->flags = in->flags;
}

static inline void convert_XrPerformanceMetricsStateMETA_win32_to_host(const XrPerformanceMetricsStateMETA32 *in, XrPerformanceMetricsStateMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->enabled = in->enabled;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPerformanceMetricsStateMETA_host_to_win32(const XrPerformanceMetricsStateMETA *in, XrPerformanceMetricsStateMETA32 *out)
{
    if (!in) return;

    out->enabled = in->enabled;
}

static inline void convert_XrPlaneDetectorGetInfoEXT_win32_to_host(const XrPlaneDetectorGetInfoEXT32 *in, XrPlaneDetectorGetInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->baseSpace = in->baseSpace;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPlaneDetectorLocationEXT_win32_to_host(const XrPlaneDetectorLocationEXT32 *in, XrPlaneDetectorLocationEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->planeId = in->planeId;
    out->locationFlags = in->locationFlags;
    out->pose = in->pose;
    out->extents = in->extents;
    out->orientation = in->orientation;
    out->semanticType = in->semanticType;
    out->polygonBufferCount = in->polygonBufferCount;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPlaneDetectorLocationEXT_host_to_win32(const XrPlaneDetectorLocationEXT *in, XrPlaneDetectorLocationEXT32 *out)
{
    if (!in) return;

    out->planeId = in->planeId;
    out->locationFlags = in->locationFlags;
    out->pose = in->pose;
    out->extents = in->extents;
    out->orientation = in->orientation;
    out->semanticType = in->semanticType;
    out->polygonBufferCount = in->polygonBufferCount;
}

static inline XrPlaneDetectorLocationEXT *convert_XrPlaneDetectorLocationEXT_array_win32_to_host(struct conversion_context *ctx, const XrPlaneDetectorLocationEXT32 *in, uint32_t count)
{
    XrPlaneDetectorLocationEXT *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrPlaneDetectorLocationEXT_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrPlaneDetectorLocationEXT_array_host_to_win32(const XrPlaneDetectorLocationEXT *in, XrPlaneDetectorLocationEXT32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrPlaneDetectorLocationEXT_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrPlaneDetectorLocationsEXT_win32_to_host(struct conversion_context *ctx, const XrPlaneDetectorLocationsEXT32 *in, XrPlaneDetectorLocationsEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->planeLocationCapacityInput = in->planeLocationCapacityInput;
    out->planeLocationCountOutput = in->planeLocationCountOutput;
    out->planeLocations = convert_XrPlaneDetectorLocationEXT_array_win32_to_host(ctx, (XrPlaneDetectorLocationEXT32 *)(uintptr_t)UlongToPtr(in->planeLocations), in->planeLocationCapacityInput);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPlaneDetectorLocationsEXT_host_to_win32(const XrPlaneDetectorLocationsEXT *in, XrPlaneDetectorLocationsEXT32 *out)
{
    if (!in) return;

    out->planeLocationCapacityInput = in->planeLocationCapacityInput;
    out->planeLocationCountOutput = in->planeLocationCountOutput;
    convert_XrPlaneDetectorLocationEXT_array_host_to_win32(in->planeLocations, (XrPlaneDetectorLocationEXT32 *)(uintptr_t)UlongToPtr(out->planeLocations), in->planeLocationCapacityInput);
}

static inline void convert_XrPlaneDetectorPolygonBufferEXT_win32_to_host(const XrPlaneDetectorPolygonBufferEXT32 *in, XrPlaneDetectorPolygonBufferEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->vertexCapacityInput = in->vertexCapacityInput;
    out->vertexCountOutput = in->vertexCountOutput;
    out->vertices = (XrVector2f *)(uintptr_t)UlongToPtr(in->vertices);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPlaneDetectorPolygonBufferEXT_host_to_win32(const XrPlaneDetectorPolygonBufferEXT *in, XrPlaneDetectorPolygonBufferEXT32 *out)
{
    if (!in) return;

    out->vertexCapacityInput = in->vertexCapacityInput;
    out->vertexCountOutput = in->vertexCountOutput;
    out->vertices = PtrToUlong(in->vertices);
}

static inline void convert_XrQueriedSenseDataGetInfoBD_win32_to_host(const XrQueriedSenseDataGetInfoBD32 *in, XrQueriedSenseDataGetInfoBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrQueriedSenseDataGetInfoBD_host_to_win32(const XrQueriedSenseDataGetInfoBD *in, XrQueriedSenseDataGetInfoBD32 *out)
{
    if (!in) return;

}

static inline void convert_XrSpatialEntityStateBD_win32_to_host(const XrSpatialEntityStateBD32 *in, XrSpatialEntityStateBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->entityId = in->entityId;
    out->lastUpdateTime = in->lastUpdateTime;
    out->uuid = in->uuid;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialEntityStateBD_host_to_win32(const XrSpatialEntityStateBD *in, XrSpatialEntityStateBD32 *out)
{
    if (!in) return;

    out->entityId = in->entityId;
    out->lastUpdateTime = in->lastUpdateTime;
    out->uuid = in->uuid;
}

static inline XrSpatialEntityStateBD *convert_XrSpatialEntityStateBD_array_win32_to_host(struct conversion_context *ctx, const XrSpatialEntityStateBD32 *in, uint32_t count)
{
    XrSpatialEntityStateBD *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrSpatialEntityStateBD_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrSpatialEntityStateBD_array_host_to_win32(const XrSpatialEntityStateBD *in, XrSpatialEntityStateBD32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrSpatialEntityStateBD_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrQueriedSenseDataBD_win32_to_host(struct conversion_context *ctx, const XrQueriedSenseDataBD32 *in, XrQueriedSenseDataBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->stateCapacityInput = in->stateCapacityInput;
    out->stateCountOutput = in->stateCountOutput;
    out->states = convert_XrSpatialEntityStateBD_array_win32_to_host(ctx, (XrSpatialEntityStateBD32 *)(uintptr_t)UlongToPtr(in->states), in->stateCapacityInput);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrQueriedSenseDataBD_host_to_win32(const XrQueriedSenseDataBD *in, XrQueriedSenseDataBD32 *out)
{
    if (!in) return;

    out->stateCapacityInput = in->stateCapacityInput;
    out->stateCountOutput = in->stateCountOutput;
    convert_XrSpatialEntityStateBD_array_host_to_win32(in->states, (XrSpatialEntityStateBD32 *)(uintptr_t)UlongToPtr(out->states), in->stateCapacityInput);
}

static inline const XrCompositionLayerBaseHeader *convert_XrCompositionLayerBaseHeader_array_win32_to_host(struct conversion_context *ctx, const XrCompositionLayerBaseHeader32 *in, uint32_t count)
{
    XrCompositionLayerBaseHeader *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrCompositionLayerBaseHeader_win32_to_host(ctx, &in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrRecommendedLayerResolutionGetInfoMETA_win32_to_host(struct conversion_context *ctx, const XrRecommendedLayerResolutionGetInfoMETA32 *in, XrRecommendedLayerResolutionGetInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->layer = convert_XrCompositionLayerBaseHeader_array_win32_to_host(ctx, (const XrCompositionLayerBaseHeader32 *)(uintptr_t)UlongToPtr(in->layer), 1);
    out->predictedDisplayTime = in->predictedDisplayTime;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRecommendedLayerResolutionMETA_win32_to_host(const XrRecommendedLayerResolutionMETA32 *in, XrRecommendedLayerResolutionMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRecommendedLayerResolutionMETA_host_to_win32(const XrRecommendedLayerResolutionMETA *in, XrRecommendedLayerResolutionMETA32 *out)
{
    if (!in) return;

    out->recommendedImageDimensions = in->recommendedImageDimensions;
    out->isValid = in->isValid;
}

static inline void convert_XrRenderModelAssetDataGetInfoEXT_win32_to_host(const XrRenderModelAssetDataGetInfoEXT32 *in, XrRenderModelAssetDataGetInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelAssetDataEXT_win32_to_host(const XrRenderModelAssetDataEXT32 *in, XrRenderModelAssetDataEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->bufferCapacityInput = in->bufferCapacityInput;
    out->bufferCountOutput = in->bufferCountOutput;
    out->buffer = (uint8_t *)(uintptr_t)UlongToPtr(in->buffer);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelAssetDataEXT_host_to_win32(const XrRenderModelAssetDataEXT *in, XrRenderModelAssetDataEXT32 *out)
{
    if (!in) return;

    out->bufferCapacityInput = in->bufferCapacityInput;
    out->bufferCountOutput = in->bufferCountOutput;
    out->buffer = PtrToUlong(in->buffer);
}

static inline void convert_XrRenderModelAssetPropertiesGetInfoEXT_win32_to_host(const XrRenderModelAssetPropertiesGetInfoEXT32 *in, XrRenderModelAssetPropertiesGetInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelAssetPropertiesEXT_win32_to_host(const XrRenderModelAssetPropertiesEXT32 *in, XrRenderModelAssetPropertiesEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->nodePropertyCount = in->nodePropertyCount;
    out->nodeProperties = (XrRenderModelAssetNodePropertiesEXT *)(uintptr_t)UlongToPtr(in->nodeProperties);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelAssetPropertiesEXT_host_to_win32(const XrRenderModelAssetPropertiesEXT *in, XrRenderModelAssetPropertiesEXT32 *out)
{
    if (!in) return;

    out->nodePropertyCount = in->nodePropertyCount;
    out->nodeProperties = PtrToUlong(in->nodeProperties);
}

static inline void convert_XrInteractionRenderModelTopLevelUserPathGetInfoEXT_win32_to_host(const XrInteractionRenderModelTopLevelUserPathGetInfoEXT32 *in, XrInteractionRenderModelTopLevelUserPathGetInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->topLevelUserPathCount = in->topLevelUserPathCount;
    out->topLevelUserPaths = (const XrPath *)(uintptr_t)UlongToPtr(in->topLevelUserPaths);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelPropertiesGetInfoEXT_win32_to_host(const XrRenderModelPropertiesGetInfoEXT32 *in, XrRenderModelPropertiesGetInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelPropertiesEXT_win32_to_host(const XrRenderModelPropertiesEXT32 *in, XrRenderModelPropertiesEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelPropertiesEXT_host_to_win32(const XrRenderModelPropertiesEXT *in, XrRenderModelPropertiesEXT32 *out)
{
    if (!in) return;

    out->cacheId = in->cacheId;
    out->animatableNodeCount = in->animatableNodeCount;
}

static inline void convert_XrRenderModelPropertiesFB_win32_to_host(struct conversion_context *ctx, const XrRenderModelPropertiesFB32 *in, XrRenderModelPropertiesFB *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->vendorId = in->vendorId;
    memcpy(out->modelName, in->modelName, XR_MAX_RENDER_MODEL_NAME_SIZE_FB * sizeof(char));
    out->modelKey = in->modelKey;
    out->modelVersion = in->modelVersion;
    out->flags = in->flags;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_RENDER_MODEL_CAPABILITIES_REQUEST_FB:
        {
            XrRenderModelCapabilitiesRequestFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrRenderModelCapabilitiesRequestFB32 *in_ext = (const XrRenderModelCapabilitiesRequestFB32 *)in_header;
            out_ext->type = XR_TYPE_RENDER_MODEL_CAPABILITIES_REQUEST_FB;
            out_ext->next = NULL;
            out_ext->flags = in_ext->flags;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrRenderModelPropertiesFB_host_to_win32(const XrRenderModelPropertiesFB *in, XrRenderModelPropertiesFB32 *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure32 *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->vendorId = in->vendorId;
    memcpy(out->modelName, in->modelName, XR_MAX_RENDER_MODEL_NAME_SIZE_FB * sizeof(char));
    out->modelKey = in->modelKey;
    out->modelVersion = in->modelVersion;
    out->flags = in->flags;

    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        case XR_TYPE_RENDER_MODEL_CAPABILITIES_REQUEST_FB:
        {
            XrRenderModelCapabilitiesRequestFB32 *out_ext = find_next_struct32(out_header, XR_TYPE_RENDER_MODEL_CAPABILITIES_REQUEST_FB);
            const XrRenderModelCapabilitiesRequestFB *in_ext = (const XrRenderModelCapabilitiesRequestFB *)in_header;
            out_ext->type = XR_TYPE_RENDER_MODEL_CAPABILITIES_REQUEST_FB;
            out_ext->flags = in_ext->flags;
            out_header = (void *)out_ext;
            break;
        }
        default:
            break;
        }
    }
}

static inline void convert_XrRenderModelStateGetInfoEXT_win32_to_host(const XrRenderModelStateGetInfoEXT32 *in, XrRenderModelStateGetInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->displayTime = in->displayTime;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelStateEXT_win32_to_host(const XrRenderModelStateEXT32 *in, XrRenderModelStateEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->nodeStateCount = in->nodeStateCount;
    out->nodeStates = (XrRenderModelNodeStateEXT *)(uintptr_t)UlongToPtr(in->nodeStates);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelStateEXT_host_to_win32(const XrRenderModelStateEXT *in, XrRenderModelStateEXT32 *out)
{
    if (!in) return;

    out->nodeStateCount = in->nodeStateCount;
    out->nodeStates = PtrToUlong(in->nodeStates);
}

static inline void convert_XrSceneComponentsGetInfoMSFT_win32_to_host(struct conversion_context *ctx, const XrSceneComponentsGetInfoMSFT32 *in, XrSceneComponentsGetInfoMSFT *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->componentType = in->componentType;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SCENE_COMPONENT_PARENT_FILTER_INFO_MSFT:
        {
            XrSceneComponentParentFilterInfoMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSceneComponentParentFilterInfoMSFT32 *in_ext = (const XrSceneComponentParentFilterInfoMSFT32 *)in_header;
            out_ext->type = XR_TYPE_SCENE_COMPONENT_PARENT_FILTER_INFO_MSFT;
            out_ext->next = NULL;
            out_ext->parentId = in_ext->parentId;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SCENE_OBJECT_TYPES_FILTER_INFO_MSFT:
        {
            XrSceneObjectTypesFilterInfoMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSceneObjectTypesFilterInfoMSFT32 *in_ext = (const XrSceneObjectTypesFilterInfoMSFT32 *)in_header;
            out_ext->type = XR_TYPE_SCENE_OBJECT_TYPES_FILTER_INFO_MSFT;
            out_ext->next = NULL;
            out_ext->objectTypeCount = in_ext->objectTypeCount;
            out_ext->objectTypes = (const XrSceneObjectTypeMSFT *)(uintptr_t)UlongToPtr(in_ext->objectTypes);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SCENE_PLANE_ALIGNMENT_FILTER_INFO_MSFT:
        {
            XrScenePlaneAlignmentFilterInfoMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrScenePlaneAlignmentFilterInfoMSFT32 *in_ext = (const XrScenePlaneAlignmentFilterInfoMSFT32 *)in_header;
            out_ext->type = XR_TYPE_SCENE_PLANE_ALIGNMENT_FILTER_INFO_MSFT;
            out_ext->next = NULL;
            out_ext->alignmentCount = in_ext->alignmentCount;
            out_ext->alignments = (const XrScenePlaneAlignmentTypeMSFT *)(uintptr_t)UlongToPtr(in_ext->alignments);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SCENE_MARKER_TYPE_FILTER_MSFT:
        {
            XrSceneMarkerTypeFilterMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSceneMarkerTypeFilterMSFT32 *in_ext = (const XrSceneMarkerTypeFilterMSFT32 *)in_header;
            out_ext->type = XR_TYPE_SCENE_MARKER_TYPE_FILTER_MSFT;
            out_ext->next = NULL;
            out_ext->markerTypeCount = in_ext->markerTypeCount;
            out_ext->markerTypes = (XrSceneMarkerTypeMSFT *)(uintptr_t)UlongToPtr(in_ext->markerTypes);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrScenePlaneMSFT_win32_to_host(const XrScenePlaneMSFT32 *in, XrScenePlaneMSFT *out)
{
    if (!in) return;

    out->alignment = in->alignment;
    out->size = in->size;
    out->meshBufferId = in->meshBufferId;
    out->supportsIndicesUint16 = in->supportsIndicesUint16;
}

static inline void convert_XrScenePlaneMSFT_host_to_win32(const XrScenePlaneMSFT *in, XrScenePlaneMSFT32 *out)
{
    if (!in) return;

    out->alignment = in->alignment;
    out->size = in->size;
    out->meshBufferId = in->meshBufferId;
    out->supportsIndicesUint16 = in->supportsIndicesUint16;
}

static inline XrScenePlaneMSFT *convert_XrScenePlaneMSFT_array_win32_to_host(struct conversion_context *ctx, const XrScenePlaneMSFT32 *in, uint32_t count)
{
    XrScenePlaneMSFT *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrScenePlaneMSFT_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrScenePlaneMSFT_array_host_to_win32(const XrScenePlaneMSFT *in, XrScenePlaneMSFT32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrScenePlaneMSFT_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrSceneMeshMSFT_win32_to_host(const XrSceneMeshMSFT32 *in, XrSceneMeshMSFT *out)
{
    if (!in) return;

    out->meshBufferId = in->meshBufferId;
    out->supportsIndicesUint16 = in->supportsIndicesUint16;
}

static inline void convert_XrSceneMeshMSFT_host_to_win32(const XrSceneMeshMSFT *in, XrSceneMeshMSFT32 *out)
{
    if (!in) return;

    out->meshBufferId = in->meshBufferId;
    out->supportsIndicesUint16 = in->supportsIndicesUint16;
}

static inline XrSceneMeshMSFT *convert_XrSceneMeshMSFT_array_win32_to_host(struct conversion_context *ctx, const XrSceneMeshMSFT32 *in, uint32_t count)
{
    XrSceneMeshMSFT *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrSceneMeshMSFT_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrSceneMeshMSFT_array_host_to_win32(const XrSceneMeshMSFT *in, XrSceneMeshMSFT32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrSceneMeshMSFT_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrSceneComponentsMSFT_win32_to_host(struct conversion_context *ctx, const XrSceneComponentsMSFT32 *in, XrSceneComponentsMSFT *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->componentCapacityInput = in->componentCapacityInput;
    out->componentCountOutput = in->componentCountOutput;
    out->components = (XrSceneComponentMSFT *)(uintptr_t)UlongToPtr(in->components);

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SCENE_OBJECTS_MSFT:
        {
            XrSceneObjectsMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSceneObjectsMSFT32 *in_ext = (const XrSceneObjectsMSFT32 *)in_header;
            out_ext->type = XR_TYPE_SCENE_OBJECTS_MSFT;
            out_ext->next = NULL;
            out_ext->sceneObjectCount = in_ext->sceneObjectCount;
            out_ext->sceneObjects = (XrSceneObjectMSFT *)(uintptr_t)UlongToPtr(in_ext->sceneObjects);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SCENE_PLANES_MSFT:
        {
            XrScenePlanesMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrScenePlanesMSFT32 *in_ext = (const XrScenePlanesMSFT32 *)in_header;
            out_ext->type = XR_TYPE_SCENE_PLANES_MSFT;
            out_ext->next = NULL;
            out_ext->scenePlaneCount = in_ext->scenePlaneCount;
            out_ext->scenePlanes = convert_XrScenePlaneMSFT_array_win32_to_host(ctx, (XrScenePlaneMSFT32 *)(uintptr_t)UlongToPtr(in_ext->scenePlanes), in_ext->scenePlaneCount);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SCENE_MESHES_MSFT:
        {
            XrSceneMeshesMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSceneMeshesMSFT32 *in_ext = (const XrSceneMeshesMSFT32 *)in_header;
            out_ext->type = XR_TYPE_SCENE_MESHES_MSFT;
            out_ext->next = NULL;
            out_ext->sceneMeshCount = in_ext->sceneMeshCount;
            out_ext->sceneMeshes = convert_XrSceneMeshMSFT_array_win32_to_host(ctx, (XrSceneMeshMSFT32 *)(uintptr_t)UlongToPtr(in_ext->sceneMeshes), in_ext->sceneMeshCount);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SCENE_MARKERS_MSFT:
        {
            XrSceneMarkersMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSceneMarkersMSFT32 *in_ext = (const XrSceneMarkersMSFT32 *)in_header;
            out_ext->type = XR_TYPE_SCENE_MARKERS_MSFT;
            out_ext->next = NULL;
            out_ext->sceneMarkerCapacityInput = in_ext->sceneMarkerCapacityInput;
            out_ext->sceneMarkers = (XrSceneMarkerMSFT *)(uintptr_t)UlongToPtr(in_ext->sceneMarkers);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SCENE_MARKER_QR_CODES_MSFT:
        {
            XrSceneMarkerQRCodesMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSceneMarkerQRCodesMSFT32 *in_ext = (const XrSceneMarkerQRCodesMSFT32 *)in_header;
            out_ext->type = XR_TYPE_SCENE_MARKER_QR_CODES_MSFT;
            out_ext->next = NULL;
            out_ext->qrCodeCapacityInput = in_ext->qrCodeCapacityInput;
            out_ext->qrCodes = (XrSceneMarkerQRCodeMSFT *)(uintptr_t)UlongToPtr(in_ext->qrCodes);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrSceneComponentsMSFT_host_to_win32(const XrSceneComponentsMSFT *in, XrSceneComponentsMSFT32 *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure32 *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->componentCapacityInput = in->componentCapacityInput;
    out->componentCountOutput = in->componentCountOutput;
    out->components = PtrToUlong(in->components);

    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        case XR_TYPE_SCENE_OBJECTS_MSFT:
        {
            XrSceneObjectsMSFT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SCENE_OBJECTS_MSFT);
            const XrSceneObjectsMSFT *in_ext = (const XrSceneObjectsMSFT *)in_header;
            out_ext->type = XR_TYPE_SCENE_OBJECTS_MSFT;
            out_ext->sceneObjectCount = in_ext->sceneObjectCount;
            out_ext->sceneObjects = PtrToUlong(in_ext->sceneObjects);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SCENE_PLANES_MSFT:
        {
            XrScenePlanesMSFT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SCENE_PLANES_MSFT);
            const XrScenePlanesMSFT *in_ext = (const XrScenePlanesMSFT *)in_header;
            out_ext->type = XR_TYPE_SCENE_PLANES_MSFT;
            out_ext->scenePlaneCount = in_ext->scenePlaneCount;
            convert_XrScenePlaneMSFT_array_host_to_win32(in_ext->scenePlanes, (XrScenePlaneMSFT32 *)(uintptr_t)UlongToPtr(out_ext->scenePlanes), in_ext->scenePlaneCount);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SCENE_MESHES_MSFT:
        {
            XrSceneMeshesMSFT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SCENE_MESHES_MSFT);
            const XrSceneMeshesMSFT *in_ext = (const XrSceneMeshesMSFT *)in_header;
            out_ext->type = XR_TYPE_SCENE_MESHES_MSFT;
            out_ext->sceneMeshCount = in_ext->sceneMeshCount;
            convert_XrSceneMeshMSFT_array_host_to_win32(in_ext->sceneMeshes, (XrSceneMeshMSFT32 *)(uintptr_t)UlongToPtr(out_ext->sceneMeshes), in_ext->sceneMeshCount);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SCENE_MARKERS_MSFT:
        {
            XrSceneMarkersMSFT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SCENE_MARKERS_MSFT);
            const XrSceneMarkersMSFT *in_ext = (const XrSceneMarkersMSFT *)in_header;
            out_ext->type = XR_TYPE_SCENE_MARKERS_MSFT;
            out_ext->sceneMarkerCapacityInput = in_ext->sceneMarkerCapacityInput;
            out_ext->sceneMarkers = PtrToUlong(in_ext->sceneMarkers);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SCENE_MARKER_QR_CODES_MSFT:
        {
            XrSceneMarkerQRCodesMSFT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SCENE_MARKER_QR_CODES_MSFT);
            const XrSceneMarkerQRCodesMSFT *in_ext = (const XrSceneMarkerQRCodesMSFT *)in_header;
            out_ext->type = XR_TYPE_SCENE_MARKER_QR_CODES_MSFT;
            out_ext->qrCodeCapacityInput = in_ext->qrCodeCapacityInput;
            out_ext->qrCodes = PtrToUlong(in_ext->qrCodes);
            out_header = (void *)out_ext;
            break;
        }
        default:
            break;
        }
    }
}

static inline void convert_XrSceneMeshBuffersGetInfoMSFT_win32_to_host(const XrSceneMeshBuffersGetInfoMSFT32 *in, XrSceneMeshBuffersGetInfoMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->meshBufferId = in->meshBufferId;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSceneMeshBuffersMSFT_win32_to_host(const XrSceneMeshBuffersMSFT32 *in, XrSceneMeshBuffersMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSceneMeshBuffersMSFT_host_to_win32(const XrSceneMeshBuffersMSFT *in, XrSceneMeshBuffersMSFT32 *out)
{
    if (!in) return;

}

static inline void convert_XrSerializedSceneFragmentDataGetInfoMSFT_win32_to_host(const XrSerializedSceneFragmentDataGetInfoMSFT32 *in, XrSerializedSceneFragmentDataGetInfoMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->sceneFragmentId = in->sceneFragmentId;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrBoundary2DFB_win32_to_host(const XrBoundary2DFB32 *in, XrBoundary2DFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->vertexCapacityInput = in->vertexCapacityInput;
    out->vertexCountOutput = in->vertexCountOutput;
    out->vertices = (XrVector2f *)(uintptr_t)UlongToPtr(in->vertices);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrBoundary2DFB_host_to_win32(const XrBoundary2DFB *in, XrBoundary2DFB32 *out)
{
    if (!in) return;

    out->vertexCapacityInput = in->vertexCapacityInput;
    out->vertexCountOutput = in->vertexCountOutput;
    out->vertices = PtrToUlong(in->vertices);
}

static inline void convert_XrSpaceComponentStatusFB_win32_to_host(const XrSpaceComponentStatusFB32 *in, XrSpaceComponentStatusFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpaceComponentStatusFB_host_to_win32(const XrSpaceComponentStatusFB *in, XrSpaceComponentStatusFB32 *out)
{
    if (!in) return;

    out->enabled = in->enabled;
    out->changePending = in->changePending;
}

static inline void convert_XrSpaceContainerFB_win32_to_host(const XrSpaceContainerFB32 *in, XrSpaceContainerFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->uuidCapacityInput = in->uuidCapacityInput;
    out->uuidCountOutput = in->uuidCountOutput;
    out->uuids = (XrUuidEXT *)(uintptr_t)UlongToPtr(in->uuids);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpaceContainerFB_host_to_win32(const XrSpaceContainerFB *in, XrSpaceContainerFB32 *out)
{
    if (!in) return;

    out->uuidCapacityInput = in->uuidCapacityInput;
    out->uuidCountOutput = in->uuidCountOutput;
    out->uuids = PtrToUlong(in->uuids);
}

static inline void convert_XrRoomLayoutFB_win32_to_host(const XrRoomLayoutFB32 *in, XrRoomLayoutFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->floorUuid = in->floorUuid;
    out->ceilingUuid = in->ceilingUuid;
    out->wallUuidCapacityInput = in->wallUuidCapacityInput;
    out->wallUuidCountOutput = in->wallUuidCountOutput;
    out->wallUuids = (XrUuidEXT *)(uintptr_t)UlongToPtr(in->wallUuids);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRoomLayoutFB_host_to_win32(const XrRoomLayoutFB *in, XrRoomLayoutFB32 *out)
{
    if (!in) return;

    out->floorUuid = in->floorUuid;
    out->ceilingUuid = in->ceilingUuid;
    out->wallUuidCapacityInput = in->wallUuidCapacityInput;
    out->wallUuidCountOutput = in->wallUuidCountOutput;
    out->wallUuids = PtrToUlong(in->wallUuids);
}

static inline void convert_XrSemanticLabelsFB_win32_to_host(const XrSemanticLabelsFB32 *in, XrSemanticLabelsFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->bufferCapacityInput = in->bufferCapacityInput;
    out->bufferCountOutput = in->bufferCountOutput;
    out->buffer = (char *)(uintptr_t)UlongToPtr(in->buffer);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSemanticLabelsFB_host_to_win32(const XrSemanticLabelsFB *in, XrSemanticLabelsFB32 *out)
{
    if (!in) return;

    out->bufferCapacityInput = in->bufferCapacityInput;
    out->bufferCountOutput = in->bufferCountOutput;
    out->buffer = PtrToUlong(in->buffer);
}

static inline void convert_XrSpaceTriangleMeshGetInfoMETA_win32_to_host(const XrSpaceTriangleMeshGetInfoMETA32 *in, XrSpaceTriangleMeshGetInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpaceTriangleMeshMETA_win32_to_host(const XrSpaceTriangleMeshMETA32 *in, XrSpaceTriangleMeshMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpaceTriangleMeshMETA_host_to_win32(const XrSpaceTriangleMeshMETA *in, XrSpaceTriangleMeshMETA32 *out)
{
    if (!in) return;

    out->vertexCapacityInput = in->vertexCapacityInput;
    out->vertexCountOutput = in->vertexCountOutput;
    out->vertices = PtrToUlong(in->vertices);
    out->indexCapacityInput = in->indexCapacityInput;
    out->indexCountOutput = in->indexCountOutput;
    out->indices = PtrToUlong(in->indices);
}

static inline void convert_XrSpatialAnchorStateML_win32_to_host(const XrSpatialAnchorStateML32 *in, XrSpatialAnchorStateML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->confidence = in->confidence;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorStateML_host_to_win32(const XrSpatialAnchorStateML *in, XrSpatialAnchorStateML32 *out)
{
    if (!in) return;

    out->confidence = in->confidence;
}

static inline void convert_XrSpatialBufferGetInfoEXT_win32_to_host(const XrSpatialBufferGetInfoEXT32 *in, XrSpatialBufferGetInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->bufferId = in->bufferId;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialEntityComponentGetInfoBD_win32_to_host(const XrSpatialEntityComponentGetInfoBD32 *in, XrSpatialEntityComponentGetInfoBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->entityId = in->entityId;
    out->componentType = in->componentType;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpaceLocation_win32_to_host(struct conversion_context *ctx, const XrSpaceLocation32 *in, XrSpaceLocation *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->locationFlags = in->locationFlags;
    out->pose = in->pose;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPACE_VELOCITY:
        {
            XrSpaceVelocity *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpaceVelocity32 *in_ext = (const XrSpaceVelocity32 *)in_header;
            out_ext->type = XR_TYPE_SPACE_VELOCITY;
            out_ext->next = NULL;
            out_ext->velocityFlags = in_ext->velocityFlags;
            out_ext->linearVelocity = in_ext->linearVelocity;
            out_ext->angularVelocity = in_ext->angularVelocity;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_EYE_GAZE_SAMPLE_TIME_EXT:
        {
            XrEyeGazeSampleTimeEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrEyeGazeSampleTimeEXT32 *in_ext = (const XrEyeGazeSampleTimeEXT32 *)in_header;
            out_ext->type = XR_TYPE_EYE_GAZE_SAMPLE_TIME_EXT;
            out_ext->next = NULL;
            out_ext->time = in_ext->time;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrSpaceLocation_host_to_win32(const XrSpaceLocation *in, XrSpaceLocation32 *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure32 *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->locationFlags = in->locationFlags;
    out->pose = in->pose;

    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPACE_VELOCITY:
        {
            XrSpaceVelocity32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPACE_VELOCITY);
            const XrSpaceVelocity *in_ext = (const XrSpaceVelocity *)in_header;
            out_ext->type = XR_TYPE_SPACE_VELOCITY;
            out_ext->velocityFlags = in_ext->velocityFlags;
            out_ext->linearVelocity = in_ext->linearVelocity;
            out_ext->angularVelocity = in_ext->angularVelocity;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_EYE_GAZE_SAMPLE_TIME_EXT:
        {
            XrEyeGazeSampleTimeEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_EYE_GAZE_SAMPLE_TIME_EXT);
            const XrEyeGazeSampleTimeEXT *in_ext = (const XrEyeGazeSampleTimeEXT *)in_header;
            out_ext->type = XR_TYPE_EYE_GAZE_SAMPLE_TIME_EXT;
            out_ext->time = in_ext->time;
            out_header = (void *)out_ext;
            break;
        }
        default:
            break;
        }
    }
}

static inline void convert_XrSpatialEntityComponentDataBaseHeaderBD_win32_to_host(struct conversion_context *ctx, const XrSpatialEntityComponentDataBaseHeaderBD32 *in, XrSpatialEntityComponentDataBaseHeaderBD *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_LOCATION_BD:
        {
            XrSpatialEntityComponentDataLocationBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialEntityComponentDataLocationBD32 *in_ext = (const XrSpatialEntityComponentDataLocationBD32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_LOCATION_BD;
            out_ext->next = NULL;
            convert_XrSpaceLocation_win32_to_host(ctx, &in_ext->location, &out_ext->location);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_SEMANTIC_BD:
        {
            XrSpatialEntityComponentDataSemanticBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialEntityComponentDataSemanticBD32 *in_ext = (const XrSpatialEntityComponentDataSemanticBD32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_SEMANTIC_BD;
            out_ext->next = NULL;
            out_ext->labelCapacityInput = in_ext->labelCapacityInput;
            out_ext->labelCountOutput = in_ext->labelCountOutput;
            out_ext->labels = (XrSemanticLabelBD *)(uintptr_t)UlongToPtr(in_ext->labels);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_2D_BD:
        {
            XrSpatialEntityComponentDataBoundingBox2DBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialEntityComponentDataBoundingBox2DBD32 *in_ext = (const XrSpatialEntityComponentDataBoundingBox2DBD32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_2D_BD;
            out_ext->next = NULL;
            out_ext->boundingBox2D = in_ext->boundingBox2D;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_POLYGON_BD:
        {
            XrSpatialEntityComponentDataPolygonBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialEntityComponentDataPolygonBD32 *in_ext = (const XrSpatialEntityComponentDataPolygonBD32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_POLYGON_BD;
            out_ext->next = NULL;
            out_ext->vertexCapacityInput = in_ext->vertexCapacityInput;
            out_ext->vertexCountOutput = in_ext->vertexCountOutput;
            out_ext->vertices = (XrVector2f *)(uintptr_t)UlongToPtr(in_ext->vertices);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_3D_BD:
        {
            XrSpatialEntityComponentDataBoundingBox3DBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialEntityComponentDataBoundingBox3DBD32 *in_ext = (const XrSpatialEntityComponentDataBoundingBox3DBD32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_3D_BD;
            out_ext->next = NULL;
            out_ext->boundingBox3D = in_ext->boundingBox3D;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_TRIANGLE_MESH_BD:
        {
            XrSpatialEntityComponentDataTriangleMeshBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialEntityComponentDataTriangleMeshBD32 *in_ext = (const XrSpatialEntityComponentDataTriangleMeshBD32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_TRIANGLE_MESH_BD;
            out_ext->next = NULL;
            out_ext->vertexCapacityInput = in_ext->vertexCapacityInput;
            out_ext->vertexCountOutput = in_ext->vertexCountOutput;
            out_ext->vertices = (XrVector3f *)(uintptr_t)UlongToPtr(in_ext->vertices);
            out_ext->indexCapacityInput = in_ext->indexCapacityInput;
            out_ext->indexCountOutput = in_ext->indexCountOutput;
            out_ext->indices = (uint16_t *)(uintptr_t)UlongToPtr(in_ext->indices);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_PLANE_ORIENTATION_BD:
        {
            XrSpatialEntityComponentDataPlaneOrientationBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialEntityComponentDataPlaneOrientationBD32 *in_ext = (const XrSpatialEntityComponentDataPlaneOrientationBD32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_PLANE_ORIENTATION_BD;
            out_ext->next = NULL;
            out_ext->orientation = in_ext->orientation;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrSpatialEntityComponentDataBaseHeaderBD_host_to_win32(const XrSpatialEntityComponentDataBaseHeaderBD *in, XrSpatialEntityComponentDataBaseHeaderBD32 *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure32 *out_header = (void *)out;
    (void)out_header;

    if (!in) return;


    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_LOCATION_BD:
        {
            XrSpatialEntityComponentDataLocationBD32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_LOCATION_BD);
            const XrSpatialEntityComponentDataLocationBD *in_ext = (const XrSpatialEntityComponentDataLocationBD *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_LOCATION_BD;
            convert_XrSpaceLocation_host_to_win32(&in_ext->location, &out_ext->location);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_SEMANTIC_BD:
        {
            XrSpatialEntityComponentDataSemanticBD32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_SEMANTIC_BD);
            const XrSpatialEntityComponentDataSemanticBD *in_ext = (const XrSpatialEntityComponentDataSemanticBD *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_SEMANTIC_BD;
            out_ext->labelCapacityInput = in_ext->labelCapacityInput;
            out_ext->labelCountOutput = in_ext->labelCountOutput;
            out_ext->labels = PtrToUlong(in_ext->labels);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_2D_BD:
        {
            XrSpatialEntityComponentDataBoundingBox2DBD32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_2D_BD);
            const XrSpatialEntityComponentDataBoundingBox2DBD *in_ext = (const XrSpatialEntityComponentDataBoundingBox2DBD *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_2D_BD;
            out_ext->boundingBox2D = in_ext->boundingBox2D;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_POLYGON_BD:
        {
            XrSpatialEntityComponentDataPolygonBD32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_POLYGON_BD);
            const XrSpatialEntityComponentDataPolygonBD *in_ext = (const XrSpatialEntityComponentDataPolygonBD *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_POLYGON_BD;
            out_ext->vertexCapacityInput = in_ext->vertexCapacityInput;
            out_ext->vertexCountOutput = in_ext->vertexCountOutput;
            out_ext->vertices = PtrToUlong(in_ext->vertices);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_3D_BD:
        {
            XrSpatialEntityComponentDataBoundingBox3DBD32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_3D_BD);
            const XrSpatialEntityComponentDataBoundingBox3DBD *in_ext = (const XrSpatialEntityComponentDataBoundingBox3DBD *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_3D_BD;
            out_ext->boundingBox3D = in_ext->boundingBox3D;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_TRIANGLE_MESH_BD:
        {
            XrSpatialEntityComponentDataTriangleMeshBD32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_TRIANGLE_MESH_BD);
            const XrSpatialEntityComponentDataTriangleMeshBD *in_ext = (const XrSpatialEntityComponentDataTriangleMeshBD *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_TRIANGLE_MESH_BD;
            out_ext->vertexCapacityInput = in_ext->vertexCapacityInput;
            out_ext->vertexCountOutput = in_ext->vertexCountOutput;
            out_ext->vertices = PtrToUlong(in_ext->vertices);
            out_ext->indexCapacityInput = in_ext->indexCapacityInput;
            out_ext->indexCountOutput = in_ext->indexCountOutput;
            out_ext->indices = PtrToUlong(in_ext->indices);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_PLANE_ORIENTATION_BD:
        {
            XrSpatialEntityComponentDataPlaneOrientationBD32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_PLANE_ORIENTATION_BD);
            const XrSpatialEntityComponentDataPlaneOrientationBD *in_ext = (const XrSpatialEntityComponentDataPlaneOrientationBD *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_PLANE_ORIENTATION_BD;
            out_ext->orientation = in_ext->orientation;
            out_header = (void *)out_ext;
            break;
        }
        default:
            break;
        }
    }
}

static inline void convert_XrSpatialGraphNodeBindingPropertiesGetInfoMSFT_win32_to_host(const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT32 *in, XrSpatialGraphNodeBindingPropertiesGetInfoMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialGraphNodeBindingPropertiesMSFT_win32_to_host(const XrSpatialGraphNodeBindingPropertiesMSFT32 *in, XrSpatialGraphNodeBindingPropertiesMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    memcpy(out->nodeId, in->nodeId, XR_GUID_SIZE_MSFT * sizeof(uint8_t));
    out->poseInNodeSpace = in->poseInNodeSpace;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialGraphNodeBindingPropertiesMSFT_host_to_win32(const XrSpatialGraphNodeBindingPropertiesMSFT *in, XrSpatialGraphNodeBindingPropertiesMSFT32 *out)
{
    if (!in) return;

    memcpy(out->nodeId, in->nodeId, XR_GUID_SIZE_MSFT * sizeof(uint8_t));
    out->poseInNodeSpace = in->poseInNodeSpace;
}

static inline void convert_XrSwapchainStateBaseHeaderFB_win32_to_host(const XrSwapchainStateBaseHeaderFB32 *in, XrSwapchainStateBaseHeaderFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSwapchainStateBaseHeaderFB_host_to_win32(const XrSwapchainStateBaseHeaderFB *in, XrSwapchainStateBaseHeaderFB32 *out)
{
    if (!in) return;

}

static inline void convert_XrSystemGetInfo_win32_to_host(const XrSystemGetInfo32 *in, XrSystemGetInfo *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->formFactor = in->formFactor;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSystemProperties_win32_to_host(struct conversion_context *ctx, const XrSystemProperties32 *in, XrSystemProperties *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SYSTEM_EYE_GAZE_INTERACTION_PROPERTIES_EXT:
        {
            XrSystemEyeGazeInteractionPropertiesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_EYE_GAZE_INTERACTION_PROPERTIES_EXT;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_HAND_TRACKING_PROPERTIES_EXT:
        {
            XrSystemHandTrackingPropertiesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_HAND_TRACKING_PROPERTIES_EXT;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES_FB:
        {
            XrSystemFaceTrackingPropertiesFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES_FB;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES2_FB:
        {
            XrSystemFaceTrackingProperties2FB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES2_FB;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_FB:
        {
            XrSystemBodyTrackingPropertiesFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_FB;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_FULL_BODY_META:
        {
            XrSystemPropertiesBodyTrackingFullBodyMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_FULL_BODY_META;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_CALIBRATION_META:
        {
            XrSystemPropertiesBodyTrackingCalibrationMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_CALIBRATION_META;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_EYE_TRACKING_PROPERTIES_FB:
        {
            XrSystemEyeTrackingPropertiesFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_EYE_TRACKING_PROPERTIES_FB;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_HAND_TRACKING_MESH_PROPERTIES_MSFT:
        {
            XrSystemHandTrackingMeshPropertiesMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_HAND_TRACKING_MESH_PROPERTIES_MSFT;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_COLOR_SPACE_PROPERTIES_FB:
        {
            XrSystemColorSpacePropertiesFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_COLOR_SPACE_PROPERTIES_FB;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_ENTITY_PROPERTIES_FB:
        {
            XrSystemSpatialEntityPropertiesFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_ENTITY_PROPERTIES_FB;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_FOVEATION_EYE_TRACKED_PROPERTIES_META:
        {
            XrSystemFoveationEyeTrackedPropertiesMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_FOVEATION_EYE_TRACKED_PROPERTIES_META;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_RENDER_MODEL_PROPERTIES_FB:
        {
            XrSystemRenderModelPropertiesFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_RENDER_MODEL_PROPERTIES_FB;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_KEYBOARD_TRACKING_PROPERTIES_FB:
        {
            XrSystemKeyboardTrackingPropertiesFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_KEYBOARD_TRACKING_PROPERTIES_FB;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_COLOCATION_DISCOVERY_PROPERTIES_META:
        {
            XrSystemColocationDiscoveryPropertiesMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_COLOCATION_DISCOVERY_PROPERTIES_META;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_ENTITY_SHARING_PROPERTIES_META:
        {
            XrSystemSpatialEntitySharingPropertiesMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_ENTITY_SHARING_PROPERTIES_META;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_ENTITY_GROUP_SHARING_PROPERTIES_META:
        {
            XrSystemSpatialEntityGroupSharingPropertiesMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_ENTITY_GROUP_SHARING_PROPERTIES_META;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_FOVEATED_RENDERING_PROPERTIES_VARJO:
        {
            XrSystemFoveatedRenderingPropertiesVARJO *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_FOVEATED_RENDERING_PROPERTIES_VARJO;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES_FB:
        {
            XrSystemPassthroughPropertiesFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES_FB;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES2_FB:
        {
            XrSystemPassthroughProperties2FB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES2_FB;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_BD:
        {
            XrSystemBodyTrackingPropertiesBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_BD;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_FACIAL_TRACKING_PROPERTIES_HTC:
        {
            XrSystemFacialTrackingPropertiesHTC *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_FACIAL_TRACKING_PROPERTIES_HTC;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_ANCHOR_PROPERTIES_HTC:
        {
            XrSystemAnchorPropertiesHTC *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_ANCHOR_PROPERTIES_HTC;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_HTC:
        {
            XrSystemBodyTrackingPropertiesHTC *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_HTC;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPACE_WARP_PROPERTIES_FB:
        {
            XrSystemSpaceWarpPropertiesFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_SPACE_WARP_PROPERTIES_FB;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_VARJO:
        {
            XrSystemMarkerTrackingPropertiesVARJO *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_VARJO;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_HEADSET_ID_PROPERTIES_META:
        {
            XrSystemHeadsetIdPropertiesMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_HEADSET_ID_PROPERTIES_META;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPACE_PERSISTENCE_PROPERTIES_META:
        {
            XrSystemSpacePersistencePropertiesMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_SPACE_PERSISTENCE_PROPERTIES_META;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPACE_DISCOVERY_PROPERTIES_META:
        {
            XrSystemSpaceDiscoveryPropertiesMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_SPACE_DISCOVERY_PROPERTIES_META;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_PASSTHROUGH_COLOR_LUT_PROPERTIES_META:
        {
            XrSystemPassthroughColorLutPropertiesMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_PASSTHROUGH_COLOR_LUT_PROPERTIES_META;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_FORCE_FEEDBACK_CURL_PROPERTIES_MNDX:
        {
            XrSystemForceFeedbackCurlPropertiesMNDX *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_FORCE_FEEDBACK_CURL_PROPERTIES_MNDX;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_PASSTHROUGH_CAMERA_STATE_PROPERTIES_ANDROID:
        {
            XrSystemPassthroughCameraStatePropertiesANDROID *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_PASSTHROUGH_CAMERA_STATE_PROPERTIES_ANDROID;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_TRACKABLES_PROPERTIES_ANDROID:
        {
            XrSystemTrackablesPropertiesANDROID *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_TRACKABLES_PROPERTIES_ANDROID;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_ANDROID:
        {
            XrSystemMarkerTrackingPropertiesANDROID *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_ANDROID;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_DEVICE_ANCHOR_PERSISTENCE_PROPERTIES_ANDROID:
        {
            XrSystemDeviceAnchorPersistencePropertiesANDROID *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_DEVICE_ANCHOR_PERSISTENCE_PROPERTIES_ANDROID;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_PLANE_DETECTION_PROPERTIES_EXT:
        {
            XrSystemPlaneDetectionPropertiesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_PLANE_DETECTION_PROPERTIES_EXT;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_VIRTUAL_KEYBOARD_PROPERTIES_META:
        {
            XrSystemVirtualKeyboardPropertiesMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_VIRTUAL_KEYBOARD_PROPERTIES_META;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_MARKER_UNDERSTANDING_PROPERTIES_ML:
        {
            XrSystemMarkerUnderstandingPropertiesML *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_MARKER_UNDERSTANDING_PROPERTIES_ML;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_FACIAL_EXPRESSION_PROPERTIES_ML:
        {
            XrSystemFacialExpressionPropertiesML *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_FACIAL_EXPRESSION_PROPERTIES_ML;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_USER_PRESENCE_PROPERTIES_EXT:
        {
            XrSystemUserPresencePropertiesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_USER_PRESENCE_PROPERTIES_EXT;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_ENVIRONMENT_DEPTH_PROPERTIES_META:
        {
            XrSystemEnvironmentDepthPropertiesMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_ENVIRONMENT_DEPTH_PROPERTIES_META;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_SENSING_PROPERTIES_BD:
        {
            XrSystemSpatialSensingPropertiesBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_SENSING_PROPERTIES_BD;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_ANCHOR_PROPERTIES_BD:
        {
            XrSystemSpatialAnchorPropertiesBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_ANCHOR_PROPERTIES_BD;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_ANCHOR_SHARING_PROPERTIES_BD:
        {
            XrSystemSpatialAnchorSharingPropertiesBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_ANCHOR_SHARING_PROPERTIES_BD;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_MESH_PROPERTIES_BD:
        {
            XrSystemSpatialMeshPropertiesBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_MESH_PROPERTIES_BD;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_SCENE_PROPERTIES_BD:
        {
            XrSystemSpatialScenePropertiesBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_SCENE_PROPERTIES_BD;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_PLANE_PROPERTIES_BD:
        {
            XrSystemSpatialPlanePropertiesBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_PLANE_PROPERTIES_BD;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SIMULTANEOUS_HANDS_AND_CONTROLLERS_PROPERTIES_META:
        {
            XrSystemSimultaneousHandsAndControllersPropertiesMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_SYSTEM_SIMULTANEOUS_HANDS_AND_CONTROLLERS_PROPERTIES_META;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrSystemProperties_host_to_win32(const XrSystemProperties *in, XrSystemProperties32 *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure32 *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->systemId = in->systemId;
    out->vendorId = in->vendorId;
    memcpy(out->systemName, in->systemName, XR_MAX_SYSTEM_NAME_SIZE * sizeof(char));
    out->graphicsProperties = in->graphicsProperties;
    out->trackingProperties = in->trackingProperties;

    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        case XR_TYPE_SYSTEM_EYE_GAZE_INTERACTION_PROPERTIES_EXT:
        {
            XrSystemEyeGazeInteractionPropertiesEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_EYE_GAZE_INTERACTION_PROPERTIES_EXT);
            const XrSystemEyeGazeInteractionPropertiesEXT *in_ext = (const XrSystemEyeGazeInteractionPropertiesEXT *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_EYE_GAZE_INTERACTION_PROPERTIES_EXT;
            out_ext->supportsEyeGazeInteraction = in_ext->supportsEyeGazeInteraction;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_HAND_TRACKING_PROPERTIES_EXT:
        {
            XrSystemHandTrackingPropertiesEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_HAND_TRACKING_PROPERTIES_EXT);
            const XrSystemHandTrackingPropertiesEXT *in_ext = (const XrSystemHandTrackingPropertiesEXT *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_HAND_TRACKING_PROPERTIES_EXT;
            out_ext->supportsHandTracking = in_ext->supportsHandTracking;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES_FB:
        {
            XrSystemFaceTrackingPropertiesFB32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES_FB);
            const XrSystemFaceTrackingPropertiesFB *in_ext = (const XrSystemFaceTrackingPropertiesFB *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES_FB;
            out_ext->supportsFaceTracking = in_ext->supportsFaceTracking;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES2_FB:
        {
            XrSystemFaceTrackingProperties2FB32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES2_FB);
            const XrSystemFaceTrackingProperties2FB *in_ext = (const XrSystemFaceTrackingProperties2FB *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES2_FB;
            out_ext->supportsVisualFaceTracking = in_ext->supportsVisualFaceTracking;
            out_ext->supportsAudioFaceTracking = in_ext->supportsAudioFaceTracking;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_FB:
        {
            XrSystemBodyTrackingPropertiesFB32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_FB);
            const XrSystemBodyTrackingPropertiesFB *in_ext = (const XrSystemBodyTrackingPropertiesFB *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_FB;
            out_ext->supportsBodyTracking = in_ext->supportsBodyTracking;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_FULL_BODY_META:
        {
            XrSystemPropertiesBodyTrackingFullBodyMETA32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_FULL_BODY_META);
            const XrSystemPropertiesBodyTrackingFullBodyMETA *in_ext = (const XrSystemPropertiesBodyTrackingFullBodyMETA *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_FULL_BODY_META;
            out_ext->supportsFullBodyTracking = in_ext->supportsFullBodyTracking;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_CALIBRATION_META:
        {
            XrSystemPropertiesBodyTrackingCalibrationMETA32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_CALIBRATION_META);
            const XrSystemPropertiesBodyTrackingCalibrationMETA *in_ext = (const XrSystemPropertiesBodyTrackingCalibrationMETA *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_CALIBRATION_META;
            out_ext->supportsHeightOverride = in_ext->supportsHeightOverride;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_EYE_TRACKING_PROPERTIES_FB:
        {
            XrSystemEyeTrackingPropertiesFB32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_EYE_TRACKING_PROPERTIES_FB);
            const XrSystemEyeTrackingPropertiesFB *in_ext = (const XrSystemEyeTrackingPropertiesFB *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_EYE_TRACKING_PROPERTIES_FB;
            out_ext->supportsEyeTracking = in_ext->supportsEyeTracking;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_HAND_TRACKING_MESH_PROPERTIES_MSFT:
        {
            XrSystemHandTrackingMeshPropertiesMSFT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_HAND_TRACKING_MESH_PROPERTIES_MSFT);
            const XrSystemHandTrackingMeshPropertiesMSFT *in_ext = (const XrSystemHandTrackingMeshPropertiesMSFT *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_HAND_TRACKING_MESH_PROPERTIES_MSFT;
            out_ext->supportsHandTrackingMesh = in_ext->supportsHandTrackingMesh;
            out_ext->maxHandMeshIndexCount = in_ext->maxHandMeshIndexCount;
            out_ext->maxHandMeshVertexCount = in_ext->maxHandMeshVertexCount;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_COLOR_SPACE_PROPERTIES_FB:
        {
            XrSystemColorSpacePropertiesFB32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_COLOR_SPACE_PROPERTIES_FB);
            const XrSystemColorSpacePropertiesFB *in_ext = (const XrSystemColorSpacePropertiesFB *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_COLOR_SPACE_PROPERTIES_FB;
            out_ext->colorSpace = in_ext->colorSpace;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_ENTITY_PROPERTIES_FB:
        {
            XrSystemSpatialEntityPropertiesFB32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_SPATIAL_ENTITY_PROPERTIES_FB);
            const XrSystemSpatialEntityPropertiesFB *in_ext = (const XrSystemSpatialEntityPropertiesFB *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_ENTITY_PROPERTIES_FB;
            out_ext->supportsSpatialEntity = in_ext->supportsSpatialEntity;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_FOVEATION_EYE_TRACKED_PROPERTIES_META:
        {
            XrSystemFoveationEyeTrackedPropertiesMETA32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_FOVEATION_EYE_TRACKED_PROPERTIES_META);
            const XrSystemFoveationEyeTrackedPropertiesMETA *in_ext = (const XrSystemFoveationEyeTrackedPropertiesMETA *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_FOVEATION_EYE_TRACKED_PROPERTIES_META;
            out_ext->supportsFoveationEyeTracked = in_ext->supportsFoveationEyeTracked;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_RENDER_MODEL_PROPERTIES_FB:
        {
            XrSystemRenderModelPropertiesFB32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_RENDER_MODEL_PROPERTIES_FB);
            const XrSystemRenderModelPropertiesFB *in_ext = (const XrSystemRenderModelPropertiesFB *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_RENDER_MODEL_PROPERTIES_FB;
            out_ext->supportsRenderModelLoading = in_ext->supportsRenderModelLoading;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_KEYBOARD_TRACKING_PROPERTIES_FB:
        {
            XrSystemKeyboardTrackingPropertiesFB32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_KEYBOARD_TRACKING_PROPERTIES_FB);
            const XrSystemKeyboardTrackingPropertiesFB *in_ext = (const XrSystemKeyboardTrackingPropertiesFB *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_KEYBOARD_TRACKING_PROPERTIES_FB;
            out_ext->supportsKeyboardTracking = in_ext->supportsKeyboardTracking;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_COLOCATION_DISCOVERY_PROPERTIES_META:
        {
            XrSystemColocationDiscoveryPropertiesMETA32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_COLOCATION_DISCOVERY_PROPERTIES_META);
            const XrSystemColocationDiscoveryPropertiesMETA *in_ext = (const XrSystemColocationDiscoveryPropertiesMETA *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_COLOCATION_DISCOVERY_PROPERTIES_META;
            out_ext->supportsColocationDiscovery = in_ext->supportsColocationDiscovery;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_ENTITY_SHARING_PROPERTIES_META:
        {
            XrSystemSpatialEntitySharingPropertiesMETA32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_SPATIAL_ENTITY_SHARING_PROPERTIES_META);
            const XrSystemSpatialEntitySharingPropertiesMETA *in_ext = (const XrSystemSpatialEntitySharingPropertiesMETA *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_ENTITY_SHARING_PROPERTIES_META;
            out_ext->supportsSpatialEntitySharing = in_ext->supportsSpatialEntitySharing;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_ENTITY_GROUP_SHARING_PROPERTIES_META:
        {
            XrSystemSpatialEntityGroupSharingPropertiesMETA32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_SPATIAL_ENTITY_GROUP_SHARING_PROPERTIES_META);
            const XrSystemSpatialEntityGroupSharingPropertiesMETA *in_ext = (const XrSystemSpatialEntityGroupSharingPropertiesMETA *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_ENTITY_GROUP_SHARING_PROPERTIES_META;
            out_ext->supportsSpatialEntityGroupSharing = in_ext->supportsSpatialEntityGroupSharing;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_FOVEATED_RENDERING_PROPERTIES_VARJO:
        {
            XrSystemFoveatedRenderingPropertiesVARJO32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_FOVEATED_RENDERING_PROPERTIES_VARJO);
            const XrSystemFoveatedRenderingPropertiesVARJO *in_ext = (const XrSystemFoveatedRenderingPropertiesVARJO *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_FOVEATED_RENDERING_PROPERTIES_VARJO;
            out_ext->supportsFoveatedRendering = in_ext->supportsFoveatedRendering;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES_FB:
        {
            XrSystemPassthroughPropertiesFB32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES_FB);
            const XrSystemPassthroughPropertiesFB *in_ext = (const XrSystemPassthroughPropertiesFB *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES_FB;
            out_ext->supportsPassthrough = in_ext->supportsPassthrough;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES2_FB:
        {
            XrSystemPassthroughProperties2FB32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES2_FB);
            const XrSystemPassthroughProperties2FB *in_ext = (const XrSystemPassthroughProperties2FB *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES2_FB;
            out_ext->capabilities = in_ext->capabilities;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_BD:
        {
            XrSystemBodyTrackingPropertiesBD32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_BD);
            const XrSystemBodyTrackingPropertiesBD *in_ext = (const XrSystemBodyTrackingPropertiesBD *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_BD;
            out_ext->supportsBodyTracking = in_ext->supportsBodyTracking;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_FACIAL_TRACKING_PROPERTIES_HTC:
        {
            XrSystemFacialTrackingPropertiesHTC32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_FACIAL_TRACKING_PROPERTIES_HTC);
            const XrSystemFacialTrackingPropertiesHTC *in_ext = (const XrSystemFacialTrackingPropertiesHTC *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_FACIAL_TRACKING_PROPERTIES_HTC;
            out_ext->supportEyeFacialTracking = in_ext->supportEyeFacialTracking;
            out_ext->supportLipFacialTracking = in_ext->supportLipFacialTracking;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_ANCHOR_PROPERTIES_HTC:
        {
            XrSystemAnchorPropertiesHTC32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_ANCHOR_PROPERTIES_HTC);
            const XrSystemAnchorPropertiesHTC *in_ext = (const XrSystemAnchorPropertiesHTC *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_ANCHOR_PROPERTIES_HTC;
            out_ext->supportsAnchor = in_ext->supportsAnchor;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_HTC:
        {
            XrSystemBodyTrackingPropertiesHTC32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_HTC);
            const XrSystemBodyTrackingPropertiesHTC *in_ext = (const XrSystemBodyTrackingPropertiesHTC *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_HTC;
            out_ext->supportsBodyTracking = in_ext->supportsBodyTracking;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPACE_WARP_PROPERTIES_FB:
        {
            XrSystemSpaceWarpPropertiesFB32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_SPACE_WARP_PROPERTIES_FB);
            const XrSystemSpaceWarpPropertiesFB *in_ext = (const XrSystemSpaceWarpPropertiesFB *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_SPACE_WARP_PROPERTIES_FB;
            out_ext->recommendedMotionVectorImageRectWidth = in_ext->recommendedMotionVectorImageRectWidth;
            out_ext->recommendedMotionVectorImageRectHeight = in_ext->recommendedMotionVectorImageRectHeight;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_VARJO:
        {
            XrSystemMarkerTrackingPropertiesVARJO32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_VARJO);
            const XrSystemMarkerTrackingPropertiesVARJO *in_ext = (const XrSystemMarkerTrackingPropertiesVARJO *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_VARJO;
            out_ext->supportsMarkerTracking = in_ext->supportsMarkerTracking;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_HEADSET_ID_PROPERTIES_META:
        {
            XrSystemHeadsetIdPropertiesMETA32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_HEADSET_ID_PROPERTIES_META);
            const XrSystemHeadsetIdPropertiesMETA *in_ext = (const XrSystemHeadsetIdPropertiesMETA *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_HEADSET_ID_PROPERTIES_META;
            out_ext->id = in_ext->id;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPACE_PERSISTENCE_PROPERTIES_META:
        {
            XrSystemSpacePersistencePropertiesMETA32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_SPACE_PERSISTENCE_PROPERTIES_META);
            const XrSystemSpacePersistencePropertiesMETA *in_ext = (const XrSystemSpacePersistencePropertiesMETA *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_SPACE_PERSISTENCE_PROPERTIES_META;
            out_ext->supportsSpacePersistence = in_ext->supportsSpacePersistence;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPACE_DISCOVERY_PROPERTIES_META:
        {
            XrSystemSpaceDiscoveryPropertiesMETA32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_SPACE_DISCOVERY_PROPERTIES_META);
            const XrSystemSpaceDiscoveryPropertiesMETA *in_ext = (const XrSystemSpaceDiscoveryPropertiesMETA *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_SPACE_DISCOVERY_PROPERTIES_META;
            out_ext->supportsSpaceDiscovery = in_ext->supportsSpaceDiscovery;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_PASSTHROUGH_COLOR_LUT_PROPERTIES_META:
        {
            XrSystemPassthroughColorLutPropertiesMETA32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_PASSTHROUGH_COLOR_LUT_PROPERTIES_META);
            const XrSystemPassthroughColorLutPropertiesMETA *in_ext = (const XrSystemPassthroughColorLutPropertiesMETA *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_PASSTHROUGH_COLOR_LUT_PROPERTIES_META;
            out_ext->maxColorLutResolution = in_ext->maxColorLutResolution;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_FORCE_FEEDBACK_CURL_PROPERTIES_MNDX:
        {
            XrSystemForceFeedbackCurlPropertiesMNDX32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_FORCE_FEEDBACK_CURL_PROPERTIES_MNDX);
            const XrSystemForceFeedbackCurlPropertiesMNDX *in_ext = (const XrSystemForceFeedbackCurlPropertiesMNDX *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_FORCE_FEEDBACK_CURL_PROPERTIES_MNDX;
            out_ext->supportsForceFeedbackCurl = in_ext->supportsForceFeedbackCurl;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_PASSTHROUGH_CAMERA_STATE_PROPERTIES_ANDROID:
        {
            XrSystemPassthroughCameraStatePropertiesANDROID32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_PASSTHROUGH_CAMERA_STATE_PROPERTIES_ANDROID);
            const XrSystemPassthroughCameraStatePropertiesANDROID *in_ext = (const XrSystemPassthroughCameraStatePropertiesANDROID *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_PASSTHROUGH_CAMERA_STATE_PROPERTIES_ANDROID;
            out_ext->supportsPassthroughCameraState = in_ext->supportsPassthroughCameraState;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_TRACKABLES_PROPERTIES_ANDROID:
        {
            XrSystemTrackablesPropertiesANDROID32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_TRACKABLES_PROPERTIES_ANDROID);
            const XrSystemTrackablesPropertiesANDROID *in_ext = (const XrSystemTrackablesPropertiesANDROID *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_TRACKABLES_PROPERTIES_ANDROID;
            out_ext->supportsAnchor = in_ext->supportsAnchor;
            out_ext->maxAnchors = in_ext->maxAnchors;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_ANDROID:
        {
            XrSystemMarkerTrackingPropertiesANDROID32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_ANDROID);
            const XrSystemMarkerTrackingPropertiesANDROID *in_ext = (const XrSystemMarkerTrackingPropertiesANDROID *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_ANDROID;
            out_ext->supportsMarkerTracking = in_ext->supportsMarkerTracking;
            out_ext->supportsMarkerSizeEstimation = in_ext->supportsMarkerSizeEstimation;
            out_ext->maxMarkerCount = in_ext->maxMarkerCount;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_DEVICE_ANCHOR_PERSISTENCE_PROPERTIES_ANDROID:
        {
            XrSystemDeviceAnchorPersistencePropertiesANDROID32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_DEVICE_ANCHOR_PERSISTENCE_PROPERTIES_ANDROID);
            const XrSystemDeviceAnchorPersistencePropertiesANDROID *in_ext = (const XrSystemDeviceAnchorPersistencePropertiesANDROID *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_DEVICE_ANCHOR_PERSISTENCE_PROPERTIES_ANDROID;
            out_ext->supportsAnchorPersistence = in_ext->supportsAnchorPersistence;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_PLANE_DETECTION_PROPERTIES_EXT:
        {
            XrSystemPlaneDetectionPropertiesEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_PLANE_DETECTION_PROPERTIES_EXT);
            const XrSystemPlaneDetectionPropertiesEXT *in_ext = (const XrSystemPlaneDetectionPropertiesEXT *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_PLANE_DETECTION_PROPERTIES_EXT;
            out_ext->supportedFeatures = in_ext->supportedFeatures;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_VIRTUAL_KEYBOARD_PROPERTIES_META:
        {
            XrSystemVirtualKeyboardPropertiesMETA32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_VIRTUAL_KEYBOARD_PROPERTIES_META);
            const XrSystemVirtualKeyboardPropertiesMETA *in_ext = (const XrSystemVirtualKeyboardPropertiesMETA *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_VIRTUAL_KEYBOARD_PROPERTIES_META;
            out_ext->supportsVirtualKeyboard = in_ext->supportsVirtualKeyboard;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_MARKER_UNDERSTANDING_PROPERTIES_ML:
        {
            XrSystemMarkerUnderstandingPropertiesML32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_MARKER_UNDERSTANDING_PROPERTIES_ML);
            const XrSystemMarkerUnderstandingPropertiesML *in_ext = (const XrSystemMarkerUnderstandingPropertiesML *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_MARKER_UNDERSTANDING_PROPERTIES_ML;
            out_ext->supportsMarkerUnderstanding = in_ext->supportsMarkerUnderstanding;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_FACIAL_EXPRESSION_PROPERTIES_ML:
        {
            XrSystemFacialExpressionPropertiesML32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_FACIAL_EXPRESSION_PROPERTIES_ML);
            const XrSystemFacialExpressionPropertiesML *in_ext = (const XrSystemFacialExpressionPropertiesML *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_FACIAL_EXPRESSION_PROPERTIES_ML;
            out_ext->supportsFacialExpression = in_ext->supportsFacialExpression;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_USER_PRESENCE_PROPERTIES_EXT:
        {
            XrSystemUserPresencePropertiesEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_USER_PRESENCE_PROPERTIES_EXT);
            const XrSystemUserPresencePropertiesEXT *in_ext = (const XrSystemUserPresencePropertiesEXT *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_USER_PRESENCE_PROPERTIES_EXT;
            out_ext->supportsUserPresence = in_ext->supportsUserPresence;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_ENVIRONMENT_DEPTH_PROPERTIES_META:
        {
            XrSystemEnvironmentDepthPropertiesMETA32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_ENVIRONMENT_DEPTH_PROPERTIES_META);
            const XrSystemEnvironmentDepthPropertiesMETA *in_ext = (const XrSystemEnvironmentDepthPropertiesMETA *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_ENVIRONMENT_DEPTH_PROPERTIES_META;
            out_ext->supportsEnvironmentDepth = in_ext->supportsEnvironmentDepth;
            out_ext->supportsHandRemoval = in_ext->supportsHandRemoval;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_SENSING_PROPERTIES_BD:
        {
            XrSystemSpatialSensingPropertiesBD32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_SPATIAL_SENSING_PROPERTIES_BD);
            const XrSystemSpatialSensingPropertiesBD *in_ext = (const XrSystemSpatialSensingPropertiesBD *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_SENSING_PROPERTIES_BD;
            out_ext->supportsSpatialSensing = in_ext->supportsSpatialSensing;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_ANCHOR_PROPERTIES_BD:
        {
            XrSystemSpatialAnchorPropertiesBD32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_SPATIAL_ANCHOR_PROPERTIES_BD);
            const XrSystemSpatialAnchorPropertiesBD *in_ext = (const XrSystemSpatialAnchorPropertiesBD *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_ANCHOR_PROPERTIES_BD;
            out_ext->supportsSpatialAnchor = in_ext->supportsSpatialAnchor;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_ANCHOR_SHARING_PROPERTIES_BD:
        {
            XrSystemSpatialAnchorSharingPropertiesBD32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_SPATIAL_ANCHOR_SHARING_PROPERTIES_BD);
            const XrSystemSpatialAnchorSharingPropertiesBD *in_ext = (const XrSystemSpatialAnchorSharingPropertiesBD *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_ANCHOR_SHARING_PROPERTIES_BD;
            out_ext->supportsSpatialAnchorSharing = in_ext->supportsSpatialAnchorSharing;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_MESH_PROPERTIES_BD:
        {
            XrSystemSpatialMeshPropertiesBD32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_SPATIAL_MESH_PROPERTIES_BD);
            const XrSystemSpatialMeshPropertiesBD *in_ext = (const XrSystemSpatialMeshPropertiesBD *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_MESH_PROPERTIES_BD;
            out_ext->supportsSpatialMesh = in_ext->supportsSpatialMesh;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_SCENE_PROPERTIES_BD:
        {
            XrSystemSpatialScenePropertiesBD32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_SPATIAL_SCENE_PROPERTIES_BD);
            const XrSystemSpatialScenePropertiesBD *in_ext = (const XrSystemSpatialScenePropertiesBD *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_SCENE_PROPERTIES_BD;
            out_ext->supportsSpatialScene = in_ext->supportsSpatialScene;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SPATIAL_PLANE_PROPERTIES_BD:
        {
            XrSystemSpatialPlanePropertiesBD32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_SPATIAL_PLANE_PROPERTIES_BD);
            const XrSystemSpatialPlanePropertiesBD *in_ext = (const XrSystemSpatialPlanePropertiesBD *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_SPATIAL_PLANE_PROPERTIES_BD;
            out_ext->supportsSpatialPlane = in_ext->supportsSpatialPlane;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SYSTEM_SIMULTANEOUS_HANDS_AND_CONTROLLERS_PROPERTIES_META:
        {
            XrSystemSimultaneousHandsAndControllersPropertiesMETA32 *out_ext = find_next_struct32(out_header, XR_TYPE_SYSTEM_SIMULTANEOUS_HANDS_AND_CONTROLLERS_PROPERTIES_META);
            const XrSystemSimultaneousHandsAndControllersPropertiesMETA *in_ext = (const XrSystemSimultaneousHandsAndControllersPropertiesMETA *)in_header;
            out_ext->type = XR_TYPE_SYSTEM_SIMULTANEOUS_HANDS_AND_CONTROLLERS_PROPERTIES_META;
            out_ext->supportsSimultaneousHandsAndControllers = in_ext->supportsSimultaneousHandsAndControllers;
            out_header = (void *)out_ext;
            break;
        }
        default:
            break;
        }
    }
}

static inline void convert_XrTrackableGetInfoANDROID_win32_to_host(const XrTrackableGetInfoANDROID32 *in, XrTrackableGetInfoANDROID *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->trackable = in->trackable;
    out->baseSpace = in->baseSpace;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrTrackableMarkerANDROID_win32_to_host(const XrTrackableMarkerANDROID32 *in, XrTrackableMarkerANDROID *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->trackingState = in->trackingState;
    out->lastUpdatedTime = in->lastUpdatedTime;
    out->dictionary = in->dictionary;
    out->markerId = in->markerId;
    out->centerPose = in->centerPose;
    out->extents = in->extents;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrTrackableMarkerANDROID_host_to_win32(const XrTrackableMarkerANDROID *in, XrTrackableMarkerANDROID32 *out)
{
    if (!in) return;

    out->trackingState = in->trackingState;
    out->lastUpdatedTime = in->lastUpdatedTime;
    out->dictionary = in->dictionary;
    out->markerId = in->markerId;
    out->centerPose = in->centerPose;
    out->extents = in->extents;
}

static inline void convert_XrTrackableObjectANDROID_win32_to_host(const XrTrackableObjectANDROID32 *in, XrTrackableObjectANDROID *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->trackingState = in->trackingState;
    out->centerPose = in->centerPose;
    out->extents = in->extents;
    out->objectLabel = in->objectLabel;
    out->lastUpdatedTime = in->lastUpdatedTime;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrTrackableObjectANDROID_host_to_win32(const XrTrackableObjectANDROID *in, XrTrackableObjectANDROID32 *out)
{
    if (!in) return;

    out->trackingState = in->trackingState;
    out->centerPose = in->centerPose;
    out->extents = in->extents;
    out->objectLabel = in->objectLabel;
    out->lastUpdatedTime = in->lastUpdatedTime;
}

static inline void convert_XrTrackablePlaneANDROID_win32_to_host(const XrTrackablePlaneANDROID32 *in, XrTrackablePlaneANDROID *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->trackingState = in->trackingState;
    out->centerPose = in->centerPose;
    out->extents = in->extents;
    out->planeType = in->planeType;
    out->planeLabel = in->planeLabel;
    out->subsumedByPlane = in->subsumedByPlane;
    out->lastUpdatedTime = in->lastUpdatedTime;
    out->vertexCapacityInput = in->vertexCapacityInput;
    out->vertexCountOutput = (uint32_t *)(uintptr_t)UlongToPtr(in->vertexCountOutput);
    out->vertices = (XrVector2f *)(uintptr_t)UlongToPtr(in->vertices);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrTrackablePlaneANDROID_host_to_win32(const XrTrackablePlaneANDROID *in, XrTrackablePlaneANDROID32 *out)
{
    if (!in) return;

    out->trackingState = in->trackingState;
    out->centerPose = in->centerPose;
    out->extents = in->extents;
    out->planeType = in->planeType;
    out->planeLabel = in->planeLabel;
    out->subsumedByPlane = in->subsumedByPlane;
    out->lastUpdatedTime = in->lastUpdatedTime;
    out->vertexCapacityInput = in->vertexCapacityInput;
    out->vertexCountOutput = PtrToUlong(in->vertexCountOutput);
    out->vertices = PtrToUlong(in->vertices);
}

static inline void convert_XrViewConfigurationProperties_win32_to_host(const XrViewConfigurationProperties32 *in, XrViewConfigurationProperties *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->viewConfigurationType = in->viewConfigurationType;
    out->fovMutable = in->fovMutable;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrViewConfigurationProperties_host_to_win32(const XrViewConfigurationProperties *in, XrViewConfigurationProperties32 *out)
{
    if (!in) return;

    out->viewConfigurationType = in->viewConfigurationType;
    out->fovMutable = in->fovMutable;
}

static inline void convert_XrVirtualKeyboardAnimationStateMETA_win32_to_host(const XrVirtualKeyboardAnimationStateMETA32 *in, XrVirtualKeyboardAnimationStateMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->animationIndex = in->animationIndex;
    out->fraction = in->fraction;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrVirtualKeyboardAnimationStateMETA_host_to_win32(const XrVirtualKeyboardAnimationStateMETA *in, XrVirtualKeyboardAnimationStateMETA32 *out)
{
    if (!in) return;

    out->animationIndex = in->animationIndex;
    out->fraction = in->fraction;
}

static inline XrVirtualKeyboardAnimationStateMETA *convert_XrVirtualKeyboardAnimationStateMETA_array_win32_to_host(struct conversion_context *ctx, const XrVirtualKeyboardAnimationStateMETA32 *in, uint32_t count)
{
    XrVirtualKeyboardAnimationStateMETA *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrVirtualKeyboardAnimationStateMETA_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrVirtualKeyboardAnimationStateMETA_array_host_to_win32(const XrVirtualKeyboardAnimationStateMETA *in, XrVirtualKeyboardAnimationStateMETA32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrVirtualKeyboardAnimationStateMETA_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrVirtualKeyboardModelAnimationStatesMETA_win32_to_host(struct conversion_context *ctx, const XrVirtualKeyboardModelAnimationStatesMETA32 *in, XrVirtualKeyboardModelAnimationStatesMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->stateCapacityInput = in->stateCapacityInput;
    out->stateCountOutput = in->stateCountOutput;
    out->states = convert_XrVirtualKeyboardAnimationStateMETA_array_win32_to_host(ctx, (XrVirtualKeyboardAnimationStateMETA32 *)(uintptr_t)UlongToPtr(in->states), in->stateCapacityInput);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrVirtualKeyboardModelAnimationStatesMETA_host_to_win32(const XrVirtualKeyboardModelAnimationStatesMETA *in, XrVirtualKeyboardModelAnimationStatesMETA32 *out)
{
    if (!in) return;

    out->stateCapacityInput = in->stateCapacityInput;
    out->stateCountOutput = in->stateCountOutput;
    convert_XrVirtualKeyboardAnimationStateMETA_array_host_to_win32(in->states, (XrVirtualKeyboardAnimationStateMETA32 *)(uintptr_t)UlongToPtr(out->states), in->stateCapacityInput);
}

static inline void convert_XrVirtualKeyboardTextureDataMETA_win32_to_host(const XrVirtualKeyboardTextureDataMETA32 *in, XrVirtualKeyboardTextureDataMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->textureWidth = in->textureWidth;
    out->textureHeight = in->textureHeight;
    out->bufferCapacityInput = in->bufferCapacityInput;
    out->bufferCountOutput = in->bufferCountOutput;
    out->buffer = (uint8_t *)(uintptr_t)UlongToPtr(in->buffer);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrVirtualKeyboardTextureDataMETA_host_to_win32(const XrVirtualKeyboardTextureDataMETA *in, XrVirtualKeyboardTextureDataMETA32 *out)
{
    if (!in) return;

    out->textureWidth = in->textureWidth;
    out->textureHeight = in->textureHeight;
    out->bufferCapacityInput = in->bufferCapacityInput;
    out->bufferCountOutput = in->bufferCountOutput;
    out->buffer = PtrToUlong(in->buffer);
}

static inline void convert_XrVisibilityMaskKHR_win32_to_host(const XrVisibilityMaskKHR32 *in, XrVisibilityMaskKHR *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->vertexCapacityInput = in->vertexCapacityInput;
    out->vertexCountOutput = in->vertexCountOutput;
    out->vertices = (XrVector2f *)(uintptr_t)UlongToPtr(in->vertices);
    out->indexCapacityInput = in->indexCapacityInput;
    out->indexCountOutput = in->indexCountOutput;
    out->indices = (uint32_t *)(uintptr_t)UlongToPtr(in->indices);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrVisibilityMaskKHR_host_to_win32(const XrVisibilityMaskKHR *in, XrVisibilityMaskKHR32 *out)
{
    if (!in) return;

    out->vertexCapacityInput = in->vertexCapacityInput;
    out->vertexCountOutput = in->vertexCountOutput;
    out->vertices = PtrToUlong(in->vertices);
    out->indexCapacityInput = in->indexCapacityInput;
    out->indexCountOutput = in->indexCountOutput;
    out->indices = PtrToUlong(in->indices);
}

static inline void convert_XrVulkanGraphicsDeviceGetInfoKHR_win32_to_host(const XrVulkanGraphicsDeviceGetInfoKHR32 *in, XrVulkanGraphicsDeviceGetInfoKHR *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->systemId = in->systemId;
    out->vulkanInstance = in->vulkanInstance;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrGraphicsRequirementsVulkanKHR_win32_to_host(const XrGraphicsRequirementsVulkanKHR32 *in, XrGraphicsRequirementsVulkanKHR *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->minApiVersionSupported = in->minApiVersionSupported;
    out->maxApiVersionSupported = in->maxApiVersionSupported;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrGraphicsRequirementsVulkanKHR_host_to_win32(const XrGraphicsRequirementsVulkanKHR *in, XrGraphicsRequirementsVulkanKHR32 *out)
{
    if (!in) return;

    out->minApiVersionSupported = in->minApiVersionSupported;
    out->maxApiVersionSupported = in->maxApiVersionSupported;
}

static inline void convert_XrWorldMeshBufferRecommendedSizeInfoML_win32_to_host(const XrWorldMeshBufferRecommendedSizeInfoML32 *in, XrWorldMeshBufferRecommendedSizeInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->maxBlockCount = in->maxBlockCount;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrWorldMeshBufferSizeML_host_to_win32(const XrWorldMeshBufferSizeML *in, XrWorldMeshBufferSizeML32 *out)
{
    if (!in) return;

    out->size = in->size;
}

static inline void convert_XrLocalizationMapImportInfoML_win32_to_host(const XrLocalizationMapImportInfoML32 *in, XrLocalizationMapImportInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->size = in->size;
    out->data = (char *)(uintptr_t)UlongToPtr(in->data);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelLoadInfoFB_win32_to_host(const XrRenderModelLoadInfoFB32 *in, XrRenderModelLoadInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->modelKey = in->modelKey;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelBufferFB_win32_to_host(const XrRenderModelBufferFB32 *in, XrRenderModelBufferFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->bufferCapacityInput = in->bufferCapacityInput;
    out->bufferCountOutput = in->bufferCountOutput;
    out->buffer = (uint8_t *)(uintptr_t)UlongToPtr(in->buffer);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRenderModelBufferFB_host_to_win32(const XrRenderModelBufferFB *in, XrRenderModelBufferFB32 *out)
{
    if (!in) return;

    out->bufferCapacityInput = in->bufferCapacityInput;
    out->bufferCountOutput = in->bufferCountOutput;
    out->buffer = PtrToUlong(in->buffer);
}

static inline void convert_XrBodyJointsLocateInfoBD_win32_to_host(const XrBodyJointsLocateInfoBD32 *in, XrBodyJointsLocateInfoBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->baseSpace = in->baseSpace;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrBodyJointLocationBD_win32_to_host(const XrBodyJointLocationBD32 *in, XrBodyJointLocationBD *out)
{
    if (!in) return;

    out->locationFlags = in->locationFlags;
    out->pose = in->pose;
}

static inline void convert_XrBodyJointLocationBD_host_to_win32(const XrBodyJointLocationBD *in, XrBodyJointLocationBD32 *out)
{
    if (!in) return;

    out->locationFlags = in->locationFlags;
    out->pose = in->pose;
}

static inline XrBodyJointLocationBD *convert_XrBodyJointLocationBD_array_win32_to_host(struct conversion_context *ctx, const XrBodyJointLocationBD32 *in, uint32_t count)
{
    XrBodyJointLocationBD *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrBodyJointLocationBD_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrBodyJointLocationBD_array_host_to_win32(const XrBodyJointLocationBD *in, XrBodyJointLocationBD32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrBodyJointLocationBD_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrBodyJointLocationsBD_win32_to_host(struct conversion_context *ctx, const XrBodyJointLocationsBD32 *in, XrBodyJointLocationsBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->allJointPosesTracked = in->allJointPosesTracked;
    out->jointLocationCount = in->jointLocationCount;
    out->jointLocations = convert_XrBodyJointLocationBD_array_win32_to_host(ctx, (XrBodyJointLocationBD32 *)(uintptr_t)UlongToPtr(in->jointLocations), in->jointLocationCount);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrBodyJointLocationsBD_host_to_win32(const XrBodyJointLocationsBD *in, XrBodyJointLocationsBD32 *out)
{
    if (!in) return;

    out->allJointPosesTracked = in->allJointPosesTracked;
    out->jointLocationCount = in->jointLocationCount;
    convert_XrBodyJointLocationBD_array_host_to_win32(in->jointLocations, (XrBodyJointLocationBD32 *)(uintptr_t)UlongToPtr(out->jointLocations), in->jointLocationCount);
}

static inline void convert_XrBodyJointsLocateInfoFB_win32_to_host(const XrBodyJointsLocateInfoFB32 *in, XrBodyJointsLocateInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->baseSpace = in->baseSpace;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrBodyJointLocationFB_win32_to_host(const XrBodyJointLocationFB32 *in, XrBodyJointLocationFB *out)
{
    if (!in) return;

    out->locationFlags = in->locationFlags;
    out->pose = in->pose;
}

static inline void convert_XrBodyJointLocationFB_host_to_win32(const XrBodyJointLocationFB *in, XrBodyJointLocationFB32 *out)
{
    if (!in) return;

    out->locationFlags = in->locationFlags;
    out->pose = in->pose;
}

static inline XrBodyJointLocationFB *convert_XrBodyJointLocationFB_array_win32_to_host(struct conversion_context *ctx, const XrBodyJointLocationFB32 *in, uint32_t count)
{
    XrBodyJointLocationFB *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrBodyJointLocationFB_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrBodyJointLocationFB_array_host_to_win32(const XrBodyJointLocationFB *in, XrBodyJointLocationFB32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrBodyJointLocationFB_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrBodyJointLocationsFB_win32_to_host(struct conversion_context *ctx, const XrBodyJointLocationsFB32 *in, XrBodyJointLocationsFB *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->jointLocations = convert_XrBodyJointLocationFB_array_win32_to_host(ctx, (XrBodyJointLocationFB32 *)(uintptr_t)UlongToPtr(in->jointLocations), in->jointCount);

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_BODY_TRACKING_CALIBRATION_STATUS_META:
        {
            XrBodyTrackingCalibrationStatusMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_BODY_TRACKING_CALIBRATION_STATUS_META;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrBodyJointLocationsFB_host_to_win32(const XrBodyJointLocationsFB *in, XrBodyJointLocationsFB32 *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure32 *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->isActive = in->isActive;
    out->confidence = in->confidence;
    out->jointCount = in->jointCount;
    convert_XrBodyJointLocationFB_array_host_to_win32(in->jointLocations, (XrBodyJointLocationFB32 *)(uintptr_t)UlongToPtr(out->jointLocations), in->jointCount);
    out->skeletonChangedCount = in->skeletonChangedCount;
    out->time = in->time;

    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        case XR_TYPE_BODY_TRACKING_CALIBRATION_STATUS_META:
        {
            XrBodyTrackingCalibrationStatusMETA32 *out_ext = find_next_struct32(out_header, XR_TYPE_BODY_TRACKING_CALIBRATION_STATUS_META);
            const XrBodyTrackingCalibrationStatusMETA *in_ext = (const XrBodyTrackingCalibrationStatusMETA *)in_header;
            out_ext->type = XR_TYPE_BODY_TRACKING_CALIBRATION_STATUS_META;
            out_ext->status = in_ext->status;
            out_header = (void *)out_ext;
            break;
        }
        default:
            break;
        }
    }
}

static inline void convert_XrBodyJointsLocateInfoHTC_win32_to_host(const XrBodyJointsLocateInfoHTC32 *in, XrBodyJointsLocateInfoHTC *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->baseSpace = in->baseSpace;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrBodyJointLocationHTC_host_to_win32(const XrBodyJointLocationHTC *in, XrBodyJointLocationHTC32 *out)
{
    if (!in) return;

    out->locationFlags = in->locationFlags;
    out->pose = in->pose;
}

static inline XrBodyJointLocationHTC *convert_XrBodyJointLocationHTC_array_win32_to_host(struct conversion_context *ctx, const XrBodyJointLocationHTC32 *in, uint32_t count)
{
    XrBodyJointLocationHTC *out;
    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));

    return out;
}

static inline void convert_XrBodyJointLocationHTC_array_host_to_win32(const XrBodyJointLocationHTC *in, XrBodyJointLocationHTC32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrBodyJointLocationHTC_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrBodyJointLocationsHTC_win32_to_host(struct conversion_context *ctx, const XrBodyJointLocationsHTC32 *in, XrBodyJointLocationsHTC *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->combinedLocationFlags = in->combinedLocationFlags;
    out->confidenceLevel = in->confidenceLevel;
    out->jointLocationCount = in->jointLocationCount;
    out->jointLocations = convert_XrBodyJointLocationHTC_array_win32_to_host(ctx, (XrBodyJointLocationHTC32 *)(uintptr_t)UlongToPtr(in->jointLocations), in->jointLocationCount);
    out->skeletonGenerationId = in->skeletonGenerationId;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrBodyJointLocationsHTC_host_to_win32(const XrBodyJointLocationsHTC *in, XrBodyJointLocationsHTC32 *out)
{
    if (!in) return;

    out->combinedLocationFlags = in->combinedLocationFlags;
    out->confidenceLevel = in->confidenceLevel;
    out->jointLocationCount = in->jointLocationCount;
    convert_XrBodyJointLocationHTC_array_host_to_win32(in->jointLocations, (XrBodyJointLocationHTC32 *)(uintptr_t)UlongToPtr(out->jointLocations), in->jointLocationCount);
    out->skeletonGenerationId = in->skeletonGenerationId;
}

static inline void convert_XrHandJointsLocateInfoEXT_win32_to_host(struct conversion_context *ctx, const XrHandJointsLocateInfoEXT32 *in, XrHandJointsLocateInfoEXT *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->baseSpace = in->baseSpace;
    out->time = in->time;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_HAND_JOINTS_MOTION_RANGE_INFO_EXT:
        {
            XrHandJointsMotionRangeInfoEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrHandJointsMotionRangeInfoEXT32 *in_ext = (const XrHandJointsMotionRangeInfoEXT32 *)in_header;
            out_ext->type = XR_TYPE_HAND_JOINTS_MOTION_RANGE_INFO_EXT;
            out_ext->next = NULL;
            out_ext->handJointsMotionRange = in_ext->handJointsMotionRange;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrHandJointVelocityEXT_host_to_win32(const XrHandJointVelocityEXT *in, XrHandJointVelocityEXT32 *out)
{
    if (!in) return;

    out->velocityFlags = in->velocityFlags;
    out->linearVelocity = in->linearVelocity;
    out->angularVelocity = in->angularVelocity;
}

static inline XrHandJointVelocityEXT *convert_XrHandJointVelocityEXT_array_win32_to_host(struct conversion_context *ctx, const XrHandJointVelocityEXT32 *in, uint32_t count)
{
    XrHandJointVelocityEXT *out;
    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));

    return out;
}

static inline void convert_XrHandJointVelocityEXT_array_host_to_win32(const XrHandJointVelocityEXT *in, XrHandJointVelocityEXT32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrHandJointVelocityEXT_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrHandJointLocationEXT_win32_to_host(const XrHandJointLocationEXT32 *in, XrHandJointLocationEXT *out)
{
    if (!in) return;

    out->locationFlags = in->locationFlags;
    out->pose = in->pose;
    out->radius = in->radius;
}

static inline void convert_XrHandJointLocationEXT_host_to_win32(const XrHandJointLocationEXT *in, XrHandJointLocationEXT32 *out)
{
    if (!in) return;

    out->locationFlags = in->locationFlags;
    out->pose = in->pose;
    out->radius = in->radius;
}

static inline XrHandJointLocationEXT *convert_XrHandJointLocationEXT_array_win32_to_host(struct conversion_context *ctx, const XrHandJointLocationEXT32 *in, uint32_t count)
{
    XrHandJointLocationEXT *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrHandJointLocationEXT_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrHandJointLocationEXT_array_host_to_win32(const XrHandJointLocationEXT *in, XrHandJointLocationEXT32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrHandJointLocationEXT_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrHandJointLocationsEXT_win32_to_host(struct conversion_context *ctx, const XrHandJointLocationsEXT32 *in, XrHandJointLocationsEXT *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->isActive = in->isActive;
    out->jointCount = in->jointCount;
    out->jointLocations = convert_XrHandJointLocationEXT_array_win32_to_host(ctx, (XrHandJointLocationEXT32 *)(uintptr_t)UlongToPtr(in->jointLocations), in->jointCount);

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_HAND_JOINT_VELOCITIES_EXT:
        {
            XrHandJointVelocitiesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrHandJointVelocitiesEXT32 *in_ext = (const XrHandJointVelocitiesEXT32 *)in_header;
            out_ext->type = XR_TYPE_HAND_JOINT_VELOCITIES_EXT;
            out_ext->next = NULL;
            out_ext->jointCount = in_ext->jointCount;
            out_ext->jointVelocities = convert_XrHandJointVelocityEXT_array_win32_to_host(ctx, (XrHandJointVelocityEXT32 *)(uintptr_t)UlongToPtr(in_ext->jointVelocities), in_ext->jointCount);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_HAND_TRACKING_DATA_SOURCE_STATE_EXT:
        {
            XrHandTrackingDataSourceStateEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_HAND_TRACKING_DATA_SOURCE_STATE_EXT;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_HAND_TRACKING_SCALE_FB:
        {
            XrHandTrackingScaleFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_HAND_TRACKING_SCALE_FB;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_HAND_TRACKING_AIM_STATE_FB:
        {
            XrHandTrackingAimStateFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_HAND_TRACKING_AIM_STATE_FB;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_HAND_TRACKING_CAPSULES_STATE_FB:
        {
            XrHandTrackingCapsulesStateFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_HAND_TRACKING_CAPSULES_STATE_FB;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrHandJointLocationsEXT_host_to_win32(const XrHandJointLocationsEXT *in, XrHandJointLocationsEXT32 *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure32 *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->isActive = in->isActive;
    out->jointCount = in->jointCount;
    convert_XrHandJointLocationEXT_array_host_to_win32(in->jointLocations, (XrHandJointLocationEXT32 *)(uintptr_t)UlongToPtr(out->jointLocations), in->jointCount);

    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        case XR_TYPE_HAND_JOINT_VELOCITIES_EXT:
        {
            XrHandJointVelocitiesEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_HAND_JOINT_VELOCITIES_EXT);
            const XrHandJointVelocitiesEXT *in_ext = (const XrHandJointVelocitiesEXT *)in_header;
            out_ext->type = XR_TYPE_HAND_JOINT_VELOCITIES_EXT;
            out_ext->jointCount = in_ext->jointCount;
            convert_XrHandJointVelocityEXT_array_host_to_win32(in_ext->jointVelocities, (XrHandJointVelocityEXT32 *)(uintptr_t)UlongToPtr(out_ext->jointVelocities), in_ext->jointCount);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_HAND_TRACKING_DATA_SOURCE_STATE_EXT:
        {
            XrHandTrackingDataSourceStateEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_HAND_TRACKING_DATA_SOURCE_STATE_EXT);
            const XrHandTrackingDataSourceStateEXT *in_ext = (const XrHandTrackingDataSourceStateEXT *)in_header;
            out_ext->type = XR_TYPE_HAND_TRACKING_DATA_SOURCE_STATE_EXT;
            out_ext->isActive = in_ext->isActive;
            out_ext->dataSource = in_ext->dataSource;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_HAND_TRACKING_SCALE_FB:
        {
            XrHandTrackingScaleFB32 *out_ext = find_next_struct32(out_header, XR_TYPE_HAND_TRACKING_SCALE_FB);
            const XrHandTrackingScaleFB *in_ext = (const XrHandTrackingScaleFB *)in_header;
            out_ext->type = XR_TYPE_HAND_TRACKING_SCALE_FB;
            out_ext->sensorOutput = in_ext->sensorOutput;
            out_ext->currentOutput = in_ext->currentOutput;
            out_ext->overrideHandScale = in_ext->overrideHandScale;
            out_ext->overrideValueInput = in_ext->overrideValueInput;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_HAND_TRACKING_AIM_STATE_FB:
        {
            XrHandTrackingAimStateFB32 *out_ext = find_next_struct32(out_header, XR_TYPE_HAND_TRACKING_AIM_STATE_FB);
            const XrHandTrackingAimStateFB *in_ext = (const XrHandTrackingAimStateFB *)in_header;
            out_ext->type = XR_TYPE_HAND_TRACKING_AIM_STATE_FB;
            out_ext->status = in_ext->status;
            out_ext->aimPose = in_ext->aimPose;
            out_ext->pinchStrengthIndex = in_ext->pinchStrengthIndex;
            out_ext->pinchStrengthMiddle = in_ext->pinchStrengthMiddle;
            out_ext->pinchStrengthRing = in_ext->pinchStrengthRing;
            out_ext->pinchStrengthLittle = in_ext->pinchStrengthLittle;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_HAND_TRACKING_CAPSULES_STATE_FB:
        {
            XrHandTrackingCapsulesStateFB32 *out_ext = find_next_struct32(out_header, XR_TYPE_HAND_TRACKING_CAPSULES_STATE_FB);
            const XrHandTrackingCapsulesStateFB *in_ext = (const XrHandTrackingCapsulesStateFB *)in_header;
            out_ext->type = XR_TYPE_HAND_TRACKING_CAPSULES_STATE_FB;
            memcpy(out_ext->capsules, in_ext->capsules, XR_HAND_TRACKING_CAPSULE_COUNT_FB * sizeof(XrHandCapsuleFB));
            out_header = (void *)out_ext;
            break;
        }
        default:
            break;
        }
    }
}

static inline void convert_XrSceneComponentsLocateInfoMSFT_win32_to_host(const XrSceneComponentsLocateInfoMSFT32 *in, XrSceneComponentsLocateInfoMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->baseSpace = in->baseSpace;
    out->time = in->time;
    out->componentIdCount = in->componentIdCount;
    out->componentIds = (const XrUuidMSFT *)(uintptr_t)UlongToPtr(in->componentIds);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSceneComponentLocationMSFT_win32_to_host(const XrSceneComponentLocationMSFT32 *in, XrSceneComponentLocationMSFT *out)
{
    if (!in) return;

    out->flags = in->flags;
    out->pose = in->pose;
}

static inline void convert_XrSceneComponentLocationMSFT_host_to_win32(const XrSceneComponentLocationMSFT *in, XrSceneComponentLocationMSFT32 *out)
{
    if (!in) return;

    out->flags = in->flags;
    out->pose = in->pose;
}

static inline XrSceneComponentLocationMSFT *convert_XrSceneComponentLocationMSFT_array_win32_to_host(struct conversion_context *ctx, const XrSceneComponentLocationMSFT32 *in, uint32_t count)
{
    XrSceneComponentLocationMSFT *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrSceneComponentLocationMSFT_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrSceneComponentLocationMSFT_array_host_to_win32(const XrSceneComponentLocationMSFT *in, XrSceneComponentLocationMSFT32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrSceneComponentLocationMSFT_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrSceneComponentLocationsMSFT_win32_to_host(struct conversion_context *ctx, const XrSceneComponentLocationsMSFT32 *in, XrSceneComponentLocationsMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->locationCount = in->locationCount;
    out->locations = convert_XrSceneComponentLocationMSFT_array_win32_to_host(ctx, (XrSceneComponentLocationMSFT32 *)(uintptr_t)UlongToPtr(in->locations), in->locationCount);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSceneComponentLocationsMSFT_host_to_win32(const XrSceneComponentLocationsMSFT *in, XrSceneComponentLocationsMSFT32 *out)
{
    if (!in) return;

    out->locationCount = in->locationCount;
    convert_XrSceneComponentLocationMSFT_array_host_to_win32(in->locations, (XrSceneComponentLocationMSFT32 *)(uintptr_t)UlongToPtr(out->locations), in->locationCount);
}

static inline void convert_XrSpacesLocateInfo_win32_to_host(struct conversion_context *ctx, const XrSpacesLocateInfo32 *in, XrSpacesLocateInfo *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->baseSpace = in->baseSpace;
    out->time = in->time;
    out->spaceCount = in->spaceCount;
    out->spaces = convert_XrSpace_array_win32_to_host(ctx, (const PTR32 *)(uintptr_t)UlongToPtr(in->spaces), in->spaceCount);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpaceVelocityData_host_to_win32(const XrSpaceVelocityData *in, XrSpaceVelocityData32 *out)
{
    if (!in) return;

    out->velocityFlags = in->velocityFlags;
    out->linearVelocity = in->linearVelocity;
    out->angularVelocity = in->angularVelocity;
}

static inline XrSpaceVelocityData *convert_XrSpaceVelocityData_array_win32_to_host(struct conversion_context *ctx, const XrSpaceVelocityData32 *in, uint32_t count)
{
    XrSpaceVelocityData *out;
    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));

    return out;
}

static inline void convert_XrSpaceVelocityData_array_host_to_win32(const XrSpaceVelocityData *in, XrSpaceVelocityData32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrSpaceVelocityData_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrSpaceLocationData_host_to_win32(const XrSpaceLocationData *in, XrSpaceLocationData32 *out)
{
    if (!in) return;

    out->locationFlags = in->locationFlags;
    out->pose = in->pose;
}

static inline XrSpaceLocationData *convert_XrSpaceLocationData_array_win32_to_host(struct conversion_context *ctx, const XrSpaceLocationData32 *in, uint32_t count)
{
    XrSpaceLocationData *out;
    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));

    return out;
}

static inline void convert_XrSpaceLocationData_array_host_to_win32(const XrSpaceLocationData *in, XrSpaceLocationData32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrSpaceLocationData_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrSpaceLocations_win32_to_host(struct conversion_context *ctx, const XrSpaceLocations32 *in, XrSpaceLocations *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->locationCount = in->locationCount;
    out->locations = convert_XrSpaceLocationData_array_win32_to_host(ctx, (XrSpaceLocationData32 *)(uintptr_t)UlongToPtr(in->locations), in->locationCount);

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPACE_VELOCITIES:
        {
            XrSpaceVelocities *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpaceVelocities32 *in_ext = (const XrSpaceVelocities32 *)in_header;
            out_ext->type = XR_TYPE_SPACE_VELOCITIES;
            out_ext->next = NULL;
            out_ext->velocityCount = in_ext->velocityCount;
            out_ext->velocities = convert_XrSpaceVelocityData_array_win32_to_host(ctx, (XrSpaceVelocityData32 *)(uintptr_t)UlongToPtr(in_ext->velocities), in_ext->velocityCount);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrSpaceLocations_host_to_win32(const XrSpaceLocations *in, XrSpaceLocations32 *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure32 *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->locationCount = in->locationCount;
    convert_XrSpaceLocationData_array_host_to_win32(in->locations, (XrSpaceLocationData32 *)(uintptr_t)UlongToPtr(out->locations), in->locationCount);

    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPACE_VELOCITIES:
        {
            XrSpaceVelocities32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPACE_VELOCITIES);
            const XrSpaceVelocities *in_ext = (const XrSpaceVelocities *)in_header;
            out_ext->type = XR_TYPE_SPACE_VELOCITIES;
            out_ext->velocityCount = in_ext->velocityCount;
            convert_XrSpaceVelocityData_array_host_to_win32(in_ext->velocities, (XrSpaceVelocityData32 *)(uintptr_t)UlongToPtr(out_ext->velocities), in_ext->velocityCount);
            out_header = (void *)out_ext;
            break;
        }
        default:
            break;
        }
    }
}

static inline void convert_XrViewLocateInfo_win32_to_host(struct conversion_context *ctx, const XrViewLocateInfo32 *in, XrViewLocateInfo *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->viewConfigurationType = in->viewConfigurationType;
    out->displayTime = in->displayTime;
    out->space = in->space;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_VIEW_LOCATE_FOVEATED_RENDERING_VARJO:
        {
            XrViewLocateFoveatedRenderingVARJO *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrViewLocateFoveatedRenderingVARJO32 *in_ext = (const XrViewLocateFoveatedRenderingVARJO32 *)in_header;
            out_ext->type = XR_TYPE_VIEW_LOCATE_FOVEATED_RENDERING_VARJO;
            out_ext->next = NULL;
            out_ext->foveatedRenderingActive = in_ext->foveatedRenderingActive;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrViewState_win32_to_host(const XrViewState32 *in, XrViewState *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->viewStateFlags = in->viewStateFlags;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrViewState_host_to_win32(const XrViewState *in, XrViewState32 *out)
{
    if (!in) return;

    out->viewStateFlags = in->viewStateFlags;
}

static inline void convert_XrView_win32_to_host(const XrView32 *in, XrView *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->pose = in->pose;
    out->fov = in->fov;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrView_host_to_win32(const XrView *in, XrView32 *out)
{
    if (!in) return;

    out->pose = in->pose;
    out->fov = in->fov;
}

static inline XrView *convert_XrView_array_win32_to_host(struct conversion_context *ctx, const XrView32 *in, uint32_t count)
{
    XrView *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrView_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrView_array_host_to_win32(const XrView *in, XrView32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrView_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrNegotiateLoaderInfo_win32_to_host(const XrNegotiateLoaderInfo32 *in, XrNegotiateLoaderInfo *out)
{
    if (!in) return;

    out->structType = in->structType;
    out->structVersion = in->structVersion;
    out->structSize = in->structSize;
    out->minInterfaceVersion = in->minInterfaceVersion;
    out->maxInterfaceVersion = in->maxInterfaceVersion;
    out->minApiVersion = in->minApiVersion;
    out->maxApiVersion = in->maxApiVersion;
}

static inline void convert_XrNegotiateApiLayerRequest_win32_to_host(const XrNegotiateApiLayerRequest32 *in, XrNegotiateApiLayerRequest *out)
{
    if (!in) return;

    out->structType = in->structType;
    out->structVersion = in->structVersion;
    out->structSize = in->structSize;
    out->layerInterfaceVersion = in->layerInterfaceVersion;
    out->layerApiVersion = in->layerApiVersion;
    out->getInstanceProcAddr = in->getInstanceProcAddr;
    out->createApiLayerInstance = in->createApiLayerInstance;
}

static inline void convert_XrNegotiateApiLayerRequest_host_to_win32(const XrNegotiateApiLayerRequest *in, XrNegotiateApiLayerRequest32 *out)
{
    if (!in) return;

    out->structType = in->structType;
    out->structVersion = in->structVersion;
    out->structSize = in->structSize;
    out->layerInterfaceVersion = in->layerInterfaceVersion;
    out->layerApiVersion = in->layerApiVersion;
    out->getInstanceProcAddr = in->getInstanceProcAddr;
    out->createApiLayerInstance = in->createApiLayerInstance;
}

static inline void convert_XrNegotiateRuntimeRequest_win32_to_host(const XrNegotiateRuntimeRequest32 *in, XrNegotiateRuntimeRequest *out)
{
    if (!in) return;

    out->structType = in->structType;
    out->structVersion = in->structVersion;
    out->structSize = in->structSize;
    out->runtimeInterfaceVersion = in->runtimeInterfaceVersion;
    out->runtimeApiVersion = in->runtimeApiVersion;
    out->getInstanceProcAddr = in->getInstanceProcAddr;
}

static inline void convert_XrNegotiateRuntimeRequest_host_to_win32(const XrNegotiateRuntimeRequest *in, XrNegotiateRuntimeRequest32 *out)
{
    if (!in) return;

    out->structType = in->structType;
    out->structVersion = in->structVersion;
    out->structSize = in->structSize;
    out->runtimeInterfaceVersion = in->runtimeInterfaceVersion;
    out->runtimeApiVersion = in->runtimeApiVersion;
    out->getInstanceProcAddr = in->getInstanceProcAddr;
}

static inline void convert_XrPassthroughKeyboardHandsIntensityFB_win32_to_host(const XrPassthroughKeyboardHandsIntensityFB32 *in, XrPassthroughKeyboardHandsIntensityFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->leftHandIntensity = in->leftHandIntensity;
    out->rightHandIntensity = in->rightHandIntensity;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPassthroughStyleFB_win32_to_host(struct conversion_context *ctx, const XrPassthroughStyleFB32 *in, XrPassthroughStyleFB *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->textureOpacityFactor = in->textureOpacityFactor;
    out->edgeColor = in->edgeColor;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_RGBA_FB:
        {
            XrPassthroughColorMapMonoToRgbaFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrPassthroughColorMapMonoToRgbaFB32 *in_ext = (const XrPassthroughColorMapMonoToRgbaFB32 *)in_header;
            out_ext->type = XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_RGBA_FB;
            out_ext->next = NULL;
            memcpy(out_ext->textureColorMap, in_ext->textureColorMap, XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB * sizeof(XrColor4f));
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_MONO_FB:
        {
            XrPassthroughColorMapMonoToMonoFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrPassthroughColorMapMonoToMonoFB32 *in_ext = (const XrPassthroughColorMapMonoToMonoFB32 *)in_header;
            out_ext->type = XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_MONO_FB;
            out_ext->next = NULL;
            memcpy(out_ext->textureColorMap, in_ext->textureColorMap, XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB * sizeof(uint8_t));
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_PASSTHROUGH_BRIGHTNESS_CONTRAST_SATURATION_FB:
        {
            XrPassthroughBrightnessContrastSaturationFB *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrPassthroughBrightnessContrastSaturationFB32 *in_ext = (const XrPassthroughBrightnessContrastSaturationFB32 *)in_header;
            out_ext->type = XR_TYPE_PASSTHROUGH_BRIGHTNESS_CONTRAST_SATURATION_FB;
            out_ext->next = NULL;
            out_ext->brightness = in_ext->brightness;
            out_ext->contrast = in_ext->contrast;
            out_ext->saturation = in_ext->saturation;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_PASSTHROUGH_COLOR_MAP_LUT_META:
        {
            XrPassthroughColorMapLutMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrPassthroughColorMapLutMETA32 *in_ext = (const XrPassthroughColorMapLutMETA32 *)in_header;
            out_ext->type = XR_TYPE_PASSTHROUGH_COLOR_MAP_LUT_META;
            out_ext->next = NULL;
            out_ext->colorLut = in_ext->colorLut;
            out_ext->weight = in_ext->weight;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_PASSTHROUGH_COLOR_MAP_INTERPOLATED_LUT_META:
        {
            XrPassthroughColorMapInterpolatedLutMETA *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrPassthroughColorMapInterpolatedLutMETA32 *in_ext = (const XrPassthroughColorMapInterpolatedLutMETA32 *)in_header;
            out_ext->type = XR_TYPE_PASSTHROUGH_COLOR_MAP_INTERPOLATED_LUT_META;
            out_ext->next = NULL;
            out_ext->sourceColorLut = in_ext->sourceColorLut;
            out_ext->targetColorLut = in_ext->targetColorLut;
            out_ext->weight = in_ext->weight;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrSimultaneousHandsAndControllersTrackingPauseInfoMETA_win32_to_host(const XrSimultaneousHandsAndControllersTrackingPauseInfoMETA32 *in, XrSimultaneousHandsAndControllersTrackingPauseInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPersistedAnchorSpaceInfoANDROID_win32_to_host(const XrPersistedAnchorSpaceInfoANDROID32 *in, XrPersistedAnchorSpaceInfoANDROID *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->anchor = in->anchor;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorPersistInfoBD_win32_to_host(const XrSpatialAnchorPersistInfoBD32 *in, XrSpatialAnchorPersistInfoBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->location = in->location;
    out->anchor = in->anchor;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorPersistenceInfoMSFT_win32_to_host(const XrSpatialAnchorPersistenceInfoMSFT32 *in, XrSpatialAnchorPersistenceInfoMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->spatialAnchorPersistenceName = in->spatialAnchorPersistenceName;
    out->spatialAnchor = in->spatialAnchor;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialEntityPersistInfoEXT_win32_to_host(const XrSpatialEntityPersistInfoEXT32 *in, XrSpatialEntityPersistInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->spatialContext = in->spatialContext;
    out->spatialEntityId = in->spatialEntityId;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPersistSpatialEntityCompletionEXT_win32_to_host(const XrPersistSpatialEntityCompletionEXT32 *in, XrPersistSpatialEntityCompletionEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->futureResult = in->futureResult;
    out->persistResult = in->persistResult;
    out->persistUuid = in->persistUuid;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPersistSpatialEntityCompletionEXT_host_to_win32(const XrPersistSpatialEntityCompletionEXT *in, XrPersistSpatialEntityCompletionEXT32 *out)
{
    if (!in) return;

    out->futureResult = in->futureResult;
    out->persistResult = in->persistResult;
    out->persistUuid = in->persistUuid;
}

static inline void convert_XrEventDataBuffer_win32_to_host(const XrEventDataBuffer32 *in, XrEventDataBuffer *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    memcpy(out->varying, in->varying, 4000 * sizeof(uint8_t));
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrEventDataBuffer_host_to_win32(const XrEventDataBuffer *in, XrEventDataBuffer32 *out)
{
    if (!in) return;

    memcpy(out->varying, in->varying, 4000 * sizeof(uint8_t));
}

static inline void convert_XrFuturePollInfoEXT_win32_to_host(const XrFuturePollInfoEXT32 *in, XrFuturePollInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->future = in->future;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrFuturePollResultEXT_win32_to_host(struct conversion_context *ctx, const XrFuturePollResultEXT32 *in, XrFuturePollResultEXT *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_FUTURE_POLL_RESULT_PROGRESS_BD:
        {
            XrFuturePollResultProgressBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            out_ext->type = XR_TYPE_FUTURE_POLL_RESULT_PROGRESS_BD;
            out_ext->next = NULL;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrFuturePollResultEXT_host_to_win32(const XrFuturePollResultEXT *in, XrFuturePollResultEXT32 *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure32 *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->state = in->state;

    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        case XR_TYPE_FUTURE_POLL_RESULT_PROGRESS_BD:
        {
            XrFuturePollResultProgressBD32 *out_ext = find_next_struct32(out_header, XR_TYPE_FUTURE_POLL_RESULT_PROGRESS_BD);
            const XrFuturePollResultProgressBD *in_ext = (const XrFuturePollResultProgressBD *)in_header;
            out_ext->type = XR_TYPE_FUTURE_POLL_RESULT_PROGRESS_BD;
            out_ext->isSupported = in_ext->isSupported;
            out_ext->progressPercentage = in_ext->progressPercentage;
            out_header = (void *)out_ext;
            break;
        }
        default:
            break;
        }
    }
}

static inline void convert_XrSpatialAnchorsPublishInfoML_win32_to_host(struct conversion_context *ctx, const XrSpatialAnchorsPublishInfoML32 *in, XrSpatialAnchorsPublishInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->anchorCount = in->anchorCount;
    out->anchors = convert_XrSpace_array_win32_to_host(ctx, (const PTR32 *)(uintptr_t)UlongToPtr(in->anchors), in->anchorCount);
    out->expiration = in->expiration;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorsPublishCompletionML_win32_to_host(struct conversion_context *ctx, const XrSpatialAnchorsPublishCompletionML32 *in, XrSpatialAnchorsPublishCompletionML *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->futureResult = in->futureResult;
    out->uuidCount = in->uuidCount;
    out->uuids = (XrUuidEXT *)(uintptr_t)UlongToPtr(in->uuids);

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_DETAILS_ML:
        {
            XrSpatialAnchorsPublishCompletionDetailsML *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialAnchorsPublishCompletionDetailsML32 *in_ext = (const XrSpatialAnchorsPublishCompletionDetailsML32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_DETAILS_ML;
            out_ext->next = NULL;
            out_ext->resultCount = in_ext->resultCount;
            out_ext->results = (XrSpatialAnchorCompletionResultML *)(uintptr_t)UlongToPtr(in_ext->results);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrSpatialAnchorsPublishCompletionML_host_to_win32(const XrSpatialAnchorsPublishCompletionML *in, XrSpatialAnchorsPublishCompletionML32 *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure32 *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->futureResult = in->futureResult;
    out->uuidCount = in->uuidCount;
    out->uuids = PtrToUlong(in->uuids);

    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_DETAILS_ML:
        {
            XrSpatialAnchorsPublishCompletionDetailsML32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_DETAILS_ML);
            const XrSpatialAnchorsPublishCompletionDetailsML *in_ext = (const XrSpatialAnchorsPublishCompletionDetailsML *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_DETAILS_ML;
            out_ext->resultCount = in_ext->resultCount;
            out_ext->results = PtrToUlong(in_ext->results);
            out_header = (void *)out_ext;
            break;
        }
        default:
            break;
        }
    }
}

static inline void convert_XrLocalizationMapQueryInfoBaseHeaderML_win32_to_host(const XrLocalizationMapQueryInfoBaseHeaderML32 *in, XrLocalizationMapQueryInfoBaseHeaderML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrLocalizationMapML_win32_to_host(const XrLocalizationMapML32 *in, XrLocalizationMapML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    memcpy(out->name, in->name, XR_MAX_LOCALIZATION_MAP_NAME_LENGTH_ML * sizeof(char));
    out->mapUuid = in->mapUuid;
    out->mapType = in->mapType;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrLocalizationMapML_host_to_win32(const XrLocalizationMapML *in, XrLocalizationMapML32 *out)
{
    if (!in) return;

    memcpy(out->name, in->name, XR_MAX_LOCALIZATION_MAP_NAME_LENGTH_ML * sizeof(char));
    out->mapUuid = in->mapUuid;
    out->mapType = in->mapType;
}

static inline XrLocalizationMapML *convert_XrLocalizationMapML_array_win32_to_host(struct conversion_context *ctx, const XrLocalizationMapML32 *in, uint32_t count)
{
    XrLocalizationMapML *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrLocalizationMapML_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrLocalizationMapML_array_host_to_win32(const XrLocalizationMapML *in, XrLocalizationMapML32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrLocalizationMapML_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrPerformanceMetricsCounterMETA_win32_to_host(const XrPerformanceMetricsCounterMETA32 *in, XrPerformanceMetricsCounterMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->counterFlags = in->counterFlags;
    out->counterUnit = in->counterUnit;
    out->uintValue = in->uintValue;
    out->floatValue = in->floatValue;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrPerformanceMetricsCounterMETA_host_to_win32(const XrPerformanceMetricsCounterMETA *in, XrPerformanceMetricsCounterMETA32 *out)
{
    if (!in) return;

    out->counterFlags = in->counterFlags;
    out->counterUnit = in->counterUnit;
    out->uintValue = in->uintValue;
    out->floatValue = in->floatValue;
}

static inline void convert_XrSenseDataQueryInfoBD_win32_to_host(struct conversion_context *ctx, const XrSenseDataQueryInfoBD32 *in, XrSenseDataQueryInfoBD *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SENSE_DATA_FILTER_UUID_BD:
        {
            XrSenseDataFilterUuidBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSenseDataFilterUuidBD32 *in_ext = (const XrSenseDataFilterUuidBD32 *)in_header;
            out_ext->type = XR_TYPE_SENSE_DATA_FILTER_UUID_BD;
            out_ext->next = NULL;
            out_ext->uuidCount = in_ext->uuidCount;
            out_ext->uuids = (const XrUuidEXT *)(uintptr_t)UlongToPtr(in_ext->uuids);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SENSE_DATA_FILTER_SEMANTIC_BD:
        {
            XrSenseDataFilterSemanticBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSenseDataFilterSemanticBD32 *in_ext = (const XrSenseDataFilterSemanticBD32 *)in_header;
            out_ext->type = XR_TYPE_SENSE_DATA_FILTER_SEMANTIC_BD;
            out_ext->next = NULL;
            out_ext->labelCount = in_ext->labelCount;
            out_ext->labels = (const XrSemanticLabelBD *)(uintptr_t)UlongToPtr(in_ext->labels);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SENSE_DATA_FILTER_PLANE_ORIENTATION_BD:
        {
            XrSenseDataFilterPlaneOrientationBD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSenseDataFilterPlaneOrientationBD32 *in_ext = (const XrSenseDataFilterPlaneOrientationBD32 *)in_header;
            out_ext->type = XR_TYPE_SENSE_DATA_FILTER_PLANE_ORIENTATION_BD;
            out_ext->next = NULL;
            out_ext->orientationCount = in_ext->orientationCount;
            out_ext->orientations = (XrPlaneOrientationBD *)(uintptr_t)UlongToPtr(in_ext->orientations);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrSenseDataQueryCompletionBD_win32_to_host(const XrSenseDataQueryCompletionBD32 *in, XrSenseDataQueryCompletionBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->futureResult = in->futureResult;
    out->snapshot = in->snapshot;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSenseDataQueryCompletionBD_host_to_win32(const XrSenseDataQueryCompletionBD *in, XrSenseDataQueryCompletionBD32 *out)
{
    if (!in) return;

    out->futureResult = in->futureResult;
    out->snapshot = in->snapshot;
}

static inline void convert_XrSpaceQueryInfoBaseHeaderFB_win32_to_host(const XrSpaceQueryInfoBaseHeaderFB32 *in, XrSpaceQueryInfoBaseHeaderFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorsQueryInfoBaseHeaderML_win32_to_host(const XrSpatialAnchorsQueryInfoBaseHeaderML32 *in, XrSpatialAnchorsQueryInfoBaseHeaderML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorsQueryCompletionML_win32_to_host(const XrSpatialAnchorsQueryCompletionML32 *in, XrSpatialAnchorsQueryCompletionML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->futureResult = in->futureResult;
    out->uuidCapacityInput = in->uuidCapacityInput;
    out->uuidCountOutput = in->uuidCountOutput;
    out->uuids = (XrUuidEXT *)(uintptr_t)UlongToPtr(in->uuids);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorsQueryCompletionML_host_to_win32(const XrSpatialAnchorsQueryCompletionML *in, XrSpatialAnchorsQueryCompletionML32 *out)
{
    if (!in) return;

    out->futureResult = in->futureResult;
    out->uuidCapacityInput = in->uuidCapacityInput;
    out->uuidCountOutput = in->uuidCountOutput;
    out->uuids = PtrToUlong(in->uuids);
}

static inline void convert_XrSpatialComponentDataQueryConditionEXT_win32_to_host(struct conversion_context *ctx, const XrSpatialComponentDataQueryConditionEXT32 *in, XrSpatialComponentDataQueryConditionEXT *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->componentTypeCount = in->componentTypeCount;
    out->componentTypes = (const XrSpatialComponentTypeEXT *)(uintptr_t)UlongToPtr(in->componentTypes);

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPATIAL_FILTER_TRACKING_STATE_EXT:
        {
            XrSpatialFilterTrackingStateEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialFilterTrackingStateEXT32 *in_ext = (const XrSpatialFilterTrackingStateEXT32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_FILTER_TRACKING_STATE_EXT;
            out_ext->next = NULL;
            out_ext->trackingState = in_ext->trackingState;
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_DISCOVERY_PERSISTENCE_UUID_FILTER_EXT:
        {
            XrSpatialDiscoveryPersistenceUuidFilterEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialDiscoveryPersistenceUuidFilterEXT32 *in_ext = (const XrSpatialDiscoveryPersistenceUuidFilterEXT32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_DISCOVERY_PERSISTENCE_UUID_FILTER_EXT;
            out_ext->next = NULL;
            out_ext->persistedUuidCount = in_ext->persistedUuidCount;
            out_ext->persistedUuids = (const XrUuid *)(uintptr_t)UlongToPtr(in_ext->persistedUuids);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrSpatialComponentDataQueryResultEXT_win32_to_host(struct conversion_context *ctx, const XrSpatialComponentDataQueryResultEXT32 *in, XrSpatialComponentDataQueryResultEXT *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->entityIdCapacityInput = in->entityIdCapacityInput;
    out->entityIdCountOutput = in->entityIdCountOutput;
    out->entityIds = (XrSpatialEntityIdEXT *)(uintptr_t)UlongToPtr(in->entityIds);
    out->entityStateCapacityInput = in->entityStateCapacityInput;
    out->entityStateCountOutput = in->entityStateCountOutput;
    out->entityStates = (XrSpatialEntityTrackingStateEXT *)(uintptr_t)UlongToPtr(in->entityStates);

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPATIAL_COMPONENT_BOUNDED_2D_LIST_EXT:
        {
            XrSpatialComponentBounded2DListEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialComponentBounded2DListEXT32 *in_ext = (const XrSpatialComponentBounded2DListEXT32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_BOUNDED_2D_LIST_EXT;
            out_ext->next = NULL;
            out_ext->boundCount = in_ext->boundCount;
            out_ext->bounds = (XrSpatialBounded2DDataEXT *)(uintptr_t)UlongToPtr(in_ext->bounds);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_BOUNDED_3D_LIST_EXT:
        {
            XrSpatialComponentBounded3DListEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialComponentBounded3DListEXT32 *in_ext = (const XrSpatialComponentBounded3DListEXT32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_BOUNDED_3D_LIST_EXT;
            out_ext->next = NULL;
            out_ext->boundCount = in_ext->boundCount;
            out_ext->bounds = (XrBoxf *)(uintptr_t)UlongToPtr(in_ext->bounds);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_PARENT_LIST_EXT:
        {
            XrSpatialComponentParentListEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialComponentParentListEXT32 *in_ext = (const XrSpatialComponentParentListEXT32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_PARENT_LIST_EXT;
            out_ext->next = NULL;
            out_ext->parentCount = in_ext->parentCount;
            out_ext->parents = (XrSpatialEntityIdEXT *)(uintptr_t)UlongToPtr(in_ext->parents);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_MESH_3D_LIST_EXT:
        {
            XrSpatialComponentMesh3DListEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialComponentMesh3DListEXT32 *in_ext = (const XrSpatialComponentMesh3DListEXT32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_MESH_3D_LIST_EXT;
            out_ext->next = NULL;
            out_ext->meshCount = in_ext->meshCount;
            out_ext->meshes = (XrSpatialMeshDataEXT *)(uintptr_t)UlongToPtr(in_ext->meshes);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_ANCHOR_LIST_EXT:
        {
            XrSpatialComponentAnchorListEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialComponentAnchorListEXT32 *in_ext = (const XrSpatialComponentAnchorListEXT32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_ANCHOR_LIST_EXT;
            out_ext->next = NULL;
            out_ext->locationCount = in_ext->locationCount;
            out_ext->locations = (XrPosef *)(uintptr_t)UlongToPtr(in_ext->locations);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_PERSISTENCE_LIST_EXT:
        {
            XrSpatialComponentPersistenceListEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialComponentPersistenceListEXT32 *in_ext = (const XrSpatialComponentPersistenceListEXT32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_PERSISTENCE_LIST_EXT;
            out_ext->next = NULL;
            out_ext->persistDataCount = in_ext->persistDataCount;
            out_ext->persistData = (XrSpatialPersistenceDataEXT *)(uintptr_t)UlongToPtr(in_ext->persistData);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_PLANE_ALIGNMENT_LIST_EXT:
        {
            XrSpatialComponentPlaneAlignmentListEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialComponentPlaneAlignmentListEXT32 *in_ext = (const XrSpatialComponentPlaneAlignmentListEXT32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_PLANE_ALIGNMENT_LIST_EXT;
            out_ext->next = NULL;
            out_ext->planeAlignmentCount = in_ext->planeAlignmentCount;
            out_ext->planeAlignments = (XrSpatialPlaneAlignmentEXT *)(uintptr_t)UlongToPtr(in_ext->planeAlignments);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_MESH_2D_LIST_EXT:
        {
            XrSpatialComponentMesh2DListEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialComponentMesh2DListEXT32 *in_ext = (const XrSpatialComponentMesh2DListEXT32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_MESH_2D_LIST_EXT;
            out_ext->next = NULL;
            out_ext->meshCount = in_ext->meshCount;
            out_ext->meshes = (XrSpatialMeshDataEXT *)(uintptr_t)UlongToPtr(in_ext->meshes);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_POLYGON_2D_LIST_EXT:
        {
            XrSpatialComponentPolygon2DListEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialComponentPolygon2DListEXT32 *in_ext = (const XrSpatialComponentPolygon2DListEXT32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_POLYGON_2D_LIST_EXT;
            out_ext->next = NULL;
            out_ext->polygonCount = in_ext->polygonCount;
            out_ext->polygons = (XrSpatialPolygon2DDataEXT *)(uintptr_t)UlongToPtr(in_ext->polygons);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_PLANE_SEMANTIC_LABEL_LIST_EXT:
        {
            XrSpatialComponentPlaneSemanticLabelListEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialComponentPlaneSemanticLabelListEXT32 *in_ext = (const XrSpatialComponentPlaneSemanticLabelListEXT32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_PLANE_SEMANTIC_LABEL_LIST_EXT;
            out_ext->next = NULL;
            out_ext->semanticLabelCount = in_ext->semanticLabelCount;
            out_ext->semanticLabels = (XrSpatialPlaneSemanticLabelEXT *)(uintptr_t)UlongToPtr(in_ext->semanticLabels);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_MARKER_LIST_EXT:
        {
            XrSpatialComponentMarkerListEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialComponentMarkerListEXT32 *in_ext = (const XrSpatialComponentMarkerListEXT32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_MARKER_LIST_EXT;
            out_ext->next = NULL;
            out_ext->markerCount = in_ext->markerCount;
            out_ext->markers = (XrSpatialMarkerDataEXT *)(uintptr_t)UlongToPtr(in_ext->markers);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrSpatialComponentDataQueryResultEXT_host_to_win32(const XrSpatialComponentDataQueryResultEXT *in, XrSpatialComponentDataQueryResultEXT32 *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure32 *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->entityIdCapacityInput = in->entityIdCapacityInput;
    out->entityIdCountOutput = in->entityIdCountOutput;
    out->entityIds = PtrToUlong(in->entityIds);
    out->entityStateCapacityInput = in->entityStateCapacityInput;
    out->entityStateCountOutput = in->entityStateCountOutput;
    out->entityStates = PtrToUlong(in->entityStates);

    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPATIAL_COMPONENT_BOUNDED_2D_LIST_EXT:
        {
            XrSpatialComponentBounded2DListEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_COMPONENT_BOUNDED_2D_LIST_EXT);
            const XrSpatialComponentBounded2DListEXT *in_ext = (const XrSpatialComponentBounded2DListEXT *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_BOUNDED_2D_LIST_EXT;
            out_ext->boundCount = in_ext->boundCount;
            out_ext->bounds = PtrToUlong(in_ext->bounds);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_BOUNDED_3D_LIST_EXT:
        {
            XrSpatialComponentBounded3DListEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_COMPONENT_BOUNDED_3D_LIST_EXT);
            const XrSpatialComponentBounded3DListEXT *in_ext = (const XrSpatialComponentBounded3DListEXT *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_BOUNDED_3D_LIST_EXT;
            out_ext->boundCount = in_ext->boundCount;
            out_ext->bounds = PtrToUlong(in_ext->bounds);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_PARENT_LIST_EXT:
        {
            XrSpatialComponentParentListEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_COMPONENT_PARENT_LIST_EXT);
            const XrSpatialComponentParentListEXT *in_ext = (const XrSpatialComponentParentListEXT *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_PARENT_LIST_EXT;
            out_ext->parentCount = in_ext->parentCount;
            out_ext->parents = PtrToUlong(in_ext->parents);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_MESH_3D_LIST_EXT:
        {
            XrSpatialComponentMesh3DListEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_COMPONENT_MESH_3D_LIST_EXT);
            const XrSpatialComponentMesh3DListEXT *in_ext = (const XrSpatialComponentMesh3DListEXT *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_MESH_3D_LIST_EXT;
            out_ext->meshCount = in_ext->meshCount;
            out_ext->meshes = PtrToUlong(in_ext->meshes);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_ANCHOR_LIST_EXT:
        {
            XrSpatialComponentAnchorListEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_COMPONENT_ANCHOR_LIST_EXT);
            const XrSpatialComponentAnchorListEXT *in_ext = (const XrSpatialComponentAnchorListEXT *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_ANCHOR_LIST_EXT;
            out_ext->locationCount = in_ext->locationCount;
            out_ext->locations = PtrToUlong(in_ext->locations);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_PERSISTENCE_LIST_EXT:
        {
            XrSpatialComponentPersistenceListEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_COMPONENT_PERSISTENCE_LIST_EXT);
            const XrSpatialComponentPersistenceListEXT *in_ext = (const XrSpatialComponentPersistenceListEXT *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_PERSISTENCE_LIST_EXT;
            out_ext->persistDataCount = in_ext->persistDataCount;
            out_ext->persistData = PtrToUlong(in_ext->persistData);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_PLANE_ALIGNMENT_LIST_EXT:
        {
            XrSpatialComponentPlaneAlignmentListEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_COMPONENT_PLANE_ALIGNMENT_LIST_EXT);
            const XrSpatialComponentPlaneAlignmentListEXT *in_ext = (const XrSpatialComponentPlaneAlignmentListEXT *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_PLANE_ALIGNMENT_LIST_EXT;
            out_ext->planeAlignmentCount = in_ext->planeAlignmentCount;
            out_ext->planeAlignments = PtrToUlong(in_ext->planeAlignments);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_MESH_2D_LIST_EXT:
        {
            XrSpatialComponentMesh2DListEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_COMPONENT_MESH_2D_LIST_EXT);
            const XrSpatialComponentMesh2DListEXT *in_ext = (const XrSpatialComponentMesh2DListEXT *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_MESH_2D_LIST_EXT;
            out_ext->meshCount = in_ext->meshCount;
            out_ext->meshes = PtrToUlong(in_ext->meshes);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_POLYGON_2D_LIST_EXT:
        {
            XrSpatialComponentPolygon2DListEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_COMPONENT_POLYGON_2D_LIST_EXT);
            const XrSpatialComponentPolygon2DListEXT *in_ext = (const XrSpatialComponentPolygon2DListEXT *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_POLYGON_2D_LIST_EXT;
            out_ext->polygonCount = in_ext->polygonCount;
            out_ext->polygons = PtrToUlong(in_ext->polygons);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_PLANE_SEMANTIC_LABEL_LIST_EXT:
        {
            XrSpatialComponentPlaneSemanticLabelListEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_COMPONENT_PLANE_SEMANTIC_LABEL_LIST_EXT);
            const XrSpatialComponentPlaneSemanticLabelListEXT *in_ext = (const XrSpatialComponentPlaneSemanticLabelListEXT *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_PLANE_SEMANTIC_LABEL_LIST_EXT;
            out_ext->semanticLabelCount = in_ext->semanticLabelCount;
            out_ext->semanticLabels = PtrToUlong(in_ext->semanticLabels);
            out_header = (void *)out_ext;
            break;
        }
        case XR_TYPE_SPATIAL_COMPONENT_MARKER_LIST_EXT:
        {
            XrSpatialComponentMarkerListEXT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_COMPONENT_MARKER_LIST_EXT);
            const XrSpatialComponentMarkerListEXT *in_ext = (const XrSpatialComponentMarkerListEXT *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_COMPONENT_MARKER_LIST_EXT;
            out_ext->markerCount = in_ext->markerCount;
            out_ext->markers = PtrToUlong(in_ext->markers);
            out_header = (void *)out_ext;
            break;
        }
        default:
            break;
        }
    }
}

static inline void convert_XrKeyboardTrackingQueryFB_win32_to_host(const XrKeyboardTrackingQueryFB32 *in, XrKeyboardTrackingQueryFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->flags = in->flags;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrKeyboardTrackingDescriptionFB_host_to_win32(const XrKeyboardTrackingDescriptionFB *in, XrKeyboardTrackingDescriptionFB32 *out)
{
    if (!in) return;

    out->trackedKeyboardId = in->trackedKeyboardId;
    out->size = in->size;
    out->flags = in->flags;
    memcpy(out->name, in->name, XR_MAX_KEYBOARD_TRACKING_NAME_SIZE_FB * sizeof(char));
}

static inline const XrTrackableTrackerANDROID *convert_XrTrackableTrackerANDROID_array_win32_to_host(struct conversion_context *ctx, const PTR32 *in, uint32_t count)
{
    XrTrackableTrackerANDROID *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        out[i] = (XrTrackableTrackerANDROID)(uintptr_t)UlongToPtr(in[i]);
    }

    return out;
}

static inline void convert_XrRaycastInfoANDROID_win32_to_host(struct conversion_context *ctx, const XrRaycastInfoANDROID32 *in, XrRaycastInfoANDROID *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->maxResults = in->maxResults;
    out->trackerCount = in->trackerCount;
    out->trackers = convert_XrTrackableTrackerANDROID_array_win32_to_host(ctx, (const PTR32 *)(uintptr_t)UlongToPtr(in->trackers), in->trackerCount);
    out->origin = in->origin;
    out->trajectory = in->trajectory;
    out->space = in->space;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRaycastHitResultsANDROID_win32_to_host(const XrRaycastHitResultsANDROID32 *in, XrRaycastHitResultsANDROID *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->resultsCapacityInput = in->resultsCapacityInput;
    out->resultsCountOutput = in->resultsCountOutput;
    out->results = (XrRaycastHitResultANDROID *)(uintptr_t)UlongToPtr(in->results);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrRaycastHitResultsANDROID_host_to_win32(const XrRaycastHitResultsANDROID *in, XrRaycastHitResultsANDROID32 *out)
{
    if (!in) return;

    out->resultsCapacityInput = in->resultsCapacityInput;
    out->resultsCountOutput = in->resultsCountOutput;
    out->results = PtrToUlong(in->results);
}

static inline void convert_XrSwapchainImageReleaseInfo_win32_to_host(const XrSwapchainImageReleaseInfo32 *in, XrSwapchainImageReleaseInfo *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrMapLocalizationRequestInfoML_win32_to_host(const XrMapLocalizationRequestInfoML32 *in, XrMapLocalizationRequestInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->mapUuid = in->mapUuid;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSceneCaptureRequestInfoFB_win32_to_host(const XrSceneCaptureRequestInfoFB32 *in, XrSceneCaptureRequestInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->requestByteCount = in->requestByteCount;
    out->request = (const char *)(uintptr_t)UlongToPtr(in->request);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrWorldMeshBlockRequestML_win32_to_host(const XrWorldMeshBlockRequestML32 *in, XrWorldMeshBlockRequestML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->uuid = in->uuid;
    out->lod = in->lod;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrWorldMeshBlockRequestML_host_to_win32(const XrWorldMeshBlockRequestML *in, XrWorldMeshBlockRequestML32 *out)
{
    if (!in) return;

    out->uuid = in->uuid;
    out->lod = in->lod;
}

static inline XrWorldMeshBlockRequestML *convert_XrWorldMeshBlockRequestML_array_win32_to_host(struct conversion_context *ctx, const XrWorldMeshBlockRequestML32 *in, uint32_t count)
{
    XrWorldMeshBlockRequestML *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrWorldMeshBlockRequestML_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrWorldMeshBlockRequestML_array_host_to_win32(const XrWorldMeshBlockRequestML *in, XrWorldMeshBlockRequestML32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrWorldMeshBlockRequestML_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrWorldMeshGetInfoML_win32_to_host(struct conversion_context *ctx, const XrWorldMeshGetInfoML32 *in, XrWorldMeshGetInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->flags = in->flags;
    out->fillHoleLength = in->fillHoleLength;
    out->disconnectedComponentArea = in->disconnectedComponentArea;
    out->blockCount = in->blockCount;
    out->blocks = convert_XrWorldMeshBlockRequestML_array_win32_to_host(ctx, (XrWorldMeshBlockRequestML32 *)(uintptr_t)UlongToPtr(in->blocks), in->blockCount);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrWorldMeshGetInfoML_host_to_win32(const XrWorldMeshGetInfoML *in, XrWorldMeshGetInfoML32 *out)
{
    if (!in) return;

    convert_XrWorldMeshBlockRequestML_array_host_to_win32(in->blocks, (XrWorldMeshBlockRequestML32 *)(uintptr_t)UlongToPtr(out->blocks), in->blockCount);
}

static inline void convert_XrWorldMeshRequestCompletionInfoML_win32_to_host(const XrWorldMeshRequestCompletionInfoML32 *in, XrWorldMeshRequestCompletionInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->meshSpace = in->meshSpace;
    out->meshSpaceLocateTime = in->meshSpaceLocateTime;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrWorldMeshBlockML_win32_to_host(const XrWorldMeshBlockML32 *in, XrWorldMeshBlockML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->uuid = in->uuid;
    out->blockResult = in->blockResult;
    out->lod = in->lod;
    out->flags = in->flags;
    out->indexCount = in->indexCount;
    out->indexBuffer = (uint16_t *)(uintptr_t)UlongToPtr(in->indexBuffer);
    out->vertexCount = in->vertexCount;
    out->vertexBuffer = (XrVector3f *)(uintptr_t)UlongToPtr(in->vertexBuffer);
    out->normalCount = in->normalCount;
    out->normalBuffer = (XrVector3f *)(uintptr_t)UlongToPtr(in->normalBuffer);
    out->confidenceCount = in->confidenceCount;
    out->confidenceBuffer = (float *)(uintptr_t)UlongToPtr(in->confidenceBuffer);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrWorldMeshBlockML_host_to_win32(const XrWorldMeshBlockML *in, XrWorldMeshBlockML32 *out)
{
    if (!in) return;

    out->uuid = in->uuid;
    out->blockResult = in->blockResult;
    out->lod = in->lod;
    out->flags = in->flags;
    out->indexCount = in->indexCount;
    out->indexBuffer = PtrToUlong(in->indexBuffer);
    out->vertexCount = in->vertexCount;
    out->vertexBuffer = PtrToUlong(in->vertexBuffer);
    out->normalCount = in->normalCount;
    out->normalBuffer = PtrToUlong(in->normalBuffer);
    out->confidenceCount = in->confidenceCount;
    out->confidenceBuffer = PtrToUlong(in->confidenceBuffer);
}

static inline XrWorldMeshBlockML *convert_XrWorldMeshBlockML_array_win32_to_host(struct conversion_context *ctx, const XrWorldMeshBlockML32 *in, uint32_t count)
{
    XrWorldMeshBlockML *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrWorldMeshBlockML_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrWorldMeshBlockML_array_host_to_win32(const XrWorldMeshBlockML *in, XrWorldMeshBlockML32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrWorldMeshBlockML_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrWorldMeshRequestCompletionML_win32_to_host(struct conversion_context *ctx, const XrWorldMeshRequestCompletionML32 *in, XrWorldMeshRequestCompletionML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->futureResult = in->futureResult;
    out->blockCount = in->blockCount;
    out->blocks = convert_XrWorldMeshBlockML_array_win32_to_host(ctx, (XrWorldMeshBlockML32 *)(uintptr_t)UlongToPtr(in->blocks), in->blockCount);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrWorldMeshRequestCompletionML_host_to_win32(const XrWorldMeshRequestCompletionML *in, XrWorldMeshRequestCompletionML32 *out)
{
    if (!in) return;

    out->futureResult = in->futureResult;
    out->blockCount = in->blockCount;
    convert_XrWorldMeshBlockML_array_host_to_win32(in->blocks, (XrWorldMeshBlockML32 *)(uintptr_t)UlongToPtr(out->blocks), in->blockCount);
}

static inline void convert_XrWorldMeshStateRequestInfoML_win32_to_host(const XrWorldMeshStateRequestInfoML32 *in, XrWorldMeshStateRequestInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->baseSpace = in->baseSpace;
    out->time = in->time;
    out->boundingBoxCenter = in->boundingBoxCenter;
    out->boundingBoxExtents = in->boundingBoxExtents;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrWorldMeshBlockStateML_win32_to_host(const XrWorldMeshBlockStateML32 *in, XrWorldMeshBlockStateML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->uuid = in->uuid;
    out->meshBoundingBoxCenter = in->meshBoundingBoxCenter;
    out->meshBoundingBoxExtents = in->meshBoundingBoxExtents;
    out->lastUpdateTime = in->lastUpdateTime;
    out->status = in->status;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrWorldMeshBlockStateML_host_to_win32(const XrWorldMeshBlockStateML *in, XrWorldMeshBlockStateML32 *out)
{
    if (!in) return;

    out->uuid = in->uuid;
    out->meshBoundingBoxCenter = in->meshBoundingBoxCenter;
    out->meshBoundingBoxExtents = in->meshBoundingBoxExtents;
    out->lastUpdateTime = in->lastUpdateTime;
    out->status = in->status;
}

static inline XrWorldMeshBlockStateML *convert_XrWorldMeshBlockStateML_array_win32_to_host(struct conversion_context *ctx, const XrWorldMeshBlockStateML32 *in, uint32_t count)
{
    XrWorldMeshBlockStateML *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrWorldMeshBlockStateML_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrWorldMeshBlockStateML_array_host_to_win32(const XrWorldMeshBlockStateML *in, XrWorldMeshBlockStateML32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrWorldMeshBlockStateML_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrWorldMeshStateRequestCompletionML_win32_to_host(struct conversion_context *ctx, const XrWorldMeshStateRequestCompletionML32 *in, XrWorldMeshStateRequestCompletionML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->futureResult = in->futureResult;
    out->timestamp = in->timestamp;
    out->meshBlockStateCapacityInput = in->meshBlockStateCapacityInput;
    out->meshBlockStateCountOutput = in->meshBlockStateCountOutput;
    out->meshBlockStates = convert_XrWorldMeshBlockStateML_array_win32_to_host(ctx, (XrWorldMeshBlockStateML32 *)(uintptr_t)UlongToPtr(in->meshBlockStates), in->meshBlockStateCapacityInput);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrWorldMeshStateRequestCompletionML_host_to_win32(const XrWorldMeshStateRequestCompletionML *in, XrWorldMeshStateRequestCompletionML32 *out)
{
    if (!in) return;

    out->futureResult = in->futureResult;
    out->timestamp = in->timestamp;
    out->meshBlockStateCapacityInput = in->meshBlockStateCapacityInput;
    out->meshBlockStateCountOutput = in->meshBlockStateCountOutput;
    convert_XrWorldMeshBlockStateML_array_host_to_win32(in->meshBlockStates, (XrWorldMeshBlockStateML32 *)(uintptr_t)UlongToPtr(out->meshBlockStates), in->meshBlockStateCapacityInput);
}

static inline void convert_XrSimultaneousHandsAndControllersTrackingResumeInfoMETA_win32_to_host(const XrSimultaneousHandsAndControllersTrackingResumeInfoMETA32 *in, XrSimultaneousHandsAndControllersTrackingResumeInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpaceDiscoveryResultMETA_host_to_win32(const XrSpaceDiscoveryResultMETA *in, XrSpaceDiscoveryResultMETA32 *out)
{
    if (!in) return;

    out->space = in->space;
    out->uuid = in->uuid;
}

static inline XrSpaceDiscoveryResultMETA *convert_XrSpaceDiscoveryResultMETA_array_win32_to_host(struct conversion_context *ctx, const XrSpaceDiscoveryResultMETA32 *in, uint32_t count)
{
    XrSpaceDiscoveryResultMETA *out;
    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));

    return out;
}

static inline void convert_XrSpaceDiscoveryResultMETA_array_host_to_win32(const XrSpaceDiscoveryResultMETA *in, XrSpaceDiscoveryResultMETA32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrSpaceDiscoveryResultMETA_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrSpaceDiscoveryResultsMETA_win32_to_host(struct conversion_context *ctx, const XrSpaceDiscoveryResultsMETA32 *in, XrSpaceDiscoveryResultsMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->resultCapacityInput = in->resultCapacityInput;
    out->resultCountOutput = in->resultCountOutput;
    out->results = convert_XrSpaceDiscoveryResultMETA_array_win32_to_host(ctx, (XrSpaceDiscoveryResultMETA32 *)(uintptr_t)UlongToPtr(in->results), in->resultCapacityInput);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpaceDiscoveryResultsMETA_host_to_win32(const XrSpaceDiscoveryResultsMETA *in, XrSpaceDiscoveryResultsMETA32 *out)
{
    if (!in) return;

    out->resultCapacityInput = in->resultCapacityInput;
    out->resultCountOutput = in->resultCountOutput;
    convert_XrSpaceDiscoveryResultMETA_array_host_to_win32(in->results, (XrSpaceDiscoveryResultMETA32 *)(uintptr_t)UlongToPtr(out->results), in->resultCapacityInput);
}

static inline void convert_XrSpaceQueryResultFB_host_to_win32(const XrSpaceQueryResultFB *in, XrSpaceQueryResultFB32 *out)
{
    if (!in) return;

    out->space = in->space;
    out->uuid = in->uuid;
}

static inline XrSpaceQueryResultFB *convert_XrSpaceQueryResultFB_array_win32_to_host(struct conversion_context *ctx, const XrSpaceQueryResultFB32 *in, uint32_t count)
{
    XrSpaceQueryResultFB *out;
    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));

    return out;
}

static inline void convert_XrSpaceQueryResultFB_array_host_to_win32(const XrSpaceQueryResultFB *in, XrSpaceQueryResultFB32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrSpaceQueryResultFB_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrSpaceQueryResultsFB_win32_to_host(struct conversion_context *ctx, const XrSpaceQueryResultsFB32 *in, XrSpaceQueryResultsFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->resultCapacityInput = in->resultCapacityInput;
    out->resultCountOutput = in->resultCountOutput;
    out->results = convert_XrSpaceQueryResultFB_array_win32_to_host(ctx, (XrSpaceQueryResultFB32 *)(uintptr_t)UlongToPtr(in->results), in->resultCapacityInput);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpaceQueryResultsFB_host_to_win32(const XrSpaceQueryResultsFB *in, XrSpaceQueryResultsFB32 *out)
{
    if (!in) return;

    out->resultCapacityInput = in->resultCapacityInput;
    out->resultCountOutput = in->resultCountOutput;
    convert_XrSpaceQueryResultFB_array_host_to_win32(in->results, (XrSpaceQueryResultFB32 *)(uintptr_t)UlongToPtr(out->results), in->resultCapacityInput);
}

static inline void convert_XrSpaceSaveInfoFB_win32_to_host(const XrSpaceSaveInfoFB32 *in, XrSpaceSaveInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->space = in->space;
    out->location = in->location;
    out->persistenceMode = in->persistenceMode;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpaceListSaveInfoFB_win32_to_host(struct conversion_context *ctx, const XrSpaceListSaveInfoFB32 *in, XrSpaceListSaveInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->spaceCount = in->spaceCount;
    out->spaces = convert_XrSpace_array_win32_to_host(ctx, (PTR32 *)(uintptr_t)UlongToPtr(in->spaces), in->spaceCount);
    out->location = in->location;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpaceListSaveInfoFB_host_to_win32(const XrSpaceListSaveInfoFB *in, XrSpaceListSaveInfoFB32 *out)
{
    if (!in) return;

    convert_XrSpace_array_host_to_win32(in->spaces, (PTR32 *)(uintptr_t)UlongToPtr(out->spaces), in->spaceCount);
}

static inline void convert_XrSpacesSaveInfoMETA_win32_to_host(struct conversion_context *ctx, const XrSpacesSaveInfoMETA32 *in, XrSpacesSaveInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->spaceCount = in->spaceCount;
    out->spaces = convert_XrSpace_array_win32_to_host(ctx, (PTR32 *)(uintptr_t)UlongToPtr(in->spaces), in->spaceCount);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpacesSaveInfoMETA_host_to_win32(const XrSpacesSaveInfoMETA *in, XrSpacesSaveInfoMETA32 *out)
{
    if (!in) return;

    convert_XrSpace_array_host_to_win32(in->spaces, (PTR32 *)(uintptr_t)UlongToPtr(out->spaces), in->spaceCount);
}

static inline void convert_XrVirtualKeyboardInputInfoMETA_win32_to_host(const XrVirtualKeyboardInputInfoMETA32 *in, XrVirtualKeyboardInputInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->inputSource = in->inputSource;
    out->inputSpace = in->inputSpace;
    out->inputPoseInSpace = in->inputPoseInSpace;
    out->inputState = in->inputState;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrDigitalLensControlALMALENCE_win32_to_host(const XrDigitalLensControlALMALENCE32 *in, XrDigitalLensControlALMALENCE *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->flags = in->flags;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrEnvironmentDepthHandRemovalSetInfoMETA_win32_to_host(const XrEnvironmentDepthHandRemovalSetInfoMETA32 *in, XrEnvironmentDepthHandRemovalSetInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->enabled = in->enabled;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpaceComponentStatusSetInfoFB_win32_to_host(const XrSpaceComponentStatusSetInfoFB32 *in, XrSpaceComponentStatusSetInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->componentType = in->componentType;
    out->enabled = in->enabled;
    out->timeout = in->timeout;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSystemNotificationsSetInfoML_win32_to_host(const XrSystemNotificationsSetInfoML32 *in, XrSystemNotificationsSetInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->suppressNotifications = in->suppressNotifications;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrVirtualKeyboardModelVisibilitySetInfoMETA_win32_to_host(const XrVirtualKeyboardModelVisibilitySetInfoMETA32 *in, XrVirtualKeyboardModelVisibilitySetInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->visible = in->visible;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline XrSpaceUserFB *convert_XrSpaceUserFB_array_win32_to_host(struct conversion_context *ctx, const PTR32 *in, uint32_t count)
{
    XrSpaceUserFB *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        out[i] = (XrSpaceUserFB)(uintptr_t)UlongToPtr(in[i]);
    }

    return out;
}

static inline void convert_XrSpaceUserFB_array_host_to_win32(const XrSpaceUserFB *in, PTR32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        out[i] = PtrToUlong(in[i]);
    }
}

static inline void convert_XrSpaceShareInfoFB_win32_to_host(struct conversion_context *ctx, const XrSpaceShareInfoFB32 *in, XrSpaceShareInfoFB *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->spaceCount = in->spaceCount;
    out->spaces = convert_XrSpace_array_win32_to_host(ctx, (PTR32 *)(uintptr_t)UlongToPtr(in->spaces), in->spaceCount);
    out->userCount = in->userCount;
    out->users = convert_XrSpaceUserFB_array_win32_to_host(ctx, (PTR32 *)(uintptr_t)UlongToPtr(in->users), in->userCount);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpaceShareInfoFB_host_to_win32(const XrSpaceShareInfoFB *in, XrSpaceShareInfoFB32 *out)
{
    if (!in) return;

    convert_XrSpace_array_host_to_win32(in->spaces, (PTR32 *)(uintptr_t)UlongToPtr(out->spaces), in->spaceCount);
    convert_XrSpaceUserFB_array_host_to_win32(in->users, (PTR32 *)(uintptr_t)UlongToPtr(out->users), in->userCount);
}

static inline void convert_XrShareSpacesRecipientBaseHeaderMETA_win32_to_host(const XrShareSpacesRecipientBaseHeaderMETA32 *in, XrShareSpacesRecipientBaseHeaderMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline const XrShareSpacesRecipientBaseHeaderMETA *convert_XrShareSpacesRecipientBaseHeaderMETA_array_win32_to_host(struct conversion_context *ctx, const XrShareSpacesRecipientBaseHeaderMETA32 *in, uint32_t count)
{
    XrShareSpacesRecipientBaseHeaderMETA *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrShareSpacesRecipientBaseHeaderMETA_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrShareSpacesInfoMETA_win32_to_host(struct conversion_context *ctx, const XrShareSpacesInfoMETA32 *in, XrShareSpacesInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->spaceCount = in->spaceCount;
    out->spaces = convert_XrSpace_array_win32_to_host(ctx, (PTR32 *)(uintptr_t)UlongToPtr(in->spaces), in->spaceCount);
    out->recipientInfo = convert_XrShareSpacesRecipientBaseHeaderMETA_array_win32_to_host(ctx, (const XrShareSpacesRecipientBaseHeaderMETA32 *)(uintptr_t)UlongToPtr(in->recipientInfo), 1);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrShareSpacesInfoMETA_host_to_win32(const XrShareSpacesInfoMETA *in, XrShareSpacesInfoMETA32 *out)
{
    if (!in) return;

    convert_XrSpace_array_host_to_win32(in->spaces, (PTR32 *)(uintptr_t)UlongToPtr(out->spaces), in->spaceCount);
}

static inline void convert_XrSpatialAnchorShareInfoBD_win32_to_host(const XrSpatialAnchorShareInfoBD32 *in, XrSpatialAnchorShareInfoBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->anchor = in->anchor;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrMarkerDetectorSnapshotInfoML_win32_to_host(const XrMarkerDetectorSnapshotInfoML32 *in, XrMarkerDetectorSnapshotInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrMarkerDetectorSnapshotInfoML_host_to_win32(const XrMarkerDetectorSnapshotInfoML *in, XrMarkerDetectorSnapshotInfoML32 *out)
{
    if (!in) return;

}

static inline void convert_XrColocationAdvertisementStartInfoMETA_win32_to_host(const XrColocationAdvertisementStartInfoMETA32 *in, XrColocationAdvertisementStartInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->bufferSize = in->bufferSize;
    out->buffer = (uint8_t *)(uintptr_t)UlongToPtr(in->buffer);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrColocationDiscoveryStartInfoMETA_win32_to_host(const XrColocationDiscoveryStartInfoMETA32 *in, XrColocationDiscoveryStartInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSenseDataProviderStartInfoBD_win32_to_host(const XrSenseDataProviderStartInfoBD32 *in, XrSenseDataProviderStartInfoBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrColocationAdvertisementStopInfoMETA_win32_to_host(const XrColocationAdvertisementStopInfoMETA32 *in, XrColocationAdvertisementStopInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrColocationDiscoveryStopInfoMETA_win32_to_host(const XrColocationDiscoveryStopInfoMETA32 *in, XrColocationDiscoveryStopInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrBodyTrackingCalibrationInfoMETA_win32_to_host(const XrBodyTrackingCalibrationInfoMETA32 *in, XrBodyTrackingCalibrationInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->bodyHeight = in->bodyHeight;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrBindingModificationBaseHeaderKHR_win32_to_host(const XrBindingModificationBaseHeaderKHR32 *in, XrBindingModificationBaseHeaderKHR *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline const XrBindingModificationBaseHeaderKHR * const*convert_XrBindingModificationBaseHeaderKHR_pointer_array_win32_to_host(struct conversion_context *ctx, const XrBindingModificationBaseHeaderKHR32 * const*in, uint32_t count)
{
    XrBindingModificationBaseHeaderKHR **out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        if (in[i])
        {
            out[i] = conversion_context_alloc(ctx, sizeof(*out[i]));
            convert_XrBindingModificationBaseHeaderKHR_win32_to_host((XrBindingModificationBaseHeaderKHR32 *)in[i], out[i]);
        }
        else
            out[i] = NULL;
    }

    return (void *)out;
}

static inline void convert_XrActionSuggestedBinding_win32_to_host(const XrActionSuggestedBinding32 *in, XrActionSuggestedBinding *out)
{
    if (!in) return;

    out->action = in->action;
    out->binding = in->binding;
}

static inline const XrActionSuggestedBinding *convert_XrActionSuggestedBinding_array_win32_to_host(struct conversion_context *ctx, const XrActionSuggestedBinding32 *in, uint32_t count)
{
    XrActionSuggestedBinding *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrActionSuggestedBinding_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrInteractionProfileSuggestedBinding_win32_to_host(struct conversion_context *ctx, const XrInteractionProfileSuggestedBinding32 *in, XrInteractionProfileSuggestedBinding *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->interactionProfile = in->interactionProfile;
    out->countSuggestedBindings = in->countSuggestedBindings;
    out->suggestedBindings = convert_XrActionSuggestedBinding_array_win32_to_host(ctx, (const XrActionSuggestedBinding32 *)(uintptr_t)UlongToPtr(in->suggestedBindings), in->countSuggestedBindings);

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_BINDING_MODIFICATIONS_KHR:
        {
            XrBindingModificationsKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrBindingModificationsKHR32 *in_ext = (const XrBindingModificationsKHR32 *)in_header;
            out_ext->type = XR_TYPE_BINDING_MODIFICATIONS_KHR;
            out_ext->next = NULL;
            out_ext->bindingModificationCount = in_ext->bindingModificationCount;
            out_ext->bindingModifications = convert_XrBindingModificationBaseHeaderKHR_pointer_array_win32_to_host(ctx, (const XrBindingModificationBaseHeaderKHR32 * const*)(uintptr_t)UlongToPtr(in_ext->bindingModifications), in_ext->bindingModificationCount);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrVirtualKeyboardLocationInfoMETA_win32_to_host(const XrVirtualKeyboardLocationInfoMETA32 *in, XrVirtualKeyboardLocationInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->locationType = in->locationType;
    out->space = in->space;
    out->poseInSpace = in->poseInSpace;
    out->scale = in->scale;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrActiveActionSetPriorityEXT_win32_to_host(const XrActiveActionSetPriorityEXT32 *in, XrActiveActionSetPriorityEXT *out)
{
    if (!in) return;

    out->actionSet = in->actionSet;
    out->priorityOverride = in->priorityOverride;
}

static inline const XrActiveActionSetPriorityEXT *convert_XrActiveActionSetPriorityEXT_array_win32_to_host(struct conversion_context *ctx, const XrActiveActionSetPriorityEXT32 *in, uint32_t count)
{
    XrActiveActionSetPriorityEXT *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrActiveActionSetPriorityEXT_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrActiveActionSet_win32_to_host(const XrActiveActionSet32 *in, XrActiveActionSet *out)
{
    if (!in) return;

    out->actionSet = in->actionSet;
    out->subactionPath = in->subactionPath;
}

static inline const XrActiveActionSet *convert_XrActiveActionSet_array_win32_to_host(struct conversion_context *ctx, const XrActiveActionSet32 *in, uint32_t count)
{
    XrActiveActionSet *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrActiveActionSet_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrActionsSyncInfo_win32_to_host(struct conversion_context *ctx, const XrActionsSyncInfo32 *in, XrActionsSyncInfo *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->countActiveActionSets = in->countActiveActionSets;
    out->activeActionSets = convert_XrActiveActionSet_array_win32_to_host(ctx, (const XrActiveActionSet32 *)(uintptr_t)UlongToPtr(in->activeActionSets), in->countActiveActionSets);

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_ACTIVE_ACTION_SET_PRIORITIES_EXT:
        {
            XrActiveActionSetPrioritiesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrActiveActionSetPrioritiesEXT32 *in_ext = (const XrActiveActionSetPrioritiesEXT32 *)in_header;
            out_ext->type = XR_TYPE_ACTIVE_ACTION_SET_PRIORITIES_EXT;
            out_ext->next = NULL;
            out_ext->actionSetPriorityCount = in_ext->actionSetPriorityCount;
            out_ext->actionSetPriorities = convert_XrActiveActionSetPriorityEXT_array_win32_to_host(ctx, (const XrActiveActionSetPriorityEXT32 *)(uintptr_t)UlongToPtr(in_ext->actionSetPriorities), in_ext->actionSetPriorityCount);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrSpatialGraphStaticNodeBindingCreateInfoMSFT_win32_to_host(const XrSpatialGraphStaticNodeBindingCreateInfoMSFT32 *in, XrSpatialGraphStaticNodeBindingCreateInfoMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->space = in->space;
    out->poseInSpace = in->poseInSpace;
    out->time = in->time;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorUnpersistInfoBD_win32_to_host(const XrSpatialAnchorUnpersistInfoBD32 *in, XrSpatialAnchorUnpersistInfoBD *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->location = in->location;
    out->anchor = in->anchor;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialEntityUnpersistInfoEXT_win32_to_host(const XrSpatialEntityUnpersistInfoEXT32 *in, XrSpatialEntityUnpersistInfoEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->persistUuid = in->persistUuid;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrUnpersistSpatialEntityCompletionEXT_win32_to_host(const XrUnpersistSpatialEntityCompletionEXT32 *in, XrUnpersistSpatialEntityCompletionEXT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->futureResult = in->futureResult;
    out->unpersistResult = in->unpersistResult;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrUnpersistSpatialEntityCompletionEXT_host_to_win32(const XrUnpersistSpatialEntityCompletionEXT *in, XrUnpersistSpatialEntityCompletionEXT32 *out)
{
    if (!in) return;

    out->futureResult = in->futureResult;
    out->unpersistResult = in->unpersistResult;
}

static inline void convert_XrHandMeshUpdateInfoMSFT_win32_to_host(const XrHandMeshUpdateInfoMSFT32 *in, XrHandMeshUpdateInfoMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->time = in->time;
    out->handPoseType = in->handPoseType;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrHandMeshIndexBufferMSFT_win32_to_host(const XrHandMeshIndexBufferMSFT32 *in, XrHandMeshIndexBufferMSFT *out)
{
    if (!in) return;

    out->indexBufferKey = in->indexBufferKey;
    out->indexCapacityInput = in->indexCapacityInput;
    out->indexCountOutput = in->indexCountOutput;
    out->indices = (uint32_t *)(uintptr_t)UlongToPtr(in->indices);
}

static inline void convert_XrHandMeshIndexBufferMSFT_host_to_win32(const XrHandMeshIndexBufferMSFT *in, XrHandMeshIndexBufferMSFT32 *out)
{
    if (!in) return;

    out->indexBufferKey = in->indexBufferKey;
    out->indexCapacityInput = in->indexCapacityInput;
    out->indexCountOutput = in->indexCountOutput;
    out->indices = PtrToUlong(in->indices);
}

static inline void convert_XrHandMeshVertexBufferMSFT_win32_to_host(const XrHandMeshVertexBufferMSFT32 *in, XrHandMeshVertexBufferMSFT *out)
{
    if (!in) return;

    out->vertexUpdateTime = in->vertexUpdateTime;
    out->vertexCapacityInput = in->vertexCapacityInput;
    out->vertexCountOutput = in->vertexCountOutput;
    out->vertices = (XrHandMeshVertexMSFT *)(uintptr_t)UlongToPtr(in->vertices);
}

static inline void convert_XrHandMeshVertexBufferMSFT_host_to_win32(const XrHandMeshVertexBufferMSFT *in, XrHandMeshVertexBufferMSFT32 *out)
{
    if (!in) return;

    out->vertexUpdateTime = in->vertexUpdateTime;
    out->vertexCapacityInput = in->vertexCapacityInput;
    out->vertexCountOutput = in->vertexCountOutput;
    out->vertices = PtrToUlong(in->vertices);
}

static inline void convert_XrHandMeshMSFT_win32_to_host(const XrHandMeshMSFT32 *in, XrHandMeshMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->isActive = in->isActive;
    out->indexBufferChanged = in->indexBufferChanged;
    out->vertexBufferChanged = in->vertexBufferChanged;
    convert_XrHandMeshIndexBufferMSFT_win32_to_host(&in->indexBuffer, &out->indexBuffer);
    convert_XrHandMeshVertexBufferMSFT_win32_to_host(&in->vertexBuffer, &out->vertexBuffer);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrHandMeshMSFT_host_to_win32(const XrHandMeshMSFT *in, XrHandMeshMSFT32 *out)
{
    if (!in) return;

    out->isActive = in->isActive;
    out->indexBufferChanged = in->indexBufferChanged;
    out->vertexBufferChanged = in->vertexBufferChanged;
    convert_XrHandMeshIndexBufferMSFT_host_to_win32(&in->indexBuffer, &out->indexBuffer);
    convert_XrHandMeshVertexBufferMSFT_host_to_win32(&in->vertexBuffer, &out->vertexBuffer);
}

static inline void convert_XrPassthroughColorLutUpdateInfoMETA_win32_to_host(const XrPassthroughColorLutUpdateInfoMETA32 *in, XrPassthroughColorLutUpdateInfoMETA *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    convert_XrPassthroughColorLutDataMETA_win32_to_host(&in->data, &out->data);
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorsUpdateExpirationInfoML_win32_to_host(const XrSpatialAnchorsUpdateExpirationInfoML32 *in, XrSpatialAnchorsUpdateExpirationInfoML *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->uuidCount = in->uuidCount;
    out->uuids = (const XrUuidEXT *)(uintptr_t)UlongToPtr(in->uuids);
    out->expiration = in->expiration;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSpatialAnchorsUpdateExpirationCompletionML_win32_to_host(struct conversion_context *ctx, const XrSpatialAnchorsUpdateExpirationCompletionML32 *in, XrSpatialAnchorsUpdateExpirationCompletionML *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->futureResult = in->futureResult;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_DETAILS_ML:
        {
            XrSpatialAnchorsUpdateExpirationCompletionDetailsML *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSpatialAnchorsUpdateExpirationCompletionDetailsML32 *in_ext = (const XrSpatialAnchorsUpdateExpirationCompletionDetailsML32 *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_DETAILS_ML;
            out_ext->next = NULL;
            out_ext->resultCount = in_ext->resultCount;
            out_ext->results = (XrSpatialAnchorCompletionResultML *)(uintptr_t)UlongToPtr(in_ext->results);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrSpatialAnchorsUpdateExpirationCompletionML_host_to_win32(const XrSpatialAnchorsUpdateExpirationCompletionML *in, XrSpatialAnchorsUpdateExpirationCompletionML32 *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure32 *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->futureResult = in->futureResult;

    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        case XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_DETAILS_ML:
        {
            XrSpatialAnchorsUpdateExpirationCompletionDetailsML32 *out_ext = find_next_struct32(out_header, XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_DETAILS_ML);
            const XrSpatialAnchorsUpdateExpirationCompletionDetailsML *in_ext = (const XrSpatialAnchorsUpdateExpirationCompletionDetailsML *)in_header;
            out_ext->type = XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_DETAILS_ML;
            out_ext->resultCount = in_ext->resultCount;
            out_ext->results = PtrToUlong(in_ext->results);
            out_header = (void *)out_ext;
            break;
        }
        default:
            break;
        }
    }
}

static inline void convert_XrFrameWaitInfo_win32_to_host(const XrFrameWaitInfo32 *in, XrFrameWaitInfo *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSecondaryViewConfigurationStateMSFT_win32_to_host(const XrSecondaryViewConfigurationStateMSFT32 *in, XrSecondaryViewConfigurationStateMSFT *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->viewConfigurationType = in->viewConfigurationType;
    out->active = in->active;
    if (in->next)
        FIXME("Unexpected next\n");
}

static inline void convert_XrSecondaryViewConfigurationStateMSFT_host_to_win32(const XrSecondaryViewConfigurationStateMSFT *in, XrSecondaryViewConfigurationStateMSFT32 *out)
{
    if (!in) return;

    out->viewConfigurationType = in->viewConfigurationType;
    out->active = in->active;
}

static inline XrSecondaryViewConfigurationStateMSFT *convert_XrSecondaryViewConfigurationStateMSFT_array_win32_to_host(struct conversion_context *ctx, const XrSecondaryViewConfigurationStateMSFT32 *in, uint32_t count)
{
    XrSecondaryViewConfigurationStateMSFT *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_XrSecondaryViewConfigurationStateMSFT_win32_to_host(&in[i], &out[i]);
    }

    return out;
}

static inline void convert_XrSecondaryViewConfigurationStateMSFT_array_host_to_win32(const XrSecondaryViewConfigurationStateMSFT *in, XrSecondaryViewConfigurationStateMSFT32 *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_XrSecondaryViewConfigurationStateMSFT_host_to_win32(&in[i], &out[i]);
    }
}

static inline void convert_XrFrameState_win32_to_host(struct conversion_context *ctx, const XrFrameState32 *in, XrFrameState *out)
{
    const XrBaseInStructure32 *in_header;
    XrBaseOutStructure *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->predictedDisplayTime = in->predictedDisplayTime;
    out->predictedDisplayPeriod = in->predictedDisplayPeriod;
    out->shouldRender = in->shouldRender;

    for (in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in->next); in_header; in_header = (const XrBaseInStructure32 *)(uintptr_t)UlongToPtr(in_header->next))
    {
        switch (in_header->type)
        {
        case XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_STATE_MSFT:
        {
            XrSecondaryViewConfigurationFrameStateMSFT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const XrSecondaryViewConfigurationFrameStateMSFT32 *in_ext = (const XrSecondaryViewConfigurationFrameStateMSFT32 *)in_header;
            out_ext->type = XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_STATE_MSFT;
            out_ext->next = NULL;
            out_ext->viewConfigurationCount = in_ext->viewConfigurationCount;
            out_ext->viewConfigurationStates = convert_XrSecondaryViewConfigurationStateMSFT_array_win32_to_host(ctx, (XrSecondaryViewConfigurationStateMSFT32 *)(uintptr_t)UlongToPtr(in_ext->viewConfigurationStates), in_ext->viewConfigurationCount);
            out_header->next = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
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

static inline void convert_XrFrameState_host_to_win32(const XrFrameState *in, XrFrameState32 *out)
{
    const XrBaseInStructure *in_header;
    XrBaseOutStructure32 *out_header = (void *)out;
    (void)out_header;

    if (!in) return;

    out->predictedDisplayTime = in->predictedDisplayTime;
    out->predictedDisplayPeriod = in->predictedDisplayPeriod;
    out->shouldRender = in->shouldRender;

    for (in_header = (void *)in->next; in_header; in_header = (void *)in_header->next)
    {
        switch (in_header->type)
        {
        case XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_STATE_MSFT:
        {
            XrSecondaryViewConfigurationFrameStateMSFT32 *out_ext = find_next_struct32(out_header, XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_STATE_MSFT);
            const XrSecondaryViewConfigurationFrameStateMSFT *in_ext = (const XrSecondaryViewConfigurationFrameStateMSFT *)in_header;
            out_ext->type = XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_STATE_MSFT;
            out_ext->viewConfigurationCount = in_ext->viewConfigurationCount;
            convert_XrSecondaryViewConfigurationStateMSFT_array_host_to_win32(in_ext->viewConfigurationStates, (XrSecondaryViewConfigurationStateMSFT32 *)(uintptr_t)UlongToPtr(out_ext->viewConfigurationStates), in_ext->viewConfigurationCount);
            out_header = (void *)out_ext;
            break;
        }
        default:
            break;
        }
    }
}

static inline void convert_XrSwapchainImageWaitInfo_win32_to_host(const XrSwapchainImageWaitInfo32 *in, XrSwapchainImageWaitInfo *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = NULL;
    out->timeout = in->timeout;
    if (in->next)
        FIXME("Unexpected next\n");
}

#ifndef _WIN64
static NTSTATUS thunk32_xrAcquireEnvironmentDepthImageMETA(void *args)
{
    struct
    {
        XrEnvironmentDepthProviderMETA environmentDepthProvider;
        PTR32 acquireInfo;
        PTR32 environmentDepthImage;
        XrResult result;
    } *params = args;
    XrEnvironmentDepthImageAcquireInfoMETA acquireInfo_host;
    XrEnvironmentDepthImageMETA environmentDepthImage_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->environmentDepthProvider), params->acquireInfo, params->environmentDepthImage);

    convert_XrEnvironmentDepthImageAcquireInfoMETA_win32_to_host((const XrEnvironmentDepthImageAcquireInfoMETA32 *)(uintptr_t)UlongToPtr(params->acquireInfo), &acquireInfo_host);
    convert_XrEnvironmentDepthImageMETA_win32_to_host((XrEnvironmentDepthImageMETA32 *)(uintptr_t)UlongToPtr(params->environmentDepthImage), &environmentDepthImage_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrAcquireEnvironmentDepthImageMETA(params->environmentDepthProvider, &acquireInfo_host, &environmentDepthImage_host);
    convert_XrEnvironmentDepthImageMETA_host_to_win32(&environmentDepthImage_host, (XrEnvironmentDepthImageMETA32 *)(XrEnvironmentDepthImageMETA32 *)(uintptr_t)UlongToPtr(params->environmentDepthImage));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrAcquireEnvironmentDepthImageMETA(void *args)
{
    struct xrAcquireEnvironmentDepthImageMETA_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->environmentDepthProvider), params->acquireInfo, params->environmentDepthImage);

    params->result = g_xr_host_instance_dispatch_table.p_xrAcquireEnvironmentDepthImageMETA(params->environmentDepthProvider, params->acquireInfo, params->environmentDepthImage);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrAcquireSwapchainImage(void *args)
{
    struct
    {
        XrSwapchain swapchain;
        PTR32 acquireInfo;
        PTR32 index;
        XrResult result;
    } *params = args;
    XrSwapchainImageAcquireInfo *acquireInfo_host = NULL;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->swapchain), params->acquireInfo, params->index);

    init_conversion_context(ctx);
    if (params->acquireInfo)
    {
        acquireInfo_host = conversion_context_alloc(ctx, sizeof(*acquireInfo_host));
        convert_XrSwapchainImageAcquireInfo_win32_to_host((const XrSwapchainImageAcquireInfo32 *)(uintptr_t)UlongToPtr(params->acquireInfo), acquireInfo_host);
    }
    params->result = g_xr_host_instance_dispatch_table.p_xrAcquireSwapchainImage(wine_swapchain_from_handle(params->swapchain)->host_swapchain, acquireInfo_host, (uint32_t *)(uintptr_t)UlongToPtr(params->index));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrAcquireSwapchainImage(void *args)
{
    struct xrAcquireSwapchainImage_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->swapchain), params->acquireInfo, params->index);

    params->result = g_xr_host_instance_dispatch_table.p_xrAcquireSwapchainImage(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->acquireInfo, params->index);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrAllocateWorldMeshBufferML(void *args)
{
    struct
    {
        XrWorldMeshDetectorML detector;
        PTR32 size;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrWorldMeshBufferSizeML size_host;
    XrWorldMeshBufferML buffer_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->detector), params->size, params->buffer);

    convert_XrWorldMeshBufferSizeML_win32_to_host((const XrWorldMeshBufferSizeML32 *)(uintptr_t)UlongToPtr(params->size), &size_host);
    convert_XrWorldMeshBufferML_win32_to_host((XrWorldMeshBufferML32 *)(uintptr_t)UlongToPtr(params->buffer), &buffer_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrAllocateWorldMeshBufferML(params->detector, &size_host, &buffer_host);
    convert_XrWorldMeshBufferML_host_to_win32(&buffer_host, (XrWorldMeshBufferML32 *)(XrWorldMeshBufferML32 *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrAllocateWorldMeshBufferML(void *args)
{
    struct xrAllocateWorldMeshBufferML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->detector), params->size, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrAllocateWorldMeshBufferML(params->detector, params->size, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrApplyForceFeedbackCurlMNDX(void *args)
{
    struct
    {
        XrHandTrackerEXT handTracker;
        PTR32 locations;
        XrResult result;
    } *params = args;
    XrForceFeedbackCurlApplyLocationsMNDX locations_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->handTracker), params->locations);

    convert_XrForceFeedbackCurlApplyLocationsMNDX_win32_to_host((const XrForceFeedbackCurlApplyLocationsMNDX32 *)(uintptr_t)UlongToPtr(params->locations), &locations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrApplyForceFeedbackCurlMNDX(params->handTracker, &locations_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrApplyForceFeedbackCurlMNDX(void *args)
{
    struct xrApplyForceFeedbackCurlMNDX_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->handTracker), params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrApplyForceFeedbackCurlMNDX(params->handTracker, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrApplyHapticFeedback(void *args)
{
    struct
    {
        XrSession session;
        PTR32 hapticActionInfo;
        PTR32 hapticFeedback;
        XrResult result;
    } *params = args;
    XrHapticActionInfo hapticActionInfo_host;
    XrHapticBaseHeader hapticFeedback_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->hapticActionInfo, params->hapticFeedback);

    convert_XrHapticActionInfo_win32_to_host((const XrHapticActionInfo32 *)(uintptr_t)UlongToPtr(params->hapticActionInfo), &hapticActionInfo_host);
    convert_XrHapticBaseHeader_win32_to_host((const XrHapticBaseHeader32 *)(uintptr_t)UlongToPtr(params->hapticFeedback), &hapticFeedback_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrApplyHapticFeedback(wine_session_from_handle(params->session)->host_session, &hapticActionInfo_host, &hapticFeedback_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrApplyHapticFeedback(void *args)
{
    struct xrApplyHapticFeedback_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->hapticActionInfo, params->hapticFeedback);

    params->result = g_xr_host_instance_dispatch_table.p_xrApplyHapticFeedback(wine_session_from_handle(params->session)->host_session, params->hapticActionInfo, params->hapticFeedback);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrAttachSessionActionSets(void *args)
{
    struct
    {
        XrSession session;
        PTR32 attachInfo;
        XrResult result;
    } *params = args;
    XrSessionActionSetsAttachInfo attachInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->attachInfo);

    init_conversion_context(ctx);
    convert_XrSessionActionSetsAttachInfo_win32_to_host(ctx, (const XrSessionActionSetsAttachInfo32 *)(uintptr_t)UlongToPtr(params->attachInfo), &attachInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrAttachSessionActionSets(wine_session_from_handle(params->session)->host_session, &attachInfo_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrAttachSessionActionSets(void *args)
{
    struct xrAttachSessionActionSets_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->attachInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrAttachSessionActionSets(wine_session_from_handle(params->session)->host_session, params->attachInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrBeginFrame(void *args)
{
    struct
    {
        XrSession session;
        PTR32 frameBeginInfo;
        XrResult result;
    } *params = args;
    XrFrameBeginInfo *frameBeginInfo_host = NULL;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->frameBeginInfo);

    init_conversion_context(ctx);
    if (params->frameBeginInfo)
    {
        frameBeginInfo_host = conversion_context_alloc(ctx, sizeof(*frameBeginInfo_host));
        convert_XrFrameBeginInfo_win32_to_host((const XrFrameBeginInfo32 *)(uintptr_t)UlongToPtr(params->frameBeginInfo), frameBeginInfo_host);
    }
    params->result = g_xr_host_instance_dispatch_table.p_xrBeginFrame(wine_session_from_handle(params->session)->host_session, frameBeginInfo_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrBeginFrame(void *args)
{
    struct xrBeginFrame_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->frameBeginInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrBeginFrame(wine_session_from_handle(params->session)->host_session, params->frameBeginInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrBeginPlaneDetectionEXT(void *args)
{
    struct
    {
        XrPlaneDetectorEXT planeDetector;
        PTR32 beginInfo;
        XrResult result;
    } *params = args;
    XrPlaneDetectorBeginInfoEXT beginInfo_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->planeDetector), params->beginInfo);

    convert_XrPlaneDetectorBeginInfoEXT_win32_to_host((const XrPlaneDetectorBeginInfoEXT32 *)(uintptr_t)UlongToPtr(params->beginInfo), &beginInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrBeginPlaneDetectionEXT(params->planeDetector, &beginInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrBeginPlaneDetectionEXT(void *args)
{
    struct xrBeginPlaneDetectionEXT_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->planeDetector), params->beginInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrBeginPlaneDetectionEXT(params->planeDetector, params->beginInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrBeginSession(void *args)
{
    struct
    {
        XrSession session;
        PTR32 beginInfo;
        XrResult result;
    } *params = args;
    XrSessionBeginInfo beginInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->beginInfo);

    init_conversion_context(ctx);
    convert_XrSessionBeginInfo_win32_to_host(ctx, (const XrSessionBeginInfo32 *)(uintptr_t)UlongToPtr(params->beginInfo), &beginInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrBeginSession(wine_session_from_handle(params->session)->host_session, &beginInfo_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrBeginSession(void *args)
{
    struct xrBeginSession_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->beginInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrBeginSession(wine_session_from_handle(params->session)->host_session, params->beginInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCancelFutureEXT(void *args)
{
    struct
    {
        XrInstance instance;
        PTR32 cancelInfo;
        XrResult result;
    } *params = args;
    XrFutureCancelInfoEXT cancelInfo_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->instance), params->cancelInfo);

    convert_XrFutureCancelInfoEXT_win32_to_host((const XrFutureCancelInfoEXT32 *)(uintptr_t)UlongToPtr(params->cancelInfo), &cancelInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCancelFutureEXT(wine_instance_from_handle(params->instance)->host_instance, &cancelInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCancelFutureEXT(void *args)
{
    struct xrCancelFutureEXT_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->instance), params->cancelInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrCancelFutureEXT(wine_instance_from_handle(params->instance)->host_instance, params->cancelInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCaptureSceneAsyncBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        PTR32 info;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSceneCaptureInfoBD info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->provider), params->info, params->future);

    convert_XrSceneCaptureInfoBD_win32_to_host((const XrSceneCaptureInfoBD32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCaptureSceneAsyncBD(params->provider, &info_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCaptureSceneAsyncBD(void *args)
{
    struct xrCaptureSceneAsyncBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->provider), params->info, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrCaptureSceneAsyncBD(params->provider, params->info, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCaptureSceneCompleteBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrFutureCompletionEXT completion_host;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->provider), params->future, params->completion);

    convert_XrFutureCompletionEXT_win32_to_host((XrFutureCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCaptureSceneCompleteBD(params->provider, params->future, &completion_host);
    convert_XrFutureCompletionEXT_host_to_win32(&completion_host, (XrFutureCompletionEXT32 *)(XrFutureCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCaptureSceneCompleteBD(void *args)
{
    struct xrCaptureSceneCompleteBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->provider), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrCaptureSceneCompleteBD(params->provider, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrChangeVirtualKeyboardTextContextMETA(void *args)
{
    struct
    {
        XrVirtualKeyboardMETA keyboard;
        PTR32 changeInfo;
        XrResult result;
    } *params = args;
    XrVirtualKeyboardTextContextChangeInfoMETA changeInfo_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->keyboard), params->changeInfo);

    convert_XrVirtualKeyboardTextContextChangeInfoMETA_win32_to_host((const XrVirtualKeyboardTextContextChangeInfoMETA32 *)(uintptr_t)UlongToPtr(params->changeInfo), &changeInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrChangeVirtualKeyboardTextContextMETA(params->keyboard, &changeInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrChangeVirtualKeyboardTextContextMETA(void *args)
{
    struct xrChangeVirtualKeyboardTextContextMETA_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->keyboard), params->changeInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrChangeVirtualKeyboardTextContextMETA(params->keyboard, params->changeInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrClearSpatialAnchorStoreMSFT(void *args)
{
    struct
    {
        XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->spatialAnchorStore));

    params->result = g_xr_host_instance_dispatch_table.p_xrClearSpatialAnchorStoreMSFT(params->spatialAnchorStore);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrClearSpatialAnchorStoreMSFT(void *args)
{
    struct xrClearSpatialAnchorStoreMSFT_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->spatialAnchorStore));

    params->result = g_xr_host_instance_dispatch_table.p_xrClearSpatialAnchorStoreMSFT(params->spatialAnchorStore);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrComputeNewSceneMSFT(void *args)
{
    struct
    {
        XrSceneObserverMSFT sceneObserver;
        PTR32 computeInfo;
        XrResult result;
    } *params = args;
    XrNewSceneComputeInfoMSFT computeInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->sceneObserver), params->computeInfo);

    init_conversion_context(ctx);
    convert_XrNewSceneComputeInfoMSFT_win32_to_host(ctx, (const XrNewSceneComputeInfoMSFT32 *)(uintptr_t)UlongToPtr(params->computeInfo), &computeInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrComputeNewSceneMSFT(params->sceneObserver, &computeInfo_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrComputeNewSceneMSFT(void *args)
{
    struct xrComputeNewSceneMSFT_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->sceneObserver), params->computeInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrComputeNewSceneMSFT(params->sceneObserver, params->computeInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateAction(void *args)
{
    struct
    {
        XrActionSet actionSet;
        PTR32 createInfo;
        PTR32 action;
        XrResult result;
    } *params = args;
    XrActionCreateInfo createInfo_host;
    XrAction action_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->actionSet), params->createInfo, params->action);

    convert_XrActionCreateInfo_win32_to_host((const XrActionCreateInfo32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    action_host = (XrAction)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->action));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateAction(params->actionSet, &createInfo_host, &action_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->action) = PtrToUlong(action_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateAction(void *args)
{
    struct xrCreateAction_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->actionSet), params->createInfo, params->action);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateAction(params->actionSet, params->createInfo, params->action);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateActionSet(void *args)
{
    struct
    {
        XrInstance instance;
        PTR32 createInfo;
        PTR32 actionSet;
        XrResult result;
    } *params = args;
    XrActionSetCreateInfo createInfo_host;
    XrActionSet actionSet_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->instance), params->createInfo, params->actionSet);

    convert_XrActionSetCreateInfo_win32_to_host((const XrActionSetCreateInfo32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    actionSet_host = (XrActionSet)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->actionSet));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateActionSet(wine_instance_from_handle(params->instance)->host_instance, &createInfo_host, &actionSet_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->actionSet) = PtrToUlong(actionSet_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateActionSet(void *args)
{
    struct xrCreateActionSet_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->instance), params->createInfo, params->actionSet);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateActionSet(wine_instance_from_handle(params->instance)->host_instance, params->createInfo, params->actionSet);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateActionSpace(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrActionSpaceCreateInfo createInfo_host;
    XrSpace space_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->space);

    convert_XrActionSpaceCreateInfo_win32_to_host((const XrActionSpaceCreateInfo32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = (XrSpace)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateActionSpace(wine_session_from_handle(params->session)->host_session, &createInfo_host, &space_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateActionSpace(void *args)
{
    struct xrCreateActionSpace_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateActionSpace(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateAnchorSpaceANDROID(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 anchorOutput;
        XrResult result;
    } *params = args;
    XrAnchorSpaceCreateInfoANDROID createInfo_host;
    XrSpace anchorOutput_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->anchorOutput);

    convert_XrAnchorSpaceCreateInfoANDROID_win32_to_host((const XrAnchorSpaceCreateInfoANDROID32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    anchorOutput_host = (XrSpace)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->anchorOutput));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateAnchorSpaceANDROID(wine_session_from_handle(params->session)->host_session, &createInfo_host, &anchorOutput_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->anchorOutput) = PtrToUlong(anchorOutput_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateAnchorSpaceANDROID(void *args)
{
    struct xrCreateAnchorSpaceANDROID_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->anchorOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateAnchorSpaceANDROID(wine_session_from_handle(params->session)->host_session, params->createInfo, params->anchorOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateAnchorSpaceBD(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrAnchorSpaceCreateInfoBD createInfo_host;
    XrSpace space_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->space);

    convert_XrAnchorSpaceCreateInfoBD_win32_to_host((const XrAnchorSpaceCreateInfoBD32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = (XrSpace)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateAnchorSpaceBD(wine_session_from_handle(params->session)->host_session, &createInfo_host, &space_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateAnchorSpaceBD(void *args)
{
    struct xrCreateAnchorSpaceBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateAnchorSpaceBD(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateBodyTrackerBD(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 bodyTracker;
        XrResult result;
    } *params = args;
    XrBodyTrackerCreateInfoBD createInfo_host;
    XrBodyTrackerBD bodyTracker_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->bodyTracker);

    convert_XrBodyTrackerCreateInfoBD_win32_to_host((const XrBodyTrackerCreateInfoBD32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    bodyTracker_host = (XrBodyTrackerBD)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->bodyTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateBodyTrackerBD(wine_session_from_handle(params->session)->host_session, &createInfo_host, &bodyTracker_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->bodyTracker) = PtrToUlong(bodyTracker_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateBodyTrackerBD(void *args)
{
    struct xrCreateBodyTrackerBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->bodyTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateBodyTrackerBD(wine_session_from_handle(params->session)->host_session, params->createInfo, params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateBodyTrackerFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 bodyTracker;
        XrResult result;
    } *params = args;
    XrBodyTrackerCreateInfoFB createInfo_host;
    XrBodyTrackerFB bodyTracker_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->bodyTracker);

    convert_XrBodyTrackerCreateInfoFB_win32_to_host((const XrBodyTrackerCreateInfoFB32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    bodyTracker_host = (XrBodyTrackerFB)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->bodyTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateBodyTrackerFB(wine_session_from_handle(params->session)->host_session, &createInfo_host, &bodyTracker_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->bodyTracker) = PtrToUlong(bodyTracker_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateBodyTrackerFB(void *args)
{
    struct xrCreateBodyTrackerFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->bodyTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateBodyTrackerFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateBodyTrackerHTC(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 bodyTracker;
        XrResult result;
    } *params = args;
    XrBodyTrackerCreateInfoHTC createInfo_host;
    XrBodyTrackerHTC bodyTracker_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->bodyTracker);

    convert_XrBodyTrackerCreateInfoHTC_win32_to_host((const XrBodyTrackerCreateInfoHTC32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    bodyTracker_host = (XrBodyTrackerHTC)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->bodyTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateBodyTrackerHTC(wine_session_from_handle(params->session)->host_session, &createInfo_host, &bodyTracker_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->bodyTracker) = PtrToUlong(bodyTracker_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateBodyTrackerHTC(void *args)
{
    struct xrCreateBodyTrackerHTC_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->bodyTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateBodyTrackerHTC(wine_session_from_handle(params->session)->host_session, params->createInfo, params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateDeviceAnchorPersistenceANDROID(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 outHandle;
        XrResult result;
    } *params = args;
    XrDeviceAnchorPersistenceCreateInfoANDROID createInfo_host;
    XrDeviceAnchorPersistenceANDROID outHandle_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->outHandle);

    convert_XrDeviceAnchorPersistenceCreateInfoANDROID_win32_to_host((const XrDeviceAnchorPersistenceCreateInfoANDROID32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    outHandle_host = (XrDeviceAnchorPersistenceANDROID)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->outHandle));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateDeviceAnchorPersistenceANDROID(wine_session_from_handle(params->session)->host_session, &createInfo_host, &outHandle_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->outHandle) = PtrToUlong(outHandle_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateDeviceAnchorPersistenceANDROID(void *args)
{
    struct xrCreateDeviceAnchorPersistenceANDROID_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->outHandle);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateDeviceAnchorPersistenceANDROID(wine_session_from_handle(params->session)->host_session, params->createInfo, params->outHandle);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateEnvironmentDepthProviderMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 environmentDepthProvider;
        XrResult result;
    } *params = args;
    XrEnvironmentDepthProviderCreateInfoMETA createInfo_host;
    XrEnvironmentDepthProviderMETA environmentDepthProvider_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->environmentDepthProvider);

    convert_XrEnvironmentDepthProviderCreateInfoMETA_win32_to_host((const XrEnvironmentDepthProviderCreateInfoMETA32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    environmentDepthProvider_host = (XrEnvironmentDepthProviderMETA)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->environmentDepthProvider));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateEnvironmentDepthProviderMETA(wine_session_from_handle(params->session)->host_session, &createInfo_host, &environmentDepthProvider_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->environmentDepthProvider) = PtrToUlong(environmentDepthProvider_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateEnvironmentDepthProviderMETA(void *args)
{
    struct xrCreateEnvironmentDepthProviderMETA_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->environmentDepthProvider);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateEnvironmentDepthProviderMETA(wine_session_from_handle(params->session)->host_session, params->createInfo, params->environmentDepthProvider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateEnvironmentDepthSwapchainMETA(void *args)
{
    struct
    {
        XrEnvironmentDepthProviderMETA environmentDepthProvider;
        PTR32 createInfo;
        PTR32 swapchain;
        XrResult result;
    } *params = args;
    XrEnvironmentDepthSwapchainCreateInfoMETA createInfo_host;
    XrEnvironmentDepthSwapchainMETA swapchain_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->environmentDepthProvider), params->createInfo, params->swapchain);

    convert_XrEnvironmentDepthSwapchainCreateInfoMETA_win32_to_host((const XrEnvironmentDepthSwapchainCreateInfoMETA32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    swapchain_host = (XrEnvironmentDepthSwapchainMETA)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->swapchain));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateEnvironmentDepthSwapchainMETA(params->environmentDepthProvider, &createInfo_host, &swapchain_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->swapchain) = PtrToUlong(swapchain_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateEnvironmentDepthSwapchainMETA(void *args)
{
    struct xrCreateEnvironmentDepthSwapchainMETA_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->environmentDepthProvider), params->createInfo, params->swapchain);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateEnvironmentDepthSwapchainMETA(params->environmentDepthProvider, params->createInfo, params->swapchain);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateExportedLocalizationMapML(void *args)
{
    struct
    {
        XrSession session;
        PTR32 mapUuid;
        PTR32 map;
        XrResult result;
    } *params = args;
    XrExportedLocalizationMapML map_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->mapUuid, params->map);

    map_host = (XrExportedLocalizationMapML)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->map));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateExportedLocalizationMapML(wine_session_from_handle(params->session)->host_session, (const XrUuidEXT *)(uintptr_t)UlongToPtr(params->mapUuid), &map_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->map) = PtrToUlong(map_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateExportedLocalizationMapML(void *args)
{
    struct xrCreateExportedLocalizationMapML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->mapUuid, params->map);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateExportedLocalizationMapML(wine_session_from_handle(params->session)->host_session, params->mapUuid, params->map);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateEyeTrackerFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 eyeTracker;
        XrResult result;
    } *params = args;
    XrEyeTrackerCreateInfoFB createInfo_host;
    XrEyeTrackerFB eyeTracker_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->eyeTracker);

    convert_XrEyeTrackerCreateInfoFB_win32_to_host((const XrEyeTrackerCreateInfoFB32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    eyeTracker_host = (XrEyeTrackerFB)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->eyeTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateEyeTrackerFB(wine_session_from_handle(params->session)->host_session, &createInfo_host, &eyeTracker_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->eyeTracker) = PtrToUlong(eyeTracker_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateEyeTrackerFB(void *args)
{
    struct xrCreateEyeTrackerFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->eyeTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateEyeTrackerFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->eyeTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateFaceTracker2FB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 faceTracker;
        XrResult result;
    } *params = args;
    XrFaceTrackerCreateInfo2FB createInfo_host;
    XrFaceTracker2FB faceTracker_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->faceTracker);

    convert_XrFaceTrackerCreateInfo2FB_win32_to_host((const XrFaceTrackerCreateInfo2FB32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    faceTracker_host = (XrFaceTracker2FB)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->faceTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFaceTracker2FB(wine_session_from_handle(params->session)->host_session, &createInfo_host, &faceTracker_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->faceTracker) = PtrToUlong(faceTracker_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateFaceTracker2FB(void *args)
{
    struct xrCreateFaceTracker2FB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->faceTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFaceTracker2FB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->faceTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateFaceTrackerFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 faceTracker;
        XrResult result;
    } *params = args;
    XrFaceTrackerCreateInfoFB createInfo_host;
    XrFaceTrackerFB faceTracker_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->faceTracker);

    convert_XrFaceTrackerCreateInfoFB_win32_to_host((const XrFaceTrackerCreateInfoFB32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    faceTracker_host = (XrFaceTrackerFB)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->faceTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFaceTrackerFB(wine_session_from_handle(params->session)->host_session, &createInfo_host, &faceTracker_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->faceTracker) = PtrToUlong(faceTracker_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateFaceTrackerFB(void *args)
{
    struct xrCreateFaceTrackerFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->faceTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFaceTrackerFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->faceTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateFacialExpressionClientML(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 facialExpressionClient;
        XrResult result;
    } *params = args;
    XrFacialExpressionClientCreateInfoML createInfo_host;
    XrFacialExpressionClientML facialExpressionClient_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->facialExpressionClient);

    convert_XrFacialExpressionClientCreateInfoML_win32_to_host((const XrFacialExpressionClientCreateInfoML32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    facialExpressionClient_host = (XrFacialExpressionClientML)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->facialExpressionClient));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFacialExpressionClientML(wine_session_from_handle(params->session)->host_session, &createInfo_host, &facialExpressionClient_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->facialExpressionClient) = PtrToUlong(facialExpressionClient_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateFacialExpressionClientML(void *args)
{
    struct xrCreateFacialExpressionClientML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->facialExpressionClient);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFacialExpressionClientML(wine_session_from_handle(params->session)->host_session, params->createInfo, params->facialExpressionClient);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateFacialTrackerHTC(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 facialTracker;
        XrResult result;
    } *params = args;
    XrFacialTrackerCreateInfoHTC createInfo_host;
    XrFacialTrackerHTC facialTracker_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->facialTracker);

    convert_XrFacialTrackerCreateInfoHTC_win32_to_host((const XrFacialTrackerCreateInfoHTC32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    facialTracker_host = (XrFacialTrackerHTC)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->facialTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFacialTrackerHTC(wine_session_from_handle(params->session)->host_session, &createInfo_host, &facialTracker_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->facialTracker) = PtrToUlong(facialTracker_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateFacialTrackerHTC(void *args)
{
    struct xrCreateFacialTrackerHTC_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->facialTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFacialTrackerHTC(wine_session_from_handle(params->session)->host_session, params->createInfo, params->facialTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateFoveationProfileFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 profile;
        XrResult result;
    } *params = args;
    XrFoveationProfileCreateInfoFB createInfo_host;
    XrFoveationProfileFB profile_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->profile);

    init_conversion_context(ctx);
    convert_XrFoveationProfileCreateInfoFB_win32_to_host(ctx, (const XrFoveationProfileCreateInfoFB32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    profile_host = (XrFoveationProfileFB)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->profile));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFoveationProfileFB(wine_session_from_handle(params->session)->host_session, &createInfo_host, &profile_host);
    convert_XrFoveationProfileCreateInfoFB_host_to_win32(&createInfo_host, (XrFoveationProfileCreateInfoFB32 *)(const XrFoveationProfileCreateInfoFB32 *)(uintptr_t)UlongToPtr(params->createInfo));
    *(PTR32 *)(uintptr_t)UlongToPtr(params->profile) = PtrToUlong(profile_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateFoveationProfileFB(void *args)
{
    struct xrCreateFoveationProfileFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->profile);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateFoveationProfileFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->profile);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateGeometryInstanceFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 outGeometryInstance;
        XrResult result;
    } *params = args;
    XrGeometryInstanceCreateInfoFB createInfo_host;
    XrGeometryInstanceFB outGeometryInstance_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->outGeometryInstance);

    convert_XrGeometryInstanceCreateInfoFB_win32_to_host((const XrGeometryInstanceCreateInfoFB32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    outGeometryInstance_host = (XrGeometryInstanceFB)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->outGeometryInstance));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateGeometryInstanceFB(wine_session_from_handle(params->session)->host_session, &createInfo_host, &outGeometryInstance_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->outGeometryInstance) = PtrToUlong(outGeometryInstance_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateGeometryInstanceFB(void *args)
{
    struct xrCreateGeometryInstanceFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->outGeometryInstance);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateGeometryInstanceFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->outGeometryInstance);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateHandMeshSpaceMSFT(void *args)
{
    struct
    {
        XrHandTrackerEXT handTracker;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrHandMeshSpaceCreateInfoMSFT createInfo_host;
    XrSpace space_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->handTracker), params->createInfo, params->space);

    convert_XrHandMeshSpaceCreateInfoMSFT_win32_to_host((const XrHandMeshSpaceCreateInfoMSFT32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = (XrSpace)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateHandMeshSpaceMSFT(params->handTracker, &createInfo_host, &space_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateHandMeshSpaceMSFT(void *args)
{
    struct xrCreateHandMeshSpaceMSFT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->handTracker), params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateHandMeshSpaceMSFT(params->handTracker, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateHandTrackerEXT(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 handTracker;
        XrResult result;
    } *params = args;
    XrHandTrackerCreateInfoEXT createInfo_host;
    XrHandTrackerEXT handTracker_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->handTracker);

    init_conversion_context(ctx);
    convert_XrHandTrackerCreateInfoEXT_win32_to_host(ctx, (const XrHandTrackerCreateInfoEXT32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    handTracker_host = (XrHandTrackerEXT)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->handTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateHandTrackerEXT(wine_session_from_handle(params->session)->host_session, &createInfo_host, &handTracker_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->handTracker) = PtrToUlong(handTracker_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateHandTrackerEXT(void *args)
{
    struct xrCreateHandTrackerEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->handTracker);

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
    convert_XrInstanceCreateInfo_win32_to_host(ctx, (const XrInstanceCreateInfo32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    instance_host = (XrInstance)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->instance));
    params->result = wine_xrCreateInstance(&createInfo_host, &instance_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->instance) = PtrToUlong(instance_host);
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
        XrSession session;
        PTR32 createInfo;
        PTR32 keyboardSpace;
        XrResult result;
    } *params = args;
    XrKeyboardSpaceCreateInfoFB createInfo_host;
    XrSpace keyboardSpace_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->keyboardSpace);

    convert_XrKeyboardSpaceCreateInfoFB_win32_to_host((const XrKeyboardSpaceCreateInfoFB32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    keyboardSpace_host = (XrSpace)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->keyboardSpace));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateKeyboardSpaceFB(wine_session_from_handle(params->session)->host_session, &createInfo_host, &keyboardSpace_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->keyboardSpace) = PtrToUlong(keyboardSpace_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateKeyboardSpaceFB(void *args)
{
    struct xrCreateKeyboardSpaceFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->keyboardSpace);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateKeyboardSpaceFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->keyboardSpace);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateMarkerDetectorML(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 markerDetector;
        XrResult result;
    } *params = args;
    XrMarkerDetectorCreateInfoML createInfo_host;
    XrMarkerDetectorML markerDetector_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->markerDetector);

    init_conversion_context(ctx);
    convert_XrMarkerDetectorCreateInfoML_win32_to_host(ctx, (const XrMarkerDetectorCreateInfoML32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    markerDetector_host = (XrMarkerDetectorML)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->markerDetector));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateMarkerDetectorML(wine_session_from_handle(params->session)->host_session, &createInfo_host, &markerDetector_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->markerDetector) = PtrToUlong(markerDetector_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateMarkerDetectorML(void *args)
{
    struct xrCreateMarkerDetectorML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->markerDetector);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateMarkerDetectorML(wine_session_from_handle(params->session)->host_session, params->createInfo, params->markerDetector);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateMarkerSpaceML(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrMarkerSpaceCreateInfoML createInfo_host;
    XrSpace space_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->space);

    convert_XrMarkerSpaceCreateInfoML_win32_to_host((const XrMarkerSpaceCreateInfoML32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = (XrSpace)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateMarkerSpaceML(wine_session_from_handle(params->session)->host_session, &createInfo_host, &space_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateMarkerSpaceML(void *args)
{
    struct xrCreateMarkerSpaceML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateMarkerSpaceML(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateMarkerSpaceVARJO(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrMarkerSpaceCreateInfoVARJO createInfo_host;
    XrSpace space_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->space);

    convert_XrMarkerSpaceCreateInfoVARJO_win32_to_host((const XrMarkerSpaceCreateInfoVARJO32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = (XrSpace)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateMarkerSpaceVARJO(wine_session_from_handle(params->session)->host_session, &createInfo_host, &space_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateMarkerSpaceVARJO(void *args)
{
    struct xrCreateMarkerSpaceVARJO_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateMarkerSpaceVARJO(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreatePassthroughColorLutMETA(void *args)
{
    struct
    {
        XrPassthroughFB passthrough;
        PTR32 createInfo;
        PTR32 colorLut;
        XrResult result;
    } *params = args;
    XrPassthroughColorLutCreateInfoMETA createInfo_host;
    XrPassthroughColorLutMETA colorLut_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->passthrough), params->createInfo, params->colorLut);

    convert_XrPassthroughColorLutCreateInfoMETA_win32_to_host((const XrPassthroughColorLutCreateInfoMETA32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    colorLut_host = (XrPassthroughColorLutMETA)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->colorLut));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughColorLutMETA(params->passthrough, &createInfo_host, &colorLut_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->colorLut) = PtrToUlong(colorLut_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePassthroughColorLutMETA(void *args)
{
    struct xrCreatePassthroughColorLutMETA_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->passthrough), params->createInfo, params->colorLut);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughColorLutMETA(params->passthrough, params->createInfo, params->colorLut);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreatePassthroughFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 outPassthrough;
        XrResult result;
    } *params = args;
    XrPassthroughCreateInfoFB createInfo_host;
    XrPassthroughFB outPassthrough_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->outPassthrough);

    convert_XrPassthroughCreateInfoFB_win32_to_host((const XrPassthroughCreateInfoFB32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    outPassthrough_host = (XrPassthroughFB)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->outPassthrough));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughFB(wine_session_from_handle(params->session)->host_session, &createInfo_host, &outPassthrough_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->outPassthrough) = PtrToUlong(outPassthrough_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePassthroughFB(void *args)
{
    struct xrCreatePassthroughFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->outPassthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->outPassthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreatePassthroughHTC(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 passthrough;
        XrResult result;
    } *params = args;
    XrPassthroughCreateInfoHTC createInfo_host;
    XrPassthroughHTC passthrough_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->passthrough);

    convert_XrPassthroughCreateInfoHTC_win32_to_host((const XrPassthroughCreateInfoHTC32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    passthrough_host = (XrPassthroughHTC)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->passthrough));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughHTC(wine_session_from_handle(params->session)->host_session, &createInfo_host, &passthrough_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->passthrough) = PtrToUlong(passthrough_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePassthroughHTC(void *args)
{
    struct xrCreatePassthroughHTC_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->passthrough);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughHTC(wine_session_from_handle(params->session)->host_session, params->createInfo, params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreatePassthroughLayerFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 outLayer;
        XrResult result;
    } *params = args;
    XrPassthroughLayerCreateInfoFB createInfo_host;
    XrPassthroughLayerFB outLayer_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->outLayer);

    convert_XrPassthroughLayerCreateInfoFB_win32_to_host((const XrPassthroughLayerCreateInfoFB32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    outLayer_host = (XrPassthroughLayerFB)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->outLayer));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughLayerFB(wine_session_from_handle(params->session)->host_session, &createInfo_host, &outLayer_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->outLayer) = PtrToUlong(outLayer_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePassthroughLayerFB(void *args)
{
    struct xrCreatePassthroughLayerFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->outLayer);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePassthroughLayerFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->outLayer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreatePersistedAnchorSpaceANDROID(void *args)
{
    struct
    {
        XrDeviceAnchorPersistenceANDROID handle;
        PTR32 createInfo;
        PTR32 anchorOutput;
        XrResult result;
    } *params = args;
    XrPersistedAnchorSpaceCreateInfoANDROID createInfo_host;
    XrSpace anchorOutput_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->handle), params->createInfo, params->anchorOutput);

    convert_XrPersistedAnchorSpaceCreateInfoANDROID_win32_to_host((const XrPersistedAnchorSpaceCreateInfoANDROID32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    anchorOutput_host = (XrSpace)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->anchorOutput));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePersistedAnchorSpaceANDROID(params->handle, &createInfo_host, &anchorOutput_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->anchorOutput) = PtrToUlong(anchorOutput_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePersistedAnchorSpaceANDROID(void *args)
{
    struct xrCreatePersistedAnchorSpaceANDROID_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->handle), params->createInfo, params->anchorOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePersistedAnchorSpaceANDROID(params->handle, params->createInfo, params->anchorOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreatePlaneDetectorEXT(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 planeDetector;
        XrResult result;
    } *params = args;
    XrPlaneDetectorCreateInfoEXT createInfo_host;
    XrPlaneDetectorEXT planeDetector_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->planeDetector);

    convert_XrPlaneDetectorCreateInfoEXT_win32_to_host((const XrPlaneDetectorCreateInfoEXT32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    planeDetector_host = (XrPlaneDetectorEXT)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->planeDetector));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePlaneDetectorEXT(wine_session_from_handle(params->session)->host_session, &createInfo_host, &planeDetector_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->planeDetector) = PtrToUlong(planeDetector_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreatePlaneDetectorEXT(void *args)
{
    struct xrCreatePlaneDetectorEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->planeDetector);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreatePlaneDetectorEXT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->planeDetector);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateReferenceSpace(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrReferenceSpaceCreateInfo createInfo_host;
    XrSpace space_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->space);

    convert_XrReferenceSpaceCreateInfo_win32_to_host((const XrReferenceSpaceCreateInfo32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = (XrSpace)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateReferenceSpace(wine_session_from_handle(params->session)->host_session, &createInfo_host, &space_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateReferenceSpace(void *args)
{
    struct xrCreateReferenceSpace_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateReferenceSpace(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateRenderModelAssetEXT(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 asset;
        XrResult result;
    } *params = args;
    XrRenderModelAssetCreateInfoEXT createInfo_host;
    XrRenderModelAssetEXT asset_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->asset);

    convert_XrRenderModelAssetCreateInfoEXT_win32_to_host((const XrRenderModelAssetCreateInfoEXT32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    asset_host = (XrRenderModelAssetEXT)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->asset));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateRenderModelAssetEXT(wine_session_from_handle(params->session)->host_session, &createInfo_host, &asset_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->asset) = PtrToUlong(asset_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateRenderModelAssetEXT(void *args)
{
    struct xrCreateRenderModelAssetEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->asset);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateRenderModelAssetEXT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->asset);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateRenderModelEXT(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 renderModel;
        XrResult result;
    } *params = args;
    XrRenderModelCreateInfoEXT createInfo_host;
    XrRenderModelEXT renderModel_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->renderModel);

    init_conversion_context(ctx);
    convert_XrRenderModelCreateInfoEXT_win32_to_host(ctx, (const XrRenderModelCreateInfoEXT32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    renderModel_host = (XrRenderModelEXT)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->renderModel));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateRenderModelEXT(wine_session_from_handle(params->session)->host_session, &createInfo_host, &renderModel_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->renderModel) = PtrToUlong(renderModel_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateRenderModelEXT(void *args)
{
    struct xrCreateRenderModelEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->renderModel);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateRenderModelEXT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->renderModel);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateRenderModelSpaceEXT(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrRenderModelSpaceCreateInfoEXT createInfo_host;
    XrSpace space_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->space);

    convert_XrRenderModelSpaceCreateInfoEXT_win32_to_host((const XrRenderModelSpaceCreateInfoEXT32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = (XrSpace)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateRenderModelSpaceEXT(wine_session_from_handle(params->session)->host_session, &createInfo_host, &space_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateRenderModelSpaceEXT(void *args)
{
    struct xrCreateRenderModelSpaceEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateRenderModelSpaceEXT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSceneMSFT(void *args)
{
    struct
    {
        XrSceneObserverMSFT sceneObserver;
        PTR32 createInfo;
        PTR32 scene;
        XrResult result;
    } *params = args;
    XrSceneCreateInfoMSFT *createInfo_host = NULL;
    XrSceneMSFT scene_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->sceneObserver), params->createInfo, params->scene);

    init_conversion_context(ctx);
    if (params->createInfo)
    {
        createInfo_host = conversion_context_alloc(ctx, sizeof(*createInfo_host));
        convert_XrSceneCreateInfoMSFT_win32_to_host((const XrSceneCreateInfoMSFT32 *)(uintptr_t)UlongToPtr(params->createInfo), createInfo_host);
    }
    scene_host = (XrSceneMSFT)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->scene));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSceneMSFT(params->sceneObserver, createInfo_host, &scene_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->scene) = PtrToUlong(scene_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSceneMSFT(void *args)
{
    struct xrCreateSceneMSFT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->sceneObserver), params->createInfo, params->scene);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSceneMSFT(params->sceneObserver, params->createInfo, params->scene);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSceneObserverMSFT(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 sceneObserver;
        XrResult result;
    } *params = args;
    XrSceneObserverCreateInfoMSFT *createInfo_host = NULL;
    XrSceneObserverMSFT sceneObserver_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->sceneObserver);

    init_conversion_context(ctx);
    if (params->createInfo)
    {
        createInfo_host = conversion_context_alloc(ctx, sizeof(*createInfo_host));
        convert_XrSceneObserverCreateInfoMSFT_win32_to_host((const XrSceneObserverCreateInfoMSFT32 *)(uintptr_t)UlongToPtr(params->createInfo), createInfo_host);
    }
    sceneObserver_host = (XrSceneObserverMSFT)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->sceneObserver));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSceneObserverMSFT(wine_session_from_handle(params->session)->host_session, createInfo_host, &sceneObserver_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->sceneObserver) = PtrToUlong(sceneObserver_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSceneObserverMSFT(void *args)
{
    struct xrCreateSceneObserverMSFT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->sceneObserver);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSceneObserverMSFT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->sceneObserver);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSenseDataProviderBD(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 provider;
        XrResult result;
    } *params = args;
    XrSenseDataProviderCreateInfoBD createInfo_host;
    XrSenseDataProviderBD provider_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->provider);

    init_conversion_context(ctx);
    convert_XrSenseDataProviderCreateInfoBD_win32_to_host(ctx, (const XrSenseDataProviderCreateInfoBD32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    provider_host = (XrSenseDataProviderBD)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->provider));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSenseDataProviderBD(wine_session_from_handle(params->session)->host_session, &createInfo_host, &provider_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->provider) = PtrToUlong(provider_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSenseDataProviderBD(void *args)
{
    struct xrCreateSenseDataProviderBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->provider);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSenseDataProviderBD(wine_session_from_handle(params->session)->host_session, params->createInfo, params->provider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSession(void *args)
{
    struct
    {
        XrInstance instance;
        PTR32 createInfo;
        PTR32 session;
        XrResult result;
    } *params = args;
    XrSessionCreateInfo createInfo_host;
    XrSession session_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->instance), params->createInfo, params->session);

    init_conversion_context(ctx);
    convert_XrSessionCreateInfo_win32_to_host(ctx, (const XrSessionCreateInfo32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    session_host = (XrSession)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->session));
    params->result = wine_xrCreateSession(params->instance, &createInfo_host, &session_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->session) = PtrToUlong(session_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSession(void *args)
{
    struct xrCreateSession_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->instance), params->createInfo, params->session);

    params->result = wine_xrCreateSession(params->instance, params->createInfo, params->session);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpaceUserFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 user;
        XrResult result;
    } *params = args;
    XrSpaceUserCreateInfoFB info_host;
    XrSpaceUserFB user_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->user);

    convert_XrSpaceUserCreateInfoFB_win32_to_host((const XrSpaceUserCreateInfoFB32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    user_host = (XrSpaceUserFB)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->user));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpaceUserFB(wine_session_from_handle(params->session)->host_session, &info_host, &user_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->user) = PtrToUlong(user_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpaceUserFB(void *args)
{
    struct xrCreateSpaceUserFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->user);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpaceUserFB(wine_session_from_handle(params->session)->host_session, params->info, params->user);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorAsyncBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        PTR32 info;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorCreateInfoBD info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->provider), params->info, params->future);

    convert_XrSpatialAnchorCreateInfoBD_win32_to_host((const XrSpatialAnchorCreateInfoBD32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorAsyncBD(params->provider, &info_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorAsyncBD(void *args)
{
    struct xrCreateSpatialAnchorAsyncBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->provider), params->info, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorAsyncBD(params->provider, params->info, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorCompleteBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrSpatialAnchorCreateCompletionBD completion_host;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->provider), params->future, params->completion);

    convert_XrSpatialAnchorCreateCompletionBD_win32_to_host((XrSpatialAnchorCreateCompletionBD32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorCompleteBD(params->provider, params->future, &completion_host);
    convert_XrSpatialAnchorCreateCompletionBD_host_to_win32(&completion_host, (XrSpatialAnchorCreateCompletionBD32 *)(XrSpatialAnchorCreateCompletionBD32 *)(uintptr_t)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorCompleteBD(void *args)
{
    struct xrCreateSpatialAnchorCompleteBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->provider), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorCompleteBD(params->provider, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorEXT(void *args)
{
    struct
    {
        XrSpatialContextEXT spatialContext;
        PTR32 createInfo;
        PTR32 anchorEntityId;
        PTR32 anchorEntity;
        XrResult result;
    } *params = args;
    XrSpatialAnchorCreateInfoEXT createInfo_host;
    XrSpatialEntityEXT anchorEntity_host;

    TRACE("0x%s, %#x, %#x, %#x\n", TRACE_HANDLE(params->spatialContext), params->createInfo, params->anchorEntityId, params->anchorEntity);

    convert_XrSpatialAnchorCreateInfoEXT_win32_to_host((const XrSpatialAnchorCreateInfoEXT32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    anchorEntity_host = (XrSpatialEntityEXT)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->anchorEntity));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorEXT(params->spatialContext, &createInfo_host, (XrSpatialEntityIdEXT *)(uintptr_t)UlongToPtr(params->anchorEntityId), &anchorEntity_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->anchorEntity) = PtrToUlong(anchorEntity_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorEXT(void *args)
{
    struct xrCreateSpatialAnchorEXT_params *params = args;

    TRACE("0x%s, %p, %p, %p\n", TRACE_HANDLE(params->spatialContext), params->createInfo, params->anchorEntityId, params->anchorEntity);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorEXT(params->spatialContext, params->createInfo, params->anchorEntityId, params->anchorEntity);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpatialAnchorCreateInfoFB info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    convert_XrSpatialAnchorCreateInfoFB_win32_to_host((const XrSpatialAnchorCreateInfoFB32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorFB(wine_session_from_handle(params->session)->host_session, &info_host, (XrAsyncRequestIdFB *)(uintptr_t)UlongToPtr(params->requestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorFB(void *args)
{
    struct xrCreateSpatialAnchorFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorFromPersistedNameMSFT(void *args)
{
    struct
    {
        XrSession session;
        PTR32 spatialAnchorCreateInfo;
        PTR32 spatialAnchor;
        XrResult result;
    } *params = args;
    XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT spatialAnchorCreateInfo_host;
    XrSpatialAnchorMSFT spatialAnchor_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->spatialAnchorCreateInfo, params->spatialAnchor);

    convert_XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT_win32_to_host((const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT32 *)(uintptr_t)UlongToPtr(params->spatialAnchorCreateInfo), &spatialAnchorCreateInfo_host);
    spatialAnchor_host = (XrSpatialAnchorMSFT)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->spatialAnchor));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorFromPersistedNameMSFT(wine_session_from_handle(params->session)->host_session, &spatialAnchorCreateInfo_host, &spatialAnchor_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->spatialAnchor) = PtrToUlong(spatialAnchor_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorFromPersistedNameMSFT(void *args)
{
    struct xrCreateSpatialAnchorFromPersistedNameMSFT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->spatialAnchorCreateInfo, params->spatialAnchor);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorFromPersistedNameMSFT(wine_session_from_handle(params->session)->host_session, params->spatialAnchorCreateInfo, params->spatialAnchor);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorHTC(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 anchor;
        XrResult result;
    } *params = args;
    XrSpatialAnchorCreateInfoHTC createInfo_host;
    XrSpace anchor_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->anchor);

    convert_XrSpatialAnchorCreateInfoHTC_win32_to_host((const XrSpatialAnchorCreateInfoHTC32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    anchor_host = (XrSpace)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->anchor));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorHTC(wine_session_from_handle(params->session)->host_session, &createInfo_host, &anchor_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->anchor) = PtrToUlong(anchor_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorHTC(void *args)
{
    struct xrCreateSpatialAnchorHTC_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->anchor);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorHTC(wine_session_from_handle(params->session)->host_session, params->createInfo, params->anchor);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorMSFT(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 anchor;
        XrResult result;
    } *params = args;
    XrSpatialAnchorCreateInfoMSFT createInfo_host;
    XrSpatialAnchorMSFT anchor_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->anchor);

    convert_XrSpatialAnchorCreateInfoMSFT_win32_to_host((const XrSpatialAnchorCreateInfoMSFT32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    anchor_host = (XrSpatialAnchorMSFT)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->anchor));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorMSFT(wine_session_from_handle(params->session)->host_session, &createInfo_host, &anchor_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->anchor) = PtrToUlong(anchor_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorMSFT(void *args)
{
    struct xrCreateSpatialAnchorMSFT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->anchor);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorMSFT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->anchor);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorSpaceMSFT(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrSpatialAnchorSpaceCreateInfoMSFT createInfo_host;
    XrSpace space_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->space);

    convert_XrSpatialAnchorSpaceCreateInfoMSFT_win32_to_host((const XrSpatialAnchorSpaceCreateInfoMSFT32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = (XrSpace)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorSpaceMSFT(wine_session_from_handle(params->session)->host_session, &createInfo_host, &space_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorSpaceMSFT(void *args)
{
    struct xrCreateSpatialAnchorSpaceMSFT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorSpaceMSFT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorStoreConnectionMSFT(void *args)
{
    struct
    {
        XrSession session;
        PTR32 spatialAnchorStore;
        XrResult result;
    } *params = args;
    XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->spatialAnchorStore);

    spatialAnchorStore_host = (XrSpatialAnchorStoreConnectionMSFT)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->spatialAnchorStore));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorStoreConnectionMSFT(wine_session_from_handle(params->session)->host_session, &spatialAnchorStore_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->spatialAnchorStore) = PtrToUlong(spatialAnchorStore_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorStoreConnectionMSFT(void *args)
{
    struct xrCreateSpatialAnchorStoreConnectionMSFT_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->spatialAnchorStore);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorStoreConnectionMSFT(wine_session_from_handle(params->session)->host_session, params->spatialAnchorStore);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorsAsyncML(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsCreateInfoBaseHeaderML createInfo_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->future);

    convert_XrSpatialAnchorsCreateInfoBaseHeaderML_win32_to_host((const XrSpatialAnchorsCreateInfoBaseHeaderML32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorsAsyncML(wine_session_from_handle(params->session)->host_session, &createInfo_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorsAsyncML(void *args)
{
    struct xrCreateSpatialAnchorsAsyncML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorsAsyncML(wine_session_from_handle(params->session)->host_session, params->createInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorsCompleteML(void *args)
{
    struct
    {
        XrSession session;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrCreateSpatialAnchorsCompletionML completion_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->session), params->future, params->completion);

    init_conversion_context(ctx);
    convert_XrCreateSpatialAnchorsCompletionML_win32_to_host(ctx, (XrCreateSpatialAnchorsCompletionML32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorsCompleteML(wine_session_from_handle(params->session)->host_session, params->future, &completion_host);
    convert_XrCreateSpatialAnchorsCompletionML_host_to_win32(&completion_host, (XrCreateSpatialAnchorsCompletionML32 *)(XrCreateSpatialAnchorsCompletionML32 *)(uintptr_t)UlongToPtr(params->completion));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorsCompleteML(void *args)
{
    struct xrCreateSpatialAnchorsCompleteML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorsCompleteML(wine_session_from_handle(params->session)->host_session, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialAnchorsStorageML(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 storage;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsCreateStorageInfoML createInfo_host;
    XrSpatialAnchorsStorageML storage_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->storage);

    convert_XrSpatialAnchorsCreateStorageInfoML_win32_to_host((const XrSpatialAnchorsCreateStorageInfoML32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    storage_host = (XrSpatialAnchorsStorageML)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->storage));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorsStorageML(wine_session_from_handle(params->session)->host_session, &createInfo_host, &storage_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->storage) = PtrToUlong(storage_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialAnchorsStorageML(void *args)
{
    struct xrCreateSpatialAnchorsStorageML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->storage);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialAnchorsStorageML(wine_session_from_handle(params->session)->host_session, params->createInfo, params->storage);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialContextAsyncEXT(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialContextCreateInfoEXT createInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->future);

    init_conversion_context(ctx);
    convert_XrSpatialContextCreateInfoEXT_win32_to_host(ctx, (const XrSpatialContextCreateInfoEXT32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialContextAsyncEXT(wine_session_from_handle(params->session)->host_session, &createInfo_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialContextAsyncEXT(void *args)
{
    struct xrCreateSpatialContextAsyncEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialContextAsyncEXT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialContextCompleteEXT(void *args)
{
    struct
    {
        XrSession session;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrCreateSpatialContextCompletionEXT completion_host;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->session), params->future, params->completion);

    convert_XrCreateSpatialContextCompletionEXT_win32_to_host((XrCreateSpatialContextCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialContextCompleteEXT(wine_session_from_handle(params->session)->host_session, params->future, &completion_host);
    convert_XrCreateSpatialContextCompletionEXT_host_to_win32(&completion_host, (XrCreateSpatialContextCompletionEXT32 *)(XrCreateSpatialContextCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialContextCompleteEXT(void *args)
{
    struct xrCreateSpatialContextCompleteEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialContextCompleteEXT(wine_session_from_handle(params->session)->host_session, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialDiscoverySnapshotAsyncEXT(void *args)
{
    struct
    {
        XrSpatialContextEXT spatialContext;
        PTR32 createInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialDiscoverySnapshotCreateInfoEXT createInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->spatialContext), params->createInfo, params->future);

    init_conversion_context(ctx);
    convert_XrSpatialDiscoverySnapshotCreateInfoEXT_win32_to_host(ctx, (const XrSpatialDiscoverySnapshotCreateInfoEXT32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialDiscoverySnapshotAsyncEXT(params->spatialContext, &createInfo_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialDiscoverySnapshotAsyncEXT(void *args)
{
    struct xrCreateSpatialDiscoverySnapshotAsyncEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->spatialContext), params->createInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialDiscoverySnapshotAsyncEXT(params->spatialContext, params->createInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialDiscoverySnapshotCompleteEXT(void *args)
{
    struct
    {
        XrSpatialContextEXT spatialContext;
        PTR32 createSnapshotCompletionInfo;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrCreateSpatialDiscoverySnapshotCompletionInfoEXT createSnapshotCompletionInfo_host;
    XrCreateSpatialDiscoverySnapshotCompletionEXT completion_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->spatialContext), params->createSnapshotCompletionInfo, params->completion);

    convert_XrCreateSpatialDiscoverySnapshotCompletionInfoEXT_win32_to_host((const XrCreateSpatialDiscoverySnapshotCompletionInfoEXT32 *)(uintptr_t)UlongToPtr(params->createSnapshotCompletionInfo), &createSnapshotCompletionInfo_host);
    convert_XrCreateSpatialDiscoverySnapshotCompletionEXT_win32_to_host((XrCreateSpatialDiscoverySnapshotCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialDiscoverySnapshotCompleteEXT(params->spatialContext, &createSnapshotCompletionInfo_host, &completion_host);
    convert_XrCreateSpatialDiscoverySnapshotCompletionEXT_host_to_win32(&completion_host, (XrCreateSpatialDiscoverySnapshotCompletionEXT32 *)(XrCreateSpatialDiscoverySnapshotCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialDiscoverySnapshotCompleteEXT(void *args)
{
    struct xrCreateSpatialDiscoverySnapshotCompleteEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->spatialContext), params->createSnapshotCompletionInfo, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialDiscoverySnapshotCompleteEXT(params->spatialContext, params->createSnapshotCompletionInfo, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialEntityAnchorBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        PTR32 createInfo;
        PTR32 anchor;
        XrResult result;
    } *params = args;
    XrSpatialEntityAnchorCreateInfoBD createInfo_host;
    XrAnchorBD anchor_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->provider), params->createInfo, params->anchor);

    convert_XrSpatialEntityAnchorCreateInfoBD_win32_to_host((const XrSpatialEntityAnchorCreateInfoBD32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    anchor_host = (XrAnchorBD)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->anchor));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialEntityAnchorBD(params->provider, &createInfo_host, &anchor_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->anchor) = PtrToUlong(anchor_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialEntityAnchorBD(void *args)
{
    struct xrCreateSpatialEntityAnchorBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->provider), params->createInfo, params->anchor);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialEntityAnchorBD(params->provider, params->createInfo, params->anchor);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialEntityFromIdEXT(void *args)
{
    struct
    {
        XrSpatialContextEXT spatialContext;
        PTR32 createInfo;
        PTR32 spatialEntity;
        XrResult result;
    } *params = args;
    XrSpatialEntityFromIdCreateInfoEXT createInfo_host;
    XrSpatialEntityEXT spatialEntity_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->spatialContext), params->createInfo, params->spatialEntity);

    convert_XrSpatialEntityFromIdCreateInfoEXT_win32_to_host((const XrSpatialEntityFromIdCreateInfoEXT32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    spatialEntity_host = (XrSpatialEntityEXT)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->spatialEntity));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialEntityFromIdEXT(params->spatialContext, &createInfo_host, &spatialEntity_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->spatialEntity) = PtrToUlong(spatialEntity_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialEntityFromIdEXT(void *args)
{
    struct xrCreateSpatialEntityFromIdEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->spatialContext), params->createInfo, params->spatialEntity);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialEntityFromIdEXT(params->spatialContext, params->createInfo, params->spatialEntity);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialGraphNodeSpaceMSFT(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 space;
        XrResult result;
    } *params = args;
    XrSpatialGraphNodeSpaceCreateInfoMSFT createInfo_host;
    XrSpace space_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->space);

    convert_XrSpatialGraphNodeSpaceCreateInfoMSFT_win32_to_host((const XrSpatialGraphNodeSpaceCreateInfoMSFT32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    space_host = (XrSpace)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->space));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialGraphNodeSpaceMSFT(wine_session_from_handle(params->session)->host_session, &createInfo_host, &space_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->space) = PtrToUlong(space_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialGraphNodeSpaceMSFT(void *args)
{
    struct xrCreateSpatialGraphNodeSpaceMSFT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->space);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialGraphNodeSpaceMSFT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialPersistenceContextAsyncEXT(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialPersistenceContextCreateInfoEXT createInfo_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->future);

    convert_XrSpatialPersistenceContextCreateInfoEXT_win32_to_host((const XrSpatialPersistenceContextCreateInfoEXT32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialPersistenceContextAsyncEXT(wine_session_from_handle(params->session)->host_session, &createInfo_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialPersistenceContextAsyncEXT(void *args)
{
    struct xrCreateSpatialPersistenceContextAsyncEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialPersistenceContextAsyncEXT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialPersistenceContextCompleteEXT(void *args)
{
    struct
    {
        XrSession session;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrCreateSpatialPersistenceContextCompletionEXT completion_host;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->session), params->future, params->completion);

    convert_XrCreateSpatialPersistenceContextCompletionEXT_win32_to_host((XrCreateSpatialPersistenceContextCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialPersistenceContextCompleteEXT(wine_session_from_handle(params->session)->host_session, params->future, &completion_host);
    convert_XrCreateSpatialPersistenceContextCompletionEXT_host_to_win32(&completion_host, (XrCreateSpatialPersistenceContextCompletionEXT32 *)(XrCreateSpatialPersistenceContextCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialPersistenceContextCompleteEXT(void *args)
{
    struct xrCreateSpatialPersistenceContextCompleteEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialPersistenceContextCompleteEXT(wine_session_from_handle(params->session)->host_session, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSpatialUpdateSnapshotEXT(void *args)
{
    struct
    {
        XrSpatialContextEXT spatialContext;
        PTR32 createInfo;
        PTR32 snapshot;
        XrResult result;
    } *params = args;
    XrSpatialUpdateSnapshotCreateInfoEXT createInfo_host;
    XrSpatialSnapshotEXT snapshot_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->spatialContext), params->createInfo, params->snapshot);

    init_conversion_context(ctx);
    convert_XrSpatialUpdateSnapshotCreateInfoEXT_win32_to_host(ctx, (const XrSpatialUpdateSnapshotCreateInfoEXT32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    snapshot_host = (XrSpatialSnapshotEXT)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->snapshot));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialUpdateSnapshotEXT(params->spatialContext, &createInfo_host, &snapshot_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->snapshot) = PtrToUlong(snapshot_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSpatialUpdateSnapshotEXT(void *args)
{
    struct xrCreateSpatialUpdateSnapshotEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->spatialContext), params->createInfo, params->snapshot);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateSpatialUpdateSnapshotEXT(params->spatialContext, params->createInfo, params->snapshot);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateSwapchain(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 swapchain;
        XrResult result;
    } *params = args;
    XrSwapchainCreateInfo createInfo_host;
    XrSwapchain swapchain_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->swapchain);

    init_conversion_context(ctx);
    convert_XrSwapchainCreateInfo_win32_to_host(ctx, (const XrSwapchainCreateInfo32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    swapchain_host = (XrSwapchain)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->swapchain));
    params->result = wine_xrCreateSwapchain(params->session, &createInfo_host, &swapchain_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->swapchain) = PtrToUlong(swapchain_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateSwapchain(void *args)
{
    struct xrCreateSwapchain_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->swapchain);

    params->result = wine_xrCreateSwapchain(params->session, params->createInfo, params->swapchain);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateTrackableTrackerANDROID(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 trackableTracker;
        XrResult result;
    } *params = args;
    XrTrackableTrackerCreateInfoANDROID createInfo_host;
    XrTrackableTrackerANDROID trackableTracker_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->trackableTracker);

    init_conversion_context(ctx);
    convert_XrTrackableTrackerCreateInfoANDROID_win32_to_host(ctx, (const XrTrackableTrackerCreateInfoANDROID32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    trackableTracker_host = (XrTrackableTrackerANDROID)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->trackableTracker));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateTrackableTrackerANDROID(wine_session_from_handle(params->session)->host_session, &createInfo_host, &trackableTracker_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->trackableTracker) = PtrToUlong(trackableTracker_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateTrackableTrackerANDROID(void *args)
{
    struct xrCreateTrackableTrackerANDROID_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->trackableTracker);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateTrackableTrackerANDROID(wine_session_from_handle(params->session)->host_session, params->createInfo, params->trackableTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateTriangleMeshFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 outTriangleMesh;
        XrResult result;
    } *params = args;
    XrTriangleMeshCreateInfoFB createInfo_host;
    XrTriangleMeshFB outTriangleMesh_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->outTriangleMesh);

    convert_XrTriangleMeshCreateInfoFB_win32_to_host((const XrTriangleMeshCreateInfoFB32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    outTriangleMesh_host = (XrTriangleMeshFB)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->outTriangleMesh));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateTriangleMeshFB(wine_session_from_handle(params->session)->host_session, &createInfo_host, &outTriangleMesh_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->outTriangleMesh) = PtrToUlong(outTriangleMesh_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateTriangleMeshFB(void *args)
{
    struct xrCreateTriangleMeshFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->outTriangleMesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateTriangleMeshFB(wine_session_from_handle(params->session)->host_session, params->createInfo, params->outTriangleMesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateVirtualKeyboardMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 keyboard;
        XrResult result;
    } *params = args;
    XrVirtualKeyboardCreateInfoMETA createInfo_host;
    XrVirtualKeyboardMETA keyboard_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->keyboard);

    convert_XrVirtualKeyboardCreateInfoMETA_win32_to_host((const XrVirtualKeyboardCreateInfoMETA32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    keyboard_host = (XrVirtualKeyboardMETA)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->keyboard));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateVirtualKeyboardMETA(wine_session_from_handle(params->session)->host_session, &createInfo_host, &keyboard_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->keyboard) = PtrToUlong(keyboard_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateVirtualKeyboardMETA(void *args)
{
    struct xrCreateVirtualKeyboardMETA_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->keyboard);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateVirtualKeyboardMETA(wine_session_from_handle(params->session)->host_session, params->createInfo, params->keyboard);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateVirtualKeyboardSpaceMETA(void *args)
{
    struct
    {
        XrSession session;
        XrVirtualKeyboardMETA keyboard;
        PTR32 createInfo;
        PTR32 keyboardSpace;
        XrResult result;
    } *params = args;
    XrVirtualKeyboardSpaceCreateInfoMETA createInfo_host;
    XrSpace keyboardSpace_host;

    TRACE("0x%s, 0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), TRACE_HANDLE(params->keyboard), params->createInfo, params->keyboardSpace);

    convert_XrVirtualKeyboardSpaceCreateInfoMETA_win32_to_host((const XrVirtualKeyboardSpaceCreateInfoMETA32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    keyboardSpace_host = (XrSpace)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->keyboardSpace));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateVirtualKeyboardSpaceMETA(wine_session_from_handle(params->session)->host_session, params->keyboard, &createInfo_host, &keyboardSpace_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->keyboardSpace) = PtrToUlong(keyboardSpace_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateVirtualKeyboardSpaceMETA(void *args)
{
    struct xrCreateVirtualKeyboardSpaceMETA_params *params = args;

    TRACE("0x%s, 0x%s, %p, %p\n", TRACE_HANDLE(params->session), TRACE_HANDLE(params->keyboard), params->createInfo, params->keyboardSpace);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateVirtualKeyboardSpaceMETA(wine_session_from_handle(params->session)->host_session, params->keyboard, params->createInfo, params->keyboardSpace);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrCreateWorldMeshDetectorML(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 detector;
        XrResult result;
    } *params = args;
    XrWorldMeshDetectorCreateInfoML createInfo_host;
    XrWorldMeshDetectorML detector_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->detector);

    convert_XrWorldMeshDetectorCreateInfoML_win32_to_host((const XrWorldMeshDetectorCreateInfoML32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    detector_host = (XrWorldMeshDetectorML)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->detector));
    params->result = g_xr_host_instance_dispatch_table.p_xrCreateWorldMeshDetectorML(wine_session_from_handle(params->session)->host_session, &createInfo_host, &detector_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->detector) = PtrToUlong(detector_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrCreateWorldMeshDetectorML(void *args)
{
    struct xrCreateWorldMeshDetectorML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->detector);

    params->result = g_xr_host_instance_dispatch_table.p_xrCreateWorldMeshDetectorML(wine_session_from_handle(params->session)->host_session, params->createInfo, params->detector);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDeleteSpatialAnchorsAsyncML(void *args)
{
    struct
    {
        XrSpatialAnchorsStorageML storage;
        PTR32 deleteInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsDeleteInfoML deleteInfo_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->storage), params->deleteInfo, params->future);

    convert_XrSpatialAnchorsDeleteInfoML_win32_to_host((const XrSpatialAnchorsDeleteInfoML32 *)(uintptr_t)UlongToPtr(params->deleteInfo), &deleteInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrDeleteSpatialAnchorsAsyncML(params->storage, &deleteInfo_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDeleteSpatialAnchorsAsyncML(void *args)
{
    struct xrDeleteSpatialAnchorsAsyncML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->storage), params->deleteInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrDeleteSpatialAnchorsAsyncML(params->storage, params->deleteInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDeleteSpatialAnchorsCompleteML(void *args)
{
    struct
    {
        XrSpatialAnchorsStorageML storage;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsDeleteCompletionML completion_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->storage), params->future, params->completion);

    init_conversion_context(ctx);
    convert_XrSpatialAnchorsDeleteCompletionML_win32_to_host(ctx, (XrSpatialAnchorsDeleteCompletionML32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrDeleteSpatialAnchorsCompleteML(params->storage, params->future, &completion_host);
    convert_XrSpatialAnchorsDeleteCompletionML_host_to_win32(&completion_host, (XrSpatialAnchorsDeleteCompletionML32 *)(XrSpatialAnchorsDeleteCompletionML32 *)(uintptr_t)UlongToPtr(params->completion));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDeleteSpatialAnchorsCompleteML(void *args)
{
    struct xrDeleteSpatialAnchorsCompleteML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->storage), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrDeleteSpatialAnchorsCompleteML(params->storage, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDeserializeSceneMSFT(void *args)
{
    struct
    {
        XrSceneObserverMSFT sceneObserver;
        PTR32 deserializeInfo;
        XrResult result;
    } *params = args;
    XrSceneDeserializeInfoMSFT deserializeInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->sceneObserver), params->deserializeInfo);

    init_conversion_context(ctx);
    convert_XrSceneDeserializeInfoMSFT_win32_to_host(ctx, (const XrSceneDeserializeInfoMSFT32 *)(uintptr_t)UlongToPtr(params->deserializeInfo), &deserializeInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrDeserializeSceneMSFT(params->sceneObserver, &deserializeInfo_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDeserializeSceneMSFT(void *args)
{
    struct xrDeserializeSceneMSFT_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->sceneObserver), params->deserializeInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrDeserializeSceneMSFT(params->sceneObserver, params->deserializeInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyAction(void *args)
{
    struct
    {
        XrAction action;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->action));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyAction(params->action);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyAction(void *args)
{
    struct xrDestroyAction_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->action));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyAction(params->action);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyActionSet(void *args)
{
    struct
    {
        XrActionSet actionSet;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->actionSet));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyActionSet(params->actionSet);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyActionSet(void *args)
{
    struct xrDestroyActionSet_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->actionSet));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyActionSet(params->actionSet);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyAnchorBD(void *args)
{
    struct
    {
        XrAnchorBD anchor;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->anchor));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyAnchorBD(params->anchor);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyAnchorBD(void *args)
{
    struct xrDestroyAnchorBD_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->anchor));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyAnchorBD(params->anchor);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyBodyTrackerBD(void *args)
{
    struct
    {
        XrBodyTrackerBD bodyTracker;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->bodyTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyBodyTrackerBD(params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyBodyTrackerBD(void *args)
{
    struct xrDestroyBodyTrackerBD_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->bodyTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyBodyTrackerBD(params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyBodyTrackerFB(void *args)
{
    struct
    {
        XrBodyTrackerFB bodyTracker;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->bodyTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyBodyTrackerFB(params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyBodyTrackerFB(void *args)
{
    struct xrDestroyBodyTrackerFB_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->bodyTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyBodyTrackerFB(params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyBodyTrackerHTC(void *args)
{
    struct
    {
        XrBodyTrackerHTC bodyTracker;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->bodyTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyBodyTrackerHTC(params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyBodyTrackerHTC(void *args)
{
    struct xrDestroyBodyTrackerHTC_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->bodyTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyBodyTrackerHTC(params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyDeviceAnchorPersistenceANDROID(void *args)
{
    struct
    {
        XrDeviceAnchorPersistenceANDROID handle;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->handle));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyDeviceAnchorPersistenceANDROID(params->handle);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyDeviceAnchorPersistenceANDROID(void *args)
{
    struct xrDestroyDeviceAnchorPersistenceANDROID_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->handle));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyDeviceAnchorPersistenceANDROID(params->handle);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyEnvironmentDepthProviderMETA(void *args)
{
    struct
    {
        XrEnvironmentDepthProviderMETA environmentDepthProvider;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->environmentDepthProvider));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyEnvironmentDepthProviderMETA(params->environmentDepthProvider);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyEnvironmentDepthProviderMETA(void *args)
{
    struct xrDestroyEnvironmentDepthProviderMETA_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->environmentDepthProvider));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyEnvironmentDepthProviderMETA(params->environmentDepthProvider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyEnvironmentDepthSwapchainMETA(void *args)
{
    struct
    {
        XrEnvironmentDepthSwapchainMETA swapchain;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->swapchain));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyEnvironmentDepthSwapchainMETA(params->swapchain);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyEnvironmentDepthSwapchainMETA(void *args)
{
    struct xrDestroyEnvironmentDepthSwapchainMETA_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->swapchain));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyEnvironmentDepthSwapchainMETA(params->swapchain);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyExportedLocalizationMapML(void *args)
{
    struct
    {
        XrExportedLocalizationMapML map;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->map));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyExportedLocalizationMapML(params->map);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyExportedLocalizationMapML(void *args)
{
    struct xrDestroyExportedLocalizationMapML_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->map));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyExportedLocalizationMapML(params->map);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyEyeTrackerFB(void *args)
{
    struct
    {
        XrEyeTrackerFB eyeTracker;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->eyeTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyEyeTrackerFB(params->eyeTracker);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyEyeTrackerFB(void *args)
{
    struct xrDestroyEyeTrackerFB_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->eyeTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyEyeTrackerFB(params->eyeTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyFaceTracker2FB(void *args)
{
    struct
    {
        XrFaceTracker2FB faceTracker;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->faceTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFaceTracker2FB(params->faceTracker);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyFaceTracker2FB(void *args)
{
    struct xrDestroyFaceTracker2FB_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->faceTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFaceTracker2FB(params->faceTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyFaceTrackerFB(void *args)
{
    struct
    {
        XrFaceTrackerFB faceTracker;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->faceTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFaceTrackerFB(params->faceTracker);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyFaceTrackerFB(void *args)
{
    struct xrDestroyFaceTrackerFB_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->faceTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFaceTrackerFB(params->faceTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyFacialExpressionClientML(void *args)
{
    struct
    {
        XrFacialExpressionClientML facialExpressionClient;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->facialExpressionClient));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFacialExpressionClientML(params->facialExpressionClient);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyFacialExpressionClientML(void *args)
{
    struct xrDestroyFacialExpressionClientML_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->facialExpressionClient));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFacialExpressionClientML(params->facialExpressionClient);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyFacialTrackerHTC(void *args)
{
    struct
    {
        XrFacialTrackerHTC facialTracker;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->facialTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFacialTrackerHTC(params->facialTracker);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyFacialTrackerHTC(void *args)
{
    struct xrDestroyFacialTrackerHTC_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->facialTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFacialTrackerHTC(params->facialTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyFoveationProfileFB(void *args)
{
    struct
    {
        XrFoveationProfileFB profile;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->profile));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFoveationProfileFB(params->profile);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyFoveationProfileFB(void *args)
{
    struct xrDestroyFoveationProfileFB_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->profile));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyFoveationProfileFB(params->profile);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyGeometryInstanceFB(void *args)
{
    struct
    {
        XrGeometryInstanceFB instance;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->instance));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyGeometryInstanceFB(params->instance);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyGeometryInstanceFB(void *args)
{
    struct xrDestroyGeometryInstanceFB_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->instance));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyGeometryInstanceFB(params->instance);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyHandTrackerEXT(void *args)
{
    struct
    {
        XrHandTrackerEXT handTracker;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->handTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyHandTrackerEXT(params->handTracker);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyHandTrackerEXT(void *args)
{
    struct xrDestroyHandTrackerEXT_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->handTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyHandTrackerEXT(params->handTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyInstance(void *args)
{
    struct
    {
        XrInstance instance;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->instance));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyInstance(wine_instance_from_handle(params->instance)->host_instance);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyInstance(void *args)
{
    struct xrDestroyInstance_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->instance));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyInstance(wine_instance_from_handle(params->instance)->host_instance);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyMarkerDetectorML(void *args)
{
    struct
    {
        XrMarkerDetectorML markerDetector;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->markerDetector));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyMarkerDetectorML(params->markerDetector);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyMarkerDetectorML(void *args)
{
    struct xrDestroyMarkerDetectorML_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->markerDetector));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyMarkerDetectorML(params->markerDetector);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyPassthroughColorLutMETA(void *args)
{
    struct
    {
        XrPassthroughColorLutMETA colorLut;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->colorLut));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughColorLutMETA(params->colorLut);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyPassthroughColorLutMETA(void *args)
{
    struct xrDestroyPassthroughColorLutMETA_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->colorLut));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughColorLutMETA(params->colorLut);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyPassthroughFB(void *args)
{
    struct
    {
        XrPassthroughFB passthrough;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->passthrough));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughFB(params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyPassthroughFB(void *args)
{
    struct xrDestroyPassthroughFB_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->passthrough));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughFB(params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyPassthroughHTC(void *args)
{
    struct
    {
        XrPassthroughHTC passthrough;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->passthrough));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughHTC(params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyPassthroughHTC(void *args)
{
    struct xrDestroyPassthroughHTC_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->passthrough));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughHTC(params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyPassthroughLayerFB(void *args)
{
    struct
    {
        XrPassthroughLayerFB layer;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->layer));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughLayerFB(params->layer);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyPassthroughLayerFB(void *args)
{
    struct xrDestroyPassthroughLayerFB_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->layer));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPassthroughLayerFB(params->layer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyPlaneDetectorEXT(void *args)
{
    struct
    {
        XrPlaneDetectorEXT planeDetector;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->planeDetector));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPlaneDetectorEXT(params->planeDetector);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyPlaneDetectorEXT(void *args)
{
    struct xrDestroyPlaneDetectorEXT_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->planeDetector));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyPlaneDetectorEXT(params->planeDetector);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyRenderModelAssetEXT(void *args)
{
    struct
    {
        XrRenderModelAssetEXT asset;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->asset));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyRenderModelAssetEXT(params->asset);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyRenderModelAssetEXT(void *args)
{
    struct xrDestroyRenderModelAssetEXT_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->asset));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyRenderModelAssetEXT(params->asset);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyRenderModelEXT(void *args)
{
    struct
    {
        XrRenderModelEXT renderModel;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->renderModel));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyRenderModelEXT(params->renderModel);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyRenderModelEXT(void *args)
{
    struct xrDestroyRenderModelEXT_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->renderModel));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyRenderModelEXT(params->renderModel);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySceneMSFT(void *args)
{
    struct
    {
        XrSceneMSFT scene;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->scene));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySceneMSFT(params->scene);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySceneMSFT(void *args)
{
    struct xrDestroySceneMSFT_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->scene));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySceneMSFT(params->scene);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySceneObserverMSFT(void *args)
{
    struct
    {
        XrSceneObserverMSFT sceneObserver;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->sceneObserver));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySceneObserverMSFT(params->sceneObserver);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySceneObserverMSFT(void *args)
{
    struct xrDestroySceneObserverMSFT_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->sceneObserver));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySceneObserverMSFT(params->sceneObserver);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySenseDataProviderBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->provider));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySenseDataProviderBD(params->provider);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySenseDataProviderBD(void *args)
{
    struct xrDestroySenseDataProviderBD_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->provider));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySenseDataProviderBD(params->provider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySenseDataSnapshotBD(void *args)
{
    struct
    {
        XrSenseDataSnapshotBD snapshot;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->snapshot));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySenseDataSnapshotBD(params->snapshot);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySenseDataSnapshotBD(void *args)
{
    struct xrDestroySenseDataSnapshotBD_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->snapshot));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySenseDataSnapshotBD(params->snapshot);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySession(void *args)
{
    struct
    {
        XrSession session;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->session));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySession(wine_session_from_handle(params->session)->host_session);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySession(void *args)
{
    struct xrDestroySession_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->session));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySession(wine_session_from_handle(params->session)->host_session);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpace(void *args)
{
    struct
    {
        XrSpace space;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->space));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpace(params->space);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpace(void *args)
{
    struct xrDestroySpace_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->space));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpace(params->space);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpaceUserFB(void *args)
{
    struct
    {
        XrSpaceUserFB user;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->user));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpaceUserFB(params->user);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpaceUserFB(void *args)
{
    struct xrDestroySpaceUserFB_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->user));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpaceUserFB(params->user);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpatialAnchorMSFT(void *args)
{
    struct
    {
        XrSpatialAnchorMSFT anchor;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->anchor));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialAnchorMSFT(params->anchor);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialAnchorMSFT(void *args)
{
    struct xrDestroySpatialAnchorMSFT_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->anchor));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialAnchorMSFT(params->anchor);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpatialAnchorStoreConnectionMSFT(void *args)
{
    struct
    {
        XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->spatialAnchorStore));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialAnchorStoreConnectionMSFT(params->spatialAnchorStore);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialAnchorStoreConnectionMSFT(void *args)
{
    struct xrDestroySpatialAnchorStoreConnectionMSFT_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->spatialAnchorStore));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialAnchorStoreConnectionMSFT(params->spatialAnchorStore);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpatialAnchorsStorageML(void *args)
{
    struct
    {
        XrSpatialAnchorsStorageML storage;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->storage));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialAnchorsStorageML(params->storage);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialAnchorsStorageML(void *args)
{
    struct xrDestroySpatialAnchorsStorageML_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->storage));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialAnchorsStorageML(params->storage);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpatialContextEXT(void *args)
{
    struct
    {
        XrSpatialContextEXT spatialContext;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->spatialContext));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialContextEXT(params->spatialContext);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialContextEXT(void *args)
{
    struct xrDestroySpatialContextEXT_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->spatialContext));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialContextEXT(params->spatialContext);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpatialEntityEXT(void *args)
{
    struct
    {
        XrSpatialEntityEXT spatialEntity;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->spatialEntity));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialEntityEXT(params->spatialEntity);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialEntityEXT(void *args)
{
    struct xrDestroySpatialEntityEXT_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->spatialEntity));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialEntityEXT(params->spatialEntity);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpatialGraphNodeBindingMSFT(void *args)
{
    struct
    {
        XrSpatialGraphNodeBindingMSFT nodeBinding;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->nodeBinding));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialGraphNodeBindingMSFT(params->nodeBinding);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialGraphNodeBindingMSFT(void *args)
{
    struct xrDestroySpatialGraphNodeBindingMSFT_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->nodeBinding));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialGraphNodeBindingMSFT(params->nodeBinding);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpatialPersistenceContextEXT(void *args)
{
    struct
    {
        XrSpatialPersistenceContextEXT persistenceContext;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->persistenceContext));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialPersistenceContextEXT(params->persistenceContext);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialPersistenceContextEXT(void *args)
{
    struct xrDestroySpatialPersistenceContextEXT_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->persistenceContext));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialPersistenceContextEXT(params->persistenceContext);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySpatialSnapshotEXT(void *args)
{
    struct
    {
        XrSpatialSnapshotEXT snapshot;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->snapshot));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialSnapshotEXT(params->snapshot);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySpatialSnapshotEXT(void *args)
{
    struct xrDestroySpatialSnapshotEXT_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->snapshot));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySpatialSnapshotEXT(params->snapshot);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroySwapchain(void *args)
{
    struct
    {
        XrSwapchain swapchain;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->swapchain));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySwapchain(wine_swapchain_from_handle(params->swapchain)->host_swapchain);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroySwapchain(void *args)
{
    struct xrDestroySwapchain_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->swapchain));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroySwapchain(wine_swapchain_from_handle(params->swapchain)->host_swapchain);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyTrackableTrackerANDROID(void *args)
{
    struct
    {
        XrTrackableTrackerANDROID trackableTracker;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->trackableTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyTrackableTrackerANDROID(params->trackableTracker);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyTrackableTrackerANDROID(void *args)
{
    struct xrDestroyTrackableTrackerANDROID_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->trackableTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyTrackableTrackerANDROID(params->trackableTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyTriangleMeshFB(void *args)
{
    struct
    {
        XrTriangleMeshFB mesh;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->mesh));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyTriangleMeshFB(params->mesh);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyTriangleMeshFB(void *args)
{
    struct xrDestroyTriangleMeshFB_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->mesh));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyTriangleMeshFB(params->mesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyVirtualKeyboardMETA(void *args)
{
    struct
    {
        XrVirtualKeyboardMETA keyboard;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->keyboard));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyVirtualKeyboardMETA(params->keyboard);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyVirtualKeyboardMETA(void *args)
{
    struct xrDestroyVirtualKeyboardMETA_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->keyboard));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyVirtualKeyboardMETA(params->keyboard);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDestroyWorldMeshDetectorML(void *args)
{
    struct
    {
        XrWorldMeshDetectorML detector;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->detector));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyWorldMeshDetectorML(params->detector);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDestroyWorldMeshDetectorML(void *args)
{
    struct xrDestroyWorldMeshDetectorML_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->detector));

    params->result = g_xr_host_instance_dispatch_table.p_xrDestroyWorldMeshDetectorML(params->detector);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDiscoverSpacesMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpaceDiscoveryInfoMETA info_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    init_conversion_context(ctx);
    convert_XrSpaceDiscoveryInfoMETA_win32_to_host(ctx, (const XrSpaceDiscoveryInfoMETA32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrDiscoverSpacesMETA(wine_session_from_handle(params->session)->host_session, &info_host, (XrAsyncRequestIdFB *)(uintptr_t)UlongToPtr(params->requestId));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDiscoverSpacesMETA(void *args)
{
    struct xrDiscoverSpacesMETA_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrDiscoverSpacesMETA(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDownloadSharedSpatialAnchorAsyncBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        PTR32 info;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSharedSpatialAnchorDownloadInfoBD info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->provider), params->info, params->future);

    convert_XrSharedSpatialAnchorDownloadInfoBD_win32_to_host((const XrSharedSpatialAnchorDownloadInfoBD32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrDownloadSharedSpatialAnchorAsyncBD(params->provider, &info_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDownloadSharedSpatialAnchorAsyncBD(void *args)
{
    struct xrDownloadSharedSpatialAnchorAsyncBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->provider), params->info, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrDownloadSharedSpatialAnchorAsyncBD(params->provider, params->info, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrDownloadSharedSpatialAnchorCompleteBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrFutureCompletionEXT completion_host;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->provider), params->future, params->completion);

    convert_XrFutureCompletionEXT_win32_to_host((XrFutureCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrDownloadSharedSpatialAnchorCompleteBD(params->provider, params->future, &completion_host);
    convert_XrFutureCompletionEXT_host_to_win32(&completion_host, (XrFutureCompletionEXT32 *)(XrFutureCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrDownloadSharedSpatialAnchorCompleteBD(void *args)
{
    struct xrDownloadSharedSpatialAnchorCompleteBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->provider), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrDownloadSharedSpatialAnchorCompleteBD(params->provider, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnableLocalizationEventsML(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        XrResult result;
    } *params = args;
    XrLocalizationEnableEventsInfoML info_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->info);

    convert_XrLocalizationEnableEventsInfoML_win32_to_host((const XrLocalizationEnableEventsInfoML32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnableLocalizationEventsML(wine_session_from_handle(params->session)->host_session, &info_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnableLocalizationEventsML(void *args)
{
    struct xrEnableLocalizationEventsML_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->info);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnableLocalizationEventsML(wine_session_from_handle(params->session)->host_session, params->info);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnableUserCalibrationEventsML(void *args)
{
    struct
    {
        XrInstance instance;
        PTR32 enableInfo;
        XrResult result;
    } *params = args;
    XrUserCalibrationEnableEventsInfoML enableInfo_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->instance), params->enableInfo);

    convert_XrUserCalibrationEnableEventsInfoML_win32_to_host((const XrUserCalibrationEnableEventsInfoML32 *)(uintptr_t)UlongToPtr(params->enableInfo), &enableInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnableUserCalibrationEventsML(wine_instance_from_handle(params->instance)->host_instance, &enableInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnableUserCalibrationEventsML(void *args)
{
    struct xrEnableUserCalibrationEventsML_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->instance), params->enableInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnableUserCalibrationEventsML(wine_instance_from_handle(params->instance)->host_instance, params->enableInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEndFrame(void *args)
{
    struct
    {
        XrSession session;
        PTR32 frameEndInfo;
        XrResult result;
    } *params = args;
    XrFrameEndInfo frameEndInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->frameEndInfo);

    init_conversion_context(ctx);
    convert_XrFrameEndInfo_win32_to_host(ctx, (const XrFrameEndInfo32 *)(uintptr_t)UlongToPtr(params->frameEndInfo), &frameEndInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrEndFrame(wine_session_from_handle(params->session)->host_session, &frameEndInfo_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEndFrame(void *args)
{
    struct xrEndFrame_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->frameEndInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrEndFrame(wine_session_from_handle(params->session)->host_session, params->frameEndInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEndSession(void *args)
{
    struct
    {
        XrSession session;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->session));

    params->result = g_xr_host_instance_dispatch_table.p_xrEndSession(wine_session_from_handle(params->session)->host_session);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEndSession(void *args)
{
    struct xrEndSession_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->session));

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
    properties_host = convert_XrApiLayerProperties_array_win32_to_host(ctx, (XrApiLayerProperties32 *)(uintptr_t)UlongToPtr(params->properties), params->propertyCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateApiLayerProperties(params->propertyCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->propertyCountOutput), properties_host);
    convert_XrApiLayerProperties_array_host_to_win32(properties_host, (XrApiLayerProperties32 *)(uintptr_t)UlongToPtr(params->properties), params->propertyCapacityInput);
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
        XrSession session;
        PTR32 enumerateInfo;
        uint32_t sourceCapacityInput;
        PTR32 sourceCountOutput;
        PTR32 sources;
        XrResult result;
    } *params = args;
    XrBoundSourcesForActionEnumerateInfo enumerateInfo_host;

    TRACE("0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->session), params->enumerateInfo, params->sourceCapacityInput, params->sourceCountOutput, params->sources);

    convert_XrBoundSourcesForActionEnumerateInfo_win32_to_host((const XrBoundSourcesForActionEnumerateInfo32 *)(uintptr_t)UlongToPtr(params->enumerateInfo), &enumerateInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateBoundSourcesForAction(wine_session_from_handle(params->session)->host_session, &enumerateInfo_host, params->sourceCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->sourceCountOutput), (XrPath *)(uintptr_t)UlongToPtr(params->sources));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateBoundSourcesForAction(void *args)
{
    struct xrEnumerateBoundSourcesForAction_params *params = args;

    TRACE("0x%s, %p, %u, %p, %p\n", TRACE_HANDLE(params->session), params->enumerateInfo, params->sourceCapacityInput, params->sourceCountOutput, params->sources);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateBoundSourcesForAction(wine_session_from_handle(params->session)->host_session, params->enumerateInfo, params->sourceCapacityInput, params->sourceCountOutput, params->sources);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateColorSpacesFB(void *args)
{
    struct
    {
        XrSession session;
        uint32_t colorSpaceCapacityInput;
        PTR32 colorSpaceCountOutput;
        PTR32 colorSpaces;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->session), params->colorSpaceCapacityInput, params->colorSpaceCountOutput, params->colorSpaces);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateColorSpacesFB(wine_session_from_handle(params->session)->host_session, params->colorSpaceCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->colorSpaceCountOutput), (XrColorSpaceFB *)(uintptr_t)UlongToPtr(params->colorSpaces));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateColorSpacesFB(void *args)
{
    struct xrEnumerateColorSpacesFB_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->session), params->colorSpaceCapacityInput, params->colorSpaceCountOutput, params->colorSpaces);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateColorSpacesFB(wine_session_from_handle(params->session)->host_session, params->colorSpaceCapacityInput, params->colorSpaceCountOutput, params->colorSpaces);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateDisplayRefreshRatesFB(void *args)
{
    struct
    {
        XrSession session;
        uint32_t displayRefreshRateCapacityInput;
        PTR32 displayRefreshRateCountOutput;
        PTR32 displayRefreshRates;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->session), params->displayRefreshRateCapacityInput, params->displayRefreshRateCountOutput, params->displayRefreshRates);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateDisplayRefreshRatesFB(wine_session_from_handle(params->session)->host_session, params->displayRefreshRateCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->displayRefreshRateCountOutput), (float *)(uintptr_t)UlongToPtr(params->displayRefreshRates));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateDisplayRefreshRatesFB(void *args)
{
    struct xrEnumerateDisplayRefreshRatesFB_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->session), params->displayRefreshRateCapacityInput, params->displayRefreshRateCountOutput, params->displayRefreshRates);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateDisplayRefreshRatesFB(wine_session_from_handle(params->session)->host_session, params->displayRefreshRateCapacityInput, params->displayRefreshRateCountOutput, params->displayRefreshRates);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateEnvironmentBlendModes(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        XrViewConfigurationType viewConfigurationType;
        uint32_t environmentBlendModeCapacityInput;
        PTR32 environmentBlendModeCountOutput;
        PTR32 environmentBlendModes;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->environmentBlendModeCapacityInput, params->environmentBlendModeCountOutput, params->environmentBlendModes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateEnvironmentBlendModes(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationType, params->environmentBlendModeCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->environmentBlendModeCountOutput), (XrEnvironmentBlendMode *)(uintptr_t)UlongToPtr(params->environmentBlendModes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateEnvironmentBlendModes(void *args)
{
    struct xrEnumerateEnvironmentBlendModes_params *params = args;

    TRACE("0x%s, 0x%s, %#x, %u, %p, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->environmentBlendModeCapacityInput, params->environmentBlendModeCountOutput, params->environmentBlendModes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateEnvironmentBlendModes(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationType, params->environmentBlendModeCapacityInput, params->environmentBlendModeCountOutput, params->environmentBlendModes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateEnvironmentDepthSwapchainImagesMETA(void *args)
{
    struct
    {
        XrEnvironmentDepthSwapchainMETA swapchain;
        uint32_t imageCapacityInput;
        PTR32 imageCountOutput;
        PTR32 images;
        XrResult result;
    } *params = args;
    XrSwapchainImageBaseHeader *images_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->swapchain), params->imageCapacityInput, params->imageCountOutput, params->images);

    init_conversion_context(ctx);
    images_host = convert_XrSwapchainImageBaseHeader_array_win32_to_host(ctx, (XrSwapchainImageBaseHeader32 *)(uintptr_t)UlongToPtr(params->images), params->imageCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateEnvironmentDepthSwapchainImagesMETA(params->swapchain, params->imageCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->imageCountOutput), images_host);
    convert_XrSwapchainImageBaseHeader_array_host_to_win32(images_host, (XrSwapchainImageBaseHeader32 *)(uintptr_t)UlongToPtr(params->images), params->imageCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateEnvironmentDepthSwapchainImagesMETA(void *args)
{
    struct xrEnumerateEnvironmentDepthSwapchainImagesMETA_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->swapchain), params->imageCapacityInput, params->imageCountOutput, params->images);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateEnvironmentDepthSwapchainImagesMETA(params->swapchain, params->imageCapacityInput, params->imageCountOutput, params->images);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateExternalCamerasOCULUS(void *args)
{
    struct
    {
        XrSession session;
        uint32_t cameraCapacityInput;
        PTR32 cameraCountOutput;
        PTR32 cameras;
        XrResult result;
    } *params = args;
    XrExternalCameraOCULUS *cameras_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->session), params->cameraCapacityInput, params->cameraCountOutput, params->cameras);

    init_conversion_context(ctx);
    cameras_host = convert_XrExternalCameraOCULUS_array_win32_to_host(ctx, (XrExternalCameraOCULUS32 *)(uintptr_t)UlongToPtr(params->cameras), params->cameraCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateExternalCamerasOCULUS(wine_session_from_handle(params->session)->host_session, params->cameraCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->cameraCountOutput), cameras_host);
    convert_XrExternalCameraOCULUS_array_host_to_win32(cameras_host, (XrExternalCameraOCULUS32 *)(uintptr_t)UlongToPtr(params->cameras), params->cameraCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateExternalCamerasOCULUS(void *args)
{
    struct xrEnumerateExternalCamerasOCULUS_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->session), params->cameraCapacityInput, params->cameraCountOutput, params->cameras);

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
    properties_host = convert_XrExtensionProperties_array_win32_to_host(ctx, (XrExtensionProperties32 *)(uintptr_t)UlongToPtr(params->properties), params->propertyCapacityInput);
    params->result = wine_xrEnumerateInstanceExtensionProperties((const char *)(uintptr_t)UlongToPtr(params->layerName), params->propertyCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->propertyCountOutput), properties_host);
    convert_XrExtensionProperties_array_host_to_win32(properties_host, (XrExtensionProperties32 *)(uintptr_t)UlongToPtr(params->properties), params->propertyCapacityInput);
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
        XrSession session;
        PTR32 getInfo;
        uint32_t renderModelIdCapacityInput;
        PTR32 renderModelIdCountOutput;
        PTR32 renderModelIds;
        XrResult result;
    } *params = args;
    XrInteractionRenderModelIdsEnumerateInfoEXT getInfo_host;

    TRACE("0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->session), params->getInfo, params->renderModelIdCapacityInput, params->renderModelIdCountOutput, params->renderModelIds);

    convert_XrInteractionRenderModelIdsEnumerateInfoEXT_win32_to_host((const XrInteractionRenderModelIdsEnumerateInfoEXT32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateInteractionRenderModelIdsEXT(wine_session_from_handle(params->session)->host_session, &getInfo_host, params->renderModelIdCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->renderModelIdCountOutput), (XrRenderModelIdEXT *)(uintptr_t)UlongToPtr(params->renderModelIds));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateInteractionRenderModelIdsEXT(void *args)
{
    struct xrEnumerateInteractionRenderModelIdsEXT_params *params = args;

    TRACE("0x%s, %p, %u, %p, %p\n", TRACE_HANDLE(params->session), params->getInfo, params->renderModelIdCapacityInput, params->renderModelIdCountOutput, params->renderModelIds);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateInteractionRenderModelIdsEXT(wine_session_from_handle(params->session)->host_session, params->getInfo, params->renderModelIdCapacityInput, params->renderModelIdCountOutput, params->renderModelIds);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumeratePerformanceMetricsCounterPathsMETA(void *args)
{
    struct
    {
        XrInstance instance;
        uint32_t counterPathCapacityInput;
        PTR32 counterPathCountOutput;
        PTR32 counterPaths;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), params->counterPathCapacityInput, params->counterPathCountOutput, params->counterPaths);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumeratePerformanceMetricsCounterPathsMETA(wine_instance_from_handle(params->instance)->host_instance, params->counterPathCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->counterPathCountOutput), (XrPath *)(uintptr_t)UlongToPtr(params->counterPaths));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumeratePerformanceMetricsCounterPathsMETA(void *args)
{
    struct xrEnumeratePerformanceMetricsCounterPathsMETA_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->instance), params->counterPathCapacityInput, params->counterPathCountOutput, params->counterPaths);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumeratePerformanceMetricsCounterPathsMETA(wine_instance_from_handle(params->instance)->host_instance, params->counterPathCapacityInput, params->counterPathCountOutput, params->counterPaths);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumeratePersistedAnchorsANDROID(void *args)
{
    struct
    {
        XrDeviceAnchorPersistenceANDROID handle;
        uint32_t anchorIdCapacityInput;
        PTR32 anchorIdCountOutput;
        PTR32 anchorIds;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->handle), params->anchorIdCapacityInput, params->anchorIdCountOutput, params->anchorIds);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumeratePersistedAnchorsANDROID(params->handle, params->anchorIdCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->anchorIdCountOutput), (XrUuidEXT *)(uintptr_t)UlongToPtr(params->anchorIds));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumeratePersistedAnchorsANDROID(void *args)
{
    struct xrEnumeratePersistedAnchorsANDROID_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->handle), params->anchorIdCapacityInput, params->anchorIdCountOutput, params->anchorIds);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumeratePersistedAnchorsANDROID(params->handle, params->anchorIdCapacityInput, params->anchorIdCountOutput, params->anchorIds);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumeratePersistedSpatialAnchorNamesMSFT(void *args)
{
    struct
    {
        XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore;
        uint32_t spatialAnchorNameCapacityInput;
        PTR32 spatialAnchorNameCountOutput;
        PTR32 spatialAnchorNames;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->spatialAnchorStore), params->spatialAnchorNameCapacityInput, params->spatialAnchorNameCountOutput, params->spatialAnchorNames);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumeratePersistedSpatialAnchorNamesMSFT(params->spatialAnchorStore, params->spatialAnchorNameCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->spatialAnchorNameCountOutput), (XrSpatialAnchorPersistenceNameMSFT *)(uintptr_t)UlongToPtr(params->spatialAnchorNames));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumeratePersistedSpatialAnchorNamesMSFT(void *args)
{
    struct xrEnumeratePersistedSpatialAnchorNamesMSFT_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->spatialAnchorStore), params->spatialAnchorNameCapacityInput, params->spatialAnchorNameCountOutput, params->spatialAnchorNames);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumeratePersistedSpatialAnchorNamesMSFT(params->spatialAnchorStore, params->spatialAnchorNameCapacityInput, params->spatialAnchorNameCountOutput, params->spatialAnchorNames);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateRaycastSupportedTrackableTypesANDROID(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        uint32_t trackableTypeCapacityInput;
        PTR32 trackableTypeCountOutput;
        PTR32 trackableTypes;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateRaycastSupportedTrackableTypesANDROID(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->trackableTypeCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->trackableTypeCountOutput), (XrTrackableTypeANDROID *)(uintptr_t)UlongToPtr(params->trackableTypes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateRaycastSupportedTrackableTypesANDROID(void *args)
{
    struct xrEnumerateRaycastSupportedTrackableTypesANDROID_params *params = args;

    TRACE("0x%s, 0x%s, %u, %p, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateRaycastSupportedTrackableTypesANDROID(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateReferenceSpaces(void *args)
{
    struct
    {
        XrSession session;
        uint32_t spaceCapacityInput;
        PTR32 spaceCountOutput;
        PTR32 spaces;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->session), params->spaceCapacityInput, params->spaceCountOutput, params->spaces);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateReferenceSpaces(wine_session_from_handle(params->session)->host_session, params->spaceCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->spaceCountOutput), (XrReferenceSpaceType *)(uintptr_t)UlongToPtr(params->spaces));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateReferenceSpaces(void *args)
{
    struct xrEnumerateReferenceSpaces_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->session), params->spaceCapacityInput, params->spaceCountOutput, params->spaces);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateReferenceSpaces(wine_session_from_handle(params->session)->host_session, params->spaceCapacityInput, params->spaceCountOutput, params->spaces);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateRenderModelPathsFB(void *args)
{
    struct
    {
        XrSession session;
        uint32_t pathCapacityInput;
        PTR32 pathCountOutput;
        PTR32 paths;
        XrResult result;
    } *params = args;
    XrRenderModelPathInfoFB *paths_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->session), params->pathCapacityInput, params->pathCountOutput, params->paths);

    init_conversion_context(ctx);
    paths_host = convert_XrRenderModelPathInfoFB_array_win32_to_host(ctx, (XrRenderModelPathInfoFB32 *)(uintptr_t)UlongToPtr(params->paths), params->pathCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateRenderModelPathsFB(wine_session_from_handle(params->session)->host_session, params->pathCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->pathCountOutput), paths_host);
    convert_XrRenderModelPathInfoFB_array_host_to_win32(paths_host, (XrRenderModelPathInfoFB32 *)(uintptr_t)UlongToPtr(params->paths), params->pathCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateRenderModelPathsFB(void *args)
{
    struct xrEnumerateRenderModelPathsFB_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->session), params->pathCapacityInput, params->pathCountOutput, params->paths);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateRenderModelPathsFB(wine_session_from_handle(params->session)->host_session, params->pathCapacityInput, params->pathCountOutput, params->paths);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateRenderModelSubactionPathsEXT(void *args)
{
    struct
    {
        XrRenderModelEXT renderModel;
        PTR32 info;
        uint32_t pathCapacityInput;
        PTR32 pathCountOutput;
        PTR32 paths;
        XrResult result;
    } *params = args;
    XrInteractionRenderModelSubactionPathInfoEXT *info_host = NULL;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->renderModel), params->info, params->pathCapacityInput, params->pathCountOutput, params->paths);

    init_conversion_context(ctx);
    if (params->info)
    {
        info_host = conversion_context_alloc(ctx, sizeof(*info_host));
        convert_XrInteractionRenderModelSubactionPathInfoEXT_win32_to_host((const XrInteractionRenderModelSubactionPathInfoEXT32 *)(uintptr_t)UlongToPtr(params->info), info_host);
    }
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateRenderModelSubactionPathsEXT(params->renderModel, info_host, params->pathCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->pathCountOutput), (XrPath *)(uintptr_t)UlongToPtr(params->paths));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateRenderModelSubactionPathsEXT(void *args)
{
    struct xrEnumerateRenderModelSubactionPathsEXT_params *params = args;

    TRACE("0x%s, %p, %u, %p, %p\n", TRACE_HANDLE(params->renderModel), params->info, params->pathCapacityInput, params->pathCountOutput, params->paths);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateRenderModelSubactionPathsEXT(params->renderModel, params->info, params->pathCapacityInput, params->pathCountOutput, params->paths);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateReprojectionModesMSFT(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        XrViewConfigurationType viewConfigurationType;
        uint32_t modeCapacityInput;
        PTR32 modeCountOutput;
        PTR32 modes;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->modeCapacityInput, params->modeCountOutput, params->modes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateReprojectionModesMSFT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationType, params->modeCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->modeCountOutput), (XrReprojectionModeMSFT *)(uintptr_t)UlongToPtr(params->modes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateReprojectionModesMSFT(void *args)
{
    struct xrEnumerateReprojectionModesMSFT_params *params = args;

    TRACE("0x%s, 0x%s, %#x, %u, %p, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->modeCapacityInput, params->modeCountOutput, params->modes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateReprojectionModesMSFT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationType, params->modeCapacityInput, params->modeCountOutput, params->modes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSceneComputeFeaturesMSFT(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        uint32_t featureCapacityInput;
        PTR32 featureCountOutput;
        PTR32 features;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->featureCapacityInput, params->featureCountOutput, params->features);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSceneComputeFeaturesMSFT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->featureCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->featureCountOutput), (XrSceneComputeFeatureMSFT *)(uintptr_t)UlongToPtr(params->features));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSceneComputeFeaturesMSFT(void *args)
{
    struct xrEnumerateSceneComputeFeaturesMSFT_params *params = args;

    TRACE("0x%s, 0x%s, %u, %p, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->featureCapacityInput, params->featureCountOutput, params->features);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSceneComputeFeaturesMSFT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->featureCapacityInput, params->featureCountOutput, params->features);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSpaceSupportedComponentsFB(void *args)
{
    struct
    {
        XrSpace space;
        uint32_t componentTypeCapacityInput;
        PTR32 componentTypeCountOutput;
        PTR32 componentTypes;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->space), params->componentTypeCapacityInput, params->componentTypeCountOutput, params->componentTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpaceSupportedComponentsFB(params->space, params->componentTypeCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->componentTypeCountOutput), (XrSpaceComponentTypeFB *)(uintptr_t)UlongToPtr(params->componentTypes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSpaceSupportedComponentsFB(void *args)
{
    struct xrEnumerateSpaceSupportedComponentsFB_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->space), params->componentTypeCapacityInput, params->componentTypeCountOutput, params->componentTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpaceSupportedComponentsFB(params->space, params->componentTypeCapacityInput, params->componentTypeCountOutput, params->componentTypes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSpatialCapabilitiesEXT(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        uint32_t capabilityCapacityInput;
        PTR32 capabilityCountOutput;
        PTR32 capabilities;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->capabilityCapacityInput, params->capabilityCountOutput, params->capabilities);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialCapabilitiesEXT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->capabilityCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->capabilityCountOutput), (XrSpatialCapabilityEXT *)(uintptr_t)UlongToPtr(params->capabilities));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSpatialCapabilitiesEXT(void *args)
{
    struct xrEnumerateSpatialCapabilitiesEXT_params *params = args;

    TRACE("0x%s, 0x%s, %u, %p, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->capabilityCapacityInput, params->capabilityCountOutput, params->capabilities);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialCapabilitiesEXT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->capabilityCapacityInput, params->capabilityCountOutput, params->capabilities);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSpatialCapabilityComponentTypesEXT(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        XrSpatialCapabilityEXT capability;
        PTR32 capabilityComponents;
        XrResult result;
    } *params = args;
    XrSpatialCapabilityComponentTypesEXT capabilityComponents_host;

    TRACE("0x%s, 0x%s, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->capability, params->capabilityComponents);

    convert_XrSpatialCapabilityComponentTypesEXT_win32_to_host((XrSpatialCapabilityComponentTypesEXT32 *)(uintptr_t)UlongToPtr(params->capabilityComponents), &capabilityComponents_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialCapabilityComponentTypesEXT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->capability, &capabilityComponents_host);
    convert_XrSpatialCapabilityComponentTypesEXT_host_to_win32(&capabilityComponents_host, (XrSpatialCapabilityComponentTypesEXT32 *)(XrSpatialCapabilityComponentTypesEXT32 *)(uintptr_t)UlongToPtr(params->capabilityComponents));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSpatialCapabilityComponentTypesEXT(void *args)
{
    struct xrEnumerateSpatialCapabilityComponentTypesEXT_params *params = args;

    TRACE("0x%s, 0x%s, %#x, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->capability, params->capabilityComponents);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialCapabilityComponentTypesEXT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->capability, params->capabilityComponents);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSpatialCapabilityFeaturesEXT(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        XrSpatialCapabilityEXT capability;
        uint32_t capabilityFeatureCapacityInput;
        PTR32 capabilityFeatureCountOutput;
        PTR32 capabilityFeatures;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->capability, params->capabilityFeatureCapacityInput, params->capabilityFeatureCountOutput, params->capabilityFeatures);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialCapabilityFeaturesEXT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->capability, params->capabilityFeatureCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->capabilityFeatureCountOutput), (XrSpatialCapabilityFeatureEXT *)(uintptr_t)UlongToPtr(params->capabilityFeatures));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSpatialCapabilityFeaturesEXT(void *args)
{
    struct xrEnumerateSpatialCapabilityFeaturesEXT_params *params = args;

    TRACE("0x%s, 0x%s, %#x, %u, %p, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->capability, params->capabilityFeatureCapacityInput, params->capabilityFeatureCountOutput, params->capabilityFeatures);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialCapabilityFeaturesEXT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->capability, params->capabilityFeatureCapacityInput, params->capabilityFeatureCountOutput, params->capabilityFeatures);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSpatialEntityComponentTypesBD(void *args)
{
    struct
    {
        XrSenseDataSnapshotBD snapshot;
        XrSpatialEntityIdBD entityId;
        uint32_t componentTypeCapacityInput;
        PTR32 componentTypeCountOutput;
        PTR32 componentTypes;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->snapshot), wine_dbgstr_longlong(params->entityId), params->componentTypeCapacityInput, params->componentTypeCountOutput, params->componentTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialEntityComponentTypesBD(params->snapshot, params->entityId, params->componentTypeCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->componentTypeCountOutput), (XrSpatialEntityComponentTypeBD *)(uintptr_t)UlongToPtr(params->componentTypes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSpatialEntityComponentTypesBD(void *args)
{
    struct xrEnumerateSpatialEntityComponentTypesBD_params *params = args;

    TRACE("0x%s, 0x%s, %u, %p, %p\n", TRACE_HANDLE(params->snapshot), wine_dbgstr_longlong(params->entityId), params->componentTypeCapacityInput, params->componentTypeCountOutput, params->componentTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialEntityComponentTypesBD(params->snapshot, params->entityId, params->componentTypeCapacityInput, params->componentTypeCountOutput, params->componentTypes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSpatialPersistenceScopesEXT(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        uint32_t persistenceScopeCapacityInput;
        PTR32 persistenceScopeCountOutput;
        PTR32 persistenceScopes;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->persistenceScopeCapacityInput, params->persistenceScopeCountOutput, params->persistenceScopes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialPersistenceScopesEXT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->persistenceScopeCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->persistenceScopeCountOutput), (XrSpatialPersistenceScopeEXT *)(uintptr_t)UlongToPtr(params->persistenceScopes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSpatialPersistenceScopesEXT(void *args)
{
    struct xrEnumerateSpatialPersistenceScopesEXT_params *params = args;

    TRACE("0x%s, 0x%s, %u, %p, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->persistenceScopeCapacityInput, params->persistenceScopeCountOutput, params->persistenceScopes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSpatialPersistenceScopesEXT(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->persistenceScopeCapacityInput, params->persistenceScopeCountOutput, params->persistenceScopes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSupportedAnchorTrackableTypesANDROID(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        uint32_t trackableTypeCapacityInput;
        PTR32 trackableTypeCountOutput;
        PTR32 trackableTypes;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSupportedAnchorTrackableTypesANDROID(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->trackableTypeCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->trackableTypeCountOutput), (XrTrackableTypeANDROID *)(uintptr_t)UlongToPtr(params->trackableTypes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSupportedAnchorTrackableTypesANDROID(void *args)
{
    struct xrEnumerateSupportedAnchorTrackableTypesANDROID_params *params = args;

    TRACE("0x%s, 0x%s, %u, %p, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSupportedAnchorTrackableTypesANDROID(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSupportedPersistenceAnchorTypesANDROID(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        uint32_t trackableTypeCapacityInput;
        PTR32 trackableTypeCountOutput;
        PTR32 trackableTypes;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSupportedPersistenceAnchorTypesANDROID(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->trackableTypeCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->trackableTypeCountOutput), (XrTrackableTypeANDROID *)(uintptr_t)UlongToPtr(params->trackableTypes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSupportedPersistenceAnchorTypesANDROID(void *args)
{
    struct xrEnumerateSupportedPersistenceAnchorTypesANDROID_params *params = args;

    TRACE("0x%s, 0x%s, %u, %p, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSupportedPersistenceAnchorTypesANDROID(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSupportedTrackableTypesANDROID(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        uint32_t trackableTypeCapacityInput;
        PTR32 trackableTypeCountOutput;
        PTR32 trackableTypes;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSupportedTrackableTypesANDROID(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->trackableTypeCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->trackableTypeCountOutput), (XrTrackableTypeANDROID *)(uintptr_t)UlongToPtr(params->trackableTypes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSupportedTrackableTypesANDROID(void *args)
{
    struct xrEnumerateSupportedTrackableTypesANDROID_params *params = args;

    TRACE("0x%s, 0x%s, %u, %p, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSupportedTrackableTypesANDROID(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->trackableTypeCapacityInput, params->trackableTypeCountOutput, params->trackableTypes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSwapchainFormats(void *args)
{
    struct
    {
        XrSession session;
        uint32_t formatCapacityInput;
        PTR32 formatCountOutput;
        PTR32 formats;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->session), params->formatCapacityInput, params->formatCountOutput, params->formats);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSwapchainFormats(wine_session_from_handle(params->session)->host_session, params->formatCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->formatCountOutput), (int64_t *)(uintptr_t)UlongToPtr(params->formats));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSwapchainFormats(void *args)
{
    struct xrEnumerateSwapchainFormats_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->session), params->formatCapacityInput, params->formatCountOutput, params->formats);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSwapchainFormats(wine_session_from_handle(params->session)->host_session, params->formatCapacityInput, params->formatCountOutput, params->formats);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateSwapchainImages(void *args)
{
    struct
    {
        XrSwapchain swapchain;
        uint32_t imageCapacityInput;
        PTR32 imageCountOutput;
        PTR32 images;
        XrResult result;
    } *params = args;
    XrSwapchainImageBaseHeader *images_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->swapchain), params->imageCapacityInput, params->imageCountOutput, params->images);

    init_conversion_context(ctx);
    images_host = convert_XrSwapchainImageBaseHeader_array_win32_to_host(ctx, (XrSwapchainImageBaseHeader32 *)(uintptr_t)UlongToPtr(params->images), params->imageCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSwapchainImages(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->imageCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->imageCountOutput), images_host);
    convert_XrSwapchainImageBaseHeader_array_host_to_win32(images_host, (XrSwapchainImageBaseHeader32 *)(uintptr_t)UlongToPtr(params->images), params->imageCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateSwapchainImages(void *args)
{
    struct xrEnumerateSwapchainImages_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->swapchain), params->imageCapacityInput, params->imageCountOutput, params->images);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateSwapchainImages(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->imageCapacityInput, params->imageCountOutput, params->images);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateViewConfigurationViews(void *args)
{
    struct
    {
        XrInstance instance;
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

    TRACE("0x%s, 0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->viewCapacityInput, params->viewCountOutput, params->views);

    init_conversion_context(ctx);
    views_host = convert_XrViewConfigurationView_array_win32_to_host(ctx, (XrViewConfigurationView32 *)(uintptr_t)UlongToPtr(params->views), params->viewCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateViewConfigurationViews(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationType, params->viewCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->viewCountOutput), views_host);
    convert_XrViewConfigurationView_array_host_to_win32(views_host, (XrViewConfigurationView32 *)(uintptr_t)UlongToPtr(params->views), params->viewCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateViewConfigurationViews(void *args)
{
    struct xrEnumerateViewConfigurationViews_params *params = args;

    TRACE("0x%s, 0x%s, %#x, %u, %p, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->viewCapacityInput, params->viewCountOutput, params->views);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateViewConfigurationViews(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationType, params->viewCapacityInput, params->viewCountOutput, params->views);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateViewConfigurations(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        uint32_t viewConfigurationTypeCapacityInput;
        PTR32 viewConfigurationTypeCountOutput;
        PTR32 viewConfigurationTypes;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->viewConfigurationTypeCapacityInput, params->viewConfigurationTypeCountOutput, params->viewConfigurationTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateViewConfigurations(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationTypeCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->viewConfigurationTypeCountOutput), (XrViewConfigurationType *)(uintptr_t)UlongToPtr(params->viewConfigurationTypes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateViewConfigurations(void *args)
{
    struct xrEnumerateViewConfigurations_params *params = args;

    TRACE("0x%s, 0x%s, %u, %p, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->viewConfigurationTypeCapacityInput, params->viewConfigurationTypeCountOutput, params->viewConfigurationTypes);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateViewConfigurations(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationTypeCapacityInput, params->viewConfigurationTypeCountOutput, params->viewConfigurationTypes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEnumerateViveTrackerPathsHTCX(void *args)
{
    struct
    {
        XrInstance instance;
        uint32_t pathCapacityInput;
        PTR32 pathCountOutput;
        PTR32 paths;
        XrResult result;
    } *params = args;
    XrViveTrackerPathsHTCX *paths_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), params->pathCapacityInput, params->pathCountOutput, params->paths);

    init_conversion_context(ctx);
    paths_host = convert_XrViveTrackerPathsHTCX_array_win32_to_host(ctx, (XrViveTrackerPathsHTCX32 *)(uintptr_t)UlongToPtr(params->paths), params->pathCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateViveTrackerPathsHTCX(wine_instance_from_handle(params->instance)->host_instance, params->pathCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->pathCountOutput), paths_host);
    convert_XrViveTrackerPathsHTCX_array_host_to_win32(paths_host, (XrViveTrackerPathsHTCX32 *)(uintptr_t)UlongToPtr(params->paths), params->pathCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEnumerateViveTrackerPathsHTCX(void *args)
{
    struct xrEnumerateViveTrackerPathsHTCX_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->instance), params->pathCapacityInput, params->pathCountOutput, params->paths);

    params->result = g_xr_host_instance_dispatch_table.p_xrEnumerateViveTrackerPathsHTCX(wine_instance_from_handle(params->instance)->host_instance, params->pathCapacityInput, params->pathCountOutput, params->paths);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEraseSpaceFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpaceEraseInfoFB info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    convert_XrSpaceEraseInfoFB_win32_to_host((const XrSpaceEraseInfoFB32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrEraseSpaceFB(wine_session_from_handle(params->session)->host_session, &info_host, (XrAsyncRequestIdFB *)(uintptr_t)UlongToPtr(params->requestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEraseSpaceFB(void *args)
{
    struct xrEraseSpaceFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrEraseSpaceFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrEraseSpacesMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpacesEraseInfoMETA info_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    init_conversion_context(ctx);
    convert_XrSpacesEraseInfoMETA_win32_to_host(ctx, (const XrSpacesEraseInfoMETA32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrEraseSpacesMETA(wine_session_from_handle(params->session)->host_session, &info_host, (XrAsyncRequestIdFB *)(uintptr_t)UlongToPtr(params->requestId));
    convert_XrSpacesEraseInfoMETA_host_to_win32(&info_host, (XrSpacesEraseInfoMETA32 *)(const XrSpacesEraseInfoMETA32 *)(uintptr_t)UlongToPtr(params->info));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrEraseSpacesMETA(void *args)
{
    struct xrEraseSpacesMETA_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrEraseSpacesMETA(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrFreeWorldMeshBufferML(void *args)
{
    struct
    {
        XrWorldMeshDetectorML detector;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrWorldMeshBufferML buffer_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->detector), params->buffer);

    convert_XrWorldMeshBufferML_win32_to_host((const XrWorldMeshBufferML32 *)(uintptr_t)UlongToPtr(params->buffer), &buffer_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrFreeWorldMeshBufferML(params->detector, &buffer_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrFreeWorldMeshBufferML(void *args)
{
    struct xrFreeWorldMeshBufferML_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->detector), params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrFreeWorldMeshBufferML(params->detector, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGeometryInstanceSetTransformFB(void *args)
{
    struct
    {
        XrGeometryInstanceFB instance;
        PTR32 transformation;
        XrResult result;
    } *params = args;
    XrGeometryInstanceTransformFB transformation_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->instance), params->transformation);

    convert_XrGeometryInstanceTransformFB_win32_to_host((const XrGeometryInstanceTransformFB32 *)(uintptr_t)UlongToPtr(params->transformation), &transformation_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGeometryInstanceSetTransformFB(params->instance, &transformation_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGeometryInstanceSetTransformFB(void *args)
{
    struct xrGeometryInstanceSetTransformFB_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->instance), params->transformation);

    params->result = g_xr_host_instance_dispatch_table.p_xrGeometryInstanceSetTransformFB(params->instance, params->transformation);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetActionStateBoolean(void *args)
{
    struct
    {
        XrSession session;
        PTR32 getInfo;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrActionStateGetInfo getInfo_host;
    XrActionStateBoolean state_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->getInfo, params->state);

    convert_XrActionStateGetInfo_win32_to_host((const XrActionStateGetInfo32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrActionStateBoolean_win32_to_host((XrActionStateBoolean32 *)(uintptr_t)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStateBoolean(wine_session_from_handle(params->session)->host_session, &getInfo_host, &state_host);
    convert_XrActionStateBoolean_host_to_win32(&state_host, (XrActionStateBoolean32 *)(XrActionStateBoolean32 *)(uintptr_t)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetActionStateBoolean(void *args)
{
    struct xrGetActionStateBoolean_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->getInfo, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStateBoolean(wine_session_from_handle(params->session)->host_session, params->getInfo, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetActionStateFloat(void *args)
{
    struct
    {
        XrSession session;
        PTR32 getInfo;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrActionStateGetInfo getInfo_host;
    XrActionStateFloat state_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->getInfo, params->state);

    convert_XrActionStateGetInfo_win32_to_host((const XrActionStateGetInfo32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrActionStateFloat_win32_to_host((XrActionStateFloat32 *)(uintptr_t)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStateFloat(wine_session_from_handle(params->session)->host_session, &getInfo_host, &state_host);
    convert_XrActionStateFloat_host_to_win32(&state_host, (XrActionStateFloat32 *)(XrActionStateFloat32 *)(uintptr_t)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetActionStateFloat(void *args)
{
    struct xrGetActionStateFloat_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->getInfo, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStateFloat(wine_session_from_handle(params->session)->host_session, params->getInfo, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetActionStatePose(void *args)
{
    struct
    {
        XrSession session;
        PTR32 getInfo;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrActionStateGetInfo getInfo_host;
    XrActionStatePose state_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->getInfo, params->state);

    convert_XrActionStateGetInfo_win32_to_host((const XrActionStateGetInfo32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrActionStatePose_win32_to_host((XrActionStatePose32 *)(uintptr_t)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStatePose(wine_session_from_handle(params->session)->host_session, &getInfo_host, &state_host);
    convert_XrActionStatePose_host_to_win32(&state_host, (XrActionStatePose32 *)(XrActionStatePose32 *)(uintptr_t)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetActionStatePose(void *args)
{
    struct xrGetActionStatePose_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->getInfo, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStatePose(wine_session_from_handle(params->session)->host_session, params->getInfo, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetActionStateVector2f(void *args)
{
    struct
    {
        XrSession session;
        PTR32 getInfo;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrActionStateGetInfo getInfo_host;
    XrActionStateVector2f state_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->getInfo, params->state);

    convert_XrActionStateGetInfo_win32_to_host((const XrActionStateGetInfo32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrActionStateVector2f_win32_to_host((XrActionStateVector2f32 *)(uintptr_t)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStateVector2f(wine_session_from_handle(params->session)->host_session, &getInfo_host, &state_host);
    convert_XrActionStateVector2f_host_to_win32(&state_host, (XrActionStateVector2f32 *)(XrActionStateVector2f32 *)(uintptr_t)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetActionStateVector2f(void *args)
{
    struct xrGetActionStateVector2f_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->getInfo, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetActionStateVector2f(wine_session_from_handle(params->session)->host_session, params->getInfo, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetAllTrackablesANDROID(void *args)
{
    struct
    {
        XrTrackableTrackerANDROID trackableTracker;
        uint32_t trackableCapacityInput;
        PTR32 trackableCountOutput;
        PTR32 trackables;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->trackableTracker), params->trackableCapacityInput, params->trackableCountOutput, params->trackables);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAllTrackablesANDROID(params->trackableTracker, params->trackableCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->trackableCountOutput), (XrTrackableANDROID *)(uintptr_t)UlongToPtr(params->trackables));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetAllTrackablesANDROID(void *args)
{
    struct xrGetAllTrackablesANDROID_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->trackableTracker), params->trackableCapacityInput, params->trackableCountOutput, params->trackables);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAllTrackablesANDROID(params->trackableTracker, params->trackableCapacityInput, params->trackableCountOutput, params->trackables);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetAnchorPersistStateANDROID(void *args)
{
    struct
    {
        XrDeviceAnchorPersistenceANDROID handle;
        PTR32 anchorId;
        PTR32 persistState;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->handle), params->anchorId, params->persistState);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAnchorPersistStateANDROID(params->handle, (const XrUuidEXT *)(uintptr_t)UlongToPtr(params->anchorId), (XrAnchorPersistStateANDROID *)(uintptr_t)UlongToPtr(params->persistState));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetAnchorPersistStateANDROID(void *args)
{
    struct xrGetAnchorPersistStateANDROID_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->handle), params->anchorId, params->persistState);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAnchorPersistStateANDROID(params->handle, params->anchorId, params->persistState);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetAnchorUuidBD(void *args)
{
    struct
    {
        XrAnchorBD anchor;
        PTR32 uuid;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->anchor), params->uuid);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAnchorUuidBD(params->anchor, (XrUuidEXT *)(uintptr_t)UlongToPtr(params->uuid));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetAnchorUuidBD(void *args)
{
    struct xrGetAnchorUuidBD_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->anchor), params->uuid);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAnchorUuidBD(params->anchor, params->uuid);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetAudioInputDeviceGuidOculus(void *args)
{
    struct
    {
        XrInstance instance;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->instance), params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAudioInputDeviceGuidOculus(wine_instance_from_handle(params->instance)->host_instance, (wchar_t *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetAudioInputDeviceGuidOculus(void *args)
{
    struct xrGetAudioInputDeviceGuidOculus_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->instance), params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAudioInputDeviceGuidOculus(wine_instance_from_handle(params->instance)->host_instance, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetAudioOutputDeviceGuidOculus(void *args)
{
    struct
    {
        XrInstance instance;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->instance), params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAudioOutputDeviceGuidOculus(wine_instance_from_handle(params->instance)->host_instance, (wchar_t *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetAudioOutputDeviceGuidOculus(void *args)
{
    struct xrGetAudioOutputDeviceGuidOculus_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->instance), params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetAudioOutputDeviceGuidOculus(wine_instance_from_handle(params->instance)->host_instance, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetBodySkeletonFB(void *args)
{
    struct
    {
        XrBodyTrackerFB bodyTracker;
        PTR32 skeleton;
        XrResult result;
    } *params = args;
    XrBodySkeletonFB skeleton_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->bodyTracker), params->skeleton);

    convert_XrBodySkeletonFB_win32_to_host((XrBodySkeletonFB32 *)(uintptr_t)UlongToPtr(params->skeleton), &skeleton_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetBodySkeletonFB(params->bodyTracker, &skeleton_host);
    convert_XrBodySkeletonFB_host_to_win32(&skeleton_host, (XrBodySkeletonFB32 *)(XrBodySkeletonFB32 *)(uintptr_t)UlongToPtr(params->skeleton));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetBodySkeletonFB(void *args)
{
    struct xrGetBodySkeletonFB_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->bodyTracker), params->skeleton);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetBodySkeletonFB(params->bodyTracker, params->skeleton);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetBodySkeletonHTC(void *args)
{
    struct
    {
        XrBodyTrackerHTC bodyTracker;
        XrSpace baseSpace;
        uint32_t skeletonGenerationId;
        PTR32 skeleton;
        XrResult result;
    } *params = args;
    XrBodySkeletonHTC skeleton_host;

    TRACE("0x%s, 0x%s, %u, %#x\n", TRACE_HANDLE(params->bodyTracker), TRACE_HANDLE(params->baseSpace), params->skeletonGenerationId, params->skeleton);

    convert_XrBodySkeletonHTC_win32_to_host((XrBodySkeletonHTC32 *)(uintptr_t)UlongToPtr(params->skeleton), &skeleton_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetBodySkeletonHTC(params->bodyTracker, params->baseSpace, params->skeletonGenerationId, &skeleton_host);
    convert_XrBodySkeletonHTC_host_to_win32(&skeleton_host, (XrBodySkeletonHTC32 *)(XrBodySkeletonHTC32 *)(uintptr_t)UlongToPtr(params->skeleton));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetBodySkeletonHTC(void *args)
{
    struct xrGetBodySkeletonHTC_params *params = args;

    TRACE("0x%s, 0x%s, %u, %p\n", TRACE_HANDLE(params->bodyTracker), TRACE_HANDLE(params->baseSpace), params->skeletonGenerationId, params->skeleton);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetBodySkeletonHTC(params->bodyTracker, params->baseSpace, params->skeletonGenerationId, params->skeleton);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetControllerModelKeyMSFT(void *args)
{
    struct
    {
        XrSession session;
        XrPath topLevelUserPath;
        PTR32 controllerModelKeyState;
        XrResult result;
    } *params = args;
    XrControllerModelKeyStateMSFT controllerModelKeyState_host;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->topLevelUserPath), params->controllerModelKeyState);

    convert_XrControllerModelKeyStateMSFT_win32_to_host((XrControllerModelKeyStateMSFT32 *)(uintptr_t)UlongToPtr(params->controllerModelKeyState), &controllerModelKeyState_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetControllerModelKeyMSFT(wine_session_from_handle(params->session)->host_session, params->topLevelUserPath, &controllerModelKeyState_host);
    convert_XrControllerModelKeyStateMSFT_host_to_win32(&controllerModelKeyState_host, (XrControllerModelKeyStateMSFT32 *)(XrControllerModelKeyStateMSFT32 *)(uintptr_t)UlongToPtr(params->controllerModelKeyState));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetControllerModelKeyMSFT(void *args)
{
    struct xrGetControllerModelKeyMSFT_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->topLevelUserPath), params->controllerModelKeyState);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetControllerModelKeyMSFT(wine_session_from_handle(params->session)->host_session, params->topLevelUserPath, params->controllerModelKeyState);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetControllerModelPropertiesMSFT(void *args)
{
    struct
    {
        XrSession session;
        XrControllerModelKeyMSFT modelKey;
        PTR32 properties;
        XrResult result;
    } *params = args;
    XrControllerModelPropertiesMSFT properties_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->modelKey), params->properties);

    init_conversion_context(ctx);
    convert_XrControllerModelPropertiesMSFT_win32_to_host(ctx, (XrControllerModelPropertiesMSFT32 *)(uintptr_t)UlongToPtr(params->properties), &properties_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetControllerModelPropertiesMSFT(wine_session_from_handle(params->session)->host_session, params->modelKey, &properties_host);
    convert_XrControllerModelPropertiesMSFT_host_to_win32(&properties_host, (XrControllerModelPropertiesMSFT32 *)(XrControllerModelPropertiesMSFT32 *)(uintptr_t)UlongToPtr(params->properties));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetControllerModelPropertiesMSFT(void *args)
{
    struct xrGetControllerModelPropertiesMSFT_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->modelKey), params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetControllerModelPropertiesMSFT(wine_session_from_handle(params->session)->host_session, params->modelKey, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetControllerModelStateMSFT(void *args)
{
    struct
    {
        XrSession session;
        XrControllerModelKeyMSFT modelKey;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrControllerModelStateMSFT state_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->modelKey), params->state);

    init_conversion_context(ctx);
    convert_XrControllerModelStateMSFT_win32_to_host(ctx, (XrControllerModelStateMSFT32 *)(uintptr_t)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetControllerModelStateMSFT(wine_session_from_handle(params->session)->host_session, params->modelKey, &state_host);
    convert_XrControllerModelStateMSFT_host_to_win32(&state_host, (XrControllerModelStateMSFT32 *)(XrControllerModelStateMSFT32 *)(uintptr_t)UlongToPtr(params->state));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetControllerModelStateMSFT(void *args)
{
    struct xrGetControllerModelStateMSFT_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->modelKey), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetControllerModelStateMSFT(wine_session_from_handle(params->session)->host_session, params->modelKey, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetCurrentInteractionProfile(void *args)
{
    struct
    {
        XrSession session;
        XrPath topLevelUserPath;
        PTR32 interactionProfile;
        XrResult result;
    } *params = args;
    XrInteractionProfileState interactionProfile_host;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->topLevelUserPath), params->interactionProfile);

    convert_XrInteractionProfileState_win32_to_host((XrInteractionProfileState32 *)(uintptr_t)UlongToPtr(params->interactionProfile), &interactionProfile_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetCurrentInteractionProfile(wine_session_from_handle(params->session)->host_session, params->topLevelUserPath, &interactionProfile_host);
    convert_XrInteractionProfileState_host_to_win32(&interactionProfile_host, (XrInteractionProfileState32 *)(XrInteractionProfileState32 *)(uintptr_t)UlongToPtr(params->interactionProfile));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetCurrentInteractionProfile(void *args)
{
    struct xrGetCurrentInteractionProfile_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->topLevelUserPath), params->interactionProfile);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetCurrentInteractionProfile(wine_session_from_handle(params->session)->host_session, params->topLevelUserPath, params->interactionProfile);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetDeviceSampleRateFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 hapticActionInfo;
        PTR32 deviceSampleRate;
        XrResult result;
    } *params = args;
    XrHapticActionInfo hapticActionInfo_host;
    XrDevicePcmSampleRateGetInfoFB deviceSampleRate_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->hapticActionInfo, params->deviceSampleRate);

    convert_XrHapticActionInfo_win32_to_host((const XrHapticActionInfo32 *)(uintptr_t)UlongToPtr(params->hapticActionInfo), &hapticActionInfo_host);
    convert_XrDevicePcmSampleRateGetInfoFB_win32_to_host((XrDevicePcmSampleRateGetInfoFB32 *)(uintptr_t)UlongToPtr(params->deviceSampleRate), &deviceSampleRate_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetDeviceSampleRateFB(wine_session_from_handle(params->session)->host_session, &hapticActionInfo_host, &deviceSampleRate_host);
    convert_XrDevicePcmSampleRateGetInfoFB_host_to_win32(&deviceSampleRate_host, (XrDevicePcmSampleRateGetInfoFB32 *)(XrDevicePcmSampleRateGetInfoFB32 *)(uintptr_t)UlongToPtr(params->deviceSampleRate));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetDeviceSampleRateFB(void *args)
{
    struct xrGetDeviceSampleRateFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->hapticActionInfo, params->deviceSampleRate);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetDeviceSampleRateFB(wine_session_from_handle(params->session)->host_session, params->hapticActionInfo, params->deviceSampleRate);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetDisplayRefreshRateFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 displayRefreshRate;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->displayRefreshRate);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetDisplayRefreshRateFB(wine_session_from_handle(params->session)->host_session, (float *)(uintptr_t)UlongToPtr(params->displayRefreshRate));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetDisplayRefreshRateFB(void *args)
{
    struct xrGetDisplayRefreshRateFB_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->displayRefreshRate);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetDisplayRefreshRateFB(wine_session_from_handle(params->session)->host_session, params->displayRefreshRate);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetEnvironmentDepthSwapchainStateMETA(void *args)
{
    struct
    {
        XrEnvironmentDepthSwapchainMETA swapchain;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrEnvironmentDepthSwapchainStateMETA state_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->swapchain), params->state);

    convert_XrEnvironmentDepthSwapchainStateMETA_win32_to_host((XrEnvironmentDepthSwapchainStateMETA32 *)(uintptr_t)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetEnvironmentDepthSwapchainStateMETA(params->swapchain, &state_host);
    convert_XrEnvironmentDepthSwapchainStateMETA_host_to_win32(&state_host, (XrEnvironmentDepthSwapchainStateMETA32 *)(XrEnvironmentDepthSwapchainStateMETA32 *)(uintptr_t)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetEnvironmentDepthSwapchainStateMETA(void *args)
{
    struct xrGetEnvironmentDepthSwapchainStateMETA_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->swapchain), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetEnvironmentDepthSwapchainStateMETA(params->swapchain, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetExportedLocalizationMapDataML(void *args)
{
    struct
    {
        XrExportedLocalizationMapML map;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->map), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetExportedLocalizationMapDataML(params->map, params->bufferCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->bufferCountOutput), (char *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetExportedLocalizationMapDataML(void *args)
{
    struct xrGetExportedLocalizationMapDataML_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->map), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetExportedLocalizationMapDataML(params->map, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetEyeGazesFB(void *args)
{
    struct
    {
        XrEyeTrackerFB eyeTracker;
        PTR32 gazeInfo;
        PTR32 eyeGazes;
        XrResult result;
    } *params = args;
    XrEyeGazesInfoFB gazeInfo_host;
    XrEyeGazesFB eyeGazes_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->eyeTracker), params->gazeInfo, params->eyeGazes);

    convert_XrEyeGazesInfoFB_win32_to_host((const XrEyeGazesInfoFB32 *)(uintptr_t)UlongToPtr(params->gazeInfo), &gazeInfo_host);
    convert_XrEyeGazesFB_win32_to_host((XrEyeGazesFB32 *)(uintptr_t)UlongToPtr(params->eyeGazes), &eyeGazes_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetEyeGazesFB(params->eyeTracker, &gazeInfo_host, &eyeGazes_host);
    convert_XrEyeGazesFB_host_to_win32(&eyeGazes_host, (XrEyeGazesFB32 *)(XrEyeGazesFB32 *)(uintptr_t)UlongToPtr(params->eyeGazes));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetEyeGazesFB(void *args)
{
    struct xrGetEyeGazesFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->eyeTracker), params->gazeInfo, params->eyeGazes);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetEyeGazesFB(params->eyeTracker, params->gazeInfo, params->eyeGazes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetFaceExpressionWeights2FB(void *args)
{
    struct
    {
        XrFaceTracker2FB faceTracker;
        PTR32 expressionInfo;
        PTR32 expressionWeights;
        XrResult result;
    } *params = args;
    XrFaceExpressionInfo2FB expressionInfo_host;
    XrFaceExpressionWeights2FB expressionWeights_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->faceTracker), params->expressionInfo, params->expressionWeights);

    convert_XrFaceExpressionInfo2FB_win32_to_host((const XrFaceExpressionInfo2FB32 *)(uintptr_t)UlongToPtr(params->expressionInfo), &expressionInfo_host);
    convert_XrFaceExpressionWeights2FB_win32_to_host((XrFaceExpressionWeights2FB32 *)(uintptr_t)UlongToPtr(params->expressionWeights), &expressionWeights_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetFaceExpressionWeights2FB(params->faceTracker, &expressionInfo_host, &expressionWeights_host);
    convert_XrFaceExpressionWeights2FB_host_to_win32(&expressionWeights_host, (XrFaceExpressionWeights2FB32 *)(XrFaceExpressionWeights2FB32 *)(uintptr_t)UlongToPtr(params->expressionWeights));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetFaceExpressionWeights2FB(void *args)
{
    struct xrGetFaceExpressionWeights2FB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->faceTracker), params->expressionInfo, params->expressionWeights);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetFaceExpressionWeights2FB(params->faceTracker, params->expressionInfo, params->expressionWeights);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetFaceExpressionWeightsFB(void *args)
{
    struct
    {
        XrFaceTrackerFB faceTracker;
        PTR32 expressionInfo;
        PTR32 expressionWeights;
        XrResult result;
    } *params = args;
    XrFaceExpressionInfoFB expressionInfo_host;
    XrFaceExpressionWeightsFB expressionWeights_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->faceTracker), params->expressionInfo, params->expressionWeights);

    convert_XrFaceExpressionInfoFB_win32_to_host((const XrFaceExpressionInfoFB32 *)(uintptr_t)UlongToPtr(params->expressionInfo), &expressionInfo_host);
    convert_XrFaceExpressionWeightsFB_win32_to_host((XrFaceExpressionWeightsFB32 *)(uintptr_t)UlongToPtr(params->expressionWeights), &expressionWeights_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetFaceExpressionWeightsFB(params->faceTracker, &expressionInfo_host, &expressionWeights_host);
    convert_XrFaceExpressionWeightsFB_host_to_win32(&expressionWeights_host, (XrFaceExpressionWeightsFB32 *)(XrFaceExpressionWeightsFB32 *)(uintptr_t)UlongToPtr(params->expressionWeights));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetFaceExpressionWeightsFB(void *args)
{
    struct xrGetFaceExpressionWeightsFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->faceTracker), params->expressionInfo, params->expressionWeights);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetFaceExpressionWeightsFB(params->faceTracker, params->expressionInfo, params->expressionWeights);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetFacialExpressionBlendShapePropertiesML(void *args)
{
    struct
    {
        XrFacialExpressionClientML facialExpressionClient;
        PTR32 blendShapeGetInfo;
        uint32_t blendShapeCount;
        PTR32 blendShapes;
        XrResult result;
    } *params = args;
    XrFacialExpressionBlendShapeGetInfoML blendShapeGetInfo_host;
    XrFacialExpressionBlendShapePropertiesML *blendShapes_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %u, %#x\n", TRACE_HANDLE(params->facialExpressionClient), params->blendShapeGetInfo, params->blendShapeCount, params->blendShapes);

    init_conversion_context(ctx);
    convert_XrFacialExpressionBlendShapeGetInfoML_win32_to_host((const XrFacialExpressionBlendShapeGetInfoML32 *)(uintptr_t)UlongToPtr(params->blendShapeGetInfo), &blendShapeGetInfo_host);
    blendShapes_host = convert_XrFacialExpressionBlendShapePropertiesML_array_win32_to_host(ctx, (XrFacialExpressionBlendShapePropertiesML32 *)(uintptr_t)UlongToPtr(params->blendShapes), params->blendShapeCount);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetFacialExpressionBlendShapePropertiesML(params->facialExpressionClient, &blendShapeGetInfo_host, params->blendShapeCount, blendShapes_host);
    convert_XrFacialExpressionBlendShapePropertiesML_array_host_to_win32(blendShapes_host, (XrFacialExpressionBlendShapePropertiesML32 *)(uintptr_t)UlongToPtr(params->blendShapes), params->blendShapeCount);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetFacialExpressionBlendShapePropertiesML(void *args)
{
    struct xrGetFacialExpressionBlendShapePropertiesML_params *params = args;

    TRACE("0x%s, %p, %u, %p\n", TRACE_HANDLE(params->facialExpressionClient), params->blendShapeGetInfo, params->blendShapeCount, params->blendShapes);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetFacialExpressionBlendShapePropertiesML(params->facialExpressionClient, params->blendShapeGetInfo, params->blendShapeCount, params->blendShapes);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetFacialExpressionsHTC(void *args)
{
    struct
    {
        XrFacialTrackerHTC facialTracker;
        PTR32 facialExpressions;
        XrResult result;
    } *params = args;
    XrFacialExpressionsHTC facialExpressions_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->facialTracker), params->facialExpressions);

    convert_XrFacialExpressionsHTC_win32_to_host((XrFacialExpressionsHTC32 *)(uintptr_t)UlongToPtr(params->facialExpressions), &facialExpressions_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetFacialExpressionsHTC(params->facialTracker, &facialExpressions_host);
    convert_XrFacialExpressionsHTC_host_to_win32(&facialExpressions_host, (XrFacialExpressionsHTC32 *)(XrFacialExpressionsHTC32 *)(uintptr_t)UlongToPtr(params->facialExpressions));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetFacialExpressionsHTC(void *args)
{
    struct xrGetFacialExpressionsHTC_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->facialTracker), params->facialExpressions);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetFacialExpressionsHTC(params->facialTracker, params->facialExpressions);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetFoveationEyeTrackedStateMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 foveationState;
        XrResult result;
    } *params = args;
    XrFoveationEyeTrackedStateMETA foveationState_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->foveationState);

    convert_XrFoveationEyeTrackedStateMETA_win32_to_host((XrFoveationEyeTrackedStateMETA32 *)(uintptr_t)UlongToPtr(params->foveationState), &foveationState_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetFoveationEyeTrackedStateMETA(wine_session_from_handle(params->session)->host_session, &foveationState_host);
    convert_XrFoveationEyeTrackedStateMETA_host_to_win32(&foveationState_host, (XrFoveationEyeTrackedStateMETA32 *)(XrFoveationEyeTrackedStateMETA32 *)(uintptr_t)UlongToPtr(params->foveationState));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetFoveationEyeTrackedStateMETA(void *args)
{
    struct xrGetFoveationEyeTrackedStateMETA_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->foveationState);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetFoveationEyeTrackedStateMETA(wine_session_from_handle(params->session)->host_session, params->foveationState);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetHandMeshFB(void *args)
{
    struct
    {
        XrHandTrackerEXT handTracker;
        PTR32 mesh;
        XrResult result;
    } *params = args;
    XrHandTrackingMeshFB mesh_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->handTracker), params->mesh);

    convert_XrHandTrackingMeshFB_win32_to_host((XrHandTrackingMeshFB32 *)(uintptr_t)UlongToPtr(params->mesh), &mesh_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetHandMeshFB(params->handTracker, &mesh_host);
    convert_XrHandTrackingMeshFB_host_to_win32(&mesh_host, (XrHandTrackingMeshFB32 *)(XrHandTrackingMeshFB32 *)(uintptr_t)UlongToPtr(params->mesh));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetHandMeshFB(void *args)
{
    struct xrGetHandMeshFB_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->handTracker), params->mesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetHandMeshFB(params->handTracker, params->mesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetInputSourceLocalizedName(void *args)
{
    struct
    {
        XrSession session;
        PTR32 getInfo;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrInputSourceLocalizedNameGetInfo getInfo_host;

    TRACE("0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->session), params->getInfo, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    convert_XrInputSourceLocalizedNameGetInfo_win32_to_host((const XrInputSourceLocalizedNameGetInfo32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetInputSourceLocalizedName(wine_session_from_handle(params->session)->host_session, &getInfo_host, params->bufferCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->bufferCountOutput), (char *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetInputSourceLocalizedName(void *args)
{
    struct xrGetInputSourceLocalizedName_params *params = args;

    TRACE("0x%s, %p, %u, %p, %p\n", TRACE_HANDLE(params->session), params->getInfo, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetInputSourceLocalizedName(wine_session_from_handle(params->session)->host_session, params->getInfo, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetInstanceProperties(void *args)
{
    struct
    {
        XrInstance instance;
        PTR32 instanceProperties;
        XrResult result;
    } *params = args;
    XrInstanceProperties instanceProperties_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->instance), params->instanceProperties);

    convert_XrInstanceProperties_win32_to_host((XrInstanceProperties32 *)(uintptr_t)UlongToPtr(params->instanceProperties), &instanceProperties_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetInstanceProperties(wine_instance_from_handle(params->instance)->host_instance, &instanceProperties_host);
    convert_XrInstanceProperties_host_to_win32(&instanceProperties_host, (XrInstanceProperties32 *)(XrInstanceProperties32 *)(uintptr_t)UlongToPtr(params->instanceProperties));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetInstanceProperties(void *args)
{
    struct xrGetInstanceProperties_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->instance), params->instanceProperties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetInstanceProperties(wine_instance_from_handle(params->instance)->host_instance, params->instanceProperties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetMarkerDetectorStateML(void *args)
{
    struct
    {
        XrMarkerDetectorML markerDetector;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrMarkerDetectorStateML state_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->markerDetector), params->state);

    convert_XrMarkerDetectorStateML_win32_to_host((XrMarkerDetectorStateML32 *)(uintptr_t)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerDetectorStateML(params->markerDetector, &state_host);
    convert_XrMarkerDetectorStateML_host_to_win32(&state_host, (XrMarkerDetectorStateML32 *)(XrMarkerDetectorStateML32 *)(uintptr_t)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerDetectorStateML(void *args)
{
    struct xrGetMarkerDetectorStateML_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->markerDetector), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerDetectorStateML(params->markerDetector, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetMarkerLengthML(void *args)
{
    struct
    {
        XrMarkerDetectorML markerDetector;
        XrMarkerML marker;
        PTR32 meters;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->markerDetector), wine_dbgstr_longlong(params->marker), params->meters);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerLengthML(params->markerDetector, params->marker, (float *)(uintptr_t)UlongToPtr(params->meters));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerLengthML(void *args)
{
    struct xrGetMarkerLengthML_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->markerDetector), wine_dbgstr_longlong(params->marker), params->meters);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerLengthML(params->markerDetector, params->marker, params->meters);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetMarkerNumberML(void *args)
{
    struct
    {
        XrMarkerDetectorML markerDetector;
        XrMarkerML marker;
        PTR32 number;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->markerDetector), wine_dbgstr_longlong(params->marker), params->number);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerNumberML(params->markerDetector, params->marker, (uint64_t *)(uintptr_t)UlongToPtr(params->number));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerNumberML(void *args)
{
    struct xrGetMarkerNumberML_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->markerDetector), wine_dbgstr_longlong(params->marker), params->number);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerNumberML(params->markerDetector, params->marker, params->number);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetMarkerReprojectionErrorML(void *args)
{
    struct
    {
        XrMarkerDetectorML markerDetector;
        XrMarkerML marker;
        PTR32 reprojectionErrorMeters;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->markerDetector), wine_dbgstr_longlong(params->marker), params->reprojectionErrorMeters);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerReprojectionErrorML(params->markerDetector, params->marker, (float *)(uintptr_t)UlongToPtr(params->reprojectionErrorMeters));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerReprojectionErrorML(void *args)
{
    struct xrGetMarkerReprojectionErrorML_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->markerDetector), wine_dbgstr_longlong(params->marker), params->reprojectionErrorMeters);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerReprojectionErrorML(params->markerDetector, params->marker, params->reprojectionErrorMeters);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetMarkerSizeVARJO(void *args)
{
    struct
    {
        XrSession session;
        uint64_t DECLSPEC_ALIGN(8) markerId;
        PTR32 size;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->markerId), params->size);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerSizeVARJO(wine_session_from_handle(params->session)->host_session, params->markerId, (XrExtent2Df *)(uintptr_t)UlongToPtr(params->size));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerSizeVARJO(void *args)
{
    struct xrGetMarkerSizeVARJO_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->markerId), params->size);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerSizeVARJO(wine_session_from_handle(params->session)->host_session, params->markerId, params->size);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetMarkerStringML(void *args)
{
    struct
    {
        XrMarkerDetectorML markerDetector;
        XrMarkerML marker;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->markerDetector), wine_dbgstr_longlong(params->marker), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerStringML(params->markerDetector, params->marker, params->bufferCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->bufferCountOutput), (char *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkerStringML(void *args)
{
    struct xrGetMarkerStringML_params *params = args;

    TRACE("0x%s, 0x%s, %u, %p, %p\n", TRACE_HANDLE(params->markerDetector), wine_dbgstr_longlong(params->marker), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkerStringML(params->markerDetector, params->marker, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetMarkersML(void *args)
{
    struct
    {
        XrMarkerDetectorML markerDetector;
        uint32_t markerCapacityInput;
        PTR32 markerCountOutput;
        PTR32 markers;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->markerDetector), params->markerCapacityInput, params->markerCountOutput, params->markers);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkersML(params->markerDetector, params->markerCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->markerCountOutput), (XrMarkerML *)(uintptr_t)UlongToPtr(params->markers));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetMarkersML(void *args)
{
    struct xrGetMarkersML_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->markerDetector), params->markerCapacityInput, params->markerCountOutput, params->markers);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetMarkersML(params->markerDetector, params->markerCapacityInput, params->markerCountOutput, params->markers);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetOpenGLGraphicsRequirementsKHR(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        PTR32 graphicsRequirements;
        XrResult result;
    } *params = args;
    XrGraphicsRequirementsOpenGLKHR graphicsRequirements_host;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->graphicsRequirements);

    convert_XrGraphicsRequirementsOpenGLKHR_win32_to_host((XrGraphicsRequirementsOpenGLKHR32 *)(uintptr_t)UlongToPtr(params->graphicsRequirements), &graphicsRequirements_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetOpenGLGraphicsRequirementsKHR(wine_instance_from_handle(params->instance)->host_instance, params->systemId, &graphicsRequirements_host);
    convert_XrGraphicsRequirementsOpenGLKHR_host_to_win32(&graphicsRequirements_host, (XrGraphicsRequirementsOpenGLKHR32 *)(XrGraphicsRequirementsOpenGLKHR32 *)(uintptr_t)UlongToPtr(params->graphicsRequirements));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetOpenGLGraphicsRequirementsKHR(void *args)
{
    struct xrGetOpenGLGraphicsRequirementsKHR_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->graphicsRequirements);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetOpenGLGraphicsRequirementsKHR(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->graphicsRequirements);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetPassthroughCameraStateANDROID(void *args)
{
    struct
    {
        XrSession session;
        PTR32 getInfo;
        PTR32 cameraStateOutput;
        XrResult result;
    } *params = args;
    XrPassthroughCameraStateGetInfoANDROID getInfo_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->getInfo, params->cameraStateOutput);

    convert_XrPassthroughCameraStateGetInfoANDROID_win32_to_host((const XrPassthroughCameraStateGetInfoANDROID32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetPassthroughCameraStateANDROID(wine_session_from_handle(params->session)->host_session, &getInfo_host, (XrPassthroughCameraStateANDROID *)(uintptr_t)UlongToPtr(params->cameraStateOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPassthroughCameraStateANDROID(void *args)
{
    struct xrGetPassthroughCameraStateANDROID_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->getInfo, params->cameraStateOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPassthroughCameraStateANDROID(wine_session_from_handle(params->session)->host_session, params->getInfo, params->cameraStateOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetPassthroughPreferencesMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 preferences;
        XrResult result;
    } *params = args;
    XrPassthroughPreferencesMETA preferences_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->preferences);

    convert_XrPassthroughPreferencesMETA_win32_to_host((XrPassthroughPreferencesMETA32 *)(uintptr_t)UlongToPtr(params->preferences), &preferences_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetPassthroughPreferencesMETA(wine_session_from_handle(params->session)->host_session, &preferences_host);
    convert_XrPassthroughPreferencesMETA_host_to_win32(&preferences_host, (XrPassthroughPreferencesMETA32 *)(XrPassthroughPreferencesMETA32 *)(uintptr_t)UlongToPtr(params->preferences));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPassthroughPreferencesMETA(void *args)
{
    struct xrGetPassthroughPreferencesMETA_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->preferences);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPassthroughPreferencesMETA(wine_session_from_handle(params->session)->host_session, params->preferences);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetPerformanceMetricsStateMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrPerformanceMetricsStateMETA state_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->state);

    convert_XrPerformanceMetricsStateMETA_win32_to_host((XrPerformanceMetricsStateMETA32 *)(uintptr_t)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetPerformanceMetricsStateMETA(wine_session_from_handle(params->session)->host_session, &state_host);
    convert_XrPerformanceMetricsStateMETA_host_to_win32(&state_host, (XrPerformanceMetricsStateMETA32 *)(XrPerformanceMetricsStateMETA32 *)(uintptr_t)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPerformanceMetricsStateMETA(void *args)
{
    struct xrGetPerformanceMetricsStateMETA_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPerformanceMetricsStateMETA(wine_session_from_handle(params->session)->host_session, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetPlaneDetectionStateEXT(void *args)
{
    struct
    {
        XrPlaneDetectorEXT planeDetector;
        PTR32 state;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->planeDetector), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPlaneDetectionStateEXT(params->planeDetector, (XrPlaneDetectionStateEXT *)(uintptr_t)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPlaneDetectionStateEXT(void *args)
{
    struct xrGetPlaneDetectionStateEXT_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->planeDetector), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPlaneDetectionStateEXT(params->planeDetector, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetPlaneDetectionsEXT(void *args)
{
    struct
    {
        XrPlaneDetectorEXT planeDetector;
        PTR32 info;
        PTR32 locations;
        XrResult result;
    } *params = args;
    XrPlaneDetectorGetInfoEXT info_host;
    XrPlaneDetectorLocationsEXT locations_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->planeDetector), params->info, params->locations);

    init_conversion_context(ctx);
    convert_XrPlaneDetectorGetInfoEXT_win32_to_host((const XrPlaneDetectorGetInfoEXT32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    convert_XrPlaneDetectorLocationsEXT_win32_to_host(ctx, (XrPlaneDetectorLocationsEXT32 *)(uintptr_t)UlongToPtr(params->locations), &locations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetPlaneDetectionsEXT(params->planeDetector, &info_host, &locations_host);
    convert_XrPlaneDetectorLocationsEXT_host_to_win32(&locations_host, (XrPlaneDetectorLocationsEXT32 *)(XrPlaneDetectorLocationsEXT32 *)(uintptr_t)UlongToPtr(params->locations));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPlaneDetectionsEXT(void *args)
{
    struct xrGetPlaneDetectionsEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->planeDetector), params->info, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPlaneDetectionsEXT(params->planeDetector, params->info, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetPlanePolygonBufferEXT(void *args)
{
    struct
    {
        XrPlaneDetectorEXT planeDetector;
        uint64_t DECLSPEC_ALIGN(8) planeId;
        uint32_t polygonBufferIndex;
        PTR32 polygonBuffer;
        XrResult result;
    } *params = args;
    XrPlaneDetectorPolygonBufferEXT polygonBuffer_host;

    TRACE("0x%s, 0x%s, %u, %#x\n", TRACE_HANDLE(params->planeDetector), wine_dbgstr_longlong(params->planeId), params->polygonBufferIndex, params->polygonBuffer);

    convert_XrPlaneDetectorPolygonBufferEXT_win32_to_host((XrPlaneDetectorPolygonBufferEXT32 *)(uintptr_t)UlongToPtr(params->polygonBuffer), &polygonBuffer_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetPlanePolygonBufferEXT(params->planeDetector, params->planeId, params->polygonBufferIndex, &polygonBuffer_host);
    convert_XrPlaneDetectorPolygonBufferEXT_host_to_win32(&polygonBuffer_host, (XrPlaneDetectorPolygonBufferEXT32 *)(XrPlaneDetectorPolygonBufferEXT32 *)(uintptr_t)UlongToPtr(params->polygonBuffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetPlanePolygonBufferEXT(void *args)
{
    struct xrGetPlanePolygonBufferEXT_params *params = args;

    TRACE("0x%s, 0x%s, %u, %p\n", TRACE_HANDLE(params->planeDetector), wine_dbgstr_longlong(params->planeId), params->polygonBufferIndex, params->polygonBuffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetPlanePolygonBufferEXT(params->planeDetector, params->planeId, params->polygonBufferIndex, params->polygonBuffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetQueriedSenseDataBD(void *args)
{
    struct
    {
        XrSenseDataSnapshotBD snapshot;
        PTR32 getInfo;
        PTR32 queriedSenseData;
        XrResult result;
    } *params = args;
    XrQueriedSenseDataGetInfoBD getInfo_host;
    XrQueriedSenseDataBD queriedSenseData_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->snapshot), params->getInfo, params->queriedSenseData);

    init_conversion_context(ctx);
    convert_XrQueriedSenseDataGetInfoBD_win32_to_host((XrQueriedSenseDataGetInfoBD32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrQueriedSenseDataBD_win32_to_host(ctx, (XrQueriedSenseDataBD32 *)(uintptr_t)UlongToPtr(params->queriedSenseData), &queriedSenseData_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetQueriedSenseDataBD(params->snapshot, &getInfo_host, &queriedSenseData_host);
    convert_XrQueriedSenseDataGetInfoBD_host_to_win32(&getInfo_host, (XrQueriedSenseDataGetInfoBD32 *)(XrQueriedSenseDataGetInfoBD32 *)(uintptr_t)UlongToPtr(params->getInfo));
    convert_XrQueriedSenseDataBD_host_to_win32(&queriedSenseData_host, (XrQueriedSenseDataBD32 *)(XrQueriedSenseDataBD32 *)(uintptr_t)UlongToPtr(params->queriedSenseData));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetQueriedSenseDataBD(void *args)
{
    struct xrGetQueriedSenseDataBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->snapshot), params->getInfo, params->queriedSenseData);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetQueriedSenseDataBD(params->snapshot, params->getInfo, params->queriedSenseData);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetRecommendedLayerResolutionMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 resolution;
        XrResult result;
    } *params = args;
    XrRecommendedLayerResolutionGetInfoMETA info_host;
    XrRecommendedLayerResolutionMETA resolution_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->resolution);

    init_conversion_context(ctx);
    convert_XrRecommendedLayerResolutionGetInfoMETA_win32_to_host(ctx, (const XrRecommendedLayerResolutionGetInfoMETA32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    convert_XrRecommendedLayerResolutionMETA_win32_to_host((XrRecommendedLayerResolutionMETA32 *)(uintptr_t)UlongToPtr(params->resolution), &resolution_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetRecommendedLayerResolutionMETA(wine_session_from_handle(params->session)->host_session, &info_host, &resolution_host);
    convert_XrRecommendedLayerResolutionMETA_host_to_win32(&resolution_host, (XrRecommendedLayerResolutionMETA32 *)(XrRecommendedLayerResolutionMETA32 *)(uintptr_t)UlongToPtr(params->resolution));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetRecommendedLayerResolutionMETA(void *args)
{
    struct xrGetRecommendedLayerResolutionMETA_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->resolution);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetRecommendedLayerResolutionMETA(wine_session_from_handle(params->session)->host_session, params->info, params->resolution);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetReferenceSpaceBoundsRect(void *args)
{
    struct
    {
        XrSession session;
        XrReferenceSpaceType referenceSpaceType;
        PTR32 bounds;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->referenceSpaceType, params->bounds);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetReferenceSpaceBoundsRect(wine_session_from_handle(params->session)->host_session, params->referenceSpaceType, (XrExtent2Df *)(uintptr_t)UlongToPtr(params->bounds));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetReferenceSpaceBoundsRect(void *args)
{
    struct xrGetReferenceSpaceBoundsRect_params *params = args;

    TRACE("0x%s, %#x, %p\n", TRACE_HANDLE(params->session), params->referenceSpaceType, params->bounds);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetReferenceSpaceBoundsRect(wine_session_from_handle(params->session)->host_session, params->referenceSpaceType, params->bounds);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetRenderModelAssetDataEXT(void *args)
{
    struct
    {
        XrRenderModelAssetEXT asset;
        PTR32 getInfo;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrRenderModelAssetDataGetInfoEXT *getInfo_host = NULL;
    XrRenderModelAssetDataEXT buffer_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->asset), params->getInfo, params->buffer);

    init_conversion_context(ctx);
    if (params->getInfo)
    {
        getInfo_host = conversion_context_alloc(ctx, sizeof(*getInfo_host));
        convert_XrRenderModelAssetDataGetInfoEXT_win32_to_host((const XrRenderModelAssetDataGetInfoEXT32 *)(uintptr_t)UlongToPtr(params->getInfo), getInfo_host);
    }
    convert_XrRenderModelAssetDataEXT_win32_to_host((XrRenderModelAssetDataEXT32 *)(uintptr_t)UlongToPtr(params->buffer), &buffer_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelAssetDataEXT(params->asset, getInfo_host, &buffer_host);
    convert_XrRenderModelAssetDataEXT_host_to_win32(&buffer_host, (XrRenderModelAssetDataEXT32 *)(XrRenderModelAssetDataEXT32 *)(uintptr_t)UlongToPtr(params->buffer));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetRenderModelAssetDataEXT(void *args)
{
    struct xrGetRenderModelAssetDataEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->asset), params->getInfo, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelAssetDataEXT(params->asset, params->getInfo, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetRenderModelAssetPropertiesEXT(void *args)
{
    struct
    {
        XrRenderModelAssetEXT asset;
        PTR32 getInfo;
        PTR32 properties;
        XrResult result;
    } *params = args;
    XrRenderModelAssetPropertiesGetInfoEXT *getInfo_host = NULL;
    XrRenderModelAssetPropertiesEXT properties_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->asset), params->getInfo, params->properties);

    init_conversion_context(ctx);
    if (params->getInfo)
    {
        getInfo_host = conversion_context_alloc(ctx, sizeof(*getInfo_host));
        convert_XrRenderModelAssetPropertiesGetInfoEXT_win32_to_host((const XrRenderModelAssetPropertiesGetInfoEXT32 *)(uintptr_t)UlongToPtr(params->getInfo), getInfo_host);
    }
    convert_XrRenderModelAssetPropertiesEXT_win32_to_host((XrRenderModelAssetPropertiesEXT32 *)(uintptr_t)UlongToPtr(params->properties), &properties_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelAssetPropertiesEXT(params->asset, getInfo_host, &properties_host);
    convert_XrRenderModelAssetPropertiesEXT_host_to_win32(&properties_host, (XrRenderModelAssetPropertiesEXT32 *)(XrRenderModelAssetPropertiesEXT32 *)(uintptr_t)UlongToPtr(params->properties));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetRenderModelAssetPropertiesEXT(void *args)
{
    struct xrGetRenderModelAssetPropertiesEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->asset), params->getInfo, params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelAssetPropertiesEXT(params->asset, params->getInfo, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetRenderModelPoseTopLevelUserPathEXT(void *args)
{
    struct
    {
        XrRenderModelEXT renderModel;
        PTR32 info;
        PTR32 topLevelUserPath;
        XrResult result;
    } *params = args;
    XrInteractionRenderModelTopLevelUserPathGetInfoEXT info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->renderModel), params->info, params->topLevelUserPath);

    convert_XrInteractionRenderModelTopLevelUserPathGetInfoEXT_win32_to_host((const XrInteractionRenderModelTopLevelUserPathGetInfoEXT32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelPoseTopLevelUserPathEXT(params->renderModel, &info_host, (XrPath *)(uintptr_t)UlongToPtr(params->topLevelUserPath));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetRenderModelPoseTopLevelUserPathEXT(void *args)
{
    struct xrGetRenderModelPoseTopLevelUserPathEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->renderModel), params->info, params->topLevelUserPath);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelPoseTopLevelUserPathEXT(params->renderModel, params->info, params->topLevelUserPath);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetRenderModelPropertiesEXT(void *args)
{
    struct
    {
        XrRenderModelEXT renderModel;
        PTR32 getInfo;
        PTR32 properties;
        XrResult result;
    } *params = args;
    XrRenderModelPropertiesGetInfoEXT *getInfo_host = NULL;
    XrRenderModelPropertiesEXT properties_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->renderModel), params->getInfo, params->properties);

    init_conversion_context(ctx);
    if (params->getInfo)
    {
        getInfo_host = conversion_context_alloc(ctx, sizeof(*getInfo_host));
        convert_XrRenderModelPropertiesGetInfoEXT_win32_to_host((const XrRenderModelPropertiesGetInfoEXT32 *)(uintptr_t)UlongToPtr(params->getInfo), getInfo_host);
    }
    convert_XrRenderModelPropertiesEXT_win32_to_host((XrRenderModelPropertiesEXT32 *)(uintptr_t)UlongToPtr(params->properties), &properties_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelPropertiesEXT(params->renderModel, getInfo_host, &properties_host);
    convert_XrRenderModelPropertiesEXT_host_to_win32(&properties_host, (XrRenderModelPropertiesEXT32 *)(XrRenderModelPropertiesEXT32 *)(uintptr_t)UlongToPtr(params->properties));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetRenderModelPropertiesEXT(void *args)
{
    struct xrGetRenderModelPropertiesEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->renderModel), params->getInfo, params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelPropertiesEXT(params->renderModel, params->getInfo, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetRenderModelPropertiesFB(void *args)
{
    struct
    {
        XrSession session;
        XrPath path;
        PTR32 properties;
        XrResult result;
    } *params = args;
    XrRenderModelPropertiesFB properties_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->path), params->properties);

    init_conversion_context(ctx);
    convert_XrRenderModelPropertiesFB_win32_to_host(ctx, (XrRenderModelPropertiesFB32 *)(uintptr_t)UlongToPtr(params->properties), &properties_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelPropertiesFB(wine_session_from_handle(params->session)->host_session, params->path, &properties_host);
    convert_XrRenderModelPropertiesFB_host_to_win32(&properties_host, (XrRenderModelPropertiesFB32 *)(XrRenderModelPropertiesFB32 *)(uintptr_t)UlongToPtr(params->properties));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetRenderModelPropertiesFB(void *args)
{
    struct xrGetRenderModelPropertiesFB_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->path), params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelPropertiesFB(wine_session_from_handle(params->session)->host_session, params->path, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetRenderModelStateEXT(void *args)
{
    struct
    {
        XrRenderModelEXT renderModel;
        PTR32 getInfo;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrRenderModelStateGetInfoEXT getInfo_host;
    XrRenderModelStateEXT state_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->renderModel), params->getInfo, params->state);

    convert_XrRenderModelStateGetInfoEXT_win32_to_host((const XrRenderModelStateGetInfoEXT32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrRenderModelStateEXT_win32_to_host((XrRenderModelStateEXT32 *)(uintptr_t)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelStateEXT(params->renderModel, &getInfo_host, &state_host);
    convert_XrRenderModelStateEXT_host_to_win32(&state_host, (XrRenderModelStateEXT32 *)(XrRenderModelStateEXT32 *)(uintptr_t)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetRenderModelStateEXT(void *args)
{
    struct xrGetRenderModelStateEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->renderModel), params->getInfo, params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetRenderModelStateEXT(params->renderModel, params->getInfo, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSceneComponentsMSFT(void *args)
{
    struct
    {
        XrSceneMSFT scene;
        PTR32 getInfo;
        PTR32 components;
        XrResult result;
    } *params = args;
    XrSceneComponentsGetInfoMSFT getInfo_host;
    XrSceneComponentsMSFT components_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->scene), params->getInfo, params->components);

    init_conversion_context(ctx);
    convert_XrSceneComponentsGetInfoMSFT_win32_to_host(ctx, (const XrSceneComponentsGetInfoMSFT32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrSceneComponentsMSFT_win32_to_host(ctx, (XrSceneComponentsMSFT32 *)(uintptr_t)UlongToPtr(params->components), &components_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneComponentsMSFT(params->scene, &getInfo_host, &components_host);
    convert_XrSceneComponentsMSFT_host_to_win32(&components_host, (XrSceneComponentsMSFT32 *)(XrSceneComponentsMSFT32 *)(uintptr_t)UlongToPtr(params->components));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSceneComponentsMSFT(void *args)
{
    struct xrGetSceneComponentsMSFT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->scene), params->getInfo, params->components);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneComponentsMSFT(params->scene, params->getInfo, params->components);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSceneComputeStateMSFT(void *args)
{
    struct
    {
        XrSceneObserverMSFT sceneObserver;
        PTR32 state;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->sceneObserver), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneComputeStateMSFT(params->sceneObserver, (XrSceneComputeStateMSFT *)(uintptr_t)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSceneComputeStateMSFT(void *args)
{
    struct xrGetSceneComputeStateMSFT_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->sceneObserver), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneComputeStateMSFT(params->sceneObserver, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSceneMarkerDecodedStringMSFT(void *args)
{
    struct
    {
        XrSceneMSFT scene;
        PTR32 markerId;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->scene), params->markerId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneMarkerDecodedStringMSFT(params->scene, (const XrUuidMSFT *)(uintptr_t)UlongToPtr(params->markerId), params->bufferCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->bufferCountOutput), (char *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSceneMarkerDecodedStringMSFT(void *args)
{
    struct xrGetSceneMarkerDecodedStringMSFT_params *params = args;

    TRACE("0x%s, %p, %u, %p, %p\n", TRACE_HANDLE(params->scene), params->markerId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneMarkerDecodedStringMSFT(params->scene, params->markerId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSceneMarkerRawDataMSFT(void *args)
{
    struct
    {
        XrSceneMSFT scene;
        PTR32 markerId;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->scene), params->markerId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneMarkerRawDataMSFT(params->scene, (const XrUuidMSFT *)(uintptr_t)UlongToPtr(params->markerId), params->bufferCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->bufferCountOutput), (uint8_t *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSceneMarkerRawDataMSFT(void *args)
{
    struct xrGetSceneMarkerRawDataMSFT_params *params = args;

    TRACE("0x%s, %p, %u, %p, %p\n", TRACE_HANDLE(params->scene), params->markerId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneMarkerRawDataMSFT(params->scene, params->markerId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSceneMeshBuffersMSFT(void *args)
{
    struct
    {
        XrSceneMSFT scene;
        PTR32 getInfo;
        PTR32 buffers;
        XrResult result;
    } *params = args;
    XrSceneMeshBuffersGetInfoMSFT getInfo_host;
    XrSceneMeshBuffersMSFT buffers_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->scene), params->getInfo, params->buffers);

    convert_XrSceneMeshBuffersGetInfoMSFT_win32_to_host((const XrSceneMeshBuffersGetInfoMSFT32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrSceneMeshBuffersMSFT_win32_to_host((XrSceneMeshBuffersMSFT32 *)(uintptr_t)UlongToPtr(params->buffers), &buffers_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneMeshBuffersMSFT(params->scene, &getInfo_host, &buffers_host);
    convert_XrSceneMeshBuffersMSFT_host_to_win32(&buffers_host, (XrSceneMeshBuffersMSFT32 *)(XrSceneMeshBuffersMSFT32 *)(uintptr_t)UlongToPtr(params->buffers));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSceneMeshBuffersMSFT(void *args)
{
    struct xrGetSceneMeshBuffersMSFT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->scene), params->getInfo, params->buffers);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSceneMeshBuffersMSFT(params->scene, params->getInfo, params->buffers);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSenseDataProviderStateBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        PTR32 state;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->provider), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSenseDataProviderStateBD(params->provider, (XrSenseDataProviderStateBD *)(uintptr_t)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSenseDataProviderStateBD(void *args)
{
    struct xrGetSenseDataProviderStateBD_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->provider), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSenseDataProviderStateBD(params->provider, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSerializedSceneFragmentDataMSFT(void *args)
{
    struct
    {
        XrSceneMSFT scene;
        PTR32 getInfo;
        uint32_t countInput;
        PTR32 readOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrSerializedSceneFragmentDataGetInfoMSFT getInfo_host;

    TRACE("0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->scene), params->getInfo, params->countInput, params->readOutput, params->buffer);

    convert_XrSerializedSceneFragmentDataGetInfoMSFT_win32_to_host((const XrSerializedSceneFragmentDataGetInfoMSFT32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSerializedSceneFragmentDataMSFT(params->scene, &getInfo_host, params->countInput, (uint32_t *)(uintptr_t)UlongToPtr(params->readOutput), (uint8_t *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSerializedSceneFragmentDataMSFT(void *args)
{
    struct xrGetSerializedSceneFragmentDataMSFT_params *params = args;

    TRACE("0x%s, %p, %u, %p, %p\n", TRACE_HANDLE(params->scene), params->getInfo, params->countInput, params->readOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSerializedSceneFragmentDataMSFT(params->scene, params->getInfo, params->countInput, params->readOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceBoundary2DFB(void *args)
{
    struct
    {
        XrSession session;
        XrSpace space;
        PTR32 boundary2DOutput;
        XrResult result;
    } *params = args;
    XrBoundary2DFB boundary2DOutput_host;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->session), TRACE_HANDLE(params->space), params->boundary2DOutput);

    convert_XrBoundary2DFB_win32_to_host((XrBoundary2DFB32 *)(uintptr_t)UlongToPtr(params->boundary2DOutput), &boundary2DOutput_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceBoundary2DFB(wine_session_from_handle(params->session)->host_session, params->space, &boundary2DOutput_host);
    convert_XrBoundary2DFB_host_to_win32(&boundary2DOutput_host, (XrBoundary2DFB32 *)(XrBoundary2DFB32 *)(uintptr_t)UlongToPtr(params->boundary2DOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceBoundary2DFB(void *args)
{
    struct xrGetSpaceBoundary2DFB_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->session), TRACE_HANDLE(params->space), params->boundary2DOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceBoundary2DFB(wine_session_from_handle(params->session)->host_session, params->space, params->boundary2DOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceBoundingBox2DFB(void *args)
{
    struct
    {
        XrSession session;
        XrSpace space;
        PTR32 boundingBox2DOutput;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->session), TRACE_HANDLE(params->space), params->boundingBox2DOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceBoundingBox2DFB(wine_session_from_handle(params->session)->host_session, params->space, (XrRect2Df *)(uintptr_t)UlongToPtr(params->boundingBox2DOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceBoundingBox2DFB(void *args)
{
    struct xrGetSpaceBoundingBox2DFB_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->session), TRACE_HANDLE(params->space), params->boundingBox2DOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceBoundingBox2DFB(wine_session_from_handle(params->session)->host_session, params->space, params->boundingBox2DOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceBoundingBox3DFB(void *args)
{
    struct
    {
        XrSession session;
        XrSpace space;
        PTR32 boundingBox3DOutput;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->session), TRACE_HANDLE(params->space), params->boundingBox3DOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceBoundingBox3DFB(wine_session_from_handle(params->session)->host_session, params->space, (XrRect3DfFB *)(uintptr_t)UlongToPtr(params->boundingBox3DOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceBoundingBox3DFB(void *args)
{
    struct xrGetSpaceBoundingBox3DFB_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->session), TRACE_HANDLE(params->space), params->boundingBox3DOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceBoundingBox3DFB(wine_session_from_handle(params->session)->host_session, params->space, params->boundingBox3DOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceComponentStatusFB(void *args)
{
    struct
    {
        XrSpace space;
        XrSpaceComponentTypeFB componentType;
        PTR32 status;
        XrResult result;
    } *params = args;
    XrSpaceComponentStatusFB status_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->space), params->componentType, params->status);

    convert_XrSpaceComponentStatusFB_win32_to_host((XrSpaceComponentStatusFB32 *)(uintptr_t)UlongToPtr(params->status), &status_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceComponentStatusFB(params->space, params->componentType, &status_host);
    convert_XrSpaceComponentStatusFB_host_to_win32(&status_host, (XrSpaceComponentStatusFB32 *)(XrSpaceComponentStatusFB32 *)(uintptr_t)UlongToPtr(params->status));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceComponentStatusFB(void *args)
{
    struct xrGetSpaceComponentStatusFB_params *params = args;

    TRACE("0x%s, %#x, %p\n", TRACE_HANDLE(params->space), params->componentType, params->status);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceComponentStatusFB(params->space, params->componentType, params->status);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceContainerFB(void *args)
{
    struct
    {
        XrSession session;
        XrSpace space;
        PTR32 spaceContainerOutput;
        XrResult result;
    } *params = args;
    XrSpaceContainerFB spaceContainerOutput_host;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->session), TRACE_HANDLE(params->space), params->spaceContainerOutput);

    convert_XrSpaceContainerFB_win32_to_host((XrSpaceContainerFB32 *)(uintptr_t)UlongToPtr(params->spaceContainerOutput), &spaceContainerOutput_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceContainerFB(wine_session_from_handle(params->session)->host_session, params->space, &spaceContainerOutput_host);
    convert_XrSpaceContainerFB_host_to_win32(&spaceContainerOutput_host, (XrSpaceContainerFB32 *)(XrSpaceContainerFB32 *)(uintptr_t)UlongToPtr(params->spaceContainerOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceContainerFB(void *args)
{
    struct xrGetSpaceContainerFB_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->session), TRACE_HANDLE(params->space), params->spaceContainerOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceContainerFB(wine_session_from_handle(params->session)->host_session, params->space, params->spaceContainerOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceRoomLayoutFB(void *args)
{
    struct
    {
        XrSession session;
        XrSpace space;
        PTR32 roomLayoutOutput;
        XrResult result;
    } *params = args;
    XrRoomLayoutFB roomLayoutOutput_host;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->session), TRACE_HANDLE(params->space), params->roomLayoutOutput);

    convert_XrRoomLayoutFB_win32_to_host((XrRoomLayoutFB32 *)(uintptr_t)UlongToPtr(params->roomLayoutOutput), &roomLayoutOutput_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceRoomLayoutFB(wine_session_from_handle(params->session)->host_session, params->space, &roomLayoutOutput_host);
    convert_XrRoomLayoutFB_host_to_win32(&roomLayoutOutput_host, (XrRoomLayoutFB32 *)(XrRoomLayoutFB32 *)(uintptr_t)UlongToPtr(params->roomLayoutOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceRoomLayoutFB(void *args)
{
    struct xrGetSpaceRoomLayoutFB_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->session), TRACE_HANDLE(params->space), params->roomLayoutOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceRoomLayoutFB(wine_session_from_handle(params->session)->host_session, params->space, params->roomLayoutOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceSemanticLabelsFB(void *args)
{
    struct
    {
        XrSession session;
        XrSpace space;
        PTR32 semanticLabelsOutput;
        XrResult result;
    } *params = args;
    XrSemanticLabelsFB semanticLabelsOutput_host;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->session), TRACE_HANDLE(params->space), params->semanticLabelsOutput);

    convert_XrSemanticLabelsFB_win32_to_host((XrSemanticLabelsFB32 *)(uintptr_t)UlongToPtr(params->semanticLabelsOutput), &semanticLabelsOutput_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceSemanticLabelsFB(wine_session_from_handle(params->session)->host_session, params->space, &semanticLabelsOutput_host);
    convert_XrSemanticLabelsFB_host_to_win32(&semanticLabelsOutput_host, (XrSemanticLabelsFB32 *)(XrSemanticLabelsFB32 *)(uintptr_t)UlongToPtr(params->semanticLabelsOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceSemanticLabelsFB(void *args)
{
    struct xrGetSpaceSemanticLabelsFB_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->session), TRACE_HANDLE(params->space), params->semanticLabelsOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceSemanticLabelsFB(wine_session_from_handle(params->session)->host_session, params->space, params->semanticLabelsOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceTriangleMeshMETA(void *args)
{
    struct
    {
        XrSpace space;
        PTR32 getInfo;
        PTR32 triangleMeshOutput;
        XrResult result;
    } *params = args;
    XrSpaceTriangleMeshGetInfoMETA getInfo_host;
    XrSpaceTriangleMeshMETA triangleMeshOutput_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->space), params->getInfo, params->triangleMeshOutput);

    convert_XrSpaceTriangleMeshGetInfoMETA_win32_to_host((const XrSpaceTriangleMeshGetInfoMETA32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrSpaceTriangleMeshMETA_win32_to_host((XrSpaceTriangleMeshMETA32 *)(uintptr_t)UlongToPtr(params->triangleMeshOutput), &triangleMeshOutput_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceTriangleMeshMETA(params->space, &getInfo_host, &triangleMeshOutput_host);
    convert_XrSpaceTriangleMeshMETA_host_to_win32(&triangleMeshOutput_host, (XrSpaceTriangleMeshMETA32 *)(XrSpaceTriangleMeshMETA32 *)(uintptr_t)UlongToPtr(params->triangleMeshOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceTriangleMeshMETA(void *args)
{
    struct xrGetSpaceTriangleMeshMETA_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->space), params->getInfo, params->triangleMeshOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceTriangleMeshMETA(params->space, params->getInfo, params->triangleMeshOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceUserIdFB(void *args)
{
    struct
    {
        XrSpaceUserFB user;
        PTR32 userId;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->user), params->userId);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceUserIdFB(params->user, (XrSpaceUserIdFB *)(uintptr_t)UlongToPtr(params->userId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceUserIdFB(void *args)
{
    struct xrGetSpaceUserIdFB_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->user), params->userId);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceUserIdFB(params->user, params->userId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpaceUuidFB(void *args)
{
    struct
    {
        XrSpace space;
        PTR32 uuid;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->space), params->uuid);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceUuidFB(params->space, (XrUuidEXT *)(uintptr_t)UlongToPtr(params->uuid));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpaceUuidFB(void *args)
{
    struct xrGetSpaceUuidFB_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->space), params->uuid);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpaceUuidFB(params->space, params->uuid);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialAnchorNameHTC(void *args)
{
    struct
    {
        XrSpace anchor;
        PTR32 name;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->anchor), params->name);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialAnchorNameHTC(params->anchor, (XrSpatialAnchorNameHTC *)(uintptr_t)UlongToPtr(params->name));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialAnchorNameHTC(void *args)
{
    struct xrGetSpatialAnchorNameHTC_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->anchor), params->name);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialAnchorNameHTC(params->anchor, params->name);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialAnchorStateML(void *args)
{
    struct
    {
        XrSpace anchor;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrSpatialAnchorStateML state_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->anchor), params->state);

    convert_XrSpatialAnchorStateML_win32_to_host((XrSpatialAnchorStateML32 *)(uintptr_t)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialAnchorStateML(params->anchor, &state_host);
    convert_XrSpatialAnchorStateML_host_to_win32(&state_host, (XrSpatialAnchorStateML32 *)(XrSpatialAnchorStateML32 *)(uintptr_t)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialAnchorStateML(void *args)
{
    struct xrGetSpatialAnchorStateML_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->anchor), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialAnchorStateML(params->anchor, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialBufferFloatEXT(void *args)
{
    struct
    {
        XrSpatialSnapshotEXT snapshot;
        PTR32 info;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrSpatialBufferGetInfoEXT info_host;

    TRACE("0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->snapshot), params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    convert_XrSpatialBufferGetInfoEXT_win32_to_host((const XrSpatialBufferGetInfoEXT32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferFloatEXT(params->snapshot, &info_host, params->bufferCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->bufferCountOutput), (float *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialBufferFloatEXT(void *args)
{
    struct xrGetSpatialBufferFloatEXT_params *params = args;

    TRACE("0x%s, %p, %u, %p, %p\n", TRACE_HANDLE(params->snapshot), params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferFloatEXT(params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialBufferStringEXT(void *args)
{
    struct
    {
        XrSpatialSnapshotEXT snapshot;
        PTR32 info;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrSpatialBufferGetInfoEXT info_host;

    TRACE("0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->snapshot), params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    convert_XrSpatialBufferGetInfoEXT_win32_to_host((const XrSpatialBufferGetInfoEXT32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferStringEXT(params->snapshot, &info_host, params->bufferCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->bufferCountOutput), (char *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialBufferStringEXT(void *args)
{
    struct xrGetSpatialBufferStringEXT_params *params = args;

    TRACE("0x%s, %p, %u, %p, %p\n", TRACE_HANDLE(params->snapshot), params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferStringEXT(params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialBufferUint16EXT(void *args)
{
    struct
    {
        XrSpatialSnapshotEXT snapshot;
        PTR32 info;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrSpatialBufferGetInfoEXT info_host;

    TRACE("0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->snapshot), params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    convert_XrSpatialBufferGetInfoEXT_win32_to_host((const XrSpatialBufferGetInfoEXT32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferUint16EXT(params->snapshot, &info_host, params->bufferCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->bufferCountOutput), (uint16_t *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialBufferUint16EXT(void *args)
{
    struct xrGetSpatialBufferUint16EXT_params *params = args;

    TRACE("0x%s, %p, %u, %p, %p\n", TRACE_HANDLE(params->snapshot), params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferUint16EXT(params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialBufferUint32EXT(void *args)
{
    struct
    {
        XrSpatialSnapshotEXT snapshot;
        PTR32 info;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrSpatialBufferGetInfoEXT info_host;

    TRACE("0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->snapshot), params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    convert_XrSpatialBufferGetInfoEXT_win32_to_host((const XrSpatialBufferGetInfoEXT32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferUint32EXT(params->snapshot, &info_host, params->bufferCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->bufferCountOutput), (uint32_t *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialBufferUint32EXT(void *args)
{
    struct xrGetSpatialBufferUint32EXT_params *params = args;

    TRACE("0x%s, %p, %u, %p, %p\n", TRACE_HANDLE(params->snapshot), params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferUint32EXT(params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialBufferUint8EXT(void *args)
{
    struct
    {
        XrSpatialSnapshotEXT snapshot;
        PTR32 info;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrSpatialBufferGetInfoEXT info_host;

    TRACE("0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->snapshot), params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    convert_XrSpatialBufferGetInfoEXT_win32_to_host((const XrSpatialBufferGetInfoEXT32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferUint8EXT(params->snapshot, &info_host, params->bufferCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->bufferCountOutput), (uint8_t *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialBufferUint8EXT(void *args)
{
    struct xrGetSpatialBufferUint8EXT_params *params = args;

    TRACE("0x%s, %p, %u, %p, %p\n", TRACE_HANDLE(params->snapshot), params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferUint8EXT(params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialBufferVector2fEXT(void *args)
{
    struct
    {
        XrSpatialSnapshotEXT snapshot;
        PTR32 info;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrSpatialBufferGetInfoEXT info_host;

    TRACE("0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->snapshot), params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    convert_XrSpatialBufferGetInfoEXT_win32_to_host((const XrSpatialBufferGetInfoEXT32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferVector2fEXT(params->snapshot, &info_host, params->bufferCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->bufferCountOutput), (XrVector2f *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialBufferVector2fEXT(void *args)
{
    struct xrGetSpatialBufferVector2fEXT_params *params = args;

    TRACE("0x%s, %p, %u, %p, %p\n", TRACE_HANDLE(params->snapshot), params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferVector2fEXT(params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialBufferVector3fEXT(void *args)
{
    struct
    {
        XrSpatialSnapshotEXT snapshot;
        PTR32 info;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrSpatialBufferGetInfoEXT info_host;

    TRACE("0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->snapshot), params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    convert_XrSpatialBufferGetInfoEXT_win32_to_host((const XrSpatialBufferGetInfoEXT32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferVector3fEXT(params->snapshot, &info_host, params->bufferCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->bufferCountOutput), (XrVector3f *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialBufferVector3fEXT(void *args)
{
    struct xrGetSpatialBufferVector3fEXT_params *params = args;

    TRACE("0x%s, %p, %u, %p, %p\n", TRACE_HANDLE(params->snapshot), params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialBufferVector3fEXT(params->snapshot, params->info, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialEntityComponentDataBD(void *args)
{
    struct
    {
        XrSenseDataSnapshotBD snapshot;
        PTR32 getInfo;
        PTR32 componentData;
        XrResult result;
    } *params = args;
    XrSpatialEntityComponentGetInfoBD getInfo_host;
    XrSpatialEntityComponentDataBaseHeaderBD componentData_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->snapshot), params->getInfo, params->componentData);

    init_conversion_context(ctx);
    convert_XrSpatialEntityComponentGetInfoBD_win32_to_host((const XrSpatialEntityComponentGetInfoBD32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrSpatialEntityComponentDataBaseHeaderBD_win32_to_host(ctx, (XrSpatialEntityComponentDataBaseHeaderBD32 *)(uintptr_t)UlongToPtr(params->componentData), &componentData_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialEntityComponentDataBD(params->snapshot, &getInfo_host, &componentData_host);
    convert_XrSpatialEntityComponentDataBaseHeaderBD_host_to_win32(&componentData_host, (XrSpatialEntityComponentDataBaseHeaderBD32 *)(XrSpatialEntityComponentDataBaseHeaderBD32 *)(uintptr_t)UlongToPtr(params->componentData));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialEntityComponentDataBD(void *args)
{
    struct xrGetSpatialEntityComponentDataBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->snapshot), params->getInfo, params->componentData);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialEntityComponentDataBD(params->snapshot, params->getInfo, params->componentData);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialEntityUuidBD(void *args)
{
    struct
    {
        XrSenseDataSnapshotBD snapshot;
        XrSpatialEntityIdBD entityId;
        PTR32 uuid;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->snapshot), wine_dbgstr_longlong(params->entityId), params->uuid);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialEntityUuidBD(params->snapshot, params->entityId, (XrUuidEXT *)(uintptr_t)UlongToPtr(params->uuid));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialEntityUuidBD(void *args)
{
    struct xrGetSpatialEntityUuidBD_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->snapshot), wine_dbgstr_longlong(params->entityId), params->uuid);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialEntityUuidBD(params->snapshot, params->entityId, params->uuid);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSpatialGraphNodeBindingPropertiesMSFT(void *args)
{
    struct
    {
        XrSpatialGraphNodeBindingMSFT nodeBinding;
        PTR32 getInfo;
        PTR32 properties;
        XrResult result;
    } *params = args;
    XrSpatialGraphNodeBindingPropertiesGetInfoMSFT *getInfo_host = NULL;
    XrSpatialGraphNodeBindingPropertiesMSFT properties_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->nodeBinding), params->getInfo, params->properties);

    init_conversion_context(ctx);
    if (params->getInfo)
    {
        getInfo_host = conversion_context_alloc(ctx, sizeof(*getInfo_host));
        convert_XrSpatialGraphNodeBindingPropertiesGetInfoMSFT_win32_to_host((const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT32 *)(uintptr_t)UlongToPtr(params->getInfo), getInfo_host);
    }
    convert_XrSpatialGraphNodeBindingPropertiesMSFT_win32_to_host((XrSpatialGraphNodeBindingPropertiesMSFT32 *)(uintptr_t)UlongToPtr(params->properties), &properties_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialGraphNodeBindingPropertiesMSFT(params->nodeBinding, getInfo_host, &properties_host);
    convert_XrSpatialGraphNodeBindingPropertiesMSFT_host_to_win32(&properties_host, (XrSpatialGraphNodeBindingPropertiesMSFT32 *)(XrSpatialGraphNodeBindingPropertiesMSFT32 *)(uintptr_t)UlongToPtr(params->properties));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSpatialGraphNodeBindingPropertiesMSFT(void *args)
{
    struct xrGetSpatialGraphNodeBindingPropertiesMSFT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->nodeBinding), params->getInfo, params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSpatialGraphNodeBindingPropertiesMSFT(params->nodeBinding, params->getInfo, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSwapchainStateFB(void *args)
{
    struct
    {
        XrSwapchain swapchain;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrSwapchainStateBaseHeaderFB state_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->swapchain), params->state);

    convert_XrSwapchainStateBaseHeaderFB_win32_to_host((XrSwapchainStateBaseHeaderFB32 *)(uintptr_t)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSwapchainStateFB(wine_swapchain_from_handle(params->swapchain)->host_swapchain, &state_host);
    convert_XrSwapchainStateBaseHeaderFB_host_to_win32(&state_host, (XrSwapchainStateBaseHeaderFB32 *)(XrSwapchainStateBaseHeaderFB32 *)(uintptr_t)UlongToPtr(params->state));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSwapchainStateFB(void *args)
{
    struct xrGetSwapchainStateFB_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->swapchain), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSwapchainStateFB(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSystem(void *args)
{
    struct
    {
        XrInstance instance;
        PTR32 getInfo;
        PTR32 systemId;
        XrResult result;
    } *params = args;
    XrSystemGetInfo getInfo_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->instance), params->getInfo, params->systemId);

    convert_XrSystemGetInfo_win32_to_host((const XrSystemGetInfo32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSystem(wine_instance_from_handle(params->instance)->host_instance, &getInfo_host, (XrSystemId *)(uintptr_t)UlongToPtr(params->systemId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSystem(void *args)
{
    struct xrGetSystem_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->instance), params->getInfo, params->systemId);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSystem(wine_instance_from_handle(params->instance)->host_instance, params->getInfo, params->systemId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetSystemProperties(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        PTR32 properties;
        XrResult result;
    } *params = args;
    XrSystemProperties properties_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->properties);

    init_conversion_context(ctx);
    convert_XrSystemProperties_win32_to_host(ctx, (XrSystemProperties32 *)(uintptr_t)UlongToPtr(params->properties), &properties_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetSystemProperties(wine_instance_from_handle(params->instance)->host_instance, params->systemId, &properties_host);
    convert_XrSystemProperties_host_to_win32(&properties_host, (XrSystemProperties32 *)(XrSystemProperties32 *)(uintptr_t)UlongToPtr(params->properties));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetSystemProperties(void *args)
{
    struct xrGetSystemProperties_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->properties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetSystemProperties(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->properties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetTrackableMarkerANDROID(void *args)
{
    struct
    {
        XrTrackableTrackerANDROID tracker;
        PTR32 getInfo;
        PTR32 markerOutput;
        XrResult result;
    } *params = args;
    XrTrackableGetInfoANDROID getInfo_host;
    XrTrackableMarkerANDROID markerOutput_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->tracker), params->getInfo, params->markerOutput);

    convert_XrTrackableGetInfoANDROID_win32_to_host((const XrTrackableGetInfoANDROID32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrTrackableMarkerANDROID_win32_to_host((XrTrackableMarkerANDROID32 *)(uintptr_t)UlongToPtr(params->markerOutput), &markerOutput_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetTrackableMarkerANDROID(params->tracker, &getInfo_host, &markerOutput_host);
    convert_XrTrackableMarkerANDROID_host_to_win32(&markerOutput_host, (XrTrackableMarkerANDROID32 *)(XrTrackableMarkerANDROID32 *)(uintptr_t)UlongToPtr(params->markerOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetTrackableMarkerANDROID(void *args)
{
    struct xrGetTrackableMarkerANDROID_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->tracker), params->getInfo, params->markerOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetTrackableMarkerANDROID(params->tracker, params->getInfo, params->markerOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetTrackableObjectANDROID(void *args)
{
    struct
    {
        XrTrackableTrackerANDROID tracker;
        PTR32 getInfo;
        PTR32 objectOutput;
        XrResult result;
    } *params = args;
    XrTrackableGetInfoANDROID getInfo_host;
    XrTrackableObjectANDROID objectOutput_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->tracker), params->getInfo, params->objectOutput);

    convert_XrTrackableGetInfoANDROID_win32_to_host((const XrTrackableGetInfoANDROID32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrTrackableObjectANDROID_win32_to_host((XrTrackableObjectANDROID32 *)(uintptr_t)UlongToPtr(params->objectOutput), &objectOutput_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetTrackableObjectANDROID(params->tracker, &getInfo_host, &objectOutput_host);
    convert_XrTrackableObjectANDROID_host_to_win32(&objectOutput_host, (XrTrackableObjectANDROID32 *)(XrTrackableObjectANDROID32 *)(uintptr_t)UlongToPtr(params->objectOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetTrackableObjectANDROID(void *args)
{
    struct xrGetTrackableObjectANDROID_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->tracker), params->getInfo, params->objectOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetTrackableObjectANDROID(params->tracker, params->getInfo, params->objectOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetTrackablePlaneANDROID(void *args)
{
    struct
    {
        XrTrackableTrackerANDROID trackableTracker;
        PTR32 getInfo;
        PTR32 planeOutput;
        XrResult result;
    } *params = args;
    XrTrackableGetInfoANDROID getInfo_host;
    XrTrackablePlaneANDROID planeOutput_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->trackableTracker), params->getInfo, params->planeOutput);

    convert_XrTrackableGetInfoANDROID_win32_to_host((const XrTrackableGetInfoANDROID32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrTrackablePlaneANDROID_win32_to_host((XrTrackablePlaneANDROID32 *)(uintptr_t)UlongToPtr(params->planeOutput), &planeOutput_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetTrackablePlaneANDROID(params->trackableTracker, &getInfo_host, &planeOutput_host);
    convert_XrTrackablePlaneANDROID_host_to_win32(&planeOutput_host, (XrTrackablePlaneANDROID32 *)(XrTrackablePlaneANDROID32 *)(uintptr_t)UlongToPtr(params->planeOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetTrackablePlaneANDROID(void *args)
{
    struct xrGetTrackablePlaneANDROID_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->trackableTracker), params->getInfo, params->planeOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetTrackablePlaneANDROID(params->trackableTracker, params->getInfo, params->planeOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetViewConfigurationProperties(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        XrViewConfigurationType viewConfigurationType;
        PTR32 configurationProperties;
        XrResult result;
    } *params = args;
    XrViewConfigurationProperties configurationProperties_host;

    TRACE("0x%s, 0x%s, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->configurationProperties);

    convert_XrViewConfigurationProperties_win32_to_host((XrViewConfigurationProperties32 *)(uintptr_t)UlongToPtr(params->configurationProperties), &configurationProperties_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetViewConfigurationProperties(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationType, &configurationProperties_host);
    convert_XrViewConfigurationProperties_host_to_win32(&configurationProperties_host, (XrViewConfigurationProperties32 *)(XrViewConfigurationProperties32 *)(uintptr_t)UlongToPtr(params->configurationProperties));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetViewConfigurationProperties(void *args)
{
    struct xrGetViewConfigurationProperties_params *params = args;

    TRACE("0x%s, 0x%s, %#x, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->viewConfigurationType, params->configurationProperties);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetViewConfigurationProperties(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->viewConfigurationType, params->configurationProperties);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVirtualKeyboardDirtyTexturesMETA(void *args)
{
    struct
    {
        XrVirtualKeyboardMETA keyboard;
        uint32_t textureIdCapacityInput;
        PTR32 textureIdCountOutput;
        PTR32 textureIds;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->keyboard), params->textureIdCapacityInput, params->textureIdCountOutput, params->textureIds);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardDirtyTexturesMETA(params->keyboard, params->textureIdCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->textureIdCountOutput), (uint64_t *)(uintptr_t)UlongToPtr(params->textureIds));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVirtualKeyboardDirtyTexturesMETA(void *args)
{
    struct xrGetVirtualKeyboardDirtyTexturesMETA_params *params = args;

    TRACE("0x%s, %u, %p, %p\n", TRACE_HANDLE(params->keyboard), params->textureIdCapacityInput, params->textureIdCountOutput, params->textureIds);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardDirtyTexturesMETA(params->keyboard, params->textureIdCapacityInput, params->textureIdCountOutput, params->textureIds);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVirtualKeyboardModelAnimationStatesMETA(void *args)
{
    struct
    {
        XrVirtualKeyboardMETA keyboard;
        PTR32 animationStates;
        XrResult result;
    } *params = args;
    XrVirtualKeyboardModelAnimationStatesMETA animationStates_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->keyboard), params->animationStates);

    init_conversion_context(ctx);
    convert_XrVirtualKeyboardModelAnimationStatesMETA_win32_to_host(ctx, (XrVirtualKeyboardModelAnimationStatesMETA32 *)(uintptr_t)UlongToPtr(params->animationStates), &animationStates_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardModelAnimationStatesMETA(params->keyboard, &animationStates_host);
    convert_XrVirtualKeyboardModelAnimationStatesMETA_host_to_win32(&animationStates_host, (XrVirtualKeyboardModelAnimationStatesMETA32 *)(XrVirtualKeyboardModelAnimationStatesMETA32 *)(uintptr_t)UlongToPtr(params->animationStates));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVirtualKeyboardModelAnimationStatesMETA(void *args)
{
    struct xrGetVirtualKeyboardModelAnimationStatesMETA_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->keyboard), params->animationStates);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardModelAnimationStatesMETA(params->keyboard, params->animationStates);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVirtualKeyboardScaleMETA(void *args)
{
    struct
    {
        XrVirtualKeyboardMETA keyboard;
        PTR32 scale;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->keyboard), params->scale);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardScaleMETA(params->keyboard, (float *)(uintptr_t)UlongToPtr(params->scale));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVirtualKeyboardScaleMETA(void *args)
{
    struct xrGetVirtualKeyboardScaleMETA_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->keyboard), params->scale);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardScaleMETA(params->keyboard, params->scale);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVirtualKeyboardTextureDataMETA(void *args)
{
    struct
    {
        XrVirtualKeyboardMETA keyboard;
        uint64_t DECLSPEC_ALIGN(8) textureId;
        PTR32 textureData;
        XrResult result;
    } *params = args;
    XrVirtualKeyboardTextureDataMETA textureData_host;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->keyboard), wine_dbgstr_longlong(params->textureId), params->textureData);

    convert_XrVirtualKeyboardTextureDataMETA_win32_to_host((XrVirtualKeyboardTextureDataMETA32 *)(uintptr_t)UlongToPtr(params->textureData), &textureData_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardTextureDataMETA(params->keyboard, params->textureId, &textureData_host);
    convert_XrVirtualKeyboardTextureDataMETA_host_to_win32(&textureData_host, (XrVirtualKeyboardTextureDataMETA32 *)(XrVirtualKeyboardTextureDataMETA32 *)(uintptr_t)UlongToPtr(params->textureData));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVirtualKeyboardTextureDataMETA(void *args)
{
    struct xrGetVirtualKeyboardTextureDataMETA_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->keyboard), wine_dbgstr_longlong(params->textureId), params->textureData);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVirtualKeyboardTextureDataMETA(params->keyboard, params->textureId, params->textureData);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVisibilityMaskKHR(void *args)
{
    struct
    {
        XrSession session;
        XrViewConfigurationType viewConfigurationType;
        uint32_t viewIndex;
        XrVisibilityMaskTypeKHR visibilityMaskType;
        PTR32 visibilityMask;
        XrResult result;
    } *params = args;
    XrVisibilityMaskKHR visibilityMask_host;

    TRACE("0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->session), params->viewConfigurationType, params->viewIndex, params->visibilityMaskType, params->visibilityMask);

    convert_XrVisibilityMaskKHR_win32_to_host((XrVisibilityMaskKHR32 *)(uintptr_t)UlongToPtr(params->visibilityMask), &visibilityMask_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetVisibilityMaskKHR(wine_session_from_handle(params->session)->host_session, params->viewConfigurationType, params->viewIndex, params->visibilityMaskType, &visibilityMask_host);
    convert_XrVisibilityMaskKHR_host_to_win32(&visibilityMask_host, (XrVisibilityMaskKHR32 *)(XrVisibilityMaskKHR32 *)(uintptr_t)UlongToPtr(params->visibilityMask));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVisibilityMaskKHR(void *args)
{
    struct xrGetVisibilityMaskKHR_params *params = args;

    TRACE("0x%s, %#x, %u, %#x, %p\n", TRACE_HANDLE(params->session), params->viewConfigurationType, params->viewIndex, params->visibilityMaskType, params->visibilityMask);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVisibilityMaskKHR(wine_session_from_handle(params->session)->host_session, params->viewConfigurationType, params->viewIndex, params->visibilityMaskType, params->visibilityMask);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVulkanDeviceExtensionsKHR(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVulkanDeviceExtensionsKHR(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->bufferCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->bufferCountOutput), (char *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanDeviceExtensionsKHR(void *args)
{
    struct xrGetVulkanDeviceExtensionsKHR_params *params = args;

    TRACE("0x%s, 0x%s, %u, %p, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVulkanDeviceExtensionsKHR(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVulkanGraphicsDevice2KHR(void *args)
{
    struct
    {
        XrInstance instance;
        PTR32 getInfo;
        PTR32 vulkanPhysicalDevice;
        XrResult result;
    } *params = args;
    XrVulkanGraphicsDeviceGetInfoKHR getInfo_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->instance), params->getInfo, params->vulkanPhysicalDevice);

    convert_XrVulkanGraphicsDeviceGetInfoKHR_win32_to_host((const XrVulkanGraphicsDeviceGetInfoKHR32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    params->result = wine_xrGetVulkanGraphicsDevice2KHR(params->instance, &getInfo_host, (VkPhysicalDevice *)(uintptr_t)UlongToPtr(params->vulkanPhysicalDevice));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanGraphicsDevice2KHR(void *args)
{
    struct xrGetVulkanGraphicsDevice2KHR_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->instance), params->getInfo, params->vulkanPhysicalDevice);

    params->result = wine_xrGetVulkanGraphicsDevice2KHR(params->instance, params->getInfo, params->vulkanPhysicalDevice);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVulkanGraphicsDeviceKHR(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        VkInstance vkInstance;
        PTR32 vkPhysicalDevice;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %p, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->vkInstance, params->vkPhysicalDevice);

    params->result = wine_xrGetVulkanGraphicsDeviceKHR(params->instance, params->systemId, params->vkInstance, (VkPhysicalDevice *)(uintptr_t)UlongToPtr(params->vkPhysicalDevice));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanGraphicsDeviceKHR(void *args)
{
    struct xrGetVulkanGraphicsDeviceKHR_params *params = args;

    TRACE("0x%s, 0x%s, %p, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->vkInstance, params->vkPhysicalDevice);

    params->result = wine_xrGetVulkanGraphicsDeviceKHR(params->instance, params->systemId, params->vkInstance, params->vkPhysicalDevice);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVulkanGraphicsRequirements2KHR(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        PTR32 graphicsRequirements;
        XrResult result;
    } *params = args;
    XrGraphicsRequirementsVulkanKHR graphicsRequirements_host;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->graphicsRequirements);

    convert_XrGraphicsRequirementsVulkanKHR_win32_to_host((XrGraphicsRequirementsVulkanKHR32 *)(uintptr_t)UlongToPtr(params->graphicsRequirements), &graphicsRequirements_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetVulkanGraphicsRequirements2KHR(wine_instance_from_handle(params->instance)->host_instance, params->systemId, &graphicsRequirements_host);
    convert_XrGraphicsRequirementsVulkanKHR_host_to_win32(&graphicsRequirements_host, (XrGraphicsRequirementsVulkanKHR32 *)(XrGraphicsRequirementsVulkanKHR32 *)(uintptr_t)UlongToPtr(params->graphicsRequirements));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanGraphicsRequirements2KHR(void *args)
{
    struct xrGetVulkanGraphicsRequirements2KHR_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->graphicsRequirements);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVulkanGraphicsRequirements2KHR(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->graphicsRequirements);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVulkanGraphicsRequirementsKHR(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        PTR32 graphicsRequirements;
        XrResult result;
    } *params = args;
    XrGraphicsRequirementsVulkanKHR graphicsRequirements_host;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->graphicsRequirements);

    convert_XrGraphicsRequirementsVulkanKHR_win32_to_host((XrGraphicsRequirementsVulkanKHR32 *)(uintptr_t)UlongToPtr(params->graphicsRequirements), &graphicsRequirements_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetVulkanGraphicsRequirementsKHR(wine_instance_from_handle(params->instance)->host_instance, params->systemId, &graphicsRequirements_host);
    convert_XrGraphicsRequirementsVulkanKHR_host_to_win32(&graphicsRequirements_host, (XrGraphicsRequirementsVulkanKHR32 *)(XrGraphicsRequirementsVulkanKHR32 *)(uintptr_t)UlongToPtr(params->graphicsRequirements));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanGraphicsRequirementsKHR(void *args)
{
    struct xrGetVulkanGraphicsRequirementsKHR_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->graphicsRequirements);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetVulkanGraphicsRequirementsKHR(wine_instance_from_handle(params->instance)->host_instance, params->systemId, params->graphicsRequirements);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetVulkanInstanceExtensionsKHR(void *args)
{
    struct
    {
        XrInstance instance;
        XrSystemId systemId;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = wine_xrGetVulkanInstanceExtensionsKHR(params->instance, params->systemId, params->bufferCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->bufferCountOutput), (char *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetVulkanInstanceExtensionsKHR(void *args)
{
    struct xrGetVulkanInstanceExtensionsKHR_params *params = args;

    TRACE("0x%s, 0x%s, %u, %p, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->systemId), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = wine_xrGetVulkanInstanceExtensionsKHR(params->instance, params->systemId, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrGetWorldMeshBufferRecommendSizeML(void *args)
{
    struct
    {
        XrWorldMeshDetectorML detector;
        PTR32 sizeInfo;
        PTR32 size;
        XrResult result;
    } *params = args;
    XrWorldMeshBufferRecommendedSizeInfoML sizeInfo_host;
    XrWorldMeshBufferSizeML size_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->detector), params->sizeInfo, params->size);

    convert_XrWorldMeshBufferRecommendedSizeInfoML_win32_to_host((const XrWorldMeshBufferRecommendedSizeInfoML32 *)(uintptr_t)UlongToPtr(params->sizeInfo), &sizeInfo_host);
    convert_XrWorldMeshBufferSizeML_win32_to_host((XrWorldMeshBufferSizeML32 *)(uintptr_t)UlongToPtr(params->size), &size_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrGetWorldMeshBufferRecommendSizeML(params->detector, &sizeInfo_host, &size_host);
    convert_XrWorldMeshBufferSizeML_host_to_win32(&size_host, (XrWorldMeshBufferSizeML32 *)(XrWorldMeshBufferSizeML32 *)(uintptr_t)UlongToPtr(params->size));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrGetWorldMeshBufferRecommendSizeML(void *args)
{
    struct xrGetWorldMeshBufferRecommendSizeML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->detector), params->sizeInfo, params->size);

    params->result = g_xr_host_instance_dispatch_table.p_xrGetWorldMeshBufferRecommendSizeML(params->detector, params->sizeInfo, params->size);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrImportLocalizationMapML(void *args)
{
    struct
    {
        XrSession session;
        PTR32 importInfo;
        PTR32 mapUuid;
        XrResult result;
    } *params = args;
    XrLocalizationMapImportInfoML importInfo_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->importInfo, params->mapUuid);

    convert_XrLocalizationMapImportInfoML_win32_to_host((const XrLocalizationMapImportInfoML32 *)(uintptr_t)UlongToPtr(params->importInfo), &importInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrImportLocalizationMapML(wine_session_from_handle(params->session)->host_session, &importInfo_host, (XrUuidEXT *)(uintptr_t)UlongToPtr(params->mapUuid));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrImportLocalizationMapML(void *args)
{
    struct xrImportLocalizationMapML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->importInfo, params->mapUuid);

    params->result = g_xr_host_instance_dispatch_table.p_xrImportLocalizationMapML(wine_session_from_handle(params->session)->host_session, params->importInfo, params->mapUuid);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLoadControllerModelMSFT(void *args)
{
    struct
    {
        XrSession session;
        XrControllerModelKeyMSFT modelKey;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->modelKey), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrLoadControllerModelMSFT(wine_session_from_handle(params->session)->host_session, params->modelKey, params->bufferCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->bufferCountOutput), (uint8_t *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLoadControllerModelMSFT(void *args)
{
    struct xrLoadControllerModelMSFT_params *params = args;

    TRACE("0x%s, 0x%s, %u, %p, %p\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->modelKey), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrLoadControllerModelMSFT(wine_session_from_handle(params->session)->host_session, params->modelKey, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLoadRenderModelFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 buffer;
        XrResult result;
    } *params = args;
    XrRenderModelLoadInfoFB info_host;
    XrRenderModelBufferFB buffer_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->buffer);

    convert_XrRenderModelLoadInfoFB_win32_to_host((const XrRenderModelLoadInfoFB32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    convert_XrRenderModelBufferFB_win32_to_host((XrRenderModelBufferFB32 *)(uintptr_t)UlongToPtr(params->buffer), &buffer_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLoadRenderModelFB(wine_session_from_handle(params->session)->host_session, &info_host, &buffer_host);
    convert_XrRenderModelBufferFB_host_to_win32(&buffer_host, (XrRenderModelBufferFB32 *)(XrRenderModelBufferFB32 *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLoadRenderModelFB(void *args)
{
    struct xrLoadRenderModelFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrLoadRenderModelFB(wine_session_from_handle(params->session)->host_session, params->info, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateBodyJointsBD(void *args)
{
    struct
    {
        XrBodyTrackerBD bodyTracker;
        PTR32 locateInfo;
        PTR32 locations;
        XrResult result;
    } *params = args;
    XrBodyJointsLocateInfoBD locateInfo_host;
    XrBodyJointLocationsBD locations_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->bodyTracker), params->locateInfo, params->locations);

    init_conversion_context(ctx);
    convert_XrBodyJointsLocateInfoBD_win32_to_host((const XrBodyJointsLocateInfoBD32 *)(uintptr_t)UlongToPtr(params->locateInfo), &locateInfo_host);
    convert_XrBodyJointLocationsBD_win32_to_host(ctx, (XrBodyJointLocationsBD32 *)(uintptr_t)UlongToPtr(params->locations), &locations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateBodyJointsBD(params->bodyTracker, &locateInfo_host, &locations_host);
    convert_XrBodyJointLocationsBD_host_to_win32(&locations_host, (XrBodyJointLocationsBD32 *)(XrBodyJointLocationsBD32 *)(uintptr_t)UlongToPtr(params->locations));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateBodyJointsBD(void *args)
{
    struct xrLocateBodyJointsBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->bodyTracker), params->locateInfo, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateBodyJointsBD(params->bodyTracker, params->locateInfo, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateBodyJointsFB(void *args)
{
    struct
    {
        XrBodyTrackerFB bodyTracker;
        PTR32 locateInfo;
        PTR32 locations;
        XrResult result;
    } *params = args;
    XrBodyJointsLocateInfoFB locateInfo_host;
    XrBodyJointLocationsFB locations_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->bodyTracker), params->locateInfo, params->locations);

    init_conversion_context(ctx);
    convert_XrBodyJointsLocateInfoFB_win32_to_host((const XrBodyJointsLocateInfoFB32 *)(uintptr_t)UlongToPtr(params->locateInfo), &locateInfo_host);
    convert_XrBodyJointLocationsFB_win32_to_host(ctx, (XrBodyJointLocationsFB32 *)(uintptr_t)UlongToPtr(params->locations), &locations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateBodyJointsFB(params->bodyTracker, &locateInfo_host, &locations_host);
    convert_XrBodyJointLocationsFB_host_to_win32(&locations_host, (XrBodyJointLocationsFB32 *)(XrBodyJointLocationsFB32 *)(uintptr_t)UlongToPtr(params->locations));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateBodyJointsFB(void *args)
{
    struct xrLocateBodyJointsFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->bodyTracker), params->locateInfo, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateBodyJointsFB(params->bodyTracker, params->locateInfo, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateBodyJointsHTC(void *args)
{
    struct
    {
        XrBodyTrackerHTC bodyTracker;
        PTR32 locateInfo;
        PTR32 locations;
        XrResult result;
    } *params = args;
    XrBodyJointsLocateInfoHTC locateInfo_host;
    XrBodyJointLocationsHTC locations_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->bodyTracker), params->locateInfo, params->locations);

    init_conversion_context(ctx);
    convert_XrBodyJointsLocateInfoHTC_win32_to_host((const XrBodyJointsLocateInfoHTC32 *)(uintptr_t)UlongToPtr(params->locateInfo), &locateInfo_host);
    convert_XrBodyJointLocationsHTC_win32_to_host(ctx, (XrBodyJointLocationsHTC32 *)(uintptr_t)UlongToPtr(params->locations), &locations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateBodyJointsHTC(params->bodyTracker, &locateInfo_host, &locations_host);
    convert_XrBodyJointLocationsHTC_host_to_win32(&locations_host, (XrBodyJointLocationsHTC32 *)(XrBodyJointLocationsHTC32 *)(uintptr_t)UlongToPtr(params->locations));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateBodyJointsHTC(void *args)
{
    struct xrLocateBodyJointsHTC_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->bodyTracker), params->locateInfo, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateBodyJointsHTC(params->bodyTracker, params->locateInfo, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateHandJointsEXT(void *args)
{
    struct
    {
        XrHandTrackerEXT handTracker;
        PTR32 locateInfo;
        PTR32 locations;
        XrResult result;
    } *params = args;
    XrHandJointsLocateInfoEXT locateInfo_host;
    XrHandJointLocationsEXT locations_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->handTracker), params->locateInfo, params->locations);

    init_conversion_context(ctx);
    convert_XrHandJointsLocateInfoEXT_win32_to_host(ctx, (const XrHandJointsLocateInfoEXT32 *)(uintptr_t)UlongToPtr(params->locateInfo), &locateInfo_host);
    convert_XrHandJointLocationsEXT_win32_to_host(ctx, (XrHandJointLocationsEXT32 *)(uintptr_t)UlongToPtr(params->locations), &locations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateHandJointsEXT(params->handTracker, &locateInfo_host, &locations_host);
    convert_XrHandJointLocationsEXT_host_to_win32(&locations_host, (XrHandJointLocationsEXT32 *)(XrHandJointLocationsEXT32 *)(uintptr_t)UlongToPtr(params->locations));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateHandJointsEXT(void *args)
{
    struct xrLocateHandJointsEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->handTracker), params->locateInfo, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateHandJointsEXT(params->handTracker, params->locateInfo, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateSceneComponentsMSFT(void *args)
{
    struct
    {
        XrSceneMSFT scene;
        PTR32 locateInfo;
        PTR32 locations;
        XrResult result;
    } *params = args;
    XrSceneComponentsLocateInfoMSFT locateInfo_host;
    XrSceneComponentLocationsMSFT locations_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->scene), params->locateInfo, params->locations);

    init_conversion_context(ctx);
    convert_XrSceneComponentsLocateInfoMSFT_win32_to_host((const XrSceneComponentsLocateInfoMSFT32 *)(uintptr_t)UlongToPtr(params->locateInfo), &locateInfo_host);
    convert_XrSceneComponentLocationsMSFT_win32_to_host(ctx, (XrSceneComponentLocationsMSFT32 *)(uintptr_t)UlongToPtr(params->locations), &locations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSceneComponentsMSFT(params->scene, &locateInfo_host, &locations_host);
    convert_XrSceneComponentLocationsMSFT_host_to_win32(&locations_host, (XrSceneComponentLocationsMSFT32 *)(XrSceneComponentLocationsMSFT32 *)(uintptr_t)UlongToPtr(params->locations));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateSceneComponentsMSFT(void *args)
{
    struct xrLocateSceneComponentsMSFT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->scene), params->locateInfo, params->locations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSceneComponentsMSFT(params->scene, params->locateInfo, params->locations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateSpace(void *args)
{
    struct
    {
        XrSpace space;
        XrSpace baseSpace;
        XrTime time;
        PTR32 location;
        XrResult result;
    } *params = args;
    XrSpaceLocation location_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, 0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->space), TRACE_HANDLE(params->baseSpace), wine_dbgstr_longlong(params->time), params->location);

    init_conversion_context(ctx);
    convert_XrSpaceLocation_win32_to_host(ctx, (XrSpaceLocation32 *)(uintptr_t)UlongToPtr(params->location), &location_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSpace(params->space, params->baseSpace, params->time, &location_host);
    convert_XrSpaceLocation_host_to_win32(&location_host, (XrSpaceLocation32 *)(XrSpaceLocation32 *)(uintptr_t)UlongToPtr(params->location));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateSpace(void *args)
{
    struct xrLocateSpace_params *params = args;

    TRACE("0x%s, 0x%s, 0x%s, %p\n", TRACE_HANDLE(params->space), TRACE_HANDLE(params->baseSpace), wine_dbgstr_longlong(params->time), params->location);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSpace(params->space, params->baseSpace, params->time, params->location);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateSpaces(void *args)
{
    struct
    {
        XrSession session;
        PTR32 locateInfo;
        PTR32 spaceLocations;
        XrResult result;
    } *params = args;
    XrSpacesLocateInfo locateInfo_host;
    XrSpaceLocations spaceLocations_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->locateInfo, params->spaceLocations);

    init_conversion_context(ctx);
    convert_XrSpacesLocateInfo_win32_to_host(ctx, (const XrSpacesLocateInfo32 *)(uintptr_t)UlongToPtr(params->locateInfo), &locateInfo_host);
    convert_XrSpaceLocations_win32_to_host(ctx, (XrSpaceLocations32 *)(uintptr_t)UlongToPtr(params->spaceLocations), &spaceLocations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSpaces(wine_session_from_handle(params->session)->host_session, &locateInfo_host, &spaceLocations_host);
    convert_XrSpaceLocations_host_to_win32(&spaceLocations_host, (XrSpaceLocations32 *)(XrSpaceLocations32 *)(uintptr_t)UlongToPtr(params->spaceLocations));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateSpaces(void *args)
{
    struct xrLocateSpaces_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->locateInfo, params->spaceLocations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSpaces(wine_session_from_handle(params->session)->host_session, params->locateInfo, params->spaceLocations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateSpacesKHR(void *args)
{
    struct
    {
        XrSession session;
        PTR32 locateInfo;
        PTR32 spaceLocations;
        XrResult result;
    } *params = args;
    XrSpacesLocateInfo locateInfo_host;
    XrSpaceLocations spaceLocations_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->locateInfo, params->spaceLocations);

    init_conversion_context(ctx);
    convert_XrSpacesLocateInfo_win32_to_host(ctx, (const XrSpacesLocateInfo32 *)(uintptr_t)UlongToPtr(params->locateInfo), &locateInfo_host);
    convert_XrSpaceLocations_win32_to_host(ctx, (XrSpaceLocations32 *)(uintptr_t)UlongToPtr(params->spaceLocations), &spaceLocations_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSpacesKHR(wine_session_from_handle(params->session)->host_session, &locateInfo_host, &spaceLocations_host);
    convert_XrSpaceLocations_host_to_win32(&spaceLocations_host, (XrSpaceLocations32 *)(XrSpaceLocations32 *)(uintptr_t)UlongToPtr(params->spaceLocations));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateSpacesKHR(void *args)
{
    struct xrLocateSpacesKHR_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->locateInfo, params->spaceLocations);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateSpacesKHR(wine_session_from_handle(params->session)->host_session, params->locateInfo, params->spaceLocations);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrLocateViews(void *args)
{
    struct
    {
        XrSession session;
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

    TRACE("0x%s, %#x, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->session), params->viewLocateInfo, params->viewState, params->viewCapacityInput, params->viewCountOutput, params->views);

    init_conversion_context(ctx);
    convert_XrViewLocateInfo_win32_to_host(ctx, (const XrViewLocateInfo32 *)(uintptr_t)UlongToPtr(params->viewLocateInfo), &viewLocateInfo_host);
    convert_XrViewState_win32_to_host((XrViewState32 *)(uintptr_t)UlongToPtr(params->viewState), &viewState_host);
    views_host = convert_XrView_array_win32_to_host(ctx, (XrView32 *)(uintptr_t)UlongToPtr(params->views), params->viewCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrLocateViews(wine_session_from_handle(params->session)->host_session, &viewLocateInfo_host, &viewState_host, params->viewCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->viewCountOutput), views_host);
    convert_XrViewState_host_to_win32(&viewState_host, (XrViewState32 *)(XrViewState32 *)(uintptr_t)UlongToPtr(params->viewState));
    convert_XrView_array_host_to_win32(views_host, (XrView32 *)(uintptr_t)UlongToPtr(params->views), params->viewCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrLocateViews(void *args)
{
    struct xrLocateViews_params *params = args;

    TRACE("0x%s, %p, %p, %u, %p, %p\n", TRACE_HANDLE(params->session), params->viewLocateInfo, params->viewState, params->viewCapacityInput, params->viewCountOutput, params->views);

    params->result = g_xr_host_instance_dispatch_table.p_xrLocateViews(wine_session_from_handle(params->session)->host_session, params->viewLocateInfo, params->viewState, params->viewCapacityInput, params->viewCountOutput, params->views);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPassthroughLayerPauseFB(void *args)
{
    struct
    {
        XrPassthroughLayerFB layer;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->layer));

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerPauseFB(params->layer);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughLayerPauseFB(void *args)
{
    struct xrPassthroughLayerPauseFB_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->layer));

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerPauseFB(params->layer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPassthroughLayerResumeFB(void *args)
{
    struct
    {
        XrPassthroughLayerFB layer;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->layer));

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerResumeFB(params->layer);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughLayerResumeFB(void *args)
{
    struct xrPassthroughLayerResumeFB_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->layer));

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerResumeFB(params->layer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPassthroughLayerSetKeyboardHandsIntensityFB(void *args)
{
    struct
    {
        XrPassthroughLayerFB layer;
        PTR32 intensity;
        XrResult result;
    } *params = args;
    XrPassthroughKeyboardHandsIntensityFB intensity_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->layer), params->intensity);

    convert_XrPassthroughKeyboardHandsIntensityFB_win32_to_host((const XrPassthroughKeyboardHandsIntensityFB32 *)(uintptr_t)UlongToPtr(params->intensity), &intensity_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerSetKeyboardHandsIntensityFB(params->layer, &intensity_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughLayerSetKeyboardHandsIntensityFB(void *args)
{
    struct xrPassthroughLayerSetKeyboardHandsIntensityFB_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->layer), params->intensity);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerSetKeyboardHandsIntensityFB(params->layer, params->intensity);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPassthroughLayerSetStyleFB(void *args)
{
    struct
    {
        XrPassthroughLayerFB layer;
        PTR32 style;
        XrResult result;
    } *params = args;
    XrPassthroughStyleFB style_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->layer), params->style);

    init_conversion_context(ctx);
    convert_XrPassthroughStyleFB_win32_to_host(ctx, (const XrPassthroughStyleFB32 *)(uintptr_t)UlongToPtr(params->style), &style_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerSetStyleFB(params->layer, &style_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughLayerSetStyleFB(void *args)
{
    struct xrPassthroughLayerSetStyleFB_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->layer), params->style);

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughLayerSetStyleFB(params->layer, params->style);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPassthroughPauseFB(void *args)
{
    struct
    {
        XrPassthroughFB passthrough;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->passthrough));

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughPauseFB(params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughPauseFB(void *args)
{
    struct xrPassthroughPauseFB_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->passthrough));

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughPauseFB(params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPassthroughStartFB(void *args)
{
    struct
    {
        XrPassthroughFB passthrough;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->passthrough));

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughStartFB(params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPassthroughStartFB(void *args)
{
    struct xrPassthroughStartFB_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->passthrough));

    params->result = g_xr_host_instance_dispatch_table.p_xrPassthroughStartFB(params->passthrough);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPathToString(void *args)
{
    struct
    {
        XrInstance instance;
        XrPath path;
        uint32_t bufferCapacityInput;
        PTR32 bufferCountOutput;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %u, %#x, %#x\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->path), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrPathToString(wine_instance_from_handle(params->instance)->host_instance, params->path, params->bufferCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->bufferCountOutput), (char *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPathToString(void *args)
{
    struct xrPathToString_params *params = args;

    TRACE("0x%s, 0x%s, %u, %p, %p\n", TRACE_HANDLE(params->instance), wine_dbgstr_longlong(params->path), params->bufferCapacityInput, params->bufferCountOutput, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrPathToString(wine_instance_from_handle(params->instance)->host_instance, params->path, params->bufferCapacityInput, params->bufferCountOutput, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPauseSimultaneousHandsAndControllersTrackingMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 pauseInfo;
        XrResult result;
    } *params = args;
    XrSimultaneousHandsAndControllersTrackingPauseInfoMETA pauseInfo_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->pauseInfo);

    convert_XrSimultaneousHandsAndControllersTrackingPauseInfoMETA_win32_to_host((const XrSimultaneousHandsAndControllersTrackingPauseInfoMETA32 *)(uintptr_t)UlongToPtr(params->pauseInfo), &pauseInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPauseSimultaneousHandsAndControllersTrackingMETA(wine_session_from_handle(params->session)->host_session, &pauseInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPauseSimultaneousHandsAndControllersTrackingMETA(void *args)
{
    struct xrPauseSimultaneousHandsAndControllersTrackingMETA_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->pauseInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrPauseSimultaneousHandsAndControllersTrackingMETA(wine_session_from_handle(params->session)->host_session, params->pauseInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPerfSettingsSetPerformanceLevelEXT(void *args)
{
    struct
    {
        XrSession session;
        XrPerfSettingsDomainEXT domain;
        XrPerfSettingsLevelEXT level;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->domain, params->level);

    params->result = g_xr_host_instance_dispatch_table.p_xrPerfSettingsSetPerformanceLevelEXT(wine_session_from_handle(params->session)->host_session, params->domain, params->level);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPerfSettingsSetPerformanceLevelEXT(void *args)
{
    struct xrPerfSettingsSetPerformanceLevelEXT_params *params = args;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->domain, params->level);

    params->result = g_xr_host_instance_dispatch_table.p_xrPerfSettingsSetPerformanceLevelEXT(wine_session_from_handle(params->session)->host_session, params->domain, params->level);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPersistAnchorANDROID(void *args)
{
    struct
    {
        XrDeviceAnchorPersistenceANDROID handle;
        PTR32 persistedInfo;
        PTR32 anchorIdOutput;
        XrResult result;
    } *params = args;
    XrPersistedAnchorSpaceInfoANDROID persistedInfo_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->handle), params->persistedInfo, params->anchorIdOutput);

    convert_XrPersistedAnchorSpaceInfoANDROID_win32_to_host((const XrPersistedAnchorSpaceInfoANDROID32 *)(uintptr_t)UlongToPtr(params->persistedInfo), &persistedInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPersistAnchorANDROID(params->handle, &persistedInfo_host, (XrUuidEXT *)(uintptr_t)UlongToPtr(params->anchorIdOutput));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPersistAnchorANDROID(void *args)
{
    struct xrPersistAnchorANDROID_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->handle), params->persistedInfo, params->anchorIdOutput);

    params->result = g_xr_host_instance_dispatch_table.p_xrPersistAnchorANDROID(params->handle, params->persistedInfo, params->anchorIdOutput);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPersistSpatialAnchorAsyncBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        PTR32 info;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorPersistInfoBD info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->provider), params->info, params->future);

    convert_XrSpatialAnchorPersistInfoBD_win32_to_host((const XrSpatialAnchorPersistInfoBD32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialAnchorAsyncBD(params->provider, &info_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPersistSpatialAnchorAsyncBD(void *args)
{
    struct xrPersistSpatialAnchorAsyncBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->provider), params->info, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialAnchorAsyncBD(params->provider, params->info, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPersistSpatialAnchorCompleteBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrFutureCompletionEXT completion_host;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->provider), params->future, params->completion);

    convert_XrFutureCompletionEXT_win32_to_host((XrFutureCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialAnchorCompleteBD(params->provider, params->future, &completion_host);
    convert_XrFutureCompletionEXT_host_to_win32(&completion_host, (XrFutureCompletionEXT32 *)(XrFutureCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPersistSpatialAnchorCompleteBD(void *args)
{
    struct xrPersistSpatialAnchorCompleteBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->provider), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialAnchorCompleteBD(params->provider, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPersistSpatialAnchorMSFT(void *args)
{
    struct
    {
        XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore;
        PTR32 spatialAnchorPersistenceInfo;
        XrResult result;
    } *params = args;
    XrSpatialAnchorPersistenceInfoMSFT spatialAnchorPersistenceInfo_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->spatialAnchorStore), params->spatialAnchorPersistenceInfo);

    convert_XrSpatialAnchorPersistenceInfoMSFT_win32_to_host((const XrSpatialAnchorPersistenceInfoMSFT32 *)(uintptr_t)UlongToPtr(params->spatialAnchorPersistenceInfo), &spatialAnchorPersistenceInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialAnchorMSFT(params->spatialAnchorStore, &spatialAnchorPersistenceInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPersistSpatialAnchorMSFT(void *args)
{
    struct xrPersistSpatialAnchorMSFT_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->spatialAnchorStore), params->spatialAnchorPersistenceInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialAnchorMSFT(params->spatialAnchorStore, params->spatialAnchorPersistenceInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPersistSpatialEntityAsyncEXT(void *args)
{
    struct
    {
        XrSpatialPersistenceContextEXT persistenceContext;
        PTR32 persistInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialEntityPersistInfoEXT persistInfo_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->persistenceContext), params->persistInfo, params->future);

    convert_XrSpatialEntityPersistInfoEXT_win32_to_host((const XrSpatialEntityPersistInfoEXT32 *)(uintptr_t)UlongToPtr(params->persistInfo), &persistInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialEntityAsyncEXT(params->persistenceContext, &persistInfo_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPersistSpatialEntityAsyncEXT(void *args)
{
    struct xrPersistSpatialEntityAsyncEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->persistenceContext), params->persistInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialEntityAsyncEXT(params->persistenceContext, params->persistInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPersistSpatialEntityCompleteEXT(void *args)
{
    struct
    {
        XrSpatialPersistenceContextEXT persistenceContext;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrPersistSpatialEntityCompletionEXT completion_host;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->persistenceContext), params->future, params->completion);

    convert_XrPersistSpatialEntityCompletionEXT_win32_to_host((XrPersistSpatialEntityCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialEntityCompleteEXT(params->persistenceContext, params->future, &completion_host);
    convert_XrPersistSpatialEntityCompletionEXT_host_to_win32(&completion_host, (XrPersistSpatialEntityCompletionEXT32 *)(XrPersistSpatialEntityCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPersistSpatialEntityCompleteEXT(void *args)
{
    struct xrPersistSpatialEntityCompleteEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->persistenceContext), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrPersistSpatialEntityCompleteEXT(params->persistenceContext, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPollEvent(void *args)
{
    struct
    {
        XrInstance instance;
        PTR32 eventData;
        XrResult result;
    } *params = args;
    XrEventDataBuffer eventData_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->instance), params->eventData);

    convert_XrEventDataBuffer_win32_to_host((XrEventDataBuffer32 *)(uintptr_t)UlongToPtr(params->eventData), &eventData_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPollEvent(wine_instance_from_handle(params->instance)->host_instance, &eventData_host);
    convert_XrEventDataBuffer_host_to_win32(&eventData_host, (XrEventDataBuffer32 *)(XrEventDataBuffer32 *)(uintptr_t)UlongToPtr(params->eventData));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPollEvent(void *args)
{
    struct xrPollEvent_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->instance), params->eventData);

    params->result = g_xr_host_instance_dispatch_table.p_xrPollEvent(wine_instance_from_handle(params->instance)->host_instance, params->eventData);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPollFutureEXT(void *args)
{
    struct
    {
        XrInstance instance;
        PTR32 pollInfo;
        PTR32 pollResult;
        XrResult result;
    } *params = args;
    XrFuturePollInfoEXT pollInfo_host;
    XrFuturePollResultEXT pollResult_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->instance), params->pollInfo, params->pollResult);

    init_conversion_context(ctx);
    convert_XrFuturePollInfoEXT_win32_to_host((const XrFuturePollInfoEXT32 *)(uintptr_t)UlongToPtr(params->pollInfo), &pollInfo_host);
    convert_XrFuturePollResultEXT_win32_to_host(ctx, (XrFuturePollResultEXT32 *)(uintptr_t)UlongToPtr(params->pollResult), &pollResult_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPollFutureEXT(wine_instance_from_handle(params->instance)->host_instance, &pollInfo_host, &pollResult_host);
    convert_XrFuturePollResultEXT_host_to_win32(&pollResult_host, (XrFuturePollResultEXT32 *)(XrFuturePollResultEXT32 *)(uintptr_t)UlongToPtr(params->pollResult));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPollFutureEXT(void *args)
{
    struct xrPollFutureEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->instance), params->pollInfo, params->pollResult);

    params->result = g_xr_host_instance_dispatch_table.p_xrPollFutureEXT(wine_instance_from_handle(params->instance)->host_instance, params->pollInfo, params->pollResult);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPublishSpatialAnchorsAsyncML(void *args)
{
    struct
    {
        XrSpatialAnchorsStorageML storage;
        PTR32 publishInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsPublishInfoML publishInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->storage), params->publishInfo, params->future);

    init_conversion_context(ctx);
    convert_XrSpatialAnchorsPublishInfoML_win32_to_host(ctx, (const XrSpatialAnchorsPublishInfoML32 *)(uintptr_t)UlongToPtr(params->publishInfo), &publishInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPublishSpatialAnchorsAsyncML(params->storage, &publishInfo_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPublishSpatialAnchorsAsyncML(void *args)
{
    struct xrPublishSpatialAnchorsAsyncML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->storage), params->publishInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrPublishSpatialAnchorsAsyncML(params->storage, params->publishInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrPublishSpatialAnchorsCompleteML(void *args)
{
    struct
    {
        XrSpatialAnchorsStorageML storage;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsPublishCompletionML completion_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->storage), params->future, params->completion);

    init_conversion_context(ctx);
    convert_XrSpatialAnchorsPublishCompletionML_win32_to_host(ctx, (XrSpatialAnchorsPublishCompletionML32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrPublishSpatialAnchorsCompleteML(params->storage, params->future, &completion_host);
    convert_XrSpatialAnchorsPublishCompletionML_host_to_win32(&completion_host, (XrSpatialAnchorsPublishCompletionML32 *)(XrSpatialAnchorsPublishCompletionML32 *)(uintptr_t)UlongToPtr(params->completion));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrPublishSpatialAnchorsCompleteML(void *args)
{
    struct xrPublishSpatialAnchorsCompleteML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->storage), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrPublishSpatialAnchorsCompleteML(params->storage, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQueryLocalizationMapsML(void *args)
{
    struct
    {
        XrSession session;
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

    TRACE("0x%s, %#x, %u, %#x, %#x\n", TRACE_HANDLE(params->session), params->queryInfo, params->mapCapacityInput, params->mapCountOutput, params->maps);

    init_conversion_context(ctx);
    if (params->queryInfo)
    {
        queryInfo_host = conversion_context_alloc(ctx, sizeof(*queryInfo_host));
        convert_XrLocalizationMapQueryInfoBaseHeaderML_win32_to_host((const XrLocalizationMapQueryInfoBaseHeaderML32 *)(uintptr_t)UlongToPtr(params->queryInfo), queryInfo_host);
    }
    maps_host = convert_XrLocalizationMapML_array_win32_to_host(ctx, (XrLocalizationMapML32 *)(uintptr_t)UlongToPtr(params->maps), params->mapCapacityInput);
    params->result = g_xr_host_instance_dispatch_table.p_xrQueryLocalizationMapsML(wine_session_from_handle(params->session)->host_session, queryInfo_host, params->mapCapacityInput, (uint32_t *)(uintptr_t)UlongToPtr(params->mapCountOutput), maps_host);
    convert_XrLocalizationMapML_array_host_to_win32(maps_host, (XrLocalizationMapML32 *)(uintptr_t)UlongToPtr(params->maps), params->mapCapacityInput);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQueryLocalizationMapsML(void *args)
{
    struct xrQueryLocalizationMapsML_params *params = args;

    TRACE("0x%s, %p, %u, %p, %p\n", TRACE_HANDLE(params->session), params->queryInfo, params->mapCapacityInput, params->mapCountOutput, params->maps);

    params->result = g_xr_host_instance_dispatch_table.p_xrQueryLocalizationMapsML(wine_session_from_handle(params->session)->host_session, params->queryInfo, params->mapCapacityInput, params->mapCountOutput, params->maps);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQueryPerformanceMetricsCounterMETA(void *args)
{
    struct
    {
        XrSession session;
        XrPath counterPath;
        PTR32 counter;
        XrResult result;
    } *params = args;
    XrPerformanceMetricsCounterMETA counter_host;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->counterPath), params->counter);

    convert_XrPerformanceMetricsCounterMETA_win32_to_host((XrPerformanceMetricsCounterMETA32 *)(uintptr_t)UlongToPtr(params->counter), &counter_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrQueryPerformanceMetricsCounterMETA(wine_session_from_handle(params->session)->host_session, params->counterPath, &counter_host);
    convert_XrPerformanceMetricsCounterMETA_host_to_win32(&counter_host, (XrPerformanceMetricsCounterMETA32 *)(XrPerformanceMetricsCounterMETA32 *)(uintptr_t)UlongToPtr(params->counter));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQueryPerformanceMetricsCounterMETA(void *args)
{
    struct xrQueryPerformanceMetricsCounterMETA_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->counterPath), params->counter);

    params->result = g_xr_host_instance_dispatch_table.p_xrQueryPerformanceMetricsCounterMETA(wine_session_from_handle(params->session)->host_session, params->counterPath, params->counter);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQuerySenseDataAsyncBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        PTR32 queryInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSenseDataQueryInfoBD queryInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->provider), params->queryInfo, params->future);

    init_conversion_context(ctx);
    convert_XrSenseDataQueryInfoBD_win32_to_host(ctx, (const XrSenseDataQueryInfoBD32 *)(uintptr_t)UlongToPtr(params->queryInfo), &queryInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySenseDataAsyncBD(params->provider, &queryInfo_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQuerySenseDataAsyncBD(void *args)
{
    struct xrQuerySenseDataAsyncBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->provider), params->queryInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySenseDataAsyncBD(params->provider, params->queryInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQuerySenseDataCompleteBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrSenseDataQueryCompletionBD completion_host;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->provider), params->future, params->completion);

    convert_XrSenseDataQueryCompletionBD_win32_to_host((XrSenseDataQueryCompletionBD32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySenseDataCompleteBD(params->provider, params->future, &completion_host);
    convert_XrSenseDataQueryCompletionBD_host_to_win32(&completion_host, (XrSenseDataQueryCompletionBD32 *)(XrSenseDataQueryCompletionBD32 *)(uintptr_t)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQuerySenseDataCompleteBD(void *args)
{
    struct xrQuerySenseDataCompleteBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->provider), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySenseDataCompleteBD(params->provider, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQuerySpacesFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpaceQueryInfoBaseHeaderFB info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    convert_XrSpaceQueryInfoBaseHeaderFB_win32_to_host((const XrSpaceQueryInfoBaseHeaderFB32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpacesFB(wine_session_from_handle(params->session)->host_session, &info_host, (XrAsyncRequestIdFB *)(uintptr_t)UlongToPtr(params->requestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQuerySpacesFB(void *args)
{
    struct xrQuerySpacesFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpacesFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQuerySpatialAnchorsAsyncML(void *args)
{
    struct
    {
        XrSpatialAnchorsStorageML storage;
        PTR32 queryInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsQueryInfoBaseHeaderML queryInfo_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->storage), params->queryInfo, params->future);

    convert_XrSpatialAnchorsQueryInfoBaseHeaderML_win32_to_host((const XrSpatialAnchorsQueryInfoBaseHeaderML32 *)(uintptr_t)UlongToPtr(params->queryInfo), &queryInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpatialAnchorsAsyncML(params->storage, &queryInfo_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQuerySpatialAnchorsAsyncML(void *args)
{
    struct xrQuerySpatialAnchorsAsyncML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->storage), params->queryInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpatialAnchorsAsyncML(params->storage, params->queryInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQuerySpatialAnchorsCompleteML(void *args)
{
    struct
    {
        XrSpatialAnchorsStorageML storage;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsQueryCompletionML completion_host;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->storage), params->future, params->completion);

    convert_XrSpatialAnchorsQueryCompletionML_win32_to_host((XrSpatialAnchorsQueryCompletionML32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpatialAnchorsCompleteML(params->storage, params->future, &completion_host);
    convert_XrSpatialAnchorsQueryCompletionML_host_to_win32(&completion_host, (XrSpatialAnchorsQueryCompletionML32 *)(XrSpatialAnchorsQueryCompletionML32 *)(uintptr_t)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQuerySpatialAnchorsCompleteML(void *args)
{
    struct xrQuerySpatialAnchorsCompleteML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->storage), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpatialAnchorsCompleteML(params->storage, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQuerySpatialComponentDataEXT(void *args)
{
    struct
    {
        XrSpatialSnapshotEXT snapshot;
        PTR32 queryCondition;
        PTR32 queryResult;
        XrResult result;
    } *params = args;
    XrSpatialComponentDataQueryConditionEXT queryCondition_host;
    XrSpatialComponentDataQueryResultEXT queryResult_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->snapshot), params->queryCondition, params->queryResult);

    init_conversion_context(ctx);
    convert_XrSpatialComponentDataQueryConditionEXT_win32_to_host(ctx, (const XrSpatialComponentDataQueryConditionEXT32 *)(uintptr_t)UlongToPtr(params->queryCondition), &queryCondition_host);
    convert_XrSpatialComponentDataQueryResultEXT_win32_to_host(ctx, (XrSpatialComponentDataQueryResultEXT32 *)(uintptr_t)UlongToPtr(params->queryResult), &queryResult_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpatialComponentDataEXT(params->snapshot, &queryCondition_host, &queryResult_host);
    convert_XrSpatialComponentDataQueryResultEXT_host_to_win32(&queryResult_host, (XrSpatialComponentDataQueryResultEXT32 *)(XrSpatialComponentDataQueryResultEXT32 *)(uintptr_t)UlongToPtr(params->queryResult));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQuerySpatialComponentDataEXT(void *args)
{
    struct xrQuerySpatialComponentDataEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->snapshot), params->queryCondition, params->queryResult);

    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySpatialComponentDataEXT(params->snapshot, params->queryCondition, params->queryResult);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrQuerySystemTrackedKeyboardFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 queryInfo;
        PTR32 keyboard;
        XrResult result;
    } *params = args;
    XrKeyboardTrackingQueryFB queryInfo_host;
    XrKeyboardTrackingDescriptionFB keyboard_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->queryInfo, params->keyboard);

    convert_XrKeyboardTrackingQueryFB_win32_to_host((const XrKeyboardTrackingQueryFB32 *)(uintptr_t)UlongToPtr(params->queryInfo), &queryInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySystemTrackedKeyboardFB(wine_session_from_handle(params->session)->host_session, &queryInfo_host, &keyboard_host);
    convert_XrKeyboardTrackingDescriptionFB_host_to_win32(&keyboard_host, (XrKeyboardTrackingDescriptionFB32 *)(XrKeyboardTrackingDescriptionFB32 *)(uintptr_t)UlongToPtr(params->keyboard));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrQuerySystemTrackedKeyboardFB(void *args)
{
    struct xrQuerySystemTrackedKeyboardFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->queryInfo, params->keyboard);

    params->result = g_xr_host_instance_dispatch_table.p_xrQuerySystemTrackedKeyboardFB(wine_session_from_handle(params->session)->host_session, params->queryInfo, params->keyboard);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRaycastANDROID(void *args)
{
    struct
    {
        XrSession session;
        PTR32 rayInfo;
        PTR32 results;
        XrResult result;
    } *params = args;
    XrRaycastInfoANDROID rayInfo_host;
    XrRaycastHitResultsANDROID results_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->rayInfo, params->results);

    init_conversion_context(ctx);
    convert_XrRaycastInfoANDROID_win32_to_host(ctx, (const XrRaycastInfoANDROID32 *)(uintptr_t)UlongToPtr(params->rayInfo), &rayInfo_host);
    convert_XrRaycastHitResultsANDROID_win32_to_host((XrRaycastHitResultsANDROID32 *)(uintptr_t)UlongToPtr(params->results), &results_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRaycastANDROID(wine_session_from_handle(params->session)->host_session, &rayInfo_host, &results_host);
    convert_XrRaycastHitResultsANDROID_host_to_win32(&results_host, (XrRaycastHitResultsANDROID32 *)(XrRaycastHitResultsANDROID32 *)(uintptr_t)UlongToPtr(params->results));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRaycastANDROID(void *args)
{
    struct xrRaycastANDROID_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->rayInfo, params->results);

    params->result = g_xr_host_instance_dispatch_table.p_xrRaycastANDROID(wine_session_from_handle(params->session)->host_session, params->rayInfo, params->results);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrReleaseSwapchainImage(void *args)
{
    struct
    {
        XrSwapchain swapchain;
        PTR32 releaseInfo;
        XrResult result;
    } *params = args;
    XrSwapchainImageReleaseInfo *releaseInfo_host = NULL;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->swapchain), params->releaseInfo);

    init_conversion_context(ctx);
    if (params->releaseInfo)
    {
        releaseInfo_host = conversion_context_alloc(ctx, sizeof(*releaseInfo_host));
        convert_XrSwapchainImageReleaseInfo_win32_to_host((const XrSwapchainImageReleaseInfo32 *)(uintptr_t)UlongToPtr(params->releaseInfo), releaseInfo_host);
    }
    params->result = g_xr_host_instance_dispatch_table.p_xrReleaseSwapchainImage(wine_swapchain_from_handle(params->swapchain)->host_swapchain, releaseInfo_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrReleaseSwapchainImage(void *args)
{
    struct xrReleaseSwapchainImage_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->swapchain), params->releaseInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrReleaseSwapchainImage(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->releaseInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRequestDisplayRefreshRateFB(void *args)
{
    struct
    {
        XrSession session;
        float displayRefreshRate;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %f\n", TRACE_HANDLE(params->session), params->displayRefreshRate);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestDisplayRefreshRateFB(wine_session_from_handle(params->session)->host_session, params->displayRefreshRate);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestDisplayRefreshRateFB(void *args)
{
    struct xrRequestDisplayRefreshRateFB_params *params = args;

    TRACE("0x%s, %f\n", TRACE_HANDLE(params->session), params->displayRefreshRate);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestDisplayRefreshRateFB(wine_session_from_handle(params->session)->host_session, params->displayRefreshRate);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRequestExitSession(void *args)
{
    struct
    {
        XrSession session;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->session));

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestExitSession(wine_session_from_handle(params->session)->host_session);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestExitSession(void *args)
{
    struct xrRequestExitSession_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->session));

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestExitSession(wine_session_from_handle(params->session)->host_session);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRequestMapLocalizationML(void *args)
{
    struct
    {
        XrSession session;
        PTR32 requestInfo;
        XrResult result;
    } *params = args;
    XrMapLocalizationRequestInfoML requestInfo_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->requestInfo);

    convert_XrMapLocalizationRequestInfoML_win32_to_host((const XrMapLocalizationRequestInfoML32 *)(uintptr_t)UlongToPtr(params->requestInfo), &requestInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRequestMapLocalizationML(wine_session_from_handle(params->session)->host_session, &requestInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestMapLocalizationML(void *args)
{
    struct xrRequestMapLocalizationML_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->requestInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestMapLocalizationML(wine_session_from_handle(params->session)->host_session, params->requestInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRequestSceneCaptureFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSceneCaptureRequestInfoFB info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    convert_XrSceneCaptureRequestInfoFB_win32_to_host((const XrSceneCaptureRequestInfoFB32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRequestSceneCaptureFB(wine_session_from_handle(params->session)->host_session, &info_host, (XrAsyncRequestIdFB *)(uintptr_t)UlongToPtr(params->requestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestSceneCaptureFB(void *args)
{
    struct xrRequestSceneCaptureFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestSceneCaptureFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRequestWorldMeshAsyncML(void *args)
{
    struct
    {
        XrWorldMeshDetectorML detector;
        PTR32 getInfo;
        PTR32 buffer;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrWorldMeshGetInfoML getInfo_host;
    XrWorldMeshBufferML buffer_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x, %#x\n", TRACE_HANDLE(params->detector), params->getInfo, params->buffer, params->future);

    init_conversion_context(ctx);
    convert_XrWorldMeshGetInfoML_win32_to_host(ctx, (const XrWorldMeshGetInfoML32 *)(uintptr_t)UlongToPtr(params->getInfo), &getInfo_host);
    convert_XrWorldMeshBufferML_win32_to_host((XrWorldMeshBufferML32 *)(uintptr_t)UlongToPtr(params->buffer), &buffer_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRequestWorldMeshAsyncML(params->detector, &getInfo_host, &buffer_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    convert_XrWorldMeshGetInfoML_host_to_win32(&getInfo_host, (XrWorldMeshGetInfoML32 *)(const XrWorldMeshGetInfoML32 *)(uintptr_t)UlongToPtr(params->getInfo));
    convert_XrWorldMeshBufferML_host_to_win32(&buffer_host, (XrWorldMeshBufferML32 *)(XrWorldMeshBufferML32 *)(uintptr_t)UlongToPtr(params->buffer));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestWorldMeshAsyncML(void *args)
{
    struct xrRequestWorldMeshAsyncML_params *params = args;

    TRACE("0x%s, %p, %p, %p\n", TRACE_HANDLE(params->detector), params->getInfo, params->buffer, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestWorldMeshAsyncML(params->detector, params->getInfo, params->buffer, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRequestWorldMeshCompleteML(void *args)
{
    struct
    {
        XrWorldMeshDetectorML detector;
        PTR32 completionInfo;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrWorldMeshRequestCompletionInfoML completionInfo_host;
    XrWorldMeshRequestCompletionML completion_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %p, %#x\n", TRACE_HANDLE(params->detector), params->completionInfo, params->future, params->completion);

    init_conversion_context(ctx);
    convert_XrWorldMeshRequestCompletionInfoML_win32_to_host((const XrWorldMeshRequestCompletionInfoML32 *)(uintptr_t)UlongToPtr(params->completionInfo), &completionInfo_host);
    convert_XrWorldMeshRequestCompletionML_win32_to_host(ctx, (XrWorldMeshRequestCompletionML32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRequestWorldMeshCompleteML(params->detector, &completionInfo_host, params->future, &completion_host);
    convert_XrWorldMeshRequestCompletionML_host_to_win32(&completion_host, (XrWorldMeshRequestCompletionML32 *)(XrWorldMeshRequestCompletionML32 *)(uintptr_t)UlongToPtr(params->completion));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestWorldMeshCompleteML(void *args)
{
    struct xrRequestWorldMeshCompleteML_params *params = args;

    TRACE("0x%s, %p, %p, %p\n", TRACE_HANDLE(params->detector), params->completionInfo, params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestWorldMeshCompleteML(params->detector, params->completionInfo, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRequestWorldMeshStateAsyncML(void *args)
{
    struct
    {
        XrWorldMeshDetectorML detector;
        PTR32 stateRequest;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrWorldMeshStateRequestInfoML stateRequest_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->detector), params->stateRequest, params->future);

    convert_XrWorldMeshStateRequestInfoML_win32_to_host((const XrWorldMeshStateRequestInfoML32 *)(uintptr_t)UlongToPtr(params->stateRequest), &stateRequest_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRequestWorldMeshStateAsyncML(params->detector, &stateRequest_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestWorldMeshStateAsyncML(void *args)
{
    struct xrRequestWorldMeshStateAsyncML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->detector), params->stateRequest, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestWorldMeshStateAsyncML(params->detector, params->stateRequest, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRequestWorldMeshStateCompleteML(void *args)
{
    struct
    {
        XrWorldMeshDetectorML detector;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrWorldMeshStateRequestCompletionML completion_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->detector), params->future, params->completion);

    init_conversion_context(ctx);
    convert_XrWorldMeshStateRequestCompletionML_win32_to_host(ctx, (XrWorldMeshStateRequestCompletionML32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRequestWorldMeshStateCompleteML(params->detector, params->future, &completion_host);
    convert_XrWorldMeshStateRequestCompletionML_host_to_win32(&completion_host, (XrWorldMeshStateRequestCompletionML32 *)(XrWorldMeshStateRequestCompletionML32 *)(uintptr_t)UlongToPtr(params->completion));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRequestWorldMeshStateCompleteML(void *args)
{
    struct xrRequestWorldMeshStateCompleteML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->detector), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrRequestWorldMeshStateCompleteML(params->detector, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrResetBodyTrackingCalibrationMETA(void *args)
{
    struct
    {
        XrBodyTrackerFB bodyTracker;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->bodyTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrResetBodyTrackingCalibrationMETA(params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrResetBodyTrackingCalibrationMETA(void *args)
{
    struct xrResetBodyTrackingCalibrationMETA_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->bodyTracker));

    params->result = g_xr_host_instance_dispatch_table.p_xrResetBodyTrackingCalibrationMETA(params->bodyTracker);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrResultToString(void *args)
{
    struct
    {
        XrInstance instance;
        XrResult value;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->instance), params->value, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrResultToString(wine_instance_from_handle(params->instance)->host_instance, params->value, (char *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrResultToString(void *args)
{
    struct xrResultToString_params *params = args;

    TRACE("0x%s, %#x, %p\n", TRACE_HANDLE(params->instance), params->value, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrResultToString(wine_instance_from_handle(params->instance)->host_instance, params->value, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrResumeSimultaneousHandsAndControllersTrackingMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 resumeInfo;
        XrResult result;
    } *params = args;
    XrSimultaneousHandsAndControllersTrackingResumeInfoMETA resumeInfo_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->resumeInfo);

    convert_XrSimultaneousHandsAndControllersTrackingResumeInfoMETA_win32_to_host((const XrSimultaneousHandsAndControllersTrackingResumeInfoMETA32 *)(uintptr_t)UlongToPtr(params->resumeInfo), &resumeInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrResumeSimultaneousHandsAndControllersTrackingMETA(wine_session_from_handle(params->session)->host_session, &resumeInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrResumeSimultaneousHandsAndControllersTrackingMETA(void *args)
{
    struct xrResumeSimultaneousHandsAndControllersTrackingMETA_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->resumeInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrResumeSimultaneousHandsAndControllersTrackingMETA(wine_session_from_handle(params->session)->host_session, params->resumeInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRetrieveSpaceDiscoveryResultsMETA(void *args)
{
    struct
    {
        XrSession session;
        XrAsyncRequestIdFB requestId;
        PTR32 results;
        XrResult result;
    } *params = args;
    XrSpaceDiscoveryResultsMETA results_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->requestId), params->results);

    init_conversion_context(ctx);
    convert_XrSpaceDiscoveryResultsMETA_win32_to_host(ctx, (XrSpaceDiscoveryResultsMETA32 *)(uintptr_t)UlongToPtr(params->results), &results_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRetrieveSpaceDiscoveryResultsMETA(wine_session_from_handle(params->session)->host_session, params->requestId, &results_host);
    convert_XrSpaceDiscoveryResultsMETA_host_to_win32(&results_host, (XrSpaceDiscoveryResultsMETA32 *)(XrSpaceDiscoveryResultsMETA32 *)(uintptr_t)UlongToPtr(params->results));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRetrieveSpaceDiscoveryResultsMETA(void *args)
{
    struct xrRetrieveSpaceDiscoveryResultsMETA_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->requestId), params->results);

    params->result = g_xr_host_instance_dispatch_table.p_xrRetrieveSpaceDiscoveryResultsMETA(wine_session_from_handle(params->session)->host_session, params->requestId, params->results);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrRetrieveSpaceQueryResultsFB(void *args)
{
    struct
    {
        XrSession session;
        XrAsyncRequestIdFB requestId;
        PTR32 results;
        XrResult result;
    } *params = args;
    XrSpaceQueryResultsFB results_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, 0x%s, %#x\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->requestId), params->results);

    init_conversion_context(ctx);
    convert_XrSpaceQueryResultsFB_win32_to_host(ctx, (XrSpaceQueryResultsFB32 *)(uintptr_t)UlongToPtr(params->results), &results_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrRetrieveSpaceQueryResultsFB(wine_session_from_handle(params->session)->host_session, params->requestId, &results_host);
    convert_XrSpaceQueryResultsFB_host_to_win32(&results_host, (XrSpaceQueryResultsFB32 *)(XrSpaceQueryResultsFB32 *)(uintptr_t)UlongToPtr(params->results));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrRetrieveSpaceQueryResultsFB(void *args)
{
    struct xrRetrieveSpaceQueryResultsFB_params *params = args;

    TRACE("0x%s, 0x%s, %p\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->requestId), params->results);

    params->result = g_xr_host_instance_dispatch_table.p_xrRetrieveSpaceQueryResultsFB(wine_session_from_handle(params->session)->host_session, params->requestId, params->results);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSaveSpaceFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpaceSaveInfoFB info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    convert_XrSpaceSaveInfoFB_win32_to_host((const XrSpaceSaveInfoFB32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSaveSpaceFB(wine_session_from_handle(params->session)->host_session, &info_host, (XrAsyncRequestIdFB *)(uintptr_t)UlongToPtr(params->requestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSaveSpaceFB(void *args)
{
    struct xrSaveSpaceFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrSaveSpaceFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSaveSpaceListFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpaceListSaveInfoFB info_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    init_conversion_context(ctx);
    convert_XrSpaceListSaveInfoFB_win32_to_host(ctx, (const XrSpaceListSaveInfoFB32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSaveSpaceListFB(wine_session_from_handle(params->session)->host_session, &info_host, (XrAsyncRequestIdFB *)(uintptr_t)UlongToPtr(params->requestId));
    convert_XrSpaceListSaveInfoFB_host_to_win32(&info_host, (XrSpaceListSaveInfoFB32 *)(const XrSpaceListSaveInfoFB32 *)(uintptr_t)UlongToPtr(params->info));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSaveSpaceListFB(void *args)
{
    struct xrSaveSpaceListFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrSaveSpaceListFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSaveSpacesMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpacesSaveInfoMETA info_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    init_conversion_context(ctx);
    convert_XrSpacesSaveInfoMETA_win32_to_host(ctx, (const XrSpacesSaveInfoMETA32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSaveSpacesMETA(wine_session_from_handle(params->session)->host_session, &info_host, (XrAsyncRequestIdFB *)(uintptr_t)UlongToPtr(params->requestId));
    convert_XrSpacesSaveInfoMETA_host_to_win32(&info_host, (XrSpacesSaveInfoMETA32 *)(const XrSpacesSaveInfoMETA32 *)(uintptr_t)UlongToPtr(params->info));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSaveSpacesMETA(void *args)
{
    struct xrSaveSpacesMETA_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrSaveSpacesMETA(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSendVirtualKeyboardInputMETA(void *args)
{
    struct
    {
        XrVirtualKeyboardMETA keyboard;
        PTR32 info;
        PTR32 interactorRootPose;
        XrResult result;
    } *params = args;
    XrVirtualKeyboardInputInfoMETA info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->keyboard), params->info, params->interactorRootPose);

    convert_XrVirtualKeyboardInputInfoMETA_win32_to_host((const XrVirtualKeyboardInputInfoMETA32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSendVirtualKeyboardInputMETA(params->keyboard, &info_host, (XrPosef *)(uintptr_t)UlongToPtr(params->interactorRootPose));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSendVirtualKeyboardInputMETA(void *args)
{
    struct xrSendVirtualKeyboardInputMETA_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->keyboard), params->info, params->interactorRootPose);

    params->result = g_xr_host_instance_dispatch_table.p_xrSendVirtualKeyboardInputMETA(params->keyboard, params->info, params->interactorRootPose);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetColorSpaceFB(void *args)
{
    struct
    {
        XrSession session;
        XrColorSpaceFB colorSpace;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->colorSpace);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetColorSpaceFB(wine_session_from_handle(params->session)->host_session, params->colorSpace);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetColorSpaceFB(void *args)
{
    struct xrSetColorSpaceFB_params *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->colorSpace);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetColorSpaceFB(wine_session_from_handle(params->session)->host_session, params->colorSpace);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetDigitalLensControlALMALENCE(void *args)
{
    struct
    {
        XrSession session;
        PTR32 digitalLensControl;
        XrResult result;
    } *params = args;
    XrDigitalLensControlALMALENCE digitalLensControl_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->digitalLensControl);

    convert_XrDigitalLensControlALMALENCE_win32_to_host((const XrDigitalLensControlALMALENCE32 *)(uintptr_t)UlongToPtr(params->digitalLensControl), &digitalLensControl_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSetDigitalLensControlALMALENCE(wine_session_from_handle(params->session)->host_session, &digitalLensControl_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetDigitalLensControlALMALENCE(void *args)
{
    struct xrSetDigitalLensControlALMALENCE_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->digitalLensControl);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetDigitalLensControlALMALENCE(wine_session_from_handle(params->session)->host_session, params->digitalLensControl);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetEnvironmentDepthEstimationVARJO(void *args)
{
    struct
    {
        XrSession session;
        XrBool32 enabled;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %u\n", TRACE_HANDLE(params->session), params->enabled);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetEnvironmentDepthEstimationVARJO(wine_session_from_handle(params->session)->host_session, params->enabled);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetEnvironmentDepthEstimationVARJO(void *args)
{
    struct xrSetEnvironmentDepthEstimationVARJO_params *params = args;

    TRACE("0x%s, %u\n", TRACE_HANDLE(params->session), params->enabled);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetEnvironmentDepthEstimationVARJO(wine_session_from_handle(params->session)->host_session, params->enabled);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetEnvironmentDepthHandRemovalMETA(void *args)
{
    struct
    {
        XrEnvironmentDepthProviderMETA environmentDepthProvider;
        PTR32 setInfo;
        XrResult result;
    } *params = args;
    XrEnvironmentDepthHandRemovalSetInfoMETA setInfo_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->environmentDepthProvider), params->setInfo);

    convert_XrEnvironmentDepthHandRemovalSetInfoMETA_win32_to_host((const XrEnvironmentDepthHandRemovalSetInfoMETA32 *)(uintptr_t)UlongToPtr(params->setInfo), &setInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSetEnvironmentDepthHandRemovalMETA(params->environmentDepthProvider, &setInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetEnvironmentDepthHandRemovalMETA(void *args)
{
    struct xrSetEnvironmentDepthHandRemovalMETA_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->environmentDepthProvider), params->setInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetEnvironmentDepthHandRemovalMETA(params->environmentDepthProvider, params->setInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetInputDeviceActiveEXT(void *args)
{
    struct
    {
        XrSession session;
        XrPath interactionProfile;
        XrPath topLevelPath;
        XrBool32 isActive;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, 0x%s, %u\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->interactionProfile), wine_dbgstr_longlong(params->topLevelPath), params->isActive);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceActiveEXT(wine_session_from_handle(params->session)->host_session, params->interactionProfile, params->topLevelPath, params->isActive);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetInputDeviceActiveEXT(void *args)
{
    struct xrSetInputDeviceActiveEXT_params *params = args;

    TRACE("0x%s, 0x%s, 0x%s, %u\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->interactionProfile), wine_dbgstr_longlong(params->topLevelPath), params->isActive);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceActiveEXT(wine_session_from_handle(params->session)->host_session, params->interactionProfile, params->topLevelPath, params->isActive);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetInputDeviceLocationEXT(void *args)
{
    struct
    {
        XrSession session;
        XrPath topLevelPath;
        XrPath inputSourcePath;
        XrSpace space;
        XrPosef pose;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, 0x%s, 0x%s, {{%f, %f, %f, %f}, {%f %f %f}}\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), TRACE_HANDLE(params->space), params->pose.orientation.x, params->pose.orientation.y, params->pose.orientation.z, params->pose.orientation.w, params->pose.position.x, params->pose.position.y, params->pose.position.z);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceLocationEXT(wine_session_from_handle(params->session)->host_session, params->topLevelPath, params->inputSourcePath, params->space, params->pose);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetInputDeviceLocationEXT(void *args)
{
    struct xrSetInputDeviceLocationEXT_params *params = args;

    TRACE("0x%s, 0x%s, 0x%s, 0x%s, {{%f, %f, %f, %f}, {%f %f %f}}\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), TRACE_HANDLE(params->space), params->pose.orientation.x, params->pose.orientation.y, params->pose.orientation.z, params->pose.orientation.w, params->pose.position.x, params->pose.position.y, params->pose.position.z);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceLocationEXT(wine_session_from_handle(params->session)->host_session, params->topLevelPath, params->inputSourcePath, params->space, params->pose);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetInputDeviceStateBoolEXT(void *args)
{
    struct
    {
        XrSession session;
        XrPath topLevelPath;
        XrPath inputSourcePath;
        XrBool32 state;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, 0x%s, %u\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceStateBoolEXT(wine_session_from_handle(params->session)->host_session, params->topLevelPath, params->inputSourcePath, params->state);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetInputDeviceStateBoolEXT(void *args)
{
    struct xrSetInputDeviceStateBoolEXT_params *params = args;

    TRACE("0x%s, 0x%s, 0x%s, %u\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceStateBoolEXT(wine_session_from_handle(params->session)->host_session, params->topLevelPath, params->inputSourcePath, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetInputDeviceStateFloatEXT(void *args)
{
    struct
    {
        XrSession session;
        XrPath topLevelPath;
        XrPath inputSourcePath;
        float state;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, 0x%s, %f\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceStateFloatEXT(wine_session_from_handle(params->session)->host_session, params->topLevelPath, params->inputSourcePath, params->state);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetInputDeviceStateFloatEXT(void *args)
{
    struct xrSetInputDeviceStateFloatEXT_params *params = args;

    TRACE("0x%s, 0x%s, 0x%s, %f\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceStateFloatEXT(wine_session_from_handle(params->session)->host_session, params->topLevelPath, params->inputSourcePath, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetInputDeviceStateVector2fEXT(void *args)
{
    struct
    {
        XrSession session;
        XrPath topLevelPath;
        XrPath inputSourcePath;
        XrVector2f state;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, 0x%s, %f, %f\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->state.x, params->state.y);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceStateVector2fEXT(wine_session_from_handle(params->session)->host_session, params->topLevelPath, params->inputSourcePath, params->state);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetInputDeviceStateVector2fEXT(void *args)
{
    struct xrSetInputDeviceStateVector2fEXT_params *params = args;

    TRACE("0x%s, 0x%s, 0x%s, %f, %f\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->topLevelPath), wine_dbgstr_longlong(params->inputSourcePath), params->state.x, params->state.y);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetInputDeviceStateVector2fEXT(wine_session_from_handle(params->session)->host_session, params->topLevelPath, params->inputSourcePath, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetMarkerTrackingPredictionVARJO(void *args)
{
    struct
    {
        XrSession session;
        uint64_t DECLSPEC_ALIGN(8) markerId;
        XrBool32 enable;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, %u\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->markerId), params->enable);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetMarkerTrackingPredictionVARJO(wine_session_from_handle(params->session)->host_session, params->markerId, params->enable);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetMarkerTrackingPredictionVARJO(void *args)
{
    struct xrSetMarkerTrackingPredictionVARJO_params *params = args;

    TRACE("0x%s, 0x%s, %u\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->markerId), params->enable);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetMarkerTrackingPredictionVARJO(wine_session_from_handle(params->session)->host_session, params->markerId, params->enable);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetMarkerTrackingTimeoutVARJO(void *args)
{
    struct
    {
        XrSession session;
        uint64_t DECLSPEC_ALIGN(8) markerId;
        XrDuration timeout;
        XrResult result;
    } *params = args;

    TRACE("0x%s, 0x%s, 0x%s\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->markerId), wine_dbgstr_longlong(params->timeout));

    params->result = g_xr_host_instance_dispatch_table.p_xrSetMarkerTrackingTimeoutVARJO(wine_session_from_handle(params->session)->host_session, params->markerId, params->timeout);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetMarkerTrackingTimeoutVARJO(void *args)
{
    struct xrSetMarkerTrackingTimeoutVARJO_params *params = args;

    TRACE("0x%s, 0x%s, 0x%s\n", TRACE_HANDLE(params->session), wine_dbgstr_longlong(params->markerId), wine_dbgstr_longlong(params->timeout));

    params->result = g_xr_host_instance_dispatch_table.p_xrSetMarkerTrackingTimeoutVARJO(wine_session_from_handle(params->session)->host_session, params->markerId, params->timeout);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetMarkerTrackingVARJO(void *args)
{
    struct
    {
        XrSession session;
        XrBool32 enabled;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %u\n", TRACE_HANDLE(params->session), params->enabled);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetMarkerTrackingVARJO(wine_session_from_handle(params->session)->host_session, params->enabled);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetMarkerTrackingVARJO(void *args)
{
    struct xrSetMarkerTrackingVARJO_params *params = args;

    TRACE("0x%s, %u\n", TRACE_HANDLE(params->session), params->enabled);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetMarkerTrackingVARJO(wine_session_from_handle(params->session)->host_session, params->enabled);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetPerformanceMetricsStateMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrPerformanceMetricsStateMETA state_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->state);

    convert_XrPerformanceMetricsStateMETA_win32_to_host((const XrPerformanceMetricsStateMETA32 *)(uintptr_t)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSetPerformanceMetricsStateMETA(wine_session_from_handle(params->session)->host_session, &state_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetPerformanceMetricsStateMETA(void *args)
{
    struct xrSetPerformanceMetricsStateMETA_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetPerformanceMetricsStateMETA(wine_session_from_handle(params->session)->host_session, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetSpaceComponentStatusFB(void *args)
{
    struct
    {
        XrSpace space;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpaceComponentStatusSetInfoFB info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->space), params->info, params->requestId);

    convert_XrSpaceComponentStatusSetInfoFB_win32_to_host((const XrSpaceComponentStatusSetInfoFB32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSetSpaceComponentStatusFB(params->space, &info_host, (XrAsyncRequestIdFB *)(uintptr_t)UlongToPtr(params->requestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetSpaceComponentStatusFB(void *args)
{
    struct xrSetSpaceComponentStatusFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->space), params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetSpaceComponentStatusFB(params->space, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetSystemNotificationsML(void *args)
{
    struct
    {
        XrInstance instance;
        PTR32 info;
        XrResult result;
    } *params = args;
    XrSystemNotificationsSetInfoML info_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->instance), params->info);

    convert_XrSystemNotificationsSetInfoML_win32_to_host((const XrSystemNotificationsSetInfoML32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSetSystemNotificationsML(wine_instance_from_handle(params->instance)->host_instance, &info_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetSystemNotificationsML(void *args)
{
    struct xrSetSystemNotificationsML_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->instance), params->info);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetSystemNotificationsML(wine_instance_from_handle(params->instance)->host_instance, params->info);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetTrackingOptimizationSettingsHintQCOM(void *args)
{
    struct
    {
        XrSession session;
        XrTrackingOptimizationSettingsDomainQCOM domain;
        XrTrackingOptimizationSettingsHintQCOM hint;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->domain, params->hint);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetTrackingOptimizationSettingsHintQCOM(wine_session_from_handle(params->session)->host_session, params->domain, params->hint);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetTrackingOptimizationSettingsHintQCOM(void *args)
{
    struct xrSetTrackingOptimizationSettingsHintQCOM_params *params = args;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->domain, params->hint);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetTrackingOptimizationSettingsHintQCOM(wine_session_from_handle(params->session)->host_session, params->domain, params->hint);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetViewOffsetVARJO(void *args)
{
    struct
    {
        XrSession session;
        float offset;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %f\n", TRACE_HANDLE(params->session), params->offset);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetViewOffsetVARJO(wine_session_from_handle(params->session)->host_session, params->offset);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetViewOffsetVARJO(void *args)
{
    struct xrSetViewOffsetVARJO_params *params = args;

    TRACE("0x%s, %f\n", TRACE_HANDLE(params->session), params->offset);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetViewOffsetVARJO(wine_session_from_handle(params->session)->host_session, params->offset);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSetVirtualKeyboardModelVisibilityMETA(void *args)
{
    struct
    {
        XrVirtualKeyboardMETA keyboard;
        PTR32 modelVisibility;
        XrResult result;
    } *params = args;
    XrVirtualKeyboardModelVisibilitySetInfoMETA modelVisibility_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->keyboard), params->modelVisibility);

    convert_XrVirtualKeyboardModelVisibilitySetInfoMETA_win32_to_host((const XrVirtualKeyboardModelVisibilitySetInfoMETA32 *)(uintptr_t)UlongToPtr(params->modelVisibility), &modelVisibility_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSetVirtualKeyboardModelVisibilityMETA(params->keyboard, &modelVisibility_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSetVirtualKeyboardModelVisibilityMETA(void *args)
{
    struct xrSetVirtualKeyboardModelVisibilityMETA_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->keyboard), params->modelVisibility);

    params->result = g_xr_host_instance_dispatch_table.p_xrSetVirtualKeyboardModelVisibilityMETA(params->keyboard, params->modelVisibility);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrShareSpacesFB(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrSpaceShareInfoFB info_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    init_conversion_context(ctx);
    convert_XrSpaceShareInfoFB_win32_to_host(ctx, (const XrSpaceShareInfoFB32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpacesFB(wine_session_from_handle(params->session)->host_session, &info_host, (XrAsyncRequestIdFB *)(uintptr_t)UlongToPtr(params->requestId));
    convert_XrSpaceShareInfoFB_host_to_win32(&info_host, (XrSpaceShareInfoFB32 *)(const XrSpaceShareInfoFB32 *)(uintptr_t)UlongToPtr(params->info));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrShareSpacesFB(void *args)
{
    struct xrShareSpacesFB_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpacesFB(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrShareSpacesMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrShareSpacesInfoMETA info_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    init_conversion_context(ctx);
    convert_XrShareSpacesInfoMETA_win32_to_host(ctx, (const XrShareSpacesInfoMETA32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpacesMETA(wine_session_from_handle(params->session)->host_session, &info_host, (XrAsyncRequestIdFB *)(uintptr_t)UlongToPtr(params->requestId));
    convert_XrShareSpacesInfoMETA_host_to_win32(&info_host, (XrShareSpacesInfoMETA32 *)(const XrShareSpacesInfoMETA32 *)(uintptr_t)UlongToPtr(params->info));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrShareSpacesMETA(void *args)
{
    struct xrShareSpacesMETA_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpacesMETA(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrShareSpatialAnchorAsyncBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        PTR32 info;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorShareInfoBD info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->provider), params->info, params->future);

    convert_XrSpatialAnchorShareInfoBD_win32_to_host((const XrSpatialAnchorShareInfoBD32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpatialAnchorAsyncBD(params->provider, &info_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrShareSpatialAnchorAsyncBD(void *args)
{
    struct xrShareSpatialAnchorAsyncBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->provider), params->info, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpatialAnchorAsyncBD(params->provider, params->info, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrShareSpatialAnchorCompleteBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrFutureCompletionEXT completion_host;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->provider), params->future, params->completion);

    convert_XrFutureCompletionEXT_win32_to_host((XrFutureCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpatialAnchorCompleteBD(params->provider, params->future, &completion_host);
    convert_XrFutureCompletionEXT_host_to_win32(&completion_host, (XrFutureCompletionEXT32 *)(XrFutureCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrShareSpatialAnchorCompleteBD(void *args)
{
    struct xrShareSpatialAnchorCompleteBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->provider), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrShareSpatialAnchorCompleteBD(params->provider, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSnapshotMarkerDetectorML(void *args)
{
    struct
    {
        XrMarkerDetectorML markerDetector;
        PTR32 snapshotInfo;
        XrResult result;
    } *params = args;
    XrMarkerDetectorSnapshotInfoML snapshotInfo_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->markerDetector), params->snapshotInfo);

    convert_XrMarkerDetectorSnapshotInfoML_win32_to_host((XrMarkerDetectorSnapshotInfoML32 *)(uintptr_t)UlongToPtr(params->snapshotInfo), &snapshotInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSnapshotMarkerDetectorML(params->markerDetector, &snapshotInfo_host);
    convert_XrMarkerDetectorSnapshotInfoML_host_to_win32(&snapshotInfo_host, (XrMarkerDetectorSnapshotInfoML32 *)(XrMarkerDetectorSnapshotInfoML32 *)(uintptr_t)UlongToPtr(params->snapshotInfo));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSnapshotMarkerDetectorML(void *args)
{
    struct xrSnapshotMarkerDetectorML_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->markerDetector), params->snapshotInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrSnapshotMarkerDetectorML(params->markerDetector, params->snapshotInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStartColocationAdvertisementMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 advertisementRequestId;
        XrResult result;
    } *params = args;
    XrColocationAdvertisementStartInfoMETA info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->advertisementRequestId);

    convert_XrColocationAdvertisementStartInfoMETA_win32_to_host((const XrColocationAdvertisementStartInfoMETA32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrStartColocationAdvertisementMETA(wine_session_from_handle(params->session)->host_session, &info_host, (XrAsyncRequestIdFB *)(uintptr_t)UlongToPtr(params->advertisementRequestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStartColocationAdvertisementMETA(void *args)
{
    struct xrStartColocationAdvertisementMETA_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->advertisementRequestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrStartColocationAdvertisementMETA(wine_session_from_handle(params->session)->host_session, params->info, params->advertisementRequestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStartColocationDiscoveryMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 discoveryRequestId;
        XrResult result;
    } *params = args;
    XrColocationDiscoveryStartInfoMETA info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->discoveryRequestId);

    convert_XrColocationDiscoveryStartInfoMETA_win32_to_host((const XrColocationDiscoveryStartInfoMETA32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrStartColocationDiscoveryMETA(wine_session_from_handle(params->session)->host_session, &info_host, (XrAsyncRequestIdFB *)(uintptr_t)UlongToPtr(params->discoveryRequestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStartColocationDiscoveryMETA(void *args)
{
    struct xrStartColocationDiscoveryMETA_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->discoveryRequestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrStartColocationDiscoveryMETA(wine_session_from_handle(params->session)->host_session, params->info, params->discoveryRequestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStartEnvironmentDepthProviderMETA(void *args)
{
    struct
    {
        XrEnvironmentDepthProviderMETA environmentDepthProvider;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->environmentDepthProvider));

    params->result = g_xr_host_instance_dispatch_table.p_xrStartEnvironmentDepthProviderMETA(params->environmentDepthProvider);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStartEnvironmentDepthProviderMETA(void *args)
{
    struct xrStartEnvironmentDepthProviderMETA_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->environmentDepthProvider));

    params->result = g_xr_host_instance_dispatch_table.p_xrStartEnvironmentDepthProviderMETA(params->environmentDepthProvider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStartSenseDataProviderAsyncBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        PTR32 startInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSenseDataProviderStartInfoBD startInfo_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->provider), params->startInfo, params->future);

    convert_XrSenseDataProviderStartInfoBD_win32_to_host((const XrSenseDataProviderStartInfoBD32 *)(uintptr_t)UlongToPtr(params->startInfo), &startInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrStartSenseDataProviderAsyncBD(params->provider, &startInfo_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStartSenseDataProviderAsyncBD(void *args)
{
    struct xrStartSenseDataProviderAsyncBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->provider), params->startInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrStartSenseDataProviderAsyncBD(params->provider, params->startInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStartSenseDataProviderCompleteBD(void *args)
{
    struct
    {
        XrSession session;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrFutureCompletionEXT completion_host;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->session), params->future, params->completion);

    convert_XrFutureCompletionEXT_win32_to_host((XrFutureCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrStartSenseDataProviderCompleteBD(wine_session_from_handle(params->session)->host_session, params->future, &completion_host);
    convert_XrFutureCompletionEXT_host_to_win32(&completion_host, (XrFutureCompletionEXT32 *)(XrFutureCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStartSenseDataProviderCompleteBD(void *args)
{
    struct xrStartSenseDataProviderCompleteBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrStartSenseDataProviderCompleteBD(wine_session_from_handle(params->session)->host_session, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStopColocationAdvertisementMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrColocationAdvertisementStopInfoMETA info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    convert_XrColocationAdvertisementStopInfoMETA_win32_to_host((const XrColocationAdvertisementStopInfoMETA32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrStopColocationAdvertisementMETA(wine_session_from_handle(params->session)->host_session, &info_host, (XrAsyncRequestIdFB *)(uintptr_t)UlongToPtr(params->requestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStopColocationAdvertisementMETA(void *args)
{
    struct xrStopColocationAdvertisementMETA_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrStopColocationAdvertisementMETA(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStopColocationDiscoveryMETA(void *args)
{
    struct
    {
        XrSession session;
        PTR32 info;
        PTR32 requestId;
        XrResult result;
    } *params = args;
    XrColocationDiscoveryStopInfoMETA info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    convert_XrColocationDiscoveryStopInfoMETA_win32_to_host((const XrColocationDiscoveryStopInfoMETA32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrStopColocationDiscoveryMETA(wine_session_from_handle(params->session)->host_session, &info_host, (XrAsyncRequestIdFB *)(uintptr_t)UlongToPtr(params->requestId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStopColocationDiscoveryMETA(void *args)
{
    struct xrStopColocationDiscoveryMETA_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->info, params->requestId);

    params->result = g_xr_host_instance_dispatch_table.p_xrStopColocationDiscoveryMETA(wine_session_from_handle(params->session)->host_session, params->info, params->requestId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStopEnvironmentDepthProviderMETA(void *args)
{
    struct
    {
        XrEnvironmentDepthProviderMETA environmentDepthProvider;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->environmentDepthProvider));

    params->result = g_xr_host_instance_dispatch_table.p_xrStopEnvironmentDepthProviderMETA(params->environmentDepthProvider);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStopEnvironmentDepthProviderMETA(void *args)
{
    struct xrStopEnvironmentDepthProviderMETA_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->environmentDepthProvider));

    params->result = g_xr_host_instance_dispatch_table.p_xrStopEnvironmentDepthProviderMETA(params->environmentDepthProvider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStopHapticFeedback(void *args)
{
    struct
    {
        XrSession session;
        PTR32 hapticActionInfo;
        XrResult result;
    } *params = args;
    XrHapticActionInfo hapticActionInfo_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->hapticActionInfo);

    convert_XrHapticActionInfo_win32_to_host((const XrHapticActionInfo32 *)(uintptr_t)UlongToPtr(params->hapticActionInfo), &hapticActionInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrStopHapticFeedback(wine_session_from_handle(params->session)->host_session, &hapticActionInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStopHapticFeedback(void *args)
{
    struct xrStopHapticFeedback_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->hapticActionInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrStopHapticFeedback(wine_session_from_handle(params->session)->host_session, params->hapticActionInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStopSenseDataProviderBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->provider));

    params->result = g_xr_host_instance_dispatch_table.p_xrStopSenseDataProviderBD(params->provider);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStopSenseDataProviderBD(void *args)
{
    struct xrStopSenseDataProviderBD_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->provider));

    params->result = g_xr_host_instance_dispatch_table.p_xrStopSenseDataProviderBD(params->provider);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStringToPath(void *args)
{
    struct
    {
        XrInstance instance;
        PTR32 pathString;
        PTR32 path;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->instance), params->pathString, params->path);

    params->result = g_xr_host_instance_dispatch_table.p_xrStringToPath(wine_instance_from_handle(params->instance)->host_instance, (const char *)(uintptr_t)UlongToPtr(params->pathString), (XrPath *)(uintptr_t)UlongToPtr(params->path));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStringToPath(void *args)
{
    struct xrStringToPath_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->instance), params->pathString, params->path);

    params->result = g_xr_host_instance_dispatch_table.p_xrStringToPath(wine_instance_from_handle(params->instance)->host_instance, params->pathString, params->path);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStructureTypeToString(void *args)
{
    struct
    {
        XrInstance instance;
        XrStructureType value;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->instance), params->value, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrStructureTypeToString(wine_instance_from_handle(params->instance)->host_instance, params->value, (char *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStructureTypeToString(void *args)
{
    struct xrStructureTypeToString_params *params = args;

    TRACE("0x%s, %#x, %p\n", TRACE_HANDLE(params->instance), params->value, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrStructureTypeToString(wine_instance_from_handle(params->instance)->host_instance, params->value, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrStructureTypeToString2KHR(void *args)
{
    struct
    {
        XrInstance instance;
        XrStructureType value;
        PTR32 buffer;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->instance), params->value, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrStructureTypeToString2KHR(wine_instance_from_handle(params->instance)->host_instance, params->value, (char *)(uintptr_t)UlongToPtr(params->buffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrStructureTypeToString2KHR(void *args)
{
    struct xrStructureTypeToString2KHR_params *params = args;

    TRACE("0x%s, %#x, %p\n", TRACE_HANDLE(params->instance), params->value, params->buffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrStructureTypeToString2KHR(wine_instance_from_handle(params->instance)->host_instance, params->value, params->buffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSuggestBodyTrackingCalibrationOverrideMETA(void *args)
{
    struct
    {
        XrBodyTrackerFB bodyTracker;
        PTR32 calibrationInfo;
        XrResult result;
    } *params = args;
    XrBodyTrackingCalibrationInfoMETA calibrationInfo_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->bodyTracker), params->calibrationInfo);

    convert_XrBodyTrackingCalibrationInfoMETA_win32_to_host((const XrBodyTrackingCalibrationInfoMETA32 *)(uintptr_t)UlongToPtr(params->calibrationInfo), &calibrationInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSuggestBodyTrackingCalibrationOverrideMETA(params->bodyTracker, &calibrationInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSuggestBodyTrackingCalibrationOverrideMETA(void *args)
{
    struct xrSuggestBodyTrackingCalibrationOverrideMETA_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->bodyTracker), params->calibrationInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrSuggestBodyTrackingCalibrationOverrideMETA(params->bodyTracker, params->calibrationInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSuggestInteractionProfileBindings(void *args)
{
    struct
    {
        XrInstance instance;
        PTR32 suggestedBindings;
        XrResult result;
    } *params = args;
    XrInteractionProfileSuggestedBinding suggestedBindings_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->instance), params->suggestedBindings);

    init_conversion_context(ctx);
    convert_XrInteractionProfileSuggestedBinding_win32_to_host(ctx, (const XrInteractionProfileSuggestedBinding32 *)(uintptr_t)UlongToPtr(params->suggestedBindings), &suggestedBindings_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSuggestInteractionProfileBindings(wine_instance_from_handle(params->instance)->host_instance, &suggestedBindings_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSuggestInteractionProfileBindings(void *args)
{
    struct xrSuggestInteractionProfileBindings_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->instance), params->suggestedBindings);

    params->result = g_xr_host_instance_dispatch_table.p_xrSuggestInteractionProfileBindings(wine_instance_from_handle(params->instance)->host_instance, params->suggestedBindings);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSuggestVirtualKeyboardLocationMETA(void *args)
{
    struct
    {
        XrVirtualKeyboardMETA keyboard;
        PTR32 locationInfo;
        XrResult result;
    } *params = args;
    XrVirtualKeyboardLocationInfoMETA locationInfo_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->keyboard), params->locationInfo);

    convert_XrVirtualKeyboardLocationInfoMETA_win32_to_host((const XrVirtualKeyboardLocationInfoMETA32 *)(uintptr_t)UlongToPtr(params->locationInfo), &locationInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSuggestVirtualKeyboardLocationMETA(params->keyboard, &locationInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSuggestVirtualKeyboardLocationMETA(void *args)
{
    struct xrSuggestVirtualKeyboardLocationMETA_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->keyboard), params->locationInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrSuggestVirtualKeyboardLocationMETA(params->keyboard, params->locationInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrSyncActions(void *args)
{
    struct
    {
        XrSession session;
        PTR32 syncInfo;
        XrResult result;
    } *params = args;
    XrActionsSyncInfo syncInfo_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->session), params->syncInfo);

    init_conversion_context(ctx);
    convert_XrActionsSyncInfo_win32_to_host(ctx, (const XrActionsSyncInfo32 *)(uintptr_t)UlongToPtr(params->syncInfo), &syncInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrSyncActions(wine_session_from_handle(params->session)->host_session, &syncInfo_host);
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrSyncActions(void *args)
{
    struct xrSyncActions_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->session), params->syncInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrSyncActions(wine_session_from_handle(params->session)->host_session, params->syncInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrThermalGetTemperatureTrendEXT(void *args)
{
    struct
    {
        XrSession session;
        XrPerfSettingsDomainEXT domain;
        PTR32 notificationLevel;
        PTR32 tempHeadroom;
        PTR32 tempSlope;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x, %#x, %#x, %#x\n", TRACE_HANDLE(params->session), params->domain, params->notificationLevel, params->tempHeadroom, params->tempSlope);

    params->result = g_xr_host_instance_dispatch_table.p_xrThermalGetTemperatureTrendEXT(wine_session_from_handle(params->session)->host_session, params->domain, (XrPerfSettingsNotificationLevelEXT *)(uintptr_t)UlongToPtr(params->notificationLevel), (float *)(uintptr_t)UlongToPtr(params->tempHeadroom), (float *)(uintptr_t)UlongToPtr(params->tempSlope));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrThermalGetTemperatureTrendEXT(void *args)
{
    struct xrThermalGetTemperatureTrendEXT_params *params = args;

    TRACE("0x%s, %#x, %p, %p, %p\n", TRACE_HANDLE(params->session), params->domain, params->notificationLevel, params->tempHeadroom, params->tempSlope);

    params->result = g_xr_host_instance_dispatch_table.p_xrThermalGetTemperatureTrendEXT(wine_session_from_handle(params->session)->host_session, params->domain, params->notificationLevel, params->tempHeadroom, params->tempSlope);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrTriangleMeshBeginUpdateFB(void *args)
{
    struct
    {
        XrTriangleMeshFB mesh;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->mesh));

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshBeginUpdateFB(params->mesh);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshBeginUpdateFB(void *args)
{
    struct xrTriangleMeshBeginUpdateFB_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->mesh));

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshBeginUpdateFB(params->mesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrTriangleMeshBeginVertexBufferUpdateFB(void *args)
{
    struct
    {
        XrTriangleMeshFB mesh;
        PTR32 outVertexCount;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->mesh), params->outVertexCount);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshBeginVertexBufferUpdateFB(params->mesh, (uint32_t *)(uintptr_t)UlongToPtr(params->outVertexCount));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshBeginVertexBufferUpdateFB(void *args)
{
    struct xrTriangleMeshBeginVertexBufferUpdateFB_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->mesh), params->outVertexCount);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshBeginVertexBufferUpdateFB(params->mesh, params->outVertexCount);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrTriangleMeshEndUpdateFB(void *args)
{
    struct
    {
        XrTriangleMeshFB mesh;
        uint32_t vertexCount;
        uint32_t triangleCount;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %u, %u\n", TRACE_HANDLE(params->mesh), params->vertexCount, params->triangleCount);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshEndUpdateFB(params->mesh, params->vertexCount, params->triangleCount);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshEndUpdateFB(void *args)
{
    struct xrTriangleMeshEndUpdateFB_params *params = args;

    TRACE("0x%s, %u, %u\n", TRACE_HANDLE(params->mesh), params->vertexCount, params->triangleCount);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshEndUpdateFB(params->mesh, params->vertexCount, params->triangleCount);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrTriangleMeshEndVertexBufferUpdateFB(void *args)
{
    struct
    {
        XrTriangleMeshFB mesh;
        XrResult result;
    } *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->mesh));

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshEndVertexBufferUpdateFB(params->mesh);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshEndVertexBufferUpdateFB(void *args)
{
    struct xrTriangleMeshEndVertexBufferUpdateFB_params *params = args;

    TRACE("0x%s\n", TRACE_HANDLE(params->mesh));

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshEndVertexBufferUpdateFB(params->mesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrTriangleMeshGetIndexBufferFB(void *args)
{
    struct
    {
        XrTriangleMeshFB mesh;
        PTR32 outIndexBuffer;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->mesh), params->outIndexBuffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshGetIndexBufferFB(params->mesh, (uint32_t **)(uintptr_t)UlongToPtr(params->outIndexBuffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshGetIndexBufferFB(void *args)
{
    struct xrTriangleMeshGetIndexBufferFB_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->mesh), params->outIndexBuffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshGetIndexBufferFB(params->mesh, params->outIndexBuffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrTriangleMeshGetVertexBufferFB(void *args)
{
    struct
    {
        XrTriangleMeshFB mesh;
        PTR32 outVertexBuffer;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->mesh), params->outVertexBuffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshGetVertexBufferFB(params->mesh, (XrVector3f **)(uintptr_t)UlongToPtr(params->outVertexBuffer));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTriangleMeshGetVertexBufferFB(void *args)
{
    struct xrTriangleMeshGetVertexBufferFB_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->mesh), params->outVertexBuffer);

    params->result = g_xr_host_instance_dispatch_table.p_xrTriangleMeshGetVertexBufferFB(params->mesh, params->outVertexBuffer);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrTryCreateSpatialGraphStaticNodeBindingMSFT(void *args)
{
    struct
    {
        XrSession session;
        PTR32 createInfo;
        PTR32 nodeBinding;
        XrResult result;
    } *params = args;
    XrSpatialGraphStaticNodeBindingCreateInfoMSFT createInfo_host;
    XrSpatialGraphNodeBindingMSFT nodeBinding_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->createInfo, params->nodeBinding);

    convert_XrSpatialGraphStaticNodeBindingCreateInfoMSFT_win32_to_host((const XrSpatialGraphStaticNodeBindingCreateInfoMSFT32 *)(uintptr_t)UlongToPtr(params->createInfo), &createInfo_host);
    nodeBinding_host = (XrSpatialGraphNodeBindingMSFT)(uintptr_t)UlongToPtr(*(PTR32 *)(uintptr_t)UlongToPtr(params->nodeBinding));
    params->result = g_xr_host_instance_dispatch_table.p_xrTryCreateSpatialGraphStaticNodeBindingMSFT(wine_session_from_handle(params->session)->host_session, &createInfo_host, &nodeBinding_host);
    *(PTR32 *)(uintptr_t)UlongToPtr(params->nodeBinding) = PtrToUlong(nodeBinding_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrTryCreateSpatialGraphStaticNodeBindingMSFT(void *args)
{
    struct xrTryCreateSpatialGraphStaticNodeBindingMSFT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->createInfo, params->nodeBinding);

    params->result = g_xr_host_instance_dispatch_table.p_xrTryCreateSpatialGraphStaticNodeBindingMSFT(wine_session_from_handle(params->session)->host_session, params->createInfo, params->nodeBinding);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUnpersistAnchorANDROID(void *args)
{
    struct
    {
        XrDeviceAnchorPersistenceANDROID handle;
        PTR32 anchorId;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->handle), params->anchorId);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistAnchorANDROID(params->handle, (const XrUuidEXT *)(uintptr_t)UlongToPtr(params->anchorId));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUnpersistAnchorANDROID(void *args)
{
    struct xrUnpersistAnchorANDROID_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->handle), params->anchorId);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistAnchorANDROID(params->handle, params->anchorId);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUnpersistSpatialAnchorAsyncBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        PTR32 info;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorUnpersistInfoBD info_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->provider), params->info, params->future);

    convert_XrSpatialAnchorUnpersistInfoBD_win32_to_host((const XrSpatialAnchorUnpersistInfoBD32 *)(uintptr_t)UlongToPtr(params->info), &info_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialAnchorAsyncBD(params->provider, &info_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUnpersistSpatialAnchorAsyncBD(void *args)
{
    struct xrUnpersistSpatialAnchorAsyncBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->provider), params->info, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialAnchorAsyncBD(params->provider, params->info, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUnpersistSpatialAnchorCompleteBD(void *args)
{
    struct
    {
        XrSenseDataProviderBD provider;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrFutureCompletionEXT completion_host;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->provider), params->future, params->completion);

    convert_XrFutureCompletionEXT_win32_to_host((XrFutureCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialAnchorCompleteBD(params->provider, params->future, &completion_host);
    convert_XrFutureCompletionEXT_host_to_win32(&completion_host, (XrFutureCompletionEXT32 *)(XrFutureCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUnpersistSpatialAnchorCompleteBD(void *args)
{
    struct xrUnpersistSpatialAnchorCompleteBD_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->provider), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialAnchorCompleteBD(params->provider, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUnpersistSpatialAnchorMSFT(void *args)
{
    struct
    {
        XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore;
        PTR32 spatialAnchorPersistenceName;
        XrResult result;
    } *params = args;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->spatialAnchorStore), params->spatialAnchorPersistenceName);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialAnchorMSFT(params->spatialAnchorStore, (const XrSpatialAnchorPersistenceNameMSFT *)(uintptr_t)UlongToPtr(params->spatialAnchorPersistenceName));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUnpersistSpatialAnchorMSFT(void *args)
{
    struct xrUnpersistSpatialAnchorMSFT_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->spatialAnchorStore), params->spatialAnchorPersistenceName);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialAnchorMSFT(params->spatialAnchorStore, params->spatialAnchorPersistenceName);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUnpersistSpatialEntityAsyncEXT(void *args)
{
    struct
    {
        XrSpatialPersistenceContextEXT persistenceContext;
        PTR32 unpersistInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialEntityUnpersistInfoEXT unpersistInfo_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->persistenceContext), params->unpersistInfo, params->future);

    convert_XrSpatialEntityUnpersistInfoEXT_win32_to_host((const XrSpatialEntityUnpersistInfoEXT32 *)(uintptr_t)UlongToPtr(params->unpersistInfo), &unpersistInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialEntityAsyncEXT(params->persistenceContext, &unpersistInfo_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUnpersistSpatialEntityAsyncEXT(void *args)
{
    struct xrUnpersistSpatialEntityAsyncEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->persistenceContext), params->unpersistInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialEntityAsyncEXT(params->persistenceContext, params->unpersistInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUnpersistSpatialEntityCompleteEXT(void *args)
{
    struct
    {
        XrSpatialPersistenceContextEXT persistenceContext;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrUnpersistSpatialEntityCompletionEXT completion_host;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->persistenceContext), params->future, params->completion);

    convert_XrUnpersistSpatialEntityCompletionEXT_win32_to_host((XrUnpersistSpatialEntityCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialEntityCompleteEXT(params->persistenceContext, params->future, &completion_host);
    convert_XrUnpersistSpatialEntityCompletionEXT_host_to_win32(&completion_host, (XrUnpersistSpatialEntityCompletionEXT32 *)(XrUnpersistSpatialEntityCompletionEXT32 *)(uintptr_t)UlongToPtr(params->completion));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUnpersistSpatialEntityCompleteEXT(void *args)
{
    struct xrUnpersistSpatialEntityCompleteEXT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->persistenceContext), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrUnpersistSpatialEntityCompleteEXT(params->persistenceContext, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUpdateHandMeshMSFT(void *args)
{
    struct
    {
        XrHandTrackerEXT handTracker;
        PTR32 updateInfo;
        PTR32 handMesh;
        XrResult result;
    } *params = args;
    XrHandMeshUpdateInfoMSFT updateInfo_host;
    XrHandMeshMSFT handMesh_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->handTracker), params->updateInfo, params->handMesh);

    convert_XrHandMeshUpdateInfoMSFT_win32_to_host((const XrHandMeshUpdateInfoMSFT32 *)(uintptr_t)UlongToPtr(params->updateInfo), &updateInfo_host);
    convert_XrHandMeshMSFT_win32_to_host((XrHandMeshMSFT32 *)(uintptr_t)UlongToPtr(params->handMesh), &handMesh_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateHandMeshMSFT(params->handTracker, &updateInfo_host, &handMesh_host);
    convert_XrHandMeshMSFT_host_to_win32(&handMesh_host, (XrHandMeshMSFT32 *)(XrHandMeshMSFT32 *)(uintptr_t)UlongToPtr(params->handMesh));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUpdateHandMeshMSFT(void *args)
{
    struct xrUpdateHandMeshMSFT_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->handTracker), params->updateInfo, params->handMesh);

    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateHandMeshMSFT(params->handTracker, params->updateInfo, params->handMesh);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUpdatePassthroughColorLutMETA(void *args)
{
    struct
    {
        XrPassthroughColorLutMETA colorLut;
        PTR32 updateInfo;
        XrResult result;
    } *params = args;
    XrPassthroughColorLutUpdateInfoMETA updateInfo_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->colorLut), params->updateInfo);

    convert_XrPassthroughColorLutUpdateInfoMETA_win32_to_host((const XrPassthroughColorLutUpdateInfoMETA32 *)(uintptr_t)UlongToPtr(params->updateInfo), &updateInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUpdatePassthroughColorLutMETA(params->colorLut, &updateInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUpdatePassthroughColorLutMETA(void *args)
{
    struct xrUpdatePassthroughColorLutMETA_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->colorLut), params->updateInfo);

    params->result = g_xr_host_instance_dispatch_table.p_xrUpdatePassthroughColorLutMETA(params->colorLut, params->updateInfo);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUpdateSpatialAnchorsExpirationAsyncML(void *args)
{
    struct
    {
        XrSpatialAnchorsStorageML storage;
        PTR32 updateInfo;
        PTR32 future;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsUpdateExpirationInfoML updateInfo_host;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->storage), params->updateInfo, params->future);

    convert_XrSpatialAnchorsUpdateExpirationInfoML_win32_to_host((const XrSpatialAnchorsUpdateExpirationInfoML32 *)(uintptr_t)UlongToPtr(params->updateInfo), &updateInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateSpatialAnchorsExpirationAsyncML(params->storage, &updateInfo_host, (XrFutureEXT *)(uintptr_t)UlongToPtr(params->future));
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUpdateSpatialAnchorsExpirationAsyncML(void *args)
{
    struct xrUpdateSpatialAnchorsExpirationAsyncML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->storage), params->updateInfo, params->future);

    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateSpatialAnchorsExpirationAsyncML(params->storage, params->updateInfo, params->future);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUpdateSpatialAnchorsExpirationCompleteML(void *args)
{
    struct
    {
        XrSpatialAnchorsStorageML storage;
        XrFutureEXT future;
        PTR32 completion;
        XrResult result;
    } *params = args;
    XrSpatialAnchorsUpdateExpirationCompletionML completion_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %p, %#x\n", TRACE_HANDLE(params->storage), params->future, params->completion);

    init_conversion_context(ctx);
    convert_XrSpatialAnchorsUpdateExpirationCompletionML_win32_to_host(ctx, (XrSpatialAnchorsUpdateExpirationCompletionML32 *)(uintptr_t)UlongToPtr(params->completion), &completion_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateSpatialAnchorsExpirationCompleteML(params->storage, params->future, &completion_host);
    convert_XrSpatialAnchorsUpdateExpirationCompletionML_host_to_win32(&completion_host, (XrSpatialAnchorsUpdateExpirationCompletionML32 *)(XrSpatialAnchorsUpdateExpirationCompletionML32 *)(uintptr_t)UlongToPtr(params->completion));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUpdateSpatialAnchorsExpirationCompleteML(void *args)
{
    struct xrUpdateSpatialAnchorsExpirationCompleteML_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->storage), params->future, params->completion);

    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateSpatialAnchorsExpirationCompleteML(params->storage, params->future, params->completion);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrUpdateSwapchainFB(void *args)
{
    struct
    {
        XrSwapchain swapchain;
        PTR32 state;
        XrResult result;
    } *params = args;
    XrSwapchainStateBaseHeaderFB state_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->swapchain), params->state);

    convert_XrSwapchainStateBaseHeaderFB_win32_to_host((const XrSwapchainStateBaseHeaderFB32 *)(uintptr_t)UlongToPtr(params->state), &state_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateSwapchainFB(wine_swapchain_from_handle(params->swapchain)->host_swapchain, &state_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrUpdateSwapchainFB(void *args)
{
    struct xrUpdateSwapchainFB_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->swapchain), params->state);

    params->result = g_xr_host_instance_dispatch_table.p_xrUpdateSwapchainFB(wine_swapchain_from_handle(params->swapchain)->host_swapchain, params->state);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrWaitFrame(void *args)
{
    struct
    {
        XrSession session;
        PTR32 frameWaitInfo;
        PTR32 frameState;
        XrResult result;
    } *params = args;
    XrFrameWaitInfo *frameWaitInfo_host = NULL;
    XrFrameState frameState_host;
    struct conversion_context local_ctx;
    struct conversion_context *ctx = &local_ctx;

    TRACE("0x%s, %#x, %#x\n", TRACE_HANDLE(params->session), params->frameWaitInfo, params->frameState);

    init_conversion_context(ctx);
    if (params->frameWaitInfo)
    {
        frameWaitInfo_host = conversion_context_alloc(ctx, sizeof(*frameWaitInfo_host));
        convert_XrFrameWaitInfo_win32_to_host((const XrFrameWaitInfo32 *)(uintptr_t)UlongToPtr(params->frameWaitInfo), frameWaitInfo_host);
    }
    convert_XrFrameState_win32_to_host(ctx, (XrFrameState32 *)(uintptr_t)UlongToPtr(params->frameState), &frameState_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrWaitFrame(wine_session_from_handle(params->session)->host_session, frameWaitInfo_host, &frameState_host);
    convert_XrFrameState_host_to_win32(&frameState_host, (XrFrameState32 *)(XrFrameState32 *)(uintptr_t)UlongToPtr(params->frameState));
    free_conversion_context(ctx);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrWaitFrame(void *args)
{
    struct xrWaitFrame_params *params = args;

    TRACE("0x%s, %p, %p\n", TRACE_HANDLE(params->session), params->frameWaitInfo, params->frameState);

    params->result = g_xr_host_instance_dispatch_table.p_xrWaitFrame(wine_session_from_handle(params->session)->host_session, params->frameWaitInfo, params->frameState);
    return STATUS_SUCCESS;
}
#endif /* _WIN64 */

#ifndef _WIN64
static NTSTATUS thunk32_xrWaitSwapchainImage(void *args)
{
    struct
    {
        XrSwapchain swapchain;
        PTR32 waitInfo;
        XrResult result;
    } *params = args;
    XrSwapchainImageWaitInfo waitInfo_host;

    TRACE("0x%s, %#x\n", TRACE_HANDLE(params->swapchain), params->waitInfo);

    convert_XrSwapchainImageWaitInfo_win32_to_host((const XrSwapchainImageWaitInfo32 *)(uintptr_t)UlongToPtr(params->waitInfo), &waitInfo_host);
    params->result = g_xr_host_instance_dispatch_table.p_xrWaitSwapchainImage(wine_swapchain_from_handle(params->swapchain)->host_swapchain, &waitInfo_host);
    return STATUS_SUCCESS;
}
#endif /* !_WIN64 */

#ifdef _WIN64
static NTSTATUS thunk64_xrWaitSwapchainImage(void *args)
{
    struct xrWaitSwapchainImage_params *params = args;

    TRACE("0x%s, %p\n", TRACE_HANDLE(params->swapchain), params->waitInfo);

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

