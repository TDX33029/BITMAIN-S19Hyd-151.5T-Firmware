// FUN_00b6a6c0 @ 00b6a6c0 size=1760 calls_out=3 calls_in=2
// strings: 

void FUN_00b6a6c0(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint *puVar25;
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
  uVar24 = 0;
  uVar21 = 0;
  uVar14 = 1;
  do {
    uVar15 = 0;
    local_18c = 1;
    if (uVar24 < param_2) {
      local_18c = param_2 - uVar24;
      puVar6 = (uint *)(param_1 + uVar24 * 0x38);
      if (local_18c < uVar4) {
LAB_00b6a7c4:
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
          FUN_00b6ada0(puVar6,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar11 = local_18c;
        }
        else {
          uVar15 = puVar6[0xe];
          if (uVar15 < *puVar6) {
            if (local_18c != 2) {
              uVar11 = 2;
              uVar12 = uVar15;
              puVar9 = (uint *)(param_1 + 0x70 + uVar24 * 0x38);
              do {
                if (uVar12 <= *puVar9) goto LAB_00b6a8c8;
                uVar11 = uVar11 + 1;
                uVar12 = *puVar9;
                puVar9 = puVar9 + 0xe;
              } while (local_18c != uVar11);
              goto LAB_00b6a8c4;
            }
            uVar11 = 2;
            uVar15 = 1;
LAB_00b6a8e8:
            iVar10 = param_1 + -0x1c + uVar11 * 0x38;
            iVar5 = uVar24 * 0x38;
            iVar17 = param_1;
            do {
              iVar16 = iVar10 + iVar5;
              puVar19 = (undefined4 *)(iVar17 + iVar5);
              uVar8 = *puVar19;
              iVar17 = iVar17 + 0x38;
              uVar15 = uVar15 - 1;
              *puVar19 = *(undefined4 *)(iVar16 + -0x1c);
              *(undefined4 *)(iVar16 + -0x1c) = uVar8;
              uVar8 = puVar19[1];
              puVar19[1] = *(undefined4 *)(iVar16 + -0x18);
              *(undefined4 *)(iVar16 + -0x18) = uVar8;
              uVar8 = puVar19[2];
              puVar19[2] = *(undefined4 *)(iVar16 + -0x14);
              *(undefined4 *)(iVar16 + -0x14) = uVar8;
              uVar8 = puVar19[3];
              puVar19[3] = *(undefined4 *)(iVar16 + -0x10);
              *(undefined4 *)(iVar16 + -0x10) = uVar8;
              uVar8 = puVar19[4];
              puVar19[4] = *(undefined4 *)(iVar16 + -0xc);
              *(undefined4 *)(iVar16 + -0xc) = uVar8;
              uVar8 = puVar19[5];
              puVar19[5] = *(undefined4 *)(iVar16 + -8);
              *(undefined4 *)(iVar16 + -8) = uVar8;
              uVar8 = puVar19[6];
              puVar19[6] = *(undefined4 *)(iVar16 + -4);
              *(undefined4 *)(iVar16 + -4) = uVar8;
              uVar8 = *(undefined4 *)(iVar10 + iVar5);
              *(undefined4 *)(iVar10 + iVar5) = puVar19[7];
              iVar10 = iVar10 + -0x38;
              puVar19[7] = uVar8;
              uVar8 = *(undefined4 *)(iVar16 + 4);
              *(undefined4 *)(iVar16 + 4) = puVar19[8];
              puVar19[8] = uVar8;
              uVar8 = puVar19[9];
              puVar19[9] = *(undefined4 *)(iVar16 + 8);
              *(undefined4 *)(iVar16 + 8) = uVar8;
              uVar8 = *(undefined4 *)(iVar16 + 0xc);
              *(undefined4 *)(iVar16 + 0xc) = puVar19[10];
              puVar19[10] = uVar8;
              uVar8 = puVar19[0xb];
              puVar19[0xb] = *(undefined4 *)(iVar16 + 0x10);
              *(undefined4 *)(iVar16 + 0x10) = uVar8;
              uVar8 = *(undefined4 *)(iVar16 + 0x14);
              *(undefined4 *)(iVar16 + 0x14) = puVar19[0xc];
              puVar19[0xc] = uVar8;
              uVar8 = puVar19[0xd];
              puVar19[0xd] = *(undefined4 *)(iVar16 + 0x18);
              *(undefined4 *)(iVar16 + 0x18) = uVar8;
            } while (uVar15 != 0);
          }
          else {
            uVar11 = 2;
            if (local_18c != 2) {
              uVar12 = uVar15;
              puVar9 = (uint *)(param_1 + 0x70 + uVar24 * 0x38);
              do {
                if (*puVar9 < uVar12) goto LAB_00b6a8c8;
                uVar11 = uVar11 + 1;
                uVar12 = *puVar9;
                puVar9 = puVar9 + 0xe;
              } while (local_18c != uVar11);
LAB_00b6a8c4:
              uVar11 = local_18c;
LAB_00b6a8c8:
              if (uVar11 < uVar4) goto LAB_00b6a7c4;
              if (uVar15 < *puVar6) {
                uVar15 = uVar11 >> 1;
                if (uVar15 != 0) goto LAB_00b6a8e8;
                uVar11 = 1;
              }
            }
          }
        }
        local_18c = uVar11 << 1 | 1;
      }
      uVar15 = uVar24 - (uVar14 >> 1);
      uVar11 = uVar24 + (local_18c >> 1);
      uVar12 = uVar11 + uVar24;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar12;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar15,uVar24),uVar15 + uVar24);
      uVar11 = (uint)CARRY4(uVar11,uVar24) * (int)uVar2 +
               uVar12 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar15 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar11 != 0) {
        uVar15 = LZCOUNT(uVar11);
      }
    }
    if (uVar21 < 2) {
      abStack_67[uVar21 + 1] = (byte)uVar15;
      local_170[uVar21] = uVar14;
    }
    else {
      do {
        while( true ) {
          uVar11 = uVar21 - 1;
          if (abStack_67[uVar21] < uVar15) goto LAB_00b6ad3c;
          uVar20 = local_170[uVar11];
          uVar12 = uVar20 >> 1;
          uVar18 = uVar12 + (uVar14 >> 1);
          uVar21 = uVar11;
          if ((param_4 < uVar18) || (((uVar20 | uVar14) & 1) != 0)) break;
          uVar14 = uVar18 * 2;
          if (uVar11 < 2) goto LAB_00b6ad38;
        }
        puVar6 = (uint *)(param_1 + (uVar24 - uVar18) * 0x38);
        if ((uVar20 & 1) == 0) {
          FUN_00b6ada0(puVar6,uVar12,param_3,param_4,LZCOUNT(uVar12 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar14 & 1) == 0) {
          FUN_00b6ada0(puVar6 + uVar12 * 0xe,uVar14 >> 1,param_3,param_4,
                       LZCOUNT(uVar14 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar22 = uVar14 >> 1;
        if (1 < uVar20 && 1 < uVar14) {
          uVar14 = uVar12;
          if (uVar22 < uVar12) {
            uVar14 = uVar22;
          }
          if (uVar14 <= param_4) {
            puVar23 = puVar6 + uVar12 * 0xe;
            puVar9 = puVar6;
            if (uVar22 < uVar12) {
              puVar9 = puVar23;
            }
            FUN_016dd1aa(param_3,puVar9,uVar14 * 0x38);
            puVar25 = param_3 + uVar14 * 0xe;
            puVar9 = param_3;
            if (uVar22 < uVar12) {
              puVar7 = (uint *)(param_1 + -0x38 + uVar24 * 0x38);
              do {
                puVar23 = puVar23 + -0xe;
                puVar25 = puVar25 + -0xe;
                bVar26 = *puVar25 < *puVar23;
                puVar13 = puVar25;
                if (bVar26) {
                  puVar13 = puVar23;
                }
                uVar14 = puVar13[1];
                uVar12 = puVar13[2];
                uVar20 = puVar13[3];
                *puVar7 = *puVar13;
                puVar7[1] = uVar14;
                puVar7[2] = uVar12;
                puVar7[3] = uVar20;
                uVar14 = puVar13[5];
                uVar12 = puVar13[6];
                uVar20 = puVar13[7];
                uVar22 = puVar13[8];
                puVar7[4] = puVar13[4];
                puVar7[5] = uVar14;
                puVar7[6] = uVar12;
                puVar7[7] = uVar20;
                puVar7[8] = uVar22;
                uVar14 = puVar13[10];
                uVar12 = puVar13[0xb];
                uVar20 = puVar13[0xc];
                uVar22 = puVar13[0xd];
                puVar7[9] = puVar13[9];
                puVar7[10] = uVar14;
                puVar7[0xb] = uVar12;
                puVar7[0xc] = uVar20;
                puVar7[0xd] = uVar22;
                puVar25 = puVar25 + (uint)bVar26 * 0xe;
                puVar23 = puVar23 + (uint)!bVar26 * 0xe;
              } while ((puVar23 != puVar6) && (puVar7 = puVar7 + -0xe, puVar25 != param_3));
              puVar13 = puVar23;
            }
            else {
              do {
                bVar26 = *puVar9 <= *puVar23;
                puVar7 = puVar9;
                if (!bVar26) {
                  puVar7 = puVar23;
                }
                uVar14 = puVar7[1];
                uVar12 = puVar7[2];
                uVar20 = puVar7[3];
                puVar13 = puVar6 + 0xe;
                *puVar6 = *puVar7;
                puVar6[1] = uVar14;
                puVar6[2] = uVar12;
                puVar6[3] = uVar20;
                uVar14 = puVar7[5];
                uVar12 = puVar7[6];
                uVar20 = puVar7[7];
                uVar22 = puVar7[8];
                puVar6[4] = puVar7[4];
                puVar6[5] = uVar14;
                puVar6[6] = uVar12;
                puVar6[7] = uVar20;
                puVar6[8] = uVar22;
                uVar14 = puVar7[10];
                uVar12 = puVar7[0xb];
                uVar20 = puVar7[0xc];
                uVar22 = puVar7[0xd];
                puVar6[9] = puVar7[9];
                puVar6[10] = uVar14;
                puVar6[0xb] = uVar12;
                puVar6[0xc] = uVar20;
                puVar6[0xd] = uVar22;
                puVar9 = puVar9 + (uint)bVar26 * 0xe;
                if (puVar9 == puVar25) break;
                puVar23 = puVar23 + (uint)!bVar26 * 0xe;
                puVar6 = puVar13;
              } while (puVar23 != (uint *)(param_1 + uVar24 * 0x38));
            }
            FUN_016dd1aa(puVar13,puVar9,(int)puVar25 - (int)puVar9);
          }
        }
        uVar14 = uVar18 * 2 | 1;
      } while (1 < uVar11);
LAB_00b6ad38:
      uVar21 = 1;
LAB_00b6ad3c:
      abStack_67[uVar21 + 1] = (byte)uVar15;
      local_170[uVar21] = uVar14;
    }
    if (param_2 <= uVar24) {
      if ((uVar14 & 1) == 0) {
        FUN_00b6ada0(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar21 = uVar21 + 1;
    uVar24 = uVar24 + (local_18c >> 1);
    uVar14 = local_18c;
  } while( true );
}

