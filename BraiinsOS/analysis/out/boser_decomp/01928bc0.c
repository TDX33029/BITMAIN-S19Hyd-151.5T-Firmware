// FUN_01928bc0 @ 01928bc0 size=156 calls_out=2 calls_in=1
// strings: 

void FUN_01928bc0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_1;
  iVar1 = param_1[1];
  iVar3 = param_1[2];
  *param_1 = 4;
  param_1[1] = 4;
  if (iVar1 - iVar2 != 0) {
    for (uVar4 = (uint)(iVar1 - iVar2) / 0x24; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_01926efc(iVar2);
      iVar2 = iVar2 + 0x24;
    }
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    if (param_1[3] != iVar2) {
      FUN_01bed864(*(int *)(iVar3 + 4) + iVar2 * 0x24,*(int *)(iVar3 + 4) + param_1[3] * 0x24,
                   iVar1 * 0x24);
    }
    *(int *)(iVar3 + 8) = iVar1 + iVar2;
  }
  return;
}

