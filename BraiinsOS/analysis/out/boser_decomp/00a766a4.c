// FUN_00a766a4 @ 00a766a4 size=3232 calls_out=25 calls_in=0
// strings: switchpool | Bosminer.client_move_to | BUG: invalid parameter for pool id | internal error: entered unreachable code | BUG: invalid number of pool ids parameters

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a766a4(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int extraout_r1;
  byte *pbVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  char *pcVar18;
  undefined4 uVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined4 *local_1054;
  undefined4 *local_104c;
  undefined4 *local_1044;
  int local_103c;
  int local_1038;
  int local_1034;
  int local_1030;
  int local_102c;
  int local_1028;
  int local_1024;
  undefined4 local_1020 [4];
  int local_1010;
  int iStack_100c;
  int iStack_1008;
  int local_1000;
  int iStack_ffc;
  int iStack_ff8;
  int local_ff0;
  int local_fec;
  int local_fe8;
  int local_fe4;
  int local_fe0;
  int local_fdc;
  int local_fd8;
  undefined4 local_fd4;
  undefined1 auStack_fd0 [376];
  undefined4 local_e58;
  undefined4 local_e54;
  int local_e4c;
  int local_e48;
  int local_e44;
  int local_e40;
  undefined4 local_e3c;
  int local_e34;
  undefined4 local_e30;
  int local_e28;
  undefined4 local_e24;
  undefined1 auStack_e18 [440];
  undefined4 local_c60;
  undefined4 local_c5c;
  int local_c58;
  undefined4 local_c50;
  undefined4 local_c4c;
  undefined4 local_c48;
  int local_c40;
  int iStack_c3c;
  int iStack_c38;
  int iStack_c34;
  int iStack_c30;
  int iStack_c2c;
  int local_c28;
  int iStack_c24;
  int iStack_c20;
  undefined4 uStack_c1c;
  undefined4 uStack_c18;
  undefined4 uStack_c14;
  undefined1 auStack_c10 [440];
  undefined1 auStack_a58 [440];
  int local_8a0;
  int local_89c;
  int local_898;
  int local_894;
  int local_890;
  int local_88c;
  int local_888;
  int local_884;
  int local_880;
  undefined4 local_87c;
  undefined1 auStack_878 [440];
  undefined1 auStack_6c0 [256];
  int local_5c0;
  int local_5bc;
  int local_5b8;
  int local_5b4;
  int local_5b0;
  int local_5ac;
  int local_5a8;
  int local_5a4;
  int local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined1 auStack_3e0 [256];
  undefined1 auStack_2e0 [256];
  undefined1 auStack_1e0 [444];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 10)) {
  case 0:
    uVar5 = *param_2;
    pcVar18 = (char *)param_2[1];
    piVar6 = &local_5c0;
    FUN_00a5cd54(piVar6,uVar5,"switchpool",10);
    if (local_5c0 == 2) {
      if (pcVar18 == (char *)0x0) goto LAB_00a772d8;
      uVar21 = FUN_014a8df0(pcVar18);
      iVar7 = (int)((ulonglong)uVar21 >> 0x20);
      if ((int)uVar21 != 0) {
        uVar19 = 0;
LAB_00a76750:
        param_2[0xb] = uVar5;
        *(undefined1 *)(param_2 + 0x3d) = 0;
        param_2[2] = uVar19;
        param_2[3] = piVar6;
        param_2[4] = iVar7;
        param_2[5] = uVar19;
        param_2[6] = pcVar18;
        goto switchD_00a766e4_caseD_3;
      }
      if (*pcVar18 != '\x03') {
LAB_00a772d8:
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("BUG: invalid parameter for pool id",0x45,&DAT_01c0eed0);
      }
      iVar15 = *(int *)(pcVar18 + 8);
      iVar16 = *(int *)(pcVar18 + 0xc);
      iVar7 = FUN_014afb6c(iVar15,iVar16);
      if (iVar7 == 0) goto LAB_00a772d8;
      local_598 = 4;
      local_59c = CONCAT22(local_59c._2_2_,1);
      local_5a8 = CONCAT31(local_5a8._1_3_,1);
      local_5a4 = 0;
      local_5ac = 0x2c;
      local_5b4 = 0;
      local_5c0 = 0x2c;
      local_5bc = iVar15;
      local_5b8 = iVar16;
      local_5b0 = iVar16;
      local_5a0 = iVar16;
      FUN_00b225c4(&local_8a0,&local_5c0);
      local_ff0 = local_898;
      if (local_898 != 4) {
                    /* WARNING: Subroutine does not return */
        FUN_01304210(0,&local_ff0,&DAT_0056e8c0,"BUG: invalid number of pool ids parameters",0x55,
                     &DAT_01c0eec0);
      }
      uVar17 = *(uint *)(local_89c + 0xc);
      if (uVar17 != 0) {
        pbVar12 = *(byte **)(local_89c + 8);
        if (uVar17 == 1) {
          bVar13 = *pbVar12;
          if (bVar13 == 0x2b || bVar13 == 0x2d) goto LAB_00a77184;
        }
        else {
          bVar13 = *pbVar12;
        }
        if (bVar13 == 0x2d) {
          iVar7 = uVar17 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar17 < 9) {
            if (iVar7 == 0) goto LAB_00a76fd4;
            piVar6 = (int *)0x0;
            do {
              bVar13 = *pbVar12;
              if (9 < bVar13 - 0x30) goto LAB_00a77184;
              pbVar12 = pbVar12 + 1;
              iVar7 = iVar7 + -1;
              piVar6 = (int *)((int)piVar6 * 10 - (bVar13 - 0x30));
            } while (iVar7 != 0);
          }
          else {
            piVar6 = (int *)0x0;
            do {
              iVar15 = (int)((longlong)(int)piVar6 * 10);
              if ((((int)((ulonglong)((longlong)(int)piVar6 * 10) >> 0x20) != iVar15 >> 0x1f) ||
                  (uVar17 = *pbVar12 - 0x30, 9 < uVar17)) ||
                 (piVar6 = (int *)(iVar15 - uVar17), SBORROW4(iVar15,uVar17))) goto LAB_00a77184;
              iVar7 = iVar7 + -1;
              pbVar12 = pbVar12 + 1;
            } while (iVar7 != 0);
          }
        }
        else {
          if (bVar13 == 0x2b) {
            uVar17 = uVar17 - 1;
            pbVar12 = pbVar12 + 1;
          }
          if (uVar17 < 8) {
            if (uVar17 == 0) {
LAB_00a76fd4:
              piVar6 = (int *)0x0;
            }
            else {
              piVar6 = (int *)0x0;
              do {
                bVar13 = *pbVar12;
                if (9 < bVar13 - 0x30) goto LAB_00a77184;
                pbVar12 = pbVar12 + 1;
                uVar17 = uVar17 - 1;
                piVar6 = (int *)((bVar13 - 0x30) + (int)piVar6 * 10);
              } while (uVar17 != 0);
            }
          }
          else {
            piVar6 = (int *)0x0;
            do {
              iVar7 = (int)((longlong)(int)piVar6 * 10);
              if ((((int)((ulonglong)((longlong)(int)piVar6 * 10) >> 0x20) != iVar7 >> 0x1f) ||
                  (uVar14 = *pbVar12 - 0x30, 9 < uVar14)) ||
                 (piVar6 = (int *)(iVar7 + uVar14), SCARRY4(iVar7,uVar14))) goto LAB_00a77184;
              uVar17 = uVar17 - 1;
              pbVar12 = pbVar12 + 1;
            } while (uVar17 != 0);
          }
        }
        uVar17 = *(uint *)(local_89c + 0x14);
        if (uVar17 != 0) {
          pbVar12 = *(byte **)(local_89c + 0x10);
          if (uVar17 == 1) {
            bVar13 = *pbVar12;
            if ((bVar13 == 0x2b) || (bVar13 == 0x2d)) goto LAB_00a77184;
          }
          else {
            bVar13 = *pbVar12;
          }
          if (bVar13 == 0x2d) {
            iVar15 = uVar17 - 1;
            pbVar12 = pbVar12 + 1;
            if (uVar17 < 9) {
              if (iVar15 == 0) goto LAB_00a77118;
              iVar7 = 0;
              do {
                bVar13 = *pbVar12;
                if (9 < bVar13 - 0x30) goto LAB_00a77184;
                pbVar12 = pbVar12 + 1;
                iVar15 = iVar15 + -1;
                iVar7 = iVar7 * 10 - (bVar13 - 0x30);
              } while (iVar15 != 0);
            }
            else {
              iVar7 = 0;
              do {
                iVar16 = (int)((longlong)iVar7 * 10);
                if ((((int)((ulonglong)((longlong)iVar7 * 10) >> 0x20) != iVar16 >> 0x1f) ||
                    (uVar17 = *pbVar12 - 0x30, 9 < uVar17)) ||
                   (iVar7 = iVar16 - uVar17, SBORROW4(iVar16,uVar17))) goto LAB_00a77184;
                iVar15 = iVar15 + -1;
                pbVar12 = pbVar12 + 1;
              } while (iVar15 != 0);
            }
          }
          else {
            if (bVar13 == 0x2b) {
              uVar17 = uVar17 - 1;
              pbVar12 = pbVar12 + 1;
            }
            if (uVar17 < 8) {
              if (uVar17 == 0) {
LAB_00a77118:
                iVar7 = 0;
              }
              else {
                iVar7 = 0;
                do {
                  bVar13 = *pbVar12;
                  if (9 < bVar13 - 0x30) goto LAB_00a77184;
                  pbVar12 = pbVar12 + 1;
                  uVar17 = uVar17 - 1;
                  iVar7 = (bVar13 - 0x30) + iVar7 * 10;
                } while (uVar17 != 0);
              }
            }
            else {
              iVar7 = 0;
              do {
                iVar15 = (int)((longlong)iVar7 * 10);
                if ((((int)((ulonglong)((longlong)iVar7 * 10) >> 0x20) != iVar15 >> 0x1f) ||
                    (uVar14 = *pbVar12 - 0x30, 9 < uVar14)) ||
                   (iVar7 = iVar15 + uVar14, SCARRY4(iVar15,uVar14))) goto LAB_00a77184;
                uVar17 = uVar17 - 1;
                pbVar12 = pbVar12 + 1;
              } while (uVar17 != 0);
            }
          }
          uVar17 = *(uint *)(local_89c + 0x1c);
          if (uVar17 != 0) {
            pbVar12 = *(byte **)(local_89c + 0x18);
            if (uVar17 == 1) {
              bVar13 = *pbVar12;
              if ((bVar13 == 0x2b) || (bVar13 == 0x2d)) goto LAB_00a77184;
            }
            else {
              bVar13 = *pbVar12;
            }
            if (bVar13 == 0x2d) {
              iVar15 = uVar17 - 1;
              pbVar12 = pbVar12 + 1;
              if (uVar17 < 9) {
                if (iVar15 == 0) goto LAB_00a77280;
                pcVar18 = (char *)0x0;
                do {
                  bVar13 = *pbVar12;
                  if (9 < bVar13 - 0x30) goto LAB_00a77184;
                  pbVar12 = pbVar12 + 1;
                  iVar15 = iVar15 + -1;
                  pcVar18 = (char *)((int)pcVar18 * 10 - (bVar13 - 0x30));
                } while (iVar15 != 0);
              }
              else {
                pcVar18 = (char *)0x0;
                do {
                  iVar16 = (int)((longlong)(int)pcVar18 * 10);
                  if ((((int)((ulonglong)((longlong)(int)pcVar18 * 10) >> 0x20) != iVar16 >> 0x1f)
                      || (uVar17 = *pbVar12 - 0x30, 9 < uVar17)) ||
                     (pcVar18 = (char *)(iVar16 - uVar17), SBORROW4(iVar16,uVar17)))
                  goto LAB_00a77184;
                  iVar15 = iVar15 + -1;
                  pbVar12 = pbVar12 + 1;
                } while (iVar15 != 0);
              }
            }
            else {
              if (bVar13 == 0x2b) {
                uVar17 = uVar17 - 1;
                pbVar12 = pbVar12 + 1;
              }
              if (uVar17 < 8) {
                if (uVar17 == 0) {
LAB_00a77280:
                  pcVar18 = (char *)0x0;
                }
                else {
                  pcVar18 = (char *)0x0;
                  do {
                    bVar13 = *pbVar12;
                    if (9 < bVar13 - 0x30) goto LAB_00a77184;
                    pbVar12 = pbVar12 + 1;
                    uVar17 = uVar17 - 1;
                    pcVar18 = (char *)((bVar13 - 0x30) + (int)pcVar18 * 10);
                  } while (uVar17 != 0);
                }
              }
              else {
                pcVar18 = (char *)0x0;
                do {
                  iVar15 = (int)((longlong)(int)pcVar18 * 10);
                  if ((((int)((ulonglong)((longlong)(int)pcVar18 * 10) >> 0x20) != iVar15 >> 0x1f)
                      || (uVar14 = *pbVar12 - 0x30, 9 < uVar14)) ||
                     (pcVar18 = (char *)(iVar15 + uVar14), SCARRY4(iVar15,uVar14)))
                  goto LAB_00a77184;
                  uVar17 = uVar17 - 1;
                  pbVar12 = pbVar12 + 1;
                } while (uVar17 != 0);
              }
            }
            FUN_0134aee0(local_8a0,local_89c,4,8);
            uVar19 = 1;
            goto LAB_00a76750;
          }
        }
      }
LAB_00a77184:
      FUN_0134aee0(local_8a0,local_89c,4,8);
      local_1020[0] = 0;
      FUN_014a5cd0(&local_1038,local_1020);
    }
    else {
      piVar6 = (int *)((uint)&local_1038 | 4);
      *piVar6 = local_5bc;
      piVar6[1] = local_5b8;
      piVar6[2] = local_5b4;
      piVar6[3] = local_5b0;
      piVar6[4] = local_5ac;
      local_1038 = local_5c0;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0f6ac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0f6ac);
  case 3:
switchD_00a766e4_caseD_3:
    FUN_00a6fd0c(&local_5c0,param_2 + 0xb,param_3);
    iVar16 = local_5ac;
    iVar15 = local_5b0;
    iVar7 = local_5c0;
    if (local_5c0 == 3) {
      uVar4 = 3;
      *param_1 = 3;
      goto LAB_00a76db0;
    }
    local_1010 = local_5bc;
    iStack_100c = local_5b8;
    iStack_1008 = local_5b4;
    cVar1 = *(char *)(param_2 + 0x3d);
    bVar20 = cVar1 == '\x03';
    if (bVar20) {
      cVar1 = *(char *)(param_2 + 0x3c);
    }
    if (bVar20 && cVar1 == '\x03') {
      FUN_00b99500(param_2 + 0xd);
    }
    if (iVar7 == 2) {
      param_2[7] = local_1010;
      param_2[8] = iStack_100c;
      param_2[9] = iStack_1008;
      *(undefined2 *)(param_2 + 0x175) = 0;
      param_2[0x174] = param_2 + 7;
      goto switchD_00a766e4_caseD_4;
    }
    piVar6 = (int *)((uint)&local_1038 | 4);
    *piVar6 = local_1010;
    piVar6[1] = iStack_100c;
    piVar6[2] = iStack_1008;
    local_1024 = iVar16;
    local_1028 = iVar15;
    local_1038 = iVar7;
    break;
  case 4:
switchD_00a766e4_caseD_4:
    FUN_00a70fd4(&local_5c0,param_2 + 0xc,param_3);
    iVar16 = local_5ac;
    iVar15 = local_5b0;
    iVar7 = local_5c0;
    if (local_5c0 == 3) {
      *param_1 = 3;
      uVar4 = 4;
      goto LAB_00a76db0;
    }
    local_1000 = local_5bc;
    iStack_ffc = local_5b8;
    iStack_ff8 = local_5b4;
    if (*(char *)(param_2 + 0x175) == '\x03') {
      FUN_00a7389c(param_2 + 0xc);
    }
    if (iVar7 == 2) {
      param_2[0xb] = local_1000;
      param_2[0xc] = iStack_ffc;
      param_2[0xd] = iStack_ff8;
      uVar17 = param_2[3];
      if (param_2[2] == 0) {
        uVar17 = 0;
      }
      if (uVar17 < (uint)param_2[0xd]) {
        uVar5 = *(undefined4 *)(param_2[0xc] + uVar17 * 0x28 + 0x24);
        *(undefined1 *)(param_2 + 0x17a) = 0;
        param_2[0xe] = uVar5;
        uVar5 = param_2[6];
        if (param_2[5] == 0) {
          uVar5 = 0;
        }
        local_1054 = param_2 + 7;
        uVar19 = param_2[4];
        param_2[0x176] = local_1054;
        param_2[0x177] = uVar17;
        param_2[0x178] = uVar19;
        param_2[0x179] = uVar5;
        goto LAB_00a76958;
      }
      local_c48 = 0xffffffff;
      local_c4c = param_2[4];
      local_c50 = 5;
      FUN_014a5cd0(&local_1038,&local_c50);
      goto LAB_00a76d90;
    }
    piVar6 = (int *)((uint)&local_1038 | 4);
    *piVar6 = local_1000;
    piVar6[1] = iStack_ffc;
    piVar6[2] = iStack_ff8;
    local_1024 = iVar16;
    local_1028 = iVar15;
    local_1038 = iVar7;
    goto LAB_00a76d98;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x17a)) {
    case 0:
      uVar17 = param_2[0x177];
      uVar19 = param_2[0x178];
      uVar5 = param_2[0x179];
      local_1054 = (undefined4 *)param_2[0x176];
LAB_00a76958:
      FUN_019cfcf0(&local_5c0);
      local_c40 = local_5c0;
      iStack_c3c = local_5bc;
      iStack_c38 = local_5b8;
      iStack_c34 = local_5b4;
      iStack_c30 = local_5b0;
      iStack_c2c = local_5ac;
      local_c28 = local_5a8;
      iStack_c24 = local_5a4;
      iStack_c20 = local_5a0;
      uStack_c1c = local_59c;
      uStack_c18 = local_598;
      uStack_c14 = uStack_594;
      param_2[0x26] = "Bosminer.client_move_to";
      param_2[0x27] = 0x17;
      param_2[0x18] = 0x80000011;
      param_2[0x19] = uVar17;
      param_2[0x1a] = uVar19;
      param_2[0x1b] = uVar5;
      param_2[0x28] = local_5c0;
      param_2[0x29] = local_5bc;
      param_2[0x2a] = local_5b8;
      param_2[0x2b] = local_5b4;
      param_2[0x2c] = local_5b0;
      param_2[0x2d] = local_5ac;
      param_2[0x2e] = local_5a8;
      param_2[0x2f] = local_5a4;
      param_2[0x30] = local_5a0;
      param_2[0x31] = local_59c;
      param_2[0x32] = local_598;
      param_2[0x33] = uStack_594;
      *(undefined1 *)(param_2 + 0x174) = 0;
      *(undefined1 *)((int)param_2 + 0xd7) = 0;
      param_2[0x34] = local_1054;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0f020);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0f020);
    }
    local_1044 = param_2 + 0x17a;
    local_104c = param_2 + 0x10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x174)) {
    case 0:
      FUN_01bed4e2(param_2 + 0xc2,local_104c,0x2c8);
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    }
    FUN_00a55b84(&local_5c0,param_2 + 0xc2,param_3);
    uVar5 = local_59c;
    iVar10 = local_5a0;
    iVar9 = local_5a4;
    iVar8 = local_5a8;
    iVar11 = local_5ac;
    iVar3 = local_5b0;
    iVar2 = local_5b4;
    iVar16 = local_5b8;
    iVar15 = local_5bc;
    iVar7 = local_5c0;
    if (local_5c0 == 0x1e && local_5bc == 0) {
      *(undefined1 *)(param_2 + 0x174) = 3;
LAB_00a76a4c:
      *(undefined1 *)local_1044 = 3;
      *param_1 = 3;
      uVar4 = 5;
      goto LAB_00a76db0;
    }
    local_103c = local_5ac;
    FUN_01bed4e2(auStack_1e0,&local_598,0x1b8);
    FUN_01bed4e2(auStack_2e0,auStack_3e0,0x100);
    FUN_00df9ef8(param_2 + 0xc2);
    if (iVar7 == 0x1d && iVar15 == 0) {
      *(undefined1 *)(param_2 + 0x174) = 1;
      iVar11 = iVar2;
      local_8a0 = iVar16;
      iVar8 = iVar3;
    }
    else {
      local_888 = iVar8;
      local_884 = iVar9;
      local_880 = iVar10;
      local_87c = uVar5;
      FUN_01bed4e2(auStack_878,auStack_1e0,0x1b8);
      FUN_01bed4e2(auStack_6c0,auStack_2e0,0x100);
      local_88c = iVar11;
      local_894 = iVar2;
      local_898 = iVar16;
      local_89c = iVar15;
      local_8a0 = iVar7;
      local_890 = iVar3;
      if (iVar7 != 0x15 || iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
      }
      FUN_01bed4e2(auStack_c10,auStack_1e0,0x1b8);
      *(undefined1 *)(param_2 + 0x174) = 1;
      if (iVar16 == 4 && iVar2 == 0) goto LAB_00a76a4c;
      FUN_01bed4e2(auStack_a58,auStack_c10,0x1b8);
      if (iVar16 != 3 || iVar2 != 0) {
        FUN_01bed4e2(auStack_e18,auStack_a58,0x1b8);
        *(undefined1 *)local_1044 = 1;
        if (iVar16 == 2 && iVar2 == 0) {
          iVar16 = param_2[0xe];
          iVar15 = iVar16;
          iVar7 = extraout_r1;
          if (-1 < iVar3) {
            iVar15 = iVar3;
            iVar7 = iVar11;
          }
          uVar5 = param_2[4];
          if (-1 < iVar3) {
            FUN_019bb7e0(iVar15,iVar7);
          }
          local_c60 = 5;
          local_c5c = uVar5;
          local_c58 = iVar16 + -1;
          FUN_014a5cd0(&local_1038,&local_c60);
        }
        else {
          FUN_01bed4e2(auStack_fd0,auStack_e18,0x1b8);
          local_fe4 = iVar11;
          local_1028 = param_2[4];
          local_1038 = 2;
          if (local_e4c == -0x80000000) {
            local_1034 = 0;
            local_102c = 0;
            local_e48 = 1;
          }
          else {
            local_1034 = local_e4c;
            local_102c = local_e44;
          }
          local_fe8 = iVar3;
          local_1030 = local_e48;
          local_ff0 = iVar16;
          local_fec = iVar2;
          local_fe0 = iVar8;
          local_fdc = iVar9;
          local_fd8 = iVar10;
          local_fd4 = uVar5;
          FUN_019bb7e0(local_e58,local_e54);
          if (local_e40 != -0x80000000) {
            FUN_019bb7e0(local_e40,local_e3c);
          }
          if (local_e34 != -0x80000000) {
            FUN_019bb7e0(local_e34,local_e30);
          }
          if (local_e28 != -0x80000000) {
            FUN_019bb7e0(local_e28,local_e24);
          }
          FUN_00b9c078(auStack_fd0);
        }
        goto LAB_00a76d90;
      }
      local_8a0 = iVar3;
      local_103c = iVar9;
    }
    *(undefined1 *)local_1044 = 1;
    local_894 = local_103c;
    local_89c = iVar11;
    local_898 = iVar8;
    FUN_00a98078(&local_5c0,1);
    FUN_00a55a24(&local_8a0);
    local_1024 = local_5ac;
    local_1028 = local_5b0;
    local_102c = local_5b4;
    local_1038 = local_5c0;
    local_1034 = local_5bc;
    local_1030 = local_5b8;
LAB_00a76d90:
    FUN_00a573e8(param_2 + 0xb);
LAB_00a76d98:
    FUN_0084ec48(param_2 + 7);
  }
  uVar4 = 1;
  *param_1 = local_1038;
  param_1[1] = local_1034;
  param_1[2] = local_1030;
  param_1[3] = local_102c;
  param_1[4] = local_1028;
  param_1[5] = local_1024;
LAB_00a76db0:
  *(undefined1 *)(param_2 + 10) = uVar4;
  return;
}

