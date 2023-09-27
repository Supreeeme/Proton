#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.15/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRRenderModels_IVRRenderModels_005.h"
#ifdef __cplusplus
extern "C" {
#endif
EVRRenderModelError cppIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async(void *linux_side, const char *pchRenderModelName, winRenderModel_t_1015 **ppRenderModel)
{
    EVRRenderModelError _ret;
    RenderModel_t *lin_ppRenderModel;
    _ret = ((IVRRenderModels*)linux_side)->LoadRenderModel_Async((const char *)pchRenderModelName, ppRenderModel ? &lin_ppRenderModel : nullptr);
    if (_ret == 0)
        *ppRenderModel = struct_RenderModel_t_1015_wrap(lin_ppRenderModel);
    return _ret;
}

void cppIVRRenderModels_IVRRenderModels_005_FreeRenderModel(void *linux_side, winRenderModel_t_1015 *pRenderModel)
{
    ((IVRRenderModels*)linux_side)->FreeRenderModel(struct_RenderModel_t_1015_unwrap(pRenderModel));
}

EVRRenderModelError cppIVRRenderModels_IVRRenderModels_005_LoadTexture_Async(void *linux_side, TextureID_t textureId, winRenderModel_TextureMap_t_1015 **ppTexture)
{
    EVRRenderModelError _ret;
    RenderModel_TextureMap_t *lin_ppTexture;
    _ret = ((IVRRenderModels*)linux_side)->LoadTexture_Async((vr::TextureID_t)textureId, ppTexture ? &lin_ppTexture : nullptr);
    if (_ret == 0)
        *ppTexture = struct_RenderModel_TextureMap_t_1015_wrap(lin_ppTexture);
    return _ret;
}

void cppIVRRenderModels_IVRRenderModels_005_FreeTexture(void *linux_side, winRenderModel_TextureMap_t_1015 *pTexture)
{
    ((IVRRenderModels*)linux_side)->FreeTexture(struct_RenderModel_TextureMap_t_1015_unwrap(pTexture));
}

EVRRenderModelError cppIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async(void *linux_side, TextureID_t textureId, void *pD3D11Device, void **ppD3D11Texture2D)
{
    EVRRenderModelError _ret;
    _ret = ((IVRRenderModels*)linux_side)->LoadTextureD3D11_Async((vr::TextureID_t)textureId, (void *)pD3D11Device, (void **)ppD3D11Texture2D);
    return _ret;
}

EVRRenderModelError cppIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async(void *linux_side, TextureID_t textureId, void *pDstTexture)
{
    EVRRenderModelError _ret;
    _ret = ((IVRRenderModels*)linux_side)->LoadIntoTextureD3D11_Async((vr::TextureID_t)textureId, (void *)pDstTexture);
    return _ret;
}

void cppIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11(void *linux_side, void *pD3D11Texture2D)
{
    ((IVRRenderModels*)linux_side)->FreeTextureD3D11((void *)pD3D11Texture2D);
}

uint32_t cppIVRRenderModels_IVRRenderModels_005_GetRenderModelName(void *linux_side, uint32_t unRenderModelIndex, char *pchRenderModelName, uint32_t unRenderModelNameLen)
{
    uint32_t _ret;
    _ret = ((IVRRenderModels*)linux_side)->GetRenderModelName((uint32_t)unRenderModelIndex, (char *)pchRenderModelName, (uint32_t)unRenderModelNameLen);
    return _ret;
}

uint32_t cppIVRRenderModels_IVRRenderModels_005_GetRenderModelCount(void *linux_side)
{
    uint32_t _ret;
    _ret = ((IVRRenderModels*)linux_side)->GetRenderModelCount();
    return _ret;
}

uint32_t cppIVRRenderModels_IVRRenderModels_005_GetComponentCount(void *linux_side, const char *pchRenderModelName)
{
    uint32_t _ret;
    _ret = ((IVRRenderModels*)linux_side)->GetComponentCount((const char *)pchRenderModelName);
    return _ret;
}

uint32_t cppIVRRenderModels_IVRRenderModels_005_GetComponentName(void *linux_side, const char *pchRenderModelName, uint32_t unComponentIndex, char *pchComponentName, uint32_t unComponentNameLen)
{
    uint32_t _ret;
    _ret = ((IVRRenderModels*)linux_side)->GetComponentName((const char *)pchRenderModelName, (uint32_t)unComponentIndex, (char *)pchComponentName, (uint32_t)unComponentNameLen);
    return _ret;
}

uint64_t cppIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask(void *linux_side, const char *pchRenderModelName, const char *pchComponentName)
{
    uint64_t _ret;
    _ret = ((IVRRenderModels*)linux_side)->GetComponentButtonMask((const char *)pchRenderModelName, (const char *)pchComponentName);
    return _ret;
}

uint32_t cppIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName(void *linux_side, const char *pchRenderModelName, const char *pchComponentName, char *pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen)
{
    uint32_t _ret;
    _ret = ((IVRRenderModels*)linux_side)->GetComponentRenderModelName((const char *)pchRenderModelName, (const char *)pchComponentName, (char *)pchComponentRenderModelName, (uint32_t)unComponentRenderModelNameLen);
    return _ret;
}

bool cppIVRRenderModels_IVRRenderModels_005_GetComponentState(void *linux_side, const char *pchRenderModelName, const char *pchComponentName, const VRControllerState_t *pControllerState, const RenderModel_ControllerMode_State_t *pState, RenderModel_ComponentState_t *pComponentState)
{
    bool _ret;
    VRControllerState001_t lin_pControllerState;
    if (pControllerState)
        struct_VRControllerState001_t_1015_win_to_lin(pControllerState, &lin_pControllerState);
    _ret = ((IVRRenderModels*)linux_side)->GetComponentState((const char *)pchRenderModelName, (const char *)pchComponentName, pControllerState ? &lin_pControllerState : nullptr, (const vr::RenderModel_ControllerMode_State_t *)pState, (vr::RenderModel_ComponentState_t *)pComponentState);
    return _ret;
}

bool cppIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent(void *linux_side, const char *pchRenderModelName, const char *pchComponentName)
{
    bool _ret;
    _ret = ((IVRRenderModels*)linux_side)->RenderModelHasComponent((const char *)pchRenderModelName, (const char *)pchComponentName);
    return _ret;
}

uint32_t cppIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL(void *linux_side, const char *pchRenderModelName, char *pchThumbnailURL, uint32_t unThumbnailURLLen, EVRRenderModelError *peError)
{
    uint32_t _ret;
    _ret = ((IVRRenderModels*)linux_side)->GetRenderModelThumbnailURL((const char *)pchRenderModelName, (char *)pchThumbnailURL, (uint32_t)unThumbnailURLLen, (vr::EVRRenderModelError *)peError);
    return _ret;
}

uint32_t cppIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath(void *linux_side, const char *pchRenderModelName, char *pchOriginalPath, uint32_t unOriginalPathLen, EVRRenderModelError *peError)
{
    uint32_t _ret;
    _ret = ((IVRRenderModels*)linux_side)->GetRenderModelOriginalPath((const char *)pchRenderModelName, (char *)pchOriginalPath, (uint32_t)unOriginalPathLen, (vr::EVRRenderModelError *)peError);
    return _ret;
}

const char * cppIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum(void *linux_side, EVRRenderModelError error)
{
    const char *_ret;
    _ret = ((IVRRenderModels*)linux_side)->GetRenderModelErrorNameFromEnum((vr::EVRRenderModelError)error);
    return _ret;
}

#ifdef __cplusplus
}
#endif
