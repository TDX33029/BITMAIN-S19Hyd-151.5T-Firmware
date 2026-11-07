// FUN_00b91d78 @ 00b91d78 size=1544 calls_out=3 calls_in=2
// strings: 

void FUN_00b91d78(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint *puVar25;
  uint uVar26;
  uint *puVar27;
  uint *puVar28;
  bool bVar29;
  ulonglong uVar30;
  uint local_188;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar30 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar30 & 0xffffffff);
  uVar4 = uVar30 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar30 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar30;
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
  uVar16 = 1;
  uVar11 = 0;
  uVar22 = 0;
  do {
    uVar8 = 0;
    bVar7 = 0;
    local_188 = 1;
    if (uVar11 < param_2) {
      local_188 = param_2 - uVar11;
      puVar25 = (uint *)(param_1 + uVar11 * 0x18);
      if (local_188 < uVar5) {
LAB_00b91ea0:
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
          FUN_00b92380(puVar25,local_188,param_3,param_4,0,0);
          local_188 = local_188 << 1 | 1;
        }
      }
      else {
        if (local_188 < 2) {
          uVar26 = local_188;
        }
        else {
          uVar8 = puVar25[6];
          if (uVar8 < *puVar25) {
            if (local_188 != 2) {
              uVar26 = 2;
              uVar13 = uVar8;
              puVar17 = (uint *)(param_1 + 0x30 + uVar11 * 0x18);
              do {
                if (uVar13 <= *puVar17) goto LAB_00b91f90;
                uVar26 = uVar26 + 1;
                uVar13 = *puVar17;
                puVar17 = puVar17 + 6;
              } while (local_188 != uVar26);
              goto LAB_00b91f8c;
            }
            uVar26 = 2;
            uVar8 = 1;
LAB_00b91fac:
            iVar6 = uVar11 * 0x18;
            iVar12 = param_1 + -0xc + uVar26 * 0x18;
            iVar18 = param_1;
            do {
              iVar9 = iVar12 + iVar6;
              puVar20 = (undefined4 *)(iVar18 + iVar6);
              uVar15 = *puVar20;
              iVar18 = iVar18 + 0x18;
              uVar8 = uVar8 - 1;
              *puVar20 = *(undefined4 *)(iVar9 + -0xc);
              *(undefined4 *)(iVar9 + -0xc) = uVar15;
              uVar15 = puVar20[1];
              puVar20[1] = *(undefined4 *)(iVar9 + -8);
              *(undefined4 *)(iVar9 + -8) = uVar15;
              uVar15 = puVar20[2];
              puVar20[2] = *(undefined4 *)(iVar9 + -4);
              *(undefined4 *)(iVar9 + -4) = uVar15;
              uVar15 = *(undefined4 *)(iVar12 + iVar6);
              *(undefined4 *)(iVar12 + iVar6) = puVar20[3];
              iVar12 = iVar12 + -0x18;
              puVar20[3] = uVar15;
              uVar15 = puVar20[4];
              puVar20[4] = *(undefined4 *)(iVar9 + 4);
              *(undefined4 *)(iVar9 + 4) = uVar15;
              uVar15 = *(undefined4 *)(iVar9 + 8);
              *(undefined4 *)(iVar9 + 8) = puVar20[5];
              puVar20[5] = uVar15;
            } while (uVar8 != 0);
          }
          else {
            uVar26 = 2;
            if (local_188 != 2) {
              uVar13 = uVar8;
              puVar17 = (uint *)(param_1 + 0x30 + uVar11 * 0x18);
              do {
                if (*puVar17 < uVar13) goto LAB_00b91f90;
                uVar26 = uVar26 + 1;
                uVar13 = *puVar17;
                puVar17 = puVar17 + 6;
              } while (local_188 != uVar26);
LAB_00b91f8c:
              uVar26 = local_188;
LAB_00b91f90:
              if (uVar26 < uVar5) goto LAB_00b91ea0;
              if (uVar8 < *puVar25) {
                uVar8 = uVar26 >> 1;
                if (uVar8 != 0) goto LAB_00b91fac;
                uVar26 = 1;
              }
            }
          }
        }
        local_188 = uVar26 << 1 | 1;
      }
      uVar8 = uVar11 - (uVar16 >> 1);
      uVar26 = uVar8 + uVar11;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar26;
      uVar13 = (local_188 >> 1) + uVar11 * 2;
      lVar2 = (ulonglong)uVar13 * (uVar4 & 0xffffffff);
      uVar26 = iVar3 * uVar13 + (int)((ulonglong)lVar2 >> 0x20) ^
               (uint)CARRY4(uVar8,uVar11) * (int)uVar4 +
               uVar26 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      if (uVar26 != 0) {
        uVar8 = LZCOUNT(uVar26);
      }
      bVar7 = (byte)uVar8;
      if (uVar22 < 2) goto LAB_00b91e70;
LAB_00b920bc:
      do {
        while( true ) {
          uVar26 = uVar22 - 1;
          if (abStack_67[uVar22] < uVar8) goto LAB_00b92318;
          uVar21 = local_170[uVar26];
          uVar13 = uVar21 >> 1;
          uVar14 = uVar13 + (uVar16 >> 1);
          uVar22 = uVar26;
          if ((param_4 < uVar14) || (((uVar21 | uVar16) & 1) != 0)) break;
          uVar16 = uVar14 * 2;
          if (uVar26 < 2) goto LAB_00b92314;
        }
        puVar25 = (uint *)(param_1 + (uVar11 - uVar14) * 0x18);
        if ((uVar21 & 1) == 0) {
          FUN_00b92380(puVar25,uVar13,param_3,param_4,LZCOUNT(uVar13 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar16 & 1) == 0) {
          FUN_00b92380(puVar25 + uVar13 * 6,uVar16 >> 1,param_3,param_4,
                       LZCOUNT(uVar16 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar19 = uVar16 >> 1;
        if (1 < uVar21 && 1 < uVar16) {
          uVar16 = uVar13;
          if (uVar19 < uVar13) {
            uVar16 = uVar19;
          }
          if (uVar16 <= param_4) {
            puVar17 = puVar25 + uVar13 * 6;
            puVar10 = puVar25;
            if (uVar19 < uVar13) {
              puVar10 = puVar17;
            }
            FUN_016dd1aa(param_3,puVar10,uVar16 * 0x18);
            puVar28 = param_3 + uVar16 * 6;
            puVar10 = param_3;
            if (uVar19 < uVar13) {
              puVar24 = puVar17;
              puVar17 = (uint *)(param_1 + -0x18 + uVar11 * 0x18);
              do {
                puVar28 = puVar28 + -6;
                puVar24 = puVar24 + -6;
                bVar29 = *puVar28 < *puVar24;
                puVar27 = puVar28;
                if (bVar29) {
                  puVar27 = puVar24;
                }
                uVar16 = puVar27[1];
                uVar13 = puVar27[2];
                uVar21 = puVar27[3];
                uVar19 = puVar27[4];
                uVar23 = puVar27[5];
                *puVar17 = *puVar27;
                puVar17[1] = uVar16;
                puVar17[2] = uVar13;
                puVar17[3] = uVar21;
                puVar17[4] = uVar19;
                puVar17[5] = uVar23;
                puVar28 = puVar28 + ((uint)bVar29 | (uint)bVar29 << 1) * 2;
                puVar24 = puVar24 + ((uint)!bVar29 | (uint)!bVar29 << 1) * 2;
              } while ((puVar24 != puVar25) && (puVar17 = puVar17 + -6, puVar28 != param_3));
            }
            else {
              do {
                bVar29 = *puVar10 <= *puVar17;
                puVar27 = puVar10;
                if (!bVar29) {
                  puVar27 = puVar17;
                }
                puVar24 = puVar25 + 6;
                uVar16 = puVar27[1];
                uVar13 = puVar27[2];
                uVar21 = puVar27[3];
                uVar19 = puVar27[4];
                uVar23 = puVar27[5];
                *puVar25 = *puVar27;
                puVar25[1] = uVar16;
                puVar25[2] = uVar13;
                puVar25[3] = uVar21;
                puVar25[4] = uVar19;
                puVar25[5] = uVar23;
                puVar10 = puVar10 + ((uint)bVar29 | (uint)bVar29 << 1) * 2;
                if (puVar10 != puVar28) {
                  puVar17 = puVar17 + ((uint)!bVar29 | (uint)!bVar29 << 1) * 2;
                }
                puVar25 = puVar24;
              } while (puVar10 != puVar28 && puVar17 != (uint *)(param_1 + uVar11 * 0x18));
            }
            FUN_016dd1aa(puVar24,puVar10,(int)puVar28 - (int)puVar10);
          }
        }
        uVar16 = uVar14 * 2 | 1;
      } while (1 < uVar26);
LAB_00b92314:
      uVar22 = 1;
LAB_00b92318:
      abStack_67[uVar22 + 1] = (byte)uVar8;
      local_170[uVar22] = uVar16;
      uVar8 = uVar16;
      uVar16 = local_188;
    }
    else {
      if (1 < uVar22) goto LAB_00b920bc;
LAB_00b91e70:
      abStack_67[uVar22 + 1] = bVar7;
      local_170[uVar22] = uVar16;
      uVar8 = uVar16;
      uVar16 = local_188;
    }
    if (param_2 <= uVar11) {
      if ((uVar8 & 1) == 0) {
        FUN_00b92380(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar22 = uVar22 + 1;
    uVar11 = uVar11 + (uVar16 >> 1);
  } while( true );
}

