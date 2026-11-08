// FUN_01a922c4 @ 01a922c4 size=488 calls_out=0 calls_in=0
// strings: 

int FUN_01a922c4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if (param_1 == param_2) {
    iVar11 = 0;
  }
  else {
    iVar5 = 0;
    iVar11 = 0;
    do {
      iVar13 = 0;
      iVar3 = param_1 + iVar5 * 0x3c;
      iVar6 = *(int *)(iVar3 + 8);
      if (iVar6 != 0) {
        uVar8 = 0;
        puVar4 = *(uint **)(iVar3 + 4);
        do {
          uVar1 = *puVar4;
          uVar7 = LZCOUNT(uVar1 | 1) | 0x20;
          if ((int)uVar1 < 0) {
            uVar7 = LZCOUNT((int)uVar1 >> 0x1f);
          }
          iVar6 = iVar6 + -1;
          uVar8 = uVar8 + ((uVar7 ^ 0x3f) * 9 + 0x49 >> 6);
          puVar4 = puVar4 + 1;
        } while (iVar6 != 0);
        iVar13 = uVar8 + ((LZCOUNT(uVar8 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar6 = *(int *)(iVar3 + 0x14);
      iVar10 = 0;
      iVar12 = 0;
      if (iVar6 != 0) {
        uVar8 = 0;
        puVar4 = *(uint **)(iVar3 + 0x10);
        do {
          uVar1 = *puVar4;
          uVar7 = LZCOUNT(uVar1 | 1) | 0x20;
          if ((int)uVar1 < 0) {
            uVar7 = LZCOUNT((int)uVar1 >> 0x1f);
          }
          iVar6 = iVar6 + -1;
          uVar8 = uVar8 + ((uVar7 ^ 0x3f) * 9 + 0x49 >> 6);
          puVar4 = puVar4 + 1;
        } while (iVar6 != 0);
        iVar12 = uVar8 + ((LZCOUNT(uVar8 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      if (*(int *)(iVar3 + 0x24) != -0x80000000) {
        iVar10 = *(uint *)(iVar3 + 0x2c) +
                 ((LZCOUNT(*(uint *)(iVar3 + 0x2c) | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar6 = 0;
      iVar9 = 0;
      if (*(int *)(iVar3 + 0x30) != -0x80000000) {
        iVar9 = *(uint *)(iVar3 + 0x38) +
                ((LZCOUNT(*(uint *)(iVar3 + 0x38) | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar2 = *(int *)(iVar3 + 0x20);
      if (iVar2 != 0) {
        puVar4 = (uint *)(*(int *)(iVar3 + 0x1c) + 8);
        iVar3 = iVar2;
        do {
          iVar3 = iVar3 + -1;
          iVar6 = *puVar4 + iVar6 + ((LZCOUNT(*puVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
          puVar4 = puVar4 + 3;
        } while (iVar3 != 0);
      }
      iVar5 = iVar5 + 1;
      uVar8 = iVar12 + iVar13 + iVar10 + iVar9 + iVar2 + iVar6;
      iVar11 = uVar8 + iVar11 + ((LZCOUNT(uVar8 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    } while (iVar5 != ((uint)(param_2 - param_1) >> 2) * -0x11111111);
  }
  return iVar11;
}

