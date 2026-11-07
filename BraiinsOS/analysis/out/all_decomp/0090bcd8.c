// FUN_0090bcd8 @ 0090bcd8 size=4460 calls_out=13 calls_in=1
// strings: MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements | target_temp | dangerous_temp | cold_temp

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0090bcd8(int *param_1,uint *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  int *piVar16;
  int *piVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined1 uVar20;
  char *pcVar21;
  int *piVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  int iVar25;
  uint uVar26;
  undefined4 uVar27;
  uint *puVar28;
  int *piVar29;
  int *piVar30;
  int *piVar31;
  uint uVar32;
  int iVar33;
  bool bVar34;
  bool bVar35;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 uVar36;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  uint local_128;
  int *local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint *local_f0;
  uint *local_ec;
  uint local_e8;
  uint *local_e4;
  int local_e0;
  int *local_d8;
  int *local_d4;
  int *local_d0;
  int *local_cc;
  int *local_c8;
  uint local_a8;
  char *local_a4;
  char *local_a0;
  int local_9c;
  int *local_88;
  int local_84;
  int local_80;
  int local_7c;
  int *local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  uVar32 = *param_2;
  uVar10 = 0x15;
  piVar22 = param_1 + 4;
  if ((int)uVar32 < 0) {
    uVar10 = uVar32 ^ 0x80000000;
  }
  if (uVar10 != 0x14) {
    if (uVar10 != 0x15) {
      FUN_008f73e8(&local_78,param_2,&local_d8,&DAT_018670a8);
      param_1[2] = (int)local_78;
      param_1[3] = local_74;
      param_1[4] = local_70;
      param_1[5] = local_6c;
      param_1[6] = local_68;
      param_1[7] = iStack_64;
      param_1[8] = local_60;
      param_1[9] = iStack_5c;
      param_1[10] = iStack_58;
      param_1[0xb] = iStack_54;
      param_1[0xc] = iStack_50;
      param_1[0xd] = iStack_4c;
      *param_1 = 2;
      param_1[1] = 0;
      return;
    }
    local_f0 = (uint *)param_2[1];
    local_12c = 0;
    local_100 = (int *)0x80000015;
    puVar28 = local_f0 + param_2[2] * 8;
    local_e0 = 0;
    local_ec = local_f0;
    local_e8 = uVar32;
    local_e4 = puVar28;
    if (param_2[2] != 0) {
      puVar23 = (undefined4 *)((uint)&local_78 | 4);
      puVar11 = (undefined4 *)((uint)&local_d8 | 4);
      puVar12 = (undefined4 *)((uint)&local_100 | 4);
      puVar13 = (uint *)((uint)&local_a8 | 4);
      local_128 = 5;
      local_130 = 2;
      local_12c = 0;
      local_134 = 2;
      local_138 = 0;
      local_144 = 2;
      puVar24 = (undefined4 *)((uint)&local_88 | 4);
      local_148 = 0;
      iVar25 = 0;
      local_13c = 2;
      local_140 = 0;
      iVar8 = 1;
      puVar1 = local_f0;
LAB_0090bf24:
      iVar33 = iVar8;
      pcVar4 = local_a0;
      pcVar21 = local_a4;
      puVar15 = puVar1 + 8;
      uVar10 = *puVar1;
      if (uVar10 == 0x80000015) goto LAB_0090c870;
      uVar19 = puVar1[2];
      uVar26 = puVar1[3];
      local_100 = (int *)puVar1[4];
      local_fc = puVar1[5];
      local_f8 = puVar1[6];
      *puVar13 = puVar1[1];
      puVar13[1] = uVar19;
      puVar13[2] = uVar26;
      uVar19 = 0x15;
      if ((int)uVar10 < 0) {
        uVar19 = uVar10 ^ 0x80000000;
      }
      local_f4 = puVar1[7];
      local_a8 = uVar10;
      switch(uVar19) {
      case 1:
        local_78 = (int *)&SUB_00000002;
        uVar20 = SUB41(local_a4,0);
        if (4 < ((uint)local_a4 & 0xff)) {
          uVar20 = 5;
        }
        local_74 = CONCAT31(local_74._1_3_,uVar20);
        break;
      default:
        FUN_008f73e8(&local_78,&local_a8,&local_d8,&DAT_01867188);
        goto LAB_0090c3bc;
      case 4:
        pcVar21 = local_a0;
        if (&DAT_00000004 < local_a0) {
          pcVar21 = &DAT_00000005;
        }
        uVar20 = SUB41(pcVar21,0);
        if (local_9c != 0) {
          uVar20 = 5;
        }
        goto LAB_0090c3a8;
      case 0xc:
        FUN_0090f9f0(&local_78,local_a0,local_9c);
        if (pcVar21 == (char *)0x0) goto LAB_0090c3bc;
LAB_0090c658:
        thunk_FUN_016d3fb4(pcVar4);
        uVar10 = local_74 & 0xff;
        uVar20 = (undefined1)local_74;
        if (local_78 == (int *)&SUB_00000002) goto LAB_0090c3cc;
        goto LAB_0090c964;
      case 0xd:
        FUN_0090f9f0(&local_78);
        break;
      case 0xe:
        switch(local_9c) {
        case 4:
          cVar9 = *local_a0;
          bVar35 = cVar9 == 'm';
          if (bVar35) {
            cVar9 = local_a0[1];
          }
          bVar34 = bVar35 && cVar9 == 'o';
          if (bVar35 && cVar9 == 'o') {
            bVar34 = local_a0[2] == 'd';
          }
          if ((!bVar34) || (uVar10 = 0, local_a0[3] != 'e')) break;
          goto LAB_0090c644;
        case 8:
          if (*local_a0 == 'h') {
            cVar9 = local_a0[1];
            bVar35 = cVar9 == 'o';
            if (bVar35) {
              cVar9 = local_a0[2];
            }
            if (bVar35 && cVar9 == 't') {
              cVar9 = local_a0[3];
              bVar35 = cVar9 == '_';
              if (bVar35) {
                cVar9 = local_a0[4];
              }
              if (bVar35 && cVar9 == 't') {
                cVar9 = local_a0[5];
                bVar35 = cVar9 == 'e';
                if (bVar35) {
                  cVar9 = local_a0[6];
                }
                if (bVar35 && cVar9 == 'm') {
                  cVar9 = local_a0[7];
                  uVar10 = 2;
LAB_0090c298:
                  if (cVar9 != 'p') {
                    uVar10 = 5;
                  }
                  goto LAB_0090c644;
                }
              }
            }
          }
          break;
        case 9:
          cVar9 = *local_a0;
          bVar35 = cVar9 == 'c';
          if (bVar35) {
            cVar9 = local_a0[1];
          }
          if (bVar35 && cVar9 == 'o') {
            cVar9 = local_a0[2];
            bVar35 = cVar9 == 'l';
            if (bVar35) {
              cVar9 = local_a0[3];
            }
            if (bVar35 && cVar9 == 'd') {
              cVar9 = local_a0[4];
              bVar35 = cVar9 == '_';
              if (bVar35) {
                cVar9 = local_a0[5];
              }
              if (bVar35 && cVar9 == 't') {
                cVar9 = local_a0[6];
                bVar35 = cVar9 == 'e';
                if (bVar35) {
                  cVar9 = local_a0[7];
                }
                if (bVar35 && cVar9 == 'm') {
                  cVar9 = local_a0[8];
                  uVar10 = 4;
                  goto LAB_0090c298;
                }
              }
            }
          }
          break;
        case 0xb:
          cVar9 = *local_a0;
          bVar35 = cVar9 == 't';
          if (bVar35) {
            cVar9 = local_a0[1];
          }
          if (bVar35 && cVar9 == 'a') {
            cVar9 = local_a0[2];
            bVar35 = cVar9 == 'r';
            if (bVar35) {
              cVar9 = local_a0[3];
            }
            if (bVar35 && cVar9 == 'g') {
              cVar9 = local_a0[4];
              bVar35 = cVar9 == 'e';
              if (bVar35) {
                cVar9 = local_a0[5];
              }
              if (bVar35 && cVar9 == 't') {
                cVar9 = local_a0[6];
                bVar35 = cVar9 == '_';
                if (bVar35) {
                  cVar9 = local_a0[7];
                }
                if (bVar35 && cVar9 == 't') {
                  cVar9 = local_a0[8];
                  bVar35 = cVar9 == 'e';
                  if (bVar35) {
                    cVar9 = local_a0[9];
                  }
                  if (bVar35 && cVar9 == 'm') {
                    cVar9 = local_a0[10];
                    uVar10 = 1;
                    goto LAB_0090c298;
                  }
                }
              }
            }
          }
          break;
        case 0xe:
          if (*local_a0 == 'd') {
            cVar9 = local_a0[1];
            bVar35 = cVar9 == 'a';
            if (bVar35) {
              cVar9 = local_a0[2];
            }
            if (bVar35 && cVar9 == 'n') {
              cVar9 = local_a0[3];
              bVar35 = cVar9 == 'g';
              if (bVar35) {
                cVar9 = local_a0[4];
              }
              if (bVar35 && cVar9 == 'e') {
                cVar9 = local_a0[5];
                bVar35 = cVar9 == 'r';
                if (bVar35) {
                  cVar9 = local_a0[6];
                }
                if (bVar35 && cVar9 == 'o') {
                  cVar9 = local_a0[7];
                  bVar35 = cVar9 == 'u';
                  if (bVar35) {
                    cVar9 = local_a0[8];
                  }
                  if (bVar35 && cVar9 == 's') {
                    cVar9 = local_a0[9];
                    bVar35 = cVar9 == '_';
                    if (bVar35) {
                      cVar9 = local_a0[10];
                    }
                    if (bVar35 && cVar9 == 't') {
                      cVar9 = local_a0[0xb];
                      bVar35 = cVar9 == 'e';
                      if (bVar35) {
                        cVar9 = local_a0[0xc];
                      }
                      if (bVar35 && cVar9 == 'm') {
                        cVar9 = local_a0[0xd];
                        uVar10 = 3;
                        goto LAB_0090c298;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar10 = 5;
LAB_0090c644:
        local_78 = (int *)&SUB_00000002;
        local_74 = CONCAT31(local_74._1_3_,(char)uVar10);
        if (local_a4 != (char *)0x0) goto LAB_0090c658;
        goto LAB_0090c3cc;
      case 0xf:
        switch(local_a0) {
        case (char *)0x4:
          cVar9 = *local_a4;
          bVar35 = cVar9 == 'm';
          if (bVar35) {
            cVar9 = local_a4[1];
          }
          bVar34 = bVar35 && cVar9 == 'o';
          if (bVar35 && cVar9 == 'o') {
            bVar34 = local_a4[2] == 'd';
          }
          if ((bVar34) && (uVar20 = 0, local_a4[3] == 'e')) goto LAB_0090c3a8;
          break;
        case (char *)0x8:
          if (*local_a4 == 'h') {
            cVar9 = local_a4[1];
            bVar35 = cVar9 == 'o';
            if (bVar35) {
              cVar9 = local_a4[2];
            }
            if (bVar35 && cVar9 == 't') {
              cVar9 = local_a4[3];
              bVar35 = cVar9 == '_';
              if (bVar35) {
                cVar9 = local_a4[4];
              }
              if (bVar35 && cVar9 == 't') {
                cVar9 = local_a4[5];
                bVar35 = cVar9 == 'e';
                if (bVar35) {
                  cVar9 = local_a4[6];
                }
                if (bVar35 && cVar9 == 'm') {
                  cVar9 = local_a4[7];
                  uVar20 = 2;
LAB_0090c23c:
                  if (cVar9 != 'p') {
                    uVar20 = 5;
                  }
                  goto LAB_0090c3a8;
                }
              }
            }
          }
          break;
        case (char *)0x9:
          cVar9 = *local_a4;
          bVar35 = cVar9 == 'c';
          if (bVar35) {
            cVar9 = local_a4[1];
          }
          if (bVar35 && cVar9 == 'o') {
            cVar9 = local_a4[2];
            bVar35 = cVar9 == 'l';
            if (bVar35) {
              cVar9 = local_a4[3];
            }
            if (bVar35 && cVar9 == 'd') {
              cVar9 = local_a4[4];
              bVar35 = cVar9 == '_';
              if (bVar35) {
                cVar9 = local_a4[5];
              }
              if (bVar35 && cVar9 == 't') {
                cVar9 = local_a4[6];
                bVar35 = cVar9 == 'e';
                if (bVar35) {
                  cVar9 = local_a4[7];
                }
                if (bVar35 && cVar9 == 'm') {
                  cVar9 = local_a4[8];
                  uVar20 = 4;
                  goto LAB_0090c23c;
                }
              }
            }
          }
          break;
        case (char *)0xb:
          cVar9 = *local_a4;
          bVar35 = cVar9 == 't';
          if (bVar35) {
            cVar9 = local_a4[1];
          }
          if (bVar35 && cVar9 == 'a') {
            cVar9 = local_a4[2];
            bVar35 = cVar9 == 'r';
            if (bVar35) {
              cVar9 = local_a4[3];
            }
            if (bVar35 && cVar9 == 'g') {
              cVar9 = local_a4[4];
              bVar35 = cVar9 == 'e';
              if (bVar35) {
                cVar9 = local_a4[5];
              }
              if (bVar35 && cVar9 == 't') {
                cVar9 = local_a4[6];
                bVar35 = cVar9 == '_';
                if (bVar35) {
                  cVar9 = local_a4[7];
                }
                if (bVar35 && cVar9 == 't') {
                  cVar9 = local_a4[8];
                  bVar35 = cVar9 == 'e';
                  if (bVar35) {
                    cVar9 = local_a4[9];
                  }
                  if (bVar35 && cVar9 == 'm') {
                    cVar9 = local_a4[10];
                    uVar20 = 1;
                    goto LAB_0090c23c;
                  }
                }
              }
            }
          }
          break;
        case (char *)0xe:
          if (*local_a4 == 'd') {
            cVar9 = local_a4[1];
            bVar35 = cVar9 == 'a';
            if (bVar35) {
              cVar9 = local_a4[2];
            }
            if (bVar35 && cVar9 == 'n') {
              cVar9 = local_a4[3];
              bVar35 = cVar9 == 'g';
              if (bVar35) {
                cVar9 = local_a4[4];
              }
              if (bVar35 && cVar9 == 'e') {
                cVar9 = local_a4[5];
                bVar35 = cVar9 == 'r';
                if (bVar35) {
                  cVar9 = local_a4[6];
                }
                if (bVar35 && cVar9 == 'o') {
                  cVar9 = local_a4[7];
                  bVar35 = cVar9 == 'u';
                  if (bVar35) {
                    cVar9 = local_a4[8];
                  }
                  if (bVar35 && cVar9 == 's') {
                    cVar9 = local_a4[9];
                    bVar35 = cVar9 == '_';
                    if (bVar35) {
                      cVar9 = local_a4[10];
                    }
                    if (bVar35 && cVar9 == 't') {
                      cVar9 = local_a4[0xb];
                      bVar35 = cVar9 == 'e';
                      if (bVar35) {
                        cVar9 = local_a4[0xc];
                      }
                      if (bVar35 && cVar9 == 'm') {
                        cVar9 = local_a4[0xd];
                        uVar20 = 3;
                        goto LAB_0090c23c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar20 = 5;
LAB_0090c3a8:
        local_74 = CONCAT31(local_74._1_3_,uVar20);
        local_78 = (int *)&SUB_00000002;
      }
      FUN_008f7448(&local_a8);
LAB_0090c3bc:
      uVar10 = local_74 & 0xff;
      uVar20 = (undefined1)local_74;
      if (local_78 == (int *)&SUB_00000002) {
LAB_0090c3cc:
        piVar17 = local_100;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar10) {
        case 0:
          if (local_128 == 5) {
            local_100 = (int *)0x80000015;
            if (piVar17 == (int *)0x80000015) goto LAB_0090cd80;
            local_88 = piVar17;
            uVar18 = puVar12[1];
            uVar27 = puVar12[2];
            *puVar24 = *puVar12;
            puVar24[1] = uVar18;
            puVar24[2] = uVar27;
            FUN_009255ac(&local_78,&local_88);
            piVar17 = local_78;
            uVar20 = (undefined1)local_74;
            local_128 = local_74 & 0xff;
            if (local_78 == (int *)&SUB_00000002) goto LAB_0090bf00;
            local_ec = puVar15;
            local_e0 = iVar33;
            FUN_016dd1aa(&local_d8,(int)&local_74 + 1,0x2b);
            *(undefined1 *)(param_1 + 3) = uVar20;
            param_1[2] = (int)piVar17;
            FUN_016dd1aa((int)param_1 + 0xd,&local_d8,0x2b);
          }
          else {
            local_ec = puVar15;
            local_e0 = iVar33;
            FUN_009244cc(param_1 + 2,&DAT_005675d0,4);
          }
          break;
        case 1:
          if (local_130 == 2 && local_12c == 0) {
            local_100 = (int *)0x80000015;
            if (piVar17 == (int *)0x80000015) goto LAB_0090cd80;
            local_d8 = piVar17;
            uVar18 = puVar12[1];
            uVar27 = puVar12[2];
            *puVar11 = *puVar12;
            puVar11[1] = uVar18;
            puVar11[2] = uVar27;
            FUN_0093f4ec(&local_78,&local_d8);
            if (local_78 != (int *)&SUB_00000002) {
LAB_0090ca18:
              param_1[8] = local_60;
              param_1[9] = iStack_5c;
              param_1[10] = iStack_58;
              param_1[0xb] = iStack_54;
              param_1[0xc] = iStack_50;
              param_1[0xd] = iStack_4c;
              *param_1 = 2;
              param_1[2] = (int)local_78;
              *piVar22 = local_70;
              param_1[5] = local_6c;
              param_1[1] = 0;
              param_1[3] = local_74;
              *(ulonglong *)(param_1 + 6) = CONCAT44(iStack_64,local_68);
              local_ec = puVar15;
              local_e0 = iVar33;
              goto LAB_0090cc9c;
            }
            unaff_d8 = CONCAT44(iStack_64,local_68);
            local_130 = local_70;
            local_12c = local_6c;
            goto LAB_0090bf00;
          }
          local_ec = puVar15;
          local_e0 = iVar33;
          FUN_009244cc(param_1 + 2,"target_temp",0xb);
          break;
        case 2:
          if (local_134 == 2 && local_138 == 0) {
            local_100 = (int *)0x80000015;
            if (piVar17 == (int *)0x80000015) goto LAB_0090cd80;
            local_d8 = piVar17;
            uVar18 = puVar12[1];
            uVar27 = puVar12[2];
            *puVar11 = *puVar12;
            puVar11[1] = uVar18;
            puVar11[2] = uVar27;
            FUN_0093f4ec(&local_78,&local_d8);
            if (local_78 != (int *)&SUB_00000002) goto LAB_0090ca18;
            unaff_d10 = CONCAT44(iStack_64,local_68);
            local_134 = local_70;
            local_138 = local_6c;
            goto LAB_0090bf00;
          }
          local_ec = puVar15;
          local_e0 = iVar33;
          FUN_009244cc(param_1 + 2,&DAT_0056a8a8,8);
          break;
        case 3:
          if (local_144 == 2 && local_148 == 0) {
            local_100 = (int *)0x80000015;
            if (piVar17 == (int *)0x80000015) goto LAB_0090cd80;
            local_d8 = piVar17;
            uVar18 = puVar12[1];
            uVar27 = puVar12[2];
            *puVar11 = *puVar12;
            puVar11[1] = uVar18;
            puVar11[2] = uVar27;
            FUN_0093f4ec(&local_78,&local_d8);
            if (local_78 != (int *)&SUB_00000002) goto LAB_0090ca18;
            unaff_d11 = CONCAT44(iStack_64,local_68);
            local_144 = local_70;
            local_148 = local_6c;
            goto LAB_0090bf00;
          }
          local_ec = puVar15;
          local_e0 = iVar33;
          FUN_009244cc(param_1 + 2,"dangerous_temp",0xe);
          break;
        case 4:
          if (local_13c == 2 && local_140 == 0) {
            local_100 = (int *)0x80000015;
            if (piVar17 == (int *)0x80000015) goto LAB_0090cd80;
            local_d8 = piVar17;
            uVar18 = puVar12[1];
            uVar27 = puVar12[2];
            *puVar11 = *puVar12;
            puVar11[1] = uVar18;
            puVar11[2] = uVar27;
            FUN_0093f4ec(&local_78,&local_d8);
            if (local_78 != (int *)&SUB_00000002) goto LAB_0090ca18;
            unaff_d9 = CONCAT44(iStack_64,local_68);
            local_13c = local_70;
            local_140 = local_6c;
            goto LAB_0090bf00;
          }
          local_ec = puVar15;
          local_e0 = iVar33;
          FUN_009244cc(param_1 + 2,"cold_temp",9);
          break;
        case 5:
          local_100 = (int *)0x80000015;
          if (piVar17 == (int *)0x80000015) {
LAB_0090cd80:
            local_100 = (int *)0x80000015;
            local_ec = puVar15;
            local_e0 = iVar33;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements"
                         ,0x2c,&DAT_01887244);
          }
          local_78 = piVar17;
          uVar18 = puVar12[1];
          uVar27 = puVar12[2];
          *puVar23 = *puVar12;
          puVar23[1] = uVar18;
          puVar23[2] = uVar27;
          FUN_008f7448(&local_78);
LAB_0090bf00:
          iVar25 = iVar25 + 1;
          iVar8 = iVar33 + 1;
          puVar1 = puVar15;
          if (puVar15 == puVar28) goto LAB_0090c86c;
          goto LAB_0090bf24;
        }
        *param_1 = 2;
        param_1[1] = 0;
      }
      else {
LAB_0090c964:
        piVar22 = local_78;
        local_ec = puVar15;
        local_e0 = iVar33;
        FUN_016dd1aa((int)param_1 + 0xd,(int)&local_74 + 1,0x2b);
        *(undefined1 *)(param_1 + 3) = uVar20;
        *param_1 = 2;
        param_1[1] = 0;
        param_1[2] = (int)piVar22;
      }
LAB_0090cc9c:
      FUN_00927214(&local_f0);
      if (local_100 != (int *)0x80000015) {
        FUN_008f7448(&local_100);
      }
      goto LAB_0090ccbc;
    }
    local_130 = 2;
    uVar20 = 4;
    local_134 = 2;
    local_138 = 0;
    local_144 = 2;
    local_148 = 0;
    local_13c = 2;
    local_140 = 0;
    goto LAB_0090c8b8;
  }
  uVar10 = param_2[3];
  uVar19 = 0;
  piVar16 = (int *)param_2[1];
  piVar31 = (int *)param_2[2];
  piVar29 = piVar31 + uVar10 * 4;
  local_c8 = (int *)0x0;
  piVar17 = piVar16;
  local_d4 = piVar31;
  if (uVar10 != 0) {
    local_d4 = piVar31 + 4;
    piVar17 = (int *)*piVar31;
  }
  piVar14 = local_d4;
  piVar30 = piVar29;
  local_d8 = piVar31;
  local_d0 = piVar16;
  local_cc = piVar29;
  if (uVar10 != 0 && piVar17 != (int *)0x80000015) {
    local_84 = piVar31[1];
    local_80 = piVar31[2];
    local_7c = piVar31[3];
    local_c8 = (int *)&DAT_00000001;
    local_88 = piVar17;
    FUN_009255ac(&local_78,&local_88);
    piVar17 = local_78;
    uVar20 = (undefined1)local_74;
    if (local_78 != (int *)&SUB_00000002) {
      FUN_016dd1aa((int)param_1 + 0xd,(int)&local_74 + 1,0x2b);
      *(undefined1 *)(param_1 + 3) = uVar20;
      param_1[2] = (int)piVar17;
      goto LAB_0090be94;
    }
    uVar19 = 1;
    uVar18 = 1;
    if (piVar14 != piVar29) goto LAB_0090be60;
LAB_0090be74:
    FUN_00f3cf48(param_1 + 2,uVar18,&DAT_01867350,&DAT_018ab990);
    piVar14 = piVar30;
LAB_0090be94:
    *param_1 = 2;
    param_1[1] = 0;
    iVar25 = ((uint)((int)piVar29 - (int)piVar14) >> 4) + 1;
    while (iVar25 = iVar25 + -1, iVar25 != 0) {
      FUN_008f7448(piVar14);
      piVar14 = piVar14 + 4;
    }
    if (piVar16 != (int *)0x0) {
      thunk_FUN_016d3fb4(piVar31);
    }
    goto LAB_0090ccbc;
  }
  uVar18 = 1;
  uVar20 = 4;
  if (local_d4 == piVar29) goto LAB_0090be74;
LAB_0090be60:
  uVar18 = 1;
  piVar30 = piVar14 + 4;
  local_d4 = piVar30;
  if ((int *)*piVar14 == (int *)0x80000015) goto LAB_0090be74;
  local_84 = piVar14[1];
  local_80 = piVar14[2];
  local_7c = piVar14[3];
  local_c8 = (int *)(uVar19 + 1);
  local_88 = (int *)*piVar14;
  FUN_0093f4ec(&local_78,&local_88);
  iVar8 = local_6c;
  iVar25 = local_70;
  if (local_78 != (int *)&SUB_00000002) {
    uVar36 = CONCAT44(iStack_64,local_68);
    param_1[8] = local_60;
    param_1[9] = iStack_5c;
    param_1[10] = iStack_58;
    param_1[0xb] = iStack_54;
    param_1[0xc] = iStack_50;
    param_1[0xd] = iStack_4c;
    param_1[2] = (int)local_78;
LAB_0090c9dc:
    *piVar22 = local_70;
    param_1[5] = local_6c;
    param_1[3] = local_74;
    *(undefined8 *)(param_1 + 6) = uVar36;
    piVar14 = piVar30;
    goto LAB_0090be94;
  }
  uVar18 = 2;
  if (piVar30 == piVar29) {
LAB_0090cc48:
    piVar30 = piVar29;
    goto LAB_0090be74;
  }
  piVar17 = piVar14 + 8;
  uVar36 = CONCAT44(iStack_64,local_68);
  local_d4 = piVar17;
  if ((int *)piVar14[4] == (int *)0x80000015) {
    piVar30 = piVar17;
    goto LAB_0090be74;
  }
  local_84 = piVar14[5];
  local_80 = piVar14[6];
  local_7c = piVar14[7];
  local_c8 = (int *)(uVar19 | 2);
  local_88 = (int *)piVar14[4];
  FUN_0093f4ec(&local_78,&local_88);
  iVar6 = local_6c;
  iVar33 = local_70;
  if (local_78 != (int *)&SUB_00000002) {
    param_1[8] = local_60;
    param_1[9] = iStack_5c;
    param_1[10] = iStack_58;
    param_1[0xb] = iStack_54;
    param_1[0xc] = iStack_50;
    param_1[0xd] = iStack_4c;
    param_1[2] = (int)local_78;
    *piVar22 = local_70;
    param_1[5] = local_6c;
    param_1[3] = local_74;
    *(ulonglong *)(param_1 + 6) = CONCAT44(iStack_64,local_68);
    piVar14 = piVar17;
    goto LAB_0090be94;
  }
  uVar18 = 3;
  piVar30 = piVar29;
  if (piVar17 == piVar29) goto LAB_0090be74;
  piVar30 = piVar14 + 0xc;
  uVar2 = CONCAT44(iStack_64,local_68);
  local_d4 = piVar30;
  if ((int *)piVar14[8] == (int *)0x80000015) goto LAB_0090be74;
  local_c8 = (int *)(uVar19 + 3);
  local_84 = piVar14[9];
  local_80 = piVar14[10];
  local_7c = piVar14[0xb];
  local_88 = (int *)piVar14[8];
  FUN_0093f4ec(&local_78,&local_88);
  iVar7 = local_6c;
  iVar5 = local_70;
  if (local_78 != (int *)&SUB_00000002) {
    uVar36 = CONCAT44(iStack_64,local_68);
    param_1[8] = local_60;
    param_1[9] = iStack_5c;
    param_1[10] = iStack_58;
    param_1[0xb] = iStack_54;
    param_1[0xc] = iStack_50;
    param_1[0xd] = iStack_4c;
    param_1[2] = (int)local_78;
    goto LAB_0090c9dc;
  }
  uVar18 = 4;
  if (piVar30 == piVar29) goto LAB_0090cc48;
  piVar30 = piVar14 + 0x10;
  uVar3 = CONCAT44(iStack_64,local_68);
  local_d4 = piVar30;
  if ((int *)piVar14[0xc] == (int *)0x80000015) goto LAB_0090be74;
  local_84 = piVar14[0xd];
  piVar17 = (int *)(uVar19 | 4);
  local_80 = piVar14[0xe];
  local_7c = piVar14[0xf];
  local_c8 = piVar17;
  local_88 = (int *)piVar14[0xc];
  FUN_0093f4ec(&local_78,&local_88);
  if (local_78 != (int *)&SUB_00000002) {
    param_1[8] = local_60;
    param_1[9] = iStack_5c;
    param_1[10] = iStack_58;
    param_1[0xb] = iStack_54;
    param_1[0xc] = iStack_50;
    param_1[0xd] = iStack_4c;
    param_1[2] = (int)local_78;
    *piVar22 = local_70;
    param_1[5] = local_6c;
    param_1[3] = local_74;
    *(ulonglong *)(param_1 + 6) = CONCAT44(iStack_64,local_68);
    piVar14 = piVar30;
    goto LAB_0090be94;
  }
  *param_1 = iVar25;
  param_1[1] = iVar8;
  param_1[0xc] = local_70;
  param_1[0xd] = local_6c;
  *piVar22 = iVar33;
  param_1[8] = iVar5;
  param_1[5] = iVar6;
  param_1[9] = iVar7;
  *(undefined8 *)(param_1 + 2) = uVar36;
  *(undefined8 *)(param_1 + 6) = uVar2;
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined1 *)(param_1 + 0x10) = uVar20;
  *(ulonglong *)(param_1 + 0xe) = CONCAT44(iStack_64,local_68);
  FUN_00927184(&local_d8);
  if (piVar29 == piVar30) goto LAB_0090ccbc;
  local_88 = piVar17;
  FUN_00f3cf48(&local_78,(undefined1 *)((int)piVar17 + ((uint)((int)piVar29 - (int)piVar30) >> 4)),
               &local_88,&DAT_01887234);
  goto LAB_0090c930;
LAB_0090c86c:
  iVar25 = iVar33;
LAB_0090c870:
  uVar20 = (undefined1)local_128;
  local_ec = puVar15;
  local_e0 = iVar25;
  if (local_128 == 5) {
    uVar20 = 4;
  }
LAB_0090c8b8:
  *(undefined8 *)(param_1 + 2) = unaff_d8;
  *(undefined8 *)(param_1 + 6) = unaff_d10;
  *(undefined8 *)(param_1 + 10) = unaff_d11;
  if (local_130 == 2 && local_12c == 0) {
    local_130 = 0;
    local_12c = 0;
  }
  *param_1 = local_130;
  param_1[1] = local_12c;
  *(undefined1 *)(param_1 + 0x10) = uVar20;
  if (local_134 == 2 && local_138 == 0) {
    local_134 = 0;
    local_138 = 0;
  }
  *piVar22 = local_134;
  param_1[5] = local_138;
  *(undefined8 *)(param_1 + 0xe) = unaff_d9;
  if (local_144 == 2 && local_148 == 0) {
    local_144 = 0;
    local_148 = 0;
  }
  param_1[8] = local_144;
  param_1[9] = local_148;
  if (local_13c == 2 && local_140 == 0) {
    local_13c = 0;
    local_140 = 0;
  }
  param_1[0xc] = local_13c;
  param_1[0xd] = local_140;
  FUN_008f78f0(&local_78,&local_100);
LAB_0090c930:
  if (local_78 != (int *)&SUB_00000002) {
    param_1[2] = (int)local_78;
    param_1[3] = local_74;
    param_1[4] = local_70;
    param_1[5] = local_6c;
    param_1[6] = local_68;
    param_1[7] = iStack_64;
    param_1[8] = local_60;
    param_1[9] = iStack_5c;
    param_1[10] = iStack_58;
    param_1[0xb] = iStack_54;
    param_1[0xc] = iStack_50;
    param_1[0xd] = iStack_4c;
    *param_1 = 2;
    param_1[1] = 0;
  }
LAB_0090ccbc:
  if ((0x7fffffff < uVar32) && ((uVar32 & 0xfffffffe) != 0x80000014)) {
    FUN_008f7448(param_2);
  }
  return;
}

