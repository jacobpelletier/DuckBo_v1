#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// PlayButton
struct PlayButton_t1602700306;
// ExitButton
struct ExitButton_t2012928472;
// UnityEngine.UI.Image
struct Image_t2042527209;
// LevelSelect
struct LevelSelect_t3166920942;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenuController
struct  MainMenuController_t2486335374  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MainMenuController::play
	GameObject_t1756533147 * ___play_2;
	// UnityEngine.GameObject MainMenuController::exit
	GameObject_t1756533147 * ___exit_3;
	// UnityEngine.GameObject MainMenuController::levelScreen
	GameObject_t1756533147 * ___levelScreen_4;
	// PlayButton MainMenuController::playScript
	PlayButton_t1602700306 * ___playScript_5;
	// ExitButton MainMenuController::exitScript
	ExitButton_t2012928472 * ___exitScript_6;
	// System.Boolean MainMenuController::selectPlay
	bool ___selectPlay_7;
	// System.Boolean MainMenuController::opposite
	bool ___opposite_8;
	// UnityEngine.UI.Image MainMenuController::playButton
	Image_t2042527209 * ___playButton_9;
	// UnityEngine.UI.Image MainMenuController::exitButton
	Image_t2042527209 * ___exitButton_10;
	// System.Single MainMenuController::currentSelection
	float ___currentSelection_11;
	// UnityEngine.GameObject MainMenuController::selection
	GameObject_t1756533147 * ___selection_12;
	// LevelSelect MainMenuController::selectScript
	LevelSelect_t3166920942 * ___selectScript_13;
	// UnityEngine.UI.Image MainMenuController::change
	Image_t2042527209 * ___change_14;
	// System.Boolean MainMenuController::selectLeave
	bool ___selectLeave_15;
	// System.Boolean MainMenuController::oppositeLeave
	bool ___oppositeLeave_16;
	// UnityEngine.GameObject MainMenuController::exitCheck
	GameObject_t1756533147 * ___exitCheck_17;
	// UnityEngine.UI.Image MainMenuController::leaveButton
	Image_t2042527209 * ___leaveButton_18;
	// UnityEngine.UI.Image MainMenuController::backButton
	Image_t2042527209 * ___backButton_19;
	// UnityEngine.Color MainMenuController::faded
	Color_t2020392075  ___faded_20;
	// UnityEngine.Color MainMenuController::original
	Color_t2020392075  ___original_21;
	// UnityEngine.Color MainMenuController::mainFaded
	Color_t2020392075  ___mainFaded_22;
	// UnityEngine.Color MainMenuController::mainOriginal
	Color_t2020392075  ___mainOriginal_23;
	// UnityEngine.AudioSource MainMenuController::audioSource
	AudioSource_t1135106623 * ___audioSource_24;
	// UnityEngine.AudioClip MainMenuController::select
	AudioClip_t1932558630 * ___select_25;
	// UnityEngine.AudioClip MainMenuController::click
	AudioClip_t1932558630 * ___click_26;
	// UnityEngine.GameObject MainMenuController::musicMachineLevel
	GameObject_t1756533147 * ___musicMachineLevel_27;

public:
	inline static int32_t get_offset_of_play_2() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___play_2)); }
	inline GameObject_t1756533147 * get_play_2() const { return ___play_2; }
	inline GameObject_t1756533147 ** get_address_of_play_2() { return &___play_2; }
	inline void set_play_2(GameObject_t1756533147 * value)
	{
		___play_2 = value;
		Il2CppCodeGenWriteBarrier(&___play_2, value);
	}

	inline static int32_t get_offset_of_exit_3() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___exit_3)); }
	inline GameObject_t1756533147 * get_exit_3() const { return ___exit_3; }
	inline GameObject_t1756533147 ** get_address_of_exit_3() { return &___exit_3; }
	inline void set_exit_3(GameObject_t1756533147 * value)
	{
		___exit_3 = value;
		Il2CppCodeGenWriteBarrier(&___exit_3, value);
	}

	inline static int32_t get_offset_of_levelScreen_4() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___levelScreen_4)); }
	inline GameObject_t1756533147 * get_levelScreen_4() const { return ___levelScreen_4; }
	inline GameObject_t1756533147 ** get_address_of_levelScreen_4() { return &___levelScreen_4; }
	inline void set_levelScreen_4(GameObject_t1756533147 * value)
	{
		___levelScreen_4 = value;
		Il2CppCodeGenWriteBarrier(&___levelScreen_4, value);
	}

	inline static int32_t get_offset_of_playScript_5() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___playScript_5)); }
	inline PlayButton_t1602700306 * get_playScript_5() const { return ___playScript_5; }
	inline PlayButton_t1602700306 ** get_address_of_playScript_5() { return &___playScript_5; }
	inline void set_playScript_5(PlayButton_t1602700306 * value)
	{
		___playScript_5 = value;
		Il2CppCodeGenWriteBarrier(&___playScript_5, value);
	}

	inline static int32_t get_offset_of_exitScript_6() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___exitScript_6)); }
	inline ExitButton_t2012928472 * get_exitScript_6() const { return ___exitScript_6; }
	inline ExitButton_t2012928472 ** get_address_of_exitScript_6() { return &___exitScript_6; }
	inline void set_exitScript_6(ExitButton_t2012928472 * value)
	{
		___exitScript_6 = value;
		Il2CppCodeGenWriteBarrier(&___exitScript_6, value);
	}

	inline static int32_t get_offset_of_selectPlay_7() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___selectPlay_7)); }
	inline bool get_selectPlay_7() const { return ___selectPlay_7; }
	inline bool* get_address_of_selectPlay_7() { return &___selectPlay_7; }
	inline void set_selectPlay_7(bool value)
	{
		___selectPlay_7 = value;
	}

	inline static int32_t get_offset_of_opposite_8() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___opposite_8)); }
	inline bool get_opposite_8() const { return ___opposite_8; }
	inline bool* get_address_of_opposite_8() { return &___opposite_8; }
	inline void set_opposite_8(bool value)
	{
		___opposite_8 = value;
	}

	inline static int32_t get_offset_of_playButton_9() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___playButton_9)); }
	inline Image_t2042527209 * get_playButton_9() const { return ___playButton_9; }
	inline Image_t2042527209 ** get_address_of_playButton_9() { return &___playButton_9; }
	inline void set_playButton_9(Image_t2042527209 * value)
	{
		___playButton_9 = value;
		Il2CppCodeGenWriteBarrier(&___playButton_9, value);
	}

	inline static int32_t get_offset_of_exitButton_10() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___exitButton_10)); }
	inline Image_t2042527209 * get_exitButton_10() const { return ___exitButton_10; }
	inline Image_t2042527209 ** get_address_of_exitButton_10() { return &___exitButton_10; }
	inline void set_exitButton_10(Image_t2042527209 * value)
	{
		___exitButton_10 = value;
		Il2CppCodeGenWriteBarrier(&___exitButton_10, value);
	}

	inline static int32_t get_offset_of_currentSelection_11() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___currentSelection_11)); }
	inline float get_currentSelection_11() const { return ___currentSelection_11; }
	inline float* get_address_of_currentSelection_11() { return &___currentSelection_11; }
	inline void set_currentSelection_11(float value)
	{
		___currentSelection_11 = value;
	}

	inline static int32_t get_offset_of_selection_12() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___selection_12)); }
	inline GameObject_t1756533147 * get_selection_12() const { return ___selection_12; }
	inline GameObject_t1756533147 ** get_address_of_selection_12() { return &___selection_12; }
	inline void set_selection_12(GameObject_t1756533147 * value)
	{
		___selection_12 = value;
		Il2CppCodeGenWriteBarrier(&___selection_12, value);
	}

	inline static int32_t get_offset_of_selectScript_13() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___selectScript_13)); }
	inline LevelSelect_t3166920942 * get_selectScript_13() const { return ___selectScript_13; }
	inline LevelSelect_t3166920942 ** get_address_of_selectScript_13() { return &___selectScript_13; }
	inline void set_selectScript_13(LevelSelect_t3166920942 * value)
	{
		___selectScript_13 = value;
		Il2CppCodeGenWriteBarrier(&___selectScript_13, value);
	}

	inline static int32_t get_offset_of_change_14() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___change_14)); }
	inline Image_t2042527209 * get_change_14() const { return ___change_14; }
	inline Image_t2042527209 ** get_address_of_change_14() { return &___change_14; }
	inline void set_change_14(Image_t2042527209 * value)
	{
		___change_14 = value;
		Il2CppCodeGenWriteBarrier(&___change_14, value);
	}

	inline static int32_t get_offset_of_selectLeave_15() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___selectLeave_15)); }
	inline bool get_selectLeave_15() const { return ___selectLeave_15; }
	inline bool* get_address_of_selectLeave_15() { return &___selectLeave_15; }
	inline void set_selectLeave_15(bool value)
	{
		___selectLeave_15 = value;
	}

	inline static int32_t get_offset_of_oppositeLeave_16() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___oppositeLeave_16)); }
	inline bool get_oppositeLeave_16() const { return ___oppositeLeave_16; }
	inline bool* get_address_of_oppositeLeave_16() { return &___oppositeLeave_16; }
	inline void set_oppositeLeave_16(bool value)
	{
		___oppositeLeave_16 = value;
	}

	inline static int32_t get_offset_of_exitCheck_17() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___exitCheck_17)); }
	inline GameObject_t1756533147 * get_exitCheck_17() const { return ___exitCheck_17; }
	inline GameObject_t1756533147 ** get_address_of_exitCheck_17() { return &___exitCheck_17; }
	inline void set_exitCheck_17(GameObject_t1756533147 * value)
	{
		___exitCheck_17 = value;
		Il2CppCodeGenWriteBarrier(&___exitCheck_17, value);
	}

	inline static int32_t get_offset_of_leaveButton_18() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___leaveButton_18)); }
	inline Image_t2042527209 * get_leaveButton_18() const { return ___leaveButton_18; }
	inline Image_t2042527209 ** get_address_of_leaveButton_18() { return &___leaveButton_18; }
	inline void set_leaveButton_18(Image_t2042527209 * value)
	{
		___leaveButton_18 = value;
		Il2CppCodeGenWriteBarrier(&___leaveButton_18, value);
	}

	inline static int32_t get_offset_of_backButton_19() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___backButton_19)); }
	inline Image_t2042527209 * get_backButton_19() const { return ___backButton_19; }
	inline Image_t2042527209 ** get_address_of_backButton_19() { return &___backButton_19; }
	inline void set_backButton_19(Image_t2042527209 * value)
	{
		___backButton_19 = value;
		Il2CppCodeGenWriteBarrier(&___backButton_19, value);
	}

	inline static int32_t get_offset_of_faded_20() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___faded_20)); }
	inline Color_t2020392075  get_faded_20() const { return ___faded_20; }
	inline Color_t2020392075 * get_address_of_faded_20() { return &___faded_20; }
	inline void set_faded_20(Color_t2020392075  value)
	{
		___faded_20 = value;
	}

	inline static int32_t get_offset_of_original_21() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___original_21)); }
	inline Color_t2020392075  get_original_21() const { return ___original_21; }
	inline Color_t2020392075 * get_address_of_original_21() { return &___original_21; }
	inline void set_original_21(Color_t2020392075  value)
	{
		___original_21 = value;
	}

	inline static int32_t get_offset_of_mainFaded_22() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___mainFaded_22)); }
	inline Color_t2020392075  get_mainFaded_22() const { return ___mainFaded_22; }
	inline Color_t2020392075 * get_address_of_mainFaded_22() { return &___mainFaded_22; }
	inline void set_mainFaded_22(Color_t2020392075  value)
	{
		___mainFaded_22 = value;
	}

	inline static int32_t get_offset_of_mainOriginal_23() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___mainOriginal_23)); }
	inline Color_t2020392075  get_mainOriginal_23() const { return ___mainOriginal_23; }
	inline Color_t2020392075 * get_address_of_mainOriginal_23() { return &___mainOriginal_23; }
	inline void set_mainOriginal_23(Color_t2020392075  value)
	{
		___mainOriginal_23 = value;
	}

	inline static int32_t get_offset_of_audioSource_24() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___audioSource_24)); }
	inline AudioSource_t1135106623 * get_audioSource_24() const { return ___audioSource_24; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_24() { return &___audioSource_24; }
	inline void set_audioSource_24(AudioSource_t1135106623 * value)
	{
		___audioSource_24 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_24, value);
	}

	inline static int32_t get_offset_of_select_25() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___select_25)); }
	inline AudioClip_t1932558630 * get_select_25() const { return ___select_25; }
	inline AudioClip_t1932558630 ** get_address_of_select_25() { return &___select_25; }
	inline void set_select_25(AudioClip_t1932558630 * value)
	{
		___select_25 = value;
		Il2CppCodeGenWriteBarrier(&___select_25, value);
	}

	inline static int32_t get_offset_of_click_26() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___click_26)); }
	inline AudioClip_t1932558630 * get_click_26() const { return ___click_26; }
	inline AudioClip_t1932558630 ** get_address_of_click_26() { return &___click_26; }
	inline void set_click_26(AudioClip_t1932558630 * value)
	{
		___click_26 = value;
		Il2CppCodeGenWriteBarrier(&___click_26, value);
	}

	inline static int32_t get_offset_of_musicMachineLevel_27() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___musicMachineLevel_27)); }
	inline GameObject_t1756533147 * get_musicMachineLevel_27() const { return ___musicMachineLevel_27; }
	inline GameObject_t1756533147 ** get_address_of_musicMachineLevel_27() { return &___musicMachineLevel_27; }
	inline void set_musicMachineLevel_27(GameObject_t1756533147 * value)
	{
		___musicMachineLevel_27 = value;
		Il2CppCodeGenWriteBarrier(&___musicMachineLevel_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
