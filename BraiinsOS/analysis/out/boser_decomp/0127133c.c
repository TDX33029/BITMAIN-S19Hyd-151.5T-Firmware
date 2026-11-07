// FUN_0127133c @ 0127133c size=84 calls_out=3 calls_in=0
// strings: 

void FUN_0127133c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),param_3,param_4,
               unaff_r4,unaff_lr);
  if (*(int *)(param_1 + 0x40) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),extraout_r2,extraout_r3,
                 unaff_r4,unaff_lr);
  }
  FUN_006a41c0(param_1 + 0x34);
  return;
}

