// FUN_00f011f8 @ 00f011f8 size=396 calls_out=0 calls_in=1
// strings: 

int FUN_00f011f8(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = 0;
  iVar10 = 0;
  if (param_1[0x12] == 1) {
    iVar10 = ((LZCOUNT(param_1[0x13] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  if (param_1[0x14] == 1) {
    iVar9 = ((LZCOUNT(param_1[0x15] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar6 = 0;
  iVar5 = 0;
  if (param_1[0x16] == 1) {
    iVar5 = ((LZCOUNT(param_1[0x17] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  uVar8 = param_1[0xc];
  if (uVar8 != 4 || param_1[0xd] != 0) {
    if ((uVar8 & 3) == 2) {
      iVar6 = 4;
    }
    else {
      iVar6 = 2;
      if (uVar8 != 3) {
        iVar6 = 0;
        if (param_1[0x10] == 1) {
          uVar1 = param_1[0x11];
          uVar3 = LZCOUNT(uVar1 | 1) | 0x20;
          if ((int)uVar1 < 0) {
            uVar3 = LZCOUNT((int)uVar1 >> 0x1f);
          }
          iVar6 = ((uVar3 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
        }
        iVar2 = 4;
        if ((uVar8 & 1) != 0) {
          iVar2 = 0xd;
        }
        iVar6 = iVar6 + iVar2;
      }
    }
  }
  iVar4 = 2;
  iVar2 = 2;
  if (*(double *)(param_1 + 2) != 0.0) {
    iVar4 = 0xb;
  }
  iVar7 = 0;
  if ((*param_1 & 1) != 0) {
    iVar7 = iVar4;
  }
  iVar4 = 2;
  if (*(double *)(param_1 + 6) != 0.0) {
    iVar4 = 0xb;
  }
  if ((param_1[4] & 1) != 0) {
    iVar7 = iVar7 + iVar4;
  }
  if (*(double *)(param_1 + 10) != 0.0) {
    iVar2 = 0xb;
  }
  if ((param_1[8] & 1) != 0) {
    iVar7 = iVar7 + iVar2;
  }
  return iVar7 + iVar10 + iVar9 + iVar5 + iVar6;
}

