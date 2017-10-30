#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MarkerController
struct  MarkerController_t60378566  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.SpriteRenderer MarkerController::thisSR
	SpriteRenderer_t1209076198 * ___thisSR_2;
	// System.Boolean MarkerController::markerOn
	bool ___markerOn_3;
	// System.Boolean MarkerController::exitMarker
	bool ___exitMarker_4;

public:
	inline static int32_t get_offset_of_thisSR_2() { return static_cast<int32_t>(offsetof(MarkerController_t60378566, ___thisSR_2)); }
	inline SpriteRenderer_t1209076198 * get_thisSR_2() const { return ___thisSR_2; }
	inline SpriteRenderer_t1209076198 ** get_address_of_thisSR_2() { return &___thisSR_2; }
	inline void set_thisSR_2(SpriteRenderer_t1209076198 * value)
	{
		___thisSR_2 = value;
		Il2CppCodeGenWriteBarrier(&___thisSR_2, value);
	}

	inline static int32_t get_offset_of_markerOn_3() { return static_cast<int32_t>(offsetof(MarkerController_t60378566, ___markerOn_3)); }
	inline bool get_markerOn_3() const { return ___markerOn_3; }
	inline bool* get_address_of_markerOn_3() { return &___markerOn_3; }
	inline void set_markerOn_3(bool value)
	{
		___markerOn_3 = value;
	}

	inline static int32_t get_offset_of_exitMarker_4() { return static_cast<int32_t>(offsetof(MarkerController_t60378566, ___exitMarker_4)); }
	inline bool get_exitMarker_4() const { return ___exitMarker_4; }
	inline bool* get_address_of_exitMarker_4() { return &___exitMarker_4; }
	inline void set_exitMarker_4(bool value)
	{
		___exitMarker_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
