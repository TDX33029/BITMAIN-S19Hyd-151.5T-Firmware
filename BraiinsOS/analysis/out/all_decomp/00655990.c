// FUN_00655990 @ 00655990 size=1184 calls_out=11 calls_in=2
// strings: 

void FUN_00655990(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == '\0') {
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    goto LAB_00655e50;
  }
  if (cVar1 == '\x03') {
    FUN_0064368c(param_1 + 3);
    goto switchD_006559cc_caseD_1;
  }
  if (cVar1 != '\x04') {
    return;
  }
  if (7 < *(byte *)((int)param_1 + 0x4d6)) goto switchD_006559cc_caseD_1;
  switch(*(byte *)((int)param_1 + 0x4d6)) {
  case 0:
    puVar2 = param_1 + 0x134;
    piVar3 = (int *)*puVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    goto LAB_00655e20;
  default:
    goto switchD_006559cc_caseD_1;
  case 3:
    if (param_1[0x136] != 0) {
      FUN_006f5fbc(param_1[0x136],param_1[0x137],1);
    }
    goto LAB_00655e00;
  case 4:
    if (*(char *)(param_1 + 0x13e) == '\x03') {
      if ((*(char *)(param_1 + 0x13d) == '\x03') && (param_1[0x13b] != 0)) {
        FUN_006f5d1c(param_1[0x13b],param_1[0x13c],1);
      }
      piVar3 = (int *)param_1[0x139];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aaaeec(param_1[0x139]);
      }
      piVar3 = (int *)param_1[0x138];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00791350(param_1[0x138]);
      }
    }
    else if (*(char *)(param_1 + 0x13e) == '\0') {
      piVar3 = (int *)param_1[0x136];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00791350(param_1[0x136]);
      }
      piVar3 = (int *)param_1[0x137];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aaaeec(param_1[0x137]);
      }
    }
    goto LAB_00655dc8;
  case 5:
    switch(*(undefined1 *)((int)param_1 + 0x4f6)) {
    case 0:
      piVar3 = (int *)param_1[0x13a];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00791350(param_1[0x13a]);
      }
      piVar3 = (int *)param_1[0x13b];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aaaeec(param_1[0x13b]);
      }
    default:
      goto switchD_00655b1c_caseD_1;
    case 3:
      if (*(char *)((int)param_1 + 0x50d) == '\x03') {
        if (param_1[0x13e] != 0) {
          FUN_006f5fbc(param_1[0x13e],param_1[0x13f],1);
        }
        piVar3 = (int *)param_1[0x140];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar5 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar5);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00791880(param_1[0x140]);
        }
        *(undefined1 *)(param_1 + 0x143) = 0;
      }
      else if (*(char *)((int)param_1 + 0x50d) == '\0') {
        piVar3 = (int *)param_1[0x142];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar5 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar5);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00791880(param_1[0x142]);
        }
      }
      break;
    case 4:
      if (param_1[0x13e] != 0) {
        FUN_006f5fbc(param_1[0x13e],param_1[0x13f],1);
      }
      break;
    case 5:
      FUN_00a07b4c(param_1 + 0x13e);
    }
    if (*(char *)(param_1 + 0x13d) != '\0') {
      piVar3 = (int *)param_1[0x139];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00791880(param_1[0x139]);
      }
    }
    piVar3 = (int *)param_1[0x138];
    *(undefined2 *)(param_1 + 0x13d) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00791350(param_1[0x138]);
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x1e8) == '\x03') {
      if ((*(char *)(param_1 + 0x1e5) == '\x03') && (param_1[0x1e0] != 0)) {
        FUN_006f5d1c(param_1[0x1e0],param_1[0x1e1],1);
      }
      puVar2 = param_1 + 0x1a2;
LAB_00655c6c:
      FUN_00643a80(puVar2);
    }
    else if (*(char *)(param_1 + 0x1e8) == '\0') {
      puVar2 = param_1 + 0x16c;
      goto LAB_00655c6c;
    }
    *(undefined1 *)((int)param_1 + 0x4d5) = 0;
    break;
  case 7:
    cVar1 = *(char *)(param_1 + 0x13c);
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = *(char *)(param_1 + 0x13b);
    }
    if ((bVar5 && cVar1 == '\x03') && (param_1[0x139] != 0)) {
      FUN_006f5d1c(param_1[0x139],param_1[0x13a],1);
    }
  }
switchD_00655b1c_caseD_1:
  FUN_006440d8(param_1 + 0x20);
  FUN_0064a1f4(param_1 + 4);
LAB_00655dc8:
  piVar3 = (int *)param_1[0x132];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(param_1[0x132]);
  }
  FUN_006f625c(param_1[0x131]);
LAB_00655e00:
  puVar2 = param_1 + 0x130;
  piVar3 = (int *)*puVar2;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar4 + -1;
LAB_00655e20:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00791350(*puVar2);
  }
switchD_006559cc_caseD_1:
  param_1 = param_1 + 1;
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar4 + -1;
LAB_00655e50:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00791350(*param_1);
    return;
  }
  return;
}

