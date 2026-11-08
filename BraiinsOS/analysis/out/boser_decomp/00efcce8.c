// FUN_00efcce8 @ 00efcce8 size=1224 calls_out=0 calls_in=1
// strings: 

int FUN_00efcce8(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  uVar1 = param_1[0x46];
  iVar14 = 0;
  iVar13 = 0;
  if (uVar1 != 0) {
    uVar3 = LZCOUNT(uVar1 | 1) | 0x20;
    if ((int)uVar1 < 0) {
      uVar3 = LZCOUNT((int)uVar1 >> 0x1f);
    }
    iVar13 = ((uVar3 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  if (param_1[0x10] != 2 || param_1[0x11] != 0) {
    iVar14 = 4;
    iVar4 = 2;
    if (*(double *)(param_1 + 0x12) != 0.0) {
      iVar14 = 0xd;
    }
    if ((param_1[0x10] & 1) == 0) {
      iVar14 = 2;
    }
    iVar2 = 2;
    if (*(double *)(param_1 + 0x16) != 0.0) {
      iVar2 = 0xb;
    }
    if ((param_1[0x14] & 1) != 0) {
      iVar14 = iVar14 + iVar2;
    }
    if (*(double *)(param_1 + 0x1a) != 0.0) {
      iVar4 = 0xb;
    }
    if ((param_1[0x18] & 1) != 0) {
      iVar14 = iVar14 + iVar4;
    }
  }
  iVar2 = 0;
  iVar4 = 0;
  if (param_1[0x1c] != 2 || param_1[0x1d] != 0) {
    iVar4 = 4;
    iVar6 = 2;
    if (*(double *)(param_1 + 0x1e) != 0.0) {
      iVar4 = 0xd;
    }
    if ((param_1[0x1c] & 1) == 0) {
      iVar4 = 2;
    }
    iVar5 = 2;
    if (*(double *)(param_1 + 0x22) != 0.0) {
      iVar5 = 0xb;
    }
    if ((param_1[0x20] & 1) != 0) {
      iVar4 = iVar4 + iVar5;
    }
    if (*(double *)(param_1 + 0x26) != 0.0) {
      iVar6 = 0xb;
    }
    if ((param_1[0x24] & 1) != 0) {
      iVar4 = iVar4 + iVar6;
    }
  }
  if (param_1[0x28] != 2 || param_1[0x29] != 0) {
    iVar2 = 4;
    iVar6 = 2;
    if (*(double *)(param_1 + 0x2a) != 0.0) {
      iVar2 = 0xd;
    }
    if ((param_1[0x28] & 1) == 0) {
      iVar2 = 2;
    }
    iVar5 = 2;
    if (*(double *)(param_1 + 0x2e) != 0.0) {
      iVar5 = 0xb;
    }
    if ((param_1[0x2c] & 1) != 0) {
      iVar2 = iVar2 + iVar5;
    }
    if (*(double *)(param_1 + 0x32) != 0.0) {
      iVar6 = 0xb;
    }
    if ((param_1[0x30] & 1) != 0) {
      iVar2 = iVar2 + iVar6;
    }
  }
  iVar5 = 0;
  iVar6 = 0;
  if ((*param_1 & 1) != 0) {
    iVar6 = 2;
    if (*(double *)(param_1 + 2) != 0.0) {
      iVar6 = 0xb;
    }
    if (*(double *)(param_1 + 4) != 0.0) {
      iVar6 = iVar6 + 9;
    }
    if (*(double *)(param_1 + 6) != 0.0) {
      iVar6 = iVar6 + 9;
    }
  }
  if (param_1[0x34] == 1) {
    if (param_1[0x35] == 0) {
      iVar11 = 2;
    }
    else {
      iVar11 = ((LZCOUNT(param_1[0x35] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
    }
    iVar5 = 0;
    iVar8 = 0;
    if (param_1[0x36] != 0) {
      iVar8 = ((LZCOUNT(param_1[0x36] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (param_1[0x37] != 0) {
      iVar5 = ((LZCOUNT(param_1[0x37] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar5 = iVar8 + iVar11 + iVar5;
  }
  iVar8 = 0;
  iVar11 = 0;
  if (param_1[0x38] == 1) {
    if (param_1[0x39] == 0) {
      iVar12 = 2;
    }
    else {
      iVar12 = ((LZCOUNT(param_1[0x39] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
    }
    iVar11 = 0;
    iVar9 = 0;
    if (param_1[0x3a] != 0) {
      iVar9 = ((LZCOUNT(param_1[0x3a] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (param_1[0x3b] != 0) {
      iVar11 = ((LZCOUNT(param_1[0x3b] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar11 = iVar9 + iVar12 + iVar11;
  }
  if (param_1[0x3c] == 1) {
    if (param_1[0x3d] == 0) {
      iVar12 = 2;
    }
    else {
      iVar12 = ((LZCOUNT(param_1[0x3d] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
    }
    iVar8 = 0;
    iVar9 = 0;
    if (param_1[0x3e] != 0) {
      iVar9 = ((LZCOUNT(param_1[0x3e] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (param_1[0x3f] != 0) {
      iVar8 = ((LZCOUNT(param_1[0x3f] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar8 = iVar9 + iVar12 + iVar8;
  }
  iVar9 = 0;
  iVar12 = 0;
  if ((param_1[8] & 1) != 0) {
    iVar12 = 2;
    if (*(double *)(param_1 + 10) != 0.0) {
      iVar12 = 0xb;
    }
    if (*(double *)(param_1 + 0xc) != 0.0) {
      iVar12 = iVar12 + 9;
    }
    if (*(double *)(param_1 + 0xe) != 0.0) {
      iVar12 = iVar12 + 9;
    }
  }
  if (param_1[0x40] == 1) {
    uVar1 = param_1[0x41];
    uVar3 = LZCOUNT(uVar1 | 1) | 0x20;
    if ((int)uVar1 < 0) {
      uVar3 = LZCOUNT((int)uVar1 >> 0x1f);
    }
    iVar9 = ((uVar3 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  iVar7 = 0;
  iVar10 = 0;
  if (param_1[0x42] == 1) {
    uVar3 = param_1[0x43];
    uVar1 = LZCOUNT(uVar3 | 1) | 0x20;
    if ((int)uVar3 < 0) {
      uVar1 = LZCOUNT((int)uVar3 >> 0x1f);
    }
    iVar10 = ((uVar1 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  if (param_1[0x44] == 1) {
    iVar7 = ((LZCOUNT(param_1[0x45] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  return iVar14 + iVar13 + iVar4 + iVar2 + iVar6 + iVar5 + iVar11 + iVar8 + iVar12 + iVar9 + iVar10
         + iVar7;
}

