// FUN_019ebc30 @ 019ebc30 size=108 calls_out=2 calls_in=1
// strings: 

void FUN_019ebc30(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  *param_1 = 4;
  param_1[1] = 4;
  if (iVar2 != iVar1) {
    FUN_019eb704(iVar1,(uint)(iVar2 - iVar1) >> 2);
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    if (param_1[3] != iVar2) {
      FUN_01bed864(*(int *)(iVar3 + 4) + iVar2 * 4,*(int *)(iVar3 + 4) + param_1[3] * 4,iVar1 << 2);
    }
    *(int *)(iVar3 + 8) = iVar2 + iVar1;
  }
  return;
}

