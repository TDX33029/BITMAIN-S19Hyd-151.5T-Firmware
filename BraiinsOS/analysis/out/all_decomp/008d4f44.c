// FUN_008d4f44 @ 008d4f44 size=1484 calls_out=3 calls_in=2
// strings: 

void FUN_008d4f44(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  bool bVar29;
  ulonglong uVar30;
  uint local_188;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar30 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar30 & 0xffffffff);
  uVar2 = uVar30 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar30 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar30;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar13 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar13) + (param_2 >> iVar13) >> 1;
  }
  uVar24 = 0;
  uVar16 = 0;
  uVar21 = 1;
LAB_008d5020:
  uVar8 = 0;
  puVar5 = (undefined4 *)(param_1 + uVar24 * 0x10);
  local_188 = 1;
  if (uVar24 < param_2) {
    local_188 = param_2 - uVar24;
    if (uVar4 <= local_188) {
      uVar8 = local_188;
      if (1 < local_188) {
        uVar9 = puVar5[7];
        if ((uint)puVar5[3] <= uVar9) {
          uVar8 = 2;
          if (local_188 != 2) {
            iVar13 = 0;
            uVar10 = uVar9;
            do {
              uVar8 = *(uint *)(param_1 + 0x2c + uVar24 * 0x10 + iVar13 * 0x10);
              if (uVar8 < uVar10) goto LAB_008d5168;
              iVar13 = iVar13 + 1;
              uVar10 = uVar8;
              uVar8 = local_188;
            } while ((param_2 - 2) - uVar24 != iVar13);
            goto joined_r0x008d5178;
          }
          goto LAB_008d51f4;
        }
        if (local_188 != 2) {
          iVar13 = 0;
          uVar10 = uVar9;
          do {
            uVar20 = *(uint *)(param_1 + 0x2c + uVar24 * 0x10 + iVar13 * 0x10);
            if (uVar10 <= uVar20) goto LAB_008d5168;
            iVar13 = iVar13 + 1;
            uVar10 = uVar20;
          } while ((param_2 - 2) - uVar24 != iVar13);
          goto joined_r0x008d5178;
        }
        uVar8 = 2;
        uVar9 = 1;
        goto LAB_008d518c;
      }
      goto LAB_008d51f4;
    }
    goto LAB_008d5050;
  }
  goto LAB_008d525c;
LAB_008d5168:
  uVar8 = iVar13 + 2;
joined_r0x008d5178:
  if (uVar8 < uVar4) {
LAB_008d5050:
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
      FUN_008ba57c(puVar5,local_188,param_3,param_4,0,0);
      local_188 = local_188 << 1 | 1;
    }
  }
  else {
    if (uVar9 < (uint)puVar5[3]) {
      uVar9 = uVar8 >> 1;
      if (uVar9 == 0) {
        uVar8 = 1;
      }
      else {
LAB_008d518c:
        puVar18 = (undefined4 *)(param_1 + 8 + uVar24 * 0x10);
        puVar14 = (undefined4 *)(param_1 + -8 + uVar8 * 0x10 + uVar24 * 0x10);
        do {
          uVar26 = puVar18[-2];
          uVar25 = puVar18[-1];
          uVar9 = uVar9 - 1;
          uVar15 = puVar14[-1];
          uVar17 = *puVar14;
          uVar19 = puVar14[1];
          uVar22 = *puVar18;
          uVar28 = puVar18[1];
          puVar18[-2] = puVar14[-2];
          puVar14[-2] = uVar26;
          puVar18[-1] = uVar15;
          puVar14[-1] = uVar25;
          *puVar18 = uVar17;
          puVar18[1] = uVar19;
          puVar18 = puVar18 + 4;
          *puVar14 = uVar22;
          puVar14[1] = uVar28;
          puVar14 = puVar14 + -4;
        } while (uVar9 != 0);
      }
    }
LAB_008d51f4:
    local_188 = uVar8 << 1 | 1;
  }
  uVar8 = uVar24 - (uVar21 >> 1);
  uVar9 = uVar24 + (local_188 >> 1);
  uVar10 = uVar9 + uVar24;
  lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar10;
  lVar3 = uVar2 * CONCAT14(CARRY4(uVar8,uVar24),uVar8 + uVar24);
  uVar9 = (uint)CARRY4(uVar9,uVar24) * (int)uVar2 +
          uVar10 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
          (uint)((ulonglong)lVar3 >> 0x20);
  uVar8 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
  if (uVar9 != 0) {
    uVar8 = LZCOUNT(uVar9);
  }
LAB_008d525c:
  if (1 < uVar16) {
    do {
      while( true ) {
        uVar9 = uVar16 - 1;
        if (abStack_67[uVar16] < uVar8) goto LAB_008d54ac;
        uVar20 = local_170[uVar9];
        uVar10 = uVar20 >> 1;
        uVar27 = uVar10 + (uVar21 >> 1);
        uVar16 = uVar9;
        if ((uVar27 <= param_4) && (((uVar20 | uVar21) & 1) == 0)) break;
        puVar18 = (undefined4 *)(param_1 + (uVar24 - uVar27) * 0x10);
        if ((uVar20 & 1) == 0) {
          FUN_008ba57c(puVar18,uVar10,param_3,param_4,LZCOUNT(uVar10 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar21 & 1) == 0) {
          FUN_008ba57c(puVar18 + uVar10 * 4,uVar21 >> 1,param_3,param_4,
                       LZCOUNT(uVar21 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar23 = uVar21 >> 1;
        if (1 < uVar20 && 1 < uVar21) {
          uVar21 = uVar10;
          if (uVar23 < uVar10) {
            uVar21 = uVar23;
          }
          if (uVar21 <= param_4) {
            puVar11 = puVar18 + uVar10 * 4;
            puVar14 = puVar18;
            if (uVar23 < uVar10) {
              puVar14 = puVar11;
            }
            FUN_016dd1aa(param_3,puVar14,uVar21 << 4);
            puVar6 = param_3 + uVar21 * 4;
            puVar14 = param_3;
            if (uVar23 < uVar10) {
              puVar7 = (undefined4 *)(param_1 + -0x10 + uVar24 * 0x10);
              puVar12 = puVar11;
              do {
                bVar29 = (uint)puVar6[-1] < (uint)puVar12[-1];
                puVar11 = puVar6 + -4;
                if (bVar29) {
                  puVar11 = puVar12 + -4;
                }
                uVar15 = *puVar11;
                uVar19 = puVar11[1];
                uVar17 = puVar11[2];
                puVar7[3] = puVar11[3];
                *puVar7 = uVar15;
                puVar7[1] = uVar19;
                puVar6 = puVar6 + -4 + (uint)bVar29 * 4;
                puVar7[2] = uVar17;
                puVar12 = puVar12 + -4 + (uint)!bVar29 * 4;
                if (puVar12 != puVar18) {
                  puVar7 = puVar7 + -4;
                }
              } while (puVar12 != puVar18 && puVar6 != param_3);
            }
            else {
              do {
                bVar29 = (uint)puVar14[3] <= (uint)puVar11[3];
                puVar12 = puVar14;
                if (!bVar29) {
                  puVar12 = puVar11;
                }
                uVar19 = puVar12[1];
                uVar17 = puVar12[2];
                uVar15 = puVar12[3];
                *puVar18 = *puVar12;
                puVar18[1] = uVar19;
                puVar18[3] = uVar15;
                puVar18[2] = uVar17;
                puVar14 = puVar14 + (uint)bVar29 * 4;
                puVar12 = puVar18 + 4;
                if (puVar14 == puVar6) break;
                puVar11 = puVar11 + (uint)!bVar29 * 4;
                puVar18 = puVar12;
              } while (puVar11 != puVar5);
            }
            FUN_016dd1aa(puVar12,puVar14,(int)puVar6 - (int)puVar14);
          }
        }
        uVar21 = uVar27 * 2 | 1;
        if (uVar9 < 2) goto LAB_008d54a0;
      }
      uVar21 = uVar27 * 2;
    } while (1 < uVar9);
LAB_008d54a0:
    uVar16 = 1;
  }
LAB_008d54ac:
  abStack_67[uVar16 + 1] = (byte)uVar8;
  local_170[uVar16] = uVar21;
  if (param_2 <= uVar24) {
    if ((uVar21 & 1) == 0) {
      FUN_008ba57c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
    }
    return;
  }
  uVar16 = uVar16 + 1;
  uVar24 = uVar24 + (local_188 >> 1);
  uVar21 = local_188;
  goto LAB_008d5020;
}

