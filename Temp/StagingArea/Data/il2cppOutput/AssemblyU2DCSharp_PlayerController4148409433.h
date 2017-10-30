#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// CameraController
struct CameraController_t3555666667;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// LevelController
struct LevelController_t2717835266;
// MusicController
struct MusicController_t4192593383;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerController::playerSpeed
	float ___playerSpeed_2;
	// System.Single PlayerController::maxVelocity
	float ___maxVelocity_3;
	// System.Single PlayerController::jumpSpeed
	float ___jumpSpeed_4;
	// UnityEngine.GameObject PlayerController::muzzleFlash
	GameObject_t1756533147 * ___muzzleFlash_5;
	// UnityEngine.GameObject PlayerController::muzzleUp
	GameObject_t1756533147 * ___muzzleUp_6;
	// UnityEngine.GameObject PlayerController::muzzleDown
	GameObject_t1756533147 * ___muzzleDown_7;
	// UnityEngine.GameObject PlayerController::muzzleHorizontal
	GameObject_t1756533147 * ___muzzleHorizontal_8;
	// UnityEngine.GameObject PlayerController::muzzleBehind
	GameObject_t1756533147 * ___muzzleBehind_9;
	// UnityEngine.GameObject PlayerController::BulletUp
	GameObject_t1756533147 * ___BulletUp_10;
	// UnityEngine.GameObject PlayerController::BulletDown
	GameObject_t1756533147 * ___BulletDown_11;
	// UnityEngine.GameObject PlayerController::BulletLeft
	GameObject_t1756533147 * ___BulletLeft_12;
	// UnityEngine.GameObject PlayerController::BulletRight
	GameObject_t1756533147 * ___BulletRight_13;
	// UnityEngine.GameObject PlayerController::Respawn
	GameObject_t1756533147 * ___Respawn_14;
	// UnityEngine.AudioClip PlayerController::jump
	AudioClip_t1932558630 * ___jump_15;
	// UnityEngine.AudioClip PlayerController::shot
	AudioClip_t1932558630 * ___shot_16;
	// UnityEngine.AudioClip PlayerController::death
	AudioClip_t1932558630 * ___death_17;
	// UnityEngine.Rigidbody2D PlayerController::myBody
	Rigidbody2D_t502193897 * ___myBody_18;
	// UnityEngine.Animator PlayerController::anim
	Animator_t69676727 * ___anim_19;
	// System.Single PlayerController::faceRight
	float ___faceRight_20;
	// System.Single PlayerController::faceLeft
	float ___faceLeft_21;
	// System.Boolean PlayerController::shoot
	bool ___shoot_22;
	// UnityEngine.Vector2 PlayerController::size
	Vector2_t2243707579  ___size_23;
	// UnityEngine.Collider2D PlayerController::col
	Collider2D_t646061738 * ___col_24;
	// UnityEngine.Renderer PlayerController::rend
	Renderer_t257310565 * ___rend_25;
	// UnityEngine.AudioSource PlayerController::audioSource
	AudioSource_t1135106623 * ___audioSource_26;
	// CameraController PlayerController::activeCamera
	CameraController_t3555666667 * ___activeCamera_27;
	// UnityEngine.GameObject PlayerController::groundParticles
	GameObject_t1756533147 * ___groundParticles_28;
	// UnityEngine.ParticleSystem PlayerController::gpSettings
	ParticleSystem_t3394631041 * ___gpSettings_29;
	// System.Boolean PlayerController::isGrounded
	bool ___isGrounded_30;
	// UnityEngine.GameObject PlayerController::levelManager
	GameObject_t1756533147 * ___levelManager_31;
	// LevelController PlayerController::levelControl
	LevelController_t2717835266 * ___levelControl_32;
	// UnityEngine.GameObject PlayerController::deathDuck
	GameObject_t1756533147 * ___deathDuck_33;
	// UnityEngine.GameObject PlayerController::deathDuckFlipped
	GameObject_t1756533147 * ___deathDuckFlipped_34;
	// System.Boolean PlayerController::dead
	bool ___dead_35;
	// MusicController PlayerController::musicControl
	MusicController_t4192593383 * ___musicControl_36;

public:
	inline static int32_t get_offset_of_playerSpeed_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___playerSpeed_2)); }
	inline float get_playerSpeed_2() const { return ___playerSpeed_2; }
	inline float* get_address_of_playerSpeed_2() { return &___playerSpeed_2; }
	inline void set_playerSpeed_2(float value)
	{
		___playerSpeed_2 = value;
	}

	inline static int32_t get_offset_of_maxVelocity_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___maxVelocity_3)); }
	inline float get_maxVelocity_3() const { return ___maxVelocity_3; }
	inline float* get_address_of_maxVelocity_3() { return &___maxVelocity_3; }
	inline void set_maxVelocity_3(float value)
	{
		___maxVelocity_3 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___jumpSpeed_4)); }
	inline float get_jumpSpeed_4() const { return ___jumpSpeed_4; }
	inline float* get_address_of_jumpSpeed_4() { return &___jumpSpeed_4; }
	inline void set_jumpSpeed_4(float value)
	{
		___jumpSpeed_4 = value;
	}

	inline static int32_t get_offset_of_muzzleFlash_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___muzzleFlash_5)); }
	inline GameObject_t1756533147 * get_muzzleFlash_5() const { return ___muzzleFlash_5; }
	inline GameObject_t1756533147 ** get_address_of_muzzleFlash_5() { return &___muzzleFlash_5; }
	inline void set_muzzleFlash_5(GameObject_t1756533147 * value)
	{
		___muzzleFlash_5 = value;
		Il2CppCodeGenWriteBarrier(&___muzzleFlash_5, value);
	}

	inline static int32_t get_offset_of_muzzleUp_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___muzzleUp_6)); }
	inline GameObject_t1756533147 * get_muzzleUp_6() const { return ___muzzleUp_6; }
	inline GameObject_t1756533147 ** get_address_of_muzzleUp_6() { return &___muzzleUp_6; }
	inline void set_muzzleUp_6(GameObject_t1756533147 * value)
	{
		___muzzleUp_6 = value;
		Il2CppCodeGenWriteBarrier(&___muzzleUp_6, value);
	}

	inline static int32_t get_offset_of_muzzleDown_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___muzzleDown_7)); }
	inline GameObject_t1756533147 * get_muzzleDown_7() const { return ___muzzleDown_7; }
	inline GameObject_t1756533147 ** get_address_of_muzzleDown_7() { return &___muzzleDown_7; }
	inline void set_muzzleDown_7(GameObject_t1756533147 * value)
	{
		___muzzleDown_7 = value;
		Il2CppCodeGenWriteBarrier(&___muzzleDown_7, value);
	}

	inline static int32_t get_offset_of_muzzleHorizontal_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___muzzleHorizontal_8)); }
	inline GameObject_t1756533147 * get_muzzleHorizontal_8() const { return ___muzzleHorizontal_8; }
	inline GameObject_t1756533147 ** get_address_of_muzzleHorizontal_8() { return &___muzzleHorizontal_8; }
	inline void set_muzzleHorizontal_8(GameObject_t1756533147 * value)
	{
		___muzzleHorizontal_8 = value;
		Il2CppCodeGenWriteBarrier(&___muzzleHorizontal_8, value);
	}

	inline static int32_t get_offset_of_muzzleBehind_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___muzzleBehind_9)); }
	inline GameObject_t1756533147 * get_muzzleBehind_9() const { return ___muzzleBehind_9; }
	inline GameObject_t1756533147 ** get_address_of_muzzleBehind_9() { return &___muzzleBehind_9; }
	inline void set_muzzleBehind_9(GameObject_t1756533147 * value)
	{
		___muzzleBehind_9 = value;
		Il2CppCodeGenWriteBarrier(&___muzzleBehind_9, value);
	}

	inline static int32_t get_offset_of_BulletUp_10() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___BulletUp_10)); }
	inline GameObject_t1756533147 * get_BulletUp_10() const { return ___BulletUp_10; }
	inline GameObject_t1756533147 ** get_address_of_BulletUp_10() { return &___BulletUp_10; }
	inline void set_BulletUp_10(GameObject_t1756533147 * value)
	{
		___BulletUp_10 = value;
		Il2CppCodeGenWriteBarrier(&___BulletUp_10, value);
	}

	inline static int32_t get_offset_of_BulletDown_11() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___BulletDown_11)); }
	inline GameObject_t1756533147 * get_BulletDown_11() const { return ___BulletDown_11; }
	inline GameObject_t1756533147 ** get_address_of_BulletDown_11() { return &___BulletDown_11; }
	inline void set_BulletDown_11(GameObject_t1756533147 * value)
	{
		___BulletDown_11 = value;
		Il2CppCodeGenWriteBarrier(&___BulletDown_11, value);
	}

	inline static int32_t get_offset_of_BulletLeft_12() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___BulletLeft_12)); }
	inline GameObject_t1756533147 * get_BulletLeft_12() const { return ___BulletLeft_12; }
	inline GameObject_t1756533147 ** get_address_of_BulletLeft_12() { return &___BulletLeft_12; }
	inline void set_BulletLeft_12(GameObject_t1756533147 * value)
	{
		___BulletLeft_12 = value;
		Il2CppCodeGenWriteBarrier(&___BulletLeft_12, value);
	}

	inline static int32_t get_offset_of_BulletRight_13() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___BulletRight_13)); }
	inline GameObject_t1756533147 * get_BulletRight_13() const { return ___BulletRight_13; }
	inline GameObject_t1756533147 ** get_address_of_BulletRight_13() { return &___BulletRight_13; }
	inline void set_BulletRight_13(GameObject_t1756533147 * value)
	{
		___BulletRight_13 = value;
		Il2CppCodeGenWriteBarrier(&___BulletRight_13, value);
	}

	inline static int32_t get_offset_of_Respawn_14() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___Respawn_14)); }
	inline GameObject_t1756533147 * get_Respawn_14() const { return ___Respawn_14; }
	inline GameObject_t1756533147 ** get_address_of_Respawn_14() { return &___Respawn_14; }
	inline void set_Respawn_14(GameObject_t1756533147 * value)
	{
		___Respawn_14 = value;
		Il2CppCodeGenWriteBarrier(&___Respawn_14, value);
	}

	inline static int32_t get_offset_of_jump_15() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___jump_15)); }
	inline AudioClip_t1932558630 * get_jump_15() const { return ___jump_15; }
	inline AudioClip_t1932558630 ** get_address_of_jump_15() { return &___jump_15; }
	inline void set_jump_15(AudioClip_t1932558630 * value)
	{
		___jump_15 = value;
		Il2CppCodeGenWriteBarrier(&___jump_15, value);
	}

	inline static int32_t get_offset_of_shot_16() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___shot_16)); }
	inline AudioClip_t1932558630 * get_shot_16() const { return ___shot_16; }
	inline AudioClip_t1932558630 ** get_address_of_shot_16() { return &___shot_16; }
	inline void set_shot_16(AudioClip_t1932558630 * value)
	{
		___shot_16 = value;
		Il2CppCodeGenWriteBarrier(&___shot_16, value);
	}

	inline static int32_t get_offset_of_death_17() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___death_17)); }
	inline AudioClip_t1932558630 * get_death_17() const { return ___death_17; }
	inline AudioClip_t1932558630 ** get_address_of_death_17() { return &___death_17; }
	inline void set_death_17(AudioClip_t1932558630 * value)
	{
		___death_17 = value;
		Il2CppCodeGenWriteBarrier(&___death_17, value);
	}

	inline static int32_t get_offset_of_myBody_18() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___myBody_18)); }
	inline Rigidbody2D_t502193897 * get_myBody_18() const { return ___myBody_18; }
	inline Rigidbody2D_t502193897 ** get_address_of_myBody_18() { return &___myBody_18; }
	inline void set_myBody_18(Rigidbody2D_t502193897 * value)
	{
		___myBody_18 = value;
		Il2CppCodeGenWriteBarrier(&___myBody_18, value);
	}

	inline static int32_t get_offset_of_anim_19() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___anim_19)); }
	inline Animator_t69676727 * get_anim_19() const { return ___anim_19; }
	inline Animator_t69676727 ** get_address_of_anim_19() { return &___anim_19; }
	inline void set_anim_19(Animator_t69676727 * value)
	{
		___anim_19 = value;
		Il2CppCodeGenWriteBarrier(&___anim_19, value);
	}

	inline static int32_t get_offset_of_faceRight_20() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___faceRight_20)); }
	inline float get_faceRight_20() const { return ___faceRight_20; }
	inline float* get_address_of_faceRight_20() { return &___faceRight_20; }
	inline void set_faceRight_20(float value)
	{
		___faceRight_20 = value;
	}

	inline static int32_t get_offset_of_faceLeft_21() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___faceLeft_21)); }
	inline float get_faceLeft_21() const { return ___faceLeft_21; }
	inline float* get_address_of_faceLeft_21() { return &___faceLeft_21; }
	inline void set_faceLeft_21(float value)
	{
		___faceLeft_21 = value;
	}

	inline static int32_t get_offset_of_shoot_22() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___shoot_22)); }
	inline bool get_shoot_22() const { return ___shoot_22; }
	inline bool* get_address_of_shoot_22() { return &___shoot_22; }
	inline void set_shoot_22(bool value)
	{
		___shoot_22 = value;
	}

	inline static int32_t get_offset_of_size_23() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___size_23)); }
	inline Vector2_t2243707579  get_size_23() const { return ___size_23; }
	inline Vector2_t2243707579 * get_address_of_size_23() { return &___size_23; }
	inline void set_size_23(Vector2_t2243707579  value)
	{
		___size_23 = value;
	}

	inline static int32_t get_offset_of_col_24() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___col_24)); }
	inline Collider2D_t646061738 * get_col_24() const { return ___col_24; }
	inline Collider2D_t646061738 ** get_address_of_col_24() { return &___col_24; }
	inline void set_col_24(Collider2D_t646061738 * value)
	{
		___col_24 = value;
		Il2CppCodeGenWriteBarrier(&___col_24, value);
	}

	inline static int32_t get_offset_of_rend_25() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___rend_25)); }
	inline Renderer_t257310565 * get_rend_25() const { return ___rend_25; }
	inline Renderer_t257310565 ** get_address_of_rend_25() { return &___rend_25; }
	inline void set_rend_25(Renderer_t257310565 * value)
	{
		___rend_25 = value;
		Il2CppCodeGenWriteBarrier(&___rend_25, value);
	}

	inline static int32_t get_offset_of_audioSource_26() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___audioSource_26)); }
	inline AudioSource_t1135106623 * get_audioSource_26() const { return ___audioSource_26; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_26() { return &___audioSource_26; }
	inline void set_audioSource_26(AudioSource_t1135106623 * value)
	{
		___audioSource_26 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_26, value);
	}

	inline static int32_t get_offset_of_activeCamera_27() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___activeCamera_27)); }
	inline CameraController_t3555666667 * get_activeCamera_27() const { return ___activeCamera_27; }
	inline CameraController_t3555666667 ** get_address_of_activeCamera_27() { return &___activeCamera_27; }
	inline void set_activeCamera_27(CameraController_t3555666667 * value)
	{
		___activeCamera_27 = value;
		Il2CppCodeGenWriteBarrier(&___activeCamera_27, value);
	}

	inline static int32_t get_offset_of_groundParticles_28() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___groundParticles_28)); }
	inline GameObject_t1756533147 * get_groundParticles_28() const { return ___groundParticles_28; }
	inline GameObject_t1756533147 ** get_address_of_groundParticles_28() { return &___groundParticles_28; }
	inline void set_groundParticles_28(GameObject_t1756533147 * value)
	{
		___groundParticles_28 = value;
		Il2CppCodeGenWriteBarrier(&___groundParticles_28, value);
	}

	inline static int32_t get_offset_of_gpSettings_29() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___gpSettings_29)); }
	inline ParticleSystem_t3394631041 * get_gpSettings_29() const { return ___gpSettings_29; }
	inline ParticleSystem_t3394631041 ** get_address_of_gpSettings_29() { return &___gpSettings_29; }
	inline void set_gpSettings_29(ParticleSystem_t3394631041 * value)
	{
		___gpSettings_29 = value;
		Il2CppCodeGenWriteBarrier(&___gpSettings_29, value);
	}

	inline static int32_t get_offset_of_isGrounded_30() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___isGrounded_30)); }
	inline bool get_isGrounded_30() const { return ___isGrounded_30; }
	inline bool* get_address_of_isGrounded_30() { return &___isGrounded_30; }
	inline void set_isGrounded_30(bool value)
	{
		___isGrounded_30 = value;
	}

	inline static int32_t get_offset_of_levelManager_31() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___levelManager_31)); }
	inline GameObject_t1756533147 * get_levelManager_31() const { return ___levelManager_31; }
	inline GameObject_t1756533147 ** get_address_of_levelManager_31() { return &___levelManager_31; }
	inline void set_levelManager_31(GameObject_t1756533147 * value)
	{
		___levelManager_31 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_31, value);
	}

	inline static int32_t get_offset_of_levelControl_32() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___levelControl_32)); }
	inline LevelController_t2717835266 * get_levelControl_32() const { return ___levelControl_32; }
	inline LevelController_t2717835266 ** get_address_of_levelControl_32() { return &___levelControl_32; }
	inline void set_levelControl_32(LevelController_t2717835266 * value)
	{
		___levelControl_32 = value;
		Il2CppCodeGenWriteBarrier(&___levelControl_32, value);
	}

	inline static int32_t get_offset_of_deathDuck_33() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___deathDuck_33)); }
	inline GameObject_t1756533147 * get_deathDuck_33() const { return ___deathDuck_33; }
	inline GameObject_t1756533147 ** get_address_of_deathDuck_33() { return &___deathDuck_33; }
	inline void set_deathDuck_33(GameObject_t1756533147 * value)
	{
		___deathDuck_33 = value;
		Il2CppCodeGenWriteBarrier(&___deathDuck_33, value);
	}

	inline static int32_t get_offset_of_deathDuckFlipped_34() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___deathDuckFlipped_34)); }
	inline GameObject_t1756533147 * get_deathDuckFlipped_34() const { return ___deathDuckFlipped_34; }
	inline GameObject_t1756533147 ** get_address_of_deathDuckFlipped_34() { return &___deathDuckFlipped_34; }
	inline void set_deathDuckFlipped_34(GameObject_t1756533147 * value)
	{
		___deathDuckFlipped_34 = value;
		Il2CppCodeGenWriteBarrier(&___deathDuckFlipped_34, value);
	}

	inline static int32_t get_offset_of_dead_35() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___dead_35)); }
	inline bool get_dead_35() const { return ___dead_35; }
	inline bool* get_address_of_dead_35() { return &___dead_35; }
	inline void set_dead_35(bool value)
	{
		___dead_35 = value;
	}

	inline static int32_t get_offset_of_musicControl_36() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___musicControl_36)); }
	inline MusicController_t4192593383 * get_musicControl_36() const { return ___musicControl_36; }
	inline MusicController_t4192593383 ** get_address_of_musicControl_36() { return &___musicControl_36; }
	inline void set_musicControl_36(MusicController_t4192593383 * value)
	{
		___musicControl_36 = value;
		Il2CppCodeGenWriteBarrier(&___musicControl_36, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
