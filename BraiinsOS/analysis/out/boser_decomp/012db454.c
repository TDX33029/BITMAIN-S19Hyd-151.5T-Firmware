// FUN_012db454 @ 012db454 size=248 calls_out=1 calls_in=0
// strings: 

void FUN_012db454(uint *param_1,undefined4 param_2,uint param_3,uint param_4,short param_5,
                 undefined4 param_6)

{
  uint uVar1;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  local_28._0_2_ = param_5 << 8;
  FUN_012d7418(&local_20,param_6,&local_28,2);
  if (((char)local_20 == '\x04') || (uVar1 = local_20, (local_20 & 0xff) == 4)) {
    local_28 = CONCAT22(local_28._2_2_,0x800);
    FUN_012d7418(&local_20,param_6,&local_28,2);
    if (((char)local_20 == '\x04') || (uVar1 = local_20, (local_20 & 0xff) == 4)) {
      local_1c = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
                 param_3 >> 0x18;
      local_20 = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
                 param_4 >> 0x18;
      FUN_012d7418(&local_28,param_6,&local_20,8);
      if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
        *(undefined1 *)param_1 = 4;
        param_1[1] = 0xc;
        return;
      }
      goto LAB_012db540;
    }
  }
  local_28 = uVar1;
  local_24 = local_1c;
LAB_012db540:
  *param_1 = local_28;
  param_1[1] = local_24;
  return;
}

