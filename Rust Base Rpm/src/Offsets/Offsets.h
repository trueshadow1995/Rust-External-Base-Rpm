// Dump generated on: 2026-09-03 17:30:58 MDT (UTC-6)
// Rust buildid: 25086780
#pragma once
#include <cstdint>
namespace GameAssembly {
constexpr const static size_t timestamp = 0x6a98660c;
constexpr const static size_t il2cpp_resolve_icall = 0x87d120;
constexpr const static size_t il2cpp_array_new = 0x87d140;
constexpr const static size_t il2cpp_assembly_get_image = 0x3c60;
constexpr const static size_t il2cpp_class_from_name = 0x867330;
constexpr const static size_t il2cpp_class_get_method_from_name = 0x87d540;
constexpr const static size_t il2cpp_class_get_type = 0x75b8b0;
constexpr const static size_t il2cpp_domain_get = 0x87de60;
constexpr const static size_t il2cpp_domain_get_assemblies = 0x87de80;
constexpr const static size_t il2cpp_gchandle_get_target = 0x87e590;
constexpr const static size_t il2cpp_gchandle_new = 0x87e540;
constexpr const static size_t il2cpp_gchandle_free = 0x87e630;
constexpr const static size_t il2cpp_method_get_name = 0xc4d0;
constexpr const static size_t il2cpp_object_new = 0x87eed0;
constexpr const static size_t il2cpp_type_get_object = 0x880000;
}  // namespace GameAssembly

#define Object_TypeDefinitionIndex 464

namespace Object_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118ea608;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t m_CachedPtr = 0x10;

// Functions
constexpr const static size_t GetInstanceID = 0xe9ec580;
constexpr const static size_t Destroy = 0xe9ed5a0;
constexpr const static size_t DestroyImmediate = 0xe9ed6d0;
constexpr const static size_t DontDestroyOnLoad = 0xe9ed8d0;
constexpr const static size_t FindObjectFromInstanceID = 0xe9eed90;
constexpr const static size_t GetName = 0xc8040;
constexpr const static size_t get_hideFlags = 0xe9ed9c0;
constexpr const static size_t set_hideFlags = 0xe9eda80;
}  // namespace Object_Offsets

#define GameObject_TypeDefinitionIndex 431

namespace GameObject_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118f6930;

// Functions
constexpr const static size_t SetActive = 0xe9e4b00;
constexpr const static size_t Internal_AddComponentWithType = 0xe9e4560;
constexpr const static size_t GetComponent = 0xe9e3980;
constexpr const static size_t GetComponentCount = 0xe9e4640;
constexpr const static size_t GetComponentInChildren = 0xe9e3b10;
constexpr const static size_t GetComponentInParent = 0xe9e3c00;
constexpr const static size_t GetComponentsInternal = 0xe9e3cf0;
constexpr const static size_t Internal_CreateGameObject = 0xe9e5d40;
constexpr const static size_t get_layer = 0xe9e4860;
constexpr const static size_t get_tag = 0xe9e4f90;
constexpr const static size_t get_transform = 0xe9e46e0;
}  // namespace GameObject_Offsets

#define Component_TypeDefinitionIndex 417

namespace Component_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11927d58;

// Functions
constexpr const static size_t get_gameObject = 0xe9df6a0;
constexpr const static size_t get_transform = 0xe9df5e0;
}  // namespace Component_Offsets

#define Behaviour_TypeDefinitionIndex 412

namespace Behaviour_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11818980;

// Functions
constexpr const static size_t get_enabled = 0xae4aa0;
constexpr const static size_t set_enabled = 0xe9de9c0;
}  // namespace Behaviour_Offsets

#define Transform_TypeDefinitionIndex 506

namespace Transform_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1180f7b0;

// Functions
constexpr const static size_t get_eulerAngles = 0xe9fcfc0;
constexpr const static size_t GetChild = 0xea01e20;
constexpr const static size_t GetParent = 0xe9fe5f0;
constexpr const static size_t GetRoot = 0xea01040;
constexpr const static size_t InverseTransformDirection_Injected = 0xd0570;
constexpr const static size_t InverseTransformPoint_Injected = 0xd08d0;
constexpr const static size_t InverseTransformVector_Injected = 0xd0730;
constexpr const static size_t GetPositionAndRotation = 0xe9feaa0;
constexpr const static size_t SetLocalPositionAndRotation_Injected = 0xd03a0;
constexpr const static size_t SetPositionAndRotation_Injected = 0xd0360;
constexpr const static size_t TransformDirection_Injected = 0xd04a0;
constexpr const static size_t TransformPoint_Injected = 0xd0800;
constexpr const static size_t TransformVector_Injected = 0xd0660;
constexpr const static size_t get_childCount = 0xea01100;
constexpr const static size_t get_forward_Injected = 0xe9fdc20;
constexpr const static size_t get_right_Injected = 0xe9fd400;
constexpr const static size_t get_up_Injected = 0xe9fd810;
constexpr const static size_t get_localPosition_Injected = 0xcfe50;
constexpr const static size_t get_localRotation_Injected = 0xcff90;
constexpr const static size_t get_localScale_Injected = 0xd0070;
constexpr const static size_t get_lossyScale_Injected = 0xd0f50;
constexpr const static size_t get_position_Injected = 0xcfde0;
constexpr const static size_t get_rotation_Injected = 0xcff00;
constexpr const static size_t set_localPosition_Injected = 0xcfe80;
constexpr const static size_t set_localRotation_Injected = 0xd0030;
constexpr const static size_t set_localScale_Injected = 0xd00a0;
constexpr const static size_t set_position_Injected = 0xcfe10;
constexpr const static size_t set_rotation_Injected = 0xcff50;
}  // namespace Transform_Offsets

#define Camera_TypeDefinitionIndex 168

namespace Camera_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118610e8;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t get_main = 0xe95d9c0;
constexpr const static size_t WorldToScreenPoint_Injected = 0x7a350;
constexpr const static size_t ScreenToWorldPoint_Injected = 0x7a600;
constexpr const static size_t GetAllCamerasCount = 0xe95e510;
constexpr const static size_t CopyFrom = 0xe95ed50;
constexpr const static size_t get_fieldOfView = 0xe957c10;
constexpr const static size_t set_fieldOfView = 0xe957cb0;
constexpr const static size_t get_nearClipPlane = 0xe957970;
constexpr const static size_t set_nearClipPlane = 0xe957a10;
constexpr const static size_t get_farClipPlane = 0xe957ac0;
constexpr const static size_t set_farClipPlane = 0xe957b60;
constexpr const static size_t get_depth = 0xe958930;
constexpr const static size_t set_depth = 0xe9589d0;
constexpr const static size_t get_projectionMatrix_Injected = 0x7a1a0;
constexpr const static size_t set_projectionMatrix_Injected = 0x7a1e0;
constexpr const static size_t set_cullingMask = 0xe958dd0;
constexpr const static size_t set_clearFlags = 0xe959cf0;
constexpr const static size_t set_backgroundColor_Injected = 0x78b50;
constexpr const static size_t set_targetTexture = 0xe95bb60;
constexpr const static size_t Render = 0xe95e930;
constexpr const static size_t RenderWithShader = 0xe95e9d0;
}  // namespace Camera_Offsets

#define Time_TypeDefinitionIndex 490

namespace Time_Offsets {

// Functions
constexpr const static size_t get_deltaTime = 0x8164830;
constexpr const static size_t get_fixedDeltaTime = 0x8165a70;
constexpr const static size_t get_fixedTime = 0x8165cf0;
constexpr const static size_t get_frameCount = 0xe9f6f30;
constexpr const static size_t get_realtimeSinceStartup = 0x809a280;
constexpr const static size_t get_smoothDeltaTime = 0xe9f6dd0;
constexpr const static size_t get_time = 0x809aba0;
}  // namespace Time_Offsets

#define Material_TypeDefinitionIndex 242

namespace Material_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118ef798;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t SetFloatImpl = 0xe9947b0;
constexpr const static size_t SetColorImpl_Injected = 0x9e2a0;
constexpr const static size_t SetTextureImpl = 0xe994a50;
constexpr const static size_t CreateWithMaterial = 0xe9910c0;
constexpr const static size_t CreateWithShader = 0xe990fc0;
constexpr const static size_t SetBufferImpl = 0xe994b70;
constexpr const static size_t set_shader = 0xe991590;
constexpr const static size_t get_shader = 0xe9914b0;
}  // namespace Material_Offsets

#define MaterialPropertyBlock_TypeDefinitionIndex 237

namespace MaterialPropertyBlock_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1180beb0;

// Functions
constexpr const static size_t ctor = 0xe986430;
constexpr const static size_t SetFloatImpl = 0xe984aa0;
constexpr const static size_t SetTextureImpl = 0xe985670;
}  // namespace MaterialPropertyBlock_Offsets

#define Shader_TypeDefinitionIndex 241

namespace Shader_Offsets {

// Functions
constexpr const static size_t Find = 0xe98d900;
constexpr const static size_t PropertyToID = 0xe98e880;
constexpr const static size_t GetPropertyCount = 0xe990080;
constexpr const static size_t GetPropertyName = 0xe98fb10;
constexpr const static size_t GetPropertyType = 0xe98fc70;
}  // namespace Shader_Offsets

#define Mesh_TypeDefinitionIndex 301

namespace Mesh_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118f66e8;

// Functions
constexpr const static size_t Internal_Create = 0xe9a0b90;
constexpr const static size_t MarkDynamicImpl = 0xe9a4400;
constexpr const static size_t ClearImpl = 0xe9a4140;
constexpr const static size_t set_subMeshCount = 0xe9a3c40;
constexpr const static size_t SetVertexBufferParamsFromPtr = 0xa4aa0;
constexpr const static size_t InternalSetVertexBufferData = 0xa4b50;
constexpr const static size_t UploadMeshDataImpl = 0xe9a4540;
}  // namespace Mesh_Offsets

#define Renderer_TypeDefinitionIndex 239

namespace Renderer_Offsets {

// Functions
constexpr const static size_t get_enabled = 0xe988ae0;
constexpr const static size_t get_isVisible = 0xe988c30;
constexpr const static size_t GetMaterial = 0xe9880f0;
constexpr const static size_t GetMaterialArray = 0xe988350;
}  // namespace Renderer_Offsets

#define Texture_TypeDefinitionIndex 306

namespace Texture_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11938988;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t set_filterMode = 0xe9b1770;
constexpr const static size_t GetNativeTexturePtr = 0xe9b1c30;
}  // namespace Texture_Offsets

#define Texture2D_TypeDefinitionIndex 307

namespace Texture2D_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118ef8f8;

// Functions
constexpr const static size_t ctor = 0xe9b5e40;
constexpr const static size_t Internal_CreateImpl = 0xac3a0;
constexpr const static size_t GetWritableImageData = 0xe9b4ca0;
constexpr const static size_t ApplyImpl = 0xe9b4210;
}  // namespace Texture2D_Offsets

#define Sprite_TypeDefinitionIndex 144

namespace Sprite_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1192dd08;

// Functions
constexpr const static size_t get_texture = 0xe94f750;
}  // namespace Sprite_Offsets

#define RenderTexture_TypeDefinitionIndex 313

namespace RenderTexture_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1186b168;

// Functions
constexpr const static size_t GetTemporary = 0xe9c2100;
constexpr const static size_t ReleaseTemporary = 0xe9bfaa0;
}  // namespace RenderTexture_Offsets

#define CommandBuffer_TypeDefinitionIndex 896

namespace CommandBuffer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118623b8;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t ctor = 0xea2f780;
constexpr const static size_t Clear = 0xea238e0;
constexpr const static size_t SetRenderTargetSingle_Internal_Injected = 0xefcc0;
constexpr const static size_t ClearRenderTarget_Injected = 0xea27610;
constexpr const static size_t SetViewport_Injected = 0xe95e0;
constexpr const static size_t SetViewProjectionMatrices_Injected = 0xee8b0;
constexpr const static size_t EnableScissorRect_Injected = 0xe96a0;
constexpr const static size_t DisableScissorRect = 0xea250d0;
constexpr const static size_t Internal_DrawProceduralIndexedIndirect_Injected =
    0xe9100;
constexpr const static size_t Internal_DrawMesh_Injected = 0xe8130;
constexpr const static size_t Internal_DrawRenderer = 0xea23ce0;
}  // namespace CommandBuffer_Offsets

#define RenderTargetIdentifier_TypeDefinitionIndex 856

namespace RenderTargetIdentifier_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1189a4a0;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t ctor = 0xea1a6c0;
}  // namespace RenderTargetIdentifier_Offsets

#define ComputeBuffer_TypeDefinitionIndex 480

namespace ComputeBuffer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1185eed8;

// Functions
constexpr const static size_t ctor = 0xe9f1030;
constexpr const static size_t get_count = 0xe9f1350;
constexpr const static size_t Release = 0xe9f1270;
constexpr const static size_t InternalSetNativeData = 0xe9f1920;
}  // namespace ComputeBuffer_Offsets

#define GraphicsBuffer_TypeDefinitionIndex 244

namespace GraphicsBuffer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1192ce98;

// Functions
constexpr const static size_t ctor = 0xe998810;
constexpr const static size_t get_count = 0xe998d80;
constexpr const static size_t Dispose = 0xe998510;
constexpr const static size_t InternalSetNativeData = 0xe999350;
}  // namespace GraphicsBuffer_Offsets

#define Event_TypeDefinitionIndex 1

namespace Event_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1180f940;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t get_current = 0xea673d0;
constexpr const static size_t get_type = 0xea66440;
constexpr const static size_t PopEvent = 0xea66990;
constexpr const static size_t Internal_Use = 0xea66780;
}  // namespace Event_Offsets

#define Graphics_TypeDefinitionIndex 217

namespace Graphics_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118ef7a0;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t Internal_BlitMaterial5 = 0xe9770c0;
constexpr const static size_t ExecuteCommandBuffer = 0xe977660;
}  // namespace Graphics_Offsets

#define Matrix4x4_TypeDefinitionIndex 339

namespace Matrix4x4_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118572c0;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t Ortho_Injected = 0xb5fa0;
}  // namespace Matrix4x4_Offsets

#define AssetBundle_TypeDefinitionIndex 1

namespace AssetBundle_Offsets {

// Functions
constexpr const static size_t LoadFromFile_Internal = 0xe9376e0;
constexpr const static size_t LoadAsset_Internal = 0xe937b80;
constexpr const static size_t Unload = 0xe9382f0;
}  // namespace AssetBundle_Offsets

#define Screen_TypeDefinitionIndex 214

namespace Screen_Offsets {

// Functions
constexpr const static size_t get_width = 0x81df8b0;
constexpr const static size_t get_height = 0x81df900;
}  // namespace Screen_Offsets

#define Input_TypeDefinitionIndex 9

namespace Input_Offsets {
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t get_mousePosition_Injected = 0x1ac900;
constexpr const static size_t get_mouseScrollDelta_Injected = 0x1acad0;
constexpr const static size_t GetMouseButtonDown = 0xeaab790;
constexpr const static size_t GetMouseButtonUp = 0xeaab7e0;
constexpr const static size_t GetMouseButton = 0xeaab740;
constexpr const static size_t GetKeyDownInt = 0xeaab6f0;
constexpr const static size_t GetKeyUpInt = 0xeaab6a0;
constexpr const static size_t GetKeyInt = 0xeaab650;
}  // namespace Input_Offsets

#define Application_TypeDefinitionIndex 151

namespace Application_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118f2020;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t get_version = 0xe954540;
constexpr const static size_t Quit = 0xe9533c0;
constexpr const static size_t get_isFocused = 0xe9537d0;
}  // namespace Application_Offsets

#define Gradient_TypeDefinitionIndex 336

namespace Gradient_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118bd3d8;

// Functions
constexpr const static size_t SetKeys = 0xb5be0;
}  // namespace Gradient_Offsets

#define Physics_TypeDefinitionIndex 14

namespace Physics_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x117ffea8;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t Raycast = 0xead58a0;
constexpr const static size_t RaycastNonAlloc = 0xead7f00;
constexpr const static size_t CheckCapsule = 0xead9720;
}  // namespace Physics_Offsets

#define Image_TypeDefinitionIndex 39

namespace Image_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1187c198;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t m_Sprite = 0xe0;
}  // namespace Image_Offsets

#define GraphicsSettings_TypeDefinitionIndex 886

namespace GraphicsSettings_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118f1ed0;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t get_INTERNAL_defaultRenderPipeline = 0xea1b8d0;
}  // namespace GraphicsSettings_Offsets

#define Cursor_TypeDefinitionIndex 324

namespace Cursor_Offsets {

// Functions
constexpr const static size_t get_visible = 0xe9c5d90;
}  // namespace Cursor_Offsets

// ── Unity native struct offsets

namespace IL2CPP_String_Native {
constexpr size_t length = 0x10;
constexpr size_t chars = 0x14;
}  // namespace IL2CPP_String_Native

namespace IL2CPP_Array_Native {
constexpr size_t size = 0x18;
constexpr size_t data = 0x20;
}  // namespace IL2CPP_Array_Native

namespace IL2CPP_List_Native {
constexpr size_t items = 0x10;
constexpr size_t size = 0x18;
}  // namespace IL2CPP_List_Native

namespace IL2CPP_Dictionary_Native {
// FAILED: entries
// FAILED: count
constexpr size_t Entry_hashCode = 0x0;
constexpr size_t Entry_next = 0x4;
constexpr size_t Entry_key = 0x8;
constexpr size_t Entry_value = 0x10;
constexpr size_t Entry_stride = 0x18;
}  // namespace IL2CPP_Dictionary_Native

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
}  // namespace Unity_GameObject_Native

namespace Unity_Transform_Native {
constexpr size_t m_Hierarchy = 0x28;
constexpr size_t m_Index = 0x30;
constexpr size_t m_Children = 0x48;
}  // namespace Unity_Transform_Native

namespace Unity_TransformHierarchy_Native {
constexpr size_t m_LocalTransforms = 0x18;
constexpr size_t m_ParentIndices = 0x20;
constexpr size_t m_LocalPosition = 0x90;
}  // namespace Unity_TransformHierarchy_Native

namespace Unity_TrsX_Native {
constexpr size_t stride = 0x30;
}

namespace Unity_NativeRenderer_Native {
constexpr size_t m_Materials = 0x140;
constexpr size_t cameraViewMatrix = 0x2fc;
constexpr size_t cameraPosition = 0x444;
}  // namespace Unity_NativeRenderer_Native

#define BaseNetworkable_TypeDefinitionIndex 6694

namespace BaseNetworkable_Offsets {

// Offsets
constexpr const static size_t prefabID = 0x54;
constexpr const static size_t net = 0x70;
constexpr const static size_t parentEntity = 0x38;
constexpr const static size_t children = 0x68;
}  // namespace BaseNetworkable_Offsets

// obf name: ::%6fc41d2d3b6f8e1a6507bd1e62280a7dfea236b9
#define BaseNetworkable_Static_ClassName \
  "BaseNetworkable/%6fc41d2d3b6f8e1a6507bd1e62280a7dfea236b9"
#define BaseNetworkable_Static_ClassNameShort \
  "%6fc41d2d3b6f8e1a6507bd1e62280a7dfea236b9"
#define BaseNetworkable_Static_TypeDefinitionIndex 6701

namespace BaseNetworkable_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11811bf0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t clientEntities = 0x8;
}  // namespace BaseNetworkable_Static_Offsets

// obf name: ::%9b5072adb8c1069028d20e11ca49af86614076f0
#define BaseNetworkable_EntityRealm_ClassName \
  "BaseNetworkable/%9b5072adb8c1069028d20e11ca49af86614076f0"
#define BaseNetworkable_EntityRealm_ClassNameShort \
  "%9b5072adb8c1069028d20e11ca49af86614076f0"
#define BaseNetworkable_EntityRealm_TypeDefinitionIndex 6699

namespace BaseNetworkable_EntityRealm_Offsets {

// Offsets
constexpr const static size_t entityList = 0x10;

// Functions
constexpr const static size_t Find = 0x530b4b0;
}  // namespace BaseNetworkable_EntityRealm_Offsets

// obf name: ::%b398085096121231afa45a1dc1977d9bab194bae
#define System_ListDictionary_ClassName         \
  "%b398085096121231afa45a1dc1977d9bab194bae<%" \
  "e5ab0de35677a2ce066b1454be8bf3afdef44dac,BaseNetworkable>"
#define System_ListDictionary_ClassNameShort \
  "%b398085096121231afa45a1dc1977d9bab194bae"
#define System_ListDictionary_TypeDefinitionIndex 49

namespace System_ListDictionary_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118cf900;

// Offsets
constexpr const static size_t vals = 0x18;

// Functions
constexpr const static size_t TryGetValue = 0x9e9eb70;
constexpr const static size_t TryGetValue_methodinfo = 0x1185a650;
}  // namespace System_ListDictionary_Offsets

// obf name: ::%46619f52a81e504e1c494c2d98019d8dd5180966
#define System_BufferList_ClassName \
  "%46619f52a81e504e1c494c2d98019d8dd5180966<BaseNetworkable>"
#define System_BufferList_ClassNameShort \
  "%46619f52a81e504e1c494c2d98019d8dd5180966"
#define System_BufferList_TypeDefinitionIndex 43

namespace System_BufferList_Offsets {

// Offsets
constexpr const static size_t count = 0x18;
constexpr const static size_t buffer = 0x10;
}  // namespace System_BufferList_Offsets

// obf name: ::SingletonComponent`1
#define SingletonComponent_ClassName "SingletonComponent<MainCamera>"
#define SingletonComponent_ClassNameShort "SingletonComponent`1"
#define SingletonComponent_TypeDefinitionIndex 64

namespace SingletonComponent_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11811978;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t Instance = 0x8;
}  // namespace SingletonComponent_Offsets

#define Model_TypeDefinitionIndex 8645

namespace Model_Offsets {

// Offsets
constexpr const static size_t rootBone = 0x28;
constexpr const static size_t headBone = 0x30;
constexpr const static size_t eyeBone = 0x38;
constexpr const static size_t boneTransforms = 0x50;
}  // namespace Model_Offsets

#define BaseEntity_TypeDefinitionIndex 3289

namespace BaseEntity_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1181d2b0;

// Offsets
constexpr const static size_t bounds = 0x18c;
constexpr const static size_t model = 0x1b8;
constexpr const static size_t flags = 0x1c0;
constexpr const static size_t triggers = 0xe8;
constexpr const static size_t positionLerp = 0x110;

// Functions
constexpr const static size_t ServerRPC = 0x0;
constexpr const static size_t FindBone = 0x2ac45f0;
constexpr const static size_t GetWorldVelocity = 0x2ba8b20;
constexpr const static size_t GetParentVelocity = 0x2b3b8f0;
}  // namespace BaseEntity_Offsets

// obf name: ::%5f179d966ba587379a2bc7294db043c04714e8ff
#define PositionLerp_ClassName "%5f179d966ba587379a2bc7294db043c04714e8ff"
#define PositionLerp_ClassNameShort "%5f179d966ba587379a2bc7294db043c04714e8ff"
#define PositionLerp_TypeDefinitionIndex 6087

namespace PositionLerp_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t interpolator = 0x50;
}  // namespace PositionLerp_Offsets

// obf name: ::%a1a0470ae712add14d39775d709f8613fa93c6ad
#define Interpolator_ClassName                  \
  "%a1a0470ae712add14d39775d709f8613fa93c6ad<%" \
  "882ae5c07c93624316c5023b76dcbd7f6130310f>"
#define Interpolator_ClassNameShort "%a1a0470ae712add14d39775d709f8613fa93c6ad"
#define Interpolator_TypeDefinitionIndex 7407

namespace Interpolator_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1182cb10;

// Offsets
constexpr const static size_t list = 0x30;
constexpr const static size_t last = 0x10;
}  // namespace Interpolator_Offsets

#define BaseCombatEntity_TypeDefinitionIndex 8577

namespace BaseCombatEntity_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11902918;

// Offsets
constexpr const static size_t skeletonProperties = 0x230;
constexpr const static size_t baseProtection = 0x238;
constexpr const static size_t lifestate = 0x2a8;
constexpr const static size_t markAttackerHostile = 0x2ae;
constexpr const static size_t _health = 0x2b4;
constexpr const static size_t _maxHealth = 0x2b8;
constexpr const static size_t lastNotifyFrame = 0x2c8;
}  // namespace BaseCombatEntity_Offsets

#define SkeletonProperties_TypeDefinitionIndex 6504

namespace SkeletonProperties_Offsets {

// Offsets
constexpr const static size_t bones = 0x20;
constexpr const static size_t quickLookup = 0x28;
}  // namespace SkeletonProperties_Offsets

#define SkeletonProperties_BoneProperty_TypeDefinitionIndex 6505

namespace SkeletonProperties_BoneProperty_Offsets {

// Offsets
constexpr const static size_t boneName = 0x18;
constexpr const static size_t area = 0x20;
}  // namespace SkeletonProperties_BoneProperty_Offsets

#define DamageProperties_TypeDefinitionIndex 8711

namespace DamageProperties_Offsets {

// Offsets
constexpr const static size_t fallback = 0x18;
constexpr const static size_t bones = 0x20;
}  // namespace DamageProperties_Offsets

#define DamageProperties_HitAreaProperty_TypeDefinitionIndex 8712

namespace DamageProperties_HitAreaProperty_Offsets {

// Offsets
constexpr const static size_t area = 0x10;
constexpr const static size_t damage = 0x14;
}  // namespace DamageProperties_HitAreaProperty_Offsets

// obf name: ::%94cc35820905fb64ea0928bac3565dfe31e02eaa
#define DamageTypeList_ClassName "%94cc35820905fb64ea0928bac3565dfe31e02eaa"
#define DamageTypeList_ClassNameShort \
  "%94cc35820905fb64ea0928bac3565dfe31e02eaa"
#define DamageTypeList_TypeDefinitionIndex 6154

namespace DamageTypeList_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11846538;

// Offsets
constexpr const static size_t types = 0x10;
}  // namespace DamageTypeList_Offsets

#define ProtectionProperties_TypeDefinitionIndex 1517

namespace ProtectionProperties_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t amounts = 0x30;
}  // namespace ProtectionProperties_Offsets

#define ItemDefinition_TypeDefinitionIndex 6575

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
constexpr const static size_t ItemModWearable = 0x178;
}  // namespace ItemDefinition_Offsets

#define RecoilProperties_TypeDefinitionIndex 2905

namespace RecoilProperties_Offsets {

// Offsets
constexpr const static size_t recoilYawMin = 0x18;
constexpr const static size_t recoilYawMax = 0x1c;
constexpr const static size_t recoilPitchMin = 0x20;
constexpr const static size_t recoilPitchMax = 0x24;
constexpr const static size_t overrideAimconeWithCurve = 0x5c;
constexpr const static size_t aimconeProbabilityCurve = 0x70;
constexpr const static size_t newRecoilOverride = 0x80;
}  // namespace RecoilProperties_Offsets

#define BaseProjectile_Magazine_Definition_TypeDefinitionIndex 3791

namespace BaseProjectile_Magazine_Definition_Offsets {

// Offsets
constexpr const static size_t builtInSize = 0x0;
}  // namespace BaseProjectile_Magazine_Definition_Offsets

#define BaseProjectile_Magazine_TypeDefinitionIndex 3790

namespace BaseProjectile_Magazine_Offsets {

// Offsets
constexpr const static size_t definition = 0x10;
constexpr const static size_t capacity = 0x18;
constexpr const static size_t contents = 0x1c;
constexpr const static size_t ammoType = 0x20;
}  // namespace BaseProjectile_Magazine_Offsets

#define AttackEntity_TypeDefinitionIndex 4340

namespace AttackEntity_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1182a3b8;

// Offsets
constexpr const static size_t deployDelay = 0x2e8;
constexpr const static size_t repeatDelay = 0x2ec;
constexpr const static size_t animationDelay = 0x2f0;
constexpr const static size_t noHeadshots = 0x33e;
constexpr const static size_t nextAttackTime = 0x340;
constexpr const static size_t timeSinceDeploy = 0x358;

// Functions
constexpr const static size_t SpectatorNotifyTick = 0x0;
constexpr const static size_t StartAttackCooldown = 0x3726eb0;
}  // namespace AttackEntity_Offsets

#define BaseProjectile_TypeDefinitionIndex 3789

namespace BaseProjectile_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1182a3c8;

// Offsets
constexpr const static size_t projectileVelocityScale = 0x394;
constexpr const static size_t automatic = 0x398;
constexpr const static size_t reloadTime = 0x3d8;
constexpr const static size_t primaryMagazine = 0x3e0;
constexpr const static size_t fractionalReload = 0x3e8;
constexpr const static size_t aimSway = 0x400;
constexpr const static size_t aimSwaySpeed = 0x404;
constexpr const static size_t recoil = 0x408;
constexpr const static size_t aimconeCurve = 0x410;
constexpr const static size_t aimCone = 0x418;
constexpr const static size_t hipAimCone = 0x41c;
constexpr const static size_t noAimingWhileCycling = 0x435;
constexpr const static size_t isBurstWeapon = 0x43f;
constexpr const static size_t cachedModHash = 0x470;
constexpr const static size_t sightAimConeScale = 0x474;
constexpr const static size_t sightAimConeOffset = 0x478;
constexpr const static size_t hipAimConeScale = 0x47c;
constexpr const static size_t hipAimConeOffset = 0x480;

// Functions
constexpr const static size_t LaunchProjectile = 0x0;
constexpr const static size_t LaunchProjectileClientSide = 0x3159810;
constexpr const static size_t ScaleRepeatDelay = 0x3141100;
constexpr const static size_t GetAimCone = 0x0;
constexpr const static size_t GetAimCone_vtableoff = 0x0;
constexpr const static size_t UpdateAmmoDisplay = 0x0;
constexpr const static size_t UpdateAmmoDisplay_vtableoff = 0x0;
}  // namespace BaseProjectile_Offsets

#define BaseLauncher_TypeDefinitionIndex 4533

namespace BaseLauncher_Offsets {

// Offsets
}

#define SpinUpWeapon_TypeDefinitionIndex 8063

namespace SpinUpWeapon_Offsets {

// Offsets
}

// obf name: ::%4489165b12a947c8bb9572cfd3c642a4319df795
#define HitTest_ClassName "%4489165b12a947c8bb9572cfd3c642a4319df795"
#define HitTest_ClassNameShort "%4489165b12a947c8bb9572cfd3c642a4319df795"
#define HitTest_TypeDefinitionIndex 4604

namespace HitTest_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11835ec8;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t type = 0xdc;
constexpr const static size_t AttackRay = 0xa0;
constexpr const static size_t RayHit = 0x4c;
constexpr const static size_t damageProperties = 0xc0;
constexpr const static size_t gameObject = 0x98;
constexpr const static size_t collider = 0x18;
constexpr const static size_t ignoredTypes = 0x80;
constexpr const static size_t HitTransform = 0xb8;
constexpr const static size_t HitPart = 0xc8;
constexpr const static size_t HitMaterial = 0x28;
}  // namespace HitTest_Offsets

#define Projectile_TypeDefinitionIndex 8386

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
constexpr const static size_t sourceProjectilePrefab = 0x1e0;
constexpr const static size_t mod = 0x108;
constexpr const static size_t hitTest = 0x118;
constexpr const static size_t currentVelocity = 0x164;
constexpr const static size_t currentPosition = 0x170;
constexpr const static size_t sentPosition = 0x188;
constexpr const static size_t previousPosition = 0x194;
constexpr const static size_t previousVelocity = 0x1a0;

// Functions
constexpr const static size_t CalculateEffectScale = 0x66e72d0;
constexpr const static size_t CalculateEffectScale_vtableoff = 0x2c8;
constexpr const static size_t Retire = 0x66dc180;
constexpr const static size_t DoHit = 0x66ac9b0;
}  // namespace Projectile_Offsets

// obf name: ::%1178f44e2fd420e964f59d7143cc184dc767ac6f
#define HitInfo_ClassName "%1178f44e2fd420e964f59d7143cc184dc767ac6f"
#define HitInfo_ClassNameShort "%1178f44e2fd420e964f59d7143cc184dc767ac6f"
#define HitInfo_TypeDefinitionIndex 81

namespace HitInfo_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t damageProperties = 0x88;
constexpr const static size_t damageTypes = 0x50;

// Functions
constexpr const static size_t get_boneArea = 0x5d64480;
}  // namespace HitInfo_Offsets

#define BaseMelee_TypeDefinitionIndex 4649

namespace BaseMelee_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118ba480;

// Offsets
constexpr const static size_t damageProperties = 0x388;
constexpr const static size_t maxDistance = 0x3a0;
constexpr const static size_t attackRadius = 0x3a4;
constexpr const static size_t blockSprintOnAttack = 0x3a9;
constexpr const static size_t gathering = 0x3e0;
constexpr const static size_t canThrowAsProjectile = 0x380;

// Functions
constexpr const static size_t ProcessAttack = 0x0;
constexpr const static size_t DoThrow = 0x3a14520;
}  // namespace BaseMelee_Offsets

#define FlintStrikeWeapon_TypeDefinitionIndex 6156

namespace FlintStrikeWeapon_Offsets {

// Offsets
constexpr const static size_t successFraction = 0x4c0;
constexpr const static size_t strikeRecoil = 0x4c8;
constexpr const static size_t _didSparkThisFrame = 0x4d0;
}  // namespace FlintStrikeWeapon_Offsets

#define CompoundBowWeapon_TypeDefinitionIndex 7822

namespace CompoundBowWeapon_Offsets {

// Offsets
constexpr const static size_t stringHoldDurationMax = 0x4e8;
constexpr const static size_t stringBonusVelocity = 0x4f4;

// Functions
constexpr const static size_t GetStringBonusScale = 0x601dae0;
}  // namespace CompoundBowWeapon_Offsets

// obf name: ::%765a9d3567b6e7d14c89e6160cb469edc107a4b2
#define ItemContainer_ClassName "%765a9d3567b6e7d14c89e6160cb469edc107a4b2"
#define ItemContainer_ClassNameShort "%765a9d3567b6e7d14c89e6160cb469edc107a4b2"
#define ItemContainer_TypeDefinitionIndex 1522

namespace ItemContainer_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t uid = 0x18;
constexpr const static size_t itemList = 0x78;

// Functions
constexpr const static size_t GetSlot = 0x1672660;
}  // namespace ItemContainer_Offsets

#define PlayerLoot_TypeDefinitionIndex 7546

namespace PlayerLoot_Offsets {

// Offsets
constexpr const static size_t containers = 0x38;
}  // namespace PlayerLoot_Offsets

#define PlayerInventory_TypeDefinitionIndex 4709

namespace PlayerInventory_Offsets {

// Offsets
constexpr const static size_t containerWear = 0x28;
constexpr const static size_t containerMain = 0x38;
constexpr const static size_t containerBelt = 0x58;
constexpr const static size_t loot = 0x48;

// Functions
constexpr const static size_t Initialize = 0x3b2ba40;
}  // namespace PlayerInventory_Offsets

#define PlayerEyes_TypeDefinitionIndex 1315

namespace PlayerEyes_Offsets {

// Offsets
constexpr const static size_t viewOffset = 0x40;
constexpr const static size_t bodyRotation = 0x50;

// Functions
constexpr const static size_t get_position = 0x13b5540;
constexpr const static size_t get_rotation = 0x1394e40;
constexpr const static size_t set_rotation = 0x138e5d0;
constexpr const static size_t HeadForward = 0x1398960;
}  // namespace PlayerEyes_Offsets

// obf name: ::%82427a1bbd3511e5634cd064693fda2cffd9a56f
#define PlayerEyes_Static_ClassName \
  "PlayerEyes/%82427a1bbd3511e5634cd064693fda2cffd9a56f"
#define PlayerEyes_Static_ClassNameShort \
  "%82427a1bbd3511e5634cd064693fda2cffd9a56f"
#define PlayerEyes_Static_TypeDefinitionIndex 1316

namespace PlayerEyes_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118189a0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t EyeOffset = 0xa4;
}  // namespace PlayerEyes_Static_Offsets

// obf name: ::%c505dbc3ae2e10e49e3a2a83d649019c26347d0b
#define PlayerBelt_ClassName "%c505dbc3ae2e10e49e3a2a83d649019c26347d0b"
#define PlayerBelt_ClassNameShort "%c505dbc3ae2e10e49e3a2a83d649019c26347d0b"
#define PlayerBelt_TypeDefinitionIndex 4077

namespace PlayerBelt_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118ba4d8;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t ChangeSelect = 0x34b9000;
constexpr const static size_t GetActiveItem = 0x34b8380;
}  // namespace PlayerBelt_Offsets

// obf name: ::%dd26ec298f3560cf490636c6cd8f1871a8b7d4ce
#define LocalPlayer_ClassName "%dd26ec298f3560cf490636c6cd8f1871a8b7d4ce"
#define LocalPlayer_ClassNameShort "%dd26ec298f3560cf490636c6cd8f1871a8b7d4ce"
#define LocalPlayer_TypeDefinitionIndex 4174

namespace LocalPlayer_Offsets {
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t ItemCommand = 0x35a2360;
constexpr const static size_t MoveItem = 0x0;
constexpr const static size_t get_Entity = 0x35a0740;
}  // namespace LocalPlayer_Offsets

// obf name: ::%1edb061fab1c50299f17d818e2806b6ae1633970
#define LocalPlayer_Static_ClassName           \
  "%dd26ec298f3560cf490636c6cd8f1871a8b7d4ce/" \
  "%1edb061fab1c50299f17d818e2806b6ae1633970"
#define LocalPlayer_Static_ClassNameShort \
  "%1edb061fab1c50299f17d818e2806b6ae1633970"
#define LocalPlayer_Static_TypeDefinitionIndex 4177

namespace LocalPlayer_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118e8020;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t Entity = 0x8;
}  // namespace LocalPlayer_Static_Offsets

// obf name: ::%737a028f3c649479a206d24a137b7b107dd87442
#define BasePlayer_Static_ClassName \
  "BasePlayer/%737a028f3c649479a206d24a137b7b107dd87442"
#define BasePlayer_Static_ClassNameShort \
  "%737a028f3c649479a206d24a137b7b107dd87442"
#define BasePlayer_Static_TypeDefinitionIndex 5432

namespace BasePlayer_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118e2eb8;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t visiblePlayerList = 0x2e8;
}  // namespace BasePlayer_Static_Offsets

#define BasePlayer_TypeDefinitionIndex 5408

namespace BasePlayer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11811c10;

// Offsets
constexpr const static size_t playerModel = 0x520;
constexpr const static size_t input = 0x618;
constexpr const static size_t movement = 0x4b8;
constexpr const static size_t currentTeam = 0x558;
constexpr const static size_t clActiveItem = 0x588;
constexpr const static size_t modelState = 0x510;
constexpr const static size_t playerFlags = 0x6d8;
constexpr const static size_t eyes = 0x3c0;
constexpr const static size_t playerRigidbody = 0x5d8;
constexpr const static size_t userID = 0x720;
constexpr const static size_t UserIDString = 0x538;
constexpr const static size_t inventory = 0x540;
constexpr const static size_t _displayName = 0x708;
constexpr const static size_t _lookingAt = 0x6e8;
constexpr const static size_t lastSentTickTime = 0x698;
constexpr const static size_t CurrentTutorialAllowance = 0x0;
constexpr const static size_t nextVisThink = 0x0;
constexpr const static size_t lastSentTick = 0x498;
constexpr const static size_t mounted = 0x5e0;
constexpr const static size_t Belt = 0x3a8;
constexpr const static size_t _lookingAtEntity = 0x300;
constexpr const static size_t currentGesture = 0x438;
constexpr const static size_t weaponMoveSpeedScale = 0x7b8;
constexpr const static size_t clothingBlocksAiming = 0x7bc;
constexpr const static size_t clothingMoveSpeedReduction = 0x7c0;
constexpr const static size_t clothingWaterSpeedBonus = 0x7c4;
constexpr const static size_t equippingBlocked = 0x7cc;

// Functions
constexpr const static size_t MakeVisible = 0x0;
constexpr const static size_t ClientUpdateLocalPlayer = 0x0;
constexpr const static size_t Menu_AssistPlayer = 0x0;
constexpr const static size_t OnViewModeChanged = 0x0;
constexpr const static size_t ChatMessage = 0x0;
constexpr const static size_t IsOnGround = 0x43980d0;
constexpr const static size_t GetSpeed = 0x43b78f0;
constexpr const static size_t CanBuild = 0x43bfbe0;
constexpr const static size_t GetMounted = 0x43903c0;
constexpr const static size_t GetHeldEntity = 0x4446740;
constexpr const static size_t get_inventory = 0x448cd50;
constexpr const static size_t get_eyes = 0x44ef0f0;
constexpr const static size_t SendClientTick = 0x0;
constexpr const static size_t ClientInput = 0x0;
constexpr const static size_t ClientInput_vtableoff = 0x0;
constexpr const static size_t MaxHealth = 0x0;
constexpr const static size_t MaxHealth_vtableoff = 0x0;
constexpr const static size_t OnAttacked = 0x43e5b10;
constexpr const static size_t OnAttacked_vtableoff = 0x29b8;
constexpr const static size_t get_idealViewMode = 0x43a5bf0;
}  // namespace BasePlayer_Offsets

#define ScientistNPC_TypeDefinitionIndex 1356

namespace ScientistNPC_Offsets {

// Offsets
}

#define TunnelDweller_TypeDefinitionIndex 7023

namespace TunnelDweller_Offsets {

// Offsets
}

#define UnderwaterDweller_TypeDefinitionIndex 2356

namespace UnderwaterDweller_Offsets {

// Offsets
}

#define ScarecrowNPC_TypeDefinitionIndex 7352

namespace ScarecrowNPC_Offsets {

// Offsets
}

#define GingerbreadNPC_TypeDefinitionIndex 3194

namespace GingerbreadNPC_Offsets {

// Offsets
}

#define BaseMovement_TypeDefinitionIndex 4579

namespace BaseMovement_Offsets {

// Offsets
constexpr const static size_t adminCheat = 0x0;
constexpr const static size_t Owner = 0x30;
}  // namespace BaseMovement_Offsets

#define PlayerWalkMovement_TypeDefinitionIndex 1654

namespace PlayerWalkMovement_Offsets {

// Offsets
constexpr const static size_t capsule = 0xf8;
constexpr const static size_t ladder = 0xe0;
constexpr const static size_t modify = 0x1c0;

// Functions
constexpr const static size_t Init = 0x0;
constexpr const static size_t BlockJump = 0x0;
constexpr const static size_t BlockSprint = 0x0;
constexpr const static size_t GroundCheck = 0x1875410;
constexpr const static size_t ClientInput = 0x0;
constexpr const static size_t ClientInput_vtableoff = 0x0;
constexpr const static size_t DoFixedUpdate = 0x0;
constexpr const static size_t DoFixedUpdate_vtableoff = 0x0;
constexpr const static size_t FrameUpdate = 0x0;
constexpr const static size_t FrameUpdate_vtableoff = 0x0;
constexpr const static size_t TeleportTo = 0x0;
constexpr const static size_t TeleportTo_vtableoff = 0x0;
}  // namespace PlayerWalkMovement_Offsets

#define BuildingPrivlidge_TypeDefinitionIndex 8912

namespace BuildingPrivlidge_Offsets {

// Offsets
constexpr const static size_t allowedConstructionItems = 0x410;
constexpr const static size_t cachedProtectedMinutes = 0x418;
}  // namespace BuildingPrivlidge_Offsets

#define WorldItem_TypeDefinitionIndex 4316

namespace WorldItem_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11911470;

// Offsets
constexpr const static size_t allowPickup = 0x200;
constexpr const static size_t item = 0x208;
}  // namespace WorldItem_Offsets

#define HackableLockedCrate_TypeDefinitionIndex 1040

namespace HackableLockedCrate_Offsets {

// Offsets
constexpr const static size_t timerText = 0x400;
constexpr const static size_t hackSeconds = 0x410;
}  // namespace HackableLockedCrate_Offsets

#define ProjectileWeaponMod_TypeDefinitionIndex 8107

namespace ProjectileWeaponMod_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11878eb0;

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
}  // namespace ProjectileWeaponMod_Offsets

#define ProjectileWeaponMod_Modifier_TypeDefinitionIndex 8109

namespace ProjectileWeaponMod_Modifier_Offsets {
constexpr const static size_t enabled = 0x0;
constexpr const static size_t scalar = 0x4;
constexpr const static size_t offset = 0x8;
}  // namespace ProjectileWeaponMod_Modifier_Offsets

// obf name: ::%aafadd1937d3754805feefb3d96343581147a1f4
#define ConsoleSystem_ClassName "%aafadd1937d3754805feefb3d96343581147a1f4"
#define ConsoleSystem_ClassNameShort "%aafadd1937d3754805feefb3d96343581147a1f4"
#define ConsoleSystem_TypeDefinitionIndex 10

namespace ConsoleSystem_Offsets {

// Functions
constexpr const static size_t Run = 0x0;
}  // namespace ConsoleSystem_Offsets

// obf name: ::%2173db7bf49dbe2f062594a33832d989b772be32
#define ConsoleSystem_Index_Static_ClassName    \
  "%aafadd1937d3754805feefb3d96343581147a1f4/"  \
  "%9864aa36558fdfd8a7f6a2eaaefe4e15c323f553.%" \
  "2173db7bf49dbe2f062594a33832d989b772be32"
#define ConsoleSystem_Index_Static_ClassNameShort \
  "%2173db7bf49dbe2f062594a33832d989b772be32"
#define ConsoleSystem_Index_Static_TypeDefinitionIndex 24

namespace ConsoleSystem_Index_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118c8960;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t All = 0x0;
}  // namespace ConsoleSystem_Index_Static_Offsets

#define LootableCorpse_TypeDefinitionIndex 8138

namespace LootableCorpse_Offsets {

// Offsets
constexpr const static size_t playerSteamID = 0x318;
constexpr const static size_t _playerName = 0x328;
}  // namespace LootableCorpse_Offsets

#define DroppedItemContainer_TypeDefinitionIndex 6362

namespace DroppedItemContainer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1190f7a8;

// Offsets
constexpr const static size_t playerSteamID = 0x2e8;
constexpr const static size_t _playerName = 0x2d0;
}  // namespace DroppedItemContainer_Offsets

#define MainCamera_TypeDefinitionIndex 8483

namespace MainCamera_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1180ba28;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t mainCamera = 0x30;
constexpr const static size_t mainCameraTransform = 0x0;

// Functions
constexpr const static size_t Update = 0x67c4370;
constexpr const static size_t OnPreCull = 0x67c2d90;
constexpr const static size_t Trace = 0x0;
}  // namespace MainCamera_Offsets

#define CameraMan_TypeDefinitionIndex 4675

namespace CameraMan_Offsets {

// Offsets
constexpr const static size_t OnlyControlWhenCursorHidden = 0x20;
constexpr const static size_t NeedBothMouseButtonsToZoom = 0x21;
constexpr const static size_t LookSensitivity = 0x24;
constexpr const static size_t MoveSpeed = 0x28;
constexpr const static size_t canvas = 0x30;
constexpr const static size_t guides = 0x38;
}  // namespace CameraMan_Offsets

// obf name: ::%fda8bd197e20d83f601e662f0fec6f6a80ee9d81
#define PlayerTick_ClassName "%fda8bd197e20d83f601e662f0fec6f6a80ee9d81"
#define PlayerTick_ClassNameShort "%fda8bd197e20d83f601e662f0fec6f6a80ee9d81"
#define PlayerTick_TypeDefinitionIndex 419

namespace PlayerTick_Offsets {

// Offsets
constexpr const static size_t inputState = 0x38;
constexpr const static size_t modelState = 0x30;
constexpr const static size_t activeItem = 0x48;
constexpr const static size_t parentID = 0x58;
constexpr const static size_t position = 0x1c;
constexpr const static size_t eyePos = 0x10;

// Functions
constexpr const static size_t WriteToStreamDelta = 0xacb2480;
constexpr const static size_t WriteToStreamDelta_vtableoff = 0x1b8;
constexpr const static size_t WriteToStream = 0xacbc3c0;
constexpr const static size_t WriteToStream_vtableoff = 0x1d8;
}  // namespace PlayerTick_Offsets

// obf name: ::%7cd6dca831c3d8d95fecc782068fccb93b941b8e
#define InputMessage_ClassName "%7cd6dca831c3d8d95fecc782068fccb93b941b8e"
#define InputMessage_ClassNameShort "%7cd6dca831c3d8d95fecc782068fccb93b941b8e"
#define InputMessage_TypeDefinitionIndex 32

namespace InputMessage_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118ab860;

// Offsets
constexpr const static size_t buttons = 0x2c;
constexpr const static size_t mouseDelta = 0x10;
constexpr const static size_t aimAngles = 0x1c;
}  // namespace InputMessage_Offsets

// obf name: ::%25d9cfc99eeeb9370decfade90dcf78f289bb2fa
#define InputState_ClassName "%25d9cfc99eeeb9370decfade90dcf78f289bb2fa"
#define InputState_ClassNameShort "%25d9cfc99eeeb9370decfade90dcf78f289bb2fa"
#define InputState_TypeDefinitionIndex 5530

namespace InputState_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11920fb8;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t current = 0x20;
constexpr const static size_t previous = 0x18;
}  // namespace InputState_Offsets

#define PlayerInput_TypeDefinitionIndex 5902

namespace PlayerInput_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118910e8;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t state = 0x28;
constexpr const static size_t bodyAngles = 0x44;
}  // namespace PlayerInput_Offsets

// obf name: ::%1861db67e0c6312e775f25ea56ee5e39e90667fc
#define ModelState_ClassName "%1861db67e0c6312e775f25ea56ee5e39e90667fc"
#define ModelState_ClassNameShort "%1861db67e0c6312e775f25ea56ee5e39e90667fc"
#define ModelState_TypeDefinitionIndex 571

namespace ModelState_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118ac9c0;

// Offsets
constexpr const static size_t lookDir = 0x10;
constexpr const static size_t guidePosition = 0x24;
constexpr const static size_t sprinting = 0x20;
constexpr const static size_t flags = 0x38;
constexpr const static size_t waterLevel = 0x1c;
constexpr const static size_t inheritedVelocity = 0x40;
constexpr const static size_t localShieldPos = 0x4c;
constexpr const static size_t guideRotation = 0x58;
constexpr const static size_t localShieldRot = 0x64;
constexpr const static size_t b1 = 0x21;
constexpr const static size_t i1 = 0x3c;
constexpr const static size_t i2 = 0x70;
constexpr const static size_t i3 = 0x74;
constexpr const static size_t u0 = 0x30;
constexpr const static size_t f1 = 0x34;
}  // namespace ModelState_Offsets

// obf name: ::%29124011a516a908a3d76b9142b8553759b12266
#define Item_ClassName "%29124011a516a908a3d76b9142b8553759b12266"
#define Item_ClassNameShort "%29124011a516a908a3d76b9142b8553759b12266"
#define Item_TypeDefinitionIndex 4452

namespace Item_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11802898;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t info = 0x40;
constexpr const static size_t uid = 0x18;
constexpr const static size_t clientAmmoCount = 0x38;
constexpr const static size_t contents = 0xa8;
constexpr const static size_t parent = 0xb8;
constexpr const static size_t worldEnt = 0x20;
constexpr const static size_t heldEntity = 0x58;
constexpr const static size_t amount = 0xb0;
constexpr const static size_t _condition = 0x98;
constexpr const static size_t _maxCondition = 0x7c;

// Functions
constexpr const static size_t get_iconSprite = 0x3848740;
}  // namespace Item_Offsets

// obf name: ::%4492b731b436f99a30e9403019d5b930aa34e261
#define WaterLevel_ClassName "%4492b731b436f99a30e9403019d5b930aa34e261"
#define WaterLevel_ClassNameShort "%4492b731b436f99a30e9403019d5b930aa34e261"
#define WaterLevel_TypeDefinitionIndex 3018

namespace WaterLevel_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1182d030;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t Test = 0x2770b70;
constexpr const static size_t GetWaterLevel = 0x278d570;
}  // namespace WaterLevel_Offsets

// obf name: ::%0b97670c3656f6bb56b49dc8a2bfe0695d127ade
#define ConVar_Graphics_Static_ClassName       \
  "%bf3ba0dc2a8e051c5b19debca3620f387825738f/" \
  "%0b97670c3656f6bb56b49dc8a2bfe0695d127ade"
#define ConVar_Graphics_Static_ClassNameShort \
  "%0b97670c3656f6bb56b49dc8a2bfe0695d127ade"
#define ConVar_Graphics_Static_TypeDefinitionIndex 1594

namespace ConVar_Graphics_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118a18c0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t _fov = 0x1a4;

// Functions
}  // namespace ConVar_Graphics_Static_Offsets

#define BaseFishingRod_TypeDefinitionIndex 5860

namespace BaseFishingRod_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11832a80;

// Offsets
constexpr const static size_t CurrentState = 0x0;
constexpr const static size_t currentBobber = 0x310;
constexpr const static size_t MaxCastDistance = 0x32c;
constexpr const static size_t BobberPreview = 0x338;
constexpr const static size_t clientStrainAmountNormalised = 0x380;
constexpr const static size_t strainGainMod = 0x370;
constexpr const static size_t aimAnimationReady = 0x398;

// Functions
constexpr const static size_t UpdateLineRenderer = 0x4a56610;
constexpr const static size_t EvaluateFishingPosition = 0x4a4ac20;
}  // namespace BaseFishingRod_Offsets

#define FishingBobber_TypeDefinitionIndex 9298

namespace FishingBobber_Offsets {

// Offsets
constexpr const static size_t bobberRoot = 0x2e8;
}  // namespace FishingBobber_Offsets

#define GameManifest_TypeDefinitionIndex 8737

namespace GameManifest_Offsets {

// Functions
constexpr const static size_t GUIDToObject = 0x6add320;
}  // namespace GameManifest_Offsets

// obf name: ::%6da8c9de9757db030a4ad777194dacb8243ddc9b
#define GameManager_ClassName "%6da8c9de9757db030a4ad777194dacb8243ddc9b"
#define GameManager_ClassNameShort "%6da8c9de9757db030a4ad777194dacb8243ddc9b"
#define GameManager_TypeDefinitionIndex 5048

namespace GameManager_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118d77e0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t pool = 0x0;

// Functions
constexpr const static size_t CreatePrefab = 0x0;
}  // namespace GameManager_Offsets

// obf name: ::%92a7e7a08b5bb324d4be5bb809eec3da4a0a9ad1
#define GameManager_Static_ClassName           \
  "%6da8c9de9757db030a4ad777194dacb8243ddc9b/" \
  "%92a7e7a08b5bb324d4be5bb809eec3da4a0a9ad1"
#define GameManager_Static_ClassNameShort \
  "%92a7e7a08b5bb324d4be5bb809eec3da4a0a9ad1"
#define GameManager_Static_TypeDefinitionIndex 5052

namespace GameManager_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11933890;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t client = 0x8;
}  // namespace GameManager_Static_Offsets

// obf name: ::%6da8c9de9757db030a4ad777194dacb8243ddc9b
#define PrefabPoolCollection_ClassName \
  "%6da8c9de9757db030a4ad777194dacb8243ddc9b"
#define PrefabPoolCollection_ClassNameShort \
  "%6da8c9de9757db030a4ad777194dacb8243ddc9b"
#define PrefabPoolCollection_TypeDefinitionIndex 5048

namespace PrefabPoolCollection_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118d77e0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t storage = 0x10;
}  // namespace PrefabPoolCollection_Offsets

// obf name: ::%858f6a94a5a78c2e33de49709edd6c1d4cb09262
#define PrefabPool_ClassName "%858f6a94a5a78c2e33de49709edd6c1d4cb09262"
#define PrefabPool_ClassNameShort "%858f6a94a5a78c2e33de49709edd6c1d4cb09262"
#define PrefabPool_TypeDefinitionIndex 2876

namespace PrefabPool_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t stack = 0x0;
}  // namespace PrefabPool_Offsets

#define ItemModProjectile_TypeDefinitionIndex 2999

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
}  // namespace ItemModProjectile_Offsets

#define CraftingQueue_TypeDefinitionIndex 2593

namespace CraftingQueue_Offsets {

// Offsets
constexpr const static size_t icons = 0x30;
}  // namespace CraftingQueue_Offsets

// obf name: ::%db444463a9bdd773bab39c70dd781a04615453c2
#define CraftingQueue_Static_ClassName \
  "CraftingQueue/%db444463a9bdd773bab39c70dd781a04615453c2"
#define CraftingQueue_Static_ClassNameShort \
  "%db444463a9bdd773bab39c70dd781a04615453c2"
#define CraftingQueue_Static_TypeDefinitionIndex 2594

namespace CraftingQueue_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118d9ad8;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t isCrafting = 0x0;
}  // namespace CraftingQueue_Static_Offsets

#define CraftingQueueIcon_TypeDefinitionIndex 683

namespace CraftingQueueIcon_Offsets {

// Offsets
constexpr const static size_t endTime = 0x5c;
constexpr const static size_t item = 0x70;
}  // namespace CraftingQueueIcon_Offsets

// obf name: ::%0efa9ac69713e8d26b04fd4423167ce4e6c7a670
#define Planner_Static_ClassName \
  "Planner/%0efa9ac69713e8d26b04fd4423167ce4e6c7a670"
#define Planner_Static_ClassNameShort \
  "%0efa9ac69713e8d26b04fd4423167ce4e6c7a670"
#define Planner_Static_TypeDefinitionIndex 9012

namespace Planner_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1180f7b8;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t guide = 0x68;
}  // namespace Planner_Static_Offsets

// obf name: ::%986b9ac792938895f478fc8376618c3078bcd744
#define Planner_Guide_ClassName \
  "Planner/%986b9ac792938895f478fc8376618c3078bcd744"
#define Planner_Guide_ClassNameShort "%986b9ac792938895f478fc8376618c3078bcd744"
#define Planner_Guide_TypeDefinitionIndex 9005

namespace Planner_Guide_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118e4790;

// Offsets
constexpr const static size_t lastPlacement = 0x60;
}  // namespace Planner_Guide_Offsets

#define Planner_TypeDefinitionIndex 9004

namespace Planner_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11891118;

// Offsets
constexpr const static size_t _currentConstruction = 0x310;
}  // namespace Planner_Offsets

#define Construction_TypeDefinitionIndex 6739

namespace Construction_Offsets {

// Offsets
constexpr const static size_t holdToPlaceDuration = 0x108;
constexpr const static size_t grades = 0x1a0;
}  // namespace Construction_Offsets

#define BuildingBlock_TypeDefinitionIndex 5448

namespace BuildingBlock_Offsets {

// Offsets
constexpr const static size_t blockDefinition = 0x368;
constexpr const static size_t grade = 0x350;

// Functions
}  // namespace BuildingBlock_Offsets

// obf name: ::HeldEntity
#define HeldEntity_ClassName "HeldEntity"
#define HeldEntity_ClassNameShort "HeldEntity"
#define HeldEntity_TypeDefinitionIndex 4871

namespace HeldEntity_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118d6b90;

// Offsets
constexpr const static size_t ownerItemUID = 0x2e0;
constexpr const static size_t _punches = 0x2d8;
constexpr const static size_t viewModel = 0x200;

// Functions
constexpr const static size_t OnDeploy = 0x0;
}  // namespace HeldEntity_Offsets

// obf name: ::%ec4f60a1fd88f99121bdfcc6e2467bbc7bdf6104
#define PunchEntry_ClassName \
  "HeldEntity/%ec4f60a1fd88f99121bdfcc6e2467bbc7bdf6104"
#define PunchEntry_ClassNameShort "%ec4f60a1fd88f99121bdfcc6e2467bbc7bdf6104"
#define PunchEntry_TypeDefinitionIndex 4872

namespace PunchEntry_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x119315a8;

// Offsets
}  // namespace PunchEntry_Offsets

#define IronSights_TypeDefinitionIndex 6643

namespace IronSights_Offsets {

// Offsets
constexpr const static size_t zoomFactor = 0x2c;
constexpr const static size_t ironsightsOverride = 0x68;
}  // namespace IronSights_Offsets

#define IronSightOverride_TypeDefinitionIndex 5469

namespace IronSightOverride_Offsets {

// Offsets
constexpr const static size_t zoomFactor = 0x2c;
constexpr const static size_t fovBias = 0x30;
}  // namespace IronSightOverride_Offsets

#define BaseViewModel_TypeDefinitionIndex 8347

namespace BaseViewModel_Offsets {

// Offsets
constexpr const static size_t useViewModelCamera = 0x40;
constexpr const static size_t ironSights = 0xc8;
constexpr const static size_t model = 0xf0;
constexpr const static size_t lower = 0xd0;

// Functions
constexpr const static size_t get_ActiveModel = 0x665c790;
constexpr const static size_t OnCameraPositionChanged = 0x0;
constexpr const static size_t OnCameraPositionChanged_vtableoff = 0x0;
}  // namespace BaseViewModel_Offsets

#define ViewModel_TypeDefinitionIndex 8777

namespace ViewModel_Offsets {

// Offsets
constexpr const static size_t instance = 0x28;

// Functions
constexpr const static size_t PlayInt = 0x6b904c0;
constexpr const static size_t PlayString = 0x6b95040;
}  // namespace ViewModel_Offsets

#define MedicalTool_TypeDefinitionIndex 6218

namespace MedicalTool_Offsets {

// Offsets
constexpr const static size_t resetTime = 0x3a0;
}  // namespace MedicalTool_Offsets

#define WaterBody_TypeDefinitionIndex 8925

namespace WaterBody_Offsets {

// Offsets
constexpr const static size_t Type = 0x20;
constexpr const static size_t Renderer = 0x28;
constexpr const static size_t Triggers = 0x30;
constexpr const static size_t MaterialBlend = 0x38;
constexpr const static size_t WantBlendFactorOverride = 0x40;
constexpr const static size_t BlendFactorOverride = 0x44;
constexpr const static size_t IsOcean = 0x48;
constexpr const static size_t meshFilter = 0x70;
constexpr const static size_t FishingType = 0x58;
}  // namespace WaterBody_Offsets

// obf name: ::%c0e76dbd6cedc1fd6043420cac7ac310c1f79ec9
#define WaterSystem_Static_ClassName \
  "WaterSystem/%c0e76dbd6cedc1fd6043420cac7ac310c1f79ec9"
#define WaterSystem_Static_ClassNameShort \
  "%c0e76dbd6cedc1fd6043420cac7ac310c1f79ec9"
#define WaterSystem_Static_TypeDefinitionIndex 5947

namespace WaterSystem_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1181c998;
constexpr auto static_fields = 0xb8;

// Offsets
}  // namespace WaterSystem_Static_Offsets

#define WaterSystem_TypeDefinitionIndex 5942

namespace WaterSystem_Offsets {

// Offsets
constexpr const static size_t oceanSettings = 0x20;
constexpr const static size_t Quality = 0x70;
constexpr const static size_t oceanMaterial = 0x78;
constexpr const static size_t Rendering = 0x80;
constexpr const static size_t oceanVFaceShader = 0x88;
constexpr const static size_t TropicalMaterial = 0x90;
constexpr const static size_t patchSize = 0x98;
constexpr const static size_t patchCount = 0x9c;
constexpr const static size_t patchScale = 0xa0;
constexpr const static size_t forceDeepSea = 0xa4;

// Functions
constexpr const static size_t get_Ocean = 0x4b3f010;
}  // namespace WaterSystem_Offsets

#define TerrainMeta_TypeDefinitionIndex 8972

namespace TerrainMeta_Offsets {

// Functions
constexpr const static size_t Position = 0x6dd1580;
constexpr const static size_t Size = 0x6dd21d0;
constexpr const static size_t OneOverSize = 0x6dd24c0;
constexpr const static size_t Collision = 0x6dd2460;
constexpr const static size_t HeightMap = 0x6dd2c80;
constexpr const static size_t SplatMap = 0x6dd4180;
constexpr const static size_t TopologyMap = 0x6dd3080;
constexpr const static size_t Texturing = 0x6ddfa60;
}  // namespace TerrainMeta_Offsets

#define TerrainCollision_TypeDefinitionIndex 3009

namespace TerrainCollision_Offsets {

// Functions
constexpr const static size_t GetIgnore = 0x274d8b0;
}  // namespace TerrainCollision_Offsets

#define TerrainHeightMap_TypeDefinitionIndex 4495

namespace TerrainHeightMap_Offsets {

// Offsets
constexpr const static size_t normY = 0x7c;
}  // namespace TerrainHeightMap_Offsets

#define TerrainSplatMap_TypeDefinitionIndex 795

namespace TerrainSplatMap_Offsets {

// Offsets
constexpr const static size_t num = 0x7c;
}  // namespace TerrainSplatMap_Offsets

#define TerrainTexturing_TypeDefinitionIndex 6586

namespace TerrainTexturing_Offsets {

// Offsets
constexpr const static size_t shoreVectors = 0x70;
}  // namespace TerrainTexturing_Offsets

// obf name: ::%3cdc95dbf075b57629aa0050d0bbb18ae0210719
#define World_Static_ClassName                 \
  "%d01d943699ea1f9376b065caa0481656495f6dcb/" \
  "%3cdc95dbf075b57629aa0050d0bbb18ae0210719"
#define World_Static_ClassNameShort "%3cdc95dbf075b57629aa0050d0bbb18ae0210719"
#define World_Static_TypeDefinitionIndex 7520

namespace World_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11899348;
constexpr auto static_fields = 0xb8;

// Offsets
}  // namespace World_Static_Offsets

#define ItemIcon_TypeDefinitionIndex 9742

namespace ItemIcon_Offsets {

// Offsets
constexpr const static size_t backgroundImage = 0xe8;

// Functions
constexpr const static size_t TryToMove = 0x0;
constexpr const static size_t TryToMove_vtableoff = 0x0;
constexpr const static size_t RunTimedAction = 0x0;
}  // namespace ItemIcon_Offsets

// obf name: ::%d806e913c1a6fdfd84959ce035f5c51e6edebd5a
#define ItemIcon_Static_ClassName \
  "ItemIcon/%d806e913c1a6fdfd84959ce035f5c51e6edebd5a"
#define ItemIcon_Static_ClassNameShort \
  "%d806e913c1a6fdfd84959ce035f5c51e6edebd5a"
#define ItemIcon_Static_TypeDefinitionIndex 9747

namespace ItemIcon_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1192ec30;
constexpr auto static_fields = 0xb8;

// Offsets
}  // namespace ItemIcon_Static_Offsets

// obf name: ::%2d538650e465f2b08c0353dbccbbdf0a6da7e1f7
#define EffectData_ClassName "%2d538650e465f2b08c0353dbccbbdf0a6da7e1f7"
#define EffectData_ClassNameShort "%2d538650e465f2b08c0353dbccbbdf0a6da7e1f7"
#define EffectData_TypeDefinitionIndex 542

namespace EffectData_Offsets {

// Offsets
constexpr const static size_t entity = 0x28;
constexpr const static size_t source = 0x30;
}  // namespace EffectData_Offsets

// obf name: ::%5e526917e221e49a45ee3ea950527ecd5f0afddd
#define Effect_ClassName "%5e526917e221e49a45ee3ea950527ecd5f0afddd"
#define Effect_ClassNameShort "%5e526917e221e49a45ee3ea950527ecd5f0afddd"
#define Effect_TypeDefinitionIndex 6733

namespace Effect_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118aca48;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t pooledString = 0x98;
constexpr const static size_t worldPos = 0x8c;
}  // namespace Effect_Offsets

// obf name: ::%12d1b049f0ccb95b23f108bb6c3bbd7d500097c5
#define EffectNetwork_ClassName "%12d1b049f0ccb95b23f108bb6c3bbd7d500097c5"
#define EffectNetwork_ClassNameShort "%12d1b049f0ccb95b23f108bb6c3bbd7d500097c5"
#define EffectNetwork_TypeDefinitionIndex 917

namespace EffectNetwork_Offsets {
constexpr auto static_fields = 0xb8;

// Functions
}  // namespace EffectNetwork_Offsets

// obf name: ::%d3259e533dfbfdec1c05f302421a070c6f36984a
#define EffectNetwork_Static_ClassName         \
  "%12d1b049f0ccb95b23f108bb6c3bbd7d500097c5/" \
  "%d3259e533dfbfdec1c05f302421a070c6f36984a"
#define EffectNetwork_Static_ClassNameShort \
  "%d3259e533dfbfdec1c05f302421a070c6f36984a"
#define EffectNetwork_Static_TypeDefinitionIndex 918

namespace EffectNetwork_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11931828;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t effect = 0x8;

// Functions
constexpr const static size_t cctor = 0x7807d20;
}  // namespace EffectNetwork_Static_Offsets

// obf name: ::%7742ed8278db3385c48de92afe3cc19e53a40fdb
#define GameObjectEx_ClassName "%7742ed8278db3385c48de92afe3cc19e53a40fdb"
#define GameObjectEx_ClassNameShort "%7742ed8278db3385c48de92afe3cc19e53a40fdb"
#define GameObjectEx_TypeDefinitionIndex 9013

namespace GameObjectEx_Offsets {
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t ToBaseEntity = 0x6ee0310;
}  // namespace GameObjectEx_Offsets

#define UIDeathScreen_TypeDefinitionIndex 2503

namespace UIDeathScreen_Offsets {

// Functions
constexpr const static size_t SetVisible = 0x223c8f0;
}  // namespace UIDeathScreen_Offsets

// obf name: ::%351963fe88e1cbb28390febe7732f4ddff313a00
#define BaseScreenShake_Static_ClassName \
  "BaseScreenShake/%351963fe88e1cbb28390febe7732f4ddff313a00"
#define BaseScreenShake_Static_ClassNameShort \
  "%351963fe88e1cbb28390febe7732f4ddff313a00"
#define BaseScreenShake_Static_TypeDefinitionIndex 6107

namespace BaseScreenShake_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11838900;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t list = 0x20;
}  // namespace BaseScreenShake_Static_Offsets

#define FlashbangOverlay_TypeDefinitionIndex 2344

namespace FlashbangOverlay_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118d0cf8;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t Instance = 0x0;
constexpr const static size_t flashLength = 0x48;
}  // namespace FlashbangOverlay_Offsets

// obf name: ::%8d737f9f802b9f1daba4429fffbd40635f0000f2
#define StringPool_ClassName "%8d737f9f802b9f1daba4429fffbd40635f0000f2"
#define StringPool_ClassNameShort "%8d737f9f802b9f1daba4429fffbd40635f0000f2"
#define StringPool_TypeDefinitionIndex 317

namespace StringPool_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t toNumber = 0x0;

// Functions
constexpr const static size_t Get = 0x8e1a50;
}  // namespace StringPool_Offsets

// obf name: ::%e2c4981114860f0a01294881b9667d5ae5b3b344
#define Network_Networkable_ClassName \
  "%e2c4981114860f0a01294881b9667d5ae5b3b344"
#define Network_Networkable_ClassNameShort \
  "%e2c4981114860f0a01294881b9667d5ae5b3b344"
#define Network_Networkable_TypeDefinitionIndex 30

namespace Network_Networkable_Offsets {

// Offsets
constexpr const static size_t ID = 0x20;
}  // namespace Network_Networkable_Offsets

// obf name: ::%6c4447006eb71f9f1a12fbcfc1225c1f401393b0
#define Network_Net_ClassName "%6c4447006eb71f9f1a12fbcfc1225c1f401393b0"
#define Network_Net_ClassNameShort "%6c4447006eb71f9f1a12fbcfc1225c1f401393b0"
#define Network_Net_TypeDefinitionIndex 37

namespace Network_Net_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x119222c8;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t cl = 0x0;
}  // namespace Network_Net_Offsets

// obf name: ::%d7cb52855f768fb06a0a9d85343eb546ccc5bd8d
#define Network_Client_ClassName "%d7cb52855f768fb06a0a9d85343eb546ccc5bd8d"
#define Network_Client_ClassNameShort \
  "%d7cb52855f768fb06a0a9d85343eb546ccc5bd8d"
#define Network_Client_TypeDefinitionIndex 40

namespace Network_Client_Offsets {

// Offsets
constexpr const static size_t Connection = 0xf8;
constexpr const static size_t ServerName = 0xe8;
constexpr const static size_t ConnectedAddress = 0x110;

// Offsets
constexpr const static size_t CreateNetworkable = 0x7e04f20;
constexpr const static size_t DestroyNetworkable = 0x7e05fe0;
}  // namespace Network_Client_Offsets

// obf name: ::%e3b93863fd94a25fbac63902e5c911591d6f0890
#define Network_BaseNetwork_ClassName \
  "%e3b93863fd94a25fbac63902e5c911591d6f0890"
#define Network_BaseNetwork_ClassNameShort \
  "%e3b93863fd94a25fbac63902e5c911591d6f0890"
#define Network_BaseNetwork_TypeDefinitionIndex 97

namespace Network_BaseNetwork_Offsets {}

// obf name: ::%0142ba4dbd9ad6d38b12dbbc6b5dcc2ec28fcf3e
#define Network_SendInfo_ClassName "%0142ba4dbd9ad6d38b12dbbc6b5dcc2ec28fcf3e"
#define Network_SendInfo_ClassNameShort \
  "%0142ba4dbd9ad6d38b12dbbc6b5dcc2ec28fcf3e"
#define Network_SendInfo_TypeDefinitionIndex 29

namespace Network_SendInfo_Offsets {

// Offsets
constexpr const static size_t method = 0x0;
constexpr const static size_t channel = 0x4;
constexpr const static size_t priority = 0x8;
constexpr const static size_t connections = 0x10;
constexpr const static size_t connection = 0x18;
}  // namespace Network_SendInfo_Offsets

// obf name: ::%6ff3502e94b0a5b367d6bb5c02587c80b40cdbdb
#define Network_Message_ClassName "%6ff3502e94b0a5b367d6bb5c02587c80b40cdbdb"
#define Network_Message_ClassNameShort \
  "%6ff3502e94b0a5b367d6bb5c02587c80b40cdbdb"
#define Network_Message_TypeDefinitionIndex 86

namespace Network_Message_Offsets {

// Offsets
constexpr const static size_t type = 0x20;
constexpr const static size_t read = 0x18;
}  // namespace Network_Message_Offsets

// obf name: ::%b8c2da3a3269288d9942589eb8214e6c1c7c0de6
#define Network_NetRead_ClassName "%b8c2da3a3269288d9942589eb8214e6c1c7c0de6"
#define Network_NetRead_ClassNameShort \
  "%b8c2da3a3269288d9942589eb8214e6c1c7c0de6"
#define Network_NetRead_TypeDefinitionIndex 3

namespace Network_NetRead_Offsets {

// Offsets
constexpr const static size_t stream = 0x38;
}  // namespace Network_NetRead_Offsets

// obf name: ::%deb44a1ddce7c8445c1190fa3359f845cf23c582
#define Network_NetWrite_ClassName "%deb44a1ddce7c8445c1190fa3359f845cf23c582"
#define Network_NetWrite_ClassNameShort \
  "%deb44a1ddce7c8445c1190fa3359f845cf23c582"
#define Network_NetWrite_TypeDefinitionIndex 0

namespace Network_NetWrite_Offsets {

// Offsets
constexpr const static size_t stream = 0x50;

// Functions
constexpr const static size_t WriteByte = 0x7db0410;
constexpr const static size_t String = 0x7da7710;
constexpr const static size_t Send = 0x7da7b40;
}  // namespace Network_NetWrite_Offsets

#define LootPanel_TypeDefinitionIndex 5886

namespace LootPanel_Offsets {

// Functions
constexpr const static size_t get_Container_00 = 0x4ae8010;
}  // namespace LootPanel_Offsets

#define UIInventory_TypeDefinitionIndex 1037

namespace UIInventory_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118425d8;
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t Close = 0x7978ae0;
}  // namespace UIInventory_Offsets

#define GrowableEntity_TypeDefinitionIndex 8703

namespace GrowableEntity_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1181f8b0;

// Offsets
constexpr const static size_t Properties = 0x348;
constexpr const static size_t State = 0x358;
}  // namespace GrowableEntity_Offsets

#define PlantProperties_TypeDefinitionIndex 3978

namespace PlantProperties_Offsets {

// Offsets
constexpr const static size_t stages = 0x28;
}  // namespace PlantProperties_Offsets

#define PlantProperties_Stage_TypeDefinitionIndex 3980

namespace PlantProperties_Stage_Offsets {

// Offsets
constexpr const static size_t resources = 0xc;
}  // namespace PlantProperties_Stage_Offsets

#define Text_TypeDefinitionIndex 117

namespace Text_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118934f0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t m_Text = 0xe8;
}  // namespace Text_Offsets

#define TOD_Sky_TypeDefinitionIndex 2072

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
constexpr const static size_t get_Instance = 0xe09d00;
}  // namespace TOD_Sky_Offsets

// obf name: ::%ccb1123c98c4a52c794b8411b40f14cc3d7b5565
#define TOD_Sky_Static_ClassName \
  "TOD_Sky/%ccb1123c98c4a52c794b8411b40f14cc3d7b5565"
#define TOD_Sky_Static_ClassNameShort \
  "%ccb1123c98c4a52c794b8411b40f14cc3d7b5565"
#define TOD_Sky_Static_TypeDefinitionIndex 2074

namespace TOD_Sky_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118feae0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t instances = 0x20;
}  // namespace TOD_Sky_Static_Offsets

#define TOD_CycleParameters_TypeDefinitionIndex 100

namespace TOD_CycleParameters_Offsets {

// Functions
constexpr const static size_t get_DateTime = 0xb7ad70;
}  // namespace TOD_CycleParameters_Offsets

#define TOD_AtmosphereParameters_TypeDefinitionIndex 1948

namespace TOD_AtmosphereParameters_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11835968;

// Offsets
constexpr const static size_t RayleighMultiplier = 0x10;
}  // namespace TOD_AtmosphereParameters_Offsets

#define TOD_DayParameters_TypeDefinitionIndex 2249

namespace TOD_DayParameters_Offsets {

// Offsets
constexpr const static size_t SkyColor = 0x28;
}  // namespace TOD_DayParameters_Offsets

#define TOD_NightParameters_TypeDefinitionIndex 1990

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
}  // namespace TOD_NightParameters_Offsets

#define TOD_StarParameters_TypeDefinitionIndex 2469

namespace TOD_StarParameters_Offsets {

// Offsets
constexpr const static size_t Size = 0x10;
constexpr const static size_t Brightness = 0x14;
}  // namespace TOD_StarParameters_Offsets

#define TOD_CloudParameters_TypeDefinitionIndex 1463

namespace TOD_CloudParameters_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11835978;

// Offsets
constexpr const static size_t Brightness = 0x30;
}  // namespace TOD_CloudParameters_Offsets

#define TOD_AmbientParameters_TypeDefinitionIndex 2476

namespace TOD_AmbientParameters_Offsets {

// Offsets
constexpr const static size_t Mode = 0x10;
constexpr const static size_t Saturation = 0x14;
constexpr const static size_t UpdateInterval = 0x18;
}  // namespace TOD_AmbientParameters_Offsets

#define UIHUD_TypeDefinitionIndex 7314

namespace UIHUD_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118ad838;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t Hunger = 0x28;
}  // namespace UIHUD_Offsets

#define HudElement_TypeDefinitionIndex 5246

namespace HudElement_Offsets {

// Offsets
constexpr const static size_t lastValue = 0x30;
}  // namespace HudElement_Offsets

#define UIBelt_TypeDefinitionIndex 6161

namespace UIBelt_Offsets {

// Offsets
constexpr const static size_t ItemIcons = 0x20;
}  // namespace UIBelt_Offsets

#define ItemModCompostable_TypeDefinitionIndex 2094

namespace ItemModCompostable_Offsets {

// Offsets
constexpr const static size_t MaxBaitStack = 0x38;
}  // namespace ItemModCompostable_Offsets

// obf name: ::ResourceRef`1
#define GameObjectRef_ClassName "ResourceRef<UnityEngine/GameObject>"
#define GameObjectRef_ClassNameShort "ResourceRef`1"
#define GameObjectRef_TypeDefinitionIndex 5463

namespace GameObjectRef_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x119c9728;

// Offsets
constexpr const static size_t guid = 0x10;
}  // namespace GameObjectRef_Offsets

#define EnvironmentManager_TypeDefinitionIndex 6299

namespace EnvironmentManager_Offsets {

// Functions
}

// obf name: ::Phrase
#define Translate_Phrase_ClassName \
  "%81eb842dbc56ae0accac2404578ad51a581e96a7/Phrase"
#define Translate_Phrase_ClassNameShort "Phrase"
#define Translate_Phrase_TypeDefinitionIndex 1

namespace Translate_Phrase_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11865d68;

// Offsets
constexpr const static size_t legacyEnglish = 0x20;
}  // namespace Translate_Phrase_Offsets

#define ResourceDispenser_GatherPropertyEntry_TypeDefinitionIndex 6974

namespace ResourceDispenser_GatherPropertyEntry_Offsets {

// Offsets
constexpr const static size_t gatherDamage = 0x10;
constexpr const static size_t destroyFraction = 0x14;
constexpr const static size_t conditionLost = 0x18;
}  // namespace ResourceDispenser_GatherPropertyEntry_Offsets

#define ResourceDispenser_GatherProperties_TypeDefinitionIndex 6975

namespace ResourceDispenser_GatherProperties_Offsets {

// Offsets
constexpr const static size_t Tree = 0x10;
constexpr const static size_t Ore = 0x18;
constexpr const static size_t Flesh = 0x20;
}  // namespace ResourceDispenser_GatherProperties_Offsets

// obf name: ::UIChat
#define UIChat_ClassName "UIChat"
#define UIChat_ClassNameShort "UIChat"
#define UIChat_TypeDefinitionIndex 2325

namespace UIChat_Offsets {

// Offsets
constexpr const static size_t chatArea = 0x28;
}  // namespace UIChat_Offsets

// obf name: ::ListComponent`1
#define ListComponent_ClassName "ListComponent<UIChat>"
#define ListComponent_ClassNameShort "ListComponent`1"
#define ListComponent_TypeDefinitionIndex 49

namespace ListComponent_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11902af8;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t instance = 0x8;
}  // namespace ListComponent_Offsets

// obf name: ::ListComponent`1
#define ListComponent_Projectile_ClassName "ListComponent<Projectile>"
#define ListComponent_Projectile_ClassNameShort "ListComponent`1"
#define ListComponent_Projectile_TypeDefinitionIndex 49

namespace ListComponent_Projectile_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118aca90;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t instance = 0x8;
}  // namespace ListComponent_Projectile_Offsets

// obf name: ::%7a981305de8131aaf86083ea30713d283400a097
#define ListHashSet_ClassName \
  "%7a981305de8131aaf86083ea30713d283400a097<UIChat>"
#define ListHashSet_ClassNameShort "%7a981305de8131aaf86083ea30713d283400a097"
#define ListHashSet_TypeDefinitionIndex 51

namespace ListHashSet_Offsets {

// Offsets
constexpr const static size_t vals = 0x10;
}  // namespace ListHashSet_Offsets

// obf name: ::%7a981305de8131aaf86083ea30713d283400a097
#define ListHashSet_Projectile_ClassName \
  "%7a981305de8131aaf86083ea30713d283400a097<Projectile>"
#define ListHashSet_Projectile_ClassNameShort \
  "%7a981305de8131aaf86083ea30713d283400a097"
#define ListHashSet_Projectile_TypeDefinitionIndex 51

namespace ListHashSet_Projectile_Offsets {

// Offsets
constexpr const static size_t vals = 0x10;
}  // namespace ListHashSet_Projectile_Offsets

#define PatrolHelicopter_TypeDefinitionIndex 129

namespace PatrolHelicopter_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t mainRotor = 0x2e0;
constexpr const static size_t weakspots = 0x2d0;
}  // namespace PatrolHelicopter_Offsets

#define Chainsaw_TypeDefinitionIndex 4757

namespace Chainsaw_Offsets {

// Offsets
constexpr const static size_t ammo = 0x454;
}  // namespace Chainsaw_Offsets

// obf name: ::%c5e7f0e1a57d67e649cb5dd59b00ac3f831e1782
#define CameraUpdateHook_Static_ClassName \
  "CameraUpdateHook/%c5e7f0e1a57d67e649cb5dd59b00ac3f831e1782"
#define CameraUpdateHook_Static_ClassNameShort \
  "%c5e7f0e1a57d67e649cb5dd59b00ac3f831e1782"
#define CameraUpdateHook_Static_TypeDefinitionIndex 6256

namespace CameraUpdateHook_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118cf218;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t action = 0x20;
}  // namespace CameraUpdateHook_Static_Offsets

#define SteamClientWrapper_TypeDefinitionIndex 8034

namespace SteamClientWrapper_Offsets {

// Functions
constexpr const static size_t GetAvatarTexture = 0x62615b0;
}  // namespace SteamClientWrapper_Offsets

// obf name: ::%fae4d0a32e42ecbf5436e8d7bf9eb42cd7daacf8
#define AimConeUtil_ClassName "%fae4d0a32e42ecbf5436e8d7bf9eb42cd7daacf8"
#define AimConeUtil_ClassNameShort "%fae4d0a32e42ecbf5436e8d7bf9eb42cd7daacf8"
#define AimConeUtil_TypeDefinitionIndex 3151

namespace AimConeUtil_Offsets {
constexpr auto static_fields = 0xb8;

// Functions
constexpr const static size_t GetModifiedAimConeDirection = 0x29746e0;
}  // namespace AimConeUtil_Offsets

#define PlayerModel_TypeDefinitionIndex 523

namespace PlayerModel_Offsets {

// Offsets
constexpr const static size_t _multiMesh = 0x3b8;
constexpr const static size_t position = 0x2f8;
constexpr const static size_t viewMatrix = 0x304;
}  // namespace PlayerModel_Offsets

#define SkinnedMultiMesh_TypeDefinitionIndex 9196

namespace SkinnedMultiMesh_Offsets {

// Offsets
constexpr const static size_t Renderers = 0x40;
}  // namespace SkinnedMultiMesh_Offsets

#define BaseMountable_TypeDefinitionIndex 7004

namespace BaseMountable_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11911ef0;

// Offsets
constexpr const static size_t pitchClamp = 0x2fc;
constexpr const static size_t yawClamp = 0x304;
constexpr const static size_t canWieldItems = 0x30c;
}  // namespace BaseMountable_Offsets

#define ProgressBar_TypeDefinitionIndex 7900

namespace ProgressBar_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1182cb28;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t timeFinished = 0x20;
constexpr const static size_t scaleTarget = 0x28;
constexpr const static size_t progressField = 0x30;
constexpr const static size_t iconField = 0x38;
constexpr const static size_t leftField = 0x40;
constexpr const static size_t rightField = 0x48;
constexpr const static size_t clipOpen = 0x50;
constexpr const static size_t clipCancel = 0x58;
constexpr const static size_t canvas = 0x68;
constexpr const static size_t canvasGroup = 0x78;
constexpr const static size_t timeCounter = 0x24;
constexpr const static size_t Instance = 0x8;

// Functions
constexpr const static size_t Update = 0x61479f0;
constexpr const static size_t Start = 0x61472c0;
constexpr const static size_t Close = 0x0;
constexpr const static size_t UpdateProgressBar = 0x0;
constexpr const static size_t SetPercent = 0x0;
constexpr const static size_t PlayOpenSound = 0x0;
constexpr const static size_t PlayCancelSound = 0x0;
}  // namespace ProgressBar_Offsets

#define BowWeapon_TypeDefinitionIndex 5630

namespace BowWeapon_Offsets {

// Offsets
constexpr const static size_t attackReady = 0x4d8;
constexpr const static size_t wasAiming = 0x4e0;
}  // namespace BowWeapon_Offsets

#define CrossbowWeapon_TypeDefinitionIndex 4128

namespace CrossbowWeapon_Offsets {

// Offsets
}

#define MiniCrossbow_TypeDefinitionIndex 9081

namespace MiniCrossbow_Offsets {

// Offsets
}

// obf name: ::%f63813e93e70d28ca9793d87257f8f9c6c38feed
#define ConVar_Player_Static_ClassName         \
  "%a142bd26f858194b170fad0acd01ab3dcf72a417/" \
  "%f63813e93e70d28ca9793d87257f8f9c6c38feed"
#define ConVar_Player_Static_ClassNameShort \
  "%f63813e93e70d28ca9793d87257f8f9c6c38feed"
#define ConVar_Player_Static_TypeDefinitionIndex 128

namespace ConVar_Player_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1188c4c8;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t clientTickInterval = 0x0;

// Functions
constexpr const static size_t clientTickRate_getter = 0x79f33e0;
constexpr const static size_t clientTickRate_setter = 0x79ae1c0;
}  // namespace ConVar_Player_Static_Offsets

#define ColliderInfo_TypeDefinitionIndex 4748

namespace ColliderInfo_Offsets {

// Offsets
constexpr const static size_t flags = 0x20;
}  // namespace ColliderInfo_Offsets

#define CodeLock_TypeDefinitionIndex 4771

namespace CodeLock_Offsets {

// Offsets
constexpr const static size_t hasCode = 0x270;
constexpr const static size_t HasAuth = 0x280;
constexpr const static size_t HasGuestAuth = 0x281;
}  // namespace CodeLock_Offsets

#define AutoTurret_TypeDefinitionIndex 7664

namespace AutoTurret_Offsets {

// Offsets
constexpr const static size_t authorizedPlayers = 0x428;
constexpr const static size_t lastYaw = 0x440;
constexpr const static size_t muzzlePos = 0x4b0;
constexpr const static size_t gun_yaw = 0x4c8;
constexpr const static size_t gun_pitch = 0x4d0;
constexpr const static size_t sightRange = 0x4d8;
}  // namespace AutoTurret_Offsets

#define Client_TypeDefinitionIndex 8248

namespace Client_Offsets {

// Functions
constexpr const static size_t OnClientDisconnected = 0x0;
constexpr const static size_t OnClientDisconnected_vtableoff = 0x0;
}  // namespace Client_Offsets

// obf name: ::%d66491c1a73c690fbfba2db4d6a3370ce69d4cb0
#define ItemManager_Static_ClassName           \
  "%5eecd88ece03bc1a91420ad928eaecf1772c851a/" \
  "%d66491c1a73c690fbfba2db4d6a3370ce69d4cb0"
#define ItemManager_Static_ClassNameShort \
  "%d66491c1a73c690fbfba2db4d6a3370ce69d4cb0"
#define ItemManager_Static_TypeDefinitionIndex 9741

namespace ItemManager_Static_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118211d0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t itemList = 0x48;
constexpr const static size_t itemDictionary = 0x28;
constexpr const static size_t itemDictionaryByName = 0x8;
}  // namespace ItemManager_Static_Offsets

// obf name: ::%65e7e1ac9348249e25ac2a61057e140f08a22020
#define ConVar_Server_Static_ClassName \
  "%65e7e1ac9348249e25ac2a61057e140f08a22020"
#define ConVar_Server_Static_ClassNameShort \
  "%65e7e1ac9348249e25ac2a61057e140f08a22020"
#define ConVar_Server_Static_TypeDefinitionIndex 4787

namespace ConVar_Server_Static_Offsets {
constexpr auto static_fields = 0xb8;

// Offsets
}  // namespace ConVar_Server_Static_Offsets

#define UI_LoadingScreen_TypeDefinitionIndex 2622

namespace UI_LoadingScreen_Offsets {

// Offsets
constexpr const static size_t panel = 0x30;
}  // namespace UI_LoadingScreen_Offsets

#define MixerSnapshotManager_TypeDefinitionIndex 5662

namespace MixerSnapshotManager_Offsets {

// Offsets
constexpr const static size_t defaultSnapshot = 0x20;
constexpr const static size_t loadingSnapshot = 0x30;
}  // namespace MixerSnapshotManager_Offsets

#define MapView_Static_ClassName \
  "MapView/%878f4a9fa921da28fdf03fe2f9d0a36d1b44ec03"
#define MapView_Static_ClassNameShort \
  "%878f4a9fa921da28fdf03fe2f9d0a36d1b44ec03"
#define MapView_TypeDefinitionIndex 2470

namespace MapView_Offsets {

// Functions
constexpr const static size_t WorldPosToImagePos = 0x0;
}  // namespace MapView_Offsets

// obf name: ::GamePhysics
#define GamePhysics_ClassName "GamePhysics"
#define GamePhysics_ClassNameShort "GamePhysics"
#define GamePhysics_TypeDefinitionIndex 1972

namespace GamePhysics_Offsets {

// Functions
constexpr const static size_t Trace = 0x0;
constexpr const static size_t LineOfSightInternal = 0x0;
constexpr const static size_t Verify = 0x0;
}  // namespace GamePhysics_Offsets

#define InstancedDebugDraw_TypeDefinitionIndex 6136

namespace InstancedDebugDraw_Offsets {

// Functions
constexpr const static size_t AddInstance = 0x4dd00c0;
}  // namespace InstancedDebugDraw_Offsets

#define ThrownWeapon_TypeDefinitionIndex 3721

namespace ThrownWeapon_Offsets {

// Offsets
constexpr const static size_t maxThrowVelocity = 0x388;
}  // namespace ThrownWeapon_Offsets

#define MapInterface_TypeDefinitionIndex 1519

namespace MapInterface_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11842620;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t scrollRectZoom = 0x30;
}  // namespace MapInterface_Offsets

#define ScrollRectZoom_TypeDefinitionIndex 7357

namespace ScrollRectZoom_Offsets {

// Offsets
constexpr const static size_t zoom = 0x28;
}  // namespace ScrollRectZoom_Offsets

#define MapView_TypeDefinitionIndex 2470

namespace MapView_Offsets {

// Offsets
constexpr const static size_t scrollRect = 0x40;
}  // namespace MapView_Offsets

#define StorageContainer_TypeDefinitionIndex 2107

namespace StorageContainer_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1182f068;

// Offsets
constexpr const static size_t inventorySlots = 0x320;
}  // namespace StorageContainer_Offsets

#define PlayerCorpse_TypeDefinitionIndex 7321

namespace PlayerCorpse_Offsets {

// Offsets
constexpr const static size_t clientClothing = 0x350;
}  // namespace PlayerCorpse_Offsets

#define TimedExplosive_TypeDefinitionIndex 752

namespace TimedExplosive_Offsets {

// Offsets
constexpr const static size_t explosionRadius = 0x20c;
}  // namespace TimedExplosive_Offsets

#define SmokeGrenade_TypeDefinitionIndex 6784

namespace SmokeGrenade_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118e9f38;

// Offsets
constexpr const static size_t smokeEffectInstance = 0x2b0;
}  // namespace SmokeGrenade_Offsets

#define GrenadeWeapon_TypeDefinitionIndex 2541

namespace GrenadeWeapon_Offsets {

// Offsets
constexpr const static size_t drop = 0x3ac;
}  // namespace GrenadeWeapon_Offsets

#define ViewmodelLower_TypeDefinitionIndex 7153

namespace ViewmodelLower_Offsets {

// Offsets
constexpr const static size_t lowerOnSprint = 0x20;
constexpr const static size_t lowerWhenCantAttack = 0x21;
constexpr const static size_t shouldLower = 0x28;
constexpr const static size_t rotateAngle = 0x2c;
}  // namespace ViewmodelLower_Offsets

#define SamSite_TypeDefinitionIndex 5834

namespace SamSite_Offsets {

// Offsets
constexpr const static size_t staticRespawn = 0x420;
constexpr const static size_t Flag_TargetMode = 0x45c;
}  // namespace SamSite_Offsets

#define ServerProjectile_TypeDefinitionIndex 4251

namespace ServerProjectile_Offsets {

// Offsets
constexpr const static size_t drag = 0x34;
constexpr const static size_t gravityModifier = 0x38;
constexpr const static size_t speed = 0x3c;
constexpr const static size_t radius = 0x5c;
}  // namespace ServerProjectile_Offsets

#define UIFogOverlay_TypeDefinitionIndex 7302

namespace UIFogOverlay_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x118aa918;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t group = 0x20;
constexpr const static size_t Instance = 0x8;
}  // namespace UIFogOverlay_Offsets

#define FoliageGrid_TypeDefinitionIndex 1555

namespace FoliageGrid_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1192d238;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t CellSize = 0x28;
}  // namespace FoliageGrid_Offsets

#define ItemModWearable_TypeDefinitionIndex 4118

namespace ItemModWearable_Offsets {

// Offsets
constexpr const static size_t movementProperties = 0x50;
}  // namespace ItemModWearable_Offsets

#define ClothingMovementProperties_TypeDefinitionIndex 988

namespace ClothingMovementProperties_Offsets {

// Offsets
constexpr const static size_t speedReduction = 0x18;
}  // namespace ClothingMovementProperties_Offsets

#define GestureConfig_TypeDefinitionIndex 2233

namespace GestureConfig_Offsets {

// Offsets
constexpr const static size_t actionType = 0x90;
}  // namespace GestureConfig_Offsets

#define RCMenu_TypeDefinitionIndex 3206

namespace RCMenu_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1192e1c0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t autoTurretFogDistance = 0x13c;
}  // namespace RCMenu_Offsets

// obf name: ::%4e67278fd6b970de67583b023fdba2126dad3bfe
#define Facepunch_Network_Raknet_Client_ClassName \
  "%4e67278fd6b970de67583b023fdba2126dad3bfe"
#define Facepunch_Network_Raknet_Client_ClassNameShort \
  "%4e67278fd6b970de67583b023fdba2126dad3bfe"
#define Facepunch_Network_Raknet_Client_TypeDefinitionIndex 12

namespace Facepunch_Network_Raknet_Client_Offsets {

// Functions
constexpr const static size_t IsConnected = 0x8e1a50;
constexpr const static size_t IsConnected_vtableoff = 0x368;
}  // namespace Facepunch_Network_Raknet_Client_Offsets

// obf name: ::%761904db7315ba1dd28897d04f1ad00cc39aa1d5
#define EncryptedValue_ClassName \
  "%761904db7315ba1dd28897d04f1ad00cc39aa1d5<System/UInt64>"
#define EncryptedValue_ClassNameShort \
  "%761904db7315ba1dd28897d04f1ad00cc39aa1d5"
#define EncryptedValue_TypeDefinitionIndex 9431

namespace EncryptedValue_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11a33908;

// Offsets
constexpr const static size_t _value = 0x0;
constexpr const static size_t _padding = 0x18;
}  // namespace EncryptedValue_Offsets

// obf name: ::%d4ee500f992d6908239bc3d5cd254f8bc8e1baa9
#define HiddenValue_ClassName                                  \
  "%d4ee500f992d6908239bc3d5cd254f8bc8e1baa9<BaseNetworkable/" \
  "%0cb3d4e2e62858052f130c001e3950bf28dbc059>"
#define HiddenValue_ClassNameShort "%d4ee500f992d6908239bc3d5cd254f8bc8e1baa9"
#define HiddenValue_TypeDefinitionIndex 6768

namespace HiddenValue_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11a26b08;

// Offsets
constexpr const static size_t _handle = 0x18;
constexpr const static size_t _accessCount = 0x20;
constexpr const static size_t _hasValue = 0x10;
}  // namespace HiddenValue_Offsets

#define ItemModRFListener_TypeDefinitionIndex 1385

namespace ItemModRFListener_Offsets {

// Functions
constexpr const static size_t ConfigureClicked = 0x0;
}  // namespace ItemModRFListener_Offsets

// obf name: ::%8360e896e2f7ee22e0688d9aa2ea7ccffee1f13d
#define BufferStream_ClassName "%8360e896e2f7ee22e0688d9aa2ea7ccffee1f13d"
#define BufferStream_ClassNameShort "%8360e896e2f7ee22e0688d9aa2ea7ccffee1f13d"
#define BufferStream_TypeDefinitionIndex 1169

namespace BufferStream_Offsets {

// Offsets
constexpr const static size_t _buffer = 0x28;

// Functions
constexpr const static size_t EnsureCapacity = 0xc52d7e0;
}  // namespace BufferStream_Offsets

#define FreeableLootContainer_TypeDefinitionIndex 5618

namespace FreeableLootContainer_Offsets {

// Offsets
}

#define BlowPipeWeapon_TypeDefinitionIndex 2478

namespace BlowPipeWeapon_Offsets {

// Offsets
}

#define AttackHelicopterRockets_TypeDefinitionIndex 9363

namespace AttackHelicopterRockets_Offsets {

// Functions
constexpr const static size_t GetProjectedHitPos = 0x726efb0;
}  // namespace AttackHelicopterRockets_Offsets

#define OutlineManager_TypeDefinitionIndex 3539

namespace OutlineManager_Offsets {

// Offsets
}

// obf name: ::%4f5bd0bff521ce4539477465e70ccb47085cc175
#define ConsoleSystem_Command_ClassName        \
  "%aafadd1937d3754805feefb3d96343581147a1f4/" \
  "%4f5bd0bff521ce4539477465e70ccb47085cc175"
#define ConsoleSystem_Command_ClassNameShort \
  "%4f5bd0bff521ce4539477465e70ccb47085cc175"
#define ConsoleSystem_Command_TypeDefinitionIndex 15

namespace ConsoleSystem_Command_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x1188c508;

// Offsets
constexpr const static size_t GetOveride = 0x38;
constexpr const static size_t SetOveride = 0x80;
constexpr const static size_t Call = 0x60;
}  // namespace ConsoleSystem_Command_Offsets

// obf name: ::%25daa58aa3e99e58a559738eeea2706205e1e2e7
#define ConsoleSystem_Arg_ClassName            \
  "%aafadd1937d3754805feefb3d96343581147a1f4/" \
  "%25daa58aa3e99e58a559738eeea2706205e1e2e7"
#define ConsoleSystem_Arg_ClassNameShort \
  "%25daa58aa3e99e58a559738eeea2706205e1e2e7"
#define ConsoleSystem_Arg_TypeDefinitionIndex 11

namespace ConsoleSystem_Arg_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x117fe178;

// Offsets
constexpr const static size_t Option = 0x0;
}  // namespace ConsoleSystem_Arg_Offsets

// obf name: ::%c4701b75d95b85c4bb4dd9d97859a7284386e6ac
#define ConsoleSystem_Index_Client_ClassName    \
  "%aafadd1937d3754805feefb3d96343581147a1f4/"  \
  "%9864aa36558fdfd8a7f6a2eaaefe4e15c323f553.%" \
  "c4701b75d95b85c4bb4dd9d97859a7284386e6ac"
#define ConsoleSystem_Index_Client_ClassNameShort \
  "%c4701b75d95b85c4bb4dd9d97859a7284386e6ac"
#define ConsoleSystem_Index_Client_TypeDefinitionIndex 19

namespace ConsoleSystem_Index_Client_Offsets {

// Functions
constexpr const static size_t Find = 0x7d3bc80;
}  // namespace ConsoleSystem_Index_Client_Offsets

#define String_TypeDefinitionIndex 142

namespace String_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11d648d0;
constexpr auto static_fields = 0xb8;

// Offsets
constexpr const static size_t FastAllocateString = 0xa8401e0;
}  // namespace String_Offsets

// obf name: ::%88c682362dd01474e1c6f4e603eba42d3eb464c7
#define EntityRef_ClassName "%88c682362dd01474e1c6f4e603eba42d3eb464c7"
#define EntityRef_ClassNameShort "%88c682362dd01474e1c6f4e603eba42d3eb464c7"
#define EntityRef_TypeDefinitionIndex 5399

namespace EntityRef_Offsets {

// Offsets
constexpr const static size_t Get = 0x4604060;
}  // namespace EntityRef_Offsets

// obf name: ConVar::Debugging
#define ConVar_Debugging_ClassName "ConVar/Debugging"
#define ConVar_Debugging_ClassNameShort "Debugging"
#define ConVar_Debugging_TypeDefinitionIndex 1922

namespace ConVar_Debugging_Offsets {

// Functions
}

#define CursorManager_TypeDefinitionIndex 6864

namespace CursorManager_Offsets {
inline constexpr std::uintptr_t typeinfo = 0x11892c00;
constexpr auto static_fields = 0xb8;

// Offsets
}  // namespace CursorManager_Offsets
