// FUN_00e80058 @ 00e80058 size=1720 calls_out=18 calls_in=0
// strings: 

void FUN_00e80058(int *param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int extraout_r1;
  int iVar12;
  int extraout_r1_00;
  int iVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  int *piVar16;
  code *pcVar17;
  int *piVar18;
  undefined1 uVar19;
  int *piVar20;
  bool bVar21;
  undefined8 uVar22;
  int *local_90;
  int local_8c;
  int local_88 [25];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xc9)) {
  case 0:
    iVar7 = *(int *)(param_2 + 0xc4);
    *(undefined1 *)(param_2 + 200) = 1;
    *(int *)(param_2 + 0xc0) = iVar7;
    FUN_016dd1aa(param_2,param_2 + 0x60,0x60);
    uVar15 = *(undefined4 *)(iVar7 + 0x10);
    puVar8 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,4);
    }
    uVar6 = *(undefined4 *)(param_2 + 0x4c);
    *puVar8 = uVar15;
    uVar22 = FUN_0079e04c(uVar6,puVar8,&DAT_0187b020);
    puVar8 = (undefined4 *)((ulonglong)uVar22 >> 0x20);
    pcVar17 = (code *)*puVar8;
    if (pcVar17 != (code *)0x0) {
      (*pcVar17)((int)uVar22);
    }
    if (puVar8[1] != 0) {
      thunk_FUN_016d3fb4((int)uVar22);
    }
    *(int *)(param_2 + 0xd0) = param_2;
    *(undefined1 *)(param_2 + 0xd8) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187b038);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187b038);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xf1)) {
    case 0:
      iVar7 = *(int *)(param_2 + 0xe8);
      piVar20 = *(int **)(param_2 + 0xec);
      goto LAB_00e8025c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b0f4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b0f4);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xe5)) {
      case 0:
        iVar7 = *(int *)(param_2 + 0xdc);
        piVar20 = *(int **)(param_2 + 0xe0);
        goto LAB_00e802a0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187aeb0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187aeb0);
      }
    }
    goto switchD_00e801c4_caseD_3;
  }
  cVar5 = FUN_00e83ebc(param_2 + 0xd0,param_3);
  if (cVar5 == '\x02') {
    uVar19 = 3;
LAB_00e80338:
    param_1[4] = 0x3b9aca01;
    *(undefined1 *)(param_2 + 0xc9) = uVar19;
    return;
  }
  if (*(char *)(param_2 + 0xd8) == '\x04') {
    cVar5 = *(char *)(param_2 + 0x120);
    bVar21 = cVar5 == '\x03';
    if (bVar21) {
      cVar5 = *(char *)(param_2 + 0x11c);
    }
    if (bVar21 && cVar5 == '\x03') {
      FUN_00de3884(param_2 + 0xe4);
    }
    FUN_00e44900(*(undefined4 *)(param_2 + 0xd4));
  }
  else if ((*(char *)(param_2 + 0xd8) == '\x03') && (*(int *)(param_2 + 0xdc) != 0)) {
    FUN_00e44660(*(int *)(param_2 + 0xdc),*(undefined4 *)(param_2 + 0xe0),1);
  }
  piVar20 = *(int **)(*(int *)(param_2 + 0xc0) + 0x48);
  do {
    iVar7 = *piVar20;
    bVar21 = (bool)hasExclusiveAccess(piVar20);
  } while (!bVar21);
  *piVar20 = iVar7 + 1;
  if (iVar7 < 0) goto LAB_00e80760;
  piVar18 = piVar20 + 0x11;
  do {
    bVar21 = (bool)hasExclusiveAccess(piVar18);
  } while (!bVar21);
  *piVar18 = *piVar18 + 1;
  *(int *)(param_2 + 0xe8) = param_2;
  *(undefined1 *)(param_2 + 0xf1) = 0;
  *(int **)(param_2 + 0xec) = piVar20;
  iVar7 = param_2;
LAB_00e8025c:
  *(undefined1 *)(param_2 + 0xf0) = 1;
  local_90 = piVar20;
  iVar7 = (**(code **)(*(int *)(iVar7 + 0xc) + 0x28))
                    (*(int *)(iVar7 + 8) + (*(int *)(*(int *)(iVar7 + 0xc) + 8) - 1U & 0xfffffff8) +
                     8);
  *(undefined1 *)(param_2 + 0xe5) = 0;
  *(int *)(param_2 + 0xdc) = iVar7;
  *(int **)(param_2 + 0xe0) = piVar20;
  *(undefined1 *)(param_2 + 0xf0) = 0;
LAB_00e802a0:
  *(int **)(param_2 + 0xd8) = piVar20;
  *(undefined1 *)(param_2 + 0xe4) = 1;
  iVar7 = *(int *)(iVar7 + 0x5c);
  *(undefined4 *)(param_2 + 0xd4) = 0xffffffff;
  *(int *)(param_2 + 0xd0) = iVar7 + 8;
switchD_00e801c4_caseD_3:
  piVar20 = (int *)(param_2 + 0xd0);
  iVar7 = FUN_00e442f8(piVar20,param_3);
  if (iVar7 == 0) {
    *(undefined1 *)(param_2 + 0xe5) = 3;
    *(undefined1 *)(param_2 + 0xf1) = 3;
    uVar19 = 4;
    goto LAB_00e80338;
  }
  if (*piVar20 != 0) {
    FUN_00e44660(*piVar20,*(undefined4 *)(param_2 + 0xd4),1);
  }
  *(undefined1 *)(param_2 + 0xe4) = 0;
  piVar18 = *(int **)(iVar7 + 0x20);
  *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(param_2 + 0xd8);
  FUN_00e44900();
  *(undefined1 *)(param_2 + 0xf0) = 0;
  *(undefined2 *)(param_2 + 0xe4) = 0x100;
  *(undefined1 *)(param_2 + 0xf1) = 1;
  FUN_00e8405c(piVar20);
  if (piVar18 != (int *)0x0) {
    piVar20 = piVar18 + 0x11;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar20;
      bVar21 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar21);
    *piVar20 = iVar7 + -1;
    DataMemoryBarrier(0xb);
    if (iVar7 == 1) {
      piVar20 = piVar18 + 4;
      if ((char)*piVar20 == '\0') {
        bVar21 = (bool)hasExclusiveAccess(piVar20);
        if (!bVar21) goto LAB_00e803c4;
        *(char *)piVar20 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00e803c4:
        FUN_01280da8(piVar20);
      }
      FUN_0128236c(piVar20);
      *(undefined1 *)(piVar18 + 0xb) = 1;
      FUN_0072a978(piVar18 + 2,piVar20);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar18;
      bVar21 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar21);
    *piVar18 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078205c(piVar18);
    }
  }
  *(undefined1 *)(param_2 + 200) = 0;
  FUN_016dd1aa(local_88,param_2,0x60);
  local_8c = 1;
  local_90 = (int *)&DAT_00000001;
  piVar20 = (int *)thunk_FUN_016d4a50(0x68);
  if (piVar20 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x68);
  }
  FUN_016dd1aa(piVar20,&local_90,0x68);
  piVar18 = *(int **)(*(int *)(param_2 + 0xc0) + 0x44);
  do {
    iVar7 = *piVar18;
    bVar21 = (bool)hasExclusiveAccess(piVar18);
  } while (!bVar21);
  *piVar18 = iVar7 + 1;
  if (-1 < iVar7) {
    iVar7 = *(int *)(param_2 + 0xc0);
    uVar1 = *(undefined2 *)(iVar7 + 0x4e);
    uVar2 = *(undefined2 *)(iVar7 + 0x4c);
    do {
      iVar11 = *piVar20;
      bVar21 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar21);
    *piVar20 = iVar11 + 1;
    if (-1 < iVar11) {
      piVar16 = *(int **)(iVar7 + 0x40);
      do {
        iVar7 = *piVar16;
        bVar21 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar21);
      *piVar16 = iVar7 + 1;
      if (-1 < iVar7) {
        puVar8 = (undefined4 *)thunk_FUN_016d4a50(8);
        if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,8);
        }
        *puVar8 = piVar16;
        puVar8[1] = 0x10001;
        uVar14 = (undefined2)piVar16[2];
        if (1 < (piVar16[2] & 0xffffU)) {
          uVar14 = 1;
          puVar8[1] = 0x10002;
        }
        pcVar17 = *(code **)(piVar20[5] + 0x2c);
        iVar11 = piVar20[4] + (*(int *)(piVar20[5] + 8) - 1U & 0xfffffff8) + 8;
        (*pcVar17)(iVar11);
        piVar16 = (int *)(**(code **)(extraout_r1 + 0x30))();
        iVar7 = *piVar16;
        iVar12 = piVar16[1];
        ClearExclusiveLocal();
        FUN_015f3b0c(&local_90,1);
        (*pcVar17)(iVar11);
        piVar16 = (int *)(**(code **)(extraout_r1_00 + 0x34))();
        iVar11 = *piVar16;
        iVar13 = piVar16[1];
        ClearExclusiveLocal();
        FUN_015f3b0c(&local_90,1);
        puVar9 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        *puVar9 = 1;
        puVar9[1] = 1;
        puVar9[2] = piVar18;
        puVar10 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        *(undefined2 *)((int)puVar10 + 10) = uVar1;
        *(undefined2 *)(puVar10 + 2) = uVar2;
        *puVar10 = 1;
        puVar10[1] = 1;
        FUN_015f3b0c(&local_90,1);
        iVar4 = local_88[0];
        iVar3 = local_8c;
        piVar18 = local_90;
        FUN_015f3b0c(&local_90,1);
        param_1[6] = (int)local_90;
        param_1[7] = local_8c;
        param_1[0x10] = iVar7;
        param_1[0x11] = iVar12;
        param_1[0x12] = iVar11;
        param_1[0x13] = iVar13;
        *(undefined1 *)(param_2 + 200) = 0;
        param_1[4] = iVar4;
        param_1[2] = (int)piVar18;
        param_1[3] = iVar3;
        param_1[10] = (int)puVar8;
        param_1[0xb] = (int)&DAT_0187b164;
        param_1[0xc] = (int)puVar9;
        param_1[0xd] = (int)&DAT_0187b17c;
        *param_1 = (int)piVar20;
        param_1[0xe] = (int)puVar10;
        param_1[0xf] = (int)&DAT_0187b194;
        param_1[8] = local_88[0];
        *(undefined1 *)(param_1 + 0x18) = 1;
        param_1[0x16] = (int)piVar20;
        param_1[0x17] = 0x1000a;
        *(undefined2 *)((int)param_1 + 0x56) = uVar14;
        *(undefined2 *)(param_1 + 0x15) = 1;
        *(undefined2 *)((int)param_1 + 0x52) = uVar14;
        *(undefined2 *)(param_1 + 0x14) = 1;
        *(undefined1 *)(param_2 + 0xc9) = 1;
        return;
      }
    }
  }
LAB_00e80760:
                    /* WARNING: Does not return */
  pcVar17 = (code *)software_udf(0xfdee,0xe80760);
  (*pcVar17)();
}

