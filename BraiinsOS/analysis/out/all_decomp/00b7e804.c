// FUN_00b7e804 @ 00b7e804 size=1436 calls_out=3 calls_in=2
// strings: 

void FUN_00b7e804(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

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
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint *puVar18;
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
  uVar19 = 0;
  uVar13 = 0;
  do {
    uVar16 = 0;
    bVar15 = 0;
    puVar6 = (uint *)(param_1 + uVar19 * 0x10);
    local_18c = 1;
    if (uVar19 < param_2) {
      local_18c = param_2 - uVar19;
      if (local_18c < uVar4) {
LAB_00b7e924:
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
          FUN_00b7eda0(puVar6,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar16 = local_18c;
        }
        else {
          uVar24 = puVar6[4];
          uVar16 = 2;
          if (uVar24 < *puVar6) {
            if (local_18c != 2) {
              uVar14 = uVar24;
              do {
                iVar5 = uVar16 * 4;
                if (uVar14 <= puVar6[iVar5]) goto LAB_00b7ea08;
                uVar16 = uVar16 + 1;
                uVar14 = puVar6[iVar5];
              } while (local_18c != uVar16);
              goto LAB_00b7ea04;
            }
            uVar24 = 1;
LAB_00b7ea28:
            puVar10 = (undefined4 *)(param_1 + 8 + uVar19 * 0x10);
            puVar17 = (undefined4 *)(param_1 + -8 + uVar16 * 0x10 + uVar19 * 0x10);
            do {
              uVar20 = puVar10[-2];
              uVar24 = uVar24 - 1;
              puVar10[-2] = puVar17[-2];
              puVar17[-2] = uVar20;
              uVar20 = puVar17[-1];
              puVar17[-1] = puVar10[-1];
              puVar10[-1] = uVar20;
              uVar20 = *puVar10;
              *puVar10 = *puVar17;
              *puVar17 = uVar20;
              uVar20 = puVar17[1];
              puVar17[1] = puVar10[1];
              puVar17 = puVar17 + -4;
              puVar10[1] = uVar20;
              puVar10 = puVar10 + 4;
            } while (uVar24 != 0);
          }
          else if (local_18c != 2) {
            uVar14 = uVar24;
            do {
              iVar5 = uVar16 * 4;
              if (puVar6[iVar5] < uVar14) goto LAB_00b7ea08;
              uVar16 = uVar16 + 1;
              uVar14 = puVar6[iVar5];
            } while (local_18c != uVar16);
LAB_00b7ea04:
            uVar16 = local_18c;
LAB_00b7ea08:
            if (uVar16 < uVar4) goto LAB_00b7e924;
            if (uVar24 < *puVar6) {
              uVar24 = uVar16 >> 1;
              if (uVar24 != 0) goto LAB_00b7ea28;
              uVar16 = 1;
            }
          }
        }
        local_18c = uVar16 << 1 | 1;
      }
      uVar16 = uVar19 - (uVar22 >> 1);
      uVar24 = uVar19 + (local_18c >> 1);
      uVar14 = uVar24 + uVar19;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar14;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar16,uVar19),uVar16 + uVar19);
      uVar24 = (uint)CARRY4(uVar24,uVar19) * (int)uVar2 +
               uVar14 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar16 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar24 != 0) {
        uVar16 = LZCOUNT(uVar24);
      }
      bVar15 = (byte)uVar16;
      if (uVar13 < 2) goto LAB_00b7e900;
LAB_00b7eb08:
      do {
        while( true ) {
          uVar24 = uVar13 - 1;
          if (abStack_67[uVar13] < uVar16) goto LAB_00b7ed3c;
          uVar21 = local_170[uVar24];
          uVar14 = uVar21 >> 1;
          uVar25 = uVar14 + (uVar22 >> 1);
          uVar13 = uVar24;
          if ((param_4 < uVar25) || (((uVar21 | uVar22) & 1) != 0)) break;
          uVar22 = uVar25 * 2;
          if (uVar24 < 2) goto LAB_00b7ed38;
        }
        puVar18 = (uint *)(param_1 + (uVar19 - uVar25) * 0x10);
        if ((uVar21 & 1) == 0) {
          FUN_00b7eda0(puVar18,uVar14,param_3,param_4,LZCOUNT(uVar14 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar22 & 1) == 0) {
          FUN_00b7eda0(puVar18 + uVar14 * 4,uVar22 >> 1,param_3,param_4,
                       LZCOUNT(uVar22 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar23 = uVar22 >> 1;
        if (1 < uVar21 && 1 < uVar22) {
          uVar22 = uVar14;
          if (uVar23 < uVar14) {
            uVar22 = uVar23;
          }
          if (uVar22 <= param_4) {
            puVar11 = puVar18 + uVar14 * 4;
            puVar8 = puVar18;
            if (uVar23 < uVar14) {
              puVar8 = puVar11;
            }
            FUN_016dd1aa(param_3,puVar8,uVar22 << 4);
            puVar7 = param_3 + uVar22 * 4;
            puVar8 = param_3;
            if (uVar23 < uVar14) {
              puVar9 = (uint *)(param_1 + -0x10 + uVar19 * 0x10);
              puVar12 = puVar11;
              do {
                puVar12 = puVar12 + -4;
                puVar7 = puVar7 + -4;
                bVar26 = *puVar7 < *puVar12;
                puVar11 = puVar7;
                if (bVar26) {
                  puVar11 = puVar12;
                }
                uVar22 = *puVar11;
                uVar21 = puVar11[1];
                uVar14 = puVar11[2];
                puVar9[3] = puVar11[3];
                *puVar9 = uVar22;
                puVar9[1] = uVar21;
                puVar7 = puVar7 + (uint)bVar26 * 4;
                puVar9[2] = uVar14;
                puVar12 = puVar12 + (uint)!bVar26 * 4;
                if (puVar12 != puVar18) {
                  puVar9 = puVar9 + -4;
                }
              } while (puVar12 != puVar18 && puVar7 != param_3);
            }
            else {
              do {
                bVar26 = *puVar8 <= *puVar11;
                puVar12 = puVar8;
                if (!bVar26) {
                  puVar12 = puVar11;
                }
                uVar21 = puVar12[1];
                uVar14 = puVar12[2];
                uVar22 = puVar12[3];
                *puVar18 = *puVar12;
                puVar18[1] = uVar21;
                puVar18[3] = uVar22;
                puVar18[2] = uVar14;
                puVar8 = puVar8 + (uint)bVar26 * 4;
                puVar12 = puVar18 + 4;
                if (puVar8 == puVar7) break;
                puVar11 = puVar11 + (uint)!bVar26 * 4;
                puVar18 = puVar12;
              } while (puVar11 != puVar6);
            }
            FUN_016dd1aa(puVar12,puVar8,(int)puVar7 - (int)puVar8);
          }
        }
        uVar22 = uVar25 * 2 | 1;
      } while (1 < uVar24);
LAB_00b7ed38:
      uVar13 = 1;
LAB_00b7ed3c:
      abStack_67[uVar13 + 1] = (byte)uVar16;
      local_170[uVar13] = uVar22;
      uVar16 = uVar22;
      uVar22 = local_18c;
    }
    else {
      if (1 < uVar13) goto LAB_00b7eb08;
LAB_00b7e900:
      abStack_67[uVar13 + 1] = bVar15;
      local_170[uVar13] = uVar22;
      uVar16 = uVar22;
      uVar22 = local_18c;
    }
    if (param_2 <= uVar19) {
      if ((uVar16 & 1) == 0) {
        FUN_00b7eda0(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar13 = uVar13 + 1;
    uVar19 = uVar19 + (uVar22 >> 1);
  } while( true );
}

