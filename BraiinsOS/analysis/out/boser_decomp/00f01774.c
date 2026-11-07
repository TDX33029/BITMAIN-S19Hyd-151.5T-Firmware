// FUN_00f01774 @ 00f01774 size=444 calls_out=0 calls_in=1
// strings: 

int FUN_00f01774(uint *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0;
  iVar3 = 0;
  if ((*param_1 & 1) != 0) {
    uVar4 = param_1[3];
    if (param_1[2] == 0 && uVar4 == 0) {
      iVar3 = 2;
    }
    else {
      uVar7 = LZCOUNT(param_1[2] | 1) | 0x20;
      if (uVar4 != 0) {
        uVar7 = LZCOUNT(uVar4);
      }
      iVar3 = ((uVar7 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
    }
  }
  if ((param_1[8] & 1) != 0) {
    uVar4 = param_1[0xb];
    if (param_1[10] == 0 && uVar4 == 0) {
      iVar9 = 2;
    }
    else {
      uVar7 = LZCOUNT(param_1[10] | 1) | 0x20;
      if (uVar4 != 0) {
        uVar7 = LZCOUNT(uVar4);
      }
      iVar9 = ((uVar7 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
    }
  }
  iVar5 = 0;
  iVar6 = 0;
  if (param_1[0x10] == 1) {
    if (param_1[0x11] == 0) {
      iVar6 = 2;
    }
    else {
      iVar6 = ((LZCOUNT(param_1[0x11] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
    }
  }
  if (param_1[0x12] == 1) {
    uVar4 = param_1[0x13];
    uVar7 = LZCOUNT(uVar4 | 1) | 0x20;
    if ((int)uVar4 < 0) {
      uVar7 = LZCOUNT((int)uVar4 >> 0x1f);
    }
    iVar5 = ((uVar7 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  iVar8 = 0;
  if (param_1[0x14] == 1) {
    iVar8 = ((LZCOUNT(param_1[0x15] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  if ((char)param_1[0x16] != '\x02') {
    iVar3 = iVar3 + 2;
  }
  iVar2 = 2;
  iVar1 = 2;
  if (*(double *)(param_1 + 6) != 0.0) {
    iVar2 = 0xb;
  }
  if ((param_1[4] & 1) != 0) {
    iVar3 = iVar3 + iVar2;
  }
  iVar3 = iVar3 + iVar9;
  if (*(double *)(param_1 + 0xe) != 0.0) {
    iVar1 = 0xb;
  }
  if ((param_1[0xc] & 1) != 0) {
    iVar3 = iVar3 + iVar1;
  }
  if (*(char *)((int)param_1 + 0x59) != '\x02') {
    iVar3 = iVar3 + 2;
  }
  return iVar3 + iVar6 + iVar5 + iVar8;
}

