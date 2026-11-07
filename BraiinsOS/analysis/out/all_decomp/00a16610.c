// FUN_00a16610 @ 00a16610 size=1152 calls_out=5 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x00a168f0) */
/* WARNING: Removing unreachable block (ram,0x00a16934) */

undefined4 FUN_00a16610(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char cVar9;
  undefined4 uVar10;
  int *local_2c;
  int *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[2]) {
  case '\0':
    param_1[3] = *param_1 + 0x18;
    param_1[4] = -1;
  case '\x03':
    iVar4 = FUN_00aa0cf8(param_1 + 3,param_2);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 2) = 3;
      return 2;
    }
    param_1[1] = iVar4;
    if (param_1[3] != 0) {
      FUN_00aa0a58(param_1[3],param_1[4],1);
      iVar4 = param_1[1];
    }
    *(undefined1 *)(param_1 + 0xf) = 0;
    piVar5 = (int *)(iVar4 + 0x20);
    param_1[3] = (int)piVar5;
LAB_00a166d4:
    pcVar7 = (char *)(*piVar5 + 8);
    do {
      cVar9 = *pcVar7;
      bVar2 = (bool)hasExclusiveAccess(pcVar7);
    } while (!bVar2);
    *pcVar7 = '\x01';
    uVar10 = 1;
    if (cVar9 != '\0') {
LAB_00a16a0c:
      *(undefined1 *)(param_1 + 0xf) = 1;
      FUN_00aa13c0(param_1[1]);
      *(undefined1 *)(param_1 + 2) = 1;
      return uVar10;
    }
    piVar5 = piVar5 + 1;
    param_1[4] = (int)piVar5;
    *(undefined1 *)(param_1 + 0xe) = 0;
LAB_00a1675c:
    iVar4 = (**(code **)(piVar5[1] + 0x28))
                      (*piVar5 + (*(int *)(piVar5[1] + 8) - 1U & 0xfffffff8) + 8);
    param_1[5] = iVar4;
    param_1[6] = (int)piVar5;
    *(undefined1 *)(param_1 + 0xd) = 0;
LAB_00a167a4:
    *(undefined1 *)((int)param_1 + 0x31) = 0;
    iVar4 = iVar4 + 4;
    param_1[10] = iVar4;
    param_1[0xb] = (int)piVar5;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187b0b4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187b0b4);
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xf]) {
    case '\0':
      piVar5 = (int *)param_1[3];
      goto LAB_00a166d4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187af50);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187af50);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xe]) {
    case '\0':
      piVar5 = (int *)param_1[4];
      goto LAB_00a1675c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b124);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b124);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xd]) {
    case '\0':
      iVar4 = param_1[5];
      piVar5 = (int *)param_1[6];
      goto LAB_00a167a4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187aec0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187aec0);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_1 + 0x31)) {
      case 0:
        iVar4 = param_1[10];
        piVar5 = (int *)param_1[0xb];
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187aef0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187aef0);
      case 3:
        goto switchD_00a16a44_caseD_3;
      }
    }
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[7] = iVar4 + 4;
  param_1[8] = -1;
  param_1[9] = (int)piVar5;
switchD_00a16a44_caseD_3:
  local_28 = param_1 + 0xe;
  local_2c = param_1 + 0xf;
  iVar4 = FUN_00aa0cf8(param_1 + 7,param_2);
  if (iVar4 == 0) {
    *(undefined1 *)((int)param_1 + 0x31) = 3;
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)local_28 = 3;
    *(undefined1 *)local_2c = 3;
    *(undefined1 *)(param_1 + 2) = 4;
    return 2;
  }
  iVar6 = param_1[7];
  if (iVar6 != 0) {
    FUN_00aa0a58(iVar6,param_1[8],1);
  }
  cVar9 = *(char *)(*(int *)(iVar4 + 0x20) + 8);
LAB_00a16834:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar9) {
  case '\0':
  case '\t':
    pcVar7 = (char *)(*(int *)(iVar4 + 0x20) + 8);
    while (cVar3 = *pcVar7, *pcVar7 == cVar9) {
      bVar2 = (bool)hasExclusiveAccess(pcVar7);
      if (bVar2) {
        *pcVar7 = '\x01';
LAB_00a169b8:
        *(undefined1 *)(param_1 + 0xc) = 0;
        piVar5 = *(int **)param_1[9];
        iVar6 = ((undefined4 *)param_1[9])[1];
        do {
          iVar8 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar8 + 1;
        if (iVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xa16b28);
          (*pcVar1)();
        }
        (**(code **)(iVar6 + 0x34))();
        goto switchD_00a16840_caseD_1;
      }
    }
    break;
  default:
    goto switchD_00a16840_caseD_1;
  case '\x04':
    pcVar7 = (char *)(*(int *)(iVar4 + 0x20) + 8);
    while (cVar3 = *pcVar7, *pcVar7 == '\x04') {
      bVar2 = (bool)hasExclusiveAccess(pcVar7);
      if (bVar2) {
        *pcVar7 = '\a';
        goto switchD_00a16840_caseD_1;
      }
    }
    goto LAB_00a16924;
  case '\x05':
  case '\x06':
    pcVar7 = (char *)(*(int *)(iVar4 + 0x20) + 8);
    while (cVar3 = *pcVar7, *pcVar7 == cVar9) {
      bVar2 = (bool)hasExclusiveAccess(pcVar7);
      if (bVar2) {
        *pcVar7 = '\b';
        goto switchD_00a16840_caseD_1;
      }
    }
LAB_00a16924:
    cVar9 = cVar3;
    ClearExclusiveLocal();
    goto LAB_00a16834;
  case '\n':
    pcVar7 = (char *)(*(int *)(iVar4 + 0x20) + 8);
    while (cVar3 = *pcVar7, *pcVar7 == '\n') {
      bVar2 = (bool)hasExclusiveAccess(pcVar7);
      if (bVar2) {
        *pcVar7 = '\x02';
        goto LAB_00a169b8;
      }
    }
  }
  cVar9 = cVar3;
  ClearExclusiveLocal();
  goto LAB_00a16834;
switchD_00a16840_caseD_1:
  FUN_00aa13c0(iVar4);
  uVar10 = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0x100;
  goto LAB_00a16a0c;
}

