// FUN_019316f8 @ 019316f8 size=128 calls_out=3 calls_in=2
// strings: 

void FUN_019316f8(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  FUN_01bed93e(&local_40,0,0x20);
  local_20 = 0x20;
  if (0x20 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,param_3,0x20,&DAT_01d256f4);
  }
  FUN_01bed4e2(&local_40,param_2,param_3);
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  param_1[3] = uStack_34;
  param_1[4] = local_30;
  param_1[5] = uStack_2c;
  param_1[6] = uStack_28;
  param_1[7] = uStack_24;
  param_1[8] = param_3;
  return;
}

