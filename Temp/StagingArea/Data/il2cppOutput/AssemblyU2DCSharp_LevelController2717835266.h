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

// CameraController
struct CameraController_t3555666667;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// SignController
struct SignController_t1692409433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// MusicController
struct MusicController_t4192593383;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelController
struct  LevelController_t2717835266  : public MonoBehaviour_t1158329972
{
public:
	// CameraController LevelController::activeCamera
	CameraController_t3555666667 * ___activeCamera_2;
	// System.Boolean LevelController::pause
	bool ___pause_3;
	// System.Boolean LevelController::beenPaused
	bool ___beenPaused_4;
	// System.Boolean LevelController::resume
	bool ___resume_5;
	// System.Boolean LevelController::leave
	bool ___leave_6;
	// System.Boolean LevelController::sign
	bool ___sign_7;
	// System.Boolean LevelController::dead
	bool ___dead_8;
	// UnityEngine.GameObject LevelController::musicIcon
	GameObject_t1756533147 * ___musicIcon_9;
	// UnityEngine.GameObject LevelController::soundIcon
	GameObject_t1756533147 * ___soundIcon_10;
	// UnityEngine.GameObject LevelController::pauseMenu
	GameObject_t1756533147 * ___pauseMenu_11;
	// UnityEngine.GameObject LevelController::signScreen
	GameObject_t1756533147 * ___signScreen_12;
	// SignController LevelController::chosenSignScript
	SignController_t1692409433 * ___chosenSignScript_13;
	// UnityEngine.UI.Image LevelController::resumeButton
	Image_t2042527209 * ___resumeButton_14;
	// UnityEngine.UI.Image LevelController::leaveButton
	Image_t2042527209 * ___leaveButton_15;
	// UnityEngine.Color LevelController::faded
	Color_t2020392075  ___faded_16;
	// UnityEngine.Color LevelController::original
	Color_t2020392075  ___original_17;
	// UnityEngine.AudioSource LevelController::audioSource
	AudioSource_t1135106623 * ___audioSource_18;
	// UnityEngine.AudioClip LevelController::pauseSelect
	AudioClip_t1932558630 * ___pauseSelect_19;
	// UnityEngine.AudioClip LevelController::pauseClick
	AudioClip_t1932558630 * ___pauseClick_20;
	// MusicController LevelController::musicControl
	MusicController_t4192593383 * ___musicControl_21;

public:
	inline static int32_t get_offset_of_activeCamera_2() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___activeCamera_2)); }
	inline CameraController_t3555666667 * get_activeCamera_2() const { return ___activeCamera_2; }
	inline CameraController_t3555666667 ** get_address_of_activeCamera_2() { return &___activeCamera_2; }
	inline void set_activeCamera_2(CameraController_t3555666667 * value)
	{
		___activeCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___activeCamera_2, value);
	}

	inline static int32_t get_offset_of_pause_3() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___pause_3)); }
	inline bool get_pause_3() const { return ___pause_3; }
	inline bool* get_address_of_pause_3() { return &___pause_3; }
	inline void set_pause_3(bool value)
	{
		___pause_3 = value;
	}

	inline static int32_t get_offset_of_beenPaused_4() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___beenPaused_4)); }
	inline bool get_beenPaused_4() const { return ___beenPaused_4; }
	inline bool* get_address_of_beenPaused_4() { return &___beenPaused_4; }
	inline void set_beenPaused_4(bool value)
	{
		___beenPaused_4 = value;
	}

	inline static int32_t get_offset_of_resume_5() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___resume_5)); }
	inline bool get_resume_5() const { return ___resume_5; }
	inline bool* get_address_of_resume_5() { return &___resume_5; }
	inline void set_resume_5(bool value)
	{
		___resume_5 = value;
	}

	inline static int32_t get_offset_of_leave_6() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___leave_6)); }
	inline bool get_leave_6() const { return ___leave_6; }
	inline bool* get_address_of_leave_6() { return &___leave_6; }
	inline void set_leave_6(bool value)
	{
		___leave_6 = value;
	}

	inline static int32_t get_offset_of_sign_7() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___sign_7)); }
	inline bool get_sign_7() const { return ___sign_7; }
	inline bool* get_address_of_sign_7() { return &___sign_7; }
	inline void set_sign_7(bool value)
	{
		___sign_7 = value;
	}

	inline static int32_t get_offset_of_dead_8() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___dead_8)); }
	inline bool get_dead_8() const { return ___dead_8; }
	inline bool* get_address_of_dead_8() { return &___dead_8; }
	inline void set_dead_8(bool value)
	{
		___dead_8 = value;
	}

	inline static int32_t get_offset_of_musicIcon_9() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___musicIcon_9)); }
	inline GameObject_t1756533147 * get_musicIcon_9() const { return ___musicIcon_9; }
	inline GameObject_t1756533147 ** get_address_of_musicIcon_9() { return &___musicIcon_9; }
	inline void set_musicIcon_9(GameObject_t1756533147 * value)
	{
		___musicIcon_9 = value;
		Il2CppCodeGenWriteBarrier(&___musicIcon_9, value);
	}

	inline static int32_t get_offset_of_soundIcon_10() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___soundIcon_10)); }
	inline GameObject_t1756533147 * get_soundIcon_10() const { return ___soundIcon_10; }
	inline GameObject_t1756533147 ** get_address_of_soundIcon_10() { return &___soundIcon_10; }
	inline void set_soundIcon_10(GameObject_t1756533147 * value)
	{
		___soundIcon_10 = value;
		Il2CppCodeGenWriteBarrier(&___soundIcon_10, value);
	}

	inline static int32_t get_offset_of_pauseMenu_11() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___pauseMenu_11)); }
	inline GameObject_t1756533147 * get_pauseMenu_11() const { return ___pauseMenu_11; }
	inline GameObject_t1756533147 ** get_address_of_pauseMenu_11() { return &___pauseMenu_11; }
	inline void set_pauseMenu_11(GameObject_t1756533147 * value)
	{
		___pauseMenu_11 = value;
		Il2CppCodeGenWriteBarrier(&___pauseMenu_11, value);
	}

	inline static int32_t get_offset_of_signScreen_12() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___signScreen_12)); }
	inline GameObject_t1756533147 * get_signScreen_12() const { return ___signScreen_12; }
	inline GameObject_t1756533147 ** get_address_of_signScreen_12() { return &___signScreen_12; }
	inline void set_signScreen_12(GameObject_t1756533147 * value)
	{
		___signScreen_12 = value;
		Il2CppCodeGenWriteBarrier(&___signScreen_12, value);
	}

	inline static int32_t get_offset_of_chosenSignScript_13() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___chosenSignScript_13)); }
	inline SignController_t1692409433 * get_chosenSignScript_13() const { return ___chosenSignScript_13; }
	inline SignController_t1692409433 ** get_address_of_chosenSignScript_13() { return &___chosenSignScript_13; }
	inline void set_chosenSignScript_13(SignController_t1692409433 * value)
	{
		___chosenSignScript_13 = value;
		Il2CppCodeGenWriteBarrier(&___chosenSignScript_13, value);
	}

	inline static int32_t get_offset_of_resumeButton_14() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___resumeButton_14)); }
	inline Image_t2042527209 * get_resumeButton_14() const { return ___resumeButton_14; }
	inline Image_t2042527209 ** get_address_of_resumeButton_14() { return &___resumeButton_14; }
	inline void set_resumeButton_14(Image_t2042527209 * value)
	{
		___resumeButton_14 = value;
		Il2CppCodeGenWriteBarrier(&___resumeButton_14, value);
	}

	inline static int32_t get_offset_of_leaveButton_15() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___leaveButton_15)); }
	inline Image_t2042527209 * get_leaveButton_15() const { return ___leaveButton_15; }
	inline Image_t2042527209 ** get_address_of_leaveButton_15() { return &___leaveButton_15; }
	inline void set_leaveButton_15(Image_t2042527209 * value)
	{
		___leaveButton_15 = value;
		Il2CppCodeGenWriteBarrier(&___leaveButton_15, value);
	}

	inline static int32_t get_offset_of_faded_16() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___faded_16)); }
	inline Color_t2020392075  get_faded_16() const { return ___faded_16; }
	inline Color_t2020392075 * get_address_of_faded_16() { return &___faded_16; }
	inline void set_faded_16(Color_t2020392075  value)
	{
		___faded_16 = value;
	}

	inline static int32_t get_offset_of_original_17() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___original_17)); }
	inline Color_t2020392075  get_original_17() const { return ___original_17; }
	inline Color_t2020392075 * get_address_of_original_17() { return &___original_17; }
	inline void set_original_17(Color_t2020392075  value)
	{
		___original_17 = value;
	}

	inline static int32_t get_offset_of_audioSource_18() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___audioSource_18)); }
	inline AudioSource_t1135106623 * get_audioSource_18() const { return ___audioSource_18; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_18() { return &___audioSource_18; }
	inline void set_audioSource_18(AudioSource_t1135106623 * value)
	{
		___audioSource_18 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_18, value);
	}

	inline static int32_t get_offset_of_pauseSelect_19() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___pauseSelect_19)); }
	inline AudioClip_t1932558630 * get_pauseSelect_19() const { return ___pauseSelect_19; }
	inline AudioClip_t1932558630 ** get_address_of_pauseSelect_19() { return &___pauseSelect_19; }
	inline void set_pauseSelect_19(AudioClip_t1932558630 * value)
	{
		___pauseSelect_19 = value;
		Il2CppCodeGenWriteBarrier(&___pauseSelect_19, value);
	}

	inline static int32_t get_offset_of_pauseClick_20() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___pauseClick_20)); }
	inline AudioClip_t1932558630 * get_pauseClick_20() const { return ___pauseClick_20; }
	inline AudioClip_t1932558630 ** get_address_of_pauseClick_20() { return &___pauseClick_20; }
	inline void set_pauseClick_20(AudioClip_t1932558630 * value)
	{
		___pauseClick_20 = value;
		Il2CppCodeGenWriteBarrier(&___pauseClick_20, value);
	}

	inline static int32_t get_offset_of_musicControl_21() { return static_cast<int32_t>(offsetof(LevelController_t2717835266, ___musicControl_21)); }
	inline MusicController_t4192593383 * get_musicControl_21() const { return ___musicControl_21; }
	inline MusicController_t4192593383 ** get_address_of_musicControl_21() { return &___musicControl_21; }
	inline void set_musicControl_21(MusicController_t4192593383 * value)
	{
		___musicControl_21 = value;
		Il2CppCodeGenWriteBarrier(&___musicControl_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
