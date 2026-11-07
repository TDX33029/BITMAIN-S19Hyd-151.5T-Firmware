// FUN_016834b8 @ 016834b8 size=3840 calls_out=14 calls_in=6
// strings: no in-progress search to update | no in-progress search to finish | internal error: entered unreachable code: sid being unknown is a bug

void FUN_016834b8(uint *param_1,int param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint extraout_r2;
  uint extraout_r2_00;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  ulonglong uVar23;
  uint local_94;
  uint local_90;
  uint local_88;
  uint local_78 [4];
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58 [4];
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  
  uVar21 = param_4[4];
  uVar13 = param_4[5];
  if (uVar13 < uVar21) {
    *param_1 = 0;
    return;
  }
  if ((char)param_4[6] == '\0') {
    uVar19 = param_4[3];
    if (uVar13 < uVar19) {
      iVar2 = *param_4;
      uVar20 = param_4[1];
      bVar12 = *(byte *)(param_4[2] + uVar13);
      uVar15 = (uint)bVar12;
      iVar18 = thunk_FUN_01bed842(param_2 + 600,"",0x20);
      if (iVar18 != 0) {
        puVar14 = (uint *)(param_2 + 600 + (bVar12 >> 3 & 0xfffffff0));
        local_58[0] = *puVar14;
        local_58[1] = puVar14[1];
        local_58[2] = puVar14[2];
        local_58[3] = puVar14[3];
        uStack_48 = 0;
        local_3c = 0;
        local_40 = 0;
        local_44 = 0;
        if ((local_58[(uVar15 & 0x7f) >> 5] >> (uVar15 & 0x1f) & 1) != 0) goto LAB_01683614;
      }
      uVar15 = (uint)*(byte *)(param_2 + uVar15 + 0x58);
    }
    else {
      iVar2 = *param_4;
      uVar20 = param_4[1];
      uVar15 = 2;
    }
    if (iVar2 == 0) {
      uVar16 = uVar15;
LAB_01683698:
      uVar6 = *(uint *)(param_3 + 0x88);
      if (uVar6 <= uVar16) goto LAB_01684334;
      uVar16 = *(uint *)(*(int *)(param_3 + 0x84) + uVar16 * 4);
      if ((int)uVar16 < 0) {
        local_30 = param_2;
        local_2c = param_3;
        FUN_016c5600(&local_38,&local_30,iVar2,uVar20,uVar15);
        if (local_38 != 5) goto LAB_01683a00;
        uVar16 = local_34;
      }
    }
    else {
      if (iVar2 == 1) {
        uVar16 = uVar15 + 6;
        goto LAB_01683698;
      }
      if ((*(byte *)(param_2 + 0x51) & 1) == 0) {
        local_38 = 2;
        local_34 = uVar20;
        goto LAB_01683a00;
      }
      if (uVar20 < *(uint *)(*(int *)(param_2 + 0x278) + 0x154)) {
        uVar16 = uVar15 + uVar20 * 6 + 0xc;
        goto LAB_01683698;
      }
      uVar16 = FUN_016c4c8c(*(undefined4 *)(param_2 + 0x27c));
    }
    if (uVar21 == uVar13) {
      if (uVar21 == 0) {
        uVar13 = *(byte *)(param_2 + 599) + 1;
        uVar19 = FUN_016c2c08(uVar13);
        uVar15 = *(uint *)(param_3 + 0x7c);
        uVar21 = (uVar19 & 0xffff) >> 8;
        if ((uVar19 & 1) != 0) {
          uVar21 = uVar19 >> 0x10;
        }
        uVar21 = uVar21 + (uVar16 & 0x7ffffff);
        if (uVar15 <= uVar21) goto LAB_01684370;
        uVar21 = *(uint *)(*(int *)(param_3 + 0x78) + uVar21 * 4);
        if ((int)uVar21 < 0) {
          uVar4 = FUN_016c2c08(uVar13);
          local_30 = param_2;
          local_2c = param_3;
          uVar23 = FUN_016c4f08(&local_30,uVar16,uVar4);
        }
        else {
          uVar23 = (ulonglong)uVar21 << 0x20;
        }
        uVar4 = (undefined4)(uVar23 >> 0x20);
        uVar19 = (uint)uVar23;
        if ((uVar23 & 1) == 0) {
          uVar21 = 0;
          if ((uVar23 & 0x800000000000000) == 0) goto LAB_01683ea0;
LAB_01683e70:
          uVar13 = uVar21;
          uVar19 = FUN_01684564(*(undefined4 *)(param_2 + 0x278),*(undefined4 *)(param_2 + 0x27c),
                                *(undefined4 *)(param_3 + 0x90),*(undefined4 *)(param_3 + 0x94),
                                uVar4);
          uVar21 = 1;
LAB_01683ea0:
          *param_1 = uVar21;
          param_1[1] = uVar19;
          param_1[2] = uVar13;
          return;
        }
        goto LAB_01684058;
      }
      if (uVar19 <= uVar21 - 1) {
LAB_0168435c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar21 - 1,uVar19,&DAT_01d076ac);
      }
      uVar7 = *(uint *)(param_3 + 0x7c);
      bVar12 = *(byte *)(param_4[2] + (uVar21 - 1));
      uVar13 = (uint)bVar12;
      uVar3 = (uVar16 & 0x7ffffff) + (uint)*(byte *)(param_2 + uVar13 + 0x158);
      if (uVar7 <= uVar3) goto LAB_01684300;
      uVar19 = *(uint *)(*(int *)(param_3 + 0x78) + uVar3 * 4);
      if ((int)uVar19 < 0) {
        local_30 = param_2;
        local_2c = param_3;
        uVar23 = FUN_016c4f08(&local_30,uVar16,uVar13 << 8);
      }
      else {
        uVar23 = (ulonglong)uVar19 << 0x20;
      }
      uVar4 = (undefined4)(uVar23 >> 0x20);
      uVar19 = (uint)uVar23;
      if ((uVar23 & 1) != 0) goto LAB_01683de4;
      if ((uVar23 & 0x800000000000000) != 0) goto LAB_01683e70;
      if ((uVar23 & 0x2000000000000000) == 0) {
        uVar21 = 0;
        goto LAB_01683ea0;
      }
LAB_0168411c:
      local_2c = uVar21 - 1;
      local_30 = (uint)CONCAT21(local_30._2_2_,bVar12) << 8;
    }
    else {
      uVar13 = uVar13 - 1;
      if ((*(uint *)(param_3 + 0xb0) & 1) != 0) {
        uVar15 = *(uint *)(param_3 + 0xb4);
        uVar20 = *(uint *)(param_3 + 0xb8);
        iVar2 = uVar15 - uVar20;
        if (uVar15 < uVar20 || iVar2 == 0) {
          iVar2 = uVar20 - uVar15;
        }
        *(int *)(param_3 + 0x70) = iVar2 + *(int *)(param_3 + 0x70);
      }
      iVar2 = param_4[2];
      *(undefined4 *)(param_3 + 0xb0) = 1;
      uVar15 = uVar21 + 3;
      if (0xfffffffc < uVar21) {
        uVar15 = 0xffffffff;
      }
      *(uint *)(param_3 + 0xb4) = uVar13;
      iVar8 = param_2 + 0x158;
      *(uint *)(param_3 + 0xb8) = uVar13;
      iVar18 = *(int *)(param_2 + 0x278);
      uVar20 = *(uint *)(param_2 + 0x27c);
      uVar6 = uVar20 & 0x1f;
      local_88 = 0;
      do {
        if (uVar16 < 0x8000000) {
          if (uVar21 <= uVar13) {
            iVar17 = *(int *)(param_3 + 0x78);
            uVar3 = *(uint *)(param_3 + 0x7c);
            do {
              uVar7 = *(uint *)(iVar17 + (uVar16 + *(byte *)(iVar8 + (uint)*(byte *)(iVar2 + uVar13)
                                                            )) * 4);
              if ((0x7ffffff < uVar7) || (uVar13 <= uVar15)) {
LAB_016838c8:
                if (-1 < (int)uVar7) goto LAB_01683914;
                if (*(int *)(param_3 + 0xb0) == 0) goto LAB_016841b4;
                *(uint *)(param_3 + 0xb8) = uVar13;
                uVar7 = uVar16 + *(byte *)(iVar8 + (uint)*(byte *)(iVar2 + uVar13));
                if (uVar3 <= uVar7) goto LAB_0168434c;
                uVar3 = *(uint *)(iVar17 + uVar7 * 4);
                if ((int)uVar3 < 0) {
                  local_30 = param_2;
                  local_2c = param_3;
                  uVar23 = FUN_016c4f08(&local_30,uVar16,(uint)*(byte *)(iVar2 + uVar13) << 8);
                }
                else {
                  uVar23 = (ulonglong)uVar3 << 0x20;
                }
                uVar7 = (uint)(uVar23 >> 0x20);
                if ((uVar23 & 1) == 0) goto LAB_01683914;
                uVar1 = 1;
                local_2c = uVar13;
                goto LAB_01684124;
              }
              iVar10 = iVar2 + uVar13;
              uVar16 = *(uint *)(iVar17 + (uVar7 + *(byte *)(iVar8 + (uint)*(byte *)(iVar10 + -1)))
                                          * 4);
              if (0x7ffffff < uVar16) {
                uVar13 = uVar13 - 1;
                uVar11 = uVar16;
LAB_016838c4:
                uVar16 = uVar7;
                uVar7 = uVar11;
                goto LAB_016838c8;
              }
              uVar7 = *(uint *)(iVar17 + (uVar16 + *(byte *)(iVar8 + (uint)*(byte *)(iVar10 + -2)))
                                         * 4);
              if (0x7ffffff < uVar7) {
                uVar13 = uVar13 - 2;
                goto LAB_016838c8;
              }
              uVar16 = *(uint *)(iVar17 + (uVar7 + *(byte *)(iVar8 + (uint)*(byte *)(iVar10 + -3)))
                                          * 4);
              if (0x7ffffff < uVar16) {
                uVar13 = uVar13 - 3;
                uVar11 = uVar16;
                goto LAB_016838c4;
              }
              uVar13 = uVar13 - 4;
            } while (uVar21 <= uVar13);
          }
        }
        else {
          if (*(int *)(param_3 + 0xb0) == 0) goto LAB_016841b4;
          *(uint *)(param_3 + 0xb8) = uVar13;
          if (uVar19 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar13,uVar19,&DAT_01d0764c);
          }
          uVar7 = *(uint *)(param_3 + 0x7c);
          uVar3 = (uVar16 & 0x7ffffff) + (uint)*(byte *)(iVar8 + (uint)*(byte *)(iVar2 + uVar13));
          if (uVar7 <= uVar3) goto LAB_01684300;
          uVar3 = *(uint *)(*(int *)(param_3 + 0x78) + uVar3 * 4);
          if ((int)uVar3 < 0) {
            local_30 = param_2;
            local_2c = param_3;
            uVar23 = FUN_016c4f08(&local_30,uVar16,(uint)*(byte *)(iVar2 + uVar13) << 8);
          }
          else {
            uVar23 = (ulonglong)uVar3 << 0x20;
          }
          uVar7 = (uint)(uVar23 >> 0x20);
          if ((uVar23 & 1) != 0) {
            uVar1 = 1;
            local_2c = uVar13;
            goto LAB_01684124;
          }
LAB_01683914:
          uVar16 = uVar7;
          if ((0x7ffffff < uVar7) && ((uVar7 & 0x10000000) == 0)) {
            if ((uVar7 & 0x8000000) == 0) {
              if ((uVar7 & 0x40000000) != 0) {
                FUN_01684408(param_3,uVar13);
                *param_1 = local_88;
                param_1[1] = local_90;
                param_1[2] = local_94;
                return;
              }
              if ((uVar7 & 0x20000000) == 0) goto LAB_016842e8;
              FUN_01684408(param_3,uVar13);
              if (uVar19 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar13,uVar19,&DAT_01d0766c);
              }
              uVar1 = *(undefined1 *)(iVar2 + uVar13);
              local_2c = uVar13;
              goto LAB_01684038;
            }
            local_90 = 0;
            if (*(int *)(iVar18 + 0x154) != 1) {
              uVar3 = (uVar7 & 0x7ffffff) >> uVar6;
              if (*(uint *)(param_3 + 0x94) <= (uVar7 & 0x7ffffff) >> uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar3,*(uint *)(param_3 + 0x94),&DAT_01d09420);
              }
              puVar5 = (undefined4 *)(*(int *)(param_3 + 0x90) + uVar3 * 8);
              local_90 = FUN_0168c724(*puVar5,puVar5[1],0);
            }
            local_94 = uVar13 + 1;
            local_88 = 1;
          }
        }
        bVar22 = uVar13 != uVar21;
        uVar13 = uVar13 - 1;
      } while (bVar22);
      uVar13 = *(uint *)(param_3 + 0xb0);
      uVar15 = *(uint *)(param_3 + 0xb4);
      *(undefined4 *)(param_3 + 0xb0) = 0;
      if ((uVar13 & 1) == 0) goto LAB_01684244;
      iVar8 = uVar21 - uVar15;
      if (uVar21 < uVar15) {
        iVar8 = uVar15 - uVar21;
      }
      *(int *)(param_3 + 0x70) = *(int *)(param_3 + 0x70) + iVar8;
      if (uVar21 == 0) {
        uVar23 = FUN_0168445c(param_2,param_3,uVar16);
        uVar4 = (undefined4)(uVar23 >> 0x20);
        if ((uVar23 & 1) == 0) {
          if ((uVar23 & 0x800000000000000) == 0) goto LAB_01683ffc;
          uVar21 = 0;
LAB_01683fe0:
          local_94 = uVar21;
          local_90 = FUN_01684564(iVar18,uVar20,*(undefined4 *)(param_3 + 0x90),
                                  *(undefined4 *)(param_3 + 0x94),uVar4);
          local_88 = 1;
LAB_01683ffc:
          *param_1 = local_88;
          param_1[1] = local_90;
          param_1[2] = local_94;
          return;
        }
        goto LAB_01684058;
      }
      uVar13 = uVar21 - 1;
      if (uVar19 <= uVar13) goto LAB_0168435c;
      uVar1 = *(undefined1 *)(iVar2 + uVar13);
      uVar23 = FUN_016844ec(param_2,param_3,uVar16,uVar1);
      uVar4 = (undefined4)(uVar23 >> 0x20);
      if ((uVar23 & 1) != 0) goto LAB_01683de4;
      if ((uVar23 & 0x800000000000000) != 0) goto LAB_01683fe0;
      if ((uVar23 & 0x2000000000000000) == 0) goto LAB_01683ffc;
      local_30 = (uint)CONCAT21(local_30._2_2_,uVar1) << 8;
      local_2c = uVar13;
    }
LAB_01684120:
    uVar1 = 0;
  }
  else {
    uVar19 = param_4[3];
    if (uVar19 <= uVar13) {
      iVar18 = *param_4;
      uVar15 = 2;
      uVar20 = param_4[1];
LAB_0168362c:
      if (iVar18 == 0) {
        uVar16 = uVar15;
LAB_01683ae4:
        uVar6 = *(uint *)(param_3 + 0x88);
        if (uVar6 <= uVar16) {
LAB_01684334:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar16,uVar6,&DAT_01d084ec);
        }
        uVar16 = *(uint *)(*(int *)(param_3 + 0x84) + uVar16 * 4);
        if ((int)uVar16 < 0) {
          local_30 = param_2;
          local_2c = param_3;
          FUN_016c5600(&local_38,&local_30,iVar18,uVar20,uVar15);
          if (local_38 != 5) goto LAB_01683a00;
          uVar16 = local_34;
        }
      }
      else {
        if (iVar18 != 2) {
          uVar16 = uVar15 + 6;
          goto LAB_01683ae4;
        }
        if ((*(byte *)(param_2 + 0x51) & 1) == 0) {
          local_38 = 2;
          local_34 = uVar20;
          goto LAB_01683a00;
        }
        if (uVar20 < *(uint *)(*(int *)(param_2 + 0x278) + 0x154)) {
          uVar16 = uVar15 + uVar20 * 6 + 0xc;
          goto LAB_01683ae4;
        }
        uVar16 = FUN_016c4c8c(*(undefined4 *)(param_2 + 0x27c));
      }
      if (uVar21 != uVar13) {
        uVar13 = uVar13 - 1;
        if ((*(uint *)(param_3 + 0xb0) & 1) != 0) {
          uVar15 = *(uint *)(param_3 + 0xb4);
          uVar20 = *(uint *)(param_3 + 0xb8);
          iVar2 = uVar15 - uVar20;
          if (uVar15 < uVar20 || iVar2 == 0) {
            iVar2 = uVar20 - uVar15;
          }
          *(int *)(param_3 + 0x70) = iVar2 + *(int *)(param_3 + 0x70);
        }
        iVar2 = param_4[2];
        *(undefined4 *)(param_3 + 0xb0) = 1;
        uVar15 = uVar21 + 3;
        if (0xfffffffc < uVar21) {
          uVar15 = 0xffffffff;
        }
        *(uint *)(param_3 + 0xb4) = uVar13;
        iVar18 = param_2 + 0x158;
        *(uint *)(param_3 + 0xb8) = uVar13;
        do {
          if (0x7ffffff < uVar16) {
            if (*(int *)(param_3 + 0xb0) == 0) {
LAB_016841b4:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("no in-progress search to update",0x1f,&DAT_01d0760c);
            }
            *(uint *)(param_3 + 0xb8) = uVar13;
            if (uVar13 < uVar19) {
              uVar20 = (uint)*(byte *)(iVar2 + uVar13);
              uVar7 = *(uint *)(param_3 + 0x7c);
              uVar3 = (uVar16 & 0x7ffffff) + (uint)*(byte *)(iVar18 + uVar20);
              if (uVar7 <= uVar3) goto LAB_01684300;
              uVar6 = *(uint *)(*(int *)(param_3 + 0x78) + uVar3 * 4);
              if ((int)uVar6 < 0) {
LAB_01683d7c:
                local_30 = param_2;
                local_2c = param_3;
                uVar23 = FUN_016c4f08(&local_30,uVar16,uVar20 << 8);
              }
              else {
LAB_01683c10:
                uVar23 = (ulonglong)uVar6 << 0x20;
              }
              uVar6 = (uint)(uVar23 >> 0x20);
              if ((uVar23 & 1) != 0) {
                uVar1 = 1;
                local_2c = uVar13;
                goto LAB_01684124;
              }
LAB_01683c1c:
              if ((uVar6 < 0x8000000) || ((uVar6 & 0x10000000) != 0)) {
                uVar16 = uVar6;
                goto LAB_01683c44;
              }
              if ((uVar6 & 0x8000000) != 0) {
                uVar21 = FUN_01684564(*(undefined4 *)(param_2 + 0x278),
                                      *(undefined4 *)(param_2 + 0x27c),
                                      *(undefined4 *)(param_3 + 0x90),
                                      *(undefined4 *)(param_3 + 0x94),uVar6);
                FUN_01684408(param_3,uVar13);
                *param_1 = 1;
                param_1[1] = uVar21;
                param_1[2] = uVar13 + 1;
                return;
              }
              if ((uVar6 & 0x40000000) != 0) {
                FUN_01684408(param_3,uVar13);
                *param_1 = 0;
                return;
              }
              if ((uVar6 & 0x20000000) == 0) {
LAB_016842e8:
                    /* WARNING: Subroutine does not return */
                FUN_012fb100("internal error: entered unreachable code: sid being unknown is a bug",
                             0x89,&DAT_01d0765c);
              }
              FUN_01684408(param_3,uVar13);
              if (uVar13 < uVar19) {
                uVar1 = *(undefined1 *)(iVar2 + uVar13);
                local_2c = uVar13;
LAB_01684038:
                local_30 = (uint)CONCAT21(local_30._2_2_,uVar1) << 8;
                goto LAB_01684120;
              }
              puVar9 = &DAT_01d0766c;
            }
            else {
              puVar9 = &DAT_01d0764c;
            }
            goto LAB_01684328;
          }
          if (uVar21 <= uVar13) {
            iVar8 = *(int *)(param_3 + 0x78);
            uVar3 = *(uint *)(param_3 + 0x7c);
            do {
              uVar20 = *(uint *)(iVar8 + (uVar16 + *(byte *)(iVar18 + (uint)*(byte *)(iVar2 + uVar13
                                                                                     ))) * 4);
              if ((0x7ffffff < uVar20) || (uVar13 <= uVar15)) {
                uVar6 = uVar20;
LAB_01683d10:
                if (-1 < (int)uVar6) goto LAB_01683c1c;
                if (*(int *)(param_3 + 0xb0) == 0) goto LAB_016841b4;
                *(uint *)(param_3 + 0xb8) = uVar13;
                uVar20 = (uint)*(byte *)(iVar2 + uVar13);
                uVar7 = uVar16 + *(byte *)(iVar18 + uVar20);
                if (uVar3 <= uVar7) {
LAB_0168434c:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(uVar7,uVar3,&DAT_01d084bc);
                }
                uVar6 = *(uint *)(iVar8 + uVar7 * 4);
                if ((int)uVar6 < 0) goto LAB_01683d7c;
                goto LAB_01683c10;
              }
              iVar17 = iVar2 + uVar13;
              uVar16 = *(uint *)(iVar8 + (uVar20 + *(byte *)(iVar18 + (uint)*(byte *)(iVar17 + -1)))
                                         * 4);
              if (0x7ffffff < uVar16) {
                uVar13 = uVar13 - 1;
                uVar6 = uVar16;
                uVar16 = uVar20;
                goto LAB_01683d10;
              }
              uVar20 = *(uint *)(iVar8 + (uVar16 + *(byte *)(iVar18 + (uint)*(byte *)(iVar17 + -2)))
                                         * 4);
              if (0x7ffffff < uVar20) {
                uVar13 = uVar13 - 2;
                uVar6 = uVar20;
                goto LAB_01683d10;
              }
              uVar16 = *(uint *)(iVar8 + (uVar20 + *(byte *)(iVar18 + (uint)*(byte *)(iVar17 + -3)))
                                         * 4);
              if (0x7ffffff < uVar16) {
                uVar13 = uVar13 - 3;
                uVar6 = uVar16;
                uVar16 = uVar20;
                goto LAB_01683d10;
              }
              uVar13 = uVar13 - 4;
            } while (uVar21 <= uVar13);
          }
LAB_01683c44:
          bVar22 = uVar13 != uVar21;
          uVar13 = uVar13 - 1;
        } while (bVar22);
        uVar13 = *(uint *)(param_3 + 0xb0);
        uVar15 = *(uint *)(param_3 + 0xb4);
        *(undefined4 *)(param_3 + 0xb0) = 0;
        if ((uVar13 & 1) == 0) {
LAB_01684244:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("no in-progress search to finish",0x1f,&DAT_01d075fc);
        }
        iVar18 = uVar21 - uVar15;
        if (uVar21 < uVar15) {
          iVar18 = uVar15 - uVar21;
        }
        *(int *)(param_3 + 0x70) = *(int *)(param_3 + 0x70) + iVar18;
        if (uVar21 == 0) {
          uVar23 = FUN_0168445c(param_2,param_3,uVar16);
          uVar4 = (undefined4)(uVar23 >> 0x20);
          uVar13 = (uint)uVar23;
          if ((uVar23 & 1) != 0) goto LAB_01684058;
          uVar21 = 0;
          if ((uVar23 & 0x800000000000000) == 0) {
            uVar19 = 0;
            goto LAB_0168418c;
          }
        }
        else {
          uVar15 = uVar21 - 1;
          if (uVar19 <= uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar15,uVar19,&DAT_01d076ac);
          }
          uVar1 = *(undefined1 *)(iVar2 + uVar15);
          uVar23 = FUN_016844ec(param_2,param_3,uVar16,uVar1);
          uVar4 = (undefined4)(uVar23 >> 0x20);
          uVar13 = (uint)uVar23;
          if ((uVar23 & 1) != 0) goto LAB_01683de4;
          if ((uVar23 & 0x800000000000000) == 0) {
            if ((uVar23 & 0x2000000000000000) == 0) {
              uVar19 = 0;
              goto LAB_0168418c;
            }
            local_30 = (uint)CONCAT21(local_30._2_2_,uVar1) << 8;
            local_2c = uVar15;
            goto LAB_01684120;
          }
        }
        uVar13 = FUN_01684564(*(undefined4 *)(param_2 + 0x278),*(undefined4 *)(param_2 + 0x27c),
                              *(undefined4 *)(param_3 + 0x90),*(undefined4 *)(param_3 + 0x94),uVar4)
        ;
        uVar19 = 1;
LAB_0168418c:
        param_1[1] = uVar13;
        param_1[2] = uVar21;
        *param_1 = uVar19;
        return;
      }
      if (uVar21 == 0) {
        iVar2 = *(byte *)(param_2 + 599) + 1;
        uVar13 = FUN_016c2c08(iVar2);
        uVar15 = *(uint *)(param_3 + 0x7c);
        uVar19 = (uVar13 & 0xffff) >> 8;
        if ((uVar13 & 1) != 0) {
          uVar19 = uVar13 >> 0x10;
        }
        uVar21 = uVar19 + (uVar16 & 0x7ffffff);
        if (uVar15 <= uVar21) {
LAB_01684370:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar21,uVar15,&DAT_01d084cc);
        }
        uVar13 = *(uint *)(*(int *)(param_3 + 0x78) + uVar21 * 4);
        if ((int)uVar13 < 0) {
          uVar4 = FUN_016c2c08(iVar2);
          local_30 = param_2;
          local_2c = param_3;
          uVar23 = FUN_016c4f08(&local_30,uVar16,uVar4);
          uVar19 = extraout_r2_00;
        }
        else {
          uVar23 = (ulonglong)uVar13 << 0x20;
        }
        uVar4 = (undefined4)(uVar23 >> 0x20);
        uVar13 = (uint)uVar23;
        if ((uVar23 & 1) != 0) {
LAB_01684058:
          local_30 = CONCAT31(local_30._1_3_,1);
          local_2c = 0;
          goto LAB_01684128;
        }
        uVar21 = 0;
        if ((uVar23 & 0x800000000000000) == 0) goto LAB_01683f30;
      }
      else {
        uVar13 = uVar21 - 1;
        if (uVar19 <= uVar13) {
          puVar9 = &DAT_01d076ac;
LAB_01684328:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar13,uVar19,puVar9);
        }
        uVar19 = uVar16 & 0x7ffffff;
        uVar7 = *(uint *)(param_3 + 0x7c);
        bVar12 = *(byte *)(param_4[2] + uVar13);
        uVar3 = uVar19 + *(byte *)(param_2 + (uint)bVar12 + 0x158);
        if (uVar7 <= uVar3) {
LAB_01684300:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,uVar7,&DAT_01d084bc);
        }
        uVar13 = *(uint *)(*(int *)(param_3 + 0x78) + uVar3 * 4);
        if ((int)uVar13 < 0) {
          local_30 = param_2;
          local_2c = param_3;
          uVar23 = FUN_016c4f08(&local_30,uVar16,(uint)bVar12 << 8);
          uVar19 = extraout_r2;
        }
        else {
          uVar23 = (ulonglong)uVar13 << 0x20;
        }
        uVar4 = (undefined4)(uVar23 >> 0x20);
        uVar13 = (uint)uVar23;
        if ((uVar23 & 1) != 0) {
LAB_01683de4:
          uVar1 = 1;
          local_2c = uVar21;
          goto LAB_01684124;
        }
        if ((uVar23 & 0x800000000000000) == 0) {
          if ((uVar23 & 0x2000000000000000) == 0) {
            uVar21 = 0;
            goto LAB_01683f30;
          }
          goto LAB_0168411c;
        }
      }
      uVar19 = uVar21;
      uVar13 = FUN_01684564(*(undefined4 *)(param_2 + 0x278),*(undefined4 *)(param_2 + 0x27c),
                            *(undefined4 *)(param_3 + 0x90),*(undefined4 *)(param_3 + 0x94),uVar4);
      uVar21 = 1;
LAB_01683f30:
      param_1[1] = uVar13;
      param_1[2] = uVar19;
      *param_1 = uVar21;
      return;
    }
    iVar18 = *param_4;
    uVar20 = param_4[1];
    bVar12 = *(byte *)(param_4[2] + uVar13);
    uVar15 = (uint)bVar12;
    iVar2 = thunk_FUN_01bed842(param_2 + 600,"",0x20);
    if (iVar2 == 0) {
LAB_0168357c:
      uVar15 = (uint)*(byte *)(param_2 + uVar15 + 0x58);
      goto LAB_0168362c;
    }
    puVar14 = (uint *)(param_2 + 600 + (bVar12 >> 3 & 0xfffffff0));
    local_78[0] = *puVar14;
    local_78[1] = puVar14[1];
    local_78[2] = puVar14[2];
    local_78[3] = puVar14[3];
    uStack_68 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0;
    if ((local_78[(uVar15 & 0x7f) >> 5] >> (uVar15 & 0x1f) & 1) == 0) goto LAB_0168357c;
LAB_01683614:
    local_38 = 4;
    local_34 = uVar15;
LAB_01683a00:
    iVar2 = 2;
    if (2 < local_38) {
      iVar2 = local_38 - 3;
    }
    local_2c = uVar13;
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      if (iVar2 == 1) {
        local_30 = (uint)CONCAT21(local_30._2_2_,(char)local_34) << 8;
        goto LAB_01684120;
      }
      uVar1 = 3;
      local_2c = local_38;
      local_28 = local_34;
    }
  }
LAB_01684124:
  local_30 = CONCAT31(local_30._1_3_,uVar1);
LAB_01684128:
  uVar13 = FUN_016cc61c(&local_30);
  *param_1 = 2;
  param_1[1] = uVar13;
  return;
}

