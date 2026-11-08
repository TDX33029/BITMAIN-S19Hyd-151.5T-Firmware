// FUN_0095e880 @ 0095e880 size=4700 calls_out=27 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x0095f5a0) */

undefined4 FUN_0095e880(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  byte *pbVar10;
  int iVar11;
  int *piVar12;
  code *pcVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  char cVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined1 *local_2e8;
  undefined1 *local_2e4;
  undefined1 *local_2dc;
  undefined1 *local_2d8;
  undefined1 *local_2d4;
  undefined1 *local_2d0;
  undefined1 *local_2cc;
  undefined1 auStack_2c8 [200];
  byte *local_200;
  undefined1 *local_1fc;
  undefined1 auStack_1f8 [88];
  undefined1 auStack_1a0 [104];
  undefined1 auStack_138 [88];
  undefined1 auStack_e0 [88];
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined1 auStack_7c [87];
  byte local_25;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x70)) {
  case 0:
    iVar20 = *(int *)(param_1 + 0x60);
    *(undefined2 *)(param_1 + 0x71) = 0;
    *(int *)(param_1 + 100) = iVar20;
    FUN_016dd1aa(auStack_1a0,param_1,0x60);
    FUN_016dd1aa(auStack_2c8,&local_200,0xc4);
    FUN_016dd1aa(param_1 + 0x78,auStack_2c8,0xc4);
    *(undefined1 *)(param_1 + 0x141) = 0;
    *(int *)(param_1 + 0x13c) = iVar20;
LAB_0095e948:
    iVar11 = param_1 + 0x78;
    *(undefined1 *)(param_1 + 0x140) = 1;
    *(int *)(param_1 + 0x138) = iVar20;
    FUN_016dd1aa(iVar11,param_1 + 0xd8,0x60);
    uVar22 = *(undefined4 *)(iVar20 + 0x10);
    puVar7 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,4);
    }
    uVar8 = *(undefined4 *)(param_1 + 0xc4);
    *puVar7 = uVar22;
    uVar23 = FUN_0079e04c(uVar8,puVar7,&DAT_018683a8);
    puVar7 = (undefined4 *)((ulonglong)uVar23 >> 0x20);
    pcVar13 = (code *)*puVar7;
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)((int)uVar23);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4((int)uVar23);
    }
    *(int *)(param_1 + 0x148) = iVar11;
    *(undefined1 *)(param_1 + 0x150) = 0;
LAB_0095e9dc:
    *(int *)(param_1 + 0x154) = iVar11 + 0x18;
    *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
switchD_0095ecb0_caseD_3:
    iVar11 = FUN_00999254(param_1 + 0x154,param_2);
    if (iVar11 == 0) {
      uVar5 = 3;
      goto LAB_0095ed34;
    }
    *(int *)(param_1 + 0x14c) = iVar11;
    if (*(int *)(param_1 + 0x154) != 0) {
      FUN_00999924(*(int *)(param_1 + 0x154),*(undefined4 *)(param_1 + 0x158),1);
      iVar11 = *(int *)(param_1 + 0x14c);
    }
    *(undefined1 *)(param_1 + 0x198) = 0;
    piVar12 = (int *)(iVar11 + 0x20);
    *(int **)(param_1 + 0x154) = piVar12;
LAB_0095ea3c:
    pcVar14 = (char *)(*piVar12 + 8);
    do {
      cVar17 = *pcVar14;
      bVar3 = (bool)hasExclusiveAccess(pcVar14);
    } while (!bVar3);
    *pcVar14 = '\0';
    if (cVar17 != '\0') {
      *(undefined1 *)(param_1 + 0x194) = 0;
      piVar12 = piVar12 + 1;
      *(int **)(param_1 + 0x158) = piVar12;
LAB_0095ea78:
      piVar9 = (int *)*piVar12;
      iVar11 = piVar12[1];
      do {
        iVar20 = *piVar9;
        bVar3 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar3);
      *piVar9 = iVar20 + 1;
      if (iVar20 < 0) goto LAB_0095fca4;
      *(int **)(param_1 + 0x15c) = piVar9;
      *(int *)(param_1 + 0x160) = iVar11;
      *(undefined1 *)(param_1 + 400) = 0;
LAB_0095eab4:
      iVar20 = *(int *)(iVar11 + 8);
      pcVar13 = *(code **)(iVar11 + 0x28);
      piVar12 = (int *)(param_1 + 0x164);
      *piVar12 = (int)piVar9;
      *(int *)(param_1 + 0x168) = iVar11;
      iVar11 = (*pcVar13)((int)piVar9 + (iVar20 - 1U & 0xfffffff8) + 8);
      *(int *)(param_1 + 0x16c) = iVar11;
      *(int **)(param_1 + 0x170) = piVar12;
      *(undefined1 *)(param_1 + 0x18c) = 0;
LAB_0095eb00:
      *(undefined1 *)(param_1 + 0x189) = 0;
      iVar11 = iVar11 + 4;
      *(int *)(param_1 + 0x180) = iVar11;
      *(int **)(param_1 + 0x184) = piVar12;
LAB_0095eb1c:
      *(undefined1 *)(param_1 + 0x188) = 1;
      *(int *)(param_1 + 0x174) = iVar11 + 4;
      *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
      *(int **)(param_1 + 0x17c) = piVar12;
      goto switchD_0095f94c_caseD_3;
    }
LAB_0095eec0:
    iVar11 = param_1 + 0x78;
    *(undefined1 *)(param_1 + 0x198) = 1;
    FUN_00999f24(*(undefined4 *)(param_1 + 0x14c));
    *(undefined1 *)(param_1 + 0x150) = 1;
    pbVar18 = *(byte **)(*(int *)(param_1 + 0x138) + 0x48);
    do {
      iVar20 = *(int *)pbVar18;
      bVar3 = (bool)hasExclusiveAccess(pbVar18);
    } while (!bVar3);
    *(int *)pbVar18 = iVar20 + 1;
    if (iVar20 < 0) goto LAB_0095fca4;
    pbVar10 = pbVar18 + 0x44;
    do {
      bVar3 = (bool)hasExclusiveAccess(pbVar10);
    } while (!bVar3);
    *(int *)pbVar10 = *(int *)pbVar10 + 1;
    *(undefined1 *)(param_1 + 0x169) = 0;
    *(int *)(param_1 + 0x160) = iVar11;
    *(byte **)(param_1 + 0x164) = pbVar18;
LAB_0095ef30:
    *(undefined1 *)(param_1 + 0x168) = 1;
    local_200 = pbVar18;
    iVar11 = (**(code **)(*(int *)(iVar11 + 0xc) + 0x28))
                       (*(int *)(iVar11 + 8) +
                        (*(int *)(*(int *)(iVar11 + 0xc) + 8) - 1U & 0xfffffff8) + 8);
    *(undefined1 *)(param_1 + 0x15d) = 0;
    *(int *)(param_1 + 0x154) = iVar11;
    *(byte **)(param_1 + 0x158) = pbVar18;
    *(undefined1 *)(param_1 + 0x168) = 0;
LAB_0095ef74:
    *(byte **)(param_1 + 0x150) = pbVar18;
    *(undefined1 *)(param_1 + 0x15c) = 1;
    iVar11 = *(int *)(iVar11 + 0x5c);
    *(undefined4 *)(param_1 + 0x14c) = 0xffffffff;
    *(int *)(param_1 + 0x148) = iVar11 + 8;
switchD_0095ed54_caseD_3:
    piVar12 = (int *)(param_1 + 0x148);
    iVar11 = FUN_00999254(piVar12,param_2);
    if (iVar11 != 0) {
      if (*piVar12 != 0) {
        FUN_00999924(*piVar12,*(undefined4 *)(param_1 + 0x14c),1);
      }
      *(undefined1 *)(param_1 + 0x15c) = 0;
      piVar9 = *(int **)(iVar11 + 0x20);
      *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)(param_1 + 0x150);
      FUN_00999f24();
      *(undefined2 *)(param_1 + 0x15c) = 0x100;
      FUN_0096e004(piVar12);
      *(undefined1 *)(param_1 + 0x168) = 0;
      *(undefined1 *)(param_1 + 0x169) = 1;
      if (piVar9 != (int *)0x0) {
        piVar12 = piVar9 + 0x11;
        DataMemoryBarrier(0xb);
        do {
          iVar11 = *piVar12;
          bVar3 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar3);
        *piVar12 = iVar11 + -1;
        DataMemoryBarrier(0xb);
        if (iVar11 == 1) {
          piVar12 = piVar9 + 4;
          if ((char)*piVar12 == '\0') {
            bVar3 = (bool)hasExclusiveAccess(piVar12);
            if (!bVar3) goto LAB_0095f104;
            *(char *)piVar12 = '\x01';
            DataMemoryBarrier(0xb);
          }
          else {
            ClearExclusiveLocal();
LAB_0095f104:
            FUN_01280da8(piVar12);
          }
          FUN_0128236c(piVar12);
          *(undefined1 *)(piVar9 + 0xb) = 1;
          FUN_0072a978(piVar9 + 2,piVar12);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar11 = *piVar9;
          bVar3 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar3);
        *piVar9 = iVar11 + -1;
        if (iVar11 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078205c(piVar9);
        }
      }
      *(undefined1 *)(param_1 + 0x140) = 0;
      FUN_016dd1aa(auStack_1f8,param_1 + 0x78,0x60);
      local_1fc = (undefined1 *)0x1;
      local_200 = &DAT_00000001;
      piVar12 = (int *)thunk_FUN_016d4a50(0x68);
      if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x68);
      }
      FUN_016dd1aa(piVar12,&local_200,0x68);
      piVar9 = *(int **)(*(int *)(param_1 + 0x138) + 0x44);
      do {
        iVar11 = *piVar9;
        bVar3 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar3);
      *piVar9 = iVar11 + 1;
      if (iVar11 < 0) {
LAB_0095fca4:
                    /* WARNING: Does not return */
        pcVar13 = (code *)software_udf(0xfdee,0x95fca4);
        (*pcVar13)();
      }
      iVar11 = *(int *)(param_1 + 0x138);
      uVar1 = *(undefined2 *)(iVar11 + 0x4e);
      uVar2 = *(undefined2 *)(iVar11 + 0x4c);
      do {
        iVar20 = *piVar12;
        bVar3 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar3);
      *piVar12 = iVar20 + 1;
      if (iVar20 < 0) goto LAB_0095fca4;
      pbVar18 = *(byte **)(iVar11 + 0x40);
      do {
        iVar11 = *(int *)pbVar18;
        bVar3 = (bool)hasExclusiveAccess(pbVar18);
      } while (!bVar3);
      *(int *)pbVar18 = iVar11 + 1;
      if (iVar11 < 0) goto LAB_0095fca4;
      local_1fc = (undefined1 *)0x10001;
      local_200 = pbVar18;
      FUN_00990ab0(&local_88,piVar12,&local_200,piVar9,uVar2,uVar1);
      FUN_016dd1aa(auStack_138,auStack_7c,0x54);
      *(undefined2 *)(param_1 + 0x140) = 0x100;
      if (local_80 == 0x3b9aca01) goto LAB_0095f010;
      FUN_016dd1aa(auStack_e0,auStack_138,0x54);
      FUN_0096db58(param_1 + 0x78);
      *(undefined2 *)(param_1 + 0x71) = 0x101;
      *(int **)(param_1 + 0x68) = piVar12;
      *(undefined4 *)(param_1 + 0x80) = local_88;
      *(undefined4 *)(param_1 + 0x84) = local_84;
      *(int *)(param_1 + 0x88) = local_80;
      FUN_016dd1aa(param_1 + 0x8c,auStack_e0,0x54);
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 100) + 0x14;
      *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
      goto switchD_0095e89c_caseD_4;
    }
    *(undefined1 *)(param_1 + 0x15d) = 3;
    *(undefined1 *)(param_1 + 0x169) = 3;
    uVar5 = 4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187af90);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187af90);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x141)) {
    case 0:
      iVar20 = *(int *)(param_1 + 0x13c);
      goto LAB_0095e948;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b038);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b038);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x150)) {
      case 0:
        iVar11 = *(int *)(param_1 + 0x148);
        goto LAB_0095e9dc;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187b0d4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187b0d4);
      case 3:
        goto switchD_0095ecb0_caseD_3;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x198)) {
      case 0:
        piVar12 = *(int **)(param_1 + 0x154);
        goto LAB_0095ea3c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187af60);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187af60);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x194)) {
      case 0:
        piVar12 = *(int **)(param_1 + 0x158);
        goto LAB_0095ea78;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187b114);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187b114);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 400)) {
      case 0:
        piVar9 = *(int **)(param_1 + 0x15c);
        iVar11 = *(int *)(param_1 + 0x160);
        goto LAB_0095eab4;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187b134);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187b134);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x18c)) {
      case 0:
        iVar11 = *(int *)(param_1 + 0x16c);
        piVar12 = *(int **)(param_1 + 0x170);
        goto LAB_0095eb00;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187aed0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187aed0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x189)) {
      case 0:
        iVar11 = *(int *)(param_1 + 0x180);
        piVar12 = *(int **)(param_1 + 0x184);
        goto LAB_0095eb1c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187af00);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187af00);
      }
switchD_0095f94c_caseD_3:
      local_2d4 = (undefined1 *)(param_1 + 0x194);
      local_2d8 = (undefined1 *)(param_1 + 400);
      local_2dc = (undefined1 *)(param_1 + 0x15c);
      local_2e4 = (undefined1 *)(param_1 + 0x198);
      local_2e8 = (undefined1 *)(param_1 + 0x18c);
      iVar11 = FUN_00999254((int *)(param_1 + 0x174),param_2);
      if (iVar11 != 0) {
        iVar20 = *(int *)(param_1 + 0x174);
        if (iVar20 != 0) {
          FUN_00999924(iVar20,*(undefined4 *)(param_1 + 0x178),1);
        }
        uVar19 = (uint)*(byte *)(*(int *)(iVar11 + 0x20) + 8);
LAB_0095eb98:
        while ((1 << uVar19 & 0x8aU) != 0) {
          pbVar18 = (byte *)(*(int *)(iVar11 + 0x20) + 8);
          while (*pbVar18 == uVar19) {
            bVar3 = (bool)hasExclusiveAccess(pbVar18);
            if (bVar3) {
              *pbVar18 = 4;
              if (uVar19 == 7) goto LAB_0095ee50;
              goto LAB_0095edb8;
            }
          }
          ClearExclusiveLocal();
          uVar19 = (uint)*pbVar18;
        }
        if ((1 << uVar19 & 0x104U) != 0) {
          pbVar18 = (byte *)(*(int *)(iVar11 + 0x20) + 8);
          do {
            if (*pbVar18 != uVar19) goto LAB_0095ec0c;
            bVar3 = (bool)hasExclusiveAccess(pbVar18);
          } while (!bVar3);
          *pbVar18 = 6;
          if (uVar19 == 8) goto LAB_0095ee50;
LAB_0095edb8:
          *(undefined1 *)(param_1 + 0x188) = 0;
          piVar12 = (int *)**(undefined4 **)(param_1 + 0x17c);
          iVar20 = (*(undefined4 **)(param_1 + 0x17c))[1];
          do {
            iVar15 = *piVar12;
            bVar3 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar3);
          *piVar12 = iVar15 + 1;
          if (iVar15 < 0) goto LAB_0095fca4;
          (**(code **)(iVar20 + 0x38))((int)piVar12 + (*(int *)(iVar20 + 8) - 1U & 0xfffffff8) + 8);
          DataMemoryBarrier(0xb);
          do {
            iVar15 = *piVar12;
            bVar3 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar3);
          *piVar12 = iVar15 + -1;
          if (iVar15 == 1) {
            DataMemoryBarrier(0xb);
            FUN_007846b4(piVar12,iVar20);
          }
          bVar6 = FUN_0098dbc4(iVar11 + 0x24);
          if (bVar6 != 2) {
            local_25 = bVar6;
          }
          if (bVar6 != 2 && bVar6 != 0) {
            local_200 = &local_25;
            local_1fc = &LAB_0100eb80;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_0058c10f,&local_200,&DAT_0187af10);
          }
        }
LAB_0095ee50:
        FUN_00999f24(iVar11);
        *(undefined2 *)(param_1 + 0x188) = 0x100;
        *(undefined1 *)(param_1 + 0x18c) = 1;
        piVar12 = *(int **)(param_1 + 0x164);
        DataMemoryBarrier(0xb);
        do {
          iVar11 = *piVar12;
          bVar3 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar3);
        *piVar12 = iVar11 + -1;
        if (iVar11 == 1) {
          DataMemoryBarrier(0xb);
          FUN_007846b4(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x168));
        }
        *local_2d8 = 1;
        FUN_0096ddd4(local_2dc);
        *local_2d4 = 1;
        goto LAB_0095eec0;
      }
      *(undefined1 *)(param_1 + 0x189) = 3;
      *local_2e8 = 3;
      *local_2d8 = 3;
      *local_2d4 = 3;
      *local_2e4 = 3;
      uVar5 = 4;
      break;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x169)) {
      case 0:
        iVar11 = *(int *)(param_1 + 0x160);
        pbVar18 = *(byte **)(param_1 + 0x164);
        goto LAB_0095ef30;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187b0f4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187b0f4);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x15d)) {
      case 0:
        iVar11 = *(int *)(param_1 + 0x154);
        pbVar18 = *(byte **)(param_1 + 0x158);
        goto LAB_0095ef74;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187aeb0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187aeb0);
      }
      goto switchD_0095ed54_caseD_3;
    }
LAB_0095ed34:
    local_2d0 = (undefined1 *)(param_1 + 0x150);
    *local_2d0 = uVar5;
    uVar5 = 3;
    break;
  case 4:
switchD_0095e89c_caseD_4:
    iVar11 = FUN_00999254(param_1 + 0x78,param_2);
    if (iVar11 == 0) {
      *(undefined1 *)(param_1 + 0x70) = 4;
      return 0;
    }
    *(int *)(param_1 + 0x6c) = iVar11;
    if (*(int *)(param_1 + 0x78) != 0) {
      FUN_00999924(*(int *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),1);
      iVar11 = *(int *)(param_1 + 0x6c);
    }
    *(undefined1 *)(param_1 + 0x71) = 0;
    FUN_016dd1aa(&local_200,param_1 + 0x80,0x60);
    iVar20 = *(int *)(iVar11 + 0x28);
    if (iVar20 == *(int *)(iVar11 + 0x20)) {
      FUN_00a8a518();
    }
    FUN_016dd1aa(*(int *)(iVar11 + 0x24) + iVar20 * 0x60,&local_200,0x60);
    *(int *)(iVar11 + 0x28) = iVar20 + 1;
    *(undefined1 *)(param_1 + 0xc0) = 0;
    iVar20 = *(int *)(param_1 + 100);
    iVar11 = *(int *)(param_1 + 0x68) + 8;
    *(int *)(param_1 + 0x78) = iVar20;
    *(int *)(param_1 + 0x7c) = iVar11;
LAB_0095f358:
    FUN_00994994(*(undefined4 *)(iVar20 + 0x48));
    if (*(char *)(iVar11 + 0x5c) != '\x01') goto LAB_0095f690;
    *(int *)(param_1 + 0x80) = iVar11;
    *(undefined1 *)(param_1 + 0x88) = 0;
LAB_0095f380:
    *(int *)(param_1 + 0x8c) = iVar11 + 0x18;
    *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
switchD_0095ec70_caseD_3:
    iVar11 = FUN_00999254(param_1 + 0x8c,param_2);
    if (iVar11 == 0) {
      uVar5 = 3;
      goto LAB_0095f7e4;
    }
    *(int *)(param_1 + 0x84) = iVar11;
    if (*(int *)(param_1 + 0x8c) != 0) {
      FUN_00999924(*(int *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),1);
      iVar11 = *(int *)(param_1 + 0x84);
    }
    *(undefined1 *)(param_1 + 0xbc) = 0;
    piVar12 = (int *)(iVar11 + 0x20);
    *(int **)(param_1 + 0x8c) = piVar12;
LAB_0095f3e4:
    pcVar14 = (char *)(*piVar12 + 8);
    do {
      cVar17 = *pcVar14;
      bVar3 = (bool)hasExclusiveAccess(pcVar14);
    } while (!bVar3);
    *pcVar14 = '\x01';
    bVar3 = true;
    if (cVar17 != '\0') goto LAB_0095f66c;
    piVar12 = piVar12 + 1;
    *(int **)(param_1 + 0x90) = piVar12;
    *(undefined1 *)(param_1 + 0xb8) = 0;
LAB_0095f424:
    iVar11 = (**(code **)(piVar12[1] + 0x28))
                       (*piVar12 + (*(int *)(piVar12[1] + 8) - 1U & 0xfffffff8) + 8);
    *(int *)(param_1 + 0x94) = iVar11;
    *(int **)(param_1 + 0x98) = piVar12;
    *(undefined1 *)(param_1 + 0xb4) = 0;
LAB_0095f46c:
    *(undefined1 *)(param_1 + 0xb1) = 0;
    iVar11 = iVar11 + 4;
    *(int *)(param_1 + 0xa8) = iVar11;
    *(int **)(param_1 + 0xac) = piVar12;
LAB_0095f488:
    *(undefined1 *)(param_1 + 0xb0) = 1;
    *(int *)(param_1 + 0x9c) = iVar11 + 4;
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    *(int **)(param_1 + 0xa4) = piVar12;
    goto switchD_0095f8d4_caseD_3;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xc0)) {
    case 0:
      iVar20 = *(int *)(param_1 + 0x78);
      iVar11 = *(int *)(param_1 + 0x7c);
      goto LAB_0095f358;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b000);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b000);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x88)) {
    case 0:
      iVar11 = *(int *)(param_1 + 0x80);
      goto LAB_0095f380;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b0b4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b0b4);
    case 3:
      goto switchD_0095ec70_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xbc)) {
    case 0:
      piVar12 = *(int **)(param_1 + 0x8c);
      goto LAB_0095f3e4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187af50);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187af50);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xb8)) {
    case 0:
      piVar12 = *(int **)(param_1 + 0x90);
      goto LAB_0095f424;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b124);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b124);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xb4)) {
    case 0:
      iVar11 = *(int *)(param_1 + 0x94);
      piVar12 = *(int **)(param_1 + 0x98);
      goto LAB_0095f46c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187aec0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187aec0);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xb1)) {
    case 0:
      iVar11 = *(int *)(param_1 + 0xa8);
      piVar12 = *(int **)(param_1 + 0xac);
      goto LAB_0095f488;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187aef0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187aef0);
    }
switchD_0095f8d4_caseD_3:
    local_2d8 = (undefined1 *)(param_1 + 0xb8);
    local_2dc = (undefined1 *)(param_1 + 0xb4);
    local_2cc = (undefined1 *)(param_1 + 0xbc);
    iVar11 = FUN_00999254((int *)(param_1 + 0x9c),param_2);
    if (iVar11 != 0) {
      iVar20 = *(int *)(param_1 + 0x9c);
      if (iVar20 != 0) {
        FUN_00999924(iVar20,*(undefined4 *)(param_1 + 0xa0),1);
      }
      cVar17 = *(char *)(*(int *)(iVar11 + 0x20) + 8);
LAB_0095f500:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(cVar17) {
      case '\0':
      case '\t':
        pcVar14 = (char *)(*(int *)(iVar11 + 0x20) + 8);
        while (*pcVar14 == cVar17) {
          bVar3 = (bool)hasExclusiveAccess(pcVar14);
          if (bVar3) {
            *pcVar14 = '\x01';
LAB_0095f614:
            *(undefined1 *)(param_1 + 0xb0) = 0;
            piVar12 = (int *)**(undefined4 **)(param_1 + 0xa4);
            iVar20 = (*(undefined4 **)(param_1 + 0xa4))[1];
            do {
              iVar15 = *piVar12;
              bVar3 = (bool)hasExclusiveAccess(piVar12);
            } while (!bVar3);
            *piVar12 = iVar15 + 1;
            if (iVar15 < 0) goto LAB_0095fca4;
            (**(code **)(iVar20 + 0x34))();
            goto switchD_0095f50c_caseD_1;
          }
        }
        ClearExclusiveLocal();
        cVar17 = *pcVar14;
        goto LAB_0095f500;
      default:
        goto switchD_0095f50c_caseD_1;
      case '\x04':
        pcVar14 = (char *)(*(int *)(iVar11 + 0x20) + 8);
        while (cVar4 = *pcVar14, *pcVar14 == '\x04') {
          bVar3 = (bool)hasExclusiveAccess(pcVar14);
          if (bVar3) {
            *pcVar14 = '\a';
            goto switchD_0095f50c_caseD_1;
          }
        }
        break;
      case '\x05':
      case '\x06':
        pcVar14 = (char *)(*(int *)(iVar11 + 0x20) + 8);
        while (cVar4 = *pcVar14, *pcVar14 == cVar17) {
          bVar3 = (bool)hasExclusiveAccess(pcVar14);
          if (bVar3) {
            *pcVar14 = '\b';
            goto switchD_0095f50c_caseD_1;
          }
        }
        break;
      case '\n':
        goto switchD_0095f50c_caseD_a;
      }
      cVar17 = cVar4;
      ClearExclusiveLocal();
      goto LAB_0095f500;
    }
    *(undefined1 *)(param_1 + 0xb1) = 3;
    *local_2dc = 3;
    *local_2d8 = 3;
    *local_2cc = 3;
    uVar5 = 4;
LAB_0095f7e4:
    *(undefined1 *)(param_1 + 0x88) = uVar5;
    *(undefined1 *)(param_1 + 0xc0) = 3;
    *(undefined1 *)(param_1 + 0x70) = 5;
    return 0;
  }
  *(undefined1 *)(param_1 + 0x141) = uVar5;
LAB_0095f010:
  *(undefined1 *)(param_1 + 0x70) = 3;
  return 0;
LAB_0095ec0c:
  ClearExclusiveLocal();
  uVar19 = (uint)*pbVar18;
  goto LAB_0095eb98;
switchD_0095f50c_caseD_a:
  pcVar14 = (char *)(*(int *)(iVar11 + 0x20) + 8);
  while (*pcVar14 == '\n') {
    bVar3 = (bool)hasExclusiveAccess(pcVar14);
    if (bVar3) {
      *pcVar14 = '\x02';
      goto LAB_0095f614;
    }
  }
  ClearExclusiveLocal();
  cVar17 = *pcVar14;
  goto LAB_0095f500;
switchD_0095f50c_caseD_1:
  FUN_00999f24(iVar11);
  bVar3 = false;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  *(undefined1 *)(param_1 + 0xb4) = 1;
  *(undefined2 *)(param_1 + 0xb0) = 0x100;
LAB_0095f66c:
  *(undefined1 *)(param_1 + 0xbc) = 1;
  FUN_00999f24(*(undefined4 *)(param_1 + 0x84));
  *(undefined1 *)(param_1 + 0x88) = 1;
  FUN_0096e750(param_1 + 0x80);
  if (bVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00359399,0x1e,&local_200,&DAT_01868398,&DAT_0187b010);
  }
LAB_0095f690:
  iVar11 = 1;
  *(undefined1 *)(param_1 + 0xc0) = 1;
  uVar22 = *(undefined4 *)(*(int *)(param_1 + 100) + 0x54);
  iVar20 = *(int *)(*(int *)(param_1 + 100) + 0x58);
  if ((iVar20 != 0) && (iVar11 = thunk_FUN_016d4a50(iVar20), iVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar20);
  }
  FUN_016dd1aa(iVar11,uVar22,iVar20);
  iVar15 = *(int *)(*(int *)(param_1 + 0x6c) + 0x28);
  if (iVar15 != 0) {
    iVar21 = 0;
    piVar12 = (int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x24) + 0x50);
    iVar15 = iVar15 * 0x60;
    do {
      DataMemoryBarrier(0xb);
      if (DAT_018d7c7c == 0) {
        iVar16 = *(int *)(*piVar12 + 0x14);
        uVar23 = (**(code **)(iVar16 + 0x40))
                           (*(int *)(*piVar12 + 0x10) + (*(int *)(iVar16 + 8) - 1U & 0xfffffff8) + 8
                           );
        FUN_0098be58(DAT_018d7c9c,iVar11,iVar20,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20),iVar21)
        ;
      }
      iVar21 = iVar21 + 1;
      piVar12 = piVar12 + 0x18;
      iVar15 = iVar15 + -0x60;
    } while (iVar15 != 0);
  }
  uVar22 = *(undefined4 *)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x72) = 0;
  if (iVar20 != 0) {
    thunk_FUN_016d3fb4(iVar11);
  }
  FUN_00999f24(*(undefined4 *)(param_1 + 0x6c));
  *(undefined2 *)(param_1 + 0x71) = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  return uVar22;
}

