#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3555666667  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CameraController::player
	GameObject_t1756533147 * ___player_2;
	// PlayerController CameraController::playerScript
	PlayerController_t4148409433 * ___playerScript_3;
	// UnityEngine.GameObject CameraController::map
	GameObject_t1756533147 * ___map_4;
	// UnityEngine.SpriteRenderer CameraController::mapSR
	SpriteRenderer_t1209076198 * ___mapSR_5;
	// UnityEngine.Camera CameraController::cam
	Camera_t189460977 * ___cam_6;
	// System.Single CameraController::halfMap
	float ___halfMap_7;
	// System.Single CameraController::spotBegin
	float ___spotBegin_8;
	// System.Single CameraController::spotEnd
	float ___spotEnd_9;
	// System.Single CameraController::height
	float ___height_10;
	// System.Single CameraController::lastY
	float ___lastY_11;
	// UnityEngine.Texture2D CameraController::fadeTexture
	Texture2D_t3542995729 * ___fadeTexture_12;
	// System.Single CameraController::fadeSpeed
	float ___fadeSpeed_13;
	// System.Int32 CameraController::drawDepth
	int32_t ___drawDepth_14;
	// System.Single CameraController::alpha
	float ___alpha_15;
	// System.Single CameraController::fadeDir
	float ___fadeDir_16;
	// System.Boolean CameraController::fadeOut
	bool ___fadeOut_17;
	// System.Boolean CameraController::fadeIn
	bool ___fadeIn_18;
	// System.Boolean CameraController::mainMenu
	bool ___mainMenu_19;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_playerScript_3() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___playerScript_3)); }
	inline PlayerController_t4148409433 * get_playerScript_3() const { return ___playerScript_3; }
	inline PlayerController_t4148409433 ** get_address_of_playerScript_3() { return &___playerScript_3; }
	inline void set_playerScript_3(PlayerController_t4148409433 * value)
	{
		___playerScript_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerScript_3, value);
	}

	inline static int32_t get_offset_of_map_4() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___map_4)); }
	inline GameObject_t1756533147 * get_map_4() const { return ___map_4; }
	inline GameObject_t1756533147 ** get_address_of_map_4() { return &___map_4; }
	inline void set_map_4(GameObject_t1756533147 * value)
	{
		___map_4 = value;
		Il2CppCodeGenWriteBarrier(&___map_4, value);
	}

	inline static int32_t get_offset_of_mapSR_5() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___mapSR_5)); }
	inline SpriteRenderer_t1209076198 * get_mapSR_5() const { return ___mapSR_5; }
	inline SpriteRenderer_t1209076198 ** get_address_of_mapSR_5() { return &___mapSR_5; }
	inline void set_mapSR_5(SpriteRenderer_t1209076198 * value)
	{
		___mapSR_5 = value;
		Il2CppCodeGenWriteBarrier(&___mapSR_5, value);
	}

	inline static int32_t get_offset_of_cam_6() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___cam_6)); }
	inline Camera_t189460977 * get_cam_6() const { return ___cam_6; }
	inline Camera_t189460977 ** get_address_of_cam_6() { return &___cam_6; }
	inline void set_cam_6(Camera_t189460977 * value)
	{
		___cam_6 = value;
		Il2CppCodeGenWriteBarrier(&___cam_6, value);
	}

	inline static int32_t get_offset_of_halfMap_7() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___halfMap_7)); }
	inline float get_halfMap_7() const { return ___halfMap_7; }
	inline float* get_address_of_halfMap_7() { return &___halfMap_7; }
	inline void set_halfMap_7(float value)
	{
		___halfMap_7 = value;
	}

	inline static int32_t get_offset_of_spotBegin_8() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___spotBegin_8)); }
	inline float get_spotBegin_8() const { return ___spotBegin_8; }
	inline float* get_address_of_spotBegin_8() { return &___spotBegin_8; }
	inline void set_spotBegin_8(float value)
	{
		___spotBegin_8 = value;
	}

	inline static int32_t get_offset_of_spotEnd_9() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___spotEnd_9)); }
	inline float get_spotEnd_9() const { return ___spotEnd_9; }
	inline float* get_address_of_spotEnd_9() { return &___spotEnd_9; }
	inline void set_spotEnd_9(float value)
	{
		___spotEnd_9 = value;
	}

	inline static int32_t get_offset_of_height_10() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___height_10)); }
	inline float get_height_10() const { return ___height_10; }
	inline float* get_address_of_height_10() { return &___height_10; }
	inline void set_height_10(float value)
	{
		___height_10 = value;
	}

	inline static int32_t get_offset_of_lastY_11() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___lastY_11)); }
	inline float get_lastY_11() const { return ___lastY_11; }
	inline float* get_address_of_lastY_11() { return &___lastY_11; }
	inline void set_lastY_11(float value)
	{
		___lastY_11 = value;
	}

	inline static int32_t get_offset_of_fadeTexture_12() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___fadeTexture_12)); }
	inline Texture2D_t3542995729 * get_fadeTexture_12() const { return ___fadeTexture_12; }
	inline Texture2D_t3542995729 ** get_address_of_fadeTexture_12() { return &___fadeTexture_12; }
	inline void set_fadeTexture_12(Texture2D_t3542995729 * value)
	{
		___fadeTexture_12 = value;
		Il2CppCodeGenWriteBarrier(&___fadeTexture_12, value);
	}

	inline static int32_t get_offset_of_fadeSpeed_13() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___fadeSpeed_13)); }
	inline float get_fadeSpeed_13() const { return ___fadeSpeed_13; }
	inline float* get_address_of_fadeSpeed_13() { return &___fadeSpeed_13; }
	inline void set_fadeSpeed_13(float value)
	{
		___fadeSpeed_13 = value;
	}

	inline static int32_t get_offset_of_drawDepth_14() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___drawDepth_14)); }
	inline int32_t get_drawDepth_14() const { return ___drawDepth_14; }
	inline int32_t* get_address_of_drawDepth_14() { return &___drawDepth_14; }
	inline void set_drawDepth_14(int32_t value)
	{
		___drawDepth_14 = value;
	}

	inline static int32_t get_offset_of_alpha_15() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___alpha_15)); }
	inline float get_alpha_15() const { return ___alpha_15; }
	inline float* get_address_of_alpha_15() { return &___alpha_15; }
	inline void set_alpha_15(float value)
	{
		___alpha_15 = value;
	}

	inline static int32_t get_offset_of_fadeDir_16() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___fadeDir_16)); }
	inline float get_fadeDir_16() const { return ___fadeDir_16; }
	inline float* get_address_of_fadeDir_16() { return &___fadeDir_16; }
	inline void set_fadeDir_16(float value)
	{
		___fadeDir_16 = value;
	}

	inline static int32_t get_offset_of_fadeOut_17() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___fadeOut_17)); }
	inline bool get_fadeOut_17() const { return ___fadeOut_17; }
	inline bool* get_address_of_fadeOut_17() { return &___fadeOut_17; }
	inline void set_fadeOut_17(bool value)
	{
		___fadeOut_17 = value;
	}

	inline static int32_t get_offset_of_fadeIn_18() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___fadeIn_18)); }
	inline bool get_fadeIn_18() const { return ___fadeIn_18; }
	inline bool* get_address_of_fadeIn_18() { return &___fadeIn_18; }
	inline void set_fadeIn_18(bool value)
	{
		___fadeIn_18 = value;
	}

	inline static int32_t get_offset_of_mainMenu_19() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___mainMenu_19)); }
	inline bool get_mainMenu_19() const { return ___mainMenu_19; }
	inline bool* get_address_of_mainMenu_19() { return &___mainMenu_19; }
	inline void set_mainMenu_19(bool value)
	{
		___mainMenu_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
