// FUN_016df848 @ 016df848 size=124 calls_out=3 calls_in=1
// strings: 

void FUN_016df848(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  
  local_2c = (undefined4 *)FUN_01298504(8,4);
  if (local_2c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,8);
  }
  *local_2c = param_3;
  local_2c[1] = param_4;
  local_20 = 1;
  local_18 = 0;
  local_30 = 1;
  local_24 = local_24 & 0xffffff00;
  local_28 = 1;
  local_1c = local_2c;
  FUN_016f5e30(&local_30);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  param_1[3] = local_24;
  return;
}

