// FUN_010131e4 @ 010131e4 size=200 calls_out=0 calls_in=1
// strings: 

int FUN_010131e4(uint *param_1,uint *param_2)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if (param_1 == param_2) {
    return 0;
  }
  iVar3 = 0;
  uVar8 = (uint)((int)param_2 - (int)param_1) / 0x30;
  do {
    uVar4 = param_1[10];
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = uVar4 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    pdVar1 = (double *)(param_1 + 2);
    puVar5 = param_1 + 4;
    pdVar2 = (double *)(param_1 + 6);
    iVar7 = 2;
    uVar4 = *param_1;
    param_1 = param_1 + 0xc;
    if (*pdVar1 != 0.0) {
      iVar7 = 0xb;
    }
    if ((uVar4 & 1) != 0) {
      uVar6 = uVar6 + iVar7;
    }
    iVar7 = 2;
    if (*pdVar2 != 0.0) {
      iVar7 = 0xb;
    }
    if ((*puVar5 & 1) != 0) {
      uVar6 = uVar6 + iVar7;
    }
    uVar8 = uVar8 - 1;
    iVar3 = uVar6 + iVar3 + ((LZCOUNT(uVar6 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
  } while (uVar8 != 0);
  return iVar3;
}

