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

// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DogController
struct  DogController_t1827736226  : public MonoBehaviour_t1158329972
{
public:
	// System.Single DogController::moveSpeed
	float ___moveSpeed_2;
	// System.Single DogController::maxVel
	float ___maxVel_3;
	// System.Single DogController::maxVely
	float ___maxVely_4;
	// System.Single DogController::jumpSpeed
	float ___jumpSpeed_5;
	// System.Single DogController::radius
	float ___radius_6;
	// System.Int32 DogController::life
	int32_t ___life_7;
	// System.Single DogController::vel
	float ___vel_8;
	// UnityEngine.Vector3 DogController::direction
	Vector3_t2243707580  ___direction_9;
	// UnityEngine.Vector2 DogController::size
	Vector2_t2243707579  ___size_10;
	// UnityEngine.Collider2D DogController::col
	Collider2D_t646061738 * ___col_11;
	// UnityEngine.Renderer DogController::rend
	Renderer_t257310565 * ___rend_12;
	// UnityEngine.AudioSource DogController::audioSource
	AudioSource_t1135106623 * ___audioSource_13;
	// UnityEngine.AudioClip DogController::Hit1
	AudioClip_t1932558630 * ___Hit1_14;
	// UnityEngine.AudioClip DogController::Hit2
	AudioClip_t1932558630 * ___Hit2_15;
	// UnityEngine.AudioClip DogController::Hit3
	AudioClip_t1932558630 * ___Hit3_16;
	// UnityEngine.AudioClip DogController::jump
	AudioClip_t1932558630 * ___jump_17;
	// UnityEngine.AudioClip DogController::death
	AudioClip_t1932558630 * ___death_18;
	// UnityEngine.AudioClip DogController::dogBark
	AudioClip_t1932558630 * ___dogBark_19;
	// System.Boolean DogController::barked
	bool ___barked_20;
	// System.Boolean DogController::jumpCooldown
	bool ___jumpCooldown_21;
	// UnityEngine.Rigidbody2D DogController::rb
	Rigidbody2D_t502193897 * ___rb_22;
	// System.Boolean DogController::dead
	bool ___dead_23;
	// PlayerController DogController::playerScript
	PlayerController_t4148409433 * ___playerScript_24;
	// UnityEngine.GameObject DogController::player
	GameObject_t1756533147 * ___player_25;
	// UnityEngine.Vector3 DogController::faceLeft
	Vector3_t2243707580  ___faceLeft_26;
	// UnityEngine.Vector3 DogController::faceRight
	Vector3_t2243707580  ___faceRight_27;
	// UnityEngine.Animator DogController::anim
	Animator_t69676727 * ___anim_28;
	// UnityEngine.GameObject DogController::deadDog1
	GameObject_t1756533147 * ___deadDog1_29;
	// UnityEngine.GameObject DogController::deadDog2
	GameObject_t1756533147 * ___deadDog2_30;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_maxVel_3() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___maxVel_3)); }
	inline float get_maxVel_3() const { return ___maxVel_3; }
	inline float* get_address_of_maxVel_3() { return &___maxVel_3; }
	inline void set_maxVel_3(float value)
	{
		___maxVel_3 = value;
	}

	inline static int32_t get_offset_of_maxVely_4() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___maxVely_4)); }
	inline float get_maxVely_4() const { return ___maxVely_4; }
	inline float* get_address_of_maxVely_4() { return &___maxVely_4; }
	inline void set_maxVely_4(float value)
	{
		___maxVely_4 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_5() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___jumpSpeed_5)); }
	inline float get_jumpSpeed_5() const { return ___jumpSpeed_5; }
	inline float* get_address_of_jumpSpeed_5() { return &___jumpSpeed_5; }
	inline void set_jumpSpeed_5(float value)
	{
		___jumpSpeed_5 = value;
	}

	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___radius_6)); }
	inline float get_radius_6() const { return ___radius_6; }
	inline float* get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(float value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_life_7() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___life_7)); }
	inline int32_t get_life_7() const { return ___life_7; }
	inline int32_t* get_address_of_life_7() { return &___life_7; }
	inline void set_life_7(int32_t value)
	{
		___life_7 = value;
	}

	inline static int32_t get_offset_of_vel_8() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___vel_8)); }
	inline float get_vel_8() const { return ___vel_8; }
	inline float* get_address_of_vel_8() { return &___vel_8; }
	inline void set_vel_8(float value)
	{
		___vel_8 = value;
	}

	inline static int32_t get_offset_of_direction_9() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___direction_9)); }
	inline Vector3_t2243707580  get_direction_9() const { return ___direction_9; }
	inline Vector3_t2243707580 * get_address_of_direction_9() { return &___direction_9; }
	inline void set_direction_9(Vector3_t2243707580  value)
	{
		___direction_9 = value;
	}

	inline static int32_t get_offset_of_size_10() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___size_10)); }
	inline Vector2_t2243707579  get_size_10() const { return ___size_10; }
	inline Vector2_t2243707579 * get_address_of_size_10() { return &___size_10; }
	inline void set_size_10(Vector2_t2243707579  value)
	{
		___size_10 = value;
	}

	inline static int32_t get_offset_of_col_11() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___col_11)); }
	inline Collider2D_t646061738 * get_col_11() const { return ___col_11; }
	inline Collider2D_t646061738 ** get_address_of_col_11() { return &___col_11; }
	inline void set_col_11(Collider2D_t646061738 * value)
	{
		___col_11 = value;
		Il2CppCodeGenWriteBarrier(&___col_11, value);
	}

	inline static int32_t get_offset_of_rend_12() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___rend_12)); }
	inline Renderer_t257310565 * get_rend_12() const { return ___rend_12; }
	inline Renderer_t257310565 ** get_address_of_rend_12() { return &___rend_12; }
	inline void set_rend_12(Renderer_t257310565 * value)
	{
		___rend_12 = value;
		Il2CppCodeGenWriteBarrier(&___rend_12, value);
	}

	inline static int32_t get_offset_of_audioSource_13() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___audioSource_13)); }
	inline AudioSource_t1135106623 * get_audioSource_13() const { return ___audioSource_13; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_13() { return &___audioSource_13; }
	inline void set_audioSource_13(AudioSource_t1135106623 * value)
	{
		___audioSource_13 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_13, value);
	}

	inline static int32_t get_offset_of_Hit1_14() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___Hit1_14)); }
	inline AudioClip_t1932558630 * get_Hit1_14() const { return ___Hit1_14; }
	inline AudioClip_t1932558630 ** get_address_of_Hit1_14() { return &___Hit1_14; }
	inline void set_Hit1_14(AudioClip_t1932558630 * value)
	{
		___Hit1_14 = value;
		Il2CppCodeGenWriteBarrier(&___Hit1_14, value);
	}

	inline static int32_t get_offset_of_Hit2_15() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___Hit2_15)); }
	inline AudioClip_t1932558630 * get_Hit2_15() const { return ___Hit2_15; }
	inline AudioClip_t1932558630 ** get_address_of_Hit2_15() { return &___Hit2_15; }
	inline void set_Hit2_15(AudioClip_t1932558630 * value)
	{
		___Hit2_15 = value;
		Il2CppCodeGenWriteBarrier(&___Hit2_15, value);
	}

	inline static int32_t get_offset_of_Hit3_16() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___Hit3_16)); }
	inline AudioClip_t1932558630 * get_Hit3_16() const { return ___Hit3_16; }
	inline AudioClip_t1932558630 ** get_address_of_Hit3_16() { return &___Hit3_16; }
	inline void set_Hit3_16(AudioClip_t1932558630 * value)
	{
		___Hit3_16 = value;
		Il2CppCodeGenWriteBarrier(&___Hit3_16, value);
	}

	inline static int32_t get_offset_of_jump_17() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___jump_17)); }
	inline AudioClip_t1932558630 * get_jump_17() const { return ___jump_17; }
	inline AudioClip_t1932558630 ** get_address_of_jump_17() { return &___jump_17; }
	inline void set_jump_17(AudioClip_t1932558630 * value)
	{
		___jump_17 = value;
		Il2CppCodeGenWriteBarrier(&___jump_17, value);
	}

	inline static int32_t get_offset_of_death_18() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___death_18)); }
	inline AudioClip_t1932558630 * get_death_18() const { return ___death_18; }
	inline AudioClip_t1932558630 ** get_address_of_death_18() { return &___death_18; }
	inline void set_death_18(AudioClip_t1932558630 * value)
	{
		___death_18 = value;
		Il2CppCodeGenWriteBarrier(&___death_18, value);
	}

	inline static int32_t get_offset_of_dogBark_19() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___dogBark_19)); }
	inline AudioClip_t1932558630 * get_dogBark_19() const { return ___dogBark_19; }
	inline AudioClip_t1932558630 ** get_address_of_dogBark_19() { return &___dogBark_19; }
	inline void set_dogBark_19(AudioClip_t1932558630 * value)
	{
		___dogBark_19 = value;
		Il2CppCodeGenWriteBarrier(&___dogBark_19, value);
	}

	inline static int32_t get_offset_of_barked_20() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___barked_20)); }
	inline bool get_barked_20() const { return ___barked_20; }
	inline bool* get_address_of_barked_20() { return &___barked_20; }
	inline void set_barked_20(bool value)
	{
		___barked_20 = value;
	}

	inline static int32_t get_offset_of_jumpCooldown_21() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___jumpCooldown_21)); }
	inline bool get_jumpCooldown_21() const { return ___jumpCooldown_21; }
	inline bool* get_address_of_jumpCooldown_21() { return &___jumpCooldown_21; }
	inline void set_jumpCooldown_21(bool value)
	{
		___jumpCooldown_21 = value;
	}

	inline static int32_t get_offset_of_rb_22() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___rb_22)); }
	inline Rigidbody2D_t502193897 * get_rb_22() const { return ___rb_22; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_22() { return &___rb_22; }
	inline void set_rb_22(Rigidbody2D_t502193897 * value)
	{
		___rb_22 = value;
		Il2CppCodeGenWriteBarrier(&___rb_22, value);
	}

	inline static int32_t get_offset_of_dead_23() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___dead_23)); }
	inline bool get_dead_23() const { return ___dead_23; }
	inline bool* get_address_of_dead_23() { return &___dead_23; }
	inline void set_dead_23(bool value)
	{
		___dead_23 = value;
	}

	inline static int32_t get_offset_of_playerScript_24() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___playerScript_24)); }
	inline PlayerController_t4148409433 * get_playerScript_24() const { return ___playerScript_24; }
	inline PlayerController_t4148409433 ** get_address_of_playerScript_24() { return &___playerScript_24; }
	inline void set_playerScript_24(PlayerController_t4148409433 * value)
	{
		___playerScript_24 = value;
		Il2CppCodeGenWriteBarrier(&___playerScript_24, value);
	}

	inline static int32_t get_offset_of_player_25() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___player_25)); }
	inline GameObject_t1756533147 * get_player_25() const { return ___player_25; }
	inline GameObject_t1756533147 ** get_address_of_player_25() { return &___player_25; }
	inline void set_player_25(GameObject_t1756533147 * value)
	{
		___player_25 = value;
		Il2CppCodeGenWriteBarrier(&___player_25, value);
	}

	inline static int32_t get_offset_of_faceLeft_26() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___faceLeft_26)); }
	inline Vector3_t2243707580  get_faceLeft_26() const { return ___faceLeft_26; }
	inline Vector3_t2243707580 * get_address_of_faceLeft_26() { return &___faceLeft_26; }
	inline void set_faceLeft_26(Vector3_t2243707580  value)
	{
		___faceLeft_26 = value;
	}

	inline static int32_t get_offset_of_faceRight_27() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___faceRight_27)); }
	inline Vector3_t2243707580  get_faceRight_27() const { return ___faceRight_27; }
	inline Vector3_t2243707580 * get_address_of_faceRight_27() { return &___faceRight_27; }
	inline void set_faceRight_27(Vector3_t2243707580  value)
	{
		___faceRight_27 = value;
	}

	inline static int32_t get_offset_of_anim_28() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___anim_28)); }
	inline Animator_t69676727 * get_anim_28() const { return ___anim_28; }
	inline Animator_t69676727 ** get_address_of_anim_28() { return &___anim_28; }
	inline void set_anim_28(Animator_t69676727 * value)
	{
		___anim_28 = value;
		Il2CppCodeGenWriteBarrier(&___anim_28, value);
	}

	inline static int32_t get_offset_of_deadDog1_29() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___deadDog1_29)); }
	inline GameObject_t1756533147 * get_deadDog1_29() const { return ___deadDog1_29; }
	inline GameObject_t1756533147 ** get_address_of_deadDog1_29() { return &___deadDog1_29; }
	inline void set_deadDog1_29(GameObject_t1756533147 * value)
	{
		___deadDog1_29 = value;
		Il2CppCodeGenWriteBarrier(&___deadDog1_29, value);
	}

	inline static int32_t get_offset_of_deadDog2_30() { return static_cast<int32_t>(offsetof(DogController_t1827736226, ___deadDog2_30)); }
	inline GameObject_t1756533147 * get_deadDog2_30() const { return ___deadDog2_30; }
	inline GameObject_t1756533147 ** get_address_of_deadDog2_30() { return &___deadDog2_30; }
	inline void set_deadDog2_30(GameObject_t1756533147 * value)
	{
		___deadDog2_30 = value;
		Il2CppCodeGenWriteBarrier(&___deadDog2_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
