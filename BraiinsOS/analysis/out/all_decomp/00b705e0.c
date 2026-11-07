// FUN_00b705e0 @ 00b705e0 size=1548 calls_out=3 calls_in=2
// strings: 

void FUN_00b705e0(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  byte bVar25;
  uint uVar26;
  uint *puVar27;
  bool bVar28;
  ulonglong uVar29;
  uint local_188;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar29 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar29 & 0xffffffff);
  uVar2 = uVar29 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar29 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar29;
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
  uVar13 = 1;
  uVar16 = 0;
  uVar12 = 0;
  do {
    uVar26 = 0;
    bVar25 = 0;
    puVar6 = (uint *)(param_1 + uVar16 * 0x20);
    local_188 = 1;
    if (uVar16 < param_2) {
      local_188 = param_2 - uVar16;
      if (local_188 < uVar4) {
LAB_00b70700:
        if (param_5 == 0) {
          if (uVar4 <= local_188) {
            local_188 = uVar4;
          }
          local_188 = local_188 << 1;
        }
        else {
          if (0x1f < local_188) {
            local_188 = 0x20;
          }
          FUN_00b70bec(puVar6,local_188,param_3,param_4,0,0);
          local_188 = local_188 << 1 | 1;
        }
      }
      else {
        if (local_188 < 2) {
          uVar26 = local_188;
        }
        else {
          uVar26 = 2;
          uVar23 = puVar6[8];
          if (uVar23 < *puVar6) {
            if (local_188 != 2) {
              uVar15 = uVar23;
              do {
                iVar5 = uVar26 * 8;
                if (uVar15 <= puVar6[iVar5]) goto LAB_00b707e8;
                uVar26 = uVar26 + 1;
                uVar15 = puVar6[iVar5];
              } while (local_188 != uVar26);
              goto LAB_00b707e4;
            }
            uVar23 = 1;
LAB_00b70804:
            iVar9 = param_1 + -0x10 + uVar26 * 0x20;
            iVar5 = uVar16 * 0x20;
            iVar17 = param_1;
            do {
              iVar14 = iVar9 + iVar5;
              puVar18 = (undefined4 *)(iVar17 + iVar5);
              uVar7 = *puVar18;
              iVar17 = iVar17 + 0x20;
              uVar23 = uVar23 - 1;
              *puVar18 = *(undefined4 *)(iVar14 + -0x10);
              *(undefined4 *)(iVar14 + -0x10) = uVar7;
              uVar7 = puVar18[1];
              puVar18[1] = *(undefined4 *)(iVar14 + -0xc);
              *(undefined4 *)(iVar14 + -0xc) = uVar7;
              uVar7 = puVar18[2];
              puVar18[2] = *(undefined4 *)(iVar14 + -8);
              *(undefined4 *)(iVar14 + -8) = uVar7;
              uVar7 = puVar18[3];
              puVar18[3] = *(undefined4 *)(iVar14 + -4);
              *(undefined4 *)(iVar14 + -4) = uVar7;
              uVar7 = *(undefined4 *)(iVar9 + iVar5);
              *(undefined4 *)(iVar9 + iVar5) = puVar18[4];
              iVar9 = iVar9 + -0x20;
              puVar18[4] = uVar7;
              uVar7 = puVar18[5];
              puVar18[5] = *(undefined4 *)(iVar14 + 4);
              *(undefined4 *)(iVar14 + 4) = uVar7;
              uVar7 = *(undefined4 *)(iVar14 + 8);
              *(undefined4 *)(iVar14 + 8) = puVar18[6];
              puVar18[6] = uVar7;
              uVar7 = puVar18[7];
              puVar18[7] = *(undefined4 *)(iVar14 + 0xc);
              *(undefined4 *)(iVar14 + 0xc) = uVar7;
            } while (uVar23 != 0);
          }
          else if (local_188 != 2) {
            uVar15 = uVar23;
            do {
              iVar5 = uVar26 * 8;
              if (puVar6[iVar5] < uVar15) goto LAB_00b707e8;
              uVar26 = uVar26 + 1;
              uVar15 = puVar6[iVar5];
            } while (local_188 != uVar26);
LAB_00b707e4:
            uVar26 = local_188;
LAB_00b707e8:
            if (uVar26 < uVar4) goto LAB_00b70700;
            if (uVar23 < *puVar6) {
              uVar23 = uVar26 >> 1;
              if (uVar23 != 0) goto LAB_00b70804;
              uVar26 = 1;
            }
          }
        }
        local_188 = uVar26 << 1 | 1;
      }
      uVar26 = uVar16 - (uVar13 >> 1);
      uVar23 = uVar16 + (local_188 >> 1);
      uVar15 = uVar23 + uVar16;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar15;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar26,uVar16),uVar26 + uVar16);
      uVar23 = (uint)CARRY4(uVar23,uVar16) * (int)uVar2 +
               uVar15 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar26 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar23 != 0) {
        uVar26 = LZCOUNT(uVar23);
      }
      bVar25 = (byte)uVar26;
      if (uVar12 < 2) goto LAB_00b706dc;
LAB_00b7093c:
      do {
        while( true ) {
          uVar23 = uVar12 - 1;
          if (abStack_67[uVar12] < uVar26) goto LAB_00b70b88;
          uVar20 = local_170[uVar23];
          uVar15 = uVar20 >> 1;
          uVar24 = uVar15 + (uVar13 >> 1);
          uVar12 = uVar23;
          if ((param_4 < uVar24) || (((uVar20 | uVar13) & 1) != 0)) break;
          uVar13 = uVar24 * 2;
          if (uVar23 < 2) goto LAB_00b70b84;
        }
        puVar21 = (uint *)(param_1 + (uVar16 - uVar24) * 0x20);
        if ((uVar20 & 1) == 0) {
          FUN_00b70bec(puVar21,uVar15,param_3,param_4,LZCOUNT(uVar15 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar13 & 1) == 0) {
          FUN_00b70bec(puVar21 + uVar15 * 8,uVar13 >> 1,param_3,param_4,
                       LZCOUNT(uVar13 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar22 = uVar13 >> 1;
        if (1 < uVar20 && 1 < uVar13) {
          uVar13 = uVar15;
          if (uVar22 < uVar15) {
            uVar13 = uVar22;
          }
          if (uVar13 <= param_4) {
            puVar19 = puVar21 + uVar15 * 8;
            puVar8 = puVar21;
            if (uVar22 < uVar15) {
              puVar8 = puVar19;
            }
            FUN_016dd1aa(param_3,puVar8,uVar13 << 5);
            puVar27 = param_3 + uVar13 * 8;
            puVar8 = param_3;
            if (uVar22 < uVar15) {
              puVar11 = (uint *)(param_1 + -0x20 + uVar16 * 0x20);
              do {
                puVar19 = puVar19 + -8;
                puVar27 = puVar27 + -8;
                bVar28 = *puVar27 < *puVar19;
                puVar10 = puVar27;
                if (bVar28) {
                  puVar10 = puVar19;
                }
                uVar13 = puVar10[1];
                uVar15 = puVar10[2];
                uVar20 = puVar10[3];
                *puVar11 = *puVar10;
                puVar11[1] = uVar13;
                puVar11[2] = uVar15;
                puVar11[3] = uVar20;
                uVar13 = puVar10[5];
                uVar15 = puVar10[6];
                uVar20 = puVar10[7];
                puVar11[4] = puVar10[4];
                puVar11[5] = uVar13;
                puVar11[6] = uVar15;
                puVar11[7] = uVar20;
                puVar27 = puVar27 + (uint)bVar28 * 8;
                puVar19 = puVar19 + (uint)!bVar28 * 8;
              } while ((puVar19 != puVar21) && (puVar11 = puVar11 + -8, puVar27 != param_3));
              puVar10 = puVar19;
            }
            else {
              do {
                bVar28 = *puVar19 < *puVar8;
                puVar11 = puVar8;
                if (bVar28) {
                  puVar11 = puVar19;
                }
                uVar13 = puVar11[1];
                uVar15 = puVar11[2];
                uVar20 = puVar11[3];
                puVar10 = puVar21 + 8;
                *puVar21 = *puVar11;
                puVar21[1] = uVar13;
                puVar21[2] = uVar15;
                puVar21[3] = uVar20;
                uVar13 = puVar11[5];
                uVar15 = puVar11[6];
                uVar20 = puVar11[7];
                puVar21[4] = puVar11[4];
                puVar21[5] = uVar13;
                puVar21[6] = uVar15;
                puVar21[7] = uVar20;
                puVar8 = puVar8 + (uint)!bVar28 * 8;
                if (puVar8 == puVar27) break;
                puVar19 = puVar19 + (uint)bVar28 * 8;
                puVar21 = puVar10;
              } while (puVar19 != puVar6);
            }
            FUN_016dd1aa(puVar10,puVar8,(int)puVar27 - (int)puVar8);
          }
        }
        uVar13 = uVar24 * 2 | 1;
      } while (1 < uVar23);
LAB_00b70b84:
      uVar12 = 1;
LAB_00b70b88:
      abStack_67[uVar12 + 1] = (byte)uVar26;
      local_170[uVar12] = uVar13;
      uVar26 = uVar13;
      uVar13 = local_188;
    }
    else {
      if (1 < uVar12) goto LAB_00b7093c;
LAB_00b706dc:
      abStack_67[uVar12 + 1] = bVar25;
      local_170[uVar12] = uVar13;
      uVar26 = uVar13;
      uVar13 = local_188;
    }
    if (param_2 <= uVar16) {
      if ((uVar26 & 1) == 0) {
        FUN_00b70bec(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar12 = uVar12 + 1;
    uVar16 = uVar16 + (uVar13 >> 1);
  } while( true );
}

