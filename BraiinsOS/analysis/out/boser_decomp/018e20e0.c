// FUN_018e20e0 @ 018e20e0 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_018e20e0(int param_1)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar2;
  undefined4 unaff_r4;
  int iVar3;
  undefined4 unaff_lr;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == -0x80000000) {
    return;
  }
  FUN_01aeda5c(param_1 + 0x44);
  FUN_0134bd64(iVar3,*(undefined4 *)(param_1 + 0xc));
  uVar1 = extraout_r2;
  uVar2 = extraout_r3;
  if (*(int *)(param_1 + 0x38) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    uVar1 = extraout_r2_00;
    uVar2 = extraout_r3_00;
  }
  FUN_0134bd64(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),uVar1,uVar2,unaff_r4,
               unaff_lr);
  FUN_0134bd64(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  FUN_0134bd64(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  return;
}

