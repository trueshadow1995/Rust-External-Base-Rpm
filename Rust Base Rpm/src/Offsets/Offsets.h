// Dump generated on: 2026-09-27 21:19:42 MDT (UTC-6)
// Rust buildid: 25567513
#pragma once
#include <cstdint>
namespace GameAssembly {
constexpr const static size_t timestamp                         = 0x6ab9a172;
constexpr const static size_t il2cpp_resolve_icall              = 0x867740;
constexpr const static size_t il2cpp_array_new                  = 0x867760;
constexpr const static size_t il2cpp_assembly_get_image         = 0x3a60;
constexpr const static size_t il2cpp_class_from_name            = 0x851950;
constexpr const static size_t il2cpp_class_get_method_from_name = 0x867b60;
constexpr const static size_t il2cpp_class_get_type             = 0x74ee60;
constexpr const static size_t il2cpp_domain_get                 = 0x868480;
constexpr const static size_t il2cpp_domain_get_assemblies      = 0x8684a0;
constexpr const static size_t il2cpp_gchandle_get_target        = 0x868bb0;
constexpr const static size_t il2cpp_gchandle_new               = 0x868b60;
constexpr const static size_t il2cpp_gchandle_free              = 0x868c50;
constexpr const static size_t il2cpp_method_get_name            = 0xc8d0;
constexpr const static size_t il2cpp_object_new                 = 0x8694f0;
constexpr const static size_t il2cpp_type_get_object            = 0x86a5d0;
}  // namespace GameAssembly

#define Object_TypeDefinitionIndex 464

namespace Object_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c89068;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t m_CachedPtr = 0x10;

// Functions
constexpr const static size_t GetInstanceID            = 0xdfbbeb0;
constexpr const static size_t Destroy                  = 0xdfbced0;
constexpr const static size_t DestroyImmediate         = 0xdfbd000;
constexpr const static size_t DontDestroyOnLoad        = 0xdfbd200;
constexpr const static size_t FindObjectFromInstanceID = 0xdfbe8a0;
constexpr const static size_t GetName                  = 0xc8040;
constexpr const static size_t get_hideFlags            = 0xdfbd2f0;
constexpr const static size_t set_hideFlags            = 0xdfbd3b0;
}  // namespace Object_Offsets

#define GameObject_TypeDefinitionIndex 431

namespace GameObject_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c8efd8;

// Functions
constexpr const static size_t SetActive                     = 0xdfb4430;
constexpr const static size_t Internal_AddComponentWithType = 0xdfb3e90;
constexpr const static size_t GetComponent                  = 0xdfb34c0;
constexpr const static size_t GetComponentCount             = 0xdfb3f70;
constexpr const static size_t GetComponentInChildren        = 0xdfb3650;
constexpr const static size_t GetComponentInParent          = 0xdfb3740;
constexpr const static size_t GetComponentsInternal         = 0xdfb3830;
constexpr const static size_t Internal_CreateGameObject     = 0xdfb5670;
constexpr const static size_t get_layer                     = 0xdfb4190;
constexpr const static size_t get_tag                       = 0xdfb48c0;
constexpr const static size_t get_transform                 = 0xdfb4010;
}  // namespace GameObject_Offsets

#define Component_TypeDefinitionIndex 417

namespace Component_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c4be50;

// Functions
constexpr const static size_t get_gameObject = 0xdfaf0d0;
constexpr const static size_t get_transform  = 0xdfaf010;
}  // namespace Component_Offsets

#define Behaviour_TypeDefinitionIndex 412

namespace Behaviour_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10cbf680;

// Functions
constexpr const static size_t get_enabled = 0xbfa310;
constexpr const static size_t set_enabled = 0xdfae3f0;
}  // namespace Behaviour_Offsets

#define Transform_TypeDefinitionIndex 506

namespace Transform_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10caeb00;

// Functions
constexpr const static size_t get_eulerAngles                      = 0xdfccc40;
constexpr const static size_t GetChild                             = 0xdfd1aa0;
constexpr const static size_t GetParent                            = 0xdfce270;
constexpr const static size_t GetRoot                              = 0xdfd0cc0;
constexpr const static size_t InverseTransformDirection_Injected   = 0xd0570;
constexpr const static size_t InverseTransformPoint_Injected       = 0xd08d0;
constexpr const static size_t InverseTransformVector_Injected      = 0xd0730;
constexpr const static size_t GetPositionAndRotation               = 0xdfce720;
constexpr const static size_t SetLocalPositionAndRotation_Injected = 0xd03a0;
constexpr const static size_t SetPositionAndRotation_Injected      = 0xd0360;
constexpr const static size_t TransformDirection_Injected          = 0xd04a0;
constexpr const static size_t TransformPoint_Injected              = 0xd0800;
constexpr const static size_t TransformVector_Injected             = 0xd0660;
constexpr const static size_t get_childCount                       = 0xdfd0d80;
constexpr const static size_t get_forward_Injected                 = 0xdfcd8a0;
constexpr const static size_t get_right_Injected                   = 0xdfcd080;
constexpr const static size_t get_up_Injected                      = 0xdfcd490;
constexpr const static size_t get_localPosition_Injected           = 0xcfe50;
constexpr const static size_t get_localRotation_Injected           = 0xcff90;
constexpr const static size_t get_localScale_Injected              = 0xd0070;
constexpr const static size_t get_lossyScale_Injected              = 0xd0f50;
constexpr const static size_t get_position_Injected                = 0xcfde0;
constexpr const static size_t get_rotation_Injected                = 0xcff00;
constexpr const static size_t set_localPosition_Injected           = 0xcfe80;
constexpr const static size_t set_localRotation_Injected           = 0xd0030;
constexpr const static size_t set_localScale_Injected              = 0xd00a0;
constexpr const static size_t set_position_Injected                = 0xcfe10;
constexpr const static size_t set_rotation_Injected                = 0xcff50;
}  // namespace Transform_Offsets

#define Camera_TypeDefinitionIndex 168

namespace Camera_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10cba118;
constexpr auto                  static_fields = 0xb8;

// Functions
constexpr const static size_t get_main                      = 0xdf2d880;
constexpr const static size_t WorldToScreenPoint_Injected   = 0x7a350;
constexpr const static size_t ScreenToWorldPoint_Injected   = 0x7a600;
constexpr const static size_t GetAllCamerasCount            = 0xdf2e330;
constexpr const static size_t CopyFrom                      = 0xdf2eb70;
constexpr const static size_t get_fieldOfView               = 0xdf27e20;
constexpr const static size_t set_fieldOfView               = 0xdf27ec0;
constexpr const static size_t get_nearClipPlane             = 0xdf27b80;
constexpr const static size_t set_nearClipPlane             = 0xdf27c20;
constexpr const static size_t get_farClipPlane              = 0xdf27cd0;
constexpr const static size_t set_farClipPlane              = 0xdf27d70;
constexpr const static size_t get_depth                     = 0xdf28960;
constexpr const static size_t set_depth                     = 0xdf28a00;
constexpr const static size_t get_projectionMatrix_Injected = 0x7a1a0;
constexpr const static size_t set_projectionMatrix_Injected = 0x7a1e0;
constexpr const static size_t set_cullingMask               = 0xdf28e00;
constexpr const static size_t set_clearFlags                = 0xdf29c70;
constexpr const static size_t set_backgroundColor_Injected  = 0x78b50;
constexpr const static size_t set_targetTexture             = 0xdf2ba20;
constexpr const static size_t Render                        = 0xdf2e750;
constexpr const static size_t RenderWithShader              = 0xdf2e7f0;
}  // namespace Camera_Offsets

#define Time_TypeDefinitionIndex 490

namespace Time_Offsets {

// Functions
constexpr const static size_t get_deltaTime            = 0xdecac00;
constexpr const static size_t get_fixedDeltaTime       = 0xdfc68f0;
constexpr const static size_t get_fixedTime            = 0x76775a0;
constexpr const static size_t get_frameCount           = 0xdfc6b60;
constexpr const static size_t get_realtimeSinceStartup = 0xdfc6c00;
constexpr const static size_t get_smoothDeltaTime      = 0x7677000;
constexpr const static size_t get_time                 = 0x7674d50;
}  // namespace Time_Offsets

#define Material_TypeDefinitionIndex 242

namespace Material_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c89060;
constexpr auto                  static_fields = 0xb8;

// Functions
constexpr const static size_t SetFloatImpl          = 0xdf64500;
constexpr const static size_t SetColorImpl_Injected = 0x9e2a0;
constexpr const static size_t SetTextureImpl        = 0xdf647a0;
constexpr const static size_t CreateWithMaterial    = 0xdf60c30;
constexpr const static size_t CreateWithShader      = 0xdf60b30;
constexpr const static size_t SetBufferImpl         = 0xdf648c0;
constexpr const static size_t set_shader            = 0xdf61100;
constexpr const static size_t get_shader            = 0xdf61020;
}  // namespace Material_Offsets

#define MaterialPropertyBlock_TypeDefinitionIndex 237

namespace MaterialPropertyBlock_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10be9dc8;

// Functions
constexpr const static size_t ctor           = 0xdf56160;
constexpr const static size_t SetFloatImpl   = 0xdf547d0;
constexpr const static size_t SetTextureImpl = 0xdf552a0;
}  // namespace MaterialPropertyBlock_Offsets

#define Shader_TypeDefinitionIndex 241

namespace Shader_Offsets {

// Functions
constexpr const static size_t Find             = 0xdf5d3b0;
constexpr const static size_t PropertyToID     = 0xdf5e1f0;
constexpr const static size_t GetPropertyCount = 0xdf5fc20;
constexpr const static size_t GetPropertyName  = 0xdf5f6b0;
constexpr const static size_t GetPropertyType  = 0xdf5f810;
}  // namespace Shader_Offsets

#define Mesh_TypeDefinitionIndex 301

namespace Mesh_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c8f510;

// Functions
constexpr const static size_t Internal_Create              = 0xdf70a20;
constexpr const static size_t MarkDynamicImpl              = 0xdf740f0;
constexpr const static size_t ClearImpl                    = 0xdf73e30;
constexpr const static size_t set_subMeshCount             = 0xdf73930;
constexpr const static size_t SetVertexBufferParamsFromPtr = 0xa4aa0;
constexpr const static size_t InternalSetVertexBufferData  = 0xa4b50;
constexpr const static size_t UploadMeshDataImpl           = 0xdf74230;
}  // namespace Mesh_Offsets

#define Renderer_TypeDefinitionIndex 239

namespace Renderer_Offsets {

// Functions
constexpr const static size_t get_enabled      = 0xdf588c0;
constexpr const static size_t get_isVisible    = 0xdf58a10;
constexpr const static size_t GetMaterial      = 0xdf57e20;
constexpr const static size_t GetMaterialArray = 0xdf58080;
}  // namespace Renderer_Offsets

#define Texture_TypeDefinitionIndex 306

namespace Texture_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c0bfb8;
constexpr auto                  static_fields = 0xb8;

// Functions
constexpr const static size_t set_filterMode      = 0xdf81450;
constexpr const static size_t GetNativeTexturePtr = 0xdf81910;
}  // namespace Texture_Offsets

#define Texture2D_TypeDefinitionIndex 307

namespace Texture2D_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c89018;

// Functions
constexpr const static size_t ctor                 = 0xdf85b00;
constexpr const static size_t Internal_CreateImpl  = 0xac3a0;
constexpr const static size_t GetWritableImageData = 0xdf848c0;
constexpr const static size_t ApplyImpl            = 0xdf83e30;
}  // namespace Texture2D_Offsets

#define Sprite_TypeDefinitionIndex 144

namespace Sprite_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10bd5d90;

// Functions
constexpr const static size_t get_texture = 0xdf1fba0;
}  // namespace Sprite_Offsets

#define RenderTexture_TypeDefinitionIndex 313

namespace RenderTexture_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10be6d00;

// Functions
constexpr const static size_t GetTemporary     = 0xdf91da0;
constexpr const static size_t ReleaseTemporary = 0xdf8f740;
}  // namespace RenderTexture_Offsets

#define CommandBuffer_TypeDefinitionIndex 896

namespace CommandBuffer_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c8a700;
constexpr auto                  static_fields = 0xb8;

// Functions
constexpr const static size_t ctor                                    = 0xdfff160;
constexpr const static size_t Clear                                   = 0xdff31a0;
constexpr const static size_t SetRenderTargetSingle_Internal_Injected = 0xefcc0;
constexpr const static size_t ClearRenderTarget_Injected              = 0xdff6ff0;
constexpr const static size_t SetViewport_Injected                    = 0xe95e0;
constexpr const static size_t SetViewProjectionMatrices_Injected      = 0xee8b0;
constexpr const static size_t EnableScissorRect_Injected              = 0xe96a0;
constexpr const static size_t DisableScissorRect                      = 0xdff4ab0;
constexpr const static size_t Internal_DrawProceduralIndexedIndirect_Injected =
    0xe9100;
constexpr const static size_t Internal_DrawMesh_Injected = 0xe8130;
constexpr const static size_t Internal_DrawRenderer      = 0xdff35a0;
}  // namespace CommandBuffer_Offsets

#define RenderTargetIdentifier_TypeDefinitionIndex 856

namespace RenderTargetIdentifier_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10ba8570;
constexpr auto                  static_fields = 0xb8;

// Functions
constexpr const static size_t ctor = 0xdfea020;
}  // namespace RenderTargetIdentifier_Offsets

#define ComputeBuffer_TypeDefinitionIndex 480

namespace ComputeBuffer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10cba688;

// Functions
constexpr const static size_t ctor                  = 0xdfc0b20;
constexpr const static size_t get_count             = 0xdfc0e40;
constexpr const static size_t Release               = 0xdfc0d60;
constexpr const static size_t InternalSetNativeData = 0xdfc1410;
}  // namespace ComputeBuffer_Offsets

#define GraphicsBuffer_TypeDefinitionIndex 244

namespace GraphicsBuffer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10ba8750;

// Functions
constexpr const static size_t ctor                  = 0xdf68610;
constexpr const static size_t get_count             = 0xdf68b80;
constexpr const static size_t Dispose               = 0xdf68310;
constexpr const static size_t InternalSetNativeData = 0xdf69150;
}  // namespace GraphicsBuffer_Offsets

#define Event_TypeDefinitionIndex 1

namespace Event_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bfaf40;
constexpr auto                  static_fields = 0xb8;

// Functions
constexpr const static size_t get_current  = 0xe037080;
constexpr const static size_t get_type     = 0xe0360f0;
constexpr const static size_t PopEvent     = 0xe036640;
constexpr const static size_t Internal_Use = 0xe036430;
}  // namespace Event_Offsets

#define Graphics_TypeDefinitionIndex 217

namespace Graphics_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c89078;
constexpr auto                  static_fields = 0xb8;

// Functions
constexpr const static size_t Internal_BlitMaterial5 = 0xdf46dc0;
constexpr const static size_t ExecuteCommandBuffer   = 0xdf47360;
}  // namespace Graphics_Offsets

#define Matrix4x4_TypeDefinitionIndex 339

namespace Matrix4x4_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bcf1e0;
constexpr auto                  static_fields = 0xb8;

// Functions
constexpr const static size_t Ortho_Injected = 0xb5fa0;
}  // namespace Matrix4x4_Offsets

#define AssetBundle_TypeDefinitionIndex 1

namespace AssetBundle_Offsets {

// Functions
constexpr const static size_t LoadFromFile_Internal = 0xdf080a0;
constexpr const static size_t LoadAsset_Internal    = 0xdf08540;
constexpr const static size_t Unload                = 0xdf08c10;
}  // namespace AssetBundle_Offsets

#define Screen_TypeDefinitionIndex 214

namespace Screen_Offsets {

// Functions
constexpr const static size_t get_width  = 0x77592b0;
constexpr const static size_t get_height = 0x7758dc0;
}  // namespace Screen_Offsets

#define Input_TypeDefinitionIndex 9

namespace Input_Offsets {
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t get_mousePosition_Injected    = 0x1ac900;
constexpr const static size_t get_mouseScrollDelta_Injected = 0x1acad0;
constexpr const static size_t GetMouseButtonDown            = 0xe07b7c0;
constexpr const static size_t GetMouseButtonUp              = 0xe07b810;
constexpr const static size_t GetMouseButton                = 0xe07b770;
constexpr const static size_t GetKeyDownInt                 = 0xe07b720;
constexpr const static size_t GetKeyUpInt                   = 0x0;
constexpr const static size_t GetKeyInt                     = 0xe07b6d0;
}  // namespace Input_Offsets

#define Application_TypeDefinitionIndex 151

namespace Application_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c89020;
constexpr auto                  static_fields = 0xb8;

// Functions
constexpr const static size_t get_version   = 0xdf24990;
constexpr const static size_t Quit          = 0xdf23810;
constexpr const static size_t get_isFocused = 0xdf23c20;
}  // namespace Application_Offsets

#define Gradient_TypeDefinitionIndex 336

namespace Gradient_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10bfccd8;

// Functions
constexpr const static size_t SetKeys = 0xb5be0;
}  // namespace Gradient_Offsets

#define Physics_TypeDefinitionIndex 14

namespace Physics_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bfa428;
constexpr auto                  static_fields = 0xb8;

// Functions
constexpr const static size_t Raycast         = 0xe0a5e10;
constexpr const static size_t RaycastNonAlloc = 0xe0a8470;
constexpr const static size_t CheckCapsule    = 0xe0a9c40;
}  // namespace Physics_Offsets

#define Image_TypeDefinitionIndex 39

namespace Image_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10ba6600;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t m_Sprite = 0xe0;
}  // namespace Image_Offsets

#define GraphicsSettings_TypeDefinitionIndex 886

namespace GraphicsSettings_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c8c878;
constexpr auto                  static_fields = 0xb8;

// Functions
constexpr const static size_t get_INTERNAL_defaultRenderPipeline = 0xdfeb190;
}  // namespace GraphicsSettings_Offsets

#define Cursor_TypeDefinitionIndex 324

namespace Cursor_Offsets {

// Functions
constexpr const static size_t get_visible = 0xdf95a30;
}  // namespace Cursor_Offsets

// ── Unity native struct offsets

namespace IL2CPP_String_Native {
constexpr size_t length = 0x10;
constexpr size_t chars  = 0x14;
}  // namespace IL2CPP_String_Native

namespace IL2CPP_Array_Native {
constexpr size_t size = 0x18;
constexpr size_t data = 0x20;
}  // namespace IL2CPP_Array_Native

namespace IL2CPP_List_Native {
constexpr size_t items = 0x10;
constexpr size_t size  = 0x10;
}  // namespace IL2CPP_List_Native

namespace IL2CPP_Dictionary_Native {
constexpr size_t entries        = 0x18;
constexpr size_t count          = 0x20;
constexpr size_t Entry_hashCode = 0x0;
constexpr size_t Entry_next     = 0x4;
constexpr size_t Entry_key      = 0x8;
constexpr size_t Entry_value    = 0x10;
constexpr size_t Entry_stride   = 0x18;
}  // namespace IL2CPP_Dictionary_Native

namespace Unity_Component_Native {
constexpr size_t m_GameObject = 0x20;
}

namespace Unity_GameObject_Native {
constexpr size_t m_Component           = 0x20;
constexpr size_t m_ComponentCount      = 0x30;
constexpr size_t m_ComponentPairOffset = 0x8;
constexpr size_t m_Layer               = 0x40;
constexpr size_t m_Tag                 = 0x44;
constexpr size_t m_IsActive            = 0x46;
}  // namespace Unity_GameObject_Native

namespace Unity_Transform_Native {
constexpr size_t m_Hierarchy = 0x28;
constexpr size_t m_Index     = 0x30;
constexpr size_t m_Children  = 0x48;
}  // namespace Unity_Transform_Native

namespace Unity_TransformHierarchy_Native {
constexpr size_t m_LocalTransforms = 0x18;
constexpr size_t m_ParentIndices   = 0x20;
constexpr size_t m_LocalPosition   = 0x90;
}  // namespace Unity_TransformHierarchy_Native

namespace Unity_TrsX_Native {
constexpr size_t stride = 0x30;
}

namespace Unity_NativeRenderer_Native {
constexpr size_t m_Materials      = 0x140;
constexpr size_t cameraViewMatrix = 0x2fc;
constexpr size_t cameraPosition   = 0x444;
}  // namespace Unity_NativeRenderer_Native

#define BaseNetworkable_TypeDefinitionIndex 1161

namespace BaseNetworkable_Offsets {

// Offsets
constexpr const static size_t prefabID     = 0x54;
constexpr const static size_t net          = 0x88;
constexpr const static size_t parentEntity = 0x38;
constexpr const static size_t children     = 0x68;
}  // namespace BaseNetworkable_Offsets

// obf name: ::%b1ab04c76f5c267eadb87173c78396b8f006c3fc
#define BaseNetworkable_Static_ClassName \
    "BaseNetworkable/%b1ab04c76f5c267eadb87173c78396b8f006c3fc"
#define BaseNetworkable_Static_ClassNameShort \
    "%b1ab04c76f5c267eadb87173c78396b8f006c3fc"
#define BaseNetworkable_Static_TypeDefinitionIndex 1168

namespace BaseNetworkable_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10be9150;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t clientEntities = 0x18;
}  // namespace BaseNetworkable_Static_Offsets

// obf name: ::%36e8d7060cf0f653779f9e911b4aa62484f32ed5
#define BaseNetworkable_EntityRealm_ClassName \
    "BaseNetworkable/%36e8d7060cf0f653779f9e911b4aa62484f32ed5"
#define BaseNetworkable_EntityRealm_ClassNameShort \
    "%36e8d7060cf0f653779f9e911b4aa62484f32ed5"
#define BaseNetworkable_EntityRealm_TypeDefinitionIndex 1166

namespace BaseNetworkable_EntityRealm_Offsets {

// Offsets
constexpr const static size_t entityList = 0x18;

// Functions
constexpr const static size_t Find = 0x6f6a8f0;
}  // namespace BaseNetworkable_EntityRealm_Offsets

// obf name: ::%5eb4cde877f32bce3740f3f4804a524186d8875d
#define System_ListDictionary_ClassName           \
    "%5eb4cde877f32bce3740f3f4804a524186d8875d<%" \
    "2202bb9f4801e431c505ead2030c25fb4dc1770e,BaseNetworkable>"
#define System_ListDictionary_ClassNameShort \
    "%5eb4cde877f32bce3740f3f4804a524186d8875d"
#define System_ListDictionary_TypeDefinitionIndex 14

namespace System_ListDictionary_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c6c248;

// Offsets
constexpr const static size_t vals = 0x18;

// Functions
constexpr const static size_t TryGetValue            = 0x8598ed0;
constexpr const static size_t TryGetValue_methodinfo = 0x10bbb450;
}  // namespace System_ListDictionary_Offsets

// obf name: ::%056c697032bd9ea28ae0a894a945b8a632a59a03
#define System_BufferList_ClassName \
    "%056c697032bd9ea28ae0a894a945b8a632a59a03<BaseNetworkable>"
#define System_BufferList_ClassNameShort \
    "%056c697032bd9ea28ae0a894a945b8a632a59a03"
#define System_BufferList_TypeDefinitionIndex 67

namespace System_BufferList_Offsets {

// Offsets
constexpr const static size_t count  = 0x18;
constexpr const static size_t buffer = 0x10;
}  // namespace System_BufferList_Offsets

// obf name: ::SingletonComponent`1
#define SingletonComponent_ClassName           "SingletonComponent<MainCamera>"
#define SingletonComponent_ClassNameShort      "SingletonComponent`1"
#define SingletonComponent_TypeDefinitionIndex 63

namespace SingletonComponent_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10beeff0;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t Instance = 0x20;
}  // namespace SingletonComponent_Offsets

#define Model_TypeDefinitionIndex 9310

namespace Model_Offsets {

// Offsets
constexpr const static size_t rootBone       = 0x28;
constexpr const static size_t headBone       = 0x30;
constexpr const static size_t eyeBone        = 0x38;
constexpr const static size_t boneTransforms = 0x50;
}  // namespace Model_Offsets

#define BaseEntity_TypeDefinitionIndex 5098

namespace BaseEntity_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c90f90;

// Offsets
constexpr const static size_t bounds       = 0x18c;
constexpr const static size_t model        = 0x1b8;
constexpr const static size_t flags        = 0x1c0;
constexpr const static size_t triggers     = 0x128;
constexpr const static size_t positionLerp = 0xa0;

// Functions
constexpr const static size_t ServerRPC         = 0x0;
constexpr const static size_t FindBone          = 0x36866d0;
constexpr const static size_t GetWorldVelocity  = 0x36efda0;
constexpr const static size_t GetParentVelocity = 0x36971d0;
}  // namespace BaseEntity_Offsets

// obf name: ::%915976499b0654a8e250c1e3a3b156c5ca786eb5
#define PositionLerp_ClassName           "%915976499b0654a8e250c1e3a3b156c5ca786eb5"
#define PositionLerp_ClassNameShort      "%915976499b0654a8e250c1e3a3b156c5ca786eb5"
#define PositionLerp_TypeDefinitionIndex 1546

namespace PositionLerp_Offsets {

// Offsets
constexpr const static size_t interpolator = 0x40;
}  // namespace PositionLerp_Offsets

// obf name: ::%77497369c3d48c92bb5051dd45198f093642a2bf
#define Interpolator_ClassName                    \
    "%77497369c3d48c92bb5051dd45198f093642a2bf<%" \
    "122c8e32d10c5d7ea049ad8c588c24b2104bdf60>"
#define Interpolator_ClassNameShort      "%77497369c3d48c92bb5051dd45198f093642a2bf"
#define Interpolator_TypeDefinitionIndex 5516

namespace Interpolator_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10bab790;

// Offsets
constexpr const static size_t list = 0x30;
constexpr const static size_t last = 0x10;
}  // namespace Interpolator_Offsets

#define BaseCombatEntity_TypeDefinitionIndex 6518

namespace BaseCombatEntity_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10be1e80;

// Offsets
constexpr const static size_t skeletonProperties  = 0x230;
constexpr const static size_t baseProtection      = 0x238;
constexpr const static size_t lifestate           = 0x2a8;
constexpr const static size_t markAttackerHostile = 0x2ae;
constexpr const static size_t _health             = 0x2b4;
constexpr const static size_t _maxHealth          = 0x2b8;
constexpr const static size_t lastNotifyFrame     = 0x2c8;
}  // namespace BaseCombatEntity_Offsets

#define SkeletonProperties_TypeDefinitionIndex 1128

namespace SkeletonProperties_Offsets {

// Offsets
constexpr const static size_t bones       = 0x20;
constexpr const static size_t quickLookup = 0x28;
}  // namespace SkeletonProperties_Offsets

#define SkeletonProperties_BoneProperty_TypeDefinitionIndex 1129

namespace SkeletonProperties_BoneProperty_Offsets {

// Offsets
constexpr const static size_t boneName = 0x18;
constexpr const static size_t area     = 0x20;
}  // namespace SkeletonProperties_BoneProperty_Offsets

#define DamageProperties_TypeDefinitionIndex 2235

namespace DamageProperties_Offsets {

// Offsets
constexpr const static size_t fallback = 0x18;
constexpr const static size_t bones    = 0x20;
}  // namespace DamageProperties_Offsets

#define DamageProperties_HitAreaProperty_TypeDefinitionIndex 2236

namespace DamageProperties_HitAreaProperty_Offsets {

// Offsets
constexpr const static size_t area   = 0x10;
constexpr const static size_t damage = 0x14;
}  // namespace DamageProperties_HitAreaProperty_Offsets

// obf name: ::%245a9bfa663445ae9d41989e37fe19ddd2b0f412
#define DamageTypeList_ClassName "%245a9bfa663445ae9d41989e37fe19ddd2b0f412"
#define DamageTypeList_ClassNameShort \
    "%245a9bfa663445ae9d41989e37fe19ddd2b0f412"
#define DamageTypeList_TypeDefinitionIndex 4180

namespace DamageTypeList_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c47920;

// Offsets
constexpr const static size_t types = 0x10;
}  // namespace DamageTypeList_Offsets

#define ProtectionProperties_TypeDefinitionIndex 9471

namespace ProtectionProperties_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t amounts = 0x30;
}  // namespace ProtectionProperties_Offsets

#define ItemDefinition_TypeDefinitionIndex 1145

namespace ItemDefinition_Offsets {

// Offsets
constexpr const static size_t itemid          = 0x20;
constexpr const static size_t shortname       = 0x28;
constexpr const static size_t displayName     = 0x40;
constexpr const static size_t iconSprite      = 0x50;
constexpr const static size_t category        = 0x58;
constexpr const static size_t stackable       = 0x78;
constexpr const static size_t rarity          = 0x94;
constexpr const static size_t condition       = 0xb8;
constexpr const static size_t ItemModWearable = 0x198;
}  // namespace ItemDefinition_Offsets

#define RecoilProperties_TypeDefinitionIndex 9025

namespace RecoilProperties_Offsets {

// Offsets
constexpr const static size_t recoilYawMin             = 0x18;
constexpr const static size_t recoilYawMax             = 0x1c;
constexpr const static size_t recoilPitchMin           = 0x20;
constexpr const static size_t recoilPitchMax           = 0x24;
constexpr const static size_t overrideAimconeWithCurve = 0x5c;
constexpr const static size_t aimconeProbabilityCurve  = 0x70;
constexpr const static size_t newRecoilOverride        = 0x80;
}  // namespace RecoilProperties_Offsets

#define BaseProjectile_Magazine_Definition_TypeDefinitionIndex 901

namespace BaseProjectile_Magazine_Definition_Offsets {

// Offsets
constexpr const static size_t builtInSize = 0x0;
}  // namespace BaseProjectile_Magazine_Definition_Offsets

#define BaseProjectile_Magazine_TypeDefinitionIndex 900

namespace BaseProjectile_Magazine_Offsets {

// Offsets
constexpr const static size_t definition = 0x10;
constexpr const static size_t capacity   = 0x18;
constexpr const static size_t contents   = 0x1c;
constexpr const static size_t ammoType   = 0x20;
}  // namespace BaseProjectile_Magazine_Offsets

#define AttackEntity_TypeDefinitionIndex 998

namespace AttackEntity_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c5eee0;

// Offsets
constexpr const static size_t deployDelay     = 0x2e8;
constexpr const static size_t repeatDelay     = 0x2ec;
constexpr const static size_t animationDelay  = 0x2f0;
constexpr const static size_t noHeadshots     = 0x33e;
constexpr const static size_t nextAttackTime  = 0x340;
constexpr const static size_t timeSinceDeploy = 0x358;

// Functions
constexpr const static size_t SpectatorNotifyTick = 0x0;
constexpr const static size_t StartAttackCooldown = 0x6cb4910;
}  // namespace AttackEntity_Offsets

#define BaseProjectile_TypeDefinitionIndex 899

namespace BaseProjectile_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10ba6080;

// Offsets
constexpr const static size_t projectileVelocityScale = 0x394;
constexpr const static size_t automatic               = 0x398;
constexpr const static size_t reloadTime              = 0x3d8;
constexpr const static size_t primaryMagazine         = 0x3e0;
constexpr const static size_t fractionalReload        = 0x3e8;
constexpr const static size_t aimSway                 = 0x400;
constexpr const static size_t aimSwaySpeed            = 0x404;
constexpr const static size_t recoil                  = 0x408;
constexpr const static size_t aimconeCurve            = 0x410;
constexpr const static size_t aimCone                 = 0x418;
constexpr const static size_t hipAimCone              = 0x41c;
constexpr const static size_t noAimingWhileCycling    = 0x435;
constexpr const static size_t isBurstWeapon           = 0x43f;
constexpr const static size_t cachedModHash           = 0x470;
constexpr const static size_t sightAimConeScale       = 0x474;
constexpr const static size_t sightAimConeOffset      = 0x478;
constexpr const static size_t hipAimConeScale         = 0x47c;
constexpr const static size_t hipAimConeOffset        = 0x480;

// Functions
constexpr const static size_t LaunchProjectile            = 0x0;
constexpr const static size_t LaunchProjectileClientSide  = 0x605dba0;
constexpr const static size_t ScaleRepeatDelay            = 0x606d230;
constexpr const static size_t GetAimCone                  = 0x0;
constexpr const static size_t GetAimCone_vtableoff        = 0x0;
constexpr const static size_t UpdateAmmoDisplay           = 0x0;
constexpr const static size_t UpdateAmmoDisplay_vtableoff = 0x0;
}  // namespace BaseProjectile_Offsets

#define BaseLauncher_TypeDefinitionIndex 908

namespace BaseLauncher_Offsets {

// Offsets
}

#define SpinUpWeapon_TypeDefinitionIndex 8205

namespace SpinUpWeapon_Offsets {

// Offsets
}

// obf name: ::%db9bcb5c82dffc15fa5f50a7cff1839f64dc28ab
#define HitTest_ClassName           "%db9bcb5c82dffc15fa5f50a7cff1839f64dc28ab"
#define HitTest_ClassNameShort      "%db9bcb5c82dffc15fa5f50a7cff1839f64dc28ab"
#define HitTest_TypeDefinitionIndex 7183

namespace HitTest_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10bc2280;

// Offsets
constexpr const static size_t type             = 0x80;
constexpr const static size_t AttackRay        = 0xc0;
constexpr const static size_t RayHit           = 0x1c;
constexpr const static size_t damageProperties = 0x78;
constexpr const static size_t gameObject       = 0x90;
constexpr const static size_t collider         = 0xb0;
constexpr const static size_t ignoredTypes     = 0x70;
constexpr const static size_t HitTransform     = 0x68;
constexpr const static size_t HitPart          = 0xb8;
constexpr const static size_t HitMaterial      = 0xd8;
}  // namespace HitTest_Offsets

#define Projectile_TypeDefinitionIndex 6040

namespace Projectile_Offsets {

// Offsets
constexpr const static size_t initialVelocity        = 0x28;
constexpr const static size_t drag                   = 0x34;
constexpr const static size_t gravityModifier        = 0x38;
constexpr const static size_t thickness              = 0x3c;
constexpr const static size_t initialDistance        = 0x44;
constexpr const static size_t swimScale              = 0xf0;
constexpr const static size_t swimSpeed              = 0xfc;
constexpr const static size_t owner                  = 0x120;
constexpr const static size_t sourceProjectilePrefab = 0x110;
constexpr const static size_t mod                    = 0x1e0;
constexpr const static size_t hitTest                = 0x108;
constexpr const static size_t currentVelocity        = 0x164;
constexpr const static size_t currentPosition        = 0x170;
constexpr const static size_t sentPosition           = 0x188;
constexpr const static size_t previousPosition       = 0x194;
constexpr const static size_t previousVelocity       = 0x1a0;

// Functions
constexpr const static size_t CalculateEffectScale           = 0x43b1c90;
constexpr const static size_t CalculateEffectScale_vtableoff = 0x298;
constexpr const static size_t Retire                         = 0x4396aa0;
constexpr const static size_t DoHit                          = 0x43d3d80;
}  // namespace Projectile_Offsets

// obf name: ::%15e33982b51327ccbb62d6e9a224cd8ec0d8c6d7
#define HitInfo_ClassName           "%15e33982b51327ccbb62d6e9a224cd8ec0d8c6d7"
#define HitInfo_ClassNameShort      "%15e33982b51327ccbb62d6e9a224cd8ec0d8c6d7"
#define HitInfo_TypeDefinitionIndex 1142

namespace HitInfo_Offsets {

// Offsets
constexpr const static size_t damageProperties = 0x38;
constexpr const static size_t damageTypes      = 0xd8;

// Functions
constexpr const static size_t get_boneArea = 0x6f2a5e0;
}  // namespace HitInfo_Offsets

#define BaseMelee_TypeDefinitionIndex 8512

namespace BaseMelee_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10bd0260;

// Offsets
constexpr const static size_t damageProperties     = 0x388;
constexpr const static size_t maxDistance          = 0x3a0;
constexpr const static size_t attackRadius         = 0x3a4;
constexpr const static size_t blockSprintOnAttack  = 0x3a9;
constexpr const static size_t gathering            = 0x3e0;
constexpr const static size_t canThrowAsProjectile = 0x380;

// Functions
constexpr const static size_t ProcessAttack = 0x0;
constexpr const static size_t DoThrow       = 0x60d4f70;
}  // namespace BaseMelee_Offsets

#define FlintStrikeWeapon_TypeDefinitionIndex 1309

namespace FlintStrikeWeapon_Offsets {

// Offsets
constexpr const static size_t successFraction    = 0x4c0;
constexpr const static size_t strikeRecoil       = 0x4c8;
constexpr const static size_t _didSparkThisFrame = 0x4d0;
}  // namespace FlintStrikeWeapon_Offsets

#define CompoundBowWeapon_TypeDefinitionIndex 456

namespace CompoundBowWeapon_Offsets {

// Offsets
constexpr const static size_t stringHoldDurationMax = 0x4e8;
constexpr const static size_t stringBonusVelocity   = 0x4f4;

// Functions
constexpr const static size_t GetStringBonusScale = 0x3388500;
}  // namespace CompoundBowWeapon_Offsets

// obf name: ::%9171053831f12a00f5b8917d3198502932c116ef
#define ItemContainer_ClassName           "%9171053831f12a00f5b8917d3198502932c116ef"
#define ItemContainer_ClassNameShort      "%9171053831f12a00f5b8917d3198502932c116ef"
#define ItemContainer_TypeDefinitionIndex 5371

namespace ItemContainer_Offsets {

// Offsets
constexpr const static size_t uid      = 0x50;
constexpr const static size_t itemList = 0x40;

// Functions
constexpr const static size_t GetSlot = 0x3c24090;
}  // namespace ItemContainer_Offsets

#define PlayerLoot_TypeDefinitionIndex 5436

namespace PlayerLoot_Offsets {

// Offsets
constexpr const static size_t containers = 0x38;
}  // namespace PlayerLoot_Offsets

#define PlayerInventory_TypeDefinitionIndex 7939

namespace PlayerInventory_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c60030;

// Offsets
constexpr const static size_t containerWear = 0x38;
constexpr const static size_t containerMain = 0x58;
constexpr const static size_t containerBelt = 0x78;
constexpr const static size_t loot          = 0x48;

// Functions
constexpr const static size_t Initialize = 0x5b22320;
}  // namespace PlayerInventory_Offsets

#define PlayerEyes_TypeDefinitionIndex 6349

namespace PlayerEyes_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c612c0;

// Offsets
constexpr const static size_t viewOffset   = 0x40;
constexpr const static size_t bodyRotation = 0x50;

// Functions
constexpr const static size_t get_position = 0x466cfc0;
constexpr const static size_t get_rotation = 0x4637870;
constexpr const static size_t set_rotation = 0x46365f0;
constexpr const static size_t HeadForward  = 0x4645430;
}  // namespace PlayerEyes_Offsets

// obf name: ::%72c6da5495ec5776f4f306dc6b669ef08807dc24
#define PlayerEyes_Static_ClassName \
    "PlayerEyes/%72c6da5495ec5776f4f306dc6b669ef08807dc24"
#define PlayerEyes_Static_ClassNameShort \
    "%72c6da5495ec5776f4f306dc6b669ef08807dc24"
#define PlayerEyes_Static_TypeDefinitionIndex 6350

namespace PlayerEyes_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c7d8e8;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t EyeOffset = 0x64;
}  // namespace PlayerEyes_Static_Offsets

// obf name: ::%dcc2ea06c2812f5603b01cf2a766f091cc75b7b8
#define PlayerBelt_ClassName           "%dcc2ea06c2812f5603b01cf2a766f091cc75b7b8"
#define PlayerBelt_ClassNameShort      "%dcc2ea06c2812f5603b01cf2a766f091cc75b7b8"
#define PlayerBelt_TypeDefinitionIndex 2808

namespace PlayerBelt_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c5fb40;

// Functions
constexpr const static size_t ChangeSelect  = 0x1fef2d0;
constexpr const static size_t GetActiveItem = 0x1febc20;
}  // namespace PlayerBelt_Offsets

// obf name: ::%f2b9336746dcf6c0b83e64498d0ff44bae6ea222
#define LocalPlayer_ClassName           "%f2b9336746dcf6c0b83e64498d0ff44bae6ea222"
#define LocalPlayer_ClassNameShort      "%f2b9336746dcf6c0b83e64498d0ff44bae6ea222"
#define LocalPlayer_TypeDefinitionIndex 5824

namespace LocalPlayer_Offsets {

// Functions
constexpr const static size_t ItemCommand = 0x41597b0;
constexpr const static size_t MoveItem    = 0x0;
constexpr const static size_t get_Entity  = 0x41675c0;
}  // namespace LocalPlayer_Offsets

// obf name: ::%adb5899b8a4d81f71c6ff3aaa5de8b98bce4600f
#define LocalPlayer_Static_ClassName             \
    "%f2b9336746dcf6c0b83e64498d0ff44bae6ea222/" \
    "%adb5899b8a4d81f71c6ff3aaa5de8b98bce4600f"
#define LocalPlayer_Static_ClassNameShort \
    "%adb5899b8a4d81f71c6ff3aaa5de8b98bce4600f"
#define LocalPlayer_Static_TypeDefinitionIndex 5827

namespace LocalPlayer_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bba078;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t Entity = 0x100;
}  // namespace LocalPlayer_Static_Offsets

// obf name: ::%c19a4ffc776fc683558cfff1fdd73055711422b2
#define BasePlayer_Static_ClassName \
    "BasePlayer/%c19a4ffc776fc683558cfff1fdd73055711422b2"
#define BasePlayer_Static_ClassNameShort \
    "%c19a4ffc776fc683558cfff1fdd73055711422b2"
#define BasePlayer_Static_TypeDefinitionIndex 5220

namespace BasePlayer_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bb01f8;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t visiblePlayerList = 0x1188;
}  // namespace BasePlayer_Static_Offsets

#define BasePlayer_TypeDefinitionIndex 5196

namespace BasePlayer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10be9128;

// Offsets
constexpr const static size_t playerModel                = 0x4f8;
constexpr const static size_t input                      = 0x6e8;
constexpr const static size_t movement                   = 0x5a0;
constexpr const static size_t currentTeam                = 0x558;
constexpr const static size_t clActiveItem               = 0x588;
constexpr const static size_t modelState                 = 0x3a0;
constexpr const static size_t playerFlags                = 0x6d8;
constexpr const static size_t eyes                       = 0x3f0;
constexpr const static size_t playerRigidbody            = 0x6f0;
constexpr const static size_t userID                     = 0x720;
constexpr const static size_t UserIDString               = 0x328;
constexpr const static size_t inventory                  = 0x5a8;
constexpr const static size_t _displayName               = 0x4c8;
constexpr const static size_t _lookingAt                 = 0x740;
constexpr const static size_t lastSentTickTime           = 0x698;
constexpr const static size_t CurrentTutorialAllowance   = 0x0;
constexpr const static size_t nextVisThink               = 0x0;
constexpr const static size_t lastSentTick               = 0x3e8;
constexpr const static size_t mounted                    = 0x5e0;
constexpr const static size_t Belt                       = 0x520;
constexpr const static size_t _lookingAtEntity           = 0x7a0;
constexpr const static size_t currentGesture             = 0x318;
constexpr const static size_t weaponMoveSpeedScale       = 0x7b8;
constexpr const static size_t clothingBlocksAiming       = 0x7bc;
constexpr const static size_t clothingMoveSpeedReduction = 0x7c0;
constexpr const static size_t clothingWaterSpeedBonus    = 0x7c4;
constexpr const static size_t equippingBlocked           = 0x7cc;

// Functions
constexpr const static size_t MakeVisible             = 0x0;
constexpr const static size_t ClientUpdateLocalPlayer = 0x0;
constexpr const static size_t Menu_AssistPlayer       = 0x0;
constexpr const static size_t OnViewModeChanged       = 0x0;
constexpr const static size_t ChatMessage             = 0x0;
constexpr const static size_t IsOnGround              = 0x37f7d70;
constexpr const static size_t GetSpeed                = 0x384a500;
constexpr const static size_t CanBuild                = 0x3809810;
constexpr const static size_t GetMounted              = 0x3851200;
constexpr const static size_t GetHeldEntity           = 0x3874850;
constexpr const static size_t get_inventory           = 0x38f2d00;
constexpr const static size_t get_eyes                = 0x3881940;
constexpr const static size_t SendClientTick          = 0x0;
constexpr const static size_t ClientInput             = 0x0;
constexpr const static size_t ClientInput_vtableoff   = 0x0;
constexpr const static size_t MaxHealth               = 0x0;
constexpr const static size_t MaxHealth_vtableoff     = 0x0;
constexpr const static size_t OnAttacked              = 0x0;
constexpr const static size_t OnAttacked_vtableoff    = 0x0;
constexpr const static size_t get_idealViewMode       = 0x3884900;
}  // namespace BasePlayer_Offsets

#define ScientistNPC_TypeDefinitionIndex 8040

namespace ScientistNPC_Offsets {

// Offsets
}

#define TunnelDweller_TypeDefinitionIndex 3534

namespace TunnelDweller_Offsets {

// Offsets
}

#define UnderwaterDweller_TypeDefinitionIndex 730

namespace UnderwaterDweller_Offsets {

// Offsets
}

#define ScarecrowNPC_TypeDefinitionIndex 2034

namespace ScarecrowNPC_Offsets {

// Offsets
}

#define GingerbreadNPC_TypeDefinitionIndex 9085

namespace GingerbreadNPC_Offsets {

// Offsets
}

#define BaseMovement_TypeDefinitionIndex 4415

namespace BaseMovement_Offsets {

// Offsets
constexpr const static size_t adminCheat = 0x0;
constexpr const static size_t Owner      = 0x30;
}  // namespace BaseMovement_Offsets

#define PlayerWalkMovement_TypeDefinitionIndex 1366

namespace PlayerWalkMovement_Offsets {

// Offsets
constexpr const static size_t capsule = 0xe0;
constexpr const static size_t ladder  = 0xf0;
constexpr const static size_t modify  = 0x1c0;

// Functions
constexpr const static size_t Init                    = 0x0;
constexpr const static size_t BlockJump               = 0x0;
constexpr const static size_t BlockSprint             = 0x0;
constexpr const static size_t GroundCheck             = 0xfbba30;
constexpr const static size_t ClientInput             = 0x0;
constexpr const static size_t ClientInput_vtableoff   = 0x0;
constexpr const static size_t DoFixedUpdate           = 0x0;
constexpr const static size_t DoFixedUpdate_vtableoff = 0x0;
constexpr const static size_t FrameUpdate             = 0x0;
constexpr const static size_t FrameUpdate_vtableoff   = 0x0;
constexpr const static size_t TeleportTo              = 0x0;
constexpr const static size_t TeleportTo_vtableoff    = 0x0;
}  // namespace PlayerWalkMovement_Offsets

#define BuildingPrivlidge_TypeDefinitionIndex 7851

namespace BuildingPrivlidge_Offsets {

// Offsets
constexpr const static size_t allowedConstructionItems = 0x410;
constexpr const static size_t cachedProtectedMinutes   = 0x418;
}  // namespace BuildingPrivlidge_Offsets

#define WorldItem_TypeDefinitionIndex 3172

namespace WorldItem_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c61e10;

// Offsets
constexpr const static size_t allowPickup = 0x200;
constexpr const static size_t item        = 0x208;
}  // namespace WorldItem_Offsets

#define HackableLockedCrate_TypeDefinitionIndex 3059

namespace HackableLockedCrate_Offsets {

// Offsets
constexpr const static size_t timerText   = 0x400;
constexpr const static size_t hackSeconds = 0x410;
}  // namespace HackableLockedCrate_Offsets

#define ProjectileWeaponMod_TypeDefinitionIndex 1516

namespace ProjectileWeaponMod_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c628c0;

// Offsets
constexpr const static size_t repeatDelay        = 0x220;
constexpr const static size_t projectileVelocity = 0x22c;
constexpr const static size_t projectileDamage   = 0x238;
constexpr const static size_t projectileDistance = 0x244;
constexpr const static size_t aimsway            = 0x250;
constexpr const static size_t aimswaySpeed       = 0x25c;
constexpr const static size_t recoil             = 0x268;
constexpr const static size_t sightAimCone       = 0x274;
constexpr const static size_t hipAimCone         = 0x280;
constexpr const static size_t magazineCapacity   = 0x294;
constexpr const static size_t needsOnForEffects  = 0x2a0;
}  // namespace ProjectileWeaponMod_Offsets

#define ProjectileWeaponMod_Modifier_TypeDefinitionIndex 1518

namespace ProjectileWeaponMod_Modifier_Offsets {
constexpr const static size_t enabled = 0x0;
constexpr const static size_t scalar  = 0x4;
constexpr const static size_t offset  = 0x8;
}  // namespace ProjectileWeaponMod_Modifier_Offsets

// obf name: ::%3b1f7f18b8ef19b17dafed2db0070144a25a3536
#define ConsoleSystem_ClassName           "%3b1f7f18b8ef19b17dafed2db0070144a25a3536"
#define ConsoleSystem_ClassNameShort      "%3b1f7f18b8ef19b17dafed2db0070144a25a3536"
#define ConsoleSystem_TypeDefinitionIndex 2

namespace ConsoleSystem_Offsets {

// Functions
constexpr const static size_t Run = 0x0;
}  // namespace ConsoleSystem_Offsets

// obf name: ::%23e7a3f5b2ec3908d42357abfd9e78930c99172d
#define ConsoleSystem_Index_Static_ClassName      \
    "%3b1f7f18b8ef19b17dafed2db0070144a25a3536/"  \
    "%659d0ebd747d1d180d340f9b604cd2885f2dc741.%" \
    "23e7a3f5b2ec3908d42357abfd9e78930c99172d"
#define ConsoleSystem_Index_Static_ClassNameShort \
    "%23e7a3f5b2ec3908d42357abfd9e78930c99172d"
#define ConsoleSystem_Index_Static_TypeDefinitionIndex 16

namespace ConsoleSystem_Index_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bbd128;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t All = 0x40;
}  // namespace ConsoleSystem_Index_Static_Offsets

#define LootableCorpse_TypeDefinitionIndex 7120

namespace LootableCorpse_Offsets {

// Offsets
constexpr const static size_t playerSteamID = 0x318;
constexpr const static size_t _playerName   = 0x328;
}  // namespace LootableCorpse_Offsets

#define DroppedItemContainer_TypeDefinitionIndex 4185

namespace DroppedItemContainer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c5fc70;

// Offsets
constexpr const static size_t playerSteamID = 0x2e8;
constexpr const static size_t _playerName   = 0x2d0;
}  // namespace DroppedItemContainer_Offsets

#define MainCamera_TypeDefinitionIndex 3541

namespace MainCamera_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bf2548;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t mainCamera          = 0x8;
constexpr const static size_t mainCameraTransform = 0x40;

// Functions
constexpr const static size_t Update    = 0x2855670;
constexpr const static size_t OnPreCull = 0x2850ac0;
constexpr const static size_t Trace     = 0x0;
}  // namespace MainCamera_Offsets

#define CameraMan_TypeDefinitionIndex 7607

namespace CameraMan_Offsets {

// Offsets
constexpr const static size_t OnlyControlWhenCursorHidden = 0x20;
constexpr const static size_t NeedBothMouseButtonsToZoom  = 0x21;
constexpr const static size_t LookSensitivity             = 0x24;
constexpr const static size_t MoveSpeed                   = 0x28;
constexpr const static size_t canvas                      = 0x30;
constexpr const static size_t guides                      = 0x38;
}  // namespace CameraMan_Offsets

// obf name: ::%918c3b3bcd7d4bae8d906d7a60733f7ea63b1872
#define PlayerTick_ClassName           "%918c3b3bcd7d4bae8d906d7a60733f7ea63b1872"
#define PlayerTick_ClassNameShort      "%918c3b3bcd7d4bae8d906d7a60733f7ea63b1872"
#define PlayerTick_TypeDefinitionIndex 253

namespace PlayerTick_Offsets {

// Offsets
constexpr const static size_t inputState = 0x30;
constexpr const static size_t modelState = 0x10;
constexpr const static size_t activeItem = 0x28;
constexpr const static size_t parentID   = 0x18;
constexpr const static size_t position   = 0x38;
constexpr const static size_t eyePos     = 0x48;

// Functions
constexpr const static size_t WriteToStreamDelta           = 0xbee89d0;
constexpr const static size_t WriteToStreamDelta_vtableoff = 0x1b8;
constexpr const static size_t WriteToStream                = 0xbee9c00;
constexpr const static size_t WriteToStream_vtableoff      = 0x1e8;
}  // namespace PlayerTick_Offsets

// obf name: ::%b8f262f841f3c6c447d7f81fd6f4923545be89c3
#define InputMessage_ClassName           "%b8f262f841f3c6c447d7f81fd6f4923545be89c3"
#define InputMessage_ClassNameShort      "%b8f262f841f3c6c447d7f81fd6f4923545be89c3"
#define InputMessage_TypeDefinitionIndex 691

namespace InputMessage_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10bc5470;

// Offsets
constexpr const static size_t buttons    = 0x14;
constexpr const static size_t aimAngles  = 0x18;
constexpr const static size_t mouseDelta = 0x24;
}  // namespace InputMessage_Offsets

// obf name: ::%4e72d93d9afe4a5fce6a40252e0065d505333b1e
#define InputState_ClassName           "%4e72d93d9afe4a5fce6a40252e0065d505333b1e"
#define InputState_ClassNameShort      "%4e72d93d9afe4a5fce6a40252e0065d505333b1e"
#define InputState_TypeDefinitionIndex 3786

namespace InputState_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10bbe148;

// Offsets
constexpr const static size_t current  = 0x18;
constexpr const static size_t previous = 0x20;
}  // namespace InputState_Offsets

#define PlayerInput_TypeDefinitionIndex 4877

namespace PlayerInput_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bbe588;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t state      = 0x28;
constexpr const static size_t bodyAngles = 0x44;
}  // namespace PlayerInput_Offsets

// obf name: ::%2838d3190d9986c7e95f635cd226f378e2e0e2c5
#define ModelState_ClassName           "%2838d3190d9986c7e95f635cd226f378e2e0e2c5"
#define ModelState_ClassNameShort      "%2838d3190d9986c7e95f635cd226f378e2e0e2c5"
#define ModelState_TypeDefinitionIndex 527

namespace ModelState_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10bbd798;

// Offsets
constexpr const static size_t lookDir           = 0x18;
constexpr const static size_t guidePosition     = 0x2c;
constexpr const static size_t ducked            = 0x40;
constexpr const static size_t sprinting         = 0x69;
constexpr const static size_t flags             = 0x10;
constexpr const static size_t poseType          = 0x14;
constexpr const static size_t ladderType        = 0x3c;
constexpr const static size_t movementType      = 0x78;
constexpr const static size_t parentID          = 0x24;
constexpr const static size_t waterLevel        = 0x28;
constexpr const static size_t waterLevelHead    = 0x38;
constexpr const static size_t inheritedVelocity = 0x44;
constexpr const static size_t localShieldPos    = 0x50;
constexpr const static size_t guideRotation     = 0x5c;
constexpr const static size_t localShieldRot    = 0x6c;
}  // namespace ModelState_Offsets

// obf name: ::%580b72c4a898da2110fea9ef0c300da7d2eb3ac7
#define Item_ClassName           "%580b72c4a898da2110fea9ef0c300da7d2eb3ac7"
#define Item_ClassNameShort      "%580b72c4a898da2110fea9ef0c300da7d2eb3ac7"
#define Item_TypeDefinitionIndex 8299

namespace Item_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c2e970;

// Offsets
constexpr const static size_t info            = 0xb8;
constexpr const static size_t uid             = 0x88;
constexpr const static size_t clientAmmoCount = 0x10;
constexpr const static size_t contents        = 0x20;
constexpr const static size_t parent          = 0x38;
constexpr const static size_t worldEnt        = 0x40;
constexpr const static size_t heldEntity      = 0x50;
constexpr const static size_t amount          = 0xa4;
constexpr const static size_t _condition      = 0x70;
constexpr const static size_t _maxCondition   = 0xa4;

// Functions
constexpr const static size_t get_iconSprite = 0x5f1c9f0;
}  // namespace Item_Offsets

// obf name: ::%212075ba8fd7f55c828ed853268227b73eccc325
#define WaterLevel_ClassName           "%212075ba8fd7f55c828ed853268227b73eccc325"
#define WaterLevel_ClassNameShort      "%212075ba8fd7f55c828ed853268227b73eccc325"
#define WaterLevel_TypeDefinitionIndex 5777

namespace WaterLevel_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c8a2e8;
constexpr auto                  static_fields = 0xb8;

// Functions
constexpr const static size_t Test          = 0x40edbd0;
constexpr const static size_t GetWaterLevel = 0x4110880;
}  // namespace WaterLevel_Offsets

// obf name: ::%e811f2a520c49d12baf319a57be3641ea6d6fbeb
#define ConVar_Graphics_Static_ClassName         \
    "%f36914e3a709c87961a9c9aa6b629645380ad02d/" \
    "%e811f2a520c49d12baf319a57be3641ea6d6fbeb"
#define ConVar_Graphics_Static_ClassNameShort \
    "%e811f2a520c49d12baf319a57be3641ea6d6fbeb"
#define ConVar_Graphics_Static_TypeDefinitionIndex 6866

namespace ConVar_Graphics_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bf2568;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t _fov = 0x520;

// Functions
}  // namespace ConVar_Graphics_Static_Offsets

#define BaseFishingRod_TypeDefinitionIndex 7145

namespace BaseFishingRod_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c09fe8;

// Offsets
constexpr const static size_t CurrentState                 = 0x0;
constexpr const static size_t currentBobber                = 0x310;
constexpr const static size_t MaxCastDistance              = 0x32c;
constexpr const static size_t BobberPreview                = 0x338;
constexpr const static size_t clientStrainAmountNormalised = 0x380;
constexpr const static size_t strainGainMod                = 0x378;
constexpr const static size_t aimAnimationReady            = 0x398;

// Functions
constexpr const static size_t UpdateLineRenderer      = 0x4ecd9c0;
constexpr const static size_t EvaluateFishingPosition = 0x4eda220;
}  // namespace BaseFishingRod_Offsets

#define FishingBobber_TypeDefinitionIndex 4860

namespace FishingBobber_Offsets {

// Offsets
constexpr const static size_t bobberRoot = 0x2e8;
}  // namespace FishingBobber_Offsets

#define GameManifest_TypeDefinitionIndex 8472

namespace GameManifest_Offsets {

// Functions
constexpr const static size_t GUIDToObject = 0x6057670;
}  // namespace GameManifest_Offsets

// obf name: ::%310bade51621c994ea3a1d812b6203cf64a1a29c
#define GameManager_ClassName           "%310bade51621c994ea3a1d812b6203cf64a1a29c"
#define GameManager_ClassNameShort      "%310bade51621c994ea3a1d812b6203cf64a1a29c"
#define GameManager_TypeDefinitionIndex 161

namespace GameManager_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10bc7ca8;

// Offsets
constexpr const static size_t pool = 0x0;

// Functions
constexpr const static size_t CreatePrefab = 0x0;
}  // namespace GameManager_Offsets

// obf name: ::%da47aec4ff0d4e97d887fc0aa6e325f03b909835
#define GameManager_Static_ClassName             \
    "%310bade51621c994ea3a1d812b6203cf64a1a29c/" \
    "%da47aec4ff0d4e97d887fc0aa6e325f03b909835"
#define GameManager_Static_ClassNameShort \
    "%da47aec4ff0d4e97d887fc0aa6e325f03b909835"
#define GameManager_Static_TypeDefinitionIndex 165

namespace GameManager_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bb5b20;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t client = 0x10;
}  // namespace GameManager_Static_Offsets

// obf name: ::%310bade51621c994ea3a1d812b6203cf64a1a29c
#define PrefabPoolCollection_ClassName \
    "%310bade51621c994ea3a1d812b6203cf64a1a29c"
#define PrefabPoolCollection_ClassNameShort \
    "%310bade51621c994ea3a1d812b6203cf64a1a29c"
#define PrefabPoolCollection_TypeDefinitionIndex 161

namespace PrefabPoolCollection_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10bc7ca8;

// Offsets
constexpr const static size_t storage = 0x10;
}  // namespace PrefabPoolCollection_Offsets

// obf name: ::%40e108d0f01ca6ceee2ea6733755f1eb97f76706
#define PrefabPool_ClassName           "%40e108d0f01ca6ceee2ea6733755f1eb97f76706"
#define PrefabPool_ClassNameShort      "%40e108d0f01ca6ceee2ea6733755f1eb97f76706"
#define PrefabPool_TypeDefinitionIndex 1016

namespace PrefabPool_Offsets {

// Offsets
constexpr const static size_t stack = 0x0;
}  // namespace PrefabPool_Offsets

#define ItemModProjectile_TypeDefinitionIndex 876

namespace ItemModProjectile_Offsets {

// Offsets
constexpr const static size_t projectileObject         = 0x20;
constexpr const static size_t ammoType                 = 0x30;
constexpr const static size_t projectileSpread         = 0x3c;
constexpr const static size_t projectileVelocity       = 0x40;
constexpr const static size_t projectileVelocitySpread = 0x44;
constexpr const static size_t useCurve                 = 0x48;
constexpr const static size_t spreadScalar             = 0x50;
constexpr const static size_t category                 = 0x68;
}  // namespace ItemModProjectile_Offsets

#define CraftingQueue_TypeDefinitionIndex 823

namespace CraftingQueue_Offsets {

// Offsets
constexpr const static size_t icons = 0x30;
}  // namespace CraftingQueue_Offsets

// obf name: ::%20bd4f14959c3ba644df45d869f4f9231cbb02d1
#define CraftingQueue_Static_ClassName \
    "CraftingQueue/%20bd4f14959c3ba644df45d869f4f9231cbb02d1"
#define CraftingQueue_Static_ClassNameShort \
    "%20bd4f14959c3ba644df45d869f4f9231cbb02d1"
#define CraftingQueue_Static_TypeDefinitionIndex 824

namespace CraftingQueue_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c91590;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t isCrafting = 0x8;
}  // namespace CraftingQueue_Static_Offsets

#define CraftingQueueIcon_TypeDefinitionIndex 2615

namespace CraftingQueueIcon_Offsets {

// Offsets
constexpr const static size_t endTime = 0x5c;
constexpr const static size_t item    = 0x70;
}  // namespace CraftingQueueIcon_Offsets

// obf name: ::%0d597890ac98fb1f4ed24e30f8dc5dd62ab633f7
#define Planner_Static_ClassName \
    "Planner/%0d597890ac98fb1f4ed24e30f8dc5dd62ab633f7"
#define Planner_Static_ClassNameShort \
    "%0d597890ac98fb1f4ed24e30f8dc5dd62ab633f7"
#define Planner_Static_TypeDefinitionIndex 6854

namespace Planner_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10ca87f0;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t guide = 0x1c8;
}  // namespace Planner_Static_Offsets

// obf name: ::%180dee5d6fe56dbf163d33e93610989bc8e9488b
#define Planner_Guide_ClassName \
    "Planner/%180dee5d6fe56dbf163d33e93610989bc8e9488b"
#define Planner_Guide_ClassNameShort      "%180dee5d6fe56dbf163d33e93610989bc8e9488b"
#define Planner_Guide_TypeDefinitionIndex 6847

namespace Planner_Guide_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c5f2c0;

// Offsets
constexpr const static size_t lastPlacement = 0xc8;
}  // namespace Planner_Guide_Offsets

#define Planner_TypeDefinitionIndex 6846

namespace Planner_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10bd0490;

// Offsets
constexpr const static size_t _currentConstruction = 0x318;
}  // namespace Planner_Offsets

#define Construction_TypeDefinitionIndex 529

namespace Construction_Offsets {

// Offsets
constexpr const static size_t holdToPlaceDuration = 0x108;
constexpr const static size_t grades              = 0x168;
}  // namespace Construction_Offsets

#define BuildingBlock_TypeDefinitionIndex 9120

namespace BuildingBlock_Offsets {

// Offsets
constexpr const static size_t blockDefinition = 0x318;
constexpr const static size_t grade           = 0x350;

// Functions
}  // namespace BuildingBlock_Offsets

// obf name: ::HeldEntity
#define HeldEntity_ClassName           "HeldEntity"
#define HeldEntity_ClassNameShort      "HeldEntity"
#define HeldEntity_TypeDefinitionIndex 6501

namespace HeldEntity_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c628b0;

// Offsets
constexpr const static size_t ownerItemUID = 0x2e0;
constexpr const static size_t _punches     = 0x2d8;
constexpr const static size_t viewModel    = 0x250;

// Functions
constexpr const static size_t OnDeploy = 0x0;
}  // namespace HeldEntity_Offsets

// obf name: ::%08841741149fc7f4f79b8637034bb043da0559e7
#define PunchEntry_ClassName \
    "HeldEntity/%08841741149fc7f4f79b8637034bb043da0559e7"
#define PunchEntry_ClassNameShort      "%08841741149fc7f4f79b8637034bb043da0559e7"
#define PunchEntry_TypeDefinitionIndex 6502

namespace PunchEntry_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10bee8c8;

// Offsets
}  // namespace PunchEntry_Offsets

#define IronSights_TypeDefinitionIndex 132

namespace IronSights_Offsets {

// Offsets
constexpr const static size_t zoomFactor         = 0x2c;
constexpr const static size_t ironsightsOverride = 0x68;
}  // namespace IronSights_Offsets

#define IronSightOverride_TypeDefinitionIndex 4606

namespace IronSightOverride_Offsets {

// Offsets
constexpr const static size_t zoomFactor = 0x2c;
constexpr const static size_t fovBias    = 0x30;
}  // namespace IronSightOverride_Offsets

#define BaseViewModel_TypeDefinitionIndex 1490

namespace BaseViewModel_Offsets {

// Offsets
constexpr const static size_t useViewModelCamera = 0x40;
constexpr const static size_t ironSights         = 0x108;
constexpr const static size_t model              = 0x90;
constexpr const static size_t lower              = 0xa0;

// Functions
constexpr const static size_t get_ActiveModel                   = 0x1171b60;
constexpr const static size_t OnCameraPositionChanged           = 0x0;
constexpr const static size_t OnCameraPositionChanged_vtableoff = 0x0;
}  // namespace BaseViewModel_Offsets

#define ViewModel_TypeDefinitionIndex 7934

namespace ViewModel_Offsets {

// Offsets
constexpr const static size_t instance = 0x28;

// Functions
constexpr const static size_t PlayInt    = 0x5b1de00;
constexpr const static size_t PlayString = 0x5b1e690;
}  // namespace ViewModel_Offsets

#define MedicalTool_TypeDefinitionIndex 6588

namespace MedicalTool_Offsets {

// Offsets
constexpr const static size_t resetTime = 0x3a0;
}  // namespace MedicalTool_Offsets

#define WaterBody_TypeDefinitionIndex 3837

namespace WaterBody_Offsets {

// Offsets
constexpr const static size_t Type                    = 0x20;
constexpr const static size_t Renderer                = 0x28;
constexpr const static size_t Triggers                = 0x30;
constexpr const static size_t MaterialBlend           = 0x38;
constexpr const static size_t WantBlendFactorOverride = 0x40;
constexpr const static size_t BlendFactorOverride     = 0x44;
constexpr const static size_t IsOcean                 = 0x48;
constexpr const static size_t meshFilter              = 0x78;
constexpr const static size_t FishingType             = 0x58;
}  // namespace WaterBody_Offsets

// obf name: ::%e5b187b5f926ad45477e011538a6eb88f764417f
#define WaterSystem_Static_ClassName \
    "WaterSystem/%e5b187b5f926ad45477e011538a6eb88f764417f"
#define WaterSystem_Static_ClassNameShort \
    "%e5b187b5f926ad45477e011538a6eb88f764417f"
#define WaterSystem_Static_TypeDefinitionIndex 2578

namespace WaterSystem_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bf9d38;
constexpr auto                  static_fields = 0xb8;

// Offsets
}  // namespace WaterSystem_Static_Offsets

#define WaterSystem_TypeDefinitionIndex 2573

namespace WaterSystem_Offsets {

// Offsets
constexpr const static size_t oceanSettings    = 0x20;
constexpr const static size_t Quality          = 0x70;
constexpr const static size_t oceanMaterial    = 0x78;
constexpr const static size_t Rendering        = 0x80;
constexpr const static size_t oceanVFaceShader = 0x88;
constexpr const static size_t TropicalMaterial = 0x90;
constexpr const static size_t patchSize        = 0x98;
constexpr const static size_t patchCount       = 0x9c;
constexpr const static size_t patchScale       = 0xa0;
constexpr const static size_t forceDeepSea     = 0xa4;

// Functions
constexpr const static size_t get_Ocean = 0x1cd9370;
}  // namespace WaterSystem_Offsets

#define TerrainMeta_TypeDefinitionIndex 2317

namespace TerrainMeta_Offsets {

// Functions
constexpr const static size_t Position    = 0x19cee90;
constexpr const static size_t Size        = 0x19cef00;
constexpr const static size_t OneOverSize = 0x19cf0f0;
constexpr const static size_t Collision   = 0x19cf090;
constexpr const static size_t HeightMap   = 0x19cefd0;
constexpr const static size_t SplatMap    = 0x19cf430;
constexpr const static size_t TopologyMap = 0x19d0b50;
constexpr const static size_t Texturing   = 0x19d6410;
}  // namespace TerrainMeta_Offsets

#define TerrainCollision_TypeDefinitionIndex 5289

namespace TerrainCollision_Offsets {

// Functions
constexpr const static size_t GetIgnore = 0x3aea400;
}  // namespace TerrainCollision_Offsets

#define TerrainHeightMap_TypeDefinitionIndex 842

namespace TerrainHeightMap_Offsets {

// Offsets
constexpr const static size_t normY = 0x7c;
}  // namespace TerrainHeightMap_Offsets

#define TerrainSplatMap_TypeDefinitionIndex 7505

namespace TerrainSplatMap_Offsets {

// Offsets
constexpr const static size_t num = 0x7c;
}  // namespace TerrainSplatMap_Offsets

#define TerrainTexturing_TypeDefinitionIndex 5964

namespace TerrainTexturing_Offsets {

// Offsets
constexpr const static size_t shoreVectors = 0x178;
}  // namespace TerrainTexturing_Offsets

// obf name: ::%1a966eb190360930b9f6474cf4edbf35160678c4
#define World_Static_ClassName                   \
    "%278655174c8edac17bbc78b3f2b8d424896aa26d/" \
    "%1a966eb190360930b9f6474cf4edbf35160678c4"
#define World_Static_ClassNameShort      "%1a966eb190360930b9f6474cf4edbf35160678c4"
#define World_Static_TypeDefinitionIndex 5429

namespace World_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bf80b8;
constexpr auto                  static_fields = 0xb8;

// Offsets
}  // namespace World_Static_Offsets

#define ItemIcon_TypeDefinitionIndex 5451

namespace ItemIcon_Offsets {

// Offsets
constexpr const static size_t backgroundImage = 0xe8;

// Functions
constexpr const static size_t TryToMove           = 0x0;
constexpr const static size_t TryToMove_vtableoff = 0x0;
constexpr const static size_t RunTimedAction      = 0x0;
}  // namespace ItemIcon_Offsets

// obf name: ::%fe043ad86b3c258a7c0d538166d0fe99314ea5bf
#define ItemIcon_Static_ClassName \
    "ItemIcon/%fe043ad86b3c258a7c0d538166d0fe99314ea5bf"
#define ItemIcon_Static_ClassNameShort \
    "%fe043ad86b3c258a7c0d538166d0fe99314ea5bf"
#define ItemIcon_Static_TypeDefinitionIndex 5456

namespace ItemIcon_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c1a9d0;
constexpr auto                  static_fields = 0xb8;

// Offsets
}  // namespace ItemIcon_Static_Offsets

// obf name: ::%9cf421a3e24b2809fcb7b5c9eafc523efa940a9d
#define EffectData_ClassName           "%9cf421a3e24b2809fcb7b5c9eafc523efa940a9d"
#define EffectData_ClassNameShort      "%9cf421a3e24b2809fcb7b5c9eafc523efa940a9d"
#define EffectData_TypeDefinitionIndex 203

namespace EffectData_Offsets {

// Offsets
constexpr const static size_t entity = 0x30;
constexpr const static size_t source = 0x28;
}  // namespace EffectData_Offsets

// obf name: ::%ff6f7abc03925c5b6cd4ad9e7527725dfc00a678
#define Effect_ClassName           "%ff6f7abc03925c5b6cd4ad9e7527725dfc00a678"
#define Effect_ClassNameShort      "%ff6f7abc03925c5b6cd4ad9e7527725dfc00a678"
#define Effect_TypeDefinitionIndex 7960

namespace Effect_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10bbd638;

// Offsets
constexpr const static size_t pooledString = 0xa8;
constexpr const static size_t worldPos     = 0x68;
}  // namespace Effect_Offsets

// obf name: ::%97c76f2ee7ed1bd6613b4b8d85dc549b1a576025
#define EffectNetwork_ClassName           "%97c76f2ee7ed1bd6613b4b8d85dc549b1a576025"
#define EffectNetwork_ClassNameShort      "%97c76f2ee7ed1bd6613b4b8d85dc549b1a576025"
#define EffectNetwork_TypeDefinitionIndex 873

namespace EffectNetwork_Offsets {

// Functions
}

// obf name: ::%297df1022c5ea15458457dc46ba1abe458265419
#define EffectNetwork_Static_ClassName           \
    "%97c76f2ee7ed1bd6613b4b8d85dc549b1a576025/" \
    "%297df1022c5ea15458457dc46ba1abe458265419"
#define EffectNetwork_Static_ClassNameShort \
    "%297df1022c5ea15458457dc46ba1abe458265419"
#define EffectNetwork_Static_TypeDefinitionIndex 874

namespace EffectNetwork_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c5b2a0;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t effect = 0x18;

// Functions
constexpr const static size_t cctor = 0x5e24c70;
}  // namespace EffectNetwork_Static_Offsets

// obf name: ::%4aeb1f2433af3fd5837d757c36f3d157056483af
#define GameObjectEx_ClassName           "%4aeb1f2433af3fd5837d757c36f3d157056483af"
#define GameObjectEx_ClassNameShort      "%4aeb1f2433af3fd5837d757c36f3d157056483af"
#define GameObjectEx_TypeDefinitionIndex 4258

namespace GameObjectEx_Offsets {

// Functions
constexpr const static size_t ToBaseEntity = 0x2e6f4f0;
}  // namespace GameObjectEx_Offsets

#define UIDeathScreen_TypeDefinitionIndex 1639

namespace UIDeathScreen_Offsets {

// Functions
constexpr const static size_t SetVisible = 0x12ea6d0;
}  // namespace UIDeathScreen_Offsets

// obf name: ::%7cab04d1d3a2c9488619ecd15abe0ea804040dba
#define BaseScreenShake_Static_ClassName \
    "BaseScreenShake/%7cab04d1d3a2c9488619ecd15abe0ea804040dba"
#define BaseScreenShake_Static_ClassNameShort \
    "%7cab04d1d3a2c9488619ecd15abe0ea804040dba"
#define BaseScreenShake_Static_TypeDefinitionIndex 5239

namespace BaseScreenShake_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c69090;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t list = 0x20;
}  // namespace BaseScreenShake_Static_Offsets

#define FlashbangOverlay_TypeDefinitionIndex 7883

namespace FlashbangOverlay_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10ca06c0;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t Instance    = 0x10;
constexpr const static size_t flashLength = 0x48;
}  // namespace FlashbangOverlay_Offsets

// obf name: ::%71137ea0ded4e0a0c736b91750a0704e2a0a692c
#define StringPool_ClassName           "%71137ea0ded4e0a0c736b91750a0704e2a0a692c"
#define StringPool_ClassNameShort      "%71137ea0ded4e0a0c736b91750a0704e2a0a692c"
#define StringPool_TypeDefinitionIndex 453

namespace StringPool_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c764a8;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t toNumber = 0x60;

// Functions
constexpr const static size_t Get = 0x339fec0;
}  // namespace StringPool_Offsets

// obf name: ::%acdbf8ec27705964aef08a32de64b99ad5ae6ce4
#define Network_Networkable_ClassName \
    "%acdbf8ec27705964aef08a32de64b99ad5ae6ce4"
#define Network_Networkable_ClassNameShort \
    "%acdbf8ec27705964aef08a32de64b99ad5ae6ce4"
#define Network_Networkable_TypeDefinitionIndex 42

namespace Network_Networkable_Offsets {

// Offsets
constexpr const static size_t ID = 0x18;
}  // namespace Network_Networkable_Offsets

// obf name: ::%db78a311e69e50aac3cd94dfd84e36ec6148c1f4
#define Network_Net_ClassName           "%db78a311e69e50aac3cd94dfd84e36ec6148c1f4"
#define Network_Net_ClassNameShort      "%db78a311e69e50aac3cd94dfd84e36ec6148c1f4"
#define Network_Net_TypeDefinitionIndex 124

namespace Network_Net_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bb0bf0;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t cl = 0x38;
}  // namespace Network_Net_Offsets

// obf name: ::%7639913094299e7aa0408afd0d5c7df289315589
#define Network_Client_ClassName "%7639913094299e7aa0408afd0d5c7df289315589"
#define Network_Client_ClassNameShort \
    "%7639913094299e7aa0408afd0d5c7df289315589"
#define Network_Client_TypeDefinitionIndex 14

namespace Network_Client_Offsets {

// Offsets
constexpr const static size_t Connection       = 0x108;
constexpr const static size_t ConnectedPort    = 0xf4;
constexpr const static size_t ConnectedAddress = 0xd8;
constexpr const static size_t ServerName       = 0xe0;

// Offsets
constexpr const static size_t CreateNetworkable  = 0x738b420;
constexpr const static size_t DestroyNetworkable = 0x738b1b0;
}  // namespace Network_Client_Offsets

// obf name: ::%6e4fac02033a2488133f486d69ffabdd959007d4
#define Network_BaseNetwork_ClassName \
    "%6e4fac02033a2488133f486d69ffabdd959007d4"
#define Network_BaseNetwork_ClassNameShort \
    "%6e4fac02033a2488133f486d69ffabdd959007d4"
#define Network_BaseNetwork_TypeDefinitionIndex 32

namespace Network_BaseNetwork_Offsets {}

// obf name: ::%993708e2e00ae8911aa5a7bc8d0e54e0e301c599
#define Network_SendInfo_ClassName "%993708e2e00ae8911aa5a7bc8d0e54e0e301c599"
#define Network_SendInfo_ClassNameShort \
    "%993708e2e00ae8911aa5a7bc8d0e54e0e301c599"
#define Network_SendInfo_TypeDefinitionIndex 69

namespace Network_SendInfo_Offsets {

// Offsets
constexpr const static size_t method      = 0x0;
constexpr const static size_t channel     = 0x4;
constexpr const static size_t priority    = 0x8;
constexpr const static size_t connections = 0x10;
constexpr const static size_t connection  = 0x18;
}  // namespace Network_SendInfo_Offsets

// obf name: ::%cc29022643a75e1ee49c841fd90e3ca86fc4a6fb
#define Network_Message_ClassName "%cc29022643a75e1ee49c841fd90e3ca86fc4a6fb"
#define Network_Message_ClassNameShort \
    "%cc29022643a75e1ee49c841fd90e3ca86fc4a6fb"
#define Network_Message_TypeDefinitionIndex 73

namespace Network_Message_Offsets {

// Offsets
constexpr const static size_t type = 0x20;
constexpr const static size_t read = 0x18;
}  // namespace Network_Message_Offsets

// obf name: ::%c14d2ce7c38a8a6df26df172455fda8c2912bea2
#define Network_NetRead_ClassName "%c14d2ce7c38a8a6df26df172455fda8c2912bea2"
#define Network_NetRead_ClassNameShort \
    "%c14d2ce7c38a8a6df26df172455fda8c2912bea2"
#define Network_NetRead_TypeDefinitionIndex 20

namespace Network_NetRead_Offsets {

// Offsets
constexpr const static size_t stream = 0x40;
}  // namespace Network_NetRead_Offsets

// obf name: ::%329ea8ebc5f0d99bd7a898dae01b7aef4376bac9
#define Network_NetWrite_ClassName "%329ea8ebc5f0d99bd7a898dae01b7aef4376bac9"
#define Network_NetWrite_ClassNameShort \
    "%329ea8ebc5f0d99bd7a898dae01b7aef4376bac9"
#define Network_NetWrite_TypeDefinitionIndex 51

namespace Network_NetWrite_Offsets {

// Offsets
constexpr const static size_t stream = 0x28;

// Functions
constexpr const static size_t WriteByte = 0x73f1690;
constexpr const static size_t String    = 0x73eda00;
constexpr const static size_t Send      = 0x73edf10;
}  // namespace Network_NetWrite_Offsets

#define LootPanel_TypeDefinitionIndex 1076

namespace LootPanel_Offsets {

// Functions
constexpr const static size_t get_Container_00 = 0x6ec5850;
}  // namespace LootPanel_Offsets

#define UIInventory_TypeDefinitionIndex 9408

namespace UIInventory_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bba3f8;
constexpr auto                  static_fields = 0xb8;

// Functions
constexpr const static size_t Close = 0x69c4ef0;
}  // namespace UIInventory_Offsets

#define GrowableEntity_TypeDefinitionIndex 2198

namespace GrowableEntity_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c57d90;

// Offsets
constexpr const static size_t Properties = 0x348;
constexpr const static size_t State      = 0x358;
}  // namespace GrowableEntity_Offsets

#define PlantProperties_TypeDefinitionIndex 9274

namespace PlantProperties_Offsets {

// Offsets
constexpr const static size_t stages = 0x28;
}  // namespace PlantProperties_Offsets

#define PlantProperties_Stage_TypeDefinitionIndex 9276

namespace PlantProperties_Stage_Offsets {

// Offsets
constexpr const static size_t resources = 0xc;
}  // namespace PlantProperties_Stage_Offsets

#define Text_TypeDefinitionIndex 117

namespace Text_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c91d18;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t m_Text = 0xe8;
}  // namespace Text_Offsets

#define TOD_Sky_TypeDefinitionIndex 1873

namespace TOD_Sky_Offsets {

// Offsets
constexpr const static size_t Cycle      = 0x40;
constexpr const static size_t Atmosphere = 0x50;
constexpr const static size_t Day        = 0x58;
constexpr const static size_t Night      = 0x60;
constexpr const static size_t Stars      = 0x78;
constexpr const static size_t Clouds     = 0x80;
constexpr const static size_t Ambient    = 0x98;

// Functions
constexpr const static size_t get_Instance = 0xd6cc60;
}  // namespace TOD_Sky_Offsets

// obf name: ::%251288043bd15b0c9881d762a80c6dd24f215b9a
#define TOD_Sky_Static_ClassName \
    "TOD_Sky/%251288043bd15b0c9881d762a80c6dd24f215b9a"
#define TOD_Sky_Static_ClassNameShort \
    "%251288043bd15b0c9881d762a80c6dd24f215b9a"
#define TOD_Sky_Static_TypeDefinitionIndex 1875

namespace TOD_Sky_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bacc40;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t instances = 0x50;
}  // namespace TOD_Sky_Static_Offsets

#define TOD_CycleParameters_TypeDefinitionIndex 2347

namespace TOD_CycleParameters_Offsets {

// Functions
constexpr const static size_t get_DateTime = 0xec0a40;
}  // namespace TOD_CycleParameters_Offsets

#define TOD_AtmosphereParameters_TypeDefinitionIndex 1387

namespace TOD_AtmosphereParameters_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c34170;

// Offsets
constexpr const static size_t RayleighMultiplier = 0x10;
}  // namespace TOD_AtmosphereParameters_Offsets

#define TOD_DayParameters_TypeDefinitionIndex 589

namespace TOD_DayParameters_Offsets {

// Offsets
constexpr const static size_t SkyColor = 0x28;
}  // namespace TOD_DayParameters_Offsets

#define TOD_NightParameters_TypeDefinitionIndex 1639

namespace TOD_NightParameters_Offsets {

// Offsets
constexpr const static size_t MoonColor                   = 0x10;
constexpr const static size_t MoonColorRed                = 0x18;
constexpr const static size_t LightColor                  = 0x20;
constexpr const static size_t RayColor                    = 0x28;
constexpr const static size_t SkyColor                    = 0x30;
constexpr const static size_t CloudColor                  = 0x38;
constexpr const static size_t FogColor                    = 0x40;
constexpr const static size_t AmbientColor                = 0x48;
constexpr const static size_t runtimeLightIntensity       = 0x54;
constexpr const static size_t ShadowStrength              = 0x58;
constexpr const static size_t runtimeAmbientMultiplier    = 0x60;
constexpr const static size_t runtimeReflectionMultiplier = 0x68;
constexpr const static size_t ReflectionMaxClamp          = 0x6c;
constexpr const static size_t AmbientMultiplier           = 0x5c;
}  // namespace TOD_NightParameters_Offsets

#define TOD_StarParameters_TypeDefinitionIndex 1982

namespace TOD_StarParameters_Offsets {

// Offsets
constexpr const static size_t Size       = 0x10;
constexpr const static size_t Brightness = 0x14;
}  // namespace TOD_StarParameters_Offsets

#define TOD_CloudParameters_TypeDefinitionIndex 856

namespace TOD_CloudParameters_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c34180;

// Offsets
constexpr const static size_t Brightness = 0x30;
}  // namespace TOD_CloudParameters_Offsets

#define TOD_AmbientParameters_TypeDefinitionIndex 725

namespace TOD_AmbientParameters_Offsets {

// Offsets
constexpr const static size_t Mode           = 0x10;
constexpr const static size_t Saturation     = 0x14;
constexpr const static size_t UpdateInterval = 0x18;
}  // namespace TOD_AmbientParameters_Offsets

#define UIHUD_TypeDefinitionIndex 3450

namespace UIHUD_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c04f70;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t Hunger = 0x28;
}  // namespace UIHUD_Offsets

#define HudElement_TypeDefinitionIndex 2624

namespace HudElement_Offsets {

// Offsets
constexpr const static size_t lastValue = 0x30;
}  // namespace HudElement_Offsets

#define UIBelt_TypeDefinitionIndex 7599

namespace UIBelt_Offsets {

// Offsets
constexpr const static size_t ItemIcons = 0x20;
}  // namespace UIBelt_Offsets

#define ItemModCompostable_TypeDefinitionIndex 5900

namespace ItemModCompostable_Offsets {

// Offsets
constexpr const static size_t MaxBaitStack = 0x38;
}  // namespace ItemModCompostable_Offsets

// obf name: ::ResourceRef`1
#define GameObjectRef_ClassName           "ResourceRef<UnityEngine/GameObject>"
#define GameObjectRef_ClassNameShort      "ResourceRef`1"
#define GameObjectRef_TypeDefinitionIndex 7583

namespace GameObjectRef_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10d389c0;

// Offsets
constexpr const static size_t guid = 0x10;
}  // namespace GameObjectRef_Offsets

#define EnvironmentManager_TypeDefinitionIndex 8019

namespace EnvironmentManager_Offsets {

// Functions
}

// obf name: ::Phrase
#define Translate_Phrase_ClassName \
    "%ebbef51ac8259d7c9ed5033a553ff0df2d568187/Phrase"
#define Translate_Phrase_ClassNameShort      "Phrase"
#define Translate_Phrase_TypeDefinitionIndex 2

namespace Translate_Phrase_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10be9de0;

// Offsets
constexpr const static size_t legacyEnglish = 0x20;
}  // namespace Translate_Phrase_Offsets

#define ResourceDispenser_GatherPropertyEntry_TypeDefinitionIndex 4851

namespace ResourceDispenser_GatherPropertyEntry_Offsets {

// Offsets
constexpr const static size_t gatherDamage    = 0x10;
constexpr const static size_t destroyFraction = 0x14;
constexpr const static size_t conditionLost   = 0x18;
}  // namespace ResourceDispenser_GatherPropertyEntry_Offsets

#define ResourceDispenser_GatherProperties_TypeDefinitionIndex 4852

namespace ResourceDispenser_GatherProperties_Offsets {

// Offsets
constexpr const static size_t Tree  = 0x10;
constexpr const static size_t Ore   = 0x18;
constexpr const static size_t Flesh = 0x20;
}  // namespace ResourceDispenser_GatherProperties_Offsets

// obf name: ::UIChat
#define UIChat_ClassName           "UIChat"
#define UIChat_ClassNameShort      "UIChat"
#define UIChat_TypeDefinitionIndex 5504

namespace UIChat_Offsets {

// Offsets
constexpr const static size_t chatArea = 0x28;
}  // namespace UIChat_Offsets

// obf name: ::ListComponent`1
#define ListComponent_ClassName           "ListComponent<UIChat>"
#define ListComponent_ClassNameShort      "ListComponent`1"
#define ListComponent_TypeDefinitionIndex 73

namespace ListComponent_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10b9e3b0;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t instance = 0x18;
}  // namespace ListComponent_Offsets

// obf name: ::ListComponent`1
#define ListComponent_Projectile_ClassName           "ListComponent<Projectile>"
#define ListComponent_Projectile_ClassNameShort      "ListComponent`1"
#define ListComponent_Projectile_TypeDefinitionIndex 73

namespace ListComponent_Projectile_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bbd5b0;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t instance = 0x18;
}  // namespace ListComponent_Projectile_Offsets

// obf name: ::%d8b48153d2101b71b885068d1604c451fe65a28d
#define ListHashSet_ClassName \
    "%d8b48153d2101b71b885068d1604c451fe65a28d<UIChat>"
#define ListHashSet_ClassNameShort      "%d8b48153d2101b71b885068d1604c451fe65a28d"
#define ListHashSet_TypeDefinitionIndex 82

namespace ListHashSet_Offsets {

// Offsets
constexpr const static size_t vals = 0x10;
}  // namespace ListHashSet_Offsets

// obf name: ::%d8b48153d2101b71b885068d1604c451fe65a28d
#define ListHashSet_Projectile_ClassName \
    "%d8b48153d2101b71b885068d1604c451fe65a28d<Projectile>"
#define ListHashSet_Projectile_ClassNameShort \
    "%d8b48153d2101b71b885068d1604c451fe65a28d"
#define ListHashSet_Projectile_TypeDefinitionIndex 82

namespace ListHashSet_Projectile_Offsets {

// Offsets
constexpr const static size_t vals = 0x10;
}  // namespace ListHashSet_Projectile_Offsets

#define PatrolHelicopter_TypeDefinitionIndex 2892

namespace PatrolHelicopter_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t mainRotor = 0x2e0;
constexpr const static size_t weakspots = 0x2d0;
}  // namespace PatrolHelicopter_Offsets

#define Chainsaw_TypeDefinitionIndex 3429

namespace Chainsaw_Offsets {

// Offsets
constexpr const static size_t ammo = 0x454;
}  // namespace Chainsaw_Offsets

// obf name: ::%0fa40172565d558011b842bea40026295f4dd725
#define CameraUpdateHook_Static_ClassName \
    "CameraUpdateHook/%0fa40172565d558011b842bea40026295f4dd725"
#define CameraUpdateHook_Static_ClassNameShort \
    "%0fa40172565d558011b842bea40026295f4dd725"
#define CameraUpdateHook_Static_TypeDefinitionIndex 3873

namespace CameraUpdateHook_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c88680;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t action = 0xb8;
}  // namespace CameraUpdateHook_Static_Offsets

#define SteamClientWrapper_TypeDefinitionIndex 8609

namespace SteamClientWrapper_Offsets {

// Functions
constexpr const static size_t GetAvatarTexture = 0x619bf50;
}  // namespace SteamClientWrapper_Offsets

// obf name: ::%f12a8d8b8fd2984b4a317fc1f6d0b18fe514caeb
#define AimConeUtil_ClassName           "%f12a8d8b8fd2984b4a317fc1f6d0b18fe514caeb"
#define AimConeUtil_ClassNameShort      "%f12a8d8b8fd2984b4a317fc1f6d0b18fe514caeb"
#define AimConeUtil_TypeDefinitionIndex 7868

namespace AimConeUtil_Offsets {

// Functions
constexpr const static size_t GetModifiedAimConeDirection = 0x5aa1770;
}  // namespace AimConeUtil_Offsets

#define PlayerModel_TypeDefinitionIndex 6533

namespace PlayerModel_Offsets {

// Offsets
constexpr const static size_t _multiMesh = 0x3c8;
constexpr const static size_t position   = 0x2f8;
constexpr const static size_t viewMatrix = 0x304;
}  // namespace PlayerModel_Offsets

#define SkinnedMultiMesh_TypeDefinitionIndex 5509

namespace SkinnedMultiMesh_Offsets {

// Offsets
constexpr const static size_t Renderers = 0x40;
}  // namespace SkinnedMultiMesh_Offsets

#define BaseMountable_TypeDefinitionIndex 7335

namespace BaseMountable_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c60fe0;

// Offsets
constexpr const static size_t pitchClamp    = 0x2fc;
constexpr const static size_t yawClamp      = 0x304;
constexpr const static size_t canWieldItems = 0x30c;
}  // namespace BaseMountable_Offsets

#define ProgressBar_TypeDefinitionIndex 1485

namespace ProgressBar_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10ba3858;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t timeFinished  = 0x20;
constexpr const static size_t scaleTarget   = 0x28;
constexpr const static size_t progressField = 0x30;
constexpr const static size_t iconField     = 0x38;
constexpr const static size_t leftField     = 0x40;
constexpr const static size_t rightField    = 0x48;
constexpr const static size_t clipOpen      = 0x50;
constexpr const static size_t clipCancel    = 0x58;
constexpr const static size_t canvas        = 0x70;
constexpr const static size_t canvasGroup   = 0x78;
constexpr const static size_t timeCounter   = 0x24;
constexpr const static size_t Instance      = 0x8;

// Functions
constexpr const static size_t Update            = 0x11b1ab0;
constexpr const static size_t Start             = 0x11b2c60;
constexpr const static size_t Close             = 0x0;
constexpr const static size_t UpdateProgressBar = 0x0;
constexpr const static size_t SetPercent        = 0x0;
constexpr const static size_t PlayOpenSound     = 0x0;
constexpr const static size_t PlayCancelSound   = 0x0;
}  // namespace ProgressBar_Offsets

#define BowWeapon_TypeDefinitionIndex 1613

namespace BowWeapon_Offsets {

// Offsets
constexpr const static size_t attackReady = 0x4d8;
constexpr const static size_t wasAiming   = 0x4e0;
}  // namespace BowWeapon_Offsets

#define CrossbowWeapon_TypeDefinitionIndex 4777

namespace CrossbowWeapon_Offsets {

// Offsets
}

#define MiniCrossbow_TypeDefinitionIndex 943

namespace MiniCrossbow_Offsets {

// Offsets
}

// obf name: ::%eeb77896dba237ec8662a7f52d5e04215ccf8ed2
#define ConVar_Player_Static_ClassName           \
    "%1cc1a3da6f6b68960353cdd6b77eddcd8aafd472/" \
    "%eeb77896dba237ec8662a7f52d5e04215ccf8ed2"
#define ConVar_Player_Static_ClassNameShort \
    "%eeb77896dba237ec8662a7f52d5e04215ccf8ed2"
#define ConVar_Player_Static_TypeDefinitionIndex 7502

namespace ConVar_Player_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c63780;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t clientTickInterval = 0x0;

// Functions
constexpr const static size_t clientTickRate_getter = 0x52fb4a0;
constexpr const static size_t clientTickRate_setter = 0x53514a0;
}  // namespace ConVar_Player_Static_Offsets

#define ColliderInfo_TypeDefinitionIndex 6828

namespace ColliderInfo_Offsets {

// Offsets
constexpr const static size_t flags = 0x20;
}  // namespace ColliderInfo_Offsets

#define CodeLock_TypeDefinitionIndex 1539

namespace CodeLock_Offsets {

// Offsets
constexpr const static size_t hasCode      = 0x270;
constexpr const static size_t HasAuth      = 0x280;
constexpr const static size_t HasGuestAuth = 0x281;
}  // namespace CodeLock_Offsets

#define AutoTurret_TypeDefinitionIndex 5523

namespace AutoTurret_Offsets {

// Offsets
constexpr const static size_t authorizedPlayers = 0x3c0;
constexpr const static size_t lastYaw           = 0x440;
constexpr const static size_t muzzlePos         = 0x4b0;
constexpr const static size_t gun_yaw           = 0x4c8;
constexpr const static size_t gun_pitch         = 0x4d0;
constexpr const static size_t sightRange        = 0x4d8;
}  // namespace AutoTurret_Offsets

#define Client_TypeDefinitionIndex 2915

namespace Client_Offsets {

// Functions
constexpr const static size_t OnClientDisconnected           = 0x0;
constexpr const static size_t OnClientDisconnected_vtableoff = 0x0;
}  // namespace Client_Offsets

// obf name: ::%c63f6c0bbf62a3ec16378565e291b09112de1025
#define ItemManager_Static_ClassName             \
    "%ea702d6ec468522fe62362e8622adf637efeaab0/" \
    "%c63f6c0bbf62a3ec16378565e291b09112de1025"
#define ItemManager_Static_ClassNameShort \
    "%c63f6c0bbf62a3ec16378565e291b09112de1025"
#define ItemManager_Static_TypeDefinitionIndex 345

namespace ItemManager_Static_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bfef40;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t itemList             = 0xc8;
constexpr const static size_t itemDictionary       = 0x128;
constexpr const static size_t itemDictionaryByName = 0x230;
}  // namespace ItemManager_Static_Offsets

// obf name: ::%29d8ec02e953ec416c8880014e1b52ba2bfce5dd
#define ConVar_Server_Static_ClassName \
    "%29d8ec02e953ec416c8880014e1b52ba2bfce5dd"
#define ConVar_Server_Static_ClassNameShort \
    "%29d8ec02e953ec416c8880014e1b52ba2bfce5dd"
#define ConVar_Server_Static_TypeDefinitionIndex 3918

namespace ConVar_Server_Static_Offsets {

// Offsets
}

#define UI_LoadingScreen_TypeDefinitionIndex 9671

namespace UI_LoadingScreen_Offsets {

// Offsets
constexpr const static size_t panel = 0x30;
}  // namespace UI_LoadingScreen_Offsets

#define MixerSnapshotManager_TypeDefinitionIndex 5728

namespace MixerSnapshotManager_Offsets {

// Offsets
constexpr const static size_t defaultSnapshot = 0x20;
constexpr const static size_t loadingSnapshot = 0x30;
}  // namespace MixerSnapshotManager_Offsets

#define MapView_Static_ClassName \
    "MapView/%bfff6d9a849afa29a7d9c7ce3d927905a93abe30"
#define MapView_Static_ClassNameShort \
    "%bfff6d9a849afa29a7d9c7ce3d927905a93abe30"
#define MapView_TypeDefinitionIndex 3234

namespace MapView_Offsets {

// Functions
constexpr const static size_t WorldPosToImagePos = 0x0;
}  // namespace MapView_Offsets

// obf name: ::GamePhysics
#define GamePhysics_ClassName           "GamePhysics"
#define GamePhysics_ClassNameShort      "GamePhysics"
#define GamePhysics_TypeDefinitionIndex 1958

namespace GamePhysics_Offsets {

// Functions
constexpr const static size_t Trace               = 0x0;
constexpr const static size_t LineOfSightInternal = 0x0;
constexpr const static size_t Verify              = 0x0;
}  // namespace GamePhysics_Offsets

#define InstancedDebugDraw_TypeDefinitionIndex 7529

namespace InstancedDebugDraw_Offsets {

// Functions
constexpr const static size_t AddInstance = 0x5669520;
}  // namespace InstancedDebugDraw_Offsets

#define ThrownWeapon_TypeDefinitionIndex 8114

namespace ThrownWeapon_Offsets {

// Offsets
constexpr const static size_t maxThrowVelocity = 0x388;
}  // namespace ThrownWeapon_Offsets

#define MapInterface_TypeDefinitionIndex 2797

namespace MapInterface_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bbb760;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t scrollRectZoom = 0x30;
}  // namespace MapInterface_Offsets

#define ScrollRectZoom_TypeDefinitionIndex 8849

namespace ScrollRectZoom_Offsets {

// Offsets
constexpr const static size_t zoom = 0x28;
}  // namespace ScrollRectZoom_Offsets

#define MapView_TypeDefinitionIndex 3234

namespace MapView_Offsets {

// Offsets
constexpr const static size_t scrollRect = 0x40;
}  // namespace MapView_Offsets

#define StorageContainer_TypeDefinitionIndex 5467

namespace StorageContainer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10cc7580;

// Offsets
constexpr const static size_t inventorySlots = 0x320;
}  // namespace StorageContainer_Offsets

#define PlayerCorpse_TypeDefinitionIndex 7108

namespace PlayerCorpse_Offsets {

// Offsets
constexpr const static size_t clientClothing = 0x350;
}  // namespace PlayerCorpse_Offsets

#define TimedExplosive_TypeDefinitionIndex 2880

namespace TimedExplosive_Offsets {

// Offsets
constexpr const static size_t explosionRadius = 0x20c;
}  // namespace TimedExplosive_Offsets

#define SmokeGrenade_TypeDefinitionIndex 238

namespace SmokeGrenade_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10bd0de0;

// Offsets
constexpr const static size_t smokeEffectInstance = 0x2b0;
}  // namespace SmokeGrenade_Offsets

#define GrenadeWeapon_TypeDefinitionIndex 9182

namespace GrenadeWeapon_Offsets {

// Offsets
constexpr const static size_t drop = 0x3ac;
}  // namespace GrenadeWeapon_Offsets

#define ViewmodelLower_TypeDefinitionIndex 5556

namespace ViewmodelLower_Offsets {

// Offsets
constexpr const static size_t lowerOnSprint       = 0x20;
constexpr const static size_t lowerWhenCantAttack = 0x21;
constexpr const static size_t shouldLower         = 0x28;
constexpr const static size_t rotateAngle         = 0x2c;
}  // namespace ViewmodelLower_Offsets

#define SamSite_TypeDefinitionIndex 5520

namespace SamSite_Offsets {

// Offsets
constexpr const static size_t staticRespawn   = 0x420;
constexpr const static size_t Flag_TargetMode = 0x45c;
}  // namespace SamSite_Offsets

#define ServerProjectile_TypeDefinitionIndex 5832

namespace ServerProjectile_Offsets {

// Offsets
constexpr const static size_t drag            = 0x34;
constexpr const static size_t gravityModifier = 0x38;
constexpr const static size_t speed           = 0x3c;
constexpr const static size_t radius          = 0x5c;
}  // namespace ServerProjectile_Offsets

#define UIFogOverlay_TypeDefinitionIndex 6690

namespace UIFogOverlay_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10ba3a88;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t group    = 0x20;
constexpr const static size_t Instance = 0x30;
}  // namespace UIFogOverlay_Offsets

#define FoliageGrid_TypeDefinitionIndex 3062

namespace FoliageGrid_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10c3ef68;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t CellSize = 0x28;
}  // namespace FoliageGrid_Offsets

#define ItemModWearable_TypeDefinitionIndex 2853

namespace ItemModWearable_Offsets {

// Offsets
constexpr const static size_t movementProperties = 0x50;
}  // namespace ItemModWearable_Offsets

#define ClothingMovementProperties_TypeDefinitionIndex 3639

namespace ClothingMovementProperties_Offsets {

// Offsets
constexpr const static size_t speedReduction = 0x18;
}  // namespace ClothingMovementProperties_Offsets

#define GestureConfig_TypeDefinitionIndex 6441

namespace GestureConfig_Offsets {

// Offsets
constexpr const static size_t actionType = 0x90;
}  // namespace GestureConfig_Offsets

#define RCMenu_TypeDefinitionIndex 669

namespace RCMenu_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bbb070;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t autoTurretFogDistance = 0x13c;
}  // namespace RCMenu_Offsets

// obf name: ::%1252503058087ca06a0d107650a3ea5321d64f38
#define Facepunch_Network_Raknet_Client_ClassName \
    "%1252503058087ca06a0d107650a3ea5321d64f38"
#define Facepunch_Network_Raknet_Client_ClassNameShort \
    "%1252503058087ca06a0d107650a3ea5321d64f38"
#define Facepunch_Network_Raknet_Client_TypeDefinitionIndex 1

namespace Facepunch_Network_Raknet_Client_Offsets {

// Functions
constexpr const static size_t IsConnected           = 0x8cfec0;
constexpr const static size_t IsConnected_vtableoff = 0x1a8;
}  // namespace Facepunch_Network_Raknet_Client_Offsets

// obf name: ::%e9133b8cf245d7788fa60fcf1beffea8168cd52a
#define EncryptedValue_ClassName \
    "%e9133b8cf245d7788fa60fcf1beffea8168cd52a<System/UInt64>"
#define EncryptedValue_ClassNameShort \
    "%e9133b8cf245d7788fa60fcf1beffea8168cd52a"
#define EncryptedValue_TypeDefinitionIndex 8053

namespace EncryptedValue_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10dad780;

// Offsets
constexpr const static size_t _value   = 0x0;
constexpr const static size_t _padding = 0x18;
}  // namespace EncryptedValue_Offsets

// obf name: ::%b4ba15533c6ff05f0f46fed042b4d34e5d261fbe
#define HiddenValue_ClassName                                    \
    "%b4ba15533c6ff05f0f46fed042b4d34e5d261fbe<BaseNetworkable/" \
    "%15247d48b314fa7c7e2265a68c0ffb7ae9cbde22>"
#define HiddenValue_ClassNameShort      "%b4ba15533c6ff05f0f46fed042b4d34e5d261fbe"
#define HiddenValue_TypeDefinitionIndex 6774

namespace HiddenValue_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10bbb410;

// Offsets
constexpr const static size_t _handle      = 0x18;
constexpr const static size_t _accessCount = 0x10;
constexpr const static size_t _hasValue    = 0x14;
}  // namespace HiddenValue_Offsets

#define ItemModRFListener_TypeDefinitionIndex 6660

namespace ItemModRFListener_Offsets {

// Functions
constexpr const static size_t ConfigureClicked = 0x0;
}  // namespace ItemModRFListener_Offsets

// obf name: ::%986f54ae114680bd6912d22cfffd45415ad56546
#define BufferStream_ClassName           "%986f54ae114680bd6912d22cfffd45415ad56546"
#define BufferStream_ClassNameShort      "%986f54ae114680bd6912d22cfffd45415ad56546"
#define BufferStream_TypeDefinitionIndex 995

namespace BufferStream_Offsets {

// Offsets
constexpr const static size_t _buffer = 0x20;

// Functions
constexpr const static size_t EnsureCapacity = 0xb60c5d0;
}  // namespace BufferStream_Offsets

#define FreeableLootContainer_TypeDefinitionIndex 7859

namespace FreeableLootContainer_Offsets {

// Offsets
}

#define BlowPipeWeapon_TypeDefinitionIndex 8876

namespace BlowPipeWeapon_Offsets {

// Offsets
}

#define AttackHelicopterRockets_TypeDefinitionIndex 3756

namespace AttackHelicopterRockets_Offsets {

// Functions
constexpr const static size_t GetProjectedHitPos = 0x2a2a0b0;
}  // namespace AttackHelicopterRockets_Offsets

#define OutlineManager_TypeDefinitionIndex 8711

namespace OutlineManager_Offsets {

// Offsets
}

// obf name: ::%0ad64aee33cf0b2a97f4ca73c8da06a1d7d5b573
#define ConsoleSystem_Command_ClassName          \
    "%3b1f7f18b8ef19b17dafed2db0070144a25a3536/" \
    "%0ad64aee33cf0b2a97f4ca73c8da06a1d7d5b573"
#define ConsoleSystem_Command_ClassNameShort \
    "%0ad64aee33cf0b2a97f4ca73c8da06a1d7d5b573"
#define ConsoleSystem_Command_TypeDefinitionIndex 7

namespace ConsoleSystem_Command_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c2bb58;

// Offsets
constexpr const static size_t GetOveride = 0x50;
constexpr const static size_t SetOveride = 0x10;
constexpr const static size_t Call       = 0x80;
}  // namespace ConsoleSystem_Command_Offsets

// obf name: ::%87e3ef2353e2600487ffcd28003021ff79f4deae
#define ConsoleSystem_Arg_ClassName              \
    "%3b1f7f18b8ef19b17dafed2db0070144a25a3536/" \
    "%87e3ef2353e2600487ffcd28003021ff79f4deae"
#define ConsoleSystem_Arg_ClassNameShort \
    "%87e3ef2353e2600487ffcd28003021ff79f4deae"
#define ConsoleSystem_Arg_TypeDefinitionIndex 3

namespace ConsoleSystem_Arg_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x10c319d0;

// Offsets
constexpr const static size_t Option = 0x0;
}  // namespace ConsoleSystem_Arg_Offsets

// obf name: ::%b4a4ad09820c0838e1006242ff395b2f92ed5dcb
#define ConsoleSystem_Index_Client_ClassName      \
    "%3b1f7f18b8ef19b17dafed2db0070144a25a3536/"  \
    "%659d0ebd747d1d180d340f9b604cd2885f2dc741.%" \
    "b4a4ad09820c0838e1006242ff395b2f92ed5dcb"
#define ConsoleSystem_Index_Client_ClassNameShort \
    "%b4a4ad09820c0838e1006242ff395b2f92ed5dcb"
#define ConsoleSystem_Index_Client_TypeDefinitionIndex 11

namespace ConsoleSystem_Index_Client_Offsets {

// Functions
constexpr const static size_t Find = 0x73122e0;
}  // namespace ConsoleSystem_Index_Client_Offsets

#define String_TypeDefinitionIndex 142

namespace String_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x110d56c0;
constexpr auto                  static_fields = 0xb8;

// Offsets
constexpr const static size_t FastAllocateString = 0x9d60750;
}  // namespace String_Offsets

// obf name: ::%425eb0f2ef259d12583149649e74038ce49e0fde
#define EntityRef_ClassName           "%425eb0f2ef259d12583149649e74038ce49e0fde"
#define EntityRef_ClassNameShort      "%425eb0f2ef259d12583149649e74038ce49e0fde"
#define EntityRef_TypeDefinitionIndex 75

namespace EntityRef_Offsets {

// Offsets
constexpr const static size_t Get = 0x4a0fb50;
}  // namespace EntityRef_Offsets

// obf name: ConVar::Debugging
#define ConVar_Debugging_ClassName           "ConVar/Debugging"
#define ConVar_Debugging_ClassNameShort      "Debugging"
#define ConVar_Debugging_TypeDefinitionIndex 1901

namespace ConVar_Debugging_Offsets {

// Functions
}

#define CursorManager_TypeDefinitionIndex 4925

namespace CursorManager_Offsets {
inline constexpr std::uintptr_t typeinfo      = 0x10bc73e8;
constexpr auto                  static_fields = 0xb8;


} 
