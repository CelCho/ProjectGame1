#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Func`2<UnityEngine.Resolution,UnityEngine.Resolution>
struct Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Resolution>
struct IEnumerable_1_t6C00CEA5A06125C94ABA52C332306AF43C3D1BB0;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D;
// UnityEngine.Animator[]
struct AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Missions[]
struct MissionsU5BU5D_t62BD9A586F08A2DA7A71B62BDBC6FCF5E7D71A49;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Barrier
struct Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraFollow
struct CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8;
// CameraWaypoint
struct CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Credits
struct Credits_t6B2B82C0D386F61EDEF1EDBA08962FA05717D04C;
// Data
struct Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DontDestroyOnLoad
struct DontDestroyOnLoad_tA639E7371DDCB4CAA1153085E9C678B55128341D;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// EnvironmentFixe
struct EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// Game
struct Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameOverManager
struct GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Inventory
struct Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805;
// Item
struct Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C;
// MainMenu
struct MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Missions
struct Missions_tBEB12995FBE657C3140626C636F3335F2595E898;
// MissionsManager
struct MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PauseMenu
struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791;
// PickUpCoin
struct PickUpCoin_t8EAC46A9921C91A56ECE00DE3791A19CA2557050;
// PickUpItem
struct PickUpItem_tD66C6424CCD1B9F24A458174FE2D94E094AB8F20;
// PlayerEffects
struct PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4;
// PlayerHealth
struct PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465;
// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Scenes
struct Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// SettingsMenu
struct SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250;
// Shop
struct Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6;
// ShopManager
struct ShopManager_t34B2430F984DB95B4A3B35C0E69A0CC75014BAFB;
// ShowMissions
struct ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC;
// Skin
struct Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8;
// SlideManager
struct SlideManager_t000489F97B893AB0E626B408AD9E784D013DDB50;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Trails
struct Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// WeakSpot
struct WeakSpot_t8F0D2FD393201EA9830153F3FC1C78871261904F;
// Barrier/<BoxEnabled>d__9
struct U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6;
// Enemy/<Attack>d__16
struct U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9;
// Enemy/<Die>d__15
struct U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D;
// EnvironmentFixe/<BoxEnabled>d__4
struct U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9;
// Game/<speedUpgrade>d__15
struct U3CspeedUpgradeU3Ed__15_tBA27EF2D54484307173E3AAA7DBEC841446B6BAC;
// GameOverManager/<Wait>d__10
struct U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// PauseMenu/<CountDown>d__21
struct U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2;
// PlayerEffects/<InvinsiblePlayer>d__5
struct U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20;
// PlayerEffects/<RemoveSpeed>d__7
struct U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE;
// PlayerHealth/<HandleInvincibilityDelay>d__15
struct U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB;
// PlayerHealth/<InvincibilityFlash>d__14
struct U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E;
// PlayerMovement/<Attack>d__20
struct U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60;
// SettingsMenu/<>c
struct U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17;
// ShowMissions/<SwitchMission>d__9
struct U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667;

IL2CPP_EXTERN_C RuntimeClass* CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CspeedUpgradeU3Ed__15_tBA27EF2D54484307173E3AAA7DBEC841446B6BAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral024F86D4724F3BA4CCBF7636C4C55EEF2E09B7DF;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral06BF298C159DF407A06E64725C8E6D75DB233768;
IL2CPP_EXTERN_C String_t* _stringLiteral08EF1409295A748F17C961491378A3B6215AA838;
IL2CPP_EXTERN_C String_t* _stringLiteral0F10C8F01816F23DEE001DE0E3A831AAB792D49C;
IL2CPP_EXTERN_C String_t* _stringLiteral173E19F3678E4DDB59A8D2E96CC67A2FCE17710A;
IL2CPP_EXTERN_C String_t* _stringLiteral177728170BF726618EB96197A47059A19DD56F1A;
IL2CPP_EXTERN_C String_t* _stringLiteral191D4CB5360A2A37D768AD83EC8DECE96F8CFE1A;
IL2CPP_EXTERN_C String_t* _stringLiteral2F94F4742528BDF9EB11E79D6B1AA693BB9912DF;
IL2CPP_EXTERN_C String_t* _stringLiteral3565EC429F8F437A37230F06686C2D5C736AEFA3;
IL2CPP_EXTERN_C String_t* _stringLiteral4AC51F276AF87592A88D9B3EBFDA93ACAAADFCC1;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral583754F892E84885C1B6FB09C0DD59545A5238B6;
IL2CPP_EXTERN_C String_t* _stringLiteral5C058FE20FD7652D620A17B5F9D6AE4EEFA76795;
IL2CPP_EXTERN_C String_t* _stringLiteral5C0B22C6448ED5AD4CA313D5F7ECCECD0A14C4C0;
IL2CPP_EXTERN_C String_t* _stringLiteral622380E561E513C71205FB570C11DE428021CA0F;
IL2CPP_EXTERN_C String_t* _stringLiteral64C2EEA7AD942BE4C91275A994A7265AAB9CE928;
IL2CPP_EXTERN_C String_t* _stringLiteral74EBEC30E667023205227F3CDD7B95BAC4BB8344;
IL2CPP_EXTERN_C String_t* _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5;
IL2CPP_EXTERN_C String_t* _stringLiteral7E39FF2E25E7C626101199E5389D85A5D4DF1D47;
IL2CPP_EXTERN_C String_t* _stringLiteral7E8DD28D78A02777DA318C89D8DB9EDBD3B00B72;
IL2CPP_EXTERN_C String_t* _stringLiteralA28578C4BD751A59CB652E54D2C863F3E5E5DA89;
IL2CPP_EXTERN_C String_t* _stringLiteralA593335833BAF73F78EA5CBAEEACD184331DAEB8;
IL2CPP_EXTERN_C String_t* _stringLiteralA6A62E96AA94866CBAE53EA96E93CD3D4FE29A30;
IL2CPP_EXTERN_C String_t* _stringLiteralA941039D60C5A49DDB9587C1298B8C2DD802B808;
IL2CPP_EXTERN_C String_t* _stringLiteralB30CDD2243DD45B4B246BB6A2A74392B8C35CC5E;
IL2CPP_EXTERN_C String_t* _stringLiteralBF5B195D6E6A4578E9D4C03A81CC5ACEEF63D102;
IL2CPP_EXTERN_C String_t* _stringLiteralC82D769640E060BED455AE5C7B1B2B302B193CEF;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD283071278C5CA19C7E2D9F2EC2D44D80A4EBBFF;
IL2CPP_EXTERN_C String_t* _stringLiteralD48EC65100657414AA8C3D342AAFEA5E0574652E;
IL2CPP_EXTERN_C String_t* _stringLiteralD75D41C18D829FFA2798A164F222AD3C3A052445;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE3BE9E69B1DEAE1BEC837138608798B40970397A;
IL2CPP_EXTERN_C String_t* _stringLiteralE87B20040C53AD882291A8EE147D3F5657339292;
IL2CPP_EXTERN_C String_t* _stringLiteralE890FA6E82318468C5436B177010E73AC414960E;
IL2CPP_EXTERN_C String_t* _stringLiteralEFD1ADADB9B841D6B3DD2B5D4C744DA2621CCBFA;
IL2CPP_EXTERN_C String_t* _stringLiteralF684E59C356B60C84855C75DFA566ADC9BFEED33;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m6F67FC96A586C55B18C8BBE1E30726D864DD7B77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Distinct_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_mDF48AC0F9CCD59EC8A90A0487D0809114C23A08D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_m8B1E831C9F5E9F4B3CBEE152BD1E9481DE416E64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_m6CF991EAD04CB7348A8F26573B6E4C06AB5775CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mCD4D2D783DA9CF0C49139966793A197A32A32CF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackU3Ed__16_System_Collections_IEnumerator_Reset_m70B2F7C87B9C72584DA4F3C7DFF4327266A85C9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackU3Ed__20_System_Collections_IEnumerator_Reset_mBA0AD0789C990B2EEF9190532645D4CBB47440D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBoxEnabledU3Ed__4_System_Collections_IEnumerator_Reset_m755DC319AA494CC0046C626428D3311FAC0529C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBoxEnabledU3Ed__9_System_Collections_IEnumerator_Reset_m3555957DF2F7887DEDA1262B5D2A2D585FA3EC5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCountDownU3Ed__21_System_Collections_IEnumerator_Reset_mC40FAFCAADE1299F479FC0CE5A1E709D60A50CD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDieU3Ed__15_System_Collections_IEnumerator_Reset_m44D0A9F2EF2F8370C87F823CD4A91D464D82C5DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHandleInvincibilityDelayU3Ed__15_System_Collections_IEnumerator_Reset_m2F915E6E91AFD7F5C3C30D3C60036E28019ED170_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInvincibilityFlashU3Ed__14_System_Collections_IEnumerator_Reset_m2BC28A1E558777E6FA1D44761E818E579FF61FA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInvinsiblePlayerU3Ed__5_System_Collections_IEnumerator_Reset_m853687D6B555DA1A62EC37EE113B882A1D944F45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRemoveSpeedU3Ed__7_System_Collections_IEnumerator_Reset_m21A50B2363C79AE9DC93B13DD4C4FD19FAB9030C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwitchMissionU3Ed__9_System_Collections_IEnumerator_Reset_m496698E9B4093FC731683F0ABF545A94D974D682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__4_0_m14E50CA056F9E3085EB98A8D8620759E56807F2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitU3Ed__10_System_Collections_IEnumerator_Reset_m86714F8AEEACF6E62E4F56B2BE177F51A824F444_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CspeedUpgradeU3Ed__15_System_Collections_IEnumerator_Reset_mFD2B9C1302AB4CFB794267E0742DB542DE086395_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct MissionsU5BU5D_t62BD9A586F08A2DA7A71B62BDBC6FCF5E7D71A49;
struct ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597;
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Barrier/<BoxEnabled>d__9
struct U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15  : public RuntimeObject
{
public:
	// System.Int32 Barrier/<BoxEnabled>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Barrier/<BoxEnabled>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Barrier Barrier/<BoxEnabled>d__9::<>4__this
	Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15, ___U3CU3E4__this_2)); }
	inline Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Enemy/<Attack>d__16
struct U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9  : public RuntimeObject
{
public:
	// System.Int32 Enemy/<Attack>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<Attack>d__16::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Enemy Enemy/<Attack>d__16::<>4__this
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9, ___U3CU3E4__this_2)); }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Enemy/<Die>d__15
struct U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D  : public RuntimeObject
{
public:
	// System.Int32 Enemy/<Die>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<Die>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Enemy Enemy/<Die>d__15::<>4__this
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D, ___U3CU3E4__this_2)); }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// EnvironmentFixe/<BoxEnabled>d__4
struct U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9  : public RuntimeObject
{
public:
	// System.Int32 EnvironmentFixe/<BoxEnabled>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnvironmentFixe/<BoxEnabled>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// EnvironmentFixe EnvironmentFixe/<BoxEnabled>d__4::<>4__this
	EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9, ___U3CU3E4__this_2)); }
	inline EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Game/<speedUpgrade>d__15
struct U3CspeedUpgradeU3Ed__15_tBA27EF2D54484307173E3AAA7DBEC841446B6BAC  : public RuntimeObject
{
public:
	// System.Int32 Game/<speedUpgrade>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Game/<speedUpgrade>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CspeedUpgradeU3Ed__15_tBA27EF2D54484307173E3AAA7DBEC841446B6BAC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CspeedUpgradeU3Ed__15_tBA27EF2D54484307173E3AAA7DBEC841446B6BAC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// GameOverManager/<Wait>d__10
struct U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81  : public RuntimeObject
{
public:
	// System.Int32 GameOverManager/<Wait>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameOverManager/<Wait>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameOverManager GameOverManager/<Wait>d__10::<>4__this
	GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81, ___U3CU3E4__this_2)); }
	inline GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// PauseMenu/<CountDown>d__21
struct U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2  : public RuntimeObject
{
public:
	// System.Int32 PauseMenu/<CountDown>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PauseMenu/<CountDown>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PauseMenu PauseMenu/<CountDown>d__21::<>4__this
	PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * ___U3CU3E4__this_2;
	// System.Int32 PauseMenu/<CountDown>d__21::<nb>5__2
	int32_t ___U3CnbU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2, ___U3CU3E4__this_2)); }
	inline PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnbU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2, ___U3CnbU3E5__2_3)); }
	inline int32_t get_U3CnbU3E5__2_3() const { return ___U3CnbU3E5__2_3; }
	inline int32_t* get_address_of_U3CnbU3E5__2_3() { return &___U3CnbU3E5__2_3; }
	inline void set_U3CnbU3E5__2_3(int32_t value)
	{
		___U3CnbU3E5__2_3 = value;
	}
};


// PlayerEffects/<InvinsiblePlayer>d__5
struct U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20  : public RuntimeObject
{
public:
	// System.Int32 PlayerEffects/<InvinsiblePlayer>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerEffects/<InvinsiblePlayer>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single PlayerEffects/<InvinsiblePlayer>d__5::time
	float ___time_2;
	// PlayerEffects PlayerEffects/<InvinsiblePlayer>d__5::<>4__this
	PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20, ___U3CU3E4__this_3)); }
	inline PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// PlayerEffects/<RemoveSpeed>d__7
struct U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE  : public RuntimeObject
{
public:
	// System.Int32 PlayerEffects/<RemoveSpeed>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerEffects/<RemoveSpeed>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single PlayerEffects/<RemoveSpeed>d__7::speedDuration
	float ___speedDuration_2;
	// System.Int32 PlayerEffects/<RemoveSpeed>d__7::speedGiven
	int32_t ___speedGiven_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_speedDuration_2() { return static_cast<int32_t>(offsetof(U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE, ___speedDuration_2)); }
	inline float get_speedDuration_2() const { return ___speedDuration_2; }
	inline float* get_address_of_speedDuration_2() { return &___speedDuration_2; }
	inline void set_speedDuration_2(float value)
	{
		___speedDuration_2 = value;
	}

	inline static int32_t get_offset_of_speedGiven_3() { return static_cast<int32_t>(offsetof(U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE, ___speedGiven_3)); }
	inline int32_t get_speedGiven_3() const { return ___speedGiven_3; }
	inline int32_t* get_address_of_speedGiven_3() { return &___speedGiven_3; }
	inline void set_speedGiven_3(int32_t value)
	{
		___speedGiven_3 = value;
	}
};


// PlayerHealth/<HandleInvincibilityDelay>d__15
struct U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB  : public RuntimeObject
{
public:
	// System.Int32 PlayerHealth/<HandleInvincibilityDelay>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerHealth/<HandleInvincibilityDelay>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerHealth PlayerHealth/<HandleInvincibilityDelay>d__15::<>4__this
	PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB, ___U3CU3E4__this_2)); }
	inline PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// PlayerHealth/<InvincibilityFlash>d__14
struct U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E  : public RuntimeObject
{
public:
	// System.Int32 PlayerHealth/<InvincibilityFlash>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerHealth/<InvincibilityFlash>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerHealth PlayerHealth/<InvincibilityFlash>d__14::<>4__this
	PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E, ___U3CU3E4__this_2)); }
	inline PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// PlayerMovement/<Attack>d__20
struct U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60  : public RuntimeObject
{
public:
	// System.Int32 PlayerMovement/<Attack>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerMovement/<Attack>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerMovement PlayerMovement/<Attack>d__20::<>4__this
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60, ___U3CU3E4__this_2)); }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// SettingsMenu/<>c
struct U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_StaticFields
{
public:
	// SettingsMenu/<>c SettingsMenu/<>c::<>9
	U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Resolution,UnityEngine.Resolution> SettingsMenu/<>c::<>9__4_0
	Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// ShowMissions/<SwitchMission>d__9
struct U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667  : public RuntimeObject
{
public:
	// System.Int32 ShowMissions/<SwitchMission>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ShowMissions/<SwitchMission>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ShowMissions ShowMissions/<SwitchMission>d__9::<>4__this
	ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667, ___U3CU3E4__this_2)); }
	inline ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Resolution
struct Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 
{
public:
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;

public:
	inline static int32_t get_offset_of_m_Width_0() { return static_cast<int32_t>(offsetof(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767, ___m_Width_0)); }
	inline int32_t get_m_Width_0() const { return ___m_Width_0; }
	inline int32_t* get_address_of_m_Width_0() { return &___m_Width_0; }
	inline void set_m_Width_0(int32_t value)
	{
		___m_Width_0 = value;
	}

	inline static int32_t get_offset_of_m_Height_1() { return static_cast<int32_t>(offsetof(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767, ___m_Height_1)); }
	inline int32_t get_m_Height_1() const { return ___m_Height_1; }
	inline int32_t* get_address_of_m_Height_1() { return &___m_Height_1; }
	inline void set_m_Height_1(int32_t value)
	{
		___m_Height_1 = value;
	}

	inline static int32_t get_offset_of_m_RefreshRate_2() { return static_cast<int32_t>(offsetof(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767, ___m_RefreshRate_2)); }
	inline int32_t get_m_RefreshRate_2() const { return ___m_RefreshRate_2; }
	inline int32_t* get_address_of_m_RefreshRate_2() { return &___m_RefreshRate_2; }
	inline void set_m_RefreshRate_2(int32_t value)
	{
		___m_RefreshRate_2 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Space
struct Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.Func`2<UnityEngine.Resolution,UnityEngine.Resolution>
struct Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Data
struct Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Int32 Data::coins
	int32_t ___coins_4;
	// System.Single Data::hightScore
	float ___hightScore_5;
	// System.Int32 Data::nbNotifMissions
	int32_t ___nbNotifMissions_6;
	// System.Int32 Data::nbKillMoob
	int32_t ___nbKillMoob_7;
	// System.Int32 Data::nbBarrier
	int32_t ___nbBarrier_8;
	// System.Int32 Data::nbBonus
	int32_t ___nbBonus_9;
	// System.Int32 Data::nbDie
	int32_t ___nbDie_10;
	// System.Int32 Data::idSkin
	int32_t ___idSkin_11;
	// System.Int32 Data::idScene
	int32_t ___idScene_12;
	// System.Int32 Data::idTrails
	int32_t ___idTrails_13;
	// Missions Data::mission1InProgress
	Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * ___mission1InProgress_14;
	// Missions[] Data::allMissions
	MissionsU5BU5D_t62BD9A586F08A2DA7A71B62BDBC6FCF5E7D71A49* ___allMissions_15;

public:
	inline static int32_t get_offset_of_coins_4() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14, ___coins_4)); }
	inline int32_t get_coins_4() const { return ___coins_4; }
	inline int32_t* get_address_of_coins_4() { return &___coins_4; }
	inline void set_coins_4(int32_t value)
	{
		___coins_4 = value;
	}

	inline static int32_t get_offset_of_hightScore_5() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14, ___hightScore_5)); }
	inline float get_hightScore_5() const { return ___hightScore_5; }
	inline float* get_address_of_hightScore_5() { return &___hightScore_5; }
	inline void set_hightScore_5(float value)
	{
		___hightScore_5 = value;
	}

	inline static int32_t get_offset_of_nbNotifMissions_6() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14, ___nbNotifMissions_6)); }
	inline int32_t get_nbNotifMissions_6() const { return ___nbNotifMissions_6; }
	inline int32_t* get_address_of_nbNotifMissions_6() { return &___nbNotifMissions_6; }
	inline void set_nbNotifMissions_6(int32_t value)
	{
		___nbNotifMissions_6 = value;
	}

	inline static int32_t get_offset_of_nbKillMoob_7() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14, ___nbKillMoob_7)); }
	inline int32_t get_nbKillMoob_7() const { return ___nbKillMoob_7; }
	inline int32_t* get_address_of_nbKillMoob_7() { return &___nbKillMoob_7; }
	inline void set_nbKillMoob_7(int32_t value)
	{
		___nbKillMoob_7 = value;
	}

	inline static int32_t get_offset_of_nbBarrier_8() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14, ___nbBarrier_8)); }
	inline int32_t get_nbBarrier_8() const { return ___nbBarrier_8; }
	inline int32_t* get_address_of_nbBarrier_8() { return &___nbBarrier_8; }
	inline void set_nbBarrier_8(int32_t value)
	{
		___nbBarrier_8 = value;
	}

	inline static int32_t get_offset_of_nbBonus_9() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14, ___nbBonus_9)); }
	inline int32_t get_nbBonus_9() const { return ___nbBonus_9; }
	inline int32_t* get_address_of_nbBonus_9() { return &___nbBonus_9; }
	inline void set_nbBonus_9(int32_t value)
	{
		___nbBonus_9 = value;
	}

	inline static int32_t get_offset_of_nbDie_10() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14, ___nbDie_10)); }
	inline int32_t get_nbDie_10() const { return ___nbDie_10; }
	inline int32_t* get_address_of_nbDie_10() { return &___nbDie_10; }
	inline void set_nbDie_10(int32_t value)
	{
		___nbDie_10 = value;
	}

	inline static int32_t get_offset_of_idSkin_11() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14, ___idSkin_11)); }
	inline int32_t get_idSkin_11() const { return ___idSkin_11; }
	inline int32_t* get_address_of_idSkin_11() { return &___idSkin_11; }
	inline void set_idSkin_11(int32_t value)
	{
		___idSkin_11 = value;
	}

	inline static int32_t get_offset_of_idScene_12() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14, ___idScene_12)); }
	inline int32_t get_idScene_12() const { return ___idScene_12; }
	inline int32_t* get_address_of_idScene_12() { return &___idScene_12; }
	inline void set_idScene_12(int32_t value)
	{
		___idScene_12 = value;
	}

	inline static int32_t get_offset_of_idTrails_13() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14, ___idTrails_13)); }
	inline int32_t get_idTrails_13() const { return ___idTrails_13; }
	inline int32_t* get_address_of_idTrails_13() { return &___idTrails_13; }
	inline void set_idTrails_13(int32_t value)
	{
		___idTrails_13 = value;
	}

	inline static int32_t get_offset_of_mission1InProgress_14() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14, ___mission1InProgress_14)); }
	inline Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * get_mission1InProgress_14() const { return ___mission1InProgress_14; }
	inline Missions_tBEB12995FBE657C3140626C636F3335F2595E898 ** get_address_of_mission1InProgress_14() { return &___mission1InProgress_14; }
	inline void set_mission1InProgress_14(Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * value)
	{
		___mission1InProgress_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mission1InProgress_14), (void*)value);
	}

	inline static int32_t get_offset_of_allMissions_15() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14, ___allMissions_15)); }
	inline MissionsU5BU5D_t62BD9A586F08A2DA7A71B62BDBC6FCF5E7D71A49* get_allMissions_15() const { return ___allMissions_15; }
	inline MissionsU5BU5D_t62BD9A586F08A2DA7A71B62BDBC6FCF5E7D71A49** get_address_of_allMissions_15() { return &___allMissions_15; }
	inline void set_allMissions_15(MissionsU5BU5D_t62BD9A586F08A2DA7A71B62BDBC6FCF5E7D71A49* value)
	{
		___allMissions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allMissions_15), (void*)value);
	}
};

struct Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14_StaticFields
{
public:
	// Data Data::instance
	Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * ___instance_16;

public:
	inline static int32_t get_offset_of_instance_16() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14_StaticFields, ___instance_16)); }
	inline Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * get_instance_16() const { return ___instance_16; }
	inline Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 ** get_address_of_instance_16() { return &___instance_16; }
	inline void set_instance_16(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * value)
	{
		___instance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_16), (void*)value);
	}
};


// Item
struct Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Int32 Item::id
	int32_t ___id_4;
	// System.String Item::Name
	String_t* ___Name_5;
	// System.String Item::description
	String_t* ___description_6;
	// System.Int32 Item::price
	int32_t ___price_7;
	// UnityEngine.Sprite Item::image
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___image_8;
	// System.Int32 Item::hpGiven
	int32_t ___hpGiven_9;
	// System.Single Item::hpShield
	float ___hpShield_10;
	// System.Single Item::timeInvinsible
	float ___timeInvinsible_11;
	// System.Single Item::timeEffect
	float ___timeEffect_12;
	// System.Int32 Item::speedGiven
	int32_t ___speedGiven_13;
	// System.Single Item::speedDuration
	float ___speedDuration_14;

public:
	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_Name_5() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___Name_5)); }
	inline String_t* get_Name_5() const { return ___Name_5; }
	inline String_t** get_address_of_Name_5() { return &___Name_5; }
	inline void set_Name_5(String_t* value)
	{
		___Name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_5), (void*)value);
	}

	inline static int32_t get_offset_of_description_6() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___description_6)); }
	inline String_t* get_description_6() const { return ___description_6; }
	inline String_t** get_address_of_description_6() { return &___description_6; }
	inline void set_description_6(String_t* value)
	{
		___description_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_6), (void*)value);
	}

	inline static int32_t get_offset_of_price_7() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___price_7)); }
	inline int32_t get_price_7() const { return ___price_7; }
	inline int32_t* get_address_of_price_7() { return &___price_7; }
	inline void set_price_7(int32_t value)
	{
		___price_7 = value;
	}

	inline static int32_t get_offset_of_image_8() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___image_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_image_8() const { return ___image_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_image_8() { return &___image_8; }
	inline void set_image_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___image_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_8), (void*)value);
	}

	inline static int32_t get_offset_of_hpGiven_9() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___hpGiven_9)); }
	inline int32_t get_hpGiven_9() const { return ___hpGiven_9; }
	inline int32_t* get_address_of_hpGiven_9() { return &___hpGiven_9; }
	inline void set_hpGiven_9(int32_t value)
	{
		___hpGiven_9 = value;
	}

	inline static int32_t get_offset_of_hpShield_10() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___hpShield_10)); }
	inline float get_hpShield_10() const { return ___hpShield_10; }
	inline float* get_address_of_hpShield_10() { return &___hpShield_10; }
	inline void set_hpShield_10(float value)
	{
		___hpShield_10 = value;
	}

	inline static int32_t get_offset_of_timeInvinsible_11() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___timeInvinsible_11)); }
	inline float get_timeInvinsible_11() const { return ___timeInvinsible_11; }
	inline float* get_address_of_timeInvinsible_11() { return &___timeInvinsible_11; }
	inline void set_timeInvinsible_11(float value)
	{
		___timeInvinsible_11 = value;
	}

	inline static int32_t get_offset_of_timeEffect_12() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___timeEffect_12)); }
	inline float get_timeEffect_12() const { return ___timeEffect_12; }
	inline float* get_address_of_timeEffect_12() { return &___timeEffect_12; }
	inline void set_timeEffect_12(float value)
	{
		___timeEffect_12 = value;
	}

	inline static int32_t get_offset_of_speedGiven_13() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___speedGiven_13)); }
	inline int32_t get_speedGiven_13() const { return ___speedGiven_13; }
	inline int32_t* get_address_of_speedGiven_13() { return &___speedGiven_13; }
	inline void set_speedGiven_13(int32_t value)
	{
		___speedGiven_13 = value;
	}

	inline static int32_t get_offset_of_speedDuration_14() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___speedDuration_14)); }
	inline float get_speedDuration_14() const { return ___speedDuration_14; }
	inline float* get_address_of_speedDuration_14() { return &___speedDuration_14; }
	inline void set_speedDuration_14(float value)
	{
		___speedDuration_14 = value;
	}
};


// Missions
struct Missions_tBEB12995FBE657C3140626C636F3335F2595E898  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Int32 Missions::id
	int32_t ___id_4;
	// System.String Missions::title
	String_t* ___title_5;
	// System.String Missions::description
	String_t* ___description_6;
	// UnityEngine.Sprite Missions::image
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___image_7;
	// System.Boolean Missions::activate
	bool ___activate_8;
	// System.Boolean Missions::finish
	bool ___finish_9;

public:
	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(Missions_tBEB12995FBE657C3140626C636F3335F2595E898, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_title_5() { return static_cast<int32_t>(offsetof(Missions_tBEB12995FBE657C3140626C636F3335F2595E898, ___title_5)); }
	inline String_t* get_title_5() const { return ___title_5; }
	inline String_t** get_address_of_title_5() { return &___title_5; }
	inline void set_title_5(String_t* value)
	{
		___title_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_5), (void*)value);
	}

	inline static int32_t get_offset_of_description_6() { return static_cast<int32_t>(offsetof(Missions_tBEB12995FBE657C3140626C636F3335F2595E898, ___description_6)); }
	inline String_t* get_description_6() const { return ___description_6; }
	inline String_t** get_address_of_description_6() { return &___description_6; }
	inline void set_description_6(String_t* value)
	{
		___description_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_6), (void*)value);
	}

	inline static int32_t get_offset_of_image_7() { return static_cast<int32_t>(offsetof(Missions_tBEB12995FBE657C3140626C636F3335F2595E898, ___image_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_image_7() const { return ___image_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_image_7() { return &___image_7; }
	inline void set_image_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___image_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_7), (void*)value);
	}

	inline static int32_t get_offset_of_activate_8() { return static_cast<int32_t>(offsetof(Missions_tBEB12995FBE657C3140626C636F3335F2595E898, ___activate_8)); }
	inline bool get_activate_8() const { return ___activate_8; }
	inline bool* get_address_of_activate_8() { return &___activate_8; }
	inline void set_activate_8(bool value)
	{
		___activate_8 = value;
	}

	inline static int32_t get_offset_of_finish_9() { return static_cast<int32_t>(offsetof(Missions_tBEB12995FBE657C3140626C636F3335F2595E898, ___finish_9)); }
	inline bool get_finish_9() const { return ___finish_9; }
	inline bool* get_address_of_finish_9() { return &___finish_9; }
	inline void set_finish_9(bool value)
	{
		___finish_9 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Scenes
struct Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Int32 Scenes::id
	int32_t ___id_4;
	// System.String Scenes::Name
	String_t* ___Name_5;
	// System.String Scenes::description
	String_t* ___description_6;
	// System.Int32 Scenes::price
	int32_t ___price_7;
	// UnityEngine.Sprite Scenes::image
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___image_8;
	// System.Boolean Scenes::isBuy
	bool ___isBuy_9;

public:
	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_Name_5() { return static_cast<int32_t>(offsetof(Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A, ___Name_5)); }
	inline String_t* get_Name_5() const { return ___Name_5; }
	inline String_t** get_address_of_Name_5() { return &___Name_5; }
	inline void set_Name_5(String_t* value)
	{
		___Name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_5), (void*)value);
	}

	inline static int32_t get_offset_of_description_6() { return static_cast<int32_t>(offsetof(Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A, ___description_6)); }
	inline String_t* get_description_6() const { return ___description_6; }
	inline String_t** get_address_of_description_6() { return &___description_6; }
	inline void set_description_6(String_t* value)
	{
		___description_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_6), (void*)value);
	}

	inline static int32_t get_offset_of_price_7() { return static_cast<int32_t>(offsetof(Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A, ___price_7)); }
	inline int32_t get_price_7() const { return ___price_7; }
	inline int32_t* get_address_of_price_7() { return &___price_7; }
	inline void set_price_7(int32_t value)
	{
		___price_7 = value;
	}

	inline static int32_t get_offset_of_image_8() { return static_cast<int32_t>(offsetof(Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A, ___image_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_image_8() const { return ___image_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_image_8() { return &___image_8; }
	inline void set_image_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___image_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_8), (void*)value);
	}

	inline static int32_t get_offset_of_isBuy_9() { return static_cast<int32_t>(offsetof(Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A, ___isBuy_9)); }
	inline bool get_isBuy_9() const { return ___isBuy_9; }
	inline bool* get_address_of_isBuy_9() { return &___isBuy_9; }
	inline void set_isBuy_9(bool value)
	{
		___isBuy_9 = value;
	}
};


// Skin
struct Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Int32 Skin::id
	int32_t ___id_4;
	// System.String Skin::Name
	String_t* ___Name_5;
	// System.String Skin::description
	String_t* ___description_6;
	// System.Int32 Skin::price
	int32_t ___price_7;
	// UnityEngine.Sprite Skin::image
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___image_8;
	// System.Boolean Skin::isBuy
	bool ___isBuy_9;

public:
	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_Name_5() { return static_cast<int32_t>(offsetof(Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8, ___Name_5)); }
	inline String_t* get_Name_5() const { return ___Name_5; }
	inline String_t** get_address_of_Name_5() { return &___Name_5; }
	inline void set_Name_5(String_t* value)
	{
		___Name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_5), (void*)value);
	}

	inline static int32_t get_offset_of_description_6() { return static_cast<int32_t>(offsetof(Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8, ___description_6)); }
	inline String_t* get_description_6() const { return ___description_6; }
	inline String_t** get_address_of_description_6() { return &___description_6; }
	inline void set_description_6(String_t* value)
	{
		___description_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_6), (void*)value);
	}

	inline static int32_t get_offset_of_price_7() { return static_cast<int32_t>(offsetof(Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8, ___price_7)); }
	inline int32_t get_price_7() const { return ___price_7; }
	inline int32_t* get_address_of_price_7() { return &___price_7; }
	inline void set_price_7(int32_t value)
	{
		___price_7 = value;
	}

	inline static int32_t get_offset_of_image_8() { return static_cast<int32_t>(offsetof(Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8, ___image_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_image_8() const { return ___image_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_image_8() { return &___image_8; }
	inline void set_image_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___image_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_8), (void*)value);
	}

	inline static int32_t get_offset_of_isBuy_9() { return static_cast<int32_t>(offsetof(Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8, ___isBuy_9)); }
	inline bool get_isBuy_9() const { return ___isBuy_9; }
	inline bool* get_address_of_isBuy_9() { return &___isBuy_9; }
	inline void set_isBuy_9(bool value)
	{
		___isBuy_9 = value;
	}
};


// Trails
struct Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Int32 Trails::id
	int32_t ___id_4;
	// System.String Trails::Name
	String_t* ___Name_5;
	// System.String Trails::description
	String_t* ___description_6;
	// System.Int32 Trails::price
	int32_t ___price_7;
	// UnityEngine.Sprite Trails::image
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___image_8;
	// System.Boolean Trails::isBuy
	bool ___isBuy_9;

public:
	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_Name_5() { return static_cast<int32_t>(offsetof(Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094, ___Name_5)); }
	inline String_t* get_Name_5() const { return ___Name_5; }
	inline String_t** get_address_of_Name_5() { return &___Name_5; }
	inline void set_Name_5(String_t* value)
	{
		___Name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_5), (void*)value);
	}

	inline static int32_t get_offset_of_description_6() { return static_cast<int32_t>(offsetof(Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094, ___description_6)); }
	inline String_t* get_description_6() const { return ___description_6; }
	inline String_t** get_address_of_description_6() { return &___description_6; }
	inline void set_description_6(String_t* value)
	{
		___description_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_6), (void*)value);
	}

	inline static int32_t get_offset_of_price_7() { return static_cast<int32_t>(offsetof(Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094, ___price_7)); }
	inline int32_t get_price_7() const { return ___price_7; }
	inline int32_t* get_address_of_price_7() { return &___price_7; }
	inline void set_price_7(int32_t value)
	{
		___price_7 = value;
	}

	inline static int32_t get_offset_of_image_8() { return static_cast<int32_t>(offsetof(Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094, ___image_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_image_8() const { return ___image_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_image_8() { return &___image_8; }
	inline void set_image_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___image_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_8), (void*)value);
	}

	inline static int32_t get_offset_of_isBuy_9() { return static_cast<int32_t>(offsetof(Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094, ___isBuy_9)); }
	inline bool get_isBuy_9() const { return ___isBuy_9; }
	inline bool* get_address_of_isBuy_9() { return &___isBuy_9; }
	inline void set_isBuy_9(bool value)
	{
		___isBuy_9 = value;
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// Barrier
struct Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Barrier::maxHealth
	int32_t ___maxHealth_4;
	// System.Int32 Barrier::currentHealth
	int32_t ___currentHealth_5;
	// UnityEngine.GameObject Barrier::toDestroy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___toDestroy_6;
	// UnityEngine.BoxCollider2D Barrier::box
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * ___box_7;
	// UnityEngine.Animator Barrier::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_8;

public:
	inline static int32_t get_offset_of_maxHealth_4() { return static_cast<int32_t>(offsetof(Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580, ___maxHealth_4)); }
	inline int32_t get_maxHealth_4() const { return ___maxHealth_4; }
	inline int32_t* get_address_of_maxHealth_4() { return &___maxHealth_4; }
	inline void set_maxHealth_4(int32_t value)
	{
		___maxHealth_4 = value;
	}

	inline static int32_t get_offset_of_currentHealth_5() { return static_cast<int32_t>(offsetof(Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580, ___currentHealth_5)); }
	inline int32_t get_currentHealth_5() const { return ___currentHealth_5; }
	inline int32_t* get_address_of_currentHealth_5() { return &___currentHealth_5; }
	inline void set_currentHealth_5(int32_t value)
	{
		___currentHealth_5 = value;
	}

	inline static int32_t get_offset_of_toDestroy_6() { return static_cast<int32_t>(offsetof(Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580, ___toDestroy_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_toDestroy_6() const { return ___toDestroy_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_toDestroy_6() { return &___toDestroy_6; }
	inline void set_toDestroy_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___toDestroy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toDestroy_6), (void*)value);
	}

	inline static int32_t get_offset_of_box_7() { return static_cast<int32_t>(offsetof(Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580, ___box_7)); }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * get_box_7() const { return ___box_7; }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 ** get_address_of_box_7() { return &___box_7; }
	inline void set_box_7(BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * value)
	{
		___box_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___box_7), (void*)value);
	}

	inline static int32_t get_offset_of_animator_8() { return static_cast<int32_t>(offsetof(Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580, ___animator_8)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_8() const { return ___animator_8; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_8() { return &___animator_8; }
	inline void set_animator_8(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_8), (void*)value);
	}
};


// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// CameraFollow
struct CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CameraFollow::cameraWaypoint
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cameraWaypoint_4;
	// System.Single CameraFollow::timeOffset
	float ___timeOffset_5;
	// UnityEngine.Vector3 CameraFollow::posOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___posOffset_6;
	// UnityEngine.Vector3 CameraFollow::anPosPlayer
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___anPosPlayer_7;
	// UnityEngine.Vector3 CameraFollow::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_8;

public:
	inline static int32_t get_offset_of_cameraWaypoint_4() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___cameraWaypoint_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cameraWaypoint_4() const { return ___cameraWaypoint_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cameraWaypoint_4() { return &___cameraWaypoint_4; }
	inline void set_cameraWaypoint_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cameraWaypoint_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraWaypoint_4), (void*)value);
	}

	inline static int32_t get_offset_of_timeOffset_5() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___timeOffset_5)); }
	inline float get_timeOffset_5() const { return ___timeOffset_5; }
	inline float* get_address_of_timeOffset_5() { return &___timeOffset_5; }
	inline void set_timeOffset_5(float value)
	{
		___timeOffset_5 = value;
	}

	inline static int32_t get_offset_of_posOffset_6() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___posOffset_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_posOffset_6() const { return ___posOffset_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_posOffset_6() { return &___posOffset_6; }
	inline void set_posOffset_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___posOffset_6 = value;
	}

	inline static int32_t get_offset_of_anPosPlayer_7() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___anPosPlayer_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_anPosPlayer_7() const { return ___anPosPlayer_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_anPosPlayer_7() { return &___anPosPlayer_7; }
	inline void set_anPosPlayer_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___anPosPlayer_7 = value;
	}

	inline static int32_t get_offset_of_velocity_8() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___velocity_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_8() const { return ___velocity_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_8() { return &___velocity_8; }
	inline void set_velocity_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_8 = value;
	}
};

struct CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_StaticFields
{
public:
	// CameraFollow CameraFollow::instance
	CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * ___instance_9;

public:
	inline static int32_t get_offset_of_instance_9() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_StaticFields, ___instance_9)); }
	inline CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * get_instance_9() const { return ___instance_9; }
	inline CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 ** get_address_of_instance_9() { return &___instance_9; }
	inline void set_instance_9(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * value)
	{
		___instance_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_9), (void*)value);
	}
};


// CameraWaypoint
struct CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CameraWaypoint::speed
	float ___speed_4;
	// UnityEngine.Rigidbody2D CameraWaypoint::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_5;
	// UnityEngine.Vector3 CameraWaypoint::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_6;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525, ___rb_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_5), (void*)value);
	}

	inline static int32_t get_offset_of_velocity_6() { return static_cast<int32_t>(offsetof(CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525, ___velocity_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_6() const { return ___velocity_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_6() { return &___velocity_6; }
	inline void set_velocity_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_6 = value;
	}
};

struct CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_StaticFields
{
public:
	// CameraWaypoint CameraWaypoint::instance
	CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * ___instance_7;

public:
	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_StaticFields, ___instance_7)); }
	inline CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * get_instance_7() const { return ___instance_7; }
	inline CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_7), (void*)value);
	}
};


// Credits
struct Credits_t6B2B82C0D386F61EDEF1EDBA08962FA05717D04C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DontDestroyOnLoad
struct DontDestroyOnLoad_tA639E7371DDCB4CAA1153085E9C678B55128341D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] DontDestroyOnLoad::objects
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___objects_4;

public:
	inline static int32_t get_offset_of_objects_4() { return static_cast<int32_t>(offsetof(DontDestroyOnLoad_tA639E7371DDCB4CAA1153085E9C678B55128341D, ___objects_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_objects_4() const { return ___objects_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_objects_4() { return &___objects_4; }
	inline void set_objects_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___objects_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objects_4), (void*)value);
	}
};


// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Enemy::maxHealth
	int32_t ___maxHealth_4;
	// System.Int32 Enemy::currentHealth
	int32_t ___currentHealth_5;
	// UnityEngine.PolygonCollider2D Enemy::box
	PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * ___box_6;
	// UnityEngine.GameObject Enemy::toDestroy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___toDestroy_7;
	// UnityEngine.Animator Enemy::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_8;
	// System.Single Enemy::speed
	float ___speed_9;
	// System.Int32 Enemy::damageOnCollision
	int32_t ___damageOnCollision_10;
	// UnityEngine.Vector3[] Enemy::positions
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___positions_11;
	// UnityEngine.SpriteRenderer Enemy::graphics
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___graphics_12;
	// UnityEngine.Transform Enemy::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_13;
	// System.Boolean Enemy::canTranslate
	bool ___canTranslate_14;

public:
	inline static int32_t get_offset_of_maxHealth_4() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___maxHealth_4)); }
	inline int32_t get_maxHealth_4() const { return ___maxHealth_4; }
	inline int32_t* get_address_of_maxHealth_4() { return &___maxHealth_4; }
	inline void set_maxHealth_4(int32_t value)
	{
		___maxHealth_4 = value;
	}

	inline static int32_t get_offset_of_currentHealth_5() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___currentHealth_5)); }
	inline int32_t get_currentHealth_5() const { return ___currentHealth_5; }
	inline int32_t* get_address_of_currentHealth_5() { return &___currentHealth_5; }
	inline void set_currentHealth_5(int32_t value)
	{
		___currentHealth_5 = value;
	}

	inline static int32_t get_offset_of_box_6() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___box_6)); }
	inline PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * get_box_6() const { return ___box_6; }
	inline PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D ** get_address_of_box_6() { return &___box_6; }
	inline void set_box_6(PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * value)
	{
		___box_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___box_6), (void*)value);
	}

	inline static int32_t get_offset_of_toDestroy_7() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___toDestroy_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_toDestroy_7() const { return ___toDestroy_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_toDestroy_7() { return &___toDestroy_7; }
	inline void set_toDestroy_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___toDestroy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toDestroy_7), (void*)value);
	}

	inline static int32_t get_offset_of_animator_8() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___animator_8)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_8() const { return ___animator_8; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_8() { return &___animator_8; }
	inline void set_animator_8(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_8), (void*)value);
	}

	inline static int32_t get_offset_of_speed_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___speed_9)); }
	inline float get_speed_9() const { return ___speed_9; }
	inline float* get_address_of_speed_9() { return &___speed_9; }
	inline void set_speed_9(float value)
	{
		___speed_9 = value;
	}

	inline static int32_t get_offset_of_damageOnCollision_10() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___damageOnCollision_10)); }
	inline int32_t get_damageOnCollision_10() const { return ___damageOnCollision_10; }
	inline int32_t* get_address_of_damageOnCollision_10() { return &___damageOnCollision_10; }
	inline void set_damageOnCollision_10(int32_t value)
	{
		___damageOnCollision_10 = value;
	}

	inline static int32_t get_offset_of_positions_11() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___positions_11)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_positions_11() const { return ___positions_11; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_positions_11() { return &___positions_11; }
	inline void set_positions_11(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___positions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positions_11), (void*)value);
	}

	inline static int32_t get_offset_of_graphics_12() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___graphics_12)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_graphics_12() const { return ___graphics_12; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_graphics_12() { return &___graphics_12; }
	inline void set_graphics_12(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___graphics_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphics_12), (void*)value);
	}

	inline static int32_t get_offset_of_target_13() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___target_13)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_13() const { return ___target_13; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_13() { return &___target_13; }
	inline void set_target_13(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_13), (void*)value);
	}

	inline static int32_t get_offset_of_canTranslate_14() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___canTranslate_14)); }
	inline bool get_canTranslate_14() const { return ___canTranslate_14; }
	inline bool* get_address_of_canTranslate_14() { return &___canTranslate_14; }
	inline void set_canTranslate_14(bool value)
	{
		___canTranslate_14 = value;
	}
};

struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_StaticFields
{
public:
	// Enemy Enemy::instance
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___instance_15;

public:
	inline static int32_t get_offset_of_instance_15() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_StaticFields, ___instance_15)); }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * get_instance_15() const { return ___instance_15; }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** get_address_of_instance_15() { return &___instance_15; }
	inline void set_instance_15(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		___instance_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_15), (void*)value);
	}
};


// EnvironmentFixe
struct EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject EnvironmentFixe::toDestroy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___toDestroy_4;
	// UnityEngine.PolygonCollider2D EnvironmentFixe::box
	PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * ___box_5;
	// UnityEngine.Animator EnvironmentFixe::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_6;

public:
	inline static int32_t get_offset_of_toDestroy_4() { return static_cast<int32_t>(offsetof(EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791, ___toDestroy_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_toDestroy_4() const { return ___toDestroy_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_toDestroy_4() { return &___toDestroy_4; }
	inline void set_toDestroy_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___toDestroy_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toDestroy_4), (void*)value);
	}

	inline static int32_t get_offset_of_box_5() { return static_cast<int32_t>(offsetof(EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791, ___box_5)); }
	inline PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * get_box_5() const { return ___box_5; }
	inline PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D ** get_address_of_box_5() { return &___box_5; }
	inline void set_box_5(PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * value)
	{
		___box_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___box_5), (void*)value);
	}

	inline static int32_t get_offset_of_animator_6() { return static_cast<int32_t>(offsetof(EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791, ___animator_6)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_6() const { return ___animator_6; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_6() { return &___animator_6; }
	inline void set_animator_6(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_6), (void*)value);
	}
};


// Game
struct Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Data Game::data
	Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * ___data_4;
	// UnityEngine.GameObject[] Game::slides
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___slides_5;
	// UnityEngine.GameObject Game::startButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___startButton_6;
	// System.Boolean Game::launchSpeedBool
	bool ___launchSpeedBool_7;
	// System.Boolean Game::gameIsStart
	bool ___gameIsStart_8;
	// System.Int32 Game::nbRandom
	int32_t ___nbRandom_9;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___data_4)); }
	inline Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * get_data_4() const { return ___data_4; }
	inline Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}

	inline static int32_t get_offset_of_slides_5() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___slides_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_slides_5() const { return ___slides_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_slides_5() { return &___slides_5; }
	inline void set_slides_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___slides_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slides_5), (void*)value);
	}

	inline static int32_t get_offset_of_startButton_6() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___startButton_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_startButton_6() const { return ___startButton_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_startButton_6() { return &___startButton_6; }
	inline void set_startButton_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___startButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startButton_6), (void*)value);
	}

	inline static int32_t get_offset_of_launchSpeedBool_7() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___launchSpeedBool_7)); }
	inline bool get_launchSpeedBool_7() const { return ___launchSpeedBool_7; }
	inline bool* get_address_of_launchSpeedBool_7() { return &___launchSpeedBool_7; }
	inline void set_launchSpeedBool_7(bool value)
	{
		___launchSpeedBool_7 = value;
	}

	inline static int32_t get_offset_of_gameIsStart_8() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___gameIsStart_8)); }
	inline bool get_gameIsStart_8() const { return ___gameIsStart_8; }
	inline bool* get_address_of_gameIsStart_8() { return &___gameIsStart_8; }
	inline void set_gameIsStart_8(bool value)
	{
		___gameIsStart_8 = value;
	}

	inline static int32_t get_offset_of_nbRandom_9() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE, ___nbRandom_9)); }
	inline int32_t get_nbRandom_9() const { return ___nbRandom_9; }
	inline int32_t* get_address_of_nbRandom_9() { return &___nbRandom_9; }
	inline void set_nbRandom_9(int32_t value)
	{
		___nbRandom_9 = value;
	}
};

struct Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields
{
public:
	// Game Game::instance
	Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * ___instance_10;

public:
	inline static int32_t get_offset_of_instance_10() { return static_cast<int32_t>(offsetof(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields, ___instance_10)); }
	inline Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * get_instance_10() const { return ___instance_10; }
	inline Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE ** get_address_of_instance_10() { return &___instance_10; }
	inline void set_instance_10(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * value)
	{
		___instance_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_10), (void*)value);
	}
};


// GameOverManager
struct GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameOverManager::gameOverUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverUI_4;
	// UnityEngine.GameObject GameOverManager::panelGame
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panelGame_5;
	// UnityEngine.Animator GameOverManager::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_6;
	// UnityEngine.UI.Text GameOverManager::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_7;
	// UnityEngine.UI.Text GameOverManager::nbBarrier
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nbBarrier_8;
	// UnityEngine.UI.Text GameOverManager::nbKillMoob
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nbKillMoob_9;
	// UnityEngine.UI.Text GameOverManager::nbBonus
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nbBonus_10;

public:
	inline static int32_t get_offset_of_gameOverUI_4() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___gameOverUI_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverUI_4() const { return ___gameOverUI_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverUI_4() { return &___gameOverUI_4; }
	inline void set_gameOverUI_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_panelGame_5() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___panelGame_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panelGame_5() const { return ___panelGame_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panelGame_5() { return &___panelGame_5; }
	inline void set_panelGame_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panelGame_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panelGame_5), (void*)value);
	}

	inline static int32_t get_offset_of_animator_6() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___animator_6)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_6() const { return ___animator_6; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_6() { return &___animator_6; }
	inline void set_animator_6(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_6), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_7() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___scoreText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_7() const { return ___scoreText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_7() { return &___scoreText_7; }
	inline void set_scoreText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_7), (void*)value);
	}

	inline static int32_t get_offset_of_nbBarrier_8() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___nbBarrier_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nbBarrier_8() const { return ___nbBarrier_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nbBarrier_8() { return &___nbBarrier_8; }
	inline void set_nbBarrier_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nbBarrier_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nbBarrier_8), (void*)value);
	}

	inline static int32_t get_offset_of_nbKillMoob_9() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___nbKillMoob_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nbKillMoob_9() const { return ___nbKillMoob_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nbKillMoob_9() { return &___nbKillMoob_9; }
	inline void set_nbKillMoob_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nbKillMoob_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nbKillMoob_9), (void*)value);
	}

	inline static int32_t get_offset_of_nbBonus_10() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___nbBonus_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nbBonus_10() const { return ___nbBonus_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nbBonus_10() { return &___nbBonus_10; }
	inline void set_nbBonus_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nbBonus_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nbBonus_10), (void*)value);
	}
};

struct GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C_StaticFields
{
public:
	// GameOverManager GameOverManager::instance
	GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * ___instance_11;

public:
	inline static int32_t get_offset_of_instance_11() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C_StaticFields, ___instance_11)); }
	inline GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * get_instance_11() const { return ___instance_11; }
	inline GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C ** get_address_of_instance_11() { return &___instance_11; }
	inline void set_instance_11(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * value)
	{
		___instance_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_11), (void*)value);
	}
};


// Inventory
struct Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Inventory::nbDie
	int32_t ___nbDie_4;
	// System.Int32 Inventory::nbKillMoob
	int32_t ___nbKillMoob_5;
	// System.Int32 Inventory::nbBarrier
	int32_t ___nbBarrier_6;
	// System.Int32 Inventory::nbBonus
	int32_t ___nbBonus_7;
	// System.Single Inventory::score
	float ___score_8;
	// System.Single Inventory::scoreMax
	float ___scoreMax_9;
	// System.Int32 Inventory::coinsCount
	int32_t ___coinsCount_10;
	// System.Int32 Inventory::coinsCountTotal
	int32_t ___coinsCountTotal_11;
	// UnityEngine.UI.Text Inventory::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_12;
	// UnityEngine.UI.Text Inventory::coinsCountText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___coinsCountText_13;
	// PlayerEffects Inventory::playerEffects
	PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * ___playerEffects_14;

public:
	inline static int32_t get_offset_of_nbDie_4() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___nbDie_4)); }
	inline int32_t get_nbDie_4() const { return ___nbDie_4; }
	inline int32_t* get_address_of_nbDie_4() { return &___nbDie_4; }
	inline void set_nbDie_4(int32_t value)
	{
		___nbDie_4 = value;
	}

	inline static int32_t get_offset_of_nbKillMoob_5() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___nbKillMoob_5)); }
	inline int32_t get_nbKillMoob_5() const { return ___nbKillMoob_5; }
	inline int32_t* get_address_of_nbKillMoob_5() { return &___nbKillMoob_5; }
	inline void set_nbKillMoob_5(int32_t value)
	{
		___nbKillMoob_5 = value;
	}

	inline static int32_t get_offset_of_nbBarrier_6() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___nbBarrier_6)); }
	inline int32_t get_nbBarrier_6() const { return ___nbBarrier_6; }
	inline int32_t* get_address_of_nbBarrier_6() { return &___nbBarrier_6; }
	inline void set_nbBarrier_6(int32_t value)
	{
		___nbBarrier_6 = value;
	}

	inline static int32_t get_offset_of_nbBonus_7() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___nbBonus_7)); }
	inline int32_t get_nbBonus_7() const { return ___nbBonus_7; }
	inline int32_t* get_address_of_nbBonus_7() { return &___nbBonus_7; }
	inline void set_nbBonus_7(int32_t value)
	{
		___nbBonus_7 = value;
	}

	inline static int32_t get_offset_of_score_8() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___score_8)); }
	inline float get_score_8() const { return ___score_8; }
	inline float* get_address_of_score_8() { return &___score_8; }
	inline void set_score_8(float value)
	{
		___score_8 = value;
	}

	inline static int32_t get_offset_of_scoreMax_9() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___scoreMax_9)); }
	inline float get_scoreMax_9() const { return ___scoreMax_9; }
	inline float* get_address_of_scoreMax_9() { return &___scoreMax_9; }
	inline void set_scoreMax_9(float value)
	{
		___scoreMax_9 = value;
	}

	inline static int32_t get_offset_of_coinsCount_10() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___coinsCount_10)); }
	inline int32_t get_coinsCount_10() const { return ___coinsCount_10; }
	inline int32_t* get_address_of_coinsCount_10() { return &___coinsCount_10; }
	inline void set_coinsCount_10(int32_t value)
	{
		___coinsCount_10 = value;
	}

	inline static int32_t get_offset_of_coinsCountTotal_11() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___coinsCountTotal_11)); }
	inline int32_t get_coinsCountTotal_11() const { return ___coinsCountTotal_11; }
	inline int32_t* get_address_of_coinsCountTotal_11() { return &___coinsCountTotal_11; }
	inline void set_coinsCountTotal_11(int32_t value)
	{
		___coinsCountTotal_11 = value;
	}

	inline static int32_t get_offset_of_scoreText_12() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___scoreText_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_12() const { return ___scoreText_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_12() { return &___scoreText_12; }
	inline void set_scoreText_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_12), (void*)value);
	}

	inline static int32_t get_offset_of_coinsCountText_13() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___coinsCountText_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_coinsCountText_13() const { return ___coinsCountText_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_coinsCountText_13() { return &___coinsCountText_13; }
	inline void set_coinsCountText_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___coinsCountText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coinsCountText_13), (void*)value);
	}

	inline static int32_t get_offset_of_playerEffects_14() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___playerEffects_14)); }
	inline PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * get_playerEffects_14() const { return ___playerEffects_14; }
	inline PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 ** get_address_of_playerEffects_14() { return &___playerEffects_14; }
	inline void set_playerEffects_14(PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * value)
	{
		___playerEffects_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerEffects_14), (void*)value);
	}
};

struct Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields
{
public:
	// Inventory Inventory::instance
	Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * ___instance_15;

public:
	inline static int32_t get_offset_of_instance_15() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields, ___instance_15)); }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * get_instance_15() const { return ___instance_15; }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 ** get_address_of_instance_15() { return &___instance_15; }
	inline void set_instance_15(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * value)
	{
		___instance_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_15), (void*)value);
	}
};


// MainMenu
struct MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Data MainMenu::data
	Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * ___data_4;
	// System.String MainMenu::levelToLoad
	String_t* ___levelToLoad_5;
	// UnityEngine.GameObject MainMenu::homePage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___homePage_6;
	// UnityEngine.GameObject MainMenu::settingsWindow
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___settingsWindow_7;
	// UnityEngine.GameObject MainMenu::ShopWindow
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ShopWindow_8;
	// UnityEngine.GameObject MainMenu::MissionsWindow
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MissionsWindow_9;
	// UnityEngine.UI.Text MainMenu::coinsCountText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___coinsCountText_10;
	// UnityEngine.UI.Text MainMenu::scoreMaxText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreMaxText_11;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C, ___data_4)); }
	inline Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * get_data_4() const { return ___data_4; }
	inline Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}

	inline static int32_t get_offset_of_levelToLoad_5() { return static_cast<int32_t>(offsetof(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C, ___levelToLoad_5)); }
	inline String_t* get_levelToLoad_5() const { return ___levelToLoad_5; }
	inline String_t** get_address_of_levelToLoad_5() { return &___levelToLoad_5; }
	inline void set_levelToLoad_5(String_t* value)
	{
		___levelToLoad_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelToLoad_5), (void*)value);
	}

	inline static int32_t get_offset_of_homePage_6() { return static_cast<int32_t>(offsetof(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C, ___homePage_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_homePage_6() const { return ___homePage_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_homePage_6() { return &___homePage_6; }
	inline void set_homePage_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___homePage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___homePage_6), (void*)value);
	}

	inline static int32_t get_offset_of_settingsWindow_7() { return static_cast<int32_t>(offsetof(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C, ___settingsWindow_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_settingsWindow_7() const { return ___settingsWindow_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_settingsWindow_7() { return &___settingsWindow_7; }
	inline void set_settingsWindow_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___settingsWindow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settingsWindow_7), (void*)value);
	}

	inline static int32_t get_offset_of_ShopWindow_8() { return static_cast<int32_t>(offsetof(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C, ___ShopWindow_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ShopWindow_8() const { return ___ShopWindow_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ShopWindow_8() { return &___ShopWindow_8; }
	inline void set_ShopWindow_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ShopWindow_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShopWindow_8), (void*)value);
	}

	inline static int32_t get_offset_of_MissionsWindow_9() { return static_cast<int32_t>(offsetof(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C, ___MissionsWindow_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MissionsWindow_9() const { return ___MissionsWindow_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MissionsWindow_9() { return &___MissionsWindow_9; }
	inline void set_MissionsWindow_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MissionsWindow_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MissionsWindow_9), (void*)value);
	}

	inline static int32_t get_offset_of_coinsCountText_10() { return static_cast<int32_t>(offsetof(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C, ___coinsCountText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_coinsCountText_10() const { return ___coinsCountText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_coinsCountText_10() { return &___coinsCountText_10; }
	inline void set_coinsCountText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___coinsCountText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coinsCountText_10), (void*)value);
	}

	inline static int32_t get_offset_of_scoreMaxText_11() { return static_cast<int32_t>(offsetof(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C, ___scoreMaxText_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreMaxText_11() const { return ___scoreMaxText_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreMaxText_11() { return &___scoreMaxText_11; }
	inline void set_scoreMaxText_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreMaxText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreMaxText_11), (void*)value);
	}
};

struct MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields
{
public:
	// MainMenu MainMenu::instance
	MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * ___instance_12;

public:
	inline static int32_t get_offset_of_instance_12() { return static_cast<int32_t>(offsetof(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields, ___instance_12)); }
	inline MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * get_instance_12() const { return ___instance_12; }
	inline MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C ** get_address_of_instance_12() { return &___instance_12; }
	inline void set_instance_12(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * value)
	{
		___instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_12), (void*)value);
	}
};


// MissionsManager
struct MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MissionsManager::MissionsWindow
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MissionsWindow_4;
	// UnityEngine.Animator MissionsManager::animatorNotif
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animatorNotif_5;
	// System.Int32 MissionsManager::nbnotif
	int32_t ___nbnotif_6;

public:
	inline static int32_t get_offset_of_MissionsWindow_4() { return static_cast<int32_t>(offsetof(MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69, ___MissionsWindow_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MissionsWindow_4() const { return ___MissionsWindow_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MissionsWindow_4() { return &___MissionsWindow_4; }
	inline void set_MissionsWindow_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MissionsWindow_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MissionsWindow_4), (void*)value);
	}

	inline static int32_t get_offset_of_animatorNotif_5() { return static_cast<int32_t>(offsetof(MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69, ___animatorNotif_5)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animatorNotif_5() const { return ___animatorNotif_5; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animatorNotif_5() { return &___animatorNotif_5; }
	inline void set_animatorNotif_5(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animatorNotif_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animatorNotif_5), (void*)value);
	}

	inline static int32_t get_offset_of_nbnotif_6() { return static_cast<int32_t>(offsetof(MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69, ___nbnotif_6)); }
	inline int32_t get_nbnotif_6() const { return ___nbnotif_6; }
	inline int32_t* get_address_of_nbnotif_6() { return &___nbnotif_6; }
	inline void set_nbnotif_6(int32_t value)
	{
		___nbnotif_6 = value;
	}
};

struct MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69_StaticFields
{
public:
	// MissionsManager MissionsManager::instance
	MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69 * ___instance_7;

public:
	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69_StaticFields, ___instance_7)); }
	inline MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69 * get_instance_7() const { return ___instance_7; }
	inline MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_7), (void*)value);
	}
};


// PauseMenu
struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text PauseMenu::coinsCountText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___coinsCountText_7;
	// UnityEngine.UI.Text PauseMenu::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_8;
	// UnityEngine.UI.Text PauseMenu::scoreMaxText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreMaxText_9;
	// UnityEngine.UI.Text PauseMenu::nbBarrier
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nbBarrier_10;
	// UnityEngine.UI.Text PauseMenu::nbKillMoob
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nbKillMoob_11;
	// UnityEngine.UI.Text PauseMenu::nbBonus
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nbBonus_12;
	// UnityEngine.UI.Text PauseMenu::countDown
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___countDown_13;
	// UnityEngine.Animator PauseMenu::heartsMenuAnimator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___heartsMenuAnimator_14;
	// UnityEngine.GameObject PauseMenu::buttonOption
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonOption_15;
	// UnityEngine.GameObject PauseMenu::panelStats
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panelStats_16;
	// UnityEngine.GameObject PauseMenu::panelGame
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panelGame_17;
	// UnityEngine.GameObject PauseMenu::panelQuit
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panelQuit_18;
	// UnityEngine.GameObject PauseMenu::pauseMenuUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pauseMenuUI_19;

public:
	inline static int32_t get_offset_of_coinsCountText_7() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___coinsCountText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_coinsCountText_7() const { return ___coinsCountText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_coinsCountText_7() { return &___coinsCountText_7; }
	inline void set_coinsCountText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___coinsCountText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coinsCountText_7), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_8() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___scoreText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_8() const { return ___scoreText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_8() { return &___scoreText_8; }
	inline void set_scoreText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_8), (void*)value);
	}

	inline static int32_t get_offset_of_scoreMaxText_9() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___scoreMaxText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreMaxText_9() const { return ___scoreMaxText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreMaxText_9() { return &___scoreMaxText_9; }
	inline void set_scoreMaxText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreMaxText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreMaxText_9), (void*)value);
	}

	inline static int32_t get_offset_of_nbBarrier_10() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___nbBarrier_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nbBarrier_10() const { return ___nbBarrier_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nbBarrier_10() { return &___nbBarrier_10; }
	inline void set_nbBarrier_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nbBarrier_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nbBarrier_10), (void*)value);
	}

	inline static int32_t get_offset_of_nbKillMoob_11() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___nbKillMoob_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nbKillMoob_11() const { return ___nbKillMoob_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nbKillMoob_11() { return &___nbKillMoob_11; }
	inline void set_nbKillMoob_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nbKillMoob_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nbKillMoob_11), (void*)value);
	}

	inline static int32_t get_offset_of_nbBonus_12() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___nbBonus_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nbBonus_12() const { return ___nbBonus_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nbBonus_12() { return &___nbBonus_12; }
	inline void set_nbBonus_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nbBonus_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nbBonus_12), (void*)value);
	}

	inline static int32_t get_offset_of_countDown_13() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___countDown_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_countDown_13() const { return ___countDown_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_countDown_13() { return &___countDown_13; }
	inline void set_countDown_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___countDown_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___countDown_13), (void*)value);
	}

	inline static int32_t get_offset_of_heartsMenuAnimator_14() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___heartsMenuAnimator_14)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_heartsMenuAnimator_14() const { return ___heartsMenuAnimator_14; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_heartsMenuAnimator_14() { return &___heartsMenuAnimator_14; }
	inline void set_heartsMenuAnimator_14(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___heartsMenuAnimator_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heartsMenuAnimator_14), (void*)value);
	}

	inline static int32_t get_offset_of_buttonOption_15() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___buttonOption_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonOption_15() const { return ___buttonOption_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonOption_15() { return &___buttonOption_15; }
	inline void set_buttonOption_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonOption_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonOption_15), (void*)value);
	}

	inline static int32_t get_offset_of_panelStats_16() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___panelStats_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panelStats_16() const { return ___panelStats_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panelStats_16() { return &___panelStats_16; }
	inline void set_panelStats_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panelStats_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panelStats_16), (void*)value);
	}

	inline static int32_t get_offset_of_panelGame_17() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___panelGame_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panelGame_17() const { return ___panelGame_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panelGame_17() { return &___panelGame_17; }
	inline void set_panelGame_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panelGame_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panelGame_17), (void*)value);
	}

	inline static int32_t get_offset_of_panelQuit_18() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___panelQuit_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panelQuit_18() const { return ___panelQuit_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panelQuit_18() { return &___panelQuit_18; }
	inline void set_panelQuit_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panelQuit_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panelQuit_18), (void*)value);
	}

	inline static int32_t get_offset_of_pauseMenuUI_19() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___pauseMenuUI_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pauseMenuUI_19() const { return ___pauseMenuUI_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pauseMenuUI_19() { return &___pauseMenuUI_19; }
	inline void set_pauseMenuUI_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pauseMenuUI_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseMenuUI_19), (void*)value);
	}
};

struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields
{
public:
	// System.Boolean PauseMenu::gameIsPaused
	bool ___gameIsPaused_4;
	// System.Boolean PauseMenu::statsOpen
	bool ___statsOpen_5;
	// System.Boolean PauseMenu::quitOpen
	bool ___quitOpen_6;
	// PauseMenu PauseMenu::instance
	PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * ___instance_20;

public:
	inline static int32_t get_offset_of_gameIsPaused_4() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields, ___gameIsPaused_4)); }
	inline bool get_gameIsPaused_4() const { return ___gameIsPaused_4; }
	inline bool* get_address_of_gameIsPaused_4() { return &___gameIsPaused_4; }
	inline void set_gameIsPaused_4(bool value)
	{
		___gameIsPaused_4 = value;
	}

	inline static int32_t get_offset_of_statsOpen_5() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields, ___statsOpen_5)); }
	inline bool get_statsOpen_5() const { return ___statsOpen_5; }
	inline bool* get_address_of_statsOpen_5() { return &___statsOpen_5; }
	inline void set_statsOpen_5(bool value)
	{
		___statsOpen_5 = value;
	}

	inline static int32_t get_offset_of_quitOpen_6() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields, ___quitOpen_6)); }
	inline bool get_quitOpen_6() const { return ___quitOpen_6; }
	inline bool* get_address_of_quitOpen_6() { return &___quitOpen_6; }
	inline void set_quitOpen_6(bool value)
	{
		___quitOpen_6 = value;
	}

	inline static int32_t get_offset_of_instance_20() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields, ___instance_20)); }
	inline PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * get_instance_20() const { return ___instance_20; }
	inline PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 ** get_address_of_instance_20() { return &___instance_20; }
	inline void set_instance_20(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * value)
	{
		___instance_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_20), (void*)value);
	}
};


// PickUpCoin
struct PickUpCoin_t8EAC46A9921C91A56ECE00DE3791A19CA2557050  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PickUpCoin::toDestroy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___toDestroy_4;

public:
	inline static int32_t get_offset_of_toDestroy_4() { return static_cast<int32_t>(offsetof(PickUpCoin_t8EAC46A9921C91A56ECE00DE3791A19CA2557050, ___toDestroy_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_toDestroy_4() const { return ___toDestroy_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_toDestroy_4() { return &___toDestroy_4; }
	inline void set_toDestroy_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___toDestroy_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toDestroy_4), (void*)value);
	}
};


// PickUpItem
struct PickUpItem_tD66C6424CCD1B9F24A458174FE2D94E094AB8F20  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Item PickUpItem::apple
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___apple_4;
	// Item PickUpItem::goldenApple
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___goldenApple_5;
	// Item PickUpItem::item
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item_6;
	// Item PickUpItem::shield
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___shield_7;
	// UnityEngine.Vector3[] PickUpItem::positions
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___positions_8;
	// UnityEngine.Animator PickUpItem::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_9;
	// UnityEngine.GameObject PickUpItem::toDestroy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___toDestroy_10;

public:
	inline static int32_t get_offset_of_apple_4() { return static_cast<int32_t>(offsetof(PickUpItem_tD66C6424CCD1B9F24A458174FE2D94E094AB8F20, ___apple_4)); }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * get_apple_4() const { return ___apple_4; }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C ** get_address_of_apple_4() { return &___apple_4; }
	inline void set_apple_4(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * value)
	{
		___apple_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apple_4), (void*)value);
	}

	inline static int32_t get_offset_of_goldenApple_5() { return static_cast<int32_t>(offsetof(PickUpItem_tD66C6424CCD1B9F24A458174FE2D94E094AB8F20, ___goldenApple_5)); }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * get_goldenApple_5() const { return ___goldenApple_5; }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C ** get_address_of_goldenApple_5() { return &___goldenApple_5; }
	inline void set_goldenApple_5(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * value)
	{
		___goldenApple_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goldenApple_5), (void*)value);
	}

	inline static int32_t get_offset_of_item_6() { return static_cast<int32_t>(offsetof(PickUpItem_tD66C6424CCD1B9F24A458174FE2D94E094AB8F20, ___item_6)); }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * get_item_6() const { return ___item_6; }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C ** get_address_of_item_6() { return &___item_6; }
	inline void set_item_6(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * value)
	{
		___item_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item_6), (void*)value);
	}

	inline static int32_t get_offset_of_shield_7() { return static_cast<int32_t>(offsetof(PickUpItem_tD66C6424CCD1B9F24A458174FE2D94E094AB8F20, ___shield_7)); }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * get_shield_7() const { return ___shield_7; }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C ** get_address_of_shield_7() { return &___shield_7; }
	inline void set_shield_7(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * value)
	{
		___shield_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shield_7), (void*)value);
	}

	inline static int32_t get_offset_of_positions_8() { return static_cast<int32_t>(offsetof(PickUpItem_tD66C6424CCD1B9F24A458174FE2D94E094AB8F20, ___positions_8)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_positions_8() const { return ___positions_8; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_positions_8() { return &___positions_8; }
	inline void set_positions_8(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___positions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positions_8), (void*)value);
	}

	inline static int32_t get_offset_of_animator_9() { return static_cast<int32_t>(offsetof(PickUpItem_tD66C6424CCD1B9F24A458174FE2D94E094AB8F20, ___animator_9)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_9() const { return ___animator_9; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_9() { return &___animator_9; }
	inline void set_animator_9(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_9), (void*)value);
	}

	inline static int32_t get_offset_of_toDestroy_10() { return static_cast<int32_t>(offsetof(PickUpItem_tD66C6424CCD1B9F24A458174FE2D94E094AB8F20, ___toDestroy_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_toDestroy_10() const { return ___toDestroy_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_toDestroy_10() { return &___toDestroy_10; }
	inline void set_toDestroy_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___toDestroy_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toDestroy_10), (void*)value);
	}
};


// PlayerEffects
struct PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 PlayerEffects::maxLifeShield
	int32_t ___maxLifeShield_4;
	// System.Int32 PlayerEffects::currentLifeShield
	int32_t ___currentLifeShield_5;

public:
	inline static int32_t get_offset_of_maxLifeShield_4() { return static_cast<int32_t>(offsetof(PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4, ___maxLifeShield_4)); }
	inline int32_t get_maxLifeShield_4() const { return ___maxLifeShield_4; }
	inline int32_t* get_address_of_maxLifeShield_4() { return &___maxLifeShield_4; }
	inline void set_maxLifeShield_4(int32_t value)
	{
		___maxLifeShield_4 = value;
	}

	inline static int32_t get_offset_of_currentLifeShield_5() { return static_cast<int32_t>(offsetof(PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4, ___currentLifeShield_5)); }
	inline int32_t get_currentLifeShield_5() const { return ___currentLifeShield_5; }
	inline int32_t* get_address_of_currentLifeShield_5() { return &___currentLifeShield_5; }
	inline void set_currentLifeShield_5(int32_t value)
	{
		___currentLifeShield_5 = value;
	}
};

struct PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4_StaticFields
{
public:
	// PlayerEffects PlayerEffects::instance
	PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4_StaticFields, ___instance_6)); }
	inline PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * get_instance_6() const { return ___instance_6; }
	inline PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}
};


// PlayerHealth
struct PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 PlayerHealth::maxHealth
	int32_t ___maxHealth_4;
	// System.Int32 PlayerHealth::currentHealth
	int32_t ___currentHealth_5;
	// UnityEngine.Animator PlayerHealth::heartsAnimator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___heartsAnimator_6;
	// System.Single PlayerHealth::invincibilityTimeAfterHit
	float ___invincibilityTimeAfterHit_7;
	// System.Single PlayerHealth::invincibilityFlashDelay
	float ___invincibilityFlashDelay_8;
	// System.Boolean PlayerHealth::isInvincible
	bool ___isInvincible_9;
	// UnityEngine.SpriteRenderer PlayerHealth::graphics
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___graphics_10;

public:
	inline static int32_t get_offset_of_maxHealth_4() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___maxHealth_4)); }
	inline int32_t get_maxHealth_4() const { return ___maxHealth_4; }
	inline int32_t* get_address_of_maxHealth_4() { return &___maxHealth_4; }
	inline void set_maxHealth_4(int32_t value)
	{
		___maxHealth_4 = value;
	}

	inline static int32_t get_offset_of_currentHealth_5() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___currentHealth_5)); }
	inline int32_t get_currentHealth_5() const { return ___currentHealth_5; }
	inline int32_t* get_address_of_currentHealth_5() { return &___currentHealth_5; }
	inline void set_currentHealth_5(int32_t value)
	{
		___currentHealth_5 = value;
	}

	inline static int32_t get_offset_of_heartsAnimator_6() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___heartsAnimator_6)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_heartsAnimator_6() const { return ___heartsAnimator_6; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_heartsAnimator_6() { return &___heartsAnimator_6; }
	inline void set_heartsAnimator_6(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___heartsAnimator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heartsAnimator_6), (void*)value);
	}

	inline static int32_t get_offset_of_invincibilityTimeAfterHit_7() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___invincibilityTimeAfterHit_7)); }
	inline float get_invincibilityTimeAfterHit_7() const { return ___invincibilityTimeAfterHit_7; }
	inline float* get_address_of_invincibilityTimeAfterHit_7() { return &___invincibilityTimeAfterHit_7; }
	inline void set_invincibilityTimeAfterHit_7(float value)
	{
		___invincibilityTimeAfterHit_7 = value;
	}

	inline static int32_t get_offset_of_invincibilityFlashDelay_8() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___invincibilityFlashDelay_8)); }
	inline float get_invincibilityFlashDelay_8() const { return ___invincibilityFlashDelay_8; }
	inline float* get_address_of_invincibilityFlashDelay_8() { return &___invincibilityFlashDelay_8; }
	inline void set_invincibilityFlashDelay_8(float value)
	{
		___invincibilityFlashDelay_8 = value;
	}

	inline static int32_t get_offset_of_isInvincible_9() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___isInvincible_9)); }
	inline bool get_isInvincible_9() const { return ___isInvincible_9; }
	inline bool* get_address_of_isInvincible_9() { return &___isInvincible_9; }
	inline void set_isInvincible_9(bool value)
	{
		___isInvincible_9 = value;
	}

	inline static int32_t get_offset_of_graphics_10() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465, ___graphics_10)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_graphics_10() const { return ___graphics_10; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_graphics_10() { return &___graphics_10; }
	inline void set_graphics_10(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___graphics_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphics_10), (void*)value);
	}
};

struct PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields
{
public:
	// PlayerHealth PlayerHealth::instance
	PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * ___instance_11;

public:
	inline static int32_t get_offset_of_instance_11() { return static_cast<int32_t>(offsetof(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields, ___instance_11)); }
	inline PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * get_instance_11() const { return ___instance_11; }
	inline PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 ** get_address_of_instance_11() { return &___instance_11; }
	inline void set_instance_11(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * value)
	{
		___instance_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_11), (void*)value);
	}
};


// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single PlayerMovement::speed
	float ___speed_4;
	// System.Single PlayerMovement::horizontalSpeed
	float ___horizontalSpeed_5;
	// UnityEngine.Rigidbody2D PlayerMovement::rigidbodyPlayer
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rigidbodyPlayer_6;
	// UnityEngine.Vector3 PlayerMovement::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_7;
	// System.Boolean PlayerMovement::isAttack
	bool ___isAttack_8;
	// System.Boolean PlayerMovement::canAttack
	bool ___canAttack_9;
	// UnityEngine.Animator PlayerMovement::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_10;
	// Data PlayerMovement::data
	Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * ___data_11;
	// UnityEngine.Transform PlayerMovement::waypointsRight
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___waypointsRight_12;
	// UnityEngine.Transform PlayerMovement::waypointsLeft
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___waypointsLeft_13;
	// System.Int32 PlayerMovement::direction
	int32_t ___direction_14;
	// System.Single PlayerMovement::dragDistance
	float ___dragDistance_15;
	// UnityEngine.Vector2 PlayerMovement::firstPressPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___firstPressPos_16;
	// UnityEngine.Vector2 PlayerMovement::secondPressPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___secondPressPos_17;
	// UnityEngine.Vector2 PlayerMovement::currentSwipe
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___currentSwipe_18;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_horizontalSpeed_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___horizontalSpeed_5)); }
	inline float get_horizontalSpeed_5() const { return ___horizontalSpeed_5; }
	inline float* get_address_of_horizontalSpeed_5() { return &___horizontalSpeed_5; }
	inline void set_horizontalSpeed_5(float value)
	{
		___horizontalSpeed_5 = value;
	}

	inline static int32_t get_offset_of_rigidbodyPlayer_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___rigidbodyPlayer_6)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rigidbodyPlayer_6() const { return ___rigidbodyPlayer_6; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rigidbodyPlayer_6() { return &___rigidbodyPlayer_6; }
	inline void set_rigidbodyPlayer_6(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rigidbodyPlayer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidbodyPlayer_6), (void*)value);
	}

	inline static int32_t get_offset_of_velocity_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___velocity_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_7() const { return ___velocity_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_7() { return &___velocity_7; }
	inline void set_velocity_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_7 = value;
	}

	inline static int32_t get_offset_of_isAttack_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___isAttack_8)); }
	inline bool get_isAttack_8() const { return ___isAttack_8; }
	inline bool* get_address_of_isAttack_8() { return &___isAttack_8; }
	inline void set_isAttack_8(bool value)
	{
		___isAttack_8 = value;
	}

	inline static int32_t get_offset_of_canAttack_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___canAttack_9)); }
	inline bool get_canAttack_9() const { return ___canAttack_9; }
	inline bool* get_address_of_canAttack_9() { return &___canAttack_9; }
	inline void set_canAttack_9(bool value)
	{
		___canAttack_9 = value;
	}

	inline static int32_t get_offset_of_animator_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___animator_10)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_10() const { return ___animator_10; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_10() { return &___animator_10; }
	inline void set_animator_10(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_10), (void*)value);
	}

	inline static int32_t get_offset_of_data_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___data_11)); }
	inline Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * get_data_11() const { return ___data_11; }
	inline Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 ** get_address_of_data_11() { return &___data_11; }
	inline void set_data_11(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * value)
	{
		___data_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_11), (void*)value);
	}

	inline static int32_t get_offset_of_waypointsRight_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___waypointsRight_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_waypointsRight_12() const { return ___waypointsRight_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_waypointsRight_12() { return &___waypointsRight_12; }
	inline void set_waypointsRight_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___waypointsRight_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waypointsRight_12), (void*)value);
	}

	inline static int32_t get_offset_of_waypointsLeft_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___waypointsLeft_13)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_waypointsLeft_13() const { return ___waypointsLeft_13; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_waypointsLeft_13() { return &___waypointsLeft_13; }
	inline void set_waypointsLeft_13(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___waypointsLeft_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waypointsLeft_13), (void*)value);
	}

	inline static int32_t get_offset_of_direction_14() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___direction_14)); }
	inline int32_t get_direction_14() const { return ___direction_14; }
	inline int32_t* get_address_of_direction_14() { return &___direction_14; }
	inline void set_direction_14(int32_t value)
	{
		___direction_14 = value;
	}

	inline static int32_t get_offset_of_dragDistance_15() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___dragDistance_15)); }
	inline float get_dragDistance_15() const { return ___dragDistance_15; }
	inline float* get_address_of_dragDistance_15() { return &___dragDistance_15; }
	inline void set_dragDistance_15(float value)
	{
		___dragDistance_15 = value;
	}

	inline static int32_t get_offset_of_firstPressPos_16() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___firstPressPos_16)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_firstPressPos_16() const { return ___firstPressPos_16; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_firstPressPos_16() { return &___firstPressPos_16; }
	inline void set_firstPressPos_16(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___firstPressPos_16 = value;
	}

	inline static int32_t get_offset_of_secondPressPos_17() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___secondPressPos_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_secondPressPos_17() const { return ___secondPressPos_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_secondPressPos_17() { return &___secondPressPos_17; }
	inline void set_secondPressPos_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___secondPressPos_17 = value;
	}

	inline static int32_t get_offset_of_currentSwipe_18() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___currentSwipe_18)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_currentSwipe_18() const { return ___currentSwipe_18; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_currentSwipe_18() { return &___currentSwipe_18; }
	inline void set_currentSwipe_18(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___currentSwipe_18 = value;
	}
};

struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields
{
public:
	// PlayerMovement PlayerMovement::instance
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * ___instance_19;

public:
	inline static int32_t get_offset_of_instance_19() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields, ___instance_19)); }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * get_instance_19() const { return ___instance_19; }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 ** get_address_of_instance_19() { return &___instance_19; }
	inline void set_instance_19(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * value)
	{
		___instance_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_19), (void*)value);
	}
};


// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// SettingsMenu
struct SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Dropdown SettingsMenu::resolutionDropdown
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___resolutionDropdown_4;
	// UnityEngine.Resolution[] SettingsMenu::resolutions
	ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* ___resolutions_5;
	// UnityEngine.UI.Slider SettingsMenu::musicSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___musicSlider_6;
	// UnityEngine.UI.Slider SettingsMenu::soundSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___soundSlider_7;

public:
	inline static int32_t get_offset_of_resolutionDropdown_4() { return static_cast<int32_t>(offsetof(SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250, ___resolutionDropdown_4)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_resolutionDropdown_4() const { return ___resolutionDropdown_4; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_resolutionDropdown_4() { return &___resolutionDropdown_4; }
	inline void set_resolutionDropdown_4(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___resolutionDropdown_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolutionDropdown_4), (void*)value);
	}

	inline static int32_t get_offset_of_resolutions_5() { return static_cast<int32_t>(offsetof(SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250, ___resolutions_5)); }
	inline ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* get_resolutions_5() const { return ___resolutions_5; }
	inline ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597** get_address_of_resolutions_5() { return &___resolutions_5; }
	inline void set_resolutions_5(ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* value)
	{
		___resolutions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolutions_5), (void*)value);
	}

	inline static int32_t get_offset_of_musicSlider_6() { return static_cast<int32_t>(offsetof(SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250, ___musicSlider_6)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_musicSlider_6() const { return ___musicSlider_6; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_musicSlider_6() { return &___musicSlider_6; }
	inline void set_musicSlider_6(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___musicSlider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicSlider_6), (void*)value);
	}

	inline static int32_t get_offset_of_soundSlider_7() { return static_cast<int32_t>(offsetof(SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250, ___soundSlider_7)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_soundSlider_7() const { return ___soundSlider_7; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_soundSlider_7() { return &___soundSlider_7; }
	inline void set_soundSlider_7(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___soundSlider_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundSlider_7), (void*)value);
	}
};


// Shop
struct Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Shop::isAScene
	bool ___isAScene_4;
	// Scenes Shop::scene
	Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A * ___scene_5;
	// System.Boolean Shop::isASkin
	bool ___isASkin_6;
	// Skin Shop::skin
	Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8 * ___skin_7;
	// System.Boolean Shop::isATrails
	bool ___isATrails_8;
	// Trails Shop::trails
	Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094 * ___trails_9;
	// UnityEngine.UI.Text Shop::nameShop
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nameShop_10;
	// UnityEngine.UI.Image Shop::image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image_11;
	// UnityEngine.UI.Text Shop::price
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___price_12;
	// UnityEngine.GameObject Shop::priceObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___priceObject_13;
	// UnityEngine.GameObject Shop::buy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buy_14;
	// UnityEngine.GameObject Shop::select
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___select_15;

public:
	inline static int32_t get_offset_of_isAScene_4() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___isAScene_4)); }
	inline bool get_isAScene_4() const { return ___isAScene_4; }
	inline bool* get_address_of_isAScene_4() { return &___isAScene_4; }
	inline void set_isAScene_4(bool value)
	{
		___isAScene_4 = value;
	}

	inline static int32_t get_offset_of_scene_5() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___scene_5)); }
	inline Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A * get_scene_5() const { return ___scene_5; }
	inline Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A ** get_address_of_scene_5() { return &___scene_5; }
	inline void set_scene_5(Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A * value)
	{
		___scene_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scene_5), (void*)value);
	}

	inline static int32_t get_offset_of_isASkin_6() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___isASkin_6)); }
	inline bool get_isASkin_6() const { return ___isASkin_6; }
	inline bool* get_address_of_isASkin_6() { return &___isASkin_6; }
	inline void set_isASkin_6(bool value)
	{
		___isASkin_6 = value;
	}

	inline static int32_t get_offset_of_skin_7() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___skin_7)); }
	inline Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8 * get_skin_7() const { return ___skin_7; }
	inline Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8 ** get_address_of_skin_7() { return &___skin_7; }
	inline void set_skin_7(Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8 * value)
	{
		___skin_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skin_7), (void*)value);
	}

	inline static int32_t get_offset_of_isATrails_8() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___isATrails_8)); }
	inline bool get_isATrails_8() const { return ___isATrails_8; }
	inline bool* get_address_of_isATrails_8() { return &___isATrails_8; }
	inline void set_isATrails_8(bool value)
	{
		___isATrails_8 = value;
	}

	inline static int32_t get_offset_of_trails_9() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___trails_9)); }
	inline Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094 * get_trails_9() const { return ___trails_9; }
	inline Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094 ** get_address_of_trails_9() { return &___trails_9; }
	inline void set_trails_9(Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094 * value)
	{
		___trails_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trails_9), (void*)value);
	}

	inline static int32_t get_offset_of_nameShop_10() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___nameShop_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nameShop_10() const { return ___nameShop_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nameShop_10() { return &___nameShop_10; }
	inline void set_nameShop_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nameShop_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameShop_10), (void*)value);
	}

	inline static int32_t get_offset_of_image_11() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___image_11)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_image_11() const { return ___image_11; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_image_11() { return &___image_11; }
	inline void set_image_11(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___image_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_11), (void*)value);
	}

	inline static int32_t get_offset_of_price_12() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___price_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_price_12() const { return ___price_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_price_12() { return &___price_12; }
	inline void set_price_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___price_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___price_12), (void*)value);
	}

	inline static int32_t get_offset_of_priceObject_13() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___priceObject_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_priceObject_13() const { return ___priceObject_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_priceObject_13() { return &___priceObject_13; }
	inline void set_priceObject_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___priceObject_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___priceObject_13), (void*)value);
	}

	inline static int32_t get_offset_of_buy_14() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___buy_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buy_14() const { return ___buy_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buy_14() { return &___buy_14; }
	inline void set_buy_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buy_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buy_14), (void*)value);
	}

	inline static int32_t get_offset_of_select_15() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___select_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_select_15() const { return ___select_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_select_15() { return &___select_15; }
	inline void set_select_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___select_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___select_15), (void*)value);
	}
};


// ShopManager
struct ShopManager_t34B2430F984DB95B4A3B35C0E69A0CC75014BAFB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ShopManager::homePage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___homePage_4;
	// UnityEngine.GameObject ShopManager::shopSkinPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shopSkinPanel_5;
	// UnityEngine.GameObject ShopManager::shopScenePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shopScenePanel_6;
	// UnityEngine.GameObject ShopManager::shopTrailsPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shopTrailsPanel_7;

public:
	inline static int32_t get_offset_of_homePage_4() { return static_cast<int32_t>(offsetof(ShopManager_t34B2430F984DB95B4A3B35C0E69A0CC75014BAFB, ___homePage_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_homePage_4() const { return ___homePage_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_homePage_4() { return &___homePage_4; }
	inline void set_homePage_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___homePage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___homePage_4), (void*)value);
	}

	inline static int32_t get_offset_of_shopSkinPanel_5() { return static_cast<int32_t>(offsetof(ShopManager_t34B2430F984DB95B4A3B35C0E69A0CC75014BAFB, ___shopSkinPanel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shopSkinPanel_5() const { return ___shopSkinPanel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shopSkinPanel_5() { return &___shopSkinPanel_5; }
	inline void set_shopSkinPanel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shopSkinPanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopSkinPanel_5), (void*)value);
	}

	inline static int32_t get_offset_of_shopScenePanel_6() { return static_cast<int32_t>(offsetof(ShopManager_t34B2430F984DB95B4A3B35C0E69A0CC75014BAFB, ___shopScenePanel_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shopScenePanel_6() const { return ___shopScenePanel_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shopScenePanel_6() { return &___shopScenePanel_6; }
	inline void set_shopScenePanel_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shopScenePanel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopScenePanel_6), (void*)value);
	}

	inline static int32_t get_offset_of_shopTrailsPanel_7() { return static_cast<int32_t>(offsetof(ShopManager_t34B2430F984DB95B4A3B35C0E69A0CC75014BAFB, ___shopTrailsPanel_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shopTrailsPanel_7() const { return ___shopTrailsPanel_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shopTrailsPanel_7() { return &___shopTrailsPanel_7; }
	inline void set_shopTrailsPanel_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shopTrailsPanel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopTrailsPanel_7), (void*)value);
	}
};


// ShowMissions
struct ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Missions ShowMissions::mission1
	Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * ___mission1_4;
	// Missions ShowMissions::mission2
	Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * ___mission2_5;
	// Missions ShowMissions::missionToFinish
	Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * ___missionToFinish_6;
	// System.Boolean ShowMissions::showText
	bool ___showText_7;
	// UnityEngine.Animator ShowMissions::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_8;
	// UnityEngine.UI.Text ShowMissions::title
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___title_9;
	// UnityEngine.UI.Text ShowMissions::description
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___description_10;

public:
	inline static int32_t get_offset_of_mission1_4() { return static_cast<int32_t>(offsetof(ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC, ___mission1_4)); }
	inline Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * get_mission1_4() const { return ___mission1_4; }
	inline Missions_tBEB12995FBE657C3140626C636F3335F2595E898 ** get_address_of_mission1_4() { return &___mission1_4; }
	inline void set_mission1_4(Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * value)
	{
		___mission1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mission1_4), (void*)value);
	}

	inline static int32_t get_offset_of_mission2_5() { return static_cast<int32_t>(offsetof(ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC, ___mission2_5)); }
	inline Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * get_mission2_5() const { return ___mission2_5; }
	inline Missions_tBEB12995FBE657C3140626C636F3335F2595E898 ** get_address_of_mission2_5() { return &___mission2_5; }
	inline void set_mission2_5(Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * value)
	{
		___mission2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mission2_5), (void*)value);
	}

	inline static int32_t get_offset_of_missionToFinish_6() { return static_cast<int32_t>(offsetof(ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC, ___missionToFinish_6)); }
	inline Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * get_missionToFinish_6() const { return ___missionToFinish_6; }
	inline Missions_tBEB12995FBE657C3140626C636F3335F2595E898 ** get_address_of_missionToFinish_6() { return &___missionToFinish_6; }
	inline void set_missionToFinish_6(Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * value)
	{
		___missionToFinish_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___missionToFinish_6), (void*)value);
	}

	inline static int32_t get_offset_of_showText_7() { return static_cast<int32_t>(offsetof(ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC, ___showText_7)); }
	inline bool get_showText_7() const { return ___showText_7; }
	inline bool* get_address_of_showText_7() { return &___showText_7; }
	inline void set_showText_7(bool value)
	{
		___showText_7 = value;
	}

	inline static int32_t get_offset_of_animator_8() { return static_cast<int32_t>(offsetof(ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC, ___animator_8)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_8() const { return ___animator_8; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_8() { return &___animator_8; }
	inline void set_animator_8(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_8), (void*)value);
	}

	inline static int32_t get_offset_of_title_9() { return static_cast<int32_t>(offsetof(ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC, ___title_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_title_9() const { return ___title_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_title_9() { return &___title_9; }
	inline void set_title_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___title_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_9), (void*)value);
	}

	inline static int32_t get_offset_of_description_10() { return static_cast<int32_t>(offsetof(ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC, ___description_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_description_10() const { return ___description_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_description_10() { return &___description_10; }
	inline void set_description_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___description_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_10), (void*)value);
	}
};


// SlideManager
struct SlideManager_t000489F97B893AB0E626B408AD9E784D013DDB50  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Data SlideManager::data
	Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * ___data_4;
	// UnityEngine.Animator[] SlideManager::animatorsSlide
	AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2* ___animatorsSlide_5;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(SlideManager_t000489F97B893AB0E626B408AD9E784D013DDB50, ___data_4)); }
	inline Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * get_data_4() const { return ___data_4; }
	inline Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}

	inline static int32_t get_offset_of_animatorsSlide_5() { return static_cast<int32_t>(offsetof(SlideManager_t000489F97B893AB0E626B408AD9E784D013DDB50, ___animatorsSlide_5)); }
	inline AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2* get_animatorsSlide_5() const { return ___animatorsSlide_5; }
	inline AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2** get_address_of_animatorsSlide_5() { return &___animatorsSlide_5; }
	inline void set_animatorsSlide_5(AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2* value)
	{
		___animatorsSlide_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animatorsSlide_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WeakSpot
struct WeakSpot_t8F0D2FD393201EA9830153F3FC1C78871261904F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject WeakSpot::objectToDestroy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___objectToDestroy_4;

public:
	inline static int32_t get_offset_of_objectToDestroy_4() { return static_cast<int32_t>(offsetof(WeakSpot_t8F0D2FD393201EA9830153F3FC1C78871261904F, ___objectToDestroy_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_objectToDestroy_4() const { return ___objectToDestroy_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_objectToDestroy_4() { return &___objectToDestroy_4; }
	inline void set_objectToDestroy_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___objectToDestroy_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectToDestroy_4), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;

public:
	inline static int32_t get_offset_of_m_Template_20() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Template_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Template_20() const { return ___m_Template_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Template_20() { return &___m_Template_20; }
	inline void set_m_Template_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Template_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Template_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionText_21() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CaptionText_21() const { return ___m_CaptionText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CaptionText_21() { return &___m_CaptionText_21; }
	inline void set_m_CaptionText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CaptionText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionText_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_22() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionImage_22)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_CaptionImage_22() const { return ___m_CaptionImage_22; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_CaptionImage_22() { return &___m_CaptionImage_22; }
	inline void set_m_CaptionImage_22(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_CaptionImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionImage_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemText_23() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_ItemText_23() const { return ___m_ItemText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_ItemText_23() { return &___m_ItemText_23; }
	inline void set_m_ItemText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_ItemText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemImage_24() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemImage_24)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ItemImage_24() const { return ___m_ItemImage_24; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ItemImage_24() { return &___m_ItemImage_24; }
	inline void set_m_ItemImage_24(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ItemImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Value_25)); }
	inline int32_t get_m_Value_25() const { return ___m_Value_25; }
	inline int32_t* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(int32_t value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_Options_26() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Options_26)); }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * get_m_Options_26() const { return ___m_Options_26; }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 ** get_address_of_m_Options_26() { return &___m_Options_26; }
	inline void set_m_Options_26(OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * value)
	{
		___m_Options_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_OnValueChanged_27)); }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaFadeSpeed_28() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaFadeSpeed_28)); }
	inline float get_m_AlphaFadeSpeed_28() const { return ___m_AlphaFadeSpeed_28; }
	inline float* get_address_of_m_AlphaFadeSpeed_28() { return &___m_AlphaFadeSpeed_28; }
	inline void set_m_AlphaFadeSpeed_28(float value)
	{
		___m_AlphaFadeSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_Dropdown_29() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Dropdown_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Dropdown_29() const { return ___m_Dropdown_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Dropdown_29() { return &___m_Dropdown_29; }
	inline void set_m_Dropdown_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Dropdown_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dropdown_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Blocker_30() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Blocker_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Blocker_30() const { return ___m_Blocker_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Blocker_30() { return &___m_Blocker_30; }
	inline void set_m_Blocker_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Blocker_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Blocker_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_Items_31() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Items_31)); }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * get_m_Items_31() const { return ___m_Items_31; }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 ** get_address_of_m_Items_31() { return &___m_Items_31; }
	inline void set_m_Items_31(List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * value)
	{
		___m_Items_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_32() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaTweenRunner_32)); }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * get_m_AlphaTweenRunner_32() const { return ___m_AlphaTweenRunner_32; }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D ** get_address_of_m_AlphaTweenRunner_32() { return &___m_AlphaTweenRunner_32; }
	inline void set_m_AlphaTweenRunner_32(TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * value)
	{
		___m_AlphaTweenRunner_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlphaTweenRunner_32), (void*)value);
	}

	inline static int32_t get_offset_of_validTemplate_33() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___validTemplate_33)); }
	inline bool get_validTemplate_33() const { return ___validTemplate_33; }
	inline bool* get_address_of_validTemplate_33() { return &___validTemplate_33; }
	inline void set_validTemplate_33(bool value)
	{
		___validTemplate_33 = value;
	}
};

struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___s_NoOptionData_35;

public:
	inline static int32_t get_offset_of_s_NoOptionData_35() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields, ___s_NoOptionData_35)); }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * get_s_NoOptionData_35() const { return ___s_NoOptionData_35; }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 ** get_address_of_s_NoOptionData_35() { return &___s_NoOptionData_35; }
	inline void set_s_NoOptionData_35(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * value)
	{
		___s_NoOptionData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NoOptionData_35), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Missions[]
struct MissionsU5BU5D_t62BD9A586F08A2DA7A71B62BDBC6FCF5E7D71A49  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * m_Items[1];

public:
	inline Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Missions_tBEB12995FBE657C3140626C636F3335F2595E898 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Missions_tBEB12995FBE657C3140626C636F3335F2595E898 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  m_Items[1];

public:
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  m_Items[1];

public:
	inline Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Animator[]
struct AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * m_Items[1];

public:
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.Resolution,UnityEngine.Resolution>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCD4D2D783DA9CF0C49139966793A197A32A32CF6_gshared (Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<UnityEngine.Resolution,UnityEngine.Resolution>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_m8B1E831C9F5E9F4B3CBEE152BD1E9481DE416E64_gshared (RuntimeObject* ___source0, Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D * ___selector1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Distinct<UnityEngine.Resolution>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Distinct_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_mDF48AC0F9CCD59EC8A90A0487D0809114C23A08D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<UnityEngine.Resolution>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* Enumerable_ToArray_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_m6CF991EAD04CB7348A8F26573B6E4C06AB5775CA_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void Barrier::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Barrier_Die_m5D10A9FCB4ED4DD926A72C8B131F91E952CC6D5B (Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<PlayerHealth>()
inline PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * Component_GetComponent_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m6F67FC96A586C55B18C8BBE1E30726D864DD7B77 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void PlayerHealth::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_TakeDamage_m21F4EA70549D145406E078F0543A934DE498FDB7 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, int32_t ___damage0, const RuntimeMethod* method);
// System.Collections.IEnumerator Barrier::BoxEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Barrier_BoxEnabled_m0BD534ABE1795F5A7D402C7421E4DECBB9A6B253 (Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Barrier/<BoxEnabled>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBoxEnabledU3Ed__9__ctor_mDFE8170626C8C5F14FA5C3A8C7B8E49F30BBA5AE (U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void Credits::LoadMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credits_LoadMainMenu_m3F575327CE6064EB74F25A3F87433622AB40ED52 (Credits_t6B2B82C0D386F61EDEF1EDBA08962FA05717D04C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214 (String_t* ___key0, float ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mCF1F69BE283197090AB08158CD05995136A1EBCF (String_t* ___key0, float ___defaultValue1, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mFB58CBF3FA00BD0EE09EC67457608F62564D0DDE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method);
// System.Void Enemy/<Die>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDieU3Ed__15__ctor_m0A4E027F772DE584151251BDD894D647B886E215 (U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Enemy/<Attack>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__16__ctor_m755435C46EA0D95CE762DE2FA8F1CCFF2DE4CB41 (U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator Enemy::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_Die_mEF1039C11887CBE900B37AD24F396FFA3077AD5F (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Enemy::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_Attack_m10EAFAE25B015EF0CB8A75EDC10847B47B761CB1 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator EnvironmentFixe::BoxEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnvironmentFixe_BoxEnabled_m96CD117E9EB2A6D818790EB2DCE53987F5A97C4C (EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void EnvironmentFixe/<BoxEnabled>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBoxEnabledU3Ed__4__ctor_mB01EF1B44D0EE35F32F9F14684B3C43D1BC58853 (U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Inventory::AddScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_AddScore_m124C920C74058AAA871220D3E138934AB46DE67F (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method);
// System.Void Inventory::UpdateTextUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_UpdateTextUI_mA830097AEFEF04922B33AADFCFBD476109E114E9 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method);
// System.Void PauseMenu::UpdateTextUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_UpdateTextUI_m028B75665F2840D9C93BD71BF0FE840A7E00F33F (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void Data::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data_SaveData_mAD33D4B74F5903386D259EDEC3005729F32653F8 (Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * __this, const RuntimeMethod* method);
// System.Void Game::ButtonStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_ButtonStart_mF53B2FA2AE8AA3C7FB814210F04DB4AE192C9920 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Game::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_SaveData_mBBFB20C67C03CA67D6099E94C59AADDE8D7AA441 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Void PlayerMovement::StopPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_StopPlayer_m81EFFF7AB6DCA5A83E80B8C33C345ED3484574CB (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// System.Void CameraWaypoint::StopVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraWaypoint_StopVelocity_m9CFAAF025B3C9ED60ADB39B62C1DB38CFDDC339D (CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * __this, const RuntimeMethod* method);
// System.Void Game::RecupData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_RecupData_m6A4634452DE59BAB90CA16CB71A3E4B171199A53 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Void Game::launchSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_launchSpeed_m2D0F4F9C5405E83A2CB536A611A65081B6EE6A60 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Game::speedUpgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Game_speedUpgrade_m8A1453FB40A0A6CC953C3862462A4F97DAD8F30D (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Void Game/<speedUpgrade>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspeedUpgradeU3Ed__15__ctor_mA1BBB97C8639D2BA21235AAAA7F33780E32200BD (U3CspeedUpgradeU3Ed__15_tBA27EF2D54484307173E3AAA7DBEC841446B6BAC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Collections.IEnumerator GameOverManager::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameOverManager_Wait_m2038D1BDF0A0461E88902D9E6E69D1A9E5A312C8 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method);
// System.Void GameOverManager/<Wait>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__10__ctor_mA8F25107AA8378C18F7300007CD2714CB312EBCE (U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void Game::GameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_GameStart_mC9EE34FC7776F3871EC996964D6925B054B90B91 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void PlayerEffects::Shield(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEffects_Shield_mD390BBFE6CB0495097A894C21F054B8D01403CE1 (PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___currentItem0, const RuntimeMethod* method);
// System.Void PlayerHealth::HealPlayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_HealPlayer_mDFBC1F0B42BE5BDACDF285E0A183DCCA49BD8805 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, int32_t ___amount0, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerEffects::InvinsiblePlayer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerEffects_InvinsiblePlayer_m1F391D3075EE656B9A38E7458F151F2441E40525 (PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * __this, float ___time0, const RuntimeMethod* method);
// System.Void PlayerEffects::AddSpeed(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEffects_AddSpeed_mB0621718F344ECF271D861DE9CE731F294CB167B (PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * __this, int32_t ___speedGiven0, float ___speedDuration1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void Data::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data_LoadData_m4F0DE254D779759D329ABA856B10409D84B766F5 (Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * __this, const RuntimeMethod* method);
// System.Void MainMenu::UpdateInventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_UpdateInventory_mB096F0E4B39E299D7400CD823812FCA8AE86B816 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void MissionsManager::NotifOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionsManager_NotifOpen_m35B350176863EBB548C93A723FC2C69FB58E9215 (MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void Game::GameStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_GameStop_mA3A256ADB1EBABB5D2371C3844A50B56B4784073 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator PauseMenu::CountDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PauseMenu_CountDown_mBC8C7507006EC9F93A1B022733B359C60208BF87 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void PauseMenu/<CountDown>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountDownU3Ed__21__ctor_m03DFADA18B39B994B1C9B383B18135A185A42BF1 (U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void PauseMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Resume_m256AFDD68DF9851B6D716189F709ED93D45C3717 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void PauseMenu::Paused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Paused_mCC5BA9CC0F079064E523735BC3C941E053701B66 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void Inventory::AddCoins(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_AddCoins_m9F73B0F1B57DEDEE4775CF62AB38EF7A3DBF4E3A (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, int32_t ___count0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void PickUpItem::TakeItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUpItem_TakeItem_m272B86ED21F9C7BAD477779D423A02E1E71D1C4E (PickUpItem_tD66C6424CCD1B9F24A458174FE2D94E094AB8F20 * __this, const RuntimeMethod* method);
// System.Void Inventory::ConsumeItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_ConsumeItem_m6D45FE77D89778F760E7722C5F9417897A4B2662 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___currentItem0, const RuntimeMethod* method);
// System.Void PlayerEffects/<InvinsiblePlayer>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvinsiblePlayerU3Ed__5__ctor_m039F699269F3D257CF79851F16244FA59ABA6278 (U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerEffects::RemoveSpeed(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerEffects_RemoveSpeed_mAAB2CAC868DDE12C0B2E6CF353336B9FBE89F406 (PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * __this, int32_t ___speedGiven0, float ___speedDuration1, const RuntimeMethod* method);
// System.Void PlayerEffects/<RemoveSpeed>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRemoveSpeedU3Ed__7__ctor_mA17F7494229E7394E299DFDF7DAE700848205878 (U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerHealth::InvincibilityFlash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerHealth_InvincibilityFlash_m380A77358C6310FDD304EFE498FFB48CAAE6EA00 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerHealth::HandleInvincibilityDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerHealth_HandleInvincibilityDelay_m164E6D50C83D8EB27AEEA51CA7499ADAA9BD5229 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method);
// System.Void PlayerHealth::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_Die_mBF97B09DFB17C4BBA27719DD2FFA1F4221E8CAB3 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method);
// System.Void GameOverManager::OnPlayerDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_OnPlayerDeath_m6C1D683DDBB8E9EBE4EFBF6E2FB21BC75A96C323 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method);
// System.Void Inventory::SaveScoreMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_SaveScoreMax_m3BFE29FF6F048F3CACAC2C4BB9580381331CAB78 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method);
// System.Void PlayerHealth/<InvincibilityFlash>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvincibilityFlashU3Ed__14__ctor_mCFDAD41304609DE57E8E610DD46FAEFDE4C15351 (U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void PlayerHealth/<HandleInvincibilityDelay>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleInvincibilityDelayU3Ed__15__ctor_m8D415DB4D8E04D9E8E6651B43C5488D6F30CF773 (U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void PlayerMovement::Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Movement_m429843BB8B4AC7152E1FBD70D59D217BA170F047 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2_Normalize_m0F1341493AD5F0B7DA4D504A44F52A1E2FFCCEC3 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerMovement::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMovement_Attack_m0C291651FC94C3D2DD516020F028929021FFE6C5 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// System.Void PlayerMovement/<Attack>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__20__ctor_mE31074A1A252000C42CA8BF9A51FEAEDD2AB04F9 (U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Resolution[] UnityEngine.Screen::get_resolutions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* Screen_get_resolutions_mA2968FF5FA4EA6A6AE76019C47338824E8610A81 (const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.Resolution,UnityEngine.Resolution>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCD4D2D783DA9CF0C49139966793A197A32A32CF6 (Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCD4D2D783DA9CF0C49139966793A197A32A32CF6_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<UnityEngine.Resolution,UnityEngine.Resolution>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_m8B1E831C9F5E9F4B3CBEE152BD1E9481DE416E64 (RuntimeObject* ___source0, Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D *, const RuntimeMethod*))Enumerable_Select_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_m8B1E831C9F5E9F4B3CBEE152BD1E9481DE416E64_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Distinct<UnityEngine.Resolution>(System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Distinct_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_mDF48AC0F9CCD59EC8A90A0487D0809114C23A08D (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Distinct_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_mDF48AC0F9CCD59EC8A90A0487D0809114C23A08D_gshared)(___source0, method);
}
// !!0[] System.Linq.Enumerable::ToArray<UnityEngine.Resolution>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* Enumerable_ToArray_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_m6CF991EAD04CB7348A8F26573B6E4C06AB5775CA (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_m6CF991EAD04CB7348A8F26573B6E4C06AB5775CA_gshared)(___source0, method);
}
// System.Void UnityEngine.UI.Dropdown::ClearOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_ClearOptions_m7F59A8B054698715921D2B0E37EB1808BE53C23C (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 UnityEngine.Resolution::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_width_mDD9DCC89D65057B64C413AF15BEE2E37E9892065 (Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Resolution::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_height_mB90F24337D7B96A288F8BE1D0F2F3599B785AD27 (Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Void UnityEngine.UI.Dropdown::AddOptions(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_AddOptions_m2375327887D29ACE452F157863186FC8D0AA4AF9 (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___options0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_mE4418D205D53F8A3AD23B957D1A8CD71489CB3B9 (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Dropdown::RefreshShownValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_RefreshShownValue_m1D58FF9265C31D85B65F52410EA8A8234F974FBA (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_fullScreen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_fullScreen_m51C070A017AAD9002C0B9ED5A6ADC76404F5DEDB (bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Screen::get_fullScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_fullScreen_mE83864F0C9C773C03D3FBBAD981159238CA3565A (const RuntimeMethod* method);
// System.Void UnityEngine.Screen::SetResolution(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_SetResolution_m1C17EB7EDF8CDA862338782353D53DFF6742DFC5 (int32_t ___width0, int32_t ___height1, bool ___fullscreen2, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_mAE4594C2D974BE67EC390E0FDECEDC59F17A12E0 (const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void Shop::ChangeButtonBuy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_ChangeButtonBuy_mA3EFF00D33F839745C0AD35234492300F5DE7F7D (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator ShowMissions::SwitchMission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShowMissions_SwitchMission_mFA470BDAF6D0BBB134CAAA83514DABE949FF27CD (ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC * __this, const RuntimeMethod* method);
// System.Void ShowMissions/<SwitchMission>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchMissionU3Ed__9__ctor_mFCF29EF63544826411936C553063BB17ABC6BE33 (U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Game::CreateSlide(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_CreateSlide_m946E054E110DC4344906AE005D3F9767B0AD2AD5 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positions0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void SettingsMenu/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m86DCF1AF43778A4436B12A94DD0A901F3CCC597A (U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Resolution::set_width(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolution_set_width_m089E61EBF4EB6542CC27970730864BD6326DA512 (Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Resolution::set_height(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resolution_set_height_m3A041FC30AD52D98A3EC579E9132C836EA61864E (Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * __this, int32_t ___value0, const RuntimeMethod* method);
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
// System.Void Barrier::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Barrier_Start_m7CDEA0D0C5C1E1EEA2B68FA72E6F50A00951C178 (Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 * __this, const RuntimeMethod* method)
{
	{
		// currentHealth = maxHealth;
		int32_t L_0 = __this->get_maxHealth_4();
		__this->set_currentHealth_5(L_0);
		// }
		return;
	}
}
// System.Void Barrier::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Barrier_TakeDamage_m26CAE599C91E6885DFE918DB0CC4116D6316A82E (Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	{
		// currentHealth -= damage;
		int32_t L_0 = __this->get_currentHealth_5();
		int32_t L_1 = ___damage0;
		__this->set_currentHealth_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// if (currentHealth <= 0)
		int32_t L_2 = __this->get_currentHealth_5();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// Die();
		Barrier_Die_m5D10A9FCB4ED4DD926A72C8B131F91E952CC6D5B(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Barrier::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Barrier_Die_m5D10A9FCB4ED4DD926A72C8B131F91E952CC6D5B (Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(toDestroy);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_toDestroy_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Barrier::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Barrier_OnTriggerEnter2D_m278C46142EF43C8492A6BF7A03ED37C119B7437A (Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m6F67FC96A586C55B18C8BBE1E30726D864DD7B77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E39FF2E25E7C626101199E5389D85A5D4DF1D47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA28578C4BD751A59CB652E54D2C863F3E5E5DA89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3BE9E69B1DEAE1BEC837138608798B40970397A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.CompareTag("Player"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_006c;
		}
	}
	{
		// if (PlayerMovement.instance.isAttack | PlayerHealth.instance.isInvincible)
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_3 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_3);
		bool L_4 = L_3->get_isAttack_8();
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_5 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_5);
		bool L_6 = L_5->get_isInvincible_9();
		if (!((int32_t)((int32_t)L_4|(int32_t)L_6)))
		{
			goto IL_004d;
		}
	}
	{
		// Inventory.instance.nbBarrier += 1;
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_7 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_nbBarrier_6();
		NullCheck(L_8);
		L_8->set_nbBarrier_6(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		// animator.SetTrigger("Crach");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_10 = __this->get_animator_8();
		NullCheck(L_10);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_10, _stringLiteralE3BE9E69B1DEAE1BEC837138608798B40970397A, /*hidden argument*/NULL);
		// }
		goto IL_005e;
	}

IL_004d:
	{
		// PlayerHealth playerHealth = collision.transform.GetComponent<PlayerHealth>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_11 = ___collision0;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_13;
		L_13 = Component_GetComponent_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m6F67FC96A586C55B18C8BBE1E30726D864DD7B77(L_12, /*hidden argument*/Component_GetComponent_TisPlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_m6F67FC96A586C55B18C8BBE1E30726D864DD7B77_RuntimeMethod_var);
		// playerHealth.TakeDamage(1);
		NullCheck(L_13);
		PlayerHealth_TakeDamage_m21F4EA70549D145406E078F0543A934DE498FDB7(L_13, 1, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// StartCoroutine(BoxEnabled());
		RuntimeObject* L_14;
		L_14 = Barrier_BoxEnabled_m0BD534ABE1795F5A7D402C7421E4DECBB9A6B253(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_15;
		L_15 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_14, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006c:
	{
		// else if (collision.transform.CompareTag("BoxSword") && PlayerMovement.instance.isAttack)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = ___collision0;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		bool L_18;
		L_18 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_17, _stringLiteralA28578C4BD751A59CB652E54D2C863F3E5E5DA89, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_19 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_19);
		bool L_20 = L_19->get_isAttack_8();
		if (!L_20)
		{
			goto IL_00ad;
		}
	}
	{
		// Inventory.instance.nbBarrier += 1;
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_21 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_nbBarrier_6();
		NullCheck(L_22);
		L_22->set_nbBarrier_6(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
		// animator.SetTrigger("Crach");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_24 = __this->get_animator_8();
		NullCheck(L_24);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_24, _stringLiteralE3BE9E69B1DEAE1BEC837138608798B40970397A, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00ad:
	{
		// else if (collision.CompareTag("GroundCheck"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_25 = ___collision0;
		NullCheck(L_25);
		bool L_26;
		L_26 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_25, _stringLiteral7E39FF2E25E7C626101199E5389D85A5D4DF1D47, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00c0;
		}
	}
	{
		// Die();
		Barrier_Die_m5D10A9FCB4ED4DD926A72C8B131F91E952CC6D5B(__this, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Barrier::BoxEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Barrier_BoxEnabled_m0BD534ABE1795F5A7D402C7421E4DECBB9A6B253 (Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15 * L_0 = (U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15 *)il2cpp_codegen_object_new(U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15_il2cpp_TypeInfo_var);
		U3CBoxEnabledU3Ed__9__ctor_mDFE8170626C8C5F14FA5C3A8C7B8E49F30BBA5AE(L_0, 0, /*hidden argument*/NULL);
		U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Barrier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Barrier__ctor_mEC430D5322066CEC8172E4C828D8F027B0E1E5B4 (Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 * __this, const RuntimeMethod* method)
{
	{
		// public int maxHealth = 1;
		__this->set_maxHealth_4(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CameraFollow::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Awake_m7A675F19E7BD4B9051D3CA29DA6D35A53D7FDFD5 (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral177728170BF726618EB96197A47059A19DD56F1A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * L_0 = ((CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_il2cpp_TypeInfo_var))->get_instance_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarning("Il y a plus d'une instance de CameraFollow dans la scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral177728170BF726618EB96197A47059A19DD56F1A, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0018:
	{
		// instance = this;
		((CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_il2cpp_TypeInfo_var))->set_instance_9(__this);
		// }
		return;
	}
}
// System.Void CameraFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Update_m9762CC5B7A2D28B7B8116BA8DE2342AFB654AB08 (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerMovement.instance.transform.position.x>=-35 && PlayerMovement.instance.transform.position.x<=35)
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_0 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		if ((!(((float)L_3) >= ((float)(-35.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_4 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		if ((!(((float)L_7) <= ((float)(35.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		// posOffset.x = PlayerMovement.instance.transform.position.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_posOffset_6();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_9 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		L_8->set_x_2(L_12);
	}

IL_0055:
	{
		// if (PlayerMovement.instance.transform.position.x == anPosPlayer.x && PlayerMovement.instance.transform.position.x == transform.position.x)
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_13 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = __this->get_address_of_anPosPlayer_7();
		float L_18 = L_17->get_x_2();
		if ((!(((float)L_16) == ((float)L_18))))
		{
			goto IL_00de;
		}
	}
	{
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_19 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_x_2();
		if ((!(((float)L_22) == ((float)L_25))))
		{
			goto IL_00de;
		}
	}
	{
		// transform.position = Vector3.SmoothDamp(transform.position, cameraWaypoint.transform.position + posOffset, ref velocity, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_cameraWaypoint_4();
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = __this->get_posOffset_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_31, L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_34 = __this->get_address_of_velocity_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_28, L_33, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_34, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_26, L_35, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00de:
	{
		// transform.position = Vector3.SmoothDamp(transform.position, cameraWaypoint.transform.position + posOffset, ref velocity, timeOffset);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = __this->get_cameraWaypoint_4();
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_40, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = __this->get_posOffset_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_41, L_42, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_44 = __this->get_address_of_velocity_8();
		float L_45 = __this->get_timeOffset_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_38, L_43, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_44, L_45, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_36, L_46, /*hidden argument*/NULL);
		// anPosPlayer.x = PlayerMovement.instance.transform.position.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_47 = __this->get_address_of_anPosPlayer_7();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_48 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		float L_51 = L_50.get_x_2();
		L_47->set_x_2(L_51);
		// }
		return;
	}
}
// System.Void CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m29F88CCFD2ED12A7BCC75A9BBA892CEF179C83DE (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CameraWaypoint::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraWaypoint_Awake_m2D5755ED34C6C705795EA69C8FE9DA56B86AE9E6 (CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6A62E96AA94866CBAE53EA96E93CD3D4FE29A30);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * L_0 = ((CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_StaticFields*)il2cpp_codegen_static_fields_for(CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_il2cpp_TypeInfo_var))->get_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarning("Il y a plus d'une instance de CameraWaypoint dans la scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralA6A62E96AA94866CBAE53EA96E93CD3D4FE29A30, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0018:
	{
		// instance = this;
		((CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_StaticFields*)il2cpp_codegen_static_fields_for(CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_il2cpp_TypeInfo_var))->set_instance_7(__this);
		// }
		return;
	}
}
// System.Void CameraWaypoint::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraWaypoint_Start_mDCDBEFDCB4E10C4EF4F24478EB799D3AC4CF120C (CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// speed = PlayerMovement.instance.speed;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_0 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_0);
		float L_1 = L_0->get_speed_4();
		__this->set_speed_4(L_1);
		// }
		return;
	}
}
// System.Void CameraWaypoint::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraWaypoint_Update_m9F86C97B3FACC2436FB7C9F4E7E50476E7E0D82D (CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 targetVelocity = new Vector2(0, speed);
		float L_0 = __this->get_speed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (0.0f), L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// rb.velocity = Vector3.SmoothDamp(rb.velocity, targetVelocity, ref velocity, .05f);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3 = __this->get_rb_5();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_4 = __this->get_rb_5();
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_velocity_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_6, L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_8, (0.0500000007f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_3, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraWaypoint::StopVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraWaypoint_StopVelocity_m9CFAAF025B3C9ED60ADB39B62C1DB38CFDDC339D (CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * __this, const RuntimeMethod* method)
{
	{
		// rb.velocity = Vector3.zero;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rb_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraWaypoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraWaypoint__ctor_mE453C7EAF15DCD9AB8365DAB77AF3A09FF565BB4 (CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * __this, const RuntimeMethod* method)
{
	{
		// private Vector3 velocity = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_velocity_6(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Credits::LoadMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credits_LoadMainMenu_m3F575327CE6064EB74F25A3F87433622AB40ED52 (Credits_t6B2B82C0D386F61EDEF1EDBA08962FA05717D04C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Credits::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credits_Update_mF9B26C086EDFCC0D382668A741364B2544BDB67A (Credits_t6B2B82C0D386F61EDEF1EDBA08962FA05717D04C * __this, const RuntimeMethod* method)
{
	{
		// if(Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// LoadMainMenu();
		Credits_LoadMainMenu_m3F575327CE6064EB74F25A3F87433622AB40ED52(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void Credits::Escape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credits_Escape_mB1229B990426327518C8083C0E712EE40B3A88A5 (Credits_t6B2B82C0D386F61EDEF1EDBA08962FA05717D04C * __this, const RuntimeMethod* method)
{
	{
		// LoadMainMenu();
		Credits_LoadMainMenu_m3F575327CE6064EB74F25A3F87433622AB40ED52(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Credits::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credits__ctor_m303F0FF4F6858911FFF3C8A6F1BDCA780D273A35 (Credits_t6B2B82C0D386F61EDEF1EDBA08962FA05717D04C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Data::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data_Awake_m00362F742FCA5D3C8945AC378B0B8AFE875D8D70 (Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF5B195D6E6A4578E9D4C03A81CC5ACEEF63D102);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_0 = ((Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14_StaticFields*)il2cpp_codegen_static_fields_for(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14_il2cpp_TypeInfo_var))->get_instance_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarning("Il y a plus d'une instance de Data dans la scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralBF5B195D6E6A4578E9D4C03A81CC5ACEEF63D102, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0018:
	{
		// instance = this;
		((Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14_StaticFields*)il2cpp_codegen_static_fields_for(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14_il2cpp_TypeInfo_var))->set_instance_16(__this);
		// }
		return;
	}
}
// System.Void Data::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data_SaveData_mAD33D4B74F5903386D259EDEC3005729F32653F8 (Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral173E19F3678E4DDB59A8D2E96CC67A2FCE17710A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64C2EEA7AD942BE4C91275A994A7265AAB9CE928);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE87B20040C53AD882291A8EE147D3F5657339292);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE890FA6E82318468C5436B177010E73AC414960E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD1ADADB9B841D6B3DD2B5D4C744DA2621CCBFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF684E59C356B60C84855C75DFA566ADC9BFEED33);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("coinsCount", coins);
		int32_t L_0 = __this->get_coins_4();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral64C2EEA7AD942BE4C91275A994A7265AAB9CE928, L_0, /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("hightScore", hightScore);
		float L_1 = __this->get_hightScore_5();
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteralE890FA6E82318468C5436B177010E73AC414960E, L_1, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("idSkin", idSkin);
		int32_t L_2 = __this->get_idSkin_11();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralEFD1ADADB9B841D6B3DD2B5D4C744DA2621CCBFA, L_2, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("idScene", idScene);
		int32_t L_3 = __this->get_idScene_12();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralF684E59C356B60C84855C75DFA566ADC9BFEED33, L_3, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("idTrails", idTrails);
		int32_t L_4 = __this->get_idTrails_13();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralE87B20040C53AD882291A8EE147D3F5657339292, L_4, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("idmission1InProgress", mission1InProgress.id);
		Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * L_5 = __this->get_mission1InProgress_14();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_id_4();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral173E19F3678E4DDB59A8D2E96CC67A2FCE17710A, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Data::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data_LoadData_m4F0DE254D779759D329ABA856B10409D84B766F5 (Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral173E19F3678E4DDB59A8D2E96CC67A2FCE17710A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64C2EEA7AD942BE4C91275A994A7265AAB9CE928);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE87B20040C53AD882291A8EE147D3F5657339292);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE890FA6E82318468C5436B177010E73AC414960E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD1ADADB9B841D6B3DD2B5D4C744DA2621CCBFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF684E59C356B60C84855C75DFA566ADC9BFEED33);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// coins = PlayerPrefs.GetInt("coinsCount", 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral64C2EEA7AD942BE4C91275A994A7265AAB9CE928, 0, /*hidden argument*/NULL);
		__this->set_coins_4(L_0);
		// hightScore = PlayerPrefs.GetFloat("hightScore", 0);
		float L_1;
		L_1 = PlayerPrefs_GetFloat_mCF1F69BE283197090AB08158CD05995136A1EBCF(_stringLiteralE890FA6E82318468C5436B177010E73AC414960E, (0.0f), /*hidden argument*/NULL);
		__this->set_hightScore_5(L_1);
		// idSkin = PlayerPrefs.GetInt("idSkin", 1);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralEFD1ADADB9B841D6B3DD2B5D4C744DA2621CCBFA, 1, /*hidden argument*/NULL);
		__this->set_idSkin_11(L_2);
		// idScene = PlayerPrefs.GetInt("idScene", 1);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralF684E59C356B60C84855C75DFA566ADC9BFEED33, 1, /*hidden argument*/NULL);
		__this->set_idScene_12(L_3);
		// idTrails = PlayerPrefs.GetInt("idTrails", 1);
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralE87B20040C53AD882291A8EE147D3F5657339292, 1, /*hidden argument*/NULL);
		__this->set_idTrails_13(L_4);
		// int id = PlayerPrefs.GetInt("idmission1InProgress", 1);
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral173E19F3678E4DDB59A8D2E96CC67A2FCE17710A, 1, /*hidden argument*/NULL);
		V_0 = L_5;
		// bool trouve = false;
		V_1 = (bool)0;
		// int index = 0;
		V_2 = 0;
		goto IL_0081;
	}

IL_006b:
	{
		// if (allMissions[index].id == id)
		MissionsU5BU5D_t62BD9A586F08A2DA7A71B62BDBC6FCF5E7D71A49* L_6 = __this->get_allMissions_15();
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		int32_t L_10 = L_9->get_id_4();
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_007d;
		}
	}
	{
		// trouve = true;
		V_1 = (bool)1;
	}

IL_007d:
	{
		// index += 1;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0081:
	{
		// while (! trouve && index < allMissions.Length - 1)
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_14 = V_2;
		MissionsU5BU5D_t62BD9A586F08A2DA7A71B62BDBC6FCF5E7D71A49* L_15 = __this->get_allMissions_15();
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))), (int32_t)1)))))
		{
			goto IL_006b;
		}
	}

IL_0091:
	{
		// if (trouve)
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_00a3;
		}
	}
	{
		// mission1InProgress = allMissions[index];
		MissionsU5BU5D_t62BD9A586F08A2DA7A71B62BDBC6FCF5E7D71A49* L_17 = __this->get_allMissions_15();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		__this->set_mission1InProgress_14(L_20);
		// }
		return;
	}

IL_00a3:
	{
		// mission1InProgress = allMissions[0];
		MissionsU5BU5D_t62BD9A586F08A2DA7A71B62BDBC6FCF5E7D71A49* L_21 = __this->get_allMissions_15();
		NullCheck(L_21);
		int32_t L_22 = 0;
		Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		__this->set_mission1InProgress_14(L_23);
		// }
		return;
	}
}
// System.Void Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data__ctor_m7CB7DB28E1ADF23A472A1CF3780E2A8252444E91 (Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void DontDestroyOnLoad::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DontDestroyOnLoad_Awake_m23067E209D35E6F90433C59D060BA8C7E2010EDF (DontDestroyOnLoad_tA639E7371DDCB4CAA1153085E9C678B55128341D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var element in objects)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_objects_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach (var element in objects)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// DontDestroyOnLoad(element);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0017:
	{
		// foreach (var element in objects)
		int32_t L_6 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// SceneManager.LoadScene("MainMenu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DontDestroyOnLoad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DontDestroyOnLoad__ctor_m7A04CCF90D5AEE33F54BE3FD243B58DDD6610ECC (DontDestroyOnLoad_tA639E7371DDCB4CAA1153085E9C678B55128341D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Enemy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Awake_mF268033197059561A4A0BC3E5F6B83B50D29C861 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_StaticFields*)il2cpp_codegen_static_fields_for(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_il2cpp_TypeInfo_var))->set_instance_15(__this);
		// }
		return;
	}
}
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentHealth = maxHealth;
		int32_t L_0 = __this->get_maxHealth_4();
		__this->set_currentHealth_5(L_0);
		// target = PlayerMovement.instance.transform;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		__this->set_target_13(L_2);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Game.instance.gameIsStart && canTranslate)
		Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * L_0 = ((Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields*)il2cpp_codegen_static_fields_for(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var))->get_instance_10();
		NullCheck(L_0);
		bool L_1 = L_0->get_gameIsStart_8();
		if (!L_1)
		{
			goto IL_009f;
		}
	}
	{
		bool L_2 = __this->get_canTranslate_14();
		if (!L_2)
		{
			goto IL_009f;
		}
	}
	{
		// Vector3 dir = target.position - transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_target_13();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// transform.Translate(dir.normalized * speed * Time.deltaTime, Space.World);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_10 = __this->get_speed_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_Translate_mFB58CBF3FA00BD0EE09EC67457608F62564D0DDE(L_8, L_13, 0, /*hidden argument*/NULL);
		// if (transform.position.y <= PlayerMovement.instance.transform.position.y - 1)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_y_3();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_17 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_y_3();
		if ((!(((float)L_16) <= ((float)((float)il2cpp_codegen_subtract((float)L_20, (float)(1.0f)))))))
		{
			goto IL_009f;
		}
	}
	{
		// target = PlayerMovement.instance.waypointsRight.transform;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_21 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = L_21->get_waypointsRight_12();
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		__this->set_target_13(L_23);
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Enemy::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_Die_mEF1039C11887CBE900B37AD24F396FFA3077AD5F (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D * L_0 = (U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D *)il2cpp_codegen_object_new(U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D_il2cpp_TypeInfo_var);
		U3CDieU3Ed__15__ctor_m0A4E027F772DE584151251BDD894D647B886E215(L_0, 0, /*hidden argument*/NULL);
		U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Enemy::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_Attack_m10EAFAE25B015EF0CB8A75EDC10847B47B761CB1 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9 * L_0 = (U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9 *)il2cpp_codegen_object_new(U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9_il2cpp_TypeInfo_var);
		U3CAttackU3Ed__16__ctor_m755435C46EA0D95CE762DE2FA8F1CCFF2DE4CB41(L_0, 0, /*hidden argument*/NULL);
		U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Enemy::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnTriggerEnter2D_mDECB4702894034560FBA7606CDC45A5B12EB0B38 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F10C8F01816F23DEE001DE0E3A831AAB792D49C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F94F4742528BDF9EB11E79D6B1AA693BB9912DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E39FF2E25E7C626101199E5389D85A5D4DF1D47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA28578C4BD751A59CB652E54D2C863F3E5E5DA89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD48EC65100657414AA8C3D342AAFEA5E0574652E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.CompareTag("GroundCheck"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteral7E39FF2E25E7C626101199E5389D85A5D4DF1D47, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Destroy(toDestroy);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_toDestroy_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// if (collision.transform.CompareTag("Player"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_4, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	{
		// if (PlayerMovement.instance.isAttack | PlayerEffects.instance.currentLifeShield !=0 | PlayerHealth.instance.isInvincible)
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_6 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_6);
		bool L_7 = L_6->get_isAttack_8();
		PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * L_8 = ((PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4_StaticFields*)il2cpp_codegen_static_fields_for(PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_currentLifeShield_5();
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_10 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_10);
		bool L_11 = L_10->get_isInvincible_9();
		if (!((int32_t)((int32_t)((int32_t)((int32_t)L_7|(int32_t)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0)))|(int32_t)L_11)))
		{
			goto IL_005d;
		}
	}
	{
		// StartCoroutine(Die());
		RuntimeObject* L_12;
		L_12 = Enemy_Die_mEF1039C11887CBE900B37AD24F396FFA3077AD5F(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_13;
		L_13 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005d:
	{
		// StartCoroutine(Attack());
		RuntimeObject* L_14;
		L_14 = Enemy_Attack_m10EAFAE25B015EF0CB8A75EDC10847B47B761CB1(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_15;
		L_15 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_14, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006b:
	{
		// else if (collision.transform.CompareTag("BoxSword") && PlayerMovement.instance.isAttack)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = ___collision0;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		bool L_18;
		L_18 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_17, _stringLiteralA28578C4BD751A59CB652E54D2C863F3E5E5DA89, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0097;
		}
	}
	{
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_19 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_19);
		bool L_20 = L_19->get_isAttack_8();
		if (!L_20)
		{
			goto IL_0097;
		}
	}
	{
		// StartCoroutine(Die());
		RuntimeObject* L_21;
		L_21 = Enemy_Die_mEF1039C11887CBE900B37AD24F396FFA3077AD5F(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_22;
		L_22 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_21, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0097:
	{
		// else if (collision.transform.CompareTag("Barrier") | collision.transform.CompareTag("Rock") | collision.transform.CompareTag("Tree"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_23 = ___collision0;
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		bool L_25;
		L_25 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_24, _stringLiteralD48EC65100657414AA8C3D342AAFEA5E0574652E, /*hidden argument*/NULL);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_26 = ___collision0;
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		bool L_28;
		L_28 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_27, _stringLiteral0F10C8F01816F23DEE001DE0E3A831AAB792D49C, /*hidden argument*/NULL);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_29 = ___collision0;
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		bool L_31;
		L_31 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_30, _stringLiteral2F94F4742528BDF9EB11E79D6B1AA693BB9912DF, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)((int32_t)((int32_t)L_25|(int32_t)L_28))|(int32_t)L_31)))
		{
			goto IL_00d2;
		}
	}
	{
		// canTranslate = false;
		__this->set_canTranslate_14((bool)0);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// public int maxHealth = 1;
		__this->set_maxHealth_4(1);
		// public int damageOnCollision = 1;
		__this->set_damageOnCollision_10(1);
		// private bool canTranslate = true;
		__this->set_canTranslate_14((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EnvironmentFixe::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentFixe_Update_m09D8FAD7A698DC6A9960273DEBA575C87F858428 (EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.position.y < PlayerMovement.instance.transform.position.y - 0.5f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_3 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		if ((!(((float)L_2) < ((float)((float)il2cpp_codegen_subtract((float)L_6, (float)(0.5f)))))))
		{
			goto IL_003a;
		}
	}
	{
		// StartCoroutine(BoxEnabled());
		RuntimeObject* L_7;
		L_7 = EnvironmentFixe_BoxEnabled_m96CD117E9EB2A6D818790EB2DCE53987F5A97C4C(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_8;
		L_8 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003a:
	{
		// box.enabled = true;
		PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * L_9 = __this->get_box_5();
		NullCheck(L_9);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_9, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EnvironmentFixe::BoxEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnvironmentFixe_BoxEnabled_m96CD117E9EB2A6D818790EB2DCE53987F5A97C4C (EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9 * L_0 = (U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9 *)il2cpp_codegen_object_new(U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9_il2cpp_TypeInfo_var);
		U3CBoxEnabledU3Ed__4__ctor_mB01EF1B44D0EE35F32F9F14684B3C43D1BC58853(L_0, 0, /*hidden argument*/NULL);
		U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void EnvironmentFixe::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentFixe_OnTriggerEnter2D_m55E1AB82BD38C8793C1FC5492429AD7D0805861A (EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E39FF2E25E7C626101199E5389D85A5D4DF1D47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3BE9E69B1DEAE1BEC837138608798B40970397A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.CompareTag("GroundCheck"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteral7E39FF2E25E7C626101199E5389D85A5D4DF1D47, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(toDestroy);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_toDestroy_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0019:
	{
		// else if (collision.transform.CompareTag("Player"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_4, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// animator.SetTrigger("Crach");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get_animator_6();
		NullCheck(L_6);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_6, _stringLiteralE3BE9E69B1DEAE1BEC837138608798B40970397A, /*hidden argument*/NULL);
		// PlayerHealth.instance.TakeDamage(1);
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_7 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_7);
		PlayerHealth_TakeDamage_m21F4EA70549D145406E078F0543A934DE498FDB7(L_7, 1, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void EnvironmentFixe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentFixe__ctor_m928347954452BC17764568CD96CA365E143EA4B7 (EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Game::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Awake_m0509A243FBE2D04DBE4862E36A63904A5739831B (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622380E561E513C71205FB570C11DE428021CA0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * L_0 = ((Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields*)il2cpp_codegen_static_fields_for(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var))->get_instance_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarning("Il y a plus d'une instance de Game dans la scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral622380E561E513C71205FB570C11DE428021CA0F, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0018:
	{
		// instance = this;
		((Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields*)il2cpp_codegen_static_fields_for(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var))->set_instance_10(__this);
		// }
		return;
	}
}
// System.Void Game::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Update_m792C23BCA9FB628B59F1C5881F3DACA03171265A (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameIsStart)
		bool L_0 = __this->get_gameIsStart_8();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// Inventory.instance.AddScore();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_1 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_1);
		Inventory_AddScore_m124C920C74058AAA871220D3E138934AB46DE67F(L_1, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void Game::RecupData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_RecupData_m6A4634452DE59BAB90CA16CB71A3E4B171199A53 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Inventory.instance.coinsCountTotal = data.coins;
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_0 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_1 = __this->get_data_4();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_coins_4();
		NullCheck(L_0);
		L_0->set_coinsCountTotal_11(L_2);
		// Inventory.instance.scoreMax = data.hightScore;
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_3 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_4 = __this->get_data_4();
		NullCheck(L_4);
		float L_5 = L_4->get_hightScore_5();
		NullCheck(L_3);
		L_3->set_scoreMax_9(L_5);
		// Inventory.instance.UpdateTextUI();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_6 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_6);
		Inventory_UpdateTextUI_mA830097AEFEF04922B33AADFCFBD476109E114E9(L_6, /*hidden argument*/NULL);
		// PauseMenu.instance.UpdateTextUI();
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * L_7 = ((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->get_instance_20();
		NullCheck(L_7);
		PauseMenu_UpdateTextUI_m028B75665F2840D9C93BD71BF0FE840A7E00F33F(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Game::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_SaveData_mBBFB20C67C03CA67D6099E94C59AADDE8D7AA441 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// data.coins = Inventory.instance.coinsCountTotal;
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_0 = __this->get_data_4();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_1 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_coinsCountTotal_11();
		NullCheck(L_0);
		L_0->set_coins_4(L_2);
		// data.hightScore = Inventory.instance.scoreMax;
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_3 = __this->get_data_4();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_4 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_4);
		float L_5 = L_4->get_scoreMax_9();
		NullCheck(L_3);
		L_3->set_hightScore_5(L_5);
		// data.nbBarrier += Inventory.instance.nbBarrier;
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_6 = __this->get_data_4();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_nbBarrier_8();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_9 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_nbBarrier_6();
		NullCheck(L_7);
		L_7->set_nbBarrier_8(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_10)));
		// data.nbBonus += Inventory.instance.nbBonus;
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_11 = __this->get_data_4();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_12 = L_11;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_nbBonus_9();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_14 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_nbBonus_7();
		NullCheck(L_12);
		L_12->set_nbBonus_9(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_15)));
		// data.nbKillMoob += Inventory.instance.nbKillMoob;
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_16 = __this->get_data_4();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_nbKillMoob_7();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_19 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_19);
		int32_t L_20 = L_19->get_nbKillMoob_5();
		NullCheck(L_17);
		L_17->set_nbKillMoob_7(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_20)));
		// data.nbDie += Inventory.instance.nbDie;
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_21 = __this->get_data_4();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_nbDie_10();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_24 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_nbDie_4();
		NullCheck(L_22);
		L_22->set_nbDie_10(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_25)));
		// data.SaveData();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_26 = __this->get_data_4();
		NullCheck(L_26);
		Data_SaveData_mAD33D4B74F5903386D259EDEC3005729F32653F8(L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Game::GameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_GameStart_mC9EE34FC7776F3871EC996964D6925B054B90B91 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	{
		// if (gameIsStart)
		bool L_0 = __this->get_gameIsStart_8();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// ButtonStart();
		Game_ButtonStart_mF53B2FA2AE8AA3C7FB814210F04DB4AE192C9920(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_000f:
	{
		// startButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_startButton_6();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// gameIsStart = true;
		__this->set_gameIsStart_8((bool)1);
		// }
		return;
	}
}
// System.Void Game::GameStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_GameStop_mA3A256ADB1EBABB5D2371C3844A50B56B4784073 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// startButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_startButton_6();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// SaveData();
		Game_SaveData_mBBFB20C67C03CA67D6099E94C59AADDE8D7AA441(__this, /*hidden argument*/NULL);
		// PlayerMovement.instance.StopPlayer();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_1);
		PlayerMovement_StopPlayer_m81EFFF7AB6DCA5A83E80B8C33C345ED3484574CB(L_1, /*hidden argument*/NULL);
		// CameraWaypoint.instance.StopVelocity();
		CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * L_2 = ((CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_StaticFields*)il2cpp_codegen_static_fields_for(CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_2);
		CameraWaypoint_StopVelocity_m9CFAAF025B3C9ED60ADB39B62C1DB38CFDDC339D(L_2, /*hidden argument*/NULL);
		// CameraWaypoint.instance.enabled = false;
		CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * L_3 = ((CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_StaticFields*)il2cpp_codegen_static_fields_for(CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_3);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)0, /*hidden argument*/NULL);
		// PlayerMovement.instance.enabled = false;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_4 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_4);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Game::ButtonStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_ButtonStart_mF53B2FA2AE8AA3C7FB814210F04DB4AE192C9920 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD283071278C5CA19C7E2D9F2EC2D44D80A4EBBFF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameIsStart = true;
		__this->set_gameIsStart_8((bool)1);
		// RecupData();
		Game_RecupData_m6A4634452DE59BAB90CA16CB71A3E4B171199A53(__this, /*hidden argument*/NULL);
		// launchSpeed();
		Game_launchSpeed_m2D0F4F9C5405E83A2CB536A611A65081B6EE6A60(__this, /*hidden argument*/NULL);
		// PlayerMovement.instance.animator.SetTrigger("GameStart");
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_0 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = L_0->get_animator_10();
		NullCheck(L_1);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_1, _stringLiteralD283071278C5CA19C7E2D9F2EC2D44D80A4EBBFF, /*hidden argument*/NULL);
		// PlayerMovement.instance.enabled = true;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_2 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)1, /*hidden argument*/NULL);
		// CameraWaypoint.instance.enabled = true;
		CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * L_3 = ((CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_StaticFields*)il2cpp_codegen_static_fields_for(CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_3);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Game::launchSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_launchSpeed_m2D0F4F9C5405E83A2CB536A611A65081B6EE6A60 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	{
		// if (launchSpeedBool)
		bool L_0 = __this->get_launchSpeedBool_7();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// StartCoroutine(speedUpgrade());
		RuntimeObject* L_1;
		L_1 = Game_speedUpgrade_m8A1453FB40A0A6CC953C3862462A4F97DAD8F30D(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// launchSpeedBool = false;
		__this->set_launchSpeedBool_7((bool)0);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Game::speedUpgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Game_speedUpgrade_m8A1453FB40A0A6CC953C3862462A4F97DAD8F30D (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CspeedUpgradeU3Ed__15_tBA27EF2D54484307173E3AAA7DBEC841446B6BAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CspeedUpgradeU3Ed__15_tBA27EF2D54484307173E3AAA7DBEC841446B6BAC * L_0 = (U3CspeedUpgradeU3Ed__15_tBA27EF2D54484307173E3AAA7DBEC841446B6BAC *)il2cpp_codegen_object_new(U3CspeedUpgradeU3Ed__15_tBA27EF2D54484307173E3AAA7DBEC841446B6BAC_il2cpp_TypeInfo_var);
		U3CspeedUpgradeU3Ed__15__ctor_mA1BBB97C8639D2BA21235AAAA7F33780E32200BD(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Game::CreateSlide(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_CreateSlide_m946E054E110DC4344906AE005D3F9767B0AD2AD5 (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int antNbRandom = nbRandom;
		int32_t L_0 = __this->get_nbRandom_9();
		V_0 = L_0;
		goto IL_001d;
	}

IL_0009:
	{
		// nbRandom = Random.Range(0, slides.Length);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_slides_5();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		__this->set_nbRandom_9(L_2);
	}

IL_001d:
	{
		// while (antNbRandom == nbRandom)
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_nbRandom_9();
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0009;
		}
	}
	{
		// GameObject slide = (GameObject)Instantiate(slides[nbRandom], new Vector3(positions.x, positions.y + 24, -1f), Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get_slides_5();
		int32_t L_6 = __this->get_nbRandom_9();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___positions0;
		float L_10 = L_9.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___positions0;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), L_10, ((float)il2cpp_codegen_add((float)L_12, (float)(24.0f))), (-1.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_8, L_13, L_14, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Game::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game__ctor_m3A756F7AD7689FE1BB2C194589022EF7AB69966A (Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * __this, const RuntimeMethod* method)
{
	{
		// private bool launchSpeedBool = true;
		__this->set_launchSpeedBool_7((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameOverManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_Awake_m12A04D9BD33637FFEC2EDA4F8FEC347F1B142469 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB30CDD2243DD45B4B246BB6A2A74392B8C35CC5E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * L_0 = ((GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C_StaticFields*)il2cpp_codegen_static_fields_for(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C_il2cpp_TypeInfo_var))->get_instance_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarning("Il y a plus d'une instance de GameOverManager dans la scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralB30CDD2243DD45B4B246BB6A2A74392B8C35CC5E, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0018:
	{
		// instance = this;
		((GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C_StaticFields*)il2cpp_codegen_static_fields_for(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C_il2cpp_TypeInfo_var))->set_instance_11(__this);
		// }
		return;
	}
}
// System.Void GameOverManager::OnPlayerDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_OnPlayerDeath_m6C1D683DDBB8E9EBE4EFBF6E2FB21BC75A96C323 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD75D41C18D829FFA2798A164F222AD3C3A052445);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetTrigger("FadeIn");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_6();
		NullCheck(L_0);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteralD75D41C18D829FFA2798A164F222AD3C3A052445, /*hidden argument*/NULL);
		// StartCoroutine(Wait());
		RuntimeObject* L_1;
		L_1 = GameOverManager_Wait_m2038D1BDF0A0461E88902D9E6E69D1A9E5A312C8(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameOverManager::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameOverManager_Wait_m2038D1BDF0A0461E88902D9E6E69D1A9E5A312C8 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81 * L_0 = (U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81 *)il2cpp_codegen_object_new(U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81_il2cpp_TypeInfo_var);
		U3CWaitU3Ed__10__ctor_mA8F25107AA8378C18F7300007CD2714CB312EBCE(L_0, 0, /*hidden argument*/NULL);
		U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameOverManager::RetryButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_RetryButton_m5698E7BC91131DC92A9883C655911BC3B9B84361 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(L_1, /*hidden argument*/NULL);
		// Game.instance.GameStart();
		Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * L_2 = ((Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields*)il2cpp_codegen_static_fields_for(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var))->get_instance_10();
		NullCheck(L_2);
		Game_GameStart_mC9EE34FC7776F3871EC996964D6925B054B90B91(L_2, /*hidden argument*/NULL);
		// gameOverUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_gameOverUI_4();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverManager::MainMenuButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_MainMenuButton_m3822BCFA1C0967C97B063C686BE48D074E9D03FF (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverManager::QuitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_QuitButton_m935B633994213FF8E4598134AED7A6C686925551 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager__ctor_m52207DE1B4AFE3EB17B968DC034DF9CD126BE15B (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Inventory::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_Awake_m2040A4C75E81B9580543F04EFA2364F3F1B9EEE0 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C0B22C6448ED5AD4CA313D5F7ECCECD0A14C4C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_0 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarning("Il y a plus d'une instance de Inventory dans la scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral5C0B22C6448ED5AD4CA313D5F7ECCECD0A14C4C0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0018:
	{
		// instance = this;
		((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->set_instance_15(__this);
		// }
		return;
	}
}
// System.Void Inventory::ConsumeItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_ConsumeItem_m6D45FE77D89778F760E7722C5F9417897A4B2662 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___currentItem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentItem.hpGiven == 3 && currentItem.hpShield != 0)
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_0 = ___currentItem0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_hpGiven_9();
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0024;
		}
	}
	{
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_2 = ___currentItem0;
		NullCheck(L_2);
		float L_3 = L_2->get_hpShield_10();
		if ((((float)L_3) == ((float)(0.0f))))
		{
			goto IL_0024;
		}
	}
	{
		// playerEffects.Shield(currentItem);
		PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * L_4 = __this->get_playerEffects_14();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_5 = ___currentItem0;
		NullCheck(L_4);
		PlayerEffects_Shield_mD390BBFE6CB0495097A894C21F054B8D01403CE1(L_4, L_5, /*hidden argument*/NULL);
		// }
		goto IL_0034;
	}

IL_0024:
	{
		// PlayerHealth.instance.HealPlayer(currentItem.hpGiven);
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_6 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_instance_11();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_7 = ___currentItem0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_hpGiven_9();
		NullCheck(L_6);
		PlayerHealth_HealPlayer_mDFBC1F0B42BE5BDACDF285E0A183DCCA49BD8805(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// if (currentItem.timeInvinsible != 0)
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_9 = ___currentItem0;
		NullCheck(L_9);
		float L_10 = L_9->get_timeInvinsible_11();
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_0059;
		}
	}
	{
		// StartCoroutine(playerEffects.InvinsiblePlayer(currentItem.timeInvinsible));
		PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * L_11 = __this->get_playerEffects_14();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_12 = ___currentItem0;
		NullCheck(L_12);
		float L_13 = L_12->get_timeInvinsible_11();
		NullCheck(L_11);
		RuntimeObject* L_14;
		L_14 = PlayerEffects_InvinsiblePlayer_m1F391D3075EE656B9A38E7458F151F2441E40525(L_11, L_13, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_15;
		L_15 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_14, /*hidden argument*/NULL);
	}

IL_0059:
	{
		// playerEffects.AddSpeed(currentItem.speedGiven, currentItem.speedDuration);
		PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * L_16 = __this->get_playerEffects_14();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_17 = ___currentItem0;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_speedGiven_13();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_19 = ___currentItem0;
		NullCheck(L_19);
		float L_20 = L_19->get_speedDuration_14();
		NullCheck(L_16);
		PlayerEffects_AddSpeed_mB0621718F344ECF271D861DE9CE731F294CB167B(L_16, L_18, L_20, /*hidden argument*/NULL);
		// nbBonus += 1;
		int32_t L_21 = __this->get_nbBonus_7();
		__this->set_nbBonus_7(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Inventory::SaveScoreMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_SaveScoreMax_m3BFE29FF6F048F3CACAC2C4BB9580381331CAB78 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method)
{
	{
		// if (score > scoreMax)
		float L_0 = __this->get_score_8();
		float L_1 = __this->get_scoreMax_9();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_001a;
		}
	}
	{
		// scoreMax = score;
		float L_2 = __this->get_score_8();
		__this->set_scoreMax_9(L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Inventory::AddScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_AddScore_m124C920C74058AAA871220D3E138934AB46DE67F (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score =  Mathf.FloorToInt(CameraWaypoint.instance.transform.position.y);
		CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * L_0 = ((CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_StaticFields*)il2cpp_codegen_static_fields_for(CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		int32_t L_4;
		L_4 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_3, /*hidden argument*/NULL);
		__this->set_score_8(((float)((float)L_4)));
		// UpdateTextUI();
		Inventory_UpdateTextUI_mA830097AEFEF04922B33AADFCFBD476109E114E9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Inventory::AddCoins(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_AddCoins_m9F73B0F1B57DEDEE4775CF62AB38EF7A3DBF4E3A (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	{
		// coinsCountTotal += count;
		int32_t L_0 = __this->get_coinsCountTotal_11();
		int32_t L_1 = ___count0;
		__this->set_coinsCountTotal_11(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// coinsCount += count;
		int32_t L_2 = __this->get_coinsCount_10();
		int32_t L_3 = ___count0;
		__this->set_coinsCount_10(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		// UpdateTextUI();
		Inventory_UpdateTextUI_mA830097AEFEF04922B33AADFCFBD476109E114E9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Inventory::RemoveCoins(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_RemoveCoins_mEEBE690AD29DEAEEDD7EB1DBCE4281D06C94EABA (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	{
		// coinsCountTotal -= count;
		int32_t L_0 = __this->get_coinsCountTotal_11();
		int32_t L_1 = ___count0;
		__this->set_coinsCountTotal_11(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// UpdateTextUI();
		Inventory_UpdateTextUI_mA830097AEFEF04922B33AADFCFBD476109E114E9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Inventory::UpdateTextUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_UpdateTextUI_mA830097AEFEF04922B33AADFCFBD476109E114E9 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method)
{
	{
		// scoreText.text = score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_scoreText_12();
		float* L_1 = __this->get_address_of_score_8();
		String_t* L_2;
		L_2 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// coinsCountText.text = coinsCount.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_coinsCountText_13();
		int32_t* L_4 = __this->get_address_of_coinsCount_10();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// }
		return;
	}
}
// System.Void Inventory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory__ctor_mF2ACBF005FF40F23F68AE8E9E416A4870EC4B27C (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m51C5ECE57526347477E1E2A4CF519CF555BC8147 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void MainMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Awake_mA8CB83E7D49CE72C6D0DE5D7D6313F8305A1A4FE (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA593335833BAF73F78EA5CBAEEACD184331DAEB8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_0 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarning("Il y a plus d'une instance de MainMenu dans la scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralA593335833BAF73F78EA5CBAEEACD184331DAEB8, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0018:
	{
		// instance = this;
		((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->set_instance_12(__this);
		// }
		return;
	}
}
// System.Void MainMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Start_m3B552CE289B1D7E5343961C8461C484EA61DB621 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		// data.LoadData();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_0 = __this->get_data_4();
		NullCheck(L_0);
		Data_LoadData_m4F0DE254D779759D329ABA856B10409D84B766F5(L_0, /*hidden argument*/NULL);
		// UpdateInventory();
		MainMenu_UpdateInventory_mB096F0E4B39E299D7400CD823812FCA8AE86B816(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::UpdateInventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_UpdateInventory_mB096F0E4B39E299D7400CD823812FCA8AE86B816 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		// coinsCountText.text = data.coins.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_coinsCountText_10();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_1 = __this->get_data_4();
		NullCheck(L_1);
		int32_t* L_2 = L_1->get_address_of_coins_4();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// scoreMaxText.text = data.hightScore.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_scoreMaxText_11();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_5 = __this->get_data_4();
		NullCheck(L_5);
		float* L_6 = L_5->get_address_of_hightScore_5();
		String_t* L_7;
		L_7 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void MainMenu::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_StartGame_m8EFE49FE95784A266A683D0CCAAE7C2274981049 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (data.mission1InProgress.activate)
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_0 = __this->get_data_4();
		NullCheck(L_0);
		Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * L_1 = L_0->get_mission1InProgress_14();
		NullCheck(L_1);
		bool L_2 = L_1->get_activate_8();
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// data.mission1InProgress.finish = true;
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_3 = __this->get_data_4();
		NullCheck(L_3);
		Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * L_4 = L_3->get_mission1InProgress_14();
		NullCheck(L_4);
		L_4->set_finish_9((bool)1);
		// data.nbNotifMissions += 1;
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_5 = __this->get_data_4();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_nbNotifMissions_6();
		NullCheck(L_6);
		L_6->set_nbNotifMissions_6(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
	}

IL_0036:
	{
		// SceneManager.LoadScene(levelToLoad);
		String_t* L_8 = __this->get_levelToLoad_5();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_8, /*hidden argument*/NULL);
		// data.SaveData();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_9 = __this->get_data_4();
		NullCheck(L_9);
		Data_SaveData_mAD33D4B74F5903386D259EDEC3005729F32653F8(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::SettingsButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_SettingsButton_mF595DFABA42392FCBAD2DF09167A0B6B042BADBD (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		// settingsWindow.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_settingsWindow_7();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::OpenShopPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_OpenShopPanel_m3D79E1D7384DD13371F44BED5587B7BE57393785 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		// homePage.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_homePage_6();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// ShopWindow.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_ShopWindow_8();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::CloseShopPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_CloseShopPanel_m6E6CD3BD307B3EAA95391B9916D12873014EFA21 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		// homePage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_homePage_6();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// ShopWindow.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_ShopWindow_8();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// data.SaveData();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_2 = __this->get_data_4();
		NullCheck(L_2);
		Data_SaveData_mAD33D4B74F5903386D259EDEC3005729F32653F8(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::CloseSettingsWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_CloseSettingsWindow_mC147119CA2649B278BEE5B1330F24AF81B340B09 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		// settingsWindow.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_settingsWindow_7();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::LoadCreditsScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_LoadCreditsScene_mA4F435868D68883B51D0C8EDA38A37084B0B7BEE (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C058FE20FD7652D620A17B5F9D6AE4EEFA76795);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Credits");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral5C058FE20FD7652D620A17B5F9D6AE4EEFA76795, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m4D77CEC8F91682A2D9492AE815F89B178BF9717D (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Missions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Missions__ctor_mAD0786EBFD61C2DE7F5129AF3AF6D31E289FCF97 (Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void MissionsManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionsManager_Awake_m4F20E8711A00EA939466F4E54C127144B0DE511F (MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06BF298C159DF407A06E64725C8E6D75DB233768);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69 * L_0 = ((MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69_StaticFields*)il2cpp_codegen_static_fields_for(MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69_il2cpp_TypeInfo_var))->get_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarning("Il y a plus d'une instance de MissionsManager dans la scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral06BF298C159DF407A06E64725C8E6D75DB233768, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0018:
	{
		// instance = this;
		((MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69_StaticFields*)il2cpp_codegen_static_fields_for(MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69_il2cpp_TypeInfo_var))->set_instance_7(__this);
		// }
		return;
	}
}
// System.Void MissionsManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionsManager_Start_m2818FE135EA16E4A3FEC9A370E095A85DA9698FF (MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nbnotif = MainMenu.instance.data.nbNotifMissions;
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_0 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_0);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_1 = L_0->get_data_4();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_nbNotifMissions_6();
		__this->set_nbnotif_6(L_2);
		// }
		return;
	}
}
// System.Void MissionsManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionsManager_Update_m1FA7D58B25F193D6ECD698D6589BA02835C4249D (MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral583754F892E84885C1B6FB09C0DD59545A5238B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animatorNotif.SetInteger("NbNotif", nbnotif);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animatorNotif_5();
		int32_t L_1 = __this->get_nbnotif_6();
		NullCheck(L_0);
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_0, _stringLiteral583754F892E84885C1B6FB09C0DD59545A5238B6, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MissionsManager::OpenMissionsPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionsManager_OpenMissionsPanel_m2C8379299AF1DC881429F1815D7C58BD2AFFFEB9 (MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainMenu.instance.homePage.SetActive(false);
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_0 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_homePage_6();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// MissionsWindow.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_MissionsWindow_4();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// NotifOpen();
		MissionsManager_NotifOpen_m35B350176863EBB548C93A723FC2C69FB58E9215(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MissionsManager::CloseMissionsPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionsManager_CloseMissionsPanel_mE1A3DC323986990D6BAD1A83E4299F3D1A529413 (MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainMenu.instance.homePage.SetActive(true);
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_0 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_homePage_6();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// MissionsWindow.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_MissionsWindow_4();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MissionsManager::NotifOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionsManager_NotifOpen_m35B350176863EBB548C93A723FC2C69FB58E9215 (MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nbnotif = 0;
		__this->set_nbnotif_6(0);
		// MainMenu.instance.data.nbNotifMissions = 0;
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_0 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_0);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_1 = L_0->get_data_4();
		NullCheck(L_1);
		L_1->set_nbNotifMissions_6(0);
		// }
		return;
	}
}
// System.Void MissionsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissionsManager__ctor_m3D8C57E8E9E51FA1D65A5A294EBEFDF1966A0382 (MissionsManager_t9A09D780CDABFB81F349D0AE28D7ED185C000D69 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PauseMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Awake_mB04BCBDA84AEC654D1976EC3DF61A0CF68D2C86C (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AC51F276AF87592A88D9B3EBFDA93ACAAADFCC1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * L_0 = ((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->get_instance_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarning("Il y a plus d'une instance de PauseMenu dans la scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral4AC51F276AF87592A88D9B3EBFDA93ACAAADFCC1, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0018:
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_instance_20(__this);
		// }
		return;
	}
}
// System.Void PauseMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Start_mB3762C9E5B204FDE0381A6409728D7DCAD7E6C37 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Game.instance.RecupData();
		Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * L_0 = ((Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields*)il2cpp_codegen_static_fields_for(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var))->get_instance_10();
		NullCheck(L_0);
		Game_RecupData_m6A4634452DE59BAB90CA16CB71A3E4B171199A53(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::Paused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Paused_mCC5BA9CC0F079064E523735BC3C941E053701B66 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74EBEC30E667023205227F3CDD7B95BAC4BB8344);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenuUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenuUI_19();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// gameIsPaused = true;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_gameIsPaused_4((bool)1);
		// Game.instance.GameStop();
		Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * L_1 = ((Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields*)il2cpp_codegen_static_fields_for(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var))->get_instance_10();
		NullCheck(L_1);
		Game_GameStop_mA3A256ADB1EBABB5D2371C3844A50B56B4784073(L_1, /*hidden argument*/NULL);
		// panelGame.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_panelGame_17();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// heartsMenuAnimator.SetInteger("CurrentHealth", PlayerHealth.instance.currentHealth);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_heartsMenuAnimator_14();
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_4 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_currentHealth_5();
		NullCheck(L_3);
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_3, _stringLiteral74EBEC30E667023205227F3CDD7B95BAC4BB8344, L_5, /*hidden argument*/NULL);
		// Game.instance.SaveData();
		Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * L_6 = ((Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields*)il2cpp_codegen_static_fields_for(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var))->get_instance_10();
		NullCheck(L_6);
		Game_SaveData_mBBFB20C67C03CA67D6099E94C59AADDE8D7AA441(L_6, /*hidden argument*/NULL);
		// UpdateTextUI();
		PauseMenu_UpdateTextUI_m028B75665F2840D9C93BD71BF0FE840A7E00F33F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Resume_m256AFDD68DF9851B6D716189F709ED93D45C3717 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Game.instance.gameIsStart)
		Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * L_0 = ((Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields*)il2cpp_codegen_static_fields_for(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var))->get_instance_10();
		NullCheck(L_0);
		bool L_1 = L_0->get_gameIsStart_8();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// StartCoroutine(CountDown());
		RuntimeObject* L_2;
		L_2 = PauseMenu_CountDown_mBC8C7507006EC9F93A1B022733B359C60208BF87(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		goto IL_0025;
	}

IL_001b:
	{
		// Game.instance.GameStart();
		Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * L_4 = ((Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields*)il2cpp_codegen_static_fields_for(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var))->get_instance_10();
		NullCheck(L_4);
		Game_GameStart_mC9EE34FC7776F3871EC996964D6925B054B90B91(L_4, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// pauseMenuUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_pauseMenuUI_19();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// gameIsPaused = false;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_gameIsPaused_4((bool)0);
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// panelGame.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_panelGame_17();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PauseMenu::CountDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PauseMenu_CountDown_mBC8C7507006EC9F93A1B022733B359C60208BF87 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2 * L_0 = (U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2 *)il2cpp_codegen_object_new(U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2_il2cpp_TypeInfo_var);
		U3CCountDownU3Ed__21__ctor_m03DFADA18B39B994B1C9B383B18135A185A42BF1(L_0, 0, /*hidden argument*/NULL);
		U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void PauseMenu::UpdateTextUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_UpdateTextUI_m028B75665F2840D9C93BD71BF0FE840A7E00F33F (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// coinsCountText.text = Inventory.instance.coinsCountTotal.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_coinsCountText_7();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_1 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_1);
		int32_t* L_2 = L_1->get_address_of_coinsCountTotal_11();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// scoreText.text = Inventory.instance.score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_scoreText_8();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_5 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_5);
		float* L_6 = L_5->get_address_of_score_8();
		String_t* L_7;
		L_7 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// scoreMaxText.text = Inventory.instance.scoreMax.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_scoreMaxText_9();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_9 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_9);
		float* L_10 = L_9->get_address_of_scoreMax_9();
		String_t* L_11;
		L_11 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		// nbBarrier.text = Inventory.instance.nbBarrier.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_nbBarrier_10();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_13 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_13);
		int32_t* L_14 = L_13->get_address_of_nbBarrier_6();
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
		// nbKillMoob.text = Inventory.instance.nbKillMoob.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = __this->get_nbKillMoob_11();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_17 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_17);
		int32_t* L_18 = L_17->get_address_of_nbKillMoob_5();
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
		// nbBonus.text = Inventory.instance.nbBonus.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_nbBonus_12();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_21 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_21);
		int32_t* L_22 = L_21->get_address_of_nbBonus_7();
		String_t* L_23;
		L_23 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_23);
		// }
		return;
	}
}
// System.Void PauseMenu::Stats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Stats_m06E0362B36863288F8290EEBE9B0745D6A540E07 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (statsOpen)
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		bool L_0 = ((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->get_statsOpen_5();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// buttonOption.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_buttonOption_15();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// panelStats.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_panelStats_16();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// statsOpen = false;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_statsOpen_5((bool)0);
		// }
		return;
	}

IL_0026:
	{
		// buttonOption.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_buttonOption_15();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// panelStats.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_panelStats_16();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// statsOpen = true;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_statsOpen_5((bool)1);
		// }
		return;
	}
}
// System.Void PauseMenu::WantToQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_WantToQuit_m63A4B3E2F36991079037C701D0F2A1BF9B70A05C (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (quitOpen)
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		bool L_0 = ((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->get_quitOpen_6();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// buttonOption.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_buttonOption_15();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// panelQuit.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_panelQuit_18();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// quitOpen = false;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_quitOpen_6((bool)0);
		// }
		return;
	}

IL_0026:
	{
		// buttonOption.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_buttonOption_15();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// panelQuit.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_panelQuit_18();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// quitOpen = true;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_quitOpen_6((bool)1);
		// }
		return;
	}
}
// System.Void PauseMenu::ButtonQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_ButtonQuit_m01D7C6B2D59C8758DD69D64F1E654AFD1C20BC5C (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Resume();
		PauseMenu_Resume_m256AFDD68DF9851B6D716189F709ED93D45C3717(__this, /*hidden argument*/NULL);
		// SceneManager.LoadScene("MainMenu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::ButtonPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_ButtonPause_m23F06A482AAC4A678E2FE10421D60FDC7A559AEE (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameIsPaused)
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		bool L_0 = ((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->get_gameIsPaused_4();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Resume();
		PauseMenu_Resume_m256AFDD68DF9851B6D716189F709ED93D45C3717(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_000e:
	{
		// Paused();
		PauseMenu_Paused_mCC5BA9CC0F079064E523735BC3C941E053701B66(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::ButtonCheat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_ButtonCheat_m51E64F6B76CB94F6CBB43C6EA968B6DDF7BEA11F (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// PlayerMovement.instance.isAttack = true;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_0 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_0);
		L_0->set_isAttack_8((bool)1);
		// PlayerHealth.instance.isInvincible = true;
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_1 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_1);
		L_1->set_isInvincible_9((bool)1);
		// Vector3 pos = PlayerMovement.instance.transform.position;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_2 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// pos.x = 10f;
		(&V_0)->set_x_2((10.0f));
		// PlayerMovement.instance.transform.position = pos;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_5 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_mA1A281F3359C234E5CF24FFEAC20C12C48D69018 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseMenu::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__cctor_m6819B2CD3B03CB44F1D7914C847058A7C1B7D924 (const RuntimeMethod* method)
{
	{
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
// System.Void PickUpCoin::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUpCoin_OnTriggerEnter2D_m140B0CB1C5AE87BFA42726E3DD32BA31A381E235 (PickUpCoin_t8EAC46A9921C91A56ECE00DE3791A19CA2557050 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E39FF2E25E7C626101199E5389D85A5D4DF1D47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.CompareTag("GroundCheck"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteral7E39FF2E25E7C626101199E5389D85A5D4DF1D47, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Destroy(toDestroy);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_toDestroy_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// if (collision.CompareTag("Player"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_3, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// Inventory.instance.AddCoins(1);
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_5 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_5);
		Inventory_AddCoins_m9F73B0F1B57DEDEE4775CF62AB38EF7A3DBF4E3A(L_5, 1, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void PickUpCoin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUpCoin__ctor_m402843402820F4837EC566CF747BC5D7F49EE6E8 (PickUpCoin_t8EAC46A9921C91A56ECE00DE3791A19CA2557050 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PickUpItem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUpItem_Start_m2AAF372E871DBB2DB1E9882EF6744375DCCE6941 (PickUpItem_tD66C6424CCD1B9F24A458174FE2D94E094AB8F20 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// int nbRandom = Random.Range(0, 101);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)101), /*hidden argument*/NULL);
		V_0 = L_0;
		// if (nbRandom <= 45)
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)45))))
		{
			goto IL_001c;
		}
	}
	{
		// item = apple;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_2 = __this->get_apple_4();
		__this->set_item_6(L_2);
		// }
		goto IL_0040;
	}

IL_001c:
	{
		// else if (nbRandom <= 80)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)80))))
		{
			goto IL_002f;
		}
	}
	{
		// item = shield;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_4 = __this->get_shield_7();
		__this->set_item_6(L_4);
		// }
		goto IL_0040;
	}

IL_002f:
	{
		// else if (nbRandom > 80)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)80))))
		{
			goto IL_0040;
		}
	}
	{
		// item = goldenApple;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_6 = __this->get_goldenApple_5();
		__this->set_item_6(L_6);
	}

IL_0040:
	{
		// animator.SetTrigger(item.Name.ToString());
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = __this->get_animator_9();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_8 = __this->get_item_6();
		NullCheck(L_8);
		String_t* L_9 = L_8->get_Name_5();
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		NullCheck(L_7);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_7, L_10, /*hidden argument*/NULL);
		// float posY = transform.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		V_1 = L_13;
		// int nbRandoms = Random.Range(0, positions.Length);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_14 = __this->get_positions_8();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))), /*hidden argument*/NULL);
		V_2 = L_15;
		// Vector3 positionActual = positions[nbRandoms];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_16 = __this->get_positions_8();
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		// positionActual.y += posY;
		float* L_20 = (&V_3)->get_address_of_y_3();
		float* L_21 = L_20;
		float L_22 = *((float*)L_21);
		float L_23 = V_1;
		*((float*)L_21) = (float)((float)il2cpp_codegen_add((float)L_22, (float)L_23));
		// transform.position = positionActual;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_3;
		NullCheck(L_24);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_24, L_25, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PickUpItem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUpItem_Update_m355BC0AAD150C403D6C6D9784503146D8EE381E1 (PickUpItem_tD66C6424CCD1B9F24A458174FE2D94E094AB8F20 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.E))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)101), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// TakeItem();
		PickUpItem_TakeItem_m272B86ED21F9C7BAD477779D423A02E1E71D1C4E(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void PickUpItem::TakeItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUpItem_TakeItem_m272B86ED21F9C7BAD477779D423A02E1E71D1C4E (PickUpItem_tD66C6424CCD1B9F24A458174FE2D94E094AB8F20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Inventory.instance.ConsumeItem(item);
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_0 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_1 = __this->get_item_6();
		NullCheck(L_0);
		Inventory_ConsumeItem_m6D45FE77D89778F760E7722C5F9417897A4B2662(L_0, L_1, /*hidden argument*/NULL);
		// Destroy(toDestroy);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_toDestroy_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PickUpItem::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUpItem_OnTriggerEnter2D_mDA2ACC8DACB0A1AC1F9CD0047E14A9A72B4C86AE (PickUpItem_tD66C6424CCD1B9F24A458174FE2D94E094AB8F20 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E39FF2E25E7C626101199E5389D85A5D4DF1D47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.CompareTag("GroundCheck"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteral7E39FF2E25E7C626101199E5389D85A5D4DF1D47, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(toDestroy);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_toDestroy_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0019:
	{
		// else if (collision.CompareTag("Player"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_3, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// TakeItem();
		PickUpItem_TakeItem_m272B86ED21F9C7BAD477779D423A02E1E71D1C4E(__this, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void PickUpItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUpItem__ctor_m641A253A9A3EA5F9AE9FCA0C91D3F796A36894CC (PickUpItem_tD66C6424CCD1B9F24A458174FE2D94E094AB8F20 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerEffects::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEffects_Awake_m2C1A9B3D7095A5450A93FFDF1C0FB1C30A39CC8E (PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E8DD28D78A02777DA318C89D8DB9EDBD3B00B72);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * L_0 = ((PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4_StaticFields*)il2cpp_codegen_static_fields_for(PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarning("Il y a plus d'une instance de PlayerEffects dans la scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral7E8DD28D78A02777DA318C89D8DB9EDBD3B00B72, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0018:
	{
		// instance = this;
		((PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4_StaticFields*)il2cpp_codegen_static_fields_for(PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4_il2cpp_TypeInfo_var))->set_instance_6(__this);
		// }
		return;
	}
}
// System.Void PlayerEffects::Shield(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEffects_Shield_mD390BBFE6CB0495097A894C21F054B8D01403CE1 (PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___currentItem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerHealth.instance.currentHealth = currentItem.hpGiven;
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_0 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_instance_11();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_1 = ___currentItem0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_hpGiven_9();
		NullCheck(L_0);
		L_0->set_currentHealth_5(L_2);
		// maxLifeShield = Mathf.FloorToInt(currentItem.hpShield);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_3 = ___currentItem0;
		NullCheck(L_3);
		float L_4 = L_3->get_hpShield_10();
		int32_t L_5;
		L_5 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_4, /*hidden argument*/NULL);
		__this->set_maxLifeShield_4(L_5);
		// currentLifeShield = maxLifeShield;
		int32_t L_6 = __this->get_maxLifeShield_4();
		__this->set_currentLifeShield_5(L_6);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerEffects::InvinsiblePlayer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerEffects_InvinsiblePlayer_m1F391D3075EE656B9A38E7458F151F2441E40525 (PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20 * L_0 = (U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20 *)il2cpp_codegen_object_new(U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20_il2cpp_TypeInfo_var);
		U3CInvinsiblePlayerU3Ed__5__ctor_m039F699269F3D257CF79851F16244FA59ABA6278(L_0, 0, /*hidden argument*/NULL);
		U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20 * L_2 = L_1;
		float L_3 = ___time0;
		NullCheck(L_2);
		L_2->set_time_2(L_3);
		return L_2;
	}
}
// System.Void PlayerEffects::AddSpeed(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEffects_AddSpeed_mB0621718F344ECF271D861DE9CE731F294CB167B (PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * __this, int32_t ___speedGiven0, float ___speedDuration1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerMovement.instance.speed += speedGiven;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_0 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1 = L_0;
		NullCheck(L_1);
		float L_2 = L_1->get_speed_4();
		int32_t L_3 = ___speedGiven0;
		NullCheck(L_1);
		L_1->set_speed_4(((float)il2cpp_codegen_add((float)L_2, (float)((float)((float)L_3)))));
		// StartCoroutine(RemoveSpeed(speedGiven, speedDuration));
		int32_t L_4 = ___speedGiven0;
		float L_5 = ___speedDuration1;
		RuntimeObject* L_6;
		L_6 = PlayerEffects_RemoveSpeed_mAAB2CAC868DDE12C0B2E6CF353336B9FBE89F406(__this, L_4, L_5, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerEffects::RemoveSpeed(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerEffects_RemoveSpeed_mAAB2CAC868DDE12C0B2E6CF353336B9FBE89F406 (PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * __this, int32_t ___speedGiven0, float ___speedDuration1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE * L_0 = (U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE *)il2cpp_codegen_object_new(U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE_il2cpp_TypeInfo_var);
		U3CRemoveSpeedU3Ed__7__ctor_mA17F7494229E7394E299DFDF7DAE700848205878(L_0, 0, /*hidden argument*/NULL);
		U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE * L_1 = L_0;
		int32_t L_2 = ___speedGiven0;
		NullCheck(L_1);
		L_1->set_speedGiven_3(L_2);
		U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE * L_3 = L_1;
		float L_4 = ___speedDuration1;
		NullCheck(L_3);
		L_3->set_speedDuration_2(L_4);
		return L_3;
	}
}
// System.Void PlayerEffects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEffects__ctor_m1D71E1E84624DE43E98F3F60A0F36D316F1B6402 (PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * __this, const RuntimeMethod* method)
{
	{
		// public int maxLifeShield = 1;
		__this->set_maxLifeShield_4(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerHealth::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_Awake_mAAE46D81BDF15DAB42978340A0043F55CCD4BF38 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC82D769640E060BED455AE5C7B1B2B302B193CEF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_0 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_instance_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarning("Il y a plus d'une instance de PlayerHealth dans la scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralC82D769640E060BED455AE5C7B1B2B302B193CEF, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0018:
	{
		// instance = this;
		((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->set_instance_11(__this);
		// }
		return;
	}
}
// System.Void PlayerHealth::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_Start_m78FD812EF2B87E9EC7A405A1BBB6ECB27BFF3589 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	{
		// currentHealth = maxHealth;
		int32_t L_0 = __this->get_maxHealth_4();
		__this->set_currentHealth_5(L_0);
		// }
		return;
	}
}
// System.Void PlayerHealth::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_Update_m4ACD2FDDEBE8DC21C71BB853A975D03DD65061B3 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74EBEC30E667023205227F3CDD7B95BAC4BB8344);
		s_Il2CppMethodInitialized = true;
	}
	{
		// heartsAnimator.SetInteger("CurrentHealth", currentHealth);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_heartsAnimator_6();
		int32_t L_1 = __this->get_currentHealth_5();
		NullCheck(L_0);
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_0, _stringLiteral74EBEC30E667023205227F3CDD7B95BAC4BB8344, L_1, /*hidden argument*/NULL);
		// if (Input.GetKeyDown(KeyCode.H))
		bool L_2;
		L_2 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)104), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// TakeDamage(1);
		PlayerHealth_TakeDamage_m21F4EA70549D145406E078F0543A934DE498FDB7(__this, 1, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void PlayerHealth::HealPlayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_HealPlayer_mDFBC1F0B42BE5BDACDF285E0A183DCCA49BD8805 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	{
		// if ((currentHealth + amount) == maxHealth)
		int32_t L_0 = __this->get_currentHealth_5();
		int32_t L_1 = ___amount0;
		int32_t L_2 = __this->get_maxHealth_4();
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))) == ((uint32_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		// currentHealth = maxHealth;
		int32_t L_3 = __this->get_maxHealth_4();
		__this->set_currentHealth_5(L_3);
		// }
		return;
	}

IL_001d:
	{
		// else if ((currentHealth + amount) < maxHealth)
		int32_t L_4 = __this->get_currentHealth_5();
		int32_t L_5 = ___amount0;
		int32_t L_6 = __this->get_maxHealth_4();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5))) >= ((int32_t)L_6)))
		{
			goto IL_003b;
		}
	}
	{
		// currentHealth += amount;
		int32_t L_7 = __this->get_currentHealth_5();
		int32_t L_8 = ___amount0;
		__this->set_currentHealth_5(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)));
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void PlayerHealth::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_TakeDamage_m21F4EA70549D145406E078F0543A934DE498FDB7 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isInvincible)
		bool L_0 = __this->get_isInvincible_9();
		if (L_0)
		{
			goto IL_0071;
		}
	}
	{
		// if (PlayerEffects.instance.currentLifeShield <= 0)
		PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * L_1 = ((PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4_StaticFields*)il2cpp_codegen_static_fields_for(PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_currentLifeShield_5();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		// currentHealth -= damage;
		int32_t L_3 = __this->get_currentHealth_5();
		int32_t L_4 = ___damage0;
		__this->set_currentHealth_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4)));
		// PlayerMovement.instance.isAttack = true;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_5 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_5);
		L_5->set_isAttack_8((bool)1);
		// isInvincible = true;
		__this->set_isInvincible_9((bool)1);
		// StartCoroutine(InvincibilityFlash());
		RuntimeObject* L_6;
		L_6 = PlayerHealth_InvincibilityFlash_m380A77358C6310FDD304EFE498FFB48CAAE6EA00(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		// StartCoroutine(HandleInvincibilityDelay());
		RuntimeObject* L_8;
		L_8 = PlayerHealth_HandleInvincibilityDelay_m164E6D50C83D8EB27AEEA51CA7499ADAA9BD5229(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_9;
		L_9 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_8, /*hidden argument*/NULL);
		// if (currentHealth <= 0)
		int32_t L_10 = __this->get_currentHealth_5();
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		// Die();
		PlayerHealth_Die_mBF97B09DFB17C4BBA27719DD2FFA1F4221E8CAB3(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_005f:
	{
		// PlayerEffects.instance.currentLifeShield -= 1;
		PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * L_11 = ((PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4_StaticFields*)il2cpp_codegen_static_fields_for(PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4_il2cpp_TypeInfo_var))->get_instance_6();
		PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * L_12 = L_11;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_currentLifeShield_5();
		NullCheck(L_12);
		L_12->set_currentLifeShield_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)));
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void PlayerHealth::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth_Die_mBF97B09DFB17C4BBA27719DD2FFA1F4221E8CAB3 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08EF1409295A748F17C961491378A3B6215AA838);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerMovement.instance.animator.SetTrigger("Die");
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_0 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = L_0->get_animator_10();
		NullCheck(L_1);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_1, _stringLiteral08EF1409295A748F17C961491378A3B6215AA838, /*hidden argument*/NULL);
		// PlayerMovement.instance.StopPlayer();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_2 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_2);
		PlayerMovement_StopPlayer_m81EFFF7AB6DCA5A83E80B8C33C345ED3484574CB(L_2, /*hidden argument*/NULL);
		// CameraWaypoint.instance.StopVelocity();
		CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * L_3 = ((CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_StaticFields*)il2cpp_codegen_static_fields_for(CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_3);
		CameraWaypoint_StopVelocity_m9CFAAF025B3C9ED60ADB39B62C1DB38CFDDC339D(L_3, /*hidden argument*/NULL);
		// GameOverManager.instance.OnPlayerDeath();
		GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * L_4 = ((GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C_StaticFields*)il2cpp_codegen_static_fields_for(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_4);
		GameOverManager_OnPlayerDeath_m6C1D683DDBB8E9EBE4EFBF6E2FB21BC75A96C323(L_4, /*hidden argument*/NULL);
		// Inventory.instance.SaveScoreMax();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_5 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_5);
		Inventory_SaveScoreMax_m3BFE29FF6F048F3CACAC2C4BB9580381331CAB78(L_5, /*hidden argument*/NULL);
		// Inventory.instance.nbDie += 1;
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_6 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_nbDie_4();
		NullCheck(L_7);
		L_7->set_nbDie_4(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		// Game.instance.SaveData();
		Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * L_9 = ((Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields*)il2cpp_codegen_static_fields_for(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var))->get_instance_10();
		NullCheck(L_9);
		Game_SaveData_mBBFB20C67C03CA67D6099E94C59AADDE8D7AA441(L_9, /*hidden argument*/NULL);
		// Game.instance.GameStop();
		Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * L_10 = ((Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields*)il2cpp_codegen_static_fields_for(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var))->get_instance_10();
		NullCheck(L_10);
		Game_GameStop_mA3A256ADB1EBABB5D2371C3844A50B56B4784073(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerHealth::InvincibilityFlash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerHealth_InvincibilityFlash_m380A77358C6310FDD304EFE498FFB48CAAE6EA00 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E * L_0 = (U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E *)il2cpp_codegen_object_new(U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E_il2cpp_TypeInfo_var);
		U3CInvincibilityFlashU3Ed__14__ctor_mCFDAD41304609DE57E8E610DD46FAEFDE4C15351(L_0, 0, /*hidden argument*/NULL);
		U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerHealth::HandleInvincibilityDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerHealth_HandleInvincibilityDelay_m164E6D50C83D8EB27AEEA51CA7499ADAA9BD5229 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB * L_0 = (U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB *)il2cpp_codegen_object_new(U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB_il2cpp_TypeInfo_var);
		U3CHandleInvincibilityDelayU3Ed__15__ctor_m8D415DB4D8E04D9E8E6651B43C5488D6F30CF773(L_0, 0, /*hidden argument*/NULL);
		U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void PlayerHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealth__ctor_mE9AF3CA69205909E44287664BEAE503EC43875F1 (PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * __this, const RuntimeMethod* method)
{
	{
		// public int maxHealth = 2;
		__this->set_maxHealth_4(2);
		// public float invincibilityTimeAfterHit = 3f;
		__this->set_invincibilityTimeAfterHit_7((3.0f));
		// public float invincibilityFlashDelay = 0.2f;
		__this->set_invincibilityFlashDelay_8((0.200000003f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Awake_m441E25AABE54B8C5068808DB8025B67B9A7EA87E (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3565EC429F8F437A37230F06686C2D5C736AEFA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA941039D60C5A49DDB9587C1298B8C2DD802B808);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_0 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarning("Il y a plus d'une instance de PlayerMovement dans la scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralA941039D60C5A49DDB9587C1298B8C2DD802B808, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0018:
	{
		// instance = this;
		((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->set_instance_19(__this);
		// animator.SetInteger("IdSkin", data.idSkin);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_animator_10();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_3 = __this->get_data_11();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_idSkin_11();
		NullCheck(L_2);
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_2, _stringLiteral3565EC429F8F437A37230F06686C2D5C736AEFA3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Start_mB585552228B1908E44D3A69496598FB485F608B6 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// dragDistance = Screen.height * 15 / 100;
		int32_t L_0;
		L_0 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		__this->set_dragDistance_15(((float)((float)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)15)))/(int32_t)((int32_t)100))))));
		// }
		return;
	}
}
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mC3491BD6CDFF1FA543B16969144C939B2298052F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 targetVelocity = new Vector2(0, speed);
		float L_0 = __this->get_speed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (0.0f), L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// rigidbodyPlayer.velocity = Vector3.SmoothDamp(rigidbodyPlayer.velocity, targetVelocity, ref velocity, .05f);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3 = __this->get_rigidbodyPlayer_6();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_4 = __this->get_rigidbodyPlayer_6();
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_velocity_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_6, L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_8, (0.0500000007f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_3, L_10, /*hidden argument*/NULL);
		// Movement();
		PlayerMovement_Movement_m429843BB8B4AC7152E1FBD70D59D217BA170F047(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Movement_m429843BB8B4AC7152E1FBD70D59D217BA170F047 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		// if(Input.touches.Length > 0)
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_0;
		L_0 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0221;
		}
	}
	{
		// Touch t = Input.GetTouch(0);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_1;
		L_1 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector3 touchPosition = Camera.main.ScreenToWorldPoint(t.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// touchPosition.y = transform.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		(&V_1)->set_y_3(L_8);
		// touchPosition.z = 0f;
		(&V_1)->set_z_4((0.0f));
		// Vector3 dir = touchPosition - transform.position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_9, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// if (dir.x > 0.3f | dir.x < -0.3f)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_2;
		float L_14 = L_13.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_2;
		float L_16 = L_15.get_x_2();
		if (!((int32_t)((int32_t)((((float)L_14) > ((float)(0.300000012f)))? 1 : 0)|(int32_t)((((float)L_16) < ((float)(-0.300000012f)))? 1 : 0))))
		{
			goto IL_0139;
		}
	}
	{
		// if ((dir.x < 0 && transform.position.x >= waypointsLeft.position.x) | (dir.x > 0 && transform.position.x <= waypointsRight.position.x))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_2;
		float L_18 = L_17.get_x_2();
		if ((!(((float)L_18) < ((float)(0.0f)))))
		{
			goto IL_00b2;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get_waypointsLeft_13();
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_x_2();
		G_B5_0 = ((((int32_t)((!(((float)L_21) >= ((float)L_24)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00b3;
	}

IL_00b2:
	{
		G_B5_0 = 0;
	}

IL_00b3:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_2;
		float L_26 = L_25.get_x_2();
		G_B6_0 = G_B5_0;
		if ((!(((float)L_26) > ((float)(0.0f)))))
		{
			G_B7_0 = G_B5_0;
			goto IL_00e7;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = __this->get_waypointsRight_12();
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_2();
		G_B8_0 = ((((int32_t)((!(((float)L_29) <= ((float)L_32)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B8_1 = G_B6_0;
		goto IL_00e8;
	}

IL_00e7:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_00e8:
	{
		if (!((int32_t)((int32_t)G_B8_1|(int32_t)G_B8_0)))
		{
			goto IL_0139;
		}
	}
	{
		// if (dir.x <= 1 && dir.x >= -1)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_2;
		float L_34 = L_33.get_x_2();
		if ((!(((float)L_34) <= ((float)(1.0f)))))
		{
			goto IL_0110;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_2;
		float L_36 = L_35.get_x_2();
		if ((!(((float)L_36) >= ((float)(-1.0f)))))
		{
			goto IL_0110;
		}
	}
	{
		// horizontalSpeed = 0.1f;
		__this->set_horizontalSpeed_5((0.100000001f));
	}

IL_0110:
	{
		// transform.Translate(dir.normalized * horizontalSpeed, Space.World);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		float L_39 = __this->get_horizontalSpeed_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_38, L_39, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_Translate_mFB58CBF3FA00BD0EE09EC67457608F62564D0DDE(L_37, L_40, 0, /*hidden argument*/NULL);
		// horizontalSpeed = 0.1f;
		__this->set_horizontalSpeed_5((0.100000001f));
	}

IL_0139:
	{
		// if(t.phase == TouchPhase.Began)
		int32_t L_41;
		L_41 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_0165;
		}
	}
	{
		// firstPressPos = new Vector2(t.position.x,t.position.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42;
		L_42 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		float L_43 = L_42.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44;
		L_44 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		float L_45 = L_44.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_46), L_43, L_45, /*hidden argument*/NULL);
		__this->set_firstPressPos_16(L_46);
	}

IL_0165:
	{
		// if(t.phase == TouchPhase.Ended)
		int32_t L_47;
		L_47 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_47) == ((uint32_t)3))))
		{
			goto IL_0221;
		}
	}
	{
		// secondPressPos = new Vector2(t.position.x,t.position.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48;
		L_48 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		float L_49 = L_48.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50;
		L_50 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		float L_51 = L_50.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_52), L_49, L_51, /*hidden argument*/NULL);
		__this->set_secondPressPos_17(L_52);
		// currentSwipe = new Vector3(secondPressPos.x - firstPressPos.x, secondPressPos.y - firstPressPos.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_53 = __this->get_address_of_secondPressPos_17();
		float L_54 = L_53->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_55 = __this->get_address_of_firstPressPos_16();
		float L_56 = L_55->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_57 = __this->get_address_of_secondPressPos_17();
		float L_58 = L_57->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_59 = __this->get_address_of_firstPressPos_16();
		float L_60 = L_59->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_61), ((float)il2cpp_codegen_subtract((float)L_54, (float)L_56)), ((float)il2cpp_codegen_subtract((float)L_58, (float)L_60)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_62;
		L_62 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_61, /*hidden argument*/NULL);
		__this->set_currentSwipe_18(L_62);
		// currentSwipe.Normalize();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_63 = __this->get_address_of_currentSwipe_18();
		Vector2_Normalize_m0F1341493AD5F0B7DA4D504A44F52A1E2FFCCEC3((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_63, /*hidden argument*/NULL);
		// if(currentSwipe.y > 0  && currentSwipe.x > -0.5f  && currentSwipe.x < 0.5f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_64 = __this->get_address_of_currentSwipe_18();
		float L_65 = L_64->get_y_1();
		if ((!(((float)L_65) > ((float)(0.0f)))))
		{
			goto IL_0221;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_66 = __this->get_address_of_currentSwipe_18();
		float L_67 = L_66->get_x_0();
		if ((!(((float)L_67) > ((float)(-0.5f)))))
		{
			goto IL_0221;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_68 = __this->get_address_of_currentSwipe_18();
		float L_69 = L_68->get_x_0();
		if ((!(((float)L_69) < ((float)(0.5f)))))
		{
			goto IL_0221;
		}
	}
	{
		// StartCoroutine(Attack());
		RuntimeObject* L_70;
		L_70 = PlayerMovement_Attack_m0C291651FC94C3D2DD516020F028929021FFE6C5(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_71;
		L_71 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_70, /*hidden argument*/NULL);
	}

IL_0221:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerMovement::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMovement_Attack_m0C291651FC94C3D2DD516020F028929021FFE6C5 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60 * L_0 = (U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60 *)il2cpp_codegen_object_new(U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60_il2cpp_TypeInfo_var);
		U3CAttackU3Ed__20__ctor_mE31074A1A252000C42CA8BF9A51FEAEDD2AB04F9(L_0, 0, /*hidden argument*/NULL);
		U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void PlayerMovement::ButtonAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_ButtonAttack_m9C673615A3B6973D14D61A8ACE0F73E4F12503AF (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(Attack());
		RuntimeObject* L_0;
		L_0 = PlayerMovement_Attack_m0C291651FC94C3D2DD516020F028929021FFE6C5(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::StopPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_StopPlayer_m81EFFF7AB6DCA5A83E80B8C33C345ED3484574CB (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD283071278C5CA19C7E2D9F2EC2D44D80A4EBBFF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidbodyPlayer.velocity = Vector3.zero;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rigidbodyPlayer_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_0, L_2, /*hidden argument*/NULL);
		// animator.ResetTrigger("GameStart");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_animator_10();
		NullCheck(L_3);
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_3, _stringLiteralD283071278C5CA19C7E2D9F2EC2D44D80A4EBBFF, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mBF9F632DD9929DD6FF092A968649A4406BFE397F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// private Vector3 velocity = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_velocity_7(L_0);
		// public bool canAttack = true;
		__this->set_canAttack_9((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Scenes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scenes__ctor_mD4C95DC03570EEF4572FA8D31299C9ADBF145658 (Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void SettingsMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsMenu_Start_m36AAA2C3DB50175715841A9EB2111F6DB76C45FD (SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Distinct_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_mDF48AC0F9CCD59EC8A90A0487D0809114C23A08D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_m8B1E831C9F5E9F4B3CBEE152BD1E9481DE416E64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_m6CF991EAD04CB7348A8F26573B6E4C06AB5775CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mCD4D2D783DA9CF0C49139966793A197A32A32CF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__4_0_m14E50CA056F9E3085EB98A8D8620759E56807F2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D * G_B2_0 = NULL;
	ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* G_B2_1 = NULL;
	SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250 * G_B2_2 = NULL;
	Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D * G_B1_0 = NULL;
	ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* G_B1_1 = NULL;
	SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250 * G_B1_2 = NULL;
	{
		// resolutions = Screen.resolutions.Select(resolution => new Resolution { width = resolution.width, height = resolution.height }).Distinct().ToArray();
		ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* L_0;
		L_0 = Screen_get_resolutions_mA2968FF5FA4EA6A6AE76019C47338824E8610A81(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_il2cpp_TypeInfo_var);
		Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D * L_1 = ((U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_1();
		Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_il2cpp_TypeInfo_var);
		U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17 * L_3 = ((U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D * L_4 = (Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D *)il2cpp_codegen_object_new(Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D_il2cpp_TypeInfo_var);
		Func_2__ctor_mCD4D2D783DA9CF0C49139966793A197A32A32CF6(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CStartU3Eb__4_0_m14E50CA056F9E3085EB98A8D8620759E56807F2D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCD4D2D783DA9CF0C49139966793A197A32A32CF6_RuntimeMethod_var);
		Func_2_t86B740B58B92FC4B75F2BEC1067F3EEB7DF08C3D * L_5 = L_4;
		((U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_m8B1E831C9F5E9F4B3CBEE152BD1E9481DE416E64((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_m8B1E831C9F5E9F4B3CBEE152BD1E9481DE416E64_RuntimeMethod_var);
		RuntimeObject* L_7;
		L_7 = Enumerable_Distinct_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_mDF48AC0F9CCD59EC8A90A0487D0809114C23A08D(L_6, /*hidden argument*/Enumerable_Distinct_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_mDF48AC0F9CCD59EC8A90A0487D0809114C23A08D_RuntimeMethod_var);
		ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* L_8;
		L_8 = Enumerable_ToArray_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_m6CF991EAD04CB7348A8F26573B6E4C06AB5775CA(L_7, /*hidden argument*/Enumerable_ToArray_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_m6CF991EAD04CB7348A8F26573B6E4C06AB5775CA_RuntimeMethod_var);
		NullCheck(G_B2_2);
		G_B2_2->set_resolutions_5(L_8);
		// resolutionDropdown.ClearOptions();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_9 = __this->get_resolutionDropdown_4();
		NullCheck(L_9);
		Dropdown_ClearOptions_m7F59A8B054698715921D2B0E37EB1808BE53C23C(L_9, /*hidden argument*/NULL);
		// List<string> options = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_10, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = L_10;
		// int currentResolutionIndex = 0;
		V_1 = 0;
		// for (int i = 0; i < resolutions.Length; i++)
		V_2 = 0;
		goto IL_00cc;
	}

IL_0050:
	{
		// string option = resolutions[i].width + "x" + resolutions[i].height;
		ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* L_11 = __this->get_resolutions_5();
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Resolution_get_width_mDD9DCC89D65057B64C413AF15BEE2E37E9892065((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), /*hidden argument*/NULL);
		V_4 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* L_15 = __this->get_resolutions_5();
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = Resolution_get_height_mB90F24337D7B96A288F8BE1D0F2F3599B785AD27((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), /*hidden argument*/NULL);
		V_4 = L_17;
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_14, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		// options.Add(option);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_20 = V_0;
		String_t* L_21 = V_3;
		NullCheck(L_20);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_20, L_21, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// if(resolutions[i].width == Screen.width && resolutions[i].height == Screen.height)
		ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* L_22 = __this->get_resolutions_5();
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = Resolution_get_width_mDD9DCC89D65057B64C413AF15BEE2E37E9892065((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), /*hidden argument*/NULL);
		int32_t L_25;
		L_25 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00c8;
		}
	}
	{
		ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* L_26 = __this->get_resolutions_5();
		int32_t L_27 = V_2;
		NullCheck(L_26);
		int32_t L_28;
		L_28 = Resolution_get_height_mB90F24337D7B96A288F8BE1D0F2F3599B785AD27((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), /*hidden argument*/NULL);
		int32_t L_29;
		L_29 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_00c8;
		}
	}
	{
		// currentResolutionIndex = i;
		int32_t L_30 = V_2;
		V_1 = L_30;
	}

IL_00c8:
	{
		// for (int i = 0; i < resolutions.Length; i++)
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00cc:
	{
		// for (int i = 0; i < resolutions.Length; i++)
		int32_t L_32 = V_2;
		ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* L_33 = __this->get_resolutions_5();
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		// resolutionDropdown.AddOptions(options);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_34 = __this->get_resolutionDropdown_4();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_35 = V_0;
		NullCheck(L_34);
		Dropdown_AddOptions_m2375327887D29ACE452F157863186FC8D0AA4AF9(L_34, L_35, /*hidden argument*/NULL);
		// resolutionDropdown.value = currentResolutionIndex;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_36 = __this->get_resolutionDropdown_4();
		int32_t L_37 = V_1;
		NullCheck(L_36);
		Dropdown_set_value_mE4418D205D53F8A3AD23B957D1A8CD71489CB3B9(L_36, L_37, /*hidden argument*/NULL);
		// resolutionDropdown.RefreshShownValue();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_38 = __this->get_resolutionDropdown_4();
		NullCheck(L_38);
		Dropdown_RefreshShownValue_m1D58FF9265C31D85B65F52410EA8A8234F974FBA(L_38, /*hidden argument*/NULL);
		// Screen.fullScreen = true;
		Screen_set_fullScreen_m51C070A017AAD9002C0B9ED5A6ADC76404F5DEDB((bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SettingsMenu::SetVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsMenu_SetVolume_m07F870FD0EA9932F48CF49446CE27E45BBFD760B (SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250 * __this, float ___volume0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SettingsMenu::SetSoundVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsMenu_SetSoundVolume_mFCA42DE3A9873F44BA3ED56648B22A7A0704FD61 (SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250 * __this, float ___volume0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SettingsMenu::SetFullScreen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsMenu_SetFullScreen_m8D503E5F48E4E8922085F0F5F3F8D26ECFD60E2D (SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250 * __this, bool ___isFullScreen0, const RuntimeMethod* method)
{
	{
		// Screen.fullScreen = isFullScreen;
		bool L_0 = ___isFullScreen0;
		Screen_set_fullScreen_m51C070A017AAD9002C0B9ED5A6ADC76404F5DEDB(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SettingsMenu::SetResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsMenu_SetResolution_m072DC255544752EE701798E89D37DA34474E2B22 (SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250 * __this, int32_t ___resolutionIndex0, const RuntimeMethod* method)
{
	Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Resolution resolution = resolutions[resolutionIndex];
		ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* L_0 = __this->get_resolutions_5();
		int32_t L_1 = ___resolutionIndex0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// Screen.SetResolution(resolution.width, resolution.height, Screen.fullScreen);
		int32_t L_4;
		L_4 = Resolution_get_width_mDD9DCC89D65057B64C413AF15BEE2E37E9892065((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Resolution_get_height_mB90F24337D7B96A288F8BE1D0F2F3599B785AD27((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)(&V_0), /*hidden argument*/NULL);
		bool L_6;
		L_6 = Screen_get_fullScreen_mE83864F0C9C773C03D3FBBAD981159238CA3565A(/*hidden argument*/NULL);
		Screen_SetResolution_m1C17EB7EDF8CDA862338782353D53DFF6742DFC5(L_4, L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SettingsMenu::ClearSavedData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsMenu_ClearSavedData_m58BAF291BC8CC66DB05BEF429B8DD5D6B60F86C2 (SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250 * __this, const RuntimeMethod* method)
{
	{
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_mAE4594C2D974BE67EC390E0FDECEDC59F17A12E0(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SettingsMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsMenu__ctor_mEE7E8FBE8EEE811B1F2AD035EBA04B35FC6ED9EF (SettingsMenu_tDFF876FE18C2395037FA9ECAF168B2C05D1D7250 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Shop::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Start_m511166AF24B2A3289A51FD338BFB6E39CD1B1A46 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	{
		// if (isAScene)
		bool L_0 = __this->get_isAScene_4();
		if (!L_0)
		{
			goto IL_0066;
		}
	}
	{
		// nameShop.text = scene.Name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_nameShop_10();
		Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A * L_2 = __this->get_scene_5();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_Name_5();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// image.sprite = scene.image;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_image_11();
		Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A * L_5 = __this->get_scene_5();
		NullCheck(L_5);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = L_5->get_image_8();
		NullCheck(L_4);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_4, L_6, /*hidden argument*/NULL);
		// price.text = scene.price.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_price_12();
		Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A * L_8 = __this->get_scene_5();
		NullCheck(L_8);
		int32_t* L_9 = L_8->get_address_of_price_7();
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_10);
		// if (scene.isBuy)
		Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A * L_11 = __this->get_scene_5();
		NullCheck(L_11);
		bool L_12 = L_11->get_isBuy_9();
		if (!L_12)
		{
			goto IL_012b;
		}
	}
	{
		// ChangeButtonBuy();
		Shop_ChangeButtonBuy_mA3EFF00D33F839745C0AD35234492300F5DE7F7D(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0066:
	{
		// else if (isASkin)
		bool L_13 = __this->get_isASkin_6();
		if (!L_13)
		{
			goto IL_00c9;
		}
	}
	{
		// nameShop.text = skin.Name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = __this->get_nameShop_10();
		Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8 * L_15 = __this->get_skin_7();
		NullCheck(L_15);
		String_t* L_16 = L_15->get_Name_5();
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
		// image.sprite = skin.image;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_17 = __this->get_image_11();
		Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8 * L_18 = __this->get_skin_7();
		NullCheck(L_18);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_19 = L_18->get_image_8();
		NullCheck(L_17);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_17, L_19, /*hidden argument*/NULL);
		// price.text = skin.price.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_price_12();
		Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8 * L_21 = __this->get_skin_7();
		NullCheck(L_21);
		int32_t* L_22 = L_21->get_address_of_price_7();
		String_t* L_23;
		L_23 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_23);
		// if (skin.isBuy)
		Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8 * L_24 = __this->get_skin_7();
		NullCheck(L_24);
		bool L_25 = L_24->get_isBuy_9();
		if (!L_25)
		{
			goto IL_012b;
		}
	}
	{
		// ChangeButtonBuy();
		Shop_ChangeButtonBuy_mA3EFF00D33F839745C0AD35234492300F5DE7F7D(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00c9:
	{
		// else if (isATrails)
		bool L_26 = __this->get_isATrails_8();
		if (!L_26)
		{
			goto IL_012b;
		}
	}
	{
		// nameShop.text = trails.Name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_27 = __this->get_nameShop_10();
		Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094 * L_28 = __this->get_trails_9();
		NullCheck(L_28);
		String_t* L_29 = L_28->get_Name_5();
		NullCheck(L_27);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_29);
		// image.sprite = trails.image;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30 = __this->get_image_11();
		Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094 * L_31 = __this->get_trails_9();
		NullCheck(L_31);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_32 = L_31->get_image_8();
		NullCheck(L_30);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_30, L_32, /*hidden argument*/NULL);
		// price.text = trails.price.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_33 = __this->get_price_12();
		Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094 * L_34 = __this->get_trails_9();
		NullCheck(L_34);
		int32_t* L_35 = L_34->get_address_of_price_7();
		String_t* L_36;
		L_36 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_36);
		// if (trails.isBuy)
		Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094 * L_37 = __this->get_trails_9();
		NullCheck(L_37);
		bool L_38 = L_37->get_isBuy_9();
		if (!L_38)
		{
			goto IL_012b;
		}
	}
	{
		// ChangeButtonBuy();
		Shop_ChangeButtonBuy_mA3EFF00D33F839745C0AD35234492300F5DE7F7D(__this, /*hidden argument*/NULL);
	}

IL_012b:
	{
		// }
		return;
	}
}
// System.Void Shop::Buy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Buy_mB9114689A0829C102707EBC3ED50B6F703F62FD4 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isAScene)
		bool L_0 = __this->get_isAScene_4();
		if (!L_0)
		{
			goto IL_00b3;
		}
	}
	{
		// if (! scene.isBuy && (MainMenu.instance.data.coins - scene.price) >= 0)
		Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A * L_1 = __this->get_scene_5();
		NullCheck(L_1);
		bool L_2 = L_1->get_isBuy_9();
		if (L_2)
		{
			goto IL_0079;
		}
	}
	{
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_3 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_3);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_4 = L_3->get_data_4();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_coins_4();
		Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A * L_6 = __this->get_scene_5();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_price_7();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_7))) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		// MainMenu.instance.data.coins -= scene.price;
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_8 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_8);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_9 = L_8->get_data_4();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_coins_4();
		Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A * L_12 = __this->get_scene_5();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_price_7();
		NullCheck(L_10);
		L_10->set_coins_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_13)));
		// scene.isBuy = true;
		Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A * L_14 = __this->get_scene_5();
		NullCheck(L_14);
		L_14->set_isBuy_9((bool)1);
		// ChangeButtonBuy();
		Shop_ChangeButtonBuy_mA3EFF00D33F839745C0AD35234492300F5DE7F7D(__this, /*hidden argument*/NULL);
		// MainMenu.instance.data.SaveData();
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_15 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_15);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_16 = L_15->get_data_4();
		NullCheck(L_16);
		Data_SaveData_mAD33D4B74F5903386D259EDEC3005729F32653F8(L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0079:
	{
		// else if (scene.isBuy)
		Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A * L_17 = __this->get_scene_5();
		NullCheck(L_17);
		bool L_18 = L_17->get_isBuy_9();
		if (!L_18)
		{
			goto IL_0215;
		}
	}
	{
		// MainMenu.instance.data.idScene = scene.id;
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_19 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_19);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_20 = L_19->get_data_4();
		Scenes_t7CEFA44F8AE7A78EB87C9510F01D32B5A9A2E56A * L_21 = __this->get_scene_5();
		NullCheck(L_21);
		int32_t L_22 = L_21->get_id_4();
		NullCheck(L_20);
		L_20->set_idScene_12(L_22);
		// MainMenu.instance.data.SaveData();
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_23 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_23);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_24 = L_23->get_data_4();
		NullCheck(L_24);
		Data_SaveData_mAD33D4B74F5903386D259EDEC3005729F32653F8(L_24, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b3:
	{
		// else if (isASkin)
		bool L_25 = __this->get_isASkin_6();
		if (!L_25)
		{
			goto IL_0166;
		}
	}
	{
		// if (! skin.isBuy && (MainMenu.instance.data.coins - skin.price) >= 0)
		Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8 * L_26 = __this->get_skin_7();
		NullCheck(L_26);
		bool L_27 = L_26->get_isBuy_9();
		if (L_27)
		{
			goto IL_012c;
		}
	}
	{
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_28 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_28);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_29 = L_28->get_data_4();
		NullCheck(L_29);
		int32_t L_30 = L_29->get_coins_4();
		Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8 * L_31 = __this->get_skin_7();
		NullCheck(L_31);
		int32_t L_32 = L_31->get_price_7();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_32))) < ((int32_t)0)))
		{
			goto IL_012c;
		}
	}
	{
		// MainMenu.instance.data.coins -= skin.price;
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_33 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_33);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_34 = L_33->get_data_4();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_35 = L_34;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_coins_4();
		Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8 * L_37 = __this->get_skin_7();
		NullCheck(L_37);
		int32_t L_38 = L_37->get_price_7();
		NullCheck(L_35);
		L_35->set_coins_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_38)));
		// skin.isBuy = true;
		Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8 * L_39 = __this->get_skin_7();
		NullCheck(L_39);
		L_39->set_isBuy_9((bool)1);
		// ChangeButtonBuy();
		Shop_ChangeButtonBuy_mA3EFF00D33F839745C0AD35234492300F5DE7F7D(__this, /*hidden argument*/NULL);
		// MainMenu.instance.data.SaveData();
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_40 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_40);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_41 = L_40->get_data_4();
		NullCheck(L_41);
		Data_SaveData_mAD33D4B74F5903386D259EDEC3005729F32653F8(L_41, /*hidden argument*/NULL);
		// }
		return;
	}

IL_012c:
	{
		// else if (skin.isBuy)
		Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8 * L_42 = __this->get_skin_7();
		NullCheck(L_42);
		bool L_43 = L_42->get_isBuy_9();
		if (!L_43)
		{
			goto IL_0215;
		}
	}
	{
		// MainMenu.instance.data.idSkin = skin.id;
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_44 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_44);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_45 = L_44->get_data_4();
		Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8 * L_46 = __this->get_skin_7();
		NullCheck(L_46);
		int32_t L_47 = L_46->get_id_4();
		NullCheck(L_45);
		L_45->set_idSkin_11(L_47);
		// MainMenu.instance.data.SaveData();
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_48 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_48);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_49 = L_48->get_data_4();
		NullCheck(L_49);
		Data_SaveData_mAD33D4B74F5903386D259EDEC3005729F32653F8(L_49, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0166:
	{
		// else if (isATrails)
		bool L_50 = __this->get_isATrails_8();
		if (!L_50)
		{
			goto IL_0215;
		}
	}
	{
		// if (! trails.isBuy && (MainMenu.instance.data.coins - trails.price) >= 0)
		Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094 * L_51 = __this->get_trails_9();
		NullCheck(L_51);
		bool L_52 = L_51->get_isBuy_9();
		if (L_52)
		{
			goto IL_01df;
		}
	}
	{
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_53 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_53);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_54 = L_53->get_data_4();
		NullCheck(L_54);
		int32_t L_55 = L_54->get_coins_4();
		Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094 * L_56 = __this->get_trails_9();
		NullCheck(L_56);
		int32_t L_57 = L_56->get_price_7();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)L_57))) < ((int32_t)0)))
		{
			goto IL_01df;
		}
	}
	{
		// MainMenu.instance.data.coins -= trails.price;
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_58 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_58);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_59 = L_58->get_data_4();
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_60 = L_59;
		NullCheck(L_60);
		int32_t L_61 = L_60->get_coins_4();
		Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094 * L_62 = __this->get_trails_9();
		NullCheck(L_62);
		int32_t L_63 = L_62->get_price_7();
		NullCheck(L_60);
		L_60->set_coins_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)L_63)));
		// trails.isBuy = true;
		Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094 * L_64 = __this->get_trails_9();
		NullCheck(L_64);
		L_64->set_isBuy_9((bool)1);
		// ChangeButtonBuy();
		Shop_ChangeButtonBuy_mA3EFF00D33F839745C0AD35234492300F5DE7F7D(__this, /*hidden argument*/NULL);
		// MainMenu.instance.data.SaveData();
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_65 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_65);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_66 = L_65->get_data_4();
		NullCheck(L_66);
		Data_SaveData_mAD33D4B74F5903386D259EDEC3005729F32653F8(L_66, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01df:
	{
		// else if (trails.isBuy)
		Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094 * L_67 = __this->get_trails_9();
		NullCheck(L_67);
		bool L_68 = L_67->get_isBuy_9();
		if (!L_68)
		{
			goto IL_0215;
		}
	}
	{
		// MainMenu.instance.data.idTrails = trails.id;
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_69 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_69);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_70 = L_69->get_data_4();
		Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094 * L_71 = __this->get_trails_9();
		NullCheck(L_71);
		int32_t L_72 = L_71->get_id_4();
		NullCheck(L_70);
		L_70->set_idTrails_13(L_72);
		// MainMenu.instance.data.SaveData();
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_73 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_73);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_74 = L_73->get_data_4();
		NullCheck(L_74);
		Data_SaveData_mAD33D4B74F5903386D259EDEC3005729F32653F8(L_74, /*hidden argument*/NULL);
	}

IL_0215:
	{
		// }
		return;
	}
}
// System.Void Shop::ChangeButtonBuy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_ChangeButtonBuy_mA3EFF00D33F839745C0AD35234492300F5DE7F7D (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	{
		// priceObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_priceObject_13();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// buy.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_buy_14();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// select.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_select_15();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Shop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop__ctor_m9321F06993F85B2AE2C6F4E443276AC9D48E738C (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ShopManager::OpenScenePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopManager_OpenScenePanel_mCA1DF857A01C56E29DFED73FADF353385ABB86FA (ShopManager_t34B2430F984DB95B4A3B35C0E69A0CC75014BAFB * __this, const RuntimeMethod* method)
{
	{
		// homePage.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_homePage_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// shopScenePanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_shopScenePanel_6();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopManager::CloseScenePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopManager_CloseScenePanel_mBACCF255692AE2EE62C93706CC3CEE0A239BA931 (ShopManager_t34B2430F984DB95B4A3B35C0E69A0CC75014BAFB * __this, const RuntimeMethod* method)
{
	{
		// homePage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_homePage_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// shopScenePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_shopScenePanel_6();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopManager::OpenSkinPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopManager_OpenSkinPanel_mE470E0867E32B0504F3205586E754F32B4187240 (ShopManager_t34B2430F984DB95B4A3B35C0E69A0CC75014BAFB * __this, const RuntimeMethod* method)
{
	{
		// homePage.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_homePage_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// shopSkinPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_shopSkinPanel_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopManager::CloseSkinPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopManager_CloseSkinPanel_mF29F4623CFA91E1ED9FD4EA6E9C54A78DAF4B22C (ShopManager_t34B2430F984DB95B4A3B35C0E69A0CC75014BAFB * __this, const RuntimeMethod* method)
{
	{
		// homePage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_homePage_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// shopSkinPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_shopSkinPanel_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopManager::OpenTrailsPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopManager_OpenTrailsPanel_m7EE760ECFAC346F87BF66E9906430AAEF75F4771 (ShopManager_t34B2430F984DB95B4A3B35C0E69A0CC75014BAFB * __this, const RuntimeMethod* method)
{
	{
		// homePage.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_homePage_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// shopTrailsPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_shopTrailsPanel_7();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopManager::CloseTrailsPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopManager_CloseTrailsPanel_m6787C3736205CAEE02F6E320F3B6F1AF6F1305AF (ShopManager_t34B2430F984DB95B4A3B35C0E69A0CC75014BAFB * __this, const RuntimeMethod* method)
{
	{
		// homePage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_homePage_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// shopTrailsPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_shopTrailsPanel_7();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopManager__ctor_m17F51E1D5BAC8936CFF6291ED10060049D3C8C23 (ShopManager_t34B2430F984DB95B4A3B35C0E69A0CC75014BAFB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ShowMissions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowMissions_Start_mE693864435AAAB71490B401B573747AF194D2309 (ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// title.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_title_9();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// description.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_description_10();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void ShowMissions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowMissions_Update_m9E9CA45DF2FF73C934F2CC6875D06992E755CD76 (ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showText)
		bool L_0 = __this->get_showText_7();
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		// title.text = missionToFinish.title;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_title_9();
		Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * L_2 = __this->get_missionToFinish_6();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_title_5();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// description.text = missionToFinish.description;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_description_10();
		Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * L_5 = __this->get_missionToFinish_6();
		NullCheck(L_5);
		String_t* L_6 = L_5->get_description_6();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// missionToFinish.activate = true;
		Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * L_7 = __this->get_missionToFinish_6();
		NullCheck(L_7);
		L_7->set_activate_8((bool)1);
		// }
		goto IL_0062;
	}

IL_0042:
	{
		// title.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_title_9();
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// description.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_description_10();
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_0062:
	{
		// if (missionToFinish.finish)
		Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * L_10 = __this->get_missionToFinish_6();
		NullCheck(L_10);
		bool L_11 = L_10->get_finish_9();
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// StartCoroutine(SwitchMission());
		RuntimeObject* L_12;
		L_12 = ShowMissions_SwitchMission_mFA470BDAF6D0BBB134CAAA83514DABE949FF27CD(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_13;
		L_13 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_12, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator ShowMissions::SwitchMission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShowMissions_SwitchMission_mFA470BDAF6D0BBB134CAAA83514DABE949FF27CD (ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667 * L_0 = (U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667 *)il2cpp_codegen_object_new(U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667_il2cpp_TypeInfo_var);
		U3CSwitchMissionU3Ed__9__ctor_mFCF29EF63544826411936C553063BB17ABC6BE33(L_0, 0, /*hidden argument*/NULL);
		U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void ShowMissions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowMissions__ctor_m9832C55D1188B6136079B74068479DBC55C34CB2 (ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Skin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skin__ctor_m3DACE6644CFF2C0DE17235ECE09150EB8FA0910A (Skin_tDA93A2EA1BA2A310A31A1654D9A4024FC5FA1FF8 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void SlideManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlideManager_Awake_m648E4CD51F835EA36CA125052BAF6323E99057AD (SlideManager_t000489F97B893AB0E626B408AD9E784D013DDB50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral191D4CB5360A2A37D768AD83EC8DECE96F8CFE1A);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var anima in animatorsSlide)
		AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2* L_0 = __this->get_animatorsSlide_5();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		// foreach (var anima in animatorsSlide)
		AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// anima.SetInteger("IdScene", data.idScene);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_5 = __this->get_data_4();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_idScene_12();
		NullCheck(L_4);
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_4, _stringLiteral191D4CB5360A2A37D768AD83EC8DECE96F8CFE1A, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0027:
	{
		// foreach (var anima in animatorsSlide)
		int32_t L_8 = V_1;
		AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SlideManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlideManager__ctor_mA389B9B9609B40C3152538951C947EA47F44E9E8 (SlideManager_t000489F97B893AB0E626B408AD9E784D013DDB50 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Trails::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trails__ctor_m5DC984B33243B31C78FD1C1FC48E22EFAD892DC8 (Trails_tB7E1AC218BD87374687762B6E0A4083C8C28F094 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void WeakSpot::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakSpot_OnTriggerEnter2D_m0C7D4AB3353FF3F1FD53247BE62941B1CDDDD7B2 (WeakSpot_t8F0D2FD393201EA9830153F3FC1C78871261904F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E39FF2E25E7C626101199E5389D85A5D4DF1D47);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.CompareTag("GroundCheck"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteral7E39FF2E25E7C626101199E5389D85A5D4DF1D47, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// Destroy(objectToDestroy);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_objectToDestroy_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// Game.instance.CreateSlide(transform.position);
		Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * L_3 = ((Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields*)il2cpp_codegen_static_fields_for(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var))->get_instance_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Game_CreateSlide_m946E054E110DC4344906AE005D3F9767B0AD2AD5(L_3, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void WeakSpot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakSpot__ctor_m206FFAA1D30BCB4C565B97E8CCFDB99F7FF8DE56 (WeakSpot_t8F0D2FD393201EA9830153F3FC1C78871261904F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Barrier/<BoxEnabled>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBoxEnabledU3Ed__9__ctor_mDFE8170626C8C5F14FA5C3A8C7B8E49F30BBA5AE (U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Barrier/<BoxEnabled>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBoxEnabledU3Ed__9_System_IDisposable_Dispose_m6505A71A6AC2C570519773E450E3EE73E47FEBDC (U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Barrier/<BoxEnabled>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBoxEnabledU3Ed__9_MoveNext_mE1C2F6F308B226B90C8BCC1ACD50A5CF8E0846AA (U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// box.enabled = false;
		Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 * L_4 = V_1;
		NullCheck(L_4);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_5 = L_4->get_box_7();
		NullCheck(L_5);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)0, /*hidden argument*/NULL);
		goto IL_004c;
	}

IL_002c:
	{
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004c:
	{
		// while (transform.position.y >= PlayerMovement.instance.transform.position.y - 3)
		Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 * L_7 = V_1;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_11 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		if ((((float)L_10) >= ((float)((float)il2cpp_codegen_subtract((float)L_14, (float)(3.0f))))))
		{
			goto IL_002c;
		}
	}
	{
		// box.enabled = true;
		Barrier_t9AB9E14270C81F5FC0DA93DC85127426B2962580 * L_15 = V_1;
		NullCheck(L_15);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_16 = L_15->get_box_7();
		NullCheck(L_16);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_16, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Barrier/<BoxEnabled>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBoxEnabledU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF12F354181BEF1DF409E50E465885A8484AA9401 (U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Barrier/<BoxEnabled>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBoxEnabledU3Ed__9_System_Collections_IEnumerator_Reset_m3555957DF2F7887DEDA1262B5D2A2D585FA3EC5A (U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBoxEnabledU3Ed__9_System_Collections_IEnumerator_Reset_m3555957DF2F7887DEDA1262B5D2A2D585FA3EC5A_RuntimeMethod_var)));
	}
}
// System.Object Barrier/<BoxEnabled>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBoxEnabledU3Ed__9_System_Collections_IEnumerator_get_Current_m0F6B516154D52D4C3E757B5CD17626383304868E (U3CBoxEnabledU3Ed__9_tED2474F471BD6B1147F5A8C2DA0E62BE20701D15 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Enemy/<Attack>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__16__ctor_m755435C46EA0D95CE762DE2FA8F1CCFF2DE4CB41 (U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Enemy/<Attack>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__16_System_IDisposable_Dispose_mEBC8E72C2F4A7B11D4BAA27DB58234DA0F99AA30 (U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Enemy/<Attack>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackU3Ed__16_MoveNext_m1DFBD6D3475A30EC5D23077EEDA1D720E137155B (U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PlayerHealth.instance.TakeDamage(1);
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_4 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_4);
		PlayerHealth_TakeDamage_m21F4EA70549D145406E078F0543A934DE498FDB7(L_4, 1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, (1.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Destroy(toDestroy);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_6 = V_1;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = L_6->get_toDestroy_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_7, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Enemy/<Attack>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCA1EBD8A8003FC1D1174E4931B476100CDB44260 (U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Enemy/<Attack>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__16_System_Collections_IEnumerator_Reset_m70B2F7C87B9C72584DA4F3C7DFF4327266A85C9D (U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackU3Ed__16_System_Collections_IEnumerator_Reset_m70B2F7C87B9C72584DA4F3C7DFF4327266A85C9D_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<Attack>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackU3Ed__16_System_Collections_IEnumerator_get_Current_mFE19C90442E1EA2CC519A8C6C58183C4503869BE (U3CAttackU3Ed__16_tF5B0E84365BBB187D2EB308DEE3628815090BBE9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Enemy/<Die>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDieU3Ed__15__ctor_m0A4E027F772DE584151251BDD894D647B886E215 (U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Enemy/<Die>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDieU3Ed__15_System_IDisposable_Dispose_m02E8B62ADEA2F38E10EFF9E36EB1951523E05560 (U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Enemy/<Die>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDieU3Ed__15_MoveNext_m731B5EC93D74DB703682EA3D106EB93F62F84C42 (U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08EF1409295A748F17C961491378A3B6215AA838);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0065;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Inventory.instance.nbKillMoob += 1;
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_4 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_nbKillMoob_5();
		NullCheck(L_5);
		L_5->set_nbKillMoob_5(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		// box.enabled = false;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_7 = V_1;
		NullCheck(L_7);
		PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * L_8 = L_7->get_box_6();
		NullCheck(L_8);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_8, (bool)0, /*hidden argument*/NULL);
		// animator.SetTrigger("Die");
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_9 = V_1;
		NullCheck(L_9);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_10 = L_9->get_animator_8();
		NullCheck(L_10);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_10, _stringLiteral08EF1409295A748F17C961491378A3B6215AA838, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_11 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_11, (1.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0065:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Destroy(toDestroy);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_12 = V_1;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_toDestroy_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_13, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Enemy/<Die>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDieU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAB92DA20F6BCA64E8F3A6C62E19AF2430164A531 (U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Enemy/<Die>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDieU3Ed__15_System_Collections_IEnumerator_Reset_m44D0A9F2EF2F8370C87F823CD4A91D464D82C5DD (U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDieU3Ed__15_System_Collections_IEnumerator_Reset_m44D0A9F2EF2F8370C87F823CD4A91D464D82C5DD_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<Die>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDieU3Ed__15_System_Collections_IEnumerator_get_Current_mEA6693D265EA6E2EEF1BFD4D2D2B112FA4C95F9F (U3CDieU3Ed__15_t851B64DB7BC89416091213CD21B54B6C6285FF1D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EnvironmentFixe/<BoxEnabled>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBoxEnabledU3Ed__4__ctor_mB01EF1B44D0EE35F32F9F14684B3C43D1BC58853 (U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EnvironmentFixe/<BoxEnabled>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBoxEnabledU3Ed__4_System_IDisposable_Dispose_m36D5587142063BCB2C39B4728CFAC5652DFDE682 (U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EnvironmentFixe/<BoxEnabled>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBoxEnabledU3Ed__4_MoveNext_mBD19B6B334E886D9386CD25A76FACCD11B2BD44F (U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// box.enabled = false;
		EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791 * L_4 = V_1;
		NullCheck(L_4);
		PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * L_5 = L_4->get_box_5();
		NullCheck(L_5);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)0, /*hidden argument*/NULL);
		goto IL_004c;
	}

IL_002c:
	{
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004c:
	{
		// while (transform.position.y >= PlayerMovement.instance.transform.position.y - 3)
		EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791 * L_7 = V_1;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_11 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		if ((((float)L_10) >= ((float)((float)il2cpp_codegen_subtract((float)L_14, (float)(3.0f))))))
		{
			goto IL_002c;
		}
	}
	{
		// box.enabled = true;
		EnvironmentFixe_t1F74E894C40613BB68220E0462E7A7C230E52791 * L_15 = V_1;
		NullCheck(L_15);
		PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * L_16 = L_15->get_box_5();
		NullCheck(L_16);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_16, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object EnvironmentFixe/<BoxEnabled>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBoxEnabledU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2E378AFBE3AEECA25DB3EE62315F2D79A3D79D47 (U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EnvironmentFixe/<BoxEnabled>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBoxEnabledU3Ed__4_System_Collections_IEnumerator_Reset_m755DC319AA494CC0046C626428D3311FAC0529C7 (U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBoxEnabledU3Ed__4_System_Collections_IEnumerator_Reset_m755DC319AA494CC0046C626428D3311FAC0529C7_RuntimeMethod_var)));
	}
}
// System.Object EnvironmentFixe/<BoxEnabled>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBoxEnabledU3Ed__4_System_Collections_IEnumerator_get_Current_m670D6FC0D8ECBF8A03D9465E945CAD744AEE1595 (U3CBoxEnabledU3Ed__4_t36A83B5FF6DA7B32060F3FB833F3DDF4D14834C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Game/<speedUpgrade>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspeedUpgradeU3Ed__15__ctor_mA1BBB97C8639D2BA21235AAAA7F33780E32200BD (U3CspeedUpgradeU3Ed__15_tBA27EF2D54484307173E3AAA7DBEC841446B6BAC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Game/<speedUpgrade>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspeedUpgradeU3Ed__15_System_IDisposable_Dispose_m332AB726D1D2E89C27E70E6275B99A21B8C0B45D (U3CspeedUpgradeU3Ed__15_tBA27EF2D54484307173E3AAA7DBEC841446B6BAC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Game/<speedUpgrade>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CspeedUpgradeU3Ed__15_MoveNext_mA41974EBEE5D65D8249D5ED2BCC2A5CAB946159A (U3CspeedUpgradeU3Ed__15_tBA27EF2D54484307173E3AAA7DBEC841446B6BAC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0065;
	}

IL_0019:
	{
		// yield return new WaitForSeconds(10f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (10.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PlayerMovement.instance.speed += 0.5f;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_4 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_5 = L_4;
		NullCheck(L_5);
		float L_6 = L_5->get_speed_4();
		NullCheck(L_5);
		L_5->set_speed_4(((float)il2cpp_codegen_add((float)L_6, (float)(0.5f))));
		// CameraWaypoint.instance.speed += 0.5f;
		CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * L_7 = ((CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_StaticFields*)il2cpp_codegen_static_fields_for(CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_il2cpp_TypeInfo_var))->get_instance_7();
		CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * L_8 = L_7;
		NullCheck(L_8);
		float L_9 = L_8->get_speed_4();
		NullCheck(L_8);
		L_8->set_speed_4(((float)il2cpp_codegen_add((float)L_9, (float)(0.5f))));
	}

IL_0065:
	{
		// while (true && Game.instance.gameIsStart && CameraWaypoint.instance.speed <= 7)
		Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * L_10 = ((Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields*)il2cpp_codegen_static_fields_for(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var))->get_instance_10();
		NullCheck(L_10);
		bool L_11 = L_10->get_gameIsStart_8();
		if (!L_11)
		{
			goto IL_0082;
		}
	}
	{
		CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525 * L_12 = ((CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_StaticFields*)il2cpp_codegen_static_fields_for(CameraWaypoint_t661B190E217902E0870B369F468BB101B91FA525_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_12);
		float L_13 = L_12->get_speed_4();
		if ((((float)L_13) <= ((float)(7.0f))))
		{
			goto IL_0019;
		}
	}

IL_0082:
	{
		// }
		return (bool)0;
	}
}
// System.Object Game/<speedUpgrade>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CspeedUpgradeU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8542EDB1D62FB263B4645A8EBD3AD51239D4099F (U3CspeedUpgradeU3Ed__15_tBA27EF2D54484307173E3AAA7DBEC841446B6BAC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Game/<speedUpgrade>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspeedUpgradeU3Ed__15_System_Collections_IEnumerator_Reset_mFD2B9C1302AB4CFB794267E0742DB542DE086395 (U3CspeedUpgradeU3Ed__15_tBA27EF2D54484307173E3AAA7DBEC841446B6BAC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CspeedUpgradeU3Ed__15_System_Collections_IEnumerator_Reset_mFD2B9C1302AB4CFB794267E0742DB542DE086395_RuntimeMethod_var)));
	}
}
// System.Object Game/<speedUpgrade>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CspeedUpgradeU3Ed__15_System_Collections_IEnumerator_get_Current_m0FC9D9290B7F3C277E298D3B1D0D83335962329D (U3CspeedUpgradeU3Ed__15_tBA27EF2D54484307173E3AAA7DBEC841446B6BAC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void GameOverManager/<Wait>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__10__ctor_mA8F25107AA8378C18F7300007CD2714CB312EBCE (U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameOverManager/<Wait>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__10_System_IDisposable_Dispose_mFF2CCCF7AB4F7E927550BA88446FBAD095E0E0B6 (U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameOverManager/<Wait>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitU3Ed__10_MoveNext_mD64DF2DA863D1A9450ADD572E41CA15DAB24A36B (U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// gameOverUI.SetActive(true);
		GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_gameOverUI_4();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// panelGame.SetActive(false);
		GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * L_7 = V_1;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_panelGame_5();
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// Game.instance.GameStop();
		Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * L_9 = ((Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields*)il2cpp_codegen_static_fields_for(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var))->get_instance_10();
		NullCheck(L_9);
		Game_GameStop_mA3A256ADB1EBABB5D2371C3844A50B56B4784073(L_9, /*hidden argument*/NULL);
		// scoreText.text = Inventory.instance.score.ToString();
		GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * L_10 = V_1;
		NullCheck(L_10);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = L_10->get_scoreText_7();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_12 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_12);
		float* L_13 = L_12->get_address_of_score_8();
		String_t* L_14;
		L_14 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_14);
		// nbBarrier.text = Inventory.instance.nbBarrier.ToString();
		GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * L_15 = V_1;
		NullCheck(L_15);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = L_15->get_nbBarrier_8();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_17 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_17);
		int32_t* L_18 = L_17->get_address_of_nbBarrier_6();
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
		// nbKillMoob.text = Inventory.instance.nbKillMoob.ToString();
		GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * L_20 = V_1;
		NullCheck(L_20);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = L_20->get_nbKillMoob_9();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_22 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_22);
		int32_t* L_23 = L_22->get_address_of_nbKillMoob_5();
		String_t* L_24;
		L_24 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_24);
		// nbBonus.text = Inventory.instance.nbBonus.ToString();
		GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * L_25 = V_1;
		NullCheck(L_25);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_26 = L_25->get_nbBonus_10();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_27 = ((Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_StaticFields*)il2cpp_codegen_static_fields_for(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_il2cpp_TypeInfo_var))->get_instance_15();
		NullCheck(L_27);
		int32_t* L_28 = L_27->get_address_of_nbBonus_7();
		String_t* L_29;
		L_29 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_29);
		// }
		return (bool)0;
	}
}
// System.Object GameOverManager/<Wait>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD7B3B7BBB42465AFAEE1371183F90E55211BF27D (U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameOverManager/<Wait>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__10_System_Collections_IEnumerator_Reset_m86714F8AEEACF6E62E4F56B2BE177F51A824F444 (U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitU3Ed__10_System_Collections_IEnumerator_Reset_m86714F8AEEACF6E62E4F56B2BE177F51A824F444_RuntimeMethod_var)));
	}
}
// System.Object GameOverManager/<Wait>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitU3Ed__10_System_Collections_IEnumerator_get_Current_mD1008A42E497EB3DDC50CDB74C9BE32B73549064 (U3CWaitU3Ed__10_t8FCF683D1829E1E507F35A5AC09AD20266444E81 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PauseMenu/<CountDown>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountDownU3Ed__21__ctor_m03DFADA18B39B994B1C9B383B18135A185A42BF1 (U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PauseMenu/<CountDown>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountDownU3Ed__21_System_IDisposable_Dispose_m647F647503DA58FBEB6C55B48098E923F2083BE4 (U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PauseMenu/<CountDown>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCountDownU3Ed__21_MoveNext_m020683C2CA3D50200656C1C555A4B04A51702F84 (U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0056;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int nb = 3;
		__this->set_U3CnbU3E5__2_3(3);
		goto IL_006b;
	}

IL_0027:
	{
		// countDown.text = nb.ToString();
		PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * L_4 = V_1;
		NullCheck(L_4);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = L_4->get_countDown_13();
		int32_t* L_6 = __this->get_address_of_U3CnbU3E5__2_3();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_8 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_8, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0056:
	{
		__this->set_U3CU3E1__state_0((-1));
		// nb -= 1;
		int32_t L_9 = __this->get_U3CnbU3E5__2_3();
		__this->set_U3CnbU3E5__2_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)));
	}

IL_006b:
	{
		// while (nb > 0)
		int32_t L_10 = __this->get_U3CnbU3E5__2_3();
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// countDown.text = "";
		PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * L_11 = V_1;
		NullCheck(L_11);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = L_11->get_countDown_13();
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// Game.instance.GameStart();
		Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE * L_13 = ((Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_StaticFields*)il2cpp_codegen_static_fields_for(Game_tBF310511B1E996F85E0F6C8DDB925EB46D2E78EE_il2cpp_TypeInfo_var))->get_instance_10();
		NullCheck(L_13);
		Game_GameStart_mC9EE34FC7776F3871EC996964D6925B054B90B91(L_13, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object PauseMenu/<CountDown>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCountDownU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6EA7066574025456FCD58B4C6D7DA3142506FB72 (U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PauseMenu/<CountDown>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountDownU3Ed__21_System_Collections_IEnumerator_Reset_mC40FAFCAADE1299F479FC0CE5A1E709D60A50CD2 (U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCountDownU3Ed__21_System_Collections_IEnumerator_Reset_mC40FAFCAADE1299F479FC0CE5A1E709D60A50CD2_RuntimeMethod_var)));
	}
}
// System.Object PauseMenu/<CountDown>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCountDownU3Ed__21_System_Collections_IEnumerator_get_Current_m4A1189D83FBEDE817157FDCB3635F3246A9B644C (U3CCountDownU3Ed__21_t1E0A11D9B03A248E553EE2BF37B0936C62E14BF2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PlayerEffects/<InvinsiblePlayer>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvinsiblePlayerU3Ed__5__ctor_m039F699269F3D257CF79851F16244FA59ABA6278 (U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerEffects/<InvinsiblePlayer>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvinsiblePlayerU3Ed__5_System_IDisposable_Dispose_m78035087607945593A2849C8AEBECB9C7027E246 (U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerEffects/<InvinsiblePlayer>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInvinsiblePlayerU3Ed__5_MoveNext_m7B0185460B3B6EF58468C9FE072248941B75116A (U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral024F86D4724F3BA4CCBF7636C4C55EEF2E09B7DF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * L_1 = __this->get_U3CU3E4__this_3();
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
				goto IL_0078;
			}
			case 2:
			{
				goto IL_00bf;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PlayerHealth.instance.isInvincible = true;
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_3 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_3);
		L_3->set_isInvincible_9((bool)1);
		// PlayerMovement.instance.isAttack = true;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_4 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_4);
		L_4->set_isAttack_8((bool)1);
		// PlayerMovement.instance.animator.SetTrigger("Invinsible");
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_5 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_5);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = L_5->get_animator_10();
		NullCheck(L_6);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_6, _stringLiteral024F86D4724F3BA4CCBF7636C4C55EEF2E09B7DF, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(time - PlayerHealth.instance.invincibilityTimeAfterHit);
		float L_7 = __this->get_time_2();
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_8 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_8);
		float L_9 = L_8->get_invincibilityTimeAfterHit_7();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_10 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_10, ((float)il2cpp_codegen_subtract((float)L_7, (float)L_9)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0078:
	{
		__this->set_U3CU3E1__state_0((-1));
		// StartCoroutine(PlayerHealth.instance.InvincibilityFlash());
		PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * L_11 = V_1;
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_12 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = PlayerHealth_InvincibilityFlash_m380A77358C6310FDD304EFE498FFB48CAAE6EA00(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_14;
		L_14 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_11, L_13, /*hidden argument*/NULL);
		// StartCoroutine(PlayerHealth.instance.HandleInvincibilityDelay());
		PlayerEffects_t85C4B6E5822559DD7CAA7C3905DC00BCE743C5A4 * L_15 = V_1;
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_16 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = PlayerHealth_HandleInvincibilityDelay_m164E6D50C83D8EB27AEEA51CA7499ADAA9BD5229(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_18;
		L_18 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_15, L_17, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(PlayerHealth.instance.invincibilityTimeAfterHit);
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_19 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_19);
		float L_20 = L_19->get_invincibilityTimeAfterHit_7();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_21 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_21, L_20, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_21);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00bf:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PlayerHealth.instance.isInvincible = false;
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_22 = ((PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465_il2cpp_TypeInfo_var))->get_instance_11();
		NullCheck(L_22);
		L_22->set_isInvincible_9((bool)0);
		// PlayerMovement.instance.isAttack = false;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_23 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_23);
		L_23->set_isAttack_8((bool)0);
		// PlayerMovement.instance.animator.ResetTrigger("Invinsible");
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_24 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_24);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_25 = L_24->get_animator_10();
		NullCheck(L_25);
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_25, _stringLiteral024F86D4724F3BA4CCBF7636C4C55EEF2E09B7DF, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerEffects/<InvinsiblePlayer>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CInvinsiblePlayerU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9CA39B260B42494440494D22F7789C8AFB8F7DD4 (U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerEffects/<InvinsiblePlayer>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvinsiblePlayerU3Ed__5_System_Collections_IEnumerator_Reset_m853687D6B555DA1A62EC37EE113B882A1D944F45 (U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInvinsiblePlayerU3Ed__5_System_Collections_IEnumerator_Reset_m853687D6B555DA1A62EC37EE113B882A1D944F45_RuntimeMethod_var)));
	}
}
// System.Object PlayerEffects/<InvinsiblePlayer>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CInvinsiblePlayerU3Ed__5_System_Collections_IEnumerator_get_Current_m2F5707EF54D4EB4FF86232C93E0CE298C93DD0F5 (U3CInvinsiblePlayerU3Ed__5_t4ADF0B2F1AB10938AB0F1F3285792F606D858F20 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PlayerEffects/<RemoveSpeed>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRemoveSpeedU3Ed__7__ctor_mA17F7494229E7394E299DFDF7DAE700848205878 (U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerEffects/<RemoveSpeed>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRemoveSpeedU3Ed__7_System_IDisposable_Dispose_m2D2BE4BB83FACD91A5B60E1D73E6513E4CEC0D4B (U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerEffects/<RemoveSpeed>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRemoveSpeedU3Ed__7_MoveNext_m2ABED6A7AC332681DA3711246F1C8559D184FC2A (U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(speedDuration);
		float L_3 = __this->get_speedDuration_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PlayerMovement.instance.speed -= speedGiven;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_5 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_6 = L_5;
		NullCheck(L_6);
		float L_7 = L_6->get_speed_4();
		int32_t L_8 = __this->get_speedGiven_3();
		NullCheck(L_6);
		L_6->set_speed_4(((float)il2cpp_codegen_subtract((float)L_7, (float)((float)((float)L_8)))));
		// }
		return (bool)0;
	}
}
// System.Object PlayerEffects/<RemoveSpeed>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRemoveSpeedU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mADA7CC8DB0917731A20DDE8ACD0A7789429C0B9B (U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerEffects/<RemoveSpeed>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRemoveSpeedU3Ed__7_System_Collections_IEnumerator_Reset_m21A50B2363C79AE9DC93B13DD4C4FD19FAB9030C (U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRemoveSpeedU3Ed__7_System_Collections_IEnumerator_Reset_m21A50B2363C79AE9DC93B13DD4C4FD19FAB9030C_RuntimeMethod_var)));
	}
}
// System.Object PlayerEffects/<RemoveSpeed>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRemoveSpeedU3Ed__7_System_Collections_IEnumerator_get_Current_m1EB8428693B8FA3118EE94342AC4DD7241211991 (U3CRemoveSpeedU3Ed__7_t46BDB9003E77DD16445473B8FB11017EB1C626DE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PlayerHealth/<HandleInvincibilityDelay>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleInvincibilityDelayU3Ed__15__ctor_m8D415DB4D8E04D9E8E6651B43C5488D6F30CF773 (U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerHealth/<HandleInvincibilityDelay>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleInvincibilityDelayU3Ed__15_System_IDisposable_Dispose_m59A2C9074A7EFE91E6CC3436EB746CE0C54C3A75 (U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerHealth/<HandleInvincibilityDelay>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHandleInvincibilityDelayU3Ed__15_MoveNext_m516B8654471644E3B284EE5A8A41FA8A771B26FA (U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(invincibilityTimeAfterHit);
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_invincibilityTimeAfterHit_7();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PlayerMovement.instance.isAttack = false;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_7 = ((PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_il2cpp_TypeInfo_var))->get_instance_19();
		NullCheck(L_7);
		L_7->set_isAttack_8((bool)0);
		// isInvincible = false;
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_8 = V_1;
		NullCheck(L_8);
		L_8->set_isInvincible_9((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object PlayerHealth/<HandleInvincibilityDelay>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CHandleInvincibilityDelayU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC20D8147ADE9E6EBDC792FFC036FDB6637B89EFD (U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerHealth/<HandleInvincibilityDelay>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleInvincibilityDelayU3Ed__15_System_Collections_IEnumerator_Reset_m2F915E6E91AFD7F5C3C30D3C60036E28019ED170 (U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHandleInvincibilityDelayU3Ed__15_System_Collections_IEnumerator_Reset_m2F915E6E91AFD7F5C3C30D3C60036E28019ED170_RuntimeMethod_var)));
	}
}
// System.Object PlayerHealth/<HandleInvincibilityDelay>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CHandleInvincibilityDelayU3Ed__15_System_Collections_IEnumerator_get_Current_m55C6987257EC4CB35D1AA17389F893F8C4449384 (U3CHandleInvincibilityDelayU3Ed__15_t55BA06ADC3B616542558D57CC857D06F4C9988BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PlayerHealth/<InvincibilityFlash>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvincibilityFlashU3Ed__14__ctor_mCFDAD41304609DE57E8E610DD46FAEFDE4C15351 (U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerHealth/<InvincibilityFlash>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvincibilityFlashU3Ed__14_System_IDisposable_Dispose_m614F71980B59BFDCC02F9BCC63F22258896929E5 (U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerHealth/<InvincibilityFlash>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInvincibilityFlashU3Ed__14_MoveNext_mF8A9CF4F485AD4ED2BD7D05474D37FDD6573E697 (U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_006c;
			}
			case 2:
			{
				goto IL_00b1;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00b8;
	}

IL_002e:
	{
		// graphics.color = new Color(1f, 1f, 1f, 0f);
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_3 = V_1;
		NullCheck(L_3);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = L_3->get_graphics_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_5), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_4, L_5, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(invincibilityFlashDelay);
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->get_invincibilityFlashDelay_8();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_8 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// graphics.color = new Color(1f, 1f, 1f, 1f);
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_9 = V_1;
		NullCheck(L_9);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_10 = L_9->get_graphics_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_11), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_10, L_11, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(invincibilityFlashDelay);
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->get_invincibilityFlashDelay_8();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_14 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_14, L_13, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00b1:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00b8:
	{
		// while (isInvincible)
		PlayerHealth_tC1C9C8425A66FBA2BCAEC86CBFC5FEAF4E260465 * L_15 = V_1;
		NullCheck(L_15);
		bool L_16 = L_15->get_isInvincible_9();
		if (L_16)
		{
			goto IL_002e;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object PlayerHealth/<InvincibilityFlash>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CInvincibilityFlashU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m98ECA72158DFF54978853DC56CC938871F5AE575 (U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerHealth/<InvincibilityFlash>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvincibilityFlashU3Ed__14_System_Collections_IEnumerator_Reset_m2BC28A1E558777E6FA1D44761E818E579FF61FA5 (U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInvincibilityFlashU3Ed__14_System_Collections_IEnumerator_Reset_m2BC28A1E558777E6FA1D44761E818E579FF61FA5_RuntimeMethod_var)));
	}
}
// System.Object PlayerHealth/<InvincibilityFlash>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CInvincibilityFlashU3Ed__14_System_Collections_IEnumerator_get_Current_m8BA233B8C826C7C220A596BD8176F6712FBFC64A (U3CInvincibilityFlashU3Ed__14_t2B902F139B5FA32C121A32C379E78BFA3980095E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PlayerMovement/<Attack>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__20__ctor_mE31074A1A252000C42CA8BF9A51FEAEDD2AB04F9 (U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerMovement/<Attack>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__20_System_IDisposable_Dispose_m298184CF642CA0795EC7B966E5EC38F7AEA7C9B6 (U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerMovement/<Attack>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackU3Ed__20_MoveNext_mA926D083F9F3C7CF4AE77EFB8AB31D8309659599 (U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_0075;
			}
			case 2:
			{
				goto IL_009c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (canAttack)
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_3 = V_1;
		NullCheck(L_3);
		bool L_4 = L_3->get_canAttack_9();
		if (!L_4)
		{
			goto IL_00ba;
		}
	}
	{
		// Debug.Log("Attack");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, /*hidden argument*/NULL);
		// isAttack = true;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_5 = V_1;
		NullCheck(L_5);
		L_5->set_isAttack_8((bool)1);
		// canAttack = false;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_6 = V_1;
		NullCheck(L_6);
		L_6->set_canAttack_9((bool)0);
		// animator.SetTrigger("Attack");
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_7 = V_1;
		NullCheck(L_7);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = L_7->get_animator_10();
		NullCheck(L_8);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_8, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.8f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_9 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_9, (0.800000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0075:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isAttack = false;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_10 = V_1;
		NullCheck(L_10);
		L_10->set_isAttack_8((bool)0);
		// yield return new WaitForSeconds(0.7f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_11 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_11, (0.699999988f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_009c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// animator.ResetTrigger("Attack");
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_12 = V_1;
		NullCheck(L_12);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_13 = L_12->get_animator_10();
		NullCheck(L_13);
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_13, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, /*hidden argument*/NULL);
		// canAttack = true;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_14 = V_1;
		NullCheck(L_14);
		L_14->set_canAttack_9((bool)1);
	}

IL_00ba:
	{
		// }
		return (bool)0;
	}
}
// System.Object PlayerMovement/<Attack>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEF729466C6797330BC4BA4285250DDF9069EC5F3 (U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerMovement/<Attack>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__20_System_Collections_IEnumerator_Reset_mBA0AD0789C990B2EEF9190532645D4CBB47440D8 (U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackU3Ed__20_System_Collections_IEnumerator_Reset_mBA0AD0789C990B2EEF9190532645D4CBB47440D8_RuntimeMethod_var)));
	}
}
// System.Object PlayerMovement/<Attack>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackU3Ed__20_System_Collections_IEnumerator_get_Current_m2ED36AF3B87A5E1495B83F93B2926CE68E08F8F5 (U3CAttackU3Ed__20_tDD98F408D20CD634B37A09D8FF17C7E6E26B5A60 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void SettingsMenu/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m74DD878702677FE0E893B4A2CB5F44B032E5BBA8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17 * L_0 = (U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17 *)il2cpp_codegen_object_new(U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m86DCF1AF43778A4436B12A94DD0A901F3CCC597A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SettingsMenu/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m86DCF1AF43778A4436B12A94DD0A901F3CCC597A (U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Resolution SettingsMenu/<>c::<Start>b__4_0(UnityEngine.Resolution)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  U3CU3Ec_U3CStartU3Eb__4_0_m14E50CA056F9E3085EB98A8D8620759E56807F2D (U3CU3Ec_t1C16755C00C066CE83CB9274E41B97B63B4FEB17 * __this, Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  ___resolution0, const RuntimeMethod* method)
{
	Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// resolutions = Screen.resolutions.Select(resolution => new Resolution { width = resolution.width, height = resolution.height }).Distinct().ToArray();
		il2cpp_codegen_initobj((&V_0), sizeof(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 ));
		int32_t L_0;
		L_0 = Resolution_get_width_mDD9DCC89D65057B64C413AF15BEE2E37E9892065((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)(&___resolution0), /*hidden argument*/NULL);
		Resolution_set_width_m089E61EBF4EB6542CC27970730864BD6326DA512((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)(&V_0), L_0, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Resolution_get_height_mB90F24337D7B96A288F8BE1D0F2F3599B785AD27((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)(&___resolution0), /*hidden argument*/NULL);
		Resolution_set_height_m3A041FC30AD52D98A3EC579E9132C836EA61864E((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)(&V_0), L_1, /*hidden argument*/NULL);
		Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  L_2 = V_0;
		return L_2;
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
// System.Void ShowMissions/<SwitchMission>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchMissionU3Ed__9__ctor_mFCF29EF63544826411936C553063BB17ABC6BE33 (U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ShowMissions/<SwitchMission>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchMissionU3Ed__9_System_IDisposable_Dispose_mE28140A81F6D360862FAE53518BD1E17AC48EB8D (U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ShowMissions/<SwitchMission>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSwitchMissionU3Ed__9_MoveNext_m07F2A0F3F6E86B2E44F19154274095A535524800 (U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_006f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// animator.SetTrigger("Finish");
		ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC * L_4 = V_1;
		NullCheck(L_4);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = L_4->get_animator_8();
		NullCheck(L_5);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_5, _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, /*hidden argument*/NULL);
		// showText = false;
		ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC * L_6 = V_1;
		NullCheck(L_6);
		L_6->set_showText_7((bool)0);
		// missionToFinish = mission2;
		ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC * L_7 = V_1;
		ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC * L_8 = V_1;
		NullCheck(L_8);
		Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * L_9 = L_8->get_mission2_5();
		NullCheck(L_7);
		L_7->set_missionToFinish_6(L_9);
		// MainMenu.instance.data.mission1InProgress = mission2;
		MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * L_10 = ((MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_StaticFields*)il2cpp_codegen_static_fields_for(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C_il2cpp_TypeInfo_var))->get_instance_12();
		NullCheck(L_10);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_11 = L_10->get_data_4();
		ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC * L_12 = V_1;
		NullCheck(L_12);
		Missions_tBEB12995FBE657C3140626C636F3335F2595E898 * L_13 = L_12->get_mission2_5();
		NullCheck(L_11);
		L_11->set_mission1InProgress_14(L_13);
		// yield return new WaitForSeconds(7.4f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_14 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_14, (7.4000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// animator.ResetTrigger("Finish");
		ShowMissions_t1FA19092CEEDC55786352B5455B51A5477DC80AC * L_15 = V_1;
		NullCheck(L_15);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_16 = L_15->get_animator_8();
		NullCheck(L_16);
		Animator_ResetTrigger_m02F8CF7EABE466CC3D008A8538171E14BFB907FA(L_16, _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ShowMissions/<SwitchMission>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSwitchMissionU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5186219A6BF7CE121D8F81CFD8EAAF09D5B22009 (U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ShowMissions/<SwitchMission>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchMissionU3Ed__9_System_Collections_IEnumerator_Reset_m496698E9B4093FC731683F0ABF545A94D974D682 (U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwitchMissionU3Ed__9_System_Collections_IEnumerator_Reset_m496698E9B4093FC731683F0ABF545A94D974D682_RuntimeMethod_var)));
	}
}
// System.Object ShowMissions/<SwitchMission>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSwitchMissionU3Ed__9_System_Collections_IEnumerator_get_Current_mEC798FC06775AD8C82724C14DCEDE7FA43BB8625 (U3CSwitchMissionU3Ed__9_tC4CBA71F9479D1BE5F099FFF7FFFAA9E6DC94667 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
