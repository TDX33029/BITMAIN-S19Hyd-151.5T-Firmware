// FUN_012063c4 @ 012063c4 size=24 calls_out=1 calls_in=2
// strings: 

void FUN_012063c4(int param_1)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  FUN_012063f4();
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x420),*(undefined4 *)(param_1 + 0x424),extraout_r2,
               extraout_r3,unaff_r4,unaff_lr);
  if (*(int *)(param_1 + 0x44c) != -1) {
    FUN_01bf01d6();
  }
  FUN_012681c8(param_1 + 0x468);
  return;
}

