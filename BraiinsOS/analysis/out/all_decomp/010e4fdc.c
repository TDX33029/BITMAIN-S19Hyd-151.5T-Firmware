// FUN_010e4fdc @ 010e4fdc size=784 calls_out=0 calls_in=2
// strings: 

int FUN_010e4fdc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  if (param_1 == param_2) {
    return 0;
  }
  iVar8 = 0;
  iVar4 = 0;
  do {
    piVar9 = (int *)(param_1 + iVar8 * 0x74);
    iVar1 = 0;
    if (*piVar9 == 1) {
      iVar1 = ((LZCOUNT(piVar9[1] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar11 = 0;
    iVar2 = 0;
    if (piVar9[0xb] != -0x80000000) {
      iVar2 = piVar9[0xd] + ((LZCOUNT(piVar9[0xd] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (piVar9[0xe] != -0x80000000) {
      iVar11 = piVar9[0x10] + ((LZCOUNT(piVar9[0x10] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar15 = piVar9[7];
    iVar16 = 0;
    iVar10 = 0;
    if (iVar15 != 0) {
      puVar3 = (uint *)piVar9[6];
      iVar5 = iVar15;
      do {
        iVar5 = iVar5 + -1;
        iVar10 = iVar10 + ((LZCOUNT(*puVar3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
        puVar3 = puVar3 + 1;
      } while (iVar5 != 0);
    }
    if (piVar9[0x11] != -0x80000000) {
      iVar16 = piVar9[0x13] + ((LZCOUNT(piVar9[0x13] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar5 = 0;
    iVar12 = 0;
    if (piVar9[0x14] == -0x80000000) {
      if (piVar9[0x17] != -0x80000000) goto LAB_010e5224;
LAB_010e51e4:
      iVar6 = piVar9[0x1a];
    }
    else {
      iVar12 = piVar9[0x16] + ((LZCOUNT(piVar9[0x16] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      if (piVar9[0x17] == -0x80000000) goto LAB_010e51e4;
LAB_010e5224:
      iVar5 = piVar9[0x19] + ((LZCOUNT(piVar9[0x19] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      iVar6 = piVar9[0x1a];
    }
    iVar14 = 0;
    if (iVar6 != -0x80000000) {
      iVar6 = 0;
      iVar14 = piVar9[0x1c];
      if (iVar14 != 0) {
        iVar6 = 0;
        puVar3 = (uint *)(piVar9[0x1b] + 0x14);
        iVar13 = iVar14;
        do {
          iVar13 = iVar13 + -1;
          uVar7 = puVar3[-3] + *puVar3 + ((LZCOUNT(puVar3[-3] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) +
                  ((LZCOUNT(*puVar3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 2;
          iVar6 = uVar7 + iVar6 + ((LZCOUNT(uVar7 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
          puVar3 = puVar3 + 6;
        } while (iVar13 != 0);
      }
      iVar14 = iVar6 + iVar14 + ((LZCOUNT(iVar6 + iVar14 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar8 = iVar8 + 1;
    uVar7 = iVar2 + iVar1 + iVar11 + iVar15 + iVar10 + iVar16 + (piVar9[10] + piVar9[4]) * 5 +
            iVar12 + iVar5 + iVar14;
    iVar4 = uVar7 + iVar4 + ((LZCOUNT(uVar7 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    if (iVar8 == ((uint)(param_2 - param_1) >> 2) * 0x4f72c235) {
      return iVar4;
    }
  } while( true );
}

