// FUN_007ac0e8 @ 007ac0e8 size=172 calls_out=3 calls_in=2
// strings: 

void FUN_007ac0e8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_r11;
  int unaff_lr;
  int aiStack_218 [128];
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_1 + 0x1c) - iVar2);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  FUN_01af9c8c(uVar4,*(undefined4 *)(param_1 + 0x18));
  piVar3 = aiStack_218 + 0x84;
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = 0;
    piVar3 = aiStack_218 + 0x85;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10) * 0xc0;
    unaff_lr = 8;
  }
  *piVar3 = iVar1;
  iVar1 = 0;
  if (unaff_lr != 0) {
    iVar1 = unaff_r11;
  }
  if (unaff_lr != 0 && iVar1 != 0) {
    thunk_FUN_01be4678(uVar4);
    return;
  }
  return;
}

