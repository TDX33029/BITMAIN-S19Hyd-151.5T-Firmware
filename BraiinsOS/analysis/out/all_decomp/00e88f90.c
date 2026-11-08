// FUN_00e88f90 @ 00e88f90 size=5800 calls_out=32 calls_in=1
// strings: 

void FUN_00e88f90(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  code *pcVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined *puVar19;
  uint uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined1 auStack_bd8 [264];
  undefined1 auStack_ad0 [736];
  undefined1 auStack_7f0 [72];
  int local_7a8;
  int iStack_7a4;
  int iStack_7a0;
  int iStack_79c;
  int local_798;
  int iStack_794;
  int iStack_790;
  int iStack_78c;
  int iStack_788;
  int local_784;
  int iStack_780;
  int iStack_77c;
  int iStack_778;
  int iStack_774;
  int local_770;
  int iStack_76c;
  int iStack_768;
  int iStack_764;
  int iStack_760;
  int local_75c;
  int iStack_758;
  int iStack_754;
  int iStack_750;
  int iStack_74c;
  int local_748;
  int iStack_744;
  int iStack_740;
  int iStack_73c;
  int iStack_738;
  int iStack_734;
  undefined1 auStack_730 [88];
  undefined1 auStack_6d8 [264];
  int local_5d0;
  int iStack_5cc;
  int iStack_5c8;
  int iStack_5c4;
  int iStack_5c0;
  int iStack_5bc;
  undefined1 auStack_5b8 [80];
  int local_568;
  int iStack_564;
  int iStack_560;
  int iStack_55c;
  int iStack_558;
  int iStack_554;
  undefined *local_550;
  int *local_54c;
  undefined *local_548;
  uint local_544;
  int local_540;
  int local_53c;
  int iStack_538;
  int iStack_534;
  int iStack_530;
  int local_52c;
  int local_528;
  int iStack_524;
  int iStack_520;
  int iStack_51c;
  int iStack_518;
  int iStack_514;
  int *local_284;
  undefined1 local_27d;
  undefined1 local_27c;
  undefined *local_38;
  undefined4 *local_34;
  int iStack_30;
  uint local_2c;
  
  piVar7 = param_2 + 0x24;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x2d3)) {
  case 0:
    *(undefined2 *)((int)param_2 + 0x2d1) = 0;
    if ((char)param_2[0xb5] != '\0') {
      iVar18 = *(int *)(*(int *)param_2[0xb3] + 0xc);
      uVar24 = (**(code **)(iVar18 + 0x28))
                         (*(int *)(*(int *)param_2[0xb3] + 8) +
                          (*(int *)(iVar18 + 8) - 1U & 0xfffffff8) + 8);
      param_2[0xf2] = (int)uVar24;
      *(undefined1 *)(param_2 + 0xf4) = 0;
      param_2[0xf3] = (int)((ulonglong)uVar24 >> 0x20);
      *(bool *)((int)param_2 + 0x3d1) = (char)param_2[0xb5] == '\x02';
      goto switchD_00e88fbc_caseD_3;
    }
    *piVar7 = 2;
    param_2[0x25] = 0;
    *(undefined1 *)((int)param_2 + 0x2d2) = 1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187ac70);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187ac70);
  case 3:
switchD_00e88fbc_caseD_3:
    FUN_00e87040(&local_550,param_2 + 0xb6,param_3);
    if (local_550 == (undefined *)0x2 && local_54c == (int *)0x0) {
      *param_1 = 3;
      param_1[1] = 0;
      *(undefined1 *)((int)param_2 + 0x2d3) = 3;
      return;
    }
    FUN_016dd1aa(auStack_bd8,&local_550,0x108);
    if ((char)param_2[0xf4] == '\x04') {
      if (((char)param_2[0xf9] == '\x03') && (param_2[0xf7] != 0)) {
        FUN_00e43e74(param_2[0xf7],param_2[0xf8],1);
      }
      FUN_005c38e4(param_2 + 0xb8);
    }
    else if ((char)param_2[0xf4] == '\x03') {
      FUN_00e83070(param_2 + 0xf6);
    }
    *(undefined1 *)((int)param_2 + 0x2d2) = 1;
    FUN_016dd1aa(piVar7,auStack_bd8,0x108);
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xb9]) {
    case '\0':
      iVar18 = param_2[0xb6];
      goto LAB_00e893bc;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b1ac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b1ac);
    }
    goto switchD_00e89238_caseD_3;
  case 5:
    iVar18 = param_2[0xb8];
    puVar3 = (undefined4 *)param_2[0xb9];
    goto LAB_00e89a1c;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xb9]) {
    case '\0':
      local_38 = (undefined *)param_2[0xb6];
      goto LAB_00e89bf4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b23c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b23c);
    case '\x03':
      piVar4 = (int *)param_2[0xb7];
      puVar3 = (undefined4 *)param_2[0xb8];
    }
    goto LAB_00e89c38;
  case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xb9]) {
    case '\0':
      goto switchD_00e89134_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b1dc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b1dc);
    case '\x03':
      piVar4 = (int *)param_2[0xb7];
      puVar3 = (undefined4 *)param_2[0xb8];
    }
    goto LAB_00e89d24;
  case 8:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xb9]) {
    case '\0':
      goto switchD_00e891a0_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b20c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b20c);
    case '\x03':
      piVar4 = (int *)param_2[0xb7];
      puVar3 = (undefined4 *)param_2[0xb8];
    }
    goto LAB_00e89e18;
  case 9:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xb9]) {
    case '\0':
      goto switchD_00e89208_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b22c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b22c);
    case '\x03':
      piVar4 = (int *)param_2[0xb7];
      puVar3 = (undefined4 *)param_2[0xb8];
    }
    goto LAB_00e89efc;
  case 10:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xb9]) {
    case '\0':
      goto switchD_00e890f4_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b24c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b24c);
    case '\x03':
      piVar4 = (int *)param_2[0xb7];
      puVar3 = (undefined4 *)param_2[0xb8];
    }
    goto LAB_00e8a010;
  case 0xb:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xb9]) {
    case '\0':
      goto switchD_00e8916c_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b1ec);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b1ec);
    case '\x03':
      piVar4 = (int *)param_2[0xb7];
      puVar3 = (undefined4 *)param_2[0xb8];
    }
    goto LAB_00e8a0f4;
  case 0xc:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xb9]) {
    case '\0':
      goto switchD_00e892d0_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b1fc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b1fc);
    case '\x03':
      piVar4 = (int *)param_2[0xb7];
      puVar3 = (undefined4 *)param_2[0xb8];
    }
    goto LAB_00e8a1f4;
  case 0xd:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xb9]) {
    case '\0':
      goto switchD_00e8926c_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b1cc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b1cc);
    case '\x03':
      piVar4 = (int *)param_2[0xb7];
      puVar3 = (undefined4 *)param_2[0xb8];
    }
    goto LAB_00e8a2e8;
  case 0xe:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xb9]) {
    case '\0':
      goto switchD_00e890c0_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b1bc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b1bc);
    case '\x03':
      piVar4 = (int *)param_2[0xb7];
      puVar3 = (undefined4 *)param_2[0xb8];
    }
    goto LAB_00e8a3e0;
  case 0xf:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xff]) {
    case '\0':
      iVar18 = param_2[0xfc];
      goto LAB_00e8a4b8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b21c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b21c);
    }
    goto switchD_00e8929c_caseD_3;
  }
  *(undefined1 *)((int)param_2 + 0x2d1) = 1;
  param_2[0xaa] = 0;
  param_2[0xab] = 8;
  param_2[0xac] = 0;
  iVar18 = *(int *)param_2[0xb3];
  *(undefined1 *)(param_2 + 0xb9) = 0;
  iVar18 = iVar18 + 8;
  param_2[0xb6] = iVar18;
LAB_00e893bc:
  iVar18 = *(int *)(iVar18 + 8);
  param_2[0xb8] = -1;
  param_2[0xb7] = iVar18 + 8;
switchD_00e89238_caseD_3:
  iVar18 = FUN_00e442f8(param_2 + 0xb7,param_3);
  if (iVar18 == 0) {
    *(undefined1 *)(param_2 + 0xb9) = 3;
    goto LAB_00e895b0;
  }
  iVar6 = param_2[0xb7];
  if (iVar6 != 0) {
    FUN_00e44660(iVar6,param_2[0xb8],1);
  }
  puVar22 = *(undefined4 **)(iVar18 + 0x24) + *(int *)(iVar18 + 0x28);
  puVar3 = *(undefined4 **)(iVar18 + 0x24);
  while (puVar3 != puVar22) {
    puVar21 = puVar3 + 1;
    piVar4 = (int *)*puVar3;
    puVar3 = puVar21;
    if (piVar4 != (int *)0xffffffff) {
      iVar6 = *piVar4;
      while (iVar6 != 0) {
        if (iVar6 < 0) {
          local_54c = &DAT_0157d360;
          local_550 = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00590e71,&local_550,&DAT_018ae288);
        }
        iVar8 = *piVar4;
        if (iVar8 == iVar6) {
          bVar1 = (bool)hasExclusiveAccess(piVar4);
          if (bVar1) {
            *piVar4 = iVar6 + 1;
          }
          bVar10 = false;
          if (bVar1) {
            DataMemoryBarrier(0xb);
            bVar10 = true;
          }
        }
        else {
          bVar10 = false;
          ClearExclusiveLocal();
        }
        iVar6 = iVar8;
        if (bVar10) {
          local_54c = (int *)thunk_FUN_016d4a50(0x10);
          if (local_54c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(4,0x10);
          }
          *local_54c = (int)piVar4;
          puVar23 = (undefined *)0x1;
          local_550 = (undefined *)0x4;
          goto LAB_00e894c8;
        }
      }
    }
  }
  piVar4 = (int *)&DAT_00000004;
  puVar23 = (undefined *)0x0;
  puVar19 = (undefined *)0x0;
  goto LAB_00e89570;
LAB_00e894c8:
  local_548 = puVar23;
  if (puVar21 != puVar22) {
    puVar3 = puVar21 + 1;
    piVar4 = (int *)*puVar21;
    puVar21 = puVar3;
    if (piVar4 != (int *)0xffffffff) {
      iVar6 = *piVar4;
      do {
        if (iVar6 == 0) goto LAB_00e894c8;
        if (iVar6 < 0) {
          local_34 = &DAT_0157d360;
          local_38 = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00590e71,&local_38,&DAT_018ae288);
        }
        iVar8 = *piVar4;
        if (iVar8 == iVar6) {
          bVar1 = (bool)hasExclusiveAccess(piVar4);
          if (bVar1) {
            *piVar4 = iVar6 + 1;
          }
          bVar10 = false;
          if (bVar1) {
            DataMemoryBarrier(0xb);
            bVar10 = true;
          }
        }
        else {
          bVar10 = false;
          ClearExclusiveLocal();
        }
        iVar6 = iVar8;
      } while (!bVar10);
      if (puVar23 == local_550) {
        FUN_00edff4c(&local_550,puVar23,1,4,4);
      }
      local_54c[(int)puVar23] = (int)piVar4;
      puVar23 = puVar23 + 1;
    }
    goto LAB_00e894c8;
  }
  piVar4 = local_54c;
  puVar19 = local_550;
LAB_00e89570:
  FUN_00e44900(iVar18);
  *(undefined1 *)(param_2 + 0xb9) = 1;
  if (puVar19 == (undefined *)0x80000000) {
LAB_00e895b0:
    *param_1 = 3;
    param_1[1] = 0;
    *(undefined1 *)((int)param_2 + 0x2d3) = 4;
    return;
  }
  piVar5 = piVar4 + (int)puVar23;
  param_2[0xba] = (int)piVar4;
  param_2[0xbb] = (int)piVar4;
  param_2[0xbc] = (int)puVar19;
  param_2[0xbd] = (int)piVar5;
  while (piVar4 != piVar5) {
    iVar18 = *piVar4;
    local_284 = param_2 + 0xb7;
    *local_284 = iVar18;
    param_2[0xb6] = iVar18;
    local_27c = (undefined1)param_2[0xb5];
    local_27d = 0;
    param_2[0xbb] = (int)(piVar4 + 1);
    iVar18 = thunk_FUN_016d4a50(0x518);
    if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x518);
    }
    FUN_016dd1aa(iVar18,&local_550,0x518);
    param_2[0xb8] = iVar18;
    puVar3 = &DAT_0187ac60;
    param_2[0xb9] = (int)&DAT_0187ac60;
LAB_00e89a1c:
    (*(code *)puVar3[3])(&local_550,iVar18,param_3);
    if (local_550 == (undefined *)0x3 && local_54c == (int *)0x0) {
      *param_1 = 3;
      param_1[1] = 0;
      *(undefined1 *)((int)param_2 + 0x2d3) = 5;
      return;
    }
    FUN_016dd1aa(auStack_ad0,&local_550,0x2e0);
    puVar3 = (undefined4 *)param_2[0xb9];
    iVar18 = param_2[0xb8];
    pcVar11 = (code *)*puVar3;
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(iVar18);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_016d3fb4(iVar18);
    }
    iVar18 = param_2[0xac];
    if (iVar18 == param_2[0xaa]) {
      FUN_00edfa00();
    }
    FUN_016dd1aa(iVar18 * 0x2e0 + param_2[0xab],auStack_ad0,0x2e0);
    piVar4 = (int *)param_2[0xb7];
    param_2[0xac] = iVar18 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar4;
      bVar10 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar10);
    *piVar4 = iVar18 + -1;
    if (iVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078d444(param_2[0xb7]);
    }
    piVar5 = (int *)param_2[0xbd];
    piVar4 = (int *)param_2[0xbb];
  }
  param_2[0xb6] = 0;
  FUN_00ef99cc(param_2 + 0xba);
  iVar18 = *(int *)(*(int *)param_2[0xb3] + 0xc);
  uVar24 = (**(code **)(iVar18 + 0x30))
                     (*(int *)(*(int *)param_2[0xb3] + 8) + (*(int *)(iVar18 + 8) - 1U & 0xfffffff8)
                      + 8);
  *(undefined8 *)(param_2 + 0x66) = uVar24;
  iVar18 = *(int *)(*(int *)param_2[0xb3] + 0xc);
  uVar2 = (**(code **)(iVar18 + 0x34))
                    (*(int *)(*(int *)param_2[0xb3] + 8) + (*(int *)(iVar18 + 8) - 1U & 0xfffffff8)
                     + 8);
  *(undefined1 *)(param_2 + 0xb4) = uVar2;
  iVar18 = *(int *)param_2[0xb3];
  *(undefined1 *)(param_2 + 0xb9) = 0;
  local_38 = (undefined *)(iVar18 + 8);
  param_2[0xb6] = (int)local_38;
LAB_00e89bf4:
  local_2c = local_2c & 0xffffff00;
  piVar4 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *piVar4 = (int)local_38;
  piVar4[1] = (int)local_34;
  piVar4[2] = iStack_30;
  puVar3 = &DAT_0187a934;
  piVar4[3] = local_2c;
  param_2[0xb7] = (int)piVar4;
  param_2[0xb8] = (int)&DAT_0187a934;
LAB_00e89c38:
  (*(code *)puVar3[3])(&local_550,piVar4,param_3);
  if (local_550 == (undefined *)0x6 && local_54c == (int *)0x0) {
    *(undefined1 *)(param_2 + 0xb9) = 3;
    uVar2 = 6;
LAB_00e8a418:
    *param_1 = 3;
    param_1[1] = 0;
    *(undefined1 *)((int)param_2 + 0x2d3) = uVar2;
    return;
  }
  puVar3 = (undefined4 *)param_2[0xb8];
  iVar18 = param_2[0xb7];
  pcVar11 = (code *)*puVar3;
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(iVar18);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(iVar18);
  }
  *(undefined1 *)(param_2 + 0xb9) = 1;
  param_2[0x68] = (int)local_550;
  param_2[0x69] = (int)local_54c;
  param_2[0x6a] = (int)local_548;
  param_2[0x6b] = local_544;
  param_2[0x6c] = local_540;
  param_2[0x6d] = local_53c;
  iVar18 = *(int *)param_2[0xb3];
  *(undefined1 *)(param_2 + 0xb9) = 0;
  param_2[0xb6] = iVar18 + 8;
switchD_00e89134_caseD_0:
  local_38 = (undefined *)param_2[0xb6];
  local_2c = local_2c & 0xffffff00;
  piVar4 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *piVar4 = (int)local_38;
  piVar4[1] = (int)local_34;
  piVar4[2] = iStack_30;
  puVar3 = &DAT_0187a894;
  piVar4[3] = local_2c;
  param_2[0xb7] = (int)piVar4;
  param_2[0xb8] = (int)&DAT_0187a894;
LAB_00e89d24:
  (*(code *)puVar3[3])(&local_550,piVar4,param_3);
  if (local_550 == (undefined *)0x3 && local_54c == (int *)0x0) {
    *(undefined1 *)(param_2 + 0xb9) = 3;
    uVar2 = 7;
    goto LAB_00e8a418;
  }
  puVar3 = (undefined4 *)param_2[0xb8];
  iVar18 = param_2[0xb7];
  pcVar11 = (code *)*puVar3;
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(iVar18);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(iVar18);
  }
  *(undefined1 *)(param_2 + 0xb9) = 1;
  FUN_016dd1aa(param_2 + 0x6e,&local_550,0x48);
  iVar18 = *(int *)param_2[0xb3];
  *(undefined1 *)(param_2 + 0xb9) = 0;
  param_2[0xb6] = iVar18 + 8;
switchD_00e891a0_caseD_0:
  local_550 = (undefined *)param_2[0xb6];
  local_544 = local_544 & 0xffffff00;
  piVar4 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *piVar4 = (int)local_550;
  piVar4[1] = (int)local_54c;
  piVar4[2] = (int)local_548;
  puVar3 = &DAT_0187a8f4;
  piVar4[3] = local_544;
  param_2[0xb7] = (int)piVar4;
  param_2[0xb8] = (int)&DAT_0187a8f4;
LAB_00e89e18:
  (*(code *)puVar3[3])(&local_38,piVar4,param_3);
  if (local_38 == (undefined *)0x80000001) {
    *(undefined1 *)(param_2 + 0xb9) = 3;
    uVar2 = 8;
    goto LAB_00e8a418;
  }
  puVar3 = (undefined4 *)param_2[0xb8];
  iVar18 = param_2[0xb7];
  pcVar11 = (code *)*puVar3;
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(iVar18);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(iVar18);
  }
  param_2[0xad] = (int)local_38;
  param_2[0xae] = (int)local_34;
  param_2[0xaf] = iStack_30;
  *(undefined1 *)(param_2 + 0xb9) = 1;
  iVar18 = *(int *)param_2[0xb3];
  *(undefined1 *)(param_2 + 0xb9) = 0;
  param_2[0xb6] = iVar18 + 8;
switchD_00e89208_caseD_0:
  local_38 = (undefined *)param_2[0xb6];
  local_2c = local_2c & 0xffffff00;
  piVar4 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *piVar4 = (int)local_38;
  piVar4[1] = (int)local_34;
  piVar4[2] = iStack_30;
  puVar3 = &DAT_0187a914;
  piVar4[3] = local_2c;
  param_2[0xb7] = (int)piVar4;
  param_2[0xb8] = (int)&DAT_0187a914;
LAB_00e89efc:
  (*(code *)puVar3[3])(&local_550,piVar4,param_3);
  if (local_550 == (undefined *)0x3 && local_54c == (int *)0x0) {
    *(undefined1 *)(param_2 + 0xb9) = 3;
    *param_1 = 3;
    param_1[1] = 0;
    *(undefined1 *)((int)param_2 + 0x2d3) = 9;
    return;
  }
  puVar3 = (undefined4 *)param_2[0xb8];
  iVar18 = param_2[0xb7];
  pcVar11 = (code *)*puVar3;
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(iVar18);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(iVar18);
  }
  *(undefined1 *)(param_2 + 0xb9) = 1;
  param_2[0x80] = (int)local_550;
  param_2[0x81] = (int)local_54c;
  param_2[0x82] = (int)local_548;
  param_2[0x83] = local_544;
  param_2[0x84] = local_540;
  param_2[0x85] = local_53c;
  param_2[0x86] = iStack_538;
  param_2[0x87] = iStack_534;
  param_2[0x88] = iStack_530;
  param_2[0x89] = local_52c;
  param_2[0x8a] = local_528;
  param_2[0x8b] = iStack_524;
  param_2[0x8c] = iStack_520;
  param_2[0x8d] = iStack_51c;
  iVar18 = *(int *)param_2[0xb3];
  *(undefined1 *)(param_2 + 0xb9) = 0;
  param_2[0xb6] = iVar18 + 8;
switchD_00e890f4_caseD_0:
  local_550 = (undefined *)param_2[0xb6];
  local_544 = local_544 & 0xffffff00;
  piVar4 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *piVar4 = (int)local_550;
  piVar4[1] = (int)local_54c;
  piVar4[2] = (int)local_548;
  puVar3 = &DAT_0187a994;
  piVar4[3] = local_544;
  param_2[0xb7] = (int)piVar4;
  param_2[0xb8] = (int)&DAT_0187a994;
LAB_00e8a010:
  (*(code *)puVar3[3])(&local_38,piVar4,param_3);
  if (local_38 == (undefined *)0x80000001) {
    *(undefined1 *)(param_2 + 0xb9) = 3;
    uVar2 = 10;
    goto LAB_00e8a418;
  }
  puVar3 = (undefined4 *)param_2[0xb8];
  iVar18 = param_2[0xb7];
  pcVar11 = (code *)*puVar3;
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(iVar18);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(iVar18);
  }
  param_2[0xb0] = (int)local_38;
  param_2[0xb1] = (int)local_34;
  param_2[0xb2] = iStack_30;
  *(undefined1 *)(param_2 + 0xb9) = 1;
  iVar18 = *(int *)param_2[0xb3];
  *(undefined1 *)(param_2 + 0xb9) = 0;
  param_2[0xb6] = iVar18 + 8;
switchD_00e8916c_caseD_0:
  local_38 = (undefined *)param_2[0xb6];
  local_2c = local_2c & 0xffffff00;
  piVar4 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *piVar4 = (int)local_38;
  piVar4[1] = (int)local_34;
  piVar4[2] = iStack_30;
  puVar3 = &DAT_0187a8b4;
  piVar4[3] = local_2c;
  param_2[0xb7] = (int)piVar4;
  param_2[0xb8] = (int)&DAT_0187a8b4;
LAB_00e8a0f4:
  (*(code *)puVar3[3])(&local_550,piVar4,param_3);
  if (local_550 == (undefined *)0x3 && local_54c == (int *)0x0) {
    *(undefined1 *)(param_2 + 0xb9) = 3;
    uVar2 = 0xb;
    goto LAB_00e8a7f8;
  }
  puVar3 = (undefined4 *)param_2[0xb8];
  iVar18 = param_2[0xb7];
  pcVar11 = (code *)*puVar3;
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(iVar18);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(iVar18);
  }
  *(undefined1 *)(param_2 + 0xb9) = 1;
  *param_2 = (int)local_550;
  param_2[1] = (int)local_54c;
  param_2[2] = (int)local_548;
  param_2[3] = local_544;
  param_2[4] = local_540;
  param_2[5] = local_53c;
  param_2[6] = iStack_538;
  param_2[7] = iStack_534;
  param_2[8] = iStack_530;
  param_2[9] = local_52c;
  param_2[10] = local_528;
  param_2[0xb] = iStack_524;
  param_2[0xc] = iStack_520;
  param_2[0xd] = iStack_51c;
  param_2[0xe] = iStack_518;
  param_2[0xf] = iStack_514;
  iVar18 = *(int *)param_2[0xb3];
  *(undefined1 *)(param_2 + 0xb9) = 0;
  param_2[0xb6] = iVar18 + 8;
switchD_00e892d0_caseD_0:
  local_38 = (undefined *)param_2[0xb6];
  local_2c = local_2c & 0xffffff00;
  piVar4 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *piVar4 = (int)local_38;
  piVar4[1] = (int)local_34;
  piVar4[2] = iStack_30;
  puVar3 = &DAT_0187a8d4;
  piVar4[3] = local_2c;
  param_2[0xb7] = (int)piVar4;
  param_2[0xb8] = (int)&DAT_0187a8d4;
LAB_00e8a1f4:
  (*(code *)puVar3[3])(&local_550,piVar4,param_3);
  if (local_550 == (undefined *)0x8 && local_54c == (int *)0x0) {
    *(undefined1 *)(param_2 + 0xb9) = 3;
    uVar2 = 0xc;
    goto LAB_00e8a7f8;
  }
  puVar3 = (undefined4 *)param_2[0xb8];
  iVar18 = param_2[0xb7];
  pcVar11 = (code *)*puVar3;
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(iVar18);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(iVar18);
  }
  *(undefined1 *)(param_2 + 0xb9) = 1;
  FUN_016dd1aa(param_2 + 0x10,&local_550,0x50);
  iVar18 = *(int *)param_2[0xb3];
  *(undefined1 *)(param_2 + 0xb9) = 0;
  param_2[0xb6] = iVar18 + 8;
switchD_00e8926c_caseD_0:
  local_38 = (undefined *)param_2[0xb6];
  local_2c = local_2c & 0xffffff00;
  piVar4 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *piVar4 = (int)local_38;
  piVar4[1] = (int)local_34;
  piVar4[2] = iStack_30;
  puVar3 = &DAT_0187a874;
  piVar4[3] = local_2c;
  param_2[0xb7] = (int)piVar4;
  param_2[0xb8] = (int)&DAT_0187a874;
LAB_00e8a2e8:
  (*(code *)puVar3[3])(&local_550,piVar4,param_3);
  if (local_550 == (undefined *)0xc && local_54c == (int *)0x0) {
    *(undefined1 *)(param_2 + 0xb9) = 3;
    uVar2 = 0xd;
    goto LAB_00e8a7f8;
  }
  puVar3 = (undefined4 *)param_2[0xb8];
  iVar18 = param_2[0xb7];
  pcVar11 = (code *)*puVar3;
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(iVar18);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(iVar18);
  }
  *(undefined1 *)(param_2 + 0xb9) = 1;
  param_2[0x8e] = (int)local_550;
  param_2[0x8f] = (int)local_54c;
  param_2[0x90] = (int)local_548;
  param_2[0x91] = local_544;
  param_2[0x92] = local_540;
  param_2[0x93] = local_53c;
  iVar18 = *(int *)param_2[0xb3];
  *(undefined1 *)(param_2 + 0xb9) = 0;
  param_2[0xb6] = iVar18 + 8;
switchD_00e890c0_caseD_0:
  local_38 = (undefined *)param_2[0xb6];
  local_2c = local_2c & 0xffffff00;
  piVar4 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *piVar4 = (int)local_38;
  piVar4[1] = (int)local_34;
  piVar4[2] = iStack_30;
  puVar3 = &DAT_0187a854;
  piVar4[3] = local_2c;
  param_2[0xb7] = (int)piVar4;
  param_2[0xb8] = (int)&DAT_0187a854;
LAB_00e8a3e0:
  (*(code *)puVar3[3])(&local_550,piVar4,param_3);
  if (local_550 == (undefined *)0x3 && local_54c == (int *)0x0) {
    *(undefined1 *)(param_2 + 0xb9) = 3;
    uVar2 = 0xe;
    goto LAB_00e8a418;
  }
  puVar3 = (undefined4 *)param_2[0xb8];
  iVar18 = param_2[0xb7];
  pcVar11 = (code *)*puVar3;
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(iVar18);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(iVar18);
  }
  *(undefined1 *)(param_2 + 0xb9) = 1;
  FUN_016dd1aa(param_2 + 0x94,&local_550,0x58);
  *(undefined1 *)((int)param_2 + 0x2d2) = 0;
  FUN_016dd1aa(param_2 + 0xba,piVar7,0x108);
  *(undefined1 *)((int)param_2 + 0x2d1) = 0;
  param_2[0xb6] = param_2[0xaa];
  param_2[0xb7] = param_2[0xab];
  param_2[0xb8] = param_2[0xac];
  iVar18 = *(int *)param_2[0xb3];
  *(undefined1 *)(param_2 + 0xff) = 0;
  iVar18 = iVar18 + 8;
  param_2[0xfc] = iVar18;
LAB_00e8a4b8:
  iVar18 = *(int *)(iVar18 + 0xc);
  param_2[0xfe] = -1;
  param_2[0xfd] = iVar18 + 8;
switchD_00e8929c_caseD_3:
  iVar18 = FUN_00e442f8(param_2 + 0xfd,param_3);
  if (iVar18 == 0) {
    *(undefined1 *)(param_2 + 0xff) = 3;
  }
  else {
    iVar6 = param_2[0xfd];
    if (iVar6 != 0) {
      FUN_00e44660(iVar6,param_2[0xfe],1);
    }
    if (*(int *)(iVar18 + 0x28) == 0) {
      uVar9 = 0;
      uVar20 = 0;
LAB_00e8aa78:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar9,uVar20,&DAT_0187e4f0);
    }
    if (**(char **)(iVar18 + 0x24) == '\0') {
      uVar20 = *(uint *)(iVar18 + 0x28);
      if (uVar20 < 2) {
        uVar9 = 1;
        goto LAB_00e8aa78;
      }
      if (*(char *)(*(int *)(iVar18 + 0x24) + 1) != '\0') {
        uVar20 = 2;
        uVar2 = 1;
        goto LAB_00e8a628;
      }
      uVar20 = *(uint *)(iVar18 + 0x28);
      if (uVar20 < 3) {
        uVar9 = 2;
        goto LAB_00e8aa78;
      }
      if (*(char *)(*(int *)(iVar18 + 0x24) + 2) != '\0') {
        uVar20 = 3;
        uVar2 = 2;
        goto LAB_00e8a628;
      }
      uVar20 = *(uint *)(iVar18 + 0x28);
      if (uVar20 < 4) {
        uVar9 = 3;
        goto LAB_00e8aa78;
      }
      if (*(char *)(*(int *)(iVar18 + 0x24) + 3) != '\0') {
        uVar20 = 4;
        uVar2 = 3;
        goto LAB_00e8a628;
      }
      uVar20 = *(uint *)(iVar18 + 0x28);
      if (uVar20 < 5) {
        uVar9 = 4;
        goto LAB_00e8aa78;
      }
      if (*(char *)(*(int *)(iVar18 + 0x24) + 4) == '\x01') {
        uVar20 = 5;
        uVar2 = 4;
        goto LAB_00e8a628;
      }
      piVar7 = (int *)&DAT_00000001;
      puVar19 = (undefined *)0x0;
      puVar23 = (undefined *)0x0;
    }
    else {
      uVar20 = 1;
      uVar2 = 0;
LAB_00e8a628:
      piVar7 = (int *)thunk_FUN_016d4a50(8);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,8);
      }
      local_550 = (undefined *)0x8;
      puVar19 = (undefined *)0x1;
      *(undefined1 *)piVar7 = uVar2;
      local_54c = piVar7;
      while (local_548 = puVar19, uVar20 < 5) {
        uVar12 = *(uint *)(iVar18 + 0x28);
        uVar16 = uVar20;
        if (uVar12 <= uVar20) {
LAB_00e8aa14:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar16,uVar12,&DAT_0187e4f0);
        }
        if (*(char *)(*(int *)(iVar18 + 0x24) + uVar20) == '\0') {
          if (uVar20 == 4) break;
          uVar14 = uVar20 + 1;
          uVar12 = *(uint *)(iVar18 + 0x28);
          uVar16 = uVar14 & 0xff;
          if (uVar12 <= uVar16) goto LAB_00e8aa14;
          if (*(char *)(*(int *)(iVar18 + 0x24) + uVar16) == '\0') {
            if (2 < uVar20) break;
            uVar14 = uVar20 + 2;
            uVar12 = *(uint *)(iVar18 + 0x28);
            uVar16 = uVar14 & 0xff;
            if (uVar12 <= uVar16) goto LAB_00e8aa14;
            if (*(char *)(*(int *)(iVar18 + 0x24) + uVar16) == '\0') {
              uVar17 = uVar20 | 4;
              if (5 < uVar17) break;
              uVar14 = uVar20 + 3;
              uVar12 = *(uint *)(iVar18 + 0x28);
              uVar16 = uVar14 & 0xff;
              if (uVar12 <= uVar16) goto LAB_00e8aa14;
              if (*(char *)(*(int *)(iVar18 + 0x24) + uVar16) != '\x01') break;
            }
            else {
              uVar17 = uVar20 + 3;
            }
          }
          else {
            uVar17 = uVar20 + 2;
          }
        }
        else {
          uVar17 = uVar20 + 1;
          uVar14 = uVar20;
        }
        if (puVar19 == local_550) {
          FUN_00edff4c(&local_550,puVar19,1,1,1);
          piVar7 = local_54c;
        }
        *(char *)((int)piVar7 + (int)puVar19) = (char)uVar14;
        puVar19 = puVar19 + 1;
        uVar20 = uVar17;
      }
      piVar7 = local_54c;
      puVar23 = local_550;
    }
    FUN_00e44900(iVar18);
    *(undefined1 *)(param_2 + 0xff) = 1;
    if (puVar23 != (undefined *)0x80000000) {
      iVar6 = param_2[0x66];
      iVar8 = param_2[0x67];
      iVar18 = param_2[0xb4];
      local_5d0 = param_2[0x68];
      iStack_5cc = param_2[0x69];
      iStack_5c8 = param_2[0x6a];
      iStack_5c4 = param_2[0x6b];
      iStack_5c0 = param_2[0x6c];
      iStack_5bc = param_2[0x6d];
      FUN_016dd1aa(auStack_7f0,param_2 + 0x6e,0x48);
      iVar13 = param_2[0xae];
      iVar15 = param_2[0xaf];
      param_1[0xb0] = param_2[0xad];
      param_1[0xb1] = iVar13;
      param_1[0xb2] = iVar15;
      local_7a8 = param_2[0x80];
      iStack_7a4 = param_2[0x81];
      iStack_7a0 = param_2[0x82];
      iStack_79c = param_2[0x83];
      local_798 = param_2[0x84];
      iStack_794 = param_2[0x85];
      iStack_790 = param_2[0x86];
      iStack_78c = param_2[0x87];
      iStack_788 = param_2[0x88];
      local_784 = param_2[0x89];
      iStack_780 = param_2[0x8a];
      iStack_77c = param_2[0x8b];
      iStack_778 = param_2[0x8c];
      iStack_774 = param_2[0x8d];
      iVar13 = param_2[0xb1];
      iVar15 = param_2[0xb2];
      param_1[0xb3] = param_2[0xb0];
      param_1[0xb4] = iVar13;
      param_1[0xb5] = iVar15;
      local_770 = *param_2;
      iStack_76c = param_2[1];
      iStack_768 = param_2[2];
      iStack_764 = param_2[3];
      iStack_760 = param_2[4];
      local_75c = param_2[5];
      iStack_758 = param_2[6];
      iStack_754 = param_2[7];
      iStack_750 = param_2[8];
      iStack_74c = param_2[9];
      local_748 = param_2[10];
      iStack_744 = param_2[0xb];
      iStack_740 = param_2[0xc];
      iStack_73c = param_2[0xd];
      iStack_738 = param_2[0xe];
      iStack_734 = param_2[0xf];
      FUN_016dd1aa(auStack_5b8,param_2 + 0x10,0x50);
      local_568 = param_2[0x8e];
      iStack_564 = param_2[0x8f];
      iStack_560 = param_2[0x90];
      iStack_55c = param_2[0x91];
      iStack_558 = param_2[0x92];
      iStack_554 = param_2[0x93];
      FUN_016dd1aa(auStack_730,param_2 + 0x94,0x58);
      FUN_016dd1aa(auStack_6d8,param_2 + 0xba,0x108);
      *(undefined2 *)((int)param_2 + 0x2d1) = 0;
      iVar13 = param_2[0xb7];
      iVar15 = param_2[0xb8];
      param_1[0xaa] = param_2[0xb6];
      param_1[0xab] = iVar13;
      param_1[0xac] = iVar15;
      FUN_016dd1aa(param_1,auStack_7f0,0x2a0);
      *(char *)(param_1 + 0xb6) = (char)iVar18;
      param_1[0xad] = puVar23;
      param_1[0xae] = piVar7;
      param_1[0xa8] = iVar6;
      param_1[0xaf] = puVar19;
      param_1[0xa9] = iVar8;
      *(undefined1 *)((int)param_2 + 0x2d3) = 1;
      return;
    }
  }
  uVar2 = 0xf;
LAB_00e8a7f8:
  *param_1 = 3;
  param_1[1] = 0;
  *(undefined1 *)((int)param_2 + 0x2d3) = uVar2;
  return;
}

