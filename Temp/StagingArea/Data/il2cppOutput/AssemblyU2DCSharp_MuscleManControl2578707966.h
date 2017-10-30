#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PlayerController
struct PlayerController_t4148409433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MuscleManControl
struct  MuscleManControl_t2578707966  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MuscleManControl::jumpSpeed
	float ___jumpSpeed_2;
	// System.Int32 MuscleManControl::life
	int32_t ___life_3;
	// System.Single MuscleManControl::delay
	float ___delay_4;
	// System.Boolean MuscleManControl::jumpTime
	bool ___jumpTime_5;
	// UnityEngine.Rigidbody2D MuscleManControl::hunterBody
	Rigidbody2D_t502193897 * ___hunterBody_6;
	// UnityEngine.Animator MuscleManControl::anim
	Animator_t69676727 * ___anim_7;
	// System.Boolean MuscleManControl::vuln
	bool ___vuln_8;
	// UnityEngine.Renderer MuscleManControl::rend
	Renderer_t257310565 * ___rend_9;
	// UnityEngine.Collider2D MuscleManControl::col
	Collider2D_t646061738 * ___col_10;
	// UnityEngine.AudioSource MuscleManControl::audioSource
	AudioSource_t1135106623 * ___audioSource_11;
	// UnityEngine.AudioClip MuscleManControl::Hit1
	AudioClip_t1932558630 * ___Hit1_12;
	// UnityEngine.AudioClip MuscleManControl::Hit2
	AudioClip_t1932558630 * ___Hit2_13;
	// UnityEngine.AudioClip MuscleManControl::Hit3
	AudioClip_t1932558630 * ___Hit3_14;
	// UnityEngine.AudioClip MuscleManControl::jump
	AudioClip_t1932558630 * ___jump_15;
	// UnityEngine.AudioClip MuscleManControl::spark
	AudioClip_t1932558630 * ___spark_16;
	// UnityEngine.AudioClip MuscleManControl::land
	AudioClip_t1932558630 * ___land_17;
	// UnityEngine.AudioClip MuscleManControl::death
	AudioClip_t1932558630 * ___death_18;
	// UnityEngine.GameObject MuscleManControl::player
	GameObject_t1756533147 * ___player_19;
	// PlayerController MuscleManControl::playerScript
	PlayerController_t4148409433 * ___playerScript_20;
	// UnityEngine.GameObject MuscleManControl::whooshLeft
	GameObject_t1756533147 * ___whooshLeft_21;
	// UnityEngine.GameObject MuscleManControl::whooshRight
	GameObject_t1756533147 * ___whooshRight_22;
	// UnityEngine.GameObject MuscleManControl::spawnLeft
	GameObject_t1756533147 * ___spawnLeft_23;
	// UnityEngine.GameObject MuscleManControl::spawnRight
	GameObject_t1756533147 * ___spawnRight_24;
	// System.Boolean MuscleManControl::dead
	bool ___dead_25;
	// UnityEngine.GameObject MuscleManControl::deadMuscleLeft
	GameObject_t1756533147 * ___deadMuscleLeft_26;
	// UnityEngine.GameObject MuscleManControl::deadMuscleRight
	GameObject_t1756533147 * ___deadMuscleRight_27;

public:
	inline static int32_t get_offset_of_jumpSpeed_2() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___jumpSpeed_2)); }
	inline float get_jumpSpeed_2() const { return ___jumpSpeed_2; }
	inline float* get_address_of_jumpSpeed_2() { return &___jumpSpeed_2; }
	inline void set_jumpSpeed_2(float value)
	{
		___jumpSpeed_2 = value;
	}

	inline static int32_t get_offset_of_life_3() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___life_3)); }
	inline int32_t get_life_3() const { return ___life_3; }
	inline int32_t* get_address_of_life_3() { return &___life_3; }
	inline void set_life_3(int32_t value)
	{
		___life_3 = value;
	}

	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___delay_4)); }
	inline float get_delay_4() const { return ___delay_4; }
	inline float* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(float value)
	{
		___delay_4 = value;
	}

	inline static int32_t get_offset_of_jumpTime_5() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___jumpTime_5)); }
	inline bool get_jumpTime_5() const { return ___jumpTime_5; }
	inline bool* get_address_of_jumpTime_5() { return &___jumpTime_5; }
	inline void set_jumpTime_5(bool value)
	{
		___jumpTime_5 = value;
	}

	inline static int32_t get_offset_of_hunterBody_6() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___hunterBody_6)); }
	inline Rigidbody2D_t502193897 * get_hunterBody_6() const { return ___hunterBody_6; }
	inline Rigidbody2D_t502193897 ** get_address_of_hunterBody_6() { return &___hunterBody_6; }
	inline void set_hunterBody_6(Rigidbody2D_t502193897 * value)
	{
		___hunterBody_6 = value;
		Il2CppCodeGenWriteBarrier(&___hunterBody_6, value);
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___anim_7)); }
	inline Animator_t69676727 * get_anim_7() const { return ___anim_7; }
	inline Animator_t69676727 ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animator_t69676727 * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier(&___anim_7, value);
	}

	inline static int32_t get_offset_of_vuln_8() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___vuln_8)); }
	inline bool get_vuln_8() const { return ___vuln_8; }
	inline bool* get_address_of_vuln_8() { return &___vuln_8; }
	inline void set_vuln_8(bool value)
	{
		___vuln_8 = value;
	}

	inline static int32_t get_offset_of_rend_9() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___rend_9)); }
	inline Renderer_t257310565 * get_rend_9() const { return ___rend_9; }
	inline Renderer_t257310565 ** get_address_of_rend_9() { return &___rend_9; }
	inline void set_rend_9(Renderer_t257310565 * value)
	{
		___rend_9 = value;
		Il2CppCodeGenWriteBarrier(&___rend_9, value);
	}

	inline static int32_t get_offset_of_col_10() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___col_10)); }
	inline Collider2D_t646061738 * get_col_10() const { return ___col_10; }
	inline Collider2D_t646061738 ** get_address_of_col_10() { return &___col_10; }
	inline void set_col_10(Collider2D_t646061738 * value)
	{
		___col_10 = value;
		Il2CppCodeGenWriteBarrier(&___col_10, value);
	}

	inline static int32_t get_offset_of_audioSource_11() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___audioSource_11)); }
	inline AudioSource_t1135106623 * get_audioSource_11() const { return ___audioSource_11; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_11() { return &___audioSource_11; }
	inline void set_audioSource_11(AudioSource_t1135106623 * value)
	{
		___audioSource_11 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_11, value);
	}

	inline static int32_t get_offset_of_Hit1_12() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___Hit1_12)); }
	inline AudioClip_t1932558630 * get_Hit1_12() const { return ___Hit1_12; }
	inline AudioClip_t1932558630 ** get_address_of_Hit1_12() { return &___Hit1_12; }
	inline void set_Hit1_12(AudioClip_t1932558630 * value)
	{
		___Hit1_12 = value;
		Il2CppCodeGenWriteBarrier(&___Hit1_12, value);
	}

	inline static int32_t get_offset_of_Hit2_13() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___Hit2_13)); }
	inline AudioClip_t1932558630 * get_Hit2_13() const { return ___Hit2_13; }
	inline AudioClip_t1932558630 ** get_address_of_Hit2_13() { return &___Hit2_13; }
	inline void set_Hit2_13(AudioClip_t1932558630 * value)
	{
		___Hit2_13 = value;
		Il2CppCodeGenWriteBarrier(&___Hit2_13, value);
	}

	inline static int32_t get_offset_of_Hit3_14() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___Hit3_14)); }
	inline AudioClip_t1932558630 * get_Hit3_14() const { return ___Hit3_14; }
	inline AudioClip_t1932558630 ** get_address_of_Hit3_14() { return &___Hit3_14; }
	inline void set_Hit3_14(AudioClip_t1932558630 * value)
	{
		___Hit3_14 = value;
		Il2CppCodeGenWriteBarrier(&___Hit3_14, value);
	}

	inline static int32_t get_offset_of_jump_15() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___jump_15)); }
	inline AudioClip_t1932558630 * get_jump_15() const { return ___jump_15; }
	inline AudioClip_t1932558630 ** get_address_of_jump_15() { return &___jump_15; }
	inline void set_jump_15(AudioClip_t1932558630 * value)
	{
		___jump_15 = value;
		Il2CppCodeGenWriteBarrier(&___jump_15, value);
	}

	inline static int32_t get_offset_of_spark_16() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___spark_16)); }
	inline AudioClip_t1932558630 * get_spark_16() const { return ___spark_16; }
	inline AudioClip_t1932558630 ** get_address_of_spark_16() { return &___spark_16; }
	inline void set_spark_16(AudioClip_t1932558630 * value)
	{
		___spark_16 = value;
		Il2CppCodeGenWriteBarrier(&___spark_16, value);
	}

	inline static int32_t get_offset_of_land_17() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___land_17)); }
	inline AudioClip_t1932558630 * get_land_17() const { return ___land_17; }
	inline AudioClip_t1932558630 ** get_address_of_land_17() { return &___land_17; }
	inline void set_land_17(AudioClip_t1932558630 * value)
	{
		___land_17 = value;
		Il2CppCodeGenWriteBarrier(&___land_17, value);
	}

	inline static int32_t get_offset_of_death_18() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___death_18)); }
	inline AudioClip_t1932558630 * get_death_18() const { return ___death_18; }
	inline AudioClip_t1932558630 ** get_address_of_death_18() { return &___death_18; }
	inline void set_death_18(AudioClip_t1932558630 * value)
	{
		___death_18 = value;
		Il2CppCodeGenWriteBarrier(&___death_18, value);
	}

	inline static int32_t get_offset_of_player_19() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___player_19)); }
	inline GameObject_t1756533147 * get_player_19() const { return ___player_19; }
	inline GameObject_t1756533147 ** get_address_of_player_19() { return &___player_19; }
	inline void set_player_19(GameObject_t1756533147 * value)
	{
		___player_19 = value;
		Il2CppCodeGenWriteBarrier(&___player_19, value);
	}

	inline static int32_t get_offset_of_playerScript_20() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___playerScript_20)); }
	inline PlayerController_t4148409433 * get_playerScript_20() const { return ___playerScript_20; }
	inline PlayerController_t4148409433 ** get_address_of_playerScript_20() { return &___playerScript_20; }
	inline void set_playerScript_20(PlayerController_t4148409433 * value)
	{
		___playerScript_20 = value;
		Il2CppCodeGenWriteBarrier(&___playerScript_20, value);
	}

	inline static int32_t get_offset_of_whooshLeft_21() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___whooshLeft_21)); }
	inline GameObject_t1756533147 * get_whooshLeft_21() const { return ___whooshLeft_21; }
	inline GameObject_t1756533147 ** get_address_of_whooshLeft_21() { return &___whooshLeft_21; }
	inline void set_whooshLeft_21(GameObject_t1756533147 * value)
	{
		___whooshLeft_21 = value;
		Il2CppCodeGenWriteBarrier(&___whooshLeft_21, value);
	}

	inline static int32_t get_offset_of_whooshRight_22() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___whooshRight_22)); }
	inline GameObject_t1756533147 * get_whooshRight_22() const { return ___whooshRight_22; }
	inline GameObject_t1756533147 ** get_address_of_whooshRight_22() { return &___whooshRight_22; }
	inline void set_whooshRight_22(GameObject_t1756533147 * value)
	{
		___whooshRight_22 = value;
		Il2CppCodeGenWriteBarrier(&___whooshRight_22, value);
	}

	inline static int32_t get_offset_of_spawnLeft_23() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___spawnLeft_23)); }
	inline GameObject_t1756533147 * get_spawnLeft_23() const { return ___spawnLeft_23; }
	inline GameObject_t1756533147 ** get_address_of_spawnLeft_23() { return &___spawnLeft_23; }
	inline void set_spawnLeft_23(GameObject_t1756533147 * value)
	{
		___spawnLeft_23 = value;
		Il2CppCodeGenWriteBarrier(&___spawnLeft_23, value);
	}

	inline static int32_t get_offset_of_spawnRight_24() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___spawnRight_24)); }
	inline GameObject_t1756533147 * get_spawnRight_24() const { return ___spawnRight_24; }
	inline GameObject_t1756533147 ** get_address_of_spawnRight_24() { return &___spawnRight_24; }
	inline void set_spawnRight_24(GameObject_t1756533147 * value)
	{
		___spawnRight_24 = value;
		Il2CppCodeGenWriteBarrier(&___spawnRight_24, value);
	}

	inline static int32_t get_offset_of_dead_25() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___dead_25)); }
	inline bool get_dead_25() const { return ___dead_25; }
	inline bool* get_address_of_dead_25() { return &___dead_25; }
	inline void set_dead_25(bool value)
	{
		___dead_25 = value;
	}

	inline static int32_t get_offset_of_deadMuscleLeft_26() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___deadMuscleLeft_26)); }
	inline GameObject_t1756533147 * get_deadMuscleLeft_26() const { return ___deadMuscleLeft_26; }
	inline GameObject_t1756533147 ** get_address_of_deadMuscleLeft_26() { return &___deadMuscleLeft_26; }
	inline void set_deadMuscleLeft_26(GameObject_t1756533147 * value)
	{
		___deadMuscleLeft_26 = value;
		Il2CppCodeGenWriteBarrier(&___deadMuscleLeft_26, value);
	}

	inline static int32_t get_offset_of_deadMuscleRight_27() { return static_cast<int32_t>(offsetof(MuscleManControl_t2578707966, ___deadMuscleRight_27)); }
	inline GameObject_t1756533147 * get_deadMuscleRight_27() const { return ___deadMuscleRight_27; }
	inline GameObject_t1756533147 ** get_address_of_deadMuscleRight_27() { return &___deadMuscleRight_27; }
	inline void set_deadMuscleRight_27(GameObject_t1756533147 * value)
	{
		___deadMuscleRight_27 = value;
		Il2CppCodeGenWriteBarrier(&___deadMuscleRight_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
