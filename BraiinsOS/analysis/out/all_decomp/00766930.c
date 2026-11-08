// FUN_00766930 @ 00766930 size=1404 calls_out=12 calls_in=2
// strings: 

void FUN_00766930(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  switch(*(undefined1 *)(param_1 + 2)) {
  case 0:
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    goto LAB_00766ee4;
  default:
    return;
  case 3:
    cVar1 = *(char *)(param_1 + 6);
    if (cVar1 == '\0') {
      puVar2 = param_1 + 4;
      piVar3 = (int *)*puVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      goto LAB_00766e70;
    }
    if (cVar1 == '\x03') {
      FUN_0064368c(param_1 + 7);
      goto switchD_007669d8_caseD_1;
    }
    if (cVar1 != '\x04') goto LAB_00766e84;
    if (7 < *(byte *)((int)param_1 + 0x4e6)) goto switchD_007669d8_caseD_1;
    switch(*(byte *)((int)param_1 + 0x4e6)) {
    case 0:
      puVar2 = param_1 + 0x138;
      piVar3 = (int *)*puVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      goto LAB_00766e3c;
    default:
      goto switchD_007669d8_caseD_1;
    case 3:
      if (param_1[0x13a] != 0) {
        FUN_006f5fbc(param_1[0x13a],param_1[0x13b],1);
      }
      goto LAB_00766e1c;
    case 4:
      if (*(char *)(param_1 + 0x142) == '\x03') {
        if ((*(char *)(param_1 + 0x141) == '\x03') && (param_1[0x13f] != 0)) {
          FUN_006f5d1c(param_1[0x13f],param_1[0x140],1);
        }
        piVar3 = (int *)param_1[0x13d];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar5 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar5);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aaaeec(param_1[0x13d]);
        }
        piVar3 = (int *)param_1[0x13c];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar5 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar5);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00791350(param_1[0x13c]);
        }
      }
      else if (*(char *)(param_1 + 0x142) == '\0') {
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
      }
      goto LAB_00766de4;
    case 5:
      switch(*(undefined1 *)((int)param_1 + 0x506)) {
      case 0:
        piVar3 = (int *)param_1[0x13e];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar5 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar5);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00791350(param_1[0x13e]);
        }
        piVar3 = (int *)param_1[0x13f];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar5 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar5);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aaaeec(param_1[0x13f]);
        }
      default:
        goto switchD_00766b38_caseD_1;
      case 3:
        if (*(char *)((int)param_1 + 0x51d) == '\x03') {
          if (param_1[0x142] != 0) {
            FUN_006f5fbc(param_1[0x142],param_1[0x143],1);
          }
          piVar3 = (int *)param_1[0x144];
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar3;
            bVar5 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar5);
          *piVar3 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00791880(param_1[0x144]);
          }
          *(undefined1 *)(param_1 + 0x147) = 0;
        }
        else if (*(char *)((int)param_1 + 0x51d) == '\0') {
          piVar3 = (int *)param_1[0x146];
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar3;
            bVar5 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar5);
          *piVar3 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00791880(param_1[0x146]);
          }
        }
        break;
      case 4:
        if (param_1[0x142] != 0) {
          FUN_006f5fbc(param_1[0x142],param_1[0x143],1);
        }
        break;
      case 5:
        FUN_00a07b4c(param_1 + 0x142);
      }
      if (*(char *)(param_1 + 0x141) != '\0') {
        piVar3 = (int *)param_1[0x13d];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar5 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar5);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00791880(param_1[0x13d]);
        }
      }
      piVar3 = (int *)param_1[0x13c];
      *(undefined2 *)(param_1 + 0x141) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00791350(param_1[0x13c]);
      }
      break;
    case 6:
      if (*(char *)(param_1 + 0x1ec) == '\x03') {
        if ((*(char *)(param_1 + 0x1e9) == '\x03') && (param_1[0x1e4] != 0)) {
          FUN_006f5d1c(param_1[0x1e4],param_1[0x1e5],1);
        }
        puVar2 = param_1 + 0x1a6;
LAB_00766c88:
        FUN_00643a80(puVar2);
      }
      else if (*(char *)(param_1 + 0x1ec) == '\0') {
        puVar2 = param_1 + 0x170;
        goto LAB_00766c88;
      }
      *(undefined1 *)((int)param_1 + 0x4e5) = 0;
      break;
    case 7:
      cVar1 = *(char *)(param_1 + 0x140);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x13f);
      }
      if ((bVar5 && cVar1 == '\x03') && (param_1[0x13d] != 0)) {
        FUN_006f5d1c(param_1[0x13d],param_1[0x13e],1);
      }
    }
switchD_00766b38_caseD_1:
    FUN_006440d8(param_1 + 0x24);
    FUN_0064a1f4(param_1 + 8);
LAB_00766de4:
    piVar3 = (int *)param_1[0x136];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaaeec(param_1[0x136]);
    }
    FUN_006f625c(param_1[0x135]);
LAB_00766e1c:
    puVar2 = param_1 + 0x134;
    piVar3 = (int *)*puVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
LAB_00766e3c:
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00791350(*puVar2);
    }
switchD_007669d8_caseD_1:
    puVar2 = param_1 + 5;
    piVar3 = (int *)*puVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
LAB_00766e70:
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00791350(*puVar2);
    }
LAB_00766e84:
    if (*(char *)(param_1 + 500) == '\x03') {
      if (*(char *)(param_1 + 0x1f1) == '\x04') {
        FUN_006f625c(param_1[0x1f0]);
      }
      else if ((*(char *)(param_1 + 0x1f1) == '\x03') && (param_1[0x1f2] != 0)) {
        FUN_006f5fbc(param_1[0x1f2],param_1[499],1);
      }
    }
    break;
  case 4:
    if (param_1[3] != 0) {
      FUN_006f5fbc(param_1[3],param_1[4],1);
    }
    break;
  case 5:
    FUN_006443e0(param_1 + 3);
  }
  param_1 = param_1 + 1;
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar4 + -1;
LAB_00766ee4:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00791350(*param_1);
    return;
  }
  return;
}

