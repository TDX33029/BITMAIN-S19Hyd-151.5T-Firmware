// FUN_00b7c4ec @ 00b7c4ec size=1716 calls_out=3 calls_in=2
// strings: 

void FUN_00b7c4ec(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

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
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  uint uVar25;
  uint *puVar26;
  bool bVar27;
  ulonglong uVar28;
  uint local_18c;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar28 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar28 & 0xffffffff);
  uVar2 = uVar28 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar28 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar28;
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
  uVar25 = 0;
  uVar21 = 0;
  uVar13 = 1;
  do {
    uVar14 = 0;
    local_18c = 1;
    if (uVar25 < param_2) {
      local_18c = param_2 - uVar25;
      puVar6 = (uint *)(param_1 + uVar25 * 0x30);
      if (local_18c < uVar4) {
LAB_00b7c5f0:
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
          FUN_00b7cba0(puVar6,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar10 = local_18c;
        }
        else {
          uVar14 = puVar6[0xc];
          if (uVar14 < *puVar6) {
            if (local_18c != 2) {
              uVar10 = 2;
              uVar11 = uVar14;
              puVar8 = (uint *)(param_1 + 0x60 + uVar25 * 0x30);
              do {
                if (uVar11 <= *puVar8) goto LAB_00b7c6f4;
                uVar10 = uVar10 + 1;
                uVar11 = *puVar8;
                puVar8 = puVar8 + 0xc;
              } while (local_18c != uVar10);
              goto LAB_00b7c6f0;
            }
            uVar10 = 2;
            uVar14 = 1;
LAB_00b7c714:
            iVar9 = param_1 + -0x18 + uVar10 * 0x30;
            iVar5 = uVar25 * 0x30;
            iVar16 = param_1;
            do {
              iVar15 = iVar9 + iVar5;
              puVar18 = (undefined4 *)(iVar16 + iVar5);
              uVar7 = *puVar18;
              iVar16 = iVar16 + 0x30;
              uVar14 = uVar14 - 1;
              *puVar18 = *(undefined4 *)(iVar15 + -0x18);
              *(undefined4 *)(iVar15 + -0x18) = uVar7;
              uVar7 = puVar18[1];
              puVar18[1] = *(undefined4 *)(iVar15 + -0x14);
              *(undefined4 *)(iVar15 + -0x14) = uVar7;
              uVar7 = puVar18[2];
              puVar18[2] = *(undefined4 *)(iVar15 + -0x10);
              *(undefined4 *)(iVar15 + -0x10) = uVar7;
              uVar7 = puVar18[3];
              puVar18[3] = *(undefined4 *)(iVar15 + -0xc);
              *(undefined4 *)(iVar15 + -0xc) = uVar7;
              uVar7 = puVar18[4];
              puVar18[4] = *(undefined4 *)(iVar15 + -8);
              *(undefined4 *)(iVar15 + -8) = uVar7;
              uVar7 = puVar18[5];
              puVar18[5] = *(undefined4 *)(iVar15 + -4);
              *(undefined4 *)(iVar15 + -4) = uVar7;
              uVar7 = *(undefined4 *)(iVar9 + iVar5);
              *(undefined4 *)(iVar9 + iVar5) = puVar18[6];
              iVar9 = iVar9 + -0x30;
              puVar18[6] = uVar7;
              uVar7 = puVar18[7];
              puVar18[7] = *(undefined4 *)(iVar15 + 4);
              *(undefined4 *)(iVar15 + 4) = uVar7;
              uVar7 = *(undefined4 *)(iVar15 + 8);
              *(undefined4 *)(iVar15 + 8) = puVar18[8];
              puVar18[8] = uVar7;
              uVar7 = puVar18[9];
              puVar18[9] = *(undefined4 *)(iVar15 + 0xc);
              *(undefined4 *)(iVar15 + 0xc) = uVar7;
              uVar7 = *(undefined4 *)(iVar15 + 0x10);
              *(undefined4 *)(iVar15 + 0x10) = puVar18[10];
              puVar18[10] = uVar7;
              uVar7 = puVar18[0xb];
              puVar18[0xb] = *(undefined4 *)(iVar15 + 0x14);
              *(undefined4 *)(iVar15 + 0x14) = uVar7;
            } while (uVar14 != 0);
          }
          else {
            uVar10 = 2;
            if (local_18c != 2) {
              uVar11 = uVar14;
              puVar8 = (uint *)(param_1 + 0x60 + uVar25 * 0x30);
              do {
                if (*puVar8 < uVar11) goto LAB_00b7c6f4;
                uVar10 = uVar10 + 1;
                uVar11 = *puVar8;
                puVar8 = puVar8 + 0xc;
              } while (local_18c != uVar10);
LAB_00b7c6f0:
              uVar10 = local_18c;
LAB_00b7c6f4:
              if (uVar10 < uVar4) goto LAB_00b7c5f0;
              if (uVar14 < *puVar6) {
                uVar14 = uVar10 >> 1;
                if (uVar14 != 0) goto LAB_00b7c714;
                uVar10 = 1;
              }
            }
          }
        }
        local_18c = uVar10 << 1 | 1;
      }
      uVar14 = uVar25 - (uVar13 >> 1);
      uVar10 = uVar25 + (local_18c >> 1);
      uVar11 = uVar10 + uVar25;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar11;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar14,uVar25),uVar14 + uVar25);
      uVar10 = (uint)CARRY4(uVar10,uVar25) * (int)uVar2 +
               uVar11 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar14 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar10 != 0) {
        uVar14 = LZCOUNT(uVar10);
      }
    }
    if (uVar21 < 2) {
      abStack_67[uVar21 + 1] = (byte)uVar14;
      local_170[uVar21] = uVar13;
    }
    else {
      do {
        while( true ) {
          uVar10 = uVar21 - 1;
          if (abStack_67[uVar21] < uVar14) goto LAB_00b7cb3c;
          uVar20 = local_170[uVar10];
          uVar11 = uVar20 >> 1;
          uVar17 = uVar11 + (uVar13 >> 1);
          uVar21 = uVar10;
          if ((param_4 < uVar17) || (((uVar20 | uVar13) & 1) != 0)) break;
          uVar13 = uVar17 * 2;
          if (uVar10 < 2) goto LAB_00b7cb38;
        }
        puVar6 = (uint *)(param_1 + (uVar25 - uVar17) * 0x30);
        if ((uVar20 & 1) == 0) {
          FUN_00b7cba0(puVar6,uVar11,param_3,param_4,LZCOUNT(uVar11 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar13 & 1) == 0) {
          FUN_00b7cba0(puVar6 + uVar11 * 0xc,uVar13 >> 1,param_3,param_4,
                       LZCOUNT(uVar13 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar19 = uVar13 >> 1;
        if (1 < uVar20 && 1 < uVar13) {
          uVar13 = uVar11;
          if (uVar19 < uVar11) {
            uVar13 = uVar19;
          }
          if (uVar13 <= param_4) {
            puVar23 = puVar6 + uVar11 * 0xc;
            puVar8 = puVar6;
            if (uVar19 < uVar11) {
              puVar8 = puVar23;
            }
            FUN_016dd1aa(param_3,puVar8,uVar13 * 0x30);
            puVar26 = param_3 + uVar13 * 0xc;
            puVar8 = param_3;
            if (uVar19 < uVar11) {
              puVar24 = (uint *)(param_1 + -0x30 + uVar25 * 0x30);
              do {
                puVar23 = puVar23 + -0xc;
                puVar26 = puVar26 + -0xc;
                bVar27 = *puVar26 < *puVar23;
                puVar12 = puVar26;
                if (bVar27) {
                  puVar12 = puVar23;
                }
                uVar13 = puVar12[1];
                uVar11 = puVar12[2];
                uVar20 = puVar12[3];
                uVar19 = puVar12[4];
                uVar22 = puVar12[5];
                *puVar24 = *puVar12;
                puVar24[1] = uVar13;
                puVar24[2] = uVar11;
                puVar24[3] = uVar20;
                puVar24[4] = uVar19;
                puVar24[5] = uVar22;
                uVar13 = puVar12[7];
                uVar11 = puVar12[8];
                uVar20 = puVar12[9];
                uVar19 = puVar12[10];
                uVar22 = puVar12[0xb];
                puVar24[6] = puVar12[6];
                puVar24[7] = uVar13;
                puVar24[8] = uVar11;
                puVar24[9] = uVar20;
                puVar24[10] = uVar19;
                puVar24[0xb] = uVar22;
                puVar26 = puVar26 + ((uint)bVar27 | (uint)bVar27 << 1) * 4;
                puVar23 = puVar23 + ((uint)!bVar27 | (uint)!bVar27 << 1) * 4;
              } while ((puVar23 != puVar6) && (puVar24 = puVar24 + -0xc, puVar26 != param_3));
              puVar12 = puVar23;
            }
            else {
              do {
                bVar27 = *puVar8 <= *puVar23;
                puVar24 = puVar8;
                if (!bVar27) {
                  puVar24 = puVar23;
                }
                puVar12 = puVar6 + 0xc;
                uVar13 = puVar24[1];
                uVar11 = puVar24[2];
                uVar20 = puVar24[3];
                uVar19 = puVar24[4];
                uVar22 = puVar24[5];
                *puVar6 = *puVar24;
                puVar6[1] = uVar13;
                puVar6[2] = uVar11;
                puVar6[3] = uVar20;
                puVar6[4] = uVar19;
                puVar6[5] = uVar22;
                uVar13 = puVar24[7];
                uVar11 = puVar24[8];
                uVar20 = puVar24[9];
                uVar19 = puVar24[10];
                uVar22 = puVar24[0xb];
                puVar6[6] = puVar24[6];
                puVar6[7] = uVar13;
                puVar6[8] = uVar11;
                puVar6[9] = uVar20;
                puVar6[10] = uVar19;
                puVar6[0xb] = uVar22;
                puVar8 = puVar8 + ((uint)bVar27 | (uint)bVar27 << 1) * 4;
                if (puVar8 == puVar26) break;
                puVar23 = puVar23 + ((uint)!bVar27 | (uint)!bVar27 << 1) * 4;
                puVar6 = puVar12;
              } while (puVar23 != (uint *)(param_1 + uVar25 * 0x30));
            }
            FUN_016dd1aa(puVar12,puVar8,(int)puVar26 - (int)puVar8);
          }
        }
        uVar13 = uVar17 * 2 | 1;
      } while (1 < uVar10);
LAB_00b7cb38:
      uVar21 = 1;
LAB_00b7cb3c:
      abStack_67[uVar21 + 1] = (byte)uVar14;
      local_170[uVar21] = uVar13;
    }
    if (param_2 <= uVar25) {
      if ((uVar13 & 1) == 0) {
        FUN_00b7cba0(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar21 = uVar21 + 1;
    uVar25 = uVar25 + (local_18c >> 1);
    uVar13 = local_18c;
  } while( true );
}

