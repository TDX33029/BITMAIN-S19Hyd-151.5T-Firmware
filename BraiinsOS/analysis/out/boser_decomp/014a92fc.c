// FUN_014a92fc @ 014a92fc size=76 calls_out=2 calls_in=1
// strings: 

void FUN_014a92fc(int param_1)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  if (*(int *)(param_1 + 0x30) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),extraout_r2,extraout_r3,
               unaff_r4,unaff_lr);
  FUN_014a706c(param_1 + 0x40);
  return;
}

