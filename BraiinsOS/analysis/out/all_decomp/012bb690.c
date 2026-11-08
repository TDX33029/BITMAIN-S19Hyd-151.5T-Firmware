// FUN_012bb690 @ 012bb690 size=2104 calls_out=4 calls_in=2
// strings: 

void FUN_012bb690(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 *puVar28;
  undefined4 uVar29;
  uint uVar30;
  undefined4 uVar31;
  bool bVar32;
  ulonglong uVar33;
  uint local_194;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar33 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar33 & 0xffffffff);
  uVar2 = uVar33 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar33 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar33;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar23 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar23) + (param_2 >> iVar23) >> 1;
  }
  uVar20 = 0;
  uVar5 = 0;
  uVar30 = 1;
  do {
    uVar27 = 1;
    local_194 = 0;
    if (uVar5 < param_2) {
      iVar23 = param_1 + uVar5 * 0x28;
      uVar27 = param_2 - uVar5;
      if (uVar27 < uVar4) {
LAB_012bb7a8:
        if (param_5 != 0) {
          if (0xf < uVar27) {
            uVar27 = 0x10;
          }
          FUN_012bc70c(iVar23,uVar27,param_3,param_4,0);
          uVar8 = uVar27;
          goto LAB_012bbaa4;
        }
        if (uVar4 <= uVar27) {
          uVar27 = uVar4;
        }
        uVar27 = uVar27 << 1;
      }
      else {
        uVar8 = uVar27;
        if (1 < uVar27) {
          uVar17 = 0;
          uVar13 = 1;
          uVar9 = 1;
          uVar8 = 0;
          if (*(char *)(iVar23 + 0x34) == '\x01') {
            uVar9 = *(undefined4 *)(iVar23 + 0x2c);
            uVar17 = *(uint *)(iVar23 + 0x30);
          }
          if (*(char *)(iVar23 + 0xc) == '\x01') {
            uVar8 = *(uint *)(iVar23 + 8);
            uVar13 = *(undefined4 *)(iVar23 + 4);
          }
          uVar18 = uVar8;
          if (uVar17 < uVar8) {
            uVar18 = uVar17;
          }
          iVar6 = FUN_016dd50a(uVar9,uVar13,uVar18);
          if (iVar6 == 0) {
            iVar6 = uVar17 - uVar8;
          }
          if (iVar6 < 0) {
            if (uVar27 != 2) {
              uVar8 = 2;
              puVar21 = (uint *)(param_1 + 0x30 + uVar5 * 0x28);
              do {
                uVar25 = 0;
                uVar17 = 0;
                bVar32 = (char)puVar21[0xb] == '\x01';
                uVar18 = 1;
                if (bVar32) {
                  uVar18 = puVar21[9];
                }
                uVar11 = 1;
                if (bVar32) {
                  uVar25 = puVar21[10];
                }
                if ((char)puVar21[1] == '\x01') {
                  uVar17 = *puVar21;
                  uVar11 = puVar21[-1];
                }
                uVar16 = uVar17;
                if (uVar25 < uVar17) {
                  uVar16 = uVar25;
                }
                uVar18 = FUN_016dd50a(uVar18,uVar11,uVar16);
                if (uVar18 == 0) {
                  uVar18 = uVar25 - uVar17;
                }
                if (uVar18 < 0x80000000) goto LAB_012bb96c;
                uVar8 = uVar8 + 1;
                puVar21 = puVar21 + 10;
              } while (uVar27 != uVar8);
              goto LAB_012bb968;
            }
            uVar8 = 2;
            uVar27 = 1;
LAB_012bb9a4:
            iVar7 = param_1 + -0x14 + uVar8 * 0x28;
            iVar23 = uVar5 * 0x28;
            iVar6 = param_1;
            do {
              uVar27 = uVar27 - 1;
              iVar22 = iVar7 + iVar23;
              puVar10 = (undefined4 *)(iVar6 + iVar23);
              uVar9 = *puVar10;
              uVar13 = *(undefined4 *)(iVar22 + -8);
              uVar24 = puVar10[3];
              uVar26 = puVar10[4];
              *puVar10 = *(undefined4 *)(iVar22 + -0x14);
              puVar10[3] = uVar13;
              uVar29 = puVar10[2];
              uVar31 = *(undefined4 *)(iVar22 + -0x10);
              *(undefined4 *)(iVar22 + -0x10) = puVar10[1];
              puVar10[4] = *(undefined4 *)(iVar22 + -4);
              *(undefined4 *)(iVar22 + -0x14) = uVar9;
              *(undefined4 *)(iVar22 + -4) = uVar26;
              uVar9 = *(undefined4 *)(iVar7 + iVar23);
              *(undefined4 *)(iVar22 + -8) = uVar24;
              *(undefined4 *)(iVar7 + iVar23) = puVar10[5];
              iVar7 = iVar7 + -0x28;
              puVar10[5] = uVar9;
              uVar9 = puVar10[6];
              puVar10[6] = *(undefined4 *)(iVar22 + 4);
              *(undefined4 *)(iVar22 + 4) = uVar9;
              uVar9 = puVar10[7];
              puVar10[7] = *(undefined4 *)(iVar22 + 8);
              *(undefined4 *)(iVar22 + 8) = uVar9;
              uVar9 = puVar10[8];
              uVar24 = *(undefined4 *)(iVar22 + -0xc);
              puVar10[8] = *(undefined4 *)(iVar22 + 0xc);
              *(undefined4 *)(iVar22 + 0xc) = uVar9;
              uVar9 = puVar10[9];
              uVar13 = *(undefined4 *)(iVar22 + 0x10);
              puVar10[1] = uVar31;
              puVar10[2] = uVar24;
              *(undefined4 *)(iVar22 + -0xc) = uVar29;
              puVar10[9] = uVar13;
              *(undefined4 *)(iVar22 + 0x10) = uVar9;
              iVar6 = iVar6 + 0x28;
            } while (uVar27 != 0);
          }
          else {
            uVar8 = 2;
            if (uVar27 != 2) {
              uVar8 = 2;
              puVar21 = (uint *)(param_1 + 0x30 + uVar5 * 0x28);
              do {
                uVar25 = 0;
                uVar17 = 0;
                bVar32 = (char)puVar21[0xb] == '\x01';
                uVar18 = 1;
                if (bVar32) {
                  uVar18 = puVar21[9];
                }
                uVar11 = 1;
                if (bVar32) {
                  uVar25 = puVar21[10];
                }
                if ((char)puVar21[1] == '\x01') {
                  uVar17 = *puVar21;
                  uVar11 = puVar21[-1];
                }
                uVar16 = uVar17;
                if (uVar25 < uVar17) {
                  uVar16 = uVar25;
                }
                iVar7 = FUN_016dd50a(uVar18,uVar11,uVar16);
                if (iVar7 == 0) {
                  iVar7 = uVar25 - uVar17;
                }
                if (iVar7 < 0) goto LAB_012bb96c;
                uVar8 = uVar8 + 1;
                puVar21 = puVar21 + 10;
              } while (uVar27 != uVar8);
LAB_012bb968:
              uVar8 = uVar27;
LAB_012bb96c:
              if (uVar8 < uVar4) goto LAB_012bb7a8;
              if (iVar6 < 0) {
                uVar27 = uVar8 >> 1;
                if (uVar27 != 0) goto LAB_012bb9a4;
                uVar8 = 1;
              }
            }
          }
        }
LAB_012bbaa4:
        uVar27 = uVar8 << 1 | 1;
      }
      uVar8 = uVar5 - (uVar30 >> 1);
      uVar17 = uVar5 + (uVar27 >> 1);
      uVar18 = uVar17 + uVar5;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar18;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar8,uVar5),uVar8 + uVar5);
      uVar8 = (uint)CARRY4(uVar17,uVar5) * (int)uVar2 +
              uVar18 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
              (uint)((ulonglong)lVar3 >> 0x20);
      local_194 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar8 != 0) {
        local_194 = LZCOUNT(uVar8);
      }
    }
    if (1 < uVar20) {
      do {
        while( true ) {
          uVar8 = uVar20 - 1;
          if (abStack_67[uVar20] < local_194) goto LAB_012bbe58;
          uVar25 = local_170[uVar8];
          uVar17 = uVar25 >> 1;
          uVar18 = uVar17 + (uVar30 >> 1);
          uVar20 = uVar8;
          if ((param_4 < uVar18) || (((uVar25 | uVar30) & 1) != 0)) break;
          uVar30 = uVar18 * 2;
          if (uVar8 < 2) goto LAB_012bbe54;
        }
        puVar10 = (undefined4 *)(param_1 + (uVar5 - uVar18) * 0x28);
        if ((uVar25 & 1) == 0) {
          FUN_012bc70c(puVar10,uVar17,param_3,param_4,LZCOUNT(uVar17 | 1) << 1 ^ 0x3e);
        }
        if ((uVar30 & 1) == 0) {
          FUN_012bc70c(puVar10 + uVar17 * 10,uVar30 >> 1,param_3,param_4,
                       LZCOUNT(uVar30 >> 1 | 1) << 1 ^ 0x3e);
        }
        uVar11 = uVar30 >> 1;
        if (1 < uVar25 && 1 < uVar30) {
          uVar30 = uVar17;
          if (uVar11 < uVar17) {
            uVar30 = uVar11;
          }
          if (uVar30 <= param_4) {
            puVar28 = puVar10 + uVar17 * 10;
            puVar12 = puVar10;
            if (uVar11 < uVar17) {
              puVar12 = puVar28;
            }
            FUN_016dd1aa(param_3,puVar12,uVar30 * 0x28);
            puVar19 = param_3 + uVar30 * 10;
            puVar12 = param_3;
            if (uVar11 < uVar17) {
              puVar15 = (undefined4 *)(param_1 + -0x28 + uVar5 * 0x28);
              do {
                uVar17 = 0;
                uVar30 = 0;
                uVar9 = 1;
                if (*(char *)(puVar19 + -7) == '\x01') {
                  uVar9 = puVar19[-9];
                }
                uVar13 = 1;
                if (*(char *)(puVar19 + -7) == '\x01') {
                  uVar17 = puVar19[-8];
                }
                if (*(char *)(puVar28 + -7) == '\x01') {
                  uVar30 = puVar28[-8];
                  uVar13 = puVar28[-9];
                }
                uVar25 = uVar30;
                if (uVar17 < uVar30) {
                  uVar25 = uVar17;
                }
                uVar25 = FUN_016dd50a(uVar9,uVar13,uVar25);
                if (uVar25 == 0) {
                  uVar25 = uVar17 - uVar30;
                }
                puVar14 = puVar28 + -10;
                if (uVar25 < 0x80000000) {
                  puVar14 = puVar19 + -10;
                }
                uVar9 = puVar14[1];
                uVar13 = puVar14[2];
                uVar24 = puVar14[3];
                uVar26 = puVar14[4];
                *puVar15 = *puVar14;
                puVar15[1] = uVar9;
                puVar15[2] = uVar13;
                puVar15[3] = uVar24;
                puVar15[4] = uVar26;
                uVar9 = puVar14[6];
                uVar13 = puVar14[7];
                uVar24 = puVar14[8];
                uVar26 = puVar14[9];
                puVar15[5] = puVar14[5];
                puVar15[6] = uVar9;
                puVar15[7] = uVar13;
                puVar15[8] = uVar24;
                puVar15[9] = uVar26;
                puVar19 = puVar19 + -10 + (uVar25 >> 0x1f | (uVar25 >> 0x1f) << 2) * 2;
                uVar30 = uVar25 >> 0x1f ^ 1;
                puVar28 = puVar28 + -10 + (uVar30 | uVar30 << 2) * 2;
                puVar14 = puVar28;
              } while ((puVar28 != puVar10) && (puVar15 = puVar15 + -10, puVar19 != param_3));
            }
            else {
              do {
                uVar17 = 0;
                uVar30 = 0;
                uVar9 = 1;
                if (*(char *)(puVar28 + 3) == '\x01') {
                  uVar9 = puVar28[1];
                }
                uVar13 = 1;
                if (*(char *)(puVar28 + 3) == '\x01') {
                  uVar17 = puVar28[2];
                }
                if (*(char *)(puVar12 + 3) == '\x01') {
                  uVar30 = puVar12[2];
                  uVar13 = puVar12[1];
                }
                uVar25 = uVar30;
                if (uVar17 < uVar30) {
                  uVar25 = uVar17;
                }
                uVar25 = FUN_016dd50a(uVar9,uVar13,uVar25);
                if (uVar25 == 0) {
                  uVar25 = uVar17 - uVar30;
                }
                puVar15 = puVar28;
                if (uVar25 < 0x80000000) {
                  puVar15 = puVar12;
                }
                puVar14 = puVar10 + 10;
                uVar9 = puVar15[1];
                uVar13 = puVar15[2];
                uVar24 = puVar15[3];
                uVar26 = puVar15[4];
                *puVar10 = *puVar15;
                puVar10[1] = uVar9;
                puVar10[2] = uVar13;
                puVar10[3] = uVar24;
                puVar10[4] = uVar26;
                uVar9 = puVar15[6];
                uVar13 = puVar15[7];
                uVar24 = puVar15[8];
                uVar26 = puVar15[9];
                uVar30 = uVar25 >> 0x1f ^ 1;
                puVar10[5] = puVar15[5];
                puVar10[6] = uVar9;
                puVar10[7] = uVar13;
                puVar10[8] = uVar24;
                puVar10[9] = uVar26;
                puVar12 = puVar12 + (uVar30 | uVar30 << 2) * 2;
                if (puVar12 == puVar19) break;
                puVar28 = puVar28 + (uVar25 >> 0x1f | (uVar25 >> 0x1f) << 2) * 2;
                puVar10 = puVar14;
              } while (puVar28 != (undefined4 *)(param_1 + uVar5 * 0x28));
            }
            FUN_016dd1aa(puVar14,puVar12,(int)puVar19 - (int)puVar12);
          }
        }
        uVar30 = uVar18 * 2 | 1;
      } while (1 < uVar8);
LAB_012bbe54:
      uVar20 = 1;
    }
LAB_012bbe58:
    abStack_67[uVar20 + 1] = (byte)local_194;
    local_170[uVar20] = uVar30;
    if (param_2 <= uVar5) {
      if ((uVar30 & 1) == 0) {
        FUN_012bc70c(param_1,param_2,param_3,param_4);
        return;
      }
      return;
    }
    uVar20 = uVar20 + 1;
    uVar5 = uVar5 + (uVar27 >> 1);
    uVar30 = uVar27;
  } while( true );
}

