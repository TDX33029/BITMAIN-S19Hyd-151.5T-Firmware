// FUN_00efd690 @ 00efd690 size=496 calls_out=0 calls_in=1
// strings: 

int FUN_00efd690(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = param_1[0x1e];
  iVar9 = 0;
  iVar4 = 0;
  if (uVar8 != 0) {
    puVar1 = (uint *)(param_1[0x1d] + 8);
    uVar3 = uVar8;
    do {
      uVar3 = uVar3 - 1;
      iVar4 = *puVar1 + iVar4 + ((LZCOUNT(*puVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
      puVar1 = puVar1 + 3;
    } while (uVar3 != 0);
  }
  if (*param_1 != 2 || param_1[1] != 0) {
    iVar9 = 4;
    iVar2 = 2;
    if (*(double *)(param_1 + 2) != 0.0) {
      iVar9 = 0xd;
    }
    if ((*param_1 & 1) == 0) {
      iVar9 = 2;
    }
    iVar5 = 2;
    if (*(double *)(param_1 + 6) != 0.0) {
      iVar5 = 0xb;
    }
    if ((param_1[4] & 1) != 0) {
      iVar9 = iVar9 + iVar5;
    }
    if (*(double *)(param_1 + 10) != 0.0) {
      iVar2 = 0xb;
    }
    if ((param_1[8] & 1) != 0) {
      iVar9 = iVar9 + iVar2;
    }
  }
  iVar5 = 0;
  iVar2 = 0;
  if (param_1[0xc] != 2 || param_1[0xd] != 0) {
    iVar2 = 4;
    iVar6 = 2;
    if (*(double *)(param_1 + 0xe) != 0.0) {
      iVar2 = 0xd;
    }
    if ((param_1[0xc] & 1) == 0) {
      iVar2 = 2;
    }
    iVar7 = 2;
    if (*(double *)(param_1 + 0x12) != 0.0) {
      iVar7 = 0xb;
    }
    if ((param_1[0x10] & 1) != 0) {
      iVar2 = iVar2 + iVar7;
    }
    if (*(double *)(param_1 + 0x16) != 0.0) {
      iVar6 = 0xb;
    }
    if ((param_1[0x14] & 1) != 0) {
      iVar2 = iVar2 + iVar6;
    }
  }
  if (param_1[0x18] == 1) {
    if (param_1[0x19] == 0) {
      iVar6 = 2;
    }
    else {
      iVar6 = ((LZCOUNT(param_1[0x19] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
    }
    iVar5 = 0;
    iVar7 = 0;
    if (param_1[0x1a] != 0) {
      iVar7 = ((LZCOUNT(param_1[0x1a] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (param_1[0x1b] != 0) {
      iVar5 = ((LZCOUNT(param_1[0x1b] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar5 = iVar7 + iVar6 + iVar5;
  }
  iVar4 = iVar4 + uVar8;
  if ((byte)param_1[0x1f] != 2) {
    iVar4 = iVar4 + (uint)(byte)param_1[0x1f] * 2 + 2;
  }
  return iVar4 + iVar9 + iVar2 + iVar5;
}

