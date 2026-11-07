// FUN_0007f8d4 @ 0007f8d4  size=272  callers=3
// program: bmminer


undefined4 FUN_0007f8d4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*(uint *)(param_1 + 8) < (uint)(*(int *)(param_1 + 0xc) + param_2)) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = *(int *)(param_1 + 8) << 1;
    uVar4 = *(int *)(param_1 + 8) + param_2;
    if (uVar1 < uVar4) {
      uVar1 = uVar4;
    }
    iVar2 = FUN_0007d8a0(uVar1 << 2);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      *(uint *)(param_1 + 8) = uVar1;
      *(int *)(param_1 + 0x10) = iVar2;
      if (param_3 != 0) {
        FUN_0007f87c(*(undefined4 *)(param_1 + 0x10),0,uVar3,0,*(undefined4 *)(param_1 + 0xc));
        FUN_0007d8e8(uVar3);
        uVar3 = *(undefined4 *)(param_1 + 0x10);
      }
    }
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar3;
}

