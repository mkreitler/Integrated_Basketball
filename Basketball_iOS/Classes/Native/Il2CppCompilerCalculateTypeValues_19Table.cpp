#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Void
struct Void_t1841601450;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;
// Gamestrap.GSAppExampleControl
struct GSAppExampleControl_t2154243716;
// System.Collections.Generic.List`1<Gamestrap.ColorSet>
struct List_1_t2466951705;
// System.Collections.Generic.List`1<Gamestrap.EffectSet>
struct List_1_t2008089987;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// Gamestrap.GamestrapTheme
struct GamestrapTheme_t2245232465;
// Gamestrap.GamestrapTheme[]
struct GamestrapThemeU5BU5D_t1487930444;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;
// UnityEngine.UI.Graphic
struct Graphic_t2426225576;
// System.Func`2<UnityEngine.UIVertex,System.Single>
struct Func_2_t1646574707;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1328083999* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1328083999* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1328083999* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef COLOR_T2020392075_H
#define COLOR_T2020392075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2020392075 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2020392075_H
#ifndef VECTOR2_T2243707579_H
#define VECTOR2_T2243707579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2243707579 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2243707579_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2243707579  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2243707579  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2243707579  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2243707579  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2243707579  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2243707579  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2243707579  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2243707579  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2243707579  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2243707579 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2243707579  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___oneVector_3)); }
	inline Vector2_t2243707579  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2243707579 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2243707579  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___upVector_4)); }
	inline Vector2_t2243707579  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2243707579 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2243707579  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___downVector_5)); }
	inline Vector2_t2243707579  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2243707579 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2243707579  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___leftVector_6)); }
	inline Vector2_t2243707579  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2243707579 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2243707579  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___rightVector_7)); }
	inline Vector2_t2243707579  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2243707579 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2243707579  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2243707579  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2243707579 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2243707579  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2243707579  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2243707579 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2243707579  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2243707579_H
#ifndef COLORSET_T3097830573_H
#define COLORSET_T3097830573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gamestrap.ColorSet
struct  ColorSet_t3097830573  : public RuntimeObject
{
public:
	// System.String Gamestrap.ColorSet::name
	String_t* ___name_0;
	// System.String Gamestrap.ColorSet::tag
	String_t* ___tag_1;
	// UnityEngine.Color Gamestrap.ColorSet::normal
	Color_t2020392075  ___normal_2;
	// UnityEngine.Color Gamestrap.ColorSet::highlighted
	Color_t2020392075  ___highlighted_3;
	// UnityEngine.Color Gamestrap.ColorSet::pressed
	Color_t2020392075  ___pressed_4;
	// UnityEngine.Color Gamestrap.ColorSet::disabled
	Color_t2020392075  ___disabled_5;
	// UnityEngine.Color Gamestrap.ColorSet::detail
	Color_t2020392075  ___detail_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ColorSet_t3097830573, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(ColorSet_t3097830573, ___tag_1)); }
	inline String_t* get_tag_1() const { return ___tag_1; }
	inline String_t** get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(String_t* value)
	{
		___tag_1 = value;
		Il2CppCodeGenWriteBarrier((&___tag_1), value);
	}

	inline static int32_t get_offset_of_normal_2() { return static_cast<int32_t>(offsetof(ColorSet_t3097830573, ___normal_2)); }
	inline Color_t2020392075  get_normal_2() const { return ___normal_2; }
	inline Color_t2020392075 * get_address_of_normal_2() { return &___normal_2; }
	inline void set_normal_2(Color_t2020392075  value)
	{
		___normal_2 = value;
	}

	inline static int32_t get_offset_of_highlighted_3() { return static_cast<int32_t>(offsetof(ColorSet_t3097830573, ___highlighted_3)); }
	inline Color_t2020392075  get_highlighted_3() const { return ___highlighted_3; }
	inline Color_t2020392075 * get_address_of_highlighted_3() { return &___highlighted_3; }
	inline void set_highlighted_3(Color_t2020392075  value)
	{
		___highlighted_3 = value;
	}

	inline static int32_t get_offset_of_pressed_4() { return static_cast<int32_t>(offsetof(ColorSet_t3097830573, ___pressed_4)); }
	inline Color_t2020392075  get_pressed_4() const { return ___pressed_4; }
	inline Color_t2020392075 * get_address_of_pressed_4() { return &___pressed_4; }
	inline void set_pressed_4(Color_t2020392075  value)
	{
		___pressed_4 = value;
	}

	inline static int32_t get_offset_of_disabled_5() { return static_cast<int32_t>(offsetof(ColorSet_t3097830573, ___disabled_5)); }
	inline Color_t2020392075  get_disabled_5() const { return ___disabled_5; }
	inline Color_t2020392075 * get_address_of_disabled_5() { return &___disabled_5; }
	inline void set_disabled_5(Color_t2020392075  value)
	{
		___disabled_5 = value;
	}

	inline static int32_t get_offset_of_detail_6() { return static_cast<int32_t>(offsetof(ColorSet_t3097830573, ___detail_6)); }
	inline Color_t2020392075  get_detail_6() const { return ___detail_6; }
	inline Color_t2020392075 * get_address_of_detail_6() { return &___detail_6; }
	inline void set_detail_6(Color_t2020392075  value)
	{
		___detail_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORSET_T3097830573_H
#ifndef OBJECT_T1021602117_H
#define OBJECT_T1021602117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1021602117  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021602117, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1021602117_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1021602117_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1021602117_H
#ifndef ESCENENAMES_T1643290173_H
#define ESCENENAMES_T1643290173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gamestrap.ESceneNames
struct  ESceneNames_t1643290173 
{
public:
	// System.Int32 Gamestrap.ESceneNames::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ESceneNames_t1643290173, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ESCENENAMES_T1643290173_H
#ifndef EFFECTSET_T2638968855_H
#define EFFECTSET_T2638968855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gamestrap.EffectSet
struct  EffectSet_t2638968855  : public RuntimeObject
{
public:
	// System.String Gamestrap.EffectSet::name
	String_t* ___name_0;
	// System.String Gamestrap.EffectSet::tag
	String_t* ___tag_1;
	// System.Boolean Gamestrap.EffectSet::gradient
	bool ___gradient_2;
	// UnityEngine.Color Gamestrap.EffectSet::gradientTop
	Color_t2020392075  ___gradientTop_3;
	// UnityEngine.Color Gamestrap.EffectSet::gradientBottom
	Color_t2020392075  ___gradientBottom_4;
	// System.Boolean Gamestrap.EffectSet::shadow
	bool ___shadow_5;
	// UnityEngine.Color Gamestrap.EffectSet::shadowColor
	Color_t2020392075  ___shadowColor_6;
	// UnityEngine.Vector2 Gamestrap.EffectSet::shadowOffset
	Vector2_t2243707579  ___shadowOffset_7;
	// System.Boolean Gamestrap.EffectSet::radialGradient
	bool ___radialGradient_8;
	// UnityEngine.Color Gamestrap.EffectSet::radialColor
	Color_t2020392075  ___radialColor_9;
	// UnityEngine.Vector2 Gamestrap.EffectSet::centerPosition
	Vector2_t2243707579  ___centerPosition_10;
	// System.Single Gamestrap.EffectSet::radius
	float ___radius_11;
	// System.Boolean Gamestrap.EffectSet::mirrorEffect
	bool ___mirrorEffect_12;
	// System.Single Gamestrap.EffectSet::mirrorScale
	float ___mirrorScale_13;
	// UnityEngine.Vector2 Gamestrap.EffectSet::mirrorOffset
	Vector2_t2243707579  ___mirrorOffset_14;
	// System.Single Gamestrap.EffectSet::mirrorSkew
	float ___mirrorSkew_15;
	// UnityEngine.Color Gamestrap.EffectSet::mirrorTop
	Color_t2020392075  ___mirrorTop_16;
	// UnityEngine.Color Gamestrap.EffectSet::mirrorBottom
	Color_t2020392075  ___mirrorBottom_17;
	// System.Boolean Gamestrap.EffectSet::skewEffect
	bool ___skewEffect_18;
	// System.Single Gamestrap.EffectSet::skew
	float ___skew_19;
	// System.Single Gamestrap.EffectSet::perspective
	float ___perspective_20;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___tag_1)); }
	inline String_t* get_tag_1() const { return ___tag_1; }
	inline String_t** get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(String_t* value)
	{
		___tag_1 = value;
		Il2CppCodeGenWriteBarrier((&___tag_1), value);
	}

	inline static int32_t get_offset_of_gradient_2() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___gradient_2)); }
	inline bool get_gradient_2() const { return ___gradient_2; }
	inline bool* get_address_of_gradient_2() { return &___gradient_2; }
	inline void set_gradient_2(bool value)
	{
		___gradient_2 = value;
	}

	inline static int32_t get_offset_of_gradientTop_3() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___gradientTop_3)); }
	inline Color_t2020392075  get_gradientTop_3() const { return ___gradientTop_3; }
	inline Color_t2020392075 * get_address_of_gradientTop_3() { return &___gradientTop_3; }
	inline void set_gradientTop_3(Color_t2020392075  value)
	{
		___gradientTop_3 = value;
	}

	inline static int32_t get_offset_of_gradientBottom_4() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___gradientBottom_4)); }
	inline Color_t2020392075  get_gradientBottom_4() const { return ___gradientBottom_4; }
	inline Color_t2020392075 * get_address_of_gradientBottom_4() { return &___gradientBottom_4; }
	inline void set_gradientBottom_4(Color_t2020392075  value)
	{
		___gradientBottom_4 = value;
	}

	inline static int32_t get_offset_of_shadow_5() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___shadow_5)); }
	inline bool get_shadow_5() const { return ___shadow_5; }
	inline bool* get_address_of_shadow_5() { return &___shadow_5; }
	inline void set_shadow_5(bool value)
	{
		___shadow_5 = value;
	}

	inline static int32_t get_offset_of_shadowColor_6() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___shadowColor_6)); }
	inline Color_t2020392075  get_shadowColor_6() const { return ___shadowColor_6; }
	inline Color_t2020392075 * get_address_of_shadowColor_6() { return &___shadowColor_6; }
	inline void set_shadowColor_6(Color_t2020392075  value)
	{
		___shadowColor_6 = value;
	}

	inline static int32_t get_offset_of_shadowOffset_7() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___shadowOffset_7)); }
	inline Vector2_t2243707579  get_shadowOffset_7() const { return ___shadowOffset_7; }
	inline Vector2_t2243707579 * get_address_of_shadowOffset_7() { return &___shadowOffset_7; }
	inline void set_shadowOffset_7(Vector2_t2243707579  value)
	{
		___shadowOffset_7 = value;
	}

	inline static int32_t get_offset_of_radialGradient_8() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___radialGradient_8)); }
	inline bool get_radialGradient_8() const { return ___radialGradient_8; }
	inline bool* get_address_of_radialGradient_8() { return &___radialGradient_8; }
	inline void set_radialGradient_8(bool value)
	{
		___radialGradient_8 = value;
	}

	inline static int32_t get_offset_of_radialColor_9() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___radialColor_9)); }
	inline Color_t2020392075  get_radialColor_9() const { return ___radialColor_9; }
	inline Color_t2020392075 * get_address_of_radialColor_9() { return &___radialColor_9; }
	inline void set_radialColor_9(Color_t2020392075  value)
	{
		___radialColor_9 = value;
	}

	inline static int32_t get_offset_of_centerPosition_10() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___centerPosition_10)); }
	inline Vector2_t2243707579  get_centerPosition_10() const { return ___centerPosition_10; }
	inline Vector2_t2243707579 * get_address_of_centerPosition_10() { return &___centerPosition_10; }
	inline void set_centerPosition_10(Vector2_t2243707579  value)
	{
		___centerPosition_10 = value;
	}

	inline static int32_t get_offset_of_radius_11() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___radius_11)); }
	inline float get_radius_11() const { return ___radius_11; }
	inline float* get_address_of_radius_11() { return &___radius_11; }
	inline void set_radius_11(float value)
	{
		___radius_11 = value;
	}

	inline static int32_t get_offset_of_mirrorEffect_12() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___mirrorEffect_12)); }
	inline bool get_mirrorEffect_12() const { return ___mirrorEffect_12; }
	inline bool* get_address_of_mirrorEffect_12() { return &___mirrorEffect_12; }
	inline void set_mirrorEffect_12(bool value)
	{
		___mirrorEffect_12 = value;
	}

	inline static int32_t get_offset_of_mirrorScale_13() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___mirrorScale_13)); }
	inline float get_mirrorScale_13() const { return ___mirrorScale_13; }
	inline float* get_address_of_mirrorScale_13() { return &___mirrorScale_13; }
	inline void set_mirrorScale_13(float value)
	{
		___mirrorScale_13 = value;
	}

	inline static int32_t get_offset_of_mirrorOffset_14() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___mirrorOffset_14)); }
	inline Vector2_t2243707579  get_mirrorOffset_14() const { return ___mirrorOffset_14; }
	inline Vector2_t2243707579 * get_address_of_mirrorOffset_14() { return &___mirrorOffset_14; }
	inline void set_mirrorOffset_14(Vector2_t2243707579  value)
	{
		___mirrorOffset_14 = value;
	}

	inline static int32_t get_offset_of_mirrorSkew_15() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___mirrorSkew_15)); }
	inline float get_mirrorSkew_15() const { return ___mirrorSkew_15; }
	inline float* get_address_of_mirrorSkew_15() { return &___mirrorSkew_15; }
	inline void set_mirrorSkew_15(float value)
	{
		___mirrorSkew_15 = value;
	}

	inline static int32_t get_offset_of_mirrorTop_16() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___mirrorTop_16)); }
	inline Color_t2020392075  get_mirrorTop_16() const { return ___mirrorTop_16; }
	inline Color_t2020392075 * get_address_of_mirrorTop_16() { return &___mirrorTop_16; }
	inline void set_mirrorTop_16(Color_t2020392075  value)
	{
		___mirrorTop_16 = value;
	}

	inline static int32_t get_offset_of_mirrorBottom_17() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___mirrorBottom_17)); }
	inline Color_t2020392075  get_mirrorBottom_17() const { return ___mirrorBottom_17; }
	inline Color_t2020392075 * get_address_of_mirrorBottom_17() { return &___mirrorBottom_17; }
	inline void set_mirrorBottom_17(Color_t2020392075  value)
	{
		___mirrorBottom_17 = value;
	}

	inline static int32_t get_offset_of_skewEffect_18() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___skewEffect_18)); }
	inline bool get_skewEffect_18() const { return ___skewEffect_18; }
	inline bool* get_address_of_skewEffect_18() { return &___skewEffect_18; }
	inline void set_skewEffect_18(bool value)
	{
		___skewEffect_18 = value;
	}

	inline static int32_t get_offset_of_skew_19() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___skew_19)); }
	inline float get_skew_19() const { return ___skew_19; }
	inline float* get_address_of_skew_19() { return &___skew_19; }
	inline void set_skew_19(float value)
	{
		___skew_19 = value;
	}

	inline static int32_t get_offset_of_perspective_20() { return static_cast<int32_t>(offsetof(EffectSet_t2638968855, ___perspective_20)); }
	inline float get_perspective_20() const { return ___perspective_20; }
	inline float* get_address_of_perspective_20() { return &___perspective_20; }
	inline void set_perspective_20(float value)
	{
		___perspective_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EFFECTSET_T2638968855_H
#ifndef U3CLOADSCENETRANSITIONSU3EC__ITERATOR0_T3812313616_H
#define U3CLOADSCENETRANSITIONSU3EC__ITERATOR0_T3812313616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gamestrap.GSAppExampleControl/<LoadSceneTransitions>c__Iterator0
struct  U3CLoadSceneTransitionsU3Ec__Iterator0_t3812313616  : public RuntimeObject
{
public:
	// Gamestrap.ESceneNames Gamestrap.GSAppExampleControl/<LoadSceneTransitions>c__Iterator0::sceneName
	int32_t ___sceneName_0;
	// Gamestrap.GSAppExampleControl Gamestrap.GSAppExampleControl/<LoadSceneTransitions>c__Iterator0::$this
	GSAppExampleControl_t2154243716 * ___U24this_1;
	// System.Object Gamestrap.GSAppExampleControl/<LoadSceneTransitions>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean Gamestrap.GSAppExampleControl/<LoadSceneTransitions>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 Gamestrap.GSAppExampleControl/<LoadSceneTransitions>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_sceneName_0() { return static_cast<int32_t>(offsetof(U3CLoadSceneTransitionsU3Ec__Iterator0_t3812313616, ___sceneName_0)); }
	inline int32_t get_sceneName_0() const { return ___sceneName_0; }
	inline int32_t* get_address_of_sceneName_0() { return &___sceneName_0; }
	inline void set_sceneName_0(int32_t value)
	{
		___sceneName_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CLoadSceneTransitionsU3Ec__Iterator0_t3812313616, ___U24this_1)); }
	inline GSAppExampleControl_t2154243716 * get_U24this_1() const { return ___U24this_1; }
	inline GSAppExampleControl_t2154243716 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(GSAppExampleControl_t2154243716 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CLoadSceneTransitionsU3Ec__Iterator0_t3812313616, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CLoadSceneTransitionsU3Ec__Iterator0_t3812313616, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CLoadSceneTransitionsU3Ec__Iterator0_t3812313616, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADSCENETRANSITIONSU3EC__ITERATOR0_T3812313616_H
#ifndef COMPONENT_T3819376471_H
#define COMPONENT_T3819376471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3819376471  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3819376471_H
#ifndef SCRIPTABLEOBJECT_T1975622470_H
#define SCRIPTABLEOBJECT_T1975622470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t1975622470  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1975622470_marshaled_pinvoke : public Object_t1021602117_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1975622470_marshaled_com : public Object_t1021602117_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T1975622470_H
#ifndef BEHAVIOUR_T955675639_H
#define BEHAVIOUR_T955675639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t955675639  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T955675639_H
#ifndef GAMESTRAPTHEME_T2245232465_H
#define GAMESTRAPTHEME_T2245232465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gamestrap.GamestrapTheme
struct  GamestrapTheme_t2245232465  : public ScriptableObject_t1975622470
{
public:
	// System.Collections.Generic.List`1<Gamestrap.ColorSet> Gamestrap.GamestrapTheme::palette
	List_1_t2466951705 * ___palette_3;
	// System.Collections.Generic.List`1<Gamestrap.EffectSet> Gamestrap.GamestrapTheme::effectSets
	List_1_t2008089987 * ___effectSets_4;

public:
	inline static int32_t get_offset_of_palette_3() { return static_cast<int32_t>(offsetof(GamestrapTheme_t2245232465, ___palette_3)); }
	inline List_1_t2466951705 * get_palette_3() const { return ___palette_3; }
	inline List_1_t2466951705 ** get_address_of_palette_3() { return &___palette_3; }
	inline void set_palette_3(List_1_t2466951705 * value)
	{
		___palette_3 = value;
		Il2CppCodeGenWriteBarrier((&___palette_3), value);
	}

	inline static int32_t get_offset_of_effectSets_4() { return static_cast<int32_t>(offsetof(GamestrapTheme_t2245232465, ___effectSets_4)); }
	inline List_1_t2008089987 * get_effectSets_4() const { return ___effectSets_4; }
	inline List_1_t2008089987 ** get_address_of_effectSets_4() { return &___effectSets_4; }
	inline void set_effectSets_4(List_1_t2008089987 * value)
	{
		___effectSets_4 = value;
		Il2CppCodeGenWriteBarrier((&___effectSets_4), value);
	}
};

struct GamestrapTheme_t2245232465_StaticFields
{
public:
	// System.Int32 Gamestrap.GamestrapTheme::recursiveLevel
	int32_t ___recursiveLevel_2;

public:
	inline static int32_t get_offset_of_recursiveLevel_2() { return static_cast<int32_t>(offsetof(GamestrapTheme_t2245232465_StaticFields, ___recursiveLevel_2)); }
	inline int32_t get_recursiveLevel_2() const { return ___recursiveLevel_2; }
	inline int32_t* get_address_of_recursiveLevel_2() { return &___recursiveLevel_2; }
	inline void set_recursiveLevel_2(int32_t value)
	{
		___recursiveLevel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESTRAPTHEME_T2245232465_H
#ifndef MONOBEHAVIOUR_T1158329972_H
#define MONOBEHAVIOUR_T1158329972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1158329972  : public Behaviour_t955675639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1158329972_H
#ifndef UIBEHAVIOUR_T3960014691_H
#define UIBEHAVIOUR_T3960014691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3960014691  : public MonoBehaviour_t1158329972
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3960014691_H
#ifndef MAINMENUCONTROL_T4164784149_H
#define MAINMENUCONTROL_T4164784149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gamestrap.MainMenuControl
struct  MainMenuControl_t4164784149  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Gamestrap.MainMenuControl::settingsPanel
	GameObject_t1756533147 * ___settingsPanel_4;
	// UnityEngine.GameObject Gamestrap.MainMenuControl::aboutPanel
	GameObject_t1756533147 * ___aboutPanel_5;
	// UnityEngine.UI.Toggle Gamestrap.MainMenuControl::soundToggle
	Toggle_t3976754468 * ___soundToggle_6;
	// UnityEngine.UI.Toggle Gamestrap.MainMenuControl::musicToggle
	Toggle_t3976754468 * ___musicToggle_7;
	// UnityEngine.UI.Text Gamestrap.MainMenuControl::notificationText
	Text_t356221433 * ___notificationText_8;
	// UnityEngine.Animator Gamestrap.MainMenuControl::notificationAnimator
	Animator_t69676727 * ___notificationAnimator_9;

public:
	inline static int32_t get_offset_of_settingsPanel_4() { return static_cast<int32_t>(offsetof(MainMenuControl_t4164784149, ___settingsPanel_4)); }
	inline GameObject_t1756533147 * get_settingsPanel_4() const { return ___settingsPanel_4; }
	inline GameObject_t1756533147 ** get_address_of_settingsPanel_4() { return &___settingsPanel_4; }
	inline void set_settingsPanel_4(GameObject_t1756533147 * value)
	{
		___settingsPanel_4 = value;
		Il2CppCodeGenWriteBarrier((&___settingsPanel_4), value);
	}

	inline static int32_t get_offset_of_aboutPanel_5() { return static_cast<int32_t>(offsetof(MainMenuControl_t4164784149, ___aboutPanel_5)); }
	inline GameObject_t1756533147 * get_aboutPanel_5() const { return ___aboutPanel_5; }
	inline GameObject_t1756533147 ** get_address_of_aboutPanel_5() { return &___aboutPanel_5; }
	inline void set_aboutPanel_5(GameObject_t1756533147 * value)
	{
		___aboutPanel_5 = value;
		Il2CppCodeGenWriteBarrier((&___aboutPanel_5), value);
	}

	inline static int32_t get_offset_of_soundToggle_6() { return static_cast<int32_t>(offsetof(MainMenuControl_t4164784149, ___soundToggle_6)); }
	inline Toggle_t3976754468 * get_soundToggle_6() const { return ___soundToggle_6; }
	inline Toggle_t3976754468 ** get_address_of_soundToggle_6() { return &___soundToggle_6; }
	inline void set_soundToggle_6(Toggle_t3976754468 * value)
	{
		___soundToggle_6 = value;
		Il2CppCodeGenWriteBarrier((&___soundToggle_6), value);
	}

	inline static int32_t get_offset_of_musicToggle_7() { return static_cast<int32_t>(offsetof(MainMenuControl_t4164784149, ___musicToggle_7)); }
	inline Toggle_t3976754468 * get_musicToggle_7() const { return ___musicToggle_7; }
	inline Toggle_t3976754468 ** get_address_of_musicToggle_7() { return &___musicToggle_7; }
	inline void set_musicToggle_7(Toggle_t3976754468 * value)
	{
		___musicToggle_7 = value;
		Il2CppCodeGenWriteBarrier((&___musicToggle_7), value);
	}

	inline static int32_t get_offset_of_notificationText_8() { return static_cast<int32_t>(offsetof(MainMenuControl_t4164784149, ___notificationText_8)); }
	inline Text_t356221433 * get_notificationText_8() const { return ___notificationText_8; }
	inline Text_t356221433 ** get_address_of_notificationText_8() { return &___notificationText_8; }
	inline void set_notificationText_8(Text_t356221433 * value)
	{
		___notificationText_8 = value;
		Il2CppCodeGenWriteBarrier((&___notificationText_8), value);
	}

	inline static int32_t get_offset_of_notificationAnimator_9() { return static_cast<int32_t>(offsetof(MainMenuControl_t4164784149, ___notificationAnimator_9)); }
	inline Animator_t69676727 * get_notificationAnimator_9() const { return ___notificationAnimator_9; }
	inline Animator_t69676727 ** get_address_of_notificationAnimator_9() { return &___notificationAnimator_9; }
	inline void set_notificationAnimator_9(Animator_t69676727 * value)
	{
		___notificationAnimator_9 = value;
		Il2CppCodeGenWriteBarrier((&___notificationAnimator_9), value);
	}
};

struct MainMenuControl_t4164784149_StaticFields
{
public:
	// System.Int32 Gamestrap.MainMenuControl::visibleVariable
	int32_t ___visibleVariable_2;
	// System.Int32 Gamestrap.MainMenuControl::notifyVariable
	int32_t ___notifyVariable_3;

public:
	inline static int32_t get_offset_of_visibleVariable_2() { return static_cast<int32_t>(offsetof(MainMenuControl_t4164784149_StaticFields, ___visibleVariable_2)); }
	inline int32_t get_visibleVariable_2() const { return ___visibleVariable_2; }
	inline int32_t* get_address_of_visibleVariable_2() { return &___visibleVariable_2; }
	inline void set_visibleVariable_2(int32_t value)
	{
		___visibleVariable_2 = value;
	}

	inline static int32_t get_offset_of_notifyVariable_3() { return static_cast<int32_t>(offsetof(MainMenuControl_t4164784149_StaticFields, ___notifyVariable_3)); }
	inline int32_t get_notifyVariable_3() const { return ___notifyVariable_3; }
	inline int32_t* get_address_of_notifyVariable_3() { return &___notifyVariable_3; }
	inline void set_notifyVariable_3(int32_t value)
	{
		___notifyVariable_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAINMENUCONTROL_T4164784149_H
#ifndef LEVELSCONTROL_T1867744244_H
#define LEVELSCONTROL_T1867744244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelsControl
struct  LevelsControl_t1867744244  : public MonoBehaviour_t1158329972
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVELSCONTROL_T1867744244_H
#ifndef SCENETRANSITIONSBUTTON_T606392618_H
#define SCENETRANSITIONSBUTTON_T606392618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gamestrap.SceneTransitionsButton
struct  SceneTransitionsButton_t606392618  : public MonoBehaviour_t1158329972
{
public:
	// Gamestrap.ESceneNames Gamestrap.SceneTransitionsButton::sceneName
	int32_t ___sceneName_2;

public:
	inline static int32_t get_offset_of_sceneName_2() { return static_cast<int32_t>(offsetof(SceneTransitionsButton_t606392618, ___sceneName_2)); }
	inline int32_t get_sceneName_2() const { return ___sceneName_2; }
	inline int32_t* get_address_of_sceneName_2() { return &___sceneName_2; }
	inline void set_sceneName_2(int32_t value)
	{
		___sceneName_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENETRANSITIONSBUTTON_T606392618_H
#ifndef BUTTONSHOWHIDE_T1901736403_H
#define BUTTONSHOWHIDE_T1901736403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonShowHide
struct  ButtonShowHide_t1901736403  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean ButtonShowHide::startShowGroup
	bool ___startShowGroup_2;
	// UnityEngine.GameObject[] ButtonShowHide::showHideGroup
	GameObjectU5BU5D_t3057952154* ___showHideGroup_3;
	// System.Boolean ButtonShowHide::show
	bool ___show_4;

public:
	inline static int32_t get_offset_of_startShowGroup_2() { return static_cast<int32_t>(offsetof(ButtonShowHide_t1901736403, ___startShowGroup_2)); }
	inline bool get_startShowGroup_2() const { return ___startShowGroup_2; }
	inline bool* get_address_of_startShowGroup_2() { return &___startShowGroup_2; }
	inline void set_startShowGroup_2(bool value)
	{
		___startShowGroup_2 = value;
	}

	inline static int32_t get_offset_of_showHideGroup_3() { return static_cast<int32_t>(offsetof(ButtonShowHide_t1901736403, ___showHideGroup_3)); }
	inline GameObjectU5BU5D_t3057952154* get_showHideGroup_3() const { return ___showHideGroup_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_showHideGroup_3() { return &___showHideGroup_3; }
	inline void set_showHideGroup_3(GameObjectU5BU5D_t3057952154* value)
	{
		___showHideGroup_3 = value;
		Il2CppCodeGenWriteBarrier((&___showHideGroup_3), value);
	}

	inline static int32_t get_offset_of_show_4() { return static_cast<int32_t>(offsetof(ButtonShowHide_t1901736403, ___show_4)); }
	inline bool get_show_4() const { return ___show_4; }
	inline bool* get_address_of_show_4() { return &___show_4; }
	inline void set_show_4(bool value)
	{
		___show_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONSHOWHIDE_T1901736403_H
#ifndef THEMEBUTTON_T37571801_H
#define THEMEBUTTON_T37571801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gamestrap.ThemeButton
struct  ThemeButton_t37571801  : public MonoBehaviour_t1158329972
{
public:
	// Gamestrap.GamestrapTheme Gamestrap.ThemeButton::theme
	GamestrapTheme_t2245232465 * ___theme_2;

public:
	inline static int32_t get_offset_of_theme_2() { return static_cast<int32_t>(offsetof(ThemeButton_t37571801, ___theme_2)); }
	inline GamestrapTheme_t2245232465 * get_theme_2() const { return ___theme_2; }
	inline GamestrapTheme_t2245232465 ** get_address_of_theme_2() { return &___theme_2; }
	inline void set_theme_2(GamestrapTheme_t2245232465 * value)
	{
		___theme_2 = value;
		Il2CppCodeGenWriteBarrier((&___theme_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THEMEBUTTON_T37571801_H
#ifndef THEMETOGGLER_T1181749815_H
#define THEMETOGGLER_T1181749815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gamestrap.ThemeToggler
struct  ThemeToggler_t1181749815  : public MonoBehaviour_t1158329972
{
public:
	// Gamestrap.GamestrapTheme[] Gamestrap.ThemeToggler::themes
	GamestrapThemeU5BU5D_t1487930444* ___themes_2;
	// System.Int32 Gamestrap.ThemeToggler::index
	int32_t ___index_3;

public:
	inline static int32_t get_offset_of_themes_2() { return static_cast<int32_t>(offsetof(ThemeToggler_t1181749815, ___themes_2)); }
	inline GamestrapThemeU5BU5D_t1487930444* get_themes_2() const { return ___themes_2; }
	inline GamestrapThemeU5BU5D_t1487930444** get_address_of_themes_2() { return &___themes_2; }
	inline void set_themes_2(GamestrapThemeU5BU5D_t1487930444* value)
	{
		___themes_2 = value;
		Il2CppCodeGenWriteBarrier((&___themes_2), value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(ThemeToggler_t1181749815, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THEMETOGGLER_T1181749815_H
#ifndef TOGGLEBUTTONICON_T3802687969_H
#define TOGGLEBUTTONICON_T3802687969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ToggleButtonIcon
struct  ToggleButtonIcon_t3802687969  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite ToggleButtonIcon::onIcon
	Sprite_t309593783 * ___onIcon_2;
	// UnityEngine.Sprite ToggleButtonIcon::offIcon
	Sprite_t309593783 * ___offIcon_3;
	// UnityEngine.UI.Toggle ToggleButtonIcon::toggleButton
	Toggle_t3976754468 * ___toggleButton_4;

public:
	inline static int32_t get_offset_of_onIcon_2() { return static_cast<int32_t>(offsetof(ToggleButtonIcon_t3802687969, ___onIcon_2)); }
	inline Sprite_t309593783 * get_onIcon_2() const { return ___onIcon_2; }
	inline Sprite_t309593783 ** get_address_of_onIcon_2() { return &___onIcon_2; }
	inline void set_onIcon_2(Sprite_t309593783 * value)
	{
		___onIcon_2 = value;
		Il2CppCodeGenWriteBarrier((&___onIcon_2), value);
	}

	inline static int32_t get_offset_of_offIcon_3() { return static_cast<int32_t>(offsetof(ToggleButtonIcon_t3802687969, ___offIcon_3)); }
	inline Sprite_t309593783 * get_offIcon_3() const { return ___offIcon_3; }
	inline Sprite_t309593783 ** get_address_of_offIcon_3() { return &___offIcon_3; }
	inline void set_offIcon_3(Sprite_t309593783 * value)
	{
		___offIcon_3 = value;
		Il2CppCodeGenWriteBarrier((&___offIcon_3), value);
	}

	inline static int32_t get_offset_of_toggleButton_4() { return static_cast<int32_t>(offsetof(ToggleButtonIcon_t3802687969, ___toggleButton_4)); }
	inline Toggle_t3976754468 * get_toggleButton_4() const { return ___toggleButton_4; }
	inline Toggle_t3976754468 ** get_address_of_toggleButton_4() { return &___toggleButton_4; }
	inline void set_toggleButton_4(Toggle_t3976754468 * value)
	{
		___toggleButton_4 = value;
		Il2CppCodeGenWriteBarrier((&___toggleButton_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLEBUTTONICON_T3802687969_H
#ifndef GSAPPEXAMPLECONTROL_T2154243716_H
#define GSAPPEXAMPLECONTROL_T2154243716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gamestrap.GSAppExampleControl
struct  GSAppExampleControl_t2154243716  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator Gamestrap.GSAppExampleControl::faderAnimator
	Animator_t69676727 * ___faderAnimator_4;
	// UnityEngine.AnimationClip Gamestrap.GSAppExampleControl::fadingClip
	AnimationClip_t3510324950 * ___fadingClip_5;

public:
	inline static int32_t get_offset_of_faderAnimator_4() { return static_cast<int32_t>(offsetof(GSAppExampleControl_t2154243716, ___faderAnimator_4)); }
	inline Animator_t69676727 * get_faderAnimator_4() const { return ___faderAnimator_4; }
	inline Animator_t69676727 ** get_address_of_faderAnimator_4() { return &___faderAnimator_4; }
	inline void set_faderAnimator_4(Animator_t69676727 * value)
	{
		___faderAnimator_4 = value;
		Il2CppCodeGenWriteBarrier((&___faderAnimator_4), value);
	}

	inline static int32_t get_offset_of_fadingClip_5() { return static_cast<int32_t>(offsetof(GSAppExampleControl_t2154243716, ___fadingClip_5)); }
	inline AnimationClip_t3510324950 * get_fadingClip_5() const { return ___fadingClip_5; }
	inline AnimationClip_t3510324950 ** get_address_of_fadingClip_5() { return &___fadingClip_5; }
	inline void set_fadingClip_5(AnimationClip_t3510324950 * value)
	{
		___fadingClip_5 = value;
		Il2CppCodeGenWriteBarrier((&___fadingClip_5), value);
	}
};

struct GSAppExampleControl_t2154243716_StaticFields
{
public:
	// Gamestrap.GSAppExampleControl Gamestrap.GSAppExampleControl::Instance
	GSAppExampleControl_t2154243716 * ___Instance_2;
	// System.Int32 Gamestrap.GSAppExampleControl::VisibleVariable
	int32_t ___VisibleVariable_3;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(GSAppExampleControl_t2154243716_StaticFields, ___Instance_2)); }
	inline GSAppExampleControl_t2154243716 * get_Instance_2() const { return ___Instance_2; }
	inline GSAppExampleControl_t2154243716 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(GSAppExampleControl_t2154243716 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_2), value);
	}

	inline static int32_t get_offset_of_VisibleVariable_3() { return static_cast<int32_t>(offsetof(GSAppExampleControl_t2154243716_StaticFields, ___VisibleVariable_3)); }
	inline int32_t get_VisibleVariable_3() const { return ___VisibleVariable_3; }
	inline int32_t* get_address_of_VisibleVariable_3() { return &___VisibleVariable_3; }
	inline void set_VisibleVariable_3(int32_t value)
	{
		___VisibleVariable_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GSAPPEXAMPLECONTROL_T2154243716_H
#ifndef GAMEPLAYUI_T2067473040_H
#define GAMEPLAYUI_T2067473040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gamestrap.GameplayUI
struct  GameplayUI_t2067473040  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Gamestrap.GameplayUI::pausePanel
	GameObject_t1756533147 * ___pausePanel_2;
	// System.Boolean Gamestrap.GameplayUI::pause
	bool ___pause_3;

public:
	inline static int32_t get_offset_of_pausePanel_2() { return static_cast<int32_t>(offsetof(GameplayUI_t2067473040, ___pausePanel_2)); }
	inline GameObject_t1756533147 * get_pausePanel_2() const { return ___pausePanel_2; }
	inline GameObject_t1756533147 ** get_address_of_pausePanel_2() { return &___pausePanel_2; }
	inline void set_pausePanel_2(GameObject_t1756533147 * value)
	{
		___pausePanel_2 = value;
		Il2CppCodeGenWriteBarrier((&___pausePanel_2), value);
	}

	inline static int32_t get_offset_of_pause_3() { return static_cast<int32_t>(offsetof(GameplayUI_t2067473040, ___pause_3)); }
	inline bool get_pause_3() const { return ___pause_3; }
	inline bool* get_address_of_pause_3() { return &___pause_3; }
	inline void set_pause_3(bool value)
	{
		___pause_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEPLAYUI_T2067473040_H
#ifndef BASEMESHEFFECT_T1728560551_H
#define BASEMESHEFFECT_T1728560551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BaseMeshEffect
struct  BaseMeshEffect_t1728560551  : public UIBehaviour_t3960014691
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_t2426225576 * ___m_Graphic_2;

public:
	inline static int32_t get_offset_of_m_Graphic_2() { return static_cast<int32_t>(offsetof(BaseMeshEffect_t1728560551, ___m_Graphic_2)); }
	inline Graphic_t2426225576 * get_m_Graphic_2() const { return ___m_Graphic_2; }
	inline Graphic_t2426225576 ** get_address_of_m_Graphic_2() { return &___m_Graphic_2; }
	inline void set_m_Graphic_2(Graphic_t2426225576 * value)
	{
		___m_Graphic_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Graphic_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMESHEFFECT_T1728560551_H
#ifndef GAMESTRAPEFFECT_T826032831_H
#define GAMESTRAPEFFECT_T826032831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gamestrap.GamestrapEffect
struct  GamestrapEffect_t826032831  : public BaseMeshEffect_t1728560551
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESTRAPEFFECT_T826032831_H
#ifndef SHADOW_T4269599528_H
#define SHADOW_T4269599528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Shadow
struct  Shadow_t4269599528  : public BaseMeshEffect_t1728560551
{
public:
	// UnityEngine.Color UnityEngine.UI.Shadow::m_EffectColor
	Color_t2020392075  ___m_EffectColor_3;
	// UnityEngine.Vector2 UnityEngine.UI.Shadow::m_EffectDistance
	Vector2_t2243707579  ___m_EffectDistance_4;
	// System.Boolean UnityEngine.UI.Shadow::m_UseGraphicAlpha
	bool ___m_UseGraphicAlpha_5;

public:
	inline static int32_t get_offset_of_m_EffectColor_3() { return static_cast<int32_t>(offsetof(Shadow_t4269599528, ___m_EffectColor_3)); }
	inline Color_t2020392075  get_m_EffectColor_3() const { return ___m_EffectColor_3; }
	inline Color_t2020392075 * get_address_of_m_EffectColor_3() { return &___m_EffectColor_3; }
	inline void set_m_EffectColor_3(Color_t2020392075  value)
	{
		___m_EffectColor_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectDistance_4() { return static_cast<int32_t>(offsetof(Shadow_t4269599528, ___m_EffectDistance_4)); }
	inline Vector2_t2243707579  get_m_EffectDistance_4() const { return ___m_EffectDistance_4; }
	inline Vector2_t2243707579 * get_address_of_m_EffectDistance_4() { return &___m_EffectDistance_4; }
	inline void set_m_EffectDistance_4(Vector2_t2243707579  value)
	{
		___m_EffectDistance_4 = value;
	}

	inline static int32_t get_offset_of_m_UseGraphicAlpha_5() { return static_cast<int32_t>(offsetof(Shadow_t4269599528, ___m_UseGraphicAlpha_5)); }
	inline bool get_m_UseGraphicAlpha_5() const { return ___m_UseGraphicAlpha_5; }
	inline bool* get_address_of_m_UseGraphicAlpha_5() { return &___m_UseGraphicAlpha_5; }
	inline void set_m_UseGraphicAlpha_5(bool value)
	{
		___m_UseGraphicAlpha_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOW_T4269599528_H
#ifndef SKEWEFFECT_T2878670451_H
#define SKEWEFFECT_T2878670451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gamestrap.SkewEffect
struct  SkewEffect_t2878670451  : public GamestrapEffect_t826032831
{
public:
	// System.Single Gamestrap.SkewEffect::skew
	float ___skew_3;
	// System.Single Gamestrap.SkewEffect::perspective
	float ___perspective_4;

public:
	inline static int32_t get_offset_of_skew_3() { return static_cast<int32_t>(offsetof(SkewEffect_t2878670451, ___skew_3)); }
	inline float get_skew_3() const { return ___skew_3; }
	inline float* get_address_of_skew_3() { return &___skew_3; }
	inline void set_skew_3(float value)
	{
		___skew_3 = value;
	}

	inline static int32_t get_offset_of_perspective_4() { return static_cast<int32_t>(offsetof(SkewEffect_t2878670451, ___perspective_4)); }
	inline float get_perspective_4() const { return ___perspective_4; }
	inline float* get_address_of_perspective_4() { return &___perspective_4; }
	inline void set_perspective_4(float value)
	{
		___perspective_4 = value;
	}
};

struct SkewEffect_t2878670451_StaticFields
{
public:
	// System.Func`2<UnityEngine.UIVertex,System.Single> Gamestrap.SkewEffect::<>f__am$cache0
	Func_2_t1646574707 * ___U3CU3Ef__amU24cache0_5;
	// System.Func`2<UnityEngine.UIVertex,System.Single> Gamestrap.SkewEffect::<>f__am$cache1
	Func_2_t1646574707 * ___U3CU3Ef__amU24cache1_6;
	// System.Func`2<UnityEngine.UIVertex,System.Single> Gamestrap.SkewEffect::<>f__am$cache2
	Func_2_t1646574707 * ___U3CU3Ef__amU24cache2_7;
	// System.Func`2<UnityEngine.UIVertex,System.Single> Gamestrap.SkewEffect::<>f__am$cache3
	Func_2_t1646574707 * ___U3CU3Ef__amU24cache3_8;
	// System.Func`2<UnityEngine.UIVertex,System.Single> Gamestrap.SkewEffect::<>f__am$cache4
	Func_2_t1646574707 * ___U3CU3Ef__amU24cache4_9;
	// System.Func`2<UnityEngine.UIVertex,System.Single> Gamestrap.SkewEffect::<>f__am$cache5
	Func_2_t1646574707 * ___U3CU3Ef__amU24cache5_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(SkewEffect_t2878670451_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Func_2_t1646574707 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Func_2_t1646574707 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Func_2_t1646574707 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_6() { return static_cast<int32_t>(offsetof(SkewEffect_t2878670451_StaticFields, ___U3CU3Ef__amU24cache1_6)); }
	inline Func_2_t1646574707 * get_U3CU3Ef__amU24cache1_6() const { return ___U3CU3Ef__amU24cache1_6; }
	inline Func_2_t1646574707 ** get_address_of_U3CU3Ef__amU24cache1_6() { return &___U3CU3Ef__amU24cache1_6; }
	inline void set_U3CU3Ef__amU24cache1_6(Func_2_t1646574707 * value)
	{
		___U3CU3Ef__amU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_7() { return static_cast<int32_t>(offsetof(SkewEffect_t2878670451_StaticFields, ___U3CU3Ef__amU24cache2_7)); }
	inline Func_2_t1646574707 * get_U3CU3Ef__amU24cache2_7() const { return ___U3CU3Ef__amU24cache2_7; }
	inline Func_2_t1646574707 ** get_address_of_U3CU3Ef__amU24cache2_7() { return &___U3CU3Ef__amU24cache2_7; }
	inline void set_U3CU3Ef__amU24cache2_7(Func_2_t1646574707 * value)
	{
		___U3CU3Ef__amU24cache2_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_8() { return static_cast<int32_t>(offsetof(SkewEffect_t2878670451_StaticFields, ___U3CU3Ef__amU24cache3_8)); }
	inline Func_2_t1646574707 * get_U3CU3Ef__amU24cache3_8() const { return ___U3CU3Ef__amU24cache3_8; }
	inline Func_2_t1646574707 ** get_address_of_U3CU3Ef__amU24cache3_8() { return &___U3CU3Ef__amU24cache3_8; }
	inline void set_U3CU3Ef__amU24cache3_8(Func_2_t1646574707 * value)
	{
		___U3CU3Ef__amU24cache3_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_9() { return static_cast<int32_t>(offsetof(SkewEffect_t2878670451_StaticFields, ___U3CU3Ef__amU24cache4_9)); }
	inline Func_2_t1646574707 * get_U3CU3Ef__amU24cache4_9() const { return ___U3CU3Ef__amU24cache4_9; }
	inline Func_2_t1646574707 ** get_address_of_U3CU3Ef__amU24cache4_9() { return &___U3CU3Ef__amU24cache4_9; }
	inline void set_U3CU3Ef__amU24cache4_9(Func_2_t1646574707 * value)
	{
		___U3CU3Ef__amU24cache4_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_10() { return static_cast<int32_t>(offsetof(SkewEffect_t2878670451_StaticFields, ___U3CU3Ef__amU24cache5_10)); }
	inline Func_2_t1646574707 * get_U3CU3Ef__amU24cache5_10() const { return ___U3CU3Ef__amU24cache5_10; }
	inline Func_2_t1646574707 ** get_address_of_U3CU3Ef__amU24cache5_10() { return &___U3CU3Ef__amU24cache5_10; }
	inline void set_U3CU3Ef__amU24cache5_10(Func_2_t1646574707 * value)
	{
		___U3CU3Ef__amU24cache5_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache5_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKEWEFFECT_T2878670451_H
#ifndef SHADOWEFFECT_T606224903_H
#define SHADOWEFFECT_T606224903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gamestrap.ShadowEffect
struct  ShadowEffect_t606224903  : public Shadow_t4269599528
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOWEFFECT_T606224903_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (ShadowEffect_t606224903), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (SkewEffect_t2878670451), -1, sizeof(SkewEffect_t2878670451_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1901[8] = 
{
	SkewEffect_t2878670451::get_offset_of_skew_3(),
	SkewEffect_t2878670451::get_offset_of_perspective_4(),
	SkewEffect_t2878670451_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_5(),
	SkewEffect_t2878670451_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_6(),
	SkewEffect_t2878670451_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_7(),
	SkewEffect_t2878670451_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_8(),
	SkewEffect_t2878670451_StaticFields::get_offset_of_U3CU3Ef__amU24cache4_9(),
	SkewEffect_t2878670451_StaticFields::get_offset_of_U3CU3Ef__amU24cache5_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (ESceneNames_t1643290173)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1902[4] = 
{
	ESceneNames_t1643290173::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (GSAppExampleControl_t2154243716), -1, sizeof(GSAppExampleControl_t2154243716_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1903[4] = 
{
	GSAppExampleControl_t2154243716_StaticFields::get_offset_of_Instance_2(),
	GSAppExampleControl_t2154243716_StaticFields::get_offset_of_VisibleVariable_3(),
	GSAppExampleControl_t2154243716::get_offset_of_faderAnimator_4(),
	GSAppExampleControl_t2154243716::get_offset_of_fadingClip_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (U3CLoadSceneTransitionsU3Ec__Iterator0_t3812313616), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1904[5] = 
{
	U3CLoadSceneTransitionsU3Ec__Iterator0_t3812313616::get_offset_of_sceneName_0(),
	U3CLoadSceneTransitionsU3Ec__Iterator0_t3812313616::get_offset_of_U24this_1(),
	U3CLoadSceneTransitionsU3Ec__Iterator0_t3812313616::get_offset_of_U24current_2(),
	U3CLoadSceneTransitionsU3Ec__Iterator0_t3812313616::get_offset_of_U24disposing_3(),
	U3CLoadSceneTransitionsU3Ec__Iterator0_t3812313616::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (SceneTransitionsButton_t606392618), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1905[1] = 
{
	SceneTransitionsButton_t606392618::get_offset_of_sceneName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (GameplayUI_t2067473040), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1906[2] = 
{
	GameplayUI_t2067473040::get_offset_of_pausePanel_2(),
	GameplayUI_t2067473040::get_offset_of_pause_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (LevelsControl_t1867744244), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (MainMenuControl_t4164784149), -1, sizeof(MainMenuControl_t4164784149_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1908[8] = 
{
	MainMenuControl_t4164784149_StaticFields::get_offset_of_visibleVariable_2(),
	MainMenuControl_t4164784149_StaticFields::get_offset_of_notifyVariable_3(),
	MainMenuControl_t4164784149::get_offset_of_settingsPanel_4(),
	MainMenuControl_t4164784149::get_offset_of_aboutPanel_5(),
	MainMenuControl_t4164784149::get_offset_of_soundToggle_6(),
	MainMenuControl_t4164784149::get_offset_of_musicToggle_7(),
	MainMenuControl_t4164784149::get_offset_of_notificationText_8(),
	MainMenuControl_t4164784149::get_offset_of_notificationAnimator_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (ButtonShowHide_t1901736403), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1909[3] = 
{
	ButtonShowHide_t1901736403::get_offset_of_startShowGroup_2(),
	ButtonShowHide_t1901736403::get_offset_of_showHideGroup_3(),
	ButtonShowHide_t1901736403::get_offset_of_show_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (GamestrapTheme_t2245232465), -1, sizeof(GamestrapTheme_t2245232465_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1910[3] = 
{
	GamestrapTheme_t2245232465_StaticFields::get_offset_of_recursiveLevel_2(),
	GamestrapTheme_t2245232465::get_offset_of_palette_3(),
	GamestrapTheme_t2245232465::get_offset_of_effectSets_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (ColorSet_t3097830573), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1911[7] = 
{
	ColorSet_t3097830573::get_offset_of_name_0(),
	ColorSet_t3097830573::get_offset_of_tag_1(),
	ColorSet_t3097830573::get_offset_of_normal_2(),
	ColorSet_t3097830573::get_offset_of_highlighted_3(),
	ColorSet_t3097830573::get_offset_of_pressed_4(),
	ColorSet_t3097830573::get_offset_of_disabled_5(),
	ColorSet_t3097830573::get_offset_of_detail_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (EffectSet_t2638968855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1912[21] = 
{
	EffectSet_t2638968855::get_offset_of_name_0(),
	EffectSet_t2638968855::get_offset_of_tag_1(),
	EffectSet_t2638968855::get_offset_of_gradient_2(),
	EffectSet_t2638968855::get_offset_of_gradientTop_3(),
	EffectSet_t2638968855::get_offset_of_gradientBottom_4(),
	EffectSet_t2638968855::get_offset_of_shadow_5(),
	EffectSet_t2638968855::get_offset_of_shadowColor_6(),
	EffectSet_t2638968855::get_offset_of_shadowOffset_7(),
	EffectSet_t2638968855::get_offset_of_radialGradient_8(),
	EffectSet_t2638968855::get_offset_of_radialColor_9(),
	EffectSet_t2638968855::get_offset_of_centerPosition_10(),
	EffectSet_t2638968855::get_offset_of_radius_11(),
	EffectSet_t2638968855::get_offset_of_mirrorEffect_12(),
	EffectSet_t2638968855::get_offset_of_mirrorScale_13(),
	EffectSet_t2638968855::get_offset_of_mirrorOffset_14(),
	EffectSet_t2638968855::get_offset_of_mirrorSkew_15(),
	EffectSet_t2638968855::get_offset_of_mirrorTop_16(),
	EffectSet_t2638968855::get_offset_of_mirrorBottom_17(),
	EffectSet_t2638968855::get_offset_of_skewEffect_18(),
	EffectSet_t2638968855::get_offset_of_skew_19(),
	EffectSet_t2638968855::get_offset_of_perspective_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (ThemeButton_t37571801), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1913[1] = 
{
	ThemeButton_t37571801::get_offset_of_theme_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (ThemeToggler_t1181749815), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1914[2] = 
{
	ThemeToggler_t1181749815::get_offset_of_themes_2(),
	ThemeToggler_t1181749815::get_offset_of_index_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1915 = { sizeof (ToggleButtonIcon_t3802687969), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1915[3] = 
{
	ToggleButtonIcon_t3802687969::get_offset_of_onIcon_2(),
	ToggleButtonIcon_t3802687969::get_offset_of_offIcon_3(),
	ToggleButtonIcon_t3802687969::get_offset_of_toggleButton_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
