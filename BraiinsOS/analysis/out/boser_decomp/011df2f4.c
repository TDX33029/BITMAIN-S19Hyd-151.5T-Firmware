// FUN_011df2f4 @ 011df2f4 size=944 calls_out=0 calls_in=1
// strings: 

int FUN_011df2f4(int param_1,int param_2)

{
  uint *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  if (param_1 == param_2) {
    iVar20 = 0;
  }
  else {
    puVar8 = (uint *)(param_1 + 0x40);
    iVar20 = 0;
    uVar7 = (uint)(param_2 - param_1) >> 7;
    do {
      uVar4 = puVar8[8];
      iVar10 = 0;
      if (uVar4 != 0) {
        iVar10 = uVar4 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      uVar4 = puVar8[0xb];
      iVar15 = 0;
      iVar19 = 0;
      if (uVar4 != 0) {
        iVar19 = uVar4 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      uVar4 = puVar8[0xe];
      if (uVar4 != 0) {
        iVar15 = uVar4 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      puVar1 = puVar8 + 0xf;
      pbVar2 = (byte *)((int)puVar8 + 0x3d);
      pbVar3 = (byte *)((int)puVar8 + 0x3e);
      iVar11 = 0;
      if (puVar8[-0x10] != 2 || puVar8[-0xf] != 0) {
        uVar4 = puVar8[-9];
        iVar11 = 0;
        iVar13 = 0;
        if (puVar8[-10] != 0 || uVar4 != 0) {
          uVar12 = LZCOUNT(puVar8[-10] | 1) | 0x20;
          if (uVar4 != 0) {
            uVar12 = LZCOUNT(uVar4);
          }
          iVar13 = ((uVar12 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
        }
        uVar4 = puVar8[-7];
        if (puVar8[-8] != 0 || uVar4 != 0) {
          uVar12 = LZCOUNT(puVar8[-8] | 1) | 0x20;
          if (uVar4 != 0) {
            uVar12 = LZCOUNT(uVar4);
          }
          iVar11 = ((uVar12 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
        }
        iVar9 = 0;
        uVar4 = puVar8[-5];
        iVar14 = 0;
        if (puVar8[-6] != 0 || uVar4 != 0) {
          uVar12 = LZCOUNT(puVar8[-6] | 1) | 0x20;
          if (uVar4 != 0) {
            uVar12 = LZCOUNT(uVar4);
          }
          iVar14 = ((uVar12 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
        }
        uVar4 = puVar8[-3];
        if (puVar8[-4] != 0 || uVar4 != 0) {
          uVar12 = LZCOUNT(puVar8[-4] | 1) | 0x20;
          if (uVar4 != 0) {
            uVar12 = LZCOUNT(uVar4);
          }
          iVar9 = ((uVar12 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
        }
        iVar16 = 0;
        uVar4 = puVar8[-1];
        iVar17 = 0;
        if (puVar8[-2] != 0 || uVar4 != 0) {
          uVar12 = LZCOUNT(puVar8[-2] | 1) | 0x20;
          if (uVar4 != 0) {
            uVar12 = LZCOUNT(uVar4);
          }
          iVar17 = ((uVar12 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
        }
        uVar4 = puVar8[1];
        if (*puVar8 != 0 || uVar4 != 0) {
          uVar12 = LZCOUNT(*puVar8 | 1) | 0x20;
          if (uVar4 != 0) {
            uVar12 = LZCOUNT(uVar4);
          }
          iVar16 = ((uVar12 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
        }
        iVar18 = 0;
        iVar5 = 0;
        if ((puVar8[-0x10] & 1) != 0) {
          uVar4 = puVar8[-0xd];
          if (puVar8[-0xe] == 0 && uVar4 == 0) {
            iVar6 = 2;
          }
          else {
            uVar12 = LZCOUNT(puVar8[-0xe] | 1) | 0x20;
            if (uVar4 != 0) {
              uVar12 = LZCOUNT(uVar4);
            }
            iVar6 = ((uVar12 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
          }
          uVar4 = puVar8[-0xc];
          if (uVar4 == 0) {
            iVar5 = 0;
          }
          else {
            uVar12 = LZCOUNT(uVar4 | 1) | 0x20;
            if ((int)uVar4 < 0) {
              uVar12 = LZCOUNT((int)uVar4 >> 0x1f);
            }
            iVar5 = ((uVar12 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
          }
          iVar5 = iVar5 + iVar6;
        }
        uVar4 = puVar8[4];
        if (uVar4 != 0) {
          iVar18 = uVar4 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        uVar4 = iVar11 + iVar13 + iVar14 + iVar9 + iVar17 + iVar16 + iVar5 + iVar18;
        iVar11 = uVar4 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      puVar8 = puVar8 + 0x20;
      uVar7 = uVar7 - 1;
      uVar4 = iVar19 + iVar10 + iVar15 + (uint)(byte)*puVar1 * 2 + (uint)*pbVar2 * 2 +
              (uint)*pbVar3 * 2 + iVar11;
      iVar20 = uVar4 + iVar20 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    } while (uVar7 != 0);
  }
  return iVar20;
}

