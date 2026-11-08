// FUN_01828580 @ 01828580 size=452 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_01828580(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined8 local_30;
  uint local_24;
  uint local_20;
  int local_1c;
  
  local_90 = 0x8c12d730;
  local_88 = 0x9e4fb2ee;
  local_80 = 0x2292bd7a;
  local_78 = 0x15c3779f;
  local_8c = 0x827bd392;
  local_84 = 0x207b373e;
  local_7c = 0xaa5441bc;
  local_74 = 0xcfb52549;
  local_1c = DAT_018ddaf8;
  local_30 = 0x40;
  FUN_0182169c(&local_90,param_3,0x40);
  FUN_0182169c(&local_90,param_4,0x40);
  FUN_0182169c(&local_90,param_2,0x20);
  local_24 = ((uint)local_30 >> 0x1d | (local_30._4_4_ & 0x1f) << 3) << 0x18 |
             ((local_30._4_4_ & 0x1fffffff) >> 5 & 0xff) << 0x10 |
             ((local_30._4_4_ & 0x1fffffff) >> 0xd & 0xff) << 8 |
             (local_30._4_4_ & 0x1fffffff) >> 0x15;
  local_20 = (uint)local_30 << 0x1b | (((uint)local_30 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
             (((uint)local_30 & 0x1fffffff) >> 0xd & 0xff) << 8 |
             ((uint)local_30 & 0x1fffffff) >> 0x15;
  FUN_0182169c(&local_90,&DAT_00563a90,(0x77 - (uint)local_30 & 0x3f) + 1);
  FUN_0182169c(&local_90,&local_24,8);
  param_1[2] = local_88 << 0x18 | (local_88 >> 8 & 0xff) << 0x10 | (local_88 >> 0x10 & 0xff) << 8 |
               local_88 >> 0x18;
  param_1[3] = local_84 << 0x18 | (local_84 >> 8 & 0xff) << 0x10 | (local_84 >> 0x10 & 0xff) << 8 |
               local_84 >> 0x18;
  param_1[4] = local_80 << 0x18 | (local_80 >> 8 & 0xff) << 0x10 | (local_80 >> 0x10 & 0xff) << 8 |
               local_80 >> 0x18;
  *param_1 = local_90 << 0x18 | (local_90 >> 8 & 0xff) << 0x10 | (local_90 >> 0x10 & 0xff) << 8 |
             local_90 >> 0x18;
  param_1[1] = local_8c << 0x18 | (local_8c >> 8 & 0xff) << 0x10 | (local_8c >> 0x10 & 0xff) << 8 |
               local_8c >> 0x18;
  param_1[6] = local_78 << 0x18 | (local_78 >> 8 & 0xff) << 0x10 | (local_78 >> 0x10 & 0xff) << 8 |
               local_78 >> 0x18;
  param_1[7] = local_74 << 0x18 | (local_74 >> 8 & 0xff) << 0x10 | (local_74 >> 0x10 & 0xff) << 8 |
               local_74 >> 0x18;
  param_1[5] = local_7c << 0x18 | (local_7c >> 8 & 0xff) << 0x10 | (local_7c >> 0x10 & 0xff) << 8 |
               local_7c >> 0x18;
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 1;
}

