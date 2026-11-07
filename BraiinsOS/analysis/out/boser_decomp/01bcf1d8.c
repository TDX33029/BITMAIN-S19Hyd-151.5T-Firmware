// FUN_01bcf1d8 @ 01bcf1d8 size=228 calls_out=4 calls_in=2
// strings: 

void FUN_01bcf1d8(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01bed93e(param_1,0,0x20,0);
  FUN_01bcf0e8(&local_2c,param_2);
  *param_1 = local_2c;
  param_1[2] = local_28;
  param_1[4] = local_24;
  param_1[6] = local_20;
  uVar1 = extraout_r1;
  if (param_3 == 2) {
    FUN_01bcf0e8(&local_2c,param_2 + 0x10);
    param_1[1] = local_2c;
    param_1[3] = local_28;
    param_1[5] = local_24;
    param_1[7] = local_20;
    uVar1 = extraout_r1_00;
  }
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  FUN_01bcec60(param_1,uVar1,0,0);
  return;
}

