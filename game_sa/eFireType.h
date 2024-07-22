#pragma once

enum eFireType : int32_t
{
  FIRETYPE_MELEE = 0x0,
  FIRETYPE_INSTANT_HIT = 0x1,
  FIRETYPE_PROJECTILE = 0x2,
  FIRETYPE_AREA_EFFECT = 0x3,
  FIRETYPE_CAMERA = 0x4,
  FIRETYPE_USE = 0x5,
  FIRETYPE_LAST_FIRETYPE = 0x6,
};
