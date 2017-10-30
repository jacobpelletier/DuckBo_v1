#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Hunter1Controller
struct  Hunter1Controller_t192501799  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Hunter1Controller::moveSpeed
	float ___moveSpeed_2;
	// System.Single Hunter1Controller::maxVel
	float ___maxVel_3;
	// System.Int32 Hunter1Controller::life
	int32_t ___life_4;
	// System.Boolean Hunter1Controller::sentryMode
	bool ___sentryMode_5;
	// System.Boolean Hunter1Controller::observing
	bool ___observing_6;
	// PlayerController Hunter1Controller::playerScript
	PlayerController_t4148409433 * ___playerScript_7;
	// UnityEngine.GameObject Hunter1Controller::player
	GameObject_t1756533147 * ___player_8;
	// UnityEngine.Rigidbody2D Hunter1Controller::rb
	Rigidbody2D_t502193897 * ___rb_9;
	// System.Single Hunter1Controller::vel
	float ___vel_10;
	// UnityEngine.Vector3 Hunter1Controller::direction
	Vector3_t2243707580  ___direction_11;
	// UnityEngine.Collider2D Hunter1Controller::col
	Collider2D_t646061738 * ___col_12;
	// UnityEngine.Vector2 Hunter1Controller::size
	Vector2_t2243707579  ___size_13;
	// System.Boolean Hunter1Controller::shootCooldown
	bool ___shootCooldown_14;
	// UnityEngine.GameObject Hunter1Controller::gunTip
	GameObject_t1756533147 * ___gunTip_15;
	// UnityEngine.GameObject Hunter1Controller::bulletLeft
	GameObject_t1756533147 * ___bulletLeft_16;
	// UnityEngine.GameObject Hunter1Controller::bulletRight
	GameObject_t1756533147 * ___bulletRight_17;
	// UnityEngine.GameObject Hunter1Controller::muzzleFlash
	GameObject_t1756533147 * ___muzzleFlash_18;
	// UnityEngine.Animator Hunter1Controller::anim
	Animator_t69676727 * ___anim_19;
	// UnityEngine.Renderer Hunter1Controller::rend
	Renderer_t257310565 * ___rend_20;
	// UnityEngine.AudioSource Hunter1Controller::audioSource
	AudioSource_t1135106623 * ___audioSource_21;
	// UnityEngine.AudioClip Hunter1Controller::Hit1
	AudioClip_t1932558630 * ___Hit1_22;
	// UnityEngine.AudioClip Hunter1Controller::Hit2
	AudioClip_t1932558630 * ___Hit2_23;
	// UnityEngine.AudioClip Hunter1Controller::Hit3
	AudioClip_t1932558630 * ___Hit3_24;
	// UnityEngine.AudioClip Hunter1Controller::shot
	AudioClip_t1932558630 * ___shot_25;
	// UnityEngine.AudioClip Hunter1Controller::death
	AudioClip_t1932558630 * ___death_26;
	// System.Boolean Hunter1Controller::flip
	bool ___flip_27;
	// System.Boolean Hunter1Controller::dead
	bool ___dead_28;
	// UnityEngine.GameObject Hunter1Controller::deadHunter1
	GameObject_t1756533147 * ___deadHunter1_29;
	// UnityEngine.GameObject Hunter1Controller::deadHunter2
	GameObject_t1756533147 * ___deadHunter2_30;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_maxVel_3() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___maxVel_3)); }
	inline float get_maxVel_3() const { return ___maxVel_3; }
	inline float* get_address_of_maxVel_3() { return &___maxVel_3; }
	inline void set_maxVel_3(float value)
	{
		___maxVel_3 = value;
	}

	inline static int32_t get_offset_of_life_4() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___life_4)); }
	inline int32_t get_life_4() const { return ___life_4; }
	inline int32_t* get_address_of_life_4() { return &___life_4; }
	inline void set_life_4(int32_t value)
	{
		___life_4 = value;
	}

	inline static int32_t get_offset_of_sentryMode_5() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___sentryMode_5)); }
	inline bool get_sentryMode_5() const { return ___sentryMode_5; }
	inline bool* get_address_of_sentryMode_5() { return &___sentryMode_5; }
	inline void set_sentryMode_5(bool value)
	{
		___sentryMode_5 = value;
	}

	inline static int32_t get_offset_of_observing_6() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___observing_6)); }
	inline bool get_observing_6() const { return ___observing_6; }
	inline bool* get_address_of_observing_6() { return &___observing_6; }
	inline void set_observing_6(bool value)
	{
		___observing_6 = value;
	}

	inline static int32_t get_offset_of_playerScript_7() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___playerScript_7)); }
	inline PlayerController_t4148409433 * get_playerScript_7() const { return ___playerScript_7; }
	inline PlayerController_t4148409433 ** get_address_of_playerScript_7() { return &___playerScript_7; }
	inline void set_playerScript_7(PlayerController_t4148409433 * value)
	{
		___playerScript_7 = value;
		Il2CppCodeGenWriteBarrier(&___playerScript_7, value);
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___player_8)); }
	inline GameObject_t1756533147 * get_player_8() const { return ___player_8; }
	inline GameObject_t1756533147 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(GameObject_t1756533147 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier(&___player_8, value);
	}

	inline static int32_t get_offset_of_rb_9() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___rb_9)); }
	inline Rigidbody2D_t502193897 * get_rb_9() const { return ___rb_9; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_9() { return &___rb_9; }
	inline void set_rb_9(Rigidbody2D_t502193897 * value)
	{
		___rb_9 = value;
		Il2CppCodeGenWriteBarrier(&___rb_9, value);
	}

	inline static int32_t get_offset_of_vel_10() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___vel_10)); }
	inline float get_vel_10() const { return ___vel_10; }
	inline float* get_address_of_vel_10() { return &___vel_10; }
	inline void set_vel_10(float value)
	{
		___vel_10 = value;
	}

	inline static int32_t get_offset_of_direction_11() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___direction_11)); }
	inline Vector3_t2243707580  get_direction_11() const { return ___direction_11; }
	inline Vector3_t2243707580 * get_address_of_direction_11() { return &___direction_11; }
	inline void set_direction_11(Vector3_t2243707580  value)
	{
		___direction_11 = value;
	}

	inline static int32_t get_offset_of_col_12() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___col_12)); }
	inline Collider2D_t646061738 * get_col_12() const { return ___col_12; }
	inline Collider2D_t646061738 ** get_address_of_col_12() { return &___col_12; }
	inline void set_col_12(Collider2D_t646061738 * value)
	{
		___col_12 = value;
		Il2CppCodeGenWriteBarrier(&___col_12, value);
	}

	inline static int32_t get_offset_of_size_13() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___size_13)); }
	inline Vector2_t2243707579  get_size_13() const { return ___size_13; }
	inline Vector2_t2243707579 * get_address_of_size_13() { return &___size_13; }
	inline void set_size_13(Vector2_t2243707579  value)
	{
		___size_13 = value;
	}

	inline static int32_t get_offset_of_shootCooldown_14() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___shootCooldown_14)); }
	inline bool get_shootCooldown_14() const { return ___shootCooldown_14; }
	inline bool* get_address_of_shootCooldown_14() { return &___shootCooldown_14; }
	inline void set_shootCooldown_14(bool value)
	{
		___shootCooldown_14 = value;
	}

	inline static int32_t get_offset_of_gunTip_15() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___gunTip_15)); }
	inline GameObject_t1756533147 * get_gunTip_15() const { return ___gunTip_15; }
	inline GameObject_t1756533147 ** get_address_of_gunTip_15() { return &___gunTip_15; }
	inline void set_gunTip_15(GameObject_t1756533147 * value)
	{
		___gunTip_15 = value;
		Il2CppCodeGenWriteBarrier(&___gunTip_15, value);
	}

	inline static int32_t get_offset_of_bulletLeft_16() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___bulletLeft_16)); }
	inline GameObject_t1756533147 * get_bulletLeft_16() const { return ___bulletLeft_16; }
	inline GameObject_t1756533147 ** get_address_of_bulletLeft_16() { return &___bulletLeft_16; }
	inline void set_bulletLeft_16(GameObject_t1756533147 * value)
	{
		___bulletLeft_16 = value;
		Il2CppCodeGenWriteBarrier(&___bulletLeft_16, value);
	}

	inline static int32_t get_offset_of_bulletRight_17() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___bulletRight_17)); }
	inline GameObject_t1756533147 * get_bulletRight_17() const { return ___bulletRight_17; }
	inline GameObject_t1756533147 ** get_address_of_bulletRight_17() { return &___bulletRight_17; }
	inline void set_bulletRight_17(GameObject_t1756533147 * value)
	{
		___bulletRight_17 = value;
		Il2CppCodeGenWriteBarrier(&___bulletRight_17, value);
	}

	inline static int32_t get_offset_of_muzzleFlash_18() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___muzzleFlash_18)); }
	inline GameObject_t1756533147 * get_muzzleFlash_18() const { return ___muzzleFlash_18; }
	inline GameObject_t1756533147 ** get_address_of_muzzleFlash_18() { return &___muzzleFlash_18; }
	inline void set_muzzleFlash_18(GameObject_t1756533147 * value)
	{
		___muzzleFlash_18 = value;
		Il2CppCodeGenWriteBarrier(&___muzzleFlash_18, value);
	}

	inline static int32_t get_offset_of_anim_19() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___anim_19)); }
	inline Animator_t69676727 * get_anim_19() const { return ___anim_19; }
	inline Animator_t69676727 ** get_address_of_anim_19() { return &___anim_19; }
	inline void set_anim_19(Animator_t69676727 * value)
	{
		___anim_19 = value;
		Il2CppCodeGenWriteBarrier(&___anim_19, value);
	}

	inline static int32_t get_offset_of_rend_20() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___rend_20)); }
	inline Renderer_t257310565 * get_rend_20() const { return ___rend_20; }
	inline Renderer_t257310565 ** get_address_of_rend_20() { return &___rend_20; }
	inline void set_rend_20(Renderer_t257310565 * value)
	{
		___rend_20 = value;
		Il2CppCodeGenWriteBarrier(&___rend_20, value);
	}

	inline static int32_t get_offset_of_audioSource_21() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___audioSource_21)); }
	inline AudioSource_t1135106623 * get_audioSource_21() const { return ___audioSource_21; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_21() { return &___audioSource_21; }
	inline void set_audioSource_21(AudioSource_t1135106623 * value)
	{
		___audioSource_21 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_21, value);
	}

	inline static int32_t get_offset_of_Hit1_22() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___Hit1_22)); }
	inline AudioClip_t1932558630 * get_Hit1_22() const { return ___Hit1_22; }
	inline AudioClip_t1932558630 ** get_address_of_Hit1_22() { return &___Hit1_22; }
	inline void set_Hit1_22(AudioClip_t1932558630 * value)
	{
		___Hit1_22 = value;
		Il2CppCodeGenWriteBarrier(&___Hit1_22, value);
	}

	inline static int32_t get_offset_of_Hit2_23() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___Hit2_23)); }
	inline AudioClip_t1932558630 * get_Hit2_23() const { return ___Hit2_23; }
	inline AudioClip_t1932558630 ** get_address_of_Hit2_23() { return &___Hit2_23; }
	inline void set_Hit2_23(AudioClip_t1932558630 * value)
	{
		___Hit2_23 = value;
		Il2CppCodeGenWriteBarrier(&___Hit2_23, value);
	}

	inline static int32_t get_offset_of_Hit3_24() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___Hit3_24)); }
	inline AudioClip_t1932558630 * get_Hit3_24() const { return ___Hit3_24; }
	inline AudioClip_t1932558630 ** get_address_of_Hit3_24() { return &___Hit3_24; }
	inline void set_Hit3_24(AudioClip_t1932558630 * value)
	{
		___Hit3_24 = value;
		Il2CppCodeGenWriteBarrier(&___Hit3_24, value);
	}

	inline static int32_t get_offset_of_shot_25() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___shot_25)); }
	inline AudioClip_t1932558630 * get_shot_25() const { return ___shot_25; }
	inline AudioClip_t1932558630 ** get_address_of_shot_25() { return &___shot_25; }
	inline void set_shot_25(AudioClip_t1932558630 * value)
	{
		___shot_25 = value;
		Il2CppCodeGenWriteBarrier(&___shot_25, value);
	}

	inline static int32_t get_offset_of_death_26() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___death_26)); }
	inline AudioClip_t1932558630 * get_death_26() const { return ___death_26; }
	inline AudioClip_t1932558630 ** get_address_of_death_26() { return &___death_26; }
	inline void set_death_26(AudioClip_t1932558630 * value)
	{
		___death_26 = value;
		Il2CppCodeGenWriteBarrier(&___death_26, value);
	}

	inline static int32_t get_offset_of_flip_27() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___flip_27)); }
	inline bool get_flip_27() const { return ___flip_27; }
	inline bool* get_address_of_flip_27() { return &___flip_27; }
	inline void set_flip_27(bool value)
	{
		___flip_27 = value;
	}

	inline static int32_t get_offset_of_dead_28() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___dead_28)); }
	inline bool get_dead_28() const { return ___dead_28; }
	inline bool* get_address_of_dead_28() { return &___dead_28; }
	inline void set_dead_28(bool value)
	{
		___dead_28 = value;
	}

	inline static int32_t get_offset_of_deadHunter1_29() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___deadHunter1_29)); }
	inline GameObject_t1756533147 * get_deadHunter1_29() const { return ___deadHunter1_29; }
	inline GameObject_t1756533147 ** get_address_of_deadHunter1_29() { return &___deadHunter1_29; }
	inline void set_deadHunter1_29(GameObject_t1756533147 * value)
	{
		___deadHunter1_29 = value;
		Il2CppCodeGenWriteBarrier(&___deadHunter1_29, value);
	}

	inline static int32_t get_offset_of_deadHunter2_30() { return static_cast<int32_t>(offsetof(Hunter1Controller_t192501799, ___deadHunter2_30)); }
	inline GameObject_t1756533147 * get_deadHunter2_30() const { return ___deadHunter2_30; }
	inline GameObject_t1756533147 ** get_address_of_deadHunter2_30() { return &___deadHunter2_30; }
	inline void set_deadHunter2_30(GameObject_t1756533147 * value)
	{
		___deadHunter2_30 = value;
		Il2CppCodeGenWriteBarrier(&___deadHunter2_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
