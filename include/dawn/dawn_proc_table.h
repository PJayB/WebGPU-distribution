
#ifndef DAWN_DAWN_PROC_TABLE_H_
#define DAWN_DAWN_PROC_TABLE_H_

#include "dawn/webgpu.h"

// Note: Often allocated as a static global. Do not add a complex constructor.
typedef struct DawnProcTable {
    WGPUProcAdapterInfoFreeMembers adapterInfoFreeMembers;
    WGPUProcAdapterPropertiesMemoryHeapsFreeMembers adapterPropertiesMemoryHeapsFreeMembers;
    WGPUProcCreateInstance createInstance;
    WGPUProcDrmFormatCapabilitiesFreeMembers drmFormatCapabilitiesFreeMembers;
    WGPUProcGetInstanceFeatures getInstanceFeatures;
    WGPUProcGetProcAddress getProcAddress;
    WGPUProcGetProcAddress2 getProcAddress2;
    WGPUProcSharedBufferMemoryEndAccessStateFreeMembers sharedBufferMemoryEndAccessStateFreeMembers;
    WGPUProcSharedTextureMemoryEndAccessStateFreeMembers sharedTextureMemoryEndAccessStateFreeMembers;
    WGPUProcSurfaceCapabilitiesFreeMembers surfaceCapabilitiesFreeMembers;

    WGPUProcAdapterCreateDevice adapterCreateDevice;
    WGPUProcAdapterEnumerateFeatures adapterEnumerateFeatures;
    WGPUProcAdapterGetFormatCapabilities adapterGetFormatCapabilities;
    WGPUProcAdapterGetInfo adapterGetInfo;
    WGPUProcAdapterGetInstance adapterGetInstance;
    WGPUProcAdapterGetLimits adapterGetLimits;
    WGPUProcAdapterHasFeature adapterHasFeature;
    WGPUProcAdapterRequestDevice adapterRequestDevice;
    WGPUProcAdapterRequestDevice2 adapterRequestDevice2;
    WGPUProcAdapterRequestDeviceF adapterRequestDeviceF;
    WGPUProcAdapterAddRef adapterAddRef;
    WGPUProcAdapterRelease adapterRelease;

    WGPUProcBindGroupSetLabel bindGroupSetLabel;
    WGPUProcBindGroupSetLabel2 bindGroupSetLabel2;
    WGPUProcBindGroupAddRef bindGroupAddRef;
    WGPUProcBindGroupRelease bindGroupRelease;

    WGPUProcBindGroupLayoutSetLabel bindGroupLayoutSetLabel;
    WGPUProcBindGroupLayoutSetLabel2 bindGroupLayoutSetLabel2;
    WGPUProcBindGroupLayoutAddRef bindGroupLayoutAddRef;
    WGPUProcBindGroupLayoutRelease bindGroupLayoutRelease;

    WGPUProcBufferDestroy bufferDestroy;
    WGPUProcBufferGetConstMappedRange bufferGetConstMappedRange;
    WGPUProcBufferGetMapState bufferGetMapState;
    WGPUProcBufferGetMappedRange bufferGetMappedRange;
    WGPUProcBufferGetSize bufferGetSize;
    WGPUProcBufferGetUsage bufferGetUsage;
    WGPUProcBufferMapAsync bufferMapAsync;
    WGPUProcBufferMapAsync2 bufferMapAsync2;
    WGPUProcBufferMapAsyncF bufferMapAsyncF;
    WGPUProcBufferSetLabel bufferSetLabel;
    WGPUProcBufferSetLabel2 bufferSetLabel2;
    WGPUProcBufferUnmap bufferUnmap;
    WGPUProcBufferAddRef bufferAddRef;
    WGPUProcBufferRelease bufferRelease;

    WGPUProcCommandBufferSetLabel commandBufferSetLabel;
    WGPUProcCommandBufferSetLabel2 commandBufferSetLabel2;
    WGPUProcCommandBufferAddRef commandBufferAddRef;
    WGPUProcCommandBufferRelease commandBufferRelease;

    WGPUProcCommandEncoderBeginComputePass commandEncoderBeginComputePass;
    WGPUProcCommandEncoderBeginRenderPass commandEncoderBeginRenderPass;
    WGPUProcCommandEncoderClearBuffer commandEncoderClearBuffer;
    WGPUProcCommandEncoderCopyBufferToBuffer commandEncoderCopyBufferToBuffer;
    WGPUProcCommandEncoderCopyBufferToTexture commandEncoderCopyBufferToTexture;
    WGPUProcCommandEncoderCopyTextureToBuffer commandEncoderCopyTextureToBuffer;
    WGPUProcCommandEncoderCopyTextureToTexture commandEncoderCopyTextureToTexture;
    WGPUProcCommandEncoderFinish commandEncoderFinish;
    WGPUProcCommandEncoderInjectValidationError commandEncoderInjectValidationError;
    WGPUProcCommandEncoderInjectValidationError2 commandEncoderInjectValidationError2;
    WGPUProcCommandEncoderInsertDebugMarker commandEncoderInsertDebugMarker;
    WGPUProcCommandEncoderInsertDebugMarker2 commandEncoderInsertDebugMarker2;
    WGPUProcCommandEncoderPopDebugGroup commandEncoderPopDebugGroup;
    WGPUProcCommandEncoderPushDebugGroup commandEncoderPushDebugGroup;
    WGPUProcCommandEncoderPushDebugGroup2 commandEncoderPushDebugGroup2;
    WGPUProcCommandEncoderResolveQuerySet commandEncoderResolveQuerySet;
    WGPUProcCommandEncoderSetLabel commandEncoderSetLabel;
    WGPUProcCommandEncoderSetLabel2 commandEncoderSetLabel2;
    WGPUProcCommandEncoderWriteBuffer commandEncoderWriteBuffer;
    WGPUProcCommandEncoderWriteTimestamp commandEncoderWriteTimestamp;
    WGPUProcCommandEncoderAddRef commandEncoderAddRef;
    WGPUProcCommandEncoderRelease commandEncoderRelease;

    WGPUProcComputePassEncoderDispatchWorkgroups computePassEncoderDispatchWorkgroups;
    WGPUProcComputePassEncoderDispatchWorkgroupsIndirect computePassEncoderDispatchWorkgroupsIndirect;
    WGPUProcComputePassEncoderEnd computePassEncoderEnd;
    WGPUProcComputePassEncoderInsertDebugMarker computePassEncoderInsertDebugMarker;
    WGPUProcComputePassEncoderInsertDebugMarker2 computePassEncoderInsertDebugMarker2;
    WGPUProcComputePassEncoderPopDebugGroup computePassEncoderPopDebugGroup;
    WGPUProcComputePassEncoderPushDebugGroup computePassEncoderPushDebugGroup;
    WGPUProcComputePassEncoderPushDebugGroup2 computePassEncoderPushDebugGroup2;
    WGPUProcComputePassEncoderSetBindGroup computePassEncoderSetBindGroup;
    WGPUProcComputePassEncoderSetLabel computePassEncoderSetLabel;
    WGPUProcComputePassEncoderSetLabel2 computePassEncoderSetLabel2;
    WGPUProcComputePassEncoderSetPipeline computePassEncoderSetPipeline;
    WGPUProcComputePassEncoderWriteTimestamp computePassEncoderWriteTimestamp;
    WGPUProcComputePassEncoderAddRef computePassEncoderAddRef;
    WGPUProcComputePassEncoderRelease computePassEncoderRelease;

    WGPUProcComputePipelineGetBindGroupLayout computePipelineGetBindGroupLayout;
    WGPUProcComputePipelineSetLabel computePipelineSetLabel;
    WGPUProcComputePipelineSetLabel2 computePipelineSetLabel2;
    WGPUProcComputePipelineAddRef computePipelineAddRef;
    WGPUProcComputePipelineRelease computePipelineRelease;

    WGPUProcDeviceCreateBindGroup deviceCreateBindGroup;
    WGPUProcDeviceCreateBindGroupLayout deviceCreateBindGroupLayout;
    WGPUProcDeviceCreateBuffer deviceCreateBuffer;
    WGPUProcDeviceCreateCommandEncoder deviceCreateCommandEncoder;
    WGPUProcDeviceCreateComputePipeline deviceCreateComputePipeline;
    WGPUProcDeviceCreateComputePipelineAsync deviceCreateComputePipelineAsync;
    WGPUProcDeviceCreateComputePipelineAsync2 deviceCreateComputePipelineAsync2;
    WGPUProcDeviceCreateComputePipelineAsyncF deviceCreateComputePipelineAsyncF;
    WGPUProcDeviceCreateErrorBuffer deviceCreateErrorBuffer;
    WGPUProcDeviceCreateErrorExternalTexture deviceCreateErrorExternalTexture;
    WGPUProcDeviceCreateErrorShaderModule deviceCreateErrorShaderModule;
    WGPUProcDeviceCreateErrorShaderModule2 deviceCreateErrorShaderModule2;
    WGPUProcDeviceCreateErrorTexture deviceCreateErrorTexture;
    WGPUProcDeviceCreateExternalTexture deviceCreateExternalTexture;
    WGPUProcDeviceCreatePipelineLayout deviceCreatePipelineLayout;
    WGPUProcDeviceCreateQuerySet deviceCreateQuerySet;
    WGPUProcDeviceCreateRenderBundleEncoder deviceCreateRenderBundleEncoder;
    WGPUProcDeviceCreateRenderPipeline deviceCreateRenderPipeline;
    WGPUProcDeviceCreateRenderPipelineAsync deviceCreateRenderPipelineAsync;
    WGPUProcDeviceCreateRenderPipelineAsync2 deviceCreateRenderPipelineAsync2;
    WGPUProcDeviceCreateRenderPipelineAsyncF deviceCreateRenderPipelineAsyncF;
    WGPUProcDeviceCreateSampler deviceCreateSampler;
    WGPUProcDeviceCreateShaderModule deviceCreateShaderModule;
    WGPUProcDeviceCreateSwapChain deviceCreateSwapChain;
    WGPUProcDeviceCreateTexture deviceCreateTexture;
    WGPUProcDeviceDestroy deviceDestroy;
    WGPUProcDeviceEnumerateFeatures deviceEnumerateFeatures;
    WGPUProcDeviceForceLoss deviceForceLoss;
    WGPUProcDeviceForceLoss2 deviceForceLoss2;
    WGPUProcDeviceGetAHardwareBufferProperties deviceGetAHardwareBufferProperties;
    WGPUProcDeviceGetAdapter deviceGetAdapter;
    WGPUProcDeviceGetLimits deviceGetLimits;
    WGPUProcDeviceGetQueue deviceGetQueue;
    WGPUProcDeviceGetSupportedSurfaceUsage deviceGetSupportedSurfaceUsage;
    WGPUProcDeviceHasFeature deviceHasFeature;
    WGPUProcDeviceImportSharedBufferMemory deviceImportSharedBufferMemory;
    WGPUProcDeviceImportSharedFence deviceImportSharedFence;
    WGPUProcDeviceImportSharedTextureMemory deviceImportSharedTextureMemory;
    WGPUProcDeviceInjectError deviceInjectError;
    WGPUProcDeviceInjectError2 deviceInjectError2;
    WGPUProcDevicePopErrorScope devicePopErrorScope;
    WGPUProcDevicePopErrorScope2 devicePopErrorScope2;
    WGPUProcDevicePopErrorScopeF devicePopErrorScopeF;
    WGPUProcDevicePushErrorScope devicePushErrorScope;
    WGPUProcDeviceSetDeviceLostCallback deviceSetDeviceLostCallback;
    WGPUProcDeviceSetLabel deviceSetLabel;
    WGPUProcDeviceSetLabel2 deviceSetLabel2;
    WGPUProcDeviceSetLoggingCallback deviceSetLoggingCallback;
    WGPUProcDeviceSetUncapturedErrorCallback deviceSetUncapturedErrorCallback;
    WGPUProcDeviceTick deviceTick;
    WGPUProcDeviceValidateTextureDescriptor deviceValidateTextureDescriptor;
    WGPUProcDeviceAddRef deviceAddRef;
    WGPUProcDeviceRelease deviceRelease;

    WGPUProcExternalTextureDestroy externalTextureDestroy;
    WGPUProcExternalTextureExpire externalTextureExpire;
    WGPUProcExternalTextureRefresh externalTextureRefresh;
    WGPUProcExternalTextureSetLabel externalTextureSetLabel;
    WGPUProcExternalTextureSetLabel2 externalTextureSetLabel2;
    WGPUProcExternalTextureAddRef externalTextureAddRef;
    WGPUProcExternalTextureRelease externalTextureRelease;

    WGPUProcInstanceCreateSurface instanceCreateSurface;
    WGPUProcInstanceEnumerateWGSLLanguageFeatures instanceEnumerateWGSLLanguageFeatures;
    WGPUProcInstanceHasWGSLLanguageFeature instanceHasWGSLLanguageFeature;
    WGPUProcInstanceProcessEvents instanceProcessEvents;
    WGPUProcInstanceRequestAdapter instanceRequestAdapter;
    WGPUProcInstanceRequestAdapter2 instanceRequestAdapter2;
    WGPUProcInstanceRequestAdapterF instanceRequestAdapterF;
    WGPUProcInstanceWaitAny instanceWaitAny;
    WGPUProcInstanceAddRef instanceAddRef;
    WGPUProcInstanceRelease instanceRelease;

    WGPUProcPipelineLayoutSetLabel pipelineLayoutSetLabel;
    WGPUProcPipelineLayoutSetLabel2 pipelineLayoutSetLabel2;
    WGPUProcPipelineLayoutAddRef pipelineLayoutAddRef;
    WGPUProcPipelineLayoutRelease pipelineLayoutRelease;

    WGPUProcQuerySetDestroy querySetDestroy;
    WGPUProcQuerySetGetCount querySetGetCount;
    WGPUProcQuerySetGetType querySetGetType;
    WGPUProcQuerySetSetLabel querySetSetLabel;
    WGPUProcQuerySetSetLabel2 querySetSetLabel2;
    WGPUProcQuerySetAddRef querySetAddRef;
    WGPUProcQuerySetRelease querySetRelease;

    WGPUProcQueueCopyExternalTextureForBrowser queueCopyExternalTextureForBrowser;
    WGPUProcQueueCopyTextureForBrowser queueCopyTextureForBrowser;
    WGPUProcQueueOnSubmittedWorkDone queueOnSubmittedWorkDone;
    WGPUProcQueueOnSubmittedWorkDone2 queueOnSubmittedWorkDone2;
    WGPUProcQueueOnSubmittedWorkDoneF queueOnSubmittedWorkDoneF;
    WGPUProcQueueSetLabel queueSetLabel;
    WGPUProcQueueSetLabel2 queueSetLabel2;
    WGPUProcQueueSubmit queueSubmit;
    WGPUProcQueueWriteBuffer queueWriteBuffer;
    WGPUProcQueueWriteTexture queueWriteTexture;
    WGPUProcQueueAddRef queueAddRef;
    WGPUProcQueueRelease queueRelease;

    WGPUProcRenderBundleSetLabel renderBundleSetLabel;
    WGPUProcRenderBundleSetLabel2 renderBundleSetLabel2;
    WGPUProcRenderBundleAddRef renderBundleAddRef;
    WGPUProcRenderBundleRelease renderBundleRelease;

    WGPUProcRenderBundleEncoderDraw renderBundleEncoderDraw;
    WGPUProcRenderBundleEncoderDrawIndexed renderBundleEncoderDrawIndexed;
    WGPUProcRenderBundleEncoderDrawIndexedIndirect renderBundleEncoderDrawIndexedIndirect;
    WGPUProcRenderBundleEncoderDrawIndirect renderBundleEncoderDrawIndirect;
    WGPUProcRenderBundleEncoderFinish renderBundleEncoderFinish;
    WGPUProcRenderBundleEncoderInsertDebugMarker renderBundleEncoderInsertDebugMarker;
    WGPUProcRenderBundleEncoderInsertDebugMarker2 renderBundleEncoderInsertDebugMarker2;
    WGPUProcRenderBundleEncoderPopDebugGroup renderBundleEncoderPopDebugGroup;
    WGPUProcRenderBundleEncoderPushDebugGroup renderBundleEncoderPushDebugGroup;
    WGPUProcRenderBundleEncoderPushDebugGroup2 renderBundleEncoderPushDebugGroup2;
    WGPUProcRenderBundleEncoderSetBindGroup renderBundleEncoderSetBindGroup;
    WGPUProcRenderBundleEncoderSetIndexBuffer renderBundleEncoderSetIndexBuffer;
    WGPUProcRenderBundleEncoderSetLabel renderBundleEncoderSetLabel;
    WGPUProcRenderBundleEncoderSetLabel2 renderBundleEncoderSetLabel2;
    WGPUProcRenderBundleEncoderSetPipeline renderBundleEncoderSetPipeline;
    WGPUProcRenderBundleEncoderSetVertexBuffer renderBundleEncoderSetVertexBuffer;
    WGPUProcRenderBundleEncoderAddRef renderBundleEncoderAddRef;
    WGPUProcRenderBundleEncoderRelease renderBundleEncoderRelease;

    WGPUProcRenderPassEncoderBeginOcclusionQuery renderPassEncoderBeginOcclusionQuery;
    WGPUProcRenderPassEncoderDraw renderPassEncoderDraw;
    WGPUProcRenderPassEncoderDrawIndexed renderPassEncoderDrawIndexed;
    WGPUProcRenderPassEncoderDrawIndexedIndirect renderPassEncoderDrawIndexedIndirect;
    WGPUProcRenderPassEncoderDrawIndirect renderPassEncoderDrawIndirect;
    WGPUProcRenderPassEncoderEnd renderPassEncoderEnd;
    WGPUProcRenderPassEncoderEndOcclusionQuery renderPassEncoderEndOcclusionQuery;
    WGPUProcRenderPassEncoderExecuteBundles renderPassEncoderExecuteBundles;
    WGPUProcRenderPassEncoderInsertDebugMarker renderPassEncoderInsertDebugMarker;
    WGPUProcRenderPassEncoderInsertDebugMarker2 renderPassEncoderInsertDebugMarker2;
    WGPUProcRenderPassEncoderMultiDrawIndexedIndirect renderPassEncoderMultiDrawIndexedIndirect;
    WGPUProcRenderPassEncoderMultiDrawIndirect renderPassEncoderMultiDrawIndirect;
    WGPUProcRenderPassEncoderPixelLocalStorageBarrier renderPassEncoderPixelLocalStorageBarrier;
    WGPUProcRenderPassEncoderPopDebugGroup renderPassEncoderPopDebugGroup;
    WGPUProcRenderPassEncoderPushDebugGroup renderPassEncoderPushDebugGroup;
    WGPUProcRenderPassEncoderPushDebugGroup2 renderPassEncoderPushDebugGroup2;
    WGPUProcRenderPassEncoderSetBindGroup renderPassEncoderSetBindGroup;
    WGPUProcRenderPassEncoderSetBlendConstant renderPassEncoderSetBlendConstant;
    WGPUProcRenderPassEncoderSetIndexBuffer renderPassEncoderSetIndexBuffer;
    WGPUProcRenderPassEncoderSetLabel renderPassEncoderSetLabel;
    WGPUProcRenderPassEncoderSetLabel2 renderPassEncoderSetLabel2;
    WGPUProcRenderPassEncoderSetPipeline renderPassEncoderSetPipeline;
    WGPUProcRenderPassEncoderSetScissorRect renderPassEncoderSetScissorRect;
    WGPUProcRenderPassEncoderSetStencilReference renderPassEncoderSetStencilReference;
    WGPUProcRenderPassEncoderSetVertexBuffer renderPassEncoderSetVertexBuffer;
    WGPUProcRenderPassEncoderSetViewport renderPassEncoderSetViewport;
    WGPUProcRenderPassEncoderWriteTimestamp renderPassEncoderWriteTimestamp;
    WGPUProcRenderPassEncoderAddRef renderPassEncoderAddRef;
    WGPUProcRenderPassEncoderRelease renderPassEncoderRelease;

    WGPUProcRenderPipelineGetBindGroupLayout renderPipelineGetBindGroupLayout;
    WGPUProcRenderPipelineSetLabel renderPipelineSetLabel;
    WGPUProcRenderPipelineSetLabel2 renderPipelineSetLabel2;
    WGPUProcRenderPipelineAddRef renderPipelineAddRef;
    WGPUProcRenderPipelineRelease renderPipelineRelease;

    WGPUProcSamplerSetLabel samplerSetLabel;
    WGPUProcSamplerSetLabel2 samplerSetLabel2;
    WGPUProcSamplerAddRef samplerAddRef;
    WGPUProcSamplerRelease samplerRelease;

    WGPUProcShaderModuleGetCompilationInfo shaderModuleGetCompilationInfo;
    WGPUProcShaderModuleGetCompilationInfo2 shaderModuleGetCompilationInfo2;
    WGPUProcShaderModuleGetCompilationInfoF shaderModuleGetCompilationInfoF;
    WGPUProcShaderModuleSetLabel shaderModuleSetLabel;
    WGPUProcShaderModuleSetLabel2 shaderModuleSetLabel2;
    WGPUProcShaderModuleAddRef shaderModuleAddRef;
    WGPUProcShaderModuleRelease shaderModuleRelease;

    WGPUProcSharedBufferMemoryBeginAccess sharedBufferMemoryBeginAccess;
    WGPUProcSharedBufferMemoryCreateBuffer sharedBufferMemoryCreateBuffer;
    WGPUProcSharedBufferMemoryEndAccess sharedBufferMemoryEndAccess;
    WGPUProcSharedBufferMemoryGetProperties sharedBufferMemoryGetProperties;
    WGPUProcSharedBufferMemoryIsDeviceLost sharedBufferMemoryIsDeviceLost;
    WGPUProcSharedBufferMemorySetLabel sharedBufferMemorySetLabel;
    WGPUProcSharedBufferMemorySetLabel2 sharedBufferMemorySetLabel2;
    WGPUProcSharedBufferMemoryAddRef sharedBufferMemoryAddRef;
    WGPUProcSharedBufferMemoryRelease sharedBufferMemoryRelease;

    WGPUProcSharedFenceExportInfo sharedFenceExportInfo;
    WGPUProcSharedFenceAddRef sharedFenceAddRef;
    WGPUProcSharedFenceRelease sharedFenceRelease;

    WGPUProcSharedTextureMemoryBeginAccess sharedTextureMemoryBeginAccess;
    WGPUProcSharedTextureMemoryCreateTexture sharedTextureMemoryCreateTexture;
    WGPUProcSharedTextureMemoryEndAccess sharedTextureMemoryEndAccess;
    WGPUProcSharedTextureMemoryGetProperties sharedTextureMemoryGetProperties;
    WGPUProcSharedTextureMemoryIsDeviceLost sharedTextureMemoryIsDeviceLost;
    WGPUProcSharedTextureMemorySetLabel sharedTextureMemorySetLabel;
    WGPUProcSharedTextureMemorySetLabel2 sharedTextureMemorySetLabel2;
    WGPUProcSharedTextureMemoryAddRef sharedTextureMemoryAddRef;
    WGPUProcSharedTextureMemoryRelease sharedTextureMemoryRelease;

    WGPUProcSurfaceConfigure surfaceConfigure;
    WGPUProcSurfaceGetCapabilities surfaceGetCapabilities;
    WGPUProcSurfaceGetCurrentTexture surfaceGetCurrentTexture;
    WGPUProcSurfaceGetPreferredFormat surfaceGetPreferredFormat;
    WGPUProcSurfacePresent surfacePresent;
    WGPUProcSurfaceSetLabel surfaceSetLabel;
    WGPUProcSurfaceSetLabel2 surfaceSetLabel2;
    WGPUProcSurfaceUnconfigure surfaceUnconfigure;
    WGPUProcSurfaceAddRef surfaceAddRef;
    WGPUProcSurfaceRelease surfaceRelease;

    WGPUProcSwapChainGetCurrentTexture swapChainGetCurrentTexture;
    WGPUProcSwapChainGetCurrentTextureView swapChainGetCurrentTextureView;
    WGPUProcSwapChainPresent swapChainPresent;
    WGPUProcSwapChainAddRef swapChainAddRef;
    WGPUProcSwapChainRelease swapChainRelease;

    WGPUProcTextureCreateErrorView textureCreateErrorView;
    WGPUProcTextureCreateView textureCreateView;
    WGPUProcTextureDestroy textureDestroy;
    WGPUProcTextureGetDepthOrArrayLayers textureGetDepthOrArrayLayers;
    WGPUProcTextureGetDimension textureGetDimension;
    WGPUProcTextureGetFormat textureGetFormat;
    WGPUProcTextureGetHeight textureGetHeight;
    WGPUProcTextureGetMipLevelCount textureGetMipLevelCount;
    WGPUProcTextureGetSampleCount textureGetSampleCount;
    WGPUProcTextureGetUsage textureGetUsage;
    WGPUProcTextureGetWidth textureGetWidth;
    WGPUProcTextureSetLabel textureSetLabel;
    WGPUProcTextureSetLabel2 textureSetLabel2;
    WGPUProcTextureAddRef textureAddRef;
    WGPUProcTextureRelease textureRelease;

    WGPUProcTextureViewSetLabel textureViewSetLabel;
    WGPUProcTextureViewSetLabel2 textureViewSetLabel2;
    WGPUProcTextureViewAddRef textureViewAddRef;
    WGPUProcTextureViewRelease textureViewRelease;


} DawnProcTable;

#endif  // DAWN_DAWN_PROC_TABLE_H_
