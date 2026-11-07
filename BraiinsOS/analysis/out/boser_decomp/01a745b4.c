// FUN_01a745b4 @ 01a745b4 size=188 calls_out=3 calls_in=44
// strings: 

void FUN_01a745b4(undefined4 *param_1,uint param_2,uint param_3,undefined1 *param_4,uint param_5)

{
  uint local_34;
  uint local_30;
  undefined1 auStack_2c [12];
  uint *local_20;
  code *local_1c;
  uint *local_18;
  code *local_14;
  
  local_34 = param_5 - 5;
  if ((param_2 & 1) == 0) {
    param_3 = 0xffffffff;
  }
  local_30 = param_3;
  if (param_3 < local_34) {
    local_18 = &local_30;
    local_14 = FUN_012fd02c;
    local_1c = FUN_012fd02c;
    local_20 = &local_34;
    FUN_00664898(auStack_2c,&DAT_005799b3,&local_20);
    FUN_01a70fd4(param_1,0xb,auStack_2c);
  }
  else {
    if (param_5 < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,5,param_5,&DAT_01d2d358);
    }
    *param_1 = 3;
    param_1[1] = 0;
    *(uint *)(param_4 + 1) =
         local_34 * 0x1000000 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
         local_34 >> 0x18;
    *param_4 = 0;
  }
  return;
}

