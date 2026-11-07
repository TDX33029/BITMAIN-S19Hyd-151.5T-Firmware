// FUN_01b80834 @ 01b80834 size=764 calls_out=4 calls_in=3
// strings: 

void FUN_01b80834(int param_1,int *param_2,uint *param_3,uint *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  bool bVar21;
  undefined8 uVar22;
  int local_3c;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  if (param_5 < 8) {
    local_34 = 0;
    local_30 = 0;
    uVar5 = FUN_01bed4e2(&local_34,param_4,param_5,0);
    uVar22 = FUN_01b80834(param_1,param_2,param_3,uVar5,8);
    uVar20 = (uint)uVar22;
    bVar21 = 0xffffff87 < uVar20;
    if (uVar20 < 0xffffff89) {
      bVar21 = uVar20 <= param_5;
    }
    if (!bVar21) {
      uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0xffffffec);
    }
  }
  else {
    uVar18 = *param_2 + 1;
    FUN_01bed93e(param_1,0,uVar18 * 2);
    uVar20 = *param_4;
    uVar10 = uVar20 & 0xf;
    uVar12 = uVar10 + 5;
    if (uVar12 < 0x10) {
      *param_3 = uVar12;
      uVar20 = uVar20 >> 4;
      uVar12 = 1 << uVar12;
      local_3c = uVar10 + 6;
      iVar17 = uVar12 + 1;
      uVar10 = 4;
      uVar13 = 0;
      puVar11 = (uint *)((int)param_4 + (param_5 - 7));
      puVar6 = (uint *)((int)param_4 + (param_5 - 4));
      puVar19 = param_4;
      do {
        uVar7 = (uVar12 * 2 - iVar17) - 1;
        uVar15 = uVar12 - 1 & uVar20;
        if (uVar15 < uVar7) {
          iVar8 = local_3c + -1;
        }
        else {
          uVar15 = uVar12 * 2 - 1 & uVar20;
          if ((int)uVar12 <= (int)uVar15) {
            uVar15 = uVar15 - uVar7;
          }
          iVar8 = local_3c;
        }
        uVar10 = uVar10 + iVar8;
        uVar7 = uVar13 + 1;
        iVar16 = uVar15 - 1;
        iVar8 = iVar16;
        if (-1 < iVar16) {
          iVar8 = -iVar16;
        }
        iVar17 = iVar17 + iVar8;
        *(short *)(param_1 + uVar13 * 2) = (short)iVar16;
        if (iVar17 < (int)uVar12) {
          if (iVar17 < 2) goto LAB_01b80ad8;
          local_3c = 0x20 - LZCOUNT(iVar17);
          uVar12 = 0x80000000 >> LZCOUNT(iVar17);
        }
        if (uVar18 <= uVar7) goto LAB_01b80ad8;
        puVar14 = (uint *)((int)puVar19 + ((int)uVar10 >> 3));
        if ((puVar11 < puVar19) && (puVar6 < puVar14)) {
          uVar10 = ((int)puVar6 - (int)puVar19) * -8 + uVar10 & 0x1f;
          puVar19 = puVar6;
        }
        else {
          uVar10 = uVar10 & 7;
          puVar19 = puVar14;
        }
        uVar20 = *puVar19 >> uVar10;
        uVar13 = uVar7;
        puVar14 = puVar19;
        if (iVar16 == 0) {
          while( true ) {
            uVar13 = ~uVar20;
            bVar4 = (byte)(uVar13 >> 0x18);
            bVar1 = (byte)uVar13;
            bVar2 = (byte)(uVar13 >> 8);
            bVar3 = (byte)(uVar13 >> 0x10);
            uVar13 = (uint)LZCOUNT((uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                    bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                  bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                bVar1 >> 6 & 1) << 1 | bVar1 >> 7) << 0x18 |
                                   (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                    bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                                  bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                                bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x10 |
                                   (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                    bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                                  bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                                bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 8 |
                                   (uint)(byte)((((((((bVar4 & 1) << 1 | (bVar4 & 2) >> 1) << 1 |
                                                    (bVar4 & 4) >> 2) << 1 | (bVar4 & 8) >> 3) << 1
                                                  | (bVar4 & 0x10) >> 4) << 1 | (bVar4 & 0x20) >> 5)
                                                 << 1 | (bVar4 & 0x40) >> 6) << 1 | 1)) >> 1;
            if (uVar13 < 0xc) break;
            uVar7 = uVar7 + 0x24;
            if (puVar11 < puVar19) {
              uVar10 = ((int)puVar11 - (int)puVar19) * -8 + uVar10 & 0x1f;
              puVar19 = (uint *)((int)param_4 + (param_5 - 4));
            }
            else {
              puVar19 = (uint *)((int)puVar19 + 3);
            }
            uVar20 = *puVar19 >> uVar10;
          }
          uVar10 = uVar13 * 2 + uVar10 + 2;
          uVar7 = (uVar20 >> uVar13 * 2 & 3) + (short)uVar13 * 3 + uVar7;
          if (uVar18 <= uVar7) goto LAB_01b80ad8;
          puVar9 = (uint *)((int)puVar19 + ((int)uVar10 >> 3));
          if ((puVar11 < puVar19) &&
             (puVar14 = (uint *)((int)param_4 + (param_5 - 4)), puVar14 < puVar9)) {
            uVar10 = ((int)puVar14 - (int)puVar19) * -8 + uVar10 & 0x1f;
          }
          else {
            uVar10 = uVar10 & 7;
            puVar14 = puVar9;
          }
          uVar20 = *puVar14 >> uVar10;
          uVar13 = uVar7;
        }
        puVar19 = puVar14;
      } while( true );
    }
    uVar22 = CONCAT44(uVar10,0xffffffd4);
  }
  goto LAB_01b808c0;
LAB_01b80ad8:
  if (iVar17 == 1) {
    if (uVar18 < uVar7) {
      uVar22 = CONCAT44(puVar11,0xffffffd0);
      goto LAB_01b808c0;
    }
    if ((int)uVar10 < 0x21) {
      uVar22 = CONCAT44(puVar11,(int)puVar19 + (((int)(uVar10 + 7) >> 3) - (int)param_4));
      *param_2 = uVar7 - 1;
      goto LAB_01b808c0;
    }
  }
  uVar22 = CONCAT44(puVar11,0xffffffec);
LAB_01b808c0:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}

