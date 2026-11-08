// FUN_0094253c @ 0094253c size=1396 calls_out=3 calls_in=2
// strings: 

void FUN_0094253c(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  uint *puVar24;
  uint *puVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  undefined4 uVar29;
  uint *puVar30;
  bool bVar31;
  undefined8 uVar32;
  ulonglong uVar33;
  uint local_188;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar33 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar33 & 0xffffffff);
  uVar3 = uVar33 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar33 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar3 = uVar33;
  }
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
  uVar20 = 0;
  uVar17 = 0;
  uVar19 = 1;
  do {
    uVar28 = 0;
    puVar7 = (uint *)(param_1 + uVar20 * 0x10);
    local_188 = 1;
    if (uVar20 < param_2) {
      local_188 = param_2 - uVar20;
      if (local_188 < uVar5) {
LAB_00942640:
        if (param_5 == 0) {
          if (uVar5 <= local_188) {
            local_188 = uVar5;
          }
          local_188 = local_188 << 1;
        }
        else {
          if (0x1f < local_188) {
            local_188 = 0x20;
          }
          FUN_00974590(puVar7,local_188,param_3,param_4,0,0);
          local_188 = local_188 << 1 | 1;
        }
      }
      else {
        if (local_188 < 2) {
          uVar28 = local_188;
        }
        else {
          uVar28 = 2;
          uVar12 = puVar7[4];
          if (uVar12 < *puVar7) {
            if (local_188 != 2) {
              uVar13 = uVar12;
              do {
                iVar6 = uVar28 * 4;
                if (uVar13 <= puVar7[iVar6]) goto LAB_00942728;
                uVar28 = uVar28 + 1;
                uVar13 = puVar7[iVar6];
              } while (local_188 != uVar28);
              goto LAB_00942724;
            }
            uVar12 = 1;
LAB_00942744:
            iVar11 = param_1 + -0x10 + uVar28 * 0x10;
            iVar16 = param_1 + -8 + uVar28 * 0x10;
            iVar6 = uVar20 * 0x10;
            iVar21 = param_1;
            do {
              puVar22 = (undefined4 *)(iVar21 + iVar6);
              uVar26 = *puVar22;
              puVar18 = (undefined4 *)(iVar11 + iVar6);
              uVar12 = uVar12 - 1;
              uVar32 = *(undefined8 *)(puVar22 + 2);
              uVar9 = puVar18[1];
              uVar23 = puVar18[2];
              uVar29 = puVar18[3];
              *puVar22 = *puVar18;
              puVar22[1] = uVar9;
              puVar22[2] = uVar23;
              puVar22[3] = uVar29;
              puVar8 = (undefined8 *)(iVar16 + iVar6);
              iVar16 = iVar16 + -0x10;
              *(undefined4 *)(iVar11 + iVar6) = uVar26;
              iVar11 = iVar11 + -0x10;
              *puVar8 = uVar32;
              iVar21 = iVar21 + 0x10;
            } while (uVar12 != 0);
          }
          else if (local_188 != 2) {
            uVar13 = uVar12;
            do {
              iVar6 = uVar28 * 4;
              if (puVar7[iVar6] < uVar13) goto LAB_00942728;
              uVar28 = uVar28 + 1;
              uVar13 = puVar7[iVar6];
            } while (local_188 != uVar28);
LAB_00942724:
            uVar28 = local_188;
LAB_00942728:
            if (uVar28 < uVar5) goto LAB_00942640;
            if (uVar12 < *puVar7) {
              uVar12 = uVar28 >> 1;
              if (uVar12 != 0) goto LAB_00942744;
              uVar28 = 1;
            }
          }
        }
        local_188 = uVar28 << 1 | 1;
      }
      uVar28 = uVar20 - (uVar19 >> 1);
      uVar12 = uVar20 + (local_188 >> 1);
      uVar13 = uVar12 + uVar20;
      lVar2 = (uVar3 & 0xffffffff) * (ulonglong)uVar13;
      lVar4 = uVar3 * CONCAT14(CARRY4(uVar28,uVar20),uVar28 + uVar20);
      uVar12 = (uint)CARRY4(uVar12,uVar20) * (int)uVar3 +
               uVar13 * (int)(uVar3 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) ^
               (uint)((ulonglong)lVar4 >> 0x20);
      uVar28 = LZCOUNT((uint)lVar2 ^ (uint)lVar4) + 0x20;
      if (uVar12 != 0) {
        uVar28 = LZCOUNT(uVar12);
      }
    }
    if (1 < uVar17) {
      do {
        uVar12 = uVar17 - 1;
        if (abStack_67[uVar17] < uVar28) goto LAB_00942a50;
        uVar13 = local_170[uVar12];
        uVar17 = uVar13 >> 1;
        uVar27 = uVar17 + (uVar19 >> 1);
        if ((param_4 < uVar27) || (((uVar13 | uVar19) & 1) != 0)) {
          puVar25 = (uint *)(param_1 + (uVar20 - uVar27) * 0x10);
          if ((uVar13 & 1) == 0) {
            FUN_00974590(puVar25,uVar17,param_3,param_4,LZCOUNT(uVar17 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar19 >> 1;
          if ((uVar19 & 1) == 0) {
            FUN_00974590(puVar25 + uVar17 * 4,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0
                        );
          }
          if (1 < uVar13 && 1 < uVar19) {
            uVar19 = uVar17;
            if (uVar1 < uVar17) {
              uVar19 = uVar1;
            }
            if (uVar19 <= param_4) {
              puVar24 = puVar25 + uVar17 * 4;
              puVar10 = puVar25;
              if (uVar1 < uVar17) {
                puVar10 = puVar24;
              }
              FUN_01bed4e2(param_3,puVar10,uVar19 << 4);
              puVar30 = param_3 + uVar19 * 4;
              puVar10 = param_3;
              if (uVar1 < uVar17) {
                puVar15 = (uint *)(param_1 + -0x10 + uVar20 * 0x10);
                do {
                  puVar24 = puVar24 + -4;
                  puVar30 = puVar30 + -4;
                  bVar31 = *puVar30 < *puVar24;
                  puVar14 = puVar30;
                  if (bVar31) {
                    puVar14 = puVar24;
                  }
                  uVar19 = puVar14[1];
                  uVar17 = puVar14[2];
                  uVar13 = puVar14[3];
                  *puVar15 = *puVar14;
                  puVar15[1] = uVar19;
                  puVar15[2] = uVar17;
                  puVar15[3] = uVar13;
                  puVar30 = puVar30 + (uint)bVar31 * 4;
                  puVar24 = puVar24 + (uint)!bVar31 * 4;
                } while ((puVar24 != puVar25) && (puVar15 = puVar15 + -4, puVar30 != param_3));
                puVar14 = puVar24;
              }
              else {
                do {
                  bVar31 = *puVar24 < *puVar10;
                  puVar15 = puVar10;
                  if (bVar31) {
                    puVar15 = puVar24;
                  }
                  uVar19 = puVar15[1];
                  uVar17 = puVar15[2];
                  uVar13 = puVar15[3];
                  puVar14 = puVar25 + 4;
                  *puVar25 = *puVar15;
                  puVar25[1] = uVar19;
                  puVar25[2] = uVar17;
                  puVar25[3] = uVar13;
                  puVar10 = puVar10 + (uint)!bVar31 * 4;
                  if (puVar10 == puVar30) break;
                  puVar24 = puVar24 + (uint)bVar31 * 4;
                  puVar25 = puVar14;
                } while (puVar24 != puVar7);
              }
              FUN_01bed4e2(puVar14,puVar10,(int)puVar30 - (int)puVar10);
            }
          }
          uVar19 = uVar27 * 2 | 1;
        }
        else {
          uVar19 = uVar27 * 2;
        }
        uVar17 = uVar12;
      } while (1 < uVar12);
      uVar17 = 1;
    }
LAB_00942a50:
    abStack_67[uVar17 + 1] = (byte)uVar28;
    local_170[uVar17] = uVar19;
    if (param_2 <= uVar20) {
      if ((uVar19 & 1) == 0) {
        FUN_00974590(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar17 = uVar17 + 1;
    uVar20 = uVar20 + (local_188 >> 1);
    uVar19 = local_188;
  } while( true );
}

