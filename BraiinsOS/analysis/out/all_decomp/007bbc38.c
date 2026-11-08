// FUN_007bbc38 @ 007bbc38 size=128 calls_out=2 calls_in=5
// strings: 

void FUN_007bbc38(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1;
  iVar3 = param_1[2];
  uVar2 = param_1[1] - iVar1;
  *param_1 = 4;
  param_1[1] = 4;
  if (uVar2 != 0) {
    iVar4 = (uVar2 >> 4) + 1;
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
      FUN_00648e64(iVar1);
      iVar1 = iVar1 + 0x10;
    }
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar3 + 8);
    if (param_1[3] != iVar4) {
      FUN_016dd52c(*(int *)(iVar3 + 4) + iVar4 * 0x10,*(int *)(iVar3 + 4) + param_1[3] * 0x10,
                   iVar1 << 4);
    }
    *(int *)(iVar3 + 8) = iVar4 + iVar1;
  }
  return;
}

