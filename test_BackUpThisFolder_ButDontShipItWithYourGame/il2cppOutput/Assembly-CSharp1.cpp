#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.InputSystem.PlayerInput>
struct Action_1_tD5FA47F50DE964EA177B87ABF2576790239219A3;
// System.Action`1<UnityEngine.SceneManagement.Scene>
struct Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19;
// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>
struct Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0;
// System.Collections.Generic.Dictionary`2<System.Guid,Fusion.NetworkObject>
struct Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Object>
struct Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A;
// System.Collections.Generic.Dictionary`2<System.Int32,Fusion.NetworkRunner>
struct Dictionary_2_t8043B6C785B439524A8755BCF6A5CC3612CFCFCD;
// System.Collections.Generic.Dictionary`2<Fusion.NetworkObjectGuid,Fusion.NetworkObject>
struct Dictionary_2_t3BC581E5E3414F2C3884E7EA3F3D93105565B726;
// System.Collections.Generic.Dictionary`2<Fusion.NetworkRunner,System.Collections.Generic.List`1<FusionStats>>
struct Dictionary_2_tE895F84BC5B5CBB34273E02A17E2028850359AE6;
// System.Collections.Generic.Dictionary`2<Fusion.PlayerRef,System.Collections.Generic.List`1<Fusion.NetworkObject>>
struct Dictionary_2_tCF872C9A43CC2A631FE835B219F267869FA01470;
// System.Collections.Generic.Dictionary`2<System.String,FusionStats>
struct Dictionary_2_t74FADE6343657B7C1F56B7477511157BB3AFE29D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// Fusion.FastReferenceList`1<Fusion.NetworkBehaviour>
struct FastReferenceList_1_t2DC9499F4E148A6E8794A7A5E3F1A83D98AA0D76;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>
struct Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937;
// System.Collections.Generic.IEnumerable`1<Fusion.NetworkObject>
struct IEnumerable_1_t32C2A0FF95CFEDA759D18DC81B46A6969069EBFA;
// System.Collections.Generic.IEqualityComparer`1<System.Guid>
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
// ISpawnPointManagerPrototype`1<PlayerSpawnPointPrototype>
struct ISpawnPointManagerPrototype_1_t1E5B2F8940219B82F8F93CFD871DE75E5305E64B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,Fusion.NetworkObject>
struct KeyCollection_t82A1EF49E87D4B323EF5F4383E36A36E47417062;
// System.Collections.Generic.LinkedList`1<Fusion.RunnerVisibilityNode>
struct LinkedList_1_t3813413FE4ECB2279D0C7AC05BD288865A34356B;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4;
// System.Collections.Generic.List`1<FusionGraph>
struct List_1_t71727F1745217686275A52FBC2C2AD4CDE247ECA;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Fusion.StatsInternal.IFusionStatsView>
struct List_1_t6638C479C599039AA688F1887FC173CF9E2733EE;
// System.Collections.Generic.List`1<Fusion.INetworkRunnerCallbacks>
struct List_1_tA8148AA407AA53B8F5D3BFB8B1AE9D9C941E8545;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930;
// System.Collections.Generic.List`1<Fusion.NetworkId>
struct List_1_t8673857563BA6C5F285B36C12CE318D403D7CE03;
// System.Collections.Generic.List`1<Fusion.NetworkObject>
struct List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82;
// System.Collections.Generic.List`1<Fusion.NetworkRunner>
struct List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93;
// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>
struct List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// Fusion.NetworkObjectRefMap`1<Fusion.NetworkObject>
struct NetworkObjectRefMap_1_t09E8E07F1985CA0C12E271256B24BBFF00DB90F6;
// System.Collections.Generic.Queue`1<Fusion.NetworkRunner/SpawnQueueEntry>
struct Queue_1_t15EDAB8C3525B4DF694D0B2011D38D47CDCABD5D;
// SpawnPointManagerPrototype`1<System.Object>
struct SpawnPointManagerPrototype_1_tC1B622C1FA044879897CECF6C1EEA79C44B5B826;
// SpawnPointManagerPrototype`1<PlayerSpawnPointPrototype>
struct SpawnPointManagerPrototype_1_tF8B95B3F73100916235CA03303E1682154B77872;
// SpawnerPrototype`1<System.Object>
struct SpawnerPrototype_1_t62F1C32483637253B2C5E111F0DCBB92F4A8594E;
// SpawnerPrototype`1<PlayerSpawnPointPrototype>
struct SpawnerPrototype_1_t2B1CAFDC5FDCFA5CBBB3556DADE68606CB2AC742;
// System.Collections.Generic.Stack`1<Fusion.NetworkRunner/NetworkObjectInactivityGuard>
struct Stack_1_t0F5E34EE9211205B247AA0F814825DB9E5DD48B7;
// System.Threading.Tasks.TaskCompletionSource`1<System.ValueTuple`2<Fusion.ShutdownReason,System.String>>
struct TaskCompletionSource_1_tB8CC3005937DC70B6B78A3B987DA84E5BDB3FED6;
// System.Threading.Tasks.TaskCompletionSource`1<System.ValueTuple`5<System.Boolean,System.Int32,System.Int32,System.UInt32,System.Byte[]>>
struct TaskCompletionSource_1_t9ED39B9FD79B771ECAD656817DB0F8370498BFAD;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,Fusion.NetworkObject>
struct ValueCollection_tF3CD15E5D171F1E7DEA04F2110426D188EEAF961;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.Object>
struct ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296;
// System.WeakReference`1<Fusion.NetworkSceneManagerBase>
struct WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2;
// System.WeakReference`1<System.Object>
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE;
// System.Action`1<UnityEngine.InputSystem.PlayerInput>[]
struct Action_1U5BU5D_tDDE8F0E5F72CDCC3C9228F7F50484C0B41BAF4E0;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,Fusion.NetworkObject>[]
struct EntryU5BU5D_tA792E5E1A56C57513992C4BFBA21AE7DB16E1022;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// FusionGraph[]
struct FusionGraphU5BU5D_tFEB28D7455B497DCFB3B6B0815B07DF328BE186C;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA;
// Fusion.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_t60B9B079110E3B7AAB961DDA3B483DB8CDD56F6F;
// Fusion.NetworkObject[]
struct NetworkObjectU5BU5D_tB73C7914AB3A2AB2BCE11B2D5AFDEAE2A48F2D0D;
// Fusion.NetworkRunner[]
struct NetworkRunnerU5BU5D_tDA69BE78BB341E0EA1AFC6CB984B303A36561725;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.InputSystem.PlayerInput[]
struct PlayerInputU5BU5D_t68A8570E76E18996F872BEEBA1C81ED2E4671080;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// Fusion.SimulationBehaviour[]
struct SimulationBehaviourU5BU5D_t31031271E2F0F613B675EBEF61151021139E1C4E;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.InputSystem.PlayerInput/ActionEvent[]
struct ActionEventU5BU5D_t45BD340B9AA6F3287339EA686E3FE0A47801E88F;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// Fusion.AccuracyDefaults
struct AccuracyDefaults_t5BFB104965CD241D9829673CC05FC3814E98A721;
// Fusion.Allocator
struct Allocator_t4184B6C7C53A6059F1EBA19A30D551CDECA2F69C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// BasicRigidBodyPush
struct BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0;
// Fusion.Behaviour
struct Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// Fusion.CloudServices
struct CloudServices_tC404BACC0187CF1F40CF228DCEFA39DA7D4F270C;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// FusionStats
struct FusionStats_t0361C00ADA9A527C7EF810A31F4D964A0DAB864F;
// Fusion.FusionUnityLogger
struct FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940;
// Fusion.HeapConfiguration
struct HeapConfiguration_t721D83F0851DFA413E8FF21F4CEB67430196A1DC;
// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA;
// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E;
// Fusion.Protocol.HostMigration
struct HostMigration_t993547CB8CCEB0971E6050E36B4EFC675D156960;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Fusion.ILogger
struct ILogger_tD0E2D7AF8E96102593EEC5932DA5D822AD21EB4F;
// Fusion.INetworkObjectPool
struct INetworkObjectPool_tF26D00322AA1E7BA82ADEB63A320A51ECBB3A485;
// Fusion.INetworkSceneManager
struct INetworkSceneManager_t05C3F1812147E2AA5CD6ED8B908A9F1DFD4E52DA;
// Fusion.INetworkSceneManagerObjectResolver
struct INetworkSceneManagerObjectResolver_tB47C8F6F14AE1C58FEF5ACEDE388C12BB9F5C2EC;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.UI.InputSystemUIInputModule
struct InputSystemUIInputModule_tB7D5B53F656D196BB5AF712FA16FEE22B2EE0C58;
// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// Fusion.InterpolationConfiguration
struct InterpolationConfiguration_tB5D3A4AFB0A322F24BEAAEE154278A97D0C3E26A;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Fusion.LagCompensationSettings
struct LagCompensationSettings_t6EBFE93B06C8E6568E57EB928F1BD57EFDB0C3F1;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// Fusion.LobbyInfo
struct LobbyInfo_t5F666E1575123FE4714F1B6067A8EAA55CFFA5CF;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MobileDisableAutoSwitchControls
struct MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Fusion.NetworkAreaOfInterestBehaviour
struct NetworkAreaOfInterestBehaviour_tD2D502D3E647D9E5E4D8A0E3D22DC9F0B674AACD;
// Fusion.NetworkConfiguration
struct NetworkConfiguration_t4091A6502AFF002F7318CAC4A52FB587662DBC56;
// Fusion.NetworkObject
struct NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C;
// Fusion.NetworkPrefabTable
struct NetworkPrefabTable_t64D4EFDBA5D92F4D0BC13FA94741947629F4D62F;
// Fusion.NetworkProjectConfig
struct NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF;
// Fusion.NetworkRunner
struct NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A;
// Fusion.NetworkSceneManagerBase
struct NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39;
// Fusion.NetworkSceneManagerDefault
struct NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91;
// Fusion.NetworkSimulationConfiguration
struct NetworkSimulationConfiguration_t32FB88A97B412BEC5292D119E40B83174568EF28;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F;
// PlayerSpawnPointManagerPrototype
struct PlayerSpawnPointManagerPrototype_t155715CC2FBC2EE8FF5A7872955E79575C4C18F7;
// PlayerSpawnPointPrototype
struct PlayerSpawnPointPrototype_t9B5A1C452F0255C5FF0DB273738686CBB585508A;
// PlayerSpawnerPrototype
struct PlayerSpawnerPrototype_t4796F19F1683ADBE95CDE67D28D80E55D6F657E8;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Fusion.SessionInfo
struct SessionInfo_t191C09E2A2B9A71925D9B0EDEA501A286FD4BCAB;
// Fusion.Simulation
struct Simulation_t1D52B02F9D931E87FAEB15A3EE8B13ED014DB584;
// Fusion.SimulationBehaviour
struct SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0;
// Fusion.SimulationBehaviourUpdater
struct SimulationBehaviourUpdater_t1D2813CD5F3514AE8854F58396E79C2053157565;
// Fusion.SimulationConfig
struct SimulationConfig_t9B4FF44B2A934AD687A176AE7350E397471BF4C3;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// StarterAssets.StarterAssetsInputs
struct StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// StarterAssets.ThirdPersonController
struct ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// ToggleRunnerProvideInput
struct ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A;
// ToggleRunnerVisibility
struct ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// StarterAssets.UICanvasControllerInput
struct UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F;
// UIVirtualButton
struct UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5;
// UIVirtualJoystick
struct UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16;
// UIVirtualTouchZone
struct UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// UnityEngine.UI.VerticalLayoutGroup
struct VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D;
// Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26
struct U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299;
// Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate
struct FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80;
// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A;
// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D;
// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B;
// Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4
struct U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4;
// Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5
struct U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416;
// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent
struct ControlsChangedEvent_t24A5BA4AB8034B3C662F956A4C85ECC6B8332B48;
// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent
struct DeviceLostEvent_tDD8832F14B7DA15569261EFEBC47E67CF4E1B9D4;
// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent
struct DeviceRegainedEvent_t24153E8876417F010AA4C0C1C25D6CB792EC01D1;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// Fusion.Simulation/IDeltaCompressor
struct IDeltaCompressor_tB558E97C1456399414A117E3C8E63015A0417147;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t32C2A0FF95CFEDA759D18DC81B46A6969069EBFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7A22B3111FA17D87DB77BDD217435A6312A5541C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_tA9E9EB0883B29463D646F793311FA3F8F9B1C62B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RunnerVisibilityNode_t73BB30B54A6EB4715329FD4EC1394459F3EDCB01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral15F6EFCDBE17EFB279217A9B699852DE1E193450;
IL2CPP_EXTERN_C String_t* _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024;
IL2CPP_EXTERN_C String_t* _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA;
IL2CPP_EXTERN_C String_t* _stringLiteral1C4303CE90A80E03466A934F3A49CF1FBA75C709;
IL2CPP_EXTERN_C String_t* _stringLiteral21C54BF860BF41F6CB5FA90618AD96345DB385CD;
IL2CPP_EXTERN_C String_t* _stringLiteral2CD71E3642012925B68B6B9FC2FA6F1735C9F608;
IL2CPP_EXTERN_C String_t* _stringLiteral49EAC01F1FE1AB3E022D37BA90128673D8F2C359;
IL2CPP_EXTERN_C String_t* _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral5D499F9502D74C6CAE298A99A188D512CAD6B153;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral961F54967701EA4335F9BFA367097CC26D03D587;
IL2CPP_EXTERN_C String_t* _stringLiteral9D7C1262378BB498E0E72B70BDC1C9D64DB5E587;
IL2CPP_EXTERN_C String_t* _stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37;
IL2CPP_EXTERN_C String_t* _stringLiteralABA4B0EF423AE8EF8E94BF8F8B6A69E900270F03;
IL2CPP_EXTERN_C String_t* _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD;
IL2CPP_EXTERN_C String_t* _stringLiteralAF597A5AFE3E6633B17F51DDC5D052C17158C067;
IL2CPP_EXTERN_C String_t* _stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118;
IL2CPP_EXTERN_C String_t* _stringLiteralB64FA2408DBA1B3C7B72FC5DF10677491CB05D5B;
IL2CPP_EXTERN_C String_t* _stringLiteralB6A843E4AF194F7F4F0925DF3FA2D7C9DA359E37;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1;
IL2CPP_EXTERN_C String_t* _stringLiteralBCF3DB6F10D6C173EA5388EE2DA9ADB20758230A;
IL2CPP_EXTERN_C String_t* _stringLiteralBE85487689556D8DE56201A0CD308B4B5B114A4B;
IL2CPP_EXTERN_C String_t* _stringLiteralC084887FC479038DDA12E60E8FA1EEF449CA1A07;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FD6D7A92A287CB3B46D187F7143A8EFF28600A;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF07FCB7FD52F00A3F38E8D87EC9B368CC5533A;
IL2CPP_EXTERN_C String_t* _stringLiteralD1E77AD5C06A675600CF5CD2F66F68899D01EDAB;
IL2CPP_EXTERN_C String_t* _stringLiteralE2CACCA027530802511895F2C4C873F9DC8ED360;
IL2CPP_EXTERN_C String_t* _stringLiteralE2CFA0DCA9F3732AA69C3B65D12881F7F3CF5FC0;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralE32F71F01B50192A097A0D355AA140AD6D6D0529;
IL2CPP_EXTERN_C String_t* _stringLiteralE7EBB41AAA6DCE2694BE6E79BACC448EECCB1F3C;
IL2CPP_EXTERN_C String_t* _stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m64338222695B55342E656E92D7F2790221E62B6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB7A02CC7C77717DCDC7980A1EE1194A75B9F673D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4B4120375E58E69EB8BC54ADB054EBBEFC933831_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mC860851CA34533BEA997FC852C9AD7768F6D2049_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m48050D75FCDDB54380B87CE4466A5B13280776FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3CC53690EDAA1DDB18B8E49248774B270E7FBAF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mED8C4FC16A9F1BE2915FAE2E7CD05A3C59180C56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FusionUnityLogger_U3C_ctorU3Eb__12_0_mF2706CCE9E8E1F5D73E5AE62E4A6152D28D2D7E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_mDE25E2D9598E3478E8CD12EA6C61F743882E27B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mC504566284D32F0111950B862D22B0602995290C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m0E1C6713C85CAAB22DE299872377285F55C106D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_m8FC80304C9EFC42F9CAE9588753536DC6F224521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mA5584260A845566F11731CDDE7AF216E044BEE7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mADF65DE232F8B1518C734CA9A1D60F1D4A4CC374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mF756FB30A88DDCBFAE2F1811FEC9FA4CDED0DE2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisNetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C_m30DA9706B6091A01234C649C9FC0CFE9098E435A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m39DE337508D2ADD39AC2AAE01AB0FFEA7583601F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6405D497F14EEE2F172D1D82E55881EA9385B40B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m0CD3227FF22984AB1F8A80030A70A3921A439EF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m84278021B82DC03648708BEFE1521002F9CACBA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mD3AA9DE8ED9C3C202BED617A4EA8CAD29E799999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mBB103B375AB35BB10A810994CFB39ACA5335AEB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mD1C82F35AB4D7DB1DC1D8138EBC6679456DBC940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m006122E663E12324385572178836CCAE30619163_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE750EBF74E88E67DF4737B6A5F3594338FAA2132_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m130EA2C4542DE33976BD5F3E71CFD09028CA12AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m47377D7758798C489896B13DDD6EAFEC1B6D9917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m567A0E8ADE485441540D5B46AB6C518558DDA2FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m83D0AB87CBF92DF59992C02F675DD3DCBB805753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m909AB75DE2253A8B9D7AB3E65CDCDC42BB92DEC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mCE9E8AEA0E6245078585C01E04AF1D72D2B62760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m849F529B76EAC19A125D08EC5D7A7C16A4A5BE2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6E83AE2DD08C6F347070F297A225B37FC4A2ADFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA6EF54D04CDB9BB4B0F28BFA8A21EC80A3DC76FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkSceneManagerDefault_LoadSceneAsync_m36CF7AA7A1C6FD72BA9BB228F868D27921408534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m8ED79880725281B975FFF0D1E75C8C3F3018B842_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m80B7F96D7D17A583B34736C90E2B91A8FB71419D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_GetBuiltinResource_TisFont_tC95270EA3198038970422D78B74A7F2E218A96B6_m3B4545F25A016D36D9AE93723A3449804A127D73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpawnPointManagerPrototype_1__ctor_m277C4593C2E8CA84BDC42D057C38D10D77F661E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpawnerPrototype_1_RegisterPlayerAndObject_m692A4F3F4AF9B04834E9ED98360A74AB6C30828D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpawnerPrototype_1__ctor_mD117339871C159AFAADCA7D9A5872CB8CD057763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwitchSceneMultiplePeerU3Ed__4_MoveNext_mCCAF9BAD9D8DBB44E791E4561F77F3F5BA7EACAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwitchSceneMultiplePeerU3Ed__4_System_Collections_IEnumerator_Reset_m42947312456A7F84159B07569579F4DA1A7B7BAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwitchSceneSinglePeerU3Ed__5_MoveNext_mAC4FF417C4452B42641D11DFCE5281B848BF272E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwitchSceneSinglePeerU3Ed__5_System_Collections_IEnumerator_Reset_m1C3DD543555F33C88C9F974C36682A1451D8B751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwitchSceneWrapperU3Ed__26_System_Collections_IEnumerator_Reset_m1534E7EA5E2AB80717703ACB2B3EF6BBD4746541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CLoadSceneAsyncU3Eb__0_m4B059F1800104229F1D8516434F60658B7F97851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CLoadSceneAsyncU3Eb__1_m1806E6321B96A0D8071C4314923E8EFF4C7A7491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass26_0_U3CSwitchSceneWrapperU3Eb__0_mFC80B5A645E2B16A5DD648379819DDE8E25807D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CSwitchSceneMultiplePeerU3Eb__0_m4D508569C6E5E2605A5E766A3ECF3066DCC86A72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CSwitchSceneSinglePeerU3Eb__0_m82BCA4D1AE3A23C1230106556968AA005B4E93E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_5__ctor_mFA8F15EE5770AAF9026420AE64E667705760FAA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_TryGetTarget_m1B98B24F2C23C226A6A634FF3166162524EF61EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_m1039DCD4F251CC407C0D72021F7D04F936DC0E29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FusionGraphVisualization_t989F5A867C227A92C199E79C10AD87E7901360B0_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Guid,Fusion.NetworkObject>
struct Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA792E5E1A56C57513992C4BFBA21AE7DB16E1022* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t82A1EF49E87D4B323EF5F4383E36A36E47417062* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF3CD15E5D171F1E7DEA04F2110426D188EEAF961* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Fusion.NetworkObject>
struct List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NetworkObjectU5BU5D_tB73C7914AB3A2AB2BCE11B2D5AFDEAE2A48F2D0D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>
struct List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,Fusion.NetworkObject>
struct ValueCollection_tF3CD15E5D171F1E7DEA04F2110426D188EEAF961  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4* ____dictionary_0;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Fusion.Editor.BoundsTools
struct BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE  : public RuntimeObject
{
};

// Fusion.FusionRuntimeCheck
struct FusionRuntimeCheck_t302B78CD2063CCDD24262456FD92646BEDDA75A4  : public RuntimeObject
{
};

// FusionScalableIMGUI
struct FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Fusion.NetworkProjectConfig
struct NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF  : public RuntimeObject
{
	// System.Int32 Fusion.NetworkProjectConfig::Version
	int32_t ___Version_3;
	// System.String Fusion.NetworkProjectConfig::TypeId
	String_t* ___TypeId_4;
	// Fusion.NetworkProjectConfig/PeerModes Fusion.NetworkProjectConfig::PeerMode
	int32_t ___PeerMode_5;
	// Fusion.NetworkProjectConfig/PhysicsEngines Fusion.NetworkProjectConfig::PhysicsEngine
	int32_t ___PhysicsEngine_6;
	// Fusion.NetworkProjectConfig/PhysicsModes Fusion.NetworkProjectConfig::ServerPhysicsMode
	int32_t ___ServerPhysicsMode_7;
	// System.Boolean Fusion.NetworkProjectConfig::UseLagCompensation
	bool ___UseLagCompensation_8;
	// Fusion.LagCompensationSettings Fusion.NetworkProjectConfig::LagCompensation
	LagCompensationSettings_t6EBFE93B06C8E6568E57EB928F1BD57EFDB0C3F1* ___LagCompensation_9;
	// Fusion.NetworkProjectConfig/SceneLoadSpawnModes Fusion.NetworkProjectConfig::SceneLoadSpawnMode
	int32_t ___SceneLoadSpawnMode_10;
	// Fusion.NetworkProjectConfig/DeltaCompressors Fusion.NetworkProjectConfig::DeltaCompressor
	int32_t ___DeltaCompressor_11;
	// System.Boolean Fusion.NetworkProjectConfig::InvokeRenderInBatchMode
	bool ___InvokeRenderInBatchMode_12;
	// System.UInt16 Fusion.NetworkProjectConfig::MaxNetworkedObjectCount
	uint16_t ___MaxNetworkedObjectCount_13;
	// System.Boolean Fusion.NetworkProjectConfig::NetworkIdIsObjectName
	bool ___NetworkIdIsObjectName_14;
	// System.Boolean Fusion.NetworkProjectConfig::HideNetworkObjectInactivityGuard
	bool ___HideNetworkObjectInactivityGuard_15;
	// System.Boolean Fusion.NetworkProjectConfig::EnableHostMigration
	bool ___EnableHostMigration_16;
	// System.UInt32 Fusion.NetworkProjectConfig::HostMigrationSnapshotInterval
	uint32_t ___HostMigrationSnapshotInterval_17;
	// Fusion.NetworkPrefabTable Fusion.NetworkProjectConfig::PrefabTable
	NetworkPrefabTable_t64D4EFDBA5D92F4D0BC13FA94741947629F4D62F* ___PrefabTable_18;
	// Fusion.SimulationConfig Fusion.NetworkProjectConfig::Simulation
	SimulationConfig_t9B4FF44B2A934AD687A176AE7350E397471BF4C3* ___Simulation_19;
	// Fusion.InterpolationConfiguration Fusion.NetworkProjectConfig::Interpolation
	InterpolationConfiguration_tB5D3A4AFB0A322F24BEAAEE154278A97D0C3E26A* ___Interpolation_20;
	// Fusion.NetworkConfiguration Fusion.NetworkProjectConfig::Network
	NetworkConfiguration_t4091A6502AFF002F7318CAC4A52FB587662DBC56* ___Network_21;
	// Fusion.NetworkSimulationConfiguration Fusion.NetworkProjectConfig::NetworkConditions
	NetworkSimulationConfiguration_t32FB88A97B412BEC5292D119E40B83174568EF28* ___NetworkConditions_22;
	// Fusion.HeapConfiguration Fusion.NetworkProjectConfig::Heap
	HeapConfiguration_t721D83F0851DFA413E8FF21F4CEB67430196A1DC* ___Heap_23;
	// Fusion.AccuracyDefaults Fusion.NetworkProjectConfig::AccuracyDefaults
	AccuracyDefaults_t5BFB104965CD241D9829673CC05FC3814E98A721* ___AccuracyDefaults_24;
	// System.String[] Fusion.NetworkProjectConfig::AssembliesToWeave
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___AssembliesToWeave_25;
	// System.Boolean Fusion.NetworkProjectConfig::UseSerializableDictionary
	bool ___UseSerializableDictionary_26;
	// System.Boolean Fusion.NetworkProjectConfig::NullChecksForNetworkedProperties
	bool ___NullChecksForNetworkedProperties_27;
	// System.Boolean Fusion.NetworkProjectConfig::CheckRpcAttributeUsage
	bool ___CheckRpcAttributeUsage_28;
	// System.Boolean Fusion.NetworkProjectConfig::CheckNetworkedPropertiesBeingEmpty
	bool ___CheckNetworkedPropertiesBeingEmpty_29;
};

// Fusion.NetworkRunnerExtensions
struct NetworkRunnerExtensions_t97B58A5A739670FBA0567B6D3597D01D8B46DC32  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D  : public RuntimeObject
{
	// System.Boolean Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0::finishCalled
	bool ___finishCalled_0;
	// System.Collections.Generic.Dictionary`2<System.Guid,Fusion.NetworkObject> Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0::sceneObjects
	Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4* ___sceneObjects_1;
};

// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A  : public RuntimeObject
{
	// System.String Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0::scenePath
	String_t* ___scenePath_0;
	// System.Boolean Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0::alreadyHandled
	bool ___alreadyHandled_1;
	// System.Action`1<UnityEngine.SceneManagement.Scene> Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0::loaded
	Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* ___loaded_2;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0::sceneLoadedHandler
	UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___sceneLoadedHandler_3;
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// System.Collections.Generic.List`1/Enumerator<Fusion.NetworkObject>
struct Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Fusion.NetworkRunner>
struct Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tD5FA47F50DE964EA177B87ABF2576790239219A3* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tDDE8F0E5F72CDCC3C9228F7F50484C0B41BAF4E0* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Fusion.SimulationModes>
struct Nullable_1_tA7AB74DCC49231122BDE6A56B38A849C29538EF7 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>
struct ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C 
{
	// T1 System.ValueTuple`5::Item1
	float ___Item1_0;
	// T2 System.ValueTuple`5::Item2
	float ___Item2_1;
	// T3 System.ValueTuple`5::Item3
	int32_t ___Item3_2;
	// T4 System.ValueTuple`5::Item4
	int32_t ___Item4_3;
	// T5 System.ValueTuple`5::Item5
	float ___Item5_4;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DescriptionAttribute::<DescriptionValue>k__BackingField
	String_t* ___U3CDescriptionValueU3Ek__BackingField_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.SceneManagement.LoadSceneParameters
struct LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E 
{
	// UnityEngine.SceneManagement.LoadSceneMode UnityEngine.SceneManagement.LoadSceneParameters::m_LoadSceneMode
	int32_t ___m_LoadSceneMode_0;
	// UnityEngine.SceneManagement.LocalPhysicsMode UnityEngine.SceneManagement.LoadSceneParameters::m_LocalPhysicsMode
	int32_t ___m_LocalPhysicsMode_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// Fusion.NetworkId
struct NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Fusion.NetworkId::Raw
			uint32_t ___Raw_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___Raw_4_forAlignmentOnly;
		};
	};
};

// Fusion.NetworkObjectPredictionKey
struct NetworkObjectPredictionKey_tBF0A538EE9240A4AB5D149BC21F8B174181D8E9A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Fusion.NetworkObjectPredictionKey::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Fusion.NetworkObjectPredictionKey::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Fusion.NetworkObjectPredictionKey::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Fusion.NetworkObjectPredictionKey::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Fusion.NetworkObjectPredictionKey::AsInt
			int32_t ___AsInt_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___AsInt_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Fusion.NetworkObjectPredictionKey::AsFloat
			float ___AsFloat_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___AsFloat_5_forAlignmentOnly;
		};
	};
};

// Fusion.NetworkPrefabId
struct NetworkPrefabId_tD353189021ABA05E620EE2F0BE67171A8C6F7AC9 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Fusion.NetworkPrefabId::Value
			uint32_t ___Value_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___Value_2_forAlignmentOnly;
		};
	};
};

// Fusion.NetworkRNG
struct NetworkRNG_t64B73CD206460A54C63878CFB53238AD54ECA0B2 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Fusion.NetworkRNG::_state
			uint64_t ____state_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ____state_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____inc_7_OffsetPadding[8];
			// System.UInt64 Fusion.NetworkRNG::_inc
			uint64_t ____inc_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____inc_7_OffsetPadding_forAlignmentOnly[8];
			uint64_t ____inc_7_forAlignmentOnly;
		};
	};
};

// Fusion.PlayerRef
struct PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Fusion.PlayerRef::_index
			int32_t ____index_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____index_1_forAlignmentOnly;
		};
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// Fusion.ReadAccuracy
struct ReadAccuracy_tAB2B6530E294025CF190D052F8B35FAC62C753B5 
{
	// System.Single Fusion.ReadAccuracy::Value
	float ___Value_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// Fusion.SceneRef
struct SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Fusion.SceneRef::_index
			int32_t ____index_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____index_1_forAlignmentOnly;
		};
	};
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// Fusion.Tick
struct Tick_t57D39A4600C22C5C14D12A0C565FEB34404FD02F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Fusion.Tick::Raw
			int32_t ___Raw_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Raw_2_forAlignmentOnly;
		};
	};
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Fusion.WriteAccuracy
struct WriteAccuracy_tC6AAEB23A6F50AD278A1D892364F7C0E427241AF 
{
	// System.Single Fusion.WriteAccuracy::Value
	float ___Value_0;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// Fusion.NetworkObjectGuid/<RawGuidValue>e__FixedBuffer
struct U3CRawGuidValueU3Ee__FixedBuffer_t048BC06BF094CC07E5C83A903FE344CCF482DD2F 
{
	union
	{
		struct
		{
			// System.Int64 Fusion.NetworkObjectGuid/<RawGuidValue>e__FixedBuffer::FixedElementField
			int64_t ___FixedElementField_0;
		};
		uint8_t U3CRawGuidValueU3Ee__FixedBuffer_t048BC06BF094CC07E5C83A903FE344CCF482DD2F__padding[16];
	};
};

// Fusion.NetworkRunner/DeferredShutdownParams
struct DeferredShutdownParams_t3F598A811D32AD9AE4A814809263F7035376B9AF 
{
	// System.Boolean Fusion.NetworkRunner/DeferredShutdownParams::ShutdownRequested
	bool ___ShutdownRequested_0;
	// Fusion.ShutdownReason Fusion.NetworkRunner/DeferredShutdownParams::ShutdownReason
	int32_t ___ShutdownReason_1;
	// System.Boolean Fusion.NetworkRunner/DeferredShutdownParams::DestroyGO
	bool ___DestroyGO_2;
};
// Native definition for P/Invoke marshalling of Fusion.NetworkRunner/DeferredShutdownParams
struct DeferredShutdownParams_t3F598A811D32AD9AE4A814809263F7035376B9AF_marshaled_pinvoke
{
	int32_t ___ShutdownRequested_0;
	int32_t ___ShutdownReason_1;
	int32_t ___DestroyGO_2;
};
// Native definition for COM marshalling of Fusion.NetworkRunner/DeferredShutdownParams
struct DeferredShutdownParams_t3F598A811D32AD9AE4A814809263F7035376B9AF_marshaled_com
{
	int32_t ___ShutdownRequested_0;
	int32_t ___ShutdownReason_1;
	int32_t ___DestroyGO_2;
};

// Fusion.NetworkRunner/HostSnapshotCompressionJob
struct HostSnapshotCompressionJob_tF5EE776934ACB6499EF7BCC85793FDA2FB03431A 
{
	// System.Int32 Fusion.NetworkRunner/HostSnapshotCompressionJob::CurrentTick
	int32_t ___CurrentTick_0;
	// System.Int32 Fusion.NetworkRunner/HostSnapshotCompressionJob::Length
	int32_t ___Length_1;
	// System.UInt32 Fusion.NetworkRunner/HostSnapshotCompressionJob::LastID
	uint32_t ___LastID_2;
	// System.Int32* Fusion.NetworkRunner/HostSnapshotCompressionJob::Previous
	int32_t* ___Previous_3;
	// System.Int32* Fusion.NetworkRunner/HostSnapshotCompressionJob::Current
	int32_t* ___Current_4;
	// System.Int32* Fusion.NetworkRunner/HostSnapshotCompressionJob::Result
	int32_t* ___Result_5;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<Fusion.SceneRef>
struct Nullable_1_t60B9431C1BCAA220BB2AA6938CBB4CD1F9CFE0F1 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___value_1;
};

// System.Nullable`1<Fusion.NetworkRunner/HostSnapshotCompressionJob>
struct Nullable_1_tC45089A0BD074FF0A859152F3B8175B86B2FCB29 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	HostSnapshotCompressionJob_tF5EE776934ACB6499EF7BCC85793FDA2FB03431A ___value_1;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92  : public RuntimeObject
{
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_pinvoke
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_com
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Fusion.StatsInternal.FusionStatsUtilities
struct FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988  : public RuntimeObject
{
};

// Fusion.FusionUnityLogger
struct FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52  : public RuntimeObject
{
	// System.Text.StringBuilder Fusion.FusionUnityLogger::_builder
	StringBuilder_t* ____builder_0;
	// System.Boolean Fusion.FusionUnityLogger::UseGlobalPrefix
	bool ___UseGlobalPrefix_1;
	// System.Boolean Fusion.FusionUnityLogger::UseColorTags
	bool ___UseColorTags_2;
	// System.String Fusion.FusionUnityLogger::GlobalPrefixColor
	String_t* ___GlobalPrefixColor_3;
	// UnityEngine.Color32 Fusion.FusionUnityLogger::MinRandomColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___MinRandomColor_4;
	// UnityEngine.Color32 Fusion.FusionUnityLogger::MaxRandomColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___MaxRandomColor_5;
	// UnityEngine.Color Fusion.FusionUnityLogger::ServerColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ServerColor_6;
	// System.Func`2<System.Object,System.Int32> Fusion.FusionUnityLogger::<GetColor>k__BackingField
	Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___U3CGetColorU3Ek__BackingField_7;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___m_SourceStyle_1;
};

// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;
};

// Fusion.NetworkObjectGuid
struct NetworkObjectGuid_t99EAC957EE861D66626645313D35A1F49AF134B4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Fusion.NetworkObjectGuid/<RawGuidValue>e__FixedBuffer Fusion.NetworkObjectGuid::RawGuidValue
			U3CRawGuidValueU3Ee__FixedBuffer_t048BC06BF094CC07E5C83A903FE344CCF482DD2F ___RawGuidValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3CRawGuidValueU3Ee__FixedBuffer_t048BC06BF094CC07E5C83A903FE344CCF482DD2F ___RawGuidValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Fusion.NetworkObjectGuid::_data0
			int64_t ____data0_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ____data0_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____data1_4_OffsetPadding[8];
			// System.Int64 Fusion.NetworkObjectGuid::_data1
			int64_t ____data1_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____data1_4_OffsetPadding_forAlignmentOnly[8];
			int64_t ____data1_4_forAlignmentOnly;
		};
	};
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// Fusion.NetworkObject/PredictionData
struct PredictionData_tAB7F59FFE9B92C0D64188C2D2BB591CC45173403 
{
	// Fusion.Tick Fusion.NetworkObject/PredictionData::Tick
	Tick_t57D39A4600C22C5C14D12A0C565FEB34404FD02F ___Tick_0;
	// Fusion.NetworkPrefabId Fusion.NetworkObject/PredictionData::Prefab
	NetworkPrefabId_tD353189021ABA05E620EE2F0BE67171A8C6F7AC9 ___Prefab_1;
	// Fusion.NetworkObjectPredictionKey Fusion.NetworkObject/PredictionData::Key
	NetworkObjectPredictionKey_tBF0A538EE9240A4AB5D149BC21F8B174181D8E9A ___Key_2;
};

// Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26
struct U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299  : public RuntimeObject
{
	// System.Int32 Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Fusion.NetworkSceneManagerBase Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<>4__this
	NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* ___U3CU3E4__this_2;
	// Fusion.SceneRef Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::prevScene
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___prevScene_3;
	// Fusion.SceneRef Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::newScene
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___newScene_4;
	// Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0 Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<>8__1
	U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* ___U3CU3E8__1_5;
	// System.Exception Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<error>5__2
	Exception_t* ___U3CerrorU3E5__2_6;
	// System.Collections.IEnumerator Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<coro>5__3
	RuntimeObject* ___U3CcoroU3E5__3_7;
	// System.Boolean Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<next>5__4
	bool ___U3CnextU3E5__4_8;
};

// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D  : public RuntimeObject
{
	// UnityEngine.SceneManagement.Scene Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0::loadedScene
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___loadedScene_0;
};

// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B  : public RuntimeObject
{
	// UnityEngine.SceneManagement.Scene Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0::loadedScene
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___loadedScene_0;
};

// Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4
struct U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4  : public RuntimeObject
{
	// System.Int32 Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Fusion.SceneRef Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::prevScene
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___prevScene_2;
	// Fusion.NetworkSceneManagerDefault Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::<>4__this
	NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* ___U3CU3E4__this_3;
	// Fusion.SceneRef Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::newScene
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___newScene_4;
	// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0 Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::<>8__1
	U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* ___U3CU3E8__1_5;
	// Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::finished
	FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* ___finished_6;
	// UnityEngine.SceneManagement.LoadSceneParameters Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::<loadSceneParameters>5__2
	LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E ___U3CloadSceneParametersU3E5__2_7;
	// UnityEngine.SceneManagement.Scene Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::<sceneToUnload>5__3
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___U3CsceneToUnloadU3E5__3_8;
	// UnityEngine.GameObject[] Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::<tempSceneSpawnedPrefabs>5__4
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___U3CtempSceneSpawnedPrefabsU3E5__4_9;
	// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::<sceneObjects>5__5
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ___U3CsceneObjectsU3E5__5_10;
};

// Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5
struct U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416  : public RuntimeObject
{
	// System.Int32 Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Fusion.SceneRef Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::prevScene
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___prevScene_2;
	// Fusion.NetworkSceneManagerDefault Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::<>4__this
	NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* ___U3CU3E4__this_3;
	// Fusion.SceneRef Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::newScene
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___newScene_4;
	// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0 Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::<>8__1
	U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* ___U3CU3E8__1_5;
	// Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::finished
	FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* ___finished_6;
	// System.Int32 Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::<i>5__2
	int32_t ___U3CiU3E5__2_7;
};

// System.Nullable`1<Unity.Jobs.JobHandle>
struct Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___value_1;
};

// System.WeakReference`1<Fusion.NetworkSceneManagerBase>
struct WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2  : public RuntimeObject
{
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231  : public RuntimeObject
{
	// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.InputValue::m_Context
	Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 ___m_Context_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.SceneManagement.Scene>
struct Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

// UnityEngine.InputSystem.Users.InputUser
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E 
{
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser::m_Id
	uint32_t ___m_Id_1;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate
struct FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// BasicRigidBodyPush
struct BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask BasicRigidBodyPush::pushLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___pushLayers_4;
	// System.Boolean BasicRigidBodyPush::canPush
	bool ___canPush_5;
	// System.Single BasicRigidBodyPush::strength
	float ___strength_6;
};

// Fusion.Behaviour
struct Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MobileDisableAutoSwitchControls
struct MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.PlayerInput MobileDisableAutoSwitchControls::playerInput
	PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* ___playerInput_4;
};

// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.PlayerInput::m_Actions
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Actions_7;
	// UnityEngine.InputSystem.PlayerNotifications UnityEngine.InputSystem.PlayerInput::m_NotificationBehavior
	int32_t ___m_NotificationBehavior_8;
	// UnityEngine.InputSystem.UI.InputSystemUIInputModule UnityEngine.InputSystem.PlayerInput::m_UIInputModule
	InputSystemUIInputModule_tB7D5B53F656D196BB5AF712FA16FEE22B2EE0C58* ___m_UIInputModule_9;
	// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent UnityEngine.InputSystem.PlayerInput::m_DeviceLostEvent
	DeviceLostEvent_tDD8832F14B7DA15569261EFEBC47E67CF4E1B9D4* ___m_DeviceLostEvent_10;
	// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedEvent
	DeviceRegainedEvent_t24153E8876417F010AA4C0C1C25D6CB792EC01D1* ___m_DeviceRegainedEvent_11;
	// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent UnityEngine.InputSystem.PlayerInput::m_ControlsChangedEvent
	ControlsChangedEvent_t24A5BA4AB8034B3C662F956A4C85ECC6B8332B48* ___m_ControlsChangedEvent_12;
	// UnityEngine.InputSystem.PlayerInput/ActionEvent[] UnityEngine.InputSystem.PlayerInput::m_ActionEvents
	ActionEventU5BU5D_t45BD340B9AA6F3287339EA686E3FE0A47801E88F* ___m_ActionEvents_13;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_NeverAutoSwitchControlSchemes
	bool ___m_NeverAutoSwitchControlSchemes_14;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultControlScheme
	String_t* ___m_DefaultControlScheme_15;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultActionMap
	String_t* ___m_DefaultActionMap_16;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_SplitScreenIndex
	int32_t ___m_SplitScreenIndex_17;
	// UnityEngine.Camera UnityEngine.InputSystem.PlayerInput::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_18;
	// UnityEngine.InputSystem.InputValue UnityEngine.InputSystem.PlayerInput::m_InputValueObject
	InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___m_InputValueObject_19;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.PlayerInput::m_CurrentActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_CurrentActionMap_20;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_PlayerIndex
	int32_t ___m_PlayerIndex_21;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_InputActive
	bool ___m_InputActive_22;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_Enabled
	bool ___m_Enabled_23;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_ActionsInitialized
	bool ___m_ActionsInitialized_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.InputSystem.PlayerInput::m_ActionMessageNames
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___m_ActionMessageNames_25;
	// UnityEngine.InputSystem.Users.InputUser UnityEngine.InputSystem.PlayerInput::m_InputUser
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E ___m_InputUser_26;
	// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredDelegate
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___m_ActionTriggeredDelegate_27;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceLostCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_DeviceLostCallbacks_28;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_DeviceRegainedCallbacks_29;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_ControlsChangedCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_ControlsChangedCallbacks_30;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionTriggeredCallbacks_31;
	// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.PlayerInput::m_UnpairedDeviceUsedDelegate
	Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19* ___m_UnpairedDeviceUsedDelegate_32;
	// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean> UnityEngine.InputSystem.PlayerInput::m_PreFilterUnpairedDeviceUsedDelegate
	Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937* ___m_PreFilterUnpairedDeviceUsedDelegate_33;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnUnpairedDeviceUsedHooked
	bool ___m_OnUnpairedDeviceUsedHooked_34;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.PlayerInput::m_DeviceChangeDelegate
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___m_DeviceChangeDelegate_35;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnDeviceChangeHooked
	bool ___m_OnDeviceChangeHooked_36;
};

// StarterAssets.StarterAssetsInputs
struct StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 StarterAssets.StarterAssetsInputs::move
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___move_4;
	// UnityEngine.Vector2 StarterAssets.StarterAssetsInputs::look
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___look_5;
	// System.Boolean StarterAssets.StarterAssetsInputs::jump
	bool ___jump_6;
	// System.Boolean StarterAssets.StarterAssetsInputs::sprint
	bool ___sprint_7;
	// System.Boolean StarterAssets.StarterAssetsInputs::analogMovement
	bool ___analogMovement_8;
	// System.Boolean StarterAssets.StarterAssetsInputs::cursorLocked
	bool ___cursorLocked_9;
	// System.Boolean StarterAssets.StarterAssetsInputs::cursorInputForLook
	bool ___cursorInputForLook_10;
};

// StarterAssets.ThirdPersonController
struct ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single StarterAssets.ThirdPersonController::MoveSpeed
	float ___MoveSpeed_4;
	// System.Single StarterAssets.ThirdPersonController::SprintSpeed
	float ___SprintSpeed_5;
	// System.Single StarterAssets.ThirdPersonController::RotationSmoothTime
	float ___RotationSmoothTime_6;
	// System.Single StarterAssets.ThirdPersonController::SpeedChangeRate
	float ___SpeedChangeRate_7;
	// System.Single StarterAssets.ThirdPersonController::JumpHeight
	float ___JumpHeight_8;
	// System.Single StarterAssets.ThirdPersonController::Gravity
	float ___Gravity_9;
	// System.Single StarterAssets.ThirdPersonController::JumpTimeout
	float ___JumpTimeout_10;
	// System.Single StarterAssets.ThirdPersonController::FallTimeout
	float ___FallTimeout_11;
	// System.Boolean StarterAssets.ThirdPersonController::Grounded
	bool ___Grounded_12;
	// System.Single StarterAssets.ThirdPersonController::GroundedOffset
	float ___GroundedOffset_13;
	// System.Single StarterAssets.ThirdPersonController::GroundedRadius
	float ___GroundedRadius_14;
	// UnityEngine.LayerMask StarterAssets.ThirdPersonController::GroundLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___GroundLayers_15;
	// UnityEngine.GameObject StarterAssets.ThirdPersonController::CinemachineCameraTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CinemachineCameraTarget_16;
	// System.Single StarterAssets.ThirdPersonController::TopClamp
	float ___TopClamp_17;
	// System.Single StarterAssets.ThirdPersonController::BottomClamp
	float ___BottomClamp_18;
	// System.Single StarterAssets.ThirdPersonController::CameraAngleOverride
	float ___CameraAngleOverride_19;
	// System.Boolean StarterAssets.ThirdPersonController::LockCameraPosition
	bool ___LockCameraPosition_20;
	// System.Single StarterAssets.ThirdPersonController::_cinemachineTargetYaw
	float ____cinemachineTargetYaw_21;
	// System.Single StarterAssets.ThirdPersonController::_cinemachineTargetPitch
	float ____cinemachineTargetPitch_22;
	// System.Single StarterAssets.ThirdPersonController::_speed
	float ____speed_23;
	// System.Single StarterAssets.ThirdPersonController::_animationBlend
	float ____animationBlend_24;
	// System.Single StarterAssets.ThirdPersonController::_targetRotation
	float ____targetRotation_25;
	// System.Single StarterAssets.ThirdPersonController::_rotationVelocity
	float ____rotationVelocity_26;
	// System.Single StarterAssets.ThirdPersonController::_verticalVelocity
	float ____verticalVelocity_27;
	// System.Single StarterAssets.ThirdPersonController::_terminalVelocity
	float ____terminalVelocity_28;
	// System.Single StarterAssets.ThirdPersonController::_jumpTimeoutDelta
	float ____jumpTimeoutDelta_29;
	// System.Single StarterAssets.ThirdPersonController::_fallTimeoutDelta
	float ____fallTimeoutDelta_30;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDSpeed
	int32_t ____animIDSpeed_31;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDGrounded
	int32_t ____animIDGrounded_32;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDJump
	int32_t ____animIDJump_33;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDFreeFall
	int32_t ____animIDFreeFall_34;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDMotionSpeed
	int32_t ____animIDMotionSpeed_35;
	// UnityEngine.Animator StarterAssets.ThirdPersonController::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_36;
	// UnityEngine.CharacterController StarterAssets.ThirdPersonController::_controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ____controller_37;
	// StarterAssets.StarterAssetsInputs StarterAssets.ThirdPersonController::_input
	StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* ____input_38;
	// UnityEngine.GameObject StarterAssets.ThirdPersonController::_mainCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____mainCamera_39;
	// System.Boolean StarterAssets.ThirdPersonController::_hasAnimator
	bool ____hasAnimator_41;
	// UnityEngine.Vector3 StarterAssets.ThirdPersonController::prevInputDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___prevInputDirection_42;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// StarterAssets.UICanvasControllerInput
struct UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// StarterAssets.StarterAssetsInputs StarterAssets.UICanvasControllerInput::starterAssetsInputs
	StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* ___starterAssetsInputs_4;
};

// UIVirtualButton
struct UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent`1<System.Boolean> UIVirtualButton::buttonStateOutputEvent
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* ___buttonStateOutputEvent_4;
	// UnityEngine.Events.UnityEvent UIVirtualButton::buttonClickOutputEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___buttonClickOutputEvent_5;
};

// UIVirtualJoystick
struct UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform UIVirtualJoystick::containerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___containerRect_4;
	// UnityEngine.RectTransform UIVirtualJoystick::handleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handleRect_5;
	// System.Single UIVirtualJoystick::joystickRange
	float ___joystickRange_6;
	// System.Single UIVirtualJoystick::magnitudeMultiplier
	float ___magnitudeMultiplier_7;
	// System.Boolean UIVirtualJoystick::invertXOutputValue
	bool ___invertXOutputValue_8;
	// System.Boolean UIVirtualJoystick::invertYOutputValue
	bool ___invertYOutputValue_9;
	// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2> UIVirtualJoystick::joystickOutputEvent
	UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* ___joystickOutputEvent_10;
};

// UIVirtualTouchZone
struct UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform UIVirtualTouchZone::containerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___containerRect_4;
	// UnityEngine.RectTransform UIVirtualTouchZone::handleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handleRect_5;
	// System.Boolean UIVirtualTouchZone::clampToMagnitude
	bool ___clampToMagnitude_6;
	// System.Single UIVirtualTouchZone::magnitudeMultiplier
	float ___magnitudeMultiplier_7;
	// System.Boolean UIVirtualTouchZone::invertXOutputValue
	bool ___invertXOutputValue_8;
	// System.Boolean UIVirtualTouchZone::invertYOutputValue
	bool ___invertYOutputValue_9;
	// UnityEngine.Vector2 UIVirtualTouchZone::pointerDownPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerDownPosition_10;
	// UnityEngine.Vector2 UIVirtualTouchZone::currentPointerPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currentPointerPosition_11;
	// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2> UIVirtualTouchZone::touchZoneOutputEvent
	UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* ___touchZoneOutputEvent_12;
};

// SpawnPointManagerPrototype`1<PlayerSpawnPointPrototype>
struct SpawnPointManagerPrototype_1_tF8B95B3F73100916235CA03303E1682154B77872  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
	// SpawnPointManagerPrototype`1/SpawnSequence<T> SpawnPointManagerPrototype`1::Sequence
	int32_t ___Sequence_4;
	// UnityEngine.LayerMask SpawnPointManagerPrototype`1::BlockingLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___BlockingLayers_5;
	// System.Single SpawnPointManagerPrototype`1::BlockedCheckRadius
	float ___BlockedCheckRadius_6;
	// System.Collections.Generic.List`1<UnityEngine.Component> SpawnPointManagerPrototype`1::_spawnPoints
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ____spawnPoints_7;
	// System.Int32 SpawnPointManagerPrototype`1::LastSpawnIndex
	int32_t ___LastSpawnIndex_8;
	// Fusion.NetworkRNG SpawnPointManagerPrototype`1::rng
	NetworkRNG_t64B73CD206460A54C63878CFB53238AD54ECA0B2 ___rng_9;
};

// FusionStats
struct FusionStats_t0361C00ADA9A527C7EF810A31F4D964A0DAB864F  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
	// System.Single FusionStats::RedrawInterval
	float ___RedrawInterval_27;
	// FusionStats/StatCanvasTypes FusionStats::_canvasType
	int32_t ____canvasType_28;
	// System.Boolean FusionStats::_showButtonLabels
	bool ____showButtonLabels_29;
	// System.Int32 FusionStats::_maxHeaderHeight
	int32_t ____maxHeaderHeight_30;
	// System.Single FusionStats::CanvasScale
	float ___CanvasScale_31;
	// System.Single FusionStats::CanvasDistance
	float ___CanvasDistance_32;
	// UnityEngine.Rect FusionStats::_gameObjectRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ____gameObjectRect_33;
	// UnityEngine.Rect FusionStats::_overlayRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ____overlayRect_34;
	// FusionGraph/Layouts FusionStats::_defaultLayout
	int32_t ____defaultLayout_35;
	// System.Boolean FusionStats::_noTextOverlap
	bool ____noTextOverlap_36;
	// System.Boolean FusionStats::_noGraphShader
	bool ____noGraphShader_37;
	// System.Int32 FusionStats::GraphColumnCount
	int32_t ___GraphColumnCount_38;
	// System.Int32 FusionStats::_graphMaxWidth
	int32_t ____graphMaxWidth_39;
	// System.Boolean FusionStats::_enableObjectStats
	bool ____enableObjectStats_40;
	// Fusion.NetworkObject FusionStats::_object
	NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ____object_41;
	// System.Int32 FusionStats::_objectTitleHeight
	int32_t ____objectTitleHeight_42;
	// System.Int32 FusionStats::_objectIdsHeight
	int32_t ____objectIdsHeight_43;
	// System.Int32 FusionStats::_objectMetersHeight
	int32_t ____objectMetersHeight_44;
	// Fusion.NetworkRunner FusionStats::_runner
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ____runner_45;
	// System.Boolean FusionStats::InitializeAllGraphs
	bool ___InitializeAllGraphs_46;
	// Fusion.SimulationModes FusionStats::ConnectTo
	int32_t ___ConnectTo_47;
	// Fusion.Simulation/Statistics/ObjStatFlags FusionStats::_includedObjStats
	int32_t ____includedObjStats_48;
	// Fusion.Simulation/Statistics/NetStatFlags FusionStats::_includedNetStats
	int32_t ____includedNetStats_49;
	// Fusion.Simulation/Statistics/SimStatFlags FusionStats::_includedSimStats
	int32_t ____includedSimStats_50;
	// System.Boolean FusionStats::AutoDestroy
	bool ___AutoDestroy_51;
	// System.Boolean FusionStats::EnforceSingle
	bool ___EnforceSingle_52;
	// System.String FusionStats::Guid
	String_t* ___Guid_53;
	// System.Boolean FusionStats::_modifyColors
	bool ____modifyColors_54;
	// UnityEngine.Color FusionStats::_graphColorGood
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____graphColorGood_55;
	// UnityEngine.Color FusionStats::_graphColorWarn
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____graphColorWarn_56;
	// UnityEngine.Color FusionStats::_graphColorBad
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____graphColorBad_57;
	// UnityEngine.Color FusionStats::_graphColorFlag
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____graphColorFlag_58;
	// UnityEngine.Color FusionStats::_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____fontColor_59;
	// UnityEngine.Color FusionStats::PanelColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___PanelColor_60;
	// UnityEngine.Color FusionStats::_simDataBackColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____simDataBackColor_61;
	// UnityEngine.Color FusionStats::_netDataBackColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____netDataBackColor_62;
	// UnityEngine.Color FusionStats::_objDataBackColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____objDataBackColor_63;
	// FusionGraph[] FusionStats::_simGraphs
	FusionGraphU5BU5D_tFEB28D7455B497DCFB3B6B0815B07DF328BE186C* ____simGraphs_64;
	// FusionGraph[] FusionStats::_objGraphs
	FusionGraphU5BU5D_tFEB28D7455B497DCFB3B6B0815B07DF328BE186C* ____objGraphs_65;
	// FusionGraph[] FusionStats::_netGraphs
	FusionGraphU5BU5D_tFEB28D7455B497DCFB3B6B0815B07DF328BE186C* ____netGraphs_66;
	// System.Collections.Generic.List`1<Fusion.StatsInternal.IFusionStatsView> FusionStats::_foundViews
	List_1_t6638C479C599039AA688F1887FC173CF9E2733EE* ____foundViews_67;
	// System.Collections.Generic.List`1<FusionGraph> FusionStats::_foundGraphs
	List_1_t71727F1745217686275A52FBC2C2AD4CDE247ECA* ____foundGraphs_68;
	// UnityEngine.UI.Text FusionStats::_titleText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____titleText_69;
	// UnityEngine.UI.Text FusionStats::_clearIcon
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____clearIcon_70;
	// UnityEngine.UI.Text FusionStats::_pauseIcon
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____pauseIcon_71;
	// UnityEngine.UI.Text FusionStats::_togglIcon
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____togglIcon_72;
	// UnityEngine.UI.Text FusionStats::_closeIcon
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____closeIcon_73;
	// UnityEngine.UI.Text FusionStats::_canvsIcon
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____canvsIcon_74;
	// UnityEngine.UI.Text FusionStats::_clearLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____clearLabel_75;
	// UnityEngine.UI.Text FusionStats::_pauseLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____pauseLabel_76;
	// UnityEngine.UI.Text FusionStats::_togglLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____togglLabel_77;
	// UnityEngine.UI.Text FusionStats::_closeLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____closeLabel_78;
	// UnityEngine.UI.Text FusionStats::_canvsLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____canvsLabel_79;
	// UnityEngine.UI.Text FusionStats::_objectNameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____objectNameText_80;
	// UnityEngine.UI.GridLayoutGroup FusionStats::_graphGridLayoutGroup
	GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* ____graphGridLayoutGroup_81;
	// UnityEngine.Canvas FusionStats::_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ____canvas_82;
	// UnityEngine.RectTransform FusionStats::_canvasRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____canvasRT_83;
	// UnityEngine.RectTransform FusionStats::_rootPanelRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____rootPanelRT_84;
	// UnityEngine.RectTransform FusionStats::_guidesRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____guidesRT_85;
	// UnityEngine.RectTransform FusionStats::_headerRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____headerRT_86;
	// UnityEngine.RectTransform FusionStats::_statsPanelRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____statsPanelRT_87;
	// UnityEngine.RectTransform FusionStats::_graphsLayoutRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____graphsLayoutRT_88;
	// UnityEngine.RectTransform FusionStats::_titleRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____titleRT_89;
	// UnityEngine.RectTransform FusionStats::_buttonsRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____buttonsRT_90;
	// UnityEngine.RectTransform FusionStats::_objectTitlePanelRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____objectTitlePanelRT_91;
	// UnityEngine.RectTransform FusionStats::_objectIdsGroupRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____objectIdsGroupRT_92;
	// UnityEngine.RectTransform FusionStats::_objectMetersPanelRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____objectMetersPanelRT_93;
	// UnityEngine.RectTransform FusionStats::_clientIdPanelRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____clientIdPanelRT_94;
	// UnityEngine.RectTransform FusionStats::_authorityPanelRT
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____authorityPanelRT_95;
	// UnityEngine.UI.Button FusionStats::_titleButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____titleButton_96;
	// UnityEngine.UI.Button FusionStats::_objctButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____objctButton_97;
	// UnityEngine.UI.Button FusionStats::_clearButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____clearButton_98;
	// UnityEngine.UI.Button FusionStats::_togglButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____togglButton_99;
	// UnityEngine.UI.Button FusionStats::_pauseButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____pauseButton_100;
	// UnityEngine.UI.Button FusionStats::_closeButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____closeButton_101;
	// UnityEngine.UI.Button FusionStats::_canvsButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____canvsButton_102;
	// UnityEngine.Font FusionStats::_font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ____font_103;
	// System.Boolean FusionStats::_hidden
	bool ____hidden_104;
	// System.Boolean FusionStats::_paused
	bool ____paused_105;
	// System.Int32 FusionStats::_layoutDirty
	int32_t ____layoutDirty_106;
	// System.Boolean FusionStats::_activeDirty
	bool ____activeDirty_107;
	// System.Double FusionStats::_currentDrawTime
	double ____currentDrawTime_108;
	// System.Double FusionStats::_delayDrawUntil
	double ____delayDrawUntil_109;
	// System.String FusionStats::_previousObjectTitle
	String_t* ____previousObjectTitle_111;
	// System.Single FusionStats::_lastLayoutUpdate
	float ____lastLayoutUpdate_112;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
};

// Fusion.NetworkObject
struct NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
	// System.Int32* Fusion.NetworkObject::Ptr
	int32_t* ___Ptr_5;
	// System.Int32* Fusion.NetworkObject::Changed
	int32_t* ___Changed_6;
	// Fusion.FastReferenceList`1<Fusion.NetworkBehaviour> Fusion.NetworkObject::CallbackBehaviours
	FastReferenceList_1_t2DC9499F4E148A6E8794A7A5E3F1A83D98AA0D76* ___CallbackBehaviours_7;
	// Fusion.NetworkId Fusion.NetworkObject::Id
	NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 ___Id_8;
	// System.Boolean Fusion.NetworkObject::IsResume
	bool ___IsResume_9;
	// Fusion.NetworkRunner Fusion.NetworkObject::Runner
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___Runner_10;
	// Fusion.NetworkObject/ObjectInterestModes Fusion.NetworkObject::ObjectInterest
	int32_t ___ObjectInterest_11;
	// System.String[] Fusion.NetworkObject::DefaultInterestGroups
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___DefaultInterestGroups_12;
	// System.Boolean Fusion.NetworkObject::DestroyWhenStateAuthorityLeaves
	bool ___DestroyWhenStateAuthorityLeaves_13;
	// System.Boolean Fusion.NetworkObject::AllowStateAuthorityOverride
	bool ___AllowStateAuthorityOverride_14;
	// Fusion.NetworkAreaOfInterestBehaviour Fusion.NetworkObject::AoiPositionSource
	NetworkAreaOfInterestBehaviour_tD2D502D3E647D9E5E4D8A0E3D22DC9F0B674AACD* ___AoiPositionSource_15;
	// Fusion.Tick Fusion.NetworkObject::<LastReceiveTick>k__BackingField
	Tick_t57D39A4600C22C5C14D12A0C565FEB34404FD02F ___U3CLastReceiveTickU3Ek__BackingField_16;
	// Fusion.NetworkObjectFlags Fusion.NetworkObject::Flags
	int32_t ___Flags_17;
	// Fusion.NetworkObjectGuid Fusion.NetworkObject::NetworkGuid
	NetworkObjectGuid_t99EAC957EE861D66626645313D35A1F49AF134B4 ___NetworkGuid_18;
	// Fusion.NetworkObject/PredictionData Fusion.NetworkObject::PredictedSpawn
	PredictionData_tAB7F59FFE9B92C0D64188C2D2BB591CC45173403 ___PredictedSpawn_19;
	// Fusion.NetworkObject[] Fusion.NetworkObject::NestedObjects
	NetworkObjectU5BU5D_tB73C7914AB3A2AB2BCE11B2D5AFDEAE2A48F2D0D* ___NestedObjects_20;
	// Fusion.NetworkBehaviour[] Fusion.NetworkObject::NetworkedBehaviours
	NetworkBehaviourU5BU5D_t60B9B079110E3B7AAB961DDA3B483DB8CDD56F6F* ___NetworkedBehaviours_21;
	// Fusion.SimulationBehaviour[] Fusion.NetworkObject::SimulationBehaviours
	SimulationBehaviourU5BU5D_t31031271E2F0F613B675EBEF61151021139E1C4E* ___SimulationBehaviours_22;
	// System.Boolean Fusion.NetworkObject::InSimulation
	bool ___InSimulation_23;
};

// Fusion.NetworkRunner
struct NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
	// Fusion.NetworkRunner/DeferredShutdownParams Fusion.NetworkRunner::_deferredShutdownParams
	DeferredShutdownParams_t3F598A811D32AD9AE4A814809263F7035376B9AF ____deferredShutdownParams_5;
	// Fusion.Simulation Fusion.NetworkRunner::_simulation
	Simulation_t1D52B02F9D931E87FAEB15A3EE8B13ED014DB584* ____simulation_7;
	// Fusion.NetworkRunner/SimulationPhase Fusion.NetworkRunner::_simulationPhase
	int32_t ____simulationPhase_8;
	// Fusion.NetworkRunner/ShutdownFlags Fusion.NetworkRunner::_simulationShutdown
	int32_t ____simulationShutdown_9;
	// Fusion.NetworkObjectRefMap`1<Fusion.NetworkObject> Fusion.NetworkRunner::_objects
	NetworkObjectRefMap_1_t09E8E07F1985CA0C12E271256B24BBFF00DB90F6* ____objects_10;
	// Fusion.SimulationBehaviourUpdater Fusion.NetworkRunner::_behaviourUpdater
	SimulationBehaviourUpdater_t1D2813CD5F3514AE8854F58396E79C2053157565* ____behaviourUpdater_11;
	// System.Collections.Generic.List`1<Fusion.INetworkRunnerCallbacks> Fusion.NetworkRunner::_callbacks
	List_1_tA8148AA407AA53B8F5D3BFB8B1AE9D9C941E8545* ____callbacks_12;
	// Fusion.Allocator* Fusion.NetworkRunner::_changedAllocator
	Allocator_t4184B6C7C53A6059F1EBA19A30D551CDECA2F69C* ____changedAllocator_13;
	// System.Collections.Generic.List`1<Fusion.NetworkId> Fusion.NetworkRunner::_destroyIdsBuffer
	List_1_t8673857563BA6C5F285B36C12CE318D403D7CE03* ____destroyIdsBuffer_14;
	// System.Collections.Generic.LinkedList`1<Fusion.RunnerVisibilityNode> Fusion.NetworkRunner::_visibilityNodes
	LinkedList_1_t3813413FE4ECB2279D0C7AC05BD288865A34356B* ____visibilityNodes_15;
	// System.Boolean Fusion.NetworkRunner::_isVisible
	bool ____isVisible_16;
	// System.Collections.Generic.Queue`1<Fusion.NetworkRunner/SpawnQueueEntry> Fusion.NetworkRunner::_spawnQueue
	Queue_1_t15EDAB8C3525B4DF694D0B2011D38D47CDCABD5D* ____spawnQueue_17;
	// System.Boolean Fusion.NetworkRunner::_printedInterestGroupsWarning
	bool ____printedInterestGroupsWarning_18;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> Fusion.NetworkRunner::_initializeOperation
	TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* ____initializeOperation_19;
	// Fusion.NetworkProjectConfig Fusion.NetworkRunner::_config
	NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* ____config_20;
	// System.Int32 Fusion.NetworkRunner::_ticksExecuted
	int32_t ____ticksExecuted_21;
	// Fusion.INetworkObjectPool Fusion.NetworkRunner::_networkObjectPool
	RuntimeObject* ____networkObjectPool_22;
	// System.UInt32 Fusion.NetworkRunner::_idCounter
	uint32_t ____idCounter_23;
	// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkRunner::_predictionSpawns
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ____predictionSpawns_24;
	// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkRunner::_predictionDespawns
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ____predictionDespawns_25;
	// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkRunner::_activeSceneObjectsBuffer
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ____activeSceneObjectsBuffer_26;
	// Fusion.ReadAccuracy Fusion.NetworkRunner::_positionReadAccuracy
	ReadAccuracy_tAB2B6530E294025CF190D052F8B35FAC62C753B5 ____positionReadAccuracy_27;
	// Fusion.WriteAccuracy Fusion.NetworkRunner::_positionWriteAccuracy
	WriteAccuracy_tC6AAEB23A6F50AD278A1D892364F7C0E427241AF ____positionWriteAccuracy_28;
	// Fusion.ReadAccuracy Fusion.NetworkRunner::_rotationReadAccuracy
	ReadAccuracy_tAB2B6530E294025CF190D052F8B35FAC62C753B5 ____rotationReadAccuracy_29;
	// Fusion.WriteAccuracy Fusion.NetworkRunner::_rotationWriteAccuracy
	WriteAccuracy_tC6AAEB23A6F50AD278A1D892364F7C0E427241AF ____rotationWriteAccuracy_30;
	// System.Byte[] Fusion.NetworkRunner::_connectionToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____connectionToken_31;
	// System.Nullable`1<System.Boolean> Fusion.NetworkRunner::_provideInput
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____provideInput_32;
	// System.Threading.CancellationTokenSource Fusion.NetworkRunner::OperationsCancellationTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___OperationsCancellationTokenSource_33;
	// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkRunner::_remotePrefabsWaitingForSpawnedCallback
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ____remotePrefabsWaitingForSpawnedCallback_34;
	// System.Boolean Fusion.NetworkRunner::<IsHostMigrationEnabled>k__BackingField
	bool ___U3CIsHostMigrationEnabledU3Ek__BackingField_35;
	// System.UInt32 Fusion.NetworkRunner::<HostMigrationSnapshotDelay>k__BackingField
	uint32_t ___U3CHostMigrationSnapshotDelayU3Ek__BackingField_36;
	// System.Byte* Fusion.NetworkRunner::_hostSnapshotData0
	uint8_t* ____hostSnapshotData0_37;
	// System.Byte* Fusion.NetworkRunner::_hostSnapshotData1
	uint8_t* ____hostSnapshotData1_38;
	// System.Byte* Fusion.NetworkRunner::_hostSnapshotDelta
	uint8_t* ____hostSnapshotDelta_39;
	// System.Threading.Tasks.TaskCompletionSource`1<System.ValueTuple`5<System.Boolean,System.Int32,System.Int32,System.UInt32,System.Byte[]>> Fusion.NetworkRunner::_buildHostSnapshotTask
	TaskCompletionSource_1_t9ED39B9FD79B771ECAD656817DB0F8370498BFAD* ____buildHostSnapshotTask_40;
	// System.Nullable`1<Fusion.NetworkRunner/HostSnapshotCompressionJob> Fusion.NetworkRunner::_buildHostSnapshotJob
	Nullable_1_tC45089A0BD074FF0A859152F3B8175B86B2FCB29 ____buildHostSnapshotJob_41;
	// System.Nullable`1<Unity.Jobs.JobHandle> Fusion.NetworkRunner::_buildHostSnapshotHandler
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 ____buildHostSnapshotHandler_42;
	// Fusion.Protocol.HostMigration Fusion.NetworkRunner::_lastHostMigrationInfo
	HostMigration_t993547CB8CCEB0971E6050E36B4EFC675D156960* ____lastHostMigrationInfo_43;
	// System.Collections.Generic.Stack`1<Fusion.NetworkRunner/NetworkObjectInactivityGuard> Fusion.NetworkRunner::_inactivityGuardPool
	Stack_1_t0F5E34EE9211205B247AA0F814825DB9E5DD48B7* ____inactivityGuardPool_44;
	// Fusion.GameMode Fusion.NetworkRunner::<GameMode>k__BackingField
	int32_t ___U3CGameModeU3Ek__BackingField_48;
	// Fusion.SessionInfo Fusion.NetworkRunner::<SessionInfo>k__BackingField
	SessionInfo_t191C09E2A2B9A71925D9B0EDEA501A286FD4BCAB* ___U3CSessionInfoU3Ek__BackingField_49;
	// Fusion.LobbyInfo Fusion.NetworkRunner::<LobbyInfo>k__BackingField
	LobbyInfo_t5F666E1575123FE4714F1B6067A8EAA55CFFA5CF* ___U3CLobbyInfoU3Ek__BackingField_50;
	// System.Threading.Tasks.TaskCompletionSource`1<System.ValueTuple`2<Fusion.ShutdownReason,System.String>> Fusion.NetworkRunner::_cloudOperation
	TaskCompletionSource_1_tB8CC3005937DC70B6B78A3B987DA84E5BDB3FED6* ____cloudOperation_51;
	// Fusion.CloudServices Fusion.NetworkRunner::_cloudServices
	CloudServices_tC404BACC0187CF1F40CF228DCEFA39DA7D4F270C* ____cloudServices_52;
	// Fusion.INetworkSceneManager Fusion.NetworkRunner::_sceneManager
	RuntimeObject* ____sceneManager_53;
	// Fusion.INetworkSceneManagerObjectResolver Fusion.NetworkRunner::_sceneObjectResolver
	RuntimeObject* ____sceneObjectResolver_54;
	// System.Collections.Generic.Dictionary`2<Fusion.NetworkObjectGuid,Fusion.NetworkObject> Fusion.NetworkRunner::_sceneObjectLoopkup
	Dictionary_2_t3BC581E5E3414F2C3884E7EA3F3D93105565B726* ____sceneObjectLoopkup_55;
	// System.Nullable`1<Fusion.SceneRef> Fusion.NetworkRunner::_sharedModeStartSceneRef
	Nullable_1_t60B9431C1BCAA220BB2AA6938CBB4CD1F9CFE0F1 ____sharedModeStartSceneRef_56;
	// UnityEngine.SceneManagement.Scene Fusion.NetworkRunner::_multiplePeerUnityScene
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ____multiplePeerUnityScene_57;
	// System.Boolean Fusion.NetworkRunner::_isMultiplePeerUnitySceneTemp
	bool ____isMultiplePeerUnitySceneTemp_58;
	// System.Int32* Fusion.NetworkRunner::_tempWords
	int32_t* ____tempWords_59;
	// System.Int32 Fusion.NetworkRunner::_tempWordsCapacity
	int32_t ____tempWordsCapacity_60;
};

// Fusion.NetworkSceneManagerBase
struct NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
	// System.Boolean Fusion.NetworkSceneManagerBase::ShowHierarchyWindowOverlay
	bool ___ShowHierarchyWindowOverlay_5;
	// System.Collections.IEnumerator Fusion.NetworkSceneManagerBase::_runningCoroutine
	RuntimeObject* ____runningCoroutine_6;
	// System.Boolean Fusion.NetworkSceneManagerBase::_currentSceneOutdated
	bool ____currentSceneOutdated_7;
	// Fusion.SceneRef Fusion.NetworkSceneManagerBase::_currentScene
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ____currentScene_8;
	// Fusion.NetworkRunner Fusion.NetworkSceneManagerBase::<Runner>k__BackingField
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___U3CRunnerU3Ek__BackingField_9;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// Fusion.SimulationBehaviour
struct SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
	// Fusion.SimulationBehaviour Fusion.SimulationBehaviour::Prev
	SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0* ___Prev_4;
	// Fusion.SimulationBehaviour Fusion.SimulationBehaviour::Next
	SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0* ___Next_5;
	// Fusion.SimulationBehaviourFlags Fusion.SimulationBehaviour::Flags
	int32_t ___Flags_6;
	// Fusion.NetworkRunner Fusion.SimulationBehaviour::Runner
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___Runner_7;
	// Fusion.NetworkObject Fusion.SimulationBehaviour::Object
	NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___Object_8;
};

// ToggleRunnerProvideInput
struct ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
};

// ToggleRunnerVisibility
struct ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
};

// SpawnerPrototype`1<PlayerSpawnPointPrototype>
struct SpawnerPrototype_1_t2B1CAFDC5FDCFA5CBBB3556DADE68606CB2AC742  : public SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0
{
	// System.Collections.Generic.Dictionary`2<Fusion.PlayerRef,System.Collections.Generic.List`1<Fusion.NetworkObject>> SpawnerPrototype`1::_spawnedLookup
	Dictionary_2_tCF872C9A43CC2A631FE835B219F267869FA01470* ____spawnedLookup_9;
	// Fusion.NetworkObject SpawnerPrototype`1::PlayerPrefab
	NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___PlayerPrefab_10;
	// SpawnerPrototype`1/SpawnMethods<T> SpawnerPrototype`1::SpawnMethod
	int32_t ___SpawnMethod_11;
	// SpawnerPrototype`1/AuthorityOptions<T> SpawnerPrototype`1::StateAuthority
	int32_t ___StateAuthority_12;
	// ISpawnPointManagerPrototype`1<T> SpawnerPrototype`1::spawnManager
	RuntimeObject* ___spawnManager_13;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner_12;
	// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis_13;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CellSize_14;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Spacing_15;
	// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint_16;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount_17;
};

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_Spacing
	float ___m_Spacing_12;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandWidth
	bool ___m_ChildForceExpandWidth_13;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandHeight
	bool ___m_ChildForceExpandHeight_14;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlWidth
	bool ___m_ChildControlWidth_15;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlHeight
	bool ___m_ChildControlHeight_16;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleWidth
	bool ___m_ChildScaleWidth_17;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleHeight
	bool ___m_ChildScaleHeight_18;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ReverseArrangement
	bool ___m_ReverseArrangement_19;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// Fusion.NetworkSceneManagerDefault
struct NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91  : public NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39
{
	// System.Int32 Fusion.NetworkSceneManagerDefault::PostLoadDelayFrames
	int32_t ___PostLoadDelayFrames_10;
};

// PlayerSpawnPointManagerPrototype
struct PlayerSpawnPointManagerPrototype_t155715CC2FBC2EE8FF5A7872955E79575C4C18F7  : public SpawnPointManagerPrototype_1_tF8B95B3F73100916235CA03303E1682154B77872
{
};

// PlayerSpawnPointPrototype
struct PlayerSpawnPointPrototype_t9B5A1C452F0255C5FF0DB273738686CBB585508A  : public SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0
{
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA  : public HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E
{
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// PlayerSpawnerPrototype
struct PlayerSpawnerPrototype_t4796F19F1683ADBE95CDE67D28D80E55D6F657E8  : public SpawnerPrototype_1_t2B1CAFDC5FDCFA5CBBB3556DADE68606CB2AC742
{
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// UnityEngine.UI.VerticalLayoutGroup
struct VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8  : public HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E
{
};

// System.Collections.Generic.Dictionary`2<System.Guid,Fusion.NetworkObject>

// System.Collections.Generic.Dictionary`2<System.Guid,Fusion.NetworkObject>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Collider>

// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Collider2D>

// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.MeshFilter>

// System.Collections.Generic.List`1<Fusion.NetworkObject>
struct List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NetworkObjectU5BU5D_tB73C7914AB3A2AB2BCE11B2D5AFDEAE2A48F2D0D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Fusion.NetworkObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Renderer>

// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>
struct List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,Fusion.NetworkObject>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,Fusion.NetworkObject>

// Fusion.Editor.BoundsTools
struct BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.MeshFilter> Fusion.Editor.BoundsTools::meshFilters
	List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ___meshFilters_0;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> Fusion.Editor.BoundsTools::meshRenderers
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ___meshRenderers_1;
	// System.Collections.Generic.List`1<UnityEngine.Collider> Fusion.Editor.BoundsTools::colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___colliders_2;
	// System.Collections.Generic.List`1<UnityEngine.Collider> Fusion.Editor.BoundsTools::validColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___validColliders_3;
	// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer> Fusion.Editor.BoundsTools::spriteRenderers
	List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* ___spriteRenderers_4;
	// System.Collections.Generic.List`1<UnityEngine.Collider2D> Fusion.Editor.BoundsTools::colliders2D
	List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* ___colliders2D_5;
	// System.Collections.Generic.List`1<UnityEngine.Collider2D> Fusion.Editor.BoundsTools::validColliders2D
	List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* ___validColliders2D_6;
};

// Fusion.Editor.BoundsTools

// Fusion.FusionRuntimeCheck

// Fusion.FusionRuntimeCheck

// FusionScalableIMGUI
struct FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields
{
	// UnityEngine.GUISkin FusionScalableIMGUI::_scalableSkin
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ____scalableSkin_0;
};

// FusionScalableIMGUI

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Fusion.NetworkProjectConfig

// Fusion.NetworkProjectConfig

// Fusion.NetworkRunnerExtensions

// Fusion.NetworkRunnerExtensions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0

// Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0

// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0

// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0

// Readme/Section

// Readme/Section

// System.Collections.Generic.List`1/Enumerator<Fusion.NetworkObject>

// System.Collections.Generic.List`1/Enumerator<Fusion.NetworkObject>

// System.Collections.Generic.List`1/Enumerator<Fusion.NetworkRunner>

// System.Collections.Generic.List`1/Enumerator<Fusion.NetworkRunner>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<Fusion.SimulationModes>

// System.Nullable`1<Fusion.SimulationModes>

// System.Nullable`1<System.Single>

// System.Nullable`1<System.Single>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>

// System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>

// System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_StaticFields
{
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* ___Default_0;
};

// System.ComponentModel.DescriptionAttribute

// System.Double

// System.Double

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.SceneManagement.LoadSceneParameters

// UnityEngine.SceneManagement.LoadSceneParameters

// Fusion.NetworkRNG

// Fusion.NetworkRNG

// Fusion.PlayerRef

// Fusion.PlayerRef

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// Fusion.SceneRef

// Fusion.SceneRef

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.ControllerColliderHit

// UnityEngine.ControllerColliderHit

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Fusion.StatsInternal.FusionStatsUtilities
struct FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields
{
	// System.Collections.Generic.List`1<System.String> Fusion.StatsInternal.FusionStatsUtilities::_cachedGraphVisualizationNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____cachedGraphVisualizationNames_5;
	// UnityEngine.Font Fusion.StatsInternal.FusionStatsUtilities::_font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ____font_6;
	// UnityEngine.Texture2D Fusion.StatsInternal.FusionStatsUtilities::_meterTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____meterTexture_8;
	// UnityEngine.Sprite Fusion.StatsInternal.FusionStatsUtilities::_meterSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____meterSprite_9;
	// UnityEngine.Texture2D Fusion.StatsInternal.FusionStatsUtilities::_circle32Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____circle32Texture_11;
	// UnityEngine.Sprite Fusion.StatsInternal.FusionStatsUtilities::_circle32Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____circle32Sprite_12;
	// UnityEngine.Color Fusion.StatsInternal.FusionStatsUtilities::DARK_GREEN
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___DARK_GREEN_13;
	// UnityEngine.Color Fusion.StatsInternal.FusionStatsUtilities::DARK_BLUE
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___DARK_BLUE_14;
	// UnityEngine.Color Fusion.StatsInternal.FusionStatsUtilities::DARK_RED
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___DARK_RED_15;
};

// Fusion.StatsInternal.FusionStatsUtilities

// Fusion.FusionUnityLogger

// Fusion.FusionUnityLogger

// UnityEngine.GUIStyleState

// UnityEngine.GUIStyleState

// Fusion.NetworkObjectGuid

// Fusion.NetworkObjectGuid

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.RectOffset

// UnityEngine.RectOffset

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26

// Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26

// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0

// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0

// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0

// Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0

// Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4

// Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4

// Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5

// Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5

// System.WeakReference`1<Fusion.NetworkSceneManagerBase>

// System.WeakReference`1<Fusion.NetworkSceneManagerBase>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.Font

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};

// UnityEngine.GUIStyle

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.InputSystem.InputValue

// UnityEngine.InputSystem.InputValue

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<UnityEngine.AsyncOperation>

// System.Action`1<UnityEngine.AsyncOperation>

// System.Action`1<UnityEngine.SceneManagement.Scene>

// System.Action`1<UnityEngine.SceneManagement.Scene>

// System.Func`2<System.Object,System.Int32>

// System.Func`2<System.Object,System.Int32>

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// UnityEngine.GUISkin

// System.InvalidOperationException

// System.InvalidOperationException

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// System.NotSupportedException

// System.NotSupportedException

// Readme

// Readme

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate

// Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.CharacterController

// UnityEngine.CharacterController

// UnityEngine.Collider2D

// UnityEngine.Collider2D

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// BasicRigidBodyPush

// BasicRigidBodyPush

// Fusion.Behaviour

// Fusion.Behaviour

// MobileDisableAutoSwitchControls

// MobileDisableAutoSwitchControls

// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_AllActivePlayersCount
	int32_t ___s_AllActivePlayersCount_37;
	// UnityEngine.InputSystem.PlayerInput[] UnityEngine.InputSystem.PlayerInput::s_AllActivePlayers
	PlayerInputU5BU5D_t68A8570E76E18996F872BEEBA1C81ED2E4671080* ___s_AllActivePlayers_38;
	// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.PlayerInput::s_UserChangeDelegate
	Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0* ___s_UserChangeDelegate_39;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevicesCount
	int32_t ___s_InitPairWithDevicesCount_40;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___s_InitPairWithDevices_41;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPlayerIndex
	int32_t ___s_InitPlayerIndex_42;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitSplitScreenIndex
	int32_t ___s_InitSplitScreenIndex_43;
	// System.String UnityEngine.InputSystem.PlayerInput::s_InitControlScheme
	String_t* ___s_InitControlScheme_44;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::s_DestroyIfDeviceSetupUnsuccessful
	bool ___s_DestroyIfDeviceSetupUnsuccessful_45;
};

// UnityEngine.InputSystem.PlayerInput

// StarterAssets.StarterAssetsInputs

// StarterAssets.StarterAssetsInputs

// StarterAssets.ThirdPersonController

// StarterAssets.ThirdPersonController

// StarterAssets.UICanvasControllerInput

// StarterAssets.UICanvasControllerInput

// UIVirtualButton

// UIVirtualButton

// UIVirtualJoystick

// UIVirtualJoystick

// UIVirtualTouchZone

// UIVirtualTouchZone

// SpawnPointManagerPrototype`1<PlayerSpawnPointPrototype>
struct SpawnPointManagerPrototype_1_tF8B95B3F73100916235CA03303E1682154B77872_StaticFields
{
	// UnityEngine.Collider[] SpawnPointManagerPrototype`1::blocked3D
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___blocked3D_10;
};

// SpawnPointManagerPrototype`1<PlayerSpawnPointPrototype>

// FusionStats
struct FusionStats_t0361C00ADA9A527C7EF810A31F4D964A0DAB864F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<Fusion.NetworkRunner,System.Collections.Generic.List`1<FusionStats>> FusionStats::_statsForRunnerLookup
	Dictionary_2_tE895F84BC5B5CBB34273E02A17E2028850359AE6* ____statsForRunnerLookup_4;
	// System.Collections.Generic.Dictionary`2<System.String,FusionStats> FusionStats::_activeGuids
	Dictionary_2_t74FADE6343657B7C1F56B7477511157BB3AFE29D* ____activeGuids_5;
	// System.Nullable`1<System.Boolean> FusionStats::_newInputSystemFound
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____newInputSystemFound_110;
};

// FusionStats

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.LayoutGroup

// UnityEngine.UI.LayoutGroup

// Fusion.NetworkObject

// Fusion.NetworkObject

// Fusion.NetworkRunner
struct NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Fusion.NetworkRunner> Fusion.NetworkRunner::_instancesByMultiPeerScene
	Dictionary_2_t8043B6C785B439524A8755BCF6A5CC3612CFCFCD* ____instancesByMultiPeerScene_4;
	// Fusion.Simulation/IDeltaCompressor Fusion.NetworkRunner::BurstDeltaCompressor
	RuntimeObject* ___BurstDeltaCompressor_6;
	// System.Collections.Generic.List`1<Fusion.NetworkRunner> Fusion.NetworkRunner::_instances
	List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281* ____instances_45;
	// Fusion.NetworkRunner[] Fusion.NetworkRunner::_instancesSnapshot
	NetworkRunnerU5BU5D_tDA69BE78BB341E0EA1AFC6CB984B303A36561725* ____instancesSnapshot_46;
	// System.Int32 Fusion.NetworkRunner::_instancesSnapshotCount
	int32_t ____instancesSnapshotCount_47;
};

// Fusion.NetworkRunner

// Fusion.NetworkSceneManagerBase
struct NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_StaticFields
{
	// System.WeakReference`1<Fusion.NetworkSceneManagerBase> Fusion.NetworkSceneManagerBase::s_currentlyLoading
	WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* ___s_currentlyLoading_4;
};

// Fusion.NetworkSceneManagerBase

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// Fusion.SimulationBehaviour

// Fusion.SimulationBehaviour

// ToggleRunnerProvideInput
struct ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_StaticFields
{
	// ToggleRunnerProvideInput ToggleRunnerProvideInput::_instance
	ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A* ____instance_4;
};

// ToggleRunnerProvideInput

// ToggleRunnerVisibility
struct ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_StaticFields
{
	// ToggleRunnerVisibility ToggleRunnerVisibility::_instance
	ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5* ____instance_4;
};

// ToggleRunnerVisibility

// SpawnerPrototype`1<PlayerSpawnPointPrototype>

// SpawnerPrototype`1<PlayerSpawnPointPrototype>

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.Dropdown

// UnityEngine.UI.GridLayoutGroup

// UnityEngine.UI.GridLayoutGroup

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup

// Fusion.NetworkSceneManagerDefault

// Fusion.NetworkSceneManagerDefault

// PlayerSpawnPointManagerPrototype

// PlayerSpawnPointManagerPrototype

// PlayerSpawnPointPrototype

// PlayerSpawnPointPrototype

// UnityEngine.UI.Toggle

// UnityEngine.UI.Toggle

// UnityEngine.UI.HorizontalLayoutGroup

// UnityEngine.UI.HorizontalLayoutGroup

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// PlayerSpawnerPrototype

// PlayerSpawnerPrototype

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text

// UnityEngine.UI.VerticalLayoutGroup

// UnityEngine.UI.VerticalLayoutGroup
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053  : public RuntimeArray
{
	ALIGN_FIELD (8) MemberInfo_t* m_Items[1];

	inline MemberInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void SpawnerPrototype`1<System.Object>::RegisterPlayerAndObject(Fusion.PlayerRef,Fusion.NetworkObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerPrototype_1_RegisterPlayerAndObject_m3E4C6D07A027176CB542019B402CA4F88C65BAC2_gshared (SpawnerPrototype_1_t62F1C32483637253B2C5E111F0DCBB92F4A8594E* __this, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___0_player, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___1_playerObject, const RuntimeMethod* method) ;
// System.Void SpawnerPrototype`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerPrototype_1__ctor_mB8A22FA2547449CD6BDA23CC7D1B175809837771_gshared (SpawnerPrototype_1_t62F1C32483637253B2C5E111F0DCBB92F4A8594E* __this, const RuntimeMethod* method) ;
// System.Void SpawnPointManagerPrototype`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnPointManagerPrototype_1__ctor_m2CC9134F89E8EA31970E9B883B4F025F8A1313A7_gshared (SpawnPointManagerPrototype_1_tC1B622C1FA044879897CECF6C1EEA79C44B5B826* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::.ctor(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_mFA8F15EE5770AAF9026420AE64E667705760FAA3_gshared (ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C* __this, float ___0_item1, float ___1_item2, int32_t ___2_item3, int32_t ___3_item4, float ___4_item5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___0_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_gshared (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_arg0, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject** ___0_target, const RuntimeMethod* method) ;
// System.Void System.WeakReference`1<System.Object>::SetTarget(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_SetTarget_mCEAE8D9CF9551015CE46420AB8614A8D1F14C329_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___1_results, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.WeakReference`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m47DD6DE10DF49155FCF329CC0B0FC21C23EDA26A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* Dictionary_2_get_Values_m2A497B1A3A2856303D35DC5C7172B6CC06BBF5AE_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.SceneManagement.Scene>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF80192BF77173A803E05499C419C61B2BB5AFBA7_gshared_inline (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_obj, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mE6284AC52B30253F1B4E5A2352658355B7BCC262_gshared (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::GetComponents<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_results, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// T UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_GetBuiltinResource_TisRuntimeObject_mD1671043430ED893B11348B4C95B5969274DB9B6_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Single>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;

// System.Void SpawnerPrototype`1<PlayerSpawnPointPrototype>::RegisterPlayerAndObject(Fusion.PlayerRef,Fusion.NetworkObject)
inline void SpawnerPrototype_1_RegisterPlayerAndObject_m692A4F3F4AF9B04834E9ED98360A74AB6C30828D (SpawnerPrototype_1_t2B1CAFDC5FDCFA5CBBB3556DADE68606CB2AC742* __this, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___0_player, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___1_playerObject, const RuntimeMethod* method)
{
	((  void (*) (SpawnerPrototype_1_t2B1CAFDC5FDCFA5CBBB3556DADE68606CB2AC742*, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C*, const RuntimeMethod*))SpawnerPrototype_1_RegisterPlayerAndObject_m3E4C6D07A027176CB542019B402CA4F88C65BAC2_gshared)(__this, ___0_player, ___1_playerObject, method);
}
// System.Void Fusion.NetworkRunner::SetPlayerObject(Fusion.PlayerRef,Fusion.NetworkObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunner_SetPlayerObject_m2CF15D8FADF34817C2E629C20A0B3BEACCA52D94 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___0_player, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___1_networkObject, const RuntimeMethod* method) ;
// System.Void SpawnerPrototype`1<PlayerSpawnPointPrototype>::.ctor()
inline void SpawnerPrototype_1__ctor_mD117339871C159AFAADCA7D9A5872CB8CD057763 (SpawnerPrototype_1_t2B1CAFDC5FDCFA5CBBB3556DADE68606CB2AC742* __this, const RuntimeMethod* method)
{
	((  void (*) (SpawnerPrototype_1_t2B1CAFDC5FDCFA5CBBB3556DADE68606CB2AC742*, const RuntimeMethod*))SpawnerPrototype_1__ctor_mB8A22FA2547449CD6BDA23CC7D1B175809837771_gshared)(__this, method);
}
// System.Void SpawnPointManagerPrototype`1<PlayerSpawnPointPrototype>::.ctor()
inline void SpawnPointManagerPrototype_1__ctor_m277C4593C2E8CA84BDC42D057C38D10D77F661E0 (SpawnPointManagerPrototype_1_tF8B95B3F73100916235CA03303E1682154B77872* __this, const RuntimeMethod* method)
{
	((  void (*) (SpawnPointManagerPrototype_1_tF8B95B3F73100916235CA03303E1682154B77872*, const RuntimeMethod*))SpawnPointManagerPrototype_1__ctor_m2CC9134F89E8EA31970E9B883B4F025F8A1313A7_gshared)(__this, method);
}
// System.Void Fusion.SimulationBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationBehaviour__ctor_m5547F07C9BC04E898E71BB86F72BD33D9B9FC937 (SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0* __this, const RuntimeMethod* method) ;
// Fusion.NetworkProjectConfig Fusion.NetworkProjectConfig::get_Global()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* NetworkProjectConfig_get_Global_m26963728C42B52AD0DEA02E7BAB21B5A1C2BA1C9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void ToggleRunnerProvideInput::ToggleAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1 (ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A* __this, int32_t ___0_runnerIndex, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<Fusion.NetworkRunner> Fusion.NetworkRunner::GetInstancesEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4 NetworkRunner_GetInstancesEnumerator_mF6FEA15C43442E12763D07EA57BDEF49D5B38E1F (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Fusion.NetworkRunner>::get_Current()
inline NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_inline (Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4* __this, const RuntimeMethod* method)
{
	return ((  NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* (*) (Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkRunner::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRunner_get_IsRunning_mD44E761C42BFE8D5A4580B915F1204E38F47C570 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkRunner::set_ProvideInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunner_set_ProvideInput_mEE98BE2C97A9B47224FA331B2827FFB0F4FC46FA (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Fusion.NetworkRunner>::MoveNext()
inline bool Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76 (Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Fusion.Behaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour__ctor_m1CC74A6DA707BC75BDC3BF41D5BF5CA0809B0A8D (Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015* __this, const RuntimeMethod* method) ;
// System.Void ToggleRunnerVisibility::ToggleAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711 (ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5* __this, int32_t ___0_runnerIndex, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkRunner::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunner_set_IsVisible_mBA05D9E055782412EABA7304E52D2290E186E321 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B (const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_textField_mC554496BAB959445F0CFA30BDC5736DC1F057D48 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_box_m21BE7FC56D903B95BAFAE8890425D330EA88D893 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.GUIStyleState::get_background()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* GUIStyleState_get_background_mE29B6D17E91BFD828E40B369C6CE336ECBCC18DD (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_background_mD92FC76F8956A8EBB022C3E8EA02822D79F451C4 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_hover()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_hover_m159CD4F6636D87CBBC4B721AAE62436B86576EBF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_window_m760DAF129E72775DFD18CB71720AD306345E91C2 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_active_m3ABA9E58666A1CFE6EEEB3707E86D58DFE062CCB (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, int32_t ___0_left, int32_t ___1_right, int32_t ___2_top, int32_t ___3_bottom, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_border(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_border_mA11481A8F139D4403E0764E07F49516D390CC6A7 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___0_value, const RuntimeMethod* method) ;
// System.Void FusionScalableIMGUI::InitializedGUIStyles(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionScalableIMGUI_InitializedGUIStyles_m8116BF6321B19022D14340439790293C5790C21C (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___0_baseSkin, const RuntimeMethod* method) ;
// System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single> FusionScalableIMGUI::ScaleGuiSkinToScreenHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C FusionScalableIMGUI_ScaleGuiSkinToScreenHeight_m3A0C4C15553D63E6A28EFEE5F134328D0F03588C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mE913811A2F7566294BF4649A434282634E7254B3 (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_margin(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_margin_m9AAB6691C260ECD89195BE151F2ADDBF2E740C85 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_padding_m0C69415588C6032B372A48B1A1366CF43A083E14 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___0_value, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single>::.ctor(T1,T2,T3,T4,T5)
inline void ValueTuple_5__ctor_mFA8F15EE5770AAF9026420AE64E667705760FAA3 (ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C* __this, float ___0_item1, float ___1_item2, int32_t ___2_item3, int32_t ___3_item4, float ___4_item5, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C*, float, float, int32_t, int32_t, float, const RuntimeMethod*))ValueTuple_5__ctor_mFA8F15EE5770AAF9026420AE64E667705760FAA3_gshared)(__this, ___0_item1, ___1_item2, ___2_item3, ___3_item4, ___4_item5, method);
}
// System.Void MobileDisableAutoSwitchControls::DisableAutoSwitchControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileDisableAutoSwitchControls_DisableAutoSwitchControls_m156A87BFC0F55EC1BD438F032CB959A464A39AE4 (MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.PlayerInput::set_neverAutoSwitchControlSchemes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_neverAutoSwitchControlSchemes_mC0702F30BCC29A161B667EF791B9B9A12FC6DF60 (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UIVirtualButton::OutputButtonStateValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, bool ___0_buttonState, const RuntimeMethod* method) ;
// System.Void UIVirtualButton::OutputButtonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonClickEvent_m7DEA4C619F5DCCE273371E9D7B7760FC05D2DF32 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
inline void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared)(__this, ___0_arg0, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_SetupHandle_m31819BE784870B9E54B3A50CA1956106F7BDB0C6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_newPosition, const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnDrag_mB0E6B186E3567D9B4C37860E70DCA0B8DDB746C0 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPoint, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___2_cam, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___3_localPoint, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualJoystick::ApplySizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplySizeDelta_mE401CB7F9B4D1E53DD878FE6D3B34DD98A8BBEDB (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualJoystick::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ClampValuesToMagnitude_m136E1691A4EA6C3D59C18AF78CB3C790CCB8346E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualJoystick::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplyInversionFilter_m92C48D8832AAFB5BCFA8C5E0E279E44E76EAC03E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_pointerPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
inline void UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0 (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_gshared)(__this, ___0_arg0, method);
}
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::ClampMagnitude(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_ClampMagnitude_m9BF093877BD11282C41088022FE4AE70A3A0ECA9_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) ;
// System.Single UIVirtualJoystick::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UIVirtualTouchZone::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetupHandle_m01D23F4128356836F9A12EAE5445227B24E8A894 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UIVirtualTouchZone::SetObjectActiveState(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_targetObject, bool ___1_newState, const RuntimeMethod* method) ;
// System.Void UIVirtualTouchZone::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_newPosition, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualTouchZone::GetDeltaBetweenPositions(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_GetDeltaBetweenPositions_mD54442DDF2D8B643801BDA01791C97D3658E0B5B (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_firstPosition, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_secondPosition, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualTouchZone::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ClampValuesToMagnitude_mA1619A6CBC35D212940A5D0AC1823AAFDA8FCC95 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualTouchZone::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ApplyInversionFilter_mFE8FF2CCBE01FDAB1BB9FDEC163809B630173823 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) ;
// System.Void UIVirtualTouchZone::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_pointerPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Single UIVirtualTouchZone::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void BasicRigidBodyPush::PushRigidBodies(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush_PushRigidBodies_m21C4CA75FFF7646BCD91E9A673B18E6182377D13 (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___0_hit, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.ControllerColliderHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::get_moveDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293 (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231*, const RuntimeMethod*))InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared)(__this, method);
}
// System.Void StarterAssets.StarterAssetsInputs::MoveInput(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_newMoveDirection, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::LookInput(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_newLookDirection, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputValue::get_isPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::JumpInput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___0_newJumpState, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::SprintInput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___0_newSprintState, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::SetCursorState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_SetCursorState_m7D2F57E935DE40673700B1994EFA6C4BF9573D0E (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___0_newState, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.Animator>(T&)
inline bool Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<StarterAssets.StarterAssetsInputs>()
inline StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void StarterAssets.ThirdPersonController::AssignAnimationIDs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_AssignAnimationIDs_m3F78712E347AAEB24671FD485878AD4EFB45FA6A (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.ThirdPersonController::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_JumpAndGravity_m871B3C01ED71022CF151700F569540EAC058997F (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.ThirdPersonController::GroundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_GroundedCheck_mEC00FD7C667109275F153C9A1E7BDA401D514AEE (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.ThirdPersonController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Move_m6FB6A9AEA1B2354BAE790DE45C79292579802C76 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.ThirdPersonController::CameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_CameraRotation_m24BBAE5DB2B55B6DDC5218DD0DB7C53F1EF30751 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_mC32BB961B0CF9D23EDDEEC3F30021FD1BE88E261 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, int32_t ___2_layerMask, int32_t ___3_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, bool ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single StarterAssets.ThirdPersonController::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonController_ClampAngle_m8C3245A45B5FB84338F87BEAECEEE36E3C53B2B6 (float ___0_lfAngle, float ___1_lfMin, float ___2_lfMax, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_motion, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void Fusion.RuntimeUnityFlagsSetup::Check_ENABLE_IL2CPP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeUnityFlagsSetup_Check_ENABLE_IL2CPP_mE07E4D2430A3AB7FE27F6DFD581514B24051623E (const RuntimeMethod* method) ;
// System.Void Fusion.RuntimeUnityFlagsSetup::Check_NET_STANDARD_2_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeUnityFlagsSetup_Check_NET_STANDARD_2_0_m8CAEDBFB5DDF4C9A6F6D1ACA0A55D8A300E91857 (const RuntimeMethod* method) ;
// System.Void Fusion.RuntimeUnityFlagsSetup::Check_UNITY_2019_4_OR_NEWER()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeUnityFlagsSetup_Check_UNITY_2019_4_OR_NEWER_m20B6FD299EE8BA1BF3FEFA6ADBC2F44685438014 (const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) ;
// System.String Fusion.FusionUnityLogger::Color32ToRGBString(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FusionUnityLogger_Color32ToRGBString_m2B8F683E20DA62F1C35E55FDB831B256E823F23D (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821 (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Fusion.FusionUnityLogger::set_GetColor(System.Func`2<System.Object,System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FusionUnityLogger_set_GetColor_m91F84BF1AEB7B3FB6A8B0E88DC68F2A261A9E58A_inline (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// System.Int32 Fusion.FusionUnityLogger::GetRandomColor(System.Int32,UnityEngine.Color32,UnityEngine.Color32,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FusionUnityLogger_GetRandomColor_m94CAFE5848B0E399DB4A87B965216F89CF8DE81B (int32_t ___0_seed, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_min, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___2_max, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___3_svr, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkRNG::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRNG__ctor_m31399DC91D6F37205836C731BBE5A6F6E0C90541 (NetworkRNG_t64B73CD206460A54C63878CFB53238AD54ECA0B2* __this, int32_t ___0_seed, const RuntimeMethod* method) ;
// System.Int32 Fusion.NetworkRNG::RangeInclusive(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkRNG_RangeInclusive_mB454FBE1783D7A9205BF3DA96CF7B20F94B3BD7C (NetworkRNG_t64B73CD206460A54C63878CFB53238AD54ECA0B2* __this, int32_t ___0_minInclusive, int32_t ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Int32 Fusion.FusionUnityLogger::Color32ToRGB24(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FusionUnityLogger_Color32ToRGB24_m9246A5C5346D725FF475588ECB6A0B49C6E8CC87 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Boolean Fusion.Log::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_get_Initialized_mF73547D760E187C6420E009160AA15EC698929E3 (const RuntimeMethod* method) ;
// System.Void Fusion.FusionUnityLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionUnityLogger__ctor_m0287DD77CE2EF2B6BA6C1E8B0AA63BCC70049904 (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, const RuntimeMethod* method) ;
// System.Void Fusion.Log::Init(Fusion.ILogger,Fusion.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Init_m4F21A9DC1FA5575147E2AE371734E4C46B1695B1 (RuntimeObject* ___0_logger, uint8_t ___1_LogLevel, const RuntimeMethod* method) ;
// System.Int32 Fusion.NetworkRunner::GetHashCodeForLogger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkRunner_GetHashCodeForLogger_m60EC7F3AE38B458330494232F509794E8F092D34 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Int32 Fusion.FusionUnityLogger::GetRandomColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FusionUnityLogger_GetRandomColor_m23D8E545D94FFA41142600B60C309D90770F5C9E (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, int32_t ___0_seed, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkRunnerExtensions::TryGetSceneBuildIndex(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRunnerExtensions_TryGetSceneBuildIndex_m1067E520A98247D9329FE820B2E06955BD8325FB (String_t* ___0_nameOrPath, int32_t* ___1_buildIndex, const RuntimeMethod* method) ;
// Fusion.SceneRef Fusion.SceneRef::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 SceneRef_op_Implicit_m7BBCE0260571F15841BC65DFAC1DE0F6DE6D8D29 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkRunner::SetActiveScene(Fusion.SceneRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunner_SetActiveScene_m53E0CCA965B5C83B969AE289EE946E82F214877F (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___0_scene, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.SceneUtility::GetBuildIndexByScenePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneUtility_GetBuildIndexByScenePath_m47E6FAE26DD0F1A26BAAD8A53F01AEC973FB8466 (String_t* ___0_scenePath, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.SceneUtility::GetScenePathByBuildIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SceneUtility_GetScenePathByBuildIndex_mB0848A585AFBB0C15CB344C43BD7BF79B1FEE860 (int32_t ___0_buildIndex, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkRunnerExtensions::GetFileNameWithoutExtensionPosition(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunnerExtensions_GetFileNameWithoutExtensionPosition_m68FCDA8E8B704CCB296A2DF9E4C7350B137F3873 (String_t* ___0_nameOrPath, int32_t* ___1_index, int32_t* ___2_length, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mA704D45BCEE79B6C76F2B1ABF95DF0161055867D (String_t* ___0_strA, int32_t ___1_indexA, String_t* ___2_strB, int32_t ___3_indexB, int32_t ___4_length, bool ___5_ignoreCase, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCountInBuildSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCountInBuildSettings_m414CDE36617596AC75C8E1A03DA65752A09A8944 (const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// Fusion.NetworkRunner Fusion.NetworkSceneManagerBase::get_Runner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, const RuntimeMethod* method) ;
// Fusion.SceneRef Fusion.NetworkRunner::get_CurrentScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 NetworkRunner_get_CurrentScene_m757A103B3F43FD76BA0DC38132749F60AA90493D (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.SceneRef::op_Inequality(Fusion.SceneRef,Fusion.SceneRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneRef_op_Inequality_m16EAE70F094097F5472AFF110CDFEB22CEF45037 (SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___0_a, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.WeakReference`1<Fusion.NetworkSceneManagerBase>::TryGetTarget(T&)
inline bool WeakReference_1_TryGetTarget_m1B98B24F2C23C226A6A634FF3166162524EF61EA (WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* __this, NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39** ___0_target, const RuntimeMethod* method)
{
	return ((  bool (*) (WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2*, NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39**, const RuntimeMethod*))WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared)(__this, ___0_target, method);
}
// System.Void System.WeakReference`1<Fusion.NetworkSceneManagerBase>::SetTarget(T)
inline void WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220 (WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* __this, NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* ___0_target, const RuntimeMethod* method)
{
	((  void (*) (WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2*, NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39*, const RuntimeMethod*))WeakReference_1_SetTarget_mCEAE8D9CF9551015CE46420AB8614A8D1F14C329_gshared)(__this, ___0_target, method);
}
// System.Collections.IEnumerator Fusion.NetworkSceneManagerBase::SwitchSceneWrapper(Fusion.SceneRef,Fusion.SceneRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkSceneManagerBase_SwitchSceneWrapper_m4E190732E2E2EC8F8306F685483CDF7E07A503E2 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___0_prevScene, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___1_newScene, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_path_mACD61B36E1F010A9FCA2C62637E0CB24B16729E4 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.SceneRef::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneRef_get_IsValid_mFC88184BDE683A01DA6CF60F23EC17983C247379 (SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9* __this, const RuntimeMethod* method) ;
// System.Int32 Fusion.SceneRef::op_Implicit(Fusion.SceneRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneRef_op_Implicit_m92C8C2F9311397000AF1D723C8A56A45361DA096 (SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkSceneManagerBase::TryGetScenePathFromBuildSettings(Fusion.SceneRef,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSceneManagerBase_TryGetScenePathFromBuildSettings_m812F9F046C78EC35701702B7AB07FD6A77F36704 (SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___0_sceneRef, String_t** ___1_path, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkSceneManagerBase::IsScenePathOrNameEqual(UnityEngine.SceneManagement.Scene,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSceneManagerBase_IsScenePathOrNameEqual_mC2CE51F43406C6FAAA58B1986B08CC52DC5604C2 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, String_t* ___1_nameOrPath, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Fusion.NetworkObject>::.ctor()
inline void List_1__ctor_mA6EF54D04CDB9BB4B0F28BFA8A21EC80A3DC76FA (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.GameObject[] UnityEngine.SceneManagement.Scene::GetRootGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Fusion.NetworkObject>::Clear()
inline void List_1_Clear_m130EA2C4542DE33976BD5F3E71CFD09028CA12AA_inline (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<Fusion.NetworkObject>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponentsInChildren_TisNetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C_m30DA9706B6091A01234C649C9FC0CFE9098E435A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ___1_results, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared)(__this, ___0_includeInactive, ___1_results, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Fusion.NetworkObject>::GetEnumerator()
inline Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06 List_1_GetEnumerator_m849F529B76EAC19A125D08EC5D7A7C16A4A5BE2B (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06 (*) (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Fusion.NetworkObject>::Dispose()
inline void Enumerator_Dispose_m48050D75FCDDB54380B87CE4466A5B13280776FC (Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Fusion.NetworkObject>::get_Current()
inline NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* Enumerator_get_Current_mED8C4FC16A9F1BE2915FAE2E7CD05A3C59180C56_inline (Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06* __this, const RuntimeMethod* method)
{
	return ((  NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* (*) (Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean Fusion.NetworkObjectFlagsExtensions::IsSceneObject(Fusion.NetworkObjectFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkObjectFlagsExtensions_IsSceneObject_m6A4A526A6B0F8462ACC11AF9115DF2249C132D4E_inline (int32_t ___0_flags, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkObjectFlagsExtensions::IsActivatedByUser(Fusion.NetworkObjectFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkObjectFlagsExtensions_IsActivatedByUser_mFF4E12721461CDD53769DDD1D47ACC1C5230A0DB_inline (int32_t ___0_flags, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Fusion.NetworkObject>::Add(T)
inline void List_1_Add_m006122E663E12324385572178836CCAE30619163_inline (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* __this, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82*, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Fusion.NetworkObject>::MoveNext()
inline bool Enumerator_MoveNext_m3CC53690EDAA1DDB18B8E49248774B270E7FBAF3 (Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Fusion.RunnerVisibilityNode::AddVisibilityNodes(UnityEngine.GameObject,Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RunnerVisibilityNode_AddVisibilityNodes_m84EB2DC108810D1573BCC9BB9082521EBDFB5BA0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___1_runner, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerBase::set_Runner(Fusion.NetworkRunner)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_set_Runner_mF623A2AFBBBC35E86821F577FDEFF7F58336EE31_inline (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_value, const RuntimeMethod* method) ;
// Fusion.SceneRef Fusion.SceneRef::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 SceneRef_get_None_m84DA514080282265B21C2CCD0FC302388D37FEFB (const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerBase::LogWarn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_LogWarn_mD5326B515097E0C302A0ADDB469FF4762B59C29C (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void Fusion.Log::Error(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_mCD52D040258C4EDB1ED07014D98CFD38356D0076 (RuntimeObject* ___0_msg, const RuntimeMethod* method) ;
// System.Void Fusion.Log::Warn(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warn_m3CB267FD0639BAC92FD468CE3504A464603C18C7 (RuntimeObject* ___0_msg, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneWrapperU3Ed__26__ctor_mE9F726884C411FE0A649AB8ADAD7E86B24934E4E (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.WeakReference`1<Fusion.NetworkSceneManagerBase>::.ctor(T)
inline void WeakReference_1__ctor_m1039DCD4F251CC407C0D72021F7D04F936DC0E29 (WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* __this, NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* ___0_target, const RuntimeMethod* method)
{
	((  void (*) (WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2*, NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39*, const RuntimeMethod*))WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared)(__this, ___0_target, method);
}
// System.Guid Fusion.NetworkObjectGuid::op_Implicit(Fusion.NetworkObjectGuid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t NetworkObjectGuid_op_Implicit_m2205A481EC492792B0C4E0619ACCEE2D1EFFCE96 (NetworkObjectGuid_t99EAC957EE861D66626645313D35A1F49AF134B4 ___0_guid, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,Fusion.NetworkObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_mB7A02CC7C77717DCDC7980A1EE1194A75B9F673D (Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4* __this, Guid_t ___0_key, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4*, Guid_t, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C*, const RuntimeMethod*))Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneWrapperU3Ed__26_U3CU3Em__Finally1_m2C7E18C3627392881FF33AE525DC1B7ECC74DBA1 (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneWrapperU3Ed__26_System_IDisposable_Dispose_m4613C7560113A39655C6B27AA57CA2A43F6439A2 (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_mE403649ECF52DD3E78FB63E2F7A7B5C48CC75B94 (U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,Fusion.NetworkObject>::.ctor()
inline void Dictionary_2__ctor_m4B4120375E58E69EB8BC54ADB054EBBEFC933831 (Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4*, const RuntimeMethod*))Dictionary_2__ctor_m47DD6DE10DF49155FCF329CC0B0FC21C23EDA26A_gshared)(__this, method);
}
// System.Void Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedLoadingDelegate__ctor_m2AA5AAD37381CFEF578C392654121C8D166C7E2C (FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkRunner::InvokeSceneLoadStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunner_InvokeSceneLoadStart_mC88B5250E6415EAC954B1FC96D2ACE60E921AA70 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerBase::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_LogError_m6636890C17C51DF975A4BFD17A0B3771A9912E56 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,Fusion.NetworkObject>::get_Values()
inline ValueCollection_tF3CD15E5D171F1E7DEA04F2110426D188EEAF961* Dictionary_2_get_Values_mC860851CA34533BEA997FC852C9AD7768F6D2049 (Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tF3CD15E5D171F1E7DEA04F2110426D188EEAF961* (*) (Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4*, const RuntimeMethod*))Dictionary_2_get_Values_m2A497B1A3A2856303D35DC5C7172B6CC06BBF5AE_gshared)(__this, method);
}
// System.Void Fusion.NetworkRunner::RegisterSceneObjects(System.Collections.Generic.IEnumerable`1<Fusion.NetworkObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunner_RegisterSceneObjects_m746C14B764716FD492DB7F99EBF6475F45E0FA47 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, RuntimeObject* ___0_objects, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkRunner::InvokeSceneLoadDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunner_InvokeSceneLoadDone_m9549003F7A9637BD9FAA1B615C23A30EC37A53D7 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m9878516CC321F91FA505845F027BFDF84F218BB9 (U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_mFE5AAC429EADC33F6186D174F1E5B494101C1735 (String_t* ___0_sceneName, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E ___1_parameters, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsync(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_UnloadSceneAsync_mA3AB74052DF7155958E100364AAFFE8E11B52A4A (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, const RuntimeMethod* method) ;
// Fusion.NetworkProjectConfig Fusion.NetworkRunner::get_Config()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* NetworkRunner_get_Config_mD7D0F65C494EB1B08A7DC8A9F6C016588006BD0E_inline (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneMultiplePeerU3Ed__4__ctor_mAA45B70FFC8FD30FC82FAF9CB3EFD4EADB908183 (U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneSinglePeerU3Ed__5__ctor_mBED5520059D653A64415C85CDC65D7C2411EB6B8 (U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase__ctor_m13487B9BF6F36D69D7C02D77BB7B66DA77CDAFBB (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.SceneManagement.Scene>::Invoke(T)
inline void Action_1_Invoke_mF80192BF77173A803E05499C419C61B2BB5AFBA7_inline (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))Action_1_Invoke_mF80192BF77173A803E05499C419C61B2BB5AFBA7_gshared_inline)(__this, ___0_obj, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_sceneLoaded_m72A7C2A1B8EF1C21A208A9A015375577768B3978 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___0_value, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mF67F08B5221ED03356CA8D388C220C639AF83454 (U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Boolean Fusion.SceneRef::op_Equality(Fusion.SceneRef,Fusion.SceneRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneRef_op_Equality_m9BB6AFF20D71CD8954B06B2D53ADDF428CB469A7 (SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___0_a, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___1_b, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkSceneManagerBase::IsScenePathOrNameEqual(UnityEngine.SceneManagement.Scene,Fusion.SceneRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSceneManagerBase_IsScenePathOrNameEqual_mC14E4BA82C144610610A51D6C5B2D90AA5499E51 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___1_sceneRef, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.LocalPhysicsMode Fusion.NetworkProjectConfig::ConvertPhysicsMode(Fusion.NetworkProjectConfig/PhysicsEngines)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkProjectConfig_ConvertPhysicsMode_m94D27671E8B3C0922B2C7D05AE0011FB92F385C7 (int32_t ___0_engine, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.LoadSceneParameters::.ctor(UnityEngine.SceneManagement.LoadSceneMode,UnityEngine.SceneManagement.LocalPhysicsMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneParameters__ctor_mC6BFFB213ADFF4F5057E6D92A2C87B9A4386C3B0 (LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E* __this, int32_t ___0_mode, int32_t ___1_physicsMode, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene Fusion.NetworkRunner::get_MultiplePeerUnityScene()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 NetworkRunner_get_MultiplePeerUnityScene_mDCE6D9D72D3127C35F74CADBC5EBC79C833699DF_inline (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkRunner::get_IsMultiplePeerSceneTemp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkRunner_get_IsMultiplePeerSceneTemp_mE64D915B99B214780B73BBAFEAE8EFADCF71D001_inline (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GameObject>()
inline GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Array_Empty_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m64338222695B55342E656E92D7F2790221E62B6A_inline (const RuntimeMethod* method)
{
	return ((  GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// Fusion.NetworkRunner Fusion.NetworkRunner::GetRunnerForScene(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* NetworkRunner_GetRunnerForScene_mED1F1534E04E8036908B09ABE841D9DB629551D7 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCount_m6BB8A635EB8933BB91747EFE1F1113ED8594EFBF (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.LoadSceneParameters::set_loadSceneMode(UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneParameters_set_loadSceneMode_mF66230A39CD26D396879FE1BAAB128F3F7F63A58 (LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkRunner::TryMultiplePeerAssignTempScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRunner_TryMultiplePeerAssignTempScene_m2D30422B301626FE560E1F3499498CD49B9BFEAE (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE6284AC52B30253F1B4E5A2352658355B7BCC262 (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mE6284AC52B30253F1B4E5A2352658355B7BCC262_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkSceneManagerBase::FindNetworkObjects(UnityEngine.SceneManagement.Scene,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* NetworkSceneManagerBase_FindNetworkObjects_mD5801F1D58BC4EB5E25A10D7D83B4A7CBED1CFBF (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, bool ___1_disable, bool ___2_addVisibilityNodes, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkRunner::set_MultiplePeerUnityScene(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunner_set_MultiplePeerUnityScene_mE67B82588A7434CAAAB9235129508F46ED7C48E2 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::MoveGameObjectToScene(UnityEngine.GameObject,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_MoveGameObjectToScene_mF5DC73256FA145D321DE14771F93AF7B832FE62A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___1_scene, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate::Invoke(System.Collections.Generic.IEnumerable`1<Fusion.NetworkObject>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_inline (FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___0_sceneObjects, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mB65A57C225C7F50ED007903C075A53E59C91EDC5 (U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.LoadSceneParameters::.ctor(UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadSceneParameters__ctor_m40C160638049BF7577055B3460968F8B73459380 (LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E* __this, int32_t ___0_mode, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.MeshFilter>::Clear()
inline void List_1_Clear_m47377D7758798C489896B13DDD6EAFEC1B6D9917_inline (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::Clear()
inline void List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_inline (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::Clear()
inline void List_1_Clear_m567A0E8ADE485441540D5B46AB6C518558DDA2FE_inline (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>::Clear()
inline void List_1_Clear_m83D0AB87CBF92DF59992C02F675DD3DCBB805753_inline (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider2D>::Clear()
inline void List_1_Clear_m909AB75DE2253A8B9D7AB3E65CDCDC42BB92DEC3_inline (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m39DE337508D2ADD39AC2AAE01AB0FFEA7583601F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ___1_results, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared)(__this, ___0_includeInactive, ___1_results, method);
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.MeshFilter>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mF756FB30A88DDCBFAE2F1811FEC9FA4CDED0DE2F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ___1_results, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared)(__this, ___0_includeInactive, ___1_results, method);
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.SpriteRenderer>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6405D497F14EEE2F172D1D82E55881EA9385B40B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* ___1_results, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared)(__this, ___0_includeInactive, ___1_results, method);
}
// System.Void UnityEngine.GameObject::GetComponents<UnityEngine.Renderer>(System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponents_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mBB103B375AB35BB10A810994CFB39ACA5335AEB7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ___0_results, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared)(__this, ___0_results, method);
}
// System.Void UnityEngine.GameObject::GetComponents<UnityEngine.MeshFilter>(System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponents_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mD3AA9DE8ED9C3C202BED617A4EA8CAD29E799999 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ___0_results, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared)(__this, ___0_results, method);
}
// System.Void UnityEngine.GameObject::GetComponents<UnityEngine.SpriteRenderer>(System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponents_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mD1C82F35AB4D7DB1DC1D8138EBC6679456DBC940 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* ___0_results, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared)(__this, ___0_results, method);
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mADF65DE232F8B1518C734CA9A1D60F1D4A4CC374 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___1_results, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared)(__this, ___0_includeInactive, ___1_results, method);
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Collider2D>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponentsInChildren_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mA5584260A845566F11731CDDE7AF216E044BEE7A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* ___1_results, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared)(__this, ___0_includeInactive, ___1_results, method);
}
// System.Void UnityEngine.GameObject::GetComponents<UnityEngine.Collider>(System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m84278021B82DC03648708BEFE1521002F9CACBA4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___0_results, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared)(__this, ___0_results, method);
}
// System.Void UnityEngine.GameObject::GetComponents<UnityEngine.Collider2D>(System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponents_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m0CD3227FF22984AB1F8A80030A70A3921A439EF5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* ___0_results, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m4E6E7E925EB16382F6CB95F1AFF27EB8E28BE6A3_gshared)(__this, ___0_results, method);
}
// T System.Collections.Generic.List`1<UnityEngine.MeshFilter>::get_Item(System.Int32)
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348 (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Renderer>::Contains(T)
inline bool List_1_Contains_mCE9E8AEA0E6245078585C01E04AF1D72D2B62760 (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::Add(T)
inline void List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_inline (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.MeshFilter>::get_Count()
inline int32_t List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_inline (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Collider>::get_Item(System.Int32)
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587 (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::Add(T)
inline void List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_inline (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Collider>::get_Count()
inline int32_t List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Collider2D>::get_Item(System.Int32)
inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* (*) (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider2D>::Add(T)
inline void List_1_Add_mE750EBF74E88E67DF4737B6A5F3594338FAA2132_inline (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Collider2D>::get_Count()
inline int32_t List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_inline (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Renderer>::get_Count()
inline int32_t List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_inline (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>::get_Count()
inline int32_t List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_inline (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Renderer>::get_Item(System.Int32)
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2 (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>::get_Item(System.Int32)
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020 (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_bounds, const RuntimeMethod* method) ;
// UnityEngine.Bounds Fusion.Editor.BoundsTools::CollectMyBounds(UnityEngine.GameObject,Fusion.Editor.BoundsTools/BoundsType,System.Int32&,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 BoundsTools_CollectMyBounds_m5379F1050B6212683327FC35D5D25D42B62BFF1D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, int32_t ___1_factorIn, int32_t* ___2_numOfBoundsFound, bool ___3_includeChildren, bool ___4_includeInactive, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.MeshFilter>::.ctor()
inline void List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::.ctor()
inline void List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::.ctor()
inline void List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>::.ctor()
inline void List_1__ctor_m6E83AE2DD08C6F347070F297A225B37FC4A2ADFA (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider2D>::.ctor()
inline void List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7 (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enum_GetNames_m382A68AE28D7B6035331EC0685315144F15957C3 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// System.Reflection.MemberInfo[] System.Type::GetMember(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* Type_GetMember_mC4456D1BA93A44CF021059F6D46237C0740A6229 (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T UnityEngine.Resources::GetBuiltinResource<UnityEngine.Font>(System.String)
inline Font_tC95270EA3198038970422D78B74A7F2E218A96B6* Resources_GetBuiltinResource_TisFont_tC95270EA3198038970422D78B74A7F2E218A96B6_m3B4545F25A016D36D9AE93723A3449804A127D73 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  Font_tC95270EA3198038970422D78B74A7F2E218A96B6* (*) (String_t*, const RuntimeMethod*))Resources_GetBuiltinResource_TisRuntimeObject_mD1671043430ED893B11348B4C95B5969274DB9B6_gshared)(___0_path, method);
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Fusion.StatsInternal.FusionStatsUtilities::get_MeterTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FusionStatsUtilities_get_MeterTexture_m90EFF436369E1674A158841F6CC6A22ED8D928AE (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Sprite_Create_m827A9BDEC4566AB71966A40DB48A09BB064D81E7 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_pivot, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Fusion.StatsInternal.FusionStatsUtilities::get_Circle32Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FusionStatsUtilities_get_Circle32Texture_m0A5924BDC2322AB6031675581430FB2FF1932B8D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Sprite_Create_m4A5CCF67CAA13E470FD1CBBDEB08122733C4657B (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_pivot, float ___3_pixelsPerUnit, uint32_t ___4_extrude, int32_t ___5_meshType, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___6_border, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Fusion.SimulationModes>::get_HasValue()
inline bool Nullable_1_get_HasValue_m8ED79880725281B975FFF0D1E75C8C3F3018B842_inline (Nullable_1_tA7AB74DCC49231122BDE6A56B38A849C29538EF7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tA7AB74DCC49231122BDE6A56B38A849C29538EF7*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// T System.Nullable`1<Fusion.SimulationModes>::get_Value()
inline int32_t Nullable_1_get_Value_m80B7F96D7D17A583B34736C90E2B91A8FB71419D (Nullable_1_tA7AB74DCC49231122BDE6A56B38A849C29538EF7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tA7AB74DCC49231122BDE6A56B38A849C29538EF7*, const RuntimeMethod*))Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared)(__this, method);
}
// Fusion.SimulationModes Fusion.NetworkRunner::get_Mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkRunner_get_Mode_m2B4077D7A5AF533F89A3098FD6A824C32CD080BF (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene Fusion.NetworkRunner::get_SimulationUnityScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 NetworkRunner_get_SimulationUnityScene_mD1F08EE8BF063672E6308279336BBF3135012E65 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::op_Equality(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_op_Equality_m9FC9CA5FAE2FF94568EC2AB878B64ED8DC53CF68 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_lhs, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::ExpandAnchor(UnityEngine.RectTransform,System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_ExpandAnchor_mF92B15AFF1097DF8830C7FFD281DABD78F3400A2 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___1_padding, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::CreateRectTransform(UnityEngine.Transform,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, String_t* ___1_name, bool ___2_expand, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Single>::.ctor(T)
inline void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, float, const RuntimeMethod*))Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared)(__this, ___0_value, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Dropdown>()
inline Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* GameObject_AddComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_mDE25E2D9598E3478E8CD12EA6C61F743882E27B7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_image(UnityEngine.UI.Image)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Selectable_set_image_mE9DDDBE46C5A435F9788E88EEF0187B5E09A30A8_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::ExpandTopAnchor(UnityEngine.RectTransform,System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_ExpandTopAnchor_m530C8708BADC6F38F24CA63D215CEA2FDFCBF918 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___1_padding, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::SetOffsets(UnityEngine.RectTransform,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_SetOffsets_mF86A3F48C4AE6F2C79B9C8ABE0A344FF76A25189 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, float ___1_minX, float ___2_maxX, float ___3_minY, float ___4_maxY, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::SetAnchors(UnityEngine.RectTransform,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_SetAnchors_mAD5F796E116A48BF7F473664EDDF54E92C501BB8 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, float ___1_minX, float ___2_maxX, float ___3_minY, float ___4_maxY, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::SetPivot(UnityEngine.RectTransform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_SetPivot_m69CD470096B35900B4542114B6E2A2042867ABC3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, float ___1_pivotX, float ___2_pivotY, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::SetSizeDelta(UnityEngine.RectTransform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_SetSizeDelta_m804D1D4527F390D49DE0E00EE7C41BF68E707E54 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, float ___1_offsetX, float ___2_offsetY, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Toggle>()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GameObject_AddComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m0E1C6713C85CAAB22DE299872377285F55C106D1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.UI.ColorBlock::set_colorMultiplier(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_colorMultiplier_m920A048B95541DB0E92AF4AF3894BE7CD2D37102_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_normalColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_normalColor_m3EBF594F6FA2C6494ACA9FCB9B458807D85B96F8_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_highlightedColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_pressedColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_pressedColor_m644C938090857AB07C57B25FE53F6DC2BB0DD5A8_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_selectedColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_selectedColor_m76FEFB1148798B7A356C974CDEA3BA2E2E3C1D21_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Sprite Fusion.StatsInternal.FusionStatsUtilities::get_CircleSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* FusionStatsUtilities_get_CircleSprite_m67796DF7F4AC7AE651A196E1A9F37296F68C3CF1 (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_preserveAspect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_preserveAspect_mF465AFD1313C0F002B37C8B86C75F98CB72A4098 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.UI.Text Fusion.StatsInternal.FusionStatsUtilities::AddText(UnityEngine.RectTransform,System.String,UnityEngine.TextAnchor,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* FusionStatsUtilities_AddText_mFD8B562B4998731594FD883780675BEDCE5B5035 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, String_t* ___1_label, int32_t ___2_anchor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_FontColor, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_resizeTextMaxSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_resizeTextMaxSize_m25EB2C9302AA9354237A2F56BB3E019192C6015B (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_targetGraphic_m23DB0DF4E5F2DABD50C662C708B4555162171FB9 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::set_template(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_template_m13FE93E0ED2414A5D8D4595D3123DDFD726DB619 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::set_itemText(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_itemText_m901981335866C0A856E31D7D1C87C7D8E76FBFAA (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Font Fusion.StatsInternal.FusionStatsUtilities::get_Font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* FusionStatsUtilities_get_Font_m0A68FC691677A6E5C3D40EF80F03A21A5884BCB6 (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_font(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_font_mA0D2999281A72029A5BC7294A886C5674F07DC5F (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_resizeTextMinSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_resizeTextMinSize_m1DC5160514ED872A8C572024A94D7EA9D6357655 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_resizeTextForBestFit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_resizeTextForBestFit_m1376BB9FDBAC5571E0F24564E22391AC8EB89A35 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_fontStyle(UnityEngine.FontStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_alignByGeometry(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_alignByGeometry_mB427C41097943370E11579A3DA822A3295836CE2 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_horizontalOverflow(UnityEngine.HorizontalWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_horizontalOverflow_m10AAFBA65FD7F4B1934B5D628B3E70D75D02FFD6 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.HorizontalLayoutGroup>()
inline HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_childControlHeight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_set_childControlHeight_m8DD189C9B1F926641F4A2FD41F41F2097E4D7751 (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_childControlWidth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_set_childControlWidth_m0B9A78B8284E17C438645684984796AC0E2D1BD8 (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_spacing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_set_spacing_m90373F54D37DA8DFA90E102DC60EC33E542FD859 (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// System.Void UnityEngine.UI.LayoutGroup::set_padding(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_set_padding_m9F415F3402E5E4AE684FD153493CE3E8D64D3EB7 (LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* __this, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.VerticalLayoutGroup>()
inline VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* GameObject_AddComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_m8FC80304C9EFC42F9CAE9588753536DC6F224521 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.GridLayoutGroup>()
inline GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* GameObject_AddComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mC504566284D32F0111950B862D22B0602995290C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.UI.GridLayoutGroup::set_spacing(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLayoutGroup_set_spacing_mA5550A683F7B4A7A1510B267B5D4CACEB8981306 (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::AddCircleSprite(UnityEngine.RectTransform,UnityEngine.Color,UnityEngine.UI.Image&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_AddCircleSprite_m69F6F36AB48728596D1995ED60B0413230DFD90C (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** ___2_image, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_type(UnityEngine.UI.Image/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_type_mECB8D34772AA393FFBC867B03D18EA0F1A8546BF (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_pixelsPerUnitMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_pixelsPerUnitMultiplier_m05DA43C7FD5B7B162FCB1ED6FCA850FD41AF7DC1 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared)(__this, method);
}
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetSiblingIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::AddImage(UnityEngine.RectTransform,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_AddImage_m4CFD8E916D3FB2CDC5190CE01AF35E8458FF9A1D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___0_current, float ___1_target, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248 (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerSpawnerPrototype::RegisterPlayerAndObject(Fusion.PlayerRef,Fusion.NetworkObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawnerPrototype_RegisterPlayerAndObject_mA15A7867E262C601624DC040C1DCDA38F7F5BF7A (PlayerSpawnerPrototype_t4796F19F1683ADBE95CDE67D28D80E55D6F657E8* __this, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___0_player, NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___1_playerObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnerPrototype_1_RegisterPlayerAndObject_m692A4F3F4AF9B04834E9ED98360A74AB6C30828D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.RegisterPlayerAndObject(player, playerObject);
		PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC L_0 = ___0_player;
		NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_1 = ___1_playerObject;
		SpawnerPrototype_1_RegisterPlayerAndObject_m692A4F3F4AF9B04834E9ED98360A74AB6C30828D(__this, L_0, L_1, SpawnerPrototype_1_RegisterPlayerAndObject_m692A4F3F4AF9B04834E9ED98360A74AB6C30828D_RuntimeMethod_var);
		// Runner.SetPlayerObject(player, playerObject);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_2 = ((SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0*)__this)->___Runner_7;
		PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC L_3 = ___0_player;
		NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_4 = ___1_playerObject;
		NullCheck(L_2);
		NetworkRunner_SetPlayerObject_m2CF15D8FADF34817C2E629C20A0B3BEACCA52D94(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void PlayerSpawnerPrototype::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawnerPrototype__ctor_m41DB0D28FF739721ACEF33712F949C21DC28104F (PlayerSpawnerPrototype_t4796F19F1683ADBE95CDE67D28D80E55D6F657E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnerPrototype_1__ctor_mD117339871C159AFAADCA7D9A5872CB8CD057763_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpawnerPrototype_1__ctor_mD117339871C159AFAADCA7D9A5872CB8CD057763(__this, SpawnerPrototype_1__ctor_mD117339871C159AFAADCA7D9A5872CB8CD057763_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerSpawnPointManagerPrototype::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawnPointManagerPrototype__ctor_mE2E204CB188333CAA26E7248E7902D38EF46ACE2 (PlayerSpawnPointManagerPrototype_t155715CC2FBC2EE8FF5A7872955E79575C4C18F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnPointManagerPrototype_1__ctor_m277C4593C2E8CA84BDC42D057C38D10D77F661E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpawnPointManagerPrototype_1__ctor_m277C4593C2E8CA84BDC42D057C38D10D77F661E0(__this, SpawnPointManagerPrototype_1__ctor_m277C4593C2E8CA84BDC42D057C38D10D77F661E0_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerSpawnPointPrototype::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawnPointPrototype__ctor_mAE58A6970398A87A3698572785B5B55B2AF8612C (PlayerSpawnPointPrototype_t9B5A1C452F0255C5FF0DB273738686CBB585508A* __this, const RuntimeMethod* method) 
{
	{
		SimulationBehaviour__ctor_m5547F07C9BC04E898E71BB86F72BD33D9B9FC937(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ToggleRunnerProvideInput::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerProvideInput_Awake_m6A509F264B39C6D311CE07A906DA556325E6A353 (ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D7C1262378BB498E0E72B70BDC1C9D64DB5E587);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NetworkProjectConfig.Global.PeerMode != NetworkProjectConfig.PeerModes.Multiple) {
		NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* L_0;
		L_0 = NetworkProjectConfig_get_Global_m26963728C42B52AD0DEA02E7BAB21B5A1C2BA1C9(NULL);
		NullCheck(L_0);
		int32_t L_1 = L_0->___PeerMode_5;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogWarning($"{nameof(ToggleRunnerProvideInput)} only works in Multi-Peer mode. Destroying.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral9D7C1262378BB498E0E72B70BDC1C9D64DB5E587, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// if (_instance)
		ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A* L_2 = ((ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_StaticFields*)il2cpp_codegen_static_fields_for(ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_0030:
	{
		// _instance = this;
		((ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_StaticFields*)il2cpp_codegen_static_fields_for(ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_StaticFields*)il2cpp_codegen_static_fields_for(ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void ToggleRunnerProvideInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerProvideInput_Update_m364FB596F8E65D99D5BE9EE495866C6D2C52704E (ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A* __this, const RuntimeMethod* method) 
{
	{
		// if ((Input.GetKey(KeyCode.LeftControl) || Input.GetKey(KeyCode.LeftCommand)) && Input.GetKey(KeyCode.LeftShift)) {
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)306), NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)310), NULL);
		if (!L_1)
		{
			goto IL_00d3;
		}
	}

IL_001b:
	{
		bool L_2;
		L_2 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		if (!L_2)
		{
			goto IL_00d3;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Alpha0))
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)48), NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// ToggleAll(-1);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, (-1), NULL);
		return;
	}

IL_003b:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha1))
		bool L_4;
		L_4 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)49), NULL);
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		// ToggleAll(0);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 0, NULL);
		return;
	}

IL_004c:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha2))
		bool L_5;
		L_5 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)50), NULL);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		// ToggleAll(1);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 1, NULL);
		return;
	}

IL_005d:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha3))
		bool L_6;
		L_6 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)51), NULL);
		if (!L_6)
		{
			goto IL_006e;
		}
	}
	{
		// ToggleAll(2);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 2, NULL);
		return;
	}

IL_006e:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha4))
		bool L_7;
		L_7 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)52), NULL);
		if (!L_7)
		{
			goto IL_007f;
		}
	}
	{
		// ToggleAll(3);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 3, NULL);
		return;
	}

IL_007f:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha5))
		bool L_8;
		L_8 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)53), NULL);
		if (!L_8)
		{
			goto IL_0090;
		}
	}
	{
		// ToggleAll(4);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 4, NULL);
		return;
	}

IL_0090:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha6))
		bool L_9;
		L_9 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)54), NULL);
		if (!L_9)
		{
			goto IL_00a1;
		}
	}
	{
		// ToggleAll(5);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 5, NULL);
		return;
	}

IL_00a1:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha7))
		bool L_10;
		L_10 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)55), NULL);
		if (!L_10)
		{
			goto IL_00b2;
		}
	}
	{
		// ToggleAll(6);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 6, NULL);
		return;
	}

IL_00b2:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha8))
		bool L_11;
		L_11 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)56), NULL);
		if (!L_11)
		{
			goto IL_00c3;
		}
	}
	{
		// ToggleAll(7);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 7, NULL);
		return;
	}

IL_00c3:
	{
		// else if (Input.GetKeyDown(KeyCode.Alpha9))
		bool L_12;
		L_12 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)57), NULL);
		if (!L_12)
		{
			goto IL_00d3;
		}
	}
	{
		// ToggleAll(8);
		ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1(__this, 8, NULL);
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void ToggleRunnerProvideInput::ToggleAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerProvideInput_ToggleAll_mEC37DCF0931F6F25CC31379D05B1E38E127210E1 (ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A* __this, int32_t ___0_runnerIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B6_0 = 0;
	{
		// var runners = NetworkRunner.GetInstancesEnumerator();
		il2cpp_codegen_runtime_class_init_inline(NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4 L_0;
		L_0 = NetworkRunner_GetInstancesEnumerator_mF6FEA15C43442E12763D07EA57BDEF49D5B38E1F(NULL);
		V_0 = L_0;
		// int index = 0;
		V_1 = 0;
		goto IL_003a;
	}

IL_000a:
	{
		// var runner = runners.Current;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_1;
		L_1 = Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_inline((&V_0), Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_RuntimeMethod_var);
		V_2 = L_1;
		// if (runner == null || !runner.IsRunning)
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_2 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_003a;
		}
	}
	{
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_4 = V_2;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkRunner_get_IsRunning_mD44E761C42BFE8D5A4580B915F1204E38F47C570(L_4, NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// bool enable = runnerIndex == -1 || index == runnerIndex;
		int32_t L_6 = ___0_runnerIndex;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_runnerIndex;
		G_B6_0 = ((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B6_0 = 1;
	}

IL_002e:
	{
		V_3 = (bool)G_B6_0;
		// runner.ProvideInput = enable;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_9 = V_2;
		bool L_10 = V_3;
		NullCheck(L_9);
		NetworkRunner_set_ProvideInput_mEE98BE2C97A9B47224FA331B2827FFB0F4FC46FA(L_9, L_10, NULL);
		// index++;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003a:
	{
		// while (runners.MoveNext()) {
		bool L_12;
		L_12 = Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76((&V_0), Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToggleRunnerProvideInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerProvideInput__ctor_m4E13236EA2876913EB94C905F469F92C9F7069C0 (ToggleRunnerProvideInput_tF913AFA200E2163599661EEC047EF1D9B52C2E1A* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m1CC74A6DA707BC75BDC3BF41D5BF5CA0809B0A8D(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ToggleRunnerVisibility::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerVisibility_Awake_m52B70228132B832C2F8B11EB4839CC2171B9136F (ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB64FA2408DBA1B3C7B72FC5DF10677491CB05D5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NetworkProjectConfig.Global.PeerMode != NetworkProjectConfig.PeerModes.Multiple) {
		NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* L_0;
		L_0 = NetworkProjectConfig_get_Global_m26963728C42B52AD0DEA02E7BAB21B5A1C2BA1C9(NULL);
		NullCheck(L_0);
		int32_t L_1 = L_0->___PeerMode_5;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogWarning($"{nameof(ToggleRunnerVisibility)} only works in Multi-Peer mode. Destroying.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralB64FA2408DBA1B3C7B72FC5DF10677491CB05D5B, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// if (_instance) {
		ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5* L_2 = ((ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_StaticFields*)il2cpp_codegen_static_fields_for(ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_0030:
	{
		// _instance = this;
		((ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_StaticFields*)il2cpp_codegen_static_fields_for(ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_StaticFields*)il2cpp_codegen_static_fields_for(ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void ToggleRunnerVisibility::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerVisibility_Update_m2B94FA6AB814DDF0251DD2819217D9B0FB9FE1EB (ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKey(KeyCode.LeftControl) || Input.GetKey(KeyCode.LeftCommand))
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)306), NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)310), NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		// return;
		return;
	}

IL_0019:
	{
		// if ((Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift))) {
		bool L_2;
		L_2 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)303), NULL);
		if (!L_3)
		{
			goto IL_00dd;
		}
	}

IL_0034:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha0)) {
		bool L_4;
		L_4 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)48), NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// ToggleAll(-1);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, (-1), NULL);
		return;
	}

IL_0045:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha1)) {
		bool L_5;
		L_5 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)49), NULL);
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		// ToggleAll(0);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 0, NULL);
		return;
	}

IL_0056:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha2)) {
		bool L_6;
		L_6 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)50), NULL);
		if (!L_6)
		{
			goto IL_0067;
		}
	}
	{
		// ToggleAll(1);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 1, NULL);
		return;
	}

IL_0067:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha3)) {
		bool L_7;
		L_7 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)51), NULL);
		if (!L_7)
		{
			goto IL_0078;
		}
	}
	{
		// ToggleAll(2);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 2, NULL);
		return;
	}

IL_0078:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha4)) {
		bool L_8;
		L_8 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)52), NULL);
		if (!L_8)
		{
			goto IL_0089;
		}
	}
	{
		// ToggleAll(3);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 3, NULL);
		return;
	}

IL_0089:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha5)) {
		bool L_9;
		L_9 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)53), NULL);
		if (!L_9)
		{
			goto IL_009a;
		}
	}
	{
		// ToggleAll(4);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 4, NULL);
		return;
	}

IL_009a:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha6)) {
		bool L_10;
		L_10 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)54), NULL);
		if (!L_10)
		{
			goto IL_00ab;
		}
	}
	{
		// ToggleAll(5);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 5, NULL);
		return;
	}

IL_00ab:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha7)) {
		bool L_11;
		L_11 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)55), NULL);
		if (!L_11)
		{
			goto IL_00bc;
		}
	}
	{
		// ToggleAll(6);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 6, NULL);
		return;
	}

IL_00bc:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha8)) {
		bool L_12;
		L_12 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)56), NULL);
		if (!L_12)
		{
			goto IL_00cd;
		}
	}
	{
		// ToggleAll(7);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 7, NULL);
		return;
	}

IL_00cd:
	{
		// } else if (Input.GetKeyDown(KeyCode.Alpha9)) {
		bool L_13;
		L_13 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)57), NULL);
		if (!L_13)
		{
			goto IL_00dd;
		}
	}
	{
		// ToggleAll(8);
		ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711(__this, 8, NULL);
	}

IL_00dd:
	{
		// }
		return;
	}
}
// System.Void ToggleRunnerVisibility::ToggleAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerVisibility_ToggleAll_mA5E543BB96D51C4755E653143810426E04BA2711 (ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5* __this, int32_t ___0_runnerIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B6_0 = 0;
	{
		// var runners = NetworkRunner.GetInstancesEnumerator();
		il2cpp_codegen_runtime_class_init_inline(NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4 L_0;
		L_0 = NetworkRunner_GetInstancesEnumerator_mF6FEA15C43442E12763D07EA57BDEF49D5B38E1F(NULL);
		V_0 = L_0;
		// int index = 0;
		V_1 = 0;
		goto IL_003a;
	}

IL_000a:
	{
		// var runner = runners.Current;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_1;
		L_1 = Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_inline((&V_0), Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_RuntimeMethod_var);
		V_2 = L_1;
		// if (runner == null || !runner.IsRunning)
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_2 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_003a;
		}
	}
	{
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_4 = V_2;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkRunner_get_IsRunning_mD44E761C42BFE8D5A4580B915F1204E38F47C570(L_4, NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// bool enable = runnerIndex == -1 || index == runnerIndex;
		int32_t L_6 = ___0_runnerIndex;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_runnerIndex;
		G_B6_0 = ((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B6_0 = 1;
	}

IL_002e:
	{
		V_3 = (bool)G_B6_0;
		// runner.IsVisible = enable;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_9 = V_2;
		bool L_10 = V_3;
		NullCheck(L_9);
		NetworkRunner_set_IsVisible_mBA05D9E055782412EABA7304E52D2290E186E321(L_9, L_10, NULL);
		// index++;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003a:
	{
		// while (runners.MoveNext()) {
		bool L_12;
		L_12 = Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76((&V_0), Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToggleRunnerVisibility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleRunnerVisibility__ctor_m65E4EDAB434F32577034763CFD41E6E0EF3F291A (ToggleRunnerVisibility_tE4444ED5E4015B4665F0A759A5A891CAC977DEF5* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m1CC74A6DA707BC75BDC3BF41D5BF5CA0809B0A8D(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FusionScalableIMGUI::InitializedGUIStyles(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionScalableIMGUI_InitializedGUIStyles_m8116BF6321B19022D14340439790293C5790C21C (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___0_baseSkin, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* G_B3_0 = NULL;
	{
		// _scalableSkin = baseSkin == null ? GUI.skin : baseSkin;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0 = ___0_baseSkin;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_2 = ___0_baseSkin;
		G_B3_0 = L_2;
		goto IL_0011;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_3;
		L_3 = GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B(NULL);
		G_B3_0 = L_3;
	}

IL_0011:
	{
		((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0), (void*)G_B3_0);
		// if (baseSkin == null) {
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_4 = ___0_baseSkin;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0156;
		}
	}
	{
		// _scalableSkin = GUI.skin;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_6;
		L_6 = GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B(NULL);
		((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0), (void*)L_6);
		// _scalableSkin.button.alignment = TextAnchor.MiddleCenter;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_7 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_7);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8;
		L_8 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_7, NULL);
		NullCheck(L_8);
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_8, 4, NULL);
		// _scalableSkin.label.alignment = TextAnchor.MiddleCenter;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_9 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_9);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_10;
		L_10 = GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E(L_9, NULL);
		NullCheck(L_10);
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_10, 4, NULL);
		// _scalableSkin.textField.alignment = TextAnchor.MiddleCenter;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_11 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_11);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12;
		L_12 = GUISkin_get_textField_mC554496BAB959445F0CFA30BDC5736DC1F057D48(L_11, NULL);
		NullCheck(L_12);
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_12, 4, NULL);
		// _scalableSkin.button.normal.background = _scalableSkin.box.normal.background;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_13 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_13);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_14;
		L_14 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_13, NULL);
		NullCheck(L_14);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_15;
		L_15 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_14, NULL);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_16 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_16);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_17;
		L_17 = GUISkin_get_box_m21BE7FC56D903B95BAFAE8890425D330EA88D893(L_16, NULL);
		NullCheck(L_17);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_18;
		L_18 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_17, NULL);
		NullCheck(L_18);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19;
		L_19 = GUIStyleState_get_background_mE29B6D17E91BFD828E40B369C6CE336ECBCC18DD(L_18, NULL);
		NullCheck(L_15);
		GUIStyleState_set_background_mD92FC76F8956A8EBB022C3E8EA02822D79F451C4(L_15, L_19, NULL);
		// _scalableSkin.button.hover.background = _scalableSkin.window.normal.background;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_20 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_20);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_21;
		L_21 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_20, NULL);
		NullCheck(L_21);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_22;
		L_22 = GUIStyle_get_hover_m159CD4F6636D87CBBC4B721AAE62436B86576EBF(L_21, NULL);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_23 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_23);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_24;
		L_24 = GUISkin_get_window_m760DAF129E72775DFD18CB71720AD306345E91C2(L_23, NULL);
		NullCheck(L_24);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_25;
		L_25 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_24, NULL);
		NullCheck(L_25);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26;
		L_26 = GUIStyleState_get_background_mE29B6D17E91BFD828E40B369C6CE336ECBCC18DD(L_25, NULL);
		NullCheck(L_22);
		GUIStyleState_set_background_mD92FC76F8956A8EBB022C3E8EA02822D79F451C4(L_22, L_26, NULL);
		// _scalableSkin.button.normal.textColor = new Color(.8f, .8f, .8f);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_27 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_27);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_28;
		L_28 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_27, NULL);
		NullCheck(L_28);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_29;
		L_29 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_28, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_30), (0.800000012f), (0.800000012f), (0.800000012f), /*hidden argument*/NULL);
		NullCheck(L_29);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(L_29, L_30, NULL);
		// _scalableSkin.button.hover.textColor = new Color(1f, 1f, 1f);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_31 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_31);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_32;
		L_32 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_31, NULL);
		NullCheck(L_32);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_33;
		L_33 = GUIStyle_get_hover_m159CD4F6636D87CBBC4B721AAE62436B86576EBF(L_32, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		memset((&L_34), 0, sizeof(L_34));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_34), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(L_33, L_34, NULL);
		// _scalableSkin.button.active.textColor = new Color(1f, 1f, 1f);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_35 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_35);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_36;
		L_36 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_35, NULL);
		NullCheck(L_36);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_37;
		L_37 = GUIStyle_get_active_m3ABA9E58666A1CFE6EEEB3707E86D58DFE062CCB(L_36, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		memset((&L_38), 0, sizeof(L_38));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_38), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(L_37, L_38, NULL);
		// _scalableSkin.button.border = new RectOffset(6, 6, 6, 6);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_39 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_39);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_40;
		L_40 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_39, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_41 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_41, 6, 6, 6, 6, NULL);
		NullCheck(L_40);
		GUIStyle_set_border_mA11481A8F139D4403E0764E07F49516D390CC6A7(L_40, L_41, NULL);
		// _scalableSkin.window.border = new RectOffset(8, 8, 8, 10);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_42 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_42);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_43;
		L_43 = GUISkin_get_window_m760DAF129E72775DFD18CB71720AD306345E91C2(L_42, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_44 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_44, 8, 8, 8, ((int32_t)10), NULL);
		NullCheck(L_43);
		GUIStyle_set_border_mA11481A8F139D4403E0764E07F49516D390CC6A7(L_43, L_44, NULL);
		return;
	}

IL_0156:
	{
		// _scalableSkin = baseSkin;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_45 = ___0_baseSkin;
		((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0), (void*)L_45);
		// }
		return;
	}
}
// UnityEngine.GUISkin FusionScalableIMGUI::GetScaledSkin(UnityEngine.GUISkin,System.Single&,System.Single&,System.Int32&,System.Int32&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* FusionScalableIMGUI_GetScaledSkin_m95A876857EBE4D4A5F6B4049146766B9D8659DD5 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___0_baseSkin, float* ___1_height, float* ___2_width, int32_t* ___3_padding, int32_t* ___4_margin, float* ___5_boxLeft, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(_scalableSkin == null) {
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// InitializedGUIStyles(baseSkin);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_2 = ___0_baseSkin;
		FusionScalableIMGUI_InitializedGUIStyles_m8116BF6321B19022D14340439790293C5790C21C(L_2, NULL);
	}

IL_0013:
	{
		// var dimensions = ScaleGuiSkinToScreenHeight();
		ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C L_3;
		L_3 = FusionScalableIMGUI_ScaleGuiSkinToScreenHeight_m3A0C4C15553D63E6A28EFEE5F134328D0F03588C(NULL);
		V_0 = L_3;
		// height  = dimensions.Item1;
		float* L_4 = ___1_height;
		ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C L_5 = V_0;
		float L_6 = L_5.___Item1_0;
		*((float*)L_4) = (float)L_6;
		// width   = dimensions.Item2;
		float* L_7 = ___2_width;
		ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C L_8 = V_0;
		float L_9 = L_8.___Item2_1;
		*((float*)L_7) = (float)L_9;
		// padding = dimensions.Item3;
		int32_t* L_10 = ___3_padding;
		ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C L_11 = V_0;
		int32_t L_12 = L_11.___Item3_2;
		*((int32_t*)L_10) = (int32_t)L_12;
		// margin  = dimensions.Item4;
		int32_t* L_13 = ___4_margin;
		ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C L_14 = V_0;
		int32_t L_15 = L_14.___Item4_3;
		*((int32_t*)L_13) = (int32_t)L_15;
		// boxLeft = dimensions.Item5;
		float* L_16 = ___5_boxLeft;
		ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C L_17 = V_0;
		float L_18 = L_17.___Item5_4;
		*((float*)L_16) = (float)L_18;
		// return _scalableSkin;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_19 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		return L_19;
	}
}
// System.ValueTuple`5<System.Single,System.Single,System.Int32,System.Int32,System.Single> FusionScalableIMGUI::ScaleGuiSkinToScreenHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C FusionScalableIMGUI_ScaleGuiSkinToScreenHeight_m3A0C4C15553D63E6A28EFEE5F134328D0F03588C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_5__ctor_mFA8F15EE5770AAF9026420AE64E667705760FAA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_6 = NULL;
	float G_B3_0 = 0.0f;
	{
		// bool isVerticalAspect = Screen.height > Screen.width;
		int32_t L_0;
		L_0 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		int32_t L_1;
		L_1 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		// bool isSuperThin = Screen.height / Screen.width > (17f / 9f);
		int32_t L_2;
		L_2 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		int32_t L_3;
		L_3 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		// float height = Screen.height * .08f;
		int32_t L_4;
		L_4 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)L_4), (0.0799999982f)));
		// float width = System.Math.Min(Screen.width * .9f, Screen.height * .6f);
		int32_t L_5;
		L_5 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_6;
		L_6 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_7;
		L_7 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(((float)il2cpp_codegen_multiply(((float)L_5), (0.899999976f))), ((float)il2cpp_codegen_multiply(((float)L_6), (0.600000024f))), NULL);
		V_1 = L_7;
		// int padding = (int)(height / 4);
		float L_8 = V_0;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_8/(4.0f))));
		// int margin = (int)(height / 8);
		float L_9 = V_0;
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_9/(8.0f))));
		// float boxLeft = (Screen.width - width) * .5f;
		int32_t L_10;
		L_10 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		float L_11 = V_1;
		V_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_10), L_11)), (0.5f)));
		// int fontsize = (int)(isSuperThin ? (width - (padding * 2)) * .07f : height * .4f);
		if (((((float)((float)((int32_t)(L_2/L_3)))) > ((float)(1.88888884f)))? 1 : 0))
		{
			goto IL_0077;
		}
	}
	{
		float L_12 = V_0;
		G_B3_0 = ((float)il2cpp_codegen_multiply(L_12, (0.400000006f)));
		goto IL_0083;
	}

IL_0077:
	{
		float L_13 = V_1;
		int32_t L_14 = V_2;
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_13, ((float)((int32_t)il2cpp_codegen_multiply(L_14, 2))))), (0.0700000003f)));
	}

IL_0083:
	{
		V_5 = il2cpp_codegen_cast_double_to_int<int32_t>(G_B3_0);
		// var margins = new RectOffset(0, 0, margin, margin);
		int32_t L_15 = V_3;
		int32_t L_16 = V_3;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_17 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_17, 0, 0, L_15, L_16, NULL);
		V_6 = L_17;
		// _scalableSkin.button.fontSize = fontsize;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_18 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_18);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_19;
		L_19 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_18, NULL);
		int32_t L_20 = V_5;
		NullCheck(L_19);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_19, L_20, NULL);
		// _scalableSkin.button.margin = margins;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_21 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_21);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_22;
		L_22 = GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289(L_21, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_23 = V_6;
		NullCheck(L_22);
		GUIStyle_set_margin_m9AAB6691C260ECD89195BE151F2ADDBF2E740C85(L_22, L_23, NULL);
		// _scalableSkin.label.fontSize = fontsize;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_24 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_24);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_25;
		L_25 = GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E(L_24, NULL);
		int32_t L_26 = V_5;
		NullCheck(L_25);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_25, L_26, NULL);
		// _scalableSkin.label.padding = new RectOffset(padding, padding, padding, padding);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_27 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_27);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_28;
		L_28 = GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E(L_27, NULL);
		int32_t L_29 = V_2;
		int32_t L_30 = V_2;
		int32_t L_31 = V_2;
		int32_t L_32 = V_2;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_33 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_33, L_29, L_30, L_31, L_32, NULL);
		NullCheck(L_28);
		GUIStyle_set_padding_m0C69415588C6032B372A48B1A1366CF43A083E14(L_28, L_33, NULL);
		// _scalableSkin.textField.fontSize = fontsize;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_34 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_34);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_35;
		L_35 = GUISkin_get_textField_mC554496BAB959445F0CFA30BDC5736DC1F057D48(L_34, NULL);
		int32_t L_36 = V_5;
		NullCheck(L_35);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_35, L_36, NULL);
		// _scalableSkin.window.padding = new RectOffset(padding, padding, padding, padding);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_37 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_37);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_38;
		L_38 = GUISkin_get_window_m760DAF129E72775DFD18CB71720AD306345E91C2(L_37, NULL);
		int32_t L_39 = V_2;
		int32_t L_40 = V_2;
		int32_t L_41 = V_2;
		int32_t L_42 = V_2;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_43 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_43, L_39, L_40, L_41, L_42, NULL);
		NullCheck(L_38);
		GUIStyle_set_padding_m0C69415588C6032B372A48B1A1366CF43A083E14(L_38, L_43, NULL);
		// _scalableSkin.window.margin = new RectOffset(margin, margin, margin, margin);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_44 = ((FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_StaticFields*)il2cpp_codegen_static_fields_for(FusionScalableIMGUI_tE951B5D4231A2AB109541BA643C9E5C69047495D_il2cpp_TypeInfo_var))->____scalableSkin_0;
		NullCheck(L_44);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_45;
		L_45 = GUISkin_get_window_m760DAF129E72775DFD18CB71720AD306345E91C2(L_44, NULL);
		int32_t L_46 = V_3;
		int32_t L_47 = V_3;
		int32_t L_48 = V_3;
		int32_t L_49 = V_3;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_50 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_50, L_46, L_47, L_48, L_49, NULL);
		NullCheck(L_45);
		GUIStyle_set_margin_m9AAB6691C260ECD89195BE151F2ADDBF2E740C85(L_45, L_50, NULL);
		// return (height, width, padding, margin, boxLeft);
		float L_51 = V_0;
		float L_52 = V_1;
		int32_t L_53 = V_2;
		int32_t L_54 = V_3;
		float L_55 = V_4;
		ValueTuple_5_t0B6A3757577B1228137C768C7143AFDA0F95B95C L_56;
		memset((&L_56), 0, sizeof(L_56));
		ValueTuple_5__ctor_mFA8F15EE5770AAF9026420AE64E667705760FAA3((&L_56), L_51, L_52, L_53, L_54, L_55, /*hidden argument*/ValueTuple_5__ctor_mFA8F15EE5770AAF9026420AE64E667705760FAA3_RuntimeMethod_var);
		return L_56;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MobileDisableAutoSwitchControls::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileDisableAutoSwitchControls_Start_m5E1CF874A11971B24762BC74EE94AB81CFF45368 (MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA* __this, const RuntimeMethod* method) 
{
	{
		// DisableAutoSwitchControls();
		MobileDisableAutoSwitchControls_DisableAutoSwitchControls_m156A87BFC0F55EC1BD438F032CB959A464A39AE4(__this, NULL);
		// }
		return;
	}
}
// System.Void MobileDisableAutoSwitchControls::DisableAutoSwitchControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileDisableAutoSwitchControls_DisableAutoSwitchControls_m156A87BFC0F55EC1BD438F032CB959A464A39AE4 (MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA* __this, const RuntimeMethod* method) 
{
	{
		// playerInput.neverAutoSwitchControlSchemes = true;
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_0 = __this->___playerInput_4;
		NullCheck(L_0);
		PlayerInput_set_neverAutoSwitchControlSchemes_mC0702F30BCC29A161B667EF791B9B9A12FC6DF60(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MobileDisableAutoSwitchControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileDisableAutoSwitchControls__ctor_mF934985411953E473C075F0C8680F75C118E8FCC (MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerDown_m1B73262454FA610913DA71F1C0792FD780787D56 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// OutputButtonStateValue(true);
		UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerUp_mD67F7DFB29033E7C84A2F41C31FA3CFDA1174C8B (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// OutputButtonStateValue(false);
		UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerClick_m3FEAAD559F8262DC2C8A8E91C85765E327CDB8FC (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// OutputButtonClickEvent();
		UIVirtualButton_OutputButtonClickEvent_m7DEA4C619F5DCCE273371E9D7B7760FC05D2DF32(__this, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OutputButtonStateValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, bool ___0_buttonState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonStateOutputEvent.Invoke(buttonState);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_0 = __this->___buttonStateOutputEvent_4;
		bool L_1 = ___0_buttonState;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_0, L_1, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OutputButtonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonClickEvent_m7DEA4C619F5DCCE273371E9D7B7760FC05D2DF32 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, const RuntimeMethod* method) 
{
	{
		// buttonClickOutputEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___buttonClickOutputEvent_5;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton__ctor_m2CF3E3351F342BF028B0B89C015137EDF0D1B8D7 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_Start_mD2D5C68628D62647018960CBF87655E0D13D845C (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) 
{
	{
		// SetupHandle();
		UIVirtualJoystick_SetupHandle_m31819BE784870B9E54B3A50CA1956106F7BDB0C6(__this, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_SetupHandle_m31819BE784870B9E54B3A50CA1956106F7BDB0C6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894(__this, L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnPointerDown_m2CADC0629A70249CC581C3DEF77A2D70558DF2B5 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// OnDrag(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		UIVirtualJoystick_OnDrag_mB0E6B186E3567D9B4C37860E70DCA0B8DDB746C0(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnDrag_mB0E6B186E3567D9B4C37860E70DCA0B8DDB746C0 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out Vector2 position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___containerRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___0_eventData;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_0, L_2, L_4, (&V_0), NULL);
		// position = ApplySizeDelta(position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = UIVirtualJoystick_ApplySizeDelta_mE401CB7F9B4D1E53DD878FE6D3B34DD98A8BBEDB(__this, L_6, NULL);
		V_0 = L_7;
		// Vector2 clampedPosition = ClampValuesToMagnitude(position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = UIVirtualJoystick_ClampValuesToMagnitude_m136E1691A4EA6C3D59C18AF78CB3C790CCB8346E(__this, L_8, NULL);
		V_1 = L_9;
		// Vector2 outputPosition = ApplyInversionFilter(position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = UIVirtualJoystick_ApplyInversionFilter_m92C48D8832AAFB5BCFA8C5E0E279E44E76EAC03E(__this, L_10, NULL);
		V_2 = L_11;
		// OutputPointerEventValue(outputPosition * magnitudeMultiplier);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_2;
		float L_13 = __this->___magnitudeMultiplier_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_12, L_13, NULL);
		UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6(__this, L_14, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
		if (!L_16)
		{
			goto IL_0063;
		}
	}
	{
		// UpdateHandleRectPosition(clampedPosition * joystickRange);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		float L_18 = __this->___joystickRange_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_17, L_18, NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894(__this, L_19, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnPointerUp_m32B1B96876A1AD9636D7119CF428E8A9441379EA (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OutputPointerEventValue(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6(__this, L_0, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894(__this, L_3, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_pointerPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// joystickOutputEvent.Invoke(pointerPosition);
		UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* L_0 = __this->___joystickOutputEvent_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_pointerPosition;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0(L_0, L_1, UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_newPosition, const RuntimeMethod* method) 
{
	{
		// handleRect.anchoredPosition = newPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_newPosition;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ApplySizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplySizeDelta_mE401CB7F9B4D1E53DD878FE6D3B34DD98A8BBEDB (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float x = (position.x/containerRect.sizeDelta.x) * 2.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_position;
		float L_1 = L_0.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___containerRect_4;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_2, NULL);
		float L_4 = L_3.___x_0;
		// float y = (position.y/containerRect.sizeDelta.y) * 2.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___0_position;
		float L_6 = L_5.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___containerRect_4;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_7, NULL);
		float L_9 = L_8.___y_1;
		V_0 = ((float)il2cpp_codegen_multiply(((float)(L_6/L_9)), (2.5f)));
		// return new Vector2(x, y);
		float L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), ((float)il2cpp_codegen_multiply(((float)(L_1/L_4)), (2.5f))), L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ClampValuesToMagnitude_m136E1691A4EA6C3D59C18AF78CB3C790CCB8346E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) 
{
	{
		// return Vector2.ClampMagnitude(position, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_ClampMagnitude_m9BF093877BD11282C41088022FE4AE70A3A0ECA9_inline(L_0, (1.0f), NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplyInversionFilter_m92C48D8832AAFB5BCFA8C5E0E279E44E76EAC03E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) 
{
	{
		// if(invertXOutputValue)
		bool L_0 = __this->___invertXOutputValue_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// position.x = InvertValue(position.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_position;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507(__this, L_2, NULL);
		(&___0_position)->___x_0 = L_3;
	}

IL_001b:
	{
		// if(invertYOutputValue)
		bool L_4 = __this->___invertYOutputValue_9;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// position.y = InvertValue(position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___0_position;
		float L_6 = L_5.___y_1;
		float L_7;
		L_7 = UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507(__this, L_6, NULL);
		(&___0_position)->___y_1 = L_7;
	}

IL_0036:
	{
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___0_position;
		return L_8;
	}
}
// System.Single UIVirtualJoystick::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// return -value;
		float L_0 = ___0_value;
		return ((-L_0));
	}
}
// System.Void UIVirtualJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick__ctor_m8526A96A470D77A141CAD1D824FF8DC137B63415 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) 
{
	{
		// public float joystickRange = 50f;
		__this->___joystickRange_6 = (50.0f);
		// public float magnitudeMultiplier = 1f;
		__this->___magnitudeMultiplier_7 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualTouchZone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_Start_m5178EDEC0B12F59242283DD29F480CFA00D77676 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) 
{
	{
		// SetupHandle();
		UIVirtualTouchZone_SetupHandle_m01D23F4128356836F9A12EAE5445227B24E8A894(__this, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetupHandle_m01D23F4128356836F9A12EAE5445227B24E8A894 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___handleRect_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5(__this, L_3, (bool)0, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnPointerDown_m8FD8081376FC0AEEDDF7F4ADF1B9C6624D358DEE (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out pointerDownPosition);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___containerRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___0_eventData;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___pointerDownPosition_10);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_0, L_2, L_4, L_5, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___handleRect_5;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5(__this, L_10, (bool)1, NULL);
		// UpdateHandleRectPosition(pointerDownPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___pointerDownPosition_10;
		UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E(__this, L_11, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnDrag_m018815333D4A45EC9288289C3230B446F86F522F (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out currentPointerPosition);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___containerRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___0_eventData;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___currentPointerPosition_11);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_0, L_2, L_4, L_5, NULL);
		// Vector2 positionDelta = GetDeltaBetweenPositions(pointerDownPosition, currentPointerPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___pointerDownPosition_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = __this->___currentPointerPosition_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = UIVirtualTouchZone_GetDeltaBetweenPositions_mD54442DDF2D8B643801BDA01791C97D3658E0B5B(__this, L_7, L_8, NULL);
		V_0 = L_9;
		// Vector2 clampedPosition = ClampValuesToMagnitude(positionDelta);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = UIVirtualTouchZone_ClampValuesToMagnitude_mA1619A6CBC35D212940A5D0AC1823AAFDA8FCC95(__this, L_10, NULL);
		V_1 = L_11;
		// Vector2 outputPosition = ApplyInversionFilter(clampedPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = UIVirtualTouchZone_ApplyInversionFilter_mFE8FF2CCBE01FDAB1BB9FDEC163809B630173823(__this, L_12, NULL);
		V_2 = L_13;
		// OutputPointerEventValue(outputPosition * magnitudeMultiplier);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_2;
		float L_15 = __this->___magnitudeMultiplier_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_14, L_15, NULL);
		UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF(__this, L_16, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnPointerUp_m6572F60C16F6D09A07FDE778F69FD710E06315A5 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pointerDownPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___pointerDownPosition_10 = L_0;
		// currentPointerPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___currentPointerPosition_11 = L_1;
		// OutputPointerEventValue(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF(__this, L_2, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___handleRect_5;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5(__this, L_6, (bool)0, NULL);
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E(__this, L_7, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_pointerPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// touchZoneOutputEvent.Invoke(pointerPosition);
		UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* L_0 = __this->___touchZoneOutputEvent_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_pointerPosition;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0(L_0, L_1, UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_newPosition, const RuntimeMethod* method) 
{
	{
		// handleRect.anchoredPosition = newPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_newPosition;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::SetObjectActiveState(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_targetObject, bool ___1_newState, const RuntimeMethod* method) 
{
	{
		// targetObject.SetActive(newState);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_targetObject;
		bool L_1 = ___1_newState;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::GetDeltaBetweenPositions(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_GetDeltaBetweenPositions_mD54442DDF2D8B643801BDA01791C97D3658E0B5B (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_firstPosition, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_secondPosition, const RuntimeMethod* method) 
{
	{
		// return secondPosition - firstPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___1_secondPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_firstPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ClampValuesToMagnitude_mA1619A6CBC35D212940A5D0AC1823AAFDA8FCC95 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) 
{
	{
		// return Vector2.ClampMagnitude(position, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_ClampMagnitude_m9BF093877BD11282C41088022FE4AE70A3A0ECA9_inline(L_0, (1.0f), NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ApplyInversionFilter_mFE8FF2CCBE01FDAB1BB9FDEC163809B630173823 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) 
{
	{
		// if(invertXOutputValue)
		bool L_0 = __this->___invertXOutputValue_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// position.x = InvertValue(position.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_position;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA(__this, L_2, NULL);
		(&___0_position)->___x_0 = L_3;
	}

IL_001b:
	{
		// if(invertYOutputValue)
		bool L_4 = __this->___invertYOutputValue_9;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// position.y = InvertValue(position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___0_position;
		float L_6 = L_5.___y_1;
		float L_7;
		L_7 = UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA(__this, L_6, NULL);
		(&___0_position)->___y_1 = L_7;
	}

IL_0036:
	{
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___0_position;
		return L_8;
	}
}
// System.Single UIVirtualTouchZone::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// return -value;
		float L_0 = ___0_value;
		return ((-L_0));
	}
}
// System.Void UIVirtualTouchZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone__ctor_m3FA22B25B88E7ECBBB54AF2464EFB9A978D76CC6 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) 
{
	{
		// public float magnitudeMultiplier = 1f;
		__this->___magnitudeMultiplier_7 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BasicRigidBodyPush::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush_OnControllerColliderHit_mAB4A1B5340D41961D9592034FE626BC8A8FC379E (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___0_hit, const RuntimeMethod* method) 
{
	{
		// if (canPush) PushRigidBodies(hit);
		bool L_0 = __this->___canPush_5;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (canPush) PushRigidBodies(hit);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_1 = ___0_hit;
		BasicRigidBodyPush_PushRigidBodies_m21C4CA75FFF7646BCD91E9A673B18E6182377D13(__this, L_1, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void BasicRigidBodyPush::PushRigidBodies(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush_PushRigidBodies_m21C4CA75FFF7646BCD91E9A673B18E6182377D13 (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___0_hit, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Rigidbody body = hit.collider.attachedRigidbody;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_0 = ___0_hit;
		NullCheck(L_0);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6(L_0, NULL);
		NullCheck(L_1);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_1, NULL);
		V_0 = L_2;
		// if (body == null || body.isKinematic) return;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1(L_5, NULL);
		if (!L_6)
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// if (body == null || body.isKinematic) return;
		return;
	}

IL_001e:
	{
		// var bodyLayerMask = 1 << body.gameObject.layer;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = V_0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_8, NULL);
		// if ((bodyLayerMask & pushLayers.value) == 0) return;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_10 = (&__this->___pushLayers_4);
		int32_t L_11;
		L_11 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_10, NULL);
		if (((int32_t)(((int32_t)(1<<((int32_t)(L_9&((int32_t)31)))))&L_11)))
		{
			goto IL_003d;
		}
	}
	{
		// if ((bodyLayerMask & pushLayers.value) == 0) return;
		return;
	}

IL_003d:
	{
		// if (hit.moveDirection.y < -0.3f) return;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_12 = ___0_hit;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93(L_12, NULL);
		float L_14 = L_13.___y_3;
		if ((!(((float)L_14) < ((float)(-0.300000012f)))))
		{
			goto IL_0050;
		}
	}
	{
		// if (hit.moveDirection.y < -0.3f) return;
		return;
	}

IL_0050:
	{
		// Vector3 pushDir = new Vector3(hit.moveDirection.x, 0.0f, hit.moveDirection.z);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_15 = ___0_hit;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93(L_15, NULL);
		float L_17 = L_16.___x_2;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_18 = ___0_hit;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93(L_18, NULL);
		float L_20 = L_19.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_17, (0.0f), L_20, NULL);
		// body.AddForce(pushDir * strength, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		float L_23 = __this->___strength_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_23, NULL);
		NullCheck(L_21);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_21, L_24, 1, NULL);
		// }
		return;
	}
}
// System.Void BasicRigidBodyPush::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush__ctor_mCD0033473AC08BFF32309E49AE95271C711099A9 (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, const RuntimeMethod* method) 
{
	{
		// [Range(0.5f, 5f)] public float strength = 1.1f;
		__this->___strength_6 = (1.10000002f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StarterAssets.StarterAssetsInputs::OnMove(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnMove_m1037EAE12A06BEF9F73CAF4A3127C6A9CF4D6532 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MoveInput(value.Get<Vector2>());
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___0_value;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_0, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnLook(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnLook_m457792363F0A68571BD7A917C44B1A0B1C5D7EC4 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(cursorInputForLook)
		bool L_0 = __this->___cursorInputForLook_10;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// LookInput(value.Get<Vector2>());
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_1 = ___0_value;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_1, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline(__this, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnJump(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnJump_m077D720656D5B78D423A5D7E0194BA2D9DE089E4 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___0_value, const RuntimeMethod* method) 
{
	{
		// JumpInput(value.isPressed);
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___0_value;
		NullCheck(L_0);
		bool L_1;
		L_1 = InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F(L_0, NULL);
		StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnSprint(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnSprint_m8FF0D36964527B10A1A14E55A9EE4025C1AFF0EF (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___0_value, const RuntimeMethod* method) 
{
	{
		// SprintInput(value.isPressed);
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___0_value;
		NullCheck(L_0);
		bool L_1;
		L_1 = InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F(L_0, NULL);
		StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::MoveInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_newMoveDirection, const RuntimeMethod* method) 
{
	{
		// move = newMoveDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_newMoveDirection;
		__this->___move_4 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::LookInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_newLookDirection, const RuntimeMethod* method) 
{
	{
		// look = newLookDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_newLookDirection;
		__this->___look_5 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::JumpInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___0_newJumpState, const RuntimeMethod* method) 
{
	{
		// jump = newJumpState;
		bool L_0 = ___0_newJumpState;
		__this->___jump_6 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::SprintInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___0_newSprintState, const RuntimeMethod* method) 
{
	{
		// sprint = newSprintState;
		bool L_0 = ___0_newSprintState;
		__this->___sprint_7 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnApplicationFocus_m461C49F2AC387B76D98B87A98BA38A0289C34EA9 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___0_hasFocus, const RuntimeMethod* method) 
{
	{
		// SetCursorState(cursorLocked);
		bool L_0 = __this->___cursorLocked_9;
		StarterAssetsInputs_SetCursorState_m7D2F57E935DE40673700B1994EFA6C4BF9573D0E(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::SetCursorState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_SetCursorState_m7D2F57E935DE40673700B1994EFA6C4BF9573D0E (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___0_newState, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// Cursor.lockState = newState ? CursorLockMode.Locked : CursorLockMode.None;
		bool L_0 = ___0_newState;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 1;
	}

IL_0007:
	{
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs__ctor_m1A0CAEE3381A63077E196B7C815859617C9BCDBA (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, const RuntimeMethod* method) 
{
	{
		// public bool cursorLocked = true;
		__this->___cursorLocked_9 = (bool)1;
		// public bool cursorInputForLook = true;
		__this->___cursorInputForLook_10 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StarterAssets.UICanvasControllerInput::VirtualMoveInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualMoveInput_m56E41472A26B3A6B517D63844304F7196FFF449C (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_virtualMoveDirection, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.MoveInput(virtualMoveDirection);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_virtualMoveDirection;
		NullCheck(L_0);
		StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualLookInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualLookInput_m88A9B7AC7F338CFBEC98FBBBD2EC8793C1C8288E (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_virtualLookDirection, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.LookInput(virtualLookDirection);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_virtualLookDirection;
		NullCheck(L_0);
		StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualJumpInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualJumpInput_m45600335B430348707B730FFA2FCB334E8D807FE (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, bool ___0_virtualJumpState, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.JumpInput(virtualJumpState);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		bool L_1 = ___0_virtualJumpState;
		NullCheck(L_0);
		StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualSprintInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualSprintInput_m80CBF3433D8C053AB55A0D3F01B26070F1799759 (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, bool ___0_virtualSprintState, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.SprintInput(virtualSprintState);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		bool L_1 = ___0_virtualSprintState;
		NullCheck(L_0);
		StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput__ctor_m3B7626E7C92128BC984ABE40C9C250720F352017 (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StarterAssets.ThirdPersonController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Awake_mE08F39AEA7E4CE2E15C7828E9C24AC4CE9C487C3 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_mainCamera == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____mainCamera_39;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// _mainCamera = GameObject.FindGameObjectWithTag("MainCamera");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, NULL);
		__this->____mainCamera_39 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mainCamera_39), (void*)L_2);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Start_m99AC2EAB6D2136A754B1B9B2E001732ED198D7E7 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hasAnimator = TryGetComponent(out _animator);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** L_0 = (&__this->____animator_36);
		bool L_1;
		L_1 = Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7(__this, L_0, Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		__this->____hasAnimator_41 = L_1;
		// _controller = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_2;
		L_2 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->____controller_37 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____controller_37), (void*)L_2);
		// _input = GetComponent<StarterAssetsInputs>();
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_3;
		L_3 = Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC(__this, Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var);
		__this->____input_38 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____input_38), (void*)L_3);
		// AssignAnimationIDs();
		ThirdPersonController_AssignAnimationIDs_m3F78712E347AAEB24671FD485878AD4EFB45FA6A(__this, NULL);
		// _jumpTimeoutDelta = JumpTimeout;
		float L_4 = __this->___JumpTimeout_10;
		__this->____jumpTimeoutDelta_29 = L_4;
		// _fallTimeoutDelta = FallTimeout;
		float L_5 = __this->___FallTimeout_11;
		__this->____fallTimeoutDelta_30 = L_5;
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Update_mAFF4B3A14DCC2D6F6C5D318C41DFC61F3EDE43C5 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hasAnimator = TryGetComponent(out _animator);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** L_0 = (&__this->____animator_36);
		bool L_1;
		L_1 = Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7(__this, L_0, Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		__this->____hasAnimator_41 = L_1;
		// JumpAndGravity();
		ThirdPersonController_JumpAndGravity_m871B3C01ED71022CF151700F569540EAC058997F(__this, NULL);
		// GroundedCheck();
		ThirdPersonController_GroundedCheck_mEC00FD7C667109275F153C9A1E7BDA401D514AEE(__this, NULL);
		// Move();
		ThirdPersonController_Move_m6FB6A9AEA1B2354BAE790DE45C79292579802C76(__this, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_LateUpdate_m02FBD3801F369821F2FEF5ADD8890B3FB9759BC0 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	{
		// CameraRotation();
		ThirdPersonController_CameraRotation_m24BBAE5DB2B55B6DDC5218DD0DB7C53F1EF30751(__this, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::AssignAnimationIDs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_AssignAnimationIDs_m3F78712E347AAEB24671FD485878AD4EFB45FA6A (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2CFA0DCA9F3732AA69C3B65D12881F7F3CF5FC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animIDSpeed = Animator.StringToHash("Speed");
		int32_t L_0;
		L_0 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, NULL);
		__this->____animIDSpeed_31 = L_0;
		// _animIDGrounded = Animator.StringToHash("Grounded");
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4, NULL);
		__this->____animIDGrounded_32 = L_1;
		// _animIDJump = Animator.StringToHash("Jump");
		int32_t L_2;
		L_2 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		__this->____animIDJump_33 = L_2;
		// _animIDFreeFall = Animator.StringToHash("FreeFall");
		int32_t L_3;
		L_3 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3, NULL);
		__this->____animIDFreeFall_34 = L_3;
		// _animIDMotionSpeed = Animator.StringToHash("MotionSpeed");
		int32_t L_4;
		L_4 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteralE2CFA0DCA9F3732AA69C3B65D12881F7F3CF5FC0, NULL);
		__this->____animIDMotionSpeed_35 = L_4;
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::GroundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_GroundedCheck_mEC00FD7C667109275F153C9A1E7BDA401D514AEE (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 spherePosition = new Vector3(transform.position.x, transform.position.y - GroundedOffset, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___y_3;
		float L_6 = __this->___GroundedOffset_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_2, ((float)il2cpp_codegen_subtract(L_5, L_6)), L_9, NULL);
		// Grounded = Physics.CheckSphere(spherePosition, GroundedRadius, GroundLayers, QueryTriggerInteraction.Ignore);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = __this->___GroundedRadius_14;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_12 = __this->___GroundLayers_15;
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_12, NULL);
		bool L_14;
		L_14 = Physics_CheckSphere_mC32BB961B0CF9D23EDDEEC3F30021FD1BE88E261(L_10, L_11, L_13, 1, NULL);
		__this->___Grounded_12 = L_14;
		// if (_hasAnimator)
		bool L_15 = __this->____hasAnimator_41;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// _animator.SetBool(_animIDGrounded, Grounded);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = __this->____animator_36;
		int32_t L_17 = __this->____animIDGrounded_32;
		bool L_18 = __this->___Grounded_12;
		NullCheck(L_16);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_16, L_17, L_18, NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::CameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_CameraRotation_m24BBAE5DB2B55B6DDC5218DD0DB7C53F1EF30751 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	{
		// if (_input.look.sqrMagnitude >= _threshold && !LockCameraPosition)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->____input_38;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&L_0->___look_5);
		float L_2;
		L_2 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline(L_1, NULL);
		if ((!(((float)L_2) >= ((float)(0.00999999978f)))))
		{
			goto IL_0065;
		}
	}
	{
		bool L_3 = __this->___LockCameraPosition_20;
		if (L_3)
		{
			goto IL_0065;
		}
	}
	{
		// _cinemachineTargetYaw += _input.look.x * Time.deltaTime;
		float L_4 = __this->____cinemachineTargetYaw_21;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_5 = __this->____input_38;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&L_5->___look_5);
		float L_7 = L_6->___x_0;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____cinemachineTargetYaw_21 = ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(L_7, L_8))));
		// _cinemachineTargetPitch += _input.look.y * Time.deltaTime;
		float L_9 = __this->____cinemachineTargetPitch_22;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_10 = __this->____input_38;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&L_10->___look_5);
		float L_12 = L_11->___y_1;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____cinemachineTargetPitch_22 = ((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_multiply(L_12, L_13))));
	}

IL_0065:
	{
		// _cinemachineTargetYaw = ClampAngle(_cinemachineTargetYaw, float.MinValue, float.MaxValue);
		float L_14 = __this->____cinemachineTargetYaw_21;
		float L_15;
		L_15 = ThirdPersonController_ClampAngle_m8C3245A45B5FB84338F87BEAECEEE36E3C53B2B6(L_14, (-(std::numeric_limits<float>::max)()), ((std::numeric_limits<float>::max)()), NULL);
		__this->____cinemachineTargetYaw_21 = L_15;
		// _cinemachineTargetPitch = ClampAngle(_cinemachineTargetPitch, BottomClamp, TopClamp);
		float L_16 = __this->____cinemachineTargetPitch_22;
		float L_17 = __this->___BottomClamp_18;
		float L_18 = __this->___TopClamp_17;
		float L_19;
		L_19 = ThirdPersonController_ClampAngle_m8C3245A45B5FB84338F87BEAECEEE36E3C53B2B6(L_16, L_17, L_18, NULL);
		__this->____cinemachineTargetPitch_22 = L_19;
		// CinemachineCameraTarget.transform.rotation = Quaternion.Euler(_cinemachineTargetPitch + CameraAngleOverride, _cinemachineTargetYaw, 0.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___CinemachineCameraTarget_16;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		float L_22 = __this->____cinemachineTargetPitch_22;
		float L_23 = __this->___CameraAngleOverride_19;
		float L_24 = __this->____cinemachineTargetYaw_21;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((float)il2cpp_codegen_add(L_22, L_23)), L_24, (0.0f), NULL);
		NullCheck(L_21);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_21, L_25, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Move_m6FB6A9AEA1B2354BAE790DE45C79292579802C76 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		// float targetSpeed = _input.sprint  ? SprintSpeed : MoveSpeed;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->____input_38;
		NullCheck(L_0);
		bool L_1 = L_0->___sprint_7;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		float L_2 = __this->___MoveSpeed_4;
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		float L_3 = __this->___SprintSpeed_5;
		G_B3_0 = L_3;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		// if (_input.move == Vector2.zero) targetSpeed = 0.0f;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_4 = __this->____input_38;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = L_4->___move_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_7;
		L_7 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// if (_input.move == Vector2.zero) targetSpeed = 0.0f;
		V_0 = (0.0f);
	}

IL_0039:
	{
		// float currentHorizontalSpeed = new Vector3(_controller.velocity.x, 0.0f, _controller.velocity.z).magnitude;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_8 = __this->____controller_37;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_8, NULL);
		float L_10 = L_9.___x_2;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_11 = __this->____controller_37;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_10, (0.0f), L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		float L_15;
		L_15 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_5), NULL);
		V_1 = L_15;
		// float speedOffset = 0.1f;
		V_2 = (0.100000001f);
		// float inputMagnitude = _input.analogMovement ? _input.move.magnitude : 1f;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_16 = __this->____input_38;
		NullCheck(L_16);
		bool L_17 = L_16->___analogMovement_8;
		if (L_17)
		{
			goto IL_0087;
		}
	}
	{
		G_B8_0 = (1.0f);
		goto IL_0097;
	}

IL_0087:
	{
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_18 = __this->____input_38;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&L_18->___move_4);
		float L_20;
		L_20 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_19, NULL);
		G_B8_0 = L_20;
	}

IL_0097:
	{
		V_3 = G_B8_0;
		// if (currentHorizontalSpeed < targetSpeed - speedOffset || currentHorizontalSpeed > targetSpeed + speedOffset)
		float L_21 = V_1;
		float L_22 = V_0;
		float L_23 = V_2;
		if ((((float)L_21) < ((float)((float)il2cpp_codegen_subtract(L_22, L_23)))))
		{
			goto IL_00a4;
		}
	}
	{
		float L_24 = V_1;
		float L_25 = V_0;
		float L_26 = V_2;
		if ((!(((float)L_24) > ((float)((float)il2cpp_codegen_add(L_25, L_26))))))
		{
			goto IL_00de;
		}
	}

IL_00a4:
	{
		// _speed = Mathf.Lerp(currentHorizontalSpeed, targetSpeed * inputMagnitude, Time.deltaTime * SpeedChangeRate);
		float L_27 = V_1;
		float L_28 = V_0;
		float L_29 = V_3;
		float L_30;
		L_30 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_31 = __this->___SpeedChangeRate_7;
		float L_32;
		L_32 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_27, ((float)il2cpp_codegen_multiply(L_28, L_29)), ((float)il2cpp_codegen_multiply(L_30, L_31)), NULL);
		__this->____speed_23 = L_32;
		// _speed = Mathf.Round(_speed * 1000f) / 1000f;
		float L_33 = __this->____speed_23;
		float L_34;
		L_34 = bankers_roundf(((float)il2cpp_codegen_multiply(L_33, (1000.0f))));
		__this->____speed_23 = ((float)(L_34/(1000.0f)));
		goto IL_00e5;
	}

IL_00de:
	{
		// _speed = targetSpeed;
		float L_35 = V_0;
		__this->____speed_23 = L_35;
	}

IL_00e5:
	{
		// _animationBlend = Mathf.Lerp(_animationBlend, targetSpeed, Time.deltaTime * SpeedChangeRate);
		float L_36 = __this->____animationBlend_24;
		float L_37 = V_0;
		float L_38;
		L_38 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_39 = __this->___SpeedChangeRate_7;
		float L_40;
		L_40 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_36, L_37, ((float)il2cpp_codegen_multiply(L_38, L_39)), NULL);
		__this->____animationBlend_24 = L_40;
		// if(Grounded)
		bool L_41 = __this->___Grounded_12;
		if (!L_41)
		{
			goto IL_0144;
		}
	}
	{
		// prevInputDirection = new Vector3(_input.move.x, 0.0f, _input.move.y).normalized;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_42 = __this->____input_38;
		NullCheck(L_42);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = (&L_42->___move_4);
		float L_44 = L_43->___x_0;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_45 = __this->____input_38;
		NullCheck(L_45);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_46 = (&L_45->___move_4);
		float L_47 = L_46->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_48), L_44, (0.0f), L_47, /*hidden argument*/NULL);
		V_5 = L_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		__this->___prevInputDirection_42 = L_49;
	}

IL_0144:
	{
		// if (_input.move != Vector2.zero)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_50 = __this->____input_38;
		NullCheck(L_50);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = L_50->___move_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_53;
		L_53 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_51, L_52, NULL);
		if (!L_53)
		{
			goto IL_01e0;
		}
	}
	{
		// _targetRotation = Mathf.Atan2(prevInputDirection.x, prevInputDirection.z) * Mathf.Rad2Deg + _mainCamera.transform.eulerAngles.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_54 = (&__this->___prevInputDirection_42);
		float L_55 = L_54->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_56 = (&__this->___prevInputDirection_42);
		float L_57 = L_56->___z_4;
		float L_58;
		L_58 = atan2f(L_55, L_57);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->____mainCamera_39;
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_59, NULL);
		NullCheck(L_60);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_60, NULL);
		float L_62 = L_61.___y_3;
		__this->____targetRotation_25 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_58, (57.2957802f))), L_62));
		// float rotation = Mathf.SmoothDampAngle(transform.eulerAngles.y, _targetRotation, ref _rotationVelocity, RotationSmoothTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_63, NULL);
		float L_65 = L_64.___y_3;
		float L_66 = __this->____targetRotation_25;
		float* L_67 = (&__this->____rotationVelocity_26);
		float L_68 = __this->___RotationSmoothTime_6;
		float L_69;
		L_69 = Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline(L_65, L_66, L_67, L_68, NULL);
		V_6 = L_69;
		// transform.rotation = Quaternion.Euler(0.0f, rotation, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_71 = V_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_72;
		L_72 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_71, (0.0f), NULL);
		NullCheck(L_70);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_70, L_72, NULL);
	}

IL_01e0:
	{
		// Vector3 targetDirection = Quaternion.Euler(0.0f, _targetRotation, 0.0f) * Vector3.forward;
		float L_73 = __this->____targetRotation_25;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_74;
		L_74 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_73, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_74, L_75, NULL);
		V_4 = L_76;
		// _controller.Move(targetDirection.normalized * (_speed * Time.deltaTime) + new Vector3(0.0f, _verticalVelocity, 0.0f) * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_77 = __this->____controller_37;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		float L_79 = __this->____speed_23;
		float L_80;
		L_80 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_78, ((float)il2cpp_codegen_multiply(L_79, L_80)), NULL);
		float L_82 = __this->____verticalVelocity_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_83), (0.0f), L_82, (0.0f), /*hidden argument*/NULL);
		float L_84;
		L_84 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_83, L_84, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_81, L_85, NULL);
		NullCheck(L_77);
		int32_t L_87;
		L_87 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_77, L_86, NULL);
		// if (_hasAnimator)
		bool L_88 = __this->____hasAnimator_41;
		if (!L_88)
		{
			goto IL_027a;
		}
	}
	{
		// _animator.SetFloat(_animIDSpeed, _animationBlend);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_89 = __this->____animator_36;
		int32_t L_90 = __this->____animIDSpeed_31;
		float L_91 = __this->____animationBlend_24;
		NullCheck(L_89);
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_89, L_90, L_91, NULL);
		// _animator.SetFloat(_animIDMotionSpeed, inputMagnitude);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_92 = __this->____animator_36;
		int32_t L_93 = __this->____animIDMotionSpeed_35;
		float L_94 = V_3;
		NullCheck(L_92);
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_92, L_93, L_94, NULL);
	}

IL_027a:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_JumpAndGravity_m871B3C01ED71022CF151700F569540EAC058997F (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	{
		// if (Grounded)
		bool L_0 = __this->___Grounded_12;
		if (!L_0)
		{
			goto IL_00ce;
		}
	}
	{
		// _fallTimeoutDelta = FallTimeout;
		float L_1 = __this->___FallTimeout_11;
		__this->____fallTimeoutDelta_30 = L_1;
		// if (_hasAnimator)
		bool L_2 = __this->____hasAnimator_41;
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// _animator.SetBool(_animIDJump, false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->____animator_36;
		int32_t L_4 = __this->____animIDJump_33;
		NullCheck(L_3);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_3, L_4, (bool)0, NULL);
		// _animator.SetBool(_animIDFreeFall, false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->____animator_36;
		int32_t L_6 = __this->____animIDFreeFall_34;
		NullCheck(L_5);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_5, L_6, (bool)0, NULL);
	}

IL_0043:
	{
		// if (_verticalVelocity < 0.0f)
		float L_7 = __this->____verticalVelocity_27;
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		// _verticalVelocity = -2f;
		__this->____verticalVelocity_27 = (-2.0f);
	}

IL_005b:
	{
		// if (_input.jump && _jumpTimeoutDelta <= 0.0f)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_8 = __this->____input_38;
		NullCheck(L_8);
		bool L_9 = L_8->___jump_6;
		if (!L_9)
		{
			goto IL_00ad;
		}
	}
	{
		float L_10 = __this->____jumpTimeoutDelta_29;
		if ((!(((float)L_10) <= ((float)(0.0f)))))
		{
			goto IL_00ad;
		}
	}
	{
		// _verticalVelocity = Mathf.Sqrt(JumpHeight * -2f * Gravity);
		float L_11 = __this->___JumpHeight_8;
		float L_12 = __this->___Gravity_9;
		float L_13;
		L_13 = sqrtf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_11, (-2.0f))), L_12)));
		__this->____verticalVelocity_27 = L_13;
		// if (_hasAnimator)
		bool L_14 = __this->____hasAnimator_41;
		if (!L_14)
		{
			goto IL_00ad;
		}
	}
	{
		// _animator.SetBool(_animIDJump, true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->____animator_36;
		int32_t L_16 = __this->____animIDJump_33;
		NullCheck(L_15);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_15, L_16, (bool)1, NULL);
	}

IL_00ad:
	{
		// if (_jumpTimeoutDelta >= 0.0f)
		float L_17 = __this->____jumpTimeoutDelta_29;
		if ((!(((float)L_17) >= ((float)(0.0f)))))
		{
			goto IL_0121;
		}
	}
	{
		// _jumpTimeoutDelta -= Time.deltaTime;
		float L_18 = __this->____jumpTimeoutDelta_29;
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____jumpTimeoutDelta_29 = ((float)il2cpp_codegen_subtract(L_18, L_19));
		goto IL_0121;
	}

IL_00ce:
	{
		// _jumpTimeoutDelta = JumpTimeout;
		float L_20 = __this->___JumpTimeout_10;
		__this->____jumpTimeoutDelta_29 = L_20;
		// if (_fallTimeoutDelta >= 0.0f)
		float L_21 = __this->____fallTimeoutDelta_30;
		if ((!(((float)L_21) >= ((float)(0.0f)))))
		{
			goto IL_00fb;
		}
	}
	{
		// _fallTimeoutDelta -= Time.deltaTime;
		float L_22 = __this->____fallTimeoutDelta_30;
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____fallTimeoutDelta_30 = ((float)il2cpp_codegen_subtract(L_22, L_23));
		goto IL_0115;
	}

IL_00fb:
	{
		// if (_hasAnimator)
		bool L_24 = __this->____hasAnimator_41;
		if (!L_24)
		{
			goto IL_0115;
		}
	}
	{
		// _animator.SetBool(_animIDFreeFall, true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->____animator_36;
		int32_t L_26 = __this->____animIDFreeFall_34;
		NullCheck(L_25);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_25, L_26, (bool)1, NULL);
	}

IL_0115:
	{
		// _input.jump = false;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_27 = __this->____input_38;
		NullCheck(L_27);
		L_27->___jump_6 = (bool)0;
	}

IL_0121:
	{
		// if (_verticalVelocity < _terminalVelocity)
		float L_28 = __this->____verticalVelocity_27;
		float L_29 = __this->____terminalVelocity_28;
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0148;
		}
	}
	{
		// _verticalVelocity += Gravity * Time.deltaTime;
		float L_30 = __this->____verticalVelocity_27;
		float L_31 = __this->___Gravity_9;
		float L_32;
		L_32 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____verticalVelocity_27 = ((float)il2cpp_codegen_add(L_30, ((float)il2cpp_codegen_multiply(L_31, L_32))));
	}

IL_0148:
	{
		// }
		return;
	}
}
// System.Single StarterAssets.ThirdPersonController::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonController_ClampAngle_m8C3245A45B5FB84338F87BEAECEEE36E3C53B2B6 (float ___0_lfAngle, float ___1_lfMin, float ___2_lfMax, const RuntimeMethod* method) 
{
	{
		// if (lfAngle < -360f) lfAngle += 360f;
		float L_0 = ___0_lfAngle;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// if (lfAngle < -360f) lfAngle += 360f;
		float L_1 = ___0_lfAngle;
		___0_lfAngle = ((float)il2cpp_codegen_add(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (lfAngle > 360f) lfAngle -= 360f;
		float L_2 = ___0_lfAngle;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// if (lfAngle > 360f) lfAngle -= 360f;
		float L_3 = ___0_lfAngle;
		___0_lfAngle = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(lfAngle, lfMin, lfMax);
		float L_4 = ___0_lfAngle;
		float L_5 = ___1_lfMin;
		float L_6 = ___2_lfMax;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void StarterAssets.ThirdPersonController::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_OnDrawGizmosSelected_mCD3D7F711815BC95C166CB8E67F3C5D085C38BA5 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Color transparentGreen = new Color(0.0f, 1.0f, 0.0f, 0.35f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_0), (0.0f), (1.0f), (0.0f), (0.349999994f), NULL);
		// Color transparentRed = new Color(1.0f, 0.0f, 0.0f, 0.35f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_1), (1.0f), (0.0f), (0.0f), (0.349999994f), NULL);
		// if (Grounded) Gizmos.color = transparentGreen;
		bool L_0 = __this->___Grounded_12;
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		// if (Grounded) Gizmos.color = transparentGreen;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_1, NULL);
		goto IL_004c;
	}

IL_0046:
	{
		// else Gizmos.color = transparentRed;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_1;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_2, NULL);
	}

IL_004c:
	{
		// Gizmos.DrawSphere(new Vector3(transform.position.x, transform.position.y - GroundedOffset, transform.position.z), GroundedRadius);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		float L_9 = __this->___GroundedOffset_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_5, ((float)il2cpp_codegen_subtract(L_8, L_9)), L_12, /*hidden argument*/NULL);
		float L_14 = __this->___GroundedRadius_14;
		Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController__ctor_mA2ECE265C51A281DA13F2344E30363399DD64321 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed = 2.0f;
		__this->___MoveSpeed_4 = (2.0f);
		// public float SprintSpeed = 5.335f;
		__this->___SprintSpeed_5 = (5.33500004f);
		// public float RotationSmoothTime = 0.12f;
		__this->___RotationSmoothTime_6 = (0.119999997f);
		// public float SpeedChangeRate = 10.0f;
		__this->___SpeedChangeRate_7 = (10.0f);
		// public float JumpHeight = 1.2f;
		__this->___JumpHeight_8 = (1.20000005f);
		// public float Gravity = -15.0f;
		__this->___Gravity_9 = (-15.0f);
		// public float JumpTimeout = 0.50f;
		__this->___JumpTimeout_10 = (0.5f);
		// public float FallTimeout = 0.15f;
		__this->___FallTimeout_11 = (0.150000006f);
		// public bool Grounded = true;
		__this->___Grounded_12 = (bool)1;
		// public float GroundedOffset = -0.14f;
		__this->___GroundedOffset_13 = (-0.140000001f);
		// public float GroundedRadius = 0.28f;
		__this->___GroundedRadius_14 = (0.280000001f);
		// public float TopClamp = 70.0f;
		__this->___TopClamp_17 = (70.0f);
		// public float BottomClamp = -30.0f;
		__this->___BottomClamp_18 = (-30.0f);
		// private float _terminalVelocity = 53.0f;
		__this->____terminalVelocity_28 = (53.0f);
		// private Vector3 prevInputDirection = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___prevInputDirection_42 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fusion.FusionRuntimeCheck::RuntimeCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionRuntimeCheck_RuntimeCheck_m6358CB373141B490D879449D97F0E0F0E9256E7C (const RuntimeMethod* method) 
{
	{
		// RuntimeUnityFlagsSetup.Check_ENABLE_IL2CPP();
		RuntimeUnityFlagsSetup_Check_ENABLE_IL2CPP_mE07E4D2430A3AB7FE27F6DFD581514B24051623E(NULL);
		// RuntimeUnityFlagsSetup.Check_NET_STANDARD_2_0();
		RuntimeUnityFlagsSetup_Check_NET_STANDARD_2_0_m8CAEDBFB5DDF4C9A6F6D1ACA0A55D8A300E91857(NULL);
		// RuntimeUnityFlagsSetup.Check_UNITY_2019_4_OR_NEWER();
		RuntimeUnityFlagsSetup_Check_UNITY_2019_4_OR_NEWER_m20B6FD299EE8BA1BF3FEFA6ADBC2F44685438014(NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Func`2<System.Object,System.Int32> Fusion.FusionUnityLogger::get_GetColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* FusionUnityLogger_get_GetColor_mEEAFC347BD6451A1369D7A57EDAF453E2FCE033B (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, const RuntimeMethod* method) 
{
	{
		// public Func<object, int> GetColor { get; set; }
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_0 = __this->___U3CGetColorU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Fusion.FusionUnityLogger::set_GetColor(System.Func`2<System.Object,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionUnityLogger_set_GetColor_m91F84BF1AEB7B3FB6A8B0E88DC68F2A261A9E58A (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Func<object, int> GetColor { get; set; }
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_0 = ___0_value;
		__this->___U3CGetColorU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGetColorU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void Fusion.FusionUnityLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionUnityLogger__ctor_m0287DD77CE2EF2B6BA6C1E8B0AA63BCC70049904 (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionUnityLogger_U3C_ctorU3Eb__12_0_mF2706CCE9E8E1F5D73E5AE62E4A6152D28D2D7E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B2_0 = NULL;
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B1_0 = NULL;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B3_1 = NULL;
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B5_0 = NULL;
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B4_0 = NULL;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B6_1 = NULL;
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B8_0 = NULL;
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B7_0 = NULL;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B9_1 = NULL;
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B11_0 = NULL;
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B10_0 = NULL;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* G_B12_1 = NULL;
	{
		// StringBuilder _builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->____builder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____builder_0), (void*)L_0);
		// public FusionUnityLogger() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// bool isDarkMode = false;
		V_0 = (bool)0;
		// MinRandomColor = isDarkMode ? new Color32(158, 158, 158, 255) : new Color32(30, 30, 30, 255);
		bool L_1 = V_0;
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0029;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_2), (uint8_t)((int32_t)30), (uint8_t)((int32_t)30), (uint8_t)((int32_t)30), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0042;
	}

IL_0029:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_3), (uint8_t)((int32_t)158), (uint8_t)((int32_t)158), (uint8_t)((int32_t)158), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0042:
	{
		NullCheck(G_B3_1);
		G_B3_1->___MinRandomColor_4 = G_B3_0;
		// MaxRandomColor = isDarkMode ? new Color32(255, 255, 255, 255) : new Color32(90, 90, 90, 255);
		bool L_4 = V_0;
		G_B4_0 = __this;
		if (L_4)
		{
			G_B5_0 = __this;
			goto IL_005d;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_5), (uint8_t)((int32_t)90), (uint8_t)((int32_t)90), (uint8_t)((int32_t)90), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		G_B6_0 = L_5;
		G_B6_1 = G_B4_0;
		goto IL_0076;
	}

IL_005d:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_6), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
	}

IL_0076:
	{
		NullCheck(G_B6_1);
		G_B6_1->___MaxRandomColor_5 = G_B6_0;
		// ServerColor    = isDarkMode ? new Color32(255, 255, 158, 255) : new Color32(30, 90, 200, 255);
		bool L_7 = V_0;
		G_B7_0 = __this;
		if (L_7)
		{
			G_B8_0 = __this;
			goto IL_0094;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_8), (uint8_t)((int32_t)30), (uint8_t)((int32_t)90), (uint8_t)((int32_t)200), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		G_B9_0 = L_8;
		G_B9_1 = G_B7_0;
		goto IL_00ad;
	}

IL_0094:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_9), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)158), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
	}

IL_00ad:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(G_B9_0, NULL);
		NullCheck(G_B9_1);
		G_B9_1->___ServerColor_6 = L_10;
		// UseColorTags = true;
		__this->___UseColorTags_2 = (bool)1;
		// UseGlobalPrefix = true;
		__this->___UseGlobalPrefix_1 = (bool)1;
		// GlobalPrefixColor = Color32ToRGBString(isDarkMode ? new Color32(115, 172, 229, 255) : new Color32(20, 64, 120, 255));
		bool L_11 = V_0;
		G_B10_0 = __this;
		if (L_11)
		{
			G_B11_0 = __this;
			goto IL_00db;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), (uint8_t)((int32_t)20), (uint8_t)((int32_t)64), (uint8_t)((int32_t)120), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		G_B12_0 = L_12;
		G_B12_1 = G_B10_0;
		goto IL_00f1;
	}

IL_00db:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13;
		memset((&L_13), 0, sizeof(L_13));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_13), (uint8_t)((int32_t)115), (uint8_t)((int32_t)172), (uint8_t)((int32_t)229), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		G_B12_0 = L_13;
		G_B12_1 = G_B11_0;
	}

IL_00f1:
	{
		String_t* L_14;
		L_14 = FusionUnityLogger_Color32ToRGBString_m2B8F683E20DA62F1C35E55FDB831B256E823F23D(G_B12_0, NULL);
		NullCheck(G_B12_1);
		G_B12_1->___GlobalPrefixColor_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&G_B12_1->___GlobalPrefixColor_3), (void*)L_14);
		// GetColor = (obj) => {
		//   if (obj is NetworkRunner runner) {
		//     // flag server/host runners as special with seed of -1
		//     var seed = runner.GetHashCodeForLogger();
		//     return GetRandomColor(seed);
		//   }
		//   return default;
		// };
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_15 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)il2cpp_codegen_object_new(Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821(L_15, __this, (intptr_t)((void*)FusionUnityLogger_U3C_ctorU3Eb__12_0_mF2706CCE9E8E1F5D73E5AE62E4A6152D28D2D7E1_RuntimeMethod_var), NULL);
		FusionUnityLogger_set_GetColor_m91F84BF1AEB7B3FB6A8B0E88DC68F2A261A9E58A_inline(__this, L_15, NULL);
		// }
		return;
	}
}
// System.Int32 Fusion.FusionUnityLogger::GetRandomColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FusionUnityLogger_GetRandomColor_m23D8E545D94FFA41142600B60C309D90770F5C9E (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, int32_t ___0_seed, const RuntimeMethod* method) 
{
	{
		// int GetRandomColor(int seed) => GetRandomColor(seed, MinRandomColor, MaxRandomColor, ServerColor);
		int32_t L_0 = ___0_seed;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = __this->___MinRandomColor_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = __this->___MaxRandomColor_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___ServerColor_6;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4;
		L_4 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_3, NULL);
		int32_t L_5;
		L_5 = FusionUnityLogger_GetRandomColor_m94CAFE5848B0E399DB4A87B965216F89CF8DE81B(L_0, L_1, L_2, L_4, NULL);
		return L_5;
	}
}
// System.Int32 Fusion.FusionUnityLogger::GetRandomColor(System.Int32,UnityEngine.Color32,UnityEngine.Color32,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FusionUnityLogger_GetRandomColor_m94CAFE5848B0E399DB4A87B965216F89CF8DE81B (int32_t ___0_seed, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_min, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___2_max, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___3_svr, const RuntimeMethod* method) 
{
	NetworkRNG_t64B73CD206460A54C63878CFB53238AD54ECA0B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// var random = new NetworkRNG(seed);
		int32_t L_0 = ___0_seed;
		NetworkRNG__ctor_m31399DC91D6F37205836C731BBE5A6F6E0C90541((&V_0), L_0, NULL);
		// if (seed == -1) {
		int32_t L_1 = ___0_seed;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0023;
		}
	}
	{
		// r = svr.r;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___3_svr;
		uint8_t L_3 = L_2.___r_1;
		V_1 = L_3;
		// g = svr.g;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___3_svr;
		uint8_t L_5 = L_4.___g_2;
		V_2 = L_5;
		// b = svr.b;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___3_svr;
		uint8_t L_7 = L_6.___b_3;
		V_3 = L_7;
		goto IL_005f;
	}

IL_0023:
	{
		// r = random.RangeInclusive(min.r, max.r);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8 = ___1_min;
		uint8_t L_9 = L_8.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10 = ___2_max;
		uint8_t L_11 = L_10.___r_1;
		int32_t L_12;
		L_12 = NetworkRNG_RangeInclusive_mB454FBE1783D7A9205BF3DA96CF7B20F94B3BD7C((&V_0), L_9, L_11, NULL);
		V_1 = L_12;
		// g = random.RangeInclusive(min.g, max.g);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = ___1_min;
		uint8_t L_14 = L_13.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_15 = ___2_max;
		uint8_t L_16 = L_15.___g_2;
		int32_t L_17;
		L_17 = NetworkRNG_RangeInclusive_mB454FBE1783D7A9205BF3DA96CF7B20F94B3BD7C((&V_0), L_14, L_16, NULL);
		V_2 = L_17;
		// b = random.RangeInclusive(min.b, max.b);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_18 = ___1_min;
		uint8_t L_19 = L_18.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_20 = ___2_max;
		uint8_t L_21 = L_20.___b_3;
		int32_t L_22;
		L_22 = NetworkRNG_RangeInclusive_mB454FBE1783D7A9205BF3DA96CF7B20F94B3BD7C((&V_0), L_19, L_21, NULL);
		V_3 = L_22;
	}

IL_005f:
	{
		// r = Mathf.Clamp(r, 0, 255);
		int32_t L_23 = V_1;
		int32_t L_24;
		L_24 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_23, 0, ((int32_t)255), NULL);
		V_1 = L_24;
		// g = Mathf.Clamp(g, 0, 255);
		int32_t L_25 = V_2;
		int32_t L_26;
		L_26 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_25, 0, ((int32_t)255), NULL);
		V_2 = L_26;
		// b = Mathf.Clamp(b, 0, 255);
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_27, 0, ((int32_t)255), NULL);
		V_3 = L_28;
		// int rgb = (r << 16) | (g << 8) | b;
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		int32_t L_31 = V_3;
		// return rgb;
		return ((int32_t)(((int32_t)(((int32_t)(L_29<<((int32_t)16)))|((int32_t)(L_30<<8))))|L_31));
	}
}
// System.Int32 Fusion.FusionUnityLogger::Color32ToRGB24(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FusionUnityLogger_Color32ToRGB24_m9246A5C5346D725FF475588ECB6A0B49C6E8CC87 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) 
{
	{
		// return (c.r << 16) | (c.g << 8) | c.b;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_c;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___0_c;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___0_c;
		uint8_t L_5 = L_4.___b_3;
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_1<<((int32_t)16)))|((int32_t)((int32_t)L_3<<8))))|(int32_t)L_5));
	}
}
// System.String Fusion.FusionUnityLogger::Color32ToRGBString(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FusionUnityLogger_Color32ToRGBString_m2B8F683E20DA62F1C35E55FDB831B256E823F23D (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2CACCA027530802511895F2C4C873F9DC8ED360);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("#{0:X6}", Color32ToRGB24(c));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_c;
		int32_t L_1;
		L_1 = FusionUnityLogger_Color32ToRGB24_m9246A5C5346D725FF475588ECB6A0B49C6E8CC87(L_0, NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE2CACCA027530802511895F2C4C873F9DC8ED360, L_3, NULL);
		return L_4;
	}
}
// System.Void Fusion.FusionUnityLogger::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionUnityLogger_Initialize_m5DDDBA45EAF98A0390F27110EBD088C5D44CCA41 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA9E9EB0883B29463D646F793311FA3F8F9B1C62B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* V_0 = NULL;
	{
		// if (Fusion.Log.Initialized) {
		il2cpp_codegen_runtime_class_init_inline(Log_tA9E9EB0883B29463D646F793311FA3F8F9B1C62B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Log_get_Initialized_mF73547D760E187C6420E009160AA15EC698929E3(NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// var logger = new FusionUnityLogger();
		FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* L_1 = (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52*)il2cpp_codegen_object_new(FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FusionUnityLogger__ctor_m0287DD77CE2EF2B6BA6C1E8B0AA63BCC70049904(L_1, NULL);
		V_0 = L_1;
		// if (logger != null) {
		FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// Fusion.Log.Init(logger);
		FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Log_tA9E9EB0883B29463D646F793311FA3F8F9B1C62B_il2cpp_TypeInfo_var);
		Log_Init_m4F21A9DC1FA5575147E2AE371734E4C46B1695B1(L_3, 3, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Int32 Fusion.FusionUnityLogger::<.ctor>b__12_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FusionUnityLogger_U3C_ctorU3Eb__12_0_mF2706CCE9E8E1F5D73E5AE62E4A6152D28D2D7E1 (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (obj is NetworkRunner runner) {
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A*)IsInstSealed((RuntimeObject*)L_0, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var));
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// var seed = runner.GetHashCodeForLogger();
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = NetworkRunner_GetHashCodeForLogger_m60EC7F3AE38B458330494232F509794E8F092D34(L_2, NULL);
		V_1 = L_3;
		// return GetRandomColor(seed);
		int32_t L_4 = V_1;
		int32_t L_5;
		L_5 = FusionUnityLogger_GetRandomColor_m23D8E545D94FFA41142600B60C309D90770F5C9E(__this, L_4, NULL);
		return L_5;
	}

IL_0019:
	{
		// return default;
		return 0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Fusion.NetworkRunnerExtensions::SetActiveScene(Fusion.NetworkRunner,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRunnerExtensions_SetActiveScene_mDF83E2E6D46CB59BFA4E5F97DE1D314FEC2483DC (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, String_t* ___1_sceneNameOrPath, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (TryGetSceneBuildIndex(sceneNameOrPath, out var buildIndex)) {
		String_t* L_0 = ___1_sceneNameOrPath;
		bool L_1;
		L_1 = NetworkRunnerExtensions_TryGetSceneBuildIndex_m1067E520A98247D9329FE820B2E06955BD8325FB(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// runner.SetActiveScene(buildIndex);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_2 = ___0_runner;
		int32_t L_3 = V_0;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_4;
		L_4 = SceneRef_op_Implicit_m7BBCE0260571F15841BC65DFAC1DE0F6DE6D8D29(L_3, NULL);
		NullCheck(L_2);
		NetworkRunner_SetActiveScene_m53E0CCA965B5C83B969AE289EE946E82F214877F(L_2, L_4, NULL);
		// return true;
		return (bool)1;
	}

IL_0018:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Fusion.NetworkRunnerExtensions::TryGetSceneBuildIndex(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRunnerExtensions_TryGetSceneBuildIndex_m1067E520A98247D9329FE820B2E06955BD8325FB (String_t* ___0_nameOrPath, int32_t* ___1_buildIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (nameOrPath.IndexOf('/') >= 0) {
		String_t* L_0 = ___0_nameOrPath;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_0, ((int32_t)47), NULL);
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		// buildIndex = SceneUtility.GetBuildIndexByScenePath(nameOrPath);
		int32_t* L_2 = ___1_buildIndex;
		String_t* L_3 = ___0_nameOrPath;
		int32_t L_4;
		L_4 = SceneUtility_GetBuildIndexByScenePath_m47E6FAE26DD0F1A26BAAD8A53F01AEC973FB8466(L_3, NULL);
		*((int32_t*)L_2) = (int32_t)L_4;
		// if (buildIndex < 0) {
		int32_t* L_5 = ___1_buildIndex;
		int32_t L_6 = *((int32_t*)L_5);
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// buildIndex = -1;
		int32_t* L_7 = ___1_buildIndex;
		*((int32_t*)L_7) = (int32_t)(-1);
		// return false;
		return (bool)0;
	}

IL_001d:
	{
		// return true;
		return (bool)1;
	}

IL_001f:
	{
		// for (int i = 0; i < SceneManager.sceneCountInBuildSettings; ++i) {
		V_0 = 0;
		goto IL_0053;
	}

IL_0023:
	{
		// var scenePath = SceneUtility.GetScenePathByBuildIndex(i);
		int32_t L_8 = V_0;
		String_t* L_9;
		L_9 = SceneUtility_GetScenePathByBuildIndex_mB0848A585AFBB0C15CB344C43BD7BF79B1FEE860(L_8, NULL);
		V_1 = L_9;
		// GetFileNameWithoutExtensionPosition(scenePath, out var nameIndex, out var nameLength);
		String_t* L_10 = V_1;
		NetworkRunnerExtensions_GetFileNameWithoutExtensionPosition_m68FCDA8E8B704CCB296A2DF9E4C7350B137F3873(L_10, (&V_2), (&V_3), NULL);
		// if (nameLength == nameOrPath.Length && string.Compare(scenePath, nameIndex, nameOrPath, 0, nameLength, true) == 0) {
		int32_t L_11 = V_3;
		String_t* L_12 = ___0_nameOrPath;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_14 = V_1;
		int32_t L_15 = V_2;
		String_t* L_16 = ___0_nameOrPath;
		int32_t L_17 = V_3;
		int32_t L_18;
		L_18 = String_Compare_mA704D45BCEE79B6C76F2B1ABF95DF0161055867D(L_14, L_15, L_16, 0, L_17, (bool)1, NULL);
		if (L_18)
		{
			goto IL_004f;
		}
	}
	{
		// buildIndex = i;
		int32_t* L_19 = ___1_buildIndex;
		int32_t L_20 = V_0;
		*((int32_t*)L_19) = (int32_t)L_20;
		// return true;
		return (bool)1;
	}

IL_004f:
	{
		// for (int i = 0; i < SceneManager.sceneCountInBuildSettings; ++i) {
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0053:
	{
		// for (int i = 0; i < SceneManager.sceneCountInBuildSettings; ++i) {
		int32_t L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = SceneManager_get_sceneCountInBuildSettings_m414CDE36617596AC75C8E1A03DA65752A09A8944(NULL);
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0023;
		}
	}
	{
		// buildIndex = -1;
		int32_t* L_24 = ___1_buildIndex;
		*((int32_t*)L_24) = (int32_t)(-1);
		// return false;
		return (bool)0;
	}
}
// System.Void Fusion.NetworkRunnerExtensions::GetFileNameWithoutExtensionPosition(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRunnerExtensions_GetFileNameWithoutExtensionPosition_m68FCDA8E8B704CCB296A2DF9E4C7350B137F3873 (String_t* ___0_nameOrPath, int32_t* ___1_index, int32_t* ___2_length, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var lastSlash = nameOrPath.LastIndexOf('/');
		String_t* L_0 = ___0_nameOrPath;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_0, ((int32_t)47), NULL);
		V_0 = L_1;
		// if (lastSlash >= 0) {
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		// index = lastSlash + 1;
		int32_t* L_3 = ___1_index;
		int32_t L_4 = V_0;
		*((int32_t*)L_3) = (int32_t)((int32_t)il2cpp_codegen_add(L_4, 1));
		goto IL_0017;
	}

IL_0014:
	{
		// index = 0;
		int32_t* L_5 = ___1_index;
		*((int32_t*)L_5) = (int32_t)0;
	}

IL_0017:
	{
		// var lastDot = nameOrPath.LastIndexOf('.');
		String_t* L_6 = ___0_nameOrPath;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_6, ((int32_t)46), NULL);
		V_1 = L_7;
		// if (lastDot > index) {
		int32_t L_8 = V_1;
		int32_t* L_9 = ___1_index;
		int32_t L_10 = *((int32_t*)L_9);
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_002c;
		}
	}
	{
		// length = lastDot - index;
		int32_t* L_11 = ___2_length;
		int32_t L_12 = V_1;
		int32_t* L_13 = ___1_index;
		int32_t L_14 = *((int32_t*)L_13);
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_12, L_14));
		return;
	}

IL_002c:
	{
		// length = nameOrPath.Length - index;
		int32_t* L_15 = ___2_length;
		String_t* L_16 = ___0_nameOrPath;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		int32_t* L_18 = ___1_index;
		int32_t L_19 = *((int32_t*)L_18);
		*((int32_t*)L_15) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_19));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Fusion.NetworkRunner Fusion.NetworkSceneManagerBase::get_Runner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, const RuntimeMethod* method) 
{
	{
		// public NetworkRunner Runner { get; private set; }
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = __this->___U3CRunnerU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::set_Runner(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_set_Runner_mF623A2AFBBBC35E86821F577FDEFF7F58336EE31 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public NetworkRunner Runner { get; private set; }
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = ___0_value;
		__this->___U3CRunnerU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRunnerU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_OnEnable_mF5A5082B160A730A28C6AD84AB164B84C255313B (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_OnDisable_m1C68601F7AD1C9362F9C2135B905E8143963C0B1 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_LateUpdate_mACA7A29E6AD55511629D45C501B7191D56480A90 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_TryGetTarget_m1B98B24F2C23C226A6A634FF3166162524EF61EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* V_0 = NULL;
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!Runner) {
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0;
		L_0 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (Runner.CurrentScene != _currentScene) {
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_2;
		L_2 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(__this, NULL);
		NullCheck(L_2);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_3;
		L_3 = NetworkRunner_get_CurrentScene_m757A103B3F43FD76BA0DC38132749F60AA90493D(L_2, NULL);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_4 = __this->____currentScene_8;
		bool L_5;
		L_5 = SceneRef_op_Inequality_m16EAE70F094097F5472AFF110CDFEB22CEF45037(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// _currentSceneOutdated = true;
		__this->____currentSceneOutdated_7 = (bool)1;
	}

IL_002d:
	{
		// if (!_currentSceneOutdated || _runningCoroutine != null) {
		bool L_6 = __this->____currentSceneOutdated_7;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_7 = __this->____runningCoroutine_6;
		if (!L_7)
		{
			goto IL_003e;
		}
	}

IL_003d:
	{
		// return;
		return;
	}

IL_003e:
	{
		// if (s_currentlyLoading.TryGetTarget(out var target)) {
		il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* L_8 = ((NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_StaticFields*)il2cpp_codegen_static_fields_for(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var))->___s_currentlyLoading_4;
		NullCheck(L_8);
		bool L_9;
		L_9 = WeakReference_1_TryGetTarget_m1B98B24F2C23C226A6A634FF3166162524EF61EA(L_8, (&V_0), WeakReference_1_TryGetTarget_m1B98B24F2C23C226A6A634FF3166162524EF61EA_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// if (!target) {
		NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		// s_currentlyLoading.SetTarget(null);
		il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* L_12 = ((NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_StaticFields*)il2cpp_codegen_static_fields_for(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var))->___s_currentlyLoading_4;
		NullCheck(L_12);
		WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220(L_12, (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39*)NULL, WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220_RuntimeMethod_var);
		goto IL_0062;
	}

IL_0061:
	{
		// return;
		return;
	}

IL_0062:
	{
		// var prevScene = _currentScene;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_13 = __this->____currentScene_8;
		V_1 = L_13;
		// _currentScene = Runner.CurrentScene;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_14;
		L_14 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(__this, NULL);
		NullCheck(L_14);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_15;
		L_15 = NetworkRunner_get_CurrentScene_m757A103B3F43FD76BA0DC38132749F60AA90493D(L_14, NULL);
		__this->____currentScene_8 = L_15;
		// _currentSceneOutdated = false;
		__this->____currentSceneOutdated_7 = (bool)0;
		// _runningCoroutine = SwitchSceneWrapper(prevScene, _currentScene);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_16 = V_1;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_17 = __this->____currentScene_8;
		RuntimeObject* L_18;
		L_18 = NetworkSceneManagerBase_SwitchSceneWrapper_m4E190732E2E2EC8F8306F685483CDF7E07A503E2(__this, L_16, L_17, NULL);
		__this->____runningCoroutine_6 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runningCoroutine_6), (void*)L_18);
		// StartCoroutine(_runningCoroutine);
		RuntimeObject* L_19 = __this->____runningCoroutine_6;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_20;
		L_20 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_19, NULL);
		// }
		return;
	}
}
// System.Boolean Fusion.NetworkSceneManagerBase::IsScenePathOrNameEqual(UnityEngine.SceneManagement.Scene,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSceneManagerBase_IsScenePathOrNameEqual_mC2CE51F43406C6FAAA58B1986B08CC52DC5604C2 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, String_t* ___1_nameOrPath, const RuntimeMethod* method) 
{
	{
		// return scene.path == nameOrPath || scene.name == nameOrPath;
		String_t* L_0;
		L_0 = Scene_get_path_mACD61B36E1F010A9FCA2C62637E0CB24B16729E4((&___0_scene), NULL);
		String_t* L_1 = ___1_nameOrPath;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3;
		L_3 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&___0_scene), NULL);
		String_t* L_4 = ___1_nameOrPath;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		return L_5;
	}

IL_001d:
	{
		return (bool)1;
	}
}
// System.Boolean Fusion.NetworkSceneManagerBase::TryGetScenePathFromBuildSettings(Fusion.SceneRef,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSceneManagerBase_TryGetScenePathFromBuildSettings_m812F9F046C78EC35701702B7AB07FD6A77F36704 (SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___0_sceneRef, String_t** ___1_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sceneRef.IsValid) {
		bool L_0;
		L_0 = SceneRef_get_IsValid_mFC88184BDE683A01DA6CF60F23EC17983C247379((&___0_sceneRef), NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// path = SceneUtility.GetScenePathByBuildIndex(sceneRef);
		String_t** L_1 = ___1_path;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_2 = ___0_sceneRef;
		int32_t L_3;
		L_3 = SceneRef_op_Implicit_m92C8C2F9311397000AF1D723C8A56A45361DA096(L_2, NULL);
		String_t* L_4;
		L_4 = SceneUtility_GetScenePathByBuildIndex_mB0848A585AFBB0C15CB344C43BD7BF79B1FEE860(L_3, NULL);
		*((RuntimeObject**)L_1) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)L_4);
		// if (!string.IsNullOrEmpty(path)) {
		String_t** L_5 = ___1_path;
		String_t* L_6 = *((String_t**)L_5);
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0021:
	{
		// path = string.Empty;
		String_t** L_8 = ___1_path;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_9);
		// return false;
		return (bool)0;
	}
}
// System.Boolean Fusion.NetworkSceneManagerBase::IsScenePathOrNameEqual(UnityEngine.SceneManagement.Scene,Fusion.SceneRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSceneManagerBase_IsScenePathOrNameEqual_mC14E4BA82C144610610A51D6C5B2D90AA5499E51 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___1_sceneRef, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (TryGetScenePathFromBuildSettings(sceneRef, out var path)) {
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_0 = ___1_sceneRef;
		il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = NetworkSceneManagerBase_TryGetScenePathFromBuildSettings_m812F9F046C78EC35701702B7AB07FD6A77F36704(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return IsScenePathOrNameEqual(scene, path);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2 = ___0_scene;
		String_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = NetworkSceneManagerBase_IsScenePathOrNameEqual_mC2CE51F43406C6FAAA58B1986B08CC52DC5604C2(L_2, L_3, NULL);
		return L_4;
	}

IL_0012:
	{
		// return false;
		return (bool)0;
	}
}
// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkSceneManagerBase::FindNetworkObjects(UnityEngine.SceneManagement.Scene,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* NetworkSceneManagerBase_FindNetworkObjects_mD5801F1D58BC4EB5E25A10D7D83B4A7CBED1CFBF (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, bool ___1_disable, bool ___2_addVisibilityNodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m48050D75FCDDB54380B87CE4466A5B13280776FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3CC53690EDAA1DDB18B8E49248774B270E7FBAF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mED8C4FC16A9F1BE2915FAE2E7CD05A3C59180C56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisNetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C_m30DA9706B6091A01234C649C9FC0CFE9098E435A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m006122E663E12324385572178836CCAE30619163_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m130EA2C4542DE33976BD5F3E71CFD09028CA12AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m849F529B76EAC19A125D08EC5D7A7C16A4A5BE2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA6EF54D04CDB9BB4B0F28BFA8A21EC80A3DC76FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RunnerVisibilityNode_t73BB30B54A6EB4715329FD4EC1394459F3EDCB01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* V_0 = NULL;
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* V_1 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06 V_5;
	memset((&V_5), 0, sizeof(V_5));
	NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* V_6 = NULL;
	{
		// var networkObjects = new List<NetworkObject>();
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_0 = (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82*)il2cpp_codegen_object_new(List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA6EF54D04CDB9BB4B0F28BFA8A21EC80A3DC76FA(L_0, List_1__ctor_mA6EF54D04CDB9BB4B0F28BFA8A21EC80A3DC76FA_RuntimeMethod_var);
		V_0 = L_0;
		// var gameObjects = scene.GetRootGameObjects();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B((&___0_scene), NULL);
		// var result = new List<NetworkObject>();
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_2 = (List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82*)il2cpp_codegen_object_new(List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mA6EF54D04CDB9BB4B0F28BFA8A21EC80A3DC76FA(L_2, List_1__ctor_mA6EF54D04CDB9BB4B0F28BFA8A21EC80A3DC76FA_RuntimeMethod_var);
		V_1 = L_2;
		// foreach (var go in gameObjects) {
		V_2 = L_1;
		V_3 = 0;
		goto IL_00a1;
	}

IL_001b:
	{
		// foreach (var go in gameObjects) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = L_6;
		// networkObjects.Clear();
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_7 = V_0;
		NullCheck(L_7);
		List_1_Clear_m130EA2C4542DE33976BD5F3E71CFD09028CA12AA_inline(L_7, List_1_Clear_m130EA2C4542DE33976BD5F3E71CFD09028CA12AA_RuntimeMethod_var);
		// go.GetComponentsInChildren(true, networkObjects);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_4;
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_9 = V_0;
		NullCheck(L_8);
		GameObject_GetComponentsInChildren_TisNetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C_m30DA9706B6091A01234C649C9FC0CFE9098E435A(L_8, (bool)1, L_9, GameObject_GetComponentsInChildren_TisNetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C_m30DA9706B6091A01234C649C9FC0CFE9098E435A_RuntimeMethod_var);
		// foreach (var sceneObject in networkObjects) {
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_10 = V_0;
		NullCheck(L_10);
		Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06 L_11;
		L_11 = List_1_GetEnumerator_m849F529B76EAC19A125D08EC5D7A7C16A4A5BE2B(L_10, List_1_GetEnumerator_m849F529B76EAC19A125D08EC5D7A7C16A4A5BE2B_RuntimeMethod_var);
		V_5 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m48050D75FCDDB54380B87CE4466A5B13280776FC((&V_5), Enumerator_Dispose_m48050D75FCDDB54380B87CE4466A5B13280776FC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0074_1;
			}

IL_0039_1:
			{
				// foreach (var sceneObject in networkObjects) {
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_12;
				L_12 = Enumerator_get_Current_mED8C4FC16A9F1BE2915FAE2E7CD05A3C59180C56_inline((&V_5), Enumerator_get_Current_mED8C4FC16A9F1BE2915FAE2E7CD05A3C59180C56_RuntimeMethod_var);
				V_6 = L_12;
				// if (sceneObject.Flags.IsSceneObject()) {
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_13 = V_6;
				NullCheck(L_13);
				int32_t L_14 = L_13->___Flags_17;
				bool L_15;
				L_15 = NetworkObjectFlagsExtensions_IsSceneObject_m6A4A526A6B0F8462ACC11AF9115DF2249C132D4E_inline(L_14, NULL);
				if (!L_15)
				{
					goto IL_0074_1;
				}
			}
			{
				// if (sceneObject.gameObject.activeInHierarchy || sceneObject.Flags.IsActivatedByUser()) {
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_16 = V_6;
				NullCheck(L_16);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
				NullCheck(L_17);
				bool L_18;
				L_18 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_17, NULL);
				if (L_18)
				{
					goto IL_006c_1;
				}
			}
			{
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_19 = V_6;
				NullCheck(L_19);
				int32_t L_20 = L_19->___Flags_17;
				bool L_21;
				L_21 = NetworkObjectFlagsExtensions_IsActivatedByUser_mFF4E12721461CDD53769DDD1D47ACC1C5230A0DB_inline(L_20, NULL);
				if (!L_21)
				{
					goto IL_0074_1;
				}
			}

IL_006c_1:
			{
				// result.Add(sceneObject);
				List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_22 = V_1;
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_23 = V_6;
				NullCheck(L_22);
				List_1_Add_m006122E663E12324385572178836CCAE30619163_inline(L_22, L_23, List_1_Add_m006122E663E12324385572178836CCAE30619163_RuntimeMethod_var);
			}

IL_0074_1:
			{
				// foreach (var sceneObject in networkObjects) {
				bool L_24;
				L_24 = Enumerator_MoveNext_m3CC53690EDAA1DDB18B8E49248774B270E7FBAF3((&V_5), Enumerator_MoveNext_m3CC53690EDAA1DDB18B8E49248774B270E7FBAF3_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0039_1;
				}
			}
			{
				goto IL_008d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008d:
	{
		// if (addVisibilityNodes) {
		bool L_25 = ___2_addVisibilityNodes;
		if (!L_25)
		{
			goto IL_009d;
		}
	}
	{
		// RunnerVisibilityNode.AddVisibilityNodes(go, Runner);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_4;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_27;
		L_27 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(RunnerVisibilityNode_t73BB30B54A6EB4715329FD4EC1394459F3EDCB01_il2cpp_TypeInfo_var);
		RunnerVisibilityNode_AddVisibilityNodes_m84EB2DC108810D1573BCC9BB9082521EBDFB5BA0(L_26, L_27, NULL);
	}

IL_009d:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00a1:
	{
		// foreach (var go in gameObjects) {
		int32_t L_29 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_30 = V_2;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// if (disable) {
		bool L_31 = ___1_disable;
		if (!L_31)
		{
			goto IL_00e2;
		}
	}
	{
		// foreach (var sceneObject in result) {
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_32 = V_1;
		NullCheck(L_32);
		Enumerator_t758CC4098091AA32C4B46C6248417096C7195E06 L_33;
		L_33 = List_1_GetEnumerator_m849F529B76EAC19A125D08EC5D7A7C16A4A5BE2B(L_32, List_1_GetEnumerator_m849F529B76EAC19A125D08EC5D7A7C16A4A5BE2B_RuntimeMethod_var);
		V_5 = L_33;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m48050D75FCDDB54380B87CE4466A5B13280776FC((&V_5), Enumerator_Dispose_m48050D75FCDDB54380B87CE4466A5B13280776FC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c9_1;
			}

IL_00b7_1:
			{
				// foreach (var sceneObject in result) {
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_34;
				L_34 = Enumerator_get_Current_mED8C4FC16A9F1BE2915FAE2E7CD05A3C59180C56_inline((&V_5), Enumerator_get_Current_mED8C4FC16A9F1BE2915FAE2E7CD05A3C59180C56_RuntimeMethod_var);
				// sceneObject.gameObject.SetActive(false);
				NullCheck(L_34);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
				L_35 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_34, NULL);
				NullCheck(L_35);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
			}

IL_00c9_1:
			{
				// foreach (var sceneObject in result) {
				bool L_36;
				L_36 = Enumerator_MoveNext_m3CC53690EDAA1DDB18B8E49248774B270E7FBAF3((&V_5), Enumerator_MoveNext_m3CC53690EDAA1DDB18B8E49248774B270E7FBAF3_RuntimeMethod_var);
				if (L_36)
				{
					goto IL_00b7_1;
				}
			}
			{
				goto IL_00e2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e2:
	{
		// return result;
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_37 = V_1;
		return L_37;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::Fusion.INetworkSceneManager.Initialize(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_Fusion_INetworkSceneManager_Initialize_m0C3B45BE8330566A2CB4A46BB6C6DD6B4C483BF8 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, const RuntimeMethod* method) 
{
	{
		// Initialize(runner);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = ___0_runner;
		VirtualActionInvoker1< NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* >::Invoke(10 /* System.Void Fusion.NetworkSceneManagerBase::Initialize(Fusion.NetworkRunner) */, __this, L_0);
		// }
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::Fusion.INetworkSceneManager.Shutdown(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_Fusion_INetworkSceneManager_Shutdown_mF0CB37991A5B687F93B6C5DE12AF86018BAAEDF2 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, const RuntimeMethod* method) 
{
	{
		// Shutdown(runner);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = ___0_runner;
		VirtualActionInvoker1< NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* >::Invoke(11 /* System.Void Fusion.NetworkSceneManagerBase::Shutdown(Fusion.NetworkRunner) */, __this, L_0);
		// }
		return;
	}
}
// System.Boolean Fusion.NetworkSceneManagerBase::Fusion.INetworkSceneManager.IsReady(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSceneManagerBase_Fusion_INetworkSceneManager_IsReady_m958E093B2E69B61B742A10944B40712C591E51ED (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, const RuntimeMethod* method) 
{
	{
		// if (_runningCoroutine != null) {
		RuntimeObject* L_0 = __this->____runningCoroutine_6;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (_currentSceneOutdated) {
		bool L_1 = __this->____currentSceneOutdated_7;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// if (runner.CurrentScene != _currentScene) {
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_2 = ___0_runner;
		NullCheck(L_2);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_3;
		L_3 = NetworkRunner_get_CurrentScene_m757A103B3F43FD76BA0DC38132749F60AA90493D(L_2, NULL);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_4 = __this->____currentScene_8;
		bool L_5;
		L_5 = SceneRef_op_Inequality_m16EAE70F094097F5472AFF110CDFEB22CEF45037(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0029:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::Initialize(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_Initialize_mE47BFABEE120215430FC0A45B325C121BF91BB9B (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, const RuntimeMethod* method) 
{
	{
		// Runner = runner;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = ___0_runner;
		NetworkSceneManagerBase_set_Runner_mF623A2AFBBBC35E86821F577FDEFF7F58336EE31_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::Shutdown(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_Shutdown_m96B474FE91EE21AEDCFBDA1E2544401F24FBCDF9 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCF3DB6F10D6C173EA5388EE2DA9ADB20758230A);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0047:
			{// begin finally (depth: 1)
				// Runner = null;
				NetworkSceneManagerBase_set_Runner_mF623A2AFBBBC35E86821F577FDEFF7F58336EE31_inline(__this, (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A*)NULL, NULL);
				// _runningCoroutine = null;
				__this->____runningCoroutine_6 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____runningCoroutine_6), (void*)(RuntimeObject*)NULL);
				// _currentScene = SceneRef.None;
				SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_0;
				L_0 = SceneRef_get_None_m84DA514080282265B21C2CCD0FC302388D37FEFB(NULL);
				__this->____currentScene_8 = L_0;
				// _currentSceneOutdated = false;
				__this->____currentSceneOutdated_7 = (bool)0;
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (_runningCoroutine != null) {
				RuntimeObject* L_1 = __this->____runningCoroutine_6;
				if (!L_1)
				{
					goto IL_0045_1;
				}
			}
			{
				// LogWarn($"There is an ongoing scene load ({_currentScene}), stopping and disposing coroutine.");
				SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_2 = __this->____currentScene_8;
				SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_3 = L_2;
				RuntimeObject* L_4 = Box(SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9_il2cpp_TypeInfo_var, &L_3);
				String_t* L_5;
				L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralBCF3DB6F10D6C173EA5388EE2DA9ADB20758230A, L_4, NULL);
				NetworkSceneManagerBase_LogWarn_mD5326B515097E0C302A0ADDB469FF4762B59C29C(__this, L_5, NULL);
				// StopCoroutine(_runningCoroutine);
				RuntimeObject* L_6 = __this->____runningCoroutine_6;
				MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_6, NULL);
				// (_runningCoroutine as IDisposable)?.Dispose();
				RuntimeObject* L_7 = __this->____runningCoroutine_6;
				RuntimeObject* L_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
				G_B2_0 = L_8;
				if (L_8)
				{
					G_B3_0 = L_8;
					goto IL_0040_1;
				}
			}
			{
				goto IL_0068;
			}

IL_0040_1:
			{
				NullCheck(G_B3_0);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, G_B3_0);
			}

IL_0045_1:
			{
				// } finally {
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::LogTrace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_LogTrace_m328DD14F4AEC1371B25920607A6FF57C54089EE7 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_LogError_m6636890C17C51DF975A4BFD17A0B3771A9912E56 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA9E9EB0883B29463D646F793311FA3F8F9B1C62B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CD71E3642012925B68B6B9FC2FA6F1735C9F608);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral961F54967701EA4335F9BFA367097CC26D03D587);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Log.Error($"[NetworkSceneManager] {(this != null ? this.name : "<destroyed>")}: {msg}");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(__this, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = _stringLiteral961F54967701EA4335F9BFA367097CC26D03D587;
		if (L_0)
		{
			G_B2_0 = _stringLiteral961F54967701EA4335F9BFA367097CC26D03D587;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral2CD71E3642012925B68B6B9FC2FA6F1735C9F608;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0015:
	{
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		String_t* L_2 = ___0_msg;
		String_t* L_3;
		L_3 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B3_1, G_B3_0, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Log_tA9E9EB0883B29463D646F793311FA3F8F9B1C62B_il2cpp_TypeInfo_var);
		Log_Error_mCD52D040258C4EDB1ED07014D98CFD38356D0076(L_3, NULL);
		// }
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::LogWarn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_LogWarn_mD5326B515097E0C302A0ADDB469FF4762B59C29C (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA9E9EB0883B29463D646F793311FA3F8F9B1C62B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CD71E3642012925B68B6B9FC2FA6F1735C9F608);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral961F54967701EA4335F9BFA367097CC26D03D587);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Log.Warn($"[NetworkSceneManager] {(this != null ? this.name : "<destroyed>")}: {msg}");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(__this, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = _stringLiteral961F54967701EA4335F9BFA367097CC26D03D587;
		if (L_0)
		{
			G_B2_0 = _stringLiteral961F54967701EA4335F9BFA367097CC26D03D587;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral2CD71E3642012925B68B6B9FC2FA6F1735C9F608;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0015:
	{
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		String_t* L_2 = ___0_msg;
		String_t* L_3;
		L_3 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B3_1, G_B3_0, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Log_tA9E9EB0883B29463D646F793311FA3F8F9B1C62B_il2cpp_TypeInfo_var);
		Log_Warn_m3CB267FD0639BAC92FD468CE3504A464603C18C7(L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Fusion.NetworkSceneManagerBase::SwitchSceneWrapper(Fusion.SceneRef,Fusion.SceneRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkSceneManagerBase_SwitchSceneWrapper_m4E190732E2E2EC8F8306F685483CDF7E07A503E2 (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___0_prevScene, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___1_newScene, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* L_0 = (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299*)il2cpp_codegen_object_new(U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSwitchSceneWrapperU3Ed__26__ctor_mE9F726884C411FE0A649AB8ADAD7E86B24934E4E(L_0, 0, NULL);
		U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* L_2 = L_1;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_3 = ___0_prevScene;
		NullCheck(L_2);
		L_2->___prevScene_3 = L_3;
		U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* L_4 = L_2;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_5 = ___1_newScene;
		NullCheck(L_4);
		L_4->___newScene_4 = L_5;
		return L_4;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase__ctor_m13487B9BF6F36D69D7C02D77BB7B66DA77CDAFBB (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShowHierarchyWindowOverlay = true;
		__this->___ShowHierarchyWindowOverlay_5 = (bool)1;
		Behaviour__ctor_m1CC74A6DA707BC75BDC3BF41D5BF5CA0809B0A8D(__this, NULL);
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerBase__cctor_mD28E1552D9D224A835C74082E365E86743F40BEF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1__ctor_m1039DCD4F251CC407C0D72021F7D04F936DC0E29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static WeakReference<NetworkSceneManagerBase> s_currentlyLoading = new WeakReference<NetworkSceneManagerBase>(null);
		WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* L_0 = (WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2*)il2cpp_codegen_object_new(WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WeakReference_1__ctor_m1039DCD4F251CC407C0D72021F7D04F936DC0E29(L_0, (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39*)NULL, WeakReference_1__ctor_m1039DCD4F251CC407C0D72021F7D04F936DC0E29_RuntimeMethod_var);
		((NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_StaticFields*)il2cpp_codegen_static_fields_for(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var))->___s_currentlyLoading_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_StaticFields*)il2cpp_codegen_static_fields_for(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var))->___s_currentlyLoading_4), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_Multicast(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___0_sceneObjects, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* currentDelegate = reinterpret_cast<FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sceneObjects, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenInst(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___0_sceneObjects, const RuntimeMethod* method)
{
	NullCheck(___0_sceneObjects);
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sceneObjects, method);
}
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenStatic(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___0_sceneObjects, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sceneObjects, method);
}
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenStaticInvoker(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___0_sceneObjects, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_sceneObjects);
}
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_ClosedStaticInvoker(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___0_sceneObjects, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sceneObjects);
}
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenVirtual(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___0_sceneObjects, const RuntimeMethod* method)
{
	NullCheck(___0_sceneObjects);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sceneObjects);
}
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenInterface(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___0_sceneObjects, const RuntimeMethod* method)
{
	NullCheck(___0_sceneObjects);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sceneObjects);
}
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenGenericVirtual(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___0_sceneObjects, const RuntimeMethod* method)
{
	NullCheck(___0_sceneObjects);
	GenericVirtualActionInvoker0::Invoke(method, ___0_sceneObjects);
}
void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenGenericInterface(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___0_sceneObjects, const RuntimeMethod* method)
{
	NullCheck(___0_sceneObjects);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_sceneObjects);
}
// System.Void Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedLoadingDelegate__ctor_m2AA5AAD37381CFEF578C392654121C8D166C7E2C (FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_Multicast;
}
// System.Void Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate::Invoke(System.Collections.Generic.IEnumerable`1<Fusion.NetworkObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648 (FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___0_sceneObjects, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sceneObjects, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate::BeginInvoke(System.Collections.Generic.IEnumerable`1<Fusion.NetworkObject>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FinishedLoadingDelegate_BeginInvoke_m0DDF8FF49E0F5672BE18E5D27ED9144890F4882C (FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___0_sceneObjects, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_sceneObjects;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedLoadingDelegate_EndInvoke_m00D9DA0972EA46269F0D944C16C5E818ABDF554F (FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_mE403649ECF52DD3E78FB63E2F7A7B5C48CC75B94 (U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase/<>c__DisplayClass26_0::<SwitchSceneWrapper>b__0(System.Collections.Generic.IEnumerable`1<Fusion.NetworkObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0_U3CSwitchSceneWrapperU3Eb__0_mFC80B5A645E2B16A5DD648379819DDE8E25807D2 (U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* __this, RuntimeObject* ___0_objects, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB7A02CC7C77717DCDC7980A1EE1194A75B9F673D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t32C2A0FF95CFEDA759D18DC81B46A6969069EBFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t7A22B3111FA17D87DB77BDD217435A6312A5541C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* V_1 = NULL;
	{
		// finishCalled = true;
		__this->___finishCalled_0 = (bool)1;
		// foreach (var obj in objects) {
		RuntimeObject* L_0 = ___0_objects;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Fusion.NetworkObject>::GetEnumerator() */, IEnumerable_1_t32C2A0FF95CFEDA759D18DC81B46A6969069EBFA_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0041;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0041:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_0010_1:
			{
				// foreach (var obj in objects) {
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_5;
				L_5 = InterfaceFuncInvoker0< NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Fusion.NetworkObject>::get_Current() */, IEnumerator_1_t7A22B3111FA17D87DB77BDD217435A6312A5541C_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				// sceneObjects.Add(obj.NetworkGuid, obj);
				Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4* L_6 = __this->___sceneObjects_1;
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_7 = V_1;
				NullCheck(L_7);
				NetworkObjectGuid_t99EAC957EE861D66626645313D35A1F49AF134B4 L_8 = L_7->___NetworkGuid_18;
				Guid_t L_9;
				L_9 = NetworkObjectGuid_op_Implicit_m2205A481EC492792B0C4E0619ACCEE2D1EFFCE96(L_8, NULL);
				NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_10 = V_1;
				NullCheck(L_6);
				Dictionary_2_Add_mB7A02CC7C77717DCDC7980A1EE1194A75B9F673D(L_6, L_9, L_10, Dictionary_2_Add_mB7A02CC7C77717DCDC7980A1EE1194A75B9F673D_RuntimeMethod_var);
			}

IL_002e_1:
			{
				// foreach (var obj in objects) {
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneWrapperU3Ed__26__ctor_mE9F726884C411FE0A649AB8ADAD7E86B24934E4E (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneWrapperU3Ed__26_System_IDisposable_Dispose_m4613C7560113A39655C6B27AA57CA2A43F6439A2 (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CSwitchSceneWrapperU3Ed__26_U3CU3Em__Finally1_m2C7E18C3627392881FF33AE525DC1B7ECC74DBA1(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSwitchSceneWrapperU3Ed__26_MoveNext_m7719B9A90DBC1BA137BE1AE394C2C50064BEDDA2 (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4B4120375E58E69EB8BC54ADB054EBBEFC933831_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mC860851CA34533BEA997FC852C9AD7768F6D2049_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass26_0_U3CSwitchSceneWrapperU3Eb__0_mFC80B5A645E2B16A5DD648379819DDE8E25807D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF597A5AFE3E6633B17F51DDC5D052C17158C067);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6A843E4AF194F7F4F0925DF3FA2D7C9DA359E37);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* V_2 = NULL;
	FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_016e:
			{// begin fault (depth: 1)
				U3CSwitchSceneWrapperU3Ed__26_System_IDisposable_Dispose_m4613C7560113A39655C6B27AA57CA2A43F6439A2(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001f_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_00ed_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0175;
			}

IL_001f_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* L_4 = (U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				U3CU3Ec__DisplayClass26_0__ctor_mE403649ECF52DD3E78FB63E2F7A7B5C48CC75B94(L_4, NULL);
				__this->___U3CU3E8__1_5 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)L_4);
				// bool finishCalled = false;
				U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* L_5 = __this->___U3CU3E8__1_5;
				NullCheck(L_5);
				L_5->___finishCalled_0 = (bool)0;
				// Dictionary<Guid, NetworkObject> sceneObjects = new Dictionary<Guid, NetworkObject>();
				U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* L_6 = __this->___U3CU3E8__1_5;
				Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4* L_7 = (Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4*)il2cpp_codegen_object_new(Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				Dictionary_2__ctor_m4B4120375E58E69EB8BC54ADB054EBBEFC933831(L_7, Dictionary_2__ctor_m4B4120375E58E69EB8BC54ADB054EBBEFC933831_RuntimeMethod_var);
				NullCheck(L_6);
				L_6->___sceneObjects_1 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&L_6->___sceneObjects_1), (void*)L_7);
				// Exception error = null;
				__this->___U3CerrorU3E5__2_6 = (Exception_t*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CerrorU3E5__2_6), (void*)(Exception_t*)NULL);
				// FinishedLoadingDelegate callback = (objects) => {
				//   finishCalled = true;
				//   foreach (var obj in objects) {
				//     sceneObjects.Add(obj.NetworkGuid, obj);
				//   }
				// };
				U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* L_8 = __this->___U3CU3E8__1_5;
				FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* L_9 = (FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80*)il2cpp_codegen_object_new(FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				FinishedLoadingDelegate__ctor_m2AA5AAD37381CFEF578C392654121C8D166C7E2C(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass26_0_U3CSwitchSceneWrapperU3Eb__0_mFC80B5A645E2B16A5DD648379819DDE8E25807D2_RuntimeMethod_var), NULL);
				V_3 = L_9;
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// s_currentlyLoading.SetTarget(this);
				il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
				WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* L_10 = ((NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_StaticFields*)il2cpp_codegen_static_fields_for(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var))->___s_currentlyLoading_4;
				NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_11 = V_2;
				NullCheck(L_10);
				WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220(L_10, L_11, WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220_RuntimeMethod_var);
				// Runner.InvokeSceneLoadStart();
				NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_12 = V_2;
				NullCheck(L_12);
				NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_13;
				L_13 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_12, NULL);
				NullCheck(L_13);
				NetworkRunner_InvokeSceneLoadStart_mC88B5250E6415EAC954B1FC96D2ACE60E921AA70(L_13, NULL);
				// var coro = SwitchScene(prevScene, newScene, callback);
				NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_14 = V_2;
				SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_15 = __this->___prevScene_3;
				SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_16 = __this->___newScene_4;
				FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* L_17 = V_3;
				NullCheck(L_14);
				RuntimeObject* L_18;
				L_18 = VirtualFuncInvoker3< RuntimeObject*, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* >::Invoke(12 /* System.Collections.IEnumerator Fusion.NetworkSceneManagerBase::SwitchScene(Fusion.SceneRef,Fusion.SceneRef,Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate) */, L_14, L_15, L_16, L_17);
				__this->___U3CcoroU3E5__3_7 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcoroU3E5__3_7), (void*)L_18);
				// for (bool next = true; next;) {
				__this->___U3CnextU3E5__4_8 = (bool)1;
				goto IL_00f5_1;
			}

IL_00a6_1:
			{
			}
			try
			{// begin try (depth: 2)
				// next = coro.MoveNext();
				RuntimeObject* L_19 = __this->___U3CcoroU3E5__3_7;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				__this->___U3CnextU3E5__4_8 = L_20;
				// } catch (Exception ex) {
				goto IL_00c6_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00ba_1;
				}
				throw e;
			}

CATCH_00ba_1:
			{// begin catch(System.Exception)
				// } catch (Exception ex) {
				V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// error = ex;
				Exception_t* L_21 = V_4;
				__this->___U3CerrorU3E5__2_6 = L_21;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CerrorU3E5__2_6), (void*)L_21);
				// break;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00fd_1;
			}// end catch (depth: 2)

IL_00c6_1:
			{
				// if (next) {
				bool L_22 = __this->___U3CnextU3E5__4_8;
				if (!L_22)
				{
					goto IL_00f5_1;
				}
			}
			{
				// yield return coro.Current;
				RuntimeObject* L_23 = __this->___U3CcoroU3E5__3_7;
				NullCheck(L_23);
				RuntimeObject* L_24;
				L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				__this->___U3CU3E2__current_1 = L_24;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_24);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0175;
			}

IL_00ed_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_00f5_1:
			{
				// for (bool next = true; next;) {
				bool L_25 = __this->___U3CnextU3E5__4_8;
				if (L_25)
				{
					goto IL_00a6_1;
				}
			}

IL_00fd_1:
			{
				// } finally {
				__this->___U3CcoroU3E5__3_7 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcoroU3E5__3_7), (void*)(RuntimeObject*)NULL);
				U3CSwitchSceneWrapperU3Ed__26_U3CU3Em__Finally1_m2C7E18C3627392881FF33AE525DC1B7ECC74DBA1(__this, NULL);
				// if (error != null) {
				Exception_t* L_26 = __this->___U3CerrorU3E5__2_6;
				if (!L_26)
				{
					goto IL_012a_1;
				}
			}
			{
				// LogError($"Failed to switch scenes: {error}");
				NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_27 = V_2;
				Exception_t* L_28 = __this->___U3CerrorU3E5__2_6;
				String_t* L_29;
				L_29 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralB6A843E4AF194F7F4F0925DF3FA2D7C9DA359E37, L_28, NULL);
				NullCheck(L_27);
				NetworkSceneManagerBase_LogError_m6636890C17C51DF975A4BFD17A0B3771A9912E56(L_27, L_29, NULL);
				goto IL_016a_1;
			}

IL_012a_1:
			{
				// } else if (!finishCalled) {
				U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* L_30 = __this->___U3CU3E8__1_5;
				NullCheck(L_30);
				bool L_31 = L_30->___finishCalled_0;
				if (L_31)
				{
					goto IL_0144_1;
				}
			}
			{
				// LogError($"Failed to switch scenes: SwitchScene implementation did not invoke finished delegate");
				NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_32 = V_2;
				NullCheck(L_32);
				NetworkSceneManagerBase_LogError_m6636890C17C51DF975A4BFD17A0B3771A9912E56(L_32, _stringLiteralAF597A5AFE3E6633B17F51DDC5D052C17158C067, NULL);
				goto IL_016a_1;
			}

IL_0144_1:
			{
				// Runner.RegisterSceneObjects(sceneObjects.Values);
				NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_33 = V_2;
				NullCheck(L_33);
				NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_34;
				L_34 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_33, NULL);
				U3CU3Ec__DisplayClass26_0_t46952646388B1A92CC5F500666B2A88FEB623B7D* L_35 = __this->___U3CU3E8__1_5;
				NullCheck(L_35);
				Dictionary_2_t825FD84DF69FCB3504BCCC35AD4BC79090FC1AA4* L_36 = L_35->___sceneObjects_1;
				NullCheck(L_36);
				ValueCollection_tF3CD15E5D171F1E7DEA04F2110426D188EEAF961* L_37;
				L_37 = Dictionary_2_get_Values_mC860851CA34533BEA997FC852C9AD7768F6D2049(L_36, Dictionary_2_get_Values_mC860851CA34533BEA997FC852C9AD7768F6D2049_RuntimeMethod_var);
				NullCheck(L_34);
				NetworkRunner_RegisterSceneObjects_m746C14B764716FD492DB7F99EBF6475F45E0FA47(L_34, L_37, NULL);
				// Runner.InvokeSceneLoadDone();
				NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_38 = V_2;
				NullCheck(L_38);
				NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_39;
				L_39 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_38, NULL);
				NullCheck(L_39);
				NetworkRunner_InvokeSceneLoadDone_m9549003F7A9637BD9FAA1B615C23A30EC37A53D7(L_39, NULL);
			}

IL_016a_1:
			{
				// }
				V_0 = (bool)0;
				goto IL_0175;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0175:
	{
		bool L_40 = V_0;
		return L_40;
	}
}
// System.Void Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneWrapperU3Ed__26_U3CU3Em__Finally1_m2C7E18C3627392881FF33AE525DC1B7ECC74DBA1 (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* L_0 = __this->___U3CU3E4__this_2;
		// s_currentlyLoading.SetTarget(null);
		il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		WeakReference_1_t46959D0FCC6409B919826252B3DA79DF23CDD8E2* L_1 = ((NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_StaticFields*)il2cpp_codegen_static_fields_for(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var))->___s_currentlyLoading_4;
		NullCheck(L_1);
		WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220(L_1, (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39*)NULL, WeakReference_1_SetTarget_m62181B69C4EED6A5065F15C8E671CF347149F220_RuntimeMethod_var);
		// _runningCoroutine = null;
		NullCheck(L_0);
		L_0->____runningCoroutine_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____runningCoroutine_6), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Object Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSwitchSceneWrapperU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB4B0EBE9E81B573B67E9A9B59A1F9E59F7E14AAD (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneWrapperU3Ed__26_System_Collections_IEnumerator_Reset_m1534E7EA5E2AB80717703ACB2B3EF6BBD4746541 (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwitchSceneWrapperU3Ed__26_System_Collections_IEnumerator_Reset_m1534E7EA5E2AB80717703ACB2B3EF6BBD4746541_RuntimeMethod_var)));
	}
}
// System.Object Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSwitchSceneWrapperU3Ed__26_System_Collections_IEnumerator_get_Current_mE16C8E569B70B4BAA4A1743D788646A8C16ED349 (U3CSwitchSceneWrapperU3Ed__26_t7AE75B5B80BF67673F7DACC31DC2FD7672D5E299* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.YieldInstruction Fusion.NetworkSceneManagerDefault::LoadSceneAsync(Fusion.SceneRef,UnityEngine.SceneManagement.LoadSceneParameters,System.Action`1<UnityEngine.SceneManagement.Scene>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* NetworkSceneManagerDefault_LoadSceneAsync_m36CF7AA7A1C6FD72BA9BB228F868D27921408534 (NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* __this, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___0_sceneRef, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E ___1_parameters, Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* ___2_loaded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CLoadSceneAsyncU3Eb__0_m4B059F1800104229F1D8516434F60658B7F97851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CLoadSceneAsyncU3Eb__1_m1806E6321B96A0D8071C4314923E8EFF4C7A7491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_0 = (U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m9878516CC321F91FA505845F027BFDF84F218BB9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_1 = V_0;
		Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* L_2 = ___2_loaded;
		NullCheck(L_1);
		L_1->___loaded_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___loaded_2), (void*)L_2);
		// if (!TryGetScenePathFromBuildSettings(sceneRef, out var scenePath)) {
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_3 = ___0_sceneRef;
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_4 = V_0;
		NullCheck(L_4);
		String_t** L_5 = (&L_4->___scenePath_0);
		il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = NetworkSceneManagerBase_TryGetScenePathFromBuildSettings_m812F9F046C78EC35701702B7AB07FD6A77F36704(L_3, L_5, NULL);
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		// throw new InvalidOperationException($"Not going to load {sceneRef}: unable to find the scene name");
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_7 = ___0_sceneRef;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD1E77AD5C06A675600CF5CD2F66F68899D01EDAB)), L_9, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkSceneManagerDefault_LoadSceneAsync_m36CF7AA7A1C6FD72BA9BB228F868D27921408534_RuntimeMethod_var)));
	}

IL_0031:
	{
		// var op = SceneManager.LoadSceneAsync(scenePath, parameters);
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___scenePath_0;
		LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E L_14 = ___1_parameters;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_15;
		L_15 = SceneManager_LoadSceneAsync_mFE5AAC429EADC33F6186D174F1E5B494101C1735(L_13, L_14, NULL);
		// bool alreadyHandled = false;
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_16 = V_0;
		NullCheck(L_16);
		L_16->___alreadyHandled_1 = (bool)0;
		// UnityAction<Scene, LoadSceneMode> sceneLoadedHandler = (scene, _) => {
		//   if (IsScenePathOrNameEqual(scene, scenePath)) {
		//     Assert.Check(!alreadyHandled);
		//     alreadyHandled = true;
		//     loaded(scene);
		//   }
		// };
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_17 = V_0;
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_18 = V_0;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_19 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CLoadSceneAsyncU3Eb__0_m4B059F1800104229F1D8516434F60658B7F97851_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		L_17->___sceneLoadedHandler_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___sceneLoadedHandler_3), (void*)L_19);
		// SceneManager.sceneLoaded += sceneLoadedHandler;
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_20 = V_0;
		NullCheck(L_20);
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_21 = L_20->___sceneLoadedHandler_3;
		SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6(L_21, NULL);
		// op.completed += _ => {
		//   SceneManager.sceneLoaded -= sceneLoadedHandler;
		// };
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_22 = L_15;
		U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* L_23 = V_0;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_24 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CLoadSceneAsyncU3Eb__1_m1806E6321B96A0D8071C4314923E8EFF4C7A7491_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_22, L_24, NULL);
		// return op;
		return L_22;
	}
}
// UnityEngine.YieldInstruction Fusion.NetworkSceneManagerDefault::UnloadSceneAsync(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* NetworkSceneManagerDefault_UnloadSceneAsync_mDC4810C964B9599F22C93D56E03D75D30763992D (NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SceneManager.UnloadSceneAsync(scene);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = ___0_scene;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_1;
		L_1 = SceneManager_UnloadSceneAsync_mA3AB74052DF7155958E100364AAFFE8E11B52A4A(L_0, NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator Fusion.NetworkSceneManagerDefault::SwitchScene(Fusion.SceneRef,Fusion.SceneRef,Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkSceneManagerDefault_SwitchScene_m1ACA3323F963A187D7F10DED31C26FA32B5C1B06 (NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* __this, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___0_prevScene, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___1_newScene, FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* ___2_finished, const RuntimeMethod* method) 
{
	{
		// if (Runner.Config.PeerMode == NetworkProjectConfig.PeerModes.Single) {
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0;
		L_0 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(__this, NULL);
		NullCheck(L_0);
		NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* L_1;
		L_1 = NetworkRunner_get_Config_mD7D0F65C494EB1B08A7DC8A9F6C016588006BD0E_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = L_1->___PeerMode_5;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return SwitchSceneSinglePeer(prevScene, newScene, finished);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_3 = ___0_prevScene;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_4 = ___1_newScene;
		FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* L_5 = ___2_finished;
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker3< RuntimeObject*, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* >::Invoke(16 /* System.Collections.IEnumerator Fusion.NetworkSceneManagerDefault::SwitchSceneSinglePeer(Fusion.SceneRef,Fusion.SceneRef,Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate) */, __this, L_3, L_4, L_5);
		return L_6;
	}

IL_001c:
	{
		// return SwitchSceneMultiplePeer(prevScene, newScene, finished);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_7 = ___0_prevScene;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_8 = ___1_newScene;
		FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* L_9 = ___2_finished;
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker3< RuntimeObject*, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* >::Invoke(15 /* System.Collections.IEnumerator Fusion.NetworkSceneManagerDefault::SwitchSceneMultiplePeer(Fusion.SceneRef,Fusion.SceneRef,Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate) */, __this, L_7, L_8, L_9);
		return L_10;
	}
}
// System.Collections.IEnumerator Fusion.NetworkSceneManagerDefault::SwitchSceneMultiplePeer(Fusion.SceneRef,Fusion.SceneRef,Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkSceneManagerDefault_SwitchSceneMultiplePeer_m94AEB70D18B57730DBEB20A1C567A9FE0C9522C2 (NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* __this, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___0_prevScene, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___1_newScene, FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* ___2_finished, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* L_0 = (U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4*)il2cpp_codegen_object_new(U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSwitchSceneMultiplePeerU3Ed__4__ctor_mAA45B70FFC8FD30FC82FAF9CB3EFD4EADB908183(L_0, 0, NULL);
		U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* L_2 = L_1;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_3 = ___0_prevScene;
		NullCheck(L_2);
		L_2->___prevScene_2 = L_3;
		U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* L_4 = L_2;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_5 = ___1_newScene;
		NullCheck(L_4);
		L_4->___newScene_4 = L_5;
		U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* L_6 = L_4;
		FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* L_7 = ___2_finished;
		NullCheck(L_6);
		L_6->___finished_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___finished_6), (void*)L_7);
		return L_6;
	}
}
// System.Collections.IEnumerator Fusion.NetworkSceneManagerDefault::SwitchSceneSinglePeer(Fusion.SceneRef,Fusion.SceneRef,Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkSceneManagerDefault_SwitchSceneSinglePeer_m7AADB820DCF18CADAB71FE7C572705047D8BCE0B (NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* __this, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___0_prevScene, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___1_newScene, FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* ___2_finished, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* L_0 = (U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416*)il2cpp_codegen_object_new(U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSwitchSceneSinglePeerU3Ed__5__ctor_mBED5520059D653A64415C85CDC65D7C2411EB6B8(L_0, 0, NULL);
		U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* L_2 = L_1;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_3 = ___0_prevScene;
		NullCheck(L_2);
		L_2->___prevScene_2 = L_3;
		U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* L_4 = L_2;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_5 = ___1_newScene;
		NullCheck(L_4);
		L_4->___newScene_4 = L_5;
		U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* L_6 = L_4;
		FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* L_7 = ___2_finished;
		NullCheck(L_6);
		L_6->___finished_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___finished_6), (void*)L_7);
		return L_6;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManagerDefault__ctor_mBF0971F25CC1C7F5C9DB61B81131F355F0032B8A (NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int PostLoadDelayFrames = 1;
		__this->___PostLoadDelayFrames_10 = 1;
		il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		NetworkSceneManagerBase__ctor_m13487B9BF6F36D69D7C02D77BB7B66DA77CDAFBB(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m9878516CC321F91FA505845F027BFDF84F218BB9 (U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0::<LoadSceneAsync>b__0(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CLoadSceneAsyncU3Eb__0_m4B059F1800104229F1D8516434F60658B7F97851 (U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, int32_t ___1__, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsScenePathOrNameEqual(scene, scenePath)) {
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = ___0_scene;
		String_t* L_1 = __this->___scenePath_0;
		il2cpp_codegen_runtime_class_init_inline(NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = NetworkSceneManagerBase_IsScenePathOrNameEqual_mC2CE51F43406C6FAAA58B1986B08CC52DC5604C2(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// alreadyHandled = true;
		__this->___alreadyHandled_1 = (bool)1;
		// loaded(scene);
		Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* L_3 = __this->___loaded_2;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4 = ___0_scene;
		NullCheck(L_3);
		Action_1_Invoke_mF80192BF77173A803E05499C419C61B2BB5AFBA7_inline(L_3, L_4, NULL);
	}

IL_0021:
	{
		// };
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass1_0::<LoadSceneAsync>b__1(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CLoadSceneAsyncU3Eb__1_m1806E6321B96A0D8071C4314923E8EFF4C7A7491 (U3CU3Ec__DisplayClass1_0_t07497F6A778F4CB5DED8B1D58075901C6DB2AD6A* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0__, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded -= sceneLoadedHandler;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = __this->___sceneLoadedHandler_3;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_remove_sceneLoaded_m72A7C2A1B8EF1C21A208A9A015375577768B3978(L_0, NULL);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mF67F08B5221ED03356CA8D388C220C639AF83454 (U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0::<SwitchSceneMultiplePeer>b__0(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CSwitchSceneMultiplePeerU3Eb__0_m4D508569C6E5E2605A5E766A3ECF3066DCC86A72 (U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, const RuntimeMethod* method) 
{
	{
		// yield return LoadSceneAsync(newScene, loadSceneParameters, scene => loadedScene = scene);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = ___0_scene;
		__this->___loadedScene_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneMultiplePeerU3Ed__4__ctor_mAA45B70FFC8FD30FC82FAF9CB3EFD4EADB908183 (U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneMultiplePeerU3Ed__4_System_IDisposable_Dispose_m0556E01B759D48A7AC5BF51D9D9ED9070B02D305 (U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSwitchSceneMultiplePeerU3Ed__4_MoveNext_mCCAF9BAD9D8DBB44E791E4561F77F3F5BA7EACAD (U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m64338222695B55342E656E92D7F2790221E62B6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CSwitchSceneMultiplePeerU3Eb__0_m4D508569C6E5E2605A5E766A3ECF3066DCC86A72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* V_1 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_3;
	memset((&V_3), 0, sizeof(V_3));
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* G_B8_0 = NULL;
	U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* G_B8_1 = NULL;
	int32_t G_B8_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_00ee;
			}
			case 2:
			{
				goto IL_0149;
			}
			case 3:
			{
				goto IL_0193;
			}
			case 4:
			{
				goto IL_025a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* L_3 = (U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ec__DisplayClass4_0__ctor_mF67F08B5221ED03356CA8D388C220C639AF83454(L_3, NULL);
		__this->___U3CU3E8__1_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)L_3);
		// Scene activeScene = SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_2 = L_4;
		// bool canTakeOverActiveScene = prevScene == default && IsScenePathOrNameEqual(activeScene, newScene);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_5 = __this->___prevScene_2;
		il2cpp_codegen_initobj((&V_4), sizeof(SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9));
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_6 = V_4;
		bool L_7;
		L_7 = SceneRef_op_Equality_m9BB6AFF20D71CD8954B06B2D53ADDF428CB469A7(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_8 = V_1;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_9 = V_2;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_10 = __this->___newScene_4;
		NullCheck(L_8);
		bool L_11;
		L_11 = NetworkSceneManagerBase_IsScenePathOrNameEqual_mC14E4BA82C144610610A51D6C5B2D90AA5499E51(L_8, L_9, L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0069;
	}

IL_0068:
	{
		G_B5_0 = 0;
	}

IL_0069:
	{
		// var loadSceneParameters = new LoadSceneParameters(LoadSceneMode.Additive, NetworkProjectConfig.ConvertPhysicsMode(Runner.Config.PhysicsEngine));
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_12 = V_1;
		NullCheck(L_12);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_13;
		L_13 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_12, NULL);
		NullCheck(L_13);
		NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* L_14;
		L_14 = NetworkRunner_get_Config_mD7D0F65C494EB1B08A7DC8A9F6C016588006BD0E_inline(L_13, NULL);
		NullCheck(L_14);
		int32_t L_15 = L_14->___PhysicsEngine_6;
		int32_t L_16;
		L_16 = NetworkProjectConfig_ConvertPhysicsMode_m94D27671E8B3C0922B2C7D05AE0011FB92F385C7(L_15, NULL);
		LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E L_17;
		memset((&L_17), 0, sizeof(L_17));
		LoadSceneParameters__ctor_mC6BFFB213ADFF4F5057E6D92A2C87B9A4386C3B0((&L_17), 1, L_16, /*hidden argument*/NULL);
		__this->___U3CloadSceneParametersU3E5__2_7 = L_17;
		// var sceneToUnload = Runner.MultiplePeerUnityScene;
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_18 = V_1;
		NullCheck(L_18);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_19;
		L_19 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_18, NULL);
		NullCheck(L_19);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_20;
		L_20 = NetworkRunner_get_MultiplePeerUnityScene_mDCE6D9D72D3127C35F74CADBC5EBC79C833699DF_inline(L_19, NULL);
		__this->___U3CsceneToUnloadU3E5__3_8 = L_20;
		// var tempSceneSpawnedPrefabs = Runner.IsMultiplePeerSceneTemp ? sceneToUnload.GetRootGameObjects() : Array.Empty<GameObject>();
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_21 = V_1;
		NullCheck(L_21);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_22;
		L_22 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_21, NULL);
		NullCheck(L_22);
		bool L_23;
		L_23 = NetworkRunner_get_IsMultiplePeerSceneTemp_mE64D915B99B214780B73BBAFEAE8EFADCF71D001_inline(L_22, NULL);
		G_B6_0 = __this;
		G_B6_1 = G_B5_0;
		if (L_23)
		{
			G_B7_0 = __this;
			G_B7_1 = G_B5_0;
			goto IL_00b0;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_24;
		L_24 = Array_Empty_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m64338222695B55342E656E92D7F2790221E62B6A_inline(Array_Empty_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m64338222695B55342E656E92D7F2790221E62B6A_RuntimeMethod_var);
		G_B8_0 = L_24;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_00bb;
	}

IL_00b0:
	{
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_25 = (&__this->___U3CsceneToUnloadU3E5__3_8);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26;
		L_26 = Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B(L_25, NULL);
		G_B8_0 = L_26;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_00bb:
	{
		NullCheck(G_B8_1);
		G_B8_1->___U3CtempSceneSpawnedPrefabsU3E5__4_9 = G_B8_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->___U3CtempSceneSpawnedPrefabsU3E5__4_9), (void*)G_B8_0);
		// if (canTakeOverActiveScene && NetworkRunner.GetRunnerForScene(activeScene) == null && SceneManager.sceneCount > 1) {
		if (!G_B8_2)
		{
			goto IL_00f5;
		}
	}
	{
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_27 = V_2;
		il2cpp_codegen_runtime_class_init_inline(NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_28;
		L_28 = NetworkRunner_GetRunnerForScene_mED1F1534E04E8036908B09ABE841D9DB629551D7(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_00f5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		int32_t L_30;
		L_30 = SceneManager_get_sceneCount_m6BB8A635EB8933BB91747EFE1F1113ED8594EFBF(NULL);
		if ((((int32_t)L_30) <= ((int32_t)1)))
		{
			goto IL_00f5;
		}
	}
	{
		// yield return UnloadSceneAsync(activeScene);
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_31 = V_1;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_32 = V_2;
		NullCheck(L_31);
		YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* L_33;
		L_33 = VirtualFuncInvoker1< YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D*, Scene_tA1DC762B79745EB5140F054C884855B922318356 >::Invoke(14 /* UnityEngine.YieldInstruction Fusion.NetworkSceneManagerDefault::UnloadSceneAsync(UnityEngine.SceneManagement.Scene) */, L_31, L_32);
		__this->___U3CU3E2__current_1 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_33);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ee:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00f5:
	{
		// if (SceneManager.sceneCount == 1 && tempSceneSpawnedPrefabs.Length == 0) {
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		int32_t L_34;
		L_34 = SceneManager_get_sceneCount_m6BB8A635EB8933BB91747EFE1F1113ED8594EFBF(NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_0114;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = __this->___U3CtempSceneSpawnedPrefabsU3E5__4_9;
		NullCheck(L_35);
		if ((((RuntimeArray*)L_35)->max_length))
		{
			goto IL_0114;
		}
	}
	{
		// loadSceneParameters.loadSceneMode = LoadSceneMode.Single;
		LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E* L_36 = (&__this->___U3CloadSceneParametersU3E5__2_7);
		LoadSceneParameters_set_loadSceneMode_mF66230A39CD26D396879FE1BAAB128F3F7F63A58(L_36, 0, NULL);
		goto IL_0150;
	}

IL_0114:
	{
		// } else if (sceneToUnload.IsValid()) {
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_37 = (&__this->___U3CsceneToUnloadU3E5__3_8);
		bool L_38;
		L_38 = Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599(L_37, NULL);
		if (!L_38)
		{
			goto IL_0150;
		}
	}
	{
		// if (Runner.TryMultiplePeerAssignTempScene()) {
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_39 = V_1;
		NullCheck(L_39);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_40;
		L_40 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_39, NULL);
		NullCheck(L_40);
		bool L_41;
		L_41 = NetworkRunner_TryMultiplePeerAssignTempScene_m2D30422B301626FE560E1F3499498CD49B9BFEAE(L_40, NULL);
		if (!L_41)
		{
			goto IL_0150;
		}
	}
	{
		// yield return UnloadSceneAsync(sceneToUnload);
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_42 = V_1;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_43 = __this->___U3CsceneToUnloadU3E5__3_8;
		NullCheck(L_42);
		YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* L_44;
		L_44 = VirtualFuncInvoker1< YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D*, Scene_tA1DC762B79745EB5140F054C884855B922318356 >::Invoke(14 /* UnityEngine.YieldInstruction Fusion.NetworkSceneManagerDefault::UnloadSceneAsync(UnityEngine.SceneManagement.Scene) */, L_42, L_43);
		__this->___U3CU3E2__current_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_44);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0149:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0150:
	{
		// Scene loadedScene = default;
		U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* L_45 = __this->___U3CU3E8__1_5;
		NullCheck(L_45);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_46 = (&L_45->___loadedScene_0);
		il2cpp_codegen_initobj(L_46, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// yield return LoadSceneAsync(newScene, loadSceneParameters, scene => loadedScene = scene);
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_47 = V_1;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_48 = __this->___newScene_4;
		LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E L_49 = __this->___U3CloadSceneParametersU3E5__2_7;
		U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* L_50 = __this->___U3CU3E8__1_5;
		Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* L_51 = (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9*)il2cpp_codegen_object_new(Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		Action_1__ctor_mE6284AC52B30253F1B4E5A2352658355B7BCC262(L_51, L_50, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CSwitchSceneMultiplePeerU3Eb__0_m4D508569C6E5E2605A5E766A3ECF3066DCC86A72_RuntimeMethod_var), NULL);
		NullCheck(L_47);
		YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* L_52;
		L_52 = VirtualFuncInvoker3< YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D*, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E, Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* >::Invoke(13 /* UnityEngine.YieldInstruction Fusion.NetworkSceneManagerDefault::LoadSceneAsync(Fusion.SceneRef,UnityEngine.SceneManagement.LoadSceneParameters,System.Action`1<UnityEngine.SceneManagement.Scene>) */, L_47, L_48, L_49, L_51);
		__this->___U3CU3E2__current_1 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_52);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0193:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!loadedScene.IsValid()) {
		U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* L_53 = __this->___U3CU3E8__1_5;
		NullCheck(L_53);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_54 = (&L_53->___loadedScene_0);
		bool L_55;
		L_55 = Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599(L_54, NULL);
		if (L_55)
		{
			goto IL_01c7;
		}
	}
	{
		// throw new InvalidOperationException($"Failed to load scene {newScene}: async op failed");
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_56 = __this->___newScene_4;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_57 = L_56;
		RuntimeObject* L_58 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9_il2cpp_TypeInfo_var)), &L_57);
		String_t* L_59;
		L_59 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D499F9502D74C6CAE298A99A188D512CAD6B153)), L_58, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_60 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_60);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_60, L_59, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwitchSceneMultiplePeerU3Ed__4_MoveNext_mCCAF9BAD9D8DBB44E791E4561F77F3F5BA7EACAD_RuntimeMethod_var)));
	}

IL_01c7:
	{
		// var sceneObjects = FindNetworkObjects(loadedScene, disable: true, addVisibilityNodes: true);
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_61 = V_1;
		U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* L_62 = __this->___U3CU3E8__1_5;
		NullCheck(L_62);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_63 = L_62->___loadedScene_0;
		NullCheck(L_61);
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_64;
		L_64 = NetworkSceneManagerBase_FindNetworkObjects_mD5801F1D58BC4EB5E25A10D7D83B4A7CBED1CFBF(L_61, L_63, (bool)1, (bool)1, NULL);
		__this->___U3CsceneObjectsU3E5__5_10 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsceneObjectsU3E5__5_10), (void*)L_64);
		// var tempScene = Runner.MultiplePeerUnityScene;
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_65 = V_1;
		NullCheck(L_65);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_66;
		L_66 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_65, NULL);
		NullCheck(L_66);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_67;
		L_67 = NetworkRunner_get_MultiplePeerUnityScene_mDCE6D9D72D3127C35F74CADBC5EBC79C833699DF_inline(L_66, NULL);
		V_3 = L_67;
		// Runner.MultiplePeerUnityScene = loadedScene;
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_68 = V_1;
		NullCheck(L_68);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_69;
		L_69 = NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline(L_68, NULL);
		U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* L_70 = __this->___U3CU3E8__1_5;
		NullCheck(L_70);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_71 = L_70->___loadedScene_0;
		NullCheck(L_69);
		NetworkRunner_set_MultiplePeerUnityScene_mE67B82588A7434CAAAB9235129508F46ED7C48E2(L_69, L_71, NULL);
		// if (tempScene.IsValid()) {
		bool L_72;
		L_72 = Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599((&V_3), NULL);
		if (!L_72)
		{
			goto IL_0261;
		}
	}
	{
		// if (tempSceneSpawnedPrefabs.Length > 0) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_73 = __this->___U3CtempSceneSpawnedPrefabsU3E5__4_9;
		NullCheck(L_73);
		if (!(((RuntimeArray*)L_73)->max_length))
		{
			goto IL_0244;
		}
	}
	{
		// foreach (var go in tempSceneSpawnedPrefabs) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_74 = __this->___U3CtempSceneSpawnedPrefabsU3E5__4_9;
		V_5 = L_74;
		V_6 = 0;
		goto IL_023c;
	}

IL_0221:
	{
		// foreach (var go in tempSceneSpawnedPrefabs) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_75 = V_5;
		int32_t L_76 = V_6;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		// SceneManager.MoveGameObjectToScene(go, loadedScene);
		U3CU3Ec__DisplayClass4_0_t5424E768EB05AECCE2737B90F69CDE67EC6C152D* L_79 = __this->___U3CU3E8__1_5;
		NullCheck(L_79);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_80 = L_79->___loadedScene_0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_MoveGameObjectToScene_mF5DC73256FA145D321DE14771F93AF7B832FE62A(L_78, L_80, NULL);
		int32_t L_81 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_023c:
	{
		// foreach (var go in tempSceneSpawnedPrefabs) {
		int32_t L_82 = V_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_83 = V_5;
		NullCheck(L_83);
		if ((((int32_t)L_82) < ((int32_t)((int32_t)(((RuntimeArray*)L_83)->max_length)))))
		{
			goto IL_0221;
		}
	}

IL_0244:
	{
		// yield return UnloadSceneAsync(tempScene);
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_84 = V_1;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_85 = V_3;
		NullCheck(L_84);
		YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* L_86;
		L_86 = VirtualFuncInvoker1< YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D*, Scene_tA1DC762B79745EB5140F054C884855B922318356 >::Invoke(14 /* UnityEngine.YieldInstruction Fusion.NetworkSceneManagerDefault::UnloadSceneAsync(UnityEngine.SceneManagement.Scene) */, L_84, L_85);
		__this->___U3CU3E2__current_1 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_86);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_025a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0261:
	{
		// finished(sceneObjects);
		FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* L_87 = __this->___finished_6;
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_88 = __this->___U3CsceneObjectsU3E5__5_10;
		NullCheck(L_87);
		FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_inline(L_87, L_88, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSwitchSceneMultiplePeerU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m503D5DBC66BD8D090A27C13C422136A4ADD60AC9 (U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneMultiplePeerU3Ed__4_System_Collections_IEnumerator_Reset_m42947312456A7F84159B07569579F4DA1A7B7BAF (U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwitchSceneMultiplePeerU3Ed__4_System_Collections_IEnumerator_Reset_m42947312456A7F84159B07569579F4DA1A7B7BAF_RuntimeMethod_var)));
	}
}
// System.Object Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSwitchSceneMultiplePeerU3Ed__4_System_Collections_IEnumerator_get_Current_m793D0AE5729A5632AA8671EF6292ED5B34796914 (U3CSwitchSceneMultiplePeerU3Ed__4_tF8730E69703674FE2899206A4436286C7EC78DC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mB65A57C225C7F50ED007903C075A53E59C91EDC5 (U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0::<SwitchSceneSinglePeer>b__0(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CSwitchSceneSinglePeerU3Eb__0_m82BCA4D1AE3A23C1230106556968AA005B4E93E5 (U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, const RuntimeMethod* method) 
{
	{
		// yield return LoadSceneAsync(newScene, loadSceneParameters, scene => loadedScene = scene);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = ___0_scene;
		__this->___loadedScene_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneSinglePeerU3Ed__5__ctor_mBED5520059D653A64415C85CDC65D7C2411EB6B8 (U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneSinglePeerU3Ed__5_System_IDisposable_Dispose_m78DB90556B69657EAD32A6FD4C17AC15E2A54CC3 (U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSwitchSceneSinglePeerU3Ed__5_MoveNext_mAC4FF417C4452B42641D11DFCE5281B848BF272E (U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CSwitchSceneSinglePeerU3Eb__0_m82BCA4D1AE3A23C1230106556968AA005B4E93E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* V_1 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* V_3 = NULL;
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00b8;
			}
			case 2:
			{
				goto IL_010a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* L_3 = (U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ec__DisplayClass5_0__ctor_mB65A57C225C7F50ED007903C075A53E59C91EDC5(L_3, NULL);
		__this->___U3CU3E8__1_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)L_3);
		// Scene activeScene = SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_2 = L_4;
		// bool canTakeOverActiveScene = prevScene == default && IsScenePathOrNameEqual(activeScene, newScene);
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_5 = __this->___prevScene_2;
		il2cpp_codegen_initobj((&V_4), sizeof(SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9));
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_6 = V_4;
		bool L_7;
		L_7 = SceneRef_op_Equality_m9BB6AFF20D71CD8954B06B2D53ADDF428CB469A7(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_8 = V_1;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_9 = V_2;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_10 = __this->___newScene_4;
		NullCheck(L_8);
		bool L_11;
		L_11 = NetworkSceneManagerBase_IsScenePathOrNameEqual_mC14E4BA82C144610610A51D6C5B2D90AA5499E51(L_8, L_9, L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0061;
	}

IL_0060:
	{
		G_B5_0 = 0;
	}

IL_0061:
	{
		// if (canTakeOverActiveScene) {
		if (!G_B5_0)
		{
			goto IL_0071;
		}
	}
	{
		// loadedScene = activeScene;
		U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* L_12 = __this->___U3CU3E8__1_5;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_13 = V_2;
		NullCheck(L_12);
		L_12->___loadedScene_0 = L_13;
		goto IL_00ec;
	}

IL_0071:
	{
		// LoadSceneParameters loadSceneParameters = new LoadSceneParameters(LoadSceneMode.Single);
		LoadSceneParameters__ctor_m40C160638049BF7577055B3460968F8B73459380((&V_5), 0, NULL);
		// loadedScene = default;
		U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* L_14 = __this->___U3CU3E8__1_5;
		NullCheck(L_14);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_15 = (&L_14->___loadedScene_0);
		il2cpp_codegen_initobj(L_15, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// yield return LoadSceneAsync(newScene, loadSceneParameters, scene => loadedScene = scene);
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_16 = V_1;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_17 = __this->___newScene_4;
		LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E L_18 = V_5;
		U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* L_19 = __this->___U3CU3E8__1_5;
		Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* L_20 = (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9*)il2cpp_codegen_object_new(Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Action_1__ctor_mE6284AC52B30253F1B4E5A2352658355B7BCC262(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CSwitchSceneSinglePeerU3Eb__0_m82BCA4D1AE3A23C1230106556968AA005B4E93E5_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* L_21;
		L_21 = VirtualFuncInvoker3< YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D*, SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9, LoadSceneParameters_tFBAFEA7FA75F282D3034241AD8756A7B5578310E, Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* >::Invoke(13 /* UnityEngine.YieldInstruction Fusion.NetworkSceneManagerDefault::LoadSceneAsync(Fusion.SceneRef,UnityEngine.SceneManagement.LoadSceneParameters,System.Action`1<UnityEngine.SceneManagement.Scene>) */, L_16, L_17, L_18, L_20);
		__this->___U3CU3E2__current_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_21);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00b8:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!loadedScene.IsValid()) {
		U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* L_22 = __this->___U3CU3E8__1_5;
		NullCheck(L_22);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_23 = (&L_22->___loadedScene_0);
		bool L_24;
		L_24 = Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599(L_23, NULL);
		if (L_24)
		{
			goto IL_00ec;
		}
	}
	{
		// throw new InvalidOperationException($"Failed to load scene {newScene}: async op failed");
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_25 = __this->___newScene_4;
		SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 L_26 = L_25;
		RuntimeObject* L_27 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9_il2cpp_TypeInfo_var)), &L_26);
		String_t* L_28;
		L_28 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D499F9502D74C6CAE298A99A188D512CAD6B153)), L_27, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_29 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_29, L_28, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwitchSceneSinglePeerU3Ed__5_MoveNext_mAC4FF417C4452B42641D11DFCE5281B848BF272E_RuntimeMethod_var)));
	}

IL_00ec:
	{
		// for (int i = PostLoadDelayFrames; i > 0; --i) {
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_30 = V_1;
		NullCheck(L_30);
		int32_t L_31 = L_30->___PostLoadDelayFrames_10;
		__this->___U3CiU3E5__2_7 = L_31;
		goto IL_0123;
	}

IL_00fa:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_010a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = PostLoadDelayFrames; i > 0; --i) {
		int32_t L_32 = __this->___U3CiU3E5__2_7;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		int32_t L_33 = V_6;
		__this->___U3CiU3E5__2_7 = L_33;
	}

IL_0123:
	{
		// for (int i = PostLoadDelayFrames; i > 0; --i) {
		int32_t L_34 = __this->___U3CiU3E5__2_7;
		if ((((int32_t)L_34) > ((int32_t)0)))
		{
			goto IL_00fa;
		}
	}
	{
		// var sceneObjects = FindNetworkObjects(loadedScene, disable: true);
		NetworkSceneManagerDefault_t892CFC5923C9083F19F89944C8022EA7767CAA91* L_35 = V_1;
		U3CU3Ec__DisplayClass5_0_t02370F28D7ABB27FBE01BED02A6CB1576F31A98B* L_36 = __this->___U3CU3E8__1_5;
		NullCheck(L_36);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_37 = L_36->___loadedScene_0;
		NullCheck(L_35);
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_38;
		L_38 = NetworkSceneManagerBase_FindNetworkObjects_mD5801F1D58BC4EB5E25A10D7D83B4A7CBED1CFBF(L_35, L_37, (bool)1, (bool)0, NULL);
		V_3 = L_38;
		// finished(sceneObjects);
		FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* L_39 = __this->___finished_6;
		List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* L_40 = V_3;
		NullCheck(L_39);
		FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_inline(L_39, L_40, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSwitchSceneSinglePeerU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m14563F08C781C0C10AD545FBDC5492582D5C705F (U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchSceneSinglePeerU3Ed__5_System_Collections_IEnumerator_Reset_m1C3DD543555F33C88C9F974C36682A1451D8B751 (U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwitchSceneSinglePeerU3Ed__5_System_Collections_IEnumerator_Reset_m1C3DD543555F33C88C9F974C36682A1451D8B751_RuntimeMethod_var)));
	}
}
// System.Object Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSwitchSceneSinglePeerU3Ed__5_System_Collections_IEnumerator_get_Current_m9B5FF7F2A56F7B5FC64C90A1948A4A664E9B5AFC (U3CSwitchSceneSinglePeerU3Ed__5_tBC4AC1049D2907E985B69E0A4E7E5F397DF06416* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Bounds Fusion.Editor.BoundsTools::CollectMyBounds(UnityEngine.GameObject,Fusion.Editor.BoundsTools/BoundsType,System.Int32&,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 BoundsTools_CollectMyBounds_m5379F1050B6212683327FC35D5D25D42B62BFF1D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, int32_t ___1_factorIn, int32_t* ___2_numOfBoundsFound, bool ___3_includeChildren, bool ___4_includeInactive, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mA5584260A845566F11731CDDE7AF216E044BEE7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mADF65DE232F8B1518C734CA9A1D60F1D4A4CC374_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mF756FB30A88DDCBFAE2F1811FEC9FA4CDED0DE2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m39DE337508D2ADD39AC2AAE01AB0FFEA7583601F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6405D497F14EEE2F172D1D82E55881EA9385B40B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m0CD3227FF22984AB1F8A80030A70A3921A439EF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m84278021B82DC03648708BEFE1521002F9CACBA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mD3AA9DE8ED9C3C202BED617A4EA8CAD29E799999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mBB103B375AB35BB10A810994CFB39ACA5335AEB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mD1C82F35AB4D7DB1DC1D8138EBC6679456DBC940_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE750EBF74E88E67DF4737B6A5F3594338FAA2132_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m47377D7758798C489896B13DDD6EAFEC1B6D9917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m567A0E8ADE485441540D5B46AB6C518558DDA2FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m83D0AB87CBF92DF59992C02F675DD3DCBB805753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m909AB75DE2253A8B9D7AB3E65CDCDC42BB92DEC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mCE9E8AEA0E6245078585C01E04AF1D72D2B62760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B36_0 = 0;
	{
		// if (!go.activeInHierarchy && !!includeInactive) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_go;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2 = ___4_includeInactive;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// numOfBoundsFound = 0;
		int32_t* L_3 = ___2_numOfBoundsFound;
		*((int32_t*)L_3) = (int32_t)0;
		// return new Bounds();
		il2cpp_codegen_initobj((&V_3), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_4 = V_3;
		return L_4;
	}

IL_0019:
	{
		// bool bothtype = factorIn == BoundsType.Both;
		int32_t L_5 = ___1_factorIn;
		// bool rendtype = bothtype || factorIn == BoundsType.MeshRenderer;
		int32_t L_6 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0026;
		}
	}
	{
		int32_t L_7 = ___1_factorIn;
		G_B6_0 = ((((int32_t)L_7) == ((int32_t)1))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0027;
	}

IL_0026:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0027:
	{
		V_0 = (bool)G_B6_0;
		// bool colltype = bothtype || factorIn == BoundsType.Collider;
		if (G_B6_1)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_8 = ___1_factorIn;
		G_B9_0 = ((((int32_t)L_8) == ((int32_t)2))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B9_0 = 1;
	}

IL_0031:
	{
		// meshFilters.Clear();
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_9 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshFilters_0;
		NullCheck(L_9);
		List_1_Clear_m47377D7758798C489896B13DDD6EAFEC1B6D9917_inline(L_9, List_1_Clear_m47377D7758798C489896B13DDD6EAFEC1B6D9917_RuntimeMethod_var);
		// meshRenderers.Clear();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_10 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		NullCheck(L_10);
		List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_inline(L_10, List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var);
		// colliders.Clear();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_11 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2;
		NullCheck(L_11);
		List_1_Clear_m567A0E8ADE485441540D5B46AB6C518558DDA2FE_inline(L_11, List_1_Clear_m567A0E8ADE485441540D5B46AB6C518558DDA2FE_RuntimeMethod_var);
		// spriteRenderers.Clear();
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_12 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4;
		NullCheck(L_12);
		List_1_Clear_m83D0AB87CBF92DF59992C02F675DD3DCBB805753_inline(L_12, List_1_Clear_m83D0AB87CBF92DF59992C02F675DD3DCBB805753_RuntimeMethod_var);
		// validColliders.Clear();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_13 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3;
		NullCheck(L_13);
		List_1_Clear_m567A0E8ADE485441540D5B46AB6C518558DDA2FE_inline(L_13, List_1_Clear_m567A0E8ADE485441540D5B46AB6C518558DDA2FE_RuntimeMethod_var);
		// validColliders2D.Clear();
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_14 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		NullCheck(L_14);
		List_1_Clear_m909AB75DE2253A8B9D7AB3E65CDCDC42BB92DEC3_inline(L_14, List_1_Clear_m909AB75DE2253A8B9D7AB3E65CDCDC42BB92DEC3_RuntimeMethod_var);
		// int myBoundsCount = 0;
		V_1 = 0;
		// if (rendtype) {
		bool L_15 = V_0;
		G_B10_0 = G_B9_0;
		if (!L_15)
		{
			G_B14_0 = G_B9_0;
			goto IL_00c7;
		}
	}
	{
		// if (go.activeInHierarchy) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = ___0_go;
		NullCheck(L_16);
		bool L_17;
		L_17 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_16, NULL);
		G_B11_0 = G_B10_0;
		if (!L_17)
		{
			G_B14_0 = G_B10_0;
			goto IL_00c7;
		}
	}
	{
		// if (includeChildren) {
		bool L_18 = ___3_includeChildren;
		G_B12_0 = G_B11_0;
		if (!L_18)
		{
			G_B13_0 = G_B11_0;
			goto IL_00a6;
		}
	}
	{
		// go.GetComponentsInChildren(includeInactive, meshRenderers);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = ___0_go;
		bool L_20 = ___4_includeInactive;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_21 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		NullCheck(L_19);
		GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m39DE337508D2ADD39AC2AAE01AB0FFEA7583601F(L_19, L_20, L_21, GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m39DE337508D2ADD39AC2AAE01AB0FFEA7583601F_RuntimeMethod_var);
		// go.GetComponentsInChildren(includeInactive, meshFilters);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = ___0_go;
		bool L_23 = ___4_includeInactive;
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_24 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshFilters_0;
		NullCheck(L_22);
		GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mF756FB30A88DDCBFAE2F1811FEC9FA4CDED0DE2F(L_22, L_23, L_24, GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mF756FB30A88DDCBFAE2F1811FEC9FA4CDED0DE2F_RuntimeMethod_var);
		// go.GetComponentsInChildren(includeInactive, spriteRenderers);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = ___0_go;
		bool L_26 = ___4_includeInactive;
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_27 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4;
		NullCheck(L_25);
		GameObject_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6405D497F14EEE2F172D1D82E55881EA9385B40B(L_25, L_26, L_27, GameObject_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6405D497F14EEE2F172D1D82E55881EA9385B40B_RuntimeMethod_var);
		G_B14_0 = G_B12_0;
		goto IL_00c7;
	}

IL_00a6:
	{
		// go.GetComponents(meshRenderers);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = ___0_go;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_29 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		NullCheck(L_28);
		GameObject_GetComponents_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mBB103B375AB35BB10A810994CFB39ACA5335AEB7(L_28, L_29, GameObject_GetComponents_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mBB103B375AB35BB10A810994CFB39ACA5335AEB7_RuntimeMethod_var);
		// go.GetComponents(meshFilters);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = ___0_go;
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_31 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshFilters_0;
		NullCheck(L_30);
		GameObject_GetComponents_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mD3AA9DE8ED9C3C202BED617A4EA8CAD29E799999(L_30, L_31, GameObject_GetComponents_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mD3AA9DE8ED9C3C202BED617A4EA8CAD29E799999_RuntimeMethod_var);
		// go.GetComponents(spriteRenderers);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = ___0_go;
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_33 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4;
		NullCheck(L_32);
		GameObject_GetComponents_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mD1C82F35AB4D7DB1DC1D8138EBC6679456DBC940(L_32, L_33, GameObject_GetComponents_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mD1C82F35AB4D7DB1DC1D8138EBC6679456DBC940_RuntimeMethod_var);
		G_B14_0 = G_B13_0;
	}

IL_00c7:
	{
		// if (colltype) {
		if (!G_B14_0)
		{
			goto IL_0106;
		}
	}
	{
		// if (go.activeInHierarchy) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = ___0_go;
		NullCheck(L_34);
		bool L_35;
		L_35 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_34, NULL);
		if (!L_35)
		{
			goto IL_0106;
		}
	}
	{
		// if (includeChildren) {
		bool L_36 = ___3_includeChildren;
		if (!L_36)
		{
			goto IL_00f0;
		}
	}
	{
		// go.GetComponentsInChildren(includeInactive, colliders);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = ___0_go;
		bool L_38 = ___4_includeInactive;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_39 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2;
		NullCheck(L_37);
		GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mADF65DE232F8B1518C734CA9A1D60F1D4A4CC374(L_37, L_38, L_39, GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mADF65DE232F8B1518C734CA9A1D60F1D4A4CC374_RuntimeMethod_var);
		// go.GetComponentsInChildren(includeInactive, colliders2D);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = ___0_go;
		bool L_41 = ___4_includeInactive;
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_42 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5;
		NullCheck(L_40);
		GameObject_GetComponentsInChildren_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mA5584260A845566F11731CDDE7AF216E044BEE7A(L_40, L_41, L_42, GameObject_GetComponentsInChildren_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mA5584260A845566F11731CDDE7AF216E044BEE7A_RuntimeMethod_var);
		goto IL_0106;
	}

IL_00f0:
	{
		// go.GetComponents(colliders);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = ___0_go;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_44 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2;
		NullCheck(L_43);
		GameObject_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m84278021B82DC03648708BEFE1521002F9CACBA4(L_43, L_44, GameObject_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m84278021B82DC03648708BEFE1521002F9CACBA4_RuntimeMethod_var);
		// go.GetComponents(colliders2D);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = ___0_go;
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_46 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5;
		NullCheck(L_45);
		GameObject_GetComponents_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m0CD3227FF22984AB1F8A80030A70A3921A439EF5(L_45, L_46, GameObject_GetComponents_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m0CD3227FF22984AB1F8A80030A70A3921A439EF5_RuntimeMethod_var);
	}

IL_0106:
	{
		// for (int i = 0; i < meshFilters.Count; i++) {
		V_4 = 0;
		goto IL_0153;
	}

IL_010b:
	{
		// Renderer mr = meshFilters[i].GetComponent<Renderer>();
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_47 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshFilters_0;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_49;
		L_49 = List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348(L_47, L_48, List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var);
		NullCheck(L_49);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_50;
		L_50 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_49, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_5 = L_50;
		// if (mr && (mr.enabled || includeInactive)) {
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_51 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_51, NULL);
		if (!L_52)
		{
			goto IL_014d;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_53 = V_5;
		NullCheck(L_53);
		bool L_54;
		L_54 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_53, NULL);
		bool L_55 = ___4_includeInactive;
		if (!((int32_t)((int32_t)L_54|(int32_t)L_55)))
		{
			goto IL_014d;
		}
	}
	{
		// if (!meshRenderers.Contains(mr))
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_56 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_57 = V_5;
		NullCheck(L_56);
		bool L_58;
		L_58 = List_1_Contains_mCE9E8AEA0E6245078585C01E04AF1D72D2B62760(L_56, L_57, List_1_Contains_mCE9E8AEA0E6245078585C01E04AF1D72D2B62760_RuntimeMethod_var);
		if (L_58)
		{
			goto IL_014d;
		}
	}
	{
		// meshRenderers.Add(mr);
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_59 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_60 = V_5;
		NullCheck(L_59);
		List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_inline(L_59, L_60, List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var);
	}

IL_014d:
	{
		// for (int i = 0; i < meshFilters.Count; i++) {
		int32_t L_61 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0153:
	{
		// for (int i = 0; i < meshFilters.Count; i++) {
		int32_t L_62 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_63 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshFilters_0;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_inline(L_63, List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var);
		if ((((int32_t)L_62) < ((int32_t)L_64)))
		{
			goto IL_010b;
		}
	}
	{
		// for (int i = 0; i < colliders.Count; i++) {
		V_6 = 0;
		goto IL_01ab;
	}

IL_0166:
	{
		// if (colliders[i].enabled || includeInactive)
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_65 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2;
		int32_t L_66 = V_6;
		NullCheck(L_65);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_67;
		L_67 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_65, L_66, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		NullCheck(L_67);
		bool L_68;
		L_68 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_67, NULL);
		bool L_69 = ___4_includeInactive;
		if (!((int32_t)((int32_t)L_68|(int32_t)L_69)))
		{
			goto IL_01a5;
		}
	}
	{
		// if (colliders[i])
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_70 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2;
		int32_t L_71 = V_6;
		NullCheck(L_70);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_72;
		L_72 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_70, L_71, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_72, NULL);
		if (!L_73)
		{
			goto IL_01a5;
		}
	}
	{
		// validColliders.Add(colliders[i]);
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_74 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3;
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_75 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2;
		int32_t L_76 = V_6;
		NullCheck(L_75);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_77;
		L_77 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_75, L_76, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		NullCheck(L_74);
		List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_inline(L_74, L_77, List_1_Add_m67ADCB698F31486B35CF5DB4CFB1E97EB807FEFD_RuntimeMethod_var);
	}

IL_01a5:
	{
		// for (int i = 0; i < colliders.Count; i++) {
		int32_t L_78 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01ab:
	{
		// for (int i = 0; i < colliders.Count; i++) {
		int32_t L_79 = V_6;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_80 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2;
		NullCheck(L_80);
		int32_t L_81;
		L_81 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_80, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		if ((((int32_t)L_79) < ((int32_t)L_81)))
		{
			goto IL_0166;
		}
	}
	{
		// for (int i = 0; i < colliders2D.Count; i++) {
		V_7 = 0;
		goto IL_0219;
	}

IL_01be:
	{
		// if (colliders2D[i] && colliders2D[i].enabled || includeInactive)
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_82 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5;
		int32_t L_83 = V_7;
		NullCheck(L_82);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_84;
		L_84 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_82, L_83, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_85;
		L_85 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_84, NULL);
		if (!L_85)
		{
			goto IL_01e4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_86 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5;
		int32_t L_87 = V_7;
		NullCheck(L_86);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_88;
		L_88 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_86, L_87, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		NullCheck(L_88);
		bool L_89;
		L_89 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_88, NULL);
		G_B36_0 = ((int32_t)(L_89));
		goto IL_01e5;
	}

IL_01e4:
	{
		G_B36_0 = 0;
	}

IL_01e5:
	{
		bool L_90 = ___4_includeInactive;
		if (!((int32_t)(G_B36_0|(int32_t)L_90)))
		{
			goto IL_0213;
		}
	}
	{
		// if (colliders2D[i])
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_91 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5;
		int32_t L_92 = V_7;
		NullCheck(L_91);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_93;
		L_93 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_91, L_92, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_94;
		L_94 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_93, NULL);
		if (!L_94)
		{
			goto IL_0213;
		}
	}
	{
		// validColliders2D.Add(colliders2D[i]);
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_95 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_96 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5;
		int32_t L_97 = V_7;
		NullCheck(L_96);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_98;
		L_98 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_96, L_97, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		NullCheck(L_95);
		List_1_Add_mE750EBF74E88E67DF4737B6A5F3594338FAA2132_inline(L_95, L_98, List_1_Add_mE750EBF74E88E67DF4737B6A5F3594338FAA2132_RuntimeMethod_var);
	}

IL_0213:
	{
		// for (int i = 0; i < colliders2D.Count; i++) {
		int32_t L_99 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_99, 1));
	}

IL_0219:
	{
		// for (int i = 0; i < colliders2D.Count; i++) {
		int32_t L_100 = V_7;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_101 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5;
		NullCheck(L_101);
		int32_t L_102;
		L_102 = List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_inline(L_101, List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_RuntimeMethod_var);
		if ((((int32_t)L_100) < ((int32_t)L_102)))
		{
			goto IL_01be;
		}
	}
	{
		//       numOfBoundsFound =
		//         meshRenderers.Count +
		//         spriteRenderers.Count +
		//         validColliders.Count
		// #if !DISABLE_PHYSICS_2D
		//         + validColliders2D.Count
		// #endif
		//         ;
		int32_t* L_103 = ___2_numOfBoundsFound;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_104 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		NullCheck(L_104);
		int32_t L_105;
		L_105 = List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_inline(L_104, List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var);
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_106 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4;
		NullCheck(L_106);
		int32_t L_107;
		L_107 = List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_inline(L_106, List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_RuntimeMethod_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_108 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3;
		NullCheck(L_108);
		int32_t L_109;
		L_109 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_108, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_110 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		NullCheck(L_110);
		int32_t L_111;
		L_111 = List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_inline(L_110, List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_RuntimeMethod_var);
		*((int32_t*)L_103) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_105, L_107)), L_109)), L_111));
		// if (numOfBoundsFound == 0) {
		int32_t* L_112 = ___2_numOfBoundsFound;
		int32_t L_113 = *((int32_t*)L_112);
		if (L_113)
		{
			goto IL_0262;
		}
	}
	{
		// return new Bounds();
		il2cpp_codegen_initobj((&V_3), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_114 = V_3;
		return L_114;
	}

IL_0262:
	{
		// if (meshRenderers.Count > 0)
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_115 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		NullCheck(L_115);
		int32_t L_116;
		L_116 = List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_inline(L_115, List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var);
		if ((((int32_t)L_116) <= ((int32_t)0)))
		{
			goto IL_0282;
		}
	}
	{
		// compositeBounds = meshRenderers[0].bounds;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_117 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		NullCheck(L_117);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_118;
		L_118 = List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2(L_117, 0, List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		NullCheck(L_118);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_119;
		L_119 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_118, NULL);
		V_2 = L_119;
		goto IL_02fe;
	}

IL_0282:
	{
		// else if (validColliders.Count > 0)
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_120 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3;
		NullCheck(L_120);
		int32_t L_121;
		L_121 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_120, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		if ((((int32_t)L_121) <= ((int32_t)0)))
		{
			goto IL_02a2;
		}
	}
	{
		// compositeBounds = validColliders[0].bounds;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_122 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3;
		NullCheck(L_122);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_123;
		L_123 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_122, 0, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		NullCheck(L_123);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_124;
		L_124 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_123, NULL);
		V_2 = L_124;
		goto IL_02fe;
	}

IL_02a2:
	{
		// else if (validColliders2D.Count > 0 && validColliders2D[0])
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_125 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		NullCheck(L_125);
		int32_t L_126;
		L_126 = List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_inline(L_125, List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_RuntimeMethod_var);
		if ((((int32_t)L_126) <= ((int32_t)0)))
		{
			goto IL_02d4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_127 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		NullCheck(L_127);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_128;
		L_128 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_127, 0, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_129;
		L_129 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_128, NULL);
		if (!L_129)
		{
			goto IL_02d4;
		}
	}
	{
		// compositeBounds = validColliders2D[0].bounds;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_130 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		NullCheck(L_130);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_131;
		L_131 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_130, 0, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		NullCheck(L_131);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_132;
		L_132 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_131, NULL);
		V_2 = L_132;
		goto IL_02fe;
	}

IL_02d4:
	{
		// else if (spriteRenderers.Count > 0)
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_133 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4;
		NullCheck(L_133);
		int32_t L_134;
		L_134 = List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_inline(L_133, List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_RuntimeMethod_var);
		if ((((int32_t)L_134) <= ((int32_t)0)))
		{
			goto IL_02f4;
		}
	}
	{
		// compositeBounds = spriteRenderers[0].bounds;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_135 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4;
		NullCheck(L_135);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_136;
		L_136 = List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020(L_135, 0, List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020_RuntimeMethod_var);
		NullCheck(L_136);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_137;
		L_137 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_136, NULL);
		V_2 = L_137;
		goto IL_02fe;
	}

IL_02f4:
	{
		// return new Bounds();
		il2cpp_codegen_initobj((&V_3), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_138 = V_3;
		return L_138;
	}

IL_02fe:
	{
		// for (int i = 0; i < spriteRenderers.Count; i++) {
		V_8 = 0;
		goto IL_0325;
	}

IL_0303:
	{
		// myBoundsCount++;
		int32_t L_139 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_139, 1));
		// compositeBounds.Encapsulate(spriteRenderers[i].bounds);
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_140 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4;
		int32_t L_141 = V_8;
		NullCheck(L_140);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_142;
		L_142 = List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020(L_140, L_141, List_1_get_Item_mCF7211700AA76134E579BFB4A810A47B7286B020_RuntimeMethod_var);
		NullCheck(L_142);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_143;
		L_143 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_142, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_2), L_143, NULL);
		// for (int i = 0; i < spriteRenderers.Count; i++) {
		int32_t L_144 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_144, 1));
	}

IL_0325:
	{
		// for (int i = 0; i < spriteRenderers.Count; i++) {
		int32_t L_145 = V_8;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_146 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4;
		NullCheck(L_146);
		int32_t L_147;
		L_147 = List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_inline(L_146, List_1_get_Count_mEA0F1D25E61E63E9C4DBAA88F9BD644F834D84C0_RuntimeMethod_var);
		if ((((int32_t)L_145) < ((int32_t)L_147)))
		{
			goto IL_0303;
		}
	}
	{
		// for (int i = 0; i < meshRenderers.Count; i++) {
		V_9 = 0;
		goto IL_035a;
	}

IL_0338:
	{
		// myBoundsCount++;
		int32_t L_148 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_148, 1));
		// compositeBounds.Encapsulate(meshRenderers[i].bounds);
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_149 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		int32_t L_150 = V_9;
		NullCheck(L_149);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_151;
		L_151 = List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2(L_149, L_150, List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		NullCheck(L_151);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_152;
		L_152 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_151, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_2), L_152, NULL);
		// for (int i = 0; i < meshRenderers.Count; i++) {
		int32_t L_153 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_153, 1));
	}

IL_035a:
	{
		// for (int i = 0; i < meshRenderers.Count; i++) {
		int32_t L_154 = V_9;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_155 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1;
		NullCheck(L_155);
		int32_t L_156;
		L_156 = List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_inline(L_155, List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var);
		if ((((int32_t)L_154) < ((int32_t)L_156)))
		{
			goto IL_0338;
		}
	}
	{
		// for (int i = 0; i < validColliders.Count; i++) {
		V_10 = 0;
		goto IL_038f;
	}

IL_036d:
	{
		// myBoundsCount++;
		int32_t L_157 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_157, 1));
		// compositeBounds.Encapsulate(validColliders[i].bounds);
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_158 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3;
		int32_t L_159 = V_10;
		NullCheck(L_158);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_160;
		L_160 = List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587(L_158, L_159, List_1_get_Item_m6482D1D8869174A6C7B0CEAF95DFDFBB73625587_RuntimeMethod_var);
		NullCheck(L_160);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_161;
		L_161 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_160, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_2), L_161, NULL);
		// for (int i = 0; i < validColliders.Count; i++) {
		int32_t L_162 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_162, 1));
	}

IL_038f:
	{
		// for (int i = 0; i < validColliders.Count; i++) {
		int32_t L_163 = V_10;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_164 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3;
		NullCheck(L_164);
		int32_t L_165;
		L_165 = List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_inline(L_164, List_1_get_Count_m8D408B57AE7C2D791BB61817BBC93B84537AB617_RuntimeMethod_var);
		if ((((int32_t)L_163) < ((int32_t)L_165)))
		{
			goto IL_036d;
		}
	}
	{
		// for (int i = 0; i < validColliders2D.Count; i++) {
		V_11 = 0;
		goto IL_03d7;
	}

IL_03a2:
	{
		// myBoundsCount++;
		int32_t L_166 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_166, 1));
		// if (validColliders2D[i])
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_167 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		int32_t L_168 = V_11;
		NullCheck(L_167);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_169;
		L_169 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_167, L_168, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_170;
		L_170 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_169, NULL);
		if (!L_170)
		{
			goto IL_03d1;
		}
	}
	{
		// compositeBounds.Encapsulate(validColliders2D[i].bounds);
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_171 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		int32_t L_172 = V_11;
		NullCheck(L_171);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_173;
		L_173 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_171, L_172, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		NullCheck(L_173);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_174;
		L_174 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_173, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_2), L_174, NULL);
	}

IL_03d1:
	{
		// for (int i = 0; i < validColliders2D.Count; i++) {
		int32_t L_175 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_175, 1));
	}

IL_03d7:
	{
		// for (int i = 0; i < validColliders2D.Count; i++) {
		int32_t L_176 = V_11;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_177 = ((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6;
		NullCheck(L_177);
		int32_t L_178;
		L_178 = List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_inline(L_177, List_1_get_Count_m19873634650BA188838B61106D245CD24E4B41F6_RuntimeMethod_var);
		if ((((int32_t)L_176) < ((int32_t)L_178)))
		{
			goto IL_03a2;
		}
	}
	{
		// return compositeBounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_179 = V_2;
		return L_179;
	}
}
// UnityEngine.Bounds Fusion.Editor.BoundsTools::CollectMyBounds(UnityEngine.GameObject,Fusion.Editor.BoundsTools/BoundsType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 BoundsTools_CollectMyBounds_m9EC00C46177155F8E99780F6D394B368F48B1842 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, int32_t ___1_factorIn, bool ___2_includeChildren, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return CollectMyBounds(go, factorIn, out dummy, includeChildren);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_go;
		int32_t L_1 = ___1_factorIn;
		bool L_2 = ___2_includeChildren;
		il2cpp_codegen_runtime_class_init_inline(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_3;
		L_3 = BoundsTools_CollectMyBounds_m5379F1050B6212683327FC35D5D25D42B62BFF1D(L_0, L_1, (&V_0), L_2, (bool)0, NULL);
		return L_3;
	}
}
// System.Void Fusion.Editor.BoundsTools::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsTools__cctor_mE1A9422B7B355469F841A8632384C2E7F82A042D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6E83AE2DD08C6F347070F297A225B37FC4A2ADFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<MeshFilter> meshFilters = new List<MeshFilter>();
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_0 = (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*)il2cpp_codegen_object_new(List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C(L_0, List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var);
		((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshFilters_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshFilters_0), (void*)L_0);
		// private static readonly List<Renderer> meshRenderers = new List<Renderer>();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_1 = (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*)il2cpp_codegen_object_new(List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE(L_1, List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___meshRenderers_1), (void*)L_1);
		// private static readonly List<Collider> colliders = new List<Collider>();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_2 = (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*)il2cpp_codegen_object_new(List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE(L_2, List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders_2), (void*)L_2);
		// private static readonly List<Collider> validColliders = new List<Collider>();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_3 = (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*)il2cpp_codegen_object_new(List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE(L_3, List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders_3), (void*)L_3);
		// private static readonly List<SpriteRenderer> spriteRenderers = new List<SpriteRenderer>();
		List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C* L_4 = (List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C*)il2cpp_codegen_object_new(List_1_tBC2FB130FF78DB2D688D310B973A4B879CC61E9C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m6E83AE2DD08C6F347070F297A225B37FC4A2ADFA(L_4, List_1__ctor_m6E83AE2DD08C6F347070F297A225B37FC4A2ADFA_RuntimeMethod_var);
		((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___spriteRenderers_4), (void*)L_4);
		// private static readonly List<Collider2D> colliders2D = new List<Collider2D>();
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_5 = (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*)il2cpp_codegen_object_new(List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7(L_5, List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7_RuntimeMethod_var);
		((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___colliders2D_5), (void*)L_5);
		// private static readonly List<Collider2D> validColliders2D = new List<Collider2D>();
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_6 = (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*)il2cpp_codegen_object_new(List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7(L_6, List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7_RuntimeMethod_var);
		((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundsTools_t4B08C40D312C96DA5DBFCFB68D0558D28EE984CE_il2cpp_TypeInfo_var))->___validColliders2D_6), (void*)L_6);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<System.String> Fusion.StatsInternal.FusionStatsUtilities::get_CachedTelemetryNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* FusionStatsUtilities_get_CachedTelemetryNames_m4EF617534D4BF0AE87C4AD4E6B3C0314EA32E2A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionGraphVisualization_t989F5A867C227A92C199E79C10AD87E7901360B0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (_cachedGraphVisualizationNames == null) {
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____cachedGraphVisualizationNames_5;
		if (L_0)
		{
			goto IL_0071;
		}
	}
	{
		// var enumtype = typeof(FusionGraphVisualization);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (FusionGraphVisualization_t989F5A867C227A92C199E79C10AD87E7901360B0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		V_0 = L_2;
		// var names = System.Enum.GetNames(enumtype);
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = Enum_GetNames_m382A68AE28D7B6035331EC0685315144F15957C3(L_3, NULL);
		V_1 = L_4;
		// _cachedGraphVisualizationNames = new List<string>(names.Length);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_1;
		NullCheck(L_5);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_6, ((int32_t)(((RuntimeArray*)L_5)->max_length)), List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____cachedGraphVisualizationNames_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____cachedGraphVisualizationNames_5), (void*)L_6);
		// for (int i = 0; i < names.Length; ++i) {
		V_2 = 0;
		goto IL_006b;
	}

IL_002a:
	{
	}
	try
	{// begin try (depth: 1)
		// MemberInfo[] memberInfo = enumtype.GetMember(names[i]);
		Type_t* L_7 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_12;
		L_12 = Type_GetMember_mC4456D1BA93A44CF021059F6D46237C0740A6229(L_7, L_11, NULL);
		// var _Attribs = memberInfo[0].GetCustomAttributes(typeof(System.ComponentModel.DescriptionAttribute), false);
		NullCheck(L_12);
		int32_t L_13 = 0;
		MemberInfo_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17;
		L_17 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_14, L_16, (bool)0);
		// name = ((System.ComponentModel.DescriptionAttribute)(_Attribs[0])).Description;
		NullCheck(L_17);
		int32_t L_18 = 0;
		RuntimeObject* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(((DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86*)CastclassClass((RuntimeObject*)L_19, DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var)));
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DescriptionAttribute::get_Description() */, ((DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86*)CastclassClass((RuntimeObject*)L_19, DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var)));
		V_3 = L_20;
		// } catch {
		goto IL_005c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0055;
		}
		throw e;
	}

CATCH_0055:
	{// begin catch(System.Object)
		// } catch {
		// name = names[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = V_1;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		String_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_3 = L_24;
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005c;
	}// end catch (depth: 1)

IL_005c:
	{
		// _cachedGraphVisualizationNames.Add(name);
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____cachedGraphVisualizationNames_5;
		String_t* L_26 = V_3;
		NullCheck(L_25);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_25, L_26, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int i = 0; i < names.Length; ++i) {
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_006b:
	{
		// for (int i = 0; i < names.Length; ++i) {
		int32_t L_28 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = V_1;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_002a;
		}
	}

IL_0071:
	{
		// return _cachedGraphVisualizationNames;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_30 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____cachedGraphVisualizationNames_5;
		return L_30;
	}
}
// UnityEngine.Font Fusion.StatsInternal.FusionStatsUtilities::get_Font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* FusionStatsUtilities_get_Font_m0A68FC691677A6E5C3D40EF80F03A21A5884BCB6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_GetBuiltinResource_TisFont_tC95270EA3198038970422D78B74A7F2E218A96B6_m3B4545F25A016D36D9AE93723A3449804A127D73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C4303CE90A80E03466A934F3A49CF1FBA75C709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_font == null) {
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_0 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____font_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// _font = Resources.GetBuiltinResource<Font>("Arial.ttf");
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_2;
		L_2 = Resources_GetBuiltinResource_TisFont_tC95270EA3198038970422D78B74A7F2E218A96B6_m3B4545F25A016D36D9AE93723A3449804A127D73(_stringLiteral1C4303CE90A80E03466A934F3A49CF1FBA75C709, Resources_GetBuiltinResource_TisFont_tC95270EA3198038970422D78B74A7F2E218A96B6_m3B4545F25A016D36D9AE93723A3449804A127D73_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____font_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____font_6), (void*)L_2);
	}

IL_001c:
	{
		// return _font;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_3 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____font_6;
		return L_3;
	}
}
// UnityEngine.Texture2D Fusion.StatsInternal.FusionStatsUtilities::get_MeterTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FusionStatsUtilities_get_MeterTexture_m90EFF436369E1674A158841F6CC6A22ED8D928AE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	{
		// if (_meterTexture == null) {
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____meterTexture_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_008a;
		}
	}
	{
		// var tex = new Texture2D(METER_TEXTURE_WIDTH, 2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_2, ((int32_t)512), 2, NULL);
		V_0 = L_2;
		// for (int x = 0; x < METER_TEXTURE_WIDTH; ++x) {
		V_1 = 0;
		goto IL_0074;
	}

IL_001d:
	{
		// for (int y = 0; y < 2; ++y) {
		V_2 = 0;
		goto IL_006c;
	}

IL_0021:
	{
		// var color = (x != 0 && x % 16 == 0) ? new Color(1f, 1f, 1f, 0.75f) : new Color(1f, 1f, 1f, 1f);
		int32_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_1;
		if (!((int32_t)(L_4%((int32_t)16))))
		{
			goto IL_0045;
		}
	}

IL_002a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_5), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		G_B7_0 = L_5;
		goto IL_005e;
	}

IL_0045:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_6), (1.0f), (1.0f), (1.0f), (0.75f), /*hidden argument*/NULL);
		G_B7_0 = L_6;
	}

IL_005e:
	{
		V_3 = G_B7_0;
		// tex.SetPixel(x, y, color);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_3;
		NullCheck(L_7);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_7, L_8, L_9, L_10, NULL);
		// for (int y = 0; y < 2; ++y) {
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_006c:
	{
		// for (int y = 0; y < 2; ++y) {
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		// for (int x = 0; x < METER_TEXTURE_WIDTH; ++x) {
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0074:
	{
		// for (int x = 0; x < METER_TEXTURE_WIDTH; ++x) {
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)512))))
		{
			goto IL_001d;
		}
	}
	{
		// tex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = V_0;
		NullCheck(L_15);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_15, NULL);
		// return _meterTexture = tex;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = L_16;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____meterTexture_8 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____meterTexture_8), (void*)L_17);
		return L_17;
	}

IL_008a:
	{
		// return _meterTexture;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____meterTexture_8;
		return L_18;
	}
}
// UnityEngine.Sprite Fusion.StatsInternal.FusionStatsUtilities::get_MeterSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* FusionStatsUtilities_get_MeterSprite_m64DEB33D78886B88FEF586633E8060CBD0C52B2D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_meterSprite == null) {
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____meterSprite_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// _meterSprite = Sprite.Create(MeterTexture, new Rect(0, 0, METER_TEXTURE_WIDTH, 2), new Vector2());
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = FusionStatsUtilities_get_MeterTexture_m90EFF436369E1674A158841F6CC6A22ED8D928AE(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_3), (0.0f), (0.0f), (512.0f), (2.0f), /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5;
		L_5 = Sprite_Create_m827A9BDEC4566AB71966A40DB48A09BB064D81E7(L_2, L_3, L_4, NULL);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____meterSprite_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____meterSprite_9), (void*)L_5);
	}

IL_003e:
	{
		// return _meterSprite;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____meterSprite_9;
		return L_6;
	}
}
// UnityEngine.Texture2D Fusion.StatsInternal.FusionStatsUtilities::get_Circle32Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* FusionStatsUtilities_get_Circle32Texture_m0A5924BDC2322AB6031675581430FB2FF1932B8D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	float V_4 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_5;
	memset((&V_5), 0, sizeof(V_5));
	float G_B8_0 = 0.0f;
	{
		// if (_circle32Texture == null) {
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____circle32Texture_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00f3;
		}
	}
	{
		// var tex = new Texture2D(R * 2, R * 2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_2, ((int32_t)128), ((int32_t)128), NULL);
		V_0 = L_2;
		// for (int x = 0; x < R; ++x) {
		V_1 = 0;
		goto IL_00dd;
	}

IL_0027:
	{
		// for (int y = 0; y < R; ++y) {
		V_2 = 0;
		goto IL_00d1;
	}

IL_002e:
	{
		// double h = System.Math.Abs( System.Math.Sqrt(x * x + y * y));
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = sqrt(((double)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, L_4)), ((int32_t)il2cpp_codegen_multiply(L_5, L_6))))));
		double L_8;
		L_8 = fabs(L_7);
		V_3 = L_8;
		// float a = h > R ? 0.0f : h < (R - 1) ? 1.0f :(float) (R - h);
		double L_9 = V_3;
		if ((((double)L_9) > ((double)(64.0))))
		{
			goto IL_006e;
		}
	}
	{
		double L_10 = V_3;
		if ((((double)L_10) < ((double)(63.0))))
		{
			goto IL_0067;
		}
	}
	{
		double L_11 = V_3;
		G_B8_0 = ((float)((double)il2cpp_codegen_subtract((64.0), L_11)));
		goto IL_0073;
	}

IL_0067:
	{
		G_B8_0 = (1.0f);
		goto IL_0073;
	}

IL_006e:
	{
		G_B8_0 = (0.0f);
	}

IL_0073:
	{
		V_4 = G_B8_0;
		// var c = new Color(1.0f, 1.0f, 1.0f, a);
		float L_12 = V_4;
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_5), (1.0f), (1.0f), (1.0f), L_12, NULL);
		// tex.SetPixel(R + 0 + x, R + 0 + y, c);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = V_5;
		NullCheck(L_13);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_13, ((int32_t)il2cpp_codegen_add(((int32_t)64), L_14)), ((int32_t)il2cpp_codegen_add(((int32_t)64), L_15)), L_16, NULL);
		// tex.SetPixel(R - 1 - x, R + 0 + y, c);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = V_5;
		NullCheck(L_17);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_17, ((int32_t)il2cpp_codegen_subtract(((int32_t)63), L_18)), ((int32_t)il2cpp_codegen_add(((int32_t)64), L_19)), L_20, NULL);
		// tex.SetPixel(R + 0 + x, R - 1 - y, c);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = V_5;
		NullCheck(L_21);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_21, ((int32_t)il2cpp_codegen_add(((int32_t)64), L_22)), ((int32_t)il2cpp_codegen_subtract(((int32_t)63), L_23)), L_24, NULL);
		// tex.SetPixel(R - 1 - x, R - 1 - y, c);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_0;
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_5;
		NullCheck(L_25);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_25, ((int32_t)il2cpp_codegen_subtract(((int32_t)63), L_26)), ((int32_t)il2cpp_codegen_subtract(((int32_t)63), L_27)), L_28, NULL);
		// for (int y = 0; y < R; ++y) {
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00d1:
	{
		// for (int y = 0; y < R; ++y) {
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)64))))
		{
			goto IL_002e;
		}
	}
	{
		// for (int x = 0; x < R; ++x) {
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00dd:
	{
		// for (int x = 0; x < R; ++x) {
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)64))))
		{
			goto IL_0027;
		}
	}
	{
		// tex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = V_0;
		NullCheck(L_33);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_33, NULL);
		// return _circle32Texture = tex;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_35 = L_34;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____circle32Texture_11 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____circle32Texture_11), (void*)L_35);
		return L_35;
	}

IL_00f3:
	{
		// return _circle32Texture;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_36 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____circle32Texture_11;
		return L_36;
	}
}
// UnityEngine.Sprite Fusion.StatsInternal.FusionStatsUtilities::get_CircleSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* FusionStatsUtilities_get_CircleSprite_m67796DF7F4AC7AE651A196E1A9F37296F68C3CF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_circle32Sprite == null) {
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____circle32Sprite_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0064;
		}
	}
	{
		// _circle32Sprite = Sprite.Create(Circle32Texture, new Rect(0, 0, R * 2, R * 2), new Vector2(R , R), 10f, 0, SpriteMeshType.Tight, new Vector4(R-1, R-1, R-1, R-1));
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = FusionStatsUtilities_get_Circle32Texture_m0A5924BDC2322AB6031675581430FB2FF1932B8D(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_3), (0.0f), (0.0f), (128.0f), (128.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), (64.0f), (64.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_5), (63.0f), (63.0f), (63.0f), (63.0f), /*hidden argument*/NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6;
		L_6 = Sprite_Create_m4A5CCF67CAA13E470FD1CBBDEB08122733C4657B(L_2, L_3, L_4, (10.0f), 0, 1, L_5, NULL);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____circle32Sprite_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____circle32Sprite_12), (void*)L_6);
	}

IL_0064:
	{
		// return _circle32Sprite;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = ((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->____circle32Sprite_12;
		return L_7;
	}
}
// System.Boolean Fusion.StatsInternal.FusionStatsUtilities::TryFindActiveRunner(FusionStats,Fusion.NetworkRunner&,System.Nullable`1<Fusion.SimulationModes>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FusionStatsUtilities_TryFindActiveRunner_m38423B785327D741D81696021B39DE67D8E5DC3B (FusionStats_t0361C00ADA9A527C7EF810A31F4D964A0DAB864F* ___0_fusionStats, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A** ___1_runner, Nullable_1_tA7AB74DCC49231122BDE6A56B38A849C29538EF7 ___2_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m8ED79880725281B975FFF0D1E75C8C3F3018B842_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m80B7F96D7D17A583B34736C90E2B91A8FB71419D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* V_2 = NULL;
	{
		// var gameObject = fusionStats.gameObject;
		FusionStats_t0361C00ADA9A527C7EF810A31F4D964A0DAB864F* L_0 = ___0_fusionStats;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		// var gameobjScene = fusionStats.gameObject.scene;
		FusionStats_t0361C00ADA9A527C7EF810A31F4D964A0DAB864F* L_2 = ___0_fusionStats;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_3, NULL);
		V_0 = L_4;
		// var enumerator = NetworkRunner.GetInstancesEnumerator();
		il2cpp_codegen_runtime_class_init_inline(NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_il2cpp_TypeInfo_var);
		Enumerator_t8AAA4022A698086F7510F9E8DB4C7071007F87C4 L_5;
		L_5 = NetworkRunner_GetInstancesEnumerator_mF6FEA15C43442E12763D07EA57BDEF49D5B38E1F(NULL);
		V_1 = L_5;
		goto IL_006c;
	}

IL_001b:
	{
		// var found = enumerator.Current;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_6;
		L_6 = Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_inline((&V_1), Enumerator_get_Current_m2673A683AEE483019CC83F8CB3C6C073B5E88626_RuntimeMethod_var);
		V_2 = L_6;
		// if (found && found.IsRunning) {
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_9 = V_2;
		NullCheck(L_9);
		bool L_10;
		L_10 = NetworkRunner_get_IsRunning_mD44E761C42BFE8D5A4580B915F1204E38F47C570(L_9, NULL);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		// if (mode.HasValue && (mode.Value & found.Mode) == 0) {
		bool L_11;
		L_11 = Nullable_1_get_HasValue_m8ED79880725281B975FFF0D1E75C8C3F3018B842_inline((&___2_mode), Nullable_1_get_HasValue_m8ED79880725281B975FFF0D1E75C8C3F3018B842_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_12;
		L_12 = Nullable_1_get_Value_m80B7F96D7D17A583B34736C90E2B91A8FB71419D((&___2_mode), Nullable_1_get_Value_m80B7F96D7D17A583B34736C90E2B91A8FB71419D_RuntimeMethod_var);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = NetworkRunner_get_Mode_m2B4077D7A5AF533F89A3098FD6A824C32CD080BF(L_13, NULL);
		if (!((int32_t)((int32_t)L_12&(int32_t)L_14)))
		{
			goto IL_006c;
		}
	}

IL_004c:
	{
		// if (fusionStats.EnforceSingle) {
		FusionStats_t0361C00ADA9A527C7EF810A31F4D964A0DAB864F* L_15 = ___0_fusionStats;
		NullCheck(L_15);
		bool L_16 = L_15->___EnforceSingle_52;
		if (!L_16)
		{
			goto IL_0059;
		}
	}
	{
		// runner = found;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A** L_17 = ___1_runner;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_18 = V_2;
		*((RuntimeObject**)L_17) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)L_18);
		// return true;
		return (bool)1;
	}

IL_0059:
	{
		// if (found.SimulationUnityScene == gameobjScene) {
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_19 = V_2;
		NullCheck(L_19);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_20;
		L_20 = NetworkRunner_get_SimulationUnityScene_mD1F08EE8BF063672E6308279336BBF3135012E65(L_19, NULL);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_21 = V_0;
		bool L_22;
		L_22 = Scene_op_Equality_m9FC9CA5FAE2FF94568EC2AB878B64ED8DC53CF68(L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_006c;
		}
	}
	{
		// runner = found;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A** L_23 = ___1_runner;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_24 = V_2;
		*((RuntimeObject**)L_23) = (RuntimeObject*)L_24;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_23, (void*)(RuntimeObject*)L_24);
		// return true;
		return (bool)1;
	}

IL_006c:
	{
		// while (enumerator.MoveNext()) {
		bool L_25;
		L_25 = Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76((&V_1), Enumerator_MoveNext_m6DD54CE160FCFF508AFBFC6C3124616996B72A76_RuntimeMethod_var);
		if (L_25)
		{
			goto IL_001b;
		}
	}
	{
		// runner = null;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A** L_26 = ___1_runner;
		*((RuntimeObject**)L_26) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_26, (void*)(RuntimeObject*)NULL);
		// return false;
		return (bool)0;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::CreateRectTransform(UnityEngine.Transform,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, String_t* ___1_name, bool ___2_expand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var go = new GameObject(name);
		String_t* L_0 = ___1_name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, L_0, NULL);
		// var rt = go.AddComponent<RectTransform>();
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_1, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		V_0 = L_2;
		// rt.SetParent(parent);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___0_parent;
		NullCheck(L_3);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_4, NULL);
		// rt.localPosition = default;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_6, NULL);
		// rt.localScale = default;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		NullCheck(L_7);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_8, NULL);
		// rt.localScale = new Vector3(1, 1, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
		// if (expand) {
		bool L_11 = ___2_expand;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		// ExpandAnchor(rt);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_13 = V_2;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = FusionStatsUtilities_ExpandAnchor_mF92B15AFF1097DF8830C7FFD281DABD78F3400A2(L_12, L_13, NULL);
	}

IL_005e:
	{
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::CreateRectTransform(System.String,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_CreateRectTransform_m1675E9484D572892003A9137DC5F14DA637DF187 (String_t* ___0_name, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_expand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var go = new GameObject(name);
		String_t* L_0 = ___0_name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, L_0, NULL);
		// var rt = go.AddComponent<RectTransform>();
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_1, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		V_0 = L_2;
		// rt.SetParent(parent);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___1_parent;
		NullCheck(L_3);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_4, NULL);
		// rt.localPosition = default;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_6, NULL);
		// rt.localScale = default;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		NullCheck(L_7);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_8, NULL);
		// rt.localScale = new Vector3(1, 1, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
		// if (expand) {
		bool L_11 = ___2_expand;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		// ExpandAnchor(rt);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_13 = V_2;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = FusionStatsUtilities_ExpandAnchor_mF92B15AFF1097DF8830C7FFD281DABD78F3400A2(L_12, L_13, NULL);
	}

IL_005e:
	{
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.UI.Dropdown Fusion.StatsInternal.FusionStatsUtilities::CreateDropdown(UnityEngine.RectTransform,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* FusionStatsUtilities_CreateDropdown_mFFB3B7571078BBF68382CB56885566823976332F (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, float ___1_padding, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_fontColor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_mDE25E2D9598E3478E8CD12EA6C61F743882E27B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m0E1C6713C85CAAB22DE299872377285F55C106D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15F6EFCDBE17EFB279217A9B699852DE1E193450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABA4B0EF423AE8EF8E94BF8F8B6A69E900270F03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE85487689556D8DE56201A0CD308B4B5B114A4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC084887FC479038DDA12E60E8FA1EEF449CA1A07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF07FCB7FD52F00A3F38E8D87EC9B368CC5533A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7EBB41AAA6DCE2694BE6E79BACC448EECCB1F3C);
		s_Il2CppMethodInitialized = true;
	}
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_0 = NULL;
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* V_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_2 = NULL;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* V_3 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_4 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_5 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_6 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_7;
	memset((&V_7), 0, sizeof(V_7));
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// var dropRT = rt.CreateRectTransform("Dropdown")
		//   .ExpandAnchor(-MARGIN);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rt;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_0, _stringLiteralCAF07FCB7FD52F00A3F38E8D87EC9B368CC5533A, (bool)0, NULL);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_2), ((float)((int32_t)-6)), /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = FusionStatsUtilities_ExpandAnchor_mF92B15AFF1097DF8830C7FFD281DABD78F3400A2(L_1, L_2, NULL);
		// var dropimg = dropRT.gameObject.AddComponent<UI.Image>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = L_3;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_5, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		V_0 = L_6;
		// var dropdown = dropRT.gameObject.AddComponent<UI.Dropdown>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = L_4;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_9;
		L_9 = GameObject_AddComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_mDE25E2D9598E3478E8CD12EA6C61F743882E27B7(L_8, GameObject_AddComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_mDE25E2D9598E3478E8CD12EA6C61F743882E27B7_RuntimeMethod_var);
		V_1 = L_9;
		// dropimg.color = new Color(0, 0, 0, 0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_11), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// dropdown.image = dropimg;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_12 = V_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = V_0;
		NullCheck(L_12);
		Selectable_set_image_mE9DDDBE46C5A435F9788E88EEF0187B5E09A30A8_inline(L_12, L_13, NULL);
		// var templateRT = dropRT.CreateRectTransform("Template", true)
		//   .ExpandTopAnchor()
		//   .SetOffsets(0, 0, -150, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_7, _stringLiteralBE85487689556D8DE56201A0CD308B4B5B114A4B, (bool)1, NULL);
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_15 = V_7;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16;
		L_16 = FusionStatsUtilities_ExpandTopAnchor_m530C8708BADC6F38F24CA63D215CEA2FDFCBF918(L_14, L_15, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17;
		L_17 = FusionStatsUtilities_SetOffsets_mF86A3F48C4AE6F2C79B9C8ABE0A344FF76A25189(L_16, (0.0f), (0.0f), (-150.0f), (0.0f), NULL);
		V_2 = L_17;
		// var contentRT = templateRT.CreateRectTransform("Content")
		//   .ExpandTopAnchor()
		//   .SetOffsets(0, 0, -150, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = V_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19;
		L_19 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_18, _stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1, (bool)0, NULL);
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_20 = V_7;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21;
		L_21 = FusionStatsUtilities_ExpandTopAnchor_m530C8708BADC6F38F24CA63D215CEA2FDFCBF918(L_19, L_20, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22;
		L_22 = FusionStatsUtilities_SetOffsets_mF86A3F48C4AE6F2C79B9C8ABE0A344FF76A25189(L_21, (0.0f), (0.0f), (-150.0f), (0.0f), NULL);
		// var itemRT = contentRT.CreateRectTransform("Item", true)
		//   .SetAnchors(0, 1, 1, 1)
		//   .SetPivot(0.5f, 1)
		//   .SetSizeDelta(0, 50);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23;
		L_23 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_22, _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, (bool)1, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24;
		L_24 = FusionStatsUtilities_SetAnchors_mAD5F796E116A48BF7F473664EDDF54E92C501BB8(L_23, (0.0f), (1.0f), (1.0f), (1.0f), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_25;
		L_25 = FusionStatsUtilities_SetPivot_m69CD470096B35900B4542114B6E2A2042867ABC3(L_24, (0.5f), (1.0f), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26;
		L_26 = FusionStatsUtilities_SetSizeDelta_m804D1D4527F390D49DE0E00EE7C41BF68E707E54(L_25, (0.0f), (50.0f), NULL);
		// var toggle = itemRT.gameObject.AddComponent<UI.Toggle>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = L_26;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		NullCheck(L_28);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_29;
		L_29 = GameObject_AddComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m0E1C6713C85CAAB22DE299872377285F55C106D1(L_28, GameObject_AddComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m0E1C6713C85CAAB22DE299872377285F55C106D1_RuntimeMethod_var);
		V_3 = L_29;
		// toggle.colors = new UI.ColorBlock() {
		//   colorMultiplier = 1,
		//   normalColor = new Color(0.2f, 0.2f, 0.2f, 1f),
		//   highlightedColor = new Color(.3f, .3f, .3f, 1f),
		//   pressedColor = new Color(.4f, .4f, .4f, 4f),
		//   selectedColor = new Color(.25f, .25f, .25f, 1f),
		// };
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_30 = V_3;
		il2cpp_codegen_initobj((&V_8), sizeof(ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11));
		ColorBlock_set_colorMultiplier_m920A048B95541DB0E92AF4AF3894BE7CD2D37102_inline((&V_8), (1.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		memset((&L_31), 0, sizeof(L_31));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_31), (0.200000003f), (0.200000003f), (0.200000003f), (1.0f), /*hidden argument*/NULL);
		ColorBlock_set_normalColor_m3EBF594F6FA2C6494ACA9FCB9B458807D85B96F8_inline((&V_8), L_31, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
		memset((&L_32), 0, sizeof(L_32));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_32), (0.300000012f), (0.300000012f), (0.300000012f), (1.0f), /*hidden argument*/NULL);
		ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline((&V_8), L_32, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		memset((&L_33), 0, sizeof(L_33));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_33), (0.400000006f), (0.400000006f), (0.400000006f), (4.0f), /*hidden argument*/NULL);
		ColorBlock_set_pressedColor_m644C938090857AB07C57B25FE53F6DC2BB0DD5A8_inline((&V_8), L_33, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		memset((&L_34), 0, sizeof(L_34));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_34), (0.25f), (0.25f), (0.25f), (1.0f), /*hidden argument*/NULL);
		ColorBlock_set_selectedColor_m76FEFB1148798B7A356C974CDEA3BA2E2E3C1D21_inline((&V_8), L_34, NULL);
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_35 = V_8;
		NullCheck(L_30);
		Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A(L_30, L_35, NULL);
		// var itemBackRT = itemRT.CreateRectTransform("Item Background", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_36 = L_27;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_37;
		L_37 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_36, _stringLiteralC084887FC479038DDA12E60E8FA1EEF449CA1A07, (bool)1, NULL);
		// var itemBack = itemBackRT.gameObject.AddComponent<UI.Image>();
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		NullCheck(L_38);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_39;
		L_39 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_38, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		V_4 = L_39;
		// var itemChckRT = itemRT.CreateRectTransform("Item Checkmark", true)
		//   .SetAnchors(0.05f, 0.1f, 0.1f, 0.9f)
		//   .SetOffsets(0, 0, 0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_40 = L_36;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_41;
		L_41 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_40, _stringLiteral15F6EFCDBE17EFB279217A9B699852DE1E193450, (bool)1, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_42;
		L_42 = FusionStatsUtilities_SetAnchors_mAD5F796E116A48BF7F473664EDDF54E92C501BB8(L_41, (0.0500000007f), (0.100000001f), (0.100000001f), (0.899999976f), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_43;
		L_43 = FusionStatsUtilities_SetOffsets_mF86A3F48C4AE6F2C79B9C8ABE0A344FF76A25189(L_42, (0.0f), (0.0f), (0.0f), (0.0f), NULL);
		// var check = itemChckRT.gameObject.AddComponent<UI.Image>();
		NullCheck(L_43);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_43, NULL);
		NullCheck(L_44);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_45;
		L_45 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_44, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		V_5 = L_45;
		// check.sprite = CircleSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = V_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_47;
		L_47 = FusionStatsUtilities_get_CircleSprite_m67796DF7F4AC7AE651A196E1A9F37296F68C3CF1(NULL);
		NullCheck(L_46);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_46, L_47, NULL);
		// check.preserveAspect = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = V_5;
		NullCheck(L_48);
		Image_set_preserveAspect_mF465AFD1313C0F002B37C8B86C75F98CB72A4098(L_48, (bool)1, NULL);
		// var itemLablRT = itemRT.CreateRectTransform("Item Label", true)
		//   .SetAnchors(0.15f, 0.9f, 0.1f, 0.9f)
		//   .SetOffsets(0, 0, 0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_49;
		L_49 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_40, _stringLiteralABA4B0EF423AE8EF8E94BF8F8B6A69E900270F03, (bool)1, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_50;
		L_50 = FusionStatsUtilities_SetAnchors_mAD5F796E116A48BF7F473664EDDF54E92C501BB8(L_49, (0.150000006f), (0.899999976f), (0.100000001f), (0.899999976f), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_51;
		L_51 = FusionStatsUtilities_SetOffsets_mF86A3F48C4AE6F2C79B9C8ABE0A344FF76A25189(L_50, (0.0f), (0.0f), (0.0f), (0.0f), NULL);
		// var itemLabl = itemLablRT.AddText("Sample", TextAnchor.UpperLeft, fontColor);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52 = ___2_fontColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_53;
		L_53 = FusionStatsUtilities_AddText_mFD8B562B4998731594FD883780675BEDCE5B5035(L_51, _stringLiteralE7EBB41AAA6DCE2694BE6E79BACC448EECCB1F3C, 0, L_52, NULL);
		V_6 = L_53;
		// itemLabl.alignment = TextAnchor.MiddleLeft;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_54 = V_6;
		NullCheck(L_54);
		Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A(L_54, 3, NULL);
		// itemLabl.resizeTextMaxSize = 24;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_55 = V_6;
		NullCheck(L_55);
		Text_set_resizeTextMaxSize_m25EB2C9302AA9354237A2F56BB3E019192C6015B(L_55, ((int32_t)24), NULL);
		// toggle.targetGraphic = itemBack;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_56 = V_3;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_57 = V_4;
		NullCheck(L_56);
		Selectable_set_targetGraphic_m23DB0DF4E5F2DABD50C662C708B4555162171FB9(L_56, L_57, NULL);
		// toggle.graphic = check;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_58 = V_3;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_59 = V_5;
		NullCheck(L_58);
		L_58->___graphic_21 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&L_58->___graphic_21), (void*)L_59);
		// toggle.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_60 = V_3;
		NullCheck(L_60);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_60, (bool)1, NULL);
		// dropdown.template = templateRT;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_61 = V_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_62 = V_2;
		NullCheck(L_61);
		Dropdown_set_template_m13FE93E0ED2414A5D8D4595D3123DDFD726DB619(L_61, L_62, NULL);
		// dropdown.itemText = itemLabl;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_63 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_64 = V_6;
		NullCheck(L_63);
		Dropdown_set_itemText_m901981335866C0A856E31D7D1C87C7D8E76FBFAA(L_63, L_64, NULL);
		// templateRT.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_65 = V_2;
		NullCheck(L_65);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_65, NULL);
		NullCheck(L_66);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_66, (bool)0, NULL);
		// return dropdown;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_67 = V_1;
		return L_67;
	}
}
// UnityEngine.UI.Text Fusion.StatsInternal.FusionStatsUtilities::AddText(UnityEngine.RectTransform,System.String,UnityEngine.TextAnchor,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* FusionStatsUtilities_AddText_mFD8B562B4998731594FD883780675BEDCE5B5035 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, String_t* ___1_label, int32_t ___2_anchor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_FontColor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var text = rt.gameObject.AddComponent<UI.Text>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rt;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2;
		L_2 = GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9(L_1, GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9_RuntimeMethod_var);
		// text.text = label;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = L_2;
		String_t* L_4 = ___1_label;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// text.color = FontColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___3_FontColor;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// text.font = Font;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = L_5;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_8;
		L_8 = FusionStatsUtilities_get_Font_m0A68FC691677A6E5C3D40EF80F03A21A5884BCB6(NULL);
		NullCheck(L_7);
		Text_set_font_mA0D2999281A72029A5BC7294A886C5674F07DC5F(L_7, L_8, NULL);
		// text.alignment = anchor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = L_7;
		int32_t L_10 = ___2_anchor;
		NullCheck(L_9);
		Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A(L_9, L_10, NULL);
		// text.fontSize = FONT_SIZE;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = L_9;
		NullCheck(L_11);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_11, ((int32_t)12), NULL);
		// text.raycastTarget = false;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = L_11;
		NullCheck(L_12);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_12, (bool)0);
		// text.resizeTextMinSize = FONT_SIZE_MIN;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = L_12;
		NullCheck(L_13);
		Text_set_resizeTextMinSize_m1DC5160514ED872A8C572024A94D7EA9D6357655(L_13, 4, NULL);
		// text.resizeTextMaxSize = FONT_SIZE_MAX;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = L_13;
		NullCheck(L_14);
		Text_set_resizeTextMaxSize_m25EB2C9302AA9354237A2F56BB3E019192C6015B(L_14, ((int32_t)200), NULL);
		// text.resizeTextForBestFit = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = L_14;
		NullCheck(L_15);
		Text_set_resizeTextForBestFit_m1376BB9FDBAC5571E0F24564E22391AC8EB89A35(L_15, (bool)1, NULL);
		// return text;
		return L_15;
	}
}
// System.Void Fusion.StatsInternal.FusionStatsUtilities::MakeButton(UnityEngine.RectTransform,UnityEngine.UI.Button&,System.String,System.String,UnityEngine.UI.Text&,UnityEngine.UI.Text&,UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionStatsUtilities_MakeButton_m413E63BD1103CA84F7ED6387FF4CFD0E3AD64F55 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_parent, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** ___1_button, String_t* ___2_iconText, String_t* ___3_labelText, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** ___4_icon, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** ___5_text, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___6_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21C54BF860BF41F6CB5FA90618AD96345DB385CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_2 = NULL;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var rt = parent.CreateRectTransform(labelText);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_parent;
		String_t* L_1 = ___3_labelText;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_0, L_1, (bool)0, NULL);
		V_0 = L_2;
		// button = rt.gameObject.AddComponent<UI.Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** L_3 = ___1_button;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = V_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6;
		L_6 = GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC(L_5, GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC_RuntimeMethod_var);
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_6);
		// var iconRt = rt.CreateRectTransform("Icon", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_7, _stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37, (bool)1, NULL);
		V_1 = L_8;
		// iconRt.anchorMin = new Vector2(0, BTTN_LBL_NORM_HGHT);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), (0.0f), (0.174999997f), /*hidden argument*/NULL);
		NullCheck(L_9);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_9, L_10, NULL);
		// iconRt.anchorMax = new Vector2(1, 1.0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_11, L_12, NULL);
		// iconRt.offsetMin = new Vector2(0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_13, L_14, NULL);
		// iconRt.offsetMax = new Vector2(0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_15, L_16, NULL);
		// icon = iconRt.gameObject.AddComponent<UI.Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_17 = ___4_icon;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = V_1;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		NullCheck(L_19);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20;
		L_20 = GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9(L_19, GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9_RuntimeMethod_var);
		*((RuntimeObject**)L_17) = (RuntimeObject*)L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)L_20);
		// button.targetGraphic = icon;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** L_21 = ___1_button;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_22 = *((Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098**)L_21);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_23 = ___4_icon;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_23);
		NullCheck(L_22);
		Selectable_set_targetGraphic_m23DB0DF4E5F2DABD50C662C708B4555162171FB9(L_22, L_24, NULL);
		// icon.font = FusionStatsUtilities.Font;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_25 = ___4_icon;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_25);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_27;
		L_27 = FusionStatsUtilities_get_Font_m0A68FC691677A6E5C3D40EF80F03A21A5884BCB6(NULL);
		NullCheck(L_26);
		Text_set_font_mA0D2999281A72029A5BC7294A886C5674F07DC5F(L_26, L_27, NULL);
		// icon.text = iconText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_28 = ___4_icon;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_28);
		String_t* L_30 = ___2_iconText;
		NullCheck(L_29);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_30);
		// icon.alignment = TextAnchor.MiddleCenter;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_31 = ___4_icon;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_32 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_31);
		NullCheck(L_32);
		Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A(L_32, 4, NULL);
		// icon.fontStyle = FontStyle.Bold;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_33 = ___4_icon;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_34 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_33);
		NullCheck(L_34);
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_34, 1, NULL);
		// icon.fontSize = BTTN_FONT_SIZE_MAX;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_35 = ___4_icon;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_36 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_35);
		NullCheck(L_36);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_36, ((int32_t)100), NULL);
		// icon.resizeTextMinSize = 0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_37 = ___4_icon;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_38 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_37);
		NullCheck(L_38);
		Text_set_resizeTextMinSize_m1DC5160514ED872A8C572024A94D7EA9D6357655(L_38, 0, NULL);
		// icon.resizeTextMaxSize = BTTN_FONT_SIZE_MAX;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_39 = ___4_icon;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_40 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_39);
		NullCheck(L_40);
		Text_set_resizeTextMaxSize_m25EB2C9302AA9354237A2F56BB3E019192C6015B(L_40, ((int32_t)100), NULL);
		// icon.alignByGeometry = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_41 = ___4_icon;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_42 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_41);
		NullCheck(L_42);
		Text_set_alignByGeometry_mB427C41097943370E11579A3DA822A3295836CE2(L_42, (bool)1, NULL);
		// icon.resizeTextForBestFit = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_43 = ___4_icon;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_44 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_43);
		NullCheck(L_44);
		Text_set_resizeTextForBestFit_m1376BB9FDBAC5571E0F24564E22391AC8EB89A35(L_44, (bool)1, NULL);
		// var textRt = rt.CreateRectTransform("Label", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_45 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_46;
		L_46 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_45, _stringLiteral21C54BF860BF41F6CB5FA90618AD96345DB385CD, (bool)1, NULL);
		V_2 = L_46;
		// textRt.anchorMin = new Vector2(0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_47 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_48), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_47);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_47, L_48, NULL);
		// textRt.anchorMax = new Vector2(1, BTTN_LBL_NORM_HGHT);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_49 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_50), (1.0f), (0.174999997f), /*hidden argument*/NULL);
		NullCheck(L_49);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_49, L_50, NULL);
		// textRt.pivot = new Vector2(.5f, BTTN_LBL_NORM_HGHT * .5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_51 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_52), (0.5f), (0.0874999985f), /*hidden argument*/NULL);
		NullCheck(L_51);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_51, L_52, NULL);
		// textRt.offsetMin = new Vector2(0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_53 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_54), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_53);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_53, L_54, NULL);
		// textRt.offsetMax = new Vector2(0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_55 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_56), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_55);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_55, L_56, NULL);
		// text = textRt.gameObject.AddComponent<UI.Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_57 = ___5_text;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_58 = V_2;
		NullCheck(L_58);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59;
		L_59 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_58, NULL);
		NullCheck(L_59);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_60;
		L_60 = GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9(L_59, GameObject_AddComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mFECE312B08FC5FD0A081E51ACA01FAEFD6B841A9_RuntimeMethod_var);
		*((RuntimeObject**)L_57) = (RuntimeObject*)L_60;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_57, (void*)(RuntimeObject*)L_60);
		// text.color = Color.black;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_61 = ___5_text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_62 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_61);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63;
		L_63 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_62);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_62, L_63);
		// text.font = FusionStatsUtilities.Font;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_64 = ___5_text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_65 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_64);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_66;
		L_66 = FusionStatsUtilities_get_Font_m0A68FC691677A6E5C3D40EF80F03A21A5884BCB6(NULL);
		NullCheck(L_65);
		Text_set_font_mA0D2999281A72029A5BC7294A886C5674F07DC5F(L_65, L_66, NULL);
		// text.text = labelText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_67 = ___5_text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_68 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_67);
		String_t* L_69 = ___3_labelText;
		NullCheck(L_68);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_68, L_69);
		// text.alignment = TextAnchor.MiddleCenter;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_70 = ___5_text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_71 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_70);
		NullCheck(L_71);
		Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A(L_71, 4, NULL);
		// text.fontStyle = FontStyle.Bold;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_72 = ___5_text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_73 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_72);
		NullCheck(L_73);
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_73, 1, NULL);
		// text.fontSize = 0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_74 = ___5_text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_75 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_74);
		NullCheck(L_75);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_75, 0, NULL);
		// text.resizeTextMinSize = 0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_76 = ___5_text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_77 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_76);
		NullCheck(L_77);
		Text_set_resizeTextMinSize_m1DC5160514ED872A8C572024A94D7EA9D6357655(L_77, 0, NULL);
		// text.resizeTextMaxSize = BTTN_FONT_SIZE_MAX;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_78 = ___5_text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_79 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_78);
		NullCheck(L_79);
		Text_set_resizeTextMaxSize_m25EB2C9302AA9354237A2F56BB3E019192C6015B(L_79, ((int32_t)100), NULL);
		// text.resizeTextForBestFit = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_80 = ___5_text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_81 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_80);
		NullCheck(L_81);
		Text_set_resizeTextForBestFit_m1376BB9FDBAC5571E0F24564E22391AC8EB89A35(L_81, (bool)1, NULL);
		// text.horizontalOverflow = HorizontalWrapMode.Overflow;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** L_82 = ___5_text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_83 = *((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62**)L_82);
		NullCheck(L_83);
		Text_set_horizontalOverflow_m10AAFBA65FD7F4B1934B5D628B3E70D75D02FFD6(L_83, 1, NULL);
		// UI.ColorBlock colors = button.colors;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** L_84 = ___1_button;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_85 = *((Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098**)L_84);
		NullCheck(L_85);
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_86;
		L_86 = Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750_inline(L_85, NULL);
		V_3 = L_86;
		// colors.normalColor = new Color(.0f, .0f, .0f, BTTN_ALPHA);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_87;
		memset((&L_87), 0, sizeof(L_87));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_87), (0.0f), (0.0f), (0.0f), (0.925000012f), /*hidden argument*/NULL);
		ColorBlock_set_normalColor_m3EBF594F6FA2C6494ACA9FCB9B458807D85B96F8_inline((&V_3), L_87, NULL);
		// colors.pressedColor = new Color(.5f, .5f, .5f, BTTN_ALPHA);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_88;
		memset((&L_88), 0, sizeof(L_88));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_88), (0.5f), (0.5f), (0.5f), (0.925000012f), /*hidden argument*/NULL);
		ColorBlock_set_pressedColor_m644C938090857AB07C57B25FE53F6DC2BB0DD5A8_inline((&V_3), L_88, NULL);
		// colors.highlightedColor = new Color(.3f, .3f, .3f, BTTN_ALPHA);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_89;
		memset((&L_89), 0, sizeof(L_89));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_89), (0.300000012f), (0.300000012f), (0.300000012f), (0.925000012f), /*hidden argument*/NULL);
		ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline((&V_3), L_89, NULL);
		// colors.selectedColor = new Color(.0f, .0f, .0f, BTTN_ALPHA);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_90;
		memset((&L_90), 0, sizeof(L_90));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_90), (0.0f), (0.0f), (0.0f), (0.925000012f), /*hidden argument*/NULL);
		ColorBlock_set_selectedColor_m76FEFB1148798B7A356C974CDEA3BA2E2E3C1D21_inline((&V_3), L_90, NULL);
		// button.colors = colors;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** L_91 = ___1_button;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_92 = *((Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098**)L_91);
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_93 = V_3;
		NullCheck(L_92);
		Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A(L_92, L_93, NULL);
		// button.onClick.AddListener(action);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** L_94 = ___1_button;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_95 = *((Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098**)L_94);
		NullCheck(L_95);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_96;
		L_96 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_95, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_97 = ___6_action;
		NullCheck(L_96);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_96, L_97, NULL);
		// }
		return;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::AddHorizontalLayoutGroup(UnityEngine.RectTransform,System.Single,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_AddHorizontalLayoutGroup_m6D58F85FF9FC0AED3F06B5FDD7BE61C6A3AF25AF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, float ___1_spacing, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___2_rgtPad, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___3_lftPad, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___4_topPad, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___5_botPad, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B2_0 = NULL;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B6_2 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B9_3 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B11_3 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B10_3 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	int32_t G_B12_3 = 0;
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* G_B12_4 = NULL;
	{
		// var group = rt.gameObject.AddComponent<UI.HorizontalLayoutGroup>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rt;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_2;
		L_2 = GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4(L_1, GameObject_AddComponent_TisHorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA_mDF05C81771378B8EEC5C01D6F0F85665B6BAB5D4_RuntimeMethod_var);
		// group.childControlHeight = true;
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_3 = L_2;
		NullCheck(L_3);
		HorizontalOrVerticalLayoutGroup_set_childControlHeight_m8DD189C9B1F926641F4A2FD41F41F2097E4D7751(L_3, (bool)1, NULL);
		// group.childControlWidth  = true;
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_4 = L_3;
		NullCheck(L_4);
		HorizontalOrVerticalLayoutGroup_set_childControlWidth_m0B9A78B8284E17C438645684984796AC0E2D1BD8(L_4, (bool)1, NULL);
		// group.spacing = spacing;
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_5 = L_4;
		float L_6 = ___1_spacing;
		NullCheck(L_5);
		HorizontalOrVerticalLayoutGroup_set_spacing_m90373F54D37DA8DFA90E102DC60EC33E542FD859(L_5, L_6, NULL);
		// group.padding = new RectOffset(
		//   rgtPad.HasValue ? rgtPad.Value : 0,
		//   lftPad.HasValue ? lftPad.Value : 0,
		//   topPad.HasValue ? topPad.Value : 0,
		//   botPad.HasValue ? botPad.Value : 0
		//   );
		bool L_7;
		L_7 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___2_rgtPad), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B1_0 = L_5;
		if (L_7)
		{
			G_B2_0 = L_5;
			goto IL_002c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_002c:
	{
		int32_t L_8;
		L_8 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&___2_rgtPad), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		bool L_9;
		L_9 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___3_lftPad), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if (L_9)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_003f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0046;
	}

IL_003f:
	{
		int32_t L_10;
		L_10 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&___3_lftPad), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0046:
	{
		bool L_11;
		L_11 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___4_topPad), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B7_0 = G_B6_0;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		if (L_11)
		{
			G_B8_0 = G_B6_0;
			G_B8_1 = G_B6_1;
			G_B8_2 = G_B6_2;
			goto IL_0052;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0059;
	}

IL_0052:
	{
		int32_t L_12;
		L_12 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&___4_topPad), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B9_0 = L_12;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0059:
	{
		bool L_13;
		L_13 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___5_botPad), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		if (L_13)
		{
			G_B11_0 = G_B9_0;
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_0065;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		G_B12_4 = G_B10_3;
		goto IL_006c;
	}

IL_0065:
	{
		int32_t L_14;
		L_14 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&___5_botPad), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B12_0 = L_14;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
		G_B12_4 = G_B11_3;
	}

IL_006c:
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_15 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		RectOffset__ctor_m30E309D1C1C0864870686683EF1FCA8DA791D179(L_15, G_B12_3, G_B12_2, G_B12_1, G_B12_0, NULL);
		NullCheck(G_B12_4);
		LayoutGroup_set_padding_m9F415F3402E5E4AE684FD153493CE3E8D64D3EB7(G_B12_4, L_15, NULL);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = ___0_rt;
		return L_16;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::AddVerticalLayoutGroup(UnityEngine.RectTransform,System.Single,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_AddVerticalLayoutGroup_m02E282D00785B5E72B7C0C5272F0A51289378729 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, float ___1_spacing, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___2_rgtPad, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___3_lftPad, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___4_topPad, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___5_botPad, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_m8FC80304C9EFC42F9CAE9588753536DC6F224521_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var group = rt.gameObject.AddComponent<UI.VerticalLayoutGroup>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rt;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* L_2;
		L_2 = GameObject_AddComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_m8FC80304C9EFC42F9CAE9588753536DC6F224521(L_1, GameObject_AddComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_m8FC80304C9EFC42F9CAE9588753536DC6F224521_RuntimeMethod_var);
		// group.childControlHeight = true;
		VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* L_3 = L_2;
		NullCheck(L_3);
		HorizontalOrVerticalLayoutGroup_set_childControlHeight_m8DD189C9B1F926641F4A2FD41F41F2097E4D7751(L_3, (bool)1, NULL);
		// group.childControlWidth = true;
		VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* L_4 = L_3;
		NullCheck(L_4);
		HorizontalOrVerticalLayoutGroup_set_childControlWidth_m0B9A78B8284E17C438645684984796AC0E2D1BD8(L_4, (bool)1, NULL);
		// group.spacing = spacing;
		float L_5 = ___1_spacing;
		NullCheck(L_4);
		HorizontalOrVerticalLayoutGroup_set_spacing_m90373F54D37DA8DFA90E102DC60EC33E542FD859(L_4, L_5, NULL);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ___0_rt;
		return L_6;
	}
}
// UnityEngine.UI.GridLayoutGroup Fusion.StatsInternal.FusionStatsUtilities::AddGridlLayoutGroup(UnityEngine.RectTransform,System.Single,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* FusionStatsUtilities_AddGridlLayoutGroup_mBBAB671B86201349ECA7C16B28A1A03D80DD389D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, float ___1_spacing, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___2_rgtPad, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___3_lftPad, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___4_topPad, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___5_botPad, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mC504566284D32F0111950B862D22B0602995290C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var group = rt.gameObject.AddComponent<UI.GridLayoutGroup>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rt;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_2;
		L_2 = GameObject_AddComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mC504566284D32F0111950B862D22B0602995290C(L_1, GameObject_AddComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mC504566284D32F0111950B862D22B0602995290C_RuntimeMethod_var);
		// group.spacing = new Vector2( spacing, spacing);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_3 = L_2;
		float L_4 = ___1_spacing;
		float L_5 = ___1_spacing;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		GridLayoutGroup_set_spacing_mA5550A683F7B4A7A1510B267B5D4CACEB8981306(L_3, L_6, NULL);
		// return group;
		return L_3;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::AddImage(UnityEngine.RectTransform,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_AddImage_m4CFD8E916D3FB2CDC5190CE01AF35E8458FF9A1D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var image = rt.gameObject.AddComponent<UI.Image>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rt;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_1, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		// image.color = color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_color;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// image.raycastTarget = false;
		NullCheck(L_3);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_3, (bool)0);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ___0_rt;
		return L_5;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::AddCircleSprite(UnityEngine.RectTransform,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_AddCircleSprite_m868ADFDE733471E4E602D2D7E132E05833094AB5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_0 = NULL;
	{
		// rt.AddCircleSprite(color, out var _);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rt;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_color;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = FusionStatsUtilities_AddCircleSprite_m69F6F36AB48728596D1995ED60B0413230DFD90C(L_0, L_1, (&V_0), NULL);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = ___0_rt;
		return L_3;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::AddCircleSprite(UnityEngine.RectTransform,UnityEngine.Color,UnityEngine.UI.Image&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_AddCircleSprite_m69F6F36AB48728596D1995ED60B0413230DFD90C (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** ___2_image, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// image = rt.gameObject.AddComponent<UI.Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** L_0 = ___2_image;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___0_rt;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_2, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_3);
		// image.sprite = CircleSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** L_4 = ___2_image;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = *((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E**)L_4);
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6;
		L_6 = FusionStatsUtilities_get_CircleSprite_m67796DF7F4AC7AE651A196E1A9F37296F68C3CF1(NULL);
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
		// image.type = UI.Image.Type.Sliced;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** L_7 = ___2_image;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = *((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E**)L_7);
		NullCheck(L_8);
		Image_set_type_mECB8D34772AA393FFBC867B03D18EA0F1A8546BF(L_8, 1, NULL);
		// image.pixelsPerUnitMultiplier = 100f;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** L_9 = ___2_image;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = *((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E**)L_9);
		NullCheck(L_10);
		Image_set_pixelsPerUnitMultiplier_m05DA43C7FD5B7B162FCB1ED6FCA850FD41AF7DC1(L_10, (100.0f), NULL);
		// image.color = color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** L_11 = ___2_image;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = *((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E**)L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___1_color;
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
		// image.raycastTarget = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** L_14 = ___2_image;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = *((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E**)L_14);
		NullCheck(L_15);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_15, (bool)0);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = ___0_rt;
		return L_16;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::ExpandAnchor(UnityEngine.RectTransform,System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_ExpandAnchor_mF92B15AFF1097DF8830C7FFD281DABD78F3400A2 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___1_padding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// rt.anchorMax = new Vector2(1, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rt;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_0, L_1, NULL);
		// rt.anchorMin = new Vector2(0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___0_rt;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_2, L_3, NULL);
		// rt.pivot = new Vector2(0.5f, 0.5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___0_rt;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_4, L_5, NULL);
		// if (padding.HasValue) {
		bool L_6;
		L_6 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___1_padding), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_007e;
		}
	}
	{
		// rt.offsetMin = new Vector2(padding.Value, padding.Value);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = ___0_rt;
		float L_8;
		L_8 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___1_padding), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_9;
		L_9 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___1_padding), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_7, L_10, NULL);
		// rt.offsetMax = new Vector2(-padding.Value, -padding.Value);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = ___0_rt;
		float L_12;
		L_12 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___1_padding), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_13;
		L_13 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___1_padding), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), ((-L_12)), ((-L_13)), /*hidden argument*/NULL);
		NullCheck(L_11);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_11, L_14, NULL);
		goto IL_009c;
	}

IL_007e:
	{
		// rt.sizeDelta = default;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = ___0_rt;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		NullCheck(L_15);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_15, L_16, NULL);
		// rt.anchoredPosition = default;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = ___0_rt;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_0;
		NullCheck(L_17);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_17, L_18, NULL);
	}

IL_009c:
	{
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = ___0_rt;
		return L_19;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::ExpandTopAnchor(UnityEngine.RectTransform,System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_ExpandTopAnchor_m530C8708BADC6F38F24CA63D215CEA2FDFCBF918 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___1_padding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// rt.anchorMax = new Vector2(1, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rt;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_0, L_1, NULL);
		// rt.anchorMin = new Vector2(0, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___0_rt;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_2, L_3, NULL);
		// rt.pivot = new Vector2(0.5f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___0_rt;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_4, L_5, NULL);
		// if (padding.HasValue) {
		bool L_6;
		L_6 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___1_padding), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_007e;
		}
	}
	{
		// rt.offsetMin = new Vector2(padding.Value, padding.Value);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = ___0_rt;
		float L_8;
		L_8 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___1_padding), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_9;
		L_9 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___1_padding), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_7, L_10, NULL);
		// rt.offsetMax = new Vector2(-padding.Value, -padding.Value);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = ___0_rt;
		float L_12;
		L_12 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___1_padding), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_13;
		L_13 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___1_padding), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), ((-L_12)), ((-L_13)), /*hidden argument*/NULL);
		NullCheck(L_11);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_11, L_14, NULL);
		goto IL_009c;
	}

IL_007e:
	{
		// rt.sizeDelta = default;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = ___0_rt;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		NullCheck(L_15);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_15, L_16, NULL);
		// rt.anchoredPosition = default;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = ___0_rt;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_0;
		NullCheck(L_17);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_17, L_18, NULL);
	}

IL_009c:
	{
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = ___0_rt;
		return L_19;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::ExpandMiddleLeft(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_ExpandMiddleLeft_mA2CD721239D300B4C3AE85ED3C98E0705A826C6A (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, const RuntimeMethod* method) 
{
	{
		// rt.anchorMax = new Vector2(0, 0.5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rt;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.0f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_0, L_1, NULL);
		// rt.anchorMin = new Vector2(0, 0.5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___0_rt;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (0.0f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_2, L_3, NULL);
		// rt.pivot = new Vector2(0.0f, .5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___0_rt;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_4, L_5, NULL);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ___0_rt;
		return L_6;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::SetSizeDelta(UnityEngine.RectTransform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_SetSizeDelta_m804D1D4527F390D49DE0E00EE7C41BF68E707E54 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, float ___1_offsetX, float ___2_offsetY, const RuntimeMethod* method) 
{
	{
		// rt.sizeDelta = new Vector2(offsetX, offsetY);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rt;
		float L_1 = ___1_offsetX;
		float L_2 = ___2_offsetY;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_0, L_3, NULL);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___0_rt;
		return L_4;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::SetOffsets(UnityEngine.RectTransform,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_SetOffsets_mF86A3F48C4AE6F2C79B9C8ABE0A344FF76A25189 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, float ___1_minX, float ___2_maxX, float ___3_minY, float ___4_maxY, const RuntimeMethod* method) 
{
	{
		// rt.offsetMin = new Vector2(minX, minY);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rt;
		float L_1 = ___1_minX;
		float L_2 = ___3_minY;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_0, L_3, NULL);
		// rt.offsetMax = new Vector2(maxX, maxY);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___0_rt;
		float L_5 = ___2_maxX;
		float L_6 = ___4_maxY;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_4, L_7, NULL);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = ___0_rt;
		return L_8;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::SetPivot(UnityEngine.RectTransform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_SetPivot_m69CD470096B35900B4542114B6E2A2042867ABC3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, float ___1_pivotX, float ___2_pivotY, const RuntimeMethod* method) 
{
	{
		// rt.pivot = new Vector2(pivotX, pivotY);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rt;
		float L_1 = ___1_pivotX;
		float L_2 = ___2_pivotY;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_0, L_3, NULL);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___0_rt;
		return L_4;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::SetAnchors(UnityEngine.RectTransform,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_SetAnchors_mAD5F796E116A48BF7F473664EDDF54E92C501BB8 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rt, float ___1_minX, float ___2_maxX, float ___3_minY, float ___4_maxY, const RuntimeMethod* method) 
{
	{
		// rt.anchorMin = new Vector2(minX, minY);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_rt;
		float L_1 = ___1_minX;
		float L_2 = ___3_minY;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_0, L_3, NULL);
		// rt.anchorMax = new Vector2(maxX, maxY);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___0_rt;
		float L_5 = ___2_maxX;
		float L_6 = ___4_maxY;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_4, L_7, NULL);
		// return rt;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = ___0_rt;
		return L_8;
	}
}
// UnityEngine.RectTransform Fusion.StatsInternal.FusionStatsUtilities::MakeGuides(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FusionStatsUtilities_MakeGuides_mEA6F5A51FE40CE859382DA3007A26554DA2D8A9B (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_parent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49EAC01F1FE1AB3E022D37BA90128673D8F2C359);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A261EB7E7319776625F5A015EA18053797E6890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8FD6D7A92A287CB3B46D187F7143A8EFF28600A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE32F71F01B50192A097A0D355AA140AD6D6D0529);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var outlineColor = new Color(0.5f, 0.5f, 0.5f, 0.75f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_0), (0.5f), (0.5f), (0.5f), (0.75f), NULL);
		// var rect = parent.CreateRectTransform("Guides", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_parent;
		il2cpp_codegen_runtime_class_init_inline(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_0, _stringLiteralC8FD6D7A92A287CB3B46D187F7143A8EFF28600A, (bool)1, NULL);
		// rect.SetSiblingIndex(0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = L_1;
		NullCheck(L_2);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_2, 0, NULL);
		// var back = rect.CreateRectTransform("Back", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = L_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_3, _stringLiteral4A261EB7E7319776625F5A015EA18053797E6890, (bool)1, NULL);
		// back.gameObject.AddComponent<UI.Image>().color = new Color(0.5f, 0.5f, 0.5f, 0.25f);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_5, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), (0.5f), (0.5f), (0.5f), (0.25f), /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// var left = rect.CreateRectTransform("Left", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = L_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_8, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, (bool)1, NULL);
		// left.anchorMin = new Vector2(-GUIDE_MARGIN, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), (-0.00999999978f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_10, L_11, NULL);
		// left.anchorMax = new Vector2(0, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = L_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_12, L_13, NULL);
		// left.gameObject.AddComponent<UI.Image>().color = outlineColor;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_14);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15;
		L_15 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_14, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = V_0;
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
		// var right = rect.CreateRectTransform("Right", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = L_8;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18;
		L_18 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_17, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, (bool)1, NULL);
		// right.anchorMin = new Vector2(1, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = L_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_19, L_20, NULL);
		// right.anchorMax = new Vector2(1 + GUIDE_MARGIN, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = L_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), (1.00999999f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_21, L_22, NULL);
		// right.gameObject.AddComponent<UI.Image>().color = outlineColor;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		NullCheck(L_23);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24;
		L_24 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_23, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = V_0;
		NullCheck(L_24);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_24, L_25);
		// var top = rect.CreateRectTransform("Top", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = L_17;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27;
		L_27 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_26, _stringLiteral1690B3E0A7ABF26C7432995D1219914EE9822024, (bool)1, NULL);
		// top.anchorMin = new Vector2(-GUIDE_MARGIN, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_28 = L_27;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_29), (-0.00999999978f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_28, L_29, NULL);
		// top.anchorMax = new Vector2(1 + GUIDE_MARGIN, 1 + GUIDE_MARGIN);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_30 = L_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), (1.00999999f), (1.00999999f), /*hidden argument*/NULL);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_30, L_31, NULL);
		// top.gameObject.AddComponent<UI.Image>().color = outlineColor;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		NullCheck(L_32);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33;
		L_33 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_32, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = V_0;
		NullCheck(L_33);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_33, L_34);
		// var bottom = rect.CreateRectTransform("Bottom", true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_35 = L_26;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_36;
		L_36 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_35, _stringLiteralB157F89A1C7FC50EFF8E1244B8DB0FF3A13F5118, (bool)1, NULL);
		// bottom.anchorMin = new Vector2(-GUIDE_MARGIN, -GUIDE_MARGIN);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_37 = L_36;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_38), (-0.00999999978f), (-0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_37);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_37, L_38, NULL);
		// bottom.anchorMax = new Vector2(1 + GUIDE_MARGIN, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_39 = L_37;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), (1.00999999f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_39, L_40, NULL);
		// bottom.gameObject.AddComponent<UI.Image>().color = outlineColor;
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_39, NULL);
		NullCheck(L_41);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42;
		L_42 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_41, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43 = V_0;
		NullCheck(L_42);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_42, L_43);
		// rect.CreateRectTransform("Center", true)
		//   .SetAnchors(0.5f - GUIDE_MARGIN_HALF, 0.5f + GUIDE_MARGIN_HALF, 0, 1)
		//   .AddImage(outlineColor);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_44 = L_35;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_45;
		L_45 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_44, _stringLiteral49EAC01F1FE1AB3E022D37BA90128673D8F2C359, (bool)1, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_46;
		L_46 = FusionStatsUtilities_SetAnchors_mAD5F796E116A48BF7F473664EDDF54E92C501BB8(L_45, (0.495000005f), (0.504999995f), (0.0f), (1.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_48;
		L_48 = FusionStatsUtilities_AddImage_m4CFD8E916D3FB2CDC5190CE01AF35E8458FF9A1D(L_46, L_47, NULL);
		// rect.CreateRectTransform("Middle", true)
		//   .SetAnchors(0, 1, 0.5f - GUIDE_MARGIN_HALF, 0.5f + GUIDE_MARGIN_HALF)
		//   .AddImage(outlineColor);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_49 = L_44;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_50;
		L_50 = FusionStatsUtilities_CreateRectTransform_m7A8DEE2C21D6DE7F2605BBD0543272BA88EC347D(L_49, _stringLiteralE32F71F01B50192A097A0D355AA140AD6D6D0529, (bool)1, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_51;
		L_51 = FusionStatsUtilities_SetAnchors_mAD5F796E116A48BF7F473664EDDF54E92C501BB8(L_50, (0.0f), (1.0f), (0.495000005f), (0.504999995f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_53;
		L_53 = FusionStatsUtilities_AddImage_m4CFD8E916D3FB2CDC5190CE01AF35E8458FF9A1D(L_51, L_52, NULL);
		// return rect;
		return L_49;
	}
}
// System.Void Fusion.StatsInternal.FusionStatsUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionStatsUtilities__cctor_mA5EA2B7B463E8768E545EE39812457942BA8CE83 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color DARK_GREEN = new Color(0.0f, 0.5f, 0.0f, 1.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.5f), (0.0f), (1.0f), /*hidden argument*/NULL);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->___DARK_GREEN_13 = L_0;
		// public static Color DARK_BLUE  = new Color(0.0f, 0.0f, 0.5f, 1.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (0.0f), (0.0f), (0.5f), (1.0f), /*hidden argument*/NULL);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->___DARK_BLUE_14 = L_1;
		// public static Color DARK_RED   = new Color(0.5f, 0.0f, 0.0f, 1.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (0.5f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		((FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_StaticFields*)il2cpp_codegen_static_fields_for(FusionStatsUtilities_t1851B9276BAE502D5513B089BE7109D57B565988_il2cpp_TypeInfo_var))->___DARK_RED_15 = L_2;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_ClampMagnitude_m9BF093877BD11282C41088022FE4AE70A3A0ECA9_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___0_vector), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___1_maxLength;
		float L_3 = ___1_maxLength;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___0_vector;
		float L_8 = L_7.___x_0;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___0_vector;
		float L_11 = L_10.___y_1;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		float L_13 = V_3;
		float L_14 = ___1_maxLength;
		float L_15 = V_4;
		float L_16 = ___1_maxLength;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), ((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)), /*hidden argument*/NULL);
		V_5 = L_17;
		goto IL_0045;
	}

IL_0040:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___0_vector;
		V_5 = L_18;
		goto IL_0045;
	}

IL_0045:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_5;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_newMoveDirection, const RuntimeMethod* method) 
{
	{
		// move = newMoveDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_newMoveDirection;
		__this->___move_4 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_newLookDirection, const RuntimeMethod* method) 
{
	{
		// look = newLookDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_newLookDirection;
		__this->___look_5 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___0_newJumpState, const RuntimeMethod* method) 
{
	{
		// jump = newJumpState;
		bool L_0 = ___0_newJumpState;
		__this->___jump_6 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___0_newSprintState, const RuntimeMethod* method) 
{
	{
		// sprint = newSprintState;
		bool L_0 = ___0_newSprintState;
		__this->___sprint_7 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = ___0_current;
		float L_2 = ___1_target;
		float* L_3 = ___2_currentVelocity;
		float L_4 = ___3_smoothTime;
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___0_r;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___1_g;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___2_b;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___3_a;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_c;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___0_c;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___0_c;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___0_c;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FusionUnityLogger_set_GetColor_m91F84BF1AEB7B3FB6A8B0E88DC68F2A261A9E58A_inline (FusionUnityLogger_t9C5D2A4EE508A6DA473225FD69B8F4091DA57E52* __this, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Func<object, int> GetColor { get; set; }
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_0 = ___0_value;
		__this->___U3CGetColorU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGetColorU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_c;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_c;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* NetworkSceneManagerBase_get_Runner_mF8B87B67B95D6AED3216762FE558FF8B54526DB4_inline (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, const RuntimeMethod* method) 
{
	{
		// public NetworkRunner Runner { get; private set; }
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = __this->___U3CRunnerU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkObjectFlagsExtensions_IsSceneObject_m6A4A526A6B0F8462ACC11AF9115DF2249C132D4E_inline (int32_t ___0_flags, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_flags;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&((int32_t)3840)))) == ((int32_t)((int32_t)2560)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkObjectFlagsExtensions_IsActivatedByUser_mFF4E12721461CDD53769DDD1D47ACC1C5230A0DB_inline (int32_t ___0_flags, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_flags;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&((int32_t)131072)))) == ((int32_t)((int32_t)131072)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkSceneManagerBase_set_Runner_mF623A2AFBBBC35E86821F577FDEFF7F58336EE31_inline (NetworkSceneManagerBase_t5707D66E4E1F09DCAD97D764A207A3E97C91FD39* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public NetworkRunner Runner { get; private set; }
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = ___0_value;
		__this->___U3CRunnerU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRunnerU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* NetworkRunner_get_Config_mD7D0F65C494EB1B08A7DC8A9F6C016588006BD0E_inline (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) 
{
	{
		NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* L_0 = __this->____config_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 NetworkRunner_get_MultiplePeerUnityScene_mDCE6D9D72D3127C35F74CADBC5EBC79C833699DF_inline (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) 
{
	{
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = __this->____multiplePeerUnityScene_57;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkRunner_get_IsMultiplePeerSceneTemp_mE64D915B99B214780B73BBAFEAE8EFADCF71D001_inline (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isMultiplePeerUnitySceneTemp_58;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FinishedLoadingDelegate_Invoke_m5985BF0FC5C6F837CBC645E1881BC19BD46B6648_inline (FinishedLoadingDelegate_t0FD5F1981B2CBE5654B9BDEC56732D8DC1797C80* __this, RuntimeObject* ___0_sceneObjects, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sceneObjects, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Selectable_set_image_mE9DDDBE46C5A435F9788E88EEF0187B5E09A30A8_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_TargetGraphic = value; }
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = ___0_value;
		__this->___m_TargetGraphic_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TargetGraphic_13), (void*)L_0);
		// set { m_TargetGraphic = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_colorMultiplier_m920A048B95541DB0E92AF4AF3894BE7CD2D37102_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float colorMultiplier   { get { return m_ColorMultiplier; } set { m_ColorMultiplier = value; } }
		float L_0 = ___0_value;
		__this->___m_ColorMultiplier_5 = L_0;
		// public float colorMultiplier   { get { return m_ColorMultiplier; } set { m_ColorMultiplier = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_normalColor_m3EBF594F6FA2C6494ACA9FCB9B458807D85B96F8_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color normalColor       { get { return m_NormalColor; } set { m_NormalColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___m_NormalColor_0 = L_0;
		// public Color normalColor       { get { return m_NormalColor; } set { m_NormalColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color highlightedColor  { get { return m_HighlightedColor; } set { m_HighlightedColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___m_HighlightedColor_1 = L_0;
		// public Color highlightedColor  { get { return m_HighlightedColor; } set { m_HighlightedColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_pressedColor_m644C938090857AB07C57B25FE53F6DC2BB0DD5A8_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color pressedColor      { get { return m_PressedColor; } set { m_PressedColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___m_PressedColor_2 = L_0;
		// public Color pressedColor      { get { return m_PressedColor; } set { m_PressedColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_selectedColor_m76FEFB1148798B7A356C974CDEA3BA2E2E3C1D21_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color selectedColor     { get { return m_SelectedColor; } set { m_SelectedColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___m_SelectedColor_3 = L_0;
		// public Color selectedColor     { get { return m_SelectedColor; } set { m_SelectedColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) 
{
	{
		// public ColorBlock        colors            { get { return m_Colors; } set { if (SetPropertyUtility.SetStruct(ref m_Colors, value))            OnSetProperty(); } }
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_0 = __this->___m_Colors_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF80192BF77173A803E05499C419C61B2BB5AFBA7_gshared_inline (Action_1_t4CEC111138E99082788091525503F9A7FEFF1BE9* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_current;
		float L_1 = ___0_current;
		float L_2 = ___1_target;
		float L_3;
		L_3 = Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline(L_1, L_2, NULL);
		___1_target = ((float)il2cpp_codegen_add(L_0, L_3));
		float L_4 = ___0_current;
		float L_5 = ___1_target;
		float* L_6 = ___2_currentVelocity;
		float L_7 = ___3_smoothTime;
		float L_8 = ___4_maxSpeed;
		float L_9 = ___5_deltaTime;
		float L_10;
		L_10 = Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248(L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		V_0 = L_10;
		goto IL_001c;
	}

IL_001c:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___0_current, float ___1_target, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___1_target;
		float L_1 = ___0_current;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = V_0;
		V_2 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___1_length;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___1_length;
		float L_5 = ___1_length;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
