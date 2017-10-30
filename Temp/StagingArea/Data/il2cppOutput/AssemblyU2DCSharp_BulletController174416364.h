#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletController
struct  BulletController_t174416364  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BulletController::speed
	float ___speed_2;
	// System.Int32 BulletController::damage
	int32_t ___damage_4;
	// UnityEngine.Quaternion BulletController::direction
	Quaternion_t4030073918  ___direction_5;
	// System.Single BulletController::distance
	float ___distance_6;
	// UnityEngine.Vector3 BulletController::initialPos
	Vector3_t2243707580  ___initialPos_7;
	// System.Boolean BulletController::enemyBullet
	bool ___enemyBullet_8;
	// PlayerController BulletController::playerScript
	PlayerController_t4148409433 * ___playerScript_9;
	// UnityEngine.Rigidbody2D BulletController::rb
	Rigidbody2D_t502193897 * ___rb_10;
	// UnityEngine.GameObject BulletController::blood
	GameObject_t1756533147 * ___blood_11;
	// UnityEngine.GameObject BulletController::spark
	GameObject_t1756533147 * ___spark_12;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(BulletController_t174416364, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_damage_4() { return static_cast<int32_t>(offsetof(BulletController_t174416364, ___damage_4)); }
	inline int32_t get_damage_4() const { return ___damage_4; }
	inline int32_t* get_address_of_damage_4() { return &___damage_4; }
	inline void set_damage_4(int32_t value)
	{
		___damage_4 = value;
	}

	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(BulletController_t174416364, ___direction_5)); }
	inline Quaternion_t4030073918  get_direction_5() const { return ___direction_5; }
	inline Quaternion_t4030073918 * get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(Quaternion_t4030073918  value)
	{
		___direction_5 = value;
	}

	inline static int32_t get_offset_of_distance_6() { return static_cast<int32_t>(offsetof(BulletController_t174416364, ___distance_6)); }
	inline float get_distance_6() const { return ___distance_6; }
	inline float* get_address_of_distance_6() { return &___distance_6; }
	inline void set_distance_6(float value)
	{
		___distance_6 = value;
	}

	inline static int32_t get_offset_of_initialPos_7() { return static_cast<int32_t>(offsetof(BulletController_t174416364, ___initialPos_7)); }
	inline Vector3_t2243707580  get_initialPos_7() const { return ___initialPos_7; }
	inline Vector3_t2243707580 * get_address_of_initialPos_7() { return &___initialPos_7; }
	inline void set_initialPos_7(Vector3_t2243707580  value)
	{
		___initialPos_7 = value;
	}

	inline static int32_t get_offset_of_enemyBullet_8() { return static_cast<int32_t>(offsetof(BulletController_t174416364, ___enemyBullet_8)); }
	inline bool get_enemyBullet_8() const { return ___enemyBullet_8; }
	inline bool* get_address_of_enemyBullet_8() { return &___enemyBullet_8; }
	inline void set_enemyBullet_8(bool value)
	{
		___enemyBullet_8 = value;
	}

	inline static int32_t get_offset_of_playerScript_9() { return static_cast<int32_t>(offsetof(BulletController_t174416364, ___playerScript_9)); }
	inline PlayerController_t4148409433 * get_playerScript_9() const { return ___playerScript_9; }
	inline PlayerController_t4148409433 ** get_address_of_playerScript_9() { return &___playerScript_9; }
	inline void set_playerScript_9(PlayerController_t4148409433 * value)
	{
		___playerScript_9 = value;
		Il2CppCodeGenWriteBarrier(&___playerScript_9, value);
	}

	inline static int32_t get_offset_of_rb_10() { return static_cast<int32_t>(offsetof(BulletController_t174416364, ___rb_10)); }
	inline Rigidbody2D_t502193897 * get_rb_10() const { return ___rb_10; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_10() { return &___rb_10; }
	inline void set_rb_10(Rigidbody2D_t502193897 * value)
	{
		___rb_10 = value;
		Il2CppCodeGenWriteBarrier(&___rb_10, value);
	}

	inline static int32_t get_offset_of_blood_11() { return static_cast<int32_t>(offsetof(BulletController_t174416364, ___blood_11)); }
	inline GameObject_t1756533147 * get_blood_11() const { return ___blood_11; }
	inline GameObject_t1756533147 ** get_address_of_blood_11() { return &___blood_11; }
	inline void set_blood_11(GameObject_t1756533147 * value)
	{
		___blood_11 = value;
		Il2CppCodeGenWriteBarrier(&___blood_11, value);
	}

	inline static int32_t get_offset_of_spark_12() { return static_cast<int32_t>(offsetof(BulletController_t174416364, ___spark_12)); }
	inline GameObject_t1756533147 * get_spark_12() const { return ___spark_12; }
	inline GameObject_t1756533147 ** get_address_of_spark_12() { return &___spark_12; }
	inline void set_spark_12(GameObject_t1756533147 * value)
	{
		___spark_12 = value;
		Il2CppCodeGenWriteBarrier(&___spark_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
