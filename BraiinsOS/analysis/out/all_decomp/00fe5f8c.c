// FUN_00fe5f8c @ 00fe5f8c size=6504 calls_out=27 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fe5f8c(undefined4 *param_1,int param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 uVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  undefined4 uVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 uVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  bool bVar26;
  byte *local_128;
  undefined *local_120;
  undefined *local_11c;
  int local_10c;
  byte *local_104;
  byte *local_f8;
  byte *local_f4;
  byte *local_f0;
  byte *local_e8;
  int local_e0;
  undefined4 *local_dc;
  int local_d8;
  byte *local_d0;
  byte *local_cc;
  byte *local_c8;
  byte *local_c4;
  uint local_c0;
  byte *local_b8;
  byte *local_b4;
  byte *local_b0;
  byte *local_ac;
  uint local_a8;
  byte *local_a0;
  byte *local_9c;
  byte *local_98;
  undefined4 local_94;
  byte *local_90;
  byte *local_8c;
  uint local_88;
  byte *local_80;
  byte *pbStack_7c;
  byte *pbStack_78;
  byte *pbStack_74;
  byte *pbStack_70;
  byte *local_68;
  byte *local_64;
  byte *local_60;
  byte *local_58;
  byte *local_54;
  byte *local_50;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  byte *pbStack_2c;
  byte *pbStack_28;
  
  local_d8 = 0;
  local_dc = (undefined4 *)&DAT_00000004;
  local_e0 = 0;
  if (param_3 < *(byte **)(param_2 + 0x14)) {
    uVar10 = param_4 + 1;
    local_11c = &DAT_018817e8;
    local_120 = &DAT_01881938;
    do {
      FUN_00fe7e50(&local_40);
      pbVar23 = local_3c;
      if (local_40 != &DAT_00000012) {
LAB_00fe64a4:
        local_94 = local_38;
        local_90 = local_34;
        local_8c = local_30;
        local_9c = local_40;
        local_98 = local_3c;
LAB_00fe64c4:
        local_a0 = &DAT_00000001;
        goto LAB_00fe64cc;
      }
      pbVar25 = *(byte **)(param_2 + 0x14);
      if (local_3c == pbVar25) {
switchD_00fe60b0_caseD_29:
        local_98 = &DAT_80000000;
LAB_00fe6220:
        local_a0 = (byte *)0x0;
        local_9c = pbVar23;
      }
      else {
        if (pbVar25 <= local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(local_3c,pbVar25,&DAT_01881768);
        }
        local_e8 = *(byte **)(param_2 + 0x10);
        pbVar13 = local_3c + (int)local_e8;
        bVar1 = *pbVar13;
        switch(bVar1) {
        case 0x24:
          local_98 = (byte *)0x80000002;
          local_9c = local_3c + 1;
          local_94 = (byte *)((uint)local_94._2_2_ << 0x10);
          uVar5 = 3;
          if ((*(uint *)(param_2 + 0x38) & 2) == 0) {
            uVar5 = 1;
          }
          local_a0 = (byte *)0x0;
          local_94 = (byte *)CONCAT31(local_94._1_3_,uVar5);
          break;
        default:
          pbVar23 = &DAT_00000001;
          if (((0x7fffffff < (uint)(int)(char)bVar1) && (pbVar23 = &SUB_00000002, 0xdf < bVar1)) &&
             (pbVar23 = &DAT_00000004, bVar1 < 0xf0)) {
            pbVar23 = (byte *)0x3;
          }
          pbVar18 = pbVar23 + (int)local_3c;
          if ((CARRY4((uint)pbVar23,(uint)local_3c)) ||
             ((local_3c != (byte *)0x0 && ((char)bVar1 < -0x40)))) goto LAB_00fe7aa4;
          if (pbVar18 != (byte *)0x0) {
            if (pbVar18 < pbVar25) {
              if ((char)pbVar18[(int)local_e8] < -0x40) goto LAB_00fe7aa4;
            }
            else if (pbVar18 != pbVar25) {
LAB_00fe7aa4:
              local_11c = &DAT_01881778;
              pbVar23 = local_3c;
              goto LAB_00fe7ab0;
            }
          }
          pbVar25 = (byte *)thunk_FUN_016d4a50(pbVar23);
          if (pbVar25 == (byte *)0x0) {
            pbVar25 = &DAT_00000001;
LAB_00fe7a44:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(pbVar25,pbVar23);
          }
          FUN_016dd1aa(pbVar25,pbVar13,pbVar23);
          local_98 = (byte *)0x80000003;
          local_9c = pbVar18;
          local_94 = pbVar23;
          local_90 = pbVar25;
          local_8c = pbVar23;
LAB_00fe6ea8:
          local_a0 = (byte *)0x0;
          local_88 = CONCAT31(local_88._1_3_,*(undefined1 *)(param_2 + 0x38)) & 0xffffff01;
          break;
        case 0x28:
          if (0x3f < uVar10) {
            local_9c = (byte *)0x3;
            local_8c = local_3c;
            goto LAB_00fe64c4;
          }
          FUN_00fe7e50(&local_40,param_2,local_3c + 1);
          pbVar23 = local_3c;
          if (local_40 != &DAT_00000012) goto LAB_00fe64a4;
          pbVar18 = *(byte **)(param_2 + 0x14);
          local_e8 = *(byte **)(param_2 + 0x10);
          pbVar25 = pbVar18;
          if (local_3c != (byte *)0x0) {
            if (local_3c < pbVar18) {
              if ((char)local_3c[(int)local_e8] < -0x40) goto LAB_00fe7ab4;
            }
            else if (pbVar18 != local_3c) goto LAB_00fe7ab4;
          }
          uVar7 = (int)pbVar18 - (int)local_3c;
          if ((uVar7 < 2) || (*(short *)(local_3c + (int)local_e8) != 0x3d3f)) {
            if (local_3c != (byte *)0x0) {
              if (local_3c < pbVar18) {
                if (-0x41 < (char)local_3c[(int)local_e8]) goto LAB_00fe6f38;
              }
              else if (pbVar18 == local_3c) {
LAB_00fe70f8:
                if (local_3c < pbVar18) {
                  if (-0x41 < (char)local_3c[(int)local_e8]) goto LAB_00fe7114;
                }
                else if (pbVar18 == local_3c) {
                  bVar26 = false;
                  if (uVar7 < 3) {
                    bVar26 = true;
                  }
                  goto LAB_00fe7168;
                }
                local_11c = &DAT_01881808;
                goto LAB_00fe7ab0;
              }
              local_11c = &DAT_018817f8;
              goto LAB_00fe7ab0;
            }
LAB_00fe6f38:
            if ((1 < uVar7) && (*(short *)(local_3c + (int)local_e8) == 0x213f)) {
              bVar26 = true;
              pbVar13 = &SUB_00000002;
              uVar5 = 1;
              goto LAB_00fe7788;
            }
            if (local_3c != (byte *)0x0) goto LAB_00fe70f8;
LAB_00fe7114:
            bVar26 = uVar7 < 3;
            if (!bVar26) {
              pbVar13 = (byte *)0x3;
              iVar21 = thunk_FUN_016dd50a(&DAT_003ceead,local_3c + (int)local_e8,3);
              if (iVar21 == 0) {
                uVar5 = 2;
                bVar26 = true;
                goto LAB_00fe7788;
              }
            }
            if (pbVar23 != (byte *)0x0) {
LAB_00fe7168:
              if (pbVar23 < pbVar18) {
                if ((char)pbVar23[(int)local_e8] < -0x40) goto LAB_00fe7b1c;
              }
              else if (pbVar18 != pbVar23) {
LAB_00fe7b1c:
                local_11c = &DAT_01881818;
                goto LAB_00fe7ab0;
              }
            }
            if (!bVar26) {
              pbVar13 = (byte *)0x3;
              iVar21 = thunk_FUN_016dd50a(&DAT_003ceeb0,pbVar23 + (int)local_e8,3);
              if (iVar21 == 0) {
                bVar26 = true;
                uVar5 = 3;
                goto LAB_00fe7788;
              }
            }
            if (pbVar23 != (byte *)0x0) {
              if (pbVar23 < pbVar18) {
                if ((char)pbVar23[(int)local_e8] < -0x40) goto LAB_00fe7b2c;
                goto LAB_00fe71e0;
              }
              if (pbVar18 != pbVar23) {
LAB_00fe7b2c:
                local_11c = &DAT_01881828;
                goto LAB_00fe7ab0;
              }
LAB_00fe7220:
              if (pbVar23 < pbVar18) {
                if (-0x41 < (char)pbVar23[(int)local_e8]) goto LAB_00fe723c;
              }
              else if (pbVar18 == pbVar23) {
LAB_00fe726c:
                if (pbVar23 < pbVar18) {
                  if ((char)pbVar23[(int)local_e8] < -0x40) goto LAB_00fe7b4c;
                }
                else if (pbVar18 != pbVar23) {
LAB_00fe7b4c:
                  local_11c = &DAT_01881848;
                  goto LAB_00fe7ab0;
                }
LAB_00fe7290:
                if ((bVar26) ||
                   (iVar21 = thunk_FUN_016dd50a(&DAT_003ced5f,pbVar23 + (int)local_e8,3),
                   iVar21 != 0)) {
                  if (pbVar23 != (byte *)0x0) {
                    if (pbVar23 < pbVar18) {
                      if ((char)pbVar23[(int)local_e8] < -0x40) goto LAB_00fe7b5c;
                    }
                    else if (pbVar18 != pbVar23) {
LAB_00fe7b5c:
                      local_11c = &DAT_01881858;
                      goto LAB_00fe7ab0;
                    }
                  }
                  if ((!bVar26) &&
                     (iVar21 = thunk_FUN_016dd50a(&DAT_00377a54,pbVar23 + (int)local_e8,3),
                     iVar21 == 0)) {
                    FUN_00fe8190(&local_a0,param_2,pbVar23 + 3,1,0,&DAT_00418e07,1,0);
                    break;
                  }
                  if (pbVar23 != (byte *)0x0) {
                    if (pbVar23 < pbVar18) {
                      if (-0x41 < (char)pbVar23[(int)local_e8]) goto LAB_00fe73a0;
                    }
                    else if (pbVar18 == pbVar23) {
LAB_00fe73dc:
                      if (pbVar23 < pbVar18) {
                        if (-0x41 < (char)pbVar23[(int)local_e8]) goto LAB_00fe73f8;
                      }
                      else if (pbVar18 == pbVar23) goto LAB_00fe7428;
                      local_11c = &DAT_01881878;
                      goto LAB_00fe7ab0;
                    }
                    local_11c = &DAT_01881868;
                    goto LAB_00fe7ab0;
                  }
LAB_00fe73a0:
                  if ((1 < uVar7) && (*(short *)(pbVar23 + (int)local_e8) == 0x3e3f)) {
                    uVar5 = 4;
                    bVar26 = false;
                    pbVar13 = &SUB_00000002;
                    goto LAB_00fe7788;
                  }
                  if (pbVar23 != (byte *)0x0) goto LAB_00fe73dc;
LAB_00fe73f8:
                  if ((1 < uVar7) && (*(short *)(pbVar23 + (int)local_e8) == 0x283f)) {
                    FUN_00fe8310(&local_a0,param_2,pbVar23 + 2,uVar10);
                    break;
                  }
                  if (pbVar23 != (byte *)0x0) {
LAB_00fe7428:
                    if (pbVar23 < pbVar18) {
                      if ((char)pbVar23[(int)local_e8] < -0x40) goto LAB_00fe7b8c;
                    }
                    else if (pbVar18 != pbVar23) {
LAB_00fe7b8c:
                      local_11c = &DAT_01881888;
                      goto LAB_00fe7ab0;
                    }
                  }
                  if ((!bVar26) &&
                     (iVar21 = thunk_FUN_016dd50a(&DAT_00377a57,pbVar23 + (int)local_e8,3),
                     iVar21 == 0)) {
                    FUN_00fe8c98(&local_a0,param_2,pbVar23 + 3,1,0,&DAT_00418e07,0);
                    break;
                  }
                  if (pbVar23 != (byte *)0x0) {
                    if (pbVar23 < pbVar18) {
                      if (-0x41 < (char)pbVar23[(int)local_e8]) goto LAB_00fe750c;
                    }
                    else if (pbVar18 == pbVar23) goto LAB_00fe750c;
                    local_11c = &DAT_01881898;
                    goto LAB_00fe7ab0;
                  }
LAB_00fe750c:
                  if ((pbVar18 != pbVar23) && (pbVar23[(int)local_e8] == 0x3f)) {
                    FUN_00fe8e24(&local_a0,param_2,pbVar23,uVar10);
                    break;
                  }
                  uVar5 = 4;
                  pbVar13 = (byte *)0x0;
                  bVar26 = false;
                  *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
                  goto LAB_00fe7788;
                }
                *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
                pbVar13 = pbVar23 + 2;
                if (pbVar13 != (byte *)0x0) {
                  if (pbVar13 < pbVar18) {
                    if ((char)pbVar13[(int)local_e8] < -0x40) goto LAB_00fe7bdc;
                  }
                  else if (pbVar18 != pbVar13) {
LAB_00fe7bdc:
                    local_11c = &DAT_018818a8;
                    pbVar23 = pbVar13;
                    goto LAB_00fe7ab0;
                  }
                }
                FUN_00fe92e8(&local_40,pbVar13 + (int)local_e8,(int)pbVar18 - (int)pbVar13,"<",1,">"
                             ,1,0);
                pbVar13 = local_30;
                pbVar18 = local_34;
                pbVar25 = local_38;
                if ((local_40 == &SUB_00000002) || (((uint)local_40 & 1) != 0)) goto LAB_00fe784c;
                FUN_010006c4(&local_58,local_34,1,1);
                pbVar19 = local_50;
                pbVar24 = local_54;
                if (local_58 == &DAT_00000001) goto LAB_00fe7a40;
                FUN_016dd1aa(local_50,pbVar25,pbVar18);
                local_50 = pbVar18;
                local_54 = pbVar19;
                local_58 = pbVar24;
                FUN_01001758(param_2 + 0x18,&local_58,*(undefined4 *)(param_2 + 0x3c));
                pbVar13 = pbVar13 + 2;
                goto LAB_00fe777c;
              }
              local_11c = &DAT_01881838;
              goto LAB_00fe7ab0;
            }
LAB_00fe71e0:
            if ((uVar7 < 2) || (*(short *)(pbVar23 + (int)local_e8) != 0x3c3f)) {
              if (pbVar23 != (byte *)0x0) goto LAB_00fe7220;
LAB_00fe723c:
              if ((uVar7 < 2) || (*(short *)(pbVar23 + (int)local_e8) != 0x273f)) {
                if (pbVar23 != (byte *)0x0) goto LAB_00fe726c;
                goto LAB_00fe7290;
              }
            }
            *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
            if (pbVar23 != (byte *)0x0) {
              if (pbVar23 < pbVar18) {
                if ((char)pbVar23[(int)local_e8] < -0x40) goto LAB_00fe7bcc;
              }
              else if (pbVar18 != pbVar23) {
LAB_00fe7bcc:
                local_11c = &DAT_018818b8;
                goto LAB_00fe7ab0;
              }
            }
            iVar21 = thunk_FUN_016dd50a(&DAT_003ced62,pbVar23 + (int)local_e8,2);
            pcVar9 = &DAT_004144fe;
            if (iVar21 == 0) {
              pcVar9 = ">";
            }
            pcVar11 = &DAT_004144fe;
            if (iVar21 == 0) {
              pcVar11 = "<";
            }
            pbVar13 = pbVar23 + 1;
            if (pbVar13 < pbVar18) {
              if (-0x41 < (char)pbVar13[(int)local_e8]) goto LAB_00fe75f0;
            }
            else if (pbVar18 == pbVar13) {
LAB_00fe75f0:
              FUN_00fe92e8(&local_40,pbVar13 + (int)local_e8,(int)pbVar18 - (int)pbVar13,pcVar11,1,
                           pcVar9,1,0);
              pbVar13 = local_30;
              pbVar18 = local_34;
              pbVar25 = local_38;
              if ((local_40 == &SUB_00000002) || (((uint)local_40 & 1) != 0)) {
LAB_00fe784c:
                local_8c = pbVar23;
                local_9c = &DAT_0000000e;
                goto LAB_00fe64c4;
              }
              FUN_010006c4(&local_58,local_34,1,1);
              pbVar19 = local_50;
              pbVar24 = local_54;
              if (local_58 == &DAT_00000001) {
LAB_00fe7a40:
                pbVar23 = local_50;
                pbVar25 = local_54;
                goto LAB_00fe7a44;
              }
              FUN_016dd1aa(local_50,pbVar25,pbVar18);
              local_50 = pbVar18;
              local_54 = pbVar19;
              local_58 = pbVar24;
              FUN_01001758(param_2 + 0x18,&local_58,*(undefined4 *)(param_2 + 0x3c));
              pbVar13 = pbVar13 + 1;
LAB_00fe777c:
              uVar5 = 4;
              bVar26 = false;
              goto LAB_00fe7788;
            }
            local_11c = &DAT_018818c8;
            pbVar23 = pbVar13;
LAB_00fe7ab0:
LAB_00fe7ab4:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(local_e8,pbVar25,pbVar23,pbVar18,local_11c);
          }
          uVar5 = 0;
          bVar26 = true;
          pbVar13 = &SUB_00000002;
LAB_00fe7788:
          FUN_00fe559c(&local_40,param_2,pbVar13 + (int)pbVar23,uVar10);
          if (((uint)local_40 & 1) != 0) {
            local_9c = local_3c;
            local_58 = local_38;
            local_54 = local_34;
            local_50 = local_30;
            local_98 = local_38;
            local_94 = local_34;
            local_90 = local_30;
            local_8c = pbStack_2c;
            goto LAB_00fe64c4;
          }
          local_80 = local_38;
          pbStack_7c = local_34;
          pbStack_78 = local_30;
          pbStack_74 = pbStack_2c;
          pbStack_70 = pbStack_28;
          local_58 = local_80;
          local_54 = pbStack_7c;
          local_50 = pbStack_78;
          FUN_00fe9760(&local_40,param_2);
          pbVar23 = local_3c;
          if (local_40 != &DAT_00000012) {
            local_9c = local_40;
            local_98 = local_3c;
            local_94 = local_38;
            local_90 = local_34;
            local_8c = local_30;
            local_a0 = &DAT_00000001;
            FUN_00fe5d20(&local_80);
            break;
          }
          if (bVar26) {
            local_94 = (byte *)FUN_00fe9850();
            local_98 = (byte *)0x80000007;
          }
          else if (pbVar13 == &SUB_00000002) {
            local_94 = (byte *)FUN_00fe9850();
            local_98 = &DAT_8000000c;
          }
          else {
            local_94 = (byte *)FUN_00fe9850();
            local_98 = (byte *)0x80000006;
          }
          *(byte **)local_94 = local_80;
          *(byte **)(local_94 + 4) = pbStack_7c;
          *(byte **)(local_94 + 8) = pbStack_78;
          *(byte **)(local_94 + 0xc) = pbStack_74;
          *(byte **)(local_94 + 0x10) = pbStack_70;
          local_90 = (byte *)CONCAT31(local_90._1_3_,uVar5);
          goto LAB_00fe6220;
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x3f:
        case 0x7c:
          goto switchD_00fe60b0_caseD_29;
        case 0x2e:
          local_98 = (byte *)0x80000001;
          local_9c = local_3c + 1;
          local_a0 = (byte *)0x0;
          local_94 = (byte *)CONCAT31(local_94._1_3_,(char)((*(byte *)(param_2 + 0x38) & 7) >> 2));
          break;
        case 0x5b:
          local_60 = (byte *)0x0;
          local_64 = &DAT_00000001;
          local_68 = (byte *)0x0;
          FUN_010007c0(&local_68,0,1,1,1);
          pbVar18 = pbVar23 + 1;
          pbVar24 = &SUB_00000002;
          local_64[(int)local_60] = 0x5b;
          pbVar13 = &DAT_00000001;
          local_60 = &DAT_00000001;
          if ((pbVar18 < pbVar25) && (pbVar18[(int)local_e8] == 0x5e)) {
            if (local_68 == &DAT_00000001) {
              FUN_010007c0(&local_68,1,1,1,1);
            }
            pbVar18 = pbVar23 + 2;
            local_64[(int)local_60] = 0x5e;
            pbVar13 = &SUB_00000002;
            pbVar24 = (byte *)0x3;
            local_60 = &SUB_00000002;
          }
          if ((pbVar18 < pbVar25) && (pbVar18[(int)local_e8] == 0x5d)) {
            if (local_68 == pbVar13) {
              FUN_010007c0(&local_68,pbVar13,1,1,1);
              pbVar13 = local_60;
            }
            pbVar18 = pbVar18 + 1;
            local_64[(int)pbVar13] = 0x5d;
            pbVar13 = pbVar24;
            local_60 = pbVar24;
          }
          pbVar23 = *(byte **)(param_2 + 0x14);
          if (pbVar18 != pbVar23) {
            local_10c = 1;
            pbVar24 = pbVar18;
            do {
              if (pbVar25 <= pbVar24) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(pbVar24,pbVar25,&DAT_01881788);
              }
              bVar1 = pbVar24[(int)local_e8];
              if (bVar1 == 0x5b) {
                pbVar23 = pbVar13;
                if (local_68 == pbVar13) {
                  FUN_010007c0(&local_68,pbVar13,1,1,1);
                  pbVar23 = local_60;
                }
                pbVar13 = pbVar13 + 1;
                pbVar18 = pbVar24 + 1;
                local_64[(int)pbVar23] = 0x5b;
                local_10c = local_10c + 1;
                local_60 = pbVar13;
              }
              else if (bVar1 == 0x5c) {
                FUN_00fe9870(&local_40,param_2,pbVar24,1);
                pbVar4 = pbStack_2c;
                pbVar16 = local_30;
                pbVar19 = local_34;
                pbVar23 = local_38;
                pbVar18 = local_3c;
                if (((uint)local_40 & 1) != 0) {
                  local_9c = local_3c;
                  local_58 = local_38;
                  local_54 = local_34;
                  local_50 = local_30;
                  local_98 = local_38;
                  local_94 = local_34;
                  local_90 = local_30;
                  local_8c = pbStack_2c;
                  goto LAB_00fe642c;
                }
                local_58 = local_38;
                local_54 = local_34;
                local_50 = local_30;
                local_34 = pbStack_2c;
                uVar7 = 9;
                if ((int)local_38 < 0) {
                  uVar7 = (uint)local_38 ^ 0x80000000;
                }
                local_40 = local_58;
                local_3c = local_54;
                local_38 = local_50;
                if (uVar7 == 3) {
                  if (local_68 + -(int)pbVar13 < pbStack_2c) {
                    local_30 = pbStack_28;
                    FUN_01401968(&local_68,pbVar13,pbStack_2c,1,1);
LAB_00fe697c:
                    pbVar23 = pbVar16;
LAB_00fe699c:
                    do {
                      pbVar13 = local_60;
                      uVar14 = (uint)*pbVar23;
                      pbVar24 = pbVar23 + 1;
                      if ((char)*pbVar23 < '\0') {
                        if (uVar14 < 0xe0) {
                          uVar14 = pbVar23[1] & 0x3f | (uVar14 & 0x1f) << 6;
                          pbVar23 = pbVar23 + 2;
                        }
                        else {
                          uVar15 = pbVar23[2] & 0x3f | (pbVar23[1] & 0x3f) << 6;
                          if (uVar14 < 0xf0) {
                            uVar14 = uVar15 | (uVar14 & 0x1f) << 0xc;
                            pbVar24 = pbVar23 + 3;
                            goto joined_r0x00fe6c84;
                          }
                          pbVar24 = pbVar23 + 3;
                          pbVar23 = pbVar23 + 4;
                          uVar14 = *pbVar24 & 0x3f | uVar15 << 6 | (uVar14 & 7) << 0x12;
                        }
                        uVar15 = uVar14 - 0x23;
                        if (uVar15 < 0x5c) goto LAB_00fe69bc;
switchD_00fe69c4_caseD_fe6c88:
                        bVar26 = true;
                        if (uVar14 < 0x80) {
                          uVar15 = 1;
                        }
                        else {
                          uVar15 = 2;
                          bVar26 = false;
                          if ((0x7ff < uVar14) && (uVar15 = 4, uVar14 < 0x10000)) {
                            uVar15 = 3;
                          }
                        }
                      }
                      else {
joined_r0x00fe6c84:
                        pbVar23 = pbVar24;
                        uVar15 = uVar14 - 0x23;
                        if (0x5b < uVar15) goto switchD_00fe69c4_caseD_fe6c88;
LAB_00fe69bc:
                        switch((int)&switchD_00fe69c4::switchdataD_00fe69c8 +
                               (&switchD_00fe69c4::switchdataD_00fe69c8)[uVar15] & 0xfffffffe) {
                        case 0xfe6b38:
                          if (local_68 == local_60) {
                            FUN_01401968(&local_68,local_60,1,1,1);
                          }
                          bVar26 = true;
                          uVar15 = 1;
                          local_64[(int)local_60] = 0x5c;
                          local_60 = pbVar13 + 1;
                          break;
                        default:
                          goto switchD_00fe69c4_caseD_fe6c88;
                        }
                      }
                      pbVar13 = local_60;
                      if ((uint)((int)local_68 - (int)local_60) < uVar15) {
                        FUN_01401968(&local_68,local_60,uVar15,1,1);
                        local_60 = local_64 + (int)local_60;
                        if (bVar26) goto LAB_00fe6988;
LAB_00fe6b8c:
                        bVar1 = (byte)uVar14 & 0x3f | 0x80;
                        bVar2 = (byte)(uVar14 >> 6);
                        if (uVar14 < 0x800) {
                          local_60[1] = bVar1;
                          *local_60 = bVar2 | 0xc0;
                        }
                        else {
                          bVar2 = bVar2 & 0x3f | 0x80;
                          bVar3 = (byte)(uVar14 >> 0xc);
                          if (uVar14 >> 0x10 == 0) {
                            local_60[1] = bVar2;
                            local_60[2] = bVar1;
                            *local_60 = bVar3 | 0xe0;
                          }
                          else {
                            local_60[3] = bVar1;
                            local_60[2] = bVar2;
                            local_60[1] = bVar3 & 0x3f | 0x80;
                            *local_60 = (byte)(uVar14 >> 0x12) | 0xf0;
                          }
                        }
                        pbVar13 = pbVar13 + uVar15;
                        local_60 = pbVar13;
                        if (pbVar23 == pbVar16 + (int)pbVar4) break;
                        goto LAB_00fe699c;
                      }
                      local_60 = local_64 + (int)local_60;
                      if (!bVar26) goto LAB_00fe6b8c;
LAB_00fe6988:
                      *local_60 = (byte)uVar14;
                      pbVar13 = pbVar13 + uVar15;
                      local_60 = pbVar13;
                    } while (pbVar23 != pbVar16 + (int)pbVar4);
                  }
                  else {
                    local_30 = pbStack_28;
                    if (pbStack_2c != (byte *)0x0) goto LAB_00fe697c;
                  }
                  if (pbVar19 != (byte *)0x0) goto LAB_00fe6d34;
                }
                else {
                  if (uVar7 != 9) {
                    local_9c = &DAT_00000009;
                    local_a0 = &DAT_00000001;
                    local_8c = pbVar24;
                    local_30 = pbStack_28;
                    FUN_00fe5d20(&local_40);
                    goto LAB_00fe6434;
                  }
                  if (local_68 + -(int)pbVar13 < local_30) {
                    pbVar24 = pbStack_28;
                    FUN_010007c0(&local_68,pbVar13,local_30,1,1);
                    local_30 = pbVar24;
                    pbVar13 = local_60;
                  }
                  else {
                    local_30 = pbStack_28;
                  }
                  FUN_016dd1aa(local_64 + (int)pbVar13,pbVar19,pbVar16);
                  pbVar13 = pbVar13 + (int)pbVar16;
                  pbVar16 = pbVar19;
                  local_60 = pbVar13;
                  if (pbVar23 == (byte *)0x0) goto LAB_00fe67a4;
LAB_00fe6d34:
                  thunk_FUN_016d3fb4(pbVar16);
                }
                if (uVar7 != 3 && uVar7 != 9) {
                  FUN_00fe5d20(&local_40);
                }
              }
              else if (bVar1 == 0x5d) {
                pbVar23 = pbVar13;
                if (local_68 == pbVar13) {
                  FUN_010007c0(&local_68,pbVar13,1,1,1);
                  pbVar23 = local_60;
                }
                pbVar13 = pbVar13 + 1;
                local_10c = local_10c + -1;
                local_64[(int)pbVar23] = 0x5d;
                local_60 = pbVar13;
                if (local_10c == 0) {
                  local_98 = local_68;
                  local_94 = local_64;
                  local_8c = &DAT_00000001;
                  local_9c = pbVar24 + 1;
                  local_90 = pbVar13;
                  goto LAB_00fe6ea8;
                }
                pbVar18 = pbVar24 + 1;
              }
              else {
                uVar7 = 1;
                if (((0x7fffffff < (uint)(int)(char)bVar1) && (uVar7 = 2, 0xdf < bVar1)) &&
                   (uVar7 = 4, bVar1 < 0xf0)) {
                  uVar7 = 3;
                }
                pbVar18 = pbVar24 + uVar7;
                iVar21 = *(int *)(param_2 + 0x10);
                if ((CARRY4(uVar7,(uint)pbVar24)) ||
                   ((pbVar24 != (byte *)0x0 &&
                    ((pbVar23 <= pbVar24 || ((char)pbVar24[iVar21] < -0x40)))))) goto LAB_00fe7a84;
                if (pbVar18 != (byte *)0x0) {
                  if (pbVar18 < pbVar23) {
                    if ((char)pbVar18[iVar21] < -0x40) goto LAB_00fe7a84;
                  }
                  else if (pbVar18 != pbVar23) {
LAB_00fe7a84:
                    /* WARNING: Subroutine does not return */
                    FUN_00faa8ac(iVar21,pbVar23,pbVar24,pbVar18,&DAT_01881798);
                  }
                }
                if ((uint)((int)local_68 - (int)pbVar13) < uVar7) {
                  FUN_010007c0(&local_68,pbVar13,uVar7,1,1);
                  pbVar13 = local_60;
                }
                FUN_016dd1aa(local_64 + (int)pbVar13,pbVar24 + iVar21,uVar7);
                pbVar13 = pbVar13 + uVar7;
                local_60 = pbVar13;
              }
LAB_00fe67a4:
              pbVar23 = *(byte **)(param_2 + 0x14);
              pbVar24 = pbVar18;
            } while (pbVar18 != pbVar23);
          }
          local_9c = &DAT_00000009;
          local_8c = pbVar18;
LAB_00fe642c:
          local_a0 = &DAT_00000001;
LAB_00fe6434:
          if (local_68 != (byte *)0x0) {
            thunk_FUN_016d3fb4(local_64);
          }
          break;
        case 0x5c:
          FUN_00fe9870(&local_a0,param_2,local_3c,0);
          break;
        case 0x5e:
          local_98 = (byte *)0x80000002;
          local_9c = local_3c + 1;
          local_94 = (byte *)((uint)local_94._2_2_ << 0x10);
          local_a0 = (byte *)0x0;
          local_94 = (byte *)(CONCAT31(local_94._1_3_,*(undefined1 *)(param_2 + 0x38)) & 0xffffff02)
          ;
        }
      }
LAB_00fe64cc:
      uVar7 = local_88;
      pbVar13 = local_90;
      pbVar25 = local_94;
      pbVar23 = local_98;
      pbVar18 = local_8c;
      pbVar24 = local_9c;
      if (((uint)local_a0 & 1) != 0) goto LAB_00fe7970;
      local_a8 = local_88;
      local_e8 = local_8c;
      local_ac = local_8c;
      local_b0 = local_90;
      local_b4 = local_94;
      local_b8 = local_98;
      FUN_00fe7e50(&local_40,param_2,local_9c);
      pbVar24 = local_3c;
      if (local_40 != &DAT_00000012) {
LAB_00fe7918:
        pbVar18 = local_30;
        pbVar24 = local_40;
        local_f4 = local_34;
        local_f0 = local_3c;
        local_f8 = local_38;
LAB_00fe7968:
        FUN_00fe5d20(&local_b8);
        pbVar13 = local_f4;
        pbVar23 = local_f0;
        pbVar25 = local_f8;
LAB_00fe7970:
        puVar6 = local_dc;
        param_1[4] = pbVar13;
        iVar21 = local_d8 + 1;
        *param_1 = 1;
        param_1[1] = pbVar24;
        param_1[2] = pbVar23;
        param_1[3] = pbVar25;
        param_1[5] = pbVar18;
        puVar8 = local_dc;
        while (iVar21 = iVar21 + -1, iVar21 != 0) {
          FUN_00ffd004(puVar8);
          puVar8 = puVar8 + 5;
        }
        if (local_e0 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(puVar6);
        return;
      }
      if (local_3c < *(byte **)(param_2 + 0x14)) {
        bVar1 = local_3c[*(int *)(param_2 + 0x10)];
        pbVar18 = local_3c;
        if (bVar1 < 0x3f) {
          if (bVar1 == 0x2a) {
            local_128 = (byte *)0xffffffff;
            goto LAB_00fe65b0;
          }
          if (bVar1 != 0x2b) goto LAB_00fe709c;
          local_104 = &DAT_00000001;
          local_128 = (byte *)0xffffffff;
        }
        else {
          if (bVar1 != 0x3f) {
            if (bVar1 != 0x7b) goto LAB_00fe709c;
            FUN_00fe7e50(&local_40,param_2,local_3c + 1);
            pbVar18 = local_3c;
            if (local_40 == &DAT_00000012) {
              pbVar19 = *(byte **)(param_2 + 0x14);
              if (local_3c != pbVar19) {
                if (pbVar19 <= local_3c) goto LAB_00fe7ae0;
                iVar21 = *(int *)(param_2 + 0x10);
                local_104 = (byte *)0x0;
                if (local_3c[iVar21] != 0x2c) {
                  FUN_00fe53bc(&local_40,iVar21,pbVar19,local_3c);
                  if (local_40 == (byte *)0x0) goto LAB_00fe6598;
                  local_104 = local_38;
                }
                FUN_00fe7e50(&local_40,param_2,local_3c);
                if (local_40 == &DAT_00000012) {
                  if (local_3c == pbVar19) {
                    local_a0 = &SUB_00000002;
                    local_90 = pbVar19;
                    goto LAB_00fe7090;
                  }
                  if (pbVar19 <= local_3c) {
                    local_120 = &DAT_01881948;
                    goto LAB_00fe7ae0;
                  }
                  if (local_3c[iVar21] == 0x2c) {
                    FUN_00fe7e50(&local_40,param_2,local_3c + 1);
                    pbVar18 = local_3c;
                    if (local_40 != &DAT_00000012) goto LAB_00fe706c;
                    FUN_00fe53bc(&local_40,iVar21,pbVar19,local_3c);
                    if (local_40 == (byte *)0x0) {
                      local_128 = (byte *)0xffffffff;
                    }
                    else {
                      pbVar18 = local_3c;
                      local_128 = local_38;
                    }
                  }
                  else {
                    pbVar18 = local_3c;
                    if (local_3c[iVar21] != 0x7d) goto LAB_00fe6598;
                    local_128 = local_104;
                  }
                  FUN_00fe7e50(&local_40,param_2,pbVar18);
                  pbVar18 = local_3c;
                  if (local_40 == &DAT_00000012) {
                    if (local_3c != pbVar19) {
                      if (pbVar19 <= local_3c) {
                        local_120 = &DAT_01881958;
LAB_00fe7ae0:
                    /* WARNING: Subroutine does not return */
                        FUN_00faa4a4(local_3c,pbVar19,local_120);
                      }
                      if (local_3c[iVar21] == 0x7d) {
                        local_9c = local_3c + 1;
                        local_a0 = &DAT_00000012;
                        local_94 = local_128;
                        local_98 = local_104;
                        FUN_00fea7e4(&local_a0);
                        goto LAB_00fe65b4;
                      }
                    }
                    goto LAB_00fe6598;
                  }
                }
                goto LAB_00fe706c;
              }
LAB_00fe6598:
              local_a0 = &SUB_00000002;
              local_90 = pbVar18;
            }
            else {
LAB_00fe706c:
              local_98 = local_38;
              local_94 = local_34;
              local_90 = local_30;
              local_a0 = local_40;
              local_9c = local_3c;
            }
LAB_00fe7090:
            FUN_00fea7e4(&local_a0);
            goto LAB_00fe709c;
          }
          local_128 = &DAT_00000001;
LAB_00fe65b0:
          local_104 = (byte *)0x0;
        }
LAB_00fe65b4:
        uVar7 = 9;
        if ((int)pbVar23 < 0) {
          uVar7 = (uint)pbVar23 ^ 0x80000000;
        }
        if (uVar7 < 0x10) {
          if (uVar7 != 2) {
            if ((1 << (uVar7 & 0xff) & 0xe081U) != 0) goto LAB_00fe7958;
            goto LAB_00fe65f4;
          }
          if ((*(byte *)(param_2 + 0x38) & 0x40) == 0) goto LAB_00fe65f4;
LAB_00fe7958:
          pbVar24 = &DAT_0000000d;
          goto LAB_00fe7968;
        }
LAB_00fe65f4:
        FUN_00fe7e50(&local_40,param_2,pbVar18 + 1);
        if (local_40 != &DAT_00000012) goto LAB_00fe7918;
        pbVar18 = *(byte **)(param_2 + 0x14);
        uVar7 = 1;
        pbVar24 = local_3c;
        if ((local_3c < pbVar18) &&
           (uVar7 = (uint)(local_3c[*(int *)(param_2 + 0x10)] != 0x3f),
           local_3c[*(int *)(param_2 + 0x10)] == 0x3f)) {
          pbVar24 = local_3c + 1;
        }
        uVar14 = *(uint *)(param_2 + 0x38);
        pbVar25 = (byte *)thunk_FUN_016d4a50(0x14);
        if (pbVar25 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x14);
        }
        pbVar23 = &DAT_80000008;
        *(byte **)pbVar25 = local_b8;
        *(byte **)(pbVar25 + 4) = local_b4;
        *(byte **)(pbVar25 + 8) = local_b0;
        *(byte **)(pbVar25 + 0xc) = local_ac;
        *(uint *)(pbVar25 + 0x10) = local_a8;
        uVar7 = uVar7 ^ (uVar14 & 8) >> 3;
        pbVar13 = local_104;
        local_e8 = local_128;
        if ((pbVar24 < pbVar18) && (pbVar24[*(int *)(param_2 + 0x10)] == 0x2b)) {
          local_40 = &DAT_80000008;
          local_30 = (byte *)CONCAT31(local_30._1_3_,(char)uVar7);
          local_3c = pbVar25;
          local_38 = local_104;
          local_34 = local_128;
          pbVar25 = (byte *)thunk_FUN_016d4a50(0x14);
          if (pbVar25 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x14);
          }
          pbVar24 = pbVar24 + 1;
          pbVar23 = &DAT_8000000c;
          *(byte **)pbVar25 = local_40;
          *(byte **)(pbVar25 + 4) = local_3c;
          *(byte **)(pbVar25 + 8) = local_38;
          *(byte **)(pbVar25 + 0xc) = local_34;
          *(byte **)(pbVar25 + 0x10) = local_30;
        }
      }
LAB_00fe709c:
      iVar21 = local_d8;
      local_c4 = local_e8;
      local_d0 = pbVar23;
      local_cc = pbVar25;
      local_c8 = pbVar13;
      local_c0 = uVar7;
      if (pbVar24 == param_3) {
        FUN_00fe5d20(&local_d0);
        break;
      }
      if (pbVar23 == &DAT_80000000) {
        FUN_00fe5d20(&local_d0);
      }
      else {
        if (local_d8 == local_e0) {
          FUN_01000540(&local_e0);
        }
        puVar6 = local_dc + iVar21 * 5;
        *puVar6 = local_d0;
        puVar6[1] = local_cc;
        puVar6[2] = local_c8;
        puVar6[3] = local_c4;
        puVar6[4] = local_c0;
        local_d8 = iVar21 + 1;
      }
      param_3 = pbVar24;
      local_f8 = pbVar25;
      local_f4 = pbVar13;
      local_f0 = pbVar23;
    } while (pbVar24 < *(byte **)(param_2 + 0x14));
    if (local_d8 == 1) {
      local_d8 = 0;
      uVar12 = local_dc[1];
      uVar17 = local_dc[2];
      uVar20 = local_dc[3];
      uVar22 = local_dc[4];
      param_1[2] = *local_dc;
      param_1[3] = uVar12;
      param_1[4] = uVar17;
      param_1[5] = uVar20;
      param_1[6] = uVar22;
      iVar21 = 4;
      goto LAB_00fe78f4;
    }
    if (local_d8 != 0) {
      param_1[2] = &DAT_80000004;
      *param_1 = 0;
      param_1[1] = param_3;
      param_1[3] = local_e0;
      param_1[4] = local_dc;
      param_1[5] = local_d8;
      return;
    }
  }
  param_1[1] = param_3;
  param_3 = &DAT_80000000;
  iVar21 = 8;
LAB_00fe78f4:
  *(byte **)((int)param_1 + iVar21) = param_3;
  *param_1 = 0;
  if (local_e0 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_dc);
  return;
}

