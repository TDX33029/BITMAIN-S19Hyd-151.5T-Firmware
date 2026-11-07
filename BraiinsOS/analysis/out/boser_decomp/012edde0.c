// FUN_012edde0 @ 012edde0 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_012edde0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),param_3,param_4,
               unaff_r4,unaff_lr);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
  return;
}

