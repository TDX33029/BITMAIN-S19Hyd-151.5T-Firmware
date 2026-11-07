// FUN_00efcb14 @ 00efcb14 size=468 calls_out=0 calls_in=1
// strings: 

int FUN_00efcb14(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = 0;
  iVar1 = 0;
  if (*param_1 != 2 || param_1[1] != 0) {
    iVar6 = 2;
    if ((*param_1 & 1) != 0) {
      uVar3 = param_1[3];
      if (param_1[2] == 0 && uVar3 == 0) {
        iVar6 = 4;
      }
      else {
        uVar4 = LZCOUNT(param_1[2] | 1) | 0x20;
        if (uVar3 != 0) {
          uVar4 = LZCOUNT(uVar3);
        }
        iVar6 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 5;
      }
    }
    iVar2 = 0;
    iVar5 = 0;
    if ((param_1[4] & 1) != 0) {
      uVar3 = param_1[7];
      if (param_1[6] == 0 && uVar3 == 0) {
        iVar5 = 2;
      }
      else {
        uVar4 = LZCOUNT(param_1[6] | 1) | 0x20;
        if (uVar3 != 0) {
          uVar4 = LZCOUNT(uVar3);
        }
        iVar5 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
      }
    }
    if ((param_1[8] & 1) != 0) {
      uVar3 = param_1[0xb];
      if (param_1[10] == 0 && uVar3 == 0) {
        iVar2 = 2;
      }
      else {
        uVar4 = LZCOUNT(param_1[10] | 1) | 0x20;
        if (uVar3 != 0) {
          uVar4 = LZCOUNT(uVar3);
        }
        iVar2 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
      }
    }
    iVar2 = iVar5 + iVar6 + iVar2;
  }
  if (param_1[0xc] != 2 || param_1[0xd] != 0) {
    iVar1 = 4;
    iVar6 = 2;
    if (*(double *)(param_1 + 0xe) != 0.0) {
      iVar1 = 0xd;
    }
    if ((param_1[0xc] & 1) == 0) {
      iVar1 = 2;
    }
    iVar5 = 2;
    if (*(double *)(param_1 + 0x12) != 0.0) {
      iVar5 = 0xb;
    }
    if ((param_1[0x10] & 1) != 0) {
      iVar1 = iVar1 + iVar5;
    }
    if (*(double *)(param_1 + 0x16) != 0.0) {
      iVar6 = 0xb;
    }
    if ((param_1[0x14] & 1) != 0) {
      iVar1 = iVar1 + iVar6;
    }
  }
  uVar3 = param_1[0x18];
  if (uVar3 == 0) {
    iVar6 = 0;
  }
  else {
    uVar4 = LZCOUNT(uVar3 | 1) | 0x20;
    if ((int)uVar3 < 0) {
      uVar4 = LZCOUNT((int)uVar3 >> 0x1f);
    }
    iVar6 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  iVar1 = iVar1 + iVar2;
  if ((byte)param_1[0x19] != 2) {
    iVar1 = iVar1 + (uint)(byte)param_1[0x19] * 2 + 2;
  }
  return iVar1 + iVar6;
}

