// FUN_01a9203c @ 01a9203c size=648 calls_out=7 calls_in=2
// strings: 

int FUN_01a9203c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  
  if (param_1 == param_2) {
    iVar9 = 0;
  }
  else {
    iVar20 = 0;
    iVar9 = 0;
    do {
      iVar23 = param_1 + iVar20 * 0x7c;
      iVar1 = 0;
      if (*(int *)(iVar23 + 0x60) != -0x80000000) {
        iVar1 = *(uint *)(iVar23 + 0x68) +
                ((LZCOUNT(*(uint *)(iVar23 + 0x68) | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar10 = *(int *)(iVar23 + 8);
      iVar2 = FUN_01aa2f40(*(int *)(iVar23 + 4),*(int *)(iVar23 + 4) + iVar10 * 0x80);
      iVar11 = *(int *)(iVar23 + 0x20);
      iVar3 = FUN_01a9203c(*(int *)(iVar23 + 0x1c),*(int *)(iVar23 + 0x1c) + iVar11 * 0x7c);
      iVar12 = *(int *)(iVar23 + 0x2c);
      iVar4 = FUN_01aa29bc(*(int *)(iVar23 + 0x28),*(int *)(iVar23 + 0x28) + iVar12 * 0x40);
      iVar13 = *(int *)(iVar23 + 0x38);
      iVar5 = FUN_01aa289c(*(int *)(iVar23 + 0x34),*(int *)(iVar23 + 0x34) + iVar13 * 0x1c);
      iVar14 = *(int *)(iVar23 + 0x14);
      iVar6 = FUN_01aa2f40(*(int *)(iVar23 + 0x10),*(int *)(iVar23 + 0x10) + iVar14 * 0x80);
      iVar22 = 0;
      iVar21 = 0;
      if (*(int *)(iVar23 + 0x6c) != -0x80000000) {
        iVar21 = 0;
        if (*(char *)(iVar23 + 0x78) != '\x02') {
          iVar21 = 2;
        }
        if (*(char *)(iVar23 + 0x79) != '\x02') {
          iVar21 = iVar21 + 2;
        }
        iVar17 = *(int *)(iVar23 + 0x74);
        if (*(char *)(iVar23 + 0x7a) != '\x02') {
          iVar21 = iVar21 + 2;
        }
        if (*(char *)(iVar23 + 0x7b) != '\x02') {
          iVar21 = iVar21 + 2;
        }
        iVar7 = FUN_01aa2d9c(*(int *)(iVar23 + 0x70),*(int *)(iVar23 + 0x70) + iVar17 * 0x60);
        uVar8 = iVar21 + iVar17 * 2 + iVar7;
        iVar21 = uVar8 + ((LZCOUNT(uVar8 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar19 = *(int *)(iVar23 + 0x44);
      iVar17 = FUN_01aa32d8(*(int *)(iVar23 + 0x40),*(int *)(iVar23 + 0x40) + iVar19 * 0x18);
      iVar18 = *(int *)(iVar23 + 0x50);
      iVar7 = FUN_01aa2cec(*(int *)(iVar23 + 0x4c),*(int *)(iVar23 + 0x4c) + iVar18 * 0x10);
      iVar15 = *(int *)(iVar23 + 0x5c);
      if (iVar15 != 0) {
        iVar22 = 0;
        puVar16 = (uint *)(*(int *)(iVar23 + 0x58) + 8);
        iVar23 = iVar15;
        do {
          iVar23 = iVar23 + -1;
          iVar22 = *puVar16 + iVar22 + ((LZCOUNT(*puVar16 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
          puVar16 = puVar16 + 3;
        } while (iVar23 != 0);
      }
      iVar20 = iVar20 + 1;
      uVar8 = iVar10 + iVar1 + iVar2 + iVar11 + iVar3 + iVar12 + iVar4 + iVar13 + iVar5 + iVar14 +
              iVar6 + iVar21 + iVar19 + iVar17 + iVar18 + iVar7 + iVar15 + iVar22;
      iVar9 = uVar8 + iVar9 + ((LZCOUNT(uVar8 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    } while (iVar20 != ((uint)(param_2 - param_1) >> 2) * -0x42108421);
  }
  return iVar9;
}

