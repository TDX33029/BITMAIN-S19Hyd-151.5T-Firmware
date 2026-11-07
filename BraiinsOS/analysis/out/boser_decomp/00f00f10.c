// FUN_00f00f10 @ 00f00f10 size=452 calls_out=0 calls_in=1
// strings: 

int FUN_00f00f10(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *param_1;
  if (iVar4 == 3) {
    return 0;
  }
  uVar3 = param_1[1];
  iVar1 = 2;
  if (iVar4 == 0) {
    if (uVar3 == 2) {
      return 2;
    }
    if (param_1[3] == 0) {
      iVar4 = 4;
    }
    else {
      iVar4 = ((LZCOUNT(param_1[3] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 5;
    }
    iVar6 = 0;
    iVar1 = 0;
    if (param_1[4] != 0) {
      iVar1 = ((LZCOUNT(param_1[4] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar3 & 1) != 0) {
      iVar6 = ((LZCOUNT(param_1[2] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    return iVar1 + iVar4 + iVar6;
  }
  if (iVar4 == 1) {
    if ((uVar3 & 1) == 0) goto LAB_00f00fc0;
    uVar2 = param_1[2];
    uVar3 = LZCOUNT(uVar2 | 1) | 0x20;
    if ((int)uVar2 < 0) {
      uVar3 = LZCOUNT((int)uVar2 >> 0x1f);
    }
    uVar3 = uVar3 ^ 0x3f;
  }
  else {
    if ((uVar3 & 1) == 0) goto LAB_00f00fc0;
    uVar3 = LZCOUNT(param_1[2] | 1) ^ 0x1f;
  }
  iVar1 = (uVar3 * 9 + 0x49 >> 6) + 3;
LAB_00f00fc0:
  iVar4 = 0;
  if (param_1[3] != 2) {
    if (param_1[5] == 0) {
      iVar6 = 2;
    }
    else {
      iVar6 = ((LZCOUNT(param_1[5] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
    }
    iVar4 = 0;
    iVar5 = 0;
    if (param_1[6] != 0) {
      iVar5 = ((LZCOUNT(param_1[6] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if ((param_1[3] & 1U) != 0) {
      iVar4 = ((LZCOUNT(param_1[4] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar4 = iVar5 + iVar6 + iVar4;
  }
  return iVar4 + iVar1;
}

