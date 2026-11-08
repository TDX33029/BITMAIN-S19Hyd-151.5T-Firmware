// FUN_0119fb90 @ 0119fb90 size=2228 calls_out=9 calls_in=3
// strings: 

void FUN_0119fb90(undefined4 *param_1,char *param_2,int *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  undefined4 uVar14;
  int iVar15;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_a8;
  int *local_a4;
  int local_a0;
  int *local_9c;
  int local_98;
  int local_94;
  int *local_90;
  int local_8c;
  undefined1 *local_88;
  int *local_84;
  int iStack_80;
  undefined1 local_50;
  char *local_4c;
  int *local_38;
  undefined4 uStack_34;
  int *piStack_30;
  int iStack_2c;
  
  local_a4 = param_3;
  local_a0 = param_4;
  piStack_30 = param_3;
  iStack_2c = param_4;
  if (*param_2 == '\x04') {
    iVar15 = *(int *)(param_2 + 0xc);
    pcVar9 = *(char **)(param_2 + 8);
    local_9c = param_3;
    local_98 = param_4;
    if (iVar15 == 1) {
      if (*pcVar9 == '\x03') {
        iVar15 = *(int *)(pcVar9 + 0xc);
        if (iVar15 < 0) {
          uVar14 = 0;
LAB_0119fea4:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar14,iVar15);
        }
        uVar14 = *(undefined4 *)(pcVar9 + 8);
        if (iVar15 == 0) {
          iVar11 = 1;
          iVar5 = 0;
        }
        else {
          iVar11 = thunk_FUN_016d4a50(iVar15);
          if (iVar11 == 0) {
            uVar14 = 1;
            goto LAB_0119fea4;
          }
          iVar5 = iVar15;
        }
        FUN_016dd1aa(iVar11,uVar14,iVar15);
        local_a8 = iVar5;
        local_a4 = (int *)iVar11;
        local_a0 = iVar15;
        piVar4 = (int *)thunk_FUN_016d4a50(0x14);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x14);
        }
        puVar13 = &DAT_01889c88;
        *piVar4 = local_a8;
        piVar4[1] = (int)local_a4;
        piVar4[2] = local_a0;
        piVar4[3] = (int)local_9c;
        piVar4[4] = local_98;
        param_1[1] = piVar4;
LAB_011a0314:
        param_1[2] = puVar13;
        *param_1 = 1;
        return;
      }
      do {
        iVar15 = *param_3;
        bVar2 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar2);
      *param_3 = iVar15 + 1;
      if (-1 < iVar15) {
        DataMemoryBarrier(0xb);
        if (DAT_018da8bc != 0) {
          FUN_0120d52c();
        }
        do {
          iVar15 = *DAT_018da8b4;
          bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
        } while (!bVar2);
        *DAT_018da8b4 = iVar15 + 1;
        if (-1 < iVar15) {
          local_38 = DAT_018da8b4;
          uStack_34 = DAT_018da8b8;
          local_50 = 6;
          local_84 = (int *)CONCAT22(local_84._2_2_,0x4000);
          local_88 = &DAT_80000028;
          local_a8 = 1;
          local_4c = pcVar9;
          iVar15 = thunk_FUN_016d4a50(0x80);
          if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x80);
          }
          goto LAB_0119fd70;
        }
      }
    }
    else if (iVar15 == 2) {
      if (*pcVar9 == '\x03') {
        pcVar8 = pcVar9 + 0x18;
        if (pcVar9[0x18] == '\x03') {
          uVar14 = *(undefined4 *)(pcVar9 + 8);
          iVar11 = *(int *)(pcVar9 + 0xc);
          iVar5 = 1;
          iVar15 = 1;
          if ((iVar11 != 0) && (iVar15 = thunk_FUN_016d4a50(iVar11), iVar15 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar11);
          }
          FUN_016dd1aa(iVar15,uVar14,iVar11);
          uVar14 = *(undefined4 *)(pcVar9 + 0x20);
          local_9c = *(int **)(pcVar9 + 0x24);
          if ((local_9c != (int *)0x0) && (iVar5 = thunk_FUN_016d4a50(local_9c), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,local_9c);
          }
          FUN_016dd1aa(iVar5,uVar14,local_9c);
          local_a8 = iVar11;
          local_a4 = (int *)iVar15;
          local_a0 = iVar11;
          local_98 = iVar5;
          local_94 = (int)local_9c;
          local_90 = param_3;
          local_8c = param_4;
          piVar4 = (int *)thunk_FUN_016d4a50(0x20);
          if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x20);
          }
          *piVar4 = local_a8;
          piVar4[1] = (int)local_a4;
          piVar4[2] = local_a0;
          piVar4[3] = (int)local_9c;
          piVar4[4] = local_98;
          piVar4[5] = local_94;
          piVar4[6] = (int)local_90;
          piVar4[7] = local_8c;
          param_1[1] = piVar4;
          param_1[2] = &DAT_01889c48;
          *param_1 = 1;
          return;
        }
      }
      else {
        pcVar8 = pcVar9;
      }
      do {
        iVar15 = *param_3;
        bVar2 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar2);
      *param_3 = iVar15 + 1;
      if (-1 < iVar15) {
        DataMemoryBarrier(0xb);
        if (DAT_018da8bc != 0) {
          FUN_0120d52c();
        }
        do {
          iVar15 = *DAT_018da8b4;
          bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
        } while (!bVar2);
        *DAT_018da8b4 = iVar15 + 1;
        if (-1 < iVar15) {
          local_38 = DAT_018da8b4;
          uStack_34 = DAT_018da8b8;
          local_50 = 6;
          local_84 = (int *)CONCAT22(local_84._2_2_,0x4000);
          local_88 = &DAT_80000028;
          local_a8 = 1;
          local_4c = pcVar8;
          iVar15 = thunk_FUN_016d4a50(0x80);
          if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x80);
          }
LAB_0119fd70:
          FUN_016dd1aa(iVar15,&local_a8,0x80);
          param_1[1] = 0;
          param_1[2] = iVar15;
          *param_1 = 1;
          return;
        }
      }
    }
    else {
      if (iVar15 != 3) {
        if (iVar15 != 0) {
          iVar5 = thunk_FUN_016d4a50(iVar15 * 0xc);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(4,iVar15 * 0xc);
          }
          iVar12 = 0;
          iVar11 = 0;
          local_b0 = 0;
          local_b8 = iVar15;
          local_b4 = iVar5;
LAB_0119ffe0:
          iVar3 = local_b0;
          if (pcVar9[iVar11 * 2] == '\x03') goto code_r0x0119fff0;
          do {
            iVar15 = *param_3;
            bVar2 = (bool)hasExclusiveAccess(param_3);
          } while (!bVar2);
          *param_3 = iVar15 + 1;
          if (iVar15 < 0) goto LAB_011a0470;
          DataMemoryBarrier(0xb);
          if (DAT_018da8bc != 0) {
            FUN_0120d52c();
          }
          do {
            iVar15 = *DAT_018da8b4;
            bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
          } while (!bVar2);
          *DAT_018da8b4 = iVar15 + 1;
          if (iVar15 < 0) goto LAB_011a0470;
          local_38 = DAT_018da8b4;
          uStack_34 = DAT_018da8b8;
          local_50 = 6;
          local_84 = (int *)CONCAT22(local_84._2_2_,0x4000);
          local_88 = &DAT_80000028;
          local_a8 = 1;
          local_4c = pcVar9 + iVar12;
          puVar13 = (undefined *)thunk_FUN_016d4a50(0x80);
          if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x80);
          }
          FUN_016dd1aa(puVar13,&local_a8,0x80);
          iVar15 = local_b4;
          puVar10 = (undefined4 *)(local_b4 + 4);
          for (iVar5 = local_b0; iVar5 != 0; iVar5 = iVar5 + -1) {
            if (puVar10[-1] != 0) {
              thunk_FUN_016d3fb4(*puVar10);
            }
            puVar10 = puVar10 + 3;
          }
          piVar4 = (int *)0x0;
          if (local_b8 != 0) {
            thunk_FUN_016d3fb4(iVar15);
          }
          goto LAB_011a030c;
        }
        local_b0 = 0;
        local_b4 = 4;
        local_b8 = 0;
LAB_011a01bc:
        local_a8 = local_b8;
        local_a4 = (int *)local_b4;
        local_a0 = local_b0;
        piVar4 = (int *)thunk_FUN_016d4a50(0x14);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x14);
        }
        puVar13 = &DAT_01889c28;
        *piVar4 = local_a8;
        piVar4[1] = (int)local_a4;
        piVar4[2] = local_a0;
        piVar4[3] = (int)local_9c;
        piVar4[4] = local_98;
LAB_011a030c:
        param_1[1] = piVar4;
        goto LAB_011a0314;
      }
      if (*pcVar9 == '\x03') {
        pcVar8 = pcVar9 + 0x18;
        if ((pcVar9[0x18] == '\x03') && (pcVar8 = pcVar9 + 0x30, pcVar9[0x30] == '\x03')) {
          FUN_00602a1c(&local_d8,*(undefined4 *)(pcVar9 + 8),*(undefined4 *)(pcVar9 + 0xc));
          FUN_00602a1c(&local_c8,*(undefined4 *)(pcVar9 + 0x20),*(undefined4 *)(pcVar9 + 0x24));
          FUN_00602a1c(&local_b8,*(undefined4 *)(pcVar9 + 0x38),*(undefined4 *)(pcVar9 + 0x3c));
          local_a4 = (int *)local_d4;
          local_a0 = local_d0;
          local_a8 = local_d8;
          local_9c = (int *)local_c8;
          local_98 = local_c4;
          local_94 = local_c0;
          local_90 = (int *)local_b8;
          local_8c = local_b4;
          local_88 = (undefined1 *)local_b0;
          local_84 = param_3;
          iStack_80 = param_4;
          piVar4 = (int *)FUN_0119e23c(0x2c);
          *piVar4 = local_a8;
          piVar4[1] = (int)local_a4;
          piVar4[2] = local_a0;
          piVar4[3] = (int)local_9c;
          piVar4[4] = local_98;
          piVar4[5] = local_94;
          piVar4[6] = (int)local_90;
          piVar4[7] = local_8c;
          piVar4[8] = (int)local_88;
          piVar4[9] = (int)local_84;
          piVar4[10] = iStack_80;
          param_1[1] = piVar4;
          param_1[2] = &DAT_01889c68;
          *param_1 = 1;
          return;
        }
      }
      else {
        pcVar8 = pcVar9;
      }
      do {
        iVar15 = *param_3;
        bVar2 = (bool)hasExclusiveAccess(param_3);
      } while (!bVar2);
      *param_3 = iVar15 + 1;
      if (-1 < iVar15) {
        DataMemoryBarrier(0xb);
        if (DAT_018da8bc != 0) {
          FUN_0120d52c();
        }
        do {
          iVar15 = *DAT_018da8b4;
          bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
        } while (!bVar2);
        *DAT_018da8b4 = iVar15 + 1;
        if (-1 < iVar15) {
          local_38 = DAT_018da8b4;
          uStack_34 = DAT_018da8b8;
          local_50 = 6;
          local_84 = (int *)CONCAT22(local_84._2_2_,0x4000);
          local_88 = &DAT_80000028;
          local_a8 = 1;
          local_4c = pcVar8;
          iVar15 = thunk_FUN_016d4a50(0x80);
          if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x80);
          }
          goto LAB_0119fd70;
        }
      }
    }
  }
  else {
    do {
      iVar15 = *param_3;
      bVar2 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar2);
    *param_3 = iVar15 + 1;
    if (-1 < iVar15) {
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar15 = *DAT_018da8b4;
        bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar2);
      *DAT_018da8b4 = iVar15 + 1;
      if (-1 < iVar15) {
        local_38 = DAT_018da8b4;
        uStack_34 = DAT_018da8b8;
        local_50 = 6;
        local_84 = (int *)CONCAT22(local_84._2_2_,0x100);
        local_88 = &DAT_80000028;
        local_a8 = 1;
        local_4c = param_2;
        iVar15 = thunk_FUN_016d4a50(0x80);
        if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        goto LAB_0119fd70;
      }
    }
  }
LAB_011a0470:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x11a0470);
  (*pcVar1)();
code_r0x0119fff0:
  iVar7 = *(int *)(pcVar9 + iVar11 * 2 + 0xc);
  uVar14 = *(undefined4 *)(pcVar9 + iVar11 * 2 + 8);
  if (iVar7 == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = thunk_FUN_016d4a50(iVar7);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar7);
    }
  }
  FUN_016dd1aa(iVar6,uVar14,iVar7);
  if (iVar3 == local_b8) {
    FUN_015f37b0(&local_b8);
    iVar5 = local_b4;
  }
  local_b0 = iVar3 + 1;
  piVar4 = (int *)(iVar5 + iVar11);
  *piVar4 = iVar7;
  iVar11 = iVar11 + 0xc;
  iVar12 = iVar12 + 0x18;
  piVar4[1] = iVar6;
  piVar4[2] = iVar7;
  if (iVar15 * 0x18 == iVar12) goto LAB_011a01bc;
  goto LAB_0119ffe0;
}

