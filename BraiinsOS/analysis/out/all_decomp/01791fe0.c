// FUN_01791fe0 @ 01791fe0 size=804 calls_out=4 calls_in=3
// strings: 

void FUN_01791fe0(int param_1,int *param_2,uint *param_3,uint *param_4,uint param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_r1;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_5 < 8) {
    local_34 = 0;
    local_30 = 0;
    uVar7 = FUN_016dd1aa(&local_34,param_4,param_5);
    uVar24 = FUN_01791fe0(param_1,param_2,param_3,uVar7,8);
    uVar13 = (uint)uVar24;
    bVar23 = 0xffffff87 < uVar13;
    if (uVar13 < 0xffffff89) {
      bVar23 = uVar13 <= param_5;
    }
    if (!bVar23) {
      uVar24 = CONCAT44((int)((ulonglong)uVar24 >> 0x20),0xffffffec);
    }
  }
  else {
    uVar16 = *param_2 + 1;
    FUN_016dd606(param_1,0,uVar16 * 2,0);
    uVar13 = *param_4;
    uVar20 = uVar13 & 0xf;
    uVar9 = uVar20 + 5;
    if (uVar9 < 0x10) {
      *param_3 = uVar9;
      uVar13 = uVar13 >> 4;
      uVar9 = 1 << uVar9;
      iVar21 = uVar20 + 6;
      iVar17 = uVar9 + 1;
      uVar22 = 0;
      uVar20 = 4;
      puVar19 = (uint *)((int)param_4 + (param_5 - 7));
      puVar10 = (uint *)((int)param_4 + (param_5 - 4));
      puVar15 = param_4;
      while( true ) {
        do {
          uVar11 = uVar9 - 1 & uVar13;
          uVar18 = (uVar9 * 2 - iVar17) - 1;
          if (uVar11 < uVar18) {
            uVar20 = iVar21 + -1 + uVar20;
          }
          else {
            uVar20 = iVar21 + uVar20;
            uVar11 = uVar9 * 2 - 1 & uVar13;
            if ((int)uVar9 <= (int)uVar11) {
              uVar11 = uVar11 - uVar18;
            }
          }
          iVar1 = uVar22 * 2;
          iVar12 = uVar11 - 1;
          iVar6 = iVar12;
          if (-1 < iVar12) {
            iVar6 = -iVar12;
          }
          iVar17 = iVar17 + iVar6;
          uVar22 = uVar22 + 1;
          *(short *)(param_1 + iVar1) = (short)iVar12;
          if (iVar17 < (int)uVar9) {
            if (iVar17 < 2) goto LAB_01792284;
            iVar21 = 0x20 - LZCOUNT(iVar17);
            uVar9 = 0x80000000 >> LZCOUNT(iVar17);
          }
          if (uVar16 <= uVar22) goto LAB_01792284;
          puVar14 = (uint *)((int)puVar15 + ((int)uVar20 >> 3));
          if ((puVar19 < puVar15) && (puVar10 < puVar14)) {
            uVar20 = uVar20 + ((int)puVar15 - (int)puVar10) * 8 & 0x1f;
            puVar15 = puVar10;
          }
          else {
            uVar20 = uVar20 & 7;
            puVar15 = puVar14;
          }
          uVar13 = *puVar15 >> uVar20;
        } while (iVar12 != 0);
        uVar11 = ~uVar13;
        bVar5 = (byte)(uVar11 >> 0x18);
        bVar2 = (byte)uVar11;
        bVar3 = (byte)(uVar11 >> 8);
        bVar4 = (byte)(uVar11 >> 0x10);
        uVar11 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1
                                          ) << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                       bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                 bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                               bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                             bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
                                          ) << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                         8 | (uint)(byte)((((((((bVar5 & 1) << 1 | (bVar5 & 2) >> 1) << 1 |
                                              (bVar5 & 4) >> 2) << 1 | (bVar5 & 8) >> 3) << 1 |
                                            (bVar5 & 0x10) >> 4) << 1 | (bVar5 & 0x20) >> 5) << 1 |
                                          (bVar5 & 0x40) >> 6) << 1 | 1));
        if (uVar11 < 0x18) {
          puVar14 = puVar15;
        }
        else {
          do {
            uVar22 = uVar22 + 0x24;
            if (puVar19 < puVar15) {
              uVar20 = uVar20 + ((int)puVar15 - (int)puVar19) * 8 & 0x1f;
              uVar13 = *(uint *)((int)param_4 + (param_5 - 4)) >> uVar20;
              puVar15 = puVar10;
            }
            else {
              uVar13 = *(uint *)((int)puVar15 + 3) >> uVar20;
              puVar15 = (uint *)((int)puVar15 + 3);
            }
            uVar11 = ~uVar13;
            bVar5 = (byte)(uVar11 >> 0x18);
            bVar2 = (byte)uVar11;
            bVar3 = (byte)(uVar11 >> 8);
            bVar4 = (byte)(uVar11 >> 0x10);
            uVar11 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                              bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                            bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                             (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                             (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                             (uint)(byte)((((((((bVar5 & 1) << 1 | (bVar5 & 2) >> 1) << 1 |
                                              (bVar5 & 4) >> 2) << 1 | (bVar5 & 8) >> 3) << 1 |
                                            (bVar5 & 0x10) >> 4) << 1 | (bVar5 & 0x20) >> 5) << 1 |
                                          (bVar5 & 0x40) >> 6) << 1 | 1));
          } while (0x17 < uVar11);
          puVar14 = puVar15;
        }
        iVar1 = (uVar11 >> 1) * 2;
        uVar20 = uVar20 + 2 + iVar1;
        uVar22 = (uVar13 >> iVar1 & 3) + (short)(uVar11 >> 1) * 3 + uVar22;
        if (uVar16 <= uVar22) break;
        puVar8 = (uint *)((int)puVar14 + ((int)uVar20 >> 3));
        if ((puVar19 < puVar14) &&
           (puVar15 = (uint *)((int)param_4 + (param_5 - 4)), puVar15 < puVar8)) {
          uVar20 = uVar20 + ((int)puVar14 - (int)puVar15) * 8 & 0x1f;
        }
        else {
          uVar20 = uVar20 & 7;
          puVar15 = puVar8;
        }
        uVar13 = *puVar15 >> uVar20;
      }
      puVar15 = puVar14;
LAB_01792284:
      if (iVar17 == 1) {
        if (uVar16 < uVar22) {
          uVar24 = CONCAT44(puVar15,0xffffffd0);
          goto LAB_01792078;
        }
        if ((int)uVar20 < 0x21) {
          uVar24 = CONCAT44(puVar15,(int)puVar15 + (((int)(uVar20 + 7) >> 3) - (int)param_4));
          *param_2 = uVar22 - 1;
          goto LAB_01792078;
        }
      }
      uVar24 = CONCAT44(puVar15,0xffffffec);
    }
    else {
      uVar24 = CONCAT44(extraout_r1,0xffffffd4);
    }
  }
LAB_01792078:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

