// FUN_010d4160 @ 010d4160 size=1332 calls_out=3 calls_in=2
// strings: 

void FUN_010d4160(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  ulonglong uVar26;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar26 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar26 & 0xffffffff);
  uVar4 = uVar26 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar26 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar26;
  }
  iVar3 = (int)(uVar4 >> 0x20);
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar5 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar6 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar6) + (param_2 >> iVar6) >> 1;
  }
  uVar20 = 1;
  uVar15 = 0;
  uVar14 = 0;
  do {
    uVar10 = 0;
    bVar9 = 0;
    uVar23 = 1;
    puVar7 = (uint *)(param_1 + uVar15 * 4);
    if (uVar15 < param_2) {
      uVar23 = param_2 - uVar15;
      if (uVar23 < uVar5) {
LAB_010d426c:
        if (param_5 == 0) {
          if (uVar5 <= uVar23) {
            uVar23 = uVar5;
          }
          uVar23 = uVar23 << 1;
        }
        else {
          if (0x1f < uVar23) {
            uVar23 = 0x20;
          }
          FUN_010d341c(puVar7,uVar23,param_3,param_4,0,0);
          uVar23 = uVar23 << 1 | 1;
        }
      }
      else {
        if (uVar23 < 2) {
          uVar10 = uVar23;
        }
        else {
          uVar22 = puVar7[1];
          uVar10 = 2;
          if (uVar22 >> 0x18 < *puVar7 >> 0x18) {
            uVar13 = uVar22;
            if (uVar23 != 2) {
              do {
                puVar17 = puVar7 + uVar10;
                if (uVar13 >> 0x18 <= *puVar17 >> 0x18) goto LAB_010d4354;
                uVar10 = uVar10 + 1;
                uVar13 = *puVar17;
              } while (uVar23 != uVar10);
              goto LAB_010d4350;
            }
            uVar23 = 1;
LAB_010d4384:
            puVar17 = (uint *)(param_1 + -4 + uVar10 * 4 + uVar15 * 4);
            puVar11 = puVar7;
            do {
              uVar22 = *puVar17;
              uVar23 = uVar23 - 1;
              *puVar17 = *puVar11;
              *puVar11 = uVar22;
              puVar17 = puVar17 + -1;
              puVar11 = puVar11 + 1;
            } while (uVar23 != 0);
          }
          else {
            uVar13 = uVar22;
            if (uVar23 != 2) {
              do {
                puVar17 = puVar7 + uVar10;
                if (*puVar17 >> 0x18 < uVar13 >> 0x18) goto LAB_010d4354;
                uVar10 = uVar10 + 1;
                uVar13 = *puVar17;
              } while (uVar23 != uVar10);
LAB_010d4350:
              uVar10 = uVar23;
LAB_010d4354:
              if (uVar10 < uVar5) goto LAB_010d426c;
              if (uVar22 >> 0x18 < *puVar7 >> 0x18) {
                uVar23 = uVar10 >> 1;
                if (uVar23 != 0) goto LAB_010d4384;
                uVar10 = 1;
              }
            }
          }
        }
        uVar23 = uVar10 << 1 | 1;
      }
      uVar22 = uVar15 - (uVar20 >> 1);
      uVar13 = uVar22 + uVar15;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar13;
      uVar19 = (uVar23 >> 1) + uVar15 * 2;
      lVar2 = (ulonglong)uVar19 * (uVar4 & 0xffffffff);
      uVar10 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar22 = iVar3 * uVar19 + (int)((ulonglong)lVar2 >> 0x20) ^
               (uint)CARRY4(uVar22,uVar15) * (int)uVar4 +
               uVar13 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar22 != 0) {
        uVar10 = LZCOUNT(uVar22);
      }
      bVar9 = (byte)uVar10;
      if (uVar14 < 2) goto LAB_010d4248;
LAB_010d4420:
      do {
        while( true ) {
          uVar22 = uVar14 - 1;
          if (abStack_67[uVar14] < uVar10) goto LAB_010d462c;
          uVar19 = local_170[uVar22];
          uVar13 = uVar19 >> 1;
          uVar24 = uVar13 + (uVar20 >> 1);
          uVar14 = uVar22;
          if ((param_4 < uVar24) || (((uVar19 | uVar20) & 1) != 0)) break;
          uVar20 = uVar24 * 2;
          if (uVar22 < 2) goto LAB_010d4628;
        }
        puVar17 = (uint *)(param_1 + (uVar15 - uVar24) * 4);
        if ((uVar19 & 1) == 0) {
          FUN_010d341c(puVar17,uVar13,param_3,param_4,LZCOUNT(uVar13 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar20 & 1) == 0) {
          FUN_010d341c(puVar17 + uVar13,uVar20 >> 1,param_3,param_4,
                       LZCOUNT(uVar20 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar21 = uVar20 >> 1;
        if (1 < uVar19 && 1 < uVar20) {
          uVar20 = uVar13;
          if (uVar21 < uVar13) {
            uVar20 = uVar21;
          }
          if (uVar20 <= param_4) {
            puVar18 = puVar17 + uVar13;
            puVar11 = puVar17;
            if (uVar21 < uVar13) {
              puVar11 = puVar18;
            }
            FUN_016dd1aa(param_3,puVar11,uVar20 << 2);
            puVar8 = param_3 + uVar20;
            puVar11 = param_3;
            if (uVar21 < uVar13) {
              puVar12 = (uint *)(param_1 + -4 + uVar15 * 4);
              puVar16 = puVar18;
              do {
                uVar20 = puVar8[-1];
                uVar13 = puVar16[-1];
                bVar25 = uVar20 >> 0x18 < uVar13 >> 0x18;
                if (bVar25) {
                  uVar20 = uVar13;
                }
                *puVar12 = uVar20;
                puVar8 = puVar8 + -1 + bVar25;
                puVar16 = puVar16 + -1 + !bVar25;
                puVar12 = puVar12 + -1;
              } while (puVar16 != puVar17 && puVar8 != param_3);
            }
            else {
              do {
                bVar25 = *puVar11 >> 0x18 <= *puVar18 >> 0x18;
                uVar20 = *puVar11;
                if (!bVar25) {
                  uVar20 = *puVar18;
                }
                puVar16 = puVar17 + 1;
                *puVar17 = uVar20;
                puVar11 = puVar11 + bVar25;
                if (puVar11 == puVar8) break;
                puVar18 = puVar18 + !bVar25;
                puVar17 = puVar16;
              } while (puVar18 != puVar7);
            }
            FUN_016dd1aa(puVar16,puVar11,(int)puVar8 - (int)puVar11);
          }
        }
        uVar20 = uVar24 * 2 | 1;
      } while (1 < uVar22);
LAB_010d4628:
      uVar14 = 1;
LAB_010d462c:
      abStack_67[uVar14 + 1] = (byte)uVar10;
      local_170[uVar14] = uVar20;
      uVar10 = uVar20;
      uVar20 = uVar23;
    }
    else {
      if (1 < uVar14) goto LAB_010d4420;
LAB_010d4248:
      abStack_67[uVar14 + 1] = bVar9;
      local_170[uVar14] = uVar20;
      uVar10 = uVar20;
      uVar20 = uVar23;
    }
    if (param_2 <= uVar15) {
      if ((uVar10 & 1) == 0) {
        FUN_010d341c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar15 = uVar15 + (uVar20 >> 1);
    uVar14 = uVar14 + 1;
  } while( true );
}

