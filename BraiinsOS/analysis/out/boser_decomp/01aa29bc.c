// FUN_01aa29bc @ 01aa29bc size=408 calls_out=3 calls_in=2
// strings: 

int FUN_01aa29bc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if (param_1 == param_2) {
    iVar12 = 0;
  }
  else {
    uVar9 = 0;
    iVar12 = 0;
    do {
      iVar8 = param_1 + uVar9 * 0x40;
      iVar1 = 0;
      if (*(int *)(iVar8 + 0x24) != -0x80000000) {
        iVar1 = *(uint *)(iVar8 + 0x2c) +
                ((LZCOUNT(*(uint *)(iVar8 + 0x2c) | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar13 = *(int *)(iVar8 + 8);
      iVar2 = FUN_01aa2700(*(int *)(iVar8 + 4),*(int *)(iVar8 + 4) + iVar13 * 0x24);
      iVar10 = 0;
      iVar11 = 0;
      if (*(int *)(iVar8 + 0x30) != -0x80000000) {
        iVar6 = *(int *)(iVar8 + 0x38);
        iVar11 = 0;
        if (*(char *)(iVar8 + 0x3c) != '\x02') {
          iVar11 = 2;
        }
        if (*(char *)(iVar8 + 0x3d) != '\x02') {
          iVar11 = iVar11 + 2;
        }
        iVar3 = FUN_01aa2d9c(*(int *)(iVar8 + 0x34),*(int *)(iVar8 + 0x34) + iVar6 * 0x60);
        uVar4 = iVar11 + iVar6 * 2 + iVar3;
        iVar11 = uVar4 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar7 = *(int *)(iVar8 + 0x14);
      iVar6 = FUN_01aa2cec(*(int *)(iVar8 + 0x10),*(int *)(iVar8 + 0x10) + iVar7 * 0x10);
      iVar3 = *(int *)(iVar8 + 0x20);
      if (iVar3 != 0) {
        iVar10 = 0;
        puVar5 = (uint *)(*(int *)(iVar8 + 0x1c) + 8);
        iVar8 = iVar3;
        do {
          iVar8 = iVar8 + -1;
          iVar10 = *puVar5 + iVar10 + ((LZCOUNT(*puVar5 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
          puVar5 = puVar5 + 3;
        } while (iVar8 != 0);
      }
      uVar9 = uVar9 + 1;
      uVar4 = iVar13 + iVar1 + iVar2 + iVar11 + iVar7 + iVar6 + iVar3 + iVar10;
      iVar12 = uVar4 + iVar12 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    } while (uVar9 != (uint)(param_2 - param_1) >> 6);
  }
  return iVar12;
}

