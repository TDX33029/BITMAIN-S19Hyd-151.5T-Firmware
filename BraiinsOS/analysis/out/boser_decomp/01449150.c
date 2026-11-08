// FUN_01449150 @ 01449150 size=1272 calls_out=3 calls_in=2
// strings: 

void FUN_01449150(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

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
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
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
    uVar11 = 0;
    uVar22 = 1;
    puVar8 = (uint *)(param_1 + uVar17 * 4);
    if (uVar17 < param_2) {
      uVar22 = param_2 - uVar17;
      if (uVar22 < uVar6) {
LAB_01449240:
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
          FUN_014483e4(puVar8,uVar22,param_3,param_4,0,0);
          uVar22 = uVar22 << 1 | 1;
        }
      }
      else {
        if (uVar22 < 2) {
          uVar11 = uVar22;
        }
        else {
          uVar9 = puVar8[1];
          uVar11 = 2;
          if (uVar9 >> 0x18 < *puVar8 >> 0x18) {
            uVar14 = uVar9;
            if (uVar22 != 2) {
              do {
                puVar18 = puVar8 + uVar11;
                if (uVar14 >> 0x18 <= *puVar18 >> 0x18) goto LAB_01449328;
                uVar11 = uVar11 + 1;
                uVar14 = *puVar18;
              } while (uVar22 != uVar11);
              goto LAB_01449324;
            }
            uVar22 = 1;
LAB_01449358:
            puVar18 = (uint *)(param_1 + -4 + uVar11 * 4 + uVar17 * 4);
            puVar12 = puVar8;
            do {
              uVar9 = *puVar18;
              uVar22 = uVar22 - 1;
              *puVar18 = *puVar12;
              *puVar12 = uVar9;
              puVar18 = puVar18 + -1;
              puVar12 = puVar12 + 1;
            } while (uVar22 != 0);
          }
          else {
            uVar14 = uVar9;
            if (uVar22 != 2) {
              do {
                puVar18 = puVar8 + uVar11;
                if (*puVar18 >> 0x18 < uVar14 >> 0x18) goto LAB_01449328;
                uVar11 = uVar11 + 1;
                uVar14 = *puVar18;
              } while (uVar22 != uVar11);
LAB_01449324:
              uVar11 = uVar22;
LAB_01449328:
              if (uVar11 < uVar6) goto LAB_01449240;
              if (uVar9 >> 0x18 < *puVar8 >> 0x18) {
                uVar22 = uVar11 >> 1;
                if (uVar22 != 0) goto LAB_01449358;
                uVar11 = 1;
              }
            }
          }
        }
        uVar22 = uVar11 << 1 | 1;
      }
      uVar9 = uVar17 - (uVar21 >> 1);
      uVar14 = uVar9 + uVar17;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar14;
      uVar15 = (uVar22 >> 1) + uVar17 * 2;
      lVar3 = (ulonglong)uVar15 * (uVar5 & 0xffffffff);
      uVar11 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar9 = iVar4 * uVar15 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar9,uVar17) * (int)uVar5 +
              uVar14 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar9 != 0) {
        uVar11 = LZCOUNT(uVar9);
      }
    }
    if (1 < uVar16) {
      do {
        uVar9 = uVar16 - 1;
        if (abStack_67[uVar16] < uVar11) goto LAB_014495e8;
        uVar14 = local_170[uVar9];
        uVar16 = uVar14 >> 1;
        uVar15 = uVar16 + (uVar21 >> 1);
        if ((param_4 < uVar15) || (((uVar14 | uVar21) & 1) != 0)) {
          puVar18 = (uint *)(param_1 + (uVar17 - uVar15) * 4);
          if ((uVar14 & 1) == 0) {
            FUN_014483e4(puVar18,uVar16,param_3,param_4,LZCOUNT(uVar16 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar21 >> 1;
          if ((uVar21 & 1) == 0) {
            FUN_014483e4(puVar18 + uVar16,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0);
          }
          if (1 < uVar14 && 1 < uVar21) {
            uVar21 = uVar16;
            if (uVar1 < uVar16) {
              uVar21 = uVar1;
            }
            if (uVar21 <= param_4) {
              puVar20 = puVar18 + uVar16;
              puVar12 = puVar18;
              if (uVar1 < uVar16) {
                puVar12 = puVar20;
              }
              FUN_01bed4e2(param_3,puVar12,uVar21 << 2);
              puVar10 = param_3 + uVar21;
              puVar12 = param_3;
              if (uVar1 < uVar16) {
                puVar13 = (uint *)(param_1 + -4 + uVar17 * 4);
                puVar19 = puVar20;
                do {
                  uVar21 = puVar10[-1];
                  uVar16 = puVar19[-1];
                  bVar23 = uVar21 >> 0x18 < uVar16 >> 0x18;
                  if (bVar23) {
                    uVar21 = uVar16;
                  }
                  *puVar13 = uVar21;
                  puVar10 = puVar10 + -1 + bVar23;
                  puVar19 = puVar19 + -1 + !bVar23;
                } while ((puVar19 != puVar18) && (puVar13 = puVar13 + -1, puVar10 != param_3));
              }
              else {
                do {
                  bVar23 = *puVar12 >> 0x18 <= *puVar20 >> 0x18;
                  uVar21 = *puVar12;
                  if (!bVar23) {
                    uVar21 = *puVar20;
                  }
                  puVar19 = puVar18 + 1;
                  *puVar18 = uVar21;
                  puVar12 = puVar12 + bVar23;
                  if (puVar12 == puVar10) break;
                  puVar20 = puVar20 + !bVar23;
                  puVar18 = puVar19;
                } while (puVar20 != puVar8);
              }
              FUN_01bed4e2(puVar19,puVar12,(int)puVar10 - (int)puVar12);
            }
          }
          uVar21 = uVar15 * 2 | 1;
        }
        else {
          uVar21 = uVar15 * 2;
        }
        uVar16 = uVar9;
      } while (1 < uVar9);
      uVar16 = 1;
    }
LAB_014495e8:
    abStack_67[uVar16 + 1] = (byte)uVar11;
    local_170[uVar16] = uVar21;
    if (param_2 <= uVar17) {
      if ((uVar21 & 1) == 0) {
        FUN_014483e4(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar17 = uVar17 + (uVar22 >> 1);
    uVar16 = uVar16 + 1;
    uVar21 = uVar22;
  } while( true );
}

