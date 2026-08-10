// Dump generated on: 2026-08-07 11:26:06 MDT (UTC-6)
// Rust buildid: 24614784
#pragma once
#include <cstdint>
namespace GameAssembly {
constexpr const static size_t timestamp = 0x6a75d0df;
constexpr const static size_t il2cpp_resolve_icall = 0x86fcc0;
constexpr const static size_t il2cpp_array_new = 0x86fce0;
constexpr const static size_t il2cpp_assembly_get_image = 0x4490;
constexpr const static size_t il2cpp_class_from_name = 0x859ed0;
constexpr const static size_t il2cpp_class_get_method_from_name = 0x8700e0;
constexpr const static size_t il2cpp_class_get_type = 0x7533d0;
constexpr const static size_t il2cpp_domain_get = 0x870a00;
constexpr const static size_t il2cpp_domain_get_assemblies = 0x870a20;
constexpr const static size_t il2cpp_gchandle_get_target = 0x871130;
constexpr const static size_t il2cpp_gchandle_new = 0x8710e0;
constexpr const static size_t il2cpp_gchandle_free = 0x8711d0;
constexpr const static size_t il2cpp_method_get_name = 0xc4a0;
constexpr const static size_t il2cpp_object_new = 0x871a70;
constexpr const static size_t il2cpp_type_get_object = 0x872b50;
} // namespace GameAssembly

#define Object_TypeDefinitionIndex 464

namespace Object_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10825ed0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t m_CachedPtr = 0x10;

// Functions
constexpr const static size_t GetInstanceID = 0xd96c4c0;
constexpr const static size_t Destroy = 0xd96d4f0;
constexpr const static size_t DestroyImmediate = 0xd96d620;
constexpr const static size_t DontDestroyOnLoad = 0xd96d820;
constexpr const static size_t FindObjectFromInstanceID = 0xd96eec0;
constexpr const static size_t GetName = 0xc7f20;
constexpr const static size_t get_hideFlags = 0xd96d910;
constexpr const static size_t set_hideFlags = 0xd96d9d0;
} // namespace Object_Offsets

#define GameObject_TypeDefinitionIndex 431

namespace GameObject_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1082ff28;

// Functions
constexpr const static size_t SetActive = 0xd964a40;
constexpr const static size_t Internal_AddComponentWithType = 0xd9644a0;
constexpr const static size_t GetComponent = 0xd963ad0;
constexpr const static size_t GetComponentCount = 0xd964580;
constexpr const static size_t GetComponentInChildren = 0xd963c60;
constexpr const static size_t GetComponentInParent = 0xd963d50;
constexpr const static size_t GetComponentsInternal = 0xd963e40;
constexpr const static size_t Internal_CreateGameObject = 0xd965c80;
constexpr const static size_t get_layer = 0xd9647a0;
constexpr const static size_t get_tag = 0xd964ed0;
constexpr const static size_t get_transform = 0xd964620;
} // namespace GameObject_Offsets

#define Component_TypeDefinitionIndex 417

namespace Component_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10823ce0;

// Functions
constexpr const static size_t get_gameObject = 0xd95f6e0;
constexpr const static size_t get_transform = 0xd95f620;
} // namespace Component_Offsets

#define Behaviour_TypeDefinitionIndex 412

namespace Behaviour_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107f94c0;

// Functions
constexpr const static size_t get_enabled = 0xb7fb20;
constexpr const static size_t set_enabled = 0xd95ea00;
} // namespace Behaviour_Offsets

#define Transform_TypeDefinitionIndex 507

namespace Transform_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1081e800;

// Functions
constexpr const static size_t get_eulerAngles = 0xd97d5a0;
constexpr const static size_t GetChild = 0xd982400;
constexpr const static size_t GetParent = 0xd97ebd0;
constexpr const static size_t GetRoot = 0xd981620;
constexpr const static size_t InverseTransformDirection_Injected = 0xd0450;
constexpr const static size_t InverseTransformPoint_Injected = 0xd07b0;
constexpr const static size_t InverseTransformVector_Injected = 0xd0610;
constexpr const static size_t GetPositionAndRotation = 0xd97f080;
constexpr const static size_t SetLocalPositionAndRotation_Injected = 0xd0280;
constexpr const static size_t SetPositionAndRotation_Injected = 0xd0240;
constexpr const static size_t TransformDirection_Injected = 0xd0380;
constexpr const static size_t TransformPoint_Injected = 0xd06e0;
constexpr const static size_t TransformVector_Injected = 0xd0540;
constexpr const static size_t get_childCount = 0xd9816e0;
constexpr const static size_t get_forward_Injected = 0xd97e200;
constexpr const static size_t get_right_Injected = 0xd97d9e0;
constexpr const static size_t get_up_Injected = 0xd97ddf0;
constexpr const static size_t get_localPosition_Injected = 0xcfd30;
constexpr const static size_t get_localRotation_Injected = 0xcfe70;
constexpr const static size_t get_localScale_Injected = 0xcff50;
constexpr const static size_t get_lossyScale_Injected = 0xd0e30;
constexpr const static size_t get_position_Injected = 0xcfcc0;
constexpr const static size_t get_rotation_Injected = 0xcfde0;
constexpr const static size_t set_localPosition_Injected = 0xcfd60;
constexpr const static size_t set_localRotation_Injected = 0xcff10;
constexpr const static size_t set_localScale_Injected = 0xcff80;
constexpr const static size_t set_position_Injected = 0xcfcf0;
constexpr const static size_t set_rotation_Injected = 0xcfe30;
} // namespace Transform_Offsets

#define Camera_TypeDefinitionIndex 168

namespace Camera_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107d4cb8;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t get_main = 0xd8de390;
constexpr const static size_t WorldToScreenPoint_Injected = 0x7a230;
constexpr const static size_t ScreenToWorldPoint_Injected = 0x7a4e0;
constexpr const static size_t GetAllCamerasCount = 0xd8deee0;
constexpr const static size_t CopyFrom = 0xd8df720;
constexpr const static size_t get_fieldOfView = 0xd8d8630;
constexpr const static size_t set_fieldOfView = 0xd8d86d0;
constexpr const static size_t get_nearClipPlane = 0xd8d8390;
constexpr const static size_t set_nearClipPlane = 0xd8d8430;
constexpr const static size_t get_farClipPlane = 0xd8d84e0;
constexpr const static size_t set_farClipPlane = 0xd8d8580;
constexpr const static size_t get_depth = 0xd8d92b0;
constexpr const static size_t set_depth = 0xd8d9350;
constexpr const static size_t get_projectionMatrix_Injected = 0x7a080;
constexpr const static size_t set_projectionMatrix_Injected = 0x7a0c0;
constexpr const static size_t set_cullingMask = 0xd8d96b0;
constexpr const static size_t set_clearFlags = 0xd8da6e0;
constexpr const static size_t set_backgroundColor_Injected = 0x78a30;
constexpr const static size_t set_targetTexture = 0xd8dc530;
constexpr const static size_t Render = 0xd8df300;
constexpr const static size_t RenderWithShader = 0xd8df3a0;
} // namespace Camera_Offsets

#define Time_TypeDefinitionIndex 491

namespace Time_Offsets {

// Functions
constexpr const static size_t get_deltaTime = 0x7ffa5e0;
constexpr const static size_t get_fixedDeltaTime = 0x7fd4000;
constexpr const static size_t get_fixedTime = 0x7eeca50;
constexpr const static size_t get_frameCount = 0xd977ae0;
constexpr const static size_t get_realtimeSinceStartup = 0x7eeccd0;
constexpr const static size_t get_smoothDeltaTime = 0x7fd0500;
constexpr const static size_t get_time = 0x7ffc760;
} // namespace Time_Offsets

#define Material_TypeDefinitionIndex 242

namespace Material_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10825ed8;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t SetFloatImpl = 0xd914700;
constexpr const static size_t SetColorImpl_Injected = 0x9e180;
constexpr const static size_t SetTextureImpl = 0xd9149a0;
constexpr const static size_t CreateWithMaterial = 0xd910eb0;
constexpr const static size_t CreateWithShader = 0xd910db0;
constexpr const static size_t SetBufferImpl = 0xd914ac0;
constexpr const static size_t set_shader = 0xd911380;
constexpr const static size_t get_shader = 0xd9112a0;
} // namespace Material_Offsets

#define MaterialPropertyBlock_TypeDefinitionIndex 237

namespace MaterialPropertyBlock_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107aa838;

// Functions
constexpr const static size_t ctor = 0xd9065a0;
constexpr const static size_t SetFloatImpl = 0xd904cc0;
constexpr const static size_t SetTextureImpl = 0xd905860;
} // namespace MaterialPropertyBlock_Offsets

#define Shader_TypeDefinitionIndex 241

namespace Shader_Offsets {

// Functions
constexpr const static size_t Find = 0xd90da60;
constexpr const static size_t PropertyToID = 0xd90e940;
constexpr const static size_t GetPropertyCount = 0xd9100b0;
constexpr const static size_t GetPropertyName = 0xd90fe00;
constexpr const static size_t GetPropertyType = 0xd90ff60;
} // namespace Shader_Offsets

#define Mesh_TypeDefinitionIndex 301

namespace Mesh_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1082cea0;

// Functions
constexpr const static size_t Internal_Create = 0xd920ad0;
constexpr const static size_t MarkDynamicImpl = 0xd924340;
constexpr const static size_t ClearImpl = 0xd924080;
constexpr const static size_t set_subMeshCount = 0xd923b80;
constexpr const static size_t SetVertexBufferParamsFromPtr = 0xa4980;
constexpr const static size_t InternalSetVertexBufferData = 0xa4a30;
constexpr const static size_t UploadMeshDataImpl = 0xd924480;
} // namespace Mesh_Offsets

#define Renderer_TypeDefinitionIndex 239

namespace Renderer_Offsets {

// Functions
constexpr const static size_t get_enabled = 0xd908e60;
constexpr const static size_t get_isVisible = 0xd908fb0;
constexpr const static size_t GetMaterial = 0xd9083c0;
constexpr const static size_t GetMaterialArray = 0xd908620;
} // namespace Renderer_Offsets

#define Texture_TypeDefinitionIndex 306

namespace Texture_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10851578;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t set_filterMode = 0xd931790;
constexpr const static size_t GetNativeTexturePtr = 0xd931c50;
} // namespace Texture_Offsets

#define Texture2D_TypeDefinitionIndex 307

namespace Texture2D_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10825e08;

// Functions
constexpr const static size_t ctor = 0xd935d50;
constexpr const static size_t Internal_CreateImpl = 0xac280;
constexpr const static size_t GetWritableImageData = 0xd934c50;
constexpr const static size_t ApplyImpl = 0xd9341c0;
} // namespace Texture2D_Offsets

#define Sprite_TypeDefinitionIndex 144

namespace Sprite_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1071ed48;

// Functions
constexpr const static size_t get_texture = 0xd8d08d0;
} // namespace Sprite_Offsets

#define RenderTexture_TypeDefinitionIndex 313

namespace RenderTexture_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107de7f8;

// Functions
constexpr const static size_t GetTemporary = 0xd942120;
constexpr const static size_t ReleaseTemporary = 0xd93fa10;
} // namespace RenderTexture_Offsets

#define CommandBuffer_TypeDefinitionIndex 895

namespace CommandBuffer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10839788;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t ctor = 0xd9afab0;
constexpr const static size_t Clear = 0xd9a3ad0;
constexpr const static size_t SetRenderTargetSingle_Internal_Injected = 0xefba0;
constexpr const static size_t ClearRenderTarget_Injected = 0xd9a7940;
constexpr const static size_t SetViewport_Injected = 0xe94c0;
constexpr const static size_t SetViewProjectionMatrices_Injected = 0xee790;
constexpr const static size_t EnableScissorRect_Injected = 0xe9580;
constexpr const static size_t DisableScissorRect = 0xd9a53e0;
constexpr const static size_t Internal_DrawProceduralIndexedIndirect_Injected =
    0xe8fe0;
constexpr const static size_t Internal_DrawMesh_Injected = 0xe8010;
constexpr const static size_t Internal_DrawRenderer = 0xd9a3ed0;
} // namespace CommandBuffer_Offsets

#define RenderTargetIdentifier_TypeDefinitionIndex 855

namespace RenderTargetIdentifier_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107af670;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t ctor = 0xd99a900;
} // namespace RenderTargetIdentifier_Offsets

#define ComputeBuffer_TypeDefinitionIndex 481

namespace ComputeBuffer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1083c2f8;

// Functions
constexpr const static size_t ctor = 0xd971350;
constexpr const static size_t get_count = 0xd971670;
constexpr const static size_t Release = 0xd971590;
constexpr const static size_t InternalSetNativeData = 0xd971c40;
} // namespace ComputeBuffer_Offsets

#define GraphicsBuffer_TypeDefinitionIndex 244

namespace GraphicsBuffer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107f4a28;

// Functions
constexpr const static size_t ctor = 0xd9188c0;
constexpr const static size_t get_count = 0xd918e30;
constexpr const static size_t Dispose = 0xd9185c0;
constexpr const static size_t InternalSetNativeData = 0xd919400;
} // namespace GraphicsBuffer_Offsets

#define Event_TypeDefinitionIndex 1

namespace Event_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1076b2e0;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t get_current = 0xd9e7a50;
constexpr const static size_t get_type = 0xd9e6ac0;
constexpr const static size_t PopEvent = 0xd9e7010;
constexpr const static size_t Internal_Use = 0xd9e6e00;
} // namespace Event_Offsets

#define Graphics_TypeDefinitionIndex 217

namespace Graphics_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10825ee0;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t Internal_BlitMaterial5 = 0xd8f76d0;
constexpr const static size_t ExecuteCommandBuffer = 0xd8f7c70;
} // namespace Graphics_Offsets

#define Matrix4x4_TypeDefinitionIndex 339

namespace Matrix4x4_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x108470a8;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t Ortho_Injected = 0xb5e80;
} // namespace Matrix4x4_Offsets

#define AssetBundle_TypeDefinitionIndex 1

namespace AssetBundle_Offsets {

// Functions
constexpr const static size_t LoadFromFile_Internal = 0xd8b8a10;
constexpr const static size_t LoadAsset_Internal = 0xd8b8eb0;
constexpr const static size_t Unload = 0xd8b9580;
} // namespace AssetBundle_Offsets

#define Screen_TypeDefinitionIndex 214

namespace Screen_Offsets {

// Functions
constexpr const static size_t get_width = 0x8005fd0;
constexpr const static size_t get_height = 0x8005b00;
} // namespace Screen_Offsets

#define Input_TypeDefinitionIndex 9

namespace Input_Offsets {
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t get_mousePosition_Injected = 0x1ac850;
constexpr const static size_t get_mouseScrollDelta_Injected = 0x1aca20;
constexpr const static size_t GetMouseButtonDown = 0xda2b780;
constexpr const static size_t GetMouseButtonUp = 0xda2b7d0;
constexpr const static size_t GetMouseButton = 0xda2b730;
constexpr const static size_t GetKeyDownInt = 0xda2b6e0;
constexpr const static size_t GetKeyUpInt = 0x0;
constexpr const static size_t GetKeyInt = 0xda2b690;
} // namespace Input_Offsets

#define Application_TypeDefinitionIndex 151

namespace Application_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1082b140;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t get_version = 0xd8d56c0;
constexpr const static size_t Quit = 0xd8d4540;
constexpr const static size_t get_isFocused = 0xd8d49a0;
} // namespace Application_Offsets

#define Gradient_TypeDefinitionIndex 336

namespace Gradient_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107952b8;

// Functions
constexpr const static size_t SetKeys = 0xb5ac0;
} // namespace Gradient_Offsets

#define Physics_TypeDefinitionIndex 14

namespace Physics_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1071f838;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t Raycast = 0xda567e0;
constexpr const static size_t RaycastNonAlloc = 0xda58e40;
constexpr const static size_t CheckCapsule = 0xda5a620;
} // namespace Physics_Offsets

#define Image_TypeDefinitionIndex 39

namespace Image_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107bf288;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t m_Sprite = 0xe0;
} // namespace Image_Offsets

#define GraphicsSettings_TypeDefinitionIndex 885

namespace GraphicsSettings_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1082afb8;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t get_INTERNAL_defaultRenderPipeline = 0xd99ba70;
} // namespace GraphicsSettings_Offsets

#define Cursor_TypeDefinitionIndex 324

namespace Cursor_Offsets {

// Functions
constexpr const static size_t get_visible = 0xd945e70;
} // namespace Cursor_Offsets

// ── Unity native struct offsets

namespace IL2CPP_String_Native {
constexpr size_t length = 0x10;
constexpr size_t chars = 0x14;
} // namespace IL2CPP_String_Native

namespace IL2CPP_Array_Native {
constexpr size_t size = 0x18;
constexpr size_t data = 0x20;
} // namespace IL2CPP_Array_Native

namespace IL2CPP_List_Native {
constexpr size_t items = 0x10;
constexpr size_t size = 0x18;
} // namespace IL2CPP_List_Native

namespace IL2CPP_Dictionary_Native {
// FAILED: entries
// FAILED: count
constexpr size_t Entry_hashCode = 0x0;
constexpr size_t Entry_next = 0x4;
constexpr size_t Entry_key = 0x8;
constexpr size_t Entry_value = 0x10;
constexpr size_t Entry_stride = 0x18;
} // namespace IL2CPP_Dictionary_Native

namespace Unity_Component_Native {
constexpr size_t m_GameObject = 0x20;
}

namespace Unity_GameObject_Native {
constexpr size_t m_Component = 0x20;
constexpr size_t m_ComponentCount = 0x30;
constexpr size_t m_ComponentPairOffset = 0x8;
constexpr size_t m_Layer = 0x40;
constexpr size_t m_Tag = 0x44;
constexpr size_t m_IsActive = 0x46;
} // namespace Unity_GameObject_Native

namespace Unity_Transform_Native {
constexpr size_t m_Hierarchy = 0x28;
constexpr size_t m_Index = 0x30;
constexpr size_t m_Children = 0x48;
} // namespace Unity_Transform_Native

namespace Unity_TransformHierarchy_Native {
constexpr size_t m_LocalTransforms = 0x18;
constexpr size_t m_ParentIndices = 0x20;
constexpr size_t m_LocalPosition = 0x90;
} // namespace Unity_TransformHierarchy_Native

namespace Unity_TrsX_Native {
constexpr size_t stride = 0x30;
}

namespace Unity_NativeRenderer_Native {
constexpr size_t m_Materials = 0x140;
constexpr size_t cameraViewMatrix = 0x2fc;
constexpr size_t cameraPosition = 0x444;
} // namespace Unity_NativeRenderer_Native

#define BaseNetworkable_TypeDefinitionIndex 4920

namespace BaseNetworkable_Offsets {

// Offsets
constexpr const static size_t prefabID = 0x54;
constexpr const static size_t net = 0x80;
constexpr const static size_t parentEntity = 0x38;
constexpr const static size_t children = 0x88;
} // namespace BaseNetworkable_Offsets

// obf name: ::%baa584c0ec7ec27d81e1175808b82af9c7227fcf
#define BaseNetworkable_Static_ClassName                                       \
  "BaseNetworkable/%baa584c0ec7ec27d81e1175808b82af9c7227fcf"
#define BaseNetworkable_Static_ClassNameShort                                  \
  "%baa584c0ec7ec27d81e1175808b82af9c7227fcf"
#define BaseNetworkable_Static_TypeDefinitionIndex 4927

namespace BaseNetworkable_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1074e028;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t clientEntities = 0x8;
} // namespace BaseNetworkable_Static_Offsets

// obf name: ::%4b9e103d58302ae7b583ec6c1ccf65c474933de2
#define BaseNetworkable_EntityRealm_ClassName                                  \
  "BaseNetworkable/%4b9e103d58302ae7b583ec6c1ccf65c474933de2"
#define BaseNetworkable_EntityRealm_ClassNameShort                             \
  "%4b9e103d58302ae7b583ec6c1ccf65c474933de2"
#define BaseNetworkable_EntityRealm_TypeDefinitionIndex 4925

namespace BaseNetworkable_EntityRealm_Offsets {

// Offsets
constexpr const static size_t entityList = 0x10;

// Functions
constexpr const static size_t Find = 0x3b2abd0;
} // namespace BaseNetworkable_EntityRealm_Offsets

// obf name: ::%566184d24d536b3588eb56192d48222d3627b0fb
#define System_ListDictionary_ClassName                                        \
  "%566184d24d536b3588eb56192d48222d3627b0fb<%"                                \
  "be7be739bdc24496b60aae2ddbf7b22d6ddb4bfa,BaseNetworkable>"
#define System_ListDictionary_ClassNameShort                                   \
  "%566184d24d536b3588eb56192d48222d3627b0fb"
#define System_ListDictionary_TypeDefinitionIndex 26

namespace System_ListDictionary_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107318a0;

// Offsets
constexpr const static size_t vals = 0x20;

// Functions
constexpr const static size_t TryGetValue = 0x8f21cd0;
constexpr const static size_t TryGetValue_methodinfo = 0x107e7950;
} // namespace System_ListDictionary_Offsets

// obf name: ::%031b7d92fc3e296924bc6e12b99ab8e0eeb81b04
#define System_BufferList_ClassName                                            \
  "%031b7d92fc3e296924bc6e12b99ab8e0eeb81b04<BaseNetworkable>"
#define System_BufferList_ClassNameShort                                       \
  "%031b7d92fc3e296924bc6e12b99ab8e0eeb81b04"
#define System_BufferList_TypeDefinitionIndex 110

namespace System_BufferList_Offsets {

// Offsets
constexpr const static size_t count = 0x18;
constexpr const static size_t buffer = 0x10;
} // namespace System_BufferList_Offsets

// obf name: ::SingletonComponent`1
#define SingletonComponent_ClassName "SingletonComponent<MainCamera>"
#define SingletonComponent_ClassNameShort "SingletonComponent`1"
#define SingletonComponent_TypeDefinitionIndex 5

namespace SingletonComponent_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10794548;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t Instance = 0x8;
} // namespace SingletonComponent_Offsets

#define Model_TypeDefinitionIndex 7016

namespace Model_Offsets {

// Offsets
constexpr const static size_t rootBone = 0x28;
constexpr const static size_t headBone = 0x30;
constexpr const static size_t eyeBone = 0x38;
constexpr const static size_t boneTransforms = 0x50;
} // namespace Model_Offsets

#define BaseEntity_TypeDefinitionIndex 7240

namespace BaseEntity_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107aa620;

// Offsets
constexpr const static size_t bounds = 0x18c;
constexpr const static size_t model = 0x1b8;
constexpr const static size_t flags = 0x1c0;
constexpr const static size_t triggers = 0xa0;
constexpr const static size_t positionLerp = 0xe8;

// Functions
constexpr const static size_t ServerRPC = 0x0;
constexpr const static size_t FindBone = 0x5b3be70;
constexpr const static size_t GetWorldVelocity = 0x5b76410;
constexpr const static size_t GetParentVelocity = 0x5bc7e20;
} // namespace BaseEntity_Offsets

// obf name: ::%93ebba750077de953986e5ba7ac7ca7ecec00a1b
#define PositionLerp_ClassName "%93ebba750077de953986e5ba7ac7ca7ecec00a1b"
#define PositionLerp_ClassNameShort "%93ebba750077de953986e5ba7ac7ca7ecec00a1b"
#define PositionLerp_TypeDefinitionIndex 5946

namespace PositionLerp_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t interpolator = 0x48;
} // namespace PositionLerp_Offsets

// obf name: ::%52e241dabb39b8810d6ccb548cc22961b1c7d80f
#define Interpolator_ClassName                                                 \
  "%52e241dabb39b8810d6ccb548cc22961b1c7d80f<%"                                \
  "cbd7e44a290135dab84a32631a39f13d45787c40>"
#define Interpolator_ClassNameShort "%52e241dabb39b8810d6ccb548cc22961b1c7d80f"
#define Interpolator_TypeDefinitionIndex 7824

namespace Interpolator_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107cf6d0;

// Offsets
constexpr const static size_t list = 0x30;
constexpr const static size_t last = 0x10;
} // namespace Interpolator_Offsets

#define BaseCombatEntity_TypeDefinitionIndex 3009

namespace BaseCombatEntity_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1074dca8;

// Offsets
constexpr const static size_t skeletonProperties = 0x230;
constexpr const static size_t baseProtection = 0x238;
constexpr const static size_t lifestate = 0x2a8;
constexpr const static size_t markAttackerHostile = 0x2ae;
constexpr const static size_t _health = 0x2b4;
constexpr const static size_t _maxHealth = 0x2b8;
constexpr const static size_t lastNotifyFrame = 0x2c8;
} // namespace BaseCombatEntity_Offsets

#define SkeletonProperties_TypeDefinitionIndex 1498

namespace SkeletonProperties_Offsets {

// Offsets
constexpr const static size_t bones = 0x20;
constexpr const static size_t quickLookup = 0x28;
} // namespace SkeletonProperties_Offsets

#define SkeletonProperties_BoneProperty_TypeDefinitionIndex 1499

namespace SkeletonProperties_BoneProperty_Offsets {

// Offsets
constexpr const static size_t boneName = 0x18;
constexpr const static size_t area = 0x20;
} // namespace SkeletonProperties_BoneProperty_Offsets

#define DamageProperties_TypeDefinitionIndex 5507

namespace DamageProperties_Offsets {

// Offsets
constexpr const static size_t fallback = 0x18;
constexpr const static size_t bones = 0x20;
} // namespace DamageProperties_Offsets

#define DamageProperties_HitAreaProperty_TypeDefinitionIndex 5508

namespace DamageProperties_HitAreaProperty_Offsets {

// Offsets
constexpr const static size_t area = 0x10;
constexpr const static size_t damage = 0x14;
} // namespace DamageProperties_HitAreaProperty_Offsets

// obf name: ::%5ae84783c63f460bece56774d3fdbeb74da0ecd7
#define DamageTypeList_ClassName "%5ae84783c63f460bece56774d3fdbeb74da0ecd7"
#define DamageTypeList_ClassNameShort                                          \
  "%5ae84783c63f460bece56774d3fdbeb74da0ecd7"
#define DamageTypeList_TypeDefinitionIndex 2411

namespace DamageTypeList_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1083efd0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t types = 0x10;
} // namespace DamageTypeList_Offsets

#define ProtectionProperties_TypeDefinitionIndex 1437

namespace ProtectionProperties_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t amounts = 0x30;
} // namespace ProtectionProperties_Offsets

#define ItemDefinition_TypeDefinitionIndex 1521

namespace ItemDefinition_Offsets {

// Offsets
constexpr const static size_t itemid = 0x20;
constexpr const static size_t shortname = 0x28;
constexpr const static size_t displayName = 0x40;
constexpr const static size_t iconSprite = 0x50;
constexpr const static size_t category = 0x58;
constexpr const static size_t stackable = 0x78;
constexpr const static size_t rarity = 0x94;
constexpr const static size_t condition = 0xb8;
constexpr const static size_t ItemModWearable = 0x1b8;
} // namespace ItemDefinition_Offsets

#define RecoilProperties_TypeDefinitionIndex 3192

namespace RecoilProperties_Offsets {

// Offsets
constexpr const static size_t recoilYawMin = 0x18;
constexpr const static size_t recoilYawMax = 0x1c;
constexpr const static size_t recoilPitchMin = 0x20;
constexpr const static size_t recoilPitchMax = 0x24;
constexpr const static size_t overrideAimconeWithCurve = 0x5c;
constexpr const static size_t aimconeProbabilityCurve = 0x70;
constexpr const static size_t newRecoilOverride = 0x80;
} // namespace RecoilProperties_Offsets

#define BaseProjectile_Magazine_Definition_TypeDefinitionIndex 7855

namespace BaseProjectile_Magazine_Definition_Offsets {

// Offsets
constexpr const static size_t builtInSize = 0x0;
} // namespace BaseProjectile_Magazine_Definition_Offsets

#define BaseProjectile_Magazine_TypeDefinitionIndex 7854

namespace BaseProjectile_Magazine_Offsets {

// Offsets
constexpr const static size_t definition = 0x10;
constexpr const static size_t capacity = 0x18;
constexpr const static size_t contents = 0x1c;
constexpr const static size_t ammoType = 0x20;
} // namespace BaseProjectile_Magazine_Offsets

#define AttackEntity_TypeDefinitionIndex 4176

namespace AttackEntity_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10855078;

// Offsets
constexpr const static size_t deployDelay = 0x2e8;
constexpr const static size_t repeatDelay = 0x2ec;
constexpr const static size_t animationDelay = 0x2f0;
constexpr const static size_t noHeadshots = 0x33e;
constexpr const static size_t nextAttackTime = 0x340;
constexpr const static size_t timeSinceDeploy = 0x358;

// Functions
constexpr const static size_t SpectatorNotifyTick = 0x0;
constexpr const static size_t StartAttackCooldown = 0x3382540;
} // namespace AttackEntity_Offsets

#define BaseProjectile_TypeDefinitionIndex 7853

namespace BaseProjectile_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10745f40;

// Offsets
constexpr const static size_t projectileVelocityScale = 0x38c;
constexpr const static size_t automatic = 0x390;
constexpr const static size_t reloadTime = 0x3d0;
constexpr const static size_t primaryMagazine = 0x3d8;
constexpr const static size_t fractionalReload = 0x3e0;
constexpr const static size_t aimSway = 0x3f8;
constexpr const static size_t aimSwaySpeed = 0x3fc;
constexpr const static size_t recoil = 0x400;
constexpr const static size_t aimconeCurve = 0x408;
constexpr const static size_t aimCone = 0x410;
constexpr const static size_t hipAimCone = 0x414;
constexpr const static size_t noAimingWhileCycling = 0x42d;
constexpr const static size_t isBurstWeapon = 0x437;
constexpr const static size_t cachedModHash = 0x468;
constexpr const static size_t sightAimConeScale = 0x46c;
constexpr const static size_t sightAimConeOffset = 0x470;
constexpr const static size_t hipAimConeScale = 0x474;
constexpr const static size_t hipAimConeOffset = 0x478;

// Functions
constexpr const static size_t LaunchProjectile = 0x0;
constexpr const static size_t LaunchProjectileClientSide = 0x6263470;
constexpr const static size_t ScaleRepeatDelay = 0x6260b40;
constexpr const static size_t GetAimCone = 0x0;
constexpr const static size_t GetAimCone_vtableoff = 0x0;
constexpr const static size_t UpdateAmmoDisplay = 0x0;
constexpr const static size_t UpdateAmmoDisplay_vtableoff = 0x0;
} // namespace BaseProjectile_Offsets

#define BaseLauncher_TypeDefinitionIndex 4773

namespace BaseLauncher_Offsets {

// Offsets
}

#define SpinUpWeapon_TypeDefinitionIndex 6524

namespace SpinUpWeapon_Offsets {

// Offsets
}

// obf name: ::%4b4f22d64f147438a130d9040d16f58e97e1a8cd
#define HitTest_ClassName "%4b4f22d64f147438a130d9040d16f58e97e1a8cd"
#define HitTest_ClassNameShort "%4b4f22d64f147438a130d9040d16f58e97e1a8cd"
#define HitTest_TypeDefinitionIndex 7672

namespace HitTest_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107a3150;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t type = 0x68;
constexpr const static size_t AttackRay = 0x44;
constexpr const static size_t RayHit = 0x18;
constexpr const static size_t damageProperties = 0xa8;
constexpr const static size_t gameObject = 0x60;
constexpr const static size_t collider = 0x78;
constexpr const static size_t ignoredTypes = 0xc0;
constexpr const static size_t HitTransform = 0x98;
constexpr const static size_t HitPart = 0x94;
constexpr const static size_t HitMaterial = 0xc8;
} // namespace HitTest_Offsets

#define Projectile_TypeDefinitionIndex 8021

namespace Projectile_Offsets {

// Offsets
constexpr const static size_t initialVelocity = 0x28;
constexpr const static size_t drag = 0x34;
constexpr const static size_t gravityModifier = 0x38;
constexpr const static size_t thickness = 0x3c;
constexpr const static size_t initialDistance = 0x44;
constexpr const static size_t swimScale = 0xf0;
constexpr const static size_t swimSpeed = 0xfc;
constexpr const static size_t owner = 0x110;
constexpr const static size_t sourceProjectilePrefab = 0x1e8;
constexpr const static size_t mod = 0x108;
constexpr const static size_t hitTest = 0x1d8;
constexpr const static size_t currentVelocity = 0x15c;
constexpr const static size_t currentPosition = 0x168;
constexpr const static size_t sentPosition = 0x180;
constexpr const static size_t previousPosition = 0x18c;
constexpr const static size_t previousVelocity = 0x198;

// Functions
constexpr const static size_t CalculateEffectScale = 0x63e3940;
constexpr const static size_t CalculateEffectScale_vtableoff = 0x1d8;
constexpr const static size_t Retire = 0x6429610;
constexpr const static size_t DoHit = 0x63f7ee0;
} // namespace Projectile_Offsets

// obf name: ::%bc8b6f0b2180f3445c6b335c65eb708ea4895b7d
#define HitInfo_ClassName "%bc8b6f0b2180f3445c6b335c65eb708ea4895b7d"
#define HitInfo_ClassNameShort "%bc8b6f0b2180f3445c6b335c65eb708ea4895b7d"
#define HitInfo_TypeDefinitionIndex 9003

namespace HitInfo_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t damageProperties = 0xe8;
constexpr const static size_t damageTypes = 0x78;

// Functions
constexpr const static size_t get_boneArea = 0x6fa73e0;
} // namespace HitInfo_Offsets

#define BaseMelee_TypeDefinitionIndex 1065

namespace BaseMelee_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10855070;

// Offsets
constexpr const static size_t damageProperties = 0x388;
constexpr const static size_t maxDistance = 0x3a0;
constexpr const static size_t attackRadius = 0x3a4;
constexpr const static size_t blockSprintOnAttack = 0x3a9;
constexpr const static size_t gathering = 0x3e0;
constexpr const static size_t canThrowAsProjectile = 0x380;

// Functions
constexpr const static size_t ProcessAttack = 0x0;
constexpr const static size_t DoThrow = 0x7732bf0;
} // namespace BaseMelee_Offsets

#define FlintStrikeWeapon_TypeDefinitionIndex 9265

namespace FlintStrikeWeapon_Offsets {

// Offsets
constexpr const static size_t successFraction = 0x4b8;
constexpr const static size_t strikeRecoil = 0x4c0;
constexpr const static size_t _didSparkThisFrame = 0x4c8;
} // namespace FlintStrikeWeapon_Offsets

#define CompoundBowWeapon_TypeDefinitionIndex 6394

namespace CompoundBowWeapon_Offsets {

// Offsets
constexpr const static size_t stringHoldDurationMax = 0x4d0;
constexpr const static size_t stringBonusVelocity = 0x4dc;

// Functions
constexpr const static size_t GetStringBonusScale = 0x50cada0;
} // namespace CompoundBowWeapon_Offsets

// obf name: ::%2d81cc633fd321f4b78765e8fcb6b2fef9eca051
#define ItemContainer_ClassName "%2d81cc633fd321f4b78765e8fcb6b2fef9eca051"
#define ItemContainer_ClassNameShort "%2d81cc633fd321f4b78765e8fcb6b2fef9eca051"
#define ItemContainer_TypeDefinitionIndex 9119

namespace ItemContainer_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t uid = 0x28;
constexpr const static size_t itemList = 0x38;

// Functions
constexpr const static size_t GetSlot = 0x71860e0;
} // namespace ItemContainer_Offsets

#define PlayerLoot_TypeDefinitionIndex 2341

namespace PlayerLoot_Offsets {

// Offsets
constexpr const static size_t containers = 0x38;
} // namespace PlayerLoot_Offsets

#define PlayerInventory_TypeDefinitionIndex 593

namespace PlayerInventory_Offsets {

// Offsets
constexpr const static size_t containerWear = 0x78;
constexpr const static size_t containerMain = 0x58;
constexpr const static size_t containerBelt = 0x38;
constexpr const static size_t loot = 0x48;

// Functions
constexpr const static size_t Initialize = 0x3eeb880;
} // namespace PlayerInventory_Offsets

#define PlayerEyes_TypeDefinitionIndex 9635

namespace PlayerEyes_Offsets {

// Offsets
constexpr const static size_t viewOffset = 0x40;
constexpr const static size_t bodyRotation = 0x50;

// Functions
constexpr const static size_t get_position = 0x76d47a0;
constexpr const static size_t get_rotation = 0x76d8370;
constexpr const static size_t set_rotation = 0x76d2660;
constexpr const static size_t HeadForward = 0x76dc1c0;
} // namespace PlayerEyes_Offsets

// obf name: ::%6cc6f14a554ae4396c9595e283e8c371742e910e
#define PlayerEyes_Static_ClassName                                            \
  "PlayerEyes/%6cc6f14a554ae4396c9595e283e8c371742e910e"
#define PlayerEyes_Static_ClassNameShort                                       \
  "%6cc6f14a554ae4396c9595e283e8c371742e910e"
#define PlayerEyes_Static_TypeDefinitionIndex 9636

namespace PlayerEyes_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107daea0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t EyeOffset = 0x30;
} // namespace PlayerEyes_Static_Offsets

// obf name: ::%55f3e963407019d0c2873a2da68361b5f7088398
#define PlayerBelt_ClassName "%55f3e963407019d0c2873a2da68361b5f7088398"
#define PlayerBelt_ClassNameShort "%55f3e963407019d0c2873a2da68361b5f7088398"
#define PlayerBelt_TypeDefinitionIndex 2750

namespace PlayerBelt_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10772db8;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t ChangeSelect = 0x20cea40;
constexpr const static size_t GetActiveItem = 0x20d0810;
} // namespace PlayerBelt_Offsets

// obf name: ::%3fea37cd6025e65db2f0c3fae35a350f39360617
#define LocalPlayer_ClassName "%3fea37cd6025e65db2f0c3fae35a350f39360617"
#define LocalPlayer_ClassNameShort "%3fea37cd6025e65db2f0c3fae35a350f39360617"
#define LocalPlayer_TypeDefinitionIndex 982

namespace LocalPlayer_Offsets {
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t ItemCommand = 0x6ca8920;
constexpr const static size_t MoveItem = 0x0;
constexpr const static size_t get_Entity = 0x6cb52a0;
} // namespace LocalPlayer_Offsets

// obf name: ::%ff7de1848f2ee6a8b15d665365382ca40aeb9b34
#define LocalPlayer_Static_ClassName                                           \
  "%3fea37cd6025e65db2f0c3fae35a350f39360617/"                                 \
  "%ff7de1848f2ee6a8b15d665365382ca40aeb9b34"
#define LocalPlayer_Static_ClassNameShort                                      \
  "%ff7de1848f2ee6a8b15d665365382ca40aeb9b34"
#define LocalPlayer_Static_TypeDefinitionIndex 985

namespace LocalPlayer_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x108568d0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t Entity = 0xa0;
} // namespace LocalPlayer_Static_Offsets

// obf name: ::%07c1c2dbfd1c988b21d2fb288d01fa6966ef853c
#define BasePlayer_Static_ClassName                                            \
  "BasePlayer/%07c1c2dbfd1c988b21d2fb288d01fa6966ef853c"
#define BasePlayer_Static_ClassNameShort                                       \
  "%07c1c2dbfd1c988b21d2fb288d01fa6966ef853c"
#define BasePlayer_Static_TypeDefinitionIndex 3240

namespace BasePlayer_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1073b918;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t visiblePlayerList = 0x158;
} // namespace BasePlayer_Static_Offsets

#define BasePlayer_TypeDefinitionIndex 3216

namespace BasePlayer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10720218;

// Offsets
constexpr const static size_t playerModel = 0x340;
constexpr const static size_t input = 0x3b8;
constexpr const static size_t movement = 0x520;
constexpr const static size_t currentTeam = 0x550;
constexpr const static size_t clActiveItem = 0x580;
constexpr const static size_t modelState = 0x2d0;
constexpr const static size_t playerFlags = 0x6d0;
constexpr const static size_t eyes = 0x7a0;
constexpr const static size_t playerRigidbody = 0x3e8;
constexpr const static size_t userID = 0x718;
constexpr const static size_t UserIDString = 0x4e8;
constexpr const static size_t inventory = 0x4b0;
constexpr const static size_t _displayName = 0x390;
constexpr const static size_t _lookingAt = 0x490;
constexpr const static size_t lastSentTickTime = 0x690;
constexpr const static size_t CurrentTutorialAllowance = 0x0;
constexpr const static size_t nextVisThink = 0x0;
constexpr const static size_t lastSentTick = 0x5a0;
constexpr const static size_t mounted = 0x5d8;
constexpr const static size_t Belt = 0x710;
constexpr const static size_t _lookingAtEntity = 0x4c0;
constexpr const static size_t currentGesture = 0x300;
constexpr const static size_t weaponMoveSpeedScale = 0x7b0;
constexpr const static size_t clothingBlocksAiming = 0x7b4;
constexpr const static size_t clothingMoveSpeedReduction = 0x7b8;
constexpr const static size_t clothingWaterSpeedBonus = 0x7bc;
constexpr const static size_t equippingBlocked = 0x7c4;

// Functions
constexpr const static size_t MakeVisible = 0x0;
constexpr const static size_t ClientUpdateLocalPlayer = 0x0;
constexpr const static size_t Menu_AssistPlayer = 0x0;
constexpr const static size_t OnViewModeChanged = 0x0;
constexpr const static size_t ChatMessage = 0x0;
constexpr const static size_t IsOnGround = 0x263fbb0;
constexpr const static size_t GetSpeed = 0x2694440;
constexpr const static size_t CanBuild = 0x2643890;
constexpr const static size_t GetMounted = 0x283d3f0;
constexpr const static size_t GetHeldEntity = 0x2695100;
constexpr const static size_t get_inventory = 0x2680ce0;
constexpr const static size_t get_eyes = 0x26fb860;
constexpr const static size_t SendClientTick = 0x0;
constexpr const static size_t ClientInput = 0x0;
constexpr const static size_t ClientInput_vtableoff = 0x0;
constexpr const static size_t MaxHealth = 0x0;
constexpr const static size_t MaxHealth_vtableoff = 0x0;
constexpr const static size_t OnAttacked = 0x26f5570;
constexpr const static size_t OnAttacked_vtableoff = 0x3d88;
constexpr const static size_t get_idealViewMode = 0x269be30;
} // namespace BasePlayer_Offsets

#define ScientistNPC_TypeDefinitionIndex 7309

namespace ScientistNPC_Offsets {

// Offsets
}

#define TunnelDweller_TypeDefinitionIndex 4833

namespace TunnelDweller_Offsets {

// Offsets
}

#define UnderwaterDweller_TypeDefinitionIndex 6829

namespace UnderwaterDweller_Offsets {

// Offsets
}

#define ScarecrowNPC_TypeDefinitionIndex 1517

namespace ScarecrowNPC_Offsets {

// Offsets
}

#define GingerbreadNPC_TypeDefinitionIndex 630

namespace GingerbreadNPC_Offsets {

// Offsets
}

#define BaseMovement_TypeDefinitionIndex 3782

namespace BaseMovement_Offsets {

// Offsets
constexpr const static size_t adminCheat = 0x0;
constexpr const static size_t Owner = 0x30;
} // namespace BaseMovement_Offsets

#define PlayerWalkMovement_TypeDefinitionIndex 8471

namespace PlayerWalkMovement_Offsets {

// Offsets
constexpr const static size_t capsule = 0xf8;
constexpr const static size_t ladder = 0xe0;
constexpr const static size_t modify = 0x1c0;

// Functions
constexpr const static size_t Init = 0x0;
constexpr const static size_t BlockJump = 0x0;
constexpr const static size_t BlockSprint = 0x0;
constexpr const static size_t GroundCheck = 0x68ff800;
constexpr const static size_t ClientInput = 0x0;
constexpr const static size_t ClientInput_vtableoff = 0x0;
constexpr const static size_t DoFixedUpdate = 0x0;
constexpr const static size_t DoFixedUpdate_vtableoff = 0x0;
constexpr const static size_t FrameUpdate = 0x0;
constexpr const static size_t FrameUpdate_vtableoff = 0x0;
constexpr const static size_t TeleportTo = 0x0;
constexpr const static size_t TeleportTo_vtableoff = 0x0;
} // namespace PlayerWalkMovement_Offsets

#define BuildingPrivlidge_TypeDefinitionIndex 6032

namespace BuildingPrivlidge_Offsets {

// Offsets
constexpr const static size_t allowedConstructionItems = 0x408;
constexpr const static size_t cachedProtectedMinutes = 0x410;
} // namespace BuildingPrivlidge_Offsets

#define WorldItem_TypeDefinitionIndex 6314

namespace WorldItem_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107daff0;

// Offsets
constexpr const static size_t allowPickup = 0x200;
constexpr const static size_t item = 0x208;
} // namespace WorldItem_Offsets

#define HackableLockedCrate_TypeDefinitionIndex 1902

namespace HackableLockedCrate_Offsets {

// Offsets
constexpr const static size_t timerText = 0x400;
constexpr const static size_t hackSeconds = 0x410;
} // namespace HackableLockedCrate_Offsets

#define ProjectileWeaponMod_TypeDefinitionIndex 6937

namespace ProjectileWeaponMod_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10835240;

// Offsets
constexpr const static size_t repeatDelay = 0x220;
constexpr const static size_t projectileVelocity = 0x22c;
constexpr const static size_t projectileDamage = 0x238;
constexpr const static size_t projectileDistance = 0x244;
constexpr const static size_t aimsway = 0x250;
constexpr const static size_t aimswaySpeed = 0x25c;
constexpr const static size_t recoil = 0x268;
constexpr const static size_t sightAimCone = 0x274;
constexpr const static size_t hipAimCone = 0x280;
constexpr const static size_t magazineCapacity = 0x294;
constexpr const static size_t needsOnForEffects = 0x2a0;
} // namespace ProjectileWeaponMod_Offsets

#define ProjectileWeaponMod_Modifier_TypeDefinitionIndex 6939

namespace ProjectileWeaponMod_Modifier_Offsets {
constexpr const static size_t enabled = 0x0;
constexpr const static size_t scalar = 0x4;
constexpr const static size_t offset = 0x8;
} // namespace ProjectileWeaponMod_Modifier_Offsets

// obf name: ::%11936a7fb8ebec67b5cb51e4eff2f462b14ab106
#define ConsoleSystem_ClassName "%11936a7fb8ebec67b5cb51e4eff2f462b14ab106"
#define ConsoleSystem_ClassNameShort "%11936a7fb8ebec67b5cb51e4eff2f462b14ab106"
#define ConsoleSystem_TypeDefinitionIndex 22

namespace ConsoleSystem_Offsets {

// Functions
constexpr const static size_t Run = 0x0;
} // namespace ConsoleSystem_Offsets

// obf name: ::%85a5361e96665fd6d9b6c0a8773dd77712ee2d53
#define ConsoleSystem_Index_Static_ClassName                                   \
  "%11936a7fb8ebec67b5cb51e4eff2f462b14ab106/"                                 \
  "%a3230f3c22826c3b7c3cbf57cc5adffb10441c96.%"                                \
  "85a5361e96665fd6d9b6c0a8773dd77712ee2d53"
#define ConsoleSystem_Index_Static_ClassNameShort                              \
  "%85a5361e96665fd6d9b6c0a8773dd77712ee2d53"
#define ConsoleSystem_Index_Static_TypeDefinitionIndex 36

namespace ConsoleSystem_Index_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10850890;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t All = 0x18;
} // namespace ConsoleSystem_Index_Static_Offsets

#define LootableCorpse_TypeDefinitionIndex 6015

namespace LootableCorpse_Offsets {

// Offsets
constexpr const static size_t playerSteamID = 0x318;
constexpr const static size_t _playerName = 0x308;
} // namespace LootableCorpse_Offsets

#define DroppedItemContainer_TypeDefinitionIndex 502

namespace DroppedItemContainer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107d8dd0;

// Offsets
constexpr const static size_t playerSteamID = 0x2e8;
constexpr const static size_t _playerName = 0x2d0;
} // namespace DroppedItemContainer_Offsets

#define MainCamera_TypeDefinitionIndex 2845

namespace MainCamera_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107948d0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t mainCamera = 0x38;
constexpr const static size_t mainCameraTransform = 0x30;

// Functions
constexpr const static size_t Update = 0x2231fe0;
constexpr const static size_t OnPreCull = 0x2224620;
constexpr const static size_t Trace = 0x0;
} // namespace MainCamera_Offsets

#define CameraMan_TypeDefinitionIndex 3694

namespace CameraMan_Offsets {

// Offsets
}

// obf name: ::%21d8cca49423db30114beb442c9fd4a33c3e4a80
#define PlayerTick_ClassName "%21d8cca49423db30114beb442c9fd4a33c3e4a80"
#define PlayerTick_ClassNameShort "%21d8cca49423db30114beb442c9fd4a33c3e4a80"
#define PlayerTick_TypeDefinitionIndex 635

namespace PlayerTick_Offsets {

// Offsets
constexpr const static size_t inputState = 0x48;
constexpr const static size_t modelState = 0x28;
constexpr const static size_t activeItem = 0x20;
constexpr const static size_t parentID = 0x50;
constexpr const static size_t position = 0x14;
constexpr const static size_t eyePos = 0x34;

// Functions
constexpr const static size_t WriteToStreamDelta = 0xae00f40;
constexpr const static size_t WriteToStreamDelta_vtableoff = 0x1b8;
constexpr const static size_t WriteToStream = 0xadfe320;
constexpr const static size_t WriteToStream_vtableoff = 0x1e8;
} // namespace PlayerTick_Offsets

// obf name: ::%7d768eed4060ce0d793682267b6f510216c5a36c
#define InputMessage_ClassName "%7d768eed4060ce0d793682267b6f510216c5a36c"
#define InputMessage_ClassNameShort "%7d768eed4060ce0d793682267b6f510216c5a36c"
#define InputMessage_TypeDefinitionIndex 964

namespace InputMessage_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10830528;

// Offsets
constexpr const static size_t buttons = 0x10;
constexpr const static size_t aimAngles = 0x14;
constexpr const static size_t mouseDelta = 0x20;
} // namespace InputMessage_Offsets

// obf name: ::%ad3a77eb1cf944eb3a3cadbe9b8b1380c9e1a7d8
#define InputState_ClassName "%ad3a77eb1cf944eb3a3cadbe9b8b1380c9e1a7d8"
#define InputState_ClassNameShort "%ad3a77eb1cf944eb3a3cadbe9b8b1380c9e1a7d8"
#define InputState_TypeDefinitionIndex 4679

namespace InputState_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107dd580;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t current = 0x20;
constexpr const static size_t previous = 0x18;
} // namespace InputState_Offsets

#define PlayerInput_TypeDefinitionIndex 5120

namespace PlayerInput_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1078fd70;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t state = 0x28;
constexpr const static size_t bodyAngles = 0x44;
} // namespace PlayerInput_Offsets

// obf name: ::%de5eec72216f008968149087a36034a33067c132
#define ModelState_ClassName "%de5eec72216f008968149087a36034a33067c132"
#define ModelState_ClassNameShort "%de5eec72216f008968149087a36034a33067c132"
#define ModelState_TypeDefinitionIndex 485

namespace ModelState_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1071f310;

// Offsets
constexpr const static size_t lookDir = 0x30;
} // namespace ModelState_Offsets

// obf name: ::%849c09c9f164f2b401120e984d7bb860b15b433f
#define Item_ClassName "%849c09c9f164f2b401120e984d7bb860b15b433f"
#define Item_ClassNameShort "%849c09c9f164f2b401120e984d7bb860b15b433f"
#define Item_TypeDefinitionIndex 3524

namespace Item_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107a9fb0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t info = 0xd0;
constexpr const static size_t uid = 0x88;
constexpr const static size_t clientAmmoCount = 0xac;
constexpr const static size_t contents = 0x90;
constexpr const static size_t parent = 0xe0;
constexpr const static size_t worldEnt = 0x48;
constexpr const static size_t heldEntity = 0x98;
constexpr const static size_t amount = 0x1c;
constexpr const static size_t _condition = 0x80;
constexpr const static size_t _maxCondition = 0xcc;

// Functions
constexpr const static size_t get_iconSprite = 0x2ba2f20;
} // namespace Item_Offsets

// obf name: ::%e3b7a78286e95da75b4d6a4e9b4a8fc674241e98
#define WaterLevel_ClassName "%e3b7a78286e95da75b4d6a4e9b4a8fc674241e98"
#define WaterLevel_ClassNameShort "%e3b7a78286e95da75b4d6a4e9b4a8fc674241e98"
#define WaterLevel_TypeDefinitionIndex 6461

namespace WaterLevel_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107eed28;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t Test = 0x518c2a0;
constexpr const static size_t GetWaterLevel = 0x51bb380;
} // namespace WaterLevel_Offsets

// obf name: ::%33690f634f28abf6a2c6dd36f0ecc5d7d63a803b
#define ConVar_Graphics_Static_ClassName                                       \
  "%851583e82cf8fd9850593c652863135910ef44c0/"                                 \
  "%33690f634f28abf6a2c6dd36f0ecc5d7d63a803b"
#define ConVar_Graphics_Static_ClassNameShort                                  \
  "%33690f634f28abf6a2c6dd36f0ecc5d7d63a803b"
#define ConVar_Graphics_Static_TypeDefinitionIndex 2635

namespace ConVar_Graphics_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107af660;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t _fov = 0x14;

// Functions
} // namespace ConVar_Graphics_Static_Offsets

#define BaseFishingRod_TypeDefinitionIndex 7358

namespace BaseFishingRod_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10751470;

// Offsets
constexpr const static size_t CurrentState = 0x0;
constexpr const static size_t currentBobber = 0x310;
constexpr const static size_t MaxCastDistance = 0x32c;
constexpr const static size_t BobberPreview = 0x338;
constexpr const static size_t clientStrainAmountNormalised = 0x380;
constexpr const static size_t strainGainMod = 0x378;
constexpr const static size_t aimAnimationReady = 0x398;

// Functions
constexpr const static size_t UpdateLineRenderer = 0x5d67970;
constexpr const static size_t EvaluateFishingPosition = 0x5d66f30;
} // namespace BaseFishingRod_Offsets

#define FishingBobber_TypeDefinitionIndex 155

namespace FishingBobber_Offsets {

// Offsets
constexpr const static size_t bobberRoot = 0x2e8;
} // namespace FishingBobber_Offsets

#define GameManifest_TypeDefinitionIndex 8508

namespace GameManifest_Offsets {

// Functions
constexpr const static size_t GUIDToObject = 0x69c2740;
} // namespace GameManifest_Offsets

// obf name: ::%241df15e0c8c1b89979c3b9dda15cc7a4f8e5c62
#define GameManager_ClassName "%241df15e0c8c1b89979c3b9dda15cc7a4f8e5c62"
#define GameManager_ClassNameShort "%241df15e0c8c1b89979c3b9dda15cc7a4f8e5c62"
#define GameManager_TypeDefinitionIndex 7874

namespace GameManager_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x108298c8;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t pool = 0x0;

// Functions
constexpr const static size_t CreatePrefab = 0x0;
} // namespace GameManager_Offsets

// obf name: ::%c1618ae2b12c4bce77d409143768f6a6c9bb2a9a
#define GameManager_Static_ClassName                                           \
  "%241df15e0c8c1b89979c3b9dda15cc7a4f8e5c62/"                                 \
  "%c1618ae2b12c4bce77d409143768f6a6c9bb2a9a"
#define GameManager_Static_ClassNameShort                                      \
  "%c1618ae2b12c4bce77d409143768f6a6c9bb2a9a"
#define GameManager_Static_TypeDefinitionIndex 7878

namespace GameManager_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107a9ba0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t client = 0x8;
} // namespace GameManager_Static_Offsets

// obf name: ::%241df15e0c8c1b89979c3b9dda15cc7a4f8e5c62
#define PrefabPoolCollection_ClassName                                         \
  "%241df15e0c8c1b89979c3b9dda15cc7a4f8e5c62"
#define PrefabPoolCollection_ClassNameShort                                    \
  "%241df15e0c8c1b89979c3b9dda15cc7a4f8e5c62"
#define PrefabPoolCollection_TypeDefinitionIndex 7874

namespace PrefabPoolCollection_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x108298c8;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t storage = 0x10;
} // namespace PrefabPoolCollection_Offsets

// obf name: ::%4c1e7242c9bdcc8591a49e3cdd3f1183d6de23a5
#define PrefabPool_ClassName "%4c1e7242c9bdcc8591a49e3cdd3f1183d6de23a5"
#define PrefabPool_ClassNameShort "%4c1e7242c9bdcc8591a49e3cdd3f1183d6de23a5"
#define PrefabPool_TypeDefinitionIndex 1140

namespace PrefabPool_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t stack = 0x0;
} // namespace PrefabPool_Offsets

#define ItemModProjectile_TypeDefinitionIndex 9615

namespace ItemModProjectile_Offsets {

// Offsets
constexpr const static size_t projectileObject = 0x20;
constexpr const static size_t ammoType = 0x30;
constexpr const static size_t projectileSpread = 0x3c;
constexpr const static size_t projectileVelocity = 0x40;
constexpr const static size_t projectileVelocitySpread = 0x44;
constexpr const static size_t useCurve = 0x48;
constexpr const static size_t spreadScalar = 0x50;
constexpr const static size_t category = 0x68;
} // namespace ItemModProjectile_Offsets

#define CraftingQueue_TypeDefinitionIndex 533

namespace CraftingQueue_Offsets {

// Offsets
constexpr const static size_t icons = 0x30;
} // namespace CraftingQueue_Offsets

// obf name: ::%c5a10867937a622ec6c5badbf9a6c6c9c5c370e8
#define CraftingQueue_Static_ClassName                                         \
  "CraftingQueue/%c5a10867937a622ec6c5badbf9a6c6c9c5c370e8"
#define CraftingQueue_Static_ClassNameShort                                    \
  "%c5a10867937a622ec6c5badbf9a6c6c9c5c370e8"
#define CraftingQueue_Static_TypeDefinitionIndex 534

namespace CraftingQueue_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x108568e0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t isCrafting = 0x0;
} // namespace CraftingQueue_Static_Offsets

#define CraftingQueueIcon_TypeDefinitionIndex 2010

namespace CraftingQueueIcon_Offsets {

// Offsets
constexpr const static size_t endTime = 0x5c;
constexpr const static size_t item = 0x70;
} // namespace CraftingQueueIcon_Offsets

// obf name: ::%dc6768a4c2b156c3dc3d27a3059f0c3c71e4c00d
#define Planner_Static_ClassName                                               \
  "Planner/%dc6768a4c2b156c3dc3d27a3059f0c3c71e4c00d"
#define Planner_Static_ClassNameShort                                          \
  "%dc6768a4c2b156c3dc3d27a3059f0c3c71e4c00d"
#define Planner_Static_TypeDefinitionIndex 4497

namespace Planner_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107b4248;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t guide = 0x78;
} // namespace Planner_Static_Offsets

// obf name: ::%d8b0cb993f76c6e4b5f447edb2438012e812387b
#define Planner_Guide_ClassName                                                \
  "Planner/%d8b0cb993f76c6e4b5f447edb2438012e812387b"
#define Planner_Guide_ClassNameShort "%d8b0cb993f76c6e4b5f447edb2438012e812387b"
#define Planner_Guide_TypeDefinitionIndex 4490

namespace Planner_Guide_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10741350;

// Offsets
constexpr const static size_t lastPlacement = 0x68;
} // namespace Planner_Guide_Offsets

#define Planner_TypeDefinitionIndex 4489

namespace Planner_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10841438;

// Offsets
constexpr const static size_t _currentConstruction = 0x338;
} // namespace Planner_Offsets

#define Construction_TypeDefinitionIndex 1585

namespace Construction_Offsets {

// Offsets
constexpr const static size_t holdToPlaceDuration = 0x100;
constexpr const static size_t grades = 0x148;
} // namespace Construction_Offsets

#define BuildingBlock_TypeDefinitionIndex 9065

namespace BuildingBlock_Offsets {

// Offsets
constexpr const static size_t blockDefinition = 0x360;
constexpr const static size_t grade = 0x350;

// Functions
} // namespace BuildingBlock_Offsets

// obf name: ::HeldEntity
#define HeldEntity_ClassName "HeldEntity"
#define HeldEntity_ClassNameShort "HeldEntity"
#define HeldEntity_TypeDefinitionIndex 8562

namespace HeldEntity_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107daf60;

// Offsets
constexpr const static size_t ownerItemUID = 0x2e0;
constexpr const static size_t _punches = 0x240;
constexpr const static size_t viewModel = 0x250;

// Functions
constexpr const static size_t OnDeploy = 0x0;
} // namespace HeldEntity_Offsets

// obf name: ::%c4e3794b8aeb7f18896128883f1f4d2c91cad406
#define PunchEntry_ClassName                                                   \
  "HeldEntity/%c4e3794b8aeb7f18896128883f1f4d2c91cad406"
#define PunchEntry_ClassNameShort "%c4e3794b8aeb7f18896128883f1f4d2c91cad406"
#define PunchEntry_TypeDefinitionIndex 8563

namespace PunchEntry_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10730e68;

// Offsets
} // namespace PunchEntry_Offsets

#define IronSights_TypeDefinitionIndex 4425

namespace IronSights_Offsets {

// Offsets
constexpr const static size_t zoomFactor = 0x2c;
constexpr const static size_t ironsightsOverride = 0x68;
} // namespace IronSights_Offsets

#define IronSightOverride_TypeDefinitionIndex 6090

namespace IronSightOverride_Offsets {

// Offsets
constexpr const static size_t zoomFactor = 0x2c;
constexpr const static size_t fovBias = 0x30;
} // namespace IronSightOverride_Offsets

#define BaseViewModel_TypeDefinitionIndex 3139

namespace BaseViewModel_Offsets {

// Offsets
constexpr const static size_t useViewModelCamera = 0x40;
constexpr const static size_t ironSights = 0x100;
constexpr const static size_t model = 0xf0;
constexpr const static size_t lower = 0xb8;

// Functions
constexpr const static size_t get_ActiveModel = 0x2529d70;
constexpr const static size_t OnCameraPositionChanged = 0x0;
constexpr const static size_t OnCameraPositionChanged_vtableoff = 0x0;
} // namespace BaseViewModel_Offsets

#define ViewModel_TypeDefinitionIndex 2271

namespace ViewModel_Offsets {

// Offsets
constexpr const static size_t instance = 0x28;

// Functions
constexpr const static size_t PlayInt = 0x1b890a0;
constexpr const static size_t PlayString = 0x1b82ed0;
} // namespace ViewModel_Offsets

#define MedicalTool_TypeDefinitionIndex 8845

namespace MedicalTool_Offsets {

// Offsets
constexpr const static size_t resetTime = 0x3a0;
} // namespace MedicalTool_Offsets

#define WaterBody_TypeDefinitionIndex 6703

namespace WaterBody_Offsets {

// Offsets
constexpr const static size_t meshFilter = 0x68;
} // namespace WaterBody_Offsets

// obf name: ::%c1792176bdaca2d8fa797e9c4c18f4277983363e
#define WaterSystem_Static_ClassName                                           \
  "WaterSystem/%c1792176bdaca2d8fa797e9c4c18f4277983363e"
#define WaterSystem_Static_ClassNameShort                                      \
  "%c1792176bdaca2d8fa797e9c4c18f4277983363e"
#define WaterSystem_Static_TypeDefinitionIndex 5172

namespace WaterSystem_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107a5e80;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t Ocean = 0x68;
} // namespace WaterSystem_Static_Offsets

#define WaterSystem_TypeDefinitionIndex 5167

namespace WaterSystem_Offsets {

// Functions
constexpr const static size_t get_Ocean = 0x3e94390;
} // namespace WaterSystem_Offsets

#define TerrainMeta_TypeDefinitionIndex 9317

namespace TerrainMeta_Offsets {

// Functions
constexpr const static size_t Position = 0x73b7410;
constexpr const static size_t Size = 0x73b7b10;
constexpr const static size_t OneOverSize = 0x73b87e0;
constexpr const static size_t Collision = 0x73b78b0;
constexpr const static size_t HeightMap = 0x73bbbe0;
constexpr const static size_t SplatMap = 0x73bb920;
constexpr const static size_t TopologyMap = 0x73b7cd0;
constexpr const static size_t Texturing = 0x73bed90;
} // namespace TerrainMeta_Offsets

#define TerrainCollision_TypeDefinitionIndex 2568

namespace TerrainCollision_Offsets {

// Functions
constexpr const static size_t GetIgnore = 0x1ec9b60;
} // namespace TerrainCollision_Offsets

#define TerrainHeightMap_TypeDefinitionIndex 5663

namespace TerrainHeightMap_Offsets {

// Offsets
constexpr const static size_t normY = 0x7c;
} // namespace TerrainHeightMap_Offsets

#define TerrainSplatMap_TypeDefinitionIndex 6901

namespace TerrainSplatMap_Offsets {

// Offsets
constexpr const static size_t num = 0x7c;
} // namespace TerrainSplatMap_Offsets

#define TerrainTexturing_TypeDefinitionIndex 8028

namespace TerrainTexturing_Offsets {

// Offsets
constexpr const static size_t shoreVectors = 0x58;
} // namespace TerrainTexturing_Offsets

// obf name: ::%d843edab297f2ee809352bf0b61e3ce98bcc1e8c
#define World_Static_ClassName                                                 \
  "%5854bdfb836af5938e4e15fe90225a5aebc0ac09/"                                 \
  "%d843edab297f2ee809352bf0b61e3ce98bcc1e8c"
#define World_Static_ClassNameShort "%d843edab297f2ee809352bf0b61e3ce98bcc1e8c"
#define World_Static_TypeDefinitionIndex 3359

namespace World_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1079fd88;
constexpr auto static_fields = 0xb8;

// Offsets
} // namespace World_Static_Offsets

#define ItemIcon_TypeDefinitionIndex 2424

namespace ItemIcon_Offsets {

// Offsets
constexpr const static size_t backgroundImage = 0xe8;

// Functions
constexpr const static size_t TryToMove = 0x0;
constexpr const static size_t TryToMove_vtableoff = 0x0;
constexpr const static size_t RunTimedAction = 0x0;
} // namespace ItemIcon_Offsets

// obf name: ::%a4c13a82ad14933a5d8ef4b8a6e9afb6101b65b6
#define ItemIcon_Static_ClassName                                              \
  "ItemIcon/%a4c13a82ad14933a5d8ef4b8a6e9afb6101b65b6"
#define ItemIcon_Static_ClassNameShort                                         \
  "%a4c13a82ad14933a5d8ef4b8a6e9afb6101b65b6"
#define ItemIcon_Static_TypeDefinitionIndex 2429

namespace ItemIcon_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10835380;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t containerLootStartTimes = 0x8;
} // namespace ItemIcon_Static_Offsets

// obf name: ::%7132776d03b795797da1bf640facda1af488eca6
#define EffectData_ClassName "%7132776d03b795797da1bf640facda1af488eca6"
#define EffectData_ClassNameShort "%7132776d03b795797da1bf640facda1af488eca6"
#define EffectData_TypeDefinitionIndex 554

namespace EffectData_Offsets {

// Offsets
constexpr const static size_t entity = 0x28;
constexpr const static size_t source = 0x40;
} // namespace EffectData_Offsets

// obf name: ::%d11599c18ec0df6d4bd405057d48eae69ad544c3
#define Effect_ClassName "%d11599c18ec0df6d4bd405057d48eae69ad544c3"
#define Effect_ClassNameShort "%d11599c18ec0df6d4bd405057d48eae69ad544c3"
#define Effect_TypeDefinitionIndex 1705

namespace Effect_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x108552c0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t pooledString = 0x90;
constexpr const static size_t worldPos = 0x98;
} // namespace Effect_Offsets

// obf name: ::%96dfd718d1f75c691eaacf6116032ffa3e2bd0c7
#define EffectNetwork_ClassName "%96dfd718d1f75c691eaacf6116032ffa3e2bd0c7"
#define EffectNetwork_ClassNameShort "%96dfd718d1f75c691eaacf6116032ffa3e2bd0c7"
#define EffectNetwork_TypeDefinitionIndex 771

namespace EffectNetwork_Offsets {
constexpr auto static_fields = 0xb8;

// Functions
} // namespace EffectNetwork_Offsets

// obf name: ::%40016a7981c63cb367c2e8dd8edccfeaa5cfe6e3
#define EffectNetwork_Static_ClassName                                         \
  "%96dfd718d1f75c691eaacf6116032ffa3e2bd0c7/"                                 \
  "%40016a7981c63cb367c2e8dd8edccfeaa5cfe6e3"
#define EffectNetwork_Static_ClassNameShort                                    \
  "%40016a7981c63cb367c2e8dd8edccfeaa5cfe6e3"
#define EffectNetwork_Static_TypeDefinitionIndex 772

namespace EffectNetwork_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10762a90;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t effect = 0x8;

// Functions
constexpr const static size_t cctor = 0x573c250;
} // namespace EffectNetwork_Static_Offsets

// obf name: ::%f0894e03ed2cebc956fe47ab7b2878d7f9bce290
#define GameObjectEx_ClassName "%f0894e03ed2cebc956fe47ab7b2878d7f9bce290"
#define GameObjectEx_ClassNameShort "%f0894e03ed2cebc956fe47ab7b2878d7f9bce290"
#define GameObjectEx_TypeDefinitionIndex 1554

namespace GameObjectEx_Offsets {
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t ToBaseEntity = 0x1379750;
} // namespace GameObjectEx_Offsets

#define UIDeathScreen_TypeDefinitionIndex 8678

namespace UIDeathScreen_Offsets {

// Functions
constexpr const static size_t SetVisible = 0x6c03fe0;
} // namespace UIDeathScreen_Offsets

// obf name: ::%ed436f183254a710dcab0037188c0dc8b9cadead
#define BaseScreenShake_Static_ClassName                                       \
  "BaseScreenShake/%ed436f183254a710dcab0037188c0dc8b9cadead"
#define BaseScreenShake_Static_ClassNameShort                                  \
  "%ed436f183254a710dcab0037188c0dc8b9cadead"
#define BaseScreenShake_Static_TypeDefinitionIndex 3054

namespace BaseScreenShake_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10743960;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t list = 0x30;
} // namespace BaseScreenShake_Static_Offsets

#define FlashbangOverlay_TypeDefinitionIndex 427

namespace FlashbangOverlay_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1083b170;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t Instance = 0x8;
constexpr const static size_t flashLength = 0x50;
} // namespace FlashbangOverlay_Offsets

// obf name: ::%f28a0addcefeb760099cf5771e3bf7ccdff0b81a
#define StringPool_ClassName "%f28a0addcefeb760099cf5771e3bf7ccdff0b81a"
#define StringPool_ClassNameShort "%f28a0addcefeb760099cf5771e3bf7ccdff0b81a"
#define StringPool_TypeDefinitionIndex 1860

namespace StringPool_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t toNumber = 0x0;

// Functions
constexpr const static size_t Get = 0x939f90;
} // namespace StringPool_Offsets

// obf name: ::%46e66f5ee423b9dfe686e45c70c8fadac96f984f
#define Network_Networkable_ClassName                                          \
  "%46e66f5ee423b9dfe686e45c70c8fadac96f984f"
#define Network_Networkable_ClassNameShort                                     \
  "%46e66f5ee423b9dfe686e45c70c8fadac96f984f"
#define Network_Networkable_TypeDefinitionIndex 20

namespace Network_Networkable_Offsets {

// Offsets
constexpr const static size_t ID = 0x58;
} // namespace Network_Networkable_Offsets

// obf name: ::%78dce83765198ba62d4a07f40889b838ee627622
#define Network_Net_ClassName "%78dce83765198ba62d4a07f40889b838ee627622"
#define Network_Net_ClassNameShort "%78dce83765198ba62d4a07f40889b838ee627622"
#define Network_Net_TypeDefinitionIndex 471

namespace Network_Net_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t cl = 0x0;
} // namespace Network_Net_Offsets

// obf name: ::%2208d4bd62c75743ae7daeecb6decea8d802f801
#define Network_Client_ClassName "%2208d4bd62c75743ae7daeecb6decea8d802f801"
#define Network_Client_ClassNameShort                                          \
  "%2208d4bd62c75743ae7daeecb6decea8d802f801"
#define Network_Client_TypeDefinitionIndex 4

namespace Network_Client_Offsets {

// Offsets
constexpr const static size_t Connection = 0xf0;

// Offsets
constexpr const static size_t CreateNetworkable = 0x7c6c270;
constexpr const static size_t DestroyNetworkable = 0x7c6c070;
} // namespace Network_Client_Offsets

// obf name: ::%f1baa350f407b767ad89aa078ef419b25b38b499
#define Network_BaseNetwork_ClassName                                          \
  "%f1baa350f407b767ad89aa078ef419b25b38b499"
#define Network_BaseNetwork_ClassNameShort                                     \
  "%f1baa350f407b767ad89aa078ef419b25b38b499"
#define Network_BaseNetwork_TypeDefinitionIndex 40

namespace Network_BaseNetwork_Offsets {}

// obf name: ::%eee90144568892fb4c7bdc8a37814587fae91f41
#define Network_SendInfo_ClassName "%eee90144568892fb4c7bdc8a37814587fae91f41"
#define Network_SendInfo_ClassNameShort                                        \
  "%eee90144568892fb4c7bdc8a37814587fae91f41"
#define Network_SendInfo_TypeDefinitionIndex 72

namespace Network_SendInfo_Offsets {

// Offsets
constexpr const static size_t method = 0x0;
constexpr const static size_t channel = 0x4;
constexpr const static size_t priority = 0x8;
constexpr const static size_t connections = 0x10;
constexpr const static size_t connection = 0x18;
} // namespace Network_SendInfo_Offsets

// obf name: ::%044c0b18dac1689bc807f3a85a99b7cd53e543fa
#define Network_Message_ClassName "%044c0b18dac1689bc807f3a85a99b7cd53e543fa"
#define Network_Message_ClassNameShort                                         \
  "%044c0b18dac1689bc807f3a85a99b7cd53e543fa"
#define Network_Message_TypeDefinitionIndex 58

namespace Network_Message_Offsets {

// Offsets
constexpr const static size_t type = 0x18;
constexpr const static size_t read = 0x10;
} // namespace Network_Message_Offsets

// obf name: ::%cbbf872c5e53022fd3b88a149a7c150b1e9b5c0d
#define Network_NetRead_ClassName "%cbbf872c5e53022fd3b88a149a7c150b1e9b5c0d"
#define Network_NetRead_ClassNameShort                                         \
  "%cbbf872c5e53022fd3b88a149a7c150b1e9b5c0d"
#define Network_NetRead_TypeDefinitionIndex 92

namespace Network_NetRead_Offsets {

// Offsets
constexpr const static size_t stream = 0x40;
} // namespace Network_NetRead_Offsets

// obf name: ::%2f4eadf5cdd0c25997e670fdabc7466d697662fd
#define Network_NetWrite_ClassName "%2f4eadf5cdd0c25997e670fdabc7466d697662fd"
#define Network_NetWrite_ClassNameShort                                        \
  "%2f4eadf5cdd0c25997e670fdabc7466d697662fd"
#define Network_NetWrite_TypeDefinitionIndex 90

namespace Network_NetWrite_Offsets {

// Offsets
constexpr const static size_t stream = 0x28;

// Functions
constexpr const static size_t WriteByte = 0x7ccac00;
constexpr const static size_t String = 0x7cc9240;
constexpr const static size_t Send = 0x7cc9920;
} // namespace Network_NetWrite_Offsets

#define LootPanel_TypeDefinitionIndex 6440

namespace LootPanel_Offsets {

// Functions
constexpr const static size_t get_Container_00 = 0x5155060;
} // namespace LootPanel_Offsets

#define UIInventory_TypeDefinitionIndex 6422

namespace UIInventory_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10757af8;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t Close = 0x50f8ca0;
} // namespace UIInventory_Offsets

#define GrowableEntity_TypeDefinitionIndex 1419

namespace GrowableEntity_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1073ab48;

// Offsets
constexpr const static size_t Properties = 0x348;
constexpr const static size_t State = 0x358;
} // namespace GrowableEntity_Offsets

#define PlantProperties_TypeDefinitionIndex 4253

namespace PlantProperties_Offsets {

// Offsets
constexpr const static size_t stages = 0x28;
} // namespace PlantProperties_Offsets

#define PlantProperties_Stage_TypeDefinitionIndex 4255

namespace PlantProperties_Stage_Offsets {

// Offsets
constexpr const static size_t resources = 0xc;
} // namespace PlantProperties_Stage_Offsets

#define Text_TypeDefinitionIndex 117

namespace Text_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x108127b8;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t m_Text = 0xe8;
} // namespace Text_Offsets

#define TOD_Sky_TypeDefinitionIndex 1311

namespace TOD_Sky_Offsets {

// Offsets
constexpr const static size_t Cycle = 0x40;
constexpr const static size_t Atmosphere = 0x50;
constexpr const static size_t Day = 0x58;
constexpr const static size_t Night = 0x60;
constexpr const static size_t Stars = 0x78;
constexpr const static size_t Clouds = 0x80;
constexpr const static size_t Ambient = 0x98;

// Functions
constexpr const static size_t get_Instance = 0xd02f10;
} // namespace TOD_Sky_Offsets

// obf name: ::%f7539364d668da30770456a53f9b71775c88dd81
#define TOD_Sky_Static_ClassName                                               \
  "TOD_Sky/%f7539364d668da30770456a53f9b71775c88dd81"
#define TOD_Sky_Static_ClassNameShort                                          \
  "%f7539364d668da30770456a53f9b71775c88dd81"
#define TOD_Sky_Static_TypeDefinitionIndex 1313

namespace TOD_Sky_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10854760;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t instances = 0x28;
} // namespace TOD_Sky_Static_Offsets

#define TOD_CycleParameters_TypeDefinitionIndex 1895

namespace TOD_CycleParameters_Offsets {

// Functions
constexpr const static size_t get_DateTime = 0xdfbae0;
} // namespace TOD_CycleParameters_Offsets

#define TOD_AtmosphereParameters_TypeDefinitionIndex 959

namespace TOD_AtmosphereParameters_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1077fc48;

// Offsets
constexpr const static size_t RayleighMultiplier = 0x10;
} // namespace TOD_AtmosphereParameters_Offsets

#define TOD_DayParameters_TypeDefinitionIndex 537

namespace TOD_DayParameters_Offsets {

// Offsets
constexpr const static size_t SkyColor = 0x28;
} // namespace TOD_DayParameters_Offsets

#define TOD_NightParameters_TypeDefinitionIndex 33

namespace TOD_NightParameters_Offsets {

// Offsets
constexpr const static size_t MoonColor = 0x10;
constexpr const static size_t MoonColorRed = 0x18;
constexpr const static size_t LightColor = 0x20;
constexpr const static size_t RayColor = 0x28;
constexpr const static size_t SkyColor = 0x30;
constexpr const static size_t CloudColor = 0x38;
constexpr const static size_t FogColor = 0x40;
constexpr const static size_t AmbientColor = 0x48;
constexpr const static size_t runtimeLightIntensity = 0x54;
constexpr const static size_t ShadowStrength = 0x58;
constexpr const static size_t runtimeAmbientMultiplier = 0x60;
constexpr const static size_t runtimeReflectionMultiplier = 0x68;
constexpr const static size_t ReflectionMaxClamp = 0x6c;
constexpr const static size_t AmbientMultiplier = 0x5c;
} // namespace TOD_NightParameters_Offsets

#define TOD_StarParameters_TypeDefinitionIndex 83

namespace TOD_StarParameters_Offsets {

// Offsets
constexpr const static size_t Size = 0x10;
constexpr const static size_t Brightness = 0x14;
} // namespace TOD_StarParameters_Offsets

#define TOD_CloudParameters_TypeDefinitionIndex 1988

namespace TOD_CloudParameters_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1077fc78;

// Offsets
constexpr const static size_t Brightness = 0x30;
} // namespace TOD_CloudParameters_Offsets

#define TOD_AmbientParameters_TypeDefinitionIndex 295

namespace TOD_AmbientParameters_Offsets {

// Offsets
constexpr const static size_t Mode = 0x10;
constexpr const static size_t Saturation = 0x14;
constexpr const static size_t UpdateInterval = 0x18;
} // namespace TOD_AmbientParameters_Offsets

#define UIHUD_TypeDefinitionIndex 6381

namespace UIHUD_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107d7e98;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t Hunger = 0x28;
} // namespace UIHUD_Offsets

#define HudElement_TypeDefinitionIndex 8634

namespace HudElement_Offsets {

// Offsets
constexpr const static size_t lastValue = 0x30;
} // namespace HudElement_Offsets

#define UIBelt_TypeDefinitionIndex 4940

namespace UIBelt_Offsets {

// Offsets
constexpr const static size_t ItemIcons = 0x20;
} // namespace UIBelt_Offsets

#define ItemModCompostable_TypeDefinitionIndex 8557

namespace ItemModCompostable_Offsets {

// Offsets
constexpr const static size_t MaxBaitStack = 0x28;
} // namespace ItemModCompostable_Offsets

// obf name: ::ResourceRef`1
#define GameObjectRef_ClassName "ResourceRef<UnityEngine/GameObject>"
#define GameObjectRef_ClassNameShort "ResourceRef`1"
#define GameObjectRef_TypeDefinitionIndex 9103

namespace GameObjectRef_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10981968;

// Offsets
constexpr const static size_t guid = 0x10;
} // namespace GameObjectRef_Offsets

#define EnvironmentManager_TypeDefinitionIndex 1633

namespace EnvironmentManager_Offsets {

// Functions
}

// obf name: ::Phrase
#define Translate_Phrase_ClassName                                             \
  "%9f9dc8584a9a76d24d5cce42ad20be3012218f62/Phrase"
#define Translate_Phrase_ClassNameShort "Phrase"
#define Translate_Phrase_TypeDefinitionIndex 1

namespace Translate_Phrase_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107948c8;

// Offsets
constexpr const static size_t legacyEnglish = 0x20;
} // namespace Translate_Phrase_Offsets

#define ResourceDispenser_GatherPropertyEntry_TypeDefinitionIndex 933

namespace ResourceDispenser_GatherPropertyEntry_Offsets {

// Offsets
constexpr const static size_t gatherDamage = 0x10;
constexpr const static size_t destroyFraction = 0x14;
constexpr const static size_t conditionLost = 0x18;
} // namespace ResourceDispenser_GatherPropertyEntry_Offsets

#define ResourceDispenser_GatherProperties_TypeDefinitionIndex 934

namespace ResourceDispenser_GatherProperties_Offsets {

// Offsets
constexpr const static size_t Tree = 0x10;
constexpr const static size_t Ore = 0x18;
constexpr const static size_t Flesh = 0x20;
} // namespace ResourceDispenser_GatherProperties_Offsets

// obf name: ::UIChat
#define UIChat_ClassName "UIChat"
#define UIChat_ClassNameShort "UIChat"
#define UIChat_TypeDefinitionIndex 8611

namespace UIChat_Offsets {

// Offsets
constexpr const static size_t chatArea = 0x28;
} // namespace UIChat_Offsets

// obf name: ::ListComponent`1
#define ListComponent_ClassName "ListComponent<UIChat>"
#define ListComponent_ClassNameShort "ListComponent`1"
#define ListComponent_TypeDefinitionIndex 89

namespace ListComponent_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10851b90;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t instance = 0x8;
} // namespace ListComponent_Offsets

// obf name: ::ListComponent`1
#define ListComponent_Projectile_ClassName "ListComponent<Projectile>"
#define ListComponent_Projectile_ClassNameShort "ListComponent`1"
#define ListComponent_Projectile_TypeDefinitionIndex 89

namespace ListComponent_Projectile_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1084e110;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t instance = 0x8;
} // namespace ListComponent_Projectile_Offsets

// obf name: ::%d787cd18385efb17cabd6cd8464d837b70270868
#define ListHashSet_ClassName                                                  \
  "%d787cd18385efb17cabd6cd8464d837b70270868<UIChat>"
#define ListHashSet_ClassNameShort "%d787cd18385efb17cabd6cd8464d837b70270868"
#define ListHashSet_TypeDefinitionIndex 80

namespace ListHashSet_Offsets {

// Offsets
constexpr const static size_t vals = 0x10;
} // namespace ListHashSet_Offsets

// obf name: ::%d787cd18385efb17cabd6cd8464d837b70270868
#define ListHashSet_Projectile_ClassName                                       \
  "%d787cd18385efb17cabd6cd8464d837b70270868<Projectile>"
#define ListHashSet_Projectile_ClassNameShort                                  \
  "%d787cd18385efb17cabd6cd8464d837b70270868"
#define ListHashSet_Projectile_TypeDefinitionIndex 80

namespace ListHashSet_Projectile_Offsets {

// Offsets
constexpr const static size_t vals = 0x10;
} // namespace ListHashSet_Projectile_Offsets

#define PatrolHelicopter_TypeDefinitionIndex 4461

namespace PatrolHelicopter_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t mainRotor = 0x2e0;
constexpr const static size_t weakspots = 0x2d0;
} // namespace PatrolHelicopter_Offsets

#define Chainsaw_TypeDefinitionIndex 5531

namespace Chainsaw_Offsets {

// Offsets
constexpr const static size_t ammo = 0x454;
} // namespace Chainsaw_Offsets

// obf name: ::%24fedae3b6b35040350929398eb1b765b2311009
#define CameraUpdateHook_Static_ClassName                                      \
  "CameraUpdateHook/%24fedae3b6b35040350929398eb1b765b2311009"
#define CameraUpdateHook_Static_ClassNameShort                                 \
  "%24fedae3b6b35040350929398eb1b765b2311009"
#define CameraUpdateHook_Static_TypeDefinitionIndex 6601

namespace CameraUpdateHook_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107d43e0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t action = 0x20;
} // namespace CameraUpdateHook_Static_Offsets

#define SteamClientWrapper_TypeDefinitionIndex 5226

namespace SteamClientWrapper_Offsets {

// Functions
constexpr const static size_t GetAvatarTexture = 0x3f97a00;
} // namespace SteamClientWrapper_Offsets

// obf name: ::%d477f508f0b27e38a0d07d60d4dff2e60a63af98
#define AimConeUtil_ClassName "%d477f508f0b27e38a0d07d60d4dff2e60a63af98"
#define AimConeUtil_ClassNameShort "%d477f508f0b27e38a0d07d60d4dff2e60a63af98"
#define AimConeUtil_TypeDefinitionIndex 7849

namespace AimConeUtil_Offsets {
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t GetModifiedAimConeDirection = 0x62a94b0;
} // namespace AimConeUtil_Offsets

#define PlayerModel_TypeDefinitionIndex 1354

namespace PlayerModel_Offsets {

// Offsets
constexpr const static size_t _multiMesh = 0x380;
constexpr const static size_t position = 0x2f8;
constexpr const static size_t viewMatrix = 0x304;
} // namespace PlayerModel_Offsets

#define SkinnedMultiMesh_TypeDefinitionIndex 5294

namespace SkinnedMultiMesh_Offsets {

// Offsets
constexpr const static size_t Renderers = 0x40;
} // namespace SkinnedMultiMesh_Offsets

#define BaseMountable_TypeDefinitionIndex 8544

namespace BaseMountable_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107d82e8;

// Offsets
constexpr const static size_t pitchClamp = 0x2fc;
constexpr const static size_t yawClamp = 0x304;
constexpr const static size_t canWieldItems = 0x30c;
} // namespace BaseMountable_Offsets

#define ProgressBar_TypeDefinitionIndex 5509

namespace ProgressBar_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107e4ba0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t timeFinished = 0x28;
constexpr const static size_t scaleTarget = 0x30;
constexpr const static size_t progressField = 0x38;
constexpr const static size_t iconField = 0x40;
constexpr const static size_t leftField = 0x48;
constexpr const static size_t rightField = 0x50;
constexpr const static size_t clipOpen = 0x58;
constexpr const static size_t clipCancel = 0x60;
constexpr const static size_t canvas = 0x70;
constexpr const static size_t canvasGroup = 0x78;
constexpr const static size_t timeCounter = 0x2c;
constexpr const static size_t Instance = 0x8;

// Functions
constexpr const static size_t Update = 0x43198b0;
constexpr const static size_t Start = 0x4318b00;
constexpr const static size_t Close = 0x0;
constexpr const static size_t UpdateProgressBar = 0x0;
constexpr const static size_t SetPercent = 0x0;
constexpr const static size_t PlayOpenSound = 0x0;
constexpr const static size_t PlayCancelSound = 0x0;
} // namespace ProgressBar_Offsets

#define BowWeapon_TypeDefinitionIndex 5764

namespace BowWeapon_Offsets {

// Offsets
constexpr const static size_t attackReady = 0x4b8;
constexpr const static size_t wasAiming = 0x4c8;
} // namespace BowWeapon_Offsets

#define CrossbowWeapon_TypeDefinitionIndex 2257

namespace CrossbowWeapon_Offsets {

// Offsets
}

#define MiniCrossbow_TypeDefinitionIndex 6137

namespace MiniCrossbow_Offsets {

// Offsets
}

// obf name: ::%6408b2f5eb49a87ade87c96dbc03a0cebbb2b530
#define ConVar_Player_Static_ClassName                                         \
  "%6425923dd4cef024117ff9813c6c1f86a0842865/"                                 \
  "%6408b2f5eb49a87ade87c96dbc03a0cebbb2b530"
#define ConVar_Player_Static_ClassNameShort                                    \
  "%6408b2f5eb49a87ade87c96dbc03a0cebbb2b530"
#define ConVar_Player_Static_TypeDefinitionIndex 5785

namespace ConVar_Player_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107b1308;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t clientTickInterval = 0x0;

// Functions
constexpr const static size_t clientTickRate_getter = 0x46d38c0;
constexpr const static size_t clientTickRate_setter = 0x46d9480;
} // namespace ConVar_Player_Static_Offsets

#define ColliderInfo_TypeDefinitionIndex 1137

namespace ColliderInfo_Offsets {

// Offsets
constexpr const static size_t flags = 0x20;
} // namespace ColliderInfo_Offsets

#define CodeLock_TypeDefinitionIndex 936

namespace CodeLock_Offsets {

// Offsets
constexpr const static size_t hasCode = 0x270;
constexpr const static size_t HasAuth = 0x280;
constexpr const static size_t HasGuestAuth = 0x281;
} // namespace CodeLock_Offsets

#define AutoTurret_TypeDefinitionIndex 9142

namespace AutoTurret_Offsets {

// Offsets
constexpr const static size_t authorizedPlayers = 0x3c8;
constexpr const static size_t lastYaw = 0x440;
constexpr const static size_t muzzlePos = 0x4b0;
constexpr const static size_t gun_yaw = 0x4c8;
constexpr const static size_t gun_pitch = 0x4d0;
constexpr const static size_t sightRange = 0x4d8;
} // namespace AutoTurret_Offsets

#define Client_TypeDefinitionIndex 5376

namespace Client_Offsets {

// Functions
constexpr const static size_t OnClientDisconnected = 0x0;
constexpr const static size_t OnClientDisconnected_vtableoff = 0x0;
} // namespace Client_Offsets

// obf name: ::%01274533ae334d6d362002398c347d4f832650a4
#define ItemManager_Static_ClassName                                           \
  "%e734f17a4c93e4a9ad5e9dac69e8a0c4c4e4efd5/"                                 \
  "%01274533ae334d6d362002398c347d4f832650a4"
#define ItemManager_Static_ClassNameShort                                      \
  "%01274533ae334d6d362002398c347d4f832650a4"
#define ItemManager_Static_TypeDefinitionIndex 4081

namespace ItemManager_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1072ec00;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t itemList = 0x18;
constexpr const static size_t itemDictionary = 0x30;
constexpr const static size_t itemDictionaryByName = 0x10;
} // namespace ItemManager_Static_Offsets

// obf name: ::%34f2ed65182f3e7777d227c081e10769438557fe
#define ConVar_Server_Static_ClassName                                         \
  "%a95e26f9490b7d9bda94a1a248838b40f68a5e85/"                                 \
  "%34f2ed65182f3e7777d227c081e10769438557fe"
#define ConVar_Server_Static_ClassNameShort                                    \
  "%34f2ed65182f3e7777d227c081e10769438557fe"
#define ConVar_Server_Static_TypeDefinitionIndex 2501

namespace ConVar_Server_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1073a9a8;
constexpr auto static_fields = 0xb8;

// Offsets
} // namespace ConVar_Server_Static_Offsets

#define UI_LoadingScreen_TypeDefinitionIndex 7583

namespace UI_LoadingScreen_Offsets {

// Offsets
constexpr const static size_t panel = 0x30;
} // namespace UI_LoadingScreen_Offsets

#define MixerSnapshotManager_TypeDefinitionIndex 5966

namespace MixerSnapshotManager_Offsets {

// Offsets
constexpr const static size_t defaultSnapshot = 0x20;
constexpr const static size_t loadingSnapshot = 0x30;
} // namespace MixerSnapshotManager_Offsets

#define MapView_Static_ClassName                                               \
  "MapView/%a6eb038fa2614b1051e30b327bda2c7c81641d12"
#define MapView_Static_ClassNameShort                                          \
  "%a6eb038fa2614b1051e30b327bda2c7c81641d12"
#define MapView_TypeDefinitionIndex 8693

namespace MapView_Offsets {

// Functions
constexpr const static size_t WorldPosToImagePos = 0x0;
} // namespace MapView_Offsets

// obf name: ::%ce19a84fb0ec01ceda0d2e2a92f4aeb574331545
#define GamePhysics_Static_ClassName                                           \
  "%c66067246a7eedd55dd9f8acb6316b89e8244477/"                                 \
  "%ce19a84fb0ec01ceda0d2e2a92f4aeb574331545"
#define GamePhysics_Static_ClassNameShort                                      \
  "%ce19a84fb0ec01ceda0d2e2a92f4aeb574331545"
#define GamePhysics_Static_TypeDefinitionIndex 7305

namespace GamePhysics_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107d5260;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t hitBuffer = 0x0;
} // namespace GamePhysics_Static_Offsets

// obf name: ::%c66067246a7eedd55dd9f8acb6316b89e8244477
#define GamePhysics_ClassName "%c66067246a7eedd55dd9f8acb6316b89e8244477"
#define GamePhysics_ClassNameShort "%c66067246a7eedd55dd9f8acb6316b89e8244477"
#define GamePhysics_TypeDefinitionIndex 7301

namespace GamePhysics_Offsets {
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t Trace = 0x5c24d00;
constexpr const static size_t LineOfSightInternal = 0x5c1cd80;
constexpr const static size_t Verify = 0x5c1d730;
} // namespace GamePhysics_Offsets

#define InstancedDebugDraw_TypeDefinitionIndex 6719

namespace InstancedDebugDraw_Offsets {

// Functions
constexpr const static size_t AddInstance = 0x54e4830;
} // namespace InstancedDebugDraw_Offsets

#define ThrownWeapon_TypeDefinitionIndex 6619

namespace ThrownWeapon_Offsets {

// Offsets
constexpr const static size_t maxThrowVelocity = 0x388;
} // namespace ThrownWeapon_Offsets

#define MapInterface_TypeDefinitionIndex 7219

namespace MapInterface_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10757b38;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t scrollRectZoom = 0x30;
} // namespace MapInterface_Offsets

#define ScrollRectZoom_TypeDefinitionIndex 5932

namespace ScrollRectZoom_Offsets {

// Offsets
constexpr const static size_t zoom = 0x28;
} // namespace ScrollRectZoom_Offsets

#define MapView_TypeDefinitionIndex 8693

namespace MapView_Offsets {

// Offsets
constexpr const static size_t scrollRect = 0x40;
} // namespace MapView_Offsets

#define StorageContainer_TypeDefinitionIndex 6204

namespace StorageContainer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10794620;

// Offsets
constexpr const static size_t inventorySlots = 0x320;
} // namespace StorageContainer_Offsets

#define PlayerCorpse_TypeDefinitionIndex 3308

namespace PlayerCorpse_Offsets {

// Offsets
constexpr const static size_t clientClothing = 0x350;
} // namespace PlayerCorpse_Offsets

#define TimedExplosive_TypeDefinitionIndex 8520

namespace TimedExplosive_Offsets {

// Offsets
constexpr const static size_t explosionRadius = 0x20c;
} // namespace TimedExplosive_Offsets

#define SmokeGrenade_TypeDefinitionIndex 4538

namespace SmokeGrenade_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107456e0;

// Offsets
constexpr const static size_t smokeEffectInstance = 0x2b0;
} // namespace SmokeGrenade_Offsets

#define GrenadeWeapon_TypeDefinitionIndex 6131

namespace GrenadeWeapon_Offsets {

// Offsets
constexpr const static size_t drop = 0x3ac;
} // namespace GrenadeWeapon_Offsets

#define ViewmodelLower_TypeDefinitionIndex 7580

namespace ViewmodelLower_Offsets {

// Offsets
constexpr const static size_t lowerOnSprint = 0x20;
constexpr const static size_t lowerWhenCantAttack = 0x21;
constexpr const static size_t shouldLower = 0x28;
constexpr const static size_t rotateAngle = 0x2c;
} // namespace ViewmodelLower_Offsets

#define SamSite_TypeDefinitionIndex 3392

namespace SamSite_Offsets {

// Offsets
constexpr const static size_t staticRespawn = 0x420;
constexpr const static size_t Flag_TargetMode = 0x45c;
} // namespace SamSite_Offsets

#define ServerProjectile_TypeDefinitionIndex 8255

namespace ServerProjectile_Offsets {

// Offsets
constexpr const static size_t drag = 0x34;
constexpr const static size_t gravityModifier = 0x38;
constexpr const static size_t speed = 0x3c;
constexpr const static size_t radius = 0x5c;
} // namespace ServerProjectile_Offsets

#define UIFogOverlay_TypeDefinitionIndex 6893

namespace UIFogOverlay_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10753160;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t group = 0x20;
constexpr const static size_t Instance = 0x8;
} // namespace UIFogOverlay_Offsets

#define FoliageGrid_TypeDefinitionIndex 7775

namespace FoliageGrid_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10824d80;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t CellSize = 0x28;
} // namespace FoliageGrid_Offsets

#define ItemModWearable_TypeDefinitionIndex 5834

namespace ItemModWearable_Offsets {

// Offsets
constexpr const static size_t movementProperties = 0x50;
} // namespace ItemModWearable_Offsets

#define ClothingMovementProperties_TypeDefinitionIndex 6166

namespace ClothingMovementProperties_Offsets {

// Offsets
constexpr const static size_t speedReduction = 0x18;
} // namespace ClothingMovementProperties_Offsets

#define GestureConfig_TypeDefinitionIndex 956

namespace GestureConfig_Offsets {

// Offsets
constexpr const static size_t actionType = 0x90;
} // namespace GestureConfig_Offsets

#define RCMenu_TypeDefinitionIndex 2334

namespace RCMenu_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10769528;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t autoTurretFogDistance = 0x13c;
} // namespace RCMenu_Offsets

// obf name: ::%afe052c397347c3cfcd6bd487422e505b989b591
#define Facepunch_Network_Raknet_Client_ClassName                              \
  "%afe052c397347c3cfcd6bd487422e505b989b591"
#define Facepunch_Network_Raknet_Client_ClassNameShort                         \
  "%afe052c397347c3cfcd6bd487422e505b989b591"
#define Facepunch_Network_Raknet_Client_TypeDefinitionIndex 4

namespace Facepunch_Network_Raknet_Client_Offsets {

// Functions
constexpr const static size_t IsConnected = 0x939f90;
constexpr const static size_t IsConnected_vtableoff = 0x368;
} // namespace Facepunch_Network_Raknet_Client_Offsets

// obf name: ::%7af1de97b944386e9fb311e3abf58355dcf6eb58
#define EncryptedValue_ClassName                                               \
  "%7af1de97b944386e9fb311e3abf58355dcf6eb58<System/UInt64>"
#define EncryptedValue_ClassNameShort                                          \
  "%7af1de97b944386e9fb311e3abf58355dcf6eb58"
#define EncryptedValue_TypeDefinitionIndex 5825

namespace EncryptedValue_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x109f0b48;

// Offsets
constexpr const static size_t _value = 0x0;
constexpr const static size_t _padding = 0x18;
} // namespace EncryptedValue_Offsets

// obf name: ::%89872157edd26718aebe4d6c16f5920c513b79b0
#define HiddenValue_ClassName                                                  \
  "%89872157edd26718aebe4d6c16f5920c513b79b0<BaseNetworkable/"                 \
  "%f5b63ff3731166fb226e95fff5d5d840b82c4204>"
#define HiddenValue_ClassNameShort "%89872157edd26718aebe4d6c16f5920c513b79b0"
#define HiddenValue_TypeDefinitionIndex 9575

namespace HiddenValue_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x109e8b08;

// Offsets
constexpr const static size_t _handle = 0x18;
constexpr const static size_t _accessCount = 0x20;
constexpr const static size_t _hasValue = 0x10;
} // namespace HiddenValue_Offsets

#define ItemModRFListener_TypeDefinitionIndex 2038

namespace ItemModRFListener_Offsets {

// Functions
constexpr const static size_t ConfigureClicked = 0x0;
} // namespace ItemModRFListener_Offsets

// obf name: ::%ba239cb69383c232e1c49be6c9462607bab81716
#define BufferStream_ClassName "%ba239cb69383c232e1c49be6c9462607bab81716"
#define BufferStream_ClassNameShort "%ba239cb69383c232e1c49be6c9462607bab81716"
#define BufferStream_TypeDefinitionIndex 372

namespace BufferStream_Offsets {

// Offsets
constexpr const static size_t _buffer = 0x10;

// Functions
constexpr const static size_t EnsureCapacity = 0xbd07620;
} // namespace BufferStream_Offsets

#define FreeableLootContainer_TypeDefinitionIndex 8308

namespace FreeableLootContainer_Offsets {

// Offsets
}

#define BlowPipeWeapon_TypeDefinitionIndex 351

namespace BlowPipeWeapon_Offsets {

// Offsets
}

#define AttackHelicopterRockets_TypeDefinitionIndex 8594

namespace AttackHelicopterRockets_Offsets {

// Functions
constexpr const static size_t GetProjectedHitPos = 0x6aab020;
} // namespace AttackHelicopterRockets_Offsets

#define OutlineManager_TypeDefinitionIndex 2122

namespace OutlineManager_Offsets {

// Offsets
}

// obf name: ::%f78c71cabbfc06d3d2ee004be930b014c435f21c
#define ConsoleSystem_Command_ClassName                                        \
  "%11936a7fb8ebec67b5cb51e4eff2f462b14ab106/"                                 \
  "%f78c71cabbfc06d3d2ee004be930b014c435f21c"
#define ConsoleSystem_Command_ClassNameShort                                   \
  "%f78c71cabbfc06d3d2ee004be930b014c435f21c"
#define ConsoleSystem_Command_TypeDefinitionIndex 27

namespace ConsoleSystem_Command_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1077af98;

// Offsets
constexpr const static size_t GetOveride = 0x80;
constexpr const static size_t SetOveride = 0x30;
constexpr const static size_t Call = 0x48;
} // namespace ConsoleSystem_Command_Offsets

// obf name: ::%0380590fdec7b03d01dc823d01ead27819c66551
#define ConsoleSystem_Arg_ClassName                                            \
  "%11936a7fb8ebec67b5cb51e4eff2f462b14ab106/"                                 \
  "%0380590fdec7b03d01dc823d01ead27819c66551"
#define ConsoleSystem_Arg_ClassNameShort                                       \
  "%0380590fdec7b03d01dc823d01ead27819c66551"
#define ConsoleSystem_Arg_TypeDefinitionIndex 23

namespace ConsoleSystem_Arg_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x107a6780;

// Offsets
constexpr const static size_t Option = 0x0;
} // namespace ConsoleSystem_Arg_Offsets

// obf name: ::%3cb160426307979028207404eb0edcd1a2d006bc
#define ConsoleSystem_Index_Client_ClassName                                   \
  "%11936a7fb8ebec67b5cb51e4eff2f462b14ab106/"                                 \
  "%a3230f3c22826c3b7c3cbf57cc5adffb10441c96.%"                                \
  "3cb160426307979028207404eb0edcd1a2d006bc"
#define ConsoleSystem_Index_Client_ClassNameShort                              \
  "%3cb160426307979028207404eb0edcd1a2d006bc"
#define ConsoleSystem_Index_Client_TypeDefinitionIndex 31

namespace ConsoleSystem_Index_Client_Offsets {

// Functions
constexpr const static size_t Find = 0x7bfc700;
} // namespace ConsoleSystem_Index_Client_Offsets

#define String_TypeDefinitionIndex 142

namespace String_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c71730;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t FastAllocateString = 0xa6b30b0;
} // namespace String_Offsets

// obf name: ::%461d63e35830ece74e799d1f9c6bf82910f1c4d8
#define EntityRef_ClassName "%461d63e35830ece74e799d1f9c6bf82910f1c4d8"
#define EntityRef_ClassNameShort "%461d63e35830ece74e799d1f9c6bf82910f1c4d8"
#define EntityRef_TypeDefinitionIndex 1467

namespace EntityRef_Offsets {

// Offsets
constexpr const static size_t Get = 0x124fa60;
} // namespace EntityRef_Offsets

// obf name: ConVar::Debugging
#define ConVar_Debugging_ClassName "ConVar/Debugging"
#define ConVar_Debugging_ClassNameShort "Debugging"
#define ConVar_Debugging_TypeDefinitionIndex 1923

namespace ConVar_Debugging_Offsets {

// Functions
}

#define CursorManager_TypeDefinitionIndex 2729

namespace CursorManager_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10813dc0;
constexpr auto static_fields = 0xb8;

// Offsets
} // namespace CursorManager_Offsets
