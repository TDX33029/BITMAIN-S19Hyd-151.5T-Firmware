// FUN_016cae58 @ 016cae58 size=2108 calls_out=4 calls_in=2
// strings: 

void FUN_016cae58(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint uVar26;
  undefined4 *puVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  ulonglong uVar31;
  uint local_18c;
  undefined4 *local_174;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar31 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar31 & 0xffffffff);
  uVar4 = uVar31 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar31 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar31;
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
    iVar11 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar11) + (param_2 >> iVar11) >> 1;
  }
  uVar14 = 0;
  uVar26 = 0;
  uVar28 = 1;
  do {
    uVar10 = 0;
    local_18c = 1;
    if (uVar14 < param_2) {
      iVar11 = param_1 + uVar14 * 0x38;
      local_18c = param_2 - uVar14;
      if (local_18c < uVar5) {
LAB_016caf74:
        if (param_5 == 0) {
          if (uVar5 <= local_18c) {
            local_18c = uVar5;
          }
          local_18c = local_18c << 1;
        }
        else {
          if (0x1f < local_18c) {
            local_18c = 0x20;
          }
          FUN_016c8f4c(iVar11,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar8 = local_18c;
        }
        else {
          uVar19 = *(uint *)(iVar11 + 8);
          uVar12 = *(uint *)(iVar11 + 0x40);
          uVar10 = *(uint *)(iVar11 + 0x3c);
          uVar8 = uVar19;
          if (uVar12 < uVar19) {
            uVar8 = uVar12;
          }
          iVar6 = FUN_016dd50a(uVar10,*(undefined4 *)(iVar11 + 4),uVar8);
          if (iVar6 == 0) {
            iVar6 = uVar12 - uVar19;
          }
          if (iVar6 < 0) {
            if (local_18c == 2) {
              uVar8 = 2;
              uVar10 = 1;
LAB_016cb15c:
              iVar7 = param_1 + -0x1c + uVar8 * 0x38;
              iVar11 = uVar14 * 0x38;
              iVar6 = param_1;
              do {
                iVar18 = iVar7 + iVar11;
                puVar15 = (undefined4 *)(iVar6 + iVar11);
                uVar13 = *puVar15;
                *puVar15 = *(undefined4 *)(iVar18 + -0x1c);
                uVar25 = puVar15[2];
                uVar29 = puVar15[3];
                uVar30 = puVar15[4];
                uVar24 = *(undefined4 *)(iVar18 + -0x18);
                *(undefined4 *)(iVar18 + -0x18) = puVar15[1];
                puVar15[2] = *(undefined4 *)(iVar18 + -0x14);
                *(undefined4 *)(iVar18 + -0x1c) = uVar13;
                puVar15[4] = *(undefined4 *)(iVar18 + -0xc);
                uVar13 = puVar15[5];
                puVar15[5] = *(undefined4 *)(iVar18 + -8);
                *(undefined4 *)(iVar18 + -8) = uVar13;
                uVar13 = puVar15[6];
                puVar15[6] = *(undefined4 *)(iVar18 + -4);
                *(undefined4 *)(iVar18 + -4) = uVar13;
                uVar13 = *(undefined4 *)(iVar7 + iVar11);
                *(undefined4 *)(iVar7 + iVar11) = puVar15[7];
                iVar7 = iVar7 + -0x38;
                uVar22 = *(undefined4 *)(iVar18 + 4);
                puVar15[7] = uVar13;
                uVar13 = puVar15[8];
                puVar15[8] = uVar22;
                *(undefined4 *)(iVar18 + 4) = uVar13;
                uVar13 = puVar15[9];
                puVar15[9] = *(undefined4 *)(iVar18 + 8);
                *(undefined4 *)(iVar18 + 8) = uVar13;
                uVar13 = puVar15[10];
                puVar15[10] = *(undefined4 *)(iVar18 + 0xc);
                *(undefined4 *)(iVar18 + 0xc) = uVar13;
                uVar13 = puVar15[0xb];
                puVar15[0xb] = *(undefined4 *)(iVar18 + 0x10);
                *(undefined4 *)(iVar18 + 0x10) = uVar13;
                uVar13 = puVar15[0xc];
                puVar15[0xc] = *(undefined4 *)(iVar18 + 0x14);
                *(undefined4 *)(iVar18 + 0x14) = uVar13;
                uVar13 = puVar15[0xd];
                puVar15[0xd] = *(undefined4 *)(iVar18 + 0x18);
                uVar22 = *(undefined4 *)(iVar18 + -0x10);
                uVar10 = uVar10 - 1;
                puVar15[1] = uVar24;
                *(undefined4 *)(iVar18 + -0x14) = uVar25;
                puVar15[3] = uVar22;
                *(undefined4 *)(iVar18 + -0x10) = uVar29;
                *(undefined4 *)(iVar18 + -0xc) = uVar30;
                *(undefined4 *)(iVar18 + 0x18) = uVar13;
                iVar6 = iVar6 + 0x38;
              } while (uVar10 != 0);
            }
            else {
              uVar8 = 2;
              puVar17 = (uint *)(param_1 + 0x78 + uVar14 * 0x38);
              do {
                uVar23 = puVar17[-1];
                uVar21 = *puVar17;
                uVar19 = uVar12;
                if (uVar21 < uVar12) {
                  uVar19 = uVar21;
                }
                uVar10 = FUN_016dd50a(uVar23,uVar10,uVar19);
                if (uVar10 == 0) {
                  uVar10 = uVar21 - uVar12;
                }
                if (uVar10 < 0x80000000) goto LAB_016cb11c;
                puVar17 = puVar17 + 0xe;
                uVar8 = uVar8 + 1;
                uVar10 = uVar23;
                uVar12 = uVar21;
              } while (local_18c != uVar8);
LAB_016cb10c:
              uVar8 = local_18c;
LAB_016cb11c:
              if (uVar8 < uVar5) goto LAB_016caf74;
              if (iVar6 < 0) {
                uVar10 = uVar8 >> 1;
                if (uVar10 != 0) goto LAB_016cb15c;
                uVar8 = 1;
              }
            }
          }
          else {
            uVar8 = 2;
            if (local_18c != 2) {
              uVar8 = 2;
              puVar17 = (uint *)(param_1 + 0x78 + uVar14 * 0x38);
              do {
                uVar23 = puVar17[-1];
                uVar21 = *puVar17;
                uVar19 = uVar12;
                if (uVar21 < uVar12) {
                  uVar19 = uVar21;
                }
                iVar7 = FUN_016dd50a(uVar23,uVar10,uVar19);
                if (iVar7 == 0) {
                  iVar7 = uVar21 - uVar12;
                }
                if (iVar7 < 0) goto LAB_016cb11c;
                puVar17 = puVar17 + 0xe;
                uVar8 = uVar8 + 1;
                uVar10 = uVar23;
                uVar12 = uVar21;
              } while (local_18c != uVar8);
              goto LAB_016cb10c;
            }
          }
        }
        local_18c = uVar8 << 1 | 1;
      }
      uVar10 = uVar14 - (uVar28 >> 1);
      uVar8 = uVar10 + uVar14;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar8;
      uVar12 = (local_18c >> 1) + uVar14 * 2;
      lVar2 = (ulonglong)uVar12 * (uVar4 & 0xffffffff);
      uVar8 = iVar3 * uVar12 + (int)((ulonglong)lVar2 >> 0x20) ^
              (uint)CARRY4(uVar10,uVar14) * (int)uVar4 +
              uVar8 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      if (uVar8 != 0) {
        uVar10 = LZCOUNT(uVar8);
      }
    }
    if (1 < uVar26) {
      do {
        while( true ) {
          uVar8 = uVar26 - 1;
          if (abStack_67[uVar26] < uVar10) goto LAB_016cb624;
          uVar21 = local_170[uVar8];
          uVar12 = uVar21 >> 1;
          uVar19 = uVar12 + (uVar28 >> 1);
          uVar26 = uVar8;
          if ((uVar19 <= param_4) && (((uVar21 | uVar28) & 1) == 0)) break;
          local_174 = (undefined4 *)(param_1 + (uVar14 - uVar19) * 0x38);
          if ((uVar21 & 1) == 0) {
            FUN_016c8f4c(local_174,uVar12,param_3,param_4,LZCOUNT(uVar12 | 1) << 1 ^ 0x3e,0);
          }
          if ((uVar28 & 1) == 0) {
            FUN_016c8f4c(local_174 + uVar12 * 0xe,uVar28 >> 1,param_3,param_4,
                         LZCOUNT(uVar28 >> 1 | 1) << 1 ^ 0x3e,0);
          }
          uVar23 = uVar28 >> 1;
          if (1 < uVar21 && 1 < uVar28) {
            uVar28 = uVar12;
            if (uVar23 < uVar12) {
              uVar28 = uVar23;
            }
            if (uVar28 <= param_4) {
              puVar27 = local_174 + uVar12 * 0xe;
              puVar15 = local_174;
              if (uVar23 < uVar12) {
                puVar15 = puVar27;
              }
              FUN_016dd1aa(param_3,puVar15,uVar28 * 0x38);
              puVar20 = param_3 + uVar28 * 0xe;
              puVar15 = param_3;
              if (uVar23 < uVar12) {
                puVar9 = (undefined4 *)(param_1 + -0x38 + uVar14 * 0x38);
                do {
                  uVar21 = puVar27[-0xc];
                  uVar12 = puVar20[-0xc];
                  uVar28 = uVar21;
                  if (uVar12 < uVar21) {
                    uVar28 = uVar12;
                  }
                  uVar28 = FUN_016dd50a(puVar20[-0xd],puVar27[-0xd],uVar28);
                  if (uVar28 == 0) {
                    uVar28 = uVar12 - uVar21;
                  }
                  puVar16 = puVar27 + -0xe;
                  if (uVar28 < 0x80000000) {
                    puVar16 = puVar20 + -0xe;
                  }
                  uVar13 = puVar16[1];
                  uVar22 = puVar16[2];
                  uVar24 = puVar16[3];
                  *puVar9 = *puVar16;
                  puVar9[1] = uVar13;
                  puVar9[2] = uVar22;
                  puVar9[3] = uVar24;
                  uVar13 = puVar16[5];
                  uVar22 = puVar16[6];
                  uVar24 = puVar16[7];
                  uVar25 = puVar16[8];
                  puVar9[4] = puVar16[4];
                  puVar9[5] = uVar13;
                  puVar9[6] = uVar22;
                  puVar9[7] = uVar24;
                  puVar9[8] = uVar25;
                  uVar13 = puVar16[10];
                  uVar22 = puVar16[0xb];
                  uVar24 = puVar16[0xc];
                  uVar25 = puVar16[0xd];
                  puVar9[9] = puVar16[9];
                  puVar9[10] = uVar13;
                  puVar9[0xb] = uVar22;
                  puVar9[0xc] = uVar24;
                  puVar9[0xd] = uVar25;
                  puVar20 = puVar20 + -0xe + ((int)uVar28 >> 0x1f) * -0xe;
                  puVar27 = puVar27 + -0xe + (uVar28 >> 0x1f ^ 1) * 0xe;
                  puVar16 = puVar27;
                } while ((puVar27 != local_174) && (puVar9 = puVar9 + -0xe, puVar20 != param_3));
              }
              else {
                do {
                  uVar12 = puVar15[2];
                  uVar21 = puVar27[2];
                  uVar28 = uVar12;
                  if (uVar21 < uVar12) {
                    uVar28 = uVar21;
                  }
                  uVar28 = FUN_016dd50a(puVar27[1],puVar15[1],uVar28);
                  if (uVar28 == 0) {
                    uVar28 = uVar21 - uVar12;
                  }
                  puVar9 = puVar27;
                  if (uVar28 < 0x80000000) {
                    puVar9 = puVar15;
                  }
                  uVar13 = puVar9[1];
                  uVar22 = puVar9[2];
                  uVar24 = puVar9[3];
                  puVar16 = local_174 + 0xe;
                  *local_174 = *puVar9;
                  local_174[1] = uVar13;
                  local_174[2] = uVar22;
                  local_174[3] = uVar24;
                  uVar13 = puVar9[5];
                  uVar22 = puVar9[6];
                  uVar24 = puVar9[7];
                  uVar25 = puVar9[8];
                  local_174[4] = puVar9[4];
                  local_174[5] = uVar13;
                  local_174[6] = uVar22;
                  local_174[7] = uVar24;
                  local_174[8] = uVar25;
                  uVar13 = puVar9[10];
                  uVar22 = puVar9[0xb];
                  uVar24 = puVar9[0xc];
                  uVar25 = puVar9[0xd];
                  local_174[9] = puVar9[9];
                  local_174[10] = uVar13;
                  local_174[0xb] = uVar22;
                  local_174[0xc] = uVar24;
                  local_174[0xd] = uVar25;
                  puVar15 = puVar15 + (uVar28 >> 0x1f ^ 1) * 0xe;
                  if (puVar15 == puVar20) break;
                  puVar27 = puVar27 + ((int)uVar28 >> 0x1f) * -0xe;
                  local_174 = puVar16;
                } while (puVar27 != (undefined4 *)(param_1 + uVar14 * 0x38));
              }
              FUN_016dd1aa(puVar16,puVar15,(int)puVar20 - (int)puVar15);
            }
          }
          uVar28 = uVar19 * 2 | 1;
          if (uVar8 < 2) goto LAB_016cb61c;
        }
        uVar28 = uVar19 * 2;
      } while (1 < uVar8);
LAB_016cb61c:
      uVar26 = 1;
    }
LAB_016cb624:
    abStack_67[uVar26 + 1] = (byte)uVar10;
    local_170[uVar26] = uVar28;
    if (param_2 <= uVar14) {
      if ((uVar28 & 1) == 0) {
        FUN_016c8f4c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar26 = uVar26 + 1;
    uVar14 = uVar14 + (local_18c >> 1);
    uVar28 = local_18c;
  } while( true );
}

