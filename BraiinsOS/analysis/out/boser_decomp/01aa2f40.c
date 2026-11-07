// FUN_01aa2f40 @ 01aa2f40 size=920 calls_out=1 calls_in=2
// strings: 

int FUN_01aa2f40(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  if (param_1 == param_2) {
    iVar12 = 0;
  }
  else {
    iVar9 = 0;
    iVar12 = 0;
    do {
      piVar7 = (int *)(param_1 + iVar9 * -0x80);
      iVar6 = 0;
      if (piVar7[0x10] != -0x80000000) {
        iVar6 = piVar7[0x12] + ((LZCOUNT(piVar7[0x12] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar5 = 0;
      iVar16 = 0;
      if (piVar7[0x16] != -0x80000000) {
        iVar16 = piVar7[0x18] + ((LZCOUNT(piVar7[0x18] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      if (*piVar7 == 1) {
        uVar1 = piVar7[1];
        uVar4 = LZCOUNT(uVar1 | 1) | 0x20;
        if ((int)uVar1 < 0) {
          uVar4 = LZCOUNT((int)uVar1 >> 0x1f);
        }
        iVar5 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
      }
      iVar10 = 0;
      iVar2 = 0;
      if (piVar7[2] == 1) {
        uVar1 = piVar7[3];
        uVar4 = LZCOUNT(uVar1 | 1) | 0x20;
        if ((int)uVar1 < 0) {
          uVar4 = LZCOUNT((int)uVar1 >> 0x1f);
        }
        iVar2 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
      }
      if (piVar7[4] == 1) {
        uVar1 = piVar7[5];
        uVar4 = LZCOUNT(uVar1 | 1) | 0x20;
        if ((int)uVar1 < 0) {
          uVar4 = LZCOUNT((int)uVar1 >> 0x1f);
        }
        iVar10 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
      }
      iVar14 = 0;
      iVar13 = 0;
      if (piVar7[0x13] != -0x80000000) {
        iVar13 = piVar7[0x15] + ((LZCOUNT(piVar7[0x15] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      if (piVar7[0x19] != -0x80000000) {
        iVar14 = piVar7[0x1b] + ((LZCOUNT(piVar7[0x1b] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar11 = 0;
      iVar3 = 0;
      if (piVar7[8] != 2) {
        iVar15 = 0;
        iVar3 = 0;
        if ((piVar7[8] & 1U) != 0) {
          uVar1 = piVar7[9];
          uVar4 = LZCOUNT(uVar1 | 1) | 0x20;
          if ((int)uVar1 < 0) {
            uVar4 = LZCOUNT((int)uVar1 >> 0x1f);
          }
          iVar3 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
        }
        if (piVar7[10] == 1) {
          uVar1 = piVar7[0xb];
          uVar4 = LZCOUNT(uVar1 | 1) | 0x20;
          if ((int)uVar1 < 0) {
            uVar4 = LZCOUNT((int)uVar1 >> 0x1f);
          }
          iVar15 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
        }
        if ((char)piVar7[0xf] != '\x02') {
          iVar3 = iVar3 + 2;
        }
        if (*(char *)((int)piVar7 + 0x3e) != '\x02') {
          iVar3 = iVar3 + 2;
        }
        if (*(char *)((int)piVar7 + 0x3d) != '\x02') {
          iVar3 = iVar3 + 2;
        }
        iVar8 = piVar7[0xe];
        iVar3 = iVar3 + iVar15;
        if (*(char *)((int)piVar7 + 0x3f) != '\x02') {
          iVar3 = iVar3 + 2;
        }
        iVar15 = FUN_01aa2d9c(piVar7[0xd],piVar7[0xd] + iVar8 * 0x60);
        uVar1 = iVar3 + iVar8 * 2 + iVar15;
        iVar3 = uVar1 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      if (piVar7[6] == 1) {
        uVar1 = piVar7[7];
        uVar4 = LZCOUNT(uVar1 | 1) | 0x20;
        if ((int)uVar1 < 0) {
          uVar4 = LZCOUNT((int)uVar1 >> 0x1f);
        }
        iVar11 = ((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
      }
      iVar15 = 0;
      if (piVar7[0x1c] != -0x80000000) {
        iVar15 = piVar7[0x1e] + ((LZCOUNT(piVar7[0x1e] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar9 = iVar9 + -1;
      uVar1 = iVar16 + iVar6 + iVar5 + iVar2 + iVar10 + iVar13 + iVar14 + iVar3 + iVar11 + iVar15;
      if ((char)piVar7[0x1f] != '\x02') {
        uVar1 = uVar1 + 3;
      }
      iVar12 = uVar1 + iVar12 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    } while (-((uint)(param_2 - param_1) >> 7) != iVar9);
  }
  return iVar12;
}

