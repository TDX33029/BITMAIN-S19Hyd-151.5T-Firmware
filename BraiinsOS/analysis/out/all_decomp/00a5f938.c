// FUN_00a5f938 @ 00a5f938 size=2044 calls_out=6 calls_in=1
// strings: 

void FUN_00a5f938(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined1 uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint *puVar24;
  uint *puVar25;
  undefined4 *unaff_r9;
  uint uVar26;
  undefined4 uVar27;
  int iVar28;
  undefined4 *puVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  bool bVar34;
  bool bVar35;
  int local_d0;
  int local_c4;
  int local_c0;
  uint local_b8;
  uint local_b0;
  undefined4 local_a0;
  uint *local_9c;
  uint local_94;
  undefined4 *local_90;
  undefined4 *local_8c;
  undefined1 local_44;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_28;
  
  iVar10 = param_3 * 0x28;
  if (0x3333333 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (iVar10 == 0) {
    local_34 = 4;
    local_38 = 0;
  }
  else {
    local_34 = thunk_FUN_016d4a50(iVar10);
    if (local_34 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar10);
    }
    local_38 = param_3;
    if (param_3 != 0) {
      iVar10 = param_2;
      uVar22 = param_3;
      iVar18 = 0;
      do {
        if (iVar10 == param_2 + param_3 * 0x28) break;
        iVar23 = 1;
        iVar31 = 1;
        uVar13 = 0;
        local_44 = 0;
        local_3c = 0;
        if (*(char *)(iVar10 + 0xc) == '\x01') {
          local_3c = *(int *)(iVar10 + 8);
          uVar13 = 1;
          uVar27 = *(undefined4 *)(iVar10 + 4);
          if ((local_3c != 0) && (iVar31 = thunk_FUN_016d4a50(local_3c), iVar31 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,local_3c);
          }
          FUN_016dd1aa(iVar31,uVar27);
        }
        iVar28 = 0;
        if (*(char *)(iVar10 + 0x1c) == '\x01') {
          iVar28 = *(int *)(iVar10 + 0x18);
          iVar23 = 1;
          uVar27 = *(undefined4 *)(iVar10 + 0x14);
          if ((iVar28 != 0) && (iVar23 = thunk_FUN_016d4a50(iVar28), iVar23 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar28);
          }
          local_44 = 1;
          FUN_016dd1aa(iVar23,uVar27,iVar28);
        }
        puVar11 = *(undefined4 **)(iVar10 + 0x20);
        if (puVar11 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x10);
          if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x10);
          }
          iVar8 = puVar11[1];
          if (iVar8 == 0) {
            iVar4 = 0;
            uVar27 = 0;
            iVar8 = 0;
            puVar29 = &DAT_005674cc;
          }
          else {
            lVar2 = (ulonglong)(iVar8 + 1) * 0x34;
            uVar12 = (uint)lVar2;
            if ((((int)((ulonglong)lVar2 >> 0x20) != 0) ||
                (uVar19 = uVar12 + iVar8 + 5U, CARRY4(uVar12,iVar8 + 5U))) || (0x7ffffffc < uVar19))
            {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
            }
            if (uVar19 == 0) {
              iVar4 = 4;
            }
            else {
              if (uVar19 < 4) {
                local_28 = 0;
                iVar4 = FUN_016d51b0(&local_28,4,uVar19);
                if (iVar4 != 0) goto LAB_00a600e0;
                iVar4 = local_28;
              }
              else {
                iVar4 = thunk_FUN_016d4a50(uVar19);
              }
              if (iVar4 == 0) {
LAB_00a600e0:
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,uVar19);
              }
            }
            puVar29 = (undefined4 *)(iVar4 + uVar12);
            puVar14 = (uint *)*puVar11;
            FUN_016dd1aa(puVar29,puVar14);
            iVar4 = puVar11[3];
            if (iVar4 != 0) {
              puVar25 = puVar14 + 1;
              uVar12 = ~*puVar14 & 0x80808080;
              puVar15 = puVar14;
              iVar33 = iVar4;
              do {
                puVar24 = puVar25;
                if (uVar12 == 0) {
                  do {
                    puVar25 = puVar24 + 1;
                    uVar12 = *puVar24;
                    puVar14 = puVar14 + -0x34;
                    puVar24 = puVar25;
                  } while ((uVar12 & 0x80808080) == 0x80808080);
                  uVar12 = uVar12 & 0x80808080 ^ 0x80808080;
                }
                uVar27 = 0;
                puVar24 = puVar14 + (short)-(short)((uint)LZCOUNT(uVar12 << 0x18 |
                                                                  (uVar12 >> 8 & 0xff) << 0x10 |
                                                                  (uVar12 >> 0x10 & 0xff) << 8 |
                                                                  uVar12 >> 0x18) >> 3) * 0xd;
                uVar19 = puVar24[-10];
                bVar35 = 0x3ffffffe < uVar19;
                bVar34 = uVar19 == 0x3fffffff;
                puVar1 = puVar11;
                if (uVar19 < 0x40000000) {
                  puVar1 = (undefined4 *)(uVar19 << 2);
                  bVar35 = (undefined4 *)0x7ffffffb < puVar1;
                  bVar34 = puVar1 == (undefined4 *)0x7ffffffc;
                  local_9c = puVar15;
                }
                if (bVar35 && !bVar34) {
LAB_00a60100:
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(uVar27,local_8c);
                }
                uVar30 = puVar24[-0xb];
                uVar5 = puVar24[-0xd];
                local_a0 = 0;
                if (puVar1 == (undefined4 *)0x0) {
                  local_8c = (undefined4 *)&DAT_00000004;
                  local_94 = 0;
                }
                else {
                  local_8c = (undefined4 *)thunk_FUN_016d4a50(puVar1);
                  if (local_8c == (undefined4 *)0x0) {
                    uVar27 = 4;
                    local_8c = puVar1;
                    goto LAB_00a60100;
                  }
                  local_94 = uVar19;
                }
                FUN_016dd1aa(local_8c,uVar30,puVar1);
                uVar30 = puVar24[-7];
                bVar35 = 0x1ffffffe < uVar30;
                bVar34 = uVar30 == 0x1fffffff;
                if (uVar30 < 0x20000000) {
                  puVar1 = (undefined4 *)(uVar30 << 3);
                  bVar35 = (undefined4 *)0x7ffffff7 < puVar1;
                  bVar34 = puVar1 == (undefined4 *)0x7ffffff8;
                }
                if (bVar35 && !bVar34) {
LAB_00a6011c:
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(local_a0,unaff_r9);
                }
                uVar16 = puVar24[-8];
                uVar27 = 0;
                if (puVar1 == (undefined4 *)0x0) {
                  unaff_r9 = (undefined4 *)&DAT_00000008;
                  local_b0 = 0;
                }
                else {
                  unaff_r9 = (undefined4 *)thunk_FUN_016d4a50(puVar1);
                  if (unaff_r9 == (undefined4 *)0x0) {
                    local_a0 = 8;
                    unaff_r9 = puVar1;
                    goto LAB_00a6011c;
                  }
                  local_b0 = uVar30;
                }
                FUN_016dd1aa(unaff_r9,uVar16,puVar1);
                uVar16 = puVar24[-4];
                bVar35 = 0x1ffffffe < uVar16;
                bVar34 = uVar16 == 0x1fffffff;
                if (uVar16 < 0x20000000) {
                  puVar1 = (undefined4 *)(uVar16 << 3);
                  bVar35 = (undefined4 *)0x7ffffff7 < puVar1;
                  bVar34 = puVar1 == (undefined4 *)0x7ffffff8;
                }
                if (bVar35 && !bVar34) {
LAB_00a60134:
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(uVar27,local_90);
                }
                uVar17 = puVar24[-5];
                if (puVar1 == (undefined4 *)0x0) {
                  local_b8 = 0;
                  local_90 = (undefined4 *)&DAT_00000008;
                }
                else {
                  local_90 = (undefined4 *)thunk_FUN_016d4a50(puVar1);
                  if (local_90 == (undefined4 *)0x0) {
                    uVar27 = 8;
                    local_90 = puVar1;
                    goto LAB_00a60134;
                  }
                  local_b8 = uVar16;
                }
                FUN_016dd1aa(local_90,uVar17,puVar1);
                uVar17 = puVar24[-1];
                if (0xaaaaaaa < uVar17) {
                  uVar27 = 0;
LAB_00a60064:
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(uVar27,local_c0);
                }
                local_c0 = uVar17 * 0xc;
                if (local_c0 == 0) {
                  uVar32 = 0;
                  iVar6 = 4;
                }
                else {
                  uVar26 = puVar24[-2];
                  iVar6 = thunk_FUN_016d4a50(local_c0);
                  if (iVar6 == 0) {
                    uVar27 = 4;
                    goto LAB_00a60064;
                  }
                  uVar32 = uVar17;
                  if (uVar17 != 0) {
                    iVar21 = 0;
                    uVar20 = 0;
                    do {
                      if (local_c0 == iVar21) break;
                      iVar9 = *(int *)(uVar26 + 8);
                      if (iVar9 < 0) {
                        uVar27 = 0;
LAB_00a60088:
                    /* WARNING: Subroutine does not return */
                        FUN_00600af4(uVar27,local_c4);
                      }
                      uVar27 = *(undefined4 *)(uVar26 + 4);
                      if (iVar9 == 0) {
                        local_c4 = 1;
                        local_d0 = 0;
                      }
                      else {
                        local_c4 = thunk_FUN_016d4a50(iVar9);
                        if (local_c4 == 0) {
                          uVar27 = 1;
                          local_c4 = iVar9;
                          goto LAB_00a60088;
                        }
                        local_d0 = iVar9;
                      }
                      uVar20 = uVar20 + 1;
                      uVar26 = uVar26 + 0xc;
                      FUN_016dd1aa(local_c4,uVar27);
                      piVar7 = (int *)(iVar6 + iVar21);
                      *piVar7 = local_d0;
                      iVar21 = iVar21 + 0xc;
                      piVar7[1] = local_c4;
                      piVar7[2] = iVar9;
                    } while (uVar17 != uVar20);
                  }
                }
                uVar12 = uVar12 - 1 & uVar12;
                iVar33 = iVar33 + -1;
                iVar21 = (int)local_9c - (int)puVar24 >> 2;
                puVar29[-5 - iVar21] = local_90;
                puVar29[-4 - iVar21] = uVar16;
                puVar29[-1 - iVar21] = uVar17;
                puVar29[-0xd - iVar21] = uVar5;
                puVar29[-0xc - iVar21] = local_94;
                puVar29[-0xb - iVar21] = local_8c;
                puVar29[-10 - iVar21] = uVar19;
                puVar29[-2 - iVar21] = iVar6;
                puVar29[-9 - iVar21] = local_b0;
                puVar29[-3 - iVar21] = uVar32;
                puVar29[-7 - iVar21] = uVar30;
                puVar29[-8 - iVar21] = unaff_r9;
                puVar29[-6 - iVar21] = local_b8;
                puVar15 = local_9c;
                local_c0 = iVar6;
              } while (iVar33 != 0);
            }
            uVar27 = puVar11[2];
          }
          *puVar3 = puVar29;
          puVar3[1] = iVar8;
          puVar3[2] = uVar27;
          puVar3[3] = iVar4;
        }
        uVar22 = uVar22 - 1;
        iVar8 = *(int *)(iVar10 + 0x24);
        piVar7 = (int *)(local_34 + iVar18 * 0x28);
        *piVar7 = local_3c;
        piVar7[8] = (int)puVar3;
        piVar7[9] = iVar8;
        piVar7[1] = iVar31;
        *(undefined1 *)(piVar7 + 7) = local_44;
        piVar7[4] = iVar28;
        piVar7[5] = iVar23;
        piVar7[6] = iVar28;
        *(undefined1 *)(piVar7 + 3) = uVar13;
        piVar7[2] = local_3c;
        iVar10 = iVar10 + 0x28;
        iVar18 = iVar18 + 1;
      } while (uVar22 != 0);
    }
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = param_3;
  return;
}

