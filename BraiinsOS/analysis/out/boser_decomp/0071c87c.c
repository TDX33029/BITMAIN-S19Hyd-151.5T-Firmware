// FUN_0071c87c @ 0071c87c size=1540 calls_out=3 calls_in=2
// strings: 

void FUN_0071c87c(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 *puVar30;
  bool bVar31;
  ulonglong uVar32;
  uint local_190;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar32 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar32 & 0xffffffff);
  uVar2 = uVar32 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar32 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar32;
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
  uVar10 = 0;
  uVar24 = 0;
  uVar20 = 1;
  do {
    uVar14 = 0;
    local_190 = 1;
    if (uVar10 < param_2) {
      local_190 = param_2 - uVar10;
      iVar5 = param_1 + uVar10 * 0x18;
      if (local_190 < uVar4) {
LAB_0071c984:
        if (param_5 == 0) {
          if (uVar4 <= local_190) {
            local_190 = uVar4;
          }
          local_190 = local_190 << 1;
        }
        else {
          if (0x1f < local_190) {
            local_190 = 0x20;
          }
          FUN_0072be74(iVar5,local_190,param_3,param_4,0,0);
          local_190 = local_190 << 1 | 1;
        }
      }
      else {
        if (local_190 < 2) {
          uVar22 = local_190;
        }
        else {
          uVar13 = *(uint *)(iVar5 + 0x20);
          uVar14 = *(uint *)(iVar5 + 0xc);
          uVar19 = *(uint *)(iVar5 + 0x24);
          if (uVar14 < uVar19 || uVar19 - uVar14 < (uint)(*(uint *)(iVar5 + 8) <= uVar13)) {
            uVar22 = 2;
            if (local_190 != 2) {
              puVar15 = (uint *)(param_1 + 0x38 + uVar10 * 0x18);
              uVar16 = uVar13;
              uVar17 = uVar19;
              do {
                uVar11 = *puVar15;
                uVar8 = puVar15[1];
                if (uVar8 <= uVar17 && (uint)(uVar16 <= uVar11) <= uVar8 - uVar17)
                goto LAB_0071cab8;
                uVar22 = uVar22 + 1;
                puVar15 = puVar15 + 6;
                uVar16 = uVar11;
                uVar17 = uVar8;
              } while (local_190 != uVar22);
              goto LAB_0071cab4;
            }
          }
          else if (local_190 == 2) {
            uVar22 = 2;
            uVar14 = 1;
LAB_0071cae0:
            uVar13 = 0;
            iVar12 = param_1 + -0x18 + uVar10 * 0x18 + uVar22 * 0x18;
            do {
              iVar18 = 0;
              do {
                uVar21 = *(undefined4 *)(iVar5 + iVar18 * -4);
                *(undefined4 *)(iVar5 + iVar18 * -4) = *(undefined4 *)(iVar12 + iVar18 * -4);
                *(undefined4 *)(iVar12 + iVar18 * -4) = uVar21;
                bVar31 = iVar18 != -5;
                iVar18 = iVar18 + -1;
              } while (bVar31);
              uVar13 = uVar13 + 1;
              iVar5 = iVar5 + 0x18;
              iVar12 = iVar12 + -0x18;
            } while (uVar13 != uVar14);
          }
          else {
            uVar22 = 2;
            puVar15 = (uint *)(param_1 + 0x38 + uVar10 * 0x18);
            uVar16 = uVar13;
            uVar17 = uVar19;
            do {
              uVar11 = *puVar15;
              uVar8 = puVar15[1];
              if (uVar17 < uVar8 || uVar8 - uVar17 < (uint)(uVar16 <= uVar11)) goto LAB_0071cab8;
              uVar22 = uVar22 + 1;
              puVar15 = puVar15 + 6;
              uVar16 = uVar11;
              uVar17 = uVar8;
            } while (local_190 != uVar22);
LAB_0071cab4:
            uVar22 = local_190;
LAB_0071cab8:
            if (uVar22 < uVar4) goto LAB_0071c984;
            if (uVar19 <= uVar14 && (uint)(*(uint *)(iVar5 + 8) <= uVar13) <= uVar19 - uVar14) {
              uVar14 = uVar22 >> 1;
              if (uVar14 != 0) goto LAB_0071cae0;
              uVar22 = 1;
            }
          }
        }
        local_190 = uVar22 << 1 | 1;
      }
      uVar14 = uVar10 - (uVar20 >> 1);
      uVar13 = uVar10 + (local_190 >> 1);
      uVar19 = uVar13 + uVar10;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar19;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar14,uVar10),uVar14 + uVar10);
      uVar13 = (uint)CARRY4(uVar13,uVar10) * (int)uVar2 +
               uVar19 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar14 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar13 != 0) {
        uVar14 = LZCOUNT(uVar13);
      }
    }
    if (1 < uVar24) {
      do {
        uVar13 = uVar24 - 1;
        if (abStack_67[uVar24] < uVar14) goto LAB_0071ce20;
        uVar22 = local_170[uVar13];
        uVar24 = uVar22 >> 1;
        uVar19 = uVar24 + (uVar20 >> 1);
        if ((param_4 < uVar19) || (((uVar22 | uVar20) & 1) != 0)) {
          puVar26 = (undefined4 *)(param_1 + (uVar10 - uVar19) * 0x18);
          if ((uVar22 & 1) == 0) {
            FUN_0072be74(puVar26,uVar24,param_3,param_4,LZCOUNT(uVar24 | 1) << 1 ^ 0x3e,0);
          }
          uVar16 = uVar20 >> 1;
          if ((uVar20 & 1) == 0) {
            FUN_0072be74(puVar26 + uVar24 * 6,uVar16,param_3,param_4,LZCOUNT(uVar16 | 1) << 1 ^ 0x3e
                         ,0);
          }
          if (1 < uVar22 && 1 < uVar20) {
            uVar20 = uVar24;
            if (uVar16 < uVar24) {
              uVar20 = uVar16;
            }
            if (uVar20 <= param_4) {
              puVar6 = puVar26 + uVar24 * 6;
              puVar9 = puVar26;
              if (uVar16 < uVar24) {
                puVar9 = puVar6;
              }
              FUN_01bed4e2(param_3,puVar9,uVar20 * 0x18);
              puVar30 = param_3 + uVar20 * 6;
              puVar9 = param_3;
              if (uVar16 < uVar24) {
                puVar7 = (undefined4 *)(param_1 + -0x18 + uVar10 * 0x18);
                puVar27 = puVar6;
                do {
                  uVar20 = puVar27[-3];
                  uVar24 = puVar30[-3];
                  bVar31 = uVar24 - uVar20 < (uint)((uint)puVar27[-4] <= (uint)puVar30[-4]);
                  uVar22 = (uint)(uVar20 < uVar24 || bVar31);
                  uVar20 = (uint)(uVar20 >= uVar24 && !bVar31);
                  puVar6 = puVar30 + -6;
                  if (uVar20 != 0) {
                    puVar6 = puVar27 + -6;
                  }
                  uVar21 = puVar6[1];
                  uVar23 = puVar6[2];
                  uVar25 = puVar6[3];
                  uVar28 = puVar6[4];
                  uVar29 = puVar6[5];
                  puVar30 = puVar30 + -6 + (uVar20 | uVar20 << 1) * 2;
                  *puVar7 = *puVar6;
                  puVar7[1] = uVar21;
                  puVar7[2] = uVar23;
                  puVar7[3] = uVar25;
                  puVar7[4] = uVar28;
                  puVar7[5] = uVar29;
                  puVar27 = puVar27 + -6 + (uVar22 | uVar22 << 1) * 2;
                } while ((puVar27 != puVar26) && (puVar7 = puVar7 + -6, puVar30 != param_3));
              }
              else {
                do {
                  uVar20 = puVar9[3];
                  uVar24 = puVar6[3];
                  bVar31 = uVar24 - uVar20 < (uint)((uint)puVar9[2] <= (uint)puVar6[2]);
                  uVar22 = (uint)(uVar20 < uVar24 || bVar31);
                  uVar20 = (uint)(uVar20 >= uVar24 && !bVar31);
                  puVar27 = puVar26 + 6;
                  puVar7 = puVar9;
                  if (uVar20 != 0) {
                    puVar7 = puVar6;
                  }
                  uVar21 = puVar7[1];
                  uVar23 = puVar7[2];
                  uVar25 = puVar7[3];
                  uVar28 = puVar7[4];
                  uVar29 = puVar7[5];
                  *puVar26 = *puVar7;
                  puVar26[1] = uVar21;
                  puVar26[2] = uVar23;
                  puVar26[3] = uVar25;
                  puVar26[4] = uVar28;
                  puVar26[5] = uVar29;
                  puVar7 = (undefined4 *)(uVar22 | uVar22 << 1);
                  puVar9 = puVar9 + (int)puVar7 * 2;
                  if (puVar9 != puVar30) {
                    puVar6 = puVar6 + (uVar20 | uVar20 << 1) * 2;
                    puVar7 = (undefined4 *)(param_1 + uVar10 * 0x18);
                  }
                  puVar26 = puVar27;
                } while (puVar9 != puVar30 && puVar6 != puVar7);
              }
              FUN_01bed4e2(puVar27,puVar9,(int)puVar30 - (int)puVar9);
            }
          }
          uVar20 = uVar19 * 2 | 1;
        }
        else {
          uVar20 = uVar19 * 2;
        }
        uVar24 = uVar13;
      } while (1 < uVar13);
      uVar24 = 1;
    }
LAB_0071ce20:
    abStack_67[uVar24 + 1] = (byte)uVar14;
    local_170[uVar24] = uVar20;
    if (param_2 <= uVar10) {
      if ((uVar20 & 1) == 0) {
        FUN_0072be74(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar24 = uVar24 + 1;
    uVar10 = uVar10 + (local_190 >> 1);
    uVar20 = local_190;
  } while( true );
}

