// FUN_00824aec @ 00824aec size=1372 calls_out=3 calls_in=1
// strings: 

void FUN_00824aec(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  byte bVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  ulonglong uVar27;
  uint local_18c;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar27 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar27 & 0xffffffff);
  uVar2 = uVar27 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar27 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar27;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar5 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar5) + (param_2 >> iVar5) >> 1;
  }
  uVar22 = 1;
  uVar15 = 0;
  uVar14 = 0;
  do {
    uVar19 = 0;
    bVar18 = 0;
    puVar6 = (uint *)(param_1 + uVar15 * 8);
    local_18c = 1;
    if (uVar15 < param_2) {
      local_18c = param_2 - uVar15;
      if (local_18c < uVar4) {
LAB_00824c0c:
        if (param_5 == 0) {
          if (uVar4 <= local_18c) {
            local_18c = uVar4;
          }
          local_18c = local_18c << 1;
        }
        else {
          if (0x1f < local_18c) {
            local_18c = 0x20;
          }
          FUN_007e2e84(puVar6,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar19 = local_18c;
        }
        else {
          uVar24 = puVar6[2];
          uVar19 = 2;
          if (uVar24 < *puVar6) {
            if (local_18c != 2) {
              uVar11 = uVar24;
              do {
                iVar5 = uVar19 * 2;
                if (uVar11 <= puVar6[iVar5]) goto LAB_00824cf0;
                uVar19 = uVar19 + 1;
                uVar11 = puVar6[iVar5];
              } while (local_18c != uVar19);
              goto LAB_00824cec;
            }
            uVar24 = 1;
LAB_00824d0c:
            puVar10 = (undefined4 *)(param_1 + 4 + uVar15 * 8);
            puVar16 = (undefined4 *)(param_1 + -4 + uVar19 * 8 + uVar15 * 8);
            do {
              uVar20 = puVar16[-1];
              uVar24 = uVar24 - 1;
              puVar16[-1] = puVar10[-1];
              puVar10[-1] = uVar20;
              uVar20 = *puVar10;
              *puVar10 = *puVar16;
              *puVar16 = uVar20;
              puVar10 = puVar10 + 2;
              puVar16 = puVar16 + -2;
            } while (uVar24 != 0);
          }
          else if (local_18c != 2) {
            uVar11 = uVar24;
            do {
              iVar5 = uVar19 * 2;
              if (puVar6[iVar5] < uVar11) goto LAB_00824cf0;
              uVar19 = uVar19 + 1;
              uVar11 = puVar6[iVar5];
            } while (local_18c != uVar19);
LAB_00824cec:
            uVar19 = local_18c;
LAB_00824cf0:
            if (uVar19 < uVar4) goto LAB_00824c0c;
            if (uVar24 < *puVar6) {
              uVar24 = uVar19 >> 1;
              if (uVar24 != 0) goto LAB_00824d0c;
              uVar19 = 1;
            }
          }
        }
        local_18c = uVar19 << 1 | 1;
      }
      uVar19 = uVar15 - (uVar22 >> 1);
      uVar24 = uVar15 + (local_18c >> 1);
      uVar11 = uVar24 + uVar15;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar11;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar19,uVar15),uVar19 + uVar15);
      uVar24 = (uint)CARRY4(uVar24,uVar15) * (int)uVar2 +
               uVar11 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar19 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar24 != 0) {
        uVar19 = LZCOUNT(uVar24);
      }
      bVar18 = (byte)uVar19;
      if (uVar14 < 2) goto LAB_00824be8;
LAB_00824dc8:
      do {
        while( true ) {
          uVar24 = uVar14 - 1;
          if (abStack_67[uVar14] < uVar19) goto LAB_00824fe4;
          uVar21 = local_170[uVar24];
          uVar11 = uVar21 >> 1;
          uVar25 = uVar11 + (uVar22 >> 1);
          uVar14 = uVar24;
          if ((param_4 < uVar25) || (((uVar21 | uVar22) & 1) != 0)) break;
          uVar22 = uVar25 * 2;
          if (uVar24 < 2) goto LAB_00824fe0;
        }
        puVar17 = (uint *)(param_1 + (uVar15 - uVar25) * 8);
        if ((uVar21 & 1) == 0) {
          FUN_007e2e84(puVar17,uVar11,param_3,param_4,LZCOUNT(uVar11 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar22 & 1) == 0) {
          FUN_007e2e84(puVar17 + uVar11 * 2,uVar22 >> 1,param_3,param_4,
                       LZCOUNT(uVar22 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar23 = uVar22 >> 1;
        if (1 < uVar21 && 1 < uVar22) {
          uVar22 = uVar11;
          if (uVar23 < uVar11) {
            uVar22 = uVar23;
          }
          if (uVar22 <= param_4) {
            puVar12 = puVar17 + uVar11 * 2;
            puVar8 = puVar17;
            if (uVar23 < uVar11) {
              puVar8 = puVar12;
            }
            FUN_016dd1aa(param_3,puVar8,uVar22 << 3);
            puVar7 = param_3 + uVar22 * 2;
            puVar8 = param_3;
            if (uVar23 < uVar11) {
              puVar9 = (uint *)(param_1 + -8 + uVar15 * 8);
              puVar13 = puVar12;
              do {
                puVar13 = puVar13 + -2;
                puVar7 = puVar7 + -2;
                bVar26 = *puVar7 < *puVar13;
                puVar12 = puVar7;
                if (bVar26) {
                  puVar12 = puVar13;
                }
                uVar22 = puVar12[1];
                *puVar9 = *puVar12;
                puVar9[1] = uVar22;
                puVar7 = puVar7 + (uint)bVar26 * 2;
                puVar13 = puVar13 + (uint)!bVar26 * 2;
                if (puVar13 != puVar17) {
                  puVar9 = puVar9 + -2;
                }
              } while (puVar13 != puVar17 && puVar7 != param_3);
            }
            else {
              do {
                bVar26 = *puVar8 <= *puVar12;
                puVar13 = puVar8;
                if (!bVar26) {
                  puVar13 = puVar12;
                }
                uVar22 = puVar13[1];
                *puVar17 = *puVar13;
                puVar17[1] = uVar22;
                puVar8 = puVar8 + (uint)bVar26 * 2;
                puVar13 = puVar17 + 2;
                if (puVar8 == puVar7) break;
                puVar12 = puVar12 + (uint)!bVar26 * 2;
                puVar17 = puVar13;
              } while (puVar12 != puVar6);
            }
            FUN_016dd1aa(puVar13,puVar8,(int)puVar7 - (int)puVar8);
          }
        }
        uVar22 = uVar25 * 2 | 1;
      } while (1 < uVar24);
LAB_00824fe0:
      uVar14 = 1;
LAB_00824fe4:
      abStack_67[uVar14 + 1] = (byte)uVar19;
      local_170[uVar14] = uVar22;
      uVar19 = uVar22;
      uVar22 = local_18c;
    }
    else {
      if (1 < uVar14) goto LAB_00824dc8;
LAB_00824be8:
      abStack_67[uVar14 + 1] = bVar18;
      local_170[uVar14] = uVar22;
      uVar19 = uVar22;
      uVar22 = local_18c;
    }
    if (param_2 <= uVar15) {
      if ((uVar19 & 1) == 0) {
        FUN_007e2e84(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar14 = uVar14 + 1;
    uVar15 = uVar15 + (uVar22 >> 1);
  } while( true );
}

