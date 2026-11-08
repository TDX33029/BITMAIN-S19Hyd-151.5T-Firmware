// FUN_016845b8 @ 016845b8 size=9316 calls_out=17 calls_in=12
// strings: no in-progress search to update | no in-progress search to finish | internal error: entered unreachable code: sid being unknown is a bug

void FUN_016845b8(undefined4 *param_1,uint param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  ulonglong uVar29;
  undefined4 local_1ac;
  uint local_1a4;
  undefined4 local_198;
  uint local_178;
  undefined4 local_170;
  uint local_164;
  uint local_160 [4];
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  uint local_140 [4];
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  uint local_120 [4];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  uint local_100 [4];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  uint local_e0 [4];
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_c0 [4];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80 [4];
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_54;
  code *local_50;
  uint *local_4c;
  code *local_48;
  uint local_44;
  uint local_40;
  undefined1 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar16 = param_4[4];
  uVar26 = param_4[5];
  if (uVar26 < uVar16) {
    *param_1 = 0;
    return;
  }
  uVar22 = *param_4;
  uVar25 = param_4[1];
  if (1 < uVar22 - 1) {
    pcVar17 = "";
    if (*(char *)(param_2 + 0x4c) != '\x03') {
      pcVar17 = (char *)(param_2 + 0x40);
    }
    if ((char)*(int *)((int)pcVar17 + 0xc) != '\x02') {
      uVar18 = uVar16 - 1;
      if ((char)param_4[6] == '\0') {
        iVar4 = *(int *)(param_2 + 0x278);
        iVar6 = *(int *)(iVar4 + 0x134);
        if ((uVar16 == 0) || (param_4[3] <= uVar18)) {
          uVar8 = 2;
        }
        else {
          bVar15 = *(byte *)(param_4[2] + uVar18);
          uVar8 = (uint)bVar15;
          iVar14 = thunk_FUN_01bed842(param_2 + 600,"",0x20);
          if (iVar14 != 0) {
            puVar20 = (uint *)(param_2 + 600 + (bVar15 >> 3 & 0xfffffff0));
            local_80[0] = *puVar20;
            local_80[1] = puVar20[1];
            local_80[2] = puVar20[2];
            local_80[3] = puVar20[3];
            uStack_70 = 0;
            local_64 = 0;
            local_68 = 0;
            local_6c = 0;
            if ((local_80[(uVar8 & 0x7f) >> 5] >> (uVar8 & 0x1f) & 1) != 0) goto LAB_01684918;
          }
          uVar8 = (uint)*(byte *)(param_2 + uVar8 + 0x58);
        }
        uVar7 = *(uint *)(param_3 + 0x88);
        if (uVar7 <= uVar8) goto LAB_01686974;
        uVar7 = *(uint *)(*(int *)(param_3 + 0x84) + uVar8 * 4);
        if ((int)uVar7 < 0) {
          local_54 = (uint *)param_2;
          local_50 = (code *)param_3;
          FUN_016c5600(&local_60,&local_54,uVar22,uVar25,uVar8);
          if (local_60 == 5) {
            uVar7 = local_5c;
            goto LAB_0168547c;
          }
LAB_016867c8:
          uVar8 = local_5c;
          goto LAB_0168491c;
        }
LAB_0168547c:
        iVar14 = *(int *)pcVar17;
        uVar23 = param_4[2];
        local_164 = param_4[3];
        (**(code **)(*(int *)((int)pcVar17 + 4) + 0x10))
                  (&local_60,
                   iVar14 + (*(int *)(*(int *)((int)pcVar17 + 4) + 8) - 1U & 0xfffffff8) + 8,uVar23,
                   local_164,uVar16,uVar26);
        uVar18 = local_5c;
        uVar5 = 0;
        if (local_60 == 0) goto LAB_01685d48;
        if (iVar6 == 0) {
LAB_01685d54:
          if ((*(uint *)(param_3 + 0xb0) & 1) != 0) {
            uVar16 = *(uint *)(param_3 + 0xb4);
            uVar8 = *(uint *)(param_3 + 0xb8);
            iVar21 = uVar16 - uVar8;
            if (uVar16 < uVar8 || iVar21 == 0) {
              iVar21 = uVar8 - uVar16;
            }
            *(int *)(param_3 + 0x70) = iVar21 + *(int *)(param_3 + 0x70);
          }
          *(undefined4 *)(param_3 + 0xb0) = 1;
          *(uint *)(param_3 + 0xb4) = uVar18;
          *(uint *)(param_3 + 0xb8) = uVar18;
          if (uVar18 < uVar26) {
            iVar21 = param_2 + 0x158;
            uVar5 = *(undefined4 *)(param_2 + 0x27c);
            bVar15 = *(byte *)(param_2 + 0x51);
            local_198 = 0;
            uVar16 = uVar18;
            do {
              if (uVar7 < 0x8000000) {
                if (uVar16 < uVar26) {
                  iVar12 = *(int *)(param_3 + 0x78);
                  uVar18 = *(uint *)(param_3 + 0x7c);
                  do {
                    uVar8 = *(uint *)(iVar12 + (uVar7 + *(byte *)(iVar21 + (uint)*(byte *)(uVar23 + 
                                                  uVar16))) * 4);
                    if (0x7ffffff < uVar8) {
LAB_01685f24:
                      if (-1 < (int)uVar8) goto LAB_01685f2c;
                      if (*(int *)(param_3 + 0xb0) == 0) goto LAB_016864ec;
                      *(uint *)(param_3 + 0xb8) = uVar16;
                      uVar8 = uVar7 + *(byte *)(iVar21 + (uint)*(byte *)(uVar23 + uVar16));
                      if (uVar18 <= uVar8) goto LAB_016869a4;
                      uVar18 = *(uint *)(iVar12 + uVar8 * 4);
                      if ((int)uVar18 < 0) {
                        local_54 = (uint *)param_2;
                        local_50 = (code *)param_3;
                        uVar29 = FUN_016c4f08(&local_54,uVar7,(uint)*(byte *)(uVar23 + uVar16) << 8)
                        ;
                      }
                      else {
                        uVar29 = (ulonglong)uVar18 << 0x20;
                      }
                      uVar8 = (uint)(uVar29 >> 0x20);
                      if ((uVar29 & 1) != 0) goto LAB_01686208;
                      goto LAB_01685e54;
                    }
                    uVar24 = uVar16 + 3;
                    if (uVar26 <= uVar24) goto LAB_016861b0;
                    iVar13 = uVar23 + uVar16;
                    uVar7 = *(uint *)(iVar12 + (uVar8 + *(byte *)(iVar21 + (uint)*(byte *)(iVar13 + 
                                                  1))) * 4);
                    if (0x7ffffff < uVar7) {
                      uVar24 = uVar16 + 1;
                      uVar9 = uVar7;
LAB_01685f10:
                      uVar7 = uVar8;
                      uVar16 = uVar24;
                      uVar8 = uVar9;
                      goto LAB_01685f24;
                    }
                    uVar8 = *(uint *)(iVar12 + (uVar7 + *(byte *)(iVar21 + (uint)*(byte *)(iVar13 + 
                                                  2))) * 4);
                    if (0x7ffffff < uVar8) {
                      uVar16 = uVar16 + 2;
                      goto LAB_01685f24;
                    }
                    uVar7 = *(uint *)(iVar12 + (uVar8 + *(byte *)(iVar21 + (uint)*(byte *)(iVar13 + 
                                                  3))) * 4);
                    uVar9 = uVar7;
                    if (0x7ffffff < uVar7) goto LAB_01685f10;
                    uVar16 = uVar16 + 4;
                  } while (uVar16 < uVar26);
                }
                uVar8 = uVar7;
LAB_016861b0:
                uVar18 = uVar16 + 1;
                uVar7 = uVar8;
              }
              else {
                if (*(int *)(param_3 + 0xb0) == 0) goto LAB_016864ec;
                *(uint *)(param_3 + 0xb8) = uVar16;
                if (local_164 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(uVar16,local_164,&DAT_01d0761c);
                }
                uVar8 = *(uint *)(param_3 + 0x7c);
                uVar18 = (uVar7 & 0x7ffffff) +
                         (uint)*(byte *)(iVar21 + (uint)*(byte *)(uVar23 + uVar16));
                if (uVar8 <= uVar18) goto LAB_01686934;
                uVar18 = *(uint *)(*(int *)(param_3 + 0x78) + uVar18 * 4);
                if ((int)uVar18 < 0) {
                  local_54 = (uint *)param_2;
                  local_50 = (code *)param_3;
                  uVar29 = FUN_016c4f08(&local_54,uVar7,(uint)*(byte *)(uVar23 + uVar16) << 8);
                }
                else {
                  uVar29 = (ulonglong)uVar18 << 0x20;
                }
                uVar8 = (uint)(uVar29 >> 0x20);
                if ((uVar29 & 1) != 0) goto LAB_016862d0;
LAB_01685e54:
                if (uVar8 < 0x8000000) {
                  goto LAB_016861b0;
                }
LAB_01685f2c:
                if ((uVar8 & 0x10000000) == 0) {
                  if ((uVar8 & 0x8000000) != 0) {
                    local_198 = 1;
                    if (*(int *)(iVar4 + 0x154) == 1) {
                      local_1ac = 0;
                    }
                    else {
                      puVar10 = (undefined4 *)
                                FUN_016c55cc(uVar5,*(undefined4 *)(param_3 + 0x90),
                                             *(undefined4 *)(param_3 + 0x94),uVar8);
                      local_1ac = FUN_0168c724(*puVar10,puVar10[1],0);
                    }
                    local_1a4 = uVar16;
                    goto LAB_016861b0;
                  }
                  if ((uVar8 & 0x40000000) != 0) goto LAB_01686330;
                  if ((uVar8 & 0x20000000) == 0) goto LAB_0168691c;
                  FUN_01684408(param_3,uVar16);
                  if (local_164 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar16,local_164,&DAT_01d0763c);
                  }
                  uVar3 = *(undefined1 *)(uVar23 + uVar16);
                  local_50 = (code *)uVar16;
                  goto LAB_0168543c;
                }
                (**(code **)(*(int *)((int)pcVar17 + 4) + 0x10))
                          (&local_60,
                           iVar14 + 8 + (*(int *)(*(int *)((int)pcVar17 + 4) + 8) - 1U & 0xfffffff8)
                           ,uVar23,local_164,uVar16,uVar26);
                uVar18 = local_5c;
                if (local_60 != 1) {
                  uVar16 = uVar26;
LAB_01686330:
                  FUN_01684408(param_3,uVar16);
                  *param_1 = local_198;
                  param_1[1] = local_1ac;
                  param_1[2] = local_1a4;
                  return;
                }
                if (local_5c <= uVar16) {
                  goto LAB_016861b0;
                }
                uVar7 = uVar8;
                if (iVar6 != 0) {
                  bVar28 = local_164 <= uVar26;
                  bVar27 = uVar26 == local_164;
                  local_30 = local_5c;
                  if (!bVar28 || bVar27) {
                    bVar28 = uVar26 + 1 <= local_5c;
                    bVar27 = local_5c == uVar26 + 1;
                  }
                  if (bVar28 && !bVar27) goto LAB_016868b4;
                  uVar16 = local_5c - 1;
                  if (uVar16 < local_164) {
                    bVar1 = *(byte *)(uVar23 + uVar16);
                    uVar8 = (uint)bVar1;
                    local_2c = uVar26;
                    iVar12 = thunk_FUN_01bed842(param_2 + 600,"",0x20);
                    if (iVar12 != 0) {
                      puVar20 = (uint *)(param_2 + 600 + (bVar1 >> 3 & 0xfffffff0));
                      local_c0[3] = puVar20[3];
                      local_c0[0] = *puVar20;
                      local_c0[1] = puVar20[1];
                      local_c0[2] = puVar20[2];
                      local_a4 = 0;
                      local_a8 = 0;
                      local_ac = 0;
                      local_b0 = 0;
                      if ((local_c0[(uVar8 & 0x7f) >> 5] >> (uVar8 & 0x1f) & 1) != 0) {
                        local_50 = (code *)0x4;
                        goto LAB_01686520;
                      }
                    }
                    uVar24 = (uint)*(byte *)(param_2 + 0x58 + uVar8);
                  }
                  else {
                    uVar24 = 2;
                    local_2c = uVar26;
                  }
                  if (uVar22 == 0) {
                    uVar8 = uVar24;
                  }
                  else if (uVar22 == 2) {
                    if ((bVar15 & 1) == 0) {
                      local_50 = (code *)0x2;
                      uVar8 = uVar25;
                      goto LAB_01686520;
                    }
                    if (*(uint *)(iVar4 + 0x154) <= uVar25) {
                      uVar7 = FUN_016c4c8c(uVar5);
                      goto LAB_016861b4;
                    }
                    uVar8 = uVar25 * 6 + 0xc + uVar24;
                  }
                  else {
                    uVar8 = uVar24 + 6;
                  }
                  uVar7 = *(uint *)(param_3 + 0x88);
                  if (uVar7 <= uVar8) goto LAB_01686974;
                  uVar7 = *(uint *)(*(int *)(param_3 + 0x84) + uVar8 * 4);
                  if ((int)uVar7 < 0) {
                    local_54 = (uint *)param_2;
                    local_50 = (code *)param_3;
                    FUN_016c5600(&local_30,&local_54,uVar22,uVar25,uVar24);
                    if (local_30 != 5) {
                      local_50 = (code *)local_30;
                      uVar8 = local_2c;
LAB_01686520:
                      iVar4 = 2;
                      if (2 < local_50) {
                        iVar4 = (int)local_50 - 3;
                      }
                      if (iVar4 == 0) {
                        uVar3 = 1;
                        local_50 = (code *)uVar18;
                      }
                      else if (iVar4 == 1) {
                        uVar3 = 0;
                        local_54 = (uint *)((uint)CONCAT21(local_54._2_2_,(char)uVar8) << 8);
                        local_50 = (code *)uVar16;
                      }
                      else {
                        uVar3 = 3;
                        local_4c = (uint *)uVar8;
                      }
                      local_54 = (uint *)CONCAT31(local_54._1_3_,uVar3);
                      uVar5 = FUN_016cc61c(&local_54);
                      *param_1 = 2;
                      param_1[1] = uVar5;
                      return;
                    }
                    uVar7 = local_2c;
                  }
                }
              }
LAB_016861b4:
              uVar16 = uVar18;
            } while (uVar18 < uVar26);
          }
          else {
            local_198 = 0;
          }
          if (uVar26 < local_164) {
            uVar3 = *(undefined1 *)(uVar23 + uVar26);
            uVar29 = FUN_016844ec(param_2,param_3,uVar7,uVar3);
            uVar5 = (undefined4)(uVar29 >> 0x20);
            if ((uVar29 & 1) != 0) {
              local_54 = (uint *)CONCAT31(local_54._1_3_,1);
              local_50 = (code *)uVar26;
              uVar5 = FUN_016cc61c(&local_54);
              goto LAB_016862c0;
            }
            if ((uVar29 & 0x800000000000000) != 0) {
              local_164 = uVar26;
              goto LAB_016863d4;
            }
            if ((uVar29 & 0x2000000000000000) == 0) goto LAB_01686408;
            local_54 = (uint *)((uint)CONCAT21(local_54._2_2_,uVar3) << 8);
            local_50 = (code *)uVar26;
          }
          else {
            uVar29 = FUN_0168445c(param_2,param_3,uVar7);
            uVar5 = (undefined4)(uVar29 >> 0x20);
            if ((uVar29 & 1) == 0) {
              if ((uVar29 & 0x800000000000000) == 0) goto LAB_01686408;
LAB_016863d4:
              local_1ac = FUN_01684564(iVar4,*(undefined4 *)(param_2 + 0x27c),
                                       *(undefined4 *)(param_3 + 0x90),
                                       *(undefined4 *)(param_3 + 0x94),uVar5);
              local_198 = 1;
              local_1a4 = local_164;
LAB_01686408:
              FUN_01684408(param_3,uVar26);
              *param_1 = local_198;
              param_1[1] = local_1ac;
              param_1[2] = local_1a4;
              return;
            }
            local_54 = (uint *)CONCAT31(local_54._1_3_,1);
            local_50 = (code *)local_164;
          }
          uVar5 = FUN_016cc61c(&local_54);
LAB_016862c0:
          *param_1 = 2;
          param_1[1] = uVar5;
          return;
        }
        local_3c = 0;
        local_54 = (uint *)uVar22;
        local_50 = (code *)uVar25;
        local_4c = (uint *)uVar23;
        local_48 = (code *)local_164;
        local_44 = uVar16;
        local_40 = uVar26;
        FUN_0168105c(&local_54,local_5c);
        uVar24 = local_44;
        pcVar2 = local_50;
        uVar16 = (uint)local_54;
        if ((local_44 == 0) || (local_48 <= local_44 - 1)) {
          uVar9 = 2;
LAB_01685708:
          if (uVar16 == 0) {
            uVar8 = uVar9;
LAB_01685cfc:
            uVar7 = *(uint *)(param_3 + 0x88);
            if (uVar7 <= uVar8) goto LAB_01686974;
            uVar8 = *(uint *)(*(int *)(param_3 + 0x84) + uVar8 * 4);
            if ((int)uVar8 < 0) {
              local_30 = param_2;
              local_2c = param_3;
              FUN_016c5600(&local_38,&local_30,uVar16,pcVar2,uVar9);
              goto LAB_01685d24;
            }
          }
          else {
            if (uVar16 != 2) {
              uVar8 = uVar9 + 6;
              goto LAB_01685cfc;
            }
            if ((*(byte *)(param_2 + 0x51) & 1) == 0) {
              local_38 = 2;
              local_34 = (uint)pcVar2;
              goto LAB_01685d24;
            }
            if (pcVar2 < *(uint *)(iVar4 + 0x154)) {
              uVar8 = uVar9 + (int)pcVar2 * 6 + 0xc;
              goto LAB_01685cfc;
            }
            uVar8 = FUN_016c4c8c(*(undefined4 *)(param_2 + 0x27c));
          }
          local_38 = 5;
          local_34 = uVar8;
        }
        else {
          bVar15 = *(byte *)((int)local_4c + (local_44 - 1));
          uVar8 = (uint)bVar15;
          iVar21 = thunk_FUN_01bed842(param_2 + 600,"",0x20);
          if (iVar21 == 0) {
LAB_016856f0:
            uVar9 = (uint)*(byte *)(param_2 + uVar8 + 0x58);
            goto LAB_01685708;
          }
          puVar20 = (uint *)(param_2 + 600 + (bVar15 >> 3 & 0xfffffff0));
          local_a0[2] = puVar20[2];
          local_84 = 0;
          local_88 = 0;
          local_8c = 0;
          local_90 = 0;
          local_a0[0] = *puVar20;
          local_a0[3] = puVar20[3];
          local_a0[1] = puVar20[1];
          if ((local_a0[(uVar8 & 0x7f) >> 5] >> (uVar8 & 0x1f) & 1) == 0) goto LAB_016856f0;
          local_38 = 4;
          local_34 = uVar8;
        }
LAB_01685d24:
        uVar29 = FUN_01686ab8(&local_38,uVar24);
        uVar7 = (uint)(uVar29 >> 0x20);
        if ((uVar29 & 1) == 0) goto LAB_01685d54;
LAB_01685d3c:
        param_1[1] = uVar7;
        uVar5 = 2;
LAB_01685d48:
        *param_1 = uVar5;
        return;
      }
      iVar4 = *(int *)(param_2 + 0x278);
      uVar23 = *(uint *)(iVar4 + 0x134);
      if ((uVar16 != 0) && (uVar18 < param_4[3])) {
        bVar15 = *(byte *)(param_4[2] + uVar18);
        uVar8 = (uint)bVar15;
        iVar6 = thunk_FUN_01bed842(param_2 + 600,"",0x20);
        if (iVar6 == 0) {
LAB_01684864:
          uVar8 = (uint)*(byte *)(param_2 + uVar8 + 0x58);
          goto LAB_01684bac;
        }
        puVar20 = (uint *)(param_2 + 600 + (bVar15 >> 3 & 0xfffffff0));
        local_e0[0] = *puVar20;
        local_e0[1] = puVar20[1];
        local_e0[2] = puVar20[2];
        local_e0[3] = puVar20[3];
        uStack_d0 = 0;
        local_c4 = 0;
        local_c8 = 0;
        local_cc = 0;
        if ((local_e0[(uVar8 & 0x7f) >> 5] >> (uVar8 & 0x1f) & 1) == 0) goto LAB_01684864;
LAB_01684918:
        local_60 = 4;
LAB_0168491c:
        iVar4 = 2;
        if (2 < local_60) {
          iVar4 = local_60 - 3;
        }
        if (iVar4 == 0) {
LAB_01686208:
          uVar3 = 1;
          local_50 = (code *)uVar16;
LAB_01686210:
          local_54 = (uint *)CONCAT31(local_54._1_3_,uVar3);
          uVar5 = FUN_016cc61c(&local_54);
          *param_1 = 2;
          param_1[1] = uVar5;
          return;
        }
        if (iVar4 != 1) {
          uVar3 = 3;
          local_50 = (code *)local_60;
          local_4c = (uint *)uVar8;
          goto LAB_01686210;
        }
        if (uVar16 != 0) {
          uVar3 = 0;
          local_54 = (uint *)((uint)CONCAT21(local_54._2_2_,(char)uVar8) << 8);
          local_50 = (code *)uVar18;
          goto LAB_01686210;
        }
        goto LAB_01686874;
      }
      uVar8 = 2;
LAB_01684bac:
      uVar7 = *(uint *)(param_3 + 0x88);
      if (uVar7 <= uVar8) goto LAB_01686974;
      uVar7 = *(uint *)(*(int *)(param_3 + 0x84) + uVar8 * 4);
      if ((int)uVar7 < 0) {
        local_54 = (uint *)param_2;
        local_50 = (code *)param_3;
        FUN_016c5600(&local_60,&local_54,uVar22,uVar25,uVar8);
        if (local_60 != 5) goto LAB_016867c8;
        uVar7 = local_5c;
      }
      uVar24 = param_4[2];
      local_164 = param_4[3];
      iVar6 = *(int *)pcVar17;
      (**(code **)(*(int *)((int)pcVar17 + 4) + 0x10))
                (&local_60,iVar6 + (*(int *)(*(int *)((int)pcVar17 + 4) + 8) - 1U & 0xfffffff8) + 8,
                 uVar24,local_164,uVar16,uVar26);
      uVar18 = local_5c;
      uVar5 = 0;
      if (local_60 == 0) goto LAB_01685d48;
      if (uVar23 != 0) {
        local_3c = 1;
        local_54 = (uint *)uVar22;
        local_50 = (code *)uVar25;
        local_4c = (uint *)uVar24;
        local_48 = (code *)local_164;
        local_44 = uVar16;
        local_40 = uVar26;
        FUN_0168105c(&local_54,local_5c);
        uVar9 = local_44;
        pcVar2 = local_50;
        uVar16 = (uint)local_54;
        if ((local_44 == 0) || (local_48 <= local_44 - 1)) {
          uVar19 = 2;
LAB_016856ac:
          if (uVar16 == 0) {
            uVar8 = uVar19;
LAB_0168576c:
            uVar7 = *(uint *)(param_3 + 0x88);
            if (uVar7 <= uVar8) goto LAB_01686974;
            uVar8 = *(uint *)(*(int *)(param_3 + 0x84) + uVar8 * 4);
            if ((int)uVar8 < 0) {
              local_30 = param_2;
              local_2c = param_3;
              FUN_016c5600(&local_38,&local_30,uVar16,pcVar2,uVar19);
              goto LAB_01685794;
            }
          }
          else {
            if (uVar16 != 2) {
              uVar8 = uVar19 + 6;
              goto LAB_0168576c;
            }
            if ((*(byte *)(param_2 + 0x51) & 1) == 0) {
              local_38 = 2;
              local_34 = (uint)pcVar2;
              goto LAB_016856d4;
            }
            if (pcVar2 < *(uint *)(iVar4 + 0x154)) {
              uVar8 = uVar19 + (int)pcVar2 * 6 + 0xc;
              goto LAB_0168576c;
            }
            uVar8 = FUN_016c4c8c(*(undefined4 *)(param_2 + 0x27c));
          }
          local_38 = 5;
          local_34 = uVar8;
        }
        else {
          bVar15 = *(byte *)((int)local_4c + (local_44 - 1));
          uVar8 = (uint)bVar15;
          iVar14 = thunk_FUN_01bed842(param_2 + 600,"",0x20);
          if (iVar14 == 0) {
LAB_0168569c:
            uVar19 = (uint)*(byte *)(param_2 + uVar8 + 0x58);
            goto LAB_016856ac;
          }
          puVar20 = (uint *)(param_2 + 600 + (bVar15 >> 3 & 0xfffffff0));
          local_100[2] = puVar20[2];
          local_e4 = 0;
          local_e8 = 0;
          local_ec = 0;
          local_f0 = 0;
          local_100[0] = *puVar20;
          local_100[3] = puVar20[3];
          local_100[1] = puVar20[1];
          if ((local_100[(uVar8 & 0x7f) >> 5] >> (uVar8 & 0x1f) & 1) == 0) goto LAB_0168569c;
          local_38 = 4;
          local_34 = uVar8;
LAB_016856d4:
        }
LAB_01685794:
        uVar29 = FUN_01686ab8(&local_38,uVar9);
        uVar7 = (uint)(uVar29 >> 0x20);
        if ((uVar29 & 1) != 0) goto LAB_01685d3c;
      }
      if ((*(uint *)(param_3 + 0xb0) & 1) != 0) {
        uVar16 = *(uint *)(param_3 + 0xb4);
        uVar8 = *(uint *)(param_3 + 0xb8);
        iVar14 = uVar16 - uVar8;
        if (uVar16 < uVar8 || iVar14 == 0) {
          iVar14 = uVar8 - uVar16;
        }
        *(int *)(param_3 + 0x70) = iVar14 + *(int *)(param_3 + 0x70);
      }
      *(undefined4 *)(param_3 + 0xb0) = 1;
      *(uint *)(param_3 + 0xb4) = uVar18;
      *(uint *)(param_3 + 0xb8) = uVar18;
      if (uVar18 < uVar26) {
        iVar14 = param_2 + 0x158;
        uVar5 = *(undefined4 *)(param_2 + 0x27c);
        bVar15 = *(byte *)(param_2 + 0x51);
        uVar16 = uVar18;
        do {
          if (uVar7 < 0x8000000) {
            if (uVar16 < uVar26) {
              iVar21 = *(int *)(param_3 + 0x78);
              do {
                uVar18 = *(uint *)(iVar21 + (uVar7 + *(byte *)(iVar14 + (uint)*(byte *)(uVar24 + 
                                                  uVar16))) * 4);
                if (0x7ffffff < uVar18) {
LAB_0168597c:
                  if (-1 < (int)uVar18) goto LAB_01685988;
                  if (*(int *)(param_3 + 0xb0) == 0) goto LAB_016864ec;
                  *(uint *)(param_3 + 0xb8) = uVar16;
                  uVar18 = uVar7 + *(byte *)(iVar14 + (uint)*(byte *)(uVar24 + uVar16));
                  if (*(uint *)(param_3 + 0x7c) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar18,*(uint *)(param_3 + 0x7c),&DAT_01d084bc);
                  }
                  uVar18 = *(uint *)(iVar21 + uVar18 * 4);
                  if ((int)uVar18 < 0) {
                    local_54 = (uint *)param_2;
                    local_50 = (code *)param_3;
                    uVar29 = FUN_016c4f08(&local_54,uVar7,(uint)*(byte *)(uVar24 + uVar16) << 8);
                  }
                  else {
                    uVar29 = (ulonglong)uVar18 << 0x20;
                  }
                  uVar7 = (uint)(uVar29 >> 0x20);
                  if ((uVar29 & 1) == 0) goto LAB_016858a4;
                  uVar3 = 1;
                  local_50 = (code *)uVar16;
                  goto LAB_01686210;
                }
                uVar8 = uVar16 + 3;
                if (uVar26 <= uVar8) {
                  uVar7 = uVar18;
                  break;
                }
                iVar12 = uVar24 + uVar16;
                uVar7 = *(uint *)(iVar21 + (uVar18 + *(byte *)(iVar14 + (uint)*(byte *)(iVar12 + 1))
                                           ) * 4);
                if (0x7ffffff < uVar7) {
                  uVar8 = uVar16 + 1;
                  uVar9 = uVar7;
LAB_01685968:
                  uVar7 = uVar18;
                  uVar16 = uVar8;
                  uVar18 = uVar9;
                  goto LAB_0168597c;
                }
                uVar18 = *(uint *)(iVar21 + (uVar7 + *(byte *)(iVar14 + (uint)*(byte *)(iVar12 + 2))
                                            ) * 4);
                if (0x7ffffff < uVar18) {
                  uVar16 = uVar16 + 2;
                  goto LAB_0168597c;
                }
                uVar7 = *(uint *)(iVar21 + (uVar18 + *(byte *)(iVar14 + (uint)*(byte *)(iVar12 + 3))
                                           ) * 4);
                uVar9 = uVar7;
                if (0x7ffffff < uVar7) goto LAB_01685968;
                uVar16 = uVar16 + 4;
              } while (uVar16 < uVar26);
            }
LAB_01685ab0:
            uVar9 = uVar16 + 1;
          }
          else {
            if (*(int *)(param_3 + 0xb0) == 0) goto LAB_016864ec;
            *(uint *)(param_3 + 0xb8) = uVar16;
            if (local_164 <= uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar16,local_164,&DAT_01d0761c);
            }
            uVar8 = *(uint *)(param_3 + 0x7c);
            uVar18 = (uVar7 & 0x7ffffff) +
                     (uint)*(byte *)(iVar14 + (uint)*(byte *)(uVar24 + uVar16));
            if (uVar8 <= uVar18) goto LAB_01686934;
            uVar18 = *(uint *)(*(int *)(param_3 + 0x78) + uVar18 * 4);
            if ((int)uVar18 < 0) {
              local_54 = (uint *)param_2;
              local_50 = (code *)param_3;
              uVar29 = FUN_016c4f08(&local_54,uVar7,(uint)*(byte *)(uVar24 + uVar16) << 8);
            }
            else {
              uVar29 = (ulonglong)uVar18 << 0x20;
            }
            uVar7 = (uint)(uVar29 >> 0x20);
            if ((uVar29 & 1) != 0) goto LAB_016862d0;
LAB_016858a4:
            uVar18 = uVar7;
            if (uVar7 < 0x8000000) goto LAB_01685ab0;
LAB_01685988:
            if ((uVar18 & 0x10000000) == 0) {
              if ((uVar18 & 0x8000000) != 0) {
                uVar5 = FUN_01684564(iVar4,uVar5,*(undefined4 *)(param_3 + 0x90),
                                     *(undefined4 *)(param_3 + 0x94),uVar18);
                FUN_01684408(param_3,uVar16);
                *param_1 = 1;
                param_1[1] = uVar5;
                param_1[2] = uVar16;
                return;
              }
              if ((uVar18 & 0x40000000) != 0) {
                FUN_01684408(param_3,uVar16);
                uVar5 = 0;
                goto LAB_01685d48;
              }
              if ((uVar18 & 0x20000000) == 0) goto LAB_0168691c;
              FUN_01684408(param_3,uVar16);
              if (local_164 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar16,local_164,&DAT_01d0763c);
              }
              uVar3 = *(undefined1 *)(uVar24 + uVar16);
              local_50 = (code *)uVar16;
              goto LAB_0168543c;
            }
            (**(code **)(*(int *)((int)pcVar17 + 4) + 0x10))
                      (&local_60,
                       iVar6 + 8 + (*(int *)(*(int *)((int)pcVar17 + 4) + 8) - 1U & 0xfffffff8),
                       uVar24,local_164,uVar16,uVar26);
            uVar9 = local_5c;
            if (local_60 != 1) {
              FUN_01684408(param_3,uVar26);
              uVar5 = 0;
              goto LAB_01686474;
            }
            uVar7 = uVar18;
            if (local_5c <= uVar16) goto LAB_01685ab0;
            if (uVar23 != 0) {
              bVar28 = local_164 <= uVar26;
              bVar27 = uVar26 == local_164;
              uVar16 = uVar23;
              if (!bVar28 || bVar27) {
                uVar16 = uVar26 + 1;
              }
              local_30 = local_5c;
              if (!bVar28 || bVar27) {
                bVar28 = uVar16 <= local_5c;
                bVar27 = local_5c == uVar16;
              }
              if (bVar28 && !bVar27) {
LAB_016868b4:
                local_48 = FUN_012fd02c;
                local_50 = FUN_0065fd28;
                local_54 = &local_30;
                local_4c = &local_38;
                local_38 = local_164;
                local_2c = uVar26;
                    /* WARNING: Subroutine does not return */
                FUN_012fb100(&DAT_005a4e9e,&local_54,&DAT_01d08154);
              }
              uVar16 = local_5c - 1;
              if (uVar16 < local_164) {
                bVar1 = *(byte *)(uVar24 + uVar16);
                uVar18 = (uint)bVar1;
                local_2c = uVar26;
                iVar21 = thunk_FUN_01bed842(param_2 + 600,"",0x20);
                if (iVar21 == 0) {
LAB_01685a90:
                  uVar18 = (uint)*(byte *)(param_2 + 0x58 + uVar18);
                  goto LAB_01685b08;
                }
                puVar20 = (uint *)(param_2 + 600 + (bVar1 >> 3 & 0xfffffff0));
                local_120[3] = puVar20[3];
                local_120[0] = *puVar20;
                local_120[1] = puVar20[1];
                local_120[2] = puVar20[2];
                local_104 = 0;
                local_108 = 0;
                local_10c = 0;
                local_110 = 0;
                if ((local_120[(uVar18 & 0x7f) >> 5] >> (uVar18 & 0x1f) & 1) == 0)
                goto LAB_01685a90;
                local_50 = (code *)0x4;
LAB_016865c4:
                iVar4 = 2;
                if (2 < local_50) {
                  iVar4 = (int)local_50 - 3;
                }
                if (iVar4 == 0) {
                  uVar3 = 1;
                  local_50 = (code *)uVar9;
                }
                else if (iVar4 == 1) {
                  uVar3 = 0;
                  local_54 = (uint *)((uint)CONCAT21(local_54._2_2_,(char)uVar18) << 8);
                  local_50 = (code *)uVar16;
                }
                else {
                  uVar3 = 3;
                  local_4c = (uint *)uVar18;
                }
                local_54 = (uint *)CONCAT31(local_54._1_3_,uVar3);
                uVar5 = FUN_016cc61c(&local_54);
                param_1[1] = uVar5;
                uVar5 = 2;
LAB_01686474:
                *param_1 = uVar5;
                return;
              }
              uVar18 = 2;
              local_2c = uVar26;
LAB_01685b08:
              if (uVar22 == 0) {
                uVar8 = uVar18;
              }
              else if (uVar22 == 2) {
                if ((bVar15 & 1) == 0) {
                  local_50 = (code *)0x2;
                  uVar18 = uVar25;
                  goto LAB_016865c4;
                }
                if (*(uint *)(iVar4 + 0x154) <= uVar25) {
                  uVar7 = FUN_016c4c8c(uVar5);
                  goto LAB_01685ab4;
                }
                uVar8 = uVar25 * 6 + 0xc + uVar18;
              }
              else {
                uVar8 = uVar18 + 6;
              }
              uVar7 = *(uint *)(param_3 + 0x88);
              if (uVar7 <= uVar8) goto LAB_01686974;
              uVar7 = *(uint *)(*(int *)(param_3 + 0x84) + uVar8 * 4);
              if ((int)uVar7 < 0) {
                local_54 = (uint *)param_2;
                local_50 = (code *)param_3;
                FUN_016c5600(&local_30,&local_54,uVar22,uVar25,uVar18);
                if (local_30 != 5) {
                  local_50 = (code *)local_30;
                  uVar18 = local_2c;
                  goto LAB_016865c4;
                }
                uVar7 = local_2c;
              }
            }
          }
LAB_01685ab4:
          uVar16 = uVar9;
        } while (uVar9 < uVar26);
      }
      uVar16 = uVar26;
      if (uVar26 < local_164) {
        uVar3 = *(undefined1 *)(uVar24 + uVar26);
        uVar29 = FUN_016844ec(param_2,param_3,uVar7,uVar3);
        uVar5 = (undefined4)(uVar29 >> 0x20);
        if ((uVar29 & 1) != 0) {
          local_50 = (code *)uVar26;
          goto LAB_01685c80;
        }
        if ((uVar29 & 0x800000000000000) == 0) {
          if ((uVar29 & 0x2000000000000000) == 0) {
            uVar5 = 0;
            goto LAB_016863b0;
          }
          local_54 = (uint *)((uint)CONCAT21(local_54._2_2_,uVar3) << 8);
          local_50 = (code *)uVar26;
          uVar5 = FUN_016cc61c(&local_54);
          goto LAB_01685c90;
        }
        local_164 = uVar26;
      }
      else {
        uVar29 = FUN_0168445c(param_2,param_3,uVar7);
        uVar5 = (undefined4)(uVar29 >> 0x20);
        if ((uVar29 & 1) != 0) {
          local_50 = (code *)local_164;
LAB_01685c80:
          local_54 = (uint *)CONCAT31(local_54._1_3_,1);
          uVar5 = FUN_016cc61c(&local_54);
LAB_01685c90:
          *param_1 = 2;
          param_1[1] = uVar5;
          return;
        }
        if ((uVar29 & 0x800000000000000) == 0) {
          uVar5 = 0;
          goto LAB_016863b0;
        }
      }
      uVar16 = FUN_01684564(iVar4,*(undefined4 *)(param_2 + 0x27c),*(undefined4 *)(param_3 + 0x90),
                            *(undefined4 *)(param_3 + 0x94),uVar5);
      uVar5 = 1;
LAB_016863b0:
      FUN_01684408(param_3,uVar26);
      *param_1 = uVar5;
      param_1[1] = uVar16;
      param_1[2] = local_164;
      return;
    }
  }
  uVar23 = uVar16 - 1;
  if ((char)param_4[6] == '\0') {
    if ((uVar16 == 0) || (param_4[3] <= uVar23)) {
      uVar18 = 2;
    }
    else {
      bVar15 = *(byte *)(param_4[2] + uVar23);
      uVar18 = (uint)bVar15;
      iVar4 = thunk_FUN_01bed842(param_2 + 600,"",0x20);
      if (iVar4 != 0) {
        puVar20 = (uint *)(param_2 + 600 + (bVar15 >> 3 & 0xfffffff0));
        local_140[0] = *puVar20;
        local_140[1] = puVar20[1];
        local_140[2] = puVar20[2];
        local_140[3] = puVar20[3];
        uStack_130 = 0;
        local_124 = 0;
        local_128 = 0;
        local_12c = 0;
        if ((local_140[(uVar18 & 0x7f) >> 5] >> (uVar18 & 0x1f) & 1) != 0) goto LAB_01684758;
      }
      uVar18 = (uint)*(byte *)(param_2 + uVar18 + 0x58);
    }
    if (uVar22 != 0) {
      if (uVar22 == 1) {
        uVar8 = uVar18 + 6;
        goto LAB_01684d58;
      }
      if ((*(byte *)(param_2 + 0x51) & 1) != 0) {
        if (uVar25 < *(uint *)(*(int *)(param_2 + 0x278) + 0x154)) {
          uVar8 = uVar18 + uVar25 * 6 + 0xc;
          goto LAB_01684d58;
        }
        uVar7 = FUN_016c4c8c(*(undefined4 *)(param_2 + 0x27c));
        goto LAB_01684d74;
      }
LAB_01685050:
      local_60 = 2;
      local_5c = uVar25;
      goto LAB_01685060;
    }
    uVar8 = uVar18;
LAB_01684d58:
    uVar7 = *(uint *)(param_3 + 0x88);
    if (uVar7 <= uVar8) goto LAB_01686974;
    uVar7 = *(uint *)(*(int *)(param_3 + 0x84) + uVar8 * 4);
    if ((int)uVar7 < 0) {
      local_54 = (uint *)param_2;
      local_50 = (code *)param_3;
      FUN_016c5600(&local_60,&local_54,uVar22,uVar25,uVar18);
      if (local_60 != 5) goto LAB_01685060;
      uVar7 = local_5c;
    }
LAB_01684d74:
    if ((*(uint *)(param_3 + 0xb0) & 1) != 0) {
      uVar22 = *(uint *)(param_3 + 0xb4);
      uVar25 = *(uint *)(param_3 + 0xb8);
      iVar4 = uVar22 - uVar25;
      if (uVar22 < uVar25 || iVar4 == 0) {
        iVar4 = uVar25 - uVar22;
      }
      *(int *)(param_3 + 0x70) = iVar4 + *(int *)(param_3 + 0x70);
    }
    *(undefined4 *)(param_3 + 0xb0) = 1;
    *(uint *)(param_3 + 0xb4) = uVar16;
    *(uint *)(param_3 + 0xb8) = uVar16;
    if (uVar16 < uVar26) {
      iVar4 = *(int *)(param_2 + 0x278);
      iVar6 = param_2 + 0x158;
      uVar23 = param_4[2];
      uVar25 = *(uint *)(param_2 + 0x27c) & 0x1f;
      uVar22 = param_4[3];
      uVar5 = 0;
      do {
        if (uVar7 < 0x8000000) {
          if (uVar16 < uVar26) {
            iVar14 = *(int *)(param_3 + 0x78);
            uVar18 = *(uint *)(param_3 + 0x7c);
            uVar24 = uVar7;
            do {
              uVar7 = *(uint *)(iVar14 + (uVar24 + *(byte *)(iVar6 + (uint)*(byte *)(uVar23 + uVar16
                                                                                    ))) * 4);
              if (0x7ffffff < uVar7) {
LAB_01684f9c:
                if (-1 < (int)uVar7) goto LAB_01684e38;
                if (*(int *)(param_3 + 0xb0) == 0) goto LAB_016864ec;
                *(uint *)(param_3 + 0xb8) = uVar16;
                uVar8 = uVar24 + *(byte *)(iVar6 + (uint)*(byte *)(uVar23 + uVar16));
                if (uVar18 <= uVar8) {
LAB_016869a4:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(uVar8,uVar18,&DAT_01d084bc);
                }
                uVar18 = *(uint *)(iVar14 + uVar8 * 4);
                if ((int)uVar18 < 0) {
                  local_54 = (uint *)param_2;
                  local_50 = (code *)param_3;
                  uVar29 = FUN_016c4f08(&local_54,uVar24,(uint)*(byte *)(uVar23 + uVar16) << 8);
                }
                else {
                  uVar29 = (ulonglong)uVar18 << 0x20;
                }
                uVar7 = (uint)(uVar29 >> 0x20);
                if ((uVar29 & 1) == 0) goto LAB_01684e38;
                uVar3 = 1;
                local_50 = (code *)uVar16;
                goto LAB_01686210;
              }
              if (uVar26 <= uVar16 + 3) break;
              iVar21 = uVar23 + uVar16;
              uVar8 = *(uint *)(iVar14 + (uVar7 + *(byte *)(iVar6 + (uint)*(byte *)(iVar21 + 1))) *
                                         4);
              if (0x7ffffff < uVar8) {
                uVar16 = uVar16 + 1;
                uVar24 = uVar7;
                uVar7 = uVar8;
                goto LAB_01684f9c;
              }
              uVar9 = *(uint *)(iVar14 + (uVar8 + *(byte *)(iVar6 + (uint)*(byte *)(iVar21 + 2))) *
                                         4);
              if (0x7ffffff < uVar9) {
                uVar16 = uVar16 + 2;
                uVar24 = uVar8;
                uVar7 = uVar9;
                goto LAB_01684f9c;
              }
              uVar7 = *(uint *)(iVar14 + (uVar9 + *(byte *)(iVar6 + (uint)*(byte *)(iVar21 + 3))) *
                                         4);
              if (0x7ffffff < uVar7) {
                uVar24 = uVar9;
                uVar16 = uVar16 + 3;
                goto LAB_01684f9c;
              }
              uVar16 = uVar16 + 4;
              uVar24 = uVar7;
            } while (uVar16 < uVar26);
          }
        }
        else {
          if (*(int *)(param_3 + 0xb0) == 0) goto LAB_016864ec;
          *(uint *)(param_3 + 0xb8) = uVar16;
          if (uVar22 <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar16,uVar22,&DAT_01d0761c);
          }
          uVar8 = *(uint *)(param_3 + 0x7c);
          uVar18 = (uVar7 & 0x7ffffff) + (uint)*(byte *)(iVar6 + (uint)*(byte *)(uVar23 + uVar16));
          if (uVar8 <= uVar18) goto LAB_01686934;
          uVar18 = *(uint *)(*(int *)(param_3 + 0x78) + uVar18 * 4);
          if ((int)uVar18 < 0) {
            local_54 = (uint *)param_2;
            local_50 = (code *)param_3;
            uVar29 = FUN_016c4f08(&local_54,uVar7,(uint)*(byte *)(uVar23 + uVar16) << 8);
          }
          else {
            uVar29 = (ulonglong)uVar18 << 0x20;
          }
          uVar7 = (uint)(uVar29 >> 0x20);
          if ((uVar29 & 1) != 0) goto LAB_01686208;
LAB_01684e38:
          if ((0x7ffffff < uVar7) && ((uVar7 & 0x10000000) == 0)) {
            if ((uVar7 & 0x8000000) == 0) {
              if ((uVar7 & 0x40000000) != 0) {
                FUN_01684408(param_3,uVar16);
                param_1[1] = local_170;
                *param_1 = uVar5;
                param_1[2] = local_178;
                return;
              }
              if ((uVar7 & 0x20000000) != 0) {
                FUN_01684408(param_3,uVar16);
                if (uVar22 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(uVar16,uVar22,&DAT_01d0763c);
                }
                uVar3 = *(undefined1 *)(uVar23 + uVar16);
                local_50 = (code *)uVar16;
LAB_0168543c:
                local_54 = (uint *)((uint)CONCAT21(local_54._2_2_,uVar3) << 8);
                uVar3 = 0;
                goto LAB_01686210;
              }
              goto LAB_0168691c;
            }
            uVar5 = 1;
            local_178 = uVar16;
            if (*(int *)(iVar4 + 0x154) == 1) {
              local_170 = 0;
            }
            else {
              uVar18 = (uVar7 & 0x7ffffff) >> uVar25;
              if (*(uint *)(param_3 + 0x94) <= (uVar7 & 0x7ffffff) >> uVar25) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar18,*(uint *)(param_3 + 0x94),&DAT_01d09420);
              }
              puVar10 = (undefined4 *)(*(int *)(param_3 + 0x90) + uVar18 * 8);
              local_170 = FUN_0168c724(*puVar10,puVar10[1],0);
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar26);
      uVar23 = local_178;
    }
    else {
      uVar22 = param_4[3];
      uVar5 = 0;
    }
    if (uVar22 <= uVar26) {
      iVar4 = *(byte *)(param_2 + 599) + 1;
      uVar25 = FUN_016c2c08(iVar4);
      uVar18 = *(uint *)(param_3 + 0x7c);
      uVar16 = (uVar25 & 0xffff) >> 8;
      if ((uVar25 & 1) != 0) {
        uVar16 = uVar25 >> 0x10;
      }
      uVar16 = uVar16 + (uVar7 & 0x7ffffff);
      if (uVar18 <= uVar16) goto LAB_01686998;
      uVar16 = *(uint *)(*(int *)(param_3 + 0x78) + uVar16 * 4);
      if ((int)uVar16 < 0) {
        uVar11 = FUN_016c2c08(iVar4);
        local_54 = (uint *)param_2;
        local_50 = (code *)param_3;
        uVar29 = FUN_016c4f08(&local_54,uVar7,uVar11);
      }
      else {
        uVar29 = (ulonglong)uVar16 << 0x20;
      }
      uVar11 = (undefined4)(uVar29 >> 0x20);
      if ((uVar29 & 1) != 0) {
        uVar3 = 1;
        local_50 = (code *)uVar22;
        goto LAB_016852f0;
      }
      if ((uVar29 & 0x800000000000000) != 0) goto LAB_01685268;
LAB_0168529c:
      uVar16 = *(uint *)(param_3 + 0xb0);
      uVar22 = *(uint *)(param_3 + 0xb4);
      *(undefined4 *)(param_3 + 0xb0) = 0;
      if ((uVar16 & 1) == 0) goto LAB_01686724;
      iVar6 = *(int *)(param_3 + 0x70);
      param_1[1] = local_170;
      param_1[2] = uVar23;
      iVar4 = uVar26 - uVar22;
      if (uVar26 < uVar22) {
        iVar4 = uVar22 - uVar26;
      }
      iVar6 = iVar6 + iVar4;
      *param_1 = uVar5;
      goto LAB_01685374;
    }
    uVar8 = *(uint *)(param_3 + 0x7c);
    bVar15 = *(byte *)(param_4[2] + uVar26);
    uVar18 = (uVar7 & 0x7ffffff) + (uint)*(byte *)(param_2 + bVar15 + 0x158);
    if (uVar8 <= uVar18) goto LAB_01686934;
    uVar16 = *(uint *)(*(int *)(param_3 + 0x78) + uVar18 * 4);
    if ((int)uVar16 < 0) {
      local_54 = (uint *)param_2;
      local_50 = (code *)param_3;
      uVar29 = FUN_016c4f08(&local_54,uVar7,(uint)bVar15 << 8);
    }
    else {
      uVar29 = (ulonglong)uVar16 << 0x20;
    }
    uVar11 = (undefined4)(uVar29 >> 0x20);
    if ((uVar29 & 1) == 0) {
      uVar22 = uVar26;
      if ((uVar29 & 0x800000000000000) != 0) {
LAB_01685268:
        local_170 = FUN_01684564(*(undefined4 *)(param_2 + 0x278),*(undefined4 *)(param_2 + 0x27c),
                                 *(undefined4 *)(param_3 + 0x90),*(undefined4 *)(param_3 + 0x94),
                                 uVar11);
        uVar5 = 1;
        uVar23 = uVar22;
        goto LAB_0168529c;
      }
      if ((uVar29 & 0x2000000000000000) == 0) goto LAB_0168529c;
LAB_016852e4:
      uVar3 = 0;
      local_54 = (uint *)((uint)CONCAT21(local_54._2_2_,bVar15) << 8);
      local_50 = (code *)uVar26;
      goto LAB_016852f0;
    }
LAB_016851d4:
    uVar3 = 1;
    local_50 = (code *)uVar26;
LAB_016852f0:
    local_54 = (uint *)CONCAT31(local_54._1_3_,uVar3);
    uVar5 = FUN_016cc61c(&local_54);
    *param_1 = 2;
    param_1[1] = uVar5;
    return;
  }
  if ((uVar16 != 0) && (uVar23 < param_4[3])) {
    bVar15 = *(byte *)(param_4[2] + uVar23);
    uVar18 = (uint)bVar15;
    iVar4 = thunk_FUN_01bed842(param_2 + 600,"",0x20);
    if (iVar4 == 0) {
LAB_016846c0:
      uVar18 = (uint)*(byte *)(param_2 + uVar18 + 0x58);
      goto LAB_01684768;
    }
    puVar20 = (uint *)(param_2 + 600 + (bVar15 >> 3 & 0xfffffff0));
    local_160[0] = *puVar20;
    local_160[1] = puVar20[1];
    local_160[2] = puVar20[2];
    local_160[3] = puVar20[3];
    uStack_150 = 0;
    local_144 = 0;
    local_148 = 0;
    local_14c = 0;
    if ((local_160[(uVar18 & 0x7f) >> 5] >> (uVar18 & 0x1f) & 1) == 0) goto LAB_016846c0;
LAB_01684758:
    local_60 = 4;
    local_5c = uVar18;
LAB_01685060:
    iVar4 = 2;
    if (2 < local_60) {
      iVar4 = local_60 - 3;
    }
    if (iVar4 == 0) {
      uVar3 = 1;
      local_50 = (code *)uVar16;
    }
    else if (iVar4 == 1) {
      if (uVar16 == 0) {
LAB_01686874:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_004ce84e,0x24,&DAT_01d084dc);
      }
      uVar3 = 0;
      local_54 = (uint *)((uint)CONCAT21(local_54._2_2_,(char)local_5c) << 8);
      local_50 = (code *)uVar23;
    }
    else {
      uVar3 = 3;
      local_50 = (code *)local_60;
      local_4c = (uint *)local_5c;
    }
    goto LAB_016852f0;
  }
  uVar18 = 2;
LAB_01684768:
  if (uVar22 == 0) {
    uVar8 = uVar18;
LAB_0168495c:
    uVar7 = *(uint *)(param_3 + 0x88);
    if (uVar7 <= uVar8) {
LAB_01686974:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar8,uVar7,&DAT_01d084ec);
    }
    uVar7 = *(uint *)(*(int *)(param_3 + 0x84) + uVar8 * 4);
    if ((int)uVar7 < 0) {
      local_54 = (uint *)param_2;
      local_50 = (code *)param_3;
      FUN_016c5600(&local_60,&local_54,uVar22,uVar25,uVar18);
      if (local_60 != 5) goto LAB_01685060;
      uVar7 = local_5c;
    }
  }
  else {
    if (uVar22 != 2) {
      uVar8 = uVar18 + 6;
      goto LAB_0168495c;
    }
    if ((*(byte *)(param_2 + 0x51) & 1) == 0) goto LAB_01685050;
    if (uVar25 < *(uint *)(*(int *)(param_2 + 0x278) + 0x154)) {
      uVar8 = uVar18 + uVar25 * 6 + 0xc;
      goto LAB_0168495c;
    }
    uVar7 = FUN_016c4c8c(*(undefined4 *)(param_2 + 0x27c));
  }
  if ((*(uint *)(param_3 + 0xb0) & 1) != 0) {
    uVar22 = *(uint *)(param_3 + 0xb4);
    uVar25 = *(uint *)(param_3 + 0xb8);
    iVar4 = uVar22 - uVar25;
    if (uVar22 < uVar25 || iVar4 == 0) {
      iVar4 = uVar25 - uVar22;
    }
    *(int *)(param_3 + 0x70) = iVar4 + *(int *)(param_3 + 0x70);
  }
  *(undefined4 *)(param_3 + 0xb0) = 1;
  *(uint *)(param_3 + 0xb4) = uVar16;
  *(uint *)(param_3 + 0xb8) = uVar16;
  if (uVar16 < uVar26) {
    uVar25 = param_4[2];
    uVar22 = param_4[3];
    iVar4 = param_2 + 0x158;
    do {
      if (uVar7 < 0x8000000) {
        if (uVar16 < uVar26) {
          iVar6 = *(int *)(param_3 + 0x78);
          uVar8 = *(uint *)(param_3 + 0x7c);
          do {
            uVar18 = *(uint *)(iVar6 + (uVar7 + *(byte *)(iVar4 + (uint)*(byte *)(uVar25 + uVar16)))
                                       * 4);
            if (0x7ffffff < uVar18) {
LAB_01684b08:
              if (-1 < (int)uVar18) goto LAB_01684a24;
              if (*(int *)(param_3 + 0xb0) == 0) goto LAB_016864ec;
              *(uint *)(param_3 + 0xb8) = uVar16;
              uVar18 = uVar7 + *(byte *)(iVar4 + (uint)*(byte *)(uVar25 + uVar16));
              if (uVar8 <= uVar18) goto LAB_01686934;
              uVar18 = *(uint *)(iVar6 + uVar18 * 4);
              if ((int)uVar18 < 0) {
                local_54 = (uint *)param_2;
                local_50 = (code *)param_3;
                uVar29 = FUN_016c4f08(&local_54,uVar7,(uint)*(byte *)(uVar25 + uVar16) << 8);
              }
              else {
                uVar29 = (ulonglong)uVar18 << 0x20;
              }
              uVar18 = (uint)(uVar29 >> 0x20);
              if ((uVar29 & 1) == 0) goto LAB_01684a24;
              uVar3 = 1;
              local_50 = (code *)uVar16;
              goto LAB_016853c4;
            }
            uVar23 = uVar16 + 3;
            if (uVar26 <= uVar23) {
              uVar7 = uVar18;
              break;
            }
            iVar14 = uVar25 + uVar16;
            uVar7 = *(uint *)(iVar6 + (uVar18 + *(byte *)(iVar4 + (uint)*(byte *)(iVar14 + 1))) * 4)
            ;
            if (0x7ffffff < uVar7) {
              uVar23 = uVar16 + 1;
              uVar24 = uVar7;
LAB_01684af4:
              uVar7 = uVar18;
              uVar18 = uVar24;
              uVar16 = uVar23;
              goto LAB_01684b08;
            }
            uVar18 = *(uint *)(iVar6 + (uVar7 + *(byte *)(iVar4 + (uint)*(byte *)(iVar14 + 2))) * 4)
            ;
            if (0x7ffffff < uVar18) {
              uVar16 = uVar16 + 2;
              goto LAB_01684b08;
            }
            uVar7 = *(uint *)(iVar6 + (uVar18 + *(byte *)(iVar4 + (uint)*(byte *)(iVar14 + 3))) * 4)
            ;
            uVar24 = uVar7;
            if (0x7ffffff < uVar7) goto LAB_01684af4;
            uVar16 = uVar16 + 4;
          } while (uVar16 < uVar26);
        }
      }
      else {
        if (*(int *)(param_3 + 0xb0) == 0) {
LAB_016864ec:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("no in-progress search to update",0x1f,&DAT_01d0760c);
        }
        *(uint *)(param_3 + 0xb8) = uVar16;
        if (uVar22 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar16,uVar22,&DAT_01d0761c);
        }
        uVar8 = *(uint *)(param_3 + 0x7c);
        uVar18 = (uVar7 & 0x7ffffff) + (uint)*(byte *)(iVar4 + (uint)*(byte *)(uVar25 + uVar16));
        if (uVar8 <= uVar18) goto LAB_01686934;
        uVar18 = *(uint *)(*(int *)(param_3 + 0x78) + uVar18 * 4);
        if ((int)uVar18 < 0) {
          local_54 = (uint *)param_2;
          local_50 = (code *)param_3;
          uVar29 = FUN_016c4f08(&local_54,uVar7,(uint)*(byte *)(uVar25 + uVar16) << 8);
        }
        else {
          uVar29 = (ulonglong)uVar18 << 0x20;
        }
        uVar18 = (uint)(uVar29 >> 0x20);
        if ((uVar29 & 1) != 0) {
          uVar3 = 1;
          local_50 = (code *)uVar16;
LAB_016853c4:
          local_54 = (uint *)CONCAT31(local_54._1_3_,uVar3);
          uVar5 = FUN_016cc61c(&local_54);
          *param_1 = 2;
          param_1[1] = uVar5;
          return;
        }
LAB_01684a24:
        if ((0x7ffffff < uVar18) && ((uVar18 & 0x10000000) == 0)) {
          if ((uVar18 & 0x8000000) != 0) {
            uVar5 = FUN_01684564(*(undefined4 *)(param_2 + 0x278),*(undefined4 *)(param_2 + 0x27c),
                                 *(undefined4 *)(param_3 + 0x90),*(undefined4 *)(param_3 + 0x94),
                                 uVar18);
            FUN_01684408(param_3,uVar16);
            *param_1 = 1;
            param_1[1] = uVar5;
            param_1[2] = uVar16;
            return;
          }
          if ((uVar18 & 0x40000000) != 0) {
            FUN_01684408(param_3,uVar16);
            *param_1 = 0;
            return;
          }
          if ((uVar18 & 0x20000000) == 0) {
LAB_0168691c:
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("internal error: entered unreachable code: sid being unknown is a bug",0x89
                         ,&DAT_01d0762c);
          }
          FUN_01684408(param_3,uVar16);
          if (uVar22 <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar16,uVar22,&DAT_01d0763c);
          }
          local_54 = (uint *)((uint)CONCAT21(local_54._2_2_,*(undefined1 *)(uVar25 + uVar16)) << 8);
          uVar3 = 0;
          local_50 = (code *)uVar16;
          goto LAB_016853c4;
        }
        uVar7 = uVar18;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar26);
  }
  else {
    uVar22 = param_4[3];
  }
  if (uVar26 < uVar22) {
    uVar8 = *(uint *)(param_3 + 0x7c);
    bVar15 = *(byte *)(param_4[2] + uVar26);
    uVar18 = (uVar7 & 0x7ffffff) + (uint)*(byte *)(param_2 + bVar15 + 0x158);
    if (uVar8 <= uVar18) {
LAB_01686934:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar18,uVar8,&DAT_01d084bc);
    }
    uVar16 = *(uint *)(*(int *)(param_3 + 0x78) + uVar18 * 4);
    if ((int)uVar16 < 0) {
      local_54 = (uint *)param_2;
      local_50 = (code *)param_3;
      uVar29 = FUN_016c4f08(&local_54,uVar7,(uint)bVar15 << 8);
    }
    else {
      uVar29 = (ulonglong)uVar16 << 0x20;
    }
    uVar11 = (undefined4)(uVar29 >> 0x20);
    uVar5 = (undefined4)uVar29;
    if ((uVar29 & 1) != 0) goto LAB_016851d4;
    uVar22 = uVar26;
    if ((uVar29 & 0x800000000000000) != 0) goto LAB_0168531c;
    if ((uVar29 & 0x2000000000000000) != 0) goto LAB_016852e4;
LAB_01685314:
    uVar11 = 0;
  }
  else {
    iVar4 = *(byte *)(param_2 + 599) + 1;
    uVar25 = FUN_016c2c08(iVar4);
    uVar18 = *(uint *)(param_3 + 0x7c);
    uVar16 = (uVar25 & 0xffff) >> 8;
    if ((uVar25 & 1) != 0) {
      uVar16 = uVar25 >> 0x10;
    }
    uVar16 = uVar16 + (uVar7 & 0x7ffffff);
    if (uVar18 <= uVar16) {
LAB_01686998:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar16,uVar18,&DAT_01d084cc);
    }
    uVar16 = *(uint *)(*(int *)(param_3 + 0x78) + uVar16 * 4);
    if ((int)uVar16 < 0) {
      uVar5 = FUN_016c2c08(iVar4);
      local_54 = (uint *)param_2;
      local_50 = (code *)param_3;
      uVar29 = FUN_016c4f08(&local_54,uVar7,uVar5);
    }
    else {
      uVar29 = (ulonglong)uVar16 << 0x20;
    }
    uVar11 = (undefined4)(uVar29 >> 0x20);
    uVar5 = (undefined4)uVar29;
    if ((uVar29 & 1) != 0) {
      uVar3 = 1;
      local_50 = (code *)uVar22;
      goto LAB_016852f0;
    }
    if ((uVar29 & 0x800000000000000) == 0) goto LAB_01685314;
LAB_0168531c:
    uVar5 = FUN_01684564(*(undefined4 *)(param_2 + 0x278),*(undefined4 *)(param_2 + 0x27c),
                         *(undefined4 *)(param_3 + 0x90),*(undefined4 *)(param_3 + 0x94),uVar11);
    uVar11 = 1;
  }
  uVar16 = *(uint *)(param_3 + 0xb0);
  uVar25 = *(uint *)(param_3 + 0xb4);
  *(undefined4 *)(param_3 + 0xb0) = 0;
  if ((uVar16 & 1) == 0) {
LAB_01686724:
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("no in-progress search to finish",0x1f,&DAT_01d075fc);
  }
  *param_1 = uVar11;
  param_1[1] = uVar5;
  param_1[2] = uVar22;
  iVar6 = uVar26 - uVar25;
  if (uVar26 < uVar25) {
    iVar6 = uVar25 - uVar26;
  }
  iVar6 = *(int *)(param_3 + 0x70) + iVar6;
LAB_01685374:
  *(int *)(param_3 + 0x70) = iVar6;
  return;
LAB_016862d0:
  uVar3 = 1;
  local_50 = (code *)uVar16;
  goto LAB_01686210;
}

