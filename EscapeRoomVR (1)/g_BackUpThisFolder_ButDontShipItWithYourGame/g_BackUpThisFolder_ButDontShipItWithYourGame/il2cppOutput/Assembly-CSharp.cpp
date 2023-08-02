#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Puzzle[]
struct PuzzleU5BU5D_t297A940F0AD644097626BD07808C3D6B0828E2C1;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// AnimateHandOnInput
struct AnimateHandOnInput_tA9C05EB723ADD1EBE533839D67AD3A3A82F68156;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// ButtonTestScrpt
struct ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CardReader
struct CardReader_tEDF9581D66E58CA56D5E9540F808349F609FEABA;
// ChangeSceneToMainPlay
struct ChangeSceneToMainPlay_tCF262FF2F77A6F4286F3A18F41246570A82116D5;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ConfigurableJoint
struct ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Door
struct Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD;
// ElectricalPanelPuzzle
struct ElectricalPanelPuzzle_t20565CF81FB876182B66AE00635D1B8EBB192348;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Keypad
struct Keypad_t27793460BDE4894D8416D3F65433112D8753061D;
// KeypadButton
struct KeypadButton_t2AC4CC31EE53341B2B797F13063319BCB0D4D9D7;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Puzzle
struct Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6;
// PuzzlesDoor
struct PuzzlesDoor_t5602BE39EFF0A4A030489BE35DDEBC716FF4794F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Rotate
struct Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SpinFree
struct SpinFree_t19E59BE0BEFE74696D066FA0B43334B0DC81119B;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TimerScript
struct TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TransportToScene
struct TransportToScene_tF74EE0421CF1A6F35E0BE3483F7B89D8ECBCBED7;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// makeVisible
struct makeVisible_tD4B6BE09DFF3E89489E9646BE59E12939B76CBFF;
// reveal
struct reveal_t8C5DD8016CF1CD7B040A6ACA33B6BB0E3DDFD729;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// Keypad/<DisplayResultText>d__18
struct U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4;
// KeypadButton/<DisableOtherCollidersForSeconds>d__3
struct U3CDisableOtherCollidersForSecondsU3Ed__3_t3CFBC0C6B589DBCB12034E26CACE79CDB7DAC294;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Puzzle/SolveHandler
struct SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C;
// TimerScript/<Fade>d__10
struct U3CFadeU3Ed__10_tD9D50691E61A8E738685E05C1182C5056594806B;

IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisableOtherCollidersForSecondsU3Ed__3_t3CFBC0C6B589DBCB12034E26CACE79CDB7DAC294_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeU3Ed__10_tD9D50691E61A8E738685E05C1182C5056594806B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B022F1FB535A6932AE81C8D0E3433F139FADB2A;
IL2CPP_EXTERN_C String_t* _stringLiteral14E5F11AA08DD27E17EEED4DED05E49F0ADF36A0;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral3742FFB25F3684977CB53EAA4AE1E25783EFDD6F;
IL2CPP_EXTERN_C String_t* _stringLiteral3987AB6DF4F903303450A7F0B718382C4D1A3870;
IL2CPP_EXTERN_C String_t* _stringLiteral50BC41E913A943E8EC5EEEC79CBE71F84999B3C2;
IL2CPP_EXTERN_C String_t* _stringLiteral59B8EBD9D94D3A87A78BB6C10B246F907A0F8720;
IL2CPP_EXTERN_C String_t* _stringLiteral619233A9FAA32FF46F77E03F16D656463F3B05C4;
IL2CPP_EXTERN_C String_t* _stringLiteral735E51BDE195FD4559A23089DCEDAD6F259182F3;
IL2CPP_EXTERN_C String_t* _stringLiteral7A0A9D6C71E29308793D8D6D3D7D15C9B21CE989;
IL2CPP_EXTERN_C String_t* _stringLiteral7A66259779C30B53F8AD4A15736FC2AF6BCD6BA0;
IL2CPP_EXTERN_C String_t* _stringLiteral84BB265145EB70DB25FAFF87B856F5F77549BFCB;
IL2CPP_EXTERN_C String_t* _stringLiteral86157637D7A7EBDBB50E2F55A1FF92C015C9F37F;
IL2CPP_EXTERN_C String_t* _stringLiteral8DA49E7C533193D0AECA9D09F6EE9278E753C064;
IL2CPP_EXTERN_C String_t* _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
IL2CPP_EXTERN_C String_t* _stringLiteralA93F7EFBB698D3DD1C2F570D775C1FEA1470FC4A;
IL2CPP_EXTERN_C String_t* _stringLiteralB2C9A1B79388A3548176117524B37FBC20A1A806;
IL2CPP_EXTERN_C String_t* _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE7F174AA19633DF63A75D4720838FD9898B55C;
IL2CPP_EXTERN_C String_t* _stringLiteralD0EFDAA5DCED6B3A16F692948415D7317205142A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE20EF8C8E16454FAD750F3BB8D8C7E01668557D2;
IL2CPP_EXTERN_C String_t* _stringLiteralE3324E16D35924693C7330227B054CB1500FA3AA;
IL2CPP_EXTERN_C String_t* _stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434;
IL2CPP_EXTERN_C String_t* _stringLiteralEAB49536092038C25308FAC87481DF1F82037721;
IL2CPP_EXTERN_C String_t* _stringLiteralF289F64B982275D25E9DCE3E43E6836507F67CBB;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7277F451A654FBB04B3AC48FF198CFF53DC92FD;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77_m464A180C3A0EA1842D8405966A33A053F90575F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PuzzlesDoor_Complete_m3CE5C756D800B9C7CF356280D0533D5C30F95CED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisableOtherCollidersForSecondsU3Ed__3_System_Collections_IEnumerator_Reset_m4D076E43DC3AA532F0130A592B468876D70CE835_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisplayResultTextU3Ed__18_System_Collections_IEnumerator_Reset_m3CA678A23AF03716195419F408904C36919EEE61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeU3Ed__10_System_Collections_IEnumerator_Reset_mFD99BC0275FC09956F2D1618406AE3F8F7DCDF9F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct PuzzleU5BU5D_t297A940F0AD644097626BD07808C3D6B0828E2C1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// KeypadButton/<DisableOtherCollidersForSeconds>d__3
struct U3CDisableOtherCollidersForSecondsU3Ed__3_t3CFBC0C6B589DBCB12034E26CACE79CDB7DAC294  : public RuntimeObject
{
	// System.Int32 KeypadButton/<DisableOtherCollidersForSeconds>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object KeypadButton/<DisableOtherCollidersForSeconds>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// KeypadButton KeypadButton/<DisableOtherCollidersForSeconds>d__3::<>4__this
	KeypadButton_t2AC4CC31EE53341B2B797F13063319BCB0D4D9D7* ___U3CU3E4__this_2;
};

// TimerScript/<Fade>d__10
struct U3CFadeU3Ed__10_tD9D50691E61A8E738685E05C1182C5056594806B  : public RuntimeObject
{
	// System.Int32 TimerScript/<Fade>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TimerScript/<Fade>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TimerScript TimerScript/<Fade>d__10::<>4__this
	TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* ___U3CU3E4__this_2;
	// System.Single TimerScript/<Fade>d__10::<vol>5__2
	float ___U3CvolU3E5__2_3;
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

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.SoftJointLimit
struct SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 
{
	// System.Single UnityEngine.SoftJointLimit::m_Limit
	float ___m_Limit_0;
	// System.Single UnityEngine.SoftJointLimit::m_Bounciness
	float ___m_Bounciness_1;
	// System.Single UnityEngine.SoftJointLimit::m_ContactDistance
	float ___m_ContactDistance_2;
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

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
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

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// Keypad/<DisplayResultText>d__18
struct U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4  : public RuntimeObject
{
	// System.Int32 Keypad/<DisplayResultText>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Keypad/<DisplayResultText>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Keypad Keypad/<DisplayResultText>d__18::<>4__this
	Keypad_t27793460BDE4894D8416D3F65433112D8753061D* ___U3CU3E4__this_2;
	// UnityEngine.Color Keypad/<DisplayResultText>d__18::txtColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___txtColor_3;
	// System.String Keypad/<DisplayResultText>d__18::txtToDisplay
	String_t* ___txtToDisplay_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
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

// UnityEngine.Joint
struct Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// Puzzle/SolveHandler
struct SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.ConfigurableJoint
struct ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77  : public Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AnimateHandOnInput
struct AnimateHandOnInput_tA9C05EB723ADD1EBE533839D67AD3A3A82F68156  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionProperty AnimateHandOnInput::gripAnimationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___gripAnimationAction_4;
	// UnityEngine.InputSystem.InputActionProperty AnimateHandOnInput::pinchAnimationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___pinchAnimationAction_5;
	// UnityEngine.Animator AnimateHandOnInput::handAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___handAnimator_6;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// ButtonTestScrpt
struct ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ButtonTestScrpt::threshold
	float ___threshold_4;
	// System.Single ButtonTestScrpt::deadZone
	float ___deadZone_5;
	// System.Boolean ButtonTestScrpt::Switchstate
	bool ___Switchstate_6;
	// System.Boolean ButtonTestScrpt::isPressed
	bool ___isPressed_7;
	// UnityEngine.Vector3 ButtonTestScrpt::_startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____startPos_8;
	// UnityEngine.ConfigurableJoint ButtonTestScrpt::_joint
	ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* ____joint_9;
	// UnityEngine.Material ButtonTestScrpt::ButtonOff
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ButtonOff_10;
	// UnityEngine.Material ButtonTestScrpt::ButtonOn
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ButtonOn_11;
	// UnityEngine.Events.UnityEvent ButtonTestScrpt::onPressed
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onPressed_12;
	// UnityEngine.Events.UnityEvent ButtonTestScrpt::OnRleased
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnRleased_13;
};

// ChangeSceneToMainPlay
struct ChangeSceneToMainPlay_tCF262FF2F77A6F4286F3A18F41246570A82116D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Door
struct Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator Door::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_4;
};

// KeypadButton
struct KeypadButton_t2AC4CC31EE53341B2B797F13063319BCB0D4D9D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] KeypadButton::buttons
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___buttons_4;
};

// Puzzle
struct Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Puzzle/SolveHandler Puzzle::Solved
	SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* ___Solved_4;
};

// Rotate
struct Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SpinFree
struct SpinFree_t19E59BE0BEFE74696D066FA0B43334B0DC81119B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SpinFree::spin
	bool ___spin_4;
	// System.Boolean SpinFree::spinParent
	bool ___spinParent_5;
	// System.Single SpinFree::speed
	float ___speed_6;
	// System.Boolean SpinFree::clockwise
	bool ___clockwise_7;
	// System.Single SpinFree::direction
	float ___direction_8;
	// System.Single SpinFree::directionChangeSpeed
	float ___directionChangeSpeed_9;
};

// TimerScript
struct TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TimerScript::TimeLeft
	float ___TimeLeft_4;
	// TMPro.TMP_Text TimerScript::Timertxt
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___Timertxt_5;
	// UnityEngine.AudioSource TimerScript::beep
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___beep_6;
	// UnityEngine.AudioSource TimerScript::Rumble
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___Rumble_7;
	// UnityEngine.AudioSource TimerScript::standardSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___standardSound_8;
	// UnityEngine.AudioSource TimerScript::goodbyeSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___goodbyeSound_9;
	// System.Int32 TimerScript::track
	int32_t ___track_10;
};

// TransportToScene
struct TransportToScene_tF74EE0421CF1A6F35E0BE3483F7B89D8ECBCBED7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// makeVisible
struct makeVisible_tD4B6BE09DFF3E89489E9646BE59E12939B76CBFF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 makeVisible::trackingPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___trackingPoint_4;
	// UnityEngine.GameObject makeVisible::flashlight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___flashlight_5;
	// reveal makeVisible::reveal
	reveal_t8C5DD8016CF1CD7B040A6ACA33B6BB0E3DDFD729* ___reveal_6;
	// UnityEngine.Color makeVisible::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_7;
	// TMPro.TextMeshPro makeVisible::TMP
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___TMP_8;
};

// reveal
struct reveal_t8C5DD8016CF1CD7B040A6ACA33B6BB0E3DDFD729  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject reveal::spot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spot_4;
	// UnityEngine.RaycastHit reveal::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_5;
	// System.Single reveal::maxDistance
	float ___maxDistance_6;
};

// CardReader
struct CardReader_tEDF9581D66E58CA56D5E9540F808349F609FEABA  : public Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6
{
	// UnityEngine.GameObject CardReader::correctCard
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___correctCard_5;
};

// ElectricalPanelPuzzle
struct ElectricalPanelPuzzle_t20565CF81FB876182B66AE00635D1B8EBB192348  : public Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6
{
	// UnityEngine.Light ElectricalPanelPuzzle::roomLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___roomLight_5;
	// UnityEngine.GameObject[] ElectricalPanelPuzzle::LEDLights
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___LEDLights_6;
	// System.Boolean[] ElectricalPanelPuzzle::LEDStates
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___LEDStates_7;
	// UnityEngine.Material ElectricalPanelPuzzle::LEDOnMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___LEDOnMat_8;
	// UnityEngine.Material ElectricalPanelPuzzle::LEDOffMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___LEDOffMat_9;
	// UnityEngine.GameObject ElectricalPanelPuzzle::screen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___screen_10;
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// Keypad
struct Keypad_t27793460BDE4894D8416D3F65433112D8753061D  : public Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6
{
	// System.String Keypad::correctPassword
	String_t* ___correctPassword_5;
	// TMPro.TextMeshProUGUI Keypad::displayText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___displayText_6;
	// System.String Keypad::successText
	String_t* ___successText_7;
	// System.String Keypad::failureText
	String_t* ___failureText_8;
	// UnityEngine.Color Keypad::successColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___successColor_9;
	// UnityEngine.Color Keypad::failureColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___failureColor_10;
	// UnityEngine.Color Keypad::defaultDisplayTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___defaultDisplayTextColor_11;
	// System.String Keypad::enteredPassword
	String_t* ___enteredPassword_12;
	// Keypad/State Keypad::state
	int32_t ___state_13;
	// UnityEngine.AudioSource Keypad::keyPadAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___keyPadAudio_14;
	// UnityEngine.AudioClip Keypad::buttonClickSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___buttonClickSound_15;
	// UnityEngine.AudioClip Keypad::successSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___successSound_16;
	// UnityEngine.AudioClip Keypad::failureSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___failureSound_17;
};

// PuzzlesDoor
struct PuzzlesDoor_t5602BE39EFF0A4A030489BE35DDEBC716FF4794F  : public Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD
{
	// Puzzle[] PuzzlesDoor::puzzles
	PuzzleU5BU5D_t297A940F0AD644097626BD07808C3D6B0828E2C1* ___puzzles_5;
	// System.Int32 PuzzlesDoor::puzzlesLeft
	int32_t ___puzzlesLeft_6;
	// UnityEngine.AudioSource PuzzlesDoor::doorOpenAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___doorOpenAudio_7;
	// UnityEngine.GameObject PuzzlesDoor::nextTeleportationArea
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nextTeleportationArea_8;
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

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_265;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_266;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_267;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_268;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_269;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_270;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_271;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_272;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_273;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_274;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_275;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_276;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_277;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_278;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_279;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_280;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_281;
};

struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_301;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Puzzle[]
struct PuzzleU5BU5D_t297A940F0AD644097626BD07808C3D6B0828E2C1  : public RuntimeArray
{
	ALIGN_FIELD (8) Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* m_Items[1];

	inline Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};


// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ConfigurableJoint>()
inline ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* Component_GetComponent_TisConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77_m464A180C3A0EA1842D8405966A33A053F90575F1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Single ButtonTestScrpt::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ButtonTestScrpt_GetValue_m23186D15AD1B125C532297227E48EC650423ABC3 (ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* __this, const RuntimeMethod* method) ;
// System.Void ButtonTestScrpt::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTestScrpt_Pressed_m98B08DBD42C847B82A7052F3B37666325FEA0047 (ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* __this, const RuntimeMethod* method) ;
// System.Void ButtonTestScrpt::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTestScrpt_Released_m2F9155A922A218288956225D78A13DD5B46C931D (ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.SoftJointLimit UnityEngine.ConfigurableJoint::get_linearLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 ConfigurableJoint_get_linearLimit_m35456F7AF48ACA69E79D1EFE14578730BAA6A98A (ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SoftJointLimit::get_limit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoftJointLimit_get_limit_m565D543DC9482F893A8C1F8582B9A06F7E287286 (SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void ButtonTestScrpt::ButtonSwitcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTestScrpt_ButtonSwitcher_mECEBFE32463F611DEE44823F70ABE7B4F989D236 (ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ButtonTestScrpt>()
inline ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshPro>()
inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Puzzle::Solve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Puzzle_Solve_mAB82D0B57D7AA9F0690ED19A31836727AA28C3A3 (Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* __this, const RuntimeMethod* method) ;
// System.Void Puzzle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Puzzle__ctor_mBEDAF970C17CDBA75E6813C73A24C1683536C9A4 (Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Puzzle/SolveHandler::Invoke(Puzzle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_inline (SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* __this, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* ___p0, const RuntimeMethod* method) ;
// System.Void Puzzle/SolveHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolveHandler__ctor_m48BCE543064C6BEFADAC63E959438CF600386AD6 (SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Puzzle::add_Solved(Puzzle/SolveHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Puzzle_add_Solved_m308FBC593B83C14DFA75124E9A489722BBAC173A (Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* __this, SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* ___value0, const RuntimeMethod* method) ;
// System.Void Puzzle::remove_Solved(Puzzle/SolveHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Puzzle_remove_Solved_mA19DE51013349A59EE2A355F98B1440728FA4CB5 (Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* __this, SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Door::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_Open_m73ECB5E64DA07BBD0F34119C77DF895AEA510FE9 (Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Door::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door__ctor_m3D2DF383E9B8EE863AD8F8421F0DF83F5B35EAB1 (Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Keypad::ResetEnteredPassword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keypad_ResetEnteredPassword_mFE76E60600330272005CDA5F95C79FE51F81EA66 (Keypad_t27793460BDE4894D8416D3F65433112D8753061D* __this, const RuntimeMethod* method) ;
// System.Void Keypad::UpdateDisplayText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keypad_UpdateDisplayText_mE11A1192410F8B767E3A592930FF5C1A732FAF46 (Keypad_t27793460BDE4894D8416D3F65433112D8753061D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Keypad::DisplayResultText(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Keypad_DisplayResultText_mF2ADF90E176863D52C3F90B7F26DB25D933DFFEF (Keypad_t27793460BDE4894D8416D3F65433112D8753061D* __this, String_t* ___txtToDisplay0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___txtColor1, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Keypad/<DisplayResultText>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayResultTextU3Ed__18__ctor_m79CC9622F8A2F77221F1451E49B42AB7BFDF04FB (U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator KeypadButton::DisableOtherCollidersForSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeypadButton_DisableOtherCollidersForSeconds_mC123A4816291B6FB547B08CB7BC4D3FD8BC21D7C (KeypadButton_t2AC4CC31EE53341B2B797F13063319BCB0D4D9D7* __this, const RuntimeMethod* method) ;
// System.Void KeypadButton/<DisableOtherCollidersForSeconds>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableOtherCollidersForSecondsU3Ed__3__ctor_m522E0F5DBA74E6C2C9AF4CFB7AA9EA94DAA8EEDE (U3CDisableOtherCollidersForSecondsU3Ed__3_t3CFBC0C6B589DBCB12034E26CACE79CDB7DAC294* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void ElectricalPanelPuzzle::CheckAllLEDOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElectricalPanelPuzzle_CheckAllLEDOn_m75512FD018AFD74AF781B828F42083368B41EC9B (ElectricalPanelPuzzle_t20565CF81FB876182B66AE00635D1B8EBB192348* __this, const RuntimeMethod* method) ;
// System.Void TimerScript::updateTimer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerScript_updateTimer_mE5554D2DACC992570416C538810EF95681E360A9 (TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* __this, float ___currentTime0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TimerScript::Fade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimerScript_Fade_m1D5F7BCB458F5D99B83627CE697D9AC9293F3EB9 (TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mC9D19FA54347ED102AD9913E3E7528BE969199FB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, uint64_t ___delay0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void TimerScript/<Fade>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__10__ctor_m3AAAAF80C2EB8F421185366997D4CF07ADAA3776 (U3CFadeU3Ed__10_tD9D50691E61A8E738685E05C1182C5056594806B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AnimateHandOnInput::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateHandOnInput_Start_mDFB567101BCB7DCE653AE7E320015E93D3609592 (AnimateHandOnInput_tA9C05EB723ADD1EBE533839D67AD3A3A82F68156* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AnimateHandOnInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateHandOnInput_Update_mC03CF4BE3804324BBC246D79B71F83B1A8848CDD (AnimateHandOnInput_tA9C05EB723ADD1EBE533839D67AD3A3A82F68156* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float triggerValue = pinchAnimationAction.action.ReadValue<float>();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_0 = (&__this->___pinchAnimationAction_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_0, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_1, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		V_0 = L_2;
		// handAnimator.SetFloat("Trigger", triggerValue);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___handAnimator_6;
		float L_4 = V_0;
		NullCheck(L_3);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_3, _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B, L_4, NULL);
		// float gripValue = gripAnimationAction.action.ReadValue<float>();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_5 = (&__this->___gripAnimationAction_4);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_5, NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_6, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		V_1 = L_7;
		// handAnimator.SetFloat("Grip", gripValue);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___handAnimator_6;
		float L_9 = V_1;
		NullCheck(L_8);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_8, _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9, L_9, NULL);
		// }
		return;
	}
}
// System.Void AnimateHandOnInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateHandOnInput__ctor_mEA43A853FB1CB874A55072BFBF7A8B78BEF60F1C (AnimateHandOnInput_tA9C05EB723ADD1EBE533839D67AD3A3A82F68156* __this, const RuntimeMethod* method) 
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
// System.Void ButtonTestScrpt::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTestScrpt_Start_mACCBBEB394CA62A2DC039232DBCD026A9EA8A65D (ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77_m464A180C3A0EA1842D8405966A33A053F90575F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Switchstate= false; // Buttons start off
		__this->___Switchstate_6 = (bool)0;
		// _startPos = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->____startPos_8 = L_1;
		// _joint = GetComponent<ConfigurableJoint>();
		ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* L_2;
		L_2 = Component_GetComponent_TisConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77_m464A180C3A0EA1842D8405966A33A053F90575F1(__this, Component_GetComponent_TisConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77_m464A180C3A0EA1842D8405966A33A053F90575F1_RuntimeMethod_var);
		__this->____joint_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____joint_9), (void*)L_2);
		// }
		return;
	}
}
// System.Void ButtonTestScrpt::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTestScrpt_Update_mE5C8B7F3AEF97DCB2DB094E7F88FF77A1D288328 (ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	{
		// Renderer ren = GetComponent<Renderer>(); //Creates a handle to input the material it changes to
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_0 = L_0;
		// if (Switchstate) // reads If the button is on or off and gives it a material based on its bool value
		bool L_1 = __this->___Switchstate_6;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// ren.material = ButtonOn;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___ButtonOn_11;
		NullCheck(L_2);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_2, L_3, NULL);
	}

IL_001b:
	{
		// if (!Switchstate)
		bool L_4 = __this->___Switchstate_6;
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// ren.material = ButtonOff;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___ButtonOff_10;
		NullCheck(L_5);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_5, L_6, NULL);
	}

IL_002f:
	{
		// if (!isPressed && GetValue() + threshold >= 1)
		bool L_7 = __this->___isPressed_7;
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		float L_8;
		L_8 = ButtonTestScrpt_GetValue_m23186D15AD1B125C532297227E48EC650423ABC3(__this, NULL);
		float L_9 = __this->___threshold_4;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) >= ((float)(1.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		// Pressed();
		ButtonTestScrpt_Pressed_m98B08DBD42C847B82A7052F3B37666325FEA0047(__this, NULL);
	}

IL_0051:
	{
		// if(isPressed && GetValue() - threshold <=0)
		bool L_10 = __this->___isPressed_7;
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		float L_11;
		L_11 = ButtonTestScrpt_GetValue_m23186D15AD1B125C532297227E48EC650423ABC3(__this, NULL);
		float L_12 = __this->___threshold_4;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_11, L_12))) <= ((float)(0.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		// Released();
		ButtonTestScrpt_Released_m2F9155A922A218288956225D78A13DD5B46C931D(__this, NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Single ButtonTestScrpt::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ButtonTestScrpt_GetValue_m23186D15AD1B125C532297227E48EC650423ABC3 (ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var value = Vector3.Distance(_startPos, transform.localPosition) / _joint.linearLimit.limit;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____startPos_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		float L_3;
		L_3 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_0, L_2, NULL);
		ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* L_4 = __this->____joint_9;
		NullCheck(L_4);
		SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 L_5;
		L_5 = ConfigurableJoint_get_linearLimit_m35456F7AF48ACA69E79D1EFE14578730BAA6A98A(L_4, NULL);
		V_1 = L_5;
		float L_6;
		L_6 = SoftJointLimit_get_limit_m565D543DC9482F893A8C1F8582B9A06F7E287286((&V_1), NULL);
		V_0 = ((float)(L_3/L_6));
		// if (Mathf.Abs(value) < deadZone)
		float L_7 = V_0;
		float L_8;
		L_8 = fabsf(L_7);
		float L_9 = __this->___deadZone_5;
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_003f;
		}
	}
	{
		// value = 0;
		V_0 = (0.0f);
	}

IL_003f:
	{
		// return Mathf.Clamp(value, -1f, 1f);
		float L_10 = V_0;
		float L_11;
		L_11 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_10, (-1.0f), (1.0f), NULL);
		return L_11;
	}
}
// System.Void ButtonTestScrpt::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTestScrpt_Pressed_m98B08DBD42C847B82A7052F3B37666325FEA0047 (ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A0A9D6C71E29308793D8D6D3D7D15C9B21CE989);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isPressed = true;
		__this->___isPressed_7 = (bool)1;
		// Switchstate = !Switchstate; // Changes the button to the opposite state on every press
		bool L_0 = __this->___Switchstate_6;
		__this->___Switchstate_6 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// Debug.Log("pressed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7A0A9D6C71E29308793D8D6D3D7D15C9B21CE989, NULL);
		// ButtonSwitcher();
		ButtonTestScrpt_ButtonSwitcher_mECEBFE32463F611DEE44823F70ABE7B4F989D236(__this, NULL);
		// }
		return;
	}
}
// System.Void ButtonTestScrpt::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTestScrpt_Released_m2F9155A922A218288956225D78A13DD5B46C931D (ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50BC41E913A943E8EC5EEEC79CBE71F84999B3C2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isPressed = false;
		__this->___isPressed_7 = (bool)0;
		// Debug.Log("Released");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral50BC41E913A943E8EC5EEEC79CBE71F84999B3C2, NULL);
		// }
		return;
	}
}
// System.Void ButtonTestScrpt::ButtonSwitcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTestScrpt_ButtonSwitcher_mECEBFE32463F611DEE44823F70ABE7B4F989D236 (ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3742FFB25F3684977CB53EAA4AE1E25783EFDD6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3987AB6DF4F903303450A7F0B718382C4D1A3870);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59B8EBD9D94D3A87A78BB6C10B246F907A0F8720);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral619233A9FAA32FF46F77E03F16D656463F3B05C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral735E51BDE195FD4559A23089DCEDAD6F259182F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A66259779C30B53F8AD4A15736FC2AF6BCD6BA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0EFDAA5DCED6B3A16F692948415D7317205142A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3324E16D35924693C7330227B054CB1500FA3AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7277F451A654FBB04B3AC48FF198CFF53DC92FD);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_7 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_8 = NULL;
	{
		// GameObject Push1 = GameObject.FindGameObjectWithTag("Push1");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralE3324E16D35924693C7330227B054CB1500FA3AA, NULL);
		V_0 = L_0;
		// GameObject Push2 = GameObject.FindGameObjectWithTag("Push2");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral735E51BDE195FD4559A23089DCEDAD6F259182F3, NULL);
		V_1 = L_1;
		// GameObject Push3 = GameObject.FindGameObjectWithTag("Push3");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral7A66259779C30B53F8AD4A15736FC2AF6BCD6BA0, NULL);
		V_2 = L_2;
		// GameObject Push4 = GameObject.FindGameObjectWithTag("Push4");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral619233A9FAA32FF46F77E03F16D656463F3B05C4, NULL);
		V_3 = L_3;
		// GameObject Push5 = GameObject.FindGameObjectWithTag("Push5");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralD0EFDAA5DCED6B3A16F692948415D7317205142A, NULL);
		V_4 = L_4;
		// GameObject Push6 = GameObject.FindGameObjectWithTag("Push6");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral3987AB6DF4F903303450A7F0B718382C4D1A3870, NULL);
		V_5 = L_5;
		// GameObject Push7 = GameObject.FindGameObjectWithTag("Push7");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralF7277F451A654FBB04B3AC48FF198CFF53DC92FD, NULL);
		V_6 = L_6;
		// GameObject Push8 = GameObject.FindGameObjectWithTag("Push8");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral59B8EBD9D94D3A87A78BB6C10B246F907A0F8720, NULL);
		V_7 = L_7;
		// GameObject Push9 = GameObject.FindGameObjectWithTag("Push9");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral3742FFB25F3684977CB53EAA4AE1E25783EFDD6F, NULL);
		V_8 = L_8;
		// if (gameObject.tag == "Push1")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteralE3324E16D35924693C7330227B054CB1500FA3AA, NULL);
		if (!L_11)
		{
			goto IL_00b1;
		}
	}
	{
		// Push2.GetComponent<ButtonTestScrpt>().Switchstate = !Push2.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_1;
		NullCheck(L_12);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_13;
		L_13 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_12, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_1;
		NullCheck(L_14);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_15;
		L_15 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_14, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_15);
		bool L_16 = L_15->___Switchstate_6;
		NullCheck(L_13);
		L_13->___Switchstate_6 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		// Push4.GetComponent<ButtonTestScrpt>().Switchstate = !Push4.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_3;
		NullCheck(L_17);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_18;
		L_18 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_17, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_3;
		NullCheck(L_19);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_20;
		L_20 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_19, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_20);
		bool L_21 = L_20->___Switchstate_6;
		NullCheck(L_18);
		L_18->___Switchstate_6 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
	}

IL_00b1:
	{
		// if (gameObject.tag == "Push2")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_22, NULL);
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral735E51BDE195FD4559A23089DCEDAD6F259182F3, NULL);
		if (!L_24)
		{
			goto IL_0115;
		}
	}
	{
		// Push1.GetComponent<ButtonTestScrpt>().Switchstate = !Push1.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_0;
		NullCheck(L_25);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_26;
		L_26 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_25, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_0;
		NullCheck(L_27);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_28;
		L_28 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_27, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_28);
		bool L_29 = L_28->___Switchstate_6;
		NullCheck(L_26);
		L_26->___Switchstate_6 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		// Push3.GetComponent<ButtonTestScrpt>().Switchstate = !Push3.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_2;
		NullCheck(L_30);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_31;
		L_31 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_30, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = V_2;
		NullCheck(L_32);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_33;
		L_33 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_32, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_33);
		bool L_34 = L_33->___Switchstate_6;
		NullCheck(L_31);
		L_31->___Switchstate_6 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		// Push5.GetComponent<ButtonTestScrpt>().Switchstate = !Push5.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = V_4;
		NullCheck(L_35);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_36;
		L_36 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_35, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_4;
		NullCheck(L_37);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_38;
		L_38 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_37, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_38);
		bool L_39 = L_38->___Switchstate_6;
		NullCheck(L_36);
		L_36->___Switchstate_6 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
	}

IL_0115:
	{
		// if (gameObject.tag == "Push3")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_40);
		String_t* L_41;
		L_41 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_40, NULL);
		bool L_42;
		L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteral7A66259779C30B53F8AD4A15736FC2AF6BCD6BA0, NULL);
		if (!L_42)
		{
			goto IL_0160;
		}
	}
	{
		// Push2.GetComponent<ButtonTestScrpt>().Switchstate = !Push2.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = V_1;
		NullCheck(L_43);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_44;
		L_44 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_43, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = V_1;
		NullCheck(L_45);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_46;
		L_46 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_45, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_46);
		bool L_47 = L_46->___Switchstate_6;
		NullCheck(L_44);
		L_44->___Switchstate_6 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
		// Push6.GetComponent<ButtonTestScrpt>().Switchstate = !Push6.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = V_5;
		NullCheck(L_48);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_49;
		L_49 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_48, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = V_5;
		NullCheck(L_50);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_51;
		L_51 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_50, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_51);
		bool L_52 = L_51->___Switchstate_6;
		NullCheck(L_49);
		L_49->___Switchstate_6 = (bool)((((int32_t)L_52) == ((int32_t)0))? 1 : 0);
	}

IL_0160:
	{
		// if (gameObject.tag == "Push4")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_53);
		String_t* L_54;
		L_54 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_53, NULL);
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral619233A9FAA32FF46F77E03F16D656463F3B05C4, NULL);
		if (!L_55)
		{
			goto IL_01c6;
		}
	}
	{
		// Push1.GetComponent<ButtonTestScrpt>().Switchstate = !Push1.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = V_0;
		NullCheck(L_56);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_57;
		L_57 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_56, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = V_0;
		NullCheck(L_58);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_59;
		L_59 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_58, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_59);
		bool L_60 = L_59->___Switchstate_6;
		NullCheck(L_57);
		L_57->___Switchstate_6 = (bool)((((int32_t)L_60) == ((int32_t)0))? 1 : 0);
		// Push5.GetComponent<ButtonTestScrpt>().Switchstate = !Push5.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = V_4;
		NullCheck(L_61);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_62;
		L_62 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_61, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = V_4;
		NullCheck(L_63);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_64;
		L_64 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_63, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_64);
		bool L_65 = L_64->___Switchstate_6;
		NullCheck(L_62);
		L_62->___Switchstate_6 = (bool)((((int32_t)L_65) == ((int32_t)0))? 1 : 0);
		// Push7.GetComponent<ButtonTestScrpt>().Switchstate = !Push7.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = V_6;
		NullCheck(L_66);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_67;
		L_67 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_66, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = V_6;
		NullCheck(L_68);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_69;
		L_69 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_68, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_69);
		bool L_70 = L_69->___Switchstate_6;
		NullCheck(L_67);
		L_67->___Switchstate_6 = (bool)((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
	}

IL_01c6:
	{
		// if (gameObject.tag == "Push5")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71;
		L_71 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_71);
		String_t* L_72;
		L_72 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_71, NULL);
		bool L_73;
		L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralD0EFDAA5DCED6B3A16F692948415D7317205142A, NULL);
		if (!L_73)
		{
			goto IL_0245;
		}
	}
	{
		// Push2.GetComponent<ButtonTestScrpt>().Switchstate = !Push2.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74 = V_1;
		NullCheck(L_74);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_75;
		L_75 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_74, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = V_1;
		NullCheck(L_76);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_77;
		L_77 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_76, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_77);
		bool L_78 = L_77->___Switchstate_6;
		NullCheck(L_75);
		L_75->___Switchstate_6 = (bool)((((int32_t)L_78) == ((int32_t)0))? 1 : 0);
		// Push4.GetComponent<ButtonTestScrpt>().Switchstate = !Push4.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79 = V_3;
		NullCheck(L_79);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_80;
		L_80 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_79, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = V_3;
		NullCheck(L_81);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_82;
		L_82 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_81, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_82);
		bool L_83 = L_82->___Switchstate_6;
		NullCheck(L_80);
		L_80->___Switchstate_6 = (bool)((((int32_t)L_83) == ((int32_t)0))? 1 : 0);
		// Push6.GetComponent<ButtonTestScrpt>().Switchstate = !Push6.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = V_5;
		NullCheck(L_84);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_85;
		L_85 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_84, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = V_5;
		NullCheck(L_86);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_87;
		L_87 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_86, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_87);
		bool L_88 = L_87->___Switchstate_6;
		NullCheck(L_85);
		L_85->___Switchstate_6 = (bool)((((int32_t)L_88) == ((int32_t)0))? 1 : 0);
		// Push8.GetComponent<ButtonTestScrpt>().Switchstate = !Push8.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = V_7;
		NullCheck(L_89);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_90;
		L_90 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_89, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = V_7;
		NullCheck(L_91);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_92;
		L_92 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_91, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_92);
		bool L_93 = L_92->___Switchstate_6;
		NullCheck(L_90);
		L_90->___Switchstate_6 = (bool)((((int32_t)L_93) == ((int32_t)0))? 1 : 0);
	}

IL_0245:
	{
		// if (gameObject.tag == "Push6")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94;
		L_94 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_94);
		String_t* L_95;
		L_95 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_94, NULL);
		bool L_96;
		L_96 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_95, _stringLiteral3987AB6DF4F903303450A7F0B718382C4D1A3870, NULL);
		if (!L_96)
		{
			goto IL_02ab;
		}
	}
	{
		// Push3.GetComponent<ButtonTestScrpt>().Switchstate = !Push3.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97 = V_2;
		NullCheck(L_97);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_98;
		L_98 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_97, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99 = V_2;
		NullCheck(L_99);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_100;
		L_100 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_99, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_100);
		bool L_101 = L_100->___Switchstate_6;
		NullCheck(L_98);
		L_98->___Switchstate_6 = (bool)((((int32_t)L_101) == ((int32_t)0))? 1 : 0);
		// Push5.GetComponent<ButtonTestScrpt>().Switchstate = !Push5.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = V_4;
		NullCheck(L_102);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_103;
		L_103 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_102, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104 = V_4;
		NullCheck(L_104);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_105;
		L_105 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_104, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_105);
		bool L_106 = L_105->___Switchstate_6;
		NullCheck(L_103);
		L_103->___Switchstate_6 = (bool)((((int32_t)L_106) == ((int32_t)0))? 1 : 0);
		// Push9.GetComponent<ButtonTestScrpt>().Switchstate = !Push9.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107 = V_8;
		NullCheck(L_107);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_108;
		L_108 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_107, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_109 = V_8;
		NullCheck(L_109);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_110;
		L_110 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_109, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_110);
		bool L_111 = L_110->___Switchstate_6;
		NullCheck(L_108);
		L_108->___Switchstate_6 = (bool)((((int32_t)L_111) == ((int32_t)0))? 1 : 0);
	}

IL_02ab:
	{
		// if (gameObject.tag == "Push7")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_112;
		L_112 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_112);
		String_t* L_113;
		L_113 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_112, NULL);
		bool L_114;
		L_114 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_113, _stringLiteralF7277F451A654FBB04B3AC48FF198CFF53DC92FD, NULL);
		if (!L_114)
		{
			goto IL_02f6;
		}
	}
	{
		// Push4.GetComponent<ButtonTestScrpt>().Switchstate = !Push4.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115 = V_3;
		NullCheck(L_115);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_116;
		L_116 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_115, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_117 = V_3;
		NullCheck(L_117);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_118;
		L_118 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_117, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_118);
		bool L_119 = L_118->___Switchstate_6;
		NullCheck(L_116);
		L_116->___Switchstate_6 = (bool)((((int32_t)L_119) == ((int32_t)0))? 1 : 0);
		// Push8.GetComponent<ButtonTestScrpt>().Switchstate = !Push8.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_120 = V_7;
		NullCheck(L_120);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_121;
		L_121 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_120, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122 = V_7;
		NullCheck(L_122);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_123;
		L_123 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_122, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_123);
		bool L_124 = L_123->___Switchstate_6;
		NullCheck(L_121);
		L_121->___Switchstate_6 = (bool)((((int32_t)L_124) == ((int32_t)0))? 1 : 0);
	}

IL_02f6:
	{
		// if (gameObject.tag == "Push8")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125;
		L_125 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_125);
		String_t* L_126;
		L_126 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_125, NULL);
		bool L_127;
		L_127 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_126, _stringLiteral59B8EBD9D94D3A87A78BB6C10B246F907A0F8720, NULL);
		if (!L_127)
		{
			goto IL_035e;
		}
	}
	{
		// Push5.GetComponent<ButtonTestScrpt>().Switchstate = !Push5.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_128 = V_4;
		NullCheck(L_128);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_129;
		L_129 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_128, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_130 = V_4;
		NullCheck(L_130);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_131;
		L_131 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_130, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_131);
		bool L_132 = L_131->___Switchstate_6;
		NullCheck(L_129);
		L_129->___Switchstate_6 = (bool)((((int32_t)L_132) == ((int32_t)0))? 1 : 0);
		// Push7.GetComponent<ButtonTestScrpt>().Switchstate = !Push7.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_133 = V_6;
		NullCheck(L_133);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_134;
		L_134 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_133, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_135 = V_6;
		NullCheck(L_135);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_136;
		L_136 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_135, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_136);
		bool L_137 = L_136->___Switchstate_6;
		NullCheck(L_134);
		L_134->___Switchstate_6 = (bool)((((int32_t)L_137) == ((int32_t)0))? 1 : 0);
		// Push9.GetComponent<ButtonTestScrpt>().Switchstate = !Push9.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_138 = V_8;
		NullCheck(L_138);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_139;
		L_139 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_138, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_140 = V_8;
		NullCheck(L_140);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_141;
		L_141 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_140, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_141);
		bool L_142 = L_141->___Switchstate_6;
		NullCheck(L_139);
		L_139->___Switchstate_6 = (bool)((((int32_t)L_142) == ((int32_t)0))? 1 : 0);
	}

IL_035e:
	{
		// if (gameObject.tag == "Push9")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_143;
		L_143 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_143);
		String_t* L_144;
		L_144 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_143, NULL);
		bool L_145;
		L_145 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_144, _stringLiteral3742FFB25F3684977CB53EAA4AE1E25783EFDD6F, NULL);
		if (!L_145)
		{
			goto IL_03ab;
		}
	}
	{
		// Push6.GetComponent<ButtonTestScrpt>().Switchstate = !Push6.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_146 = V_5;
		NullCheck(L_146);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_147;
		L_147 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_146, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_148 = V_5;
		NullCheck(L_148);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_149;
		L_149 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_148, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_149);
		bool L_150 = L_149->___Switchstate_6;
		NullCheck(L_147);
		L_147->___Switchstate_6 = (bool)((((int32_t)L_150) == ((int32_t)0))? 1 : 0);
		// Push8.GetComponent<ButtonTestScrpt>().Switchstate = !Push8.GetComponent<ButtonTestScrpt>().Switchstate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_151 = V_7;
		NullCheck(L_151);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_152;
		L_152 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_151, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_153 = V_7;
		NullCheck(L_153);
		ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* L_154;
		L_154 = GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1(L_153, GameObject_GetComponent_TisButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1_mEE2CCF5EB1DE52D49AC6F2DBF9ADE59CA53995E1_RuntimeMethod_var);
		NullCheck(L_154);
		bool L_155 = L_154->___Switchstate_6;
		NullCheck(L_152);
		L_152->___Switchstate_6 = (bool)((((int32_t)L_155) == ((int32_t)0))? 1 : 0);
	}

IL_03ab:
	{
		// }
		return;
	}
}
// System.Void ButtonTestScrpt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTestScrpt__ctor_mFB2CD7455C59F87C89B505278279D7D651D24675 (ButtonTestScrpt_tD29D79AF5BCFE786DD4D29AF82740D79AC5C84E1* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float threshold = .1f;
		__this->___threshold_4 = (0.100000001f);
		// [SerializeField] private float deadZone = 0.025f;
		__this->___deadZone_5 = (0.0250000004f);
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
// System.Void ChangeSceneToMainPlay::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeSceneToMainPlay_LoadScene_mA6EA72FA9CD09BFC3EA55D2A27A79C5DF0DFA95E (ChangeSceneToMainPlay_tCF262FF2F77A6F4286F3A18F41246570A82116D5* __this, String_t* ___Models0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(Models);
		String_t* L_0 = ___Models0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void ChangeSceneToMainPlay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeSceneToMainPlay__ctor_mCD146AC1AE419EEFDA9F8A7A3AE9D3F3C99212A2 (ChangeSceneToMainPlay_tCF262FF2F77A6F4286F3A18F41246570A82116D5* __this, const RuntimeMethod* method) 
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
// System.Void Rotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Update_m73D585515036D9B7AAD8336BFB8567283CE4C7E7 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(new Vector3(0f, 0.02f, 0f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0199999996f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Rotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate__ctor_m0EE5CC8EB699542BFC438DC3D547D39E442E9EE4 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
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
// System.Void makeVisible::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void makeVisible_Start_mBE8114DF55AC886959A37DEC7DA5E48375A09125 (makeVisible_tD4B6BE09DFF3E89489E9646BE59E12939B76CBFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMP = GetComponent<TextMeshPro>();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0;
		L_0 = Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E(__this, Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E_RuntimeMethod_var);
		__this->___TMP_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TMP_8), (void*)L_0);
		// color = TMP.color;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_1 = __this->___TMP_8;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		__this->___color_7 = L_2;
		// }
		return;
	}
}
// System.Void makeVisible::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void makeVisible_Update_m2E00AE35E8BC214DFFAB9654C8472B2277EBFE34 (makeVisible_tD4B6BE09DFF3E89489E9646BE59E12939B76CBFF* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// trackingPoint = reveal.hit.point;
		reveal_t8C5DD8016CF1CD7B040A6ACA33B6BB0E3DDFD729* L_0 = __this->___reveal_6;
		NullCheck(L_0);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_1 = (&L_0->___hit_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_1, NULL);
		__this->___trackingPoint_4 = L_2;
		// float test = Vector3.Distance(trackingPoint, transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___trackingPoint_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (trackingPoint != null && Vector3.Distance(trackingPoint, transform.position) < .5f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___trackingPoint_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___trackingPoint_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11;
		L_11 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_8, L_10, NULL);
		if ((!(((float)L_11) < ((float)(0.5f)))))
		{
			goto IL_00c5;
		}
	}
	{
		// float one = (4f - Vector3.Distance(flashlight.transform.position, transform.position)) * .25f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___flashlight_5;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17;
		L_17 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_14, L_16, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((4.0f), L_17)), (0.25f)));
		// float two = (.5f - Vector3.Distance(trackingPoint, transform.position)) * 2f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___trackingPoint_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21;
		L_21 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_18, L_20, NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((0.5f), L_21)), (2.0f)));
		// color.a = Mathf.Min(one, two);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_22 = (&__this->___color_7);
		float L_23 = V_0;
		float L_24 = V_1;
		float L_25;
		L_25 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_23, L_24, NULL);
		L_22->___a_3 = L_25;
		// TMP.color = color;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_26 = __this->___TMP_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = __this->___color_7;
		NullCheck(L_26);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_26, L_27);
		return;
	}

IL_00c5:
	{
		// color.a = 0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28 = (&__this->___color_7);
		L_28->___a_3 = (0.0f);
		// TMP.color = color;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_29 = __this->___TMP_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = __this->___color_7;
		NullCheck(L_29);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_29, L_30);
		// }
		return;
	}
}
// System.Void makeVisible::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void makeVisible__ctor_m547294209D8BDC4A74F0453B26446834B245C054 (makeVisible_tD4B6BE09DFF3E89489E9646BE59E12939B76CBFF* __this, const RuntimeMethod* method) 
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
// System.Void SpinFree::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinFree_Update_m3301EFBD1B7DC6F06D34CCA773AFE993A7848A65 (SpinFree_t19E59BE0BEFE74696D066FA0B43334B0DC81119B* __this, const RuntimeMethod* method) 
{
	{
		// if (direction < 1f) {
		float L_0 = __this->___direction_8;
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		// direction += Time.deltaTime / (directionChangeSpeed / 2);
		float L_1 = __this->___direction_8;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_3 = __this->___directionChangeSpeed_9;
		__this->___direction_8 = ((float)il2cpp_codegen_add(L_1, ((float)(L_2/((float)(L_3/(2.0f)))))));
	}

IL_002c:
	{
		// if (spin) {
		bool L_4 = __this->___spin_4;
		if (!L_4)
		{
			goto IL_00fc;
		}
	}
	{
		// if (clockwise) {
		bool L_5 = __this->___clockwise_7;
		if (!L_5)
		{
			goto IL_0099;
		}
	}
	{
		// if (spinParent)
		bool L_6 = __this->___spinParent_5;
		if (!L_6)
		{
			goto IL_0075;
		}
	}
	{
		// transform.parent.transform.Rotate(Vector3.up, (speed * direction) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_11 = __this->___speed_6;
		float L_12 = __this->___direction_8;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_9);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_9, L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_11, L_12)), L_13)), NULL);
		return;
	}

IL_0075:
	{
		// transform.Rotate(Vector3.up, (speed * direction) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_16 = __this->___speed_6;
		float L_17 = __this->___direction_8;
		float L_18;
		L_18 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_14);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_14, L_15, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_16, L_17)), L_18)), NULL);
		return;
	}

IL_0099:
	{
		// if (spinParent)
		bool L_19 = __this->___spinParent_5;
		if (!L_19)
		{
			goto IL_00d4;
		}
	}
	{
		// transform.parent.transform.Rotate(-Vector3.up, (speed * direction) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_20, NULL);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_23, NULL);
		float L_25 = __this->___speed_6;
		float L_26 = __this->___direction_8;
		float L_27;
		L_27 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_22);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_22, L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_25, L_26)), L_27)), NULL);
		return;
	}

IL_00d4:
	{
		// transform.Rotate(-Vector3.up, (speed * direction) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_29, NULL);
		float L_31 = __this->___speed_6;
		float L_32 = __this->___direction_8;
		float L_33;
		L_33 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_28);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_28, L_30, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_31, L_32)), L_33)), NULL);
	}

IL_00fc:
	{
		// }
		return;
	}
}
// System.Void SpinFree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinFree__ctor_m2D12C8C18B2F2680D0C70305FD030A1A68E0CBA5 (SpinFree_t19E59BE0BEFE74696D066FA0B43334B0DC81119B* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 10f;
		__this->___speed_6 = (10.0f);
		// public bool clockwise = true;
		__this->___clockwise_7 = (bool)1;
		// public float direction = 1f;
		__this->___direction_8 = (1.0f);
		// public float directionChangeSpeed = 2f;
		__this->___directionChangeSpeed_9 = (2.0f);
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
// System.Void CardReader::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardReader_OnTriggerEnter_m6B4B1FA8A0BB99C02D6B711F7009D3F28112815C (CardReader_tEDF9581D66E58CA56D5E9540F808349F609FEABA* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAB49536092038C25308FAC87481DF1F82037721);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (c.gameObject == correctCard)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___c0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___correctCard_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// Debug.Log("This is the correct card");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralEAB49536092038C25308FAC87481DF1F82037721, NULL);
		// this.Solve();
		Puzzle_Solve_mAB82D0B57D7AA9F0690ED19A31836727AA28C3A3(__this, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void CardReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardReader__ctor_m89EF935658B02A069971FA28F6A74BE7FB6157E0 (CardReader_tEDF9581D66E58CA56D5E9540F808349F609FEABA* __this, const RuntimeMethod* method) 
{
	{
		Puzzle__ctor_mBEDAF970C17CDBA75E6813C73A24C1683536C9A4(__this, NULL);
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
// System.Void Door::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_Awake_m2C5A9DFE573DB5C5C741C7E5B0CA7EA38355C716 (Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->____animator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Door::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_Open_m73ECB5E64DA07BBD0F34119C77DF895AEA510FE9 (Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.Play("open");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_4;
		NullCheck(L_0);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_0, _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01, NULL);
		// }
		return;
	}
}
// System.Void Door::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door__ctor_m3D2DF383E9B8EE863AD8F8421F0DF83F5B35EAB1 (Door_tE09A4D567B369BBAF1953985B48BCFE5B6ADE8BD* __this, const RuntimeMethod* method) 
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
// System.Void Puzzle::add_Solved(Puzzle/SolveHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Puzzle_add_Solved_m308FBC593B83C14DFA75124E9A489722BBAC173A (Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* __this, SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* V_0 = NULL;
	SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* V_1 = NULL;
	SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* V_2 = NULL;
	{
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_0 = __this->___Solved_4;
		V_0 = L_0;
	}

IL_0007:
	{
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_1 = V_0;
		V_1 = L_1;
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_2 = V_1;
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C*)CastclassSealed((RuntimeObject*)L_4, SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C_il2cpp_TypeInfo_var));
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C** L_5 = (&__this->___Solved_4);
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_6 = V_2;
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_7 = V_1;
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_8;
		L_8 = InterlockedCompareExchangeImpl<SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C*>(L_5, L_6, L_7);
		V_0 = L_8;
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_9 = V_0;
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_10 = V_1;
		if ((!(((RuntimeObject*)(SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C*)L_9) == ((RuntimeObject*)(SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Puzzle::remove_Solved(Puzzle/SolveHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Puzzle_remove_Solved_mA19DE51013349A59EE2A355F98B1440728FA4CB5 (Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* __this, SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* V_0 = NULL;
	SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* V_1 = NULL;
	SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* V_2 = NULL;
	{
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_0 = __this->___Solved_4;
		V_0 = L_0;
	}

IL_0007:
	{
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_1 = V_0;
		V_1 = L_1;
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_2 = V_1;
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C*)CastclassSealed((RuntimeObject*)L_4, SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C_il2cpp_TypeInfo_var));
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C** L_5 = (&__this->___Solved_4);
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_6 = V_2;
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_7 = V_1;
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_8;
		L_8 = InterlockedCompareExchangeImpl<SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C*>(L_5, L_6, L_7);
		V_0 = L_8;
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_9 = V_0;
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_10 = V_1;
		if ((!(((RuntimeObject*)(SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C*)L_9) == ((RuntimeObject*)(SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Puzzle::Solve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Puzzle_Solve_mAB82D0B57D7AA9F0690ED19A31836727AA28C3A3 (Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* __this, const RuntimeMethod* method) 
{
	SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* G_B2_0 = NULL;
	SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* G_B1_0 = NULL;
	{
		// Solved?.Invoke(this);
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_0 = __this->___Solved_4;
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_inline(G_B2_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Puzzle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Puzzle__ctor_mBEDAF970C17CDBA75E6813C73A24C1683536C9A4 (Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* __this, const RuntimeMethod* method) 
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
void SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_Multicast(SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* __this, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* ___p0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* currentDelegate = reinterpret_cast<SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___p0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_OpenInst(SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* __this, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* ___p0, const RuntimeMethod* method)
{
	NullCheck(___p0);
	typedef void (*FunctionPointerType) (Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___p0, method);
}
void SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_OpenStatic(SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* __this, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* ___p0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___p0, method);
}
void SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_OpenStaticInvoker(SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* __this, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* ___p0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* >::Invoke(__this->___method_ptr_0, method, NULL, ___p0);
}
void SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_ClosedStaticInvoker(SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* __this, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* ___p0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___p0);
}
void SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_OpenVirtual(SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* __this, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* ___p0, const RuntimeMethod* method)
{
	NullCheck(___p0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___p0);
}
void SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_OpenInterface(SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* __this, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* ___p0, const RuntimeMethod* method)
{
	NullCheck(___p0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___p0);
}
void SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_OpenGenericVirtual(SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* __this, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* ___p0, const RuntimeMethod* method)
{
	NullCheck(___p0);
	GenericVirtualActionInvoker0::Invoke(method, ___p0);
}
void SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_OpenGenericInterface(SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* __this, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* ___p0, const RuntimeMethod* method)
{
	NullCheck(___p0);
	GenericInterfaceActionInvoker0::Invoke(method, ___p0);
}
// System.Void Puzzle/SolveHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolveHandler__ctor_m48BCE543064C6BEFADAC63E959438CF600386AD6 (SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_OpenStatic;
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
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_Multicast;
}
// System.Void Puzzle/SolveHandler::Invoke(Puzzle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7 (SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* __this, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* ___p0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___p0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Puzzle/SolveHandler::BeginInvoke(Puzzle,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolveHandler_BeginInvoke_m94BAFFF8900B6F842F1FFE48ADEE5BC9551E687C (SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* __this, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* ___p0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___p0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Puzzle/SolveHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolveHandler_EndInvoke_m2006F53C58ECAE750D906B18162B473980D90B3E (SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PuzzlesDoor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuzzlesDoor_Start_m45FFE638FF205BCC2B6252C9C629965CB3880B72 (PuzzlesDoor_t5602BE39EFF0A4A030489BE35DDEBC716FF4794F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PuzzlesDoor_Complete_m3CE5C756D800B9C7CF356280D0533D5C30F95CED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PuzzleU5BU5D_t297A940F0AD644097626BD07808C3D6B0828E2C1* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// puzzlesLeft = puzzles.Length;
		PuzzleU5BU5D_t297A940F0AD644097626BD07808C3D6B0828E2C1* L_0 = __this->___puzzles_5;
		NullCheck(L_0);
		__this->___puzzlesLeft_6 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// foreach (Puzzle p in puzzles)
		PuzzleU5BU5D_t297A940F0AD644097626BD07808C3D6B0828E2C1* L_1 = __this->___puzzles_5;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0031;
	}

IL_0019:
	{
		// foreach (Puzzle p in puzzles)
		PuzzleU5BU5D_t297A940F0AD644097626BD07808C3D6B0828E2C1* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// p.Solved += Complete;
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_6 = (SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C*)il2cpp_codegen_object_new(SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SolveHandler__ctor_m48BCE543064C6BEFADAC63E959438CF600386AD6(L_6, __this, (intptr_t)((void*)PuzzlesDoor_Complete_m3CE5C756D800B9C7CF356280D0533D5C30F95CED_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		Puzzle_add_Solved_m308FBC593B83C14DFA75124E9A489722BBAC173A(L_5, L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0031:
	{
		// foreach (Puzzle p in puzzles)
		int32_t L_8 = V_1;
		PuzzleU5BU5D_t297A940F0AD644097626BD07808C3D6B0828E2C1* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PuzzlesDoor::Complete(Puzzle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuzzlesDoor_Complete_m3CE5C756D800B9C7CF356280D0533D5C30F95CED (PuzzlesDoor_t5602BE39EFF0A4A030489BE35DDEBC716FF4794F* __this, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PuzzlesDoor_Complete_m3CE5C756D800B9C7CF356280D0533D5C30F95CED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B022F1FB535A6932AE81C8D0E3433F139FADB2A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	{
		// for (int i=0; i < puzzles.Length; i++)
		V_0 = 0;
		goto IL_0031;
	}

IL_0004:
	{
		// if (puzzles[i] == p)
		PuzzleU5BU5D_t297A940F0AD644097626BD07808C3D6B0828E2C1* L_0 = __this->___puzzles_5;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* L_4 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// puzzles[i].Solved -= Complete;
		PuzzleU5BU5D_t297A940F0AD644097626BD07808C3D6B0828E2C1* L_6 = __this->___puzzles_5;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* L_10 = (SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C*)il2cpp_codegen_object_new(SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		SolveHandler__ctor_m48BCE543064C6BEFADAC63E959438CF600386AD6(L_10, __this, (intptr_t)((void*)PuzzlesDoor_Complete_m3CE5C756D800B9C7CF356280D0533D5C30F95CED_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		Puzzle_remove_Solved_mA19DE51013349A59EE2A355F98B1440728FA4CB5(L_9, L_10, NULL);
	}

IL_002d:
	{
		// for (int i=0; i < puzzles.Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0031:
	{
		// for (int i=0; i < puzzles.Length; i++)
		int32_t L_12 = V_0;
		PuzzleU5BU5D_t297A940F0AD644097626BD07808C3D6B0828E2C1* L_13 = __this->___puzzles_5;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// puzzlesLeft--;
		int32_t L_14 = __this->___puzzlesLeft_6;
		__this->___puzzlesLeft_6 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		// Debug.Log("Puzzles left: " + puzzlesLeft);
		int32_t* L_15 = (&__this->___puzzlesLeft_6);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0B022F1FB535A6932AE81C8D0E3433F139FADB2A, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
		// if (puzzlesLeft == 0)
		int32_t L_18 = __this->___puzzlesLeft_6;
		if (L_18)
		{
			goto IL_008e;
		}
	}
	{
		// this.Open();
		Door_Open_m73ECB5E64DA07BBD0F34119C77DF895AEA510FE9(__this, NULL);
		// doorOpenAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_19 = __this->___doorOpenAudio_7;
		NullCheck(L_19);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_19, NULL);
		// nextTeleportationArea?.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___nextTeleportationArea_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20;
		G_B7_0 = L_21;
		if (L_21)
		{
			G_B8_0 = L_21;
			goto IL_0088;
		}
	}
	{
		return;
	}

IL_0088:
	{
		NullCheck(G_B8_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B8_0, (bool)1, NULL);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void PuzzlesDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuzzlesDoor__ctor_m247EC90176E0C610B93E4B730DDE30AD33C6C77B (PuzzlesDoor_t5602BE39EFF0A4A030489BE35DDEBC716FF4794F* __this, const RuntimeMethod* method) 
{
	{
		Door__ctor_m3D2DF383E9B8EE863AD8F8421F0DF83F5B35EAB1(__this, NULL);
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
// System.Void Keypad::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keypad_Awake_m666B0EDE0E6BC290DE623B970F2BC99E1CFCF8DA (Keypad_t27793460BDE4894D8416D3F65433112D8753061D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DA49E7C533193D0AECA9D09F6EE9278E753C064);
		s_Il2CppMethodInitialized = true;
	}
	{
		// defaultDisplayTextColor = displayText.color;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___displayText_6;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		__this->___defaultDisplayTextColor_11 = L_1;
		// if (correctPassword.Length == 0)
		String_t* L_2 = __this->___correctPassword_5;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.LogWarning("Keypad password not set.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral8DA49E7C533193D0AECA9D09F6EE9278E753C064, NULL);
	}

IL_0028:
	{
		// ResetEnteredPassword();
		Keypad_ResetEnteredPassword_mFE76E60600330272005CDA5F95C79FE51F81EA66(__this, NULL);
		// }
		return;
	}
}
// System.Void Keypad::ResetEnteredPassword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keypad_ResetEnteredPassword_mFE76E60600330272005CDA5F95C79FE51F81EA66 (Keypad_t27793460BDE4894D8416D3F65433112D8753061D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state = State.Empty;
		__this->___state_13 = 0;
		// enteredPassword = "";
		__this->___enteredPassword_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enteredPassword_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// displayText.color = defaultDisplayTextColor;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___displayText_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___defaultDisplayTextColor_11;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Keypad::UpdateEnteredPassword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keypad_UpdateEnteredPassword_m2CB2F9D7EEB73F9B5C7C5B46A440B5A0282786C1 (Keypad_t27793460BDE4894D8416D3F65433112D8753061D* __this, String_t* ___num0, const RuntimeMethod* method) 
{
	{
		// if (enteredPassword.Length < correctPassword.Length)
		String_t* L_0 = __this->___enteredPassword_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		String_t* L_2 = __this->___correctPassword_5;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0037;
		}
	}
	{
		// state = State.Entered;
		__this->___state_13 = 1;
		// enteredPassword += num;
		String_t* L_4 = __this->___enteredPassword_12;
		String_t* L_5 = ___num0;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, L_5, NULL);
		__this->___enteredPassword_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enteredPassword_12), (void*)L_6);
		// UpdateDisplayText();
		Keypad_UpdateDisplayText_mE11A1192410F8B767E3A592930FF5C1A732FAF46(__this, NULL);
	}

IL_0037:
	{
		// if (enteredPassword.Length == correctPassword.Length)
		String_t* L_7 = __this->___enteredPassword_12;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		String_t* L_9 = __this->___correctPassword_5;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_0078;
		}
	}
	{
		// if (correctPassword == enteredPassword)
		String_t* L_11 = __this->___correctPassword_5;
		String_t* L_12 = __this->___enteredPassword_12;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		// state = State.Success;
		__this->___state_13 = 2;
		goto IL_0072;
	}

IL_006b:
	{
		// state = State.Failure;
		__this->___state_13 = 3;
	}

IL_0072:
	{
		// UpdateDisplayText();
		Keypad_UpdateDisplayText_mE11A1192410F8B767E3A592930FF5C1A732FAF46(__this, NULL);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Keypad::UpdateDisplayText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keypad_UpdateDisplayText_mE11A1192410F8B767E3A592930FF5C1A732FAF46 (Keypad_t27793460BDE4894D8416D3F65433112D8753061D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (state)
		int32_t L_0 = __this->___state_13;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0061;
			}
			case 2:
			{
				goto IL_00af;
			}
			case 3:
			{
				goto IL_0084;
			}
		}
	}
	{
		return;
	}

IL_001e:
	{
		// string dots = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < correctPassword.Length - 1; i++)
		V_2 = 0;
		goto IL_0038;
	}

IL_0028:
	{
		// dots += ". ";
		String_t* L_2 = V_0;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434, NULL);
		V_0 = L_3;
		// for (int i = 0; i < correctPassword.Length - 1; i++)
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < correctPassword.Length - 1; i++)
		int32_t L_5 = V_2;
		String_t* L_6 = __this->___correctPassword_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1)))))
		{
			goto IL_0028;
		}
	}
	{
		// dots += ".";
		String_t* L_8 = V_0;
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		V_0 = L_9;
		// displayText.text = dots;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___displayText_6;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_11);
		// break;
		return;
	}

IL_0061:
	{
		// keyPadAudio.PlayOneShot(buttonClickSound);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___keyPadAudio_14;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13 = __this->___buttonClickSound_15;
		NullCheck(L_12);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_12, L_13, NULL);
		// displayText.text = enteredPassword;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = __this->___displayText_6;
		String_t* L_15 = __this->___enteredPassword_12;
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_14, L_15);
		// break;
		return;
	}

IL_0084:
	{
		// keyPadAudio.PlayOneShot(failureSound);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = __this->___keyPadAudio_14;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_17 = __this->___failureSound_17;
		NullCheck(L_16);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_16, L_17, NULL);
		// StartCoroutine(DisplayResultText(failureText, failureColor));
		String_t* L_18 = __this->___failureText_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = __this->___failureColor_10;
		RuntimeObject* L_20;
		L_20 = Keypad_DisplayResultText_mF2ADF90E176863D52C3F90B7F26DB25D933DFFEF(__this, L_18, L_19, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_21;
		L_21 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_20, NULL);
		// break;
		return;
	}

IL_00af:
	{
		// keyPadAudio.PlayOneShot(successSound);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_22 = __this->___keyPadAudio_14;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_23 = __this->___successSound_16;
		NullCheck(L_22);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_22, L_23, NULL);
		// this.Solve();
		Puzzle_Solve_mAB82D0B57D7AA9F0690ED19A31836727AA28C3A3(__this, NULL);
		// StartCoroutine(DisplayResultText(successText, successColor));
		String_t* L_24 = __this->___successText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = __this->___successColor_9;
		RuntimeObject* L_26;
		L_26 = Keypad_DisplayResultText_mF2ADF90E176863D52C3F90B7F26DB25D933DFFEF(__this, L_24, L_25, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_27;
		L_27 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_26, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Keypad::DisplayResultText(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Keypad_DisplayResultText_mF2ADF90E176863D52C3F90B7F26DB25D933DFFEF (Keypad_t27793460BDE4894D8416D3F65433112D8753061D* __this, String_t* ___txtToDisplay0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___txtColor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4* L_0 = (U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4*)il2cpp_codegen_object_new(U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDisplayResultTextU3Ed__18__ctor_m79CC9622F8A2F77221F1451E49B42AB7BFDF04FB(L_0, 0, NULL);
		U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4* L_2 = L_1;
		String_t* L_3 = ___txtToDisplay0;
		NullCheck(L_2);
		L_2->___txtToDisplay_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___txtToDisplay_4), (void*)L_3);
		U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4* L_4 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___txtColor1;
		NullCheck(L_4);
		L_4->___txtColor_3 = L_5;
		return L_4;
	}
}
// System.Void Keypad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keypad__ctor_m0CE468360E803740BA1D04A2E64C6F2E56317AF9 (Keypad_t27793460BDE4894D8416D3F65433112D8753061D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2C9A1B79388A3548176117524B37FBC20A1A806);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE20EF8C8E16454FAD750F3BB8D8C7E01668557D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string successText = "sccs";
		__this->___successText_7 = _stringLiteralE20EF8C8E16454FAD750F3BB8D8C7E01668557D2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___successText_7), (void*)_stringLiteralE20EF8C8E16454FAD750F3BB8D8C7E01668557D2);
		// private string failureText = "fail";
		__this->___failureText_8 = _stringLiteralB2C9A1B79388A3548176117524B37FBC20A1A806;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___failureText_8), (void*)_stringLiteralB2C9A1B79388A3548176117524B37FBC20A1A806);
		Puzzle__ctor_mBEDAF970C17CDBA75E6813C73A24C1683536C9A4(__this, NULL);
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
// System.Void Keypad/<DisplayResultText>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayResultTextU3Ed__18__ctor_m79CC9622F8A2F77221F1451E49B42AB7BFDF04FB (U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Keypad/<DisplayResultText>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayResultTextU3Ed__18_System_IDisposable_Dispose_m8176F85F6837674366AD227B902389CEA13255A4 (U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Keypad/<DisplayResultText>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisplayResultTextU3Ed__18_MoveNext_m8C3F27982BA3A7FFC152ABD93650B3ECAD416701 (U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Keypad_t27793460BDE4894D8416D3F65433112D8753061D* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Keypad_t27793460BDE4894D8416D3F65433112D8753061D* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0084;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSecondsRealtime(0);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_3 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_3, (0.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// displayText.color = txtColor;
		Keypad_t27793460BDE4894D8416D3F65433112D8753061D* L_4 = V_1;
		NullCheck(L_4);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = L_4->___displayText_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___txtColor_3;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// displayText.text = txtToDisplay;
		Keypad_t27793460BDE4894D8416D3F65433112D8753061D* L_7 = V_1;
		NullCheck(L_7);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = L_7->___displayText_6;
		String_t* L_9 = __this->___txtToDisplay_4;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_9);
		// yield return new WaitForSecondsRealtime(2);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_10 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_10, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0084:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ResetEnteredPassword();
		Keypad_t27793460BDE4894D8416D3F65433112D8753061D* L_11 = V_1;
		NullCheck(L_11);
		Keypad_ResetEnteredPassword_mFE76E60600330272005CDA5F95C79FE51F81EA66(L_11, NULL);
		// UpdateDisplayText();
		Keypad_t27793460BDE4894D8416D3F65433112D8753061D* L_12 = V_1;
		NullCheck(L_12);
		Keypad_UpdateDisplayText_mE11A1192410F8B767E3A592930FF5C1A732FAF46(L_12, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Keypad/<DisplayResultText>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplayResultTextU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE8B5AC3167D8D0905B8B73A8B110770803E9F18F (U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Keypad/<DisplayResultText>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayResultTextU3Ed__18_System_Collections_IEnumerator_Reset_m3CA678A23AF03716195419F408904C36919EEE61 (U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisplayResultTextU3Ed__18_System_Collections_IEnumerator_Reset_m3CA678A23AF03716195419F408904C36919EEE61_RuntimeMethod_var)));
	}
}
// System.Object Keypad/<DisplayResultText>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplayResultTextU3Ed__18_System_Collections_IEnumerator_get_Current_m1A13806235E0372620E7B815014B71AC790DDC48 (U3CDisplayResultTextU3Ed__18_t9E7E8D3CE72535243761FD9995D01C6E59755EC4* __this, const RuntimeMethod* method) 
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
// System.Void KeypadButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeypadButton_Start_m82B0A2BB6DC885363535956E99AE51370B691613 (KeypadButton_t2AC4CC31EE53341B2B797F13063319BCB0D4D9D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84BB265145EB70DB25FAFF87B856F5F77549BFCB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttons = GameObject.FindGameObjectsWithTag("KeypadButton");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral84BB265145EB70DB25FAFF87B856F5F77549BFCB, NULL);
		__this->___buttons_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttons_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void KeypadButton::OnTriggerEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeypadButton_OnTriggerEnter_m486A225C09D27D7EC73953A72C378DD5BFA4D3A7 (KeypadButton_t2AC4CC31EE53341B2B797F13063319BCB0D4D9D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (GameObject b in buttons)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___buttons_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000b:
	{
		// foreach (GameObject b in buttons)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// b.GetComponent<Collider>().enabled = false;
		NullCheck(L_4);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5;
		L_5 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_4, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		NullCheck(L_5);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_5, (bool)0, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001d:
	{
		// foreach (GameObject b in buttons)
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// StartCoroutine(DisableOtherCollidersForSeconds());
		RuntimeObject* L_9;
		L_9 = KeypadButton_DisableOtherCollidersForSeconds_mC123A4816291B6FB547B08CB7BC4D3FD8BC21D7C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator KeypadButton::DisableOtherCollidersForSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeypadButton_DisableOtherCollidersForSeconds_mC123A4816291B6FB547B08CB7BC4D3FD8BC21D7C (KeypadButton_t2AC4CC31EE53341B2B797F13063319BCB0D4D9D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDisableOtherCollidersForSecondsU3Ed__3_t3CFBC0C6B589DBCB12034E26CACE79CDB7DAC294_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDisableOtherCollidersForSecondsU3Ed__3_t3CFBC0C6B589DBCB12034E26CACE79CDB7DAC294* L_0 = (U3CDisableOtherCollidersForSecondsU3Ed__3_t3CFBC0C6B589DBCB12034E26CACE79CDB7DAC294*)il2cpp_codegen_object_new(U3CDisableOtherCollidersForSecondsU3Ed__3_t3CFBC0C6B589DBCB12034E26CACE79CDB7DAC294_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDisableOtherCollidersForSecondsU3Ed__3__ctor_m522E0F5DBA74E6C2C9AF4CFB7AA9EA94DAA8EEDE(L_0, 0, NULL);
		U3CDisableOtherCollidersForSecondsU3Ed__3_t3CFBC0C6B589DBCB12034E26CACE79CDB7DAC294* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void KeypadButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeypadButton__ctor_mC5CF0F424CED6587A22118ECDE66D101C230EF28 (KeypadButton_t2AC4CC31EE53341B2B797F13063319BCB0D4D9D7* __this, const RuntimeMethod* method) 
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
// System.Void KeypadButton/<DisableOtherCollidersForSeconds>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableOtherCollidersForSecondsU3Ed__3__ctor_m522E0F5DBA74E6C2C9AF4CFB7AA9EA94DAA8EEDE (U3CDisableOtherCollidersForSecondsU3Ed__3_t3CFBC0C6B589DBCB12034E26CACE79CDB7DAC294* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void KeypadButton/<DisableOtherCollidersForSeconds>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableOtherCollidersForSecondsU3Ed__3_System_IDisposable_Dispose_mCACCD02EEA0056592055F731590BDE71106C7E4E (U3CDisableOtherCollidersForSecondsU3Ed__3_t3CFBC0C6B589DBCB12034E26CACE79CDB7DAC294* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean KeypadButton/<DisableOtherCollidersForSeconds>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisableOtherCollidersForSecondsU3Ed__3_MoveNext_m10C53CAD2A96ECA5D3DD27524041F45C08478E86 (U3CDisableOtherCollidersForSecondsU3Ed__3_t3CFBC0C6B589DBCB12034E26CACE79CDB7DAC294* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeypadButton_t2AC4CC31EE53341B2B797F13063319BCB0D4D9D7* V_1 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		KeypadButton_t2AC4CC31EE53341B2B797F13063319BCB0D4D9D7* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0077;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSecondsRealtime(0);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_3 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_3, (0.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.GetComponent<Button>().onClick.Invoke();
		KeypadButton_t2AC4CC31EE53341B2B797F13063319BCB0D4D9D7* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6;
		L_6 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_5, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_6, NULL);
		NullCheck(L_7);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_7, NULL);
		// yield return new WaitForSecondsRealtime(0.8f);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_8 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_8, (0.800000012f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0077:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach (GameObject b in buttons)
		KeypadButton_t2AC4CC31EE53341B2B797F13063319BCB0D4D9D7* L_9 = V_1;
		NullCheck(L_9);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = L_9->___buttons_4;
		V_2 = L_10;
		V_3 = 0;
		goto IL_009b;
	}

IL_0089:
	{
		// foreach (GameObject b in buttons)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = V_2;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		// b.GetComponent<Collider>().enabled = true;
		NullCheck(L_14);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_15;
		L_15 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_14, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		NullCheck(L_15);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_15, (bool)1, NULL);
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_009b:
	{
		// foreach (GameObject b in buttons)
		int32_t L_17 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = V_2;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0089;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object KeypadButton/<DisableOtherCollidersForSeconds>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisableOtherCollidersForSecondsU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDB79E85C3966E26CB036716CAFFDB480A386FD53 (U3CDisableOtherCollidersForSecondsU3Ed__3_t3CFBC0C6B589DBCB12034E26CACE79CDB7DAC294* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void KeypadButton/<DisableOtherCollidersForSeconds>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableOtherCollidersForSecondsU3Ed__3_System_Collections_IEnumerator_Reset_m4D076E43DC3AA532F0130A592B468876D70CE835 (U3CDisableOtherCollidersForSecondsU3Ed__3_t3CFBC0C6B589DBCB12034E26CACE79CDB7DAC294* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisableOtherCollidersForSecondsU3Ed__3_System_Collections_IEnumerator_Reset_m4D076E43DC3AA532F0130A592B468876D70CE835_RuntimeMethod_var)));
	}
}
// System.Object KeypadButton/<DisableOtherCollidersForSeconds>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisableOtherCollidersForSecondsU3Ed__3_System_Collections_IEnumerator_get_Current_mA4C30D6D7D64010B74705723C774F6229B1FEFC5 (U3CDisableOtherCollidersForSecondsU3Ed__3_t3CFBC0C6B589DBCB12034E26CACE79CDB7DAC294* __this, const RuntimeMethod* method) 
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
// System.Void reveal::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void reveal_Start_m642B591F5FACDFB6E4D2A9B4AB676EEEDBCB57A2 (reveal_t8C5DD8016CF1CD7B040A6ACA33B6BB0E3DDFD729* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void reveal::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void reveal_Update_mF96A421834CEE3346B234A01FE948C0335A3B858 (reveal_t8C5DD8016CF1CD7B040A6ACA33B6BB0E3DDFD729* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Ray ray = new Ray(transform.position, transform.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_4), L_1, L_3, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out hit, maxDistance))
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_5 = (&__this->___hit_5);
		float L_6 = __this->___maxDistance_6;
		bool L_7;
		L_7 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_4, L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		// Debug.Log(hit.point);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_8 = (&__this->___hit_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9;
		RuntimeObject* L_11 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_10);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void reveal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void reveal__ctor_m4802C3AE06D54DDB99C72311738551FDE30A26E3 (reveal_t8C5DD8016CF1CD7B040A6ACA33B6BB0E3DDFD729* __this, const RuntimeMethod* method) 
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
// System.Void ElectricalPanelPuzzle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElectricalPanelPuzzle_Awake_mEFCB7B4726136FAB21259229186D525B5F3C5450 (ElectricalPanelPuzzle_t20565CF81FB876182B66AE00635D1B8EBB192348* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LEDStates = new bool[2] { false, false };
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___LEDStates_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LEDStates_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void ElectricalPanelPuzzle::LitLED(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElectricalPanelPuzzle_LitLED_m9FCA986951A1EC726C215667C8F737FDD4F9CDBC (ElectricalPanelPuzzle_t20565CF81FB876182B66AE00635D1B8EBB192348* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86157637D7A7EBDBB50E2F55A1FF92C015C9F37F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("turn on: "+ LEDLights[idx].name);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___LEDLights_6;
		int32_t L_1 = ___idx0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral86157637D7A7EBDBB50E2F55A1FF92C015C9F37F, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// LEDLights[idx].GetComponent<MeshRenderer>().material = LEDOnMat;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___LEDLights_6;
		int32_t L_7 = ___idx0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_10;
		L_10 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_9, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___LEDOnMat_8;
		NullCheck(L_10);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_10, L_11, NULL);
		// LEDLights[idx].GetComponentInChildren<Light>().enabled = true;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___LEDLights_6;
		int32_t L_13 = ___idx0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16;
		L_16 = GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26(L_15, GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26_RuntimeMethod_var);
		NullCheck(L_16);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_16, (bool)1, NULL);
		// LEDStates[idx] = true;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17 = __this->___LEDStates_7;
		int32_t L_18 = ___idx0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (bool)1);
		// Debug.Log(LEDStates[0] + " " + LEDStates[1]);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_19 = __this->___LEDStates_7;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_21 = __this->___LEDStates_7;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), NULL);
		String_t* L_23;
		L_23 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_20, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_22, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_23, NULL);
		// CheckAllLEDOn();
		ElectricalPanelPuzzle_CheckAllLEDOn_m75512FD018AFD74AF781B828F42083368B41EC9B(__this, NULL);
		// }
		return;
	}
}
// System.Void ElectricalPanelPuzzle::UnlitLED(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElectricalPanelPuzzle_UnlitLED_m4DA108A96C20C52B83DFC664AD6DC079353275A3 (ElectricalPanelPuzzle_t20565CF81FB876182B66AE00635D1B8EBB192348* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E5F11AA08DD27E17EEED4DED05E49F0ADF36A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("turn off: " + LEDLights[idx].name);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___LEDLights_6;
		int32_t L_1 = ___idx0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral14E5F11AA08DD27E17EEED4DED05E49F0ADF36A0, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// LEDLights[idx].GetComponent<MeshRenderer>().material = LEDOffMat;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___LEDLights_6;
		int32_t L_7 = ___idx0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_10;
		L_10 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_9, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___LEDOffMat_9;
		NullCheck(L_10);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_10, L_11, NULL);
		// LEDLights[idx].GetComponentInChildren<Light>().enabled = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___LEDLights_6;
		int32_t L_13 = ___idx0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16;
		L_16 = GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26(L_15, GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26_RuntimeMethod_var);
		NullCheck(L_16);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_16, (bool)0, NULL);
		// LEDStates[idx] = false;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17 = __this->___LEDStates_7;
		int32_t L_18 = ___idx0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (bool)0);
		// Debug.Log(LEDStates[0] + " " + LEDStates[1]);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_19 = __this->___LEDStates_7;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_21 = __this->___LEDStates_7;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), NULL);
		String_t* L_23;
		L_23 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_20, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_22, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_23, NULL);
		// CheckAllLEDOn();
		ElectricalPanelPuzzle_CheckAllLEDOn_m75512FD018AFD74AF781B828F42083368B41EC9B(__this, NULL);
		// }
		return;
	}
}
// System.Void ElectricalPanelPuzzle::CheckAllLEDOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElectricalPanelPuzzle_CheckAllLEDOn_m75512FD018AFD74AF781B828F42083368B41EC9B (ElectricalPanelPuzzle_t20565CF81FB876182B66AE00635D1B8EBB192348* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA93F7EFBB698D3DD1C2F570D775C1FEA1470FC4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF289F64B982275D25E9DCE3E43E6836507F67CBB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (LEDStates[0] && LEDStates[1])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = __this->___LEDStates_7;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (uint8_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = __this->___LEDStates_7;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (uint8_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// Debug.Log("turn on room light");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA93F7EFBB698D3DD1C2F570D775C1FEA1470FC4A, NULL);
		// roomLight.enabled = true;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_6 = __this->___roomLight_5;
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)1, NULL);
		// this.Solve();
		Puzzle_Solve_mAB82D0B57D7AA9F0690ED19A31836727AA28C3A3(__this, NULL);
		// screen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___screen_10;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		return;
	}

IL_003d:
	{
		// Debug.Log("turn off room light");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF289F64B982275D25E9DCE3E43E6836507F67CBB, NULL);
		// roomLight.enabled = false;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_8 = __this->___roomLight_5;
		NullCheck(L_8);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)0, NULL);
		// screen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___screen_10;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ElectricalPanelPuzzle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElectricalPanelPuzzle__ctor_m8E7C45E4775CA1BAEB12A94136D610841AD37696 (ElectricalPanelPuzzle_t20565CF81FB876182B66AE00635D1B8EBB192348* __this, const RuntimeMethod* method) 
{
	{
		Puzzle__ctor_mBEDAF970C17CDBA75E6813C73A24C1683536C9A4(__this, NULL);
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
// System.Void TransportToScene::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportToScene_OnTriggerEnter_m1CF4D4FE456A780DCBF48C24A16FC33E547FA630 (TransportToScene_tF74EE0421CF1A6F35E0BE3483F7B89D8ECBCBED7* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___c0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TransportToScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportToScene__ctor_m13EF4C1D14E0C4F2F718F0870B0EEB855D77BA86 (TransportToScene_tF74EE0421CF1A6F35E0BE3483F7B89D8ECBCBED7* __this, const RuntimeMethod* method) 
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
// System.Void TimerScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerScript_Start_mC066FA62F50E6D58B359518C642CE9005E3344D0 (TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TimerScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerScript_Update_m45499011F7FDAC924A920E475712C081C0E00133 (TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* __this, const RuntimeMethod* method) 
{
	{
		// if (TimeLeft > 0)
		float L_0 = __this->___TimeLeft_4;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		// TimeLeft -= Time.deltaTime;
		float L_1 = __this->___TimeLeft_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___TimeLeft_4 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// updateTimer(TimeLeft);
		float L_3 = __this->___TimeLeft_4;
		TimerScript_updateTimer_mE5554D2DACC992570416C538810EF95681E360A9(__this, L_3, NULL);
	}

IL_002b:
	{
		// if (TimeLeft <= 110 && track == 0)
		float L_4 = __this->___TimeLeft_4;
		if ((!(((float)L_4) <= ((float)(110.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_5 = __this->___track_10;
		if (L_5)
		{
			goto IL_005b;
		}
	}
	{
		// StartCoroutine(Fade());
		RuntimeObject* L_6;
		L_6 = TimerScript_Fade_m1D5F7BCB458F5D99B83627CE697D9AC9293F3EB9(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// track += 1;
		int32_t L_8 = __this->___track_10;
		__this->___track_10 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_005b:
	{
		// if (TimeLeft <= 85 && track == 1)
		float L_9 = __this->___TimeLeft_4;
		if ((!(((float)L_9) <= ((float)(85.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_10 = __this->___track_10;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0099;
		}
	}
	{
		// goodbyeSound.Play(0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___goodbyeSound_9;
		NullCheck(L_11);
		AudioSource_Play_mC9D19FA54347ED102AD9913E3E7528BE969199FB(L_11, ((int64_t)0), NULL);
		// Rumble.Play(0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___Rumble_7;
		NullCheck(L_12);
		AudioSource_Play_mC9D19FA54347ED102AD9913E3E7528BE969199FB(L_12, ((int64_t)0), NULL);
		// track += 1;
		int32_t L_13 = __this->___track_10;
		__this->___track_10 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void TimerScript::updateTimer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerScript_updateTimer_mE5554D2DACC992570416C538810EF95681E360A9 (TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* __this, float ___currentTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE7F174AA19633DF63A75D4720838FD9898B55C);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// currentTime += 1;
		float L_0 = ___currentTime0;
		___currentTime0 = ((float)il2cpp_codegen_add(L_0, (1.0f)));
		// float minutes = Mathf.FloorToInt(currentTime / 60);
		float L_1 = ___currentTime0;
		int32_t L_2;
		L_2 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(L_1/(60.0f))), NULL);
		V_0 = ((float)L_2);
		// float seconds = Mathf.FloorToInt(currentTime % 60);
		float L_3 = ___currentTime0;
		int32_t L_4;
		L_4 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline((fmodf(L_3, (60.0f))), NULL);
		V_1 = ((float)L_4);
		// float checker = seconds % 10;
		float L_5 = V_1;
		// if (checker == 0f)
		if ((!(((float)(fmodf(L_5, (10.0f)))) == ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		// beep.Play(0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___beep_6;
		NullCheck(L_6);
		AudioSource_Play_mC9D19FA54347ED102AD9913E3E7528BE969199FB(L_6, ((int64_t)0), NULL);
	}

IL_0040:
	{
		// Timertxt.text = string.Format("{0:00} : {1:00}", minutes, seconds);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___Timertxt_5;
		float L_8 = V_0;
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_9);
		float L_11 = V_1;
		float L_12 = L_11;
		RuntimeObject* L_13 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralCCE7F174AA19633DF63A75D4720838FD9898B55C, L_10, L_13, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_14);
		// }
		return;
	}
}
// System.Collections.IEnumerator TimerScript::Fade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimerScript_Fade_m1D5F7BCB458F5D99B83627CE697D9AC9293F3EB9 (TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeU3Ed__10_tD9D50691E61A8E738685E05C1182C5056594806B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeU3Ed__10_tD9D50691E61A8E738685E05C1182C5056594806B* L_0 = (U3CFadeU3Ed__10_tD9D50691E61A8E738685E05C1182C5056594806B*)il2cpp_codegen_object_new(U3CFadeU3Ed__10_tD9D50691E61A8E738685E05C1182C5056594806B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeU3Ed__10__ctor_m3AAAAF80C2EB8F421185366997D4CF07ADAA3776(L_0, 0, NULL);
		U3CFadeU3Ed__10_tD9D50691E61A8E738685E05C1182C5056594806B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TimerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerScript__ctor_m5341AAB8DB0EEC08CC13E3AFC70E88E04F577ADC (TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* __this, const RuntimeMethod* method) 
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
// System.Void TimerScript/<Fade>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__10__ctor_m3AAAAF80C2EB8F421185366997D4CF07ADAA3776 (U3CFadeU3Ed__10_tD9D50691E61A8E738685E05C1182C5056594806B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TimerScript/<Fade>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__10_System_IDisposable_Dispose_mFACE383C639560134B8B0D815EA8A9409495DC62 (U3CFadeU3Ed__10_tD9D50691E61A8E738685E05C1182C5056594806B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TimerScript/<Fade>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeU3Ed__10_MoveNext_mEC5773A2500DDDFB6855E6B825DD340C21310D67 (U3CFadeU3Ed__10_tD9D50691E61A8E738685E05C1182C5056594806B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for(float vol = standardSound.volume; vol >= 0; vol -= .0015f)
		TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* L_4 = V_1;
		NullCheck(L_4);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = L_4->___standardSound_8;
		NullCheck(L_5);
		float L_6;
		L_6 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_5, NULL);
		__this->___U3CvolU3E5__2_3 = L_6;
		goto IL_0074;
	}

IL_0031:
	{
		// standardSound.volume = vol;
		TimerScript_t64F3BBDDFC8A15B75B0ACF9057CBD8FAD8C55AD5* L_7 = V_1;
		NullCheck(L_7);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = L_7->___standardSound_8;
		float L_9 = __this->___U3CvolU3E5__2_3;
		NullCheck(L_8);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_8, L_9, NULL);
		// yield return new WaitForSeconds(.05f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, (0.0500000007f), NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for(float vol = standardSound.volume; vol >= 0; vol -= .0015f)
		float L_11 = __this->___U3CvolU3E5__2_3;
		__this->___U3CvolU3E5__2_3 = ((float)il2cpp_codegen_subtract(L_11, (0.00150000001f)));
	}

IL_0074:
	{
		// for(float vol = standardSound.volume; vol >= 0; vol -= .0015f)
		float L_12 = __this->___U3CvolU3E5__2_3;
		if ((((float)L_12) >= ((float)(0.0f))))
		{
			goto IL_0031;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object TimerScript/<Fade>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC63E4D175496D30FD9056060330D4821196BDCBA (U3CFadeU3Ed__10_tD9D50691E61A8E738685E05C1182C5056594806B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TimerScript/<Fade>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__10_System_Collections_IEnumerator_Reset_mFD99BC0275FC09956F2D1618406AE3F8F7DCDF9F (U3CFadeU3Ed__10_tD9D50691E61A8E738685E05C1182C5056594806B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeU3Ed__10_System_Collections_IEnumerator_Reset_mFD99BC0275FC09956F2D1618406AE3F8F7DCDF9F_RuntimeMethod_var)));
	}
}
// System.Object TimerScript/<Fade>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeU3Ed__10_System_Collections_IEnumerator_get_Current_mFE4A098C32C2B23C0E5EDF3C118499318A63C5F6 (U3CFadeU3Ed__10_tD9D50691E61A8E738685E05C1182C5056594806B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolveHandler_Invoke_m6CA3C01AB0C08D1AB64892657C96585963C117D7_inline (SolveHandler_tDD9472A1ADE7253DD20F02FF3C3F11E0C3A4AE2C* __this, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6* ___p0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Puzzle_t5E3B384FE8E2BB85F655E43EC5B50F585AE912A6*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___p0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
