// FUN_00eacd38 @ 00eacd38 size=180 calls_out=5 calls_in=0
// strings: 

void FUN_00eacd38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
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
  iVar1 = *(uint *)(param_1 + 0x1c) - 2;
  if (*(uint *)(param_1 + 0x1c) < 2) {
    iVar1 = 2;
  }
  switch(iVar1) {
  case 0:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    iVar1 = *(int *)(param_1 + 0x20);
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    break;
  case 1:
    FUN_00ce29d8(param_1 + 0x20);
    return;
  case 2:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),param_3,param_4,
                 unaff_r4,unaff_lr);
    if (*(int *)(param_1 + 0x40) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),extraout_r2,extraout_r3,
                   unaff_r4,unaff_lr);
    }
    FUN_006a41c0(param_1 + 0x34);
    return;
  case 3:
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 < -0x7ffffffb) {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    break;
  case 4:
    FUN_0187266c(*(undefined1 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    return;
  default:
    return;
  }
  FUN_019bb7e0(iVar1,uVar2);
  return;
}

