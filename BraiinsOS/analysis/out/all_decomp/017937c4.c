// FUN_017937c4 @ 017937c4 size=820 calls_out=0 calls_in=1
// strings: 

undefined1 *
FUN_017937c4(undefined1 *param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  short sVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  short *psVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  uVar7 = param_4 + 1;
  iVar5 = 1 << (param_5 & 0xff);
  uVar6 = param_5 - 5;
  iVar13 = iVar5 + 1;
  puVar8 = param_1;
  if (iVar13 < 2 || param_4 == 0xffffffff) {
    uVar9 = 4;
  }
  else {
    iVar4 = param_5 + 1;
    uVar12 = 0;
    uVar9 = 4;
    while( true ) {
      uVar14 = (uint)*(short *)(param_3 + uVar12 * 2);
      iVar10 = (iVar5 * 2 - iVar13) + -1;
      iVar15 = uVar14 + 1;
      if (iVar5 <= iVar15) {
        iVar15 = iVar15 + iVar10;
      }
      iVar13 = iVar13 - ((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f) & 0xffff);
      if (iVar13 < 1) {
        return (undefined1 *)0xffffffff;
      }
      uVar6 = uVar6 + (iVar15 << (uVar9 & 0xff));
      uVar9 = uVar9 + iVar4;
      if (iVar15 < iVar10) {
        uVar9 = uVar9 - 1;
      }
      for (; iVar13 < iVar5; iVar5 = iVar5 >> 1) {
        iVar4 = iVar4 + -1;
      }
      if (0x10 < (int)uVar9) {
        if ((param_6 == 0) && (param_1 + param_2 + -2 < puVar8)) {
          return &DAT_ffffffba;
        }
        *puVar8 = (char)uVar6;
        puVar8[1] = (char)(uVar6 >> 8);
        uVar9 = uVar9 - 0x10;
        uVar6 = uVar6 >> 0x10;
        puVar8 = puVar8 + 2;
      }
      uVar14 = uVar12 + 1;
      bVar17 = iVar13 != 0;
      if (iVar13 != 1) {
        bVar17 = uVar14 <= uVar7;
      }
      if (!bVar17 || (iVar13 == 1 || uVar7 == uVar14)) break;
      if (iVar15 == 1) {
        psVar11 = (short *)(param_3 + uVar14 * 2);
        uVar16 = uVar14;
        do {
          sVar1 = *psVar11;
          psVar11 = psVar11 + 1;
          if (sVar1 != 0) break;
          bVar17 = param_4 != uVar16;
          uVar16 = uVar16 + 1;
        } while (bVar17);
        if (uVar7 == uVar16) {
          return (undefined1 *)0xffffffff;
        }
        uVar12 = uVar12 + 0x19;
        uVar3 = uVar9;
        if (uVar12 <= uVar16) {
          iVar10 = 0xffff << (uVar9 & 0xff);
          if (param_6 == 0) {
            uVar14 = uVar12;
            while( true ) {
              uVar6 = iVar10 + uVar6;
              if (param_1 + param_2 + -2 < puVar8) {
                return &DAT_ffffffba;
              }
              *puVar8 = (char)uVar6;
              puVar8[1] = (char)(uVar6 >> 8);
              uVar6 = uVar6 >> 0x10;
              puVar8 = puVar8 + 2;
              if (uVar16 < uVar14 + 0x18) break;
              uVar14 = uVar14 + 0x18;
            }
          }
          else {
            puVar2 = puVar8;
            do {
              uVar14 = uVar12;
              puVar8 = puVar2 + 2;
              uVar6 = iVar10 + uVar6;
              *puVar2 = (char)uVar6;
              puVar2[1] = (char)(uVar6 >> 8);
              uVar6 = uVar6 >> 0x10;
              uVar12 = uVar14 + 0x18;
              puVar2 = puVar8;
            } while (uVar14 + 0x18 <= uVar16);
          }
        }
        for (; uVar14 + 3 <= uVar16; uVar14 = uVar14 + 3) {
          uVar6 = uVar6 + (3 << (uVar3 & 0xff));
          uVar3 = uVar3 + 2;
        }
        uVar6 = uVar6 + (uVar16 - uVar14 << (uVar3 & 0xff));
        uVar9 = uVar3 + 2;
        uVar14 = uVar16;
        if (0x10 < (int)uVar9) {
          if ((param_6 == 0) && (param_1 + param_2 + -2 < puVar8)) {
            return &DAT_ffffffba;
          }
          *puVar8 = (char)uVar6;
          uVar9 = uVar3 - 0xe;
          puVar8[1] = (char)(uVar6 >> 8);
          uVar6 = uVar6 >> 0x10;
          puVar8 = puVar8 + 2;
        }
      }
      uVar12 = uVar14;
    }
  }
  if (iVar13 != 1) {
    return (undefined1 *)0xffffffff;
  }
  if ((param_6 == 0) && (param_1 + param_2 + -2 < puVar8)) {
    return (undefined1 *)0xffffffba;
  }
  iVar5 = uVar9 + 7;
  if (iVar5 < 0) {
    iVar5 = uVar9 + 0xe;
  }
  puVar8[1] = (char)(uVar6 >> 8);
  *puVar8 = (char)uVar6;
  return puVar8 + ((iVar5 >> 3) - (int)param_1);
}

