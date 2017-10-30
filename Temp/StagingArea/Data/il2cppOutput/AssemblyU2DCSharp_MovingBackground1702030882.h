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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovingBackground
struct  MovingBackground_t1702030882  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MovingBackground::speed
	float ___speed_2;
	// System.Single MovingBackground::size
	float ___size_3;
	// UnityEngine.Vector3 MovingBackground::startPosition
	Vector3_t2243707580  ___startPosition_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(MovingBackground_t1702030882, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(MovingBackground_t1702030882, ___size_3)); }
	inline float get_size_3() const { return ___size_3; }
	inline float* get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(float value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_startPosition_4() { return static_cast<int32_t>(offsetof(MovingBackground_t1702030882, ___startPosition_4)); }
	inline Vector3_t2243707580  get_startPosition_4() const { return ___startPosition_4; }
	inline Vector3_t2243707580 * get_address_of_startPosition_4() { return &___startPosition_4; }
	inline void set_startPosition_4(Vector3_t2243707580  value)
	{
		___startPosition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
