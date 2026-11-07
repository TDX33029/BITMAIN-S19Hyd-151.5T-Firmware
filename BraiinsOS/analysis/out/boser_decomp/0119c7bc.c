// FUN_0119c7bc @ 0119c7bc size=400 calls_out=6 calls_in=0
// strings: 

void FUN_0119c7bc(undefined1 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (param_1[0x1a0] != '\0') {
    if (param_1[0x1a0] != '\x03') {
      return;
    }
    cVar1 = param_1[0x19c];
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = param_1[0x160];
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x168));
    }
    FUN_00a27c50(param_1 + 0x40);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0x100));
    if (*(int *)(param_1 + 0xf0) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf4));
    }
    piVar2 = *(int **)(param_1 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    }
    piVar2 = *(int **)(param_1 + 200);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 200));
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_01aae24c();
    }
    iVar3 = 0x18;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*param_1) {
    default:
switchD_0119c890_caseD_0:
      return;
    case 2:
      break;
    case 3:
switchD_0119c890_caseD_3:
      iVar3 = 0x10;
      break;
    case 4:
switchD_0119c890_caseD_4:
      iVar3 = 4;
    }
switchD_0119c890_caseD_2:
    FUN_019bb7e0(*(undefined4 *)(param_1 + iVar3),*(undefined4 *)((int)(param_1 + iVar3) + 4));
    return;
  }
  piVar2 = *(int **)(param_1 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  }
  piVar2 = *(int **)(param_1 + 200);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 200));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_01aae24c();
  }
  iVar3 = 0x18;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  default:
    goto switchD_0119c890_caseD_0;
  case 2:
    goto switchD_0119c890_caseD_2;
  case 3:
    goto switchD_0119c890_caseD_3;
  case 4:
    goto switchD_0119c890_caseD_4;
  }
}

