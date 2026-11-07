// FUN_01452178 @ 01452178 size=1372 calls_out=3 calls_in=2
// strings: 

void FUN_01452178(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  ulonglong uVar24;
  uint local_18c;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar24 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar24 & 0xffffffff);
  uVar3 = uVar24 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar24 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar3 = uVar24;
  }
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar5 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar10 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar10) + (param_2 >> iVar10) >> 1;
  }
  uVar21 = 0;
  uVar14 = 0;
  uVar17 = 1;
  do {
    uVar15 = 0;
    puVar6 = (uint *)(param_1 + uVar21 * 8);
    local_18c = 1;
    if (uVar21 < param_2) {
      local_18c = param_2 - uVar21;
      if (local_18c < uVar5) {
LAB_01452270:
        if (param_5 == 0) {
          if (uVar5 <= local_18c) {
            local_18c = uVar5;
          }
          local_18c = local_18c << 1;
        }
        else {
          if (0x1f < local_18c) {
            local_18c = 0x20;
          }
          FUN_0144f9cc(puVar6,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar11 = local_18c;
        }
        else {
          uVar15 = puVar6[2];
          if (uVar15 < *puVar6) {
            if (local_18c != 2) {
              uVar11 = 2;
              uVar12 = uVar15;
              do {
                iVar10 = uVar11 * 2;
                if (uVar12 <= puVar6[iVar10]) goto LAB_01452364;
                uVar11 = uVar11 + 1;
                uVar12 = puVar6[iVar10];
              } while (local_18c != uVar11);
              goto LAB_01452360;
            }
            uVar11 = 2;
            uVar15 = 1;
LAB_01452384:
            iVar10 = uVar21 * 8 + uVar11 * 8;
            iVar18 = 0;
            iVar16 = 0;
            do {
              puVar20 = (uint *)(param_1 + -8 + iVar10 + iVar18 * 8);
              uVar12 = *puVar20;
              puVar8 = puVar6 + iVar16 * 2;
              iVar16 = iVar16 + 1;
              *puVar20 = *puVar8;
              uVar22 = puVar20[1];
              *(uint *)(param_1 + -4 + iVar10 + iVar18 * 8) = puVar6[iVar18 * -2 + 1];
              iVar18 = iVar18 + -1;
              *puVar8 = uVar12;
              puVar8[1] = uVar22;
            } while (-iVar18 != uVar15);
          }
          else {
            uVar11 = 2;
            if (local_18c != 2) {
              uVar12 = uVar15;
              do {
                iVar10 = uVar11 * 2;
                if (puVar6[iVar10] < uVar12) goto LAB_01452364;
                uVar11 = uVar11 + 1;
                uVar12 = puVar6[iVar10];
              } while (local_18c != uVar11);
LAB_01452360:
              uVar11 = local_18c;
LAB_01452364:
              if (uVar11 < uVar5) goto LAB_01452270;
              if (uVar15 < *puVar6) {
                uVar15 = uVar11 >> 1;
                if (uVar15 != 0) goto LAB_01452384;
                uVar11 = 1;
              }
            }
          }
        }
        local_18c = uVar11 << 1 | 1;
      }
      uVar15 = uVar21 - (uVar17 >> 1);
      uVar11 = uVar21 + (local_18c >> 1);
      uVar12 = uVar11 + uVar21;
      lVar2 = (uVar3 & 0xffffffff) * (ulonglong)uVar12;
      lVar4 = uVar3 * CONCAT14(CARRY4(uVar15,uVar21),uVar15 + uVar21);
      uVar11 = (uint)CARRY4(uVar11,uVar21) * (int)uVar3 +
               uVar12 * (int)(uVar3 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) ^
               (uint)((ulonglong)lVar4 >> 0x20);
      uVar15 = LZCOUNT((uint)lVar2 ^ (uint)lVar4) + 0x20;
      if (uVar11 != 0) {
        uVar15 = LZCOUNT(uVar11);
      }
    }
    if (1 < uVar14) {
      do {
        uVar11 = uVar14 - 1;
        if (abStack_67[uVar14] < uVar15) goto LAB_01452674;
        uVar12 = local_170[uVar11];
        uVar14 = uVar12 >> 1;
        uVar22 = uVar14 + (uVar17 >> 1);
        if ((param_4 < uVar22) || (((uVar12 | uVar17) & 1) != 0)) {
          puVar20 = (uint *)(param_1 + (uVar21 - uVar22) * 8);
          if ((uVar12 & 1) == 0) {
            FUN_0144f9cc(puVar20,uVar14,param_3,param_4,LZCOUNT(uVar14 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar17 >> 1;
          if ((uVar17 & 1) == 0) {
            FUN_0144f9cc(puVar20 + uVar14 * 2,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0
                        );
          }
          if (1 < uVar12 && 1 < uVar17) {
            uVar17 = uVar14;
            if (uVar1 < uVar14) {
              uVar17 = uVar1;
            }
            if (uVar17 <= param_4) {
              puVar19 = puVar20 + uVar14 * 2;
              puVar8 = puVar20;
              if (uVar1 < uVar14) {
                puVar8 = puVar19;
              }
              FUN_01bed4e2(param_3,puVar8,uVar17 << 3);
              puVar7 = param_3 + uVar17 * 2;
              puVar8 = param_3;
              if (uVar1 < uVar14) {
                puVar9 = (uint *)(param_1 + -8 + uVar21 * 8);
                do {
                  puVar19 = puVar19 + -2;
                  puVar7 = puVar7 + -2;
                  bVar23 = *puVar7 < *puVar19;
                  puVar13 = puVar7;
                  if (bVar23) {
                    puVar13 = puVar19;
                  }
                  uVar17 = puVar13[1];
                  *puVar9 = *puVar13;
                  puVar9[1] = uVar17;
                  puVar7 = puVar7 + (uint)bVar23 * 2;
                  puVar19 = puVar19 + (uint)!bVar23 * 2;
                } while ((puVar19 != puVar20) && (puVar9 = puVar9 + -2, puVar7 != param_3));
                puVar20 = puVar19;
              }
              else {
                do {
                  bVar23 = *puVar8 <= *puVar19;
                  puVar9 = puVar8;
                  if (!bVar23) {
                    puVar9 = puVar19;
                  }
                  uVar17 = puVar9[1];
                  *puVar20 = *puVar9;
                  puVar20[1] = uVar17;
                  puVar8 = puVar8 + (uint)bVar23 * 2;
                  puVar20 = puVar20 + 2;
                  if (puVar8 == puVar7) break;
                  puVar19 = puVar19 + (uint)!bVar23 * 2;
                } while (puVar19 != puVar6);
              }
              FUN_01bed4e2(puVar20,puVar8,(int)puVar7 - (int)puVar8);
            }
          }
          uVar17 = uVar22 * 2 | 1;
        }
        else {
          uVar17 = uVar22 * 2;
        }
        uVar14 = uVar11;
      } while (1 < uVar11);
      uVar14 = 1;
    }
LAB_01452674:
    abStack_67[uVar14 + 1] = (byte)uVar15;
    local_170[uVar14] = uVar17;
    if (param_2 <= uVar21) {
      if ((uVar17 & 1) == 0) {
        FUN_0144f9cc(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar14 = uVar14 + 1;
    uVar21 = uVar21 + (local_18c >> 1);
    uVar17 = local_18c;
  } while( true );
}

