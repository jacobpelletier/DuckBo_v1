#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicController
struct  MusicController_t4192593383  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource MusicController::audioSource
	AudioSource_t1135106623 * ___audioSource_2;
	// System.Single MusicController::initialVolume
	float ___initialVolume_3;
	// System.Boolean MusicController::mainMenu
	bool ___mainMenu_4;
	// UnityEngine.GameObject MusicController::musicIcon
	GameObject_t1756533147 * ___musicIcon_5;
	// UnityEngine.GameObject MusicController::soundIcon
	GameObject_t1756533147 * ___soundIcon_6;
	// UnityEngine.Sprite MusicController::musicOn
	Sprite_t309593783 * ___musicOn_7;
	// UnityEngine.Sprite MusicController::musicOff
	Sprite_t309593783 * ___musicOff_8;
	// UnityEngine.Sprite MusicController::soundOn
	Sprite_t309593783 * ___soundOn_9;
	// UnityEngine.Sprite MusicController::soundOff
	Sprite_t309593783 * ___soundOff_10;
	// UnityEngine.SpriteRenderer MusicController::musicSR
	SpriteRenderer_t1209076198 * ___musicSR_11;
	// UnityEngine.SpriteRenderer MusicController::soundSR
	SpriteRenderer_t1209076198 * ___soundSR_12;

public:
	inline static int32_t get_offset_of_audioSource_2() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___audioSource_2)); }
	inline AudioSource_t1135106623 * get_audioSource_2() const { return ___audioSource_2; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_2() { return &___audioSource_2; }
	inline void set_audioSource_2(AudioSource_t1135106623 * value)
	{
		___audioSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_2, value);
	}

	inline static int32_t get_offset_of_initialVolume_3() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___initialVolume_3)); }
	inline float get_initialVolume_3() const { return ___initialVolume_3; }
	inline float* get_address_of_initialVolume_3() { return &___initialVolume_3; }
	inline void set_initialVolume_3(float value)
	{
		___initialVolume_3 = value;
	}

	inline static int32_t get_offset_of_mainMenu_4() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___mainMenu_4)); }
	inline bool get_mainMenu_4() const { return ___mainMenu_4; }
	inline bool* get_address_of_mainMenu_4() { return &___mainMenu_4; }
	inline void set_mainMenu_4(bool value)
	{
		___mainMenu_4 = value;
	}

	inline static int32_t get_offset_of_musicIcon_5() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___musicIcon_5)); }
	inline GameObject_t1756533147 * get_musicIcon_5() const { return ___musicIcon_5; }
	inline GameObject_t1756533147 ** get_address_of_musicIcon_5() { return &___musicIcon_5; }
	inline void set_musicIcon_5(GameObject_t1756533147 * value)
	{
		___musicIcon_5 = value;
		Il2CppCodeGenWriteBarrier(&___musicIcon_5, value);
	}

	inline static int32_t get_offset_of_soundIcon_6() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___soundIcon_6)); }
	inline GameObject_t1756533147 * get_soundIcon_6() const { return ___soundIcon_6; }
	inline GameObject_t1756533147 ** get_address_of_soundIcon_6() { return &___soundIcon_6; }
	inline void set_soundIcon_6(GameObject_t1756533147 * value)
	{
		___soundIcon_6 = value;
		Il2CppCodeGenWriteBarrier(&___soundIcon_6, value);
	}

	inline static int32_t get_offset_of_musicOn_7() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___musicOn_7)); }
	inline Sprite_t309593783 * get_musicOn_7() const { return ___musicOn_7; }
	inline Sprite_t309593783 ** get_address_of_musicOn_7() { return &___musicOn_7; }
	inline void set_musicOn_7(Sprite_t309593783 * value)
	{
		___musicOn_7 = value;
		Il2CppCodeGenWriteBarrier(&___musicOn_7, value);
	}

	inline static int32_t get_offset_of_musicOff_8() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___musicOff_8)); }
	inline Sprite_t309593783 * get_musicOff_8() const { return ___musicOff_8; }
	inline Sprite_t309593783 ** get_address_of_musicOff_8() { return &___musicOff_8; }
	inline void set_musicOff_8(Sprite_t309593783 * value)
	{
		___musicOff_8 = value;
		Il2CppCodeGenWriteBarrier(&___musicOff_8, value);
	}

	inline static int32_t get_offset_of_soundOn_9() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___soundOn_9)); }
	inline Sprite_t309593783 * get_soundOn_9() const { return ___soundOn_9; }
	inline Sprite_t309593783 ** get_address_of_soundOn_9() { return &___soundOn_9; }
	inline void set_soundOn_9(Sprite_t309593783 * value)
	{
		___soundOn_9 = value;
		Il2CppCodeGenWriteBarrier(&___soundOn_9, value);
	}

	inline static int32_t get_offset_of_soundOff_10() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___soundOff_10)); }
	inline Sprite_t309593783 * get_soundOff_10() const { return ___soundOff_10; }
	inline Sprite_t309593783 ** get_address_of_soundOff_10() { return &___soundOff_10; }
	inline void set_soundOff_10(Sprite_t309593783 * value)
	{
		___soundOff_10 = value;
		Il2CppCodeGenWriteBarrier(&___soundOff_10, value);
	}

	inline static int32_t get_offset_of_musicSR_11() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___musicSR_11)); }
	inline SpriteRenderer_t1209076198 * get_musicSR_11() const { return ___musicSR_11; }
	inline SpriteRenderer_t1209076198 ** get_address_of_musicSR_11() { return &___musicSR_11; }
	inline void set_musicSR_11(SpriteRenderer_t1209076198 * value)
	{
		___musicSR_11 = value;
		Il2CppCodeGenWriteBarrier(&___musicSR_11, value);
	}

	inline static int32_t get_offset_of_soundSR_12() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___soundSR_12)); }
	inline SpriteRenderer_t1209076198 * get_soundSR_12() const { return ___soundSR_12; }
	inline SpriteRenderer_t1209076198 ** get_address_of_soundSR_12() { return &___soundSR_12; }
	inline void set_soundSR_12(SpriteRenderer_t1209076198 * value)
	{
		___soundSR_12 = value;
		Il2CppCodeGenWriteBarrier(&___soundSR_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
