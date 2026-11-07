// FUN_012baadc @ 012baadc size=2544 calls_out=7 calls_in=2
// strings: 

void FUN_012baadc(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint *puVar24;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  uint *puVar32;
  uint *puVar33;
  int iVar34;
  undefined4 uVar35;
  uint uVar36;
  int iVar37;
  uint *puVar38;
  uint uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  ulonglong uVar42;
  uint local_1b4;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar42 = FUN_01846088(0,0x40000000,param_2,0);
  lVar3 = (ulonglong)param_2 * (uVar42 & 0xffffffff);
  uVar6 = uVar42 + 1;
  if ((int)lVar3 == 0 &&
      (int)(uVar42 >> 0x20) * param_2 + (int)((ulonglong)lVar3 >> 0x20) == 0x40000000) {
    uVar6 = uVar42;
  }
  iVar5 = (int)(uVar6 >> 0x20);
  if (param_2 < 0x1001) {
    local_1b4 = param_2 - (param_2 >> 1);
    if (0x3f < local_1b4) {
      local_1b4 = 0x40;
    }
  }
  else {
    uVar29 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar23 = (uVar29 & 1) + (uVar29 >> 1);
    local_1b4 = (1 << iVar23) + (param_2 >> iVar23) >> 1;
  }
  uVar30 = 0;
  uVar36 = 0;
  uVar29 = 1;
  do {
    uVar39 = 0;
    uVar13 = 1;
    if (uVar30 < param_2) {
      uVar13 = param_2 - uVar30;
      iVar23 = param_1 + uVar30 * 0x50;
      if (uVar13 < local_1b4) {
LAB_012babec:
        if (param_5 == 0) {
          if (local_1b4 <= uVar13) {
            uVar13 = local_1b4;
          }
          uVar13 = uVar13 << 1;
        }
        else {
          if (0xf < uVar13) {
            uVar13 = 0x10;
          }
          FUN_012bd08c(iVar23,uVar13,param_3,param_4,0);
          uVar13 = uVar13 << 1 | 1;
        }
      }
      else {
        if (uVar13 < 2) {
          uVar39 = uVar13;
        }
        else {
          iVar37 = FUN_012bb508(iVar23 + 0x50,iVar23);
          if (iVar37 == 0) {
            uVar39 = 2;
            if (uVar13 != 2) {
              uVar39 = 2;
              iVar21 = param_1 + 0x50 + uVar30 * 0x50;
              do {
                iVar21 = iVar21 + 0x50;
                iVar15 = FUN_012bb508(iVar21);
                if (iVar15 != 0) goto LAB_012bacfc;
                uVar39 = uVar39 + 1;
              } while (uVar13 != uVar39);
              goto LAB_012bacf8;
            }
          }
          else if (uVar13 == 2) {
            uVar39 = 2;
            uVar13 = 1;
LAB_012bad30:
            iVar21 = param_1 + -0x28 + uVar39 * 0x50;
            iVar23 = uVar30 * 0x50;
            iVar37 = param_1;
            do {
              iVar15 = iVar21 + iVar23;
              puVar20 = (undefined4 *)(iVar37 + iVar23);
              uVar31 = *puVar20;
              uVar10 = *(undefined4 *)(iVar15 + -0x24);
              uVar26 = *(undefined4 *)(iVar15 + -0x20);
              uVar28 = *(undefined4 *)(iVar15 + -0x1c);
              *puVar20 = *(undefined4 *)(iVar15 + -0x28);
              uVar35 = puVar20[2];
              uVar40 = puVar20[3];
              uVar41 = puVar20[4];
              *(undefined4 *)(iVar15 + -0x24) = puVar20[1];
              uVar19 = *(undefined4 *)(iVar15 + -0x18);
              puVar20[1] = uVar10;
              puVar20[4] = uVar19;
              uVar19 = puVar20[5];
              puVar20[5] = *(undefined4 *)(iVar15 + -0x14);
              *(undefined4 *)(iVar15 + -0x14) = uVar19;
              uVar19 = puVar20[6];
              puVar20[6] = *(undefined4 *)(iVar15 + -0x10);
              *(undefined4 *)(iVar15 + -0x10) = uVar19;
              uVar19 = puVar20[7];
              puVar20[7] = *(undefined4 *)(iVar15 + -0xc);
              *(undefined4 *)(iVar15 + -0xc) = uVar19;
              uVar19 = puVar20[8];
              puVar20[8] = *(undefined4 *)(iVar15 + -8);
              *(undefined4 *)(iVar15 + -8) = uVar19;
              uVar19 = puVar20[9];
              puVar20[9] = *(undefined4 *)(iVar15 + -4);
              *(undefined4 *)(iVar15 + -4) = uVar19;
              uVar19 = *(undefined4 *)(iVar21 + iVar23);
              *(undefined4 *)(iVar21 + iVar23) = puVar20[10];
              iVar21 = iVar21 + -0x50;
              uVar10 = *(undefined4 *)(iVar15 + 4);
              puVar20[10] = uVar19;
              uVar19 = puVar20[0xb];
              puVar20[0xb] = uVar10;
              *(undefined4 *)(iVar15 + 4) = uVar19;
              uVar19 = puVar20[0xc];
              puVar20[0xc] = *(undefined4 *)(iVar15 + 8);
              *(undefined4 *)(iVar15 + 8) = uVar19;
              uVar19 = puVar20[0xd];
              puVar20[0xd] = *(undefined4 *)(iVar15 + 0xc);
              *(undefined4 *)(iVar15 + 0xc) = uVar19;
              uVar19 = puVar20[0xe];
              puVar20[0xe] = *(undefined4 *)(iVar15 + 0x10);
              *(undefined4 *)(iVar15 + 0x10) = uVar19;
              uVar19 = puVar20[0xf];
              puVar20[0xf] = *(undefined4 *)(iVar15 + 0x14);
              *(undefined4 *)(iVar15 + 0x14) = uVar19;
              uVar19 = puVar20[0x10];
              puVar20[0x10] = *(undefined4 *)(iVar15 + 0x18);
              *(undefined4 *)(iVar15 + 0x18) = uVar19;
              uVar19 = puVar20[0x11];
              puVar20[0x11] = *(undefined4 *)(iVar15 + 0x1c);
              *(undefined4 *)(iVar15 + 0x1c) = uVar19;
              uVar19 = puVar20[0x12];
              puVar20[0x12] = *(undefined4 *)(iVar15 + 0x20);
              *(undefined4 *)(iVar15 + 0x20) = uVar19;
              uVar19 = puVar20[0x13];
              puVar20[0x13] = *(undefined4 *)(iVar15 + 0x24);
              puVar20[2] = uVar26;
              uVar13 = uVar13 - 1;
              *(undefined4 *)(iVar15 + -0x20) = uVar35;
              puVar20[3] = uVar28;
              *(undefined4 *)(iVar15 + -0x28) = uVar31;
              *(undefined4 *)(iVar15 + -0x1c) = uVar40;
              *(undefined4 *)(iVar15 + -0x18) = uVar41;
              *(undefined4 *)(iVar15 + 0x24) = uVar19;
              iVar37 = iVar37 + 0x50;
            } while (uVar13 != 0);
          }
          else {
            uVar39 = 2;
            iVar21 = param_1 + 0x50 + uVar30 * 0x50;
            do {
              iVar21 = iVar21 + 0x50;
              iVar15 = FUN_012bb508(iVar21);
              if (iVar15 == 0) goto LAB_012bacfc;
              uVar39 = uVar39 + 1;
            } while (uVar13 != uVar39);
LAB_012bacf8:
            uVar39 = uVar13;
LAB_012bacfc:
            if (uVar39 < local_1b4) goto LAB_012babec;
            if (iVar37 != 0) {
              uVar13 = uVar39 >> 1;
              if (uVar13 != 0) goto LAB_012bad30;
              uVar39 = 1;
            }
          }
        }
        uVar13 = uVar39 << 1 | 1;
      }
      uVar7 = uVar30 - (uVar29 >> 1);
      uVar8 = uVar7 + uVar30;
      lVar3 = (uVar6 & 0xffffffff) * (ulonglong)uVar8;
      uVar18 = (uVar13 >> 1) + uVar30 * 2;
      lVar4 = (ulonglong)uVar18 * (uVar6 & 0xffffffff);
      uVar39 = LZCOUNT((uint)lVar4 ^ (uint)lVar3) + 0x20;
      uVar7 = iVar5 * uVar18 + (int)((ulonglong)lVar4 >> 0x20) ^
              (uint)CARRY4(uVar7,uVar30) * (int)uVar6 +
              uVar8 * iVar5 + (int)((ulonglong)lVar3 >> 0x20);
      if (uVar7 != 0) {
        uVar39 = LZCOUNT(uVar7);
      }
    }
    if (1 < uVar36) {
      puVar9 = (uint *)(param_1 + uVar30 * 0x50);
      do {
        while( true ) {
          uVar7 = uVar36 - 1;
          if (abStack_67[uVar36] < uVar39) goto LAB_012bb438;
          uVar18 = local_170[uVar7];
          uVar8 = uVar18 >> 1;
          uVar27 = uVar8 + (uVar29 >> 1);
          uVar36 = uVar7;
          if ((param_4 < uVar27) || (((uVar18 | uVar29) & 1) != 0)) break;
          uVar29 = uVar27 * 2;
          if (uVar7 < 2) goto LAB_012bb42c;
        }
        puVar38 = (uint *)(param_1 + (uVar30 - uVar27) * 0x50);
        if ((uVar18 & 1) == 0) {
          FUN_012bd08c(puVar38,uVar8,param_3,param_4,LZCOUNT(uVar8 | 1) << 1 ^ 0x3e);
        }
        if ((uVar29 & 1) == 0) {
          FUN_012bd08c(puVar38 + uVar8 * 0x14,uVar29 >> 1,param_3,param_4,
                       LZCOUNT(uVar29 >> 1 | 1) << 1 ^ 0x3e);
        }
        uVar22 = uVar29 >> 1;
        if (1 < uVar18 && 1 < uVar29) {
          uVar29 = uVar8;
          if (uVar22 < uVar8) {
            uVar29 = uVar22;
          }
          if (uVar29 <= param_4) {
            puVar17 = puVar38 + uVar8 * 0x14;
            puVar14 = puVar38;
            if (uVar22 < uVar8) {
              puVar14 = puVar17;
            }
            FUN_016dd1aa(param_3,puVar14,uVar29 * 0x50);
            puVar33 = param_3 + uVar29 * 0x14;
            puVar14 = param_3;
            if (uVar22 < uVar8) {
              puVar12 = puVar9;
              do {
                uVar18 = puVar33[-0xe];
                uVar8 = puVar33[-0xd];
                uVar29 = uVar8;
                if (uVar18 < uVar8) {
LAB_012bb4a8:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(0,uVar29,uVar18,&DAT_0188f948);
                }
                uVar18 = puVar17[-0xe];
                uVar29 = puVar17[-0xd];
                if (uVar18 < uVar29) goto LAB_012bb4a8;
                puVar24 = puVar33 + -0x14;
                puVar32 = puVar17 + -0x14;
                if (uVar8 == uVar29) {
                  iVar37 = 0;
                  uVar18 = puVar33[-0xf];
                  uVar29 = puVar17[-0xf];
                  iVar23 = uVar8 + 1;
                  do {
                    iVar23 = iVar23 + -1;
                    if (iVar23 == 0) {
                      uVar18 = 0;
                      uVar22 = 0;
                      uVar8 = 0;
                      uVar29 = 0;
                      if ((*puVar24 & 1) != 0) {
                        uVar18 = puVar33[-0x12];
                        uVar22 = puVar33[-0x11];
                      }
                      uVar16 = 0;
                      if ((*puVar32 & 1) != 0) {
                        uVar8 = puVar17[-0x12];
                        uVar16 = puVar17[-0x11];
                      }
                      if ((int)(uVar22 - (uVar16 + (uVar18 < uVar8))) < 0 !=
                          (SBORROW4(uVar22,uVar16) !=
                          SBORROW4(uVar22 - uVar16,(uint)(uVar18 < uVar8)))) {
                        uVar29 = 1;
                      }
                      goto LAB_012bb138;
                    }
                    iVar34 = uVar18 + iVar37;
                    iVar25 = uVar29 + iVar37;
                    uVar10 = 1;
                    iVar21 = 0;
                    cVar1 = *(char *)(iVar34 + 0x1c);
                    iVar15 = 0;
                    cVar2 = *(char *)(iVar25 + 0x1c);
                    uVar19 = 1;
                    if (cVar1 != '\0') {
                      iVar11 = uVar18 + iVar37;
                      iVar21 = *(int *)(iVar11 + 0x18);
                      uVar10 = *(undefined4 *)(iVar11 + 0x14);
                    }
                    if (cVar2 == '\x01') {
                      iVar15 = uVar29 + iVar37;
                      uVar19 = *(undefined4 *)(iVar15 + 0x14);
                      iVar15 = *(int *)(iVar15 + 0x18);
                    }
                    if (iVar21 != iVar15) break;
                    iVar37 = iVar37 + 0x28;
                    iVar21 = thunk_FUN_016dd50a(uVar10,uVar19,iVar21);
                  } while (iVar21 == 0);
                  uVar8 = 0;
                  uVar19 = 1;
                  uVar10 = 1;
                  uVar18 = 0;
                  if (cVar1 != '\0') {
                    uVar19 = *(undefined4 *)(iVar34 + 0x14);
                    uVar8 = *(uint *)(iVar34 + 0x18);
                  }
                  if (cVar2 != '\0') {
                    uVar10 = *(undefined4 *)(iVar25 + 0x14);
                    uVar18 = *(uint *)(iVar25 + 0x18);
                  }
                  uVar29 = uVar18;
                  if (uVar8 < uVar18) {
                    uVar29 = uVar8;
                  }
                  uVar29 = FUN_016dd50a(uVar19,uVar10,uVar29);
                  if (uVar29 == 0) {
                    uVar29 = uVar8 - uVar18;
                  }
                  uVar29 = uVar29 >> 0x1f;
                }
                else {
                  uVar29 = (uint)(uVar8 < uVar29);
                }
LAB_012bb138:
                puVar12 = puVar12 + -0x14;
                puVar17 = puVar24;
                if (uVar29 != 0) {
                  puVar17 = puVar32;
                }
                FUN_016dd1aa(puVar12,puVar17,0x50);
                puVar33 = puVar24 + (uVar29 | uVar29 << 2) * 4;
                puVar17 = puVar32 + (uVar29 ^ 1 | (uVar29 ^ 1) << 2) * 4;
              } while ((puVar17 != puVar38) && (puVar33 != param_3));
              puVar38 = puVar17;
            }
            else {
              do {
                uVar18 = puVar17[6];
                uVar8 = puVar17[7];
                uVar29 = uVar8;
                if (uVar18 < uVar8) {
LAB_012bb4c0:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(0,uVar29,uVar18,&DAT_0188f948);
                }
                uVar18 = puVar14[6];
                uVar29 = puVar14[7];
                if (uVar18 < uVar29) goto LAB_012bb4c0;
                if (uVar8 == uVar29) {
                  iVar23 = uVar8 + 1;
                  iVar37 = 0;
                  uVar8 = puVar17[5];
                  uVar29 = puVar14[5];
                  do {
                    iVar23 = iVar23 + -1;
                    if (iVar23 == 0) {
                      uVar8 = 0;
                      uVar18 = 0;
                      uVar29 = 0;
                      if ((*puVar17 & 1) != 0) {
                        uVar8 = puVar17[2];
                        uVar18 = puVar17[3];
                      }
                      uVar22 = 0;
                      if ((*puVar14 & 1) != 0) {
                        uVar29 = puVar14[2];
                        uVar22 = puVar14[3];
                      }
                      uVar18 = (uint)((int)(uVar18 - (uVar22 + (uVar8 < uVar29))) < 0 !=
                                     (SBORROW4(uVar18,uVar22) !=
                                     SBORROW4(uVar18 - uVar22,(uint)(uVar8 < uVar29))));
                      goto LAB_012bb1b4;
                    }
                    iVar34 = uVar8 + iVar37;
                    iVar25 = uVar29 + iVar37;
                    uVar10 = 1;
                    iVar21 = 0;
                    cVar1 = *(char *)(iVar34 + 0x1c);
                    iVar15 = 0;
                    cVar2 = *(char *)(iVar25 + 0x1c);
                    uVar19 = 1;
                    if (cVar1 != '\0') {
                      iVar11 = uVar8 + iVar37;
                      iVar21 = *(int *)(iVar11 + 0x18);
                      uVar10 = *(undefined4 *)(iVar11 + 0x14);
                    }
                    if (cVar2 == '\x01') {
                      iVar15 = uVar29 + iVar37;
                      uVar19 = *(undefined4 *)(iVar15 + 0x14);
                      iVar15 = *(int *)(iVar15 + 0x18);
                    }
                    if (iVar21 != iVar15) break;
                    iVar37 = iVar37 + 0x28;
                    iVar21 = thunk_FUN_016dd50a(uVar10,uVar19,iVar21);
                  } while (iVar21 == 0);
                  uVar8 = 0;
                  uVar19 = 1;
                  uVar29 = 0;
                  if (cVar1 != '\0') {
                    uVar19 = *(undefined4 *)(iVar34 + 0x14);
                    uVar8 = *(uint *)(iVar34 + 0x18);
                  }
                  if (cVar2 != '\0') {
                    uVar29 = *(uint *)(iVar25 + 0x18);
                  }
                  uVar10 = 1;
                  if (cVar2 != '\0') {
                    uVar10 = *(undefined4 *)(iVar25 + 0x14);
                  }
                  uVar18 = uVar29;
                  if (uVar8 < uVar29) {
                    uVar18 = uVar8;
                  }
                  uVar18 = FUN_016dd50a(uVar19,uVar10,uVar18);
                  if (uVar18 == 0) {
                    uVar18 = uVar8 - uVar29;
                  }
                  uVar18 = uVar18 >> 0x1f;
                }
                else {
                  uVar18 = 0;
                  if (uVar8 < uVar29) {
                    uVar18 = 1;
                  }
                }
LAB_012bb1b4:
                puVar12 = puVar14;
                if (uVar18 != 0) {
                  puVar12 = puVar17;
                }
                FUN_016dd1aa(puVar38,puVar12,0x50);
                puVar38 = puVar38 + 0x14;
                puVar12 = (uint *)(uVar18 ^ 1 | (uVar18 ^ 1) << 2);
                puVar14 = puVar14 + (int)puVar12 * 4;
                if (puVar14 != puVar33) {
                  puVar17 = puVar17 + (uVar18 | uVar18 << 2) * 4;
                  puVar12 = puVar9;
                }
              } while (puVar14 != puVar33 && puVar17 != puVar12);
            }
            FUN_016dd1aa(puVar38,puVar14,(int)puVar33 - (int)puVar14);
          }
        }
        uVar29 = uVar27 * 2 | 1;
      } while (1 < uVar7);
LAB_012bb42c:
      uVar36 = 1;
    }
LAB_012bb438:
    abStack_67[uVar36 + 1] = (byte)uVar39;
    local_170[uVar36] = uVar29;
    if (param_2 <= uVar30) {
      if ((uVar29 & 1) == 0) {
        FUN_012bd08c(param_1,param_2,param_3);
        return;
      }
      return;
    }
    uVar30 = uVar30 + (uVar13 >> 1);
    uVar36 = uVar36 + 1;
    uVar29 = uVar13;
  } while( true );
}

