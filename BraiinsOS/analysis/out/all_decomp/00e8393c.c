// FUN_00e8393c @ 00e8393c size=896 calls_out=5 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x00e83bac) */
/* WARNING: Removing unreachable block (ram,0x00e83bf0) */

undefined4 FUN_00e8393c(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  char cVar9;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 0:
    piVar7 = (int *)*param_1;
    pcVar4 = (char *)(*piVar7 + 8);
    do {
      cVar9 = *pcVar4;
      bVar2 = (bool)hasExclusiveAccess(pcVar4);
    } while (!bVar2);
    *pcVar4 = '\x01';
    if (cVar9 != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 1;
      return 1;
    }
    piVar7 = piVar7 + 1;
    param_1[1] = piVar7;
    *(undefined1 *)(param_1 + 0xb) = 0;
LAB_00e83a2c:
    iVar5 = (**(code **)(piVar7[1] + 0x28))
                      (*piVar7 + (*(int *)(piVar7[1] + 8) - 1U & 0xfffffff8) + 8);
    param_1[2] = iVar5;
    param_1[3] = piVar7;
    *(undefined1 *)(param_1 + 10) = 0;
LAB_00e83a68:
    *(undefined1 *)((int)param_1 + 0x25) = 0;
    iVar5 = iVar5 + 4;
    param_1[7] = iVar5;
    param_1[8] = piVar7;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187af50);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187af50);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xb)) {
    case 0:
      piVar7 = (int *)param_1[1];
      goto LAB_00e83a2c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b124);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b124);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 10)) {
    case 0:
      iVar5 = param_1[2];
      piVar7 = (int *)param_1[3];
      goto LAB_00e83a68;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187aec0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187aec0);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_1 + 0x25)) {
      case 0:
        iVar5 = param_1[7];
        piVar7 = (int *)param_1[8];
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187aef0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187aef0);
      case 3:
        goto switchD_00e83c28_caseD_3;
      }
    }
  }
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[4] = iVar5 + 4;
  param_1[5] = 0xffffffff;
  param_1[6] = piVar7;
switchD_00e83c28_caseD_3:
  iVar5 = FUN_00e442f8(param_1 + 4,param_2);
  if (iVar5 == 0) {
    *(undefined1 *)((int)param_1 + 0x25) = 3;
    *(undefined1 *)(param_1 + 10) = 3;
    *(undefined1 *)(param_1 + 0xb) = 3;
    *(undefined1 *)(param_1 + 0xc) = 3;
    return 2;
  }
  iVar6 = param_1[4];
  if (iVar6 != 0) {
    FUN_00e44660(iVar6,param_1[5],1);
  }
  cVar9 = *(char *)(*(int *)(iVar5 + 0x20) + 8);
LAB_00e83af0:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar9) {
  case '\0':
  case '\t':
    pcVar4 = (char *)(*(int *)(iVar5 + 0x20) + 8);
    while (cVar3 = *pcVar4, *pcVar4 == cVar9) {
      bVar2 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar2) {
        *pcVar4 = '\x01';
LAB_00e83c48:
        *(undefined1 *)(param_1 + 9) = 0;
        piVar7 = *(int **)param_1[6];
        iVar6 = ((undefined4 *)param_1[6])[1];
        do {
          iVar8 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar8 + 1;
        if (iVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xe83d38);
          (*pcVar1)();
        }
        (**(code **)(iVar6 + 0x34))();
        goto switchD_00e83afc_caseD_1;
      }
    }
    break;
  default:
    goto switchD_00e83afc_caseD_1;
  case '\x04':
    pcVar4 = (char *)(*(int *)(iVar5 + 0x20) + 8);
    while (cVar3 = *pcVar4, *pcVar4 == '\x04') {
      bVar2 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar2) {
        *pcVar4 = '\a';
        goto switchD_00e83afc_caseD_1;
      }
    }
    goto LAB_00e83be0;
  case '\x05':
  case '\x06':
    pcVar4 = (char *)(*(int *)(iVar5 + 0x20) + 8);
    while (cVar3 = *pcVar4, *pcVar4 == cVar9) {
      bVar2 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar2) {
        *pcVar4 = '\b';
        goto switchD_00e83afc_caseD_1;
      }
    }
LAB_00e83be0:
    cVar9 = cVar3;
    ClearExclusiveLocal();
    goto LAB_00e83af0;
  case '\n':
    pcVar4 = (char *)(*(int *)(iVar5 + 0x20) + 8);
    while (cVar3 = *pcVar4, *pcVar4 == '\n') {
      bVar2 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar2) {
        *pcVar4 = '\x02';
        goto LAB_00e83c48;
      }
    }
  }
  cVar9 = cVar3;
  ClearExclusiveLocal();
  goto LAB_00e83af0;
switchD_00e83afc_caseD_1:
  FUN_00e44900(iVar5);
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined2 *)(param_1 + 9) = 0x100;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return 0;
}

