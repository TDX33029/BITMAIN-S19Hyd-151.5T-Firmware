// FUN_00b72668 @ 00b72668 size=1744 calls_out=3 calls_in=2
// strings: 

void FUN_00b72668(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined4 *puVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  uint *puVar29;
  bool bVar30;
  bool bVar31;
  ulonglong uVar32;
  uint local_18c;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar32 = FUN_01846088(0,0x40000000,param_2,0);
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
  uVar26 = 0;
  uVar23 = 0;
  uVar10 = 1;
  do {
    uVar15 = 0;
    bVar14 = 0;
    local_18c = 1;
    if (uVar26 < param_2) {
      local_18c = param_2 - uVar26;
      puVar6 = (uint *)(param_1 + uVar26 * 0x18);
      if (local_18c < uVar4) {
LAB_00b72778:
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
          FUN_00b72d38(puVar6,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar13 = local_18c;
        }
        else {
          uVar15 = puVar6[6];
          uVar12 = puVar6[7];
          bVar30 = *puVar6 <= uVar15;
          if (uVar15 == *puVar6) {
            bVar30 = puVar6[1] <= uVar12;
          }
          if (bVar30) {
            uVar13 = 2;
            if (local_18c != 2) {
              puVar16 = (uint *)(param_1 + 0x34 + uVar26 * 0x18);
              do {
                uVar21 = *puVar16;
                uVar18 = puVar16[-1];
                bVar31 = uVar15 <= uVar18;
                if (uVar18 == uVar15) {
                  bVar31 = uVar12 <= uVar21;
                }
                if (!bVar31) goto LAB_00b72b94;
                uVar13 = uVar13 + 1;
                puVar16 = puVar16 + 6;
                uVar15 = uVar18;
                uVar12 = uVar21;
              } while (local_18c != uVar13);
              goto LAB_00b72b90;
            }
          }
          else if (local_18c == 2) {
            uVar13 = 2;
            uVar15 = 1;
LAB_00b72bc0:
            iVar5 = uVar26 * 0x18;
            iVar11 = param_1 + -0xc + uVar13 * 0x18;
            iVar20 = param_1;
            do {
              iVar9 = iVar11 + iVar5;
              puVar22 = (undefined4 *)(iVar20 + iVar5);
              uVar17 = *puVar22;
              iVar20 = iVar20 + 0x18;
              uVar15 = uVar15 - 1;
              *puVar22 = *(undefined4 *)(iVar9 + -0xc);
              *(undefined4 *)(iVar9 + -0xc) = uVar17;
              uVar17 = puVar22[1];
              puVar22[1] = *(undefined4 *)(iVar9 + -8);
              *(undefined4 *)(iVar9 + -8) = uVar17;
              uVar17 = puVar22[2];
              puVar22[2] = *(undefined4 *)(iVar9 + -4);
              *(undefined4 *)(iVar9 + -4) = uVar17;
              uVar17 = *(undefined4 *)(iVar11 + iVar5);
              *(undefined4 *)(iVar11 + iVar5) = puVar22[3];
              iVar11 = iVar11 + -0x18;
              puVar22[3] = uVar17;
              uVar17 = puVar22[4];
              puVar22[4] = *(undefined4 *)(iVar9 + 4);
              *(undefined4 *)(iVar9 + 4) = uVar17;
              uVar17 = *(undefined4 *)(iVar9 + 8);
              *(undefined4 *)(iVar9 + 8) = puVar22[5];
              puVar22[5] = uVar17;
            } while (uVar15 != 0);
          }
          else {
            uVar13 = 2;
            puVar16 = (uint *)(param_1 + 0x34 + uVar26 * 0x18);
            do {
              uVar21 = *puVar16;
              uVar18 = puVar16[-1];
              bVar31 = uVar15 <= uVar18;
              if (uVar18 == uVar15) {
                bVar31 = uVar12 <= uVar21;
              }
              if (bVar31) goto LAB_00b72b94;
              uVar13 = uVar13 + 1;
              puVar16 = puVar16 + 6;
              uVar15 = uVar18;
              uVar12 = uVar21;
            } while (local_18c != uVar13);
LAB_00b72b90:
            uVar13 = local_18c;
LAB_00b72b94:
            if (uVar13 < uVar4) goto LAB_00b72778;
            if (!bVar30) {
              uVar15 = uVar13 >> 1;
              if (uVar15 != 0) goto LAB_00b72bc0;
              uVar13 = 1;
            }
          }
        }
        local_18c = uVar13 << 1 | 1;
      }
      uVar15 = uVar26 - (uVar10 >> 1);
      uVar12 = uVar26 + (local_18c >> 1);
      uVar13 = uVar12 + uVar26;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar13;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar15,uVar26),uVar15 + uVar26);
      uVar12 = (uint)CARRY4(uVar12,uVar26) * (int)uVar2 +
               uVar13 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar15 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar12 != 0) {
        uVar15 = LZCOUNT(uVar12);
      }
      bVar14 = (byte)uVar15;
      if (uVar23 < 2) goto LAB_00b72cd8;
LAB_00b727c4:
      do {
        while( true ) {
          uVar12 = uVar23 - 1;
          if (abStack_67[uVar23] < uVar15) goto LAB_00b72a6c;
          uVar21 = local_170[uVar12];
          uVar13 = uVar21 >> 1;
          uVar18 = uVar13 + (uVar10 >> 1);
          uVar23 = uVar12;
          if ((uVar18 <= param_4) && (((uVar21 | uVar10) & 1) == 0)) break;
          puVar6 = (uint *)(param_1 + (uVar26 - uVar18) * 0x18);
          if ((uVar21 & 1) == 0) {
            FUN_00b72d38(puVar6,uVar13,param_3,param_4,LZCOUNT(uVar13 | 1) << 1 ^ 0x3e,0);
          }
          uVar19 = uVar10 >> 1;
          if ((uVar10 & 1) == 0) {
            FUN_00b72d38(puVar6 + uVar13 * 6,uVar19,param_3,param_4,LZCOUNT(uVar19 | 1) << 1 ^ 0x3e,
                         0);
          }
          if (1 < uVar21 && 1 < uVar10) {
            uVar10 = uVar13;
            if (uVar19 < uVar13) {
              uVar10 = uVar19;
            }
            if (uVar10 <= param_4) {
              puVar16 = puVar6 + uVar13 * 6;
              puVar8 = puVar6;
              if (uVar19 < uVar13) {
                puVar8 = puVar16;
              }
              FUN_016dd1aa(param_3,puVar8,uVar10 * 0x18);
              puVar27 = param_3 + uVar10 * 6;
              puVar8 = param_3;
              if (uVar19 < uVar13) {
                puVar25 = puVar16;
                puVar16 = (uint *)(param_1 + -0x18 + uVar26 * 0x18);
                do {
                  puVar29 = puVar27 + -6;
                  puVar7 = puVar25 + -6;
                  bVar30 = *puVar7 <= *puVar29;
                  if (*puVar29 == *puVar7) {
                    bVar30 = puVar25[-5] <= puVar27[-5];
                  }
                  uVar10 = (uint)!bVar30;
                  puVar27 = puVar29;
                  if (uVar10 != 0) {
                    puVar27 = puVar7;
                  }
                  uVar13 = puVar27[1];
                  uVar21 = puVar27[2];
                  uVar19 = puVar27[3];
                  uVar24 = puVar27[4];
                  uVar28 = puVar27[5];
                  *puVar16 = *puVar27;
                  puVar16[1] = uVar13;
                  puVar16[2] = uVar21;
                  puVar16[3] = uVar19;
                  puVar16[4] = uVar24;
                  puVar16[5] = uVar28;
                  puVar27 = puVar29 + (uVar10 | uVar10 << 1) * 2;
                  puVar25 = puVar7 + (uVar10 ^ 1 | (uVar10 ^ 1) << 1) * 2;
                } while ((puVar25 != puVar6) && (puVar16 = puVar16 + -6, puVar27 != param_3));
              }
              else {
                do {
                  bVar30 = *puVar8 <= *puVar16;
                  if (*puVar16 == *puVar8) {
                    bVar30 = puVar8[1] <= puVar16[1];
                  }
                  uVar10 = (uint)!bVar30;
                  puVar7 = puVar8;
                  if (uVar10 != 0) {
                    puVar7 = puVar16;
                  }
                  uVar13 = puVar7[1];
                  uVar21 = puVar7[2];
                  uVar19 = puVar7[3];
                  uVar24 = puVar7[4];
                  uVar28 = puVar7[5];
                  puVar25 = puVar6 + 6;
                  *puVar6 = *puVar7;
                  puVar6[1] = uVar13;
                  puVar6[2] = uVar21;
                  puVar6[3] = uVar19;
                  puVar6[4] = uVar24;
                  puVar6[5] = uVar28;
                  puVar7 = (uint *)(uVar10 ^ 1 | (uVar10 ^ 1) << 1);
                  puVar8 = puVar8 + (int)puVar7 * 2;
                  if (puVar8 != puVar27) {
                    puVar16 = puVar16 + (uVar10 | uVar10 << 1) * 2;
                    puVar7 = (uint *)(param_1 + uVar26 * 0x18);
                  }
                  puVar6 = puVar25;
                } while (puVar8 != puVar27 && puVar16 != puVar7);
              }
              FUN_016dd1aa(puVar25,puVar8,(int)puVar27 - (int)puVar8);
            }
          }
          uVar10 = uVar18 * 2 | 1;
          if (uVar12 < 2) goto LAB_00b72a68;
        }
        uVar10 = uVar18 * 2;
      } while (1 < uVar12);
LAB_00b72a68:
      uVar23 = 1;
LAB_00b72a6c:
      abStack_67[uVar23 + 1] = (byte)uVar15;
      local_170[uVar23] = uVar10;
      uVar15 = uVar10;
      uVar10 = local_18c;
    }
    else {
      if (1 < uVar23) goto LAB_00b727c4;
LAB_00b72cd8:
      abStack_67[uVar23 + 1] = bVar14;
      local_170[uVar23] = uVar10;
      uVar15 = uVar10;
      uVar10 = local_18c;
    }
    if (param_2 <= uVar26) {
      if ((uVar15 & 1) == 0) {
        FUN_00b72d38(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar23 = uVar23 + 1;
    uVar26 = uVar26 + (uVar10 >> 1);
  } while( true );
}

