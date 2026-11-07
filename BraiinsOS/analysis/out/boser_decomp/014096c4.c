// FUN_014096c4 @ 014096c4 size=108 calls_out=2 calls_in=1
// strings: 

void FUN_014096c4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  *param_1 = 8;
  param_1[1] = 8;
  if (iVar2 != iVar1) {
    FUN_01408fec(iVar1,(uint)(iVar2 - iVar1) >> 5);
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    if (param_1[3] != iVar2) {
      FUN_01bed864(*(int *)(iVar3 + 4) + iVar2 * 0x20,*(int *)(iVar3 + 4) + param_1[3] * 0x20,
                   iVar1 << 5);
    }
    *(int *)(iVar3 + 8) = iVar1 + iVar2;
  }
  return;
}

