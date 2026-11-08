// FUN_00a5bf18 @ 00a5bf18 size=4288 calls_out=21 calls_in=0
// strings: State | Action | State | Action | State | Action

/* WARNING: Type propagation algorithm not settling */

void FUN_00a5bf18(undefined4 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char *pcVar10;
  char *pcVar11;
  char **ppcVar12;
  undefined4 uVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  uint uVar19;
  char **ppcVar20;
  char **ppcVar21;
  uint uVar22;
  int *unaff_s16;
  ulonglong uVar23;
  int *local_a8;
  char **local_a4;
  int *local_84;
  int *local_80;
  int *local_7c;
  char **local_78;
  int *local_74;
  int *local_70;
  int *local_6c;
  char *local_68;
  undefined1 local_64;
  char **local_60;
  int *local_5c;
  char **local_58;
  char *local_50;
  undefined1 local_4c;
  undefined4 local_48;
  int *local_44;
  char **local_40;
  char *local_3c;
  undefined4 local_38;
  undefined1 uStack_31;
  
  uVar19 = *(uint *)(param_2 + 0x14);
  if (uVar19 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar22 = *(byte *)(*(int *)(param_2 + 0xc) + uVar19) - 9;
      if ((0x17 < uVar22) || ((1 << (uVar22 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)(*(int *)(param_2 + 0xc) + uVar19) != 0x5b) {
          piVar18 = (int *)FUN_00a6c930(param_2,&uStack_31,&DAT_0186d714);
          goto LAB_00a5cf58;
        }
        cVar1 = param_2[0x1c];
        param_2[0x1c] = cVar1 + -1;
        if ((char)(cVar1 + -1) != '\0') {
          *(uint *)(param_2 + 0x14) = uVar19 + 1;
          local_5c = (int *)&DAT_00000004;
          local_58 = (char **)0x0;
          local_60 = (char **)0x0;
          local_64 = 1;
          local_68 = param_2;
          goto LAB_00a5c03c;
        }
        local_48 = (char **)0x18;
        goto LAB_00a5bf78;
      }
      uVar19 = uVar19 + 1;
      *(uint *)(param_2 + 0x14) = uVar19;
    } while (*(uint *)(param_2 + 0x10) != uVar19);
  }
  local_48 = (char **)0x5;
LAB_00a5bf78:
  uVar13 = FUN_01143ab8(param_2,&local_48);
  goto LAB_00a5cf64;
LAB_00a5c03c:
  piVar18 = (int *)&DAT_00000001;
  FUN_00a6bf5c(&local_48,&local_68);
  pcVar10 = local_68;
  if ((char)local_48 == '\x01') {
    piVar16 = local_44;
  }
  else {
    if (local_48._1_1_ != '\x01') goto LAB_00a5cdc8;
    uVar19 = *(uint *)(local_68 + 0x14);
    if (uVar19 < *(uint *)(local_68 + 0x10)) {
      while( true ) {
        uVar22 = (uint)*(byte *)(*(int *)(local_68 + 0xc) + uVar19);
        if ((0x17 < uVar22 - 9) || ((1 << (uVar22 - 9 & 0xff) & 0x800013U) == 0)) break;
        uVar19 = uVar19 + 1;
        *(uint *)(local_68 + 0x14) = uVar19;
        if (*(uint *)(local_68 + 0x10) == uVar19) goto LAB_00a5cdac;
      }
      if (uVar22 == 0x5b) {
        cVar1 = local_68[0x1c];
        local_68[0x1c] = cVar1 + -1;
        if ((char)(cVar1 + -1) != '\0') {
          *(uint *)(local_68 + 0x14) = uVar19 + 1;
          local_38 = CONCAT31(local_38._1_3_,1);
          local_3c = local_68;
          FUN_00a6bf5c(&local_48,&local_3c);
          if ((char)local_48 == '\x01') {
            piVar16 = local_44;
LAB_00a5c728:
            ppcVar20 = (char **)&DAT_80000000;
          }
          else {
            uVar13 = 0;
            if (local_48._1_1_ != '\x01') {
LAB_00a5c718:
              piVar16 = (int *)FUN_00a6e430(uVar13,&DAT_0186d4d0);
              goto LAB_00a5c728;
            }
            uVar23 = FUN_00a6e1d4(local_3c);
            piVar17 = (int *)(uVar23 >> 0x20);
            piVar15 = piVar17;
            ppcVar20 = (char **)&DAT_80000000;
            if ((uVar23 & 1) == 0) {
              FUN_00a6bf5c(&local_48,&local_3c);
              if ((char)local_48 == '\x01') {
                piVar16 = local_44;
              }
              else {
                uVar13 = 1;
                if (local_48._1_1_ != '\x01') goto LAB_00a5c718;
                FUN_00a7f220(&local_48,local_3c);
                ppcVar12 = local_40;
                piVar16 = local_44;
                ppcVar21 = local_48;
                if (local_48 != (char **)&DAT_80000000) {
                  FUN_00a6bf5c(&local_48,&local_3c);
                  if ((char)local_48 == '\x01') goto LAB_00a5c710;
                  uVar13 = 2;
                  if (local_48._1_1_ != '\x01') goto LAB_00a5cd84;
                  uVar23 = FUN_00a6e1d4(local_3c);
                  piVar18 = (int *)(uVar23 >> 0x20);
                  local_70 = piVar18;
                  if ((uVar23 & 1) == 0) {
                    FUN_00a6bf5c(&local_48,&local_3c);
                    if ((char)local_48 == '\x01') goto LAB_00a5c710;
                    uVar13 = 3;
                    if (local_48._1_1_ != '\x01') goto LAB_00a5cd84;
                    uVar23 = FUN_00a6e1d4(local_3c);
                    piVar15 = (int *)(uVar23 >> 0x20);
                    local_70 = piVar15;
                    if ((uVar23 & 1) != 0) goto LAB_00a5cd94;
                    FUN_00a6bf5c(&local_48,&local_3c);
                    if ((char)local_48 == '\x01') goto LAB_00a5c710;
                    uVar13 = 4;
                    if (local_48._1_1_ != '\x01') goto LAB_00a5cd84;
                    uVar23 = FUN_00a6e1d4(local_3c);
                    local_7c = (int *)(uVar23 >> 0x20);
                    local_70 = local_7c;
                    if ((uVar23 & 1) != 0) goto LAB_00a5cd94;
                    FUN_00a6bf5c(&local_48,&local_3c);
                    local_78 = ppcVar12;
                    local_74 = piVar15;
                    if ((char)local_48 == '\x01') goto LAB_00a5c710;
                    uVar13 = 5;
                    if (local_48._1_1_ != '\x01') goto LAB_00a5cd84;
                    uVar23 = FUN_00a6e1d4(local_3c);
                    local_70 = (int *)(uVar23 >> 0x20);
                    if ((uVar23 & 1) != 0) goto LAB_00a5cd94;
                    FUN_00a6e498(&local_48,&local_3c);
                    piVar15 = local_44;
                    if (local_48 == (char **)&SUB_00000002) {
LAB_00a5c710:
                      local_70 = local_44;
                    }
                    else {
                      if (((uint)local_48 & 1) == 0) {
                        uVar13 = 6;
                      }
                      else {
                        FUN_00a6e518(&local_48,&local_3c);
                        unaff_s16 = piVar15;
                        if (local_48 == (char **)&SUB_00000002) goto LAB_00a5c710;
                        if (((uint)local_48 & 1) == 0) {
                          uVar13 = 7;
                        }
                        else {
                          local_80 = local_44;
                          FUN_00a6e518(&local_48,&local_3c);
                          if (local_48 == (char **)&SUB_00000002) goto LAB_00a5c710;
                          if (((uint)local_48 & 1) != 0) {
                            local_84 = local_44;
                            ppcVar20 = ppcVar21;
                            local_6c = piVar17;
                            goto LAB_00a5c72c;
                          }
                          uVar13 = 8;
                        }
                      }
LAB_00a5cd84:
                      local_70 = (int *)FUN_00a6e430(uVar13,&DAT_0186d4d0);
                    }
                  }
LAB_00a5cd94:
                  piVar15 = local_70;
                  if (ppcVar21 != (char **)0x0) {
                    thunk_FUN_016d3fb4(piVar16);
                  }
                  goto LAB_00a5c5ac;
                }
              }
            }
            else {
LAB_00a5c5ac:
              piVar16 = piVar15;
              local_6c = piVar17;
            }
          }
LAB_00a5c72c:
          pcVar10[0x1c] = pcVar10[0x1c] + '\x01';
          piVar15 = (int *)FUN_00a6cce8(pcVar10);
          if (ppcVar20 != (char **)&DAT_80000000) {
            piVar17 = piVar16;
            if (piVar15 == (int *)0x0) goto LAB_00a5c754;
            goto LAB_00a5cdec;
          }
          if (piVar15 == (int *)0x0) goto LAB_00a5ce3c;
          FUN_005c3974(piVar15);
          piVar17 = piVar15;
          goto LAB_00a5ce34;
        }
        local_48 = (char **)0x18;
        piVar16 = (int *)FUN_01143ab8(local_68,&local_48);
      }
      else {
        if (uVar22 != 0x7b) {
          piVar15 = (int *)FUN_00a6c930(local_68,&uStack_31,&DAT_0186d744);
          goto LAB_00a5ce40;
        }
        cVar1 = local_68[0x1c];
        local_68[0x1c] = cVar1 + -1;
        if ((char)(cVar1 + -1) != '\0') {
          *(uint *)(local_68 + 0x14) = uVar19 + 1;
          local_4c = 1;
          bVar2 = false;
          bVar9 = false;
          local_50 = local_68;
          bVar5 = false;
          bVar4 = false;
          bVar8 = false;
          bVar3 = false;
          bVar7 = false;
          bVar6 = false;
          ppcVar20 = (char **)&DAT_80000000;
LAB_00a5c108:
          FUN_0134da08(&local_48,&local_50);
          pcVar11 = local_50;
          if ((char)local_48 == '\x01') {
LAB_00a5c5b4:
            piVar16 = local_44;
            goto LAB_00a5c670;
          }
          if (local_48._1_1_ != '\x01') {
            if (!bVar9) {
              local_38 = 2;
              local_3c = &DAT_0034da97;
              local_44 = &DAT_0157d360;
              local_48 = &local_3c;
              piVar16 = (int *)FUN_00f56780(&DAT_0057a25d,&local_48);
              goto LAB_00a5c66c;
            }
            if (ppcVar20 == (char **)&DAT_80000000) {
              local_38 = 4;
              local_3c = (char *)&DAT_005674d0;
              local_44 = &DAT_0157d360;
              local_48 = &local_3c;
              piVar16 = (int *)FUN_00f56780(&DAT_0057a25d,&local_48);
              ppcVar20 = (char **)&DAT_80000000;
              goto LAB_00a5c690;
            }
            if (!bVar6) {
              local_38 = 5;
              local_3c = "State";
              local_44 = &DAT_0157d360;
              local_48 = &local_3c;
              piVar16 = (int *)FUN_00f56780(&DAT_0057a25d,&local_48);
              goto joined_r0x00a5cb4c;
            }
            if (!bVar7) {
              local_38 = 6;
              local_3c = "Action";
              local_44 = &DAT_0157d360;
              local_48 = &local_3c;
              piVar16 = (int *)FUN_00f56780(&DAT_0057a25d,&local_48);
              goto joined_r0x00a5cb4c;
            }
            if (!bVar3) {
              local_38 = 5;
              local_3c = &DAT_0034da99;
              local_44 = &DAT_0157d360;
              local_48 = &local_3c;
              piVar16 = (int *)FUN_00f56780(&DAT_0057a25d,&local_48);
              goto joined_r0x00a5cb4c;
            }
            if (!bVar8) {
              local_38 = 7;
              local_3c = &DAT_0034da9e;
              local_44 = &DAT_0157d360;
              local_48 = &local_3c;
              piVar16 = (int *)FUN_00f56780(&DAT_0057a25d,&local_48);
              goto joined_r0x00a5cb4c;
            }
            if (!bVar4) {
              local_38 = 0xb;
              local_3c = &DAT_0034daa5;
              local_44 = &DAT_0157d360;
              local_48 = &local_3c;
              piVar16 = (int *)FUN_00f56780(&DAT_0057a25d,&local_48);
              goto joined_r0x00a5cb4c;
            }
            if (!bVar5) {
              local_38 = 4;
              local_3c = &DAT_00569740;
              local_44 = &DAT_0157d360;
              local_48 = &local_3c;
              piVar16 = (int *)FUN_00f56780(&DAT_0057a25d,&local_48);
              goto joined_r0x00a5cb4c;
            }
            if (bVar2) {
              piVar16 = local_a8;
              goto LAB_00a5c690;
            }
            local_38 = 6;
            local_3c = &DAT_0034dab0;
            local_44 = &DAT_0157d360;
            local_48 = &local_3c;
            piVar16 = (int *)FUN_00f56780(&DAT_0057a25d,&local_48);
            goto joined_r0x00a5cb4c;
          }
          iVar14 = *(int *)(local_50 + 0x14);
          local_50[8] = '\0';
          local_50[9] = '\0';
          local_50[10] = '\0';
          local_50[0xb] = '\0';
          *(int *)(local_50 + 0x14) = iVar14 + 1;
          FUN_0157e5fc(&local_48,local_50 + 0xc,local_50);
          piVar16 = local_44;
          if (local_48 == (char **)&SUB_00000002) goto LAB_00a5c670;
          switch(local_40) {
          case (char **)0x2:
            if ((short)*local_44 == 0x4449) {
              if (bVar9) {
                local_38 = 2;
                local_3c = &DAT_0034da97;
                local_44 = &DAT_0157d360;
                local_48 = &local_3c;
                piVar16 = (int *)FUN_00f56780(&DAT_00582dbd,&local_48);
                goto LAB_00a5c66c;
              }
              iVar14 = FUN_0114576c(pcVar11);
              if (iVar14 == 0) {
                uVar23 = FUN_00a6e1d4(pcVar11);
              }
              else {
                uVar23 = CONCAT44(iVar14,1);
              }
              local_6c = (int *)(uVar23 >> 0x20);
              if ((uVar23 & 1) != 0) {
                piVar16 = local_6c;
                goto LAB_00a5c670;
              }
              bVar9 = true;
              goto LAB_00a5c108;
            }
            break;
          case (char **)0x4:
            if ((undefined1 *)*local_44 == &DAT_656d614e) {
              if (ppcVar20 != (char **)&DAT_80000000) {
                local_38 = 4;
                local_3c = (char *)&DAT_005674d0;
                local_44 = &DAT_0157d360;
                local_48 = &local_3c;
                piVar16 = (int *)FUN_00f56780(&DAT_00582dbd,&local_48);
                goto LAB_00a5c66c;
              }
              piVar16 = (int *)FUN_0114576c(pcVar11);
              if (piVar16 == (int *)0x0) {
                FUN_00a7f220(&local_48,pcVar11);
                piVar16 = local_44;
                if (local_48 != (char **)&DAT_80000000) {
                  local_a4 = local_40;
                  local_a8 = local_44;
                  ppcVar20 = local_48;
                  goto LAB_00a5c108;
                }
              }
              ppcVar20 = (char **)&DAT_80000000;
              goto LAB_00a5c690;
            }
            if (*local_44 != 0x64616f4c) break;
            if (!bVar5) {
              iVar14 = FUN_0114576c(pcVar11);
              if (iVar14 == 0) {
                uVar23 = FUN_00a6e1d4(pcVar11);
              }
              else {
                uVar23 = CONCAT44(iVar14,1);
              }
              local_80 = (int *)(uVar23 >> 0x20);
              if ((uVar23 & 1) != 0) {
                piVar16 = local_80;
                goto LAB_00a5c670;
              }
              bVar5 = true;
              goto LAB_00a5c108;
            }
            local_38 = 4;
            local_3c = &DAT_00569740;
            local_44 = &DAT_0157d360;
            local_48 = &local_3c;
            piVar16 = (int *)FUN_00f56780(&DAT_00582dbd,&local_48);
            goto LAB_00a5c66c;
          case (char **)0x5:
            iVar14 = thunk_FUN_016dd50a(local_44,"State",5);
            if (iVar14 == 0) {
              if (bVar6) {
                local_38 = 5;
                local_3c = "State";
                local_44 = &DAT_0157d360;
                local_48 = &local_3c;
                piVar16 = (int *)FUN_00f56780(&DAT_00582dbd,&local_48);
                goto LAB_00a5c66c;
              }
              piVar18 = (int *)FUN_0114576c(pcVar11);
              if (piVar18 == (int *)0x0) {
                uVar23 = FUN_00a6e1d4(pcVar11);
                piVar18 = (int *)(uVar23 >> 0x20);
                if ((uVar23 & 1) == 0) {
                  bVar6 = true;
                  goto LAB_00a5c108;
                }
              }
              piVar16 = piVar18;
              goto LAB_00a5c670;
            }
            iVar14 = thunk_FUN_016dd50a(piVar16,&DAT_0034da99,5);
            if (iVar14 != 0) break;
            if (!bVar3) {
              iVar14 = FUN_0114576c(pcVar11);
              if (iVar14 == 0) {
                uVar23 = FUN_00a6e1d4(pcVar11);
              }
              else {
                uVar23 = CONCAT44(iVar14,1);
              }
              local_7c = (int *)(uVar23 >> 0x20);
              if ((uVar23 & 1) != 0) {
                piVar16 = local_7c;
                goto LAB_00a5c670;
              }
              bVar3 = true;
              goto LAB_00a5c108;
            }
            local_38 = 5;
            local_3c = &DAT_0034da99;
            local_44 = &DAT_0157d360;
            local_48 = &local_3c;
            piVar16 = (int *)FUN_00f56780(&DAT_00582dbd,&local_48);
            goto LAB_00a5c66c;
          case (char **)0x6:
            iVar14 = thunk_FUN_016dd50a(local_44,"Action",6);
            if (iVar14 == 0) {
              if (!bVar7) {
                iVar14 = FUN_0114576c(pcVar11);
                if (iVar14 == 0) {
                  uVar23 = FUN_00a6e1d4(pcVar11);
                }
                else {
                  uVar23 = CONCAT44(iVar14,1);
                }
                local_74 = (int *)(uVar23 >> 0x20);
                if ((uVar23 & 1) != 0) {
                  piVar16 = local_74;
                  goto LAB_00a5c670;
                }
                bVar7 = true;
                goto LAB_00a5c108;
              }
              local_38 = 6;
              local_3c = "Action";
              local_44 = &DAT_0157d360;
              local_48 = &local_3c;
              piVar16 = (int *)FUN_00f56780(&DAT_00582dbd,&local_48);
            }
            else {
              iVar14 = thunk_FUN_016dd50a(piVar16,&DAT_0034dab0,6);
              if (iVar14 != 0) break;
              if (!bVar2) {
                iVar14 = FUN_0114576c(pcVar11);
                if (iVar14 == 0) {
                  uVar23 = FUN_00a6e1d4(pcVar11);
                }
                else {
                  uVar23 = CONCAT44(iVar14,1);
                }
                local_84 = (int *)(uVar23 >> 0x20);
                if ((uVar23 & 1) != 0) {
                  piVar16 = local_84;
                  goto LAB_00a5c670;
                }
                bVar2 = true;
                goto LAB_00a5c108;
              }
              local_38 = 6;
              local_3c = &DAT_0034dab0;
              local_44 = &DAT_0157d360;
              local_48 = &local_3c;
              piVar16 = (int *)FUN_00f56780(&DAT_00582dbd,&local_48);
            }
LAB_00a5c66c:
            goto LAB_00a5c670;
          case (char **)0x7:
            iVar14 = thunk_FUN_016dd50a(local_44,&DAT_0034da9e,7);
            if (iVar14 == 0) {
              if (bVar8) {
                local_38 = 7;
                local_3c = &DAT_0034da9e;
                local_44 = &DAT_0157d360;
                local_48 = &local_3c;
                piVar16 = (int *)FUN_00f56780(&DAT_00582dbd,&local_48);
                goto LAB_00a5c66c;
              }
              iVar14 = FUN_0114576c(pcVar11);
              if (iVar14 == 0) {
                uVar23 = FUN_00a6e1d4(pcVar11);
              }
              else {
                uVar23 = CONCAT44(iVar14,1);
              }
              local_70 = (int *)(uVar23 >> 0x20);
              if ((uVar23 & 1) != 0) {
                piVar16 = local_70;
                goto LAB_00a5c670;
              }
              bVar8 = true;
              goto LAB_00a5c108;
            }
            break;
          case (char **)0xb:
            iVar14 = thunk_FUN_016dd50a(local_44,&DAT_0034daa5,0xb);
            if (iVar14 == 0) {
              if (bVar4) {
                local_38 = 0xb;
                local_3c = &DAT_0034daa5;
                local_44 = &DAT_0157d360;
                local_48 = &local_3c;
                piVar16 = (int *)FUN_00f56780(&DAT_00582dbd,&local_48);
                goto LAB_00a5c66c;
              }
              piVar16 = (int *)FUN_0114576c(pcVar11);
              if (piVar16 != (int *)0x0) goto LAB_00a5c670;
              FUN_00a6ed38(&local_48,pcVar11);
              if (local_48 == (char **)&DAT_00000001) goto LAB_00a5c5b4;
              bVar4 = true;
              unaff_s16 = local_44;
              goto LAB_00a5c108;
            }
          }
          piVar16 = (int *)FUN_00a6e5d0(pcVar11);
          if (piVar16 != (int *)0x0) goto LAB_00a5c670;
          goto LAB_00a5c108;
        }
        local_48 = (char **)0x18;
        piVar16 = (int *)FUN_01143ab8(local_68,&local_48);
      }
    }
    else {
LAB_00a5cdac:
      local_48 = (char **)0x5;
      piVar16 = (int *)FUN_01143ab8(local_68,&local_48);
    }
  }
  goto LAB_00a5ce50;
LAB_00a5c670:
  ppcVar20 = (char **)((uint)ppcVar20 & 0x7fffffff);
joined_r0x00a5cb4c:
  bVar9 = ppcVar20 != (char **)0x0;
  ppcVar20 = (char **)&DAT_80000000;
  if (bVar9) {
    ppcVar20 = (char **)&DAT_80000000;
    thunk_FUN_016d3fb4(local_a8);
  }
LAB_00a5c690:
  pcVar10[0x1c] = pcVar10[0x1c] + '\x01';
  piVar15 = (int *)FUN_00a6ef8c(pcVar10);
  if (ppcVar20 == (char **)&DAT_80000000) {
    if (piVar15 != (int *)0x0) {
      FUN_005c3974(piVar15);
      piVar17 = piVar15;
      goto LAB_00a5ce34;
    }
LAB_00a5ce3c:
    piVar15 = piVar16;
  }
  else {
    piVar17 = piVar16;
    if (piVar15 == (int *)0x0) {
      local_78 = local_a4;
LAB_00a5c754:
      ppcVar21 = local_58;
      if (ppcVar20 == (char **)&DAT_80000000) {
LAB_00a5cdc8:
        local_48 = local_60;
        local_44 = local_5c;
        local_40 = local_58;
        goto LAB_00a5cea8;
      }
      if (ppcVar20 == (char **)0x80000001) goto LAB_00a5ce50;
      if (local_58 == local_60) {
        FUN_00a8a328(&local_60);
      }
      piVar15 = local_5c + (int)ppcVar21 * 0xb;
      *piVar15 = (int)ppcVar20;
      piVar15[2] = (int)local_78;
      piVar15[3] = (int)local_6c;
      piVar15[5] = (int)local_74;
      piVar15[7] = (int)local_70;
      local_58 = (char **)((int)ppcVar21 + 1);
      piVar15[9] = (int)local_80;
      piVar15[4] = (int)piVar18;
      piVar15[10] = (int)local_84;
      piVar15[8] = (int)unaff_s16;
      piVar15[1] = (int)piVar16;
      piVar15[6] = (int)local_7c;
      goto LAB_00a5c03c;
    }
LAB_00a5cdec:
    piVar16 = piVar15;
    if (ppcVar20 != (char **)0x0) {
LAB_00a5ce34:
      thunk_FUN_016d3fb4(piVar17);
      piVar15 = piVar16;
    }
  }
LAB_00a5ce40:
  piVar16 = (int *)FUN_00a6cecc(piVar15,pcVar10);
LAB_00a5ce50:
  piVar18 = local_5c;
  piVar15 = local_5c + 1;
  local_48 = (char **)&DAT_80000000;
  local_44 = piVar16;
  for (ppcVar20 = local_58; ppcVar20 != (char **)0x0; ppcVar20 = (char **)((int)ppcVar20 + -1)) {
    if (piVar15[-1] != 0) {
      thunk_FUN_016d3fb4(*piVar15);
    }
    piVar15 = piVar15 + 0xb;
  }
  if (local_60 != (char **)0x0) {
    thunk_FUN_016d3fb4(piVar18);
  }
LAB_00a5cea8:
  param_2[0x1c] = param_2[0x1c] + '\x01';
  piVar18 = (int *)FUN_00a6cce8(param_2);
  piVar16 = local_44;
  ppcVar20 = local_48;
  if (local_48 == (char **)&DAT_80000000) {
    if (piVar18 != (int *)0x0) {
      FUN_005c3974(piVar18);
      thunk_FUN_016d3fb4(piVar18);
    }
    piVar18 = piVar16;
  }
  else {
    if (piVar18 == (int *)0x0) {
      *param_1 = local_48;
      param_1[1] = local_44;
      param_1[2] = local_40;
      return;
    }
    piVar15 = local_44 + 1;
    for (ppcVar21 = local_40; ppcVar21 != (char **)0x0; ppcVar21 = (char **)((int)ppcVar21 + -1)) {
      if (piVar15[-1] != 0) {
        thunk_FUN_016d3fb4(*piVar15);
      }
      piVar15 = piVar15 + 0xb;
    }
    if (ppcVar20 != (char **)0x0) {
      thunk_FUN_016d3fb4(piVar16);
    }
  }
LAB_00a5cf58:
  uVar13 = FUN_00a6cecc(piVar18,param_2);
LAB_00a5cf64:
  *param_1 = 0x80000000;
  param_1[1] = uVar13;
  return;
}

