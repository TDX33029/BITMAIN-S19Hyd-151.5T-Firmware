// FUN_00f01ff0 @ 00f01ff0 size=568 calls_out=0 calls_in=3
// strings: 

int FUN_00f01ff0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar3 = 0;
  if (param_1[8] != 2 || param_1[9] != 0) {
    iVar3 = 4;
    iVar1 = 2;
    iVar4 = 2;
    if (*(double *)(param_1 + 10) != 0.0) {
      iVar3 = 0xd;
    }
    if ((param_1[8] & 1) == 0) {
      iVar3 = 2;
    }
    if (*(double *)(param_1 + 0xe) != 0.0) {
      iVar4 = 0xb;
    }
    if ((param_1[0xc] & 1) != 0) {
      iVar3 = iVar3 + iVar4;
    }
    iVar4 = 2;
    iVar5 = 2;
    if (*(double *)(param_1 + 0x12) != 0.0) {
      iVar4 = 0xb;
    }
    if ((param_1[0x10] & 1) != 0) {
      iVar3 = iVar3 + iVar4;
    }
    if (*(double *)(param_1 + 0x16) != 0.0) {
      iVar5 = 0xb;
    }
    if ((param_1[0x14] & 1) != 0) {
      iVar3 = iVar3 + iVar5;
    }
    iVar4 = 2;
    iVar5 = 2;
    if (*(double *)(param_1 + 0x1a) != 0.0) {
      iVar4 = 0xb;
    }
    if ((param_1[0x18] & 1) != 0) {
      iVar3 = iVar3 + iVar4;
    }
    if (*(double *)(param_1 + 0x1e) != 0.0) {
      iVar5 = 0xb;
    }
    if ((param_1[0x1c] & 1) != 0) {
      iVar3 = iVar3 + iVar5;
    }
    iVar4 = 2;
    if (*(double *)(param_1 + 0x22) != 0.0) {
      iVar4 = 0xb;
    }
    if ((param_1[0x20] & 1) != 0) {
      iVar3 = iVar3 + iVar4;
    }
    iVar4 = 2;
    if (*(double *)(param_1 + 0x26) != 0.0) {
      iVar4 = 0xb;
    }
    if ((param_1[0x24] & 1) != 0) {
      iVar3 = iVar3 + iVar4;
    }
    iVar4 = 2;
    if (*(double *)(param_1 + 0x2a) != 0.0) {
      iVar4 = 0xb;
    }
    if ((param_1[0x28] & 1) != 0) {
      iVar3 = iVar3 + iVar4;
    }
    if (*(double *)(param_1 + 0x2e) != 0.0) {
      iVar1 = 0xb;
    }
    if ((param_1[0x2c] & 1) != 0) {
      iVar3 = iVar3 + iVar1;
    }
  }
  if (param_1[0x35] != 0) {
    iVar8 = ((LZCOUNT(param_1[0x35] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  uVar6 = param_1[0x31];
  iVar4 = 0;
  iVar1 = 0;
  if (param_1[0x30] != 0 || uVar6 != 0) {
    uVar2 = LZCOUNT(param_1[0x30] | 1) | 0x20;
    if (uVar6 != 0) {
      uVar2 = LZCOUNT(uVar6);
    }
    iVar1 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  uVar6 = param_1[0x34];
  if (uVar6 != 0) {
    iVar4 = uVar6 + ((LZCOUNT(uVar6 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar7 = 2;
  iVar5 = 2;
  if (*(double *)(param_1 + 2) != 0.0) {
    iVar7 = 0xb;
  }
  if ((*param_1 & 1) != 0) {
    iVar3 = iVar3 + iVar7;
  }
  if (*(double *)(param_1 + 6) != 0.0) {
    iVar5 = 0xb;
  }
  if ((param_1[4] & 1) != 0) {
    iVar3 = iVar3 + iVar5;
  }
  return iVar3 + iVar8 + iVar1 + iVar4;
}

