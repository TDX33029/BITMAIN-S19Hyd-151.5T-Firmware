// FUN_014f8a14 @ 014f8a14 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_014f8a14(int *param_1)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  FUN_019bb7e0(param_1[0x23],param_1[0x24]);
  if (*param_1 == 3) {
    return;
  }
  if (*param_1 == 2) {
    FUN_019bb7e0(param_1[5],param_1[6]);
    return;
  }
  FUN_019bb7e0(param_1[4],param_1[5],extraout_r2,extraout_r3,unaff_r4,unaff_lr);
  FUN_014c9d78(param_1 + 0x12);
  return;
}

