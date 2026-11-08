// FUN_00f15a78 @ 00f15a78 size=2264 calls_out=11 calls_in=1
// strings: 

void FUN_00f15a78(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 uVar25;
  uint *puVar26;
  uint uVar27;
  int iVar28;
  uint *puVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  bool bVar35;
  bool bVar36;
  int local_12c;
  int local_120;
  uint local_118;
  int local_114;
  uint local_10c;
  undefined4 local_108;
  undefined4 *local_ec;
  uint local_e8;
  uint local_e0;
  undefined4 *local_dc;
  undefined1 local_9c;
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  uVar27 = param_2[0x14];
  iVar30 = param_2[0x13];
  uVar3 = 0;
  local_7c = 4;
  iVar20 = uVar27 * 0x28;
  local_8c = 0;
  local_90 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  local_80 = 0;
  local_44 = 0;
  local_48 = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  if (0x3333333 < uVar27) {
LAB_00f15af8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar3,iVar20);
  }
  if (iVar20 == 0) {
    iVar20 = 4;
    local_40 = 0;
    local_3c = 4;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(iVar20);
    if (iVar4 == 0) {
      uVar3 = 4;
      goto LAB_00f15af8;
    }
    local_40 = uVar27;
    local_3c = iVar4;
    if (uVar27 == 0) {
      iVar20 = 4;
      uVar3 = 0;
    }
    else {
      iVar5 = iVar30 + uVar27 * 0x28;
      uVar3 = uVar27;
      puVar10 = param_1;
      iVar20 = 0;
      do {
        if (iVar30 == iVar5) break;
        iVar28 = 0;
        uVar25 = 0;
        iVar6 = 1;
        local_94 = 1;
        local_98 = 1;
        if (*(char *)(iVar30 + 0xc) == '\x01') {
          iVar28 = *(int *)(iVar30 + 8);
          uVar16 = *(undefined4 *)(iVar30 + 4);
          uVar25 = 1;
          if ((iVar28 != 0) && (iVar6 = thunk_FUN_016d4a50(iVar28), iVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar28);
          }
          FUN_016dd1aa(iVar6,uVar16);
          local_98 = iVar6;
        }
        iVar6 = 0;
        local_9c = 0;
        if (*(char *)(iVar30 + 0x1c) == '\x01') {
          uVar16 = *(undefined4 *)(iVar30 + 0x14);
          iVar6 = *(int *)(iVar30 + 0x18);
          local_94 = 1;
          local_9c = 1;
          if ((iVar6 != 0) && (local_94 = thunk_FUN_016d4a50(iVar6), local_94 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar6);
          }
          FUN_016dd1aa(local_94,uVar16,iVar6);
        }
        puVar21 = *(undefined4 **)(iVar30 + 0x20);
        if (puVar21 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x10);
          if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x10);
          }
          iVar13 = puVar21[1];
          if (iVar13 == 0) {
            iVar13 = 0;
            uVar16 = 0;
            iVar8 = 0;
            puVar9 = &DAT_005674cc;
          }
          else {
            lVar2 = (ulonglong)(iVar13 + 1) * 0x34;
            uVar17 = (uint)lVar2;
            if ((int)((ulonglong)lVar2 >> 0x20) != 0) {
LAB_00f16258:
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
            }
            uVar31 = iVar13 + 5;
            uVar22 = uVar17 + uVar31;
            if ((CARRY4(uVar17,uVar31)) || (0x7ffffffc < uVar22)) goto LAB_00f16258;
            if (uVar22 == 0) {
              iVar8 = 4;
            }
            else {
              if (uVar22 < 4) {
                local_28 = 0;
                iVar8 = FUN_016d51b0(&local_28,4,uVar22);
                if (iVar8 != 0) goto LAB_00f162d4;
                iVar8 = local_28;
              }
              else {
                iVar8 = thunk_FUN_016d4a50(uVar22);
              }
              if (iVar8 == 0) {
LAB_00f162d4:
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,uVar22);
              }
            }
            puVar9 = (undefined4 *)(iVar8 + uVar17);
            puVar26 = (uint *)*puVar21;
            FUN_016dd1aa(puVar9,puVar26,uVar31);
            iVar8 = puVar21[3];
            if (iVar8 != 0) {
              puVar19 = puVar26 + 1;
              uVar17 = ~*puVar26 & 0x80808080;
              puVar29 = puVar26;
              iVar34 = iVar8;
              do {
                puVar18 = puVar19;
                if (uVar17 == 0) {
                  do {
                    puVar19 = puVar18 + 1;
                    uVar17 = *puVar18;
                    puVar29 = puVar29 + -0x34;
                    puVar18 = puVar19;
                  } while ((uVar17 & 0x80808080) == 0x80808080);
                  uVar17 = uVar17 & 0x80808080 ^ 0x80808080;
                }
                uVar16 = 0;
                puVar18 = puVar29 + (short)-(short)((uint)LZCOUNT(uVar17 << 0x18 |
                                                                  (uVar17 >> 8 & 0xff) << 0x10 |
                                                                  (uVar17 >> 0x10 & 0xff) << 8 |
                                                                  uVar17 >> 0x18) >> 3) * 0xd;
                uVar22 = puVar18[-10];
                bVar36 = 0x3ffffffe < uVar22;
                bVar35 = uVar22 == 0x3fffffff;
                puVar1 = puVar21;
                if (uVar22 < 0x40000000) {
                  puVar1 = (undefined4 *)(uVar22 << 2);
                  bVar36 = (undefined4 *)0x7ffffffb < puVar1;
                  bVar35 = puVar1 == (undefined4 *)0x7ffffffc;
                }
                if (bVar36 && !bVar35) {
LAB_00f162f4:
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(uVar16,local_dc);
                }
                uVar32 = puVar18[-0xb];
                uVar31 = puVar18[-0xd];
                local_e8 = 0;
                if (puVar1 == (undefined4 *)0x0) {
                  local_dc = (undefined4 *)&DAT_00000004;
                  local_e0 = 0;
                }
                else {
                  local_dc = (undefined4 *)thunk_FUN_016d4a50(puVar1);
                  if (local_dc == (undefined4 *)0x0) {
                    uVar16 = 4;
                    local_dc = puVar1;
                    goto LAB_00f162f4;
                  }
                  local_e0 = uVar22;
                }
                FUN_016dd1aa(local_dc,uVar32,puVar1);
                uVar32 = puVar18[-7];
                bVar36 = 0x1ffffffe < uVar32;
                bVar35 = uVar32 == 0x1fffffff;
                if (uVar32 < 0x20000000) {
                  puVar1 = (undefined4 *)(uVar32 << 3);
                  bVar36 = (undefined4 *)0x7ffffff7 < puVar1;
                  bVar35 = puVar1 == (undefined4 *)0x7ffffff8;
                }
                if (bVar36 && !bVar35) {
LAB_00f1630c:
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(local_e8,local_ec);
                }
                uVar33 = puVar18[-8];
                local_108 = 0;
                if (puVar1 == (undefined4 *)0x0) {
                  local_ec = (undefined4 *)&DAT_00000008;
                  local_e8 = 0;
                }
                else {
                  local_ec = (undefined4 *)thunk_FUN_016d4a50(puVar1);
                  if (local_ec == (undefined4 *)0x0) {
                    local_e8 = 8;
                    local_ec = puVar1;
                    goto LAB_00f1630c;
                  }
                  local_e8 = uVar32;
                }
                FUN_016dd1aa(local_ec,uVar33,puVar1);
                uVar33 = puVar18[-4];
                bVar36 = 0x1ffffffe < uVar33;
                bVar35 = uVar33 == 0x1fffffff;
                if (uVar33 < 0x20000000) {
                  puVar1 = (undefined4 *)(uVar33 << 3);
                  bVar36 = (undefined4 *)0x7ffffff7 < puVar1;
                  bVar35 = puVar1 == (undefined4 *)0x7ffffff8;
                }
                if (bVar36 && !bVar35) {
LAB_00f16328:
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(local_108,puVar10);
                }
                uVar24 = puVar18[-5];
                if (puVar1 == (undefined4 *)0x0) {
                  puVar10 = (undefined4 *)&DAT_00000008;
                  local_10c = 0;
                }
                else {
                  puVar10 = (undefined4 *)thunk_FUN_016d4a50(puVar1);
                  if (puVar10 == (undefined4 *)0x0) {
                    local_108 = 8;
                    puVar10 = puVar1;
                    goto LAB_00f16328;
                  }
                  local_10c = uVar33;
                }
                local_118 = 0;
                FUN_016dd1aa(puVar10,uVar24,puVar1);
                uVar24 = puVar18[-1];
                if (0xaaaaaaa < uVar24) {
LAB_00f16348:
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(local_118,local_114);
                }
                local_114 = uVar24 * 0xc;
                if (local_114 == 0) {
                  local_118 = 0;
                  iVar11 = 4;
                }
                else {
                  local_118 = puVar18[-2];
                  iVar11 = thunk_FUN_016d4a50();
                  if (iVar11 == 0) {
                    local_118 = 4;
                    goto LAB_00f16348;
                  }
                  if (uVar24 != 0) {
                    iVar15 = 0;
                    uVar23 = 0;
                    do {
                      if (local_114 == iVar15) break;
                      iVar14 = *(int *)(local_118 + 8);
                      if (iVar14 < 0) {
                        uVar16 = 0;
LAB_00f16280:
                    /* WARNING: Subroutine does not return */
                        FUN_00600af4(uVar16,local_120);
                      }
                      uVar16 = *(undefined4 *)(local_118 + 4);
                      if (iVar14 == 0) {
                        local_120 = 1;
                        local_12c = 0;
                      }
                      else {
                        local_120 = thunk_FUN_016d4a50(iVar14);
                        if (local_120 == 0) {
                          uVar16 = 1;
                          local_120 = iVar14;
                          goto LAB_00f16280;
                        }
                        local_12c = iVar14;
                      }
                      local_118 = local_118 + 0xc;
                      uVar23 = uVar23 + 1;
                      FUN_016dd1aa(local_120,uVar16);
                      piVar12 = (int *)(iVar11 + iVar15);
                      *piVar12 = local_12c;
                      iVar15 = iVar15 + 0xc;
                      piVar12[1] = local_120;
                      piVar12[2] = iVar14;
                    } while (uVar24 != uVar23);
                  }
                  local_118 = uVar24;
                }
                uVar17 = uVar17 - 1 & uVar17;
                iVar15 = (int)puVar26 - (int)puVar18 >> 2;
                iVar34 = iVar34 + -1;
                puVar9[-1 - iVar15] = uVar24;
                puVar9[-2 - iVar15] = iVar11;
                puVar9[-0xd - iVar15] = uVar31;
                puVar9[-0xc - iVar15] = local_e0;
                puVar9[-0xb - iVar15] = local_dc;
                puVar9[-4 - iVar15] = uVar33;
                puVar9[-10 - iVar15] = uVar22;
                puVar9[-3 - iVar15] = local_118;
                puVar9[-9 - iVar15] = local_e8;
                puVar9[-8 - iVar15] = local_ec;
                puVar9[-7 - iVar15] = uVar32;
                puVar9[-5 - iVar15] = puVar10;
                puVar9[-6 - iVar15] = local_10c;
                local_114 = iVar11;
              } while (iVar34 != 0);
            }
            uVar16 = puVar21[2];
          }
          *puVar7 = puVar9;
          puVar7[1] = iVar13;
          puVar7[2] = uVar16;
          puVar7[3] = iVar8;
        }
        iVar13 = *(int *)(iVar30 + 0x24);
        iVar30 = iVar30 + 0x28;
        uVar3 = uVar3 - 1;
        piVar12 = (int *)(iVar4 + iVar20 * 0x28);
        *piVar12 = iVar28;
        piVar12[8] = (int)puVar7;
        *(undefined1 *)(piVar12 + 7) = local_9c;
        *(undefined1 *)(piVar12 + 3) = uVar25;
        piVar12[1] = local_98;
        piVar12[9] = iVar13;
        piVar12[4] = iVar6;
        piVar12[5] = local_94;
        piVar12[6] = iVar6;
        piVar12[2] = iVar28;
        iVar20 = iVar20 + 1;
      } while (uVar3 != 0);
      uVar3 = local_78;
      iVar20 = local_7c;
    }
  }
  iVar30 = local_3c;
  uVar17 = local_40;
  iVar5 = uVar3 + 1;
  iVar4 = iVar20;
  while (iVar5 = iVar5 + -1, iVar5 != 0) {
    FUN_012b6bc4(iVar4);
    iVar4 = iVar4 + 0x28;
  }
  if (local_80 != 0) {
    thunk_FUN_016d3fb4(iVar20);
  }
  local_80 = uVar17;
  local_7c = iVar30;
  local_78 = uVar27;
  local_74 = uVar27;
  local_38 = FUN_01845d5c(*param_2,param_2[1]);
  ClearExclusiveLocal();
  if (*(char *)(param_2 + 0x15) == '\0') {
    local_3c = 0;
    local_40 = 1;
    local_2c = 0;
    local_30 = 0;
    FUN_01296db8(&local_90,&local_40);
  }
  else {
    local_3c = 0;
    local_40 = 1;
    local_2c = 0;
    local_30 = 0;
    FUN_0129714c(&local_90,&local_40);
  }
  FUN_016dd1aa(param_1,&local_90,0x50);
  return;
}

