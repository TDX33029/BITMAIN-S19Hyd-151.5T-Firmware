// FUN_01687998 @ 01687998 size=4456 calls_out=15 calls_in=2
// strings: no in-progress search to update | no in-progress search to finish | assertion failed: id.is_match() | no in-progress search to finish | internal error: entered unreachable code: sid being unknown is a bug

undefined4 FUN_01687998(int param_1,uint param_2,int *param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  uint3 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint *puVar22;
  char *pcVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  ulonglong uVar29;
  uint local_b0 [4];
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90 [4];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70 [4];
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  code *local_30;
  uint *local_2c;
  code *local_28;
  
  uVar24 = param_3[4];
  uVar26 = param_3[5];
  *param_4 = 0;
  if (uVar26 < uVar24) {
    return 0;
  }
  iVar15 = *param_3;
  uVar18 = param_3[1];
  if (1 < iVar15 - 1U) {
    pcVar23 = "";
    if (*(char *)(param_1 + 0x4c) != '\x03') {
      pcVar23 = (char *)(param_1 + 0x40);
    }
    if ((char)*(int *)((int)pcVar23 + 0xc) == '\x02') goto LAB_016879fc;
    iVar5 = *(int *)(param_1 + 0x278);
    uVar25 = *(uint *)(iVar5 + 0x134);
    if (param_4[3] == 1) {
      uVar21 = param_4[4];
      if (param_4[5] != 0) {
        if ((uVar21 & 0x8000000) == 0) goto LAB_01688910;
        uVar10 = *(uint *)(param_1 + 0x27c);
        uVar19 = uVar10 & 0x1f;
        uVar8 = *(uint *)(param_2 + 0x94);
        uVar24 = (uVar21 & 0x7ffffff) >> uVar19;
        if (uVar8 <= (uVar21 & 0x7ffffff) >> uVar19) goto LAB_01688ad8;
        uVar8 = param_4[6];
        puVar9 = (undefined4 *)(*(int *)(param_2 + 0x90) + uVar24 * 8);
        uVar24 = FUN_0168c7ac(*puVar9,puVar9[1]);
        if (uVar8 < uVar24) {
          param_4[5] = 1;
          param_4[6] = uVar8 + 1;
          iVar15 = 0;
          if (*(int *)(iVar5 + 0x154) != 1) {
            puVar9 = (undefined4 *)
                     FUN_016c55cc(uVar10,*(undefined4 *)(param_2 + 0x90),
                                  *(undefined4 *)(param_2 + 0x94),uVar21);
            iVar15 = FUN_0168c724(*puVar9,puVar9[1],uVar8);
          }
          goto LAB_01687c74;
        }
      }
      uVar8 = param_4[7] + 1;
      param_4[7] = uVar8;
      if (uVar26 < uVar8) {
        return 0;
      }
LAB_016881cc:
      if ((*(uint *)(param_2 + 0xb0) & 1) != 0) {
        uVar24 = *(uint *)(param_2 + 0xb4);
        uVar10 = *(uint *)(param_2 + 0xb8);
        iVar11 = uVar24 - uVar10;
        if (uVar24 < uVar10 || iVar11 == 0) {
          iVar11 = uVar10 - uVar24;
        }
        *(int *)(param_2 + 0x70) = iVar11 + *(int *)(param_2 + 0x70);
      }
      *(undefined4 *)(param_2 + 0xb0) = 1;
      *(uint *)(param_2 + 0xb4) = uVar8;
      *(uint *)(param_2 + 0xb8) = uVar8;
      if (uVar8 < uVar26) {
        iVar12 = param_3[2];
        uVar6 = *(undefined4 *)(param_1 + 0x27c);
        bVar1 = *(byte *)(param_1 + 0x51);
        uVar19 = param_3[3];
        iVar11 = *(int *)pcVar23;
        iVar13 = *(int *)((int)pcVar23 + 4);
        do {
          if (uVar19 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar8,uVar19,&DAT_01d0767c);
          }
          uVar10 = *(uint *)(param_2 + 0x7c);
          uVar24 = (uVar21 & 0x7ffffff) +
                   (uint)*(byte *)(param_1 + 0x158 + (uint)*(byte *)(iVar12 + uVar8));
          if (uVar10 <= uVar24) goto LAB_01688a90;
          uVar24 = *(uint *)(*(int *)(param_2 + 0x78) + uVar24 * 4);
          if ((int)uVar24 < 0) {
            local_34 = (uint *)param_1;
            local_30 = (code *)param_2;
            uVar29 = FUN_016c4f08(&local_34,uVar21,(uint)*(byte *)(iVar12 + uVar8) << 8);
          }
          else {
            uVar29 = (ulonglong)uVar24 << 0x20;
          }
          uVar21 = (uint)(uVar29 >> 0x20);
          if ((uVar29 & 1) != 0) goto LAB_01688568;
          if (uVar29 < 0x800000000000000) {
            uVar8 = param_4[7];
LAB_01688428:
            iVar7 = *(int *)(param_2 + 0xb0);
            uVar8 = uVar8 + 1;
            param_4[7] = uVar8;
            if (iVar7 == 0) goto LAB_0168882c;
            *(uint *)(param_2 + 0xb8) = uVar8;
          }
          else {
            param_4[3] = 1;
            param_4[4] = uVar21;
            if ((uVar29 & 0x1000000000000000) == 0) {
              if ((uVar29 & 0x800000000000000) != 0) {
                uVar14 = *(undefined4 *)(param_2 + 0x90);
                uVar17 = *(undefined4 *)(param_2 + 0x94);
                param_4[5] = 1;
                param_4[6] = 1;
                iVar15 = FUN_01684564(iVar5,uVar6,uVar14,uVar17,uVar21);
                iVar5 = param_4[7];
                *param_4 = 1;
                goto LAB_01688724;
              }
              if ((uVar29 & 0x4000000000000000) != 0) goto LAB_016887e4;
              if ((uVar29 & 0x2000000000000000) == 0) goto LAB_01688a78;
              FUN_01684408(param_2,param_4[7]);
              uVar24 = param_4[7];
              if (uVar19 <= uVar24) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar24,uVar19,&DAT_01d0769c);
              }
              uVar4 = *(undefined1 *)(iVar12 + uVar24);
              goto LAB_016880c8;
            }
            (**(code **)(iVar13 + 0x10))
                      (&local_50,iVar11 + 8 + (*(int *)(iVar13 + 8) - 1U & 0xfffffff8),iVar12,uVar19
                       ,param_4[7],uVar26);
            uVar24 = local_4c;
            if (local_50 != 1) {
              return 0;
            }
            uVar8 = param_4[7];
            if (local_4c <= uVar8) goto LAB_01688428;
            param_4[7] = local_4c;
            if (uVar25 == 0) {
              uVar8 = local_4c;
              goto LAB_01688444;
            }
            bVar28 = uVar19 <= uVar26;
            bVar27 = uVar26 == uVar19;
            uVar21 = uVar25;
            if (!bVar28 || bVar27) {
              uVar21 = uVar26 + 1;
            }
            local_40 = local_4c;
            if (!bVar28 || bVar27) {
              bVar28 = uVar21 <= local_4c;
              bVar27 = local_4c == uVar21;
            }
            local_3c = uVar26;
            if (bVar28 && !bVar27) {
              local_30 = FUN_0065fd28;
              local_34 = &local_40;
              local_28 = FUN_012fd02c;
              local_2c = &local_38;
              local_38 = uVar19;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_005a4e9e,&local_34,&DAT_01d08154);
            }
            uVar8 = local_4c - 1;
            if (uVar8 < uVar19) {
              bVar2 = *(byte *)(iVar12 + uVar8);
              uVar21 = (uint)bVar2;
              iVar7 = thunk_FUN_01bed842(param_1 + 600,"",0x20);
              if (iVar7 == 0) {
LAB_016883ec:
                uVar16 = (uint)*(byte *)(param_1 + 0x58 + uVar21);
                goto LAB_01688460;
              }
              puVar22 = (uint *)(param_1 + 600 + (bVar2 >> 3 & 0xfffffff0));
              local_90[3] = puVar22[3];
              local_90[0] = *puVar22;
              local_90[1] = puVar22[1];
              local_90[2] = puVar22[2];
              local_74 = 0;
              local_78 = 0;
              local_7c = 0;
              local_80 = 0;
              if ((local_90[(uVar21 & 0x7f) >> 5] >> (uVar21 & 0x1f) & 1) == 0) goto LAB_016883ec;
              local_50 = 4;
              local_4c = uVar21;
LAB_01688864:
              iVar15 = 2;
              if (2 < local_50) {
                iVar15 = local_50 - 3;
              }
              if (iVar15 == 0) goto LAB_01688890;
              if (iVar15 != 1) goto LAB_01688880;
              goto LAB_01687f1c;
            }
            uVar16 = 2;
LAB_01688460:
            if (iVar15 == 0) {
              uVar10 = uVar16;
LAB_016884a4:
              uVar21 = *(uint *)(param_2 + 0x88);
              if (uVar21 <= uVar10) goto LAB_01688acc;
              uVar21 = *(uint *)(*(int *)(param_2 + 0x84) + uVar10 * 4);
              if (-1 < (int)uVar21) goto LAB_016884c0;
              local_34 = (uint *)param_1;
              local_30 = (code *)param_2;
              FUN_016c5600(&local_40,&local_34,iVar15,uVar18,uVar16);
              if (local_40 != 5) {
                local_50 = local_40;
                local_4c = local_3c;
                goto LAB_01688864;
              }
            }
            else {
              if (iVar15 != 2) {
                uVar10 = uVar16 + 6;
                goto LAB_016884a4;
              }
              if ((bVar1 & 1) == 0) {
                local_50 = 2;
                local_4c = uVar18;
                goto LAB_01688864;
              }
              if (uVar18 < *(uint *)(iVar5 + 0x154)) {
                uVar10 = uVar18 * 6 + 0xc + uVar16;
                goto LAB_016884a4;
              }
              uVar21 = FUN_016c4c8c(uVar6);
LAB_016884c0:
              local_3c = uVar21;
            }
            uVar21 = local_3c;
            uVar8 = param_4[7];
          }
LAB_01688444:
        } while (uVar8 < uVar26);
      }
      else {
        uVar19 = param_3[3];
      }
      if (uVar26 < uVar19) {
        uVar10 = *(uint *)(param_2 + 0x7c);
        bVar1 = *(byte *)(param_3[2] + uVar26);
        uVar24 = (uVar21 & 0x7ffffff) + (uint)*(byte *)(param_1 + (uint)bVar1 + 0x158);
        if (uVar10 <= uVar24) goto LAB_01688a90;
        uVar24 = *(uint *)(*(int *)(param_2 + 0x78) + uVar24 * 4);
        if ((int)uVar24 < 0) {
          local_34 = (uint *)param_1;
          local_30 = (code *)param_2;
          uVar29 = FUN_016c4f08(&local_34,uVar21,(uint)bVar1 << 8);
        }
        else {
          uVar29 = (ulonglong)uVar24 << 0x20;
        }
        uVar24 = (uint)(uVar29 >> 0x20);
        if ((uVar29 & 1) != 0) {
          local_30 = (code *)uVar26;
          goto LAB_01688640;
        }
        if ((uVar29 & 0x800000000000000) == 0) {
          uVar6 = 0;
          if ((uVar29 & 0x2000000000000000) != 0) {
            local_34 = (uint *)((uint)CONCAT21((short)((uint)local_34 >> 0x10),bVar1) << 8);
            local_30 = (code *)uVar26;
            uVar6 = FUN_016cc61c(&local_34);
          }
          goto LAB_01688654;
        }
        uVar19 = uVar26;
LAB_0168873c:
        iVar15 = FUN_01684564(iVar5,*(undefined4 *)(param_1 + 0x27c),*(undefined4 *)(param_2 + 0x90)
                              ,*(undefined4 *)(param_2 + 0x94),uVar24);
        param_4[1] = iVar15;
        param_4[2] = uVar19;
        uVar6 = 0;
        *param_4 = 1;
        param_4[3] = 1;
        param_4[4] = uVar24;
LAB_01688768:
        param_4[5] = 1;
        param_4[6] = 1;
      }
      else {
        iVar15 = *(byte *)(param_1 + 599) + 1;
        uVar18 = FUN_016c2c08(iVar15);
        uVar25 = *(uint *)(param_2 + 0x7c);
        uVar24 = (uVar18 & 0xffff) >> 8;
        if ((uVar18 & 1) != 0) {
          uVar24 = uVar18 >> 0x10;
        }
        uVar24 = uVar24 + (uVar21 & 0x7ffffff);
        if (uVar25 <= uVar24) goto LAB_01688ae4;
        uVar24 = *(uint *)(*(int *)(param_2 + 0x78) + uVar24 * 4);
        if ((int)uVar24 < 0) {
          uVar6 = FUN_016c2c08(iVar15);
          local_34 = (uint *)param_1;
          local_30 = (code *)param_2;
          uVar29 = FUN_016c4f08(&local_34,uVar21,uVar6);
        }
        else {
          uVar29 = (ulonglong)uVar24 << 0x20;
        }
        uVar24 = (uint)(uVar29 >> 0x20);
        if ((uVar29 & 1) == 0) {
          uVar6 = 0;
          if ((uVar29 & 0x800000000000000) != 0) goto LAB_0168873c;
        }
        else {
          local_30 = (code *)uVar19;
LAB_01688640:
          local_34 = (uint *)CONCAT31(local_34._1_3_,1);
          uVar6 = FUN_016cc61c(&local_34);
          uVar24 = uVar21;
        }
LAB_01688654:
        param_4[3] = 1;
        param_4[4] = uVar24;
        if (*param_4 != 0) goto LAB_01688768;
      }
      uVar24 = *(uint *)(param_2 + 0xb0);
      uVar18 = *(uint *)(param_2 + 0xb4);
      *(undefined4 *)(param_2 + 0xb0) = 0;
      if ((uVar24 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("no in-progress search to finish",0x1f,&DAT_01d075fc);
      }
      iVar15 = uVar26 - uVar18;
      iVar5 = *(int *)(param_2 + 0x70);
      if (uVar26 < uVar18) {
        iVar15 = uVar18 - uVar26;
      }
      goto LAB_01688798;
    }
    uVar8 = uVar24 - 1;
    param_4[7] = uVar24;
    if ((uVar24 == 0) || ((uint)param_3[3] <= uVar8)) {
      uVar10 = 2;
LAB_016881ac:
      uVar21 = *(uint *)(param_2 + 0x88);
      if (uVar21 <= uVar10) goto LAB_01688acc;
      uVar21 = *(uint *)(*(int *)(param_2 + 0x84) + uVar10 * 4);
      if ((int)uVar21 < 0) {
        local_34 = (uint *)param_1;
        local_30 = (code *)param_2;
        FUN_016c5600(&local_50,&local_34,iVar15,uVar18,uVar10);
        if (local_50 != 5) goto LAB_01687d28;
        uVar21 = local_4c;
      }
      uVar8 = param_4[7];
      goto LAB_016881cc;
    }
    bVar1 = *(byte *)(param_3[2] + uVar8);
    uVar21 = (uint)bVar1;
    iVar11 = thunk_FUN_01bed842(param_1 + 600,"",0x20);
    if (iVar11 == 0) {
LAB_0168818c:
      uVar10 = (uint)*(byte *)(param_1 + uVar21 + 0x58);
      goto LAB_016881ac;
    }
    puVar22 = (uint *)(param_1 + 600 + (bVar1 >> 3 & 0xfffffff0));
    local_70[0] = *puVar22;
    local_70[1] = puVar22[1];
    local_70[2] = puVar22[2];
    local_70[3] = puVar22[3];
    uStack_60 = 0;
    local_54 = 0;
    local_58 = 0;
    local_5c = 0;
    if ((local_70[(uVar21 & 0x7f) >> 5] >> (uVar21 & 0x1f) & 1) == 0) goto LAB_0168818c;
    local_50 = 4;
    local_4c = uVar21;
LAB_01687d28:
    iVar15 = 2;
    if (2 < local_50) {
      iVar15 = local_50 - 3;
    }
    if (iVar15 != 0) {
      if (iVar15 != 1) {
        local_2c = (uint *)local_4c;
        goto LAB_01688884;
      }
      if (uVar24 == 0) goto LAB_01688a60;
      uVar3 = CONCAT21(local_34._2_2_,(char)local_4c);
      local_30 = (code *)uVar8;
      goto LAB_016880d0;
    }
LAB_01688890:
    uVar4 = 1;
    local_30 = (code *)uVar24;
LAB_01688898:
    local_34 = (uint *)CONCAT31(local_34._1_3_,uVar4);
LAB_0168889c:
    uVar6 = FUN_016cc61c(&local_34);
    return uVar6;
  }
LAB_016879fc:
  if (param_4[3] == 1) {
    uVar21 = param_4[4];
    if (param_4[5] != 0) {
      if ((uVar21 & 0x8000000) == 0) {
LAB_01688910:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: id.is_match()",0x1f,&DAT_01d075ec);
      }
      uVar8 = *(uint *)(param_2 + 0x94);
      uVar18 = *(uint *)(param_1 + 0x27c) & 0x1f;
      uVar24 = (uVar21 & 0x7ffffff) >> uVar18;
      if (uVar8 <= (uVar21 & 0x7ffffff) >> uVar18) goto LAB_01688ad8;
      uVar25 = param_4[6];
      puVar9 = (undefined4 *)(*(int *)(param_2 + 0x90) + uVar24 * 8);
      uVar18 = FUN_0168c7ac(*puVar9,puVar9[1]);
      if (uVar25 < uVar18) {
        iVar5 = *(int *)(param_1 + 0x278);
        param_4[5] = 1;
        param_4[6] = uVar25 + 1;
        iVar15 = 0;
        if (*(int *)(iVar5 + 0x154) != 1) {
          uVar8 = *(uint *)(param_2 + 0x94);
          if (uVar8 <= uVar24) goto LAB_01688ad8;
          puVar9 = (undefined4 *)(*(int *)(param_2 + 0x90) + uVar24 * 8);
          iVar15 = FUN_0168c724(*puVar9,puVar9[1],uVar25);
        }
LAB_01687c74:
        *param_4 = 1;
        param_4[1] = iVar15;
        param_4[2] = param_4[7];
        return 0;
      }
    }
    uVar24 = param_4[7] + 1;
    param_4[7] = uVar24;
    if (uVar26 < uVar24) {
      return 0;
    }
  }
  else {
    uVar8 = uVar24 - 1;
    param_4[7] = uVar24;
    if ((uVar24 != 0) && (uVar8 < (uint)param_3[3])) {
      bVar1 = *(byte *)(param_3[2] + uVar8);
      uVar25 = (uint)bVar1;
      iVar5 = thunk_FUN_01bed842(param_1 + 600,"",0x20);
      if (iVar5 == 0) {
LAB_01687d7c:
        uVar25 = (uint)*(byte *)(param_1 + uVar25 + 0x58);
        goto LAB_01687d9c;
      }
      puVar22 = (uint *)(param_1 + 600 + (bVar1 >> 3 & 0xfffffff0));
      local_b0[0] = *puVar22;
      local_b0[1] = puVar22[1];
      local_b0[2] = puVar22[2];
      local_b0[3] = puVar22[3];
      uStack_a0 = 0;
      local_94 = 0;
      local_98 = 0;
      local_9c = 0;
      if ((local_b0[(uVar25 & 0x7f) >> 5] >> (uVar25 & 0x1f) & 1) == 0) goto LAB_01687d7c;
      local_50 = 4;
      local_4c = uVar25;
LAB_01687ef8:
      iVar15 = 2;
      if (2 < local_50) {
        iVar15 = local_50 - 3;
      }
      if (iVar15 == 0) goto LAB_01688890;
      if (iVar15 == 1) {
        if (uVar24 == 0) {
LAB_01688a60:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c(&DAT_004ce84e,0x24,&DAT_01d084dc);
        }
LAB_01687f1c:
        uVar4 = (undefined1)local_4c;
        local_30 = (code *)uVar8;
LAB_016880cc:
        uVar3 = CONCAT21(local_34._2_2_,uVar4);
LAB_016880d0:
        local_34 = (uint *)((uint)uVar3 << 8);
        uVar4 = 0;
      }
      else {
LAB_01688880:
        local_2c = (uint *)local_4c;
LAB_01688884:
        uVar4 = 3;
        local_30 = (code *)local_50;
      }
      goto LAB_01688898;
    }
    uVar25 = 2;
LAB_01687d9c:
    if (iVar15 == 0) {
      uVar10 = uVar25;
LAB_01687db8:
      uVar21 = *(uint *)(param_2 + 0x88);
      if (uVar21 <= uVar10) {
LAB_01688acc:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar10,uVar21,&DAT_01d084ec);
      }
      uVar21 = *(uint *)(*(int *)(param_2 + 0x84) + uVar10 * 4);
      if ((int)uVar21 < 0) {
        local_34 = (uint *)param_1;
        local_30 = (code *)param_2;
        FUN_016c5600(&local_50,&local_34,iVar15,uVar18,uVar25);
        if (local_50 != 5) goto LAB_01687ef8;
        uVar21 = local_4c;
      }
    }
    else {
      if (iVar15 == 1) {
        uVar10 = uVar25 + 6;
        goto LAB_01687db8;
      }
      if ((*(byte *)(param_1 + 0x51) & 1) == 0) {
        local_50 = 2;
        local_4c = uVar18;
        goto LAB_01687ef8;
      }
      if (uVar18 < *(uint *)(*(int *)(param_1 + 0x278) + 0x154)) {
        uVar10 = uVar25 + uVar18 * 6 + 0xc;
        goto LAB_01687db8;
      }
      uVar21 = FUN_016c4c8c(*(undefined4 *)(param_1 + 0x27c));
    }
    uVar24 = param_4[7];
  }
  if ((*(uint *)(param_2 + 0xb0) & 1) != 0) {
    uVar18 = *(uint *)(param_2 + 0xb4);
    uVar25 = *(uint *)(param_2 + 0xb8);
    iVar15 = uVar18 - uVar25;
    if (uVar18 < uVar25 || iVar15 == 0) {
      iVar15 = uVar25 - uVar18;
    }
    *(int *)(param_2 + 0x70) = iVar15 + *(int *)(param_2 + 0x70);
  }
  *(undefined4 *)(param_2 + 0xb0) = 1;
  *(uint *)(param_2 + 0xb4) = uVar24;
  *(uint *)(param_2 + 0xb8) = uVar24;
  if (uVar24 < uVar26) {
    uVar18 = param_3[3];
    iVar15 = param_3[2];
    do {
      if (uVar18 <= uVar24) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar24,uVar18,&DAT_01d0767c);
      }
      uVar25 = (uint)*(byte *)(iVar15 + uVar24);
      uVar10 = *(uint *)(param_2 + 0x7c);
      uVar24 = (uVar21 & 0x7ffffff) + (uint)*(byte *)(param_1 + 0x158 + uVar25);
      if (uVar10 <= uVar24) goto LAB_01688a90;
      uVar24 = *(uint *)(*(int *)(param_2 + 0x78) + uVar24 * 4);
      if ((int)uVar24 < 0) {
        local_34 = (uint *)param_1;
        local_30 = (code *)param_2;
        uVar29 = FUN_016c4f08(&local_34,uVar21,uVar25 << 8);
      }
      else {
        uVar29 = (ulonglong)uVar24 << 0x20;
      }
      uVar21 = (uint)(uVar29 >> 0x20);
      if ((uVar29 & 1) != 0) goto LAB_01688568;
      if (0x7ffffffffffffff < uVar29) {
        param_4[3] = 1;
        param_4[4] = uVar21;
        if ((uVar29 & 0x1000000000000000) != 0) goto LAB_01687e88;
        if ((uVar29 & 0x800000000000000) != 0) {
          uVar17 = *(undefined4 *)(param_2 + 0x90);
          uVar20 = *(undefined4 *)(param_2 + 0x94);
          param_4[5] = 1;
          uVar6 = *(undefined4 *)(param_1 + 0x278);
          uVar14 = *(undefined4 *)(param_1 + 0x27c);
          param_4[6] = 1;
          iVar15 = FUN_01684564(uVar6,uVar14,uVar17,uVar20,uVar21);
          iVar5 = param_4[7];
          *param_4 = 1;
LAB_01688724:
          param_4[1] = iVar15;
          param_4[2] = iVar5;
          goto LAB_016887e8;
        }
        if ((uVar29 & 0x4000000000000000) != 0) {
LAB_016887e4:
          iVar5 = param_4[7];
LAB_016887e8:
          FUN_01684408(param_2,iVar5);
          return 0;
        }
        if ((uVar29 & 0x2000000000000000) == 0) {
LAB_01688a78:
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("internal error: entered unreachable code: sid being unknown is a bug",0x89,
                       &DAT_01d0768c);
        }
        FUN_01684408(param_2,param_4[7]);
        uVar24 = param_4[7];
        if (uVar18 <= uVar24) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar24,uVar18,&DAT_01d0769c);
        }
        uVar4 = *(undefined1 *)(iVar15 + uVar24);
LAB_016880c8:
        local_30 = (code *)uVar24;
        goto LAB_016880cc;
      }
LAB_01687e88:
      iVar5 = *(int *)(param_2 + 0xb0);
      uVar24 = param_4[7] + 1;
      param_4[7] = uVar24;
      if (iVar5 == 0) {
LAB_0168882c:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("no in-progress search to update",0x1f,&DAT_01d0760c);
      }
      *(uint *)(param_2 + 0xb8) = uVar24;
    } while (uVar24 < uVar26);
  }
  else {
    uVar18 = param_3[3];
  }
  if (uVar18 <= uVar26) {
    iVar15 = *(byte *)(param_1 + 599) + 1;
    uVar8 = FUN_016c2c08(iVar15);
    uVar25 = *(uint *)(param_2 + 0x7c);
    uVar24 = (uVar8 & 0xffff) >> 8;
    if ((uVar8 & 1) != 0) {
      uVar24 = uVar8 >> 0x10;
    }
    uVar24 = uVar24 + (uVar21 & 0x7ffffff);
    if (uVar25 <= uVar24) {
LAB_01688ae4:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar24,uVar25,&DAT_01d084cc);
    }
    uVar24 = *(uint *)(*(int *)(param_2 + 0x78) + uVar24 * 4);
    if ((int)uVar24 < 0) {
      uVar6 = FUN_016c2c08(iVar15);
      local_34 = (uint *)param_1;
      local_30 = (code *)param_2;
      uVar29 = FUN_016c4f08(&local_34,uVar21,uVar6);
    }
    else {
      uVar29 = (ulonglong)uVar24 << 0x20;
    }
    uVar25 = (uint)(uVar29 >> 0x20);
    if ((uVar29 & 1) == 0) {
      uVar6 = 0;
      if ((uVar29 & 0x800000000000000) != 0) goto LAB_016880dc;
    }
    else {
      local_34 = (uint *)CONCAT31(local_34._1_3_,1);
      local_30 = (code *)uVar18;
      uVar6 = FUN_016cc61c(&local_34);
      uVar25 = uVar21;
    }
    goto LAB_01688058;
  }
  uVar10 = *(uint *)(param_2 + 0x7c);
  bVar1 = *(byte *)(param_3[2] + uVar26);
  uVar24 = (uVar21 & 0x7ffffff) + (uint)*(byte *)(param_1 + (uint)bVar1 + 0x158);
  if (uVar10 <= uVar24) {
LAB_01688a90:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar24,uVar10,&DAT_01d084bc);
  }
  uVar24 = *(uint *)(*(int *)(param_2 + 0x78) + uVar24 * 4);
  if ((int)uVar24 < 0) {
    local_34 = (uint *)param_1;
    local_30 = (code *)param_2;
    uVar29 = FUN_016c4f08(&local_34,uVar21,(uint)bVar1 << 8);
  }
  else {
    uVar29 = (ulonglong)uVar24 << 0x20;
  }
  uVar25 = (uint)(uVar29 >> 0x20);
  if ((uVar29 & 1) == 0) {
    if ((uVar29 & 0x800000000000000) == 0) {
      uVar6 = 0;
      if ((uVar29 & 0x2000000000000000) != 0) {
        local_34 = (uint *)((uint)CONCAT21(local_34._2_2_,bVar1) << 8);
        local_30 = (code *)uVar26;
        uVar6 = FUN_016cc61c(&local_34);
      }
      goto LAB_01688058;
    }
    uVar18 = uVar26;
LAB_016880dc:
    iVar15 = 0;
    if (*(int *)(*(int *)(param_1 + 0x278) + 0x154) != 1) {
      uVar8 = *(uint *)(param_2 + 0x94);
      uVar21 = *(uint *)(param_1 + 0x27c) & 0x1f;
      uVar24 = (uVar25 & 0x7ffffff) >> uVar21;
      if (uVar8 <= (uVar25 & 0x7ffffff) >> uVar21) {
LAB_01688ad8:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar24,uVar8,&DAT_01d09420);
      }
      puVar9 = (undefined4 *)(*(int *)(param_2 + 0x90) + uVar24 * 8);
      iVar15 = FUN_0168c724(*puVar9,puVar9[1],0);
    }
    uVar6 = 0;
    param_4[1] = iVar15;
    param_4[2] = uVar18;
    *param_4 = 1;
    param_4[3] = 1;
    param_4[4] = uVar25;
LAB_01688140:
    param_4[5] = 1;
    param_4[6] = 1;
  }
  else {
    local_34 = (uint *)CONCAT31(local_34._1_3_,1);
    local_30 = (code *)uVar26;
    uVar6 = FUN_016cc61c(&local_34);
    uVar25 = uVar21;
LAB_01688058:
    param_4[3] = 1;
    param_4[4] = uVar25;
    if (*param_4 != 0) goto LAB_01688140;
  }
  uVar24 = *(uint *)(param_2 + 0xb0);
  uVar18 = *(uint *)(param_2 + 0xb4);
  *(undefined4 *)(param_2 + 0xb0) = 0;
  if ((uVar24 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("no in-progress search to finish",0x1f,&DAT_01d075fc);
  }
  iVar15 = uVar26 - uVar18;
  iVar5 = *(int *)(param_2 + 0x70);
  if (uVar26 < uVar18) {
    iVar15 = uVar18 - uVar26;
  }
LAB_01688798:
  *(int *)(param_2 + 0x70) = iVar5 + iVar15;
  return uVar6;
LAB_01688568:
  local_30 = (code *)param_4[7];
  local_34 = (uint *)CONCAT31(local_34._1_3_,1);
  goto LAB_0168889c;
}

