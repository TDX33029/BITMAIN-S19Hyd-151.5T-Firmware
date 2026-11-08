// FUN_01694f24 @ 01694f24 size=1248 calls_out=3 calls_in=2
// strings: 

void FUN_01694f24(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  ulonglong uVar24;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar24 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar24 & 0xffffffff);
  uVar5 = uVar24 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar24 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar24;
  }
  iVar4 = (int)(uVar5 >> 0x20);
  if (param_2 < 0x1001) {
    uVar6 = param_2 - (param_2 >> 1);
    if (0x3f < uVar6) {
      uVar6 = 0x40;
    }
  }
  else {
    uVar6 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar7 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar7) + (param_2 >> iVar7) >> 1;
  }
  uVar17 = 0;
  uVar16 = 0;
  uVar21 = 1;
  do {
    uVar13 = 0;
    uVar22 = 1;
    puVar8 = (uint *)(param_1 + uVar17 * 4);
    if (uVar17 < param_2) {
      uVar22 = param_2 - uVar17;
      if (uVar22 < uVar6) {
LAB_01695018:
        if (param_5 == 0) {
          if (uVar6 <= uVar22) {
            uVar22 = uVar6;
          }
          uVar22 = uVar22 << 1;
        }
        else {
          if (0x1f < uVar22) {
            uVar22 = 0x20;
          }
          FUN_01694964(puVar8,uVar22,param_3,param_4,0,0);
          uVar22 = uVar22 << 1 | 1;
        }
      }
      else {
        if (uVar22 < 2) {
          uVar13 = uVar22;
        }
        else {
          uVar9 = puVar8[1];
          uVar13 = 2;
          if (uVar9 < *puVar8) {
            if (uVar22 != 2) {
              uVar10 = uVar13;
              uVar11 = uVar9;
              do {
                puVar18 = puVar8 + uVar10;
                uVar13 = uVar10;
                if (uVar11 <= *puVar18) break;
                uVar10 = uVar10 + 1;
                uVar13 = uVar22;
                uVar11 = *puVar18;
              } while (uVar22 != uVar10);
              goto LAB_016950fc;
            }
            uVar22 = 1;
LAB_01695118:
            puVar18 = (uint *)(param_1 + -4 + uVar13 * 4 + uVar17 * 4);
            puVar15 = puVar8;
            do {
              uVar9 = *puVar18;
              uVar22 = uVar22 - 1;
              *puVar18 = *puVar15;
              *puVar15 = uVar9;
              puVar18 = puVar18 + -1;
              puVar15 = puVar15 + 1;
            } while (uVar22 != 0);
          }
          else if (uVar22 != 2) {
            uVar10 = uVar13;
            uVar11 = uVar9;
            do {
              puVar18 = puVar8 + uVar10;
              uVar13 = uVar10;
              if (*puVar18 < uVar11) break;
              uVar10 = uVar10 + 1;
              uVar13 = uVar22;
              uVar11 = *puVar18;
            } while (uVar22 != uVar10);
LAB_016950fc:
            if (uVar13 < uVar6) goto LAB_01695018;
            if (uVar9 < *puVar8) {
              uVar22 = uVar13 >> 1;
              if (uVar22 != 0) goto LAB_01695118;
              uVar13 = 1;
            }
          }
        }
        uVar22 = uVar13 << 1 | 1;
      }
      uVar9 = uVar17 - (uVar21 >> 1);
      uVar10 = uVar9 + uVar17;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar10;
      uVar11 = (uVar22 >> 1) + uVar17 * 2;
      lVar3 = (ulonglong)uVar11 * (uVar5 & 0xffffffff);
      uVar13 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar9 = iVar4 * uVar11 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar9,uVar17) * (int)uVar5 +
              uVar10 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar9 != 0) {
        uVar13 = LZCOUNT(uVar9);
      }
    }
    if (1 < uVar16) {
      do {
        uVar9 = uVar16 - 1;
        if (abStack_67[uVar16] < uVar13) goto LAB_016953a4;
        uVar10 = local_170[uVar9];
        uVar16 = uVar10 >> 1;
        uVar11 = uVar16 + (uVar21 >> 1);
        if ((param_4 < uVar11) || (((uVar10 | uVar21) & 1) != 0)) {
          puVar18 = (uint *)(param_1 + (uVar17 - uVar11) * 4);
          if ((uVar10 & 1) == 0) {
            FUN_01694964(puVar18,uVar16,param_3,param_4,LZCOUNT(uVar16 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar21 >> 1;
          if ((uVar21 & 1) == 0) {
            FUN_01694964(puVar18 + uVar16,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0);
          }
          if (1 < uVar10 && 1 < uVar21) {
            uVar21 = uVar16;
            if (uVar1 < uVar16) {
              uVar21 = uVar1;
            }
            if (uVar21 <= param_4) {
              puVar20 = puVar18 + uVar16;
              puVar15 = puVar18;
              if (uVar1 < uVar16) {
                puVar15 = puVar20;
              }
              FUN_01bed4e2(param_3,puVar15,uVar21 << 2);
              puVar12 = param_3 + uVar21;
              puVar15 = param_3;
              if (uVar1 < uVar16) {
                puVar14 = (uint *)(param_1 + -4 + uVar17 * 4);
                puVar19 = puVar20;
                do {
                  uVar21 = puVar19[-1];
                  uVar16 = puVar12[-1];
                  bVar23 = uVar16 < uVar21;
                  if (!bVar23 && uVar16 != uVar21) {
                    uVar21 = uVar16;
                  }
                  *puVar14 = uVar21;
                  puVar12 = puVar12 + -1 + bVar23;
                  puVar19 = puVar19 + -1 + !bVar23;
                } while ((puVar19 != puVar18) && (puVar14 = puVar14 + -1, puVar12 != param_3));
              }
              else {
                do {
                  uVar21 = *puVar20;
                  bVar23 = *puVar15 <= uVar21;
                  if (bVar23) {
                    uVar21 = *puVar15;
                  }
                  puVar19 = puVar18 + 1;
                  *puVar18 = uVar21;
                  puVar15 = puVar15 + bVar23;
                  if (puVar15 == puVar12) break;
                  puVar20 = puVar20 + !bVar23;
                  puVar18 = puVar19;
                } while (puVar20 != puVar8);
              }
              FUN_01bed4e2(puVar19,puVar15,(int)puVar12 - (int)puVar15);
            }
          }
          uVar21 = uVar11 * 2 | 1;
        }
        else {
          uVar21 = uVar11 * 2;
        }
        uVar16 = uVar9;
      } while (1 < uVar9);
      uVar16 = 1;
    }
LAB_016953a4:
    abStack_67[uVar16 + 1] = (byte)uVar13;
    local_170[uVar16] = uVar21;
    if (param_2 <= uVar17) {
      if ((uVar21 & 1) == 0) {
        FUN_01694964(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar17 = uVar17 + (uVar22 >> 1);
    uVar16 = uVar16 + 1;
    uVar21 = uVar22;
  } while( true );
}

