// FUN_00b40d98 @ 00b40d98 size=7100 calls_out=33 calls_in=2
// strings: polled MutexLockFuture after completion

/* WARNING: Removing unreachable block (ram,0x00b422b0) */
/* WARNING: Removing unreachable block (ram,0x00b422f4) */

undefined4 FUN_00b40d98(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  bool bVar3;
  int **ppiVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int **ppiVar7;
  char cVar8;
  undefined1 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  int *piVar17;
  code *pcVar18;
  int extraout_r1;
  undefined4 uVar19;
  int extraout_r1_00;
  undefined4 uVar20;
  char *pcVar21;
  int iVar22;
  int extraout_r2;
  int extraout_r2_00;
  char cVar23;
  int *piVar24;
  undefined4 uVar25;
  undefined2 uVar26;
  byte *pbVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint *puVar31;
  int iVar32;
  int **ppiVar33;
  undefined8 uVar34;
  undefined1 *local_1f8;
  undefined1 *local_1f4;
  int local_1ec;
  undefined1 *local_1e4;
  undefined1 *local_1e0;
  int local_1d4;
  undefined1 *local_1d0;
  undefined1 auStack_1b8 [200];
  int **local_f0;
  undefined1 *local_ec;
  int **local_e8 [22];
  undefined1 auStack_90 [104];
  int *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x70)) {
  case 0:
    iVar30 = *(int *)(param_1 + 0x60);
    *(undefined2 *)(param_1 + 0x71) = 0;
    *(int *)(param_1 + 100) = iVar30;
    FUN_016dd1aa(auStack_90,param_1,0x60);
    FUN_016dd1aa(auStack_1b8,&local_f0,0xc4);
    FUN_016dd1aa(param_1 + 0x78,auStack_1b8,0xc4);
    *(undefined1 *)(param_1 + 0x141) = 0;
    *(int *)(param_1 + 0x13c) = iVar30;
LAB_00b40e74:
    iVar16 = param_1 + 0x78;
    *(undefined1 *)(param_1 + 0x140) = 1;
    *(int *)(param_1 + 0x138) = iVar30;
    FUN_016dd1aa(iVar16,param_1 + 0xd8,0x60);
    uVar25 = *(undefined4 *)(iVar30 + 0x10);
    puVar10 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,4);
    }
    uVar11 = *(undefined4 *)(param_1 + 0xc4);
    *puVar10 = uVar25;
    uVar34 = FUN_0079e04c(uVar11,puVar10,&DAT_01870810);
    puVar10 = (undefined4 *)((ulonglong)uVar34 >> 0x20);
    pcVar18 = (code *)*puVar10;
    if (pcVar18 != (code *)0x0) {
      (*pcVar18)((int)uVar34);
    }
    if (puVar10[1] != 0) {
      thunk_FUN_016d3fb4((int)uVar34);
    }
    *(int *)(param_1 + 0x148) = iVar16;
    *(undefined1 *)(param_1 + 0x150) = 0;
LAB_00b40f0c:
    *(int *)(param_1 + 0x154) = iVar16 + 0x18;
    *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
switchD_00b411fc_caseD_3:
    iVar16 = FUN_00c816ec(param_1 + 0x154,*param_2);
    if (iVar16 == 0) {
      uVar9 = 3;
LAB_00b41280:
      *(undefined1 *)(param_1 + 0x150) = uVar9;
      uVar9 = 3;
      goto LAB_00b41ba0;
    }
    *(int *)(param_1 + 0x14c) = iVar16;
    if (*(int *)(param_1 + 0x154) != 0) {
      FUN_00c8204c(*(int *)(param_1 + 0x154),*(undefined4 *)(param_1 + 0x158),1);
      iVar16 = *(int *)(param_1 + 0x14c);
    }
    *(undefined1 *)(param_1 + 0x198) = 0;
    piVar17 = (int *)(iVar16 + 0x20);
    *(int **)(param_1 + 0x154) = piVar17;
LAB_00b40f74:
    pcVar21 = (char *)(*piVar17 + 8);
    do {
      cVar23 = *pcVar21;
      bVar3 = (bool)hasExclusiveAccess(pcVar21);
    } while (!bVar3);
    *pcVar21 = '\0';
    if (cVar23 != '\0') {
      *(undefined1 *)(param_1 + 0x194) = 0;
      piVar17 = piVar17 + 1;
      *(int **)(param_1 + 0x158) = piVar17;
LAB_00b40fac:
      piVar12 = (int *)*piVar17;
      iVar16 = piVar17[1];
      do {
        iVar30 = *piVar12;
        bVar3 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar3);
      *piVar12 = iVar30 + 1;
      if (iVar30 < 0) goto LAB_00b42b58;
      *(int **)(param_1 + 0x15c) = piVar12;
      *(int *)(param_1 + 0x160) = iVar16;
      *(undefined1 *)(param_1 + 400) = 0;
LAB_00b40ff4:
      iVar30 = *(int *)(iVar16 + 8);
      pcVar18 = *(code **)(iVar16 + 0x28);
      piVar17 = (int *)(param_1 + 0x164);
      *piVar17 = (int)piVar12;
      *(int *)(param_1 + 0x168) = iVar16;
      iVar16 = (*pcVar18)((int)piVar12 + (iVar30 - 1U & 0xfffffff8) + 8);
      *(int *)(param_1 + 0x16c) = iVar16;
      *(int **)(param_1 + 0x170) = piVar17;
      *(undefined1 *)(param_1 + 0x18c) = 0;
LAB_00b41040:
      *(undefined1 *)(param_1 + 0x189) = 0;
      iVar16 = iVar16 + 4;
      *(int *)(param_1 + 0x180) = iVar16;
      *(int **)(param_1 + 0x184) = piVar17;
LAB_00b41060:
      *(undefined1 *)(param_1 + 0x188) = 1;
      *(int *)(param_1 + 0x174) = iVar16 + 4;
      *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
      *(int **)(param_1 + 0x17c) = piVar17;
      goto switchD_00b4259c_caseD_3;
    }
    goto LAB_00b41884;
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
      iVar30 = *(int *)(param_1 + 0x13c);
      goto LAB_00b40e74;
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
        iVar16 = *(int *)(param_1 + 0x148);
        goto LAB_00b40f0c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187b0d4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187b0d4);
      case 3:
        goto switchD_00b411fc_caseD_3;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x198)) {
      case 0:
        piVar17 = *(int **)(param_1 + 0x154);
        goto LAB_00b40f74;
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
        piVar17 = *(int **)(param_1 + 0x158);
        goto LAB_00b40fac;
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
        piVar12 = *(int **)(param_1 + 0x15c);
        iVar16 = *(int *)(param_1 + 0x160);
        goto LAB_00b40ff4;
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
        iVar16 = *(int *)(param_1 + 0x16c);
        piVar17 = *(int **)(param_1 + 0x170);
        goto LAB_00b41040;
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
        iVar16 = *(int *)(param_1 + 0x180);
        piVar17 = *(int **)(param_1 + 0x184);
        goto LAB_00b41060;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187af00);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187af00);
      }
switchD_00b4259c_caseD_3:
      local_1e0 = (undefined1 *)(param_1 + 400);
      local_1e4 = (undefined1 *)(param_1 + 0x194);
      local_1ec = param_1 + 0x15c;
      local_1f4 = (undefined1 *)(param_1 + 0x18c);
      local_1f8 = (undefined1 *)(param_1 + 0x198);
      iVar16 = FUN_00c816ec((int *)(param_1 + 0x174),*param_2);
      if (iVar16 != 0) {
        iVar30 = *(int *)(param_1 + 0x174);
        if (iVar30 != 0) {
          FUN_00c8204c(iVar30,*(undefined4 *)(param_1 + 0x178),1);
        }
        uVar28 = (uint)*(byte *)(*(int *)(iVar16 + 0x20) + 8);
LAB_00b410e8:
        while ((1 << uVar28 & 0x8aU) != 0) {
          pbVar27 = (byte *)(*(int *)(iVar16 + 0x20) + 8);
          while (*pbVar27 == uVar28) {
            bVar3 = (bool)hasExclusiveAccess(pbVar27);
            if (bVar3) {
              *pbVar27 = 4;
              if (uVar28 != 7) goto LAB_00b412f8;
              goto LAB_00b41818;
            }
          }
          ClearExclusiveLocal();
          uVar28 = (uint)*pbVar27;
        }
        if ((1 << uVar28 & 0x104U) == 0) goto LAB_00b41818;
        pbVar27 = (byte *)(*(int *)(iVar16 + 0x20) + 8);
        do {
          if (*pbVar27 != uVar28) goto LAB_00b4115c;
          bVar3 = (bool)hasExclusiveAccess(pbVar27);
        } while (!bVar3);
        *pbVar27 = 6;
        if (uVar28 == 8) goto LAB_00b41818;
LAB_00b412f8:
        *(undefined1 *)(param_1 + 0x188) = 0;
        piVar17 = (int *)**(undefined4 **)(param_1 + 0x17c);
        iVar30 = (*(undefined4 **)(param_1 + 0x17c))[1];
        do {
          iVar32 = *piVar17;
          bVar3 = (bool)hasExclusiveAccess(piVar17);
        } while (!bVar3);
        *piVar17 = iVar32 + 1;
        if (iVar32 < 0) goto LAB_00b42b58;
        (**(code **)(iVar30 + 0x38))((int)piVar17 + (*(int *)(iVar30 + 8) - 1U & 0xfffffff8) + 8);
        DataMemoryBarrier(0xb);
        do {
          iVar32 = *piVar17;
          bVar3 = (bool)hasExclusiveAccess(piVar17);
        } while (!bVar3);
        *piVar17 = iVar32 + -1;
        if (iVar32 == 1) {
          DataMemoryBarrier(0xb);
          FUN_007846b4(piVar17,iVar30);
        }
        if (*(byte *)(iVar16 + 0x2c) == 2) goto LAB_00b42844;
        if ((*(byte *)(iVar16 + 0x2c) & 1) == 0) {
LAB_00b415bc:
          uVar28 = *(uint *)(*(int *)(iVar16 + 0x24) + 0x1c);
          puVar31 = (uint *)(*(int *)(iVar16 + 0x24) + 0x1c);
          DataMemoryBarrier(0xb);
          while (0x7fffffff < uVar28) {
            if ((uVar28 & 0x7fffffff) == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_0040888b,0x46,&DAT_018a4b40);
            }
            uVar13 = *puVar31;
            if (*puVar31 == uVar28) {
              DataMemoryBarrier(0xb);
              do {
                bVar3 = (bool)hasExclusiveAccess(puVar31);
                if (bVar3) {
                  *puVar31 = uVar28 + 1 | 0x80000000;
                  DataMemoryBarrier(0xb);
                  iVar30 = *(int *)(iVar16 + 0x24);
                  if ((uVar28 & 0x7fffffff) < *(uint *)(iVar30 + 0x18)) goto LAB_00b41774;
                  iVar30 = *(int *)(iVar16 + 0x28);
                  ppiVar33 = (int **)(iVar30 + 8);
                  goto LAB_00b41660;
                }
                uVar13 = *puVar31;
              } while (*puVar31 == uVar28);
            }
            uVar28 = uVar13;
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
          }
LAB_00b42844:
          local_28 = (int *)CONCAT31(local_28._1_3_,1);
          local_ec = &LAB_0100eb80;
          local_f0 = &local_28;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0058c10f,&local_f0,&DAT_0187af10);
        }
        iVar30 = *(int *)(iVar16 + 0x28);
        ppiVar33 = (int **)(iVar30 + 8);
        do {
          if (*ppiVar33 != (int *)0x0) {
            ClearExclusiveLocal();
            FUN_015bf680(ppiVar33);
            goto LAB_00b413b4;
          }
          bVar3 = (bool)hasExclusiveAccess(ppiVar33);
        } while (!bVar3);
        *ppiVar33 = (int *)0x1;
        DataMemoryBarrier(0xb);
LAB_00b413b4:
        uVar28 = 0;
        if ((DAT_018dd988 & 0x7fffffff) == 0) {
          cVar23 = *(char *)(iVar30 + 0xc);
        }
        else {
          uVar28 = FUN_015bf3f8();
          uVar28 = uVar28 ^ 1;
          cVar23 = *(char *)(iVar30 + 0xc);
        }
        if (cVar23 != '\0') {
          local_ec._1_3_ = (undefined3)((uint)local_ec >> 8);
          local_ec = (undefined1 *)CONCAT31(local_ec._1_3_,(char)uVar28);
          local_f0 = ppiVar33;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_f0,&DAT_01877584,&DAT_018a4b30);
        }
        if (*(char *)(iVar30 + 0x18) == '\0') {
          *(undefined1 *)(iVar16 + 0x2c) = 0;
          if (((uVar28 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar32 = FUN_015bf3f8(), iVar32 == 0)) {
            *(undefined1 *)(iVar30 + 0xc) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            piVar17 = *ppiVar33;
            bVar3 = (bool)hasExclusiveAccess(ppiVar33);
          } while (!bVar3);
          *ppiVar33 = (int *)0x0;
          if (piVar17 == (int *)0x2) {
            FUN_016d6968(0xf0,ppiVar33,0x81,1);
          }
          goto LAB_00b415bc;
        }
        if (*(int *)(iVar30 + 0x10) != 0) {
          (**(code **)(*(int *)(iVar30 + 0x10) + 0xc))(*(undefined4 *)(iVar30 + 0x14));
        }
        *(undefined4 *)(iVar30 + 0x10) = 0;
        if (((uVar28 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar32 = FUN_015bf3f8(), iVar32 == 0)) {
          *(undefined1 *)(iVar30 + 0xc) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          piVar17 = *ppiVar33;
          bVar3 = (bool)hasExclusiveAccess(ppiVar33);
        } while (!bVar3);
        *ppiVar33 = (int *)0x0;
        if (piVar17 == (int *)0x2) {
          FUN_016d6968(0xf0,ppiVar33,0x81,1);
        }
        goto LAB_00b41818;
      }
      *(undefined1 *)(param_1 + 0x189) = 3;
      *local_1f4 = 3;
      *local_1e0 = 3;
      *local_1e4 = 3;
      *local_1f8 = 3;
      uVar9 = 4;
      goto LAB_00b41280;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x169)) {
    case 0:
      iVar16 = *(int *)(param_1 + 0x160);
      piVar17 = *(int **)(param_1 + 0x164);
      goto LAB_00b418f4;
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
      iVar16 = *(int *)(param_1 + 0x154);
      piVar17 = *(int **)(param_1 + 0x158);
      goto LAB_00b4193c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187aeb0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187aeb0);
    }
    goto switchD_00b412a0_caseD_3;
  case 4:
    goto switchD_00b40dc0_caseD_4;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xc0)) {
  case 0:
    iVar30 = *(int *)(param_1 + 0x78);
    iVar16 = *(int *)(param_1 + 0x7c);
    goto LAB_00b4201c;
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
    iVar16 = *(int *)(param_1 + 0x80);
    goto LAB_00b42048;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187b0b4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187b0b4);
  case 3:
    goto switchD_00b411c0_caseD_3;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xbc)) {
  case 0:
    piVar17 = *(int **)(param_1 + 0x8c);
    goto LAB_00b420a4;
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
    piVar17 = *(int **)(param_1 + 0x90);
    goto LAB_00b42114;
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
    iVar16 = *(int *)(param_1 + 0x94);
    piVar17 = *(int **)(param_1 + 0x98);
    goto LAB_00b42150;
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
    iVar16 = *(int *)(param_1 + 0xa8);
    piVar17 = *(int **)(param_1 + 0xac);
    goto LAB_00b42170;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187aef0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187aef0);
  }
switchD_00b4251c_caseD_3:
  local_1e0 = (undefined1 *)(param_1 + 0xb8);
  local_1e4 = (undefined1 *)(param_1 + 0xbc);
  iVar16 = FUN_00c816ec((int *)(param_1 + 0x9c),*param_2);
  if (iVar16 != 0) {
    iVar30 = *(int *)(param_1 + 0x9c);
    if (iVar30 != 0) {
      FUN_00c8204c(iVar30,*(undefined4 *)(param_1 + 0xa0),1);
    }
    cVar23 = *(char *)(*(int *)(iVar16 + 0x20) + 8);
LAB_00b421f4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(cVar23) {
    case '\0':
    case '\t':
      pcVar21 = (char *)(*(int *)(iVar16 + 0x20) + 8);
      while (cVar8 = *pcVar21, *pcVar21 == cVar23) {
        bVar3 = (bool)hasExclusiveAccess(pcVar21);
        if (bVar3) {
          *pcVar21 = '\x01';
LAB_00b421ec:
          *(undefined1 *)(param_1 + 0xb0) = 0;
          piVar17 = (int *)**(undefined4 **)(param_1 + 0xa4);
          iVar30 = (*(undefined4 **)(param_1 + 0xa4))[1];
          do {
            iVar32 = *piVar17;
            bVar3 = (bool)hasExclusiveAccess(piVar17);
          } while (!bVar3);
          *piVar17 = iVar32 + 1;
          if (iVar32 < 0) goto LAB_00b42b58;
          (**(code **)(iVar30 + 0x34))();
          goto switchD_00b42200_caseD_1;
        }
      }
      break;
    default:
      goto switchD_00b42200_caseD_1;
    case '\x04':
      pcVar21 = (char *)(*(int *)(iVar16 + 0x20) + 8);
      while (cVar8 = *pcVar21, *pcVar21 == '\x04') {
        bVar3 = (bool)hasExclusiveAccess(pcVar21);
        if (bVar3) {
          *pcVar21 = '\a';
          goto switchD_00b42200_caseD_1;
        }
      }
      goto LAB_00b422e4;
    case '\x05':
    case '\x06':
      pcVar21 = (char *)(*(int *)(iVar16 + 0x20) + 8);
      while (cVar8 = *pcVar21, *pcVar21 == cVar23) {
        bVar3 = (bool)hasExclusiveAccess(pcVar21);
        if (bVar3) {
          *pcVar21 = '\b';
          goto switchD_00b42200_caseD_1;
        }
      }
LAB_00b422e4:
      cVar23 = cVar8;
      ClearExclusiveLocal();
      goto LAB_00b421f4;
    case '\n':
      pcVar21 = (char *)(*(int *)(iVar16 + 0x20) + 8);
      while (cVar8 = *pcVar21, *pcVar21 == '\n') {
        bVar3 = (bool)hasExclusiveAccess(pcVar21);
        if (bVar3) {
          *pcVar21 = '\x02';
          goto LAB_00b421ec;
        }
      }
    }
    cVar23 = cVar8;
    ClearExclusiveLocal();
    goto LAB_00b421f4;
  }
  *(undefined1 *)(param_1 + 0xb1) = 3;
  *(undefined1 *)(param_1 + 0xb4) = 3;
  *local_1e0 = 3;
  *local_1e4 = 3;
  uVar9 = 4;
LAB_00b42324:
  *(undefined1 *)(param_1 + 0x88) = uVar9;
  *(undefined1 *)(param_1 + 0xc0) = 3;
  *(undefined1 *)(param_1 + 0x70) = 5;
  return 0;
LAB_00b4115c:
  ClearExclusiveLocal();
  uVar28 = (uint)*pbVar27;
  goto LAB_00b410e8;
switchD_00b42200_caseD_1:
  FUN_00c822ec(iVar16);
  bVar3 = false;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  *(undefined1 *)(param_1 + 0xb4) = 1;
  *(undefined2 *)(param_1 + 0xb0) = 0x100;
  goto LAB_00b4239c;
  while (bVar3 = (bool)hasExclusiveAccess(ppiVar33), !bVar3) {
LAB_00b41660:
    if (*ppiVar33 != (int *)0x0) {
      ClearExclusiveLocal();
      FUN_015bf680(ppiVar33);
      goto LAB_00b4167c;
    }
  }
  *ppiVar33 = (int *)0x1;
  DataMemoryBarrier(0xb);
LAB_00b4167c:
  uVar28 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar23 = *(char *)(iVar30 + 0xc);
  }
  else {
    uVar28 = FUN_015bf3f8();
    uVar28 = uVar28 ^ 1;
    cVar23 = *(char *)(iVar30 + 0xc);
  }
  if (cVar23 != '\0') {
    local_ec._1_3_ = (undefined3)((uint)local_ec >> 8);
    local_ec = (undefined1 *)CONCAT31(local_ec._1_3_,(char)uVar28);
    local_f0 = ppiVar33;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_f0,&DAT_01877584,&DAT_018a4b50);
  }
  if (*(int *)(iVar30 + 0x10) != 0) {
    (**(code **)(*(int *)(iVar30 + 0x10) + 0xc))(*(undefined4 *)(iVar30 + 0x14));
  }
  *(undefined1 *)(iVar30 + 0x18) = 1;
  *(undefined4 *)(iVar30 + 0x10) = 0;
  if (((uVar28 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar32 = FUN_015bf3f8(), iVar32 == 0)) {
    *(undefined1 *)(iVar30 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    piVar17 = *ppiVar33;
    bVar3 = (bool)hasExclusiveAccess(ppiVar33);
  } while (!bVar3);
  *ppiVar33 = (int *)0x0;
  if (piVar17 == (int *)0x2) {
    FUN_016d6968(0xf0,ppiVar33,0x81,1);
  }
  piVar17 = *(int **)(iVar16 + 0x28);
  do {
    iVar30 = *piVar17;
    bVar3 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar3);
  *piVar17 = iVar30 + 1;
  if (iVar30 < 0) goto LAB_00b42b58;
  iVar32 = *(int *)(iVar16 + 0x24);
  puVar10 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  puVar14 = (undefined4 *)(iVar32 + 0x10);
  *puVar10 = 0;
  puVar10[1] = piVar17;
  DataMemoryBarrier(0xb);
  do {
    puVar15 = (undefined4 *)*puVar14;
    bVar3 = (bool)hasExclusiveAccess(puVar14);
  } while (!bVar3);
  *puVar14 = puVar10;
  DataMemoryBarrier(0xb);
  *puVar15 = puVar10;
  DataMemoryBarrier(0xb);
  iVar30 = *(int *)(iVar16 + 0x24);
  *(byte *)(iVar16 + 0x2c) = (byte)((uint)*(undefined4 *)(iVar32 + 0x1c) >> 0x1f);
LAB_00b41774:
  puVar10 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  puVar14 = (undefined4 *)(iVar30 + 8);
  *(undefined1 *)(puVar10 + 1) = 1;
  *puVar10 = 0;
  DataMemoryBarrier(0xb);
  do {
    puVar15 = (undefined4 *)*puVar14;
    bVar3 = (bool)hasExclusiveAccess(puVar14);
  } while (!bVar3);
  *puVar14 = puVar10;
  DataMemoryBarrier(0xb);
  *puVar15 = puVar10;
  puVar31 = (uint *)(iVar30 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    uVar28 = *puVar31;
    bVar3 = (bool)hasExclusiveAccess(puVar31);
  } while (!bVar3);
  *puVar31 = uVar28 | 2;
  DataMemoryBarrier(0xb);
  if (uVar28 == 0) {
    iVar32 = *(int *)(iVar30 + 0x24);
    *(undefined4 *)(iVar30 + 0x24) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar31);
    } while (!bVar3);
    *puVar31 = *puVar31 & 0xfffffffd;
    if (iVar32 != 0) {
      (**(code **)(iVar32 + 4))(*(undefined4 *)(iVar30 + 0x28));
    }
  }
LAB_00b41818:
  FUN_00c822ec(iVar16);
  *(undefined2 *)(param_1 + 0x188) = 0x100;
  piVar17 = *(int **)(param_1 + 0x164);
  *(undefined1 *)(param_1 + 0x18c) = 1;
  DataMemoryBarrier(0xb);
  do {
    iVar16 = *piVar17;
    bVar3 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar3);
  *piVar17 = iVar16 + -1;
  if (iVar16 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x168));
  }
  *local_1e0 = 1;
  FUN_00b517f4(local_1ec);
  *local_1e4 = 1;
LAB_00b41884:
  iVar16 = param_1 + 0x78;
  *(undefined1 *)(param_1 + 0x198) = 1;
  FUN_00c822ec(*(undefined4 *)(param_1 + 0x14c));
  *(undefined1 *)(param_1 + 0x150) = 1;
  piVar17 = *(int **)(*(int *)(param_1 + 0x138) + 0x48);
  do {
    iVar30 = *piVar17;
    bVar3 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar3);
  *piVar17 = iVar30 + 1;
  if (iVar30 < 0) goto LAB_00b42b58;
  piVar12 = piVar17 + 0x11;
  do {
    bVar3 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar3);
  *piVar12 = *piVar12 + 1;
  *(undefined1 *)(param_1 + 0x169) = 0;
  *(int *)(param_1 + 0x160) = iVar16;
  *(int **)(param_1 + 0x164) = piVar17;
LAB_00b418f4:
  *(undefined1 *)(param_1 + 0x168) = 1;
  local_28 = piVar17;
  iVar16 = (**(code **)(*(int *)(iVar16 + 0xc) + 0x28))
                     (*(int *)(iVar16 + 8) +
                      (*(int *)(*(int *)(iVar16 + 0xc) + 8) - 1U & 0xfffffff8) + 8);
  *(undefined1 *)(param_1 + 0x15d) = 0;
  *(int *)(param_1 + 0x154) = iVar16;
  *(int **)(param_1 + 0x158) = piVar17;
  *(undefined1 *)(param_1 + 0x168) = 0;
LAB_00b4193c:
  *(int **)(param_1 + 0x150) = piVar17;
  *(undefined1 *)(param_1 + 0x15c) = 1;
  iVar16 = *(int *)(iVar16 + 0x5c);
  *(undefined4 *)(param_1 + 0x14c) = 0xffffffff;
  *(int *)(param_1 + 0x148) = iVar16 + 8;
switchD_00b412a0_caseD_3:
  local_1d4 = param_1 + 0x78;
  puVar31 = *(uint **)(param_1 + 0x148);
  if (puVar31 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("polled MutexLockFuture after completion",0x27,&DAT_0187a760);
  }
  do {
    uVar28 = *puVar31;
    bVar3 = (bool)hasExclusiveAccess(puVar31);
  } while (!bVar3);
  *puVar31 = uVar28 | 1;
  DataMemoryBarrier(0xb);
  if ((uVar28 & 1) == 0) {
    FUN_00c8204c(puVar31,*(undefined4 *)(param_1 + 0x14c),0);
  }
  else {
    ppiVar33 = (int **)(puVar31 + 1);
    do {
      if (*ppiVar33 != (int *)0x0) {
        ClearExclusiveLocal();
        FUN_015bf680(ppiVar33);
        iVar16 = extraout_r2;
        goto LAB_00b419c8;
      }
      bVar3 = (bool)hasExclusiveAccess(ppiVar33);
    } while (!bVar3);
    *ppiVar33 = (int *)0x1;
    DataMemoryBarrier(0xb);
    iVar16 = 0;
LAB_00b419c8:
    uVar28 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar23 = (char)puVar31[2];
    }
    else {
      uVar28 = FUN_015bf3f8();
      uVar28 = uVar28 ^ 1;
      cVar23 = (char)puVar31[2];
      iVar16 = extraout_r2_00;
    }
    if (cVar23 != '\0') {
      local_ec._1_3_ = (undefined3)((uint)local_ec >> 8);
      local_ec = (undefined1 *)CONCAT31(local_ec._1_3_,(char)uVar28);
      local_f0 = ppiVar33;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_f0,&DAT_01876140,&DAT_0187a770);
    }
    uVar13 = *(uint *)(param_1 + 0x14c);
    if (uVar13 == 0xffffffff) {
      uVar34 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
      uVar29 = puVar31[7];
      FUN_0098a8a4(puVar31 + 3,uVar29,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20));
      uVar13 = puVar31[6];
      *(uint *)(param_1 + 0x14c) = uVar29;
      if (uVar13 == 1) {
        do {
          bVar3 = (bool)hasExclusiveAccess(puVar31);
        } while (!bVar3);
        *puVar31 = *puVar31 | 2;
      }
    }
    else {
      if ((puVar31[5] <= uVar13) || (piVar17 = (int *)(puVar31[4] + uVar13 * 0xc), *piVar17 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_015be724(&DAT_00412edc,0xb,&DAT_0187a780);
      }
      puVar14 = (undefined4 *)piVar17[1];
      puVar10 = *(undefined4 **)*param_2;
      iVar30 = ((int *)*param_2)[1];
      if (puVar14 == (undefined4 *)0x0) {
        uVar34 = (*(code *)*puVar10)(iVar30);
      }
      else {
        if (puVar10 == puVar14) {
          iVar16 = piVar17[2];
        }
        if (puVar10 == puVar14 && iVar30 == iVar16) goto LAB_00b41ae4;
        uVar34 = (*(code *)*puVar10)(iVar30);
        (*(code *)puVar14[3])(piVar17[2]);
      }
      *(undefined8 *)(piVar17 + 1) = uVar34;
    }
LAB_00b41ae4:
    if (((uVar28 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar16 = FUN_015bf3f8(), iVar16 == 0)) {
      *(undefined1 *)(puVar31 + 2) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      piVar17 = *ppiVar33;
      bVar3 = (bool)hasExclusiveAccess(ppiVar33);
    } while (!bVar3);
    *ppiVar33 = (int *)0x0;
    if (piVar17 == (int *)0x2) {
      FUN_016d6968(0xf0,ppiVar33,0x81,1);
    }
    do {
      uVar28 = *puVar31;
      bVar3 = (bool)hasExclusiveAccess(puVar31);
    } while (!bVar3);
    *puVar31 = uVar28 | 1;
    DataMemoryBarrier(0xb);
    if ((uVar28 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x15d) = 3;
      *(undefined1 *)(param_1 + 0x169) = 3;
      uVar9 = 4;
LAB_00b41ba0:
      local_1d0 = (undefined1 *)(param_1 + 0x141);
      *local_1d0 = uVar9;
      *(undefined1 *)(param_1 + 0x70) = 3;
      return 0;
    }
    FUN_00c8204c(puVar31,*(undefined4 *)(param_1 + 0x14c),0);
  }
  *(undefined1 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  piVar17 = (int *)puVar31[8];
  puVar31[8] = *(uint *)(param_1 + 0x150);
  FUN_00c822ec(puVar31);
  *(undefined2 *)(param_1 + 0x15c) = 0x100;
  FUN_00b51a24((undefined4 *)(param_1 + 0x148));
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined1 *)(param_1 + 0x169) = 1;
  if (piVar17 != (int *)0x0) {
    piVar12 = piVar17 + 0x11;
    DataMemoryBarrier(0xb);
    do {
      iVar16 = *piVar12;
      bVar3 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar3);
    *piVar12 = iVar16 + -1;
    DataMemoryBarrier(0xb);
    if (iVar16 == 1) {
      piVar12 = piVar17 + 4;
      if ((char)*piVar12 == '\0') {
        bVar3 = (bool)hasExclusiveAccess(piVar12);
        if (!bVar3) goto LAB_00b41c4c;
        *(char *)piVar12 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00b41c4c:
        FUN_01280da8(piVar12);
      }
      FUN_0128236c(piVar12);
      *(undefined1 *)(piVar17 + 0xb) = 1;
      FUN_0072a978(piVar17 + 2,piVar12);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar16 = *piVar17;
      bVar3 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar3);
    *piVar17 = iVar16 + -1;
    if (iVar16 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078205c(piVar17);
    }
  }
  *(undefined1 *)(param_1 + 0x140) = 0;
  FUN_016dd1aa(local_e8,local_1d4,0x60);
  local_ec = (undefined1 *)0x1;
  local_f0 = (int **)0x1;
  piVar17 = (int *)thunk_FUN_016d4a50(0x68);
  if (piVar17 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x68);
  }
  FUN_016dd1aa(piVar17,&local_f0,0x68);
  piVar12 = *(int **)(*(int *)(param_1 + 0x138) + 0x44);
  do {
    iVar16 = *piVar12;
    bVar3 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar3);
  *piVar12 = iVar16 + 1;
  if (iVar16 < 0) {
LAB_00b42b58:
                    /* WARNING: Does not return */
    pcVar18 = (code *)software_udf(0xfdee,0xb42b58);
    (*pcVar18)();
  }
  iVar16 = *(int *)(param_1 + 0x138);
  uVar1 = *(undefined2 *)(iVar16 + 0x4e);
  uVar2 = *(undefined2 *)(iVar16 + 0x4c);
  do {
    iVar30 = *piVar17;
    bVar3 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar3);
  *piVar17 = iVar30 + 1;
  if (iVar30 < 0) goto LAB_00b42b58;
  piVar24 = *(int **)(iVar16 + 0x40);
  do {
    iVar16 = *piVar24;
    bVar3 = (bool)hasExclusiveAccess(piVar24);
  } while (!bVar3);
  *piVar24 = iVar16 + 1;
  if (iVar16 < 0) goto LAB_00b42b58;
  puVar10 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar10 = piVar24;
  puVar10[1] = 0x10001;
  uVar26 = (undefined2)piVar24[2];
  if (1 < (piVar24[2] & 0xffffU)) {
    uVar26 = 1;
    puVar10[1] = 0x10002;
  }
  (**(code **)(piVar17[5] + 0x2c))(piVar17[4] + (*(int *)(piVar17[5] + 8) - 1U & 0xfffffff8) + 8);
  puVar14 = (undefined4 *)(**(code **)(extraout_r1 + 0x30))();
  uVar25 = *puVar14;
  uVar19 = puVar14[1];
  ClearExclusiveLocal();
  FUN_015f3b0c(&local_f0,1);
  (**(code **)(piVar17[5] + 0x2c))(piVar17[4] + (*(int *)(piVar17[5] + 8) - 1U & 0xfffffff8) + 8);
  puVar14 = (undefined4 *)(**(code **)(extraout_r1_00 + 0x34))();
  uVar11 = *puVar14;
  uVar20 = puVar14[1];
  ClearExclusiveLocal();
  FUN_015f3b0c(&local_f0,1);
  puVar14 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar14 = 1;
  puVar14[1] = 1;
  puVar14[2] = piVar12;
  puVar15 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar15 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined2 *)((int)puVar15 + 10) = uVar1;
  *(undefined2 *)(puVar15 + 2) = uVar2;
  *puVar15 = 1;
  puVar15[1] = 1;
  FUN_015f3b0c(&local_f0,1);
  ppiVar7 = local_e8[0];
  puVar5 = local_ec;
  ppiVar33 = local_f0;
  FUN_015f3b0c(&local_f0,1);
  puVar6 = local_ec;
  ppiVar4 = local_f0;
  *(undefined2 *)(param_1 + 0x140) = 0x100;
  FUN_00b51578(local_1d4);
  *(undefined2 *)(param_1 + 0x71) = 0x101;
  *(undefined4 *)(param_1 + 0x80) = ppiVar33;
  *(int ***)(param_1 + 0x90) = ppiVar4;
  *(undefined1 *)(param_1 + 0xd8) = 1;
  *(undefined2 *)(param_1 + 0xcc) = 1;
  *(undefined2 *)(param_1 + 200) = 1;
  *(undefined1 **)(param_1 + 0x84) = puVar5;
  *(undefined4 *)(param_1 + 0xc0) = uVar11;
  *(undefined4 *)(param_1 + 0xb8) = uVar25;
  *(undefined4 *)(param_1 + 0xbc) = uVar19;
  *(undefined1 **)(param_1 + 0x94) = puVar6;
  *(undefined4 *)(param_1 + 0xc4) = uVar20;
  *(undefined4 **)(param_1 + 0xa0) = puVar10;
  *(int ***)(param_1 + 0x98) = local_e8[0];
  *(undefined4 **)(param_1 + 0xa8) = puVar14;
  *(undefined4 **)(param_1 + 0xb0) = puVar15;
  *(int ***)(param_1 + 0x88) = ppiVar7;
  *(undefined **)(param_1 + 0xa4) = &DAT_01873578;
  *(int **)(param_1 + 0x68) = piVar17;
  *(int **)(param_1 + 0xd0) = piVar17;
  *(undefined4 *)(param_1 + 0xd4) = 0x1000a;
  *(undefined2 *)(param_1 + 0xce) = uVar26;
  *(undefined2 *)(param_1 + 0xca) = uVar26;
  *(undefined **)(param_1 + 0xac) = &DAT_01873630;
  *(undefined **)(param_1 + 0xb4) = &DAT_01873648;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 100) + 0x14;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
switchD_00b40dc0_caseD_4:
  iVar16 = FUN_00c816ec(param_1 + 0x78,*param_2);
  if (iVar16 == 0) {
    *(undefined1 *)(param_1 + 0x70) = 4;
    return 0;
  }
  *(int *)(param_1 + 0x6c) = iVar16;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00c8204c(*(int *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),1);
    iVar16 = *(int *)(param_1 + 0x6c);
  }
  *(undefined1 *)(param_1 + 0x71) = 0;
  FUN_016dd1aa(&local_f0,(undefined4 *)(param_1 + 0x80),0x60);
  iVar30 = *(int *)(iVar16 + 0x28);
  if (iVar30 == *(int *)(iVar16 + 0x20)) {
    FUN_00a8a518();
  }
  FUN_016dd1aa(*(int *)(iVar16 + 0x24) + iVar30 * 0x60,&local_f0,0x60);
  *(int *)(iVar16 + 0x28) = iVar30 + 1;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  iVar30 = *(int *)(param_1 + 100);
  iVar16 = *(int *)(param_1 + 0x68) + 8;
  *(int *)(param_1 + 0x78) = iVar30;
  *(int *)(param_1 + 0x7c) = iVar16;
LAB_00b4201c:
  FUN_00994994(*(undefined4 *)(iVar30 + 0x48));
  if (*(char *)(iVar16 + 0x5c) != '\x01') goto LAB_00b423c4;
  *(int *)(param_1 + 0x80) = iVar16;
  *(undefined1 *)(param_1 + 0x88) = 0;
LAB_00b42048:
  *(int *)(param_1 + 0x8c) = iVar16 + 0x18;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
switchD_00b411c0_caseD_3:
  iVar16 = FUN_00c816ec(param_1 + 0x8c,*param_2);
  if (iVar16 == 0) {
    uVar9 = 3;
    goto LAB_00b42324;
  }
  *(int *)(param_1 + 0x84) = iVar16;
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_00c8204c(*(int *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),1);
    iVar16 = *(int *)(param_1 + 0x84);
  }
  *(undefined1 *)(param_1 + 0xbc) = 0;
  piVar17 = (int *)(iVar16 + 0x20);
  *(int **)(param_1 + 0x8c) = piVar17;
LAB_00b420a4:
  pcVar21 = (char *)(*piVar17 + 8);
  do {
    cVar23 = *pcVar21;
    bVar3 = (bool)hasExclusiveAccess(pcVar21);
  } while (!bVar3);
  *pcVar21 = '\x01';
  bVar3 = true;
  if (cVar23 == '\0') {
    piVar17 = piVar17 + 1;
    *(int **)(param_1 + 0x90) = piVar17;
    *(undefined1 *)(param_1 + 0xb8) = 0;
LAB_00b42114:
    iVar16 = (**(code **)(piVar17[1] + 0x28))
                       (*piVar17 + (*(int *)(piVar17[1] + 8) - 1U & 0xfffffff8) + 8);
    *(int *)(param_1 + 0x94) = iVar16;
    *(int **)(param_1 + 0x98) = piVar17;
    *(undefined1 *)(param_1 + 0xb4) = 0;
LAB_00b42150:
    *(undefined1 *)(param_1 + 0xb1) = 0;
    iVar16 = iVar16 + 4;
    *(int *)(param_1 + 0xa8) = iVar16;
    *(int **)(param_1 + 0xac) = piVar17;
LAB_00b42170:
    *(undefined1 *)(param_1 + 0xb0) = 1;
    *(int *)(param_1 + 0x9c) = iVar16 + 4;
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    *(int **)(param_1 + 0xa4) = piVar17;
    goto switchD_00b4251c_caseD_3;
  }
LAB_00b4239c:
  local_1d0 = (undefined1 *)(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0xbc) = 1;
  FUN_00c822ec(*(undefined4 *)(param_1 + 0x84));
  *local_1d0 = 1;
  FUN_00b51c60(param_1 + 0x80);
  if (bVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00359399,0x1e,&local_f0,&DAT_01870408,&DAT_0187b010);
  }
LAB_00b423c4:
  iVar16 = 1;
  *(undefined1 *)(param_1 + 0xc0) = 1;
  ppiVar33 = *(int ***)(*(int *)(param_1 + 100) + 0x58);
  uVar25 = *(undefined4 *)(*(int *)(param_1 + 100) + 0x54);
  if ((ppiVar33 != (int **)0x0) && (iVar16 = thunk_FUN_016d4a50(ppiVar33), iVar16 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,ppiVar33);
  }
  FUN_016dd1aa(iVar16,uVar25,ppiVar33);
  iVar30 = *(int *)(*(int *)(param_1 + 0x6c) + 0x28);
  local_f0 = ppiVar33;
  local_ec = (undefined1 *)iVar16;
  local_e8[0] = ppiVar33;
  if (iVar30 != 0) {
    piVar17 = (int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x24) + 0x50);
    iVar30 = iVar30 * 0x60;
    iVar32 = 0;
    do {
      DataMemoryBarrier(0xb);
      if (DAT_018d7c7c == 0) {
        iVar22 = *(int *)(*piVar17 + 0x14);
        uVar34 = (**(code **)(iVar22 + 0x40))
                           (*(int *)(*piVar17 + 0x10) + (*(int *)(iVar22 + 8) - 1U & 0xfffffff8) + 8
                           );
        FUN_00d49d10(DAT_018d7c9c,&local_f0,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20),iVar32);
      }
      iVar32 = iVar32 + 1;
      piVar17 = piVar17 + 0x18;
      iVar30 = iVar30 + -0x60;
    } while (iVar30 != 0);
  }
  uVar25 = *(undefined4 *)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x72) = 0;
  if (ppiVar33 != (int **)0x0) {
    thunk_FUN_016d3fb4(iVar16);
  }
  FUN_00c822ec(*(undefined4 *)(param_1 + 0x6c));
  *(undefined2 *)(param_1 + 0x71) = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  return uVar25;
}

