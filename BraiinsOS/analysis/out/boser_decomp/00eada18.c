// FUN_00eada18 @ 00eada18 size=84 calls_out=3 calls_in=0
// strings: 

void FUN_00eada18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if (*(int *)(param_1 + 0x24) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),param_3,param_4,unaff_r4,
               unaff_lr);
  FUN_0187266c(*(undefined1 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  return;
}

