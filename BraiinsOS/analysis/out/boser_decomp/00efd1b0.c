// FUN_00efd1b0 @ 00efd1b0 size=1248 calls_out=0 calls_in=1
// strings: 

int FUN_00efd1b0(uint *param_1)

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
  
  iVar10 = 0;
  iVar11 = 0;
  if (*param_1 != 2 || param_1[1] != 0) {
    iVar3 = 2;
    if ((*param_1 & 1) != 0) {
      uVar1 = param_1[3];
      if (param_1[2] == 0 && uVar1 == 0) {
        iVar3 = 4;
      }
      else {
        uVar4 = LZCOUNT(param_1[2] | 1) | 0x20;
        if (uVar1 != 0) {
          uVar4 = LZCOUNT(uVar1);
        }
        iVar3 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 5;
      }
    }
    iVar11 = 0;
    iVar7 = 0;
    if ((param_1[4] & 1) != 0) {
      uVar1 = param_1[7];
      if (param_1[6] == 0 && uVar1 == 0) {
        iVar7 = 2;
      }
      else {
        uVar4 = LZCOUNT(param_1[6] | 1) | 0x20;
        if (uVar1 != 0) {
          uVar4 = LZCOUNT(uVar1);
        }
        iVar7 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
      }
    }
    if ((param_1[8] & 1) != 0) {
      uVar1 = param_1[0xb];
      if (param_1[10] == 0 && uVar1 == 0) {
        iVar11 = 2;
      }
      else {
        uVar4 = LZCOUNT(param_1[10] | 1) | 0x20;
        if (uVar1 != 0) {
          uVar4 = LZCOUNT(uVar1);
        }
        iVar11 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
      }
    }
    iVar11 = iVar7 + iVar3 + iVar11;
  }
  if (param_1[0xc] != 2 || param_1[0xd] != 0) {
    iVar10 = 4;
    iVar3 = 2;
    iVar7 = 2;
    if (*(double *)(param_1 + 0xe) != 0.0) {
      iVar10 = 0xd;
    }
    if ((param_1[0xc] & 1) == 0) {
      iVar10 = 2;
    }
    if (*(double *)(param_1 + 0x12) != 0.0) {
      iVar7 = 0xb;
    }
    if ((param_1[0x10] & 1) != 0) {
      iVar10 = iVar10 + iVar7;
    }
    if (*(double *)(param_1 + 0x16) != 0.0) {
      iVar3 = 0xb;
    }
    if ((param_1[0x14] & 1) != 0) {
      iVar10 = iVar10 + iVar3;
    }
  }
  iVar3 = 0;
  iVar7 = 0;
  if (param_1[0x18] != 2 || param_1[0x19] != 0) {
    iVar6 = 2;
    if ((param_1[0x18] & 1) != 0) {
      uVar1 = param_1[0x1b];
      if (param_1[0x1a] == 0 && uVar1 == 0) {
        iVar6 = 4;
      }
      else {
        uVar4 = LZCOUNT(param_1[0x1a] | 1) | 0x20;
        if (uVar1 != 0) {
          uVar4 = LZCOUNT(uVar1);
        }
        iVar6 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 5;
      }
    }
    iVar7 = 0;
    iVar8 = 0;
    if ((param_1[0x1c] & 1) != 0) {
      uVar1 = param_1[0x1f];
      if (param_1[0x1e] == 0 && uVar1 == 0) {
        iVar8 = 2;
      }
      else {
        uVar4 = LZCOUNT(param_1[0x1e] | 1) | 0x20;
        if (uVar1 != 0) {
          uVar4 = LZCOUNT(uVar1);
        }
        iVar8 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
      }
    }
    if ((param_1[0x20] & 1) != 0) {
      uVar1 = param_1[0x23];
      if (param_1[0x22] == 0 && uVar1 == 0) {
        iVar7 = 2;
      }
      else {
        uVar4 = LZCOUNT(param_1[0x22] | 1) | 0x20;
        if (uVar1 != 0) {
          uVar4 = LZCOUNT(uVar1);
        }
        iVar7 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
      }
    }
    iVar7 = iVar8 + iVar6 + iVar7;
  }
  if (param_1[0x24] != 2 || param_1[0x25] != 0) {
    iVar3 = 4;
    iVar6 = 2;
    if (*(double *)(param_1 + 0x26) != 0.0) {
      iVar3 = 0xd;
    }
    if ((param_1[0x24] & 1) == 0) {
      iVar3 = 2;
    }
    iVar8 = 2;
    if (*(double *)(param_1 + 0x2a) != 0.0) {
      iVar8 = 0xb;
    }
    if ((param_1[0x28] & 1) != 0) {
      iVar3 = iVar3 + iVar8;
    }
    if (*(double *)(param_1 + 0x2e) != 0.0) {
      iVar6 = 0xb;
    }
    if ((param_1[0x2c] & 1) != 0) {
      iVar3 = iVar3 + iVar6;
    }
  }
  iVar8 = 0;
  iVar6 = 0;
  if (param_1[0x34] != 2) {
    iVar5 = 2;
    if ((param_1[0x34] & 1) != 0) {
      if (param_1[0x35] == 0) {
        iVar5 = 4;
      }
      else {
        iVar5 = ((LZCOUNT(param_1[0x35] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 5;
      }
    }
    iVar6 = 0;
    iVar9 = 0;
    if (param_1[0x36] == 1) {
      if (param_1[0x37] == 0) {
        iVar9 = 2;
      }
      else {
        iVar9 = ((LZCOUNT(param_1[0x37] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
      }
    }
    if (param_1[0x38] == 1) {
      if (param_1[0x39] == 0) {
        iVar6 = 2;
      }
      else {
        iVar6 = ((LZCOUNT(param_1[0x39] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
      }
    }
    iVar6 = iVar9 + iVar5 + iVar6;
  }
  uVar1 = param_1[0x3a];
  if (uVar1 != 0) {
    uVar4 = LZCOUNT(uVar1 | 1) | 0x20;
    if ((int)uVar1 < 0) {
      uVar4 = LZCOUNT((int)uVar1 >> 0x1f);
    }
    iVar8 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  iVar5 = 0;
  if (param_1[0x30] == 1) {
    if (param_1[0x31] == 0) {
      iVar9 = 2;
    }
    else {
      iVar9 = ((LZCOUNT(param_1[0x31] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
    }
    iVar5 = 0;
    iVar2 = 0;
    if (param_1[0x32] != 0) {
      iVar2 = ((LZCOUNT(param_1[0x32] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (param_1[0x33] != 0) {
      iVar5 = ((LZCOUNT(param_1[0x33] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar5 = iVar2 + iVar9 + iVar5;
  }
  iVar3 = iVar10 + iVar11 + iVar7 + iVar3;
  if ((byte)param_1[0x3b] != 2) {
    iVar3 = iVar3 + (uint)(byte)param_1[0x3b] * 2 + 2;
  }
  iVar3 = iVar3 + iVar6;
  if (*(byte *)((int)param_1 + 0xed) != 2) {
    iVar3 = iVar3 + (uint)*(byte *)((int)param_1 + 0xed) * 2 + 2;
  }
  return iVar3 + iVar8 + iVar5;
}

