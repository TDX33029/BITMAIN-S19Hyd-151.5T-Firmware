// FUN_00efe384 @ 00efe384 size=460 calls_out=0 calls_in=3
// strings: 

int FUN_00efe384(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *param_1;
  if (iVar6 == 3) {
    return 0;
  }
  iVar3 = param_1[1];
  if (iVar6 == 0) {
    if (iVar3 == 0) {
      return 2;
    }
    if (param_1[2] == 0) {
      iVar6 = 4;
    }
    else {
      iVar6 = ((LZCOUNT(param_1[2] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 5;
    }
    iVar3 = 0;
    iVar1 = 0;
    if (param_1[3] != 0) {
      iVar1 = ((LZCOUNT(param_1[3] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (param_1[4] != 0) {
      iVar3 = ((LZCOUNT(param_1[4] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    return iVar1 + iVar6 + iVar3;
  }
  iVar1 = 2;
  if (iVar6 == 1) {
    if (iVar3 == 0) goto LAB_00efe438;
    uVar2 = param_1[2];
    uVar4 = LZCOUNT(uVar2 | 1) | 0x20;
    if ((int)uVar2 < 0) {
      uVar4 = LZCOUNT((int)uVar2 >> 0x1f);
    }
    uVar4 = uVar4 ^ 0x3f;
  }
  else {
    if (iVar3 == 0) goto LAB_00efe438;
    uVar4 = LZCOUNT(param_1[2] | 1) ^ 0x1f;
  }
  iVar1 = (uVar4 * 9 + 0x49 >> 6) + 3;
LAB_00efe438:
  iVar6 = 0;
  if (param_1[3] == 1) {
    if (param_1[4] == 0) {
      iVar3 = 2;
    }
    else {
      iVar3 = ((LZCOUNT(param_1[4] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
    }
    iVar6 = 0;
    iVar5 = 0;
    if (param_1[5] != 0) {
      iVar5 = ((LZCOUNT(param_1[5] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (param_1[6] != 0) {
      iVar6 = ((LZCOUNT(param_1[6] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar6 = iVar5 + iVar3 + iVar6;
  }
  return iVar6 + iVar1;
}

