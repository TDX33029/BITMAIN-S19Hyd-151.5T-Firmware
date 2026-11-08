// FUN_00f00b38 @ 00f00b38 size=568 calls_out=0 calls_in=3
// strings: 

int FUN_00f00b38(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar1 = param_1[7];
  iVar10 = 0;
  iVar11 = 0;
  if (param_1[6] != 0 || uVar1 != 0) {
    uVar4 = LZCOUNT(param_1[6] | 1) | 0x20;
    if (uVar1 != 0) {
      uVar4 = LZCOUNT(uVar1);
    }
    iVar11 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  uVar1 = param_1[9];
  if (param_1[8] != 0 || uVar1 != 0) {
    uVar4 = LZCOUNT(param_1[8] | 1) | 0x20;
    if (uVar1 != 0) {
      uVar4 = LZCOUNT(uVar1);
    }
    iVar10 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  uVar1 = param_1[0xb];
  iVar9 = 0;
  iVar2 = 0;
  if (param_1[10] != 0 || uVar1 != 0) {
    uVar4 = LZCOUNT(param_1[10] | 1) | 0x20;
    if (uVar1 != 0) {
      uVar4 = LZCOUNT(uVar1);
    }
    iVar2 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  uVar1 = param_1[0xd];
  if (param_1[0xc] != 0 || uVar1 != 0) {
    uVar4 = LZCOUNT(param_1[0xc] | 1) | 0x20;
    if (uVar1 != 0) {
      uVar4 = LZCOUNT(uVar1);
    }
    iVar9 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  uVar1 = param_1[0xf];
  iVar6 = 0;
  iVar5 = 0;
  if (param_1[0xe] != 0 || uVar1 != 0) {
    uVar4 = LZCOUNT(param_1[0xe] | 1) | 0x20;
    if (uVar1 != 0) {
      uVar4 = LZCOUNT(uVar1);
    }
    iVar6 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  uVar1 = param_1[0x11];
  if (param_1[0x10] != 0 || uVar1 != 0) {
    uVar4 = LZCOUNT(param_1[0x10] | 1) | 0x20;
    if (uVar1 != 0) {
      uVar4 = LZCOUNT(uVar1);
    }
    iVar5 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  iVar7 = 0;
  iVar8 = 0;
  if ((*param_1 & 1) != 0) {
    uVar1 = param_1[3];
    if (param_1[2] == 0 && uVar1 == 0) {
      iVar3 = 2;
    }
    else {
      uVar4 = LZCOUNT(param_1[2] | 1) | 0x20;
      if (uVar1 != 0) {
        uVar4 = LZCOUNT(uVar1);
      }
      iVar3 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
    }
    uVar1 = param_1[4];
    if (uVar1 == 0) {
      iVar8 = 0;
    }
    else {
      uVar4 = LZCOUNT(uVar1 | 1) | 0x20;
      if ((int)uVar1 < 0) {
        uVar4 = LZCOUNT((int)uVar1 >> 0x1f);
      }
      iVar8 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
    }
    iVar8 = iVar8 + iVar3;
  }
  uVar1 = param_1[0x14];
  if (uVar1 != 0) {
    iVar7 = uVar1 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  return iVar10 + iVar11 + iVar2 + iVar9 + iVar6 + iVar5 + iVar8 + iVar7;
}

