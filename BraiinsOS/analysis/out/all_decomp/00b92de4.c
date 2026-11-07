// FUN_00b92de4 @ 00b92de4 size=1944 calls_out=4 calls_in=2
// strings: 

void FUN_00b92de4(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined4 *puVar29;
  ulonglong uVar30;
  uint local_18c;
  undefined4 *local_174;
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
    iVar10 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar10) + (param_2 >> iVar10) >> 1;
  }
  uVar5 = 0;
  uVar27 = 0;
  uVar28 = 1;
  do {
    uVar16 = 0;
    local_18c = 1;
    if (uVar5 < param_2) {
      local_18c = param_2 - uVar5;
      iVar10 = param_1 + uVar5 * 0x18;
      if (local_18c < uVar4) {
LAB_00b92f04:
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
          FUN_00b9357c(iVar10,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar16 = local_18c;
        }
        else {
          uVar12 = *(uint *)(iVar10 + 8);
          uVar15 = *(uint *)(iVar10 + 0x1c);
          uVar14 = *(uint *)(iVar10 + 0x20);
          uVar16 = uVar12;
          if (uVar14 < uVar12) {
            uVar16 = uVar14;
          }
          iVar8 = FUN_016dd50a(uVar15,*(undefined4 *)(iVar10 + 4),uVar16);
          if (iVar8 == 0) {
            iVar8 = uVar14 - uVar12;
          }
          if (iVar8 < 0) {
            if (local_18c == 2) {
              uVar16 = 2;
              uVar14 = 1;
LAB_00b933fc:
              iVar10 = uVar5 * 0x18;
              iVar9 = param_1 + -0xc + uVar16 * 0x18;
              iVar8 = param_1;
              do {
                iVar22 = iVar9 + iVar10;
                puVar18 = (undefined4 *)(iVar8 + iVar10);
                uVar13 = *puVar18;
                iVar8 = iVar8 + 0x18;
                uVar14 = uVar14 - 1;
                *puVar18 = *(undefined4 *)(iVar22 + -0xc);
                *(undefined4 *)(iVar22 + -0xc) = uVar13;
                uVar13 = puVar18[1];
                puVar18[1] = *(undefined4 *)(iVar22 + -8);
                *(undefined4 *)(iVar22 + -8) = uVar13;
                uVar13 = puVar18[2];
                puVar18[2] = *(undefined4 *)(iVar22 + -4);
                *(undefined4 *)(iVar22 + -4) = uVar13;
                uVar13 = *(undefined4 *)(iVar9 + iVar10);
                *(undefined4 *)(iVar9 + iVar10) = puVar18[3];
                iVar9 = iVar9 + -0x18;
                puVar18[3] = uVar13;
                uVar13 = puVar18[4];
                puVar18[4] = *(undefined4 *)(iVar22 + 4);
                *(undefined4 *)(iVar22 + 4) = uVar13;
                uVar13 = *(undefined4 *)(iVar22 + 8);
                *(undefined4 *)(iVar22 + 8) = puVar18[5];
                puVar18[5] = uVar13;
              } while (uVar14 != 0);
            }
            else {
              uVar16 = 2;
              puVar21 = (uint *)(param_1 + 0x38 + uVar5 * 0x18);
              do {
                uVar26 = puVar21[-1];
                uVar23 = *puVar21;
                uVar12 = uVar14;
                if (uVar23 < uVar14) {
                  uVar12 = uVar23;
                }
                uVar15 = FUN_016dd50a(uVar26,uVar15,uVar12);
                if (uVar15 == 0) {
                  uVar15 = uVar23 - uVar14;
                }
                if (uVar15 < 0x80000000) goto LAB_00b933b4;
                puVar21 = puVar21 + 6;
                uVar16 = uVar16 + 1;
                uVar14 = uVar23;
                uVar15 = uVar26;
              } while (local_18c != uVar16);
LAB_00b933a4:
              uVar16 = local_18c;
LAB_00b933b4:
              if (uVar16 < uVar4) goto LAB_00b92f04;
              if (iVar8 < 0) {
                uVar14 = uVar16 >> 1;
                if (uVar14 != 0) goto LAB_00b933fc;
                uVar16 = 1;
              }
            }
          }
          else {
            uVar16 = 2;
            if (local_18c != 2) {
              uVar16 = 2;
              puVar21 = (uint *)(param_1 + 0x38 + uVar5 * 0x18);
              do {
                uVar26 = puVar21[-1];
                uVar23 = *puVar21;
                uVar12 = uVar14;
                if (uVar23 < uVar14) {
                  uVar12 = uVar23;
                }
                iVar9 = FUN_016dd50a(uVar26,uVar15,uVar12);
                if (iVar9 == 0) {
                  iVar9 = uVar23 - uVar14;
                }
                if (iVar9 < 0) goto LAB_00b933b4;
                puVar21 = puVar21 + 6;
                uVar16 = uVar16 + 1;
                uVar14 = uVar23;
                uVar15 = uVar26;
              } while (local_18c != uVar16);
              goto LAB_00b933a4;
            }
          }
        }
        local_18c = uVar16 << 1 | 1;
      }
      uVar16 = uVar5 - (uVar28 >> 1);
      uVar14 = uVar5 + (local_18c >> 1);
      uVar15 = uVar14 + uVar5;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar15;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar16,uVar5),uVar16 + uVar5);
      uVar14 = (uint)CARRY4(uVar14,uVar5) * (int)uVar2 +
               uVar15 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar16 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar14 != 0) {
        uVar16 = LZCOUNT(uVar14);
      }
    }
    if (uVar27 < 2) {
      abStack_67[uVar27 + 1] = (byte)uVar16;
      local_170[uVar27] = uVar28;
    }
    else {
      do {
        while( true ) {
          uVar14 = uVar27 - 1;
          if (abStack_67[uVar27] < uVar16) goto LAB_00b93244;
          uVar23 = local_170[uVar14];
          uVar15 = uVar23 >> 1;
          uVar12 = uVar15 + (uVar28 >> 1);
          uVar27 = uVar14;
          if ((uVar12 <= param_4) && (((uVar23 | uVar28) & 1) == 0)) break;
          local_174 = (undefined4 *)(param_1 + (uVar5 - uVar12) * 0x18);
          if ((uVar23 & 1) == 0) {
            FUN_00b9357c(local_174,uVar15,param_3,param_4,LZCOUNT(uVar15 | 1) << 1 ^ 0x3e,0);
          }
          if ((uVar28 & 1) == 0) {
            FUN_00b9357c(local_174 + uVar15 * 6,uVar28 >> 1,param_3,param_4,
                         LZCOUNT(uVar28 >> 1 | 1) << 1 ^ 0x3e,0);
          }
          uVar26 = uVar28 >> 1;
          if (1 < uVar23 && 1 < uVar28) {
            uVar28 = uVar15;
            if (uVar26 < uVar15) {
              uVar28 = uVar26;
            }
            if (uVar28 <= param_4) {
              puVar18 = local_174 + uVar15 * 6;
              puVar11 = local_174;
              if (uVar26 < uVar15) {
                puVar11 = puVar18;
              }
              FUN_016dd1aa(param_3,puVar11,uVar28 * 0x18);
              puVar20 = param_3 + uVar28 * 6;
              puVar11 = param_3;
              if (uVar26 < uVar15) {
                puVar6 = (undefined4 *)(param_1 + -0x18 + uVar5 * 0x18);
                puVar7 = puVar18;
                do {
                  uVar23 = puVar7[-4];
                  uVar15 = puVar20[-4];
                  uVar28 = uVar23;
                  if (uVar15 < uVar23) {
                    uVar28 = uVar15;
                  }
                  uVar28 = FUN_016dd50a(puVar20[-5],puVar7[-5],uVar28);
                  if (uVar28 == 0) {
                    uVar28 = uVar15 - uVar23;
                  }
                  puVar18 = puVar7 + -6;
                  if (uVar28 < 0x80000000) {
                    puVar18 = puVar20 + -6;
                  }
                  uVar13 = puVar18[1];
                  uVar17 = puVar18[2];
                  uVar19 = puVar18[3];
                  uVar24 = puVar18[4];
                  uVar25 = puVar18[5];
                  *puVar6 = *puVar18;
                  puVar6[1] = uVar13;
                  puVar6[2] = uVar17;
                  puVar6[3] = uVar19;
                  puVar6[4] = uVar24;
                  puVar6[5] = uVar25;
                  puVar20 = puVar20 + -6 + (uVar28 >> 0x1f | (uVar28 >> 0x1f) << 1) * 2;
                  uVar28 = uVar28 >> 0x1f ^ 1;
                  puVar7 = puVar7 + -6 + (uVar28 | uVar28 << 1) * 2;
                } while ((puVar7 != local_174) && (puVar6 = puVar6 + -6, puVar20 != param_3));
              }
              else {
                do {
                  uVar15 = puVar11[2];
                  uVar23 = puVar18[2];
                  uVar28 = uVar15;
                  if (uVar23 < uVar15) {
                    uVar28 = uVar23;
                  }
                  puVar6 = (undefined4 *)FUN_016dd50a(puVar18[1],puVar11[1],uVar28);
                  if (puVar6 == (undefined4 *)0x0) {
                    puVar6 = (undefined4 *)(uVar23 - uVar15);
                  }
                  puVar29 = puVar18;
                  if (puVar6 < &DAT_80000000) {
                    puVar29 = puVar11;
                  }
                  uVar13 = puVar29[1];
                  uVar17 = puVar29[2];
                  uVar19 = puVar29[3];
                  uVar24 = puVar29[4];
                  uVar25 = puVar29[5];
                  puVar7 = local_174 + 6;
                  *local_174 = *puVar29;
                  local_174[1] = uVar13;
                  local_174[2] = uVar17;
                  local_174[3] = uVar19;
                  local_174[4] = uVar24;
                  local_174[5] = uVar25;
                  uVar28 = (uint)puVar6 >> 0x1f ^ 1;
                  puVar11 = puVar11 + (uVar28 | uVar28 << 1) * 2;
                  if (puVar11 != puVar20) {
                    puVar18 = puVar18 + ((uint)puVar6 >> 0x1f | ((uint)puVar6 >> 0x1f) << 1) * 2;
                    puVar6 = (undefined4 *)(param_1 + uVar5 * 0x18);
                  }
                  local_174 = puVar7;
                } while (puVar11 != puVar20 && puVar18 != puVar6);
              }
              FUN_016dd1aa(puVar7,puVar11,(int)puVar20 - (int)puVar11);
            }
          }
          uVar28 = uVar12 * 2 | 1;
          if (uVar14 < 2) goto LAB_00b93240;
        }
        uVar28 = uVar12 * 2;
      } while (1 < uVar14);
LAB_00b93240:
      uVar27 = 1;
LAB_00b93244:
      abStack_67[uVar27 + 1] = (byte)uVar16;
      local_170[uVar27] = uVar28;
    }
    if (param_2 <= uVar5) {
      if ((uVar28 & 1) == 0) {
        FUN_00b9357c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar27 = uVar27 + 1;
    uVar5 = uVar5 + (local_18c >> 1);
    uVar28 = local_18c;
  } while( true );
}

