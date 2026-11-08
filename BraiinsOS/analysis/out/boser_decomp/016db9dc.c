// FUN_016db9dc @ 016db9dc size=3156 calls_out=19 calls_in=1
// strings: 

void FUN_016db9dc(undefined4 *param_1,int *param_2)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  undefined1 *puVar12;
  byte bVar13;
  int *extraout_r1;
  int *extraout_r1_00;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int *piVar19;
  undefined4 uVar20;
  int *unaff_r6;
  int *piVar21;
  undefined1 unaff_r9;
  int *piVar22;
  undefined *puVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined *local_f8;
  int *local_d8;
  int local_cc;
  uint local_c8;
  int *piStack_c4;
  undefined4 uStack_c0;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int *local_9c;
  int *local_98;
  int *local_94;
  int *local_68;
  int *local_64;
  int *local_60;
  undefined4 local_5c;
  int *local_58;
  undefined4 local_54;
  int local_50;
  int *local_4c;
  undefined4 uStack_48;
  int *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int *local_38;
  int *local_34;
  int local_30;
  int *local_2c;
  
  iVar6 = FUN_016d4a28(param_2);
  if ((iVar6 != 0x70) && (iVar6 = FUN_016d4a28(param_2), iVar6 != 0x50)) {
LAB_016dc560:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_004cfd89,0x3a,&DAT_01d09f98);
  }
  iVar6 = *param_2;
  if (*(int *)(iVar6 + 0x40) != 0) {
    FUN_01306fc8(&DAT_01d09f28);
    goto LAB_016dc560;
  }
  *(undefined4 *)(iVar6 + 0x4c) = 0;
  *(undefined4 *)(iVar6 + 0x40) = 0xffffffff;
  iVar7 = FUN_016d4a28(param_2);
  iVar8 = FUN_016d819c(param_2);
  if (iVar8 == 0) {
    local_ac = *(int *)(iVar6 + 0x50);
    uStack_a8 = *(undefined4 *)(iVar6 + 0x54);
    uStack_a4 = *(undefined4 *)(iVar6 + 0x58);
    local_b8 = *(int *)(iVar6 + 0x50);
    uStack_b4 = *(undefined4 *)(iVar6 + 0x54);
    uStack_b0 = *(undefined4 *)(iVar6 + 0x58);
    local_9c = (int *)0xa;
    FUN_016d4540(&local_68,param_2[1],param_2[2],&local_b8,&local_9c);
  }
  else {
    iVar8 = FUN_016d4a28(param_2);
    if (iVar8 == 0x7b) {
      FUN_016d4f3c(&local_68,param_2);
      local_c8 = local_5c;
      piStack_c4 = local_58;
      uStack_c0 = local_54;
      while ((iVar8 = FUN_016d819c(param_2), iVar8 != 0 &&
             (iVar8 = FUN_016d4a28(param_2), iVar8 != 0x7d))) {
        uVar9 = FUN_016d4a28(param_2);
        iVar8 = *(int *)(iVar6 + 0x4c);
        uVar16 = 1;
        if (0x7f < uVar9) {
          uVar16 = 2;
        }
        if ((0x7ff < uVar9) && (uVar16 = 4, uVar9 < 0x10000)) {
          uVar16 = 3;
        }
        iVar11 = iVar8;
        if ((uint)(*(int *)(iVar6 + 0x44) - iVar8) < uVar16) {
          FUN_006520b4((int *)(iVar6 + 0x44),iVar8,uVar16,1,1);
          iVar11 = *(int *)(iVar6 + 0x4c);
        }
        pbVar10 = (byte *)(*(int *)(iVar6 + 0x48) + iVar11);
        if (uVar9 < 0x80) {
          *pbVar10 = (byte)uVar9;
        }
        else {
          bVar4 = (byte)uVar9 & 0x3f | 0x80;
          bVar13 = (byte)(uVar9 >> 6);
          if (uVar9 < 0x800) {
            bVar13 = bVar13 | 0xc0;
            pbVar10[1] = bVar4;
          }
          else {
            bVar5 = bVar13 & 0x3f | 0x80;
            bVar13 = (byte)(uVar9 >> 0xc);
            if (uVar9 >> 0x10 != 0) {
              pbVar10[3] = bVar4;
              pbVar10[2] = bVar5;
              pbVar10[1] = bVar13 & 0x3f | 0x80;
              *pbVar10 = (byte)(uVar9 >> 0x12) | 0xf0;
              goto LAB_016dbb64;
            }
            pbVar10[1] = bVar5;
            bVar13 = bVar13 | 0xe0;
            pbVar10[2] = bVar4;
          }
          *pbVar10 = bVar13;
        }
LAB_016dbb64:
        *(uint *)(iVar6 + 0x4c) = uVar16 + iVar8;
      }
      piVar21 = (int *)(iVar6 + 0x50);
      if (*piVar21 != param_2[2]) {
        local_cc = FUN_016d4a28(param_2);
        if (local_cc != 0x7d) {
          FUN_016f4e14(&local_cc,&DAT_0056db9c,&DAT_01d09f88);
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xfdee,0x16dc644);
          (*pcVar3)();
        }
        FUN_016d4fe8(param_2);
        piVar22 = *(int **)(iVar6 + 0x48);
        param_2 = *(int **)(iVar6 + 0x4c);
        FUN_01306b30(&local_68,piVar22,param_2,&DAT_004cfd87,2);
        if (local_68 == (int *)&DAT_00000001) {
          local_d8 = local_38;
          puVar12 = (undefined1 *)((int)local_2c + -1);
          if (local_44 == (int *)&DAT_ffffffff) {
            piVar21 = (int *)((int)local_4c + (int)puVar12);
            if (piVar21 < local_34) {
              piVar15 = local_2c;
              if (local_2c < local_58) {
                piVar15 = local_58;
              }
LAB_016dc044:
              uVar9 = *(byte *)((int)local_38 + (int)piVar21) & 0x3f;
              uVar16 = (uint)local_60 >> uVar9 | local_5c << (0x20 - uVar9 & 0xff);
              if (-1 < (int)(uVar9 - 0x20)) {
                uVar16 = local_5c >> (uVar9 - 0x20 & 0xff);
              }
              if ((uVar16 & 1) == 0) {
                local_4c = (int *)((int)local_4c + (int)local_2c);
              }
              else {
                piVar21 = local_58;
                do {
                  piVar19 = piVar21;
                  if (piVar15 == piVar19) {
                    piVar21 = (int *)((int)local_58 + -1);
                    goto LAB_016dc0cc;
                  }
                  if (local_34 <= (int *)((int)local_4c + (int)piVar19)) {
                    piVar21 = (int *)((int)local_4c + (int)local_58);
                    goto LAB_016dc5d4;
                  }
                  piVar21 = (int *)((int)piVar19 + 1);
                } while (*(char *)(local_30 + (int)piVar19) ==
                         ((undefined1 *)((int)local_38 + (int)local_4c))[(int)piVar19]);
                local_4c = (int *)((int)piVar19 + (int)((int)local_4c + (1 - (int)local_58)));
              }
              goto LAB_016dc108;
            }
          }
          else {
            piVar21 = (int *)((int)local_4c + (int)puVar12);
            if (piVar21 < local_34) {
LAB_016dbe10:
              uVar9 = *(byte *)((int)local_38 + (int)piVar21) & 0x3f;
              uVar16 = (uint)local_60 >> uVar9 | local_5c << (0x20 - uVar9 & 0xff);
              if (-1 < (int)(uVar9 - 0x20)) {
                uVar16 = local_5c >> (uVar9 - 0x20 & 0xff);
              }
              if ((uVar16 & 1) == 0) {
                local_4c = (int *)((int)local_4c + (int)local_2c);
                local_44 = (int *)0x0;
              }
              else {
                piVar21 = local_58;
                if (local_58 < local_44) {
                  piVar21 = local_44;
                }
                piVar15 = local_2c;
                if (local_2c < piVar21) {
                  piVar15 = piVar21;
                }
                piVar19 = piVar21;
                do {
                  piVar14 = piVar19;
                  if (piVar15 == piVar14) {
                    piVar21 = local_58;
                    goto LAB_016dbec0;
                  }
                  if (local_34 <= (int *)((int)local_4c + (int)piVar14)) {
                    piVar21 = (int *)((int)piVar21 + (int)local_4c);
LAB_016dc5d4:
                    local_f8 = &DAT_01d2e38c;
                    if (piVar21 < local_34) {
                      piVar21 = local_34;
                    }
                    goto LAB_016dc618;
                  }
                  piVar19 = (int *)((int)piVar14 + 1);
                } while (*(char *)(local_30 + (int)piVar14) ==
                         ((undefined1 *)((int)local_38 + (int)local_4c))[(int)piVar14]);
                local_4c = (int *)((int)piVar14 + (int)((int)local_4c + (1 - (int)local_58)));
                local_44 = (int *)0x0;
              }
              goto LAB_016dbefc;
            }
          }
        }
        else if (local_5c._2_1_ == '\0') {
          local_5c = local_5c & 0xff;
          puVar23 = &DAT_01d2e39c;
          piVar21 = local_64;
          do {
            if (piVar21 != (int *)0x0) {
              if (piVar21 < local_34) {
                if (*(char *)((int)local_38 + (int)piVar21) < -0x40) goto LAB_016dc5f4;
              }
              else if (piVar21 != local_34) {
LAB_016dc5f4:
                param_2 = local_34;
                goto LAB_016dc5fc;
              }
            }
            if (piVar21 == local_34) {
              unaff_r6 = local_34;
              if ((local_5c & 1) == 0) break;
              goto LAB_016dc328;
            }
            pbVar10 = (byte *)((int)local_38 + (int)piVar21);
            uVar16 = (uint)*pbVar10;
            if (0x7fffffff < (uint)(int)(char)*pbVar10) {
              if (uVar16 < 0xe0) {
                uVar16 = pbVar10[1] & 0x3f | (uVar16 & 0x1f) << 6;
              }
              else {
                uVar9 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
                if (uVar16 < 0xf0) {
                  uVar16 = uVar9 | (uVar16 & 0x1f) << 0xc;
                }
                else {
                  uVar16 = pbVar10[3] & 0x3f | uVar9 << 6 | (uVar16 & 7) << 0x12;
                }
              }
            }
            if ((local_5c & 1) != 0) goto LAB_016dc278;
            iVar8 = 1;
            if (0x7f < uVar16) {
              iVar8 = 2;
            }
            local_5c = 1;
            if ((0x7ff < uVar16) && (iVar8 = 4, uVar16 < 0x10000)) {
              iVar8 = 3;
            }
            piVar21 = (int *)(iVar8 + (int)piVar21);
          } while( true );
        }
LAB_016dc124:
        piVar21 = (int *)0x0;
        do {
          uVar16 = (int)param_2 - (int)piVar21;
          if (uVar16 < 8) {
            uVar9 = 0;
            if (uVar16 == 0) {
              uVar24 = 0;
            }
            else {
              do {
                if (((undefined1 *)((int)piVar22 + (int)piVar21))[uVar9] == ':') {
                  uVar24 = CONCAT44(uVar9,1);
                  goto LAB_016dc184;
                }
                uVar9 = uVar9 + 1;
              } while (uVar16 != uVar9);
              uVar24 = (ulonglong)uVar16 << 0x20;
            }
          }
          else {
            uVar24 = FUN_01307168(0x3a,(undefined1 *)((int)piVar22 + (int)piVar21));
          }
LAB_016dc184:
          if ((uVar24 & 1) == 0) break;
          unaff_r6 = (int *)((int)(uVar24 >> 0x20) + (int)piVar21);
          if ((unaff_r6 < param_2) && (*(char *)((int)piVar22 + (int)unaff_r6) == ':')) {
            if ((int)unaff_r6 < 0) goto LAB_016dc374;
            if (unaff_r6 == (int *)0x0) {
              piVar21 = (int *)&DAT_00000001;
              piVar19 = (int *)0x0;
            }
            else {
              uVar18 = 1;
              piVar21 = (int *)FUN_01298504(unaff_r6,1);
              if (piVar21 == (int *)0x0) goto LAB_016dc378;
              piVar19 = unaff_r6;
            }
            FUN_01bed4e2(piVar21,piVar22,unaff_r6);
            piVar14 = (int *)((int)unaff_r6 + 1);
            if ((piVar14 < param_2) && (*(char *)((int)piVar22 + (int)piVar14) < -0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(piVar22,param_2,piVar14,param_2,&DAT_01d09f58);
            }
            piVar15 = (int *)((int)param_2 - (int)piVar14);
            if ((int)piVar15 < 0) {
              uVar18 = 0;
              piVar15 = extraout_r1_00;
LAB_016dc4e4:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar18,piVar15);
            }
            if (piVar15 == (int *)0x0) {
              param_2 = (int *)0x0;
              local_d8 = (int *)&DAT_00000001;
            }
            else {
              uVar18 = 1;
              local_d8 = (int *)FUN_01298504(piVar15,1);
              if (local_d8 == (int *)0x0) goto LAB_016dc4e4;
              param_2 = piVar15;
            }
            FUN_01bed4e2(local_d8,(char *)((int)piVar22 + (int)piVar14));
            unaff_r9 = 1;
            goto LAB_016dbcdc;
          }
          piVar21 = (int *)((int)unaff_r6 + 1);
        } while (piVar21 <= param_2);
        piVar21 = (int *)0x0;
        do {
          uVar16 = (int)param_2 - (int)piVar21;
          if (uVar16 < 8) {
            uVar9 = 0;
            if (uVar16 == 0) {
              uVar24 = 0;
            }
            else {
              do {
                if (((undefined1 *)((int)piVar22 + (int)piVar21))[uVar9] == '=') {
                  uVar24 = CONCAT44(uVar9,1);
                  goto LAB_016dc210;
                }
                uVar9 = uVar9 + 1;
              } while (uVar16 != uVar9);
              uVar24 = (ulonglong)uVar16 << 0x20;
            }
          }
          else {
            uVar24 = FUN_01307168(0x3d,(undefined1 *)((int)piVar22 + (int)piVar21));
          }
LAB_016dc210:
          if ((uVar24 & 1) == 0) break;
          piVar21 = (int *)((int)(uVar24 >> 0x20) + (int)piVar21);
          if ((piVar21 < param_2) && (*(char *)((int)piVar22 + (int)piVar21) == '=')) {
            uVar25 = FUN_016dcee8(piVar22,param_2,piVar21);
            FUN_0166b924(&local_9c,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
            uVar25 = FUN_016dcf38(piVar22,param_2,(undefined1 *)((int)piVar21 + 1));
            FUN_0166b924(&local_68,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
            unaff_r9 = 0;
            local_d8 = local_64;
            unaff_r6 = local_94;
            piVar19 = local_9c;
            piVar21 = local_98;
            param_2 = local_68;
            piVar15 = local_60;
            goto LAB_016dbcdc;
          }
          piVar21 = (int *)((int)piVar21 + 1);
        } while (piVar21 <= param_2);
        uVar18 = 0;
        if ((int)param_2 < 0) {
LAB_016dc248:
          unaff_r6 = param_2;
LAB_016dc378:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar18,unaff_r6);
        }
        if (param_2 == (int *)0x0) {
          unaff_r6 = (int *)&DAT_00000001;
          piVar21 = (int *)0x0;
        }
        else {
          uVar18 = 1;
          unaff_r6 = (int *)FUN_01298504(param_2,1);
          if (unaff_r6 == (int *)0x0) goto LAB_016dc248;
          piVar21 = param_2;
        }
        FUN_01bed4e2(unaff_r6,piVar22,param_2);
        unaff_r9 = 0;
        piVar19 = (int *)&DAT_80000001;
        piVar15 = (int *)0x16dc3a0;
        goto LAB_016dbcdc;
      }
      local_ac = *piVar21;
      uStack_a8 = *(undefined4 *)(iVar6 + 0x54);
      uStack_a4 = *(undefined4 *)(iVar6 + 0x58);
      local_b8 = *piVar21;
      uStack_b4 = *(undefined4 *)(iVar6 + 0x54);
      uStack_b0 = *(undefined4 *)(iVar6 + 0x58);
      local_9c = (int *)0xa;
      FUN_016d4540(&local_68,param_2[1],*piVar21,&local_b8,&local_9c);
    }
    else {
      local_c8 = *(uint *)(iVar6 + 0x50);
      piStack_c4 = *(int **)(iVar6 + 0x54);
      uStack_c0 = *(undefined4 *)(iVar6 + 0x58);
      piVar21 = (int *)FUN_016d4a28(param_2);
      if (piVar21 != (int *)&DAT_0000005c) {
        piVar15 = (int *)0x16dbcd8;
        FUN_016d819c(param_2);
        piVar19 = (int *)&DAT_80000000;
        goto LAB_016dbcdc;
      }
      FUN_016d4f3c(&local_b8,param_2);
      local_9c = (int *)0x1f;
      FUN_016d4540(&local_68,param_2[1],param_2[2],&local_b8,&local_9c);
    }
  }
  *param_1 = local_68;
  param_1[1] = local_64;
  param_1[2] = local_60;
  param_1[3] = local_5c;
  param_1[4] = local_58;
  param_1[5] = local_54;
  param_1[6] = local_50;
  param_1[7] = local_4c;
  param_1[8] = uStack_48;
  param_1[9] = local_44;
  param_1[10] = local_40;
  param_1[0xb] = uStack_3c;
  param_1[0xc] = local_38;
  param_1[0xd] = local_34;
  param_1[0xe] = local_30;
  param_1[0xf] = local_2c;
  goto LAB_016dbc00;
  while( true ) {
    if (local_2c <= (int *)((int)local_58 + -1)) goto LAB_016dc614;
    piVar19 = (int *)((int)local_4c + (int)piVar21);
    if (local_34 <= piVar19) goto LAB_016dc5e4;
    pcVar1 = (undefined1 *)((int)local_38 + (int)local_4c) + (int)piVar21;
    pcVar2 = (char *)(local_30 + (int)piVar21);
    piVar21 = (int *)((int)piVar21 + -1);
    if (*pcVar2 != *pcVar1) break;
LAB_016dc0cc:
    if (piVar21 == (int *)&DAT_ffffffff) {
      unaff_r6 = local_4c;
      goto LAB_016dc328;
    }
  }
  local_4c = (int *)((int)local_4c + local_50);
LAB_016dc108:
  piVar21 = (int *)((int)local_4c + (int)puVar12);
  if (local_34 <= piVar21) goto LAB_016dc124;
  goto LAB_016dc044;
  while( true ) {
    piVar21 = (int *)((int)piVar21 + -1);
    if (local_2c <= piVar21) goto LAB_016dc614;
    piVar19 = (int *)((int)piVar21 + (int)local_4c);
    if (local_34 <= piVar19) goto LAB_016dc5e4;
    if (*(char *)(local_30 + (int)piVar21) != *(char *)((int)local_38 + (int)piVar19)) break;
LAB_016dbec0:
    unaff_r6 = local_4c;
    if (piVar21 <= local_44) goto LAB_016dc328;
  }
  local_4c = (int *)((int)local_4c + local_50);
  local_44 = (int *)((int)local_2c - local_50);
LAB_016dbefc:
  piVar21 = (int *)((int)local_4c + (int)puVar12);
  if (local_34 <= piVar21) goto LAB_016dc124;
  goto LAB_016dbe10;
LAB_016dc614:
  local_f8 = &DAT_01d2e36c;
  local_34 = local_2c;
  goto LAB_016dc618;
LAB_016dc5e4:
  local_f8 = &DAT_01d2e37c;
  piVar21 = piVar19;
LAB_016dc618:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(piVar21,local_34,local_f8);
LAB_016dc278:
  unaff_r6 = piVar21;
LAB_016dc328:
  if (unaff_r6 == (int *)0x0) {
    piVar19 = (int *)0x0;
    piVar21 = (int *)&DAT_00000001;
  }
  else {
    if (unaff_r6 < param_2) {
      if (*(char *)((int)piVar22 + (int)unaff_r6) < -0x40) goto LAB_016dc348;
    }
    else if (unaff_r6 != param_2) {
LAB_016dc348:
      piVar21 = (int *)0x0;
      puVar23 = &DAT_01d09f38;
      local_38 = piVar22;
      local_34 = unaff_r6;
LAB_016dc5fc:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(local_38,param_2,piVar21,local_34,puVar23);
    }
    if ((int)unaff_r6 < 0) {
LAB_016dc374:
      uVar18 = 0;
      goto LAB_016dc378;
    }
    uVar18 = 1;
    piVar21 = (int *)FUN_01298504(unaff_r6,1);
    if (piVar21 == (int *)0x0) goto LAB_016dc378;
    piVar19 = unaff_r6;
  }
  FUN_01bed4e2(piVar21,piVar22,unaff_r6);
  piVar14 = (int *)((int)unaff_r6 + 2);
  if (piVar14 < param_2) {
    if (*(char *)((int)piVar22 + (int)piVar14) < -0x40) goto LAB_016dc3f8;
  }
  else if (param_2 != piVar14) {
LAB_016dc3f8:
                    /* WARNING: Subroutine does not return */
    FUN_012fb514(piVar22,param_2,piVar14,param_2,&DAT_01d09f48);
  }
  piVar15 = (int *)((int)param_2 - (int)piVar14);
  if ((int)piVar15 < 0) {
    uVar18 = 0;
    piVar15 = extraout_r1;
LAB_016dc430:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar18,piVar15);
  }
  if (piVar15 == (int *)0x0) {
    param_2 = (int *)0x0;
    local_d8 = (int *)&DAT_00000001;
  }
  else {
    uVar18 = 1;
    local_d8 = (int *)FUN_01298504(piVar15,1);
    if (local_d8 == (int *)0x0) goto LAB_016dc430;
    param_2 = piVar15;
  }
  FUN_01bed4e2(local_d8,(char *)((int)piVar22 + (int)piVar14));
  unaff_r9 = 2;
LAB_016dbcdc:
  uVar18 = *(undefined4 *)(iVar6 + 0x50);
  uVar17 = *(undefined4 *)(iVar6 + 0x54);
  uVar20 = *(undefined4 *)(iVar6 + 0x58);
  param_1[1] = piVar19;
  param_1[2] = piVar21;
  param_1[5] = local_d8;
  param_1[4] = param_2;
  param_1[3] = unaff_r6;
  *(undefined1 *)(param_1 + 7) = unaff_r9;
  param_1[6] = piVar15;
  param_1[8] = local_c8;
  param_1[9] = piStack_c4;
  param_1[10] = uStack_c0;
  param_1[0xb] = uVar18;
  param_1[0xc] = uVar17;
  param_1[0xd] = uVar20;
  *param_1 = 0x22;
  *(bool *)(param_1 + 0xe) = iVar7 == 0x50;
LAB_016dbc00:
  *(int *)(iVar6 + 0x40) = *(int *)(iVar6 + 0x40) + 1;
  return;
}

