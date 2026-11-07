// FUN_0132c318 @ 0132c318 size=5732 calls_out=30 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x0132cdec) */
/* WARNING: Removing unreachable block (ram,0x0132cdf4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0132c318(undefined4 *param_1,int param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  undefined1 uVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  undefined *local_128;
  undefined *local_124;
  byte *local_10c;
  byte *local_108;
  byte *local_100;
  byte *local_fc;
  byte *local_f8;
  int local_e0;
  int *local_dc;
  int local_d8;
  byte *local_d0;
  int iStack_cc;
  int iStack_c8;
  byte *local_c4;
  byte *local_c0;
  byte *local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  byte *local_ac;
  byte *local_a8;
  byte *local_a0;
  byte *local_9c;
  byte *local_98;
  byte *local_94;
  byte *local_90;
  byte *local_8c;
  byte *local_88;
  byte *local_80;
  byte *pbStack_7c;
  byte *pbStack_78;
  byte *pbStack_74;
  byte *pbStack_70;
  byte *local_68;
  byte *local_64;
  byte *local_60;
  byte *local_58;
  byte *pbStack_54;
  byte *pbStack_50;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  byte *pbStack_2c;
  byte *pbStack_28;
  
  local_dc = (int *)&SUB_00000004;
  iVar13 = -0x80000000;
  local_d8 = 0;
  local_e0 = 0;
  if (param_3 < *(byte **)(param_2 + 0x14)) {
    uVar10 = param_4 + 1;
    local_124 = &DAT_01ce617c;
    local_128 = &DAT_01ce62dc;
    pbVar11 = param_3;
    do {
      FUN_0132dba0(&local_40,param_2);
      pbVar15 = local_3c;
      if (local_40 == &DAT_00000012) {
        pbVar24 = *(byte **)(param_2 + 0x14);
        if (local_3c == pbVar24) {
switchD_0132c410_caseD_29:
          local_98 = &DAT_80000000;
LAB_0132c588:
          local_a0 = (byte *)0x0;
          local_9c = pbVar15;
        }
        else {
          if (pbVar24 <= local_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(local_3c,pbVar24,&DAT_01ce60fc);
          }
          iVar13 = *(int *)(param_2 + 0x10);
          pbVar19 = local_3c + iVar13;
          bVar4 = *pbVar19;
          if (bVar4 < 0x3f) {
            switch(bVar4) {
            case 0x24:
              bVar4 = 3;
              if ((*(uint *)(param_2 + 0x38) & 2) == 0) {
                bVar4 = 1;
              }
LAB_0132c5ec:
              local_94 = (byte *)((uint)local_94 & 0xffff0000);
              local_98 = (byte *)0x80000002;
              break;
            default:
switchD_0132c410_caseD_25:
              pbVar15 = &DAT_00000001;
              if (((0x7fffffff < (uint)(int)(char)bVar4) && (pbVar15 = (byte *)0x2, 0xdf < bVar4))
                 && (pbVar15 = &SUB_00000004, bVar4 < 0xf0)) {
                pbVar15 = &DAT_00000003;
              }
              pbVar22 = pbVar15 + (int)local_3c;
              if ((CARRY4((uint)pbVar15,(uint)local_3c)) ||
                 ((local_3c != (byte *)0x0 && ((char)bVar4 < -0x40)))) goto LAB_0132d960;
              if (pbVar22 != (byte *)0x0) {
                if (pbVar22 < pbVar24) {
                  if ((char)pbVar22[iVar13] < -0x40) goto LAB_0132d960;
                }
                else if (pbVar22 != pbVar24) {
LAB_0132d960:
                  local_124 = &DAT_01ce610c;
LAB_0132d96c:
LAB_0132d970:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb514(iVar13,pbVar24,local_3c,pbVar22,local_124);
                }
              }
              pbVar24 = (byte *)FUN_01298504(pbVar15,1);
              if (pbVar24 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,pbVar15);
              }
              FUN_01bed4e2(pbVar24,pbVar19,pbVar15);
              local_98 = (byte *)0x80000003;
              uVar5 = *(undefined1 *)(param_2 + 0x38);
              local_9c = pbVar22;
              local_94 = pbVar15;
              local_90 = pbVar24;
              local_8c = pbVar15;
LAB_0132cf50:
              local_a0 = (byte *)0x0;
              local_88 = (byte *)(CONCAT31(local_88._1_3_,uVar5) & 0xffffff01);
              goto LAB_0132c6e4;
            case 0x28:
              if (0x3f < uVar10) {
                local_9c = &DAT_00000003;
                local_8c = local_3c;
                goto LAB_0132c6d8;
              }
              FUN_0132dba0(&local_40,param_2,local_3c + 1);
              pbVar15 = local_3c;
              if (local_40 != &DAT_00000012) goto LAB_0132c6c4;
              iVar13 = *(int *)(param_2 + 0x10);
              pbVar24 = *(byte **)(param_2 + 0x14);
              pbVar22 = pbVar24;
              if (local_3c != (byte *)0x0) {
                if (local_3c < pbVar24) {
                  if ((char)local_3c[iVar13] < -0x40) goto LAB_0132d970;
                }
                else if (pbVar24 != local_3c) goto LAB_0132d970;
              }
              if (((uint)((int)pbVar24 - (int)local_3c) < 2) ||
                 (*(short *)(local_3c + iVar13) != 0x3d3f)) {
                if (local_3c != (byte *)0x0) {
                  if (local_3c < pbVar24) {
                    if (-0x41 < (char)local_3c[iVar13]) goto LAB_0132cfcc;
                  }
                  else if (pbVar24 == local_3c) goto LAB_0132d1d8;
                  local_124 = &DAT_01ce618c;
                  goto LAB_0132d96c;
                }
LAB_0132cfcc:
                if ((1 < (uint)((int)pbVar24 - (int)local_3c)) &&
                   (*(short *)(local_3c + iVar13) == 0x213f)) {
                  bVar3 = true;
                  pbVar24 = (byte *)0x2;
                  uVar5 = 1;
                  goto LAB_0132d5fc;
                }
LAB_0132d1d8:
                uVar26 = FUN_0132ddb8(iVar13,pbVar24,local_3c,&DAT_01ce619c);
                if (0x2ffffffff < uVar26) {
                  pbVar24 = &DAT_00000003;
                  iVar13 = thunk_FUN_01bed842(&DAT_004cfde3,(int)uVar26,3);
                  if (iVar13 == 0) {
                    uVar5 = 2;
                    bVar3 = true;
                    goto LAB_0132d5fc;
                  }
                }
                uVar26 = FUN_0132ddb8(*(undefined4 *)(param_2 + 0x10),
                                      *(undefined4 *)(param_2 + 0x14),pbVar15,&DAT_01ce61ac);
                if (0x2ffffffff < uVar26) {
                  pbVar24 = &DAT_00000003;
                  iVar13 = thunk_FUN_01bed842(&DAT_004cfde6,(int)uVar26,3);
                  if (iVar13 == 0) {
                    bVar3 = true;
                    uVar5 = 3;
                    goto LAB_0132d5fc;
                  }
                }
                uVar26 = FUN_0132ddb8(*(undefined4 *)(param_2 + 0x10),
                                      *(undefined4 *)(param_2 + 0x14),pbVar15,&DAT_01ce61bc);
                if ((uVar26 < 0x200000000) || (*(short *)uVar26 != 0x3c3f)) {
                  uVar26 = FUN_0132ddb8(*(undefined4 *)(param_2 + 0x10),
                                        *(undefined4 *)(param_2 + 0x14),pbVar15,&DAT_01ce61cc);
                  if ((0x1ffffffff < uVar26) && (*(short *)uVar26 == 0x273f)) goto LAB_0132d410;
                  uVar26 = FUN_0132ddb8(*(undefined4 *)(param_2 + 0x10),
                                        *(undefined4 *)(param_2 + 0x14),pbVar15,&DAT_01ce61dc);
                  if ((uVar26 < 0x300000000) ||
                     (iVar13 = thunk_FUN_01bed842(&DAT_004cfc8b,(int)uVar26,3), iVar13 != 0)) {
                    uVar26 = FUN_0132ddb8(*(undefined4 *)(param_2 + 0x10),
                                          *(undefined4 *)(param_2 + 0x14),pbVar15,&DAT_01ce61ec);
                    if ((uVar26 < 0x300000000) ||
                       (iVar13 = thunk_FUN_01bed842(&DAT_0045080c,(int)uVar26,3), iVar13 != 0)) {
                      uVar26 = FUN_0132ddb8(*(undefined4 *)(param_2 + 0x10),
                                            *(undefined4 *)(param_2 + 0x14),pbVar15,&DAT_01ce61fc);
                      if ((0x1ffffffff < uVar26) && (*(short *)uVar26 == 0x3e3f)) {
                        uVar5 = 4;
                        bVar3 = false;
                        goto LAB_0132d408;
                      }
                      uVar26 = FUN_0132ddb8(*(undefined4 *)(param_2 + 0x10),
                                            *(undefined4 *)(param_2 + 0x14),pbVar15,&DAT_01ce620c);
                      if ((uVar26 < 0x200000000) || (*(short *)uVar26 != 0x283f)) {
                        uVar26 = FUN_0132ddb8(*(undefined4 *)(param_2 + 0x10),
                                              *(undefined4 *)(param_2 + 0x14),pbVar15,&DAT_01ce621c)
                        ;
                        if ((uVar26 < 0x300000000) ||
                           (iVar13 = thunk_FUN_01bed842(&DAT_0045080f,(int)uVar26,3), iVar13 != 0))
                        {
                          uVar27 = FUN_0132ddb8(*(undefined4 *)(param_2 + 0x10),
                                                *(undefined4 *)(param_2 + 0x14),pbVar15,
                                                &DAT_01ce622c);
                          if (((int)((ulonglong)uVar27 >> 0x20) == 0) || (*(char *)uVar27 != '?')) {
                            pbVar24 = (byte *)0x0;
                            *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
                            goto LAB_0132d5f8;
                          }
                          FUN_0132ee88(&local_a0,param_2,pbVar15,uVar10);
                        }
                        else {
                          FUN_0132ed10(&local_a0,param_2,pbVar15 + 3,1,0,&DAT_0053341b,0);
                        }
                      }
                      else {
                        FUN_0132e3b4(&local_a0,param_2,pbVar15 + 2,uVar10);
                      }
                    }
                    else {
                      FUN_0132e238(&local_a0,param_2,pbVar15 + 3,1,0,&DAT_0053341b,1,0);
                    }
                    goto LAB_0132c6e4;
                  }
                  *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
                  uVar27 = FUN_0132ddb8(*(undefined4 *)(param_2 + 0x10),
                                        *(undefined4 *)(param_2 + 0x14),pbVar15 + 2,&DAT_01ce623c);
                  FUN_0132ddfc(&local_40,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20),"<",1,">",1,0)
                  ;
                  pbVar24 = local_30;
                  if ((local_40 == (byte *)0x2) || (((uint)local_40 & 1) != 0)) goto LAB_0132d6d4;
                  FUN_0166b924(&local_58,local_38,local_34);
                  FUN_0133e354(param_2 + 0x18,&local_58,*(undefined4 *)(param_2 + 0x3c));
                  pbVar24 = pbVar24 + 2;
                }
                else {
LAB_0132d410:
                  *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
                  uVar26 = FUN_0132ddb8(*(undefined4 *)(param_2 + 0x10),
                                        *(undefined4 *)(param_2 + 0x14),pbVar15,&DAT_01ce624c);
                  bVar3 = false;
                  if (0x1ffffffff < uVar26) {
                    bVar3 = *(short *)uVar26 == 0x3c3f;
                  }
                  uVar27 = FUN_0132ddb8(*(undefined4 *)(param_2 + 0x10),
                                        *(undefined4 *)(param_2 + 0x14),pbVar15 + 1,&DAT_01ce625c);
                  pcVar9 = &DAT_0052d60c;
                  if (bVar3) {
                    pcVar9 = ">";
                  }
                  pcVar12 = &DAT_0052d60c;
                  if (bVar3) {
                    pcVar12 = "<";
                  }
                  FUN_0132ddfc(&local_40,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20),pcVar12,1,
                               pcVar9,1,0);
                  pbVar24 = local_30;
                  if ((local_40 == (byte *)0x2) || (((uint)local_40 & 1) != 0)) {
LAB_0132d6d4:
                    local_8c = pbVar15;
                    local_9c = &DAT_0000000e;
                    goto LAB_0132c6d8;
                  }
                  FUN_0166b924(&local_58,local_38,local_34);
                  FUN_0133e354(param_2 + 0x18,&local_58,*(undefined4 *)(param_2 + 0x3c));
                  pbVar24 = pbVar24 + 1;
                }
LAB_0132d5f8:
                uVar5 = 4;
                bVar3 = false;
              }
              else {
                uVar5 = 0;
                bVar3 = true;
LAB_0132d408:
                pbVar24 = (byte *)0x2;
              }
LAB_0132d5fc:
              FUN_0132bb68(&local_40,param_2,pbVar24 + (int)pbVar15,uVar10);
              if (((uint)local_40 & 1) == 0) {
                local_80 = local_38;
                pbStack_7c = local_34;
                pbStack_78 = local_30;
                pbStack_74 = pbStack_2c;
                pbStack_70 = pbStack_28;
                local_58 = local_80;
                pbStack_54 = pbStack_7c;
                pbStack_50 = pbStack_78;
                FUN_0132f1ec(&local_40,param_2);
                pbVar15 = local_3c;
                if (local_40 == &DAT_00000012) {
                  if (bVar3) {
                    local_94 = (byte *)FUN_0132f2d0();
                    local_98 = (byte *)0x80000007;
                  }
                  else if (pbVar24 == (byte *)0x2) {
                    local_94 = (byte *)FUN_0132f2d0();
                    local_98 = &DAT_8000000c;
                  }
                  else {
                    local_94 = (byte *)FUN_0132f2d0();
                    local_98 = (byte *)0x80000006;
                  }
                  *(byte **)local_94 = local_80;
                  *(byte **)(local_94 + 4) = pbStack_7c;
                  *(byte **)(local_94 + 8) = pbStack_78;
                  *(byte **)(local_94 + 0xc) = pbStack_74;
                  *(byte **)(local_94 + 0x10) = pbStack_70;
                  local_90 = (byte *)CONCAT31(local_90._1_3_,uVar5);
                  goto LAB_0132c588;
                }
                local_94 = local_38;
                local_90 = local_34;
                local_8c = local_30;
                local_9c = local_40;
                local_98 = local_3c;
                local_a0 = &DAT_00000001;
                FUN_0132bfa0(&local_80);
              }
              else {
                local_58 = local_38;
                pbStack_54 = local_34;
                pbStack_50 = local_30;
                local_98 = local_38;
                local_94 = local_34;
                local_90 = local_30;
                local_8c = pbStack_2c;
                local_a0 = &DAT_00000001;
                local_9c = local_3c;
              }
              goto LAB_0132c6e4;
            case 0x29:
            case 0x2a:
            case 0x2b:
              goto switchD_0132c410_caseD_29;
            case 0x2e:
              local_98 = &DAT_80000001;
              bVar4 = (byte)((*(byte *)(param_2 + 0x38) & 7) >> 2);
            }
            local_9c = local_3c + 1;
            local_a0 = (byte *)0x0;
            local_94 = (byte *)CONCAT31(local_94._1_3_,bVar4);
          }
          else if (bVar4 < 0x5c) {
            if (bVar4 == 0x3f) goto switchD_0132c410_caseD_29;
            if (bVar4 != 0x5b) goto switchD_0132c410_caseD_25;
            local_60 = (byte *)0x0;
            local_64 = &DAT_00000001;
            local_68 = (byte *)0x0;
            FUN_006520b4(&local_68,0,1,1,1);
            pbVar19 = pbVar15 + 1;
            pbVar25 = (byte *)0x2;
            local_64[(int)local_60] = 0x5b;
            pbVar22 = &DAT_00000001;
            local_60 = &DAT_00000001;
            if ((pbVar19 < pbVar24) && (pbVar19[iVar13] == 0x5e)) {
              if (local_68 == &DAT_00000001) {
                FUN_006520b4(&local_68,1,1,1,1);
              }
              pbVar19 = pbVar15 + 2;
              local_64[(int)local_60] = 0x5e;
              pbVar22 = (byte *)0x2;
              pbVar25 = &DAT_00000003;
              local_60 = (byte *)0x2;
            }
            if ((pbVar19 < pbVar24) && (pbVar19[iVar13] == 0x5d)) {
              if (local_68 == pbVar22) {
                FUN_006520b4(&local_68,pbVar22,1,1,1);
                pbVar22 = local_60;
              }
              pbVar19 = pbVar19 + 1;
              local_64[(int)pbVar22] = 0x5d;
              local_60 = pbVar25;
            }
            pbVar15 = *(byte **)(param_2 + 0x14);
            if (pbVar19 != pbVar15) {
              local_10c = (byte *)0x1;
              pbVar22 = pbVar19;
              do {
                pbVar25 = local_60;
                if (pbVar24 <= pbVar22) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(pbVar22,pbVar24,&DAT_01ce611c);
                }
                bVar4 = pbVar22[iVar13];
                if (bVar4 == 0x5b) {
                  if (local_68 == local_60) {
                    FUN_006520b4(&local_68,local_60,1,1,1);
                  }
                  pbVar19 = pbVar22 + 1;
                  local_64[(int)local_60] = 0x5b;
                  local_60 = pbVar25 + 1;
                  local_10c = (byte *)((int)local_10c + 1);
                }
                else if (bVar4 == 0x5c) {
                  FUN_0132f2f0(&local_40,param_2,pbVar22,1);
                  pbVar14 = pbStack_2c;
                  pbVar23 = local_30;
                  pbVar25 = local_34;
                  pbVar15 = local_38;
                  pbVar19 = local_3c;
                  if (((uint)local_40 & 1) != 0) {
                    local_58 = local_38;
                    pbStack_54 = local_34;
                    pbStack_50 = local_30;
                    local_98 = local_38;
                    local_94 = local_34;
                    local_90 = local_30;
                    local_8c = pbStack_2c;
                    local_a0 = &DAT_00000001;
                    local_9c = local_3c;
                    goto LAB_0132c570;
                  }
                  local_58 = local_38;
                  pbStack_54 = local_34;
                  pbStack_50 = local_30;
                  uVar7 = 9;
                  if ((int)local_38 < 0) {
                    uVar7 = (uint)local_38 ^ 0x80000000;
                  }
                  local_40 = local_58;
                  local_3c = pbStack_54;
                  local_38 = pbStack_50;
                  if (uVar7 == 3) {
                    if (local_68 + -(int)local_60 < pbStack_2c) {
                      local_34 = pbStack_2c;
                      local_30 = pbStack_28;
                      FUN_006520b4(&local_68,local_60,pbStack_2c,1,1);
                      pbVar15 = local_34;
                      pbVar22 = local_30;
                    }
                    else {
                      pbVar15 = pbStack_2c;
                      pbVar22 = pbStack_28;
                      if (pbStack_2c == (byte *)0x0) {
                        FUN_0134bd64(local_34,local_30);
                        local_30 = pbVar22;
                        local_34 = pbVar15;
                        goto LAB_0132ce14;
                      }
                    }
                    local_30 = pbVar22;
                    local_34 = pbVar15;
                    pbVar15 = pbVar23;
                    do {
                      pbVar22 = pbVar15 + 1;
                      puVar17 = (undefined1 *)(uint)*pbVar15;
                      if (0x7fffffff < (uint)(int)(char)*pbVar15) {
                        if (puVar17 < (undefined1 *)0xe0) {
                          puVar17 = (undefined1 *)(pbVar15[1] & 0x3f | ((uint)puVar17 & 0x1f) << 6);
                          pbVar22 = pbVar15 + 2;
                        }
                        else {
                          uVar7 = pbVar15[2] & 0x3f | (pbVar15[1] & 0x3f) << 6;
                          if (puVar17 < (undefined1 *)0xf0) {
                            puVar17 = (undefined1 *)(uVar7 | ((uint)puVar17 & 0x1f) << 0xc);
                            pbVar22 = pbVar15 + 3;
                          }
                          else {
                            puVar17 = (undefined1 *)
                                      (pbVar15[3] & 0x3f | uVar7 << 6 | ((uint)puVar17 & 7) << 0x12)
                            ;
                            if (puVar17 == &DAT_00110000) break;
                            pbVar22 = pbVar15 + 4;
                          }
                        }
                      }
                      iVar16 = FUN_016eaf14(puVar17);
                      pbVar15 = local_60;
                      if (iVar16 != 0) {
                        if (local_68 == local_60) {
                          FUN_006520b4(&local_68,local_60,1,1,1);
                        }
                        local_64[(int)local_60] = 0x5c;
                        local_60 = pbVar15 + 1;
                      }
                      pbVar15 = local_60;
                      uVar7 = 1;
                      if ((undefined1 *)0x7f < puVar17) {
                        uVar7 = 2;
                      }
                      if (((undefined1 *)0x7ff < puVar17) &&
                         (uVar7 = 4, puVar17 < (undefined1 *)0x10000)) {
                        uVar7 = 3;
                      }
                      if ((uint)((int)local_68 - (int)local_60) < uVar7) {
                        FUN_006520b4(&local_68,local_60,uVar7,1,1);
                      }
                      local_60 = local_64 + (int)local_60;
                      if (puVar17 < (undefined1 *)0x80) {
                        *local_60 = (byte)puVar17;
                      }
                      else {
                        bVar4 = (byte)puVar17 & 0x3f | 0x80;
                        bVar1 = (byte)((uint)puVar17 >> 6);
                        if (puVar17 < (undefined1 *)0x800) {
                          local_60[1] = bVar4;
                          *local_60 = bVar1 | 0xc0;
                        }
                        else {
                          bVar1 = bVar1 & 0x3f | 0x80;
                          bVar2 = (byte)((uint)puVar17 >> 0xc);
                          if ((uint)puVar17 >> 0x10 == 0) {
                            local_60[1] = bVar1;
                            local_60[2] = bVar4;
                            *local_60 = bVar2 | 0xe0;
                          }
                          else {
                            local_60[3] = bVar4;
                            local_60[2] = bVar1;
                            local_60[1] = bVar2 & 0x3f | 0x80;
                            *local_60 = (byte)((uint)puVar17 >> 0x12) | 0xf0;
                          }
                        }
                      }
                      local_60 = pbVar15 + uVar7;
                      pbVar15 = pbVar22;
                    } while (pbVar22 != pbVar23 + (int)pbVar14);
                    FUN_0134bd64(pbVar25,pbVar23);
                  }
                  else {
                    if (uVar7 != 9) {
                      local_9c = &DAT_00000009;
                      local_a0 = &DAT_00000001;
                      local_8c = pbVar22;
                      local_34 = pbStack_2c;
                      local_30 = pbStack_28;
                      FUN_0132bfa0(&local_40);
                      goto LAB_0132c570;
                    }
                    local_34 = pbStack_2c;
                    pbVar22 = pbStack_28;
                    if (local_68 + -(int)local_60 < local_30) {
                      FUN_006520b4(&local_68,local_60,local_30,1,1);
                      local_30 = pbVar22;
                      pbVar22 = local_30;
                    }
                    local_30 = pbVar22;
                    pbVar22 = local_60;
                    FUN_01bed4e2(local_64 + (int)local_60,pbVar25,pbVar23);
                    local_60 = pbVar22 + (int)pbVar23;
                    FUN_0134bd64(pbVar15,pbVar25);
                  }
                }
                else if (bVar4 == 0x5d) {
                  if (local_68 == local_60) {
                    FUN_006520b4(&local_68,local_60,1,1,1);
                  }
                  local_10c = (byte *)((int)local_10c + -1);
                  local_64[(int)local_60] = 0x5d;
                  local_60 = pbVar25 + 1;
                  if (local_10c == (byte *)0x0) {
                    local_98 = local_68;
                    local_94 = local_64;
                    local_8c = &DAT_00000001;
                    local_9c = pbVar22 + 1;
                    uVar5 = *(undefined1 *)(param_2 + 0x38);
                    local_90 = local_60;
                    goto LAB_0132cf50;
                  }
                  pbVar19 = pbVar22 + 1;
                }
                else {
                  uVar7 = 1;
                  if (((0x7fffffff < (uint)(int)(char)bVar4) && (uVar7 = 2, 0xdf < bVar4)) &&
                     (uVar7 = 4, bVar4 < 0xf0)) {
                    uVar7 = 3;
                  }
                  iVar16 = *(int *)(param_2 + 0x10);
                  pbVar19 = pbVar22 + uVar7;
                  if ((CARRY4(uVar7,(uint)pbVar22)) ||
                     ((pbVar22 != (byte *)0x0 &&
                      ((pbVar15 <= pbVar22 || ((char)pbVar22[iVar16] < -0x40))))))
                  goto LAB_0132d940;
                  if (pbVar19 != (byte *)0x0) {
                    if (pbVar19 < pbVar15) {
                      if ((char)pbVar19[iVar16] < -0x40) goto LAB_0132d940;
                    }
                    else if (pbVar19 != pbVar15) {
LAB_0132d940:
                    /* WARNING: Subroutine does not return */
                      FUN_012fb514(iVar16,pbVar15,pbVar22,pbVar19,&DAT_01ce612c);
                    }
                  }
                  if ((uint)((int)local_68 - (int)local_60) < uVar7) {
                    FUN_006520b4(&local_68,local_60,uVar7,1,1);
                  }
                  pbVar15 = local_60;
                  FUN_01bed4e2(local_64 + (int)local_60,pbVar22 + iVar16,uVar7);
                  local_60 = pbVar15 + uVar7;
                }
LAB_0132ce14:
                pbVar15 = *(byte **)(param_2 + 0x14);
                pbVar22 = pbVar19;
              } while (pbVar19 != pbVar15);
            }
            local_9c = &DAT_00000009;
            local_a0 = &DAT_00000001;
            local_8c = pbVar19;
LAB_0132c570:
            FUN_0134bd64(local_68,local_64);
          }
          else {
            if (bVar4 != 0x5c) {
              if (bVar4 == 0x5e) {
                bVar4 = *(byte *)(param_2 + 0x38) & 2;
                goto LAB_0132c5ec;
              }
              if (bVar4 != 0x7c) goto switchD_0132c410_caseD_25;
              goto switchD_0132c410_caseD_29;
            }
            FUN_0132f2f0(&local_a0,param_2,local_3c,0);
          }
        }
      }
      else {
LAB_0132c6c4:
        local_94 = local_38;
        local_90 = local_34;
        local_8c = local_30;
        local_9c = local_40;
        local_98 = local_3c;
LAB_0132c6d8:
        local_a0 = &DAT_00000001;
      }
LAB_0132c6e4:
      pbVar25 = local_88;
      pbVar22 = local_8c;
      pbVar19 = local_90;
      pbVar24 = local_94;
      pbVar15 = local_98;
      pbVar23 = local_8c;
      pbVar14 = local_9c;
      if (((uint)local_a0 & 1) != 0) {
LAB_0132d880:
        *param_1 = 1;
        param_1[1] = pbVar14;
        param_1[2] = pbVar15;
        param_1[3] = pbVar24;
        param_1[4] = pbVar19;
        param_1[5] = pbVar23;
        goto LAB_0132d890;
      }
      local_b8 = local_98;
      local_a8 = local_88;
      *(undefined4 *)((uint)&local_b8 | 4) = local_94;
      ((undefined4 *)((uint)&local_b8 | 4))[1] = local_90;
      local_ac = local_8c;
      FUN_0132dba0(&local_40,param_2,local_9c);
      param_3 = local_3c;
      if (local_40 != &DAT_00000012) {
LAB_0132d804:
        pbVar23 = local_30;
        pbVar14 = local_40;
        local_fc = local_3c;
        local_f8 = local_38;
        local_100 = local_34;
LAB_0132d878:
        FUN_0132bfa0(&local_b8);
        pbVar15 = local_fc;
        pbVar24 = local_f8;
        pbVar19 = local_100;
        goto LAB_0132d880;
      }
      if (local_3c < *(byte **)(param_2 + 0x14)) {
        pbVar14 = (byte *)0x0;
        bVar4 = local_3c[*(int *)(param_2 + 0x10)];
        if (bVar4 < 0x3f) {
          if (bVar4 != 0x2a) {
            if (bVar4 != 0x2b) goto LAB_0132d134;
            pbVar14 = &DAT_00000001;
          }
          local_10c = &DAT_ffffffff;
LAB_0132c7c8:
          pbVar23 = local_3c;
        }
        else {
          if (bVar4 == 0x3f) {
            local_10c = &DAT_00000001;
            goto LAB_0132c7c8;
          }
          if (bVar4 != 0x7b) goto LAB_0132d134;
          FUN_0132dba0(&local_40,param_2,local_3c + 1);
          pbVar23 = local_3c;
          if (local_40 != &DAT_00000012) {
LAB_0132d110:
            local_98 = local_38;
            local_94 = local_34;
            local_90 = local_30;
            local_a0 = local_40;
            local_9c = local_3c;
LAB_0132d124:
            FUN_0132fe78(&local_a0);
            goto LAB_0132d134;
          }
          pbVar6 = *(byte **)(param_2 + 0x14);
          if (local_3c == pbVar6) goto LAB_0132c7b8;
          if (pbVar6 <= local_3c) goto LAB_0132d99c;
          iVar13 = *(int *)(param_2 + 0x10);
          pbVar14 = (byte *)0x0;
          if (local_3c[iVar13] != 0x2c) {
            FUN_0132b9b0(&local_40,iVar13,pbVar6,local_3c);
            if (local_40 != (byte *)0x0) {
              pbVar14 = local_38;
              goto LAB_0132c980;
            }
            local_90 = pbVar23;
LAB_0132c7bc:
            local_a0 = (byte *)0x2;
            goto LAB_0132d124;
          }
LAB_0132c980:
          FUN_0132dba0(&local_40,param_2,local_3c);
          if (local_40 != &DAT_00000012) {
            local_98 = local_38;
            local_94 = local_34;
            local_90 = local_30;
            local_9c = local_3c;
            local_a0 = local_40;
            goto LAB_0132d124;
          }
          if (local_3c == pbVar6) {
            local_90 = pbVar6;
            goto LAB_0132c7bc;
          }
          if (pbVar6 <= local_3c) {
            local_128 = &DAT_01ce62ec;
            goto LAB_0132d99c;
          }
          if (local_3c[iVar13] == 0x2c) {
            FUN_0132dba0(&local_40,param_2,local_3c + 1);
            pbVar23 = local_3c;
            if (local_40 != &DAT_00000012) {
              local_98 = local_38;
              local_94 = local_34;
              local_90 = local_30;
              local_9c = local_3c;
              local_a0 = local_40;
              goto LAB_0132d124;
            }
            FUN_0132b9b0(&local_40,iVar13,pbVar6);
            if (local_40 == (byte *)0x0) {
              local_10c = &DAT_ffffffff;
            }
            else {
              pbVar23 = local_3c;
              local_10c = local_38;
            }
          }
          else {
            if (local_3c[iVar13] != 0x7d) {
              local_90 = local_3c;
              goto LAB_0132c7bc;
            }
            pbVar23 = local_3c;
            local_10c = pbVar14;
          }
          FUN_0132dba0(&local_40,param_2,pbVar23);
          pbVar23 = local_3c;
          if (local_40 != &DAT_00000012) goto LAB_0132d110;
          if (local_3c == pbVar6) {
LAB_0132c7b8:
            local_90 = local_3c;
            goto LAB_0132c7bc;
          }
          if (pbVar6 <= local_3c) {
            local_128 = &DAT_01ce62fc;
LAB_0132d99c:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(local_3c,pbVar6,local_128);
          }
          if (local_3c[iVar13] != 0x7d) goto LAB_0132c7b8;
          local_9c = local_3c + 1;
          local_94 = local_10c;
          local_a0 = &DAT_00000012;
          local_98 = pbVar14;
          FUN_0132fe78(&local_a0);
        }
        uVar7 = 9;
        if ((int)pbVar15 < 0) {
          uVar7 = (uint)pbVar15 ^ 0x80000000;
        }
        if (uVar7 < 0x10) {
          if (uVar7 != 2) {
            if ((1 << (uVar7 & 0xff) & 0xe081U) != 0) goto LAB_0132d868;
            goto LAB_0132c810;
          }
          if ((*(byte *)(param_2 + 0x38) & 0x40) == 0) goto LAB_0132c810;
LAB_0132d868:
          pbVar14 = &DAT_0000000d;
          goto LAB_0132d878;
        }
LAB_0132c810:
        FUN_0132dba0(&local_40,param_2,pbVar23 + 1);
        if (local_40 != &DAT_00000012) goto LAB_0132d804;
        uVar7 = 1;
        pbVar23 = *(byte **)(param_2 + 0x14);
        param_3 = local_3c;
        if ((local_3c < pbVar23) &&
           (uVar7 = (uint)(local_3c[*(int *)(param_2 + 0x10)] != 0x3f),
           local_3c[*(int *)(param_2 + 0x10)] == 0x3f)) {
          param_3 = local_3c + 1;
        }
        uVar20 = *(uint *)(param_2 + 0x38);
        pbVar24 = (byte *)thunk_FUN_01be5118(0x14);
        if (pbVar24 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x14);
        }
        *(byte **)pbVar24 = local_b8;
        *(undefined4 *)(pbVar24 + 4) = uStack_b4;
        *(undefined4 *)(pbVar24 + 8) = uStack_b0;
        *(byte **)(pbVar24 + 0xc) = local_ac;
        *(byte **)(pbVar24 + 0x10) = local_a8;
        pbVar15 = &DAT_80000008;
        pbVar25 = (byte *)((uint)local_108 & 0xffffff00 | uVar7 ^ (uVar20 & 8) >> 3);
        pbVar19 = pbVar14;
        pbVar22 = local_10c;
        local_108 = pbVar25;
        if ((param_3 < pbVar23) && (param_3[*(int *)(param_2 + 0x10)] == 0x2b)) {
          local_40 = &DAT_80000008;
          local_34 = local_10c;
          local_3c = pbVar24;
          local_38 = pbVar14;
          local_30 = pbVar25;
          pbVar24 = (byte *)thunk_FUN_01be5118(0x14);
          if (pbVar24 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x14);
          }
          param_3 = param_3 + 1;
          *(byte **)pbVar24 = local_40;
          *(byte **)(pbVar24 + 4) = local_3c;
          *(byte **)(pbVar24 + 8) = local_38;
          *(byte **)(pbVar24 + 0xc) = local_34;
          *(byte **)(pbVar24 + 0x10) = local_30;
          pbVar15 = &DAT_8000000c;
        }
      }
LAB_0132d134:
      iVar13 = local_d8;
      *(undefined4 *)((uint)&local_d0 | 4) = pbVar24;
      ((undefined4 *)((uint)&local_d0 | 4))[1] = pbVar19;
      local_d0 = pbVar15;
      local_c4 = pbVar22;
      local_c0 = pbVar25;
      if (param_3 == pbVar11) {
        FUN_0132bfa0(&local_d0);
        param_3 = pbVar11;
        break;
      }
      if (pbVar15 == &DAT_80000000) {
        FUN_0132bfa0(&local_d0);
      }
      else {
        if (local_d8 == local_e0) {
          FUN_0161d664(&local_e0);
        }
        piVar8 = local_dc + iVar13 * 5;
        *piVar8 = (int)local_d0;
        piVar8[1] = iStack_cc;
        piVar8[2] = iStack_c8;
        piVar8[3] = (int)local_c4;
        piVar8[4] = (int)local_c0;
        local_d8 = iVar13 + 1;
      }
      pbVar11 = param_3;
      local_100 = pbVar19;
      local_fc = pbVar15;
      local_f8 = pbVar24;
    } while (param_3 < *(byte **)(param_2 + 0x14));
    if (local_d8 == 0) {
      iVar13 = -0x80000000;
    }
    else {
      if (local_d8 != 1) {
        param_1[3] = local_e0;
        param_1[4] = local_dc;
        param_1[5] = local_d8;
        *param_1 = 0;
        param_1[1] = param_3;
        param_1[2] = &DAT_80000004;
        return;
      }
      local_d8 = 0;
      iVar13 = *local_dc;
      if (iVar13 == -0x7fffffed) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01ce626c);
      }
      iVar16 = local_dc[2];
      iVar18 = local_dc[3];
      iVar21 = local_dc[4];
      param_1[3] = local_dc[1];
      param_1[4] = iVar16;
      param_1[5] = iVar18;
      param_1[6] = iVar21;
    }
  }
  param_1[2] = iVar13;
  *param_1 = 0;
  param_1[1] = param_3;
LAB_0132d890:
  FUN_0132c2ac(&local_e0);
  return;
}

