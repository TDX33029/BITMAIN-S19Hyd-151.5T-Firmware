// FUN_013dbe8c @ 013dbe8c size=4168 calls_out=15 calls_in=1
// strings: 

void FUN_013dbe8c(undefined4 *param_1,int *param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 extraout_r3;
  undefined1 extraout_r3_00;
  undefined1 uVar19;
  char *pcVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  int *piVar25;
  undefined1 *puVar26;
  int *unaff_r7;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  undefined *local_ac;
  int local_84;
  int local_80;
  uint local_7c;
  int local_6c;
  uint local_68;
  int *local_64;
  int *local_60;
  undefined4 local_5c;
  int *local_58;
  int *piStack_54;
  int *local_50;
  int *local_4c;
  int *local_44;
  int local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  
  iVar7 = FUN_013d2518(param_2);
  if ((iVar7 != 0x70) && (iVar7 = FUN_013d2518(param_2), iVar7 != 0x50)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_003cee57,0x3a,&DAT_01894d78);
  }
  iVar7 = *param_2;
  if (*(int *)(iVar7 + 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01894d68);
  }
  *(undefined4 *)(iVar7 + 0x4c) = 0;
  *(undefined4 *)(iVar7 + 0x40) = 0xffffffff;
  iVar8 = FUN_013d2518(param_2);
  iVar9 = FUN_013d2d20(param_2);
  if (iVar9 == 0) {
    piVar27 = (int *)param_2[2];
LAB_013dc0e4:
    iVar8 = param_2[1];
    local_68 = *(uint *)(iVar7 + 0x50);
    local_64 = *(int **)(iVar7 + 0x54);
    local_60 = *(int **)(iVar7 + 0x58);
    local_5c = local_68;
    local_58 = local_64;
    piStack_54 = local_60;
    if ((int)piVar27 < 0) {
LAB_013dc108:
      piVar29 = (int *)0x0;
LAB_013dc10c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(piVar29,piVar27);
    }
    if (piVar27 == (int *)0x0) {
      piVar28 = (int *)0x0;
      iVar9 = 1;
    }
    else {
      iVar9 = thunk_FUN_016d4a50(piVar27);
      if (iVar9 == 0) {
LAB_013dcdb8:
        piVar29 = (int *)&DAT_00000001;
        goto LAB_013dc10c;
      }
      piVar28 = piVar27;
    }
    FUN_016dd1aa(iVar9,iVar8,piVar27);
    param_1[10] = local_68;
    param_1[0xb] = local_64;
    param_1[0xc] = local_60;
    param_1[0xd] = local_5c;
    param_1[0xe] = local_58;
    param_1[0xf] = piStack_54;
    param_1[7] = piVar28;
    param_1[8] = iVar9;
    param_1[9] = piVar27;
  }
  else {
    FUN_013d2168(param_2);
    piVar28 = (int *)param_2[2];
    puVar10 = (uint *)(iVar7 + 0x50);
    piVar27 = (int *)*puVar10;
    if (piVar27 == piVar28) goto LAB_013dc0e4;
    iVar9 = FUN_013d2518(param_2);
    local_7c = *puVar10;
    if (iVar9 != 0x7b) {
      local_80 = *(int *)(iVar7 + 0x54);
      local_84 = *(int *)(iVar7 + 0x58);
      piVar29 = (int *)FUN_013d2518(param_2);
      if (piVar29 != (int *)&DAT_0000005c) {
        iVar9 = FUN_013d2d20(param_2);
        piVar25 = (int *)&DAT_80000000;
        uVar19 = extraout_r3;
        if (iVar9 != 0) {
          FUN_013d2168(param_2);
          uVar19 = extraout_r3_00;
        }
LAB_013dcd40:
        *(undefined1 *)(param_1 + 7) = uVar19;
        *param_1 = 0x22;
        param_1[1] = piVar25;
        param_1[2] = piVar29;
        param_1[8] = local_7c;
        uVar16 = *puVar10;
        uVar17 = *(undefined4 *)(iVar7 + 0x54);
        uVar18 = *(undefined4 *)(iVar7 + 0x58);
        param_1[9] = local_80;
        param_1[10] = local_84;
        param_1[0xb] = uVar16;
        param_1[0xc] = uVar17;
        param_1[0xd] = uVar18;
        param_1[3] = piVar27;
        param_1[4] = piVar28;
        param_1[5] = unaff_r7;
        param_1[6] = param_2;
        *(bool *)(param_1 + 0xe) = iVar8 == 0x50;
        goto LAB_013dc17c;
      }
      uVar24 = *puVar10;
      uVar11 = FUN_013d2518(param_2);
      uVar16 = 1;
      if (0x7f < uVar11) {
        uVar16 = 2;
      }
      if ((0x7ff < uVar11) && (uVar16 = 4, uVar11 < 0x10000)) {
        uVar16 = 3;
      }
      if (CARRY4(uVar16,uVar24)) {
        puVar15 = &DAT_01894f38;
        goto LAB_013dcdc8;
      }
      iVar8 = *(int *)(iVar7 + 0x58);
      if (iVar8 == -1) goto LAB_013dcdc0;
      iVar9 = *(int *)(iVar7 + 0x54);
      iVar13 = FUN_013d2518(param_2);
      local_68 = *puVar10;
      local_64 = *(int **)(iVar7 + 0x54);
      local_60 = *(int **)(iVar7 + 0x58);
      iVar8 = iVar8 + 1;
      iVar21 = param_2[1];
      if (iVar13 == 10) {
        iVar9 = iVar9 + 1;
        iVar8 = 1;
      }
      if (-1 < (int)piVar28) {
        if (piVar28 == (int *)0x0) {
          iVar13 = 1;
          piVar27 = (int *)0x0;
        }
        else {
          iVar13 = thunk_FUN_016d4a50(piVar28);
          if (iVar13 == 0) goto LAB_013dcdec;
          piVar27 = piVar28;
        }
        FUN_016dd1aa(iVar13,iVar21,piVar28);
        param_1[0xf] = iVar8;
        param_1[10] = local_68;
        param_1[0xb] = local_64;
        param_1[0xc] = local_60;
        param_1[0xd] = uVar16 + uVar24;
        param_1[7] = piVar27;
        param_1[8] = iVar13;
        param_1[9] = piVar28;
        param_1[0xe] = iVar9;
        *param_1 = 0x1f;
        goto LAB_013dc17c;
      }
      goto LAB_013dc108;
    }
    uVar11 = FUN_013d2518(param_2);
    uVar16 = 1;
    if (0x7f < uVar11) {
      uVar16 = 2;
    }
    if ((0x7ff < uVar11) && (uVar16 = 4, uVar11 < 0x10000)) {
      uVar16 = 3;
    }
    if (CARRY4(uVar16,local_7c)) {
      puVar15 = &DAT_01894f38;
      goto LAB_013dcdc8;
    }
    local_7c = uVar16 + local_7c;
    local_84 = *(int *)(iVar7 + 0x58);
    if (local_84 == -1) {
LAB_013dcdc0:
      puVar15 = &DAT_01894f28;
LAB_013dcdc8:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar15);
    }
    local_80 = *(int *)(iVar7 + 0x54);
    iVar9 = FUN_013d2518(param_2);
    piVar27 = (int *)0x3fffffe;
    local_84 = local_84 + 1;
    if (iVar9 == 10) {
      local_80 = local_80 + 1;
      local_84 = 1;
    }
    while (((iVar9 = FUN_013d2d20(param_2), iVar9 != 0 &&
            (FUN_013d2168(param_2), (int *)*puVar10 != piVar28)) &&
           (iVar9 = FUN_013d2518(param_2), iVar9 != 0x7d))) {
      uVar11 = FUN_013d2518(param_2);
      iVar9 = *(int *)(iVar7 + 0x4c);
      uVar16 = 1;
      if (0x7f < uVar11) {
        uVar16 = 2;
      }
      if ((0x7ff < uVar11) && (uVar16 = 4, uVar11 < 0x10000)) {
        uVar16 = 3;
      }
      if ((uint)(*(int *)(iVar7 + 0x44) - iVar9) < uVar16) {
        FUN_01401968((int *)(iVar7 + 0x44),iVar9,uVar16,1,1);
        pbVar12 = (byte *)(*(int *)(iVar7 + 0x48) + *(int *)(iVar7 + 0x4c));
        if (uVar11 < 0x80) goto LAB_013dbfa8;
LAB_013dc034:
        bVar4 = (byte)uVar11 & 0x3f | 0x80;
        bVar5 = (byte)(uVar11 >> 6);
        if (uVar11 < 0x800) {
          pbVar12[1] = bVar4;
          *pbVar12 = bVar5 | 0xc0;
        }
        else {
          bVar5 = bVar5 & 0x3f | 0x80;
          bVar6 = (byte)(uVar11 >> 0xc);
          if (uVar11 >> 0x10 == 0) {
            pbVar12[1] = bVar5;
            pbVar12[2] = bVar4;
            *pbVar12 = bVar6 | 0xe0;
          }
          else {
            pbVar12[3] = bVar4;
            pbVar12[2] = bVar5;
            pbVar12[1] = bVar6 & 0x3f | 0x80;
            *pbVar12 = (byte)(uVar11 >> 0x12) | 0xf0;
          }
        }
      }
      else {
        pbVar12 = (byte *)(*(int *)(iVar7 + 0x48) + iVar9);
        if (0x7f < uVar11) goto LAB_013dc034;
LAB_013dbfa8:
        *pbVar12 = (byte)uVar11;
      }
      *(uint *)(iVar7 + 0x4c) = uVar16 + iVar9;
    }
    if ((int *)*puVar10 != piVar28) {
      local_6c = FUN_013d2518(param_2);
      if (local_6c != 0x7d) {
        FUN_013ff7ac(&local_6c,&DAT_00567d18,&DAT_01894d58);
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xfdee,0x13dcef8);
        (*pcVar2)();
      }
      FUN_013d2d20(param_2);
      piVar23 = *(int **)(iVar7 + 0x48);
      piVar28 = *(int **)(iVar7 + 0x4c);
      FUN_00fb6cfc(&local_68,piVar23,piVar28,&DAT_003cee55,2);
      if (local_68 == 1) {
        puVar14 = (undefined1 *)((int)local_2c + -1);
        if (local_44 == (int *)0xffffffff) {
          piVar27 = (int *)((int)local_4c + (int)puVar14);
          if (piVar27 < local_34) {
            piVar29 = local_2c;
            if (local_2c < local_58) {
              piVar29 = local_58;
            }
            piVar25 = (int *)((int)local_58 + -1);
            local_ac = &DAT_018aeb20;
LAB_013dc5f0:
            do {
              uVar11 = *(byte *)(local_38 + (int)piVar27) & 0x3f;
              uVar16 = (uint)local_60 >> uVar11 | local_5c << (0x20 - uVar11 & 0xff);
              if (-1 < (int)(uVar11 - 0x20)) {
                uVar16 = local_5c >> (uVar11 - 0x20 & 0xff);
              }
              if ((uVar16 & 1) == 0) {
                piVar27 = local_2c;
                goto LAB_013dc5dc;
              }
              piVar27 = local_58;
              do {
                piVar22 = piVar27;
                if (piVar29 == piVar22) {
                  if (piVar25 < local_2c) {
                    piVar27 = (int *)((int)piVar25 + (int)local_4c);
                    pcVar20 = (char *)((int)local_30 + (int)piVar25);
                    piVar22 = local_58;
                    goto LAB_013dc68c;
                  }
                  piVar27 = local_4c;
                  if (local_58 == (int *)0x0) goto LAB_013dcc24;
                  local_ac = &DAT_018aeb10;
                  piVar27 = piVar25;
                  local_34 = local_2c;
                  goto LAB_013dce88;
                }
                if (local_34 <= (int *)((int)local_4c + (int)piVar22)) {
                  piVar27 = (int *)((int)local_4c + (int)local_58);
                  goto LAB_013dce3c;
                }
                piVar27 = (int *)((int)piVar22 + 1);
              } while (*(char *)((int)local_30 + (int)piVar22) ==
                       ((undefined1 *)(local_38 + (int)local_4c))[(int)piVar22]);
              local_4c = (int *)((int)piVar22 + (int)((int)local_4c + (1 - (int)local_58)));
              piVar27 = (int *)((int)local_4c + (int)puVar14);
            } while (piVar27 < local_34);
          }
        }
        else {
          piVar27 = (int *)((int)local_4c + (int)puVar14);
          if (piVar27 < local_34) {
            local_ac = &DAT_018aeb10;
LAB_013dc3f4:
            uVar11 = *(byte *)(local_38 + (int)piVar27) & 0x3f;
            uVar16 = (uint)local_60 >> uVar11 | local_5c << (0x20 - uVar11 & 0xff);
            if (-1 < (int)(uVar11 - 0x20)) {
              uVar16 = local_5c >> (uVar11 - 0x20 & 0xff);
            }
            if ((uVar16 & 1) == 0) {
              local_4c = (int *)((int)local_4c + (int)local_2c);
              local_44 = (int *)0x0;
            }
            else {
              piVar27 = local_58;
              if (local_58 < local_44) {
                piVar27 = local_44;
              }
              piVar29 = piVar27;
              piVar25 = local_2c;
              if (local_2c < piVar27) {
                piVar25 = piVar27;
              }
              do {
                piVar22 = piVar29;
                if (piVar25 == piVar22) {
                  piVar27 = local_58;
                  goto LAB_013dc48c;
                }
                if (local_34 <= (int *)((int)local_4c + (int)piVar22)) {
                  piVar27 = (int *)((int)piVar27 + (int)local_4c);
LAB_013dce3c:
                  local_ac = &DAT_018aeb30;
                  if (piVar27 < local_34) {
                    piVar27 = local_34;
                  }
                  goto LAB_013dce88;
                }
                piVar29 = (int *)((int)piVar22 + 1);
              } while (*(char *)((int)local_30 + (int)piVar22) ==
                       ((undefined1 *)(local_38 + (int)local_4c))[(int)piVar22]);
              local_4c = (int *)((int)piVar22 + (int)((int)local_4c + (1 - (int)local_58)));
              local_44 = (int *)0x0;
            }
            goto joined_r0x013dc3f0;
          }
        }
LAB_013dc6bc:
        param_2 = local_30;
LAB_013dc6c4:
        piVar29 = (int *)0x0;
        piVar27 = local_4c;
LAB_013dc6e0:
        do {
          piVar25 = (int *)((int)piVar28 - (int)piVar29);
          puVar14 = (undefined1 *)((int)piVar23 + (int)piVar29);
          if (&DAT_00000007 < piVar25) {
            param_2 = (int *)(((uint)(puVar14 + 3) & 0xfffffffc) - (int)puVar14);
            if (param_2 == (int *)0x0) {
              param_2 = (int *)0x0;
              goto LAB_013dc76c;
            }
            piVar22 = (int *)0x0;
            do {
              if (puVar14[(int)piVar22] == ':') goto LAB_013dc7e4;
              piVar22 = (int *)((int)piVar22 + 1);
            } while (param_2 != piVar22);
            for (; param_2 <= piVar25 + -2; param_2 = param_2 + 2) {
LAB_013dc76c:
              uVar16 = *(uint *)(puVar14 + (int)param_2);
              uVar11 = *(uint *)((int)(puVar14 + (int)param_2) + 4) ^ 0x3a3a3a3a;
              if (((0x1010100 - (uVar16 ^ 0x3a3a3a3a) | uVar16) & 0x80808080 &
                  (0x1010100 - uVar11 | uVar11)) != 0x80808080) break;
            }
            if (piVar25 == param_2) break;
            puVar26 = (undefined1 *)0x0;
            while (*(char *)((int)param_2 + (int)(puVar26 + (int)puVar14)) != ':') {
              puVar26 = puVar26 + 1;
              if ((undefined1 *)((int)piVar28 + (-(int)piVar29 - (int)param_2)) == puVar26)
              goto LAB_013dc8ac;
            }
            piVar22 = (int *)(puVar26 + (int)param_2);
          }
          else {
            if (piVar28 == piVar29) break;
            piVar22 = (int *)0x0;
            while (puVar14[(int)piVar22] != ':') {
              piVar22 = (int *)((int)piVar22 + 1);
              if (piVar25 == piVar22) goto LAB_013dc8ac;
            }
          }
LAB_013dc7e4:
          piVar27 = (int *)((int)piVar22 + (int)piVar29);
          piVar29 = (int *)((int)piVar27 + 1);
          if (piVar27 < piVar28) {
            if ((piVar28 < piVar29) || (*(char *)((int)piVar23 + (int)piVar27) == ':')) {
              if (*(char *)((int)piVar23 + (int)piVar27) == ':') {
                FUN_01401878(&local_68,piVar27,1,1);
                piVar29 = local_60;
                piVar25 = local_64;
                if (local_68 == 1) goto LAB_013dce20;
                FUN_016dd1aa(local_60,piVar23,piVar27);
                piVar22 = (int *)((int)piVar27 + 1);
                if ((piVar22 < piVar28) && (*(char *)((int)piVar23 + (int)piVar22) < -0x40)) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa8ac(piVar23,piVar28,piVar22,piVar28,&DAT_01894d38);
                }
                param_2 = (int *)((int)piVar28 - (int)piVar22);
                FUN_01401878(&local_68,param_2,1,1);
                if (local_68 == 1) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(local_64,local_60);
                }
                FUN_016dd1aa(local_60,(char *)((int)piVar23 + (int)piVar22),param_2);
                uVar19 = 1;
                unaff_r7 = local_60;
                piVar28 = local_64;
                goto LAB_013dcd40;
              }
              break;
            }
            goto LAB_013dc6e0;
          }
        } while (piVar29 <= piVar28);
LAB_013dc8ac:
        piVar29 = (int *)0x0;
LAB_013dc8b8:
        do {
          piVar25 = (int *)((int)piVar28 - (int)piVar29);
          unaff_r7 = (int *)((int)piVar23 + (int)piVar29);
          if (&DAT_00000007 < piVar25) {
            param_2 = (int *)(((uint)((int)unaff_r7 + 3) & 0xfffffffc) - (int)unaff_r7);
            if (param_2 == (int *)0x0) {
              param_2 = (int *)0x0;
              goto LAB_013dc944;
            }
            piVar22 = (int *)0x0;
            do {
              if (*(char *)((int)unaff_r7 + (int)piVar22) == '=') goto LAB_013dc9bc;
              piVar22 = (int *)((int)piVar22 + 1);
            } while (param_2 != piVar22);
            for (; param_2 <= piVar25 + -2; param_2 = param_2 + 2) {
LAB_013dc944:
              uVar11 = *(uint *)((int)unaff_r7 + (int)param_2);
              uVar16 = ((uint *)((int)unaff_r7 + (int)param_2))[1] ^ 0x3d3d3d3d;
              if (((0x1010100 - (uVar11 ^ 0x3d3d3d3d) | uVar11) & 0x80808080 &
                  (0x1010100 - uVar16 | uVar16)) != 0x80808080) break;
            }
            if (piVar25 == param_2) break;
            unaff_r7 = (int *)((int)unaff_r7 + (int)param_2);
            puVar14 = (undefined1 *)0x0;
            while (*(char *)((int)unaff_r7 + (int)puVar14) != '=') {
              puVar14 = puVar14 + 1;
              if ((undefined1 *)((int)piVar28 + (-(int)piVar29 - (int)param_2)) == puVar14)
              goto LAB_013dca84;
            }
            piVar22 = (int *)(puVar14 + (int)param_2);
          }
          else {
            if (piVar28 == piVar29) break;
            piVar22 = (int *)0x0;
            while (*(char *)((int)unaff_r7 + (int)piVar22) != '=') {
              piVar22 = (int *)((int)piVar22 + 1);
              if (piVar25 == piVar22) goto LAB_013dca84;
            }
          }
LAB_013dc9bc:
          piVar27 = (int *)((int)piVar22 + (int)piVar29);
          piVar29 = (int *)((int)piVar27 + 1);
          if (piVar27 < piVar28) {
            unaff_r7 = (int *)(uint)*(byte *)((int)piVar23 + (int)piVar27);
            if ((piVar28 < piVar29) || (unaff_r7 == (int *)&DAT_0000003d)) {
              if (unaff_r7 == (int *)&DAT_0000003d) {
                FUN_01401878(&local_68,piVar27,1,1);
                piVar29 = local_60;
                piVar25 = local_64;
                if (local_68 == 1) goto LAB_013dce20;
                FUN_016dd1aa(local_60,piVar23,piVar27);
                piVar22 = (int *)((int)piVar27 + 1);
                if ((piVar22 < piVar28) && (*(char *)((int)piVar23 + (int)piVar22) < -0x40)) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa8ac(piVar23,piVar28,piVar22,piVar28,&DAT_01894d48);
                }
                param_2 = (int *)((int)piVar28 - (int)piVar22);
                FUN_01401878(&local_68,param_2,1,1);
                if (local_68 == 1) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(local_64,local_60);
                }
                FUN_016dd1aa(local_60,(char *)((int)piVar23 + (int)piVar22),param_2);
                uVar19 = 0;
                unaff_r7 = local_60;
                piVar28 = local_64;
                goto LAB_013dcd40;
              }
              break;
            }
            goto LAB_013dc8b8;
          }
        } while (piVar29 <= piVar28);
LAB_013dca84:
        if (-1 < (int)piVar28) {
          if (piVar28 == (int *)0x0) {
            piVar27 = (int *)&DAT_00000001;
            piVar29 = (int *)0x0;
          }
          else {
            piVar27 = (int *)thunk_FUN_016d4a50(piVar28);
            if (piVar27 == (int *)0x0) {
              piVar29 = (int *)&DAT_00000001;
              piVar27 = piVar28;
              goto LAB_013dc10c;
            }
            param_2 = piVar28;
            piVar29 = piVar28;
          }
          FUN_016dd1aa(piVar27,piVar23,piVar28);
          piVar25 = (int *)0x80000001;
          uVar19 = 0;
          goto LAB_013dcd40;
        }
        goto LAB_013dc108;
      }
      local_30 = piVar23;
      local_4c = piVar27;
      if (local_5c._2_1_ != '\0') goto LAB_013dc6bc;
      if (local_64 != (int *)0x0) {
        piVar29 = local_64;
        if (local_64 < local_34) {
          if (*(char *)(local_38 + (int)local_64) < -0x40) goto LAB_013dce94;
        }
        else if (local_64 != local_34) goto LAB_013dce94;
      }
      piVar27 = local_64;
      if (local_64 == local_34) {
        param_2 = piVar23;
        local_4c = local_64;
        if ((local_5c & 1) != 0) goto LAB_013dcc24;
        goto LAB_013dc6c4;
      }
      pbVar12 = (byte *)(local_38 + (int)local_64);
      uVar16 = (uint)*pbVar12;
      if (0x7fffffff < (uint)(int)(char)*pbVar12) {
        if (uVar16 < 0xe0) {
          uVar16 = pbVar12[1] & 0x3f | (uVar16 & 0x1f) << 6;
        }
        else {
          uVar11 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
          if (uVar16 < 0xf0) {
            uVar16 = uVar11 | (uVar16 & 0x1f) << 0xc;
          }
          else {
            uVar16 = pbVar12[3] & 0x3f | uVar11 << 6 | (uVar16 & 7) << 0x12;
          }
        }
      }
      if ((local_5c & 1) == 0) {
        iVar9 = 1;
        if (0x7f < uVar16) {
          iVar9 = 2;
        }
        if ((0x7ff < uVar16) && (iVar9 = 4, uVar16 < 0x10000)) {
          iVar9 = 3;
        }
        piVar29 = (int *)(iVar9 + (int)local_64);
        if (piVar29 != (int *)0x0) {
          if (piVar29 < local_34) {
            if (*(char *)(local_38 + (int)piVar29) < -0x40) goto LAB_013dce94;
          }
          else if (piVar29 != local_34) {
LAB_013dce94:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(local_38,local_34,piVar29,local_34,&DAT_018aeb58);
          }
        }
        do {
          piVar27 = local_34;
        } while ((piVar29 == local_34) ||
                (piVar27 = piVar29, -1 < *(char *)(local_38 + (int)piVar29)));
      }
LAB_013dcc24:
      if (piVar27 == (int *)0x0) {
        piVar25 = (int *)0x0;
        piVar29 = (int *)&DAT_00000001;
LAB_013dcc98:
        FUN_016dd1aa(piVar29,piVar23,piVar27);
        piVar22 = (int *)((int)piVar27 + 2);
        if (piVar22 < piVar28) {
          if (*(char *)((int)piVar23 + (int)piVar22) < -0x40) goto LAB_013dccc8;
        }
        else if (piVar28 != piVar22) {
LAB_013dccc8:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(piVar23,piVar28,piVar22,piVar28,&DAT_01894d28);
        }
        param_2 = (int *)((int)piVar28 - (int)piVar22);
        if ((int)param_2 < 0) {
          uVar17 = 0;
LAB_013dccf8:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar17,param_2);
        }
        if (param_2 == (int *)0x0) {
          piVar28 = (int *)0x0;
          unaff_r7 = (int *)&DAT_00000001;
        }
        else {
          unaff_r7 = (int *)thunk_FUN_016d4a50(param_2);
          if (unaff_r7 == (int *)0x0) {
            uVar17 = 1;
            goto LAB_013dccf8;
          }
          piVar28 = param_2;
        }
        FUN_016dd1aa(unaff_r7,(char *)((int)piVar23 + (int)piVar22),param_2);
        uVar19 = 2;
        goto LAB_013dcd40;
      }
      if (piVar27 < piVar28) {
        if (*(char *)((int)piVar23 + (int)piVar27) < -0x40) goto LAB_013dcc44;
      }
      else if (piVar27 != piVar28) {
LAB_013dcc44:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(piVar23,piVar28,0,piVar27,&DAT_01894d18);
      }
      if ((int)piVar27 < 0) goto LAB_013dc108;
      piVar29 = (int *)thunk_FUN_016d4a50(piVar27);
      if (piVar29 != (int *)0x0) {
        piVar25 = piVar27;
        goto LAB_013dcc98;
      }
      goto LAB_013dcdb8;
    }
    local_68 = *puVar10;
    local_64 = *(int **)(iVar7 + 0x54);
    local_60 = *(int **)(iVar7 + 0x58);
    iVar8 = param_2[1];
    local_5c = local_68;
    local_58 = local_64;
    piStack_54 = local_60;
    if ((int)piVar28 < 0) goto LAB_013dc108;
    if (piVar28 == (int *)0x0) {
      iVar9 = 1;
      piVar27 = (int *)0x0;
    }
    else {
      iVar9 = thunk_FUN_016d4a50(piVar28);
      if (iVar9 == 0) {
LAB_013dcdec:
        piVar29 = (int *)&DAT_00000001;
        piVar27 = piVar28;
        goto LAB_013dc10c;
      }
      piVar27 = piVar28;
    }
    FUN_016dd1aa(iVar9,iVar8,piVar28);
    param_1[10] = local_68;
    param_1[0xb] = local_64;
    param_1[0xc] = local_60;
    param_1[0xd] = local_5c;
    param_1[0xe] = local_58;
    param_1[0xf] = piStack_54;
    param_1[7] = piVar27;
    param_1[8] = iVar9;
    param_1[9] = piVar28;
  }
  *param_1 = 10;
LAB_013dc17c:
  *(int *)(iVar7 + 0x40) = *(int *)(iVar7 + 0x40) + 1;
  return;
  while( true ) {
    if (local_34 <= piVar27) {
      goto LAB_013dce88;
    }
    pcVar1 = (char *)(local_38 + (int)piVar27);
    piVar22 = (int *)((int)piVar22 + -1);
    cVar3 = *pcVar20;
    piVar27 = (int *)((int)piVar27 + -1);
    pcVar20 = pcVar20 + -1;
    if (cVar3 != *pcVar1) break;
LAB_013dc68c:
    if (piVar22 == (int *)0x0) goto LAB_013dcab4;
  }
  piVar27 = local_50;
LAB_013dc5dc:
  local_4c = (int *)((int)local_4c + (int)piVar27);
  piVar27 = (int *)((int)local_4c + (int)puVar14);
  if (local_34 <= piVar27) goto LAB_013dc6bc;
  goto LAB_013dc5f0;
LAB_013dc48c:
  do {
    if (piVar27 <= local_44) goto LAB_013dcab4;
    piVar27 = (int *)((int)piVar27 + -1);
    if (local_2c <= piVar27) {
      local_34 = local_2c;
LAB_013dce88:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(piVar27,local_34,local_ac);
    }
    piVar29 = (int *)((int)piVar27 + (int)local_4c);
    if (local_34 <= piVar29) {
      local_ac = &DAT_018aeb20;
      piVar27 = piVar29;
      goto LAB_013dce88;
    }
  } while (*(char *)((int)local_30 + (int)piVar27) == *(char *)(local_38 + (int)piVar29));
  local_4c = (int *)((int)local_4c + (int)local_50);
  local_44 = (int *)((int)local_2c - (int)local_50);
joined_r0x013dc3f0:
  piVar27 = (int *)((int)local_4c + (int)puVar14);
  if (local_34 <= piVar27) goto LAB_013dc6bc;
  goto LAB_013dc3f4;
LAB_013dcab4:
  piVar27 = local_4c;
  goto LAB_013dcc24;
LAB_013dce20:
  piVar29 = local_64;
  piVar27 = local_60;
  goto LAB_013dc10c;
}

