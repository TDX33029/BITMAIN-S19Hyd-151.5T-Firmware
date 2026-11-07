// FUN_016de7a8 @ 016de7a8 size=124 calls_out=3 calls_in=1
// strings: 

void FUN_016de7a8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_2c = (undefined1 *)FUN_01298504(2,1);
  if (local_2c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,2);
  }
  *local_2c = (char)param_2;
  local_2c[1] = (char)((uint)param_2 >> 8);
  local_20 = 1;
  local_18 = 0;
  local_30 = 1;
  local_24 = local_24 & 0xffffff00;
  local_28 = 1;
  local_1c = local_2c;
  FUN_016f6050(&local_30);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  param_1[3] = local_24;
  return;
}

