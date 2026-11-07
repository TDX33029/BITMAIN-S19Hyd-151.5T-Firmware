// FUN_0175c01c @ 0175c01c size=1216 calls_out=14 calls_in=2
// strings: 

void FUN_0175c01c(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = *param_1;
  iVar4 = uVar2 - 2;
  if (uVar2 < 2) {
    iVar4 = 0;
  }
  if (iVar4 == 0) {
    if (uVar2 == 2) {
      return;
    }
    if (param_1[0x30] != 3) {
      FUN_0175c988();
    }
    FUN_0175c8d4(param_1 + 0x27);
    piVar3 = (int *)param_1[0x2e];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_017045b0(param_1[0x2e]);
      }
    }
    FUN_017044f0(param_1);
    piVar3 = (int *)param_1[0x1c];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x1c],param_1[0x1d]);
      return;
    }
    return;
  }
  if ((iVar4 != 1) || ((char)param_1[0xf] == '\x03')) {
    return;
  }
  if ((char)param_1[0xf] != '\x04') {
    if ((char)param_1[0xf] == '\x02') {
      FUN_0184f010();
      return;
    }
    FUN_01710c20();
    FUN_0175beb4(param_1 + 7);
    FUN_0177266c(param_1 + 1);
    if (param_1[0xe] + 1 < 2) {
      return;
    }
    piVar3 = (int *)(param_1[0xe] + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678();
      return;
    }
    return;
  }
  uVar2 = param_1[1];
  switch(*(undefined1 *)(uVar2 + 0xed)) {
  case 0:
    FUN_017044f0(uVar2);
    FUN_01139b38(*(undefined4 *)(uVar2 + 0xac),*(undefined4 *)(uVar2 + 0xb0));
    piVar3 = *(int **)(uVar2 + 0x80);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(uVar2 + 0x80),*(undefined4 *)(uVar2 + 0x84));
    }
    piVar3 = *(int **)(uVar2 + 0xd4);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_017045b0(*(undefined4 *)(uVar2 + 0xd4));
      }
    }
    FUN_0175c8d4(uVar2 + 0xb8);
    goto LAB_0175c2cc;
  default:
    goto switchD_0175c070_caseD_1;
  case 3:
    if (*(char *)(uVar2 + 0x350) == '\x03') {
      if (*(char *)(uVar2 + 0x330) == '\x03') {
        if (*(char *)(uVar2 + 0x2e4) == '\x03') {
          FUN_01139b38(*(undefined4 *)(uVar2 + 0x2c4),*(undefined4 *)(uVar2 + 0x2c8));
          *(undefined1 *)(uVar2 + 0x2e5) = 0;
        }
        else if (*(char *)(uVar2 + 0x2e4) == '\0') {
          FUN_01139b38(*(undefined4 *)(uVar2 + 0x2b8),*(undefined4 *)(uVar2 + 700));
        }
        piVar3 = *(int **)(uVar2 + 0x300);
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar3;
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(uVar2 + 0x300),*(undefined4 *)(uVar2 + 0x304));
          }
        }
        piVar3 = *(int **)(uVar2 + 0x2f8);
        *(undefined1 *)(uVar2 + 0x32c) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(*(undefined4 *)(uVar2 + 0x2f8),*(undefined4 *)(uVar2 + 0x2fc));
        }
        *(undefined1 *)(uVar2 + 0x32d) = 0;
        FUN_0172e624(*(undefined4 *)(uVar2 + 0x2f0),*(undefined4 *)(uVar2 + 0x2f4));
        *(undefined2 *)(uVar2 + 0x32e) = 0;
      }
      else if (*(char *)(uVar2 + 0x330) == '\0') {
        FUN_01139b38(*(undefined4 *)(uVar2 + 800),*(undefined4 *)(uVar2 + 0x324));
        FUN_0172e624(*(undefined4 *)(uVar2 + 0x308),*(undefined4 *)(uVar2 + 0x30c));
        piVar3 = *(int **)(uVar2 + 0x310);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(*(undefined4 *)(uVar2 + 0x310),*(undefined4 *)(uVar2 + 0x314));
        }
        piVar3 = *(int **)(uVar2 + 0x2e8);
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar3;
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(uVar2 + 0x2e8),*(undefined4 *)(uVar2 + 0x2ec));
          }
        }
      }
      *(undefined1 *)(uVar2 + 0x351) = 0;
      FUN_0172ea40(uVar2 + 0x344);
      *(undefined1 *)(uVar2 + 0x352) = 0;
    }
    else if (*(char *)(uVar2 + 0x350) == '\0') {
      FUN_01139b38(*(undefined4 *)(uVar2 + 0x338),*(undefined4 *)(uVar2 + 0x33c));
      piVar3 = *(int **)(uVar2 + 0x158);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(uVar2 + 0x158),*(undefined4 *)(uVar2 + 0x15c));
      }
      piVar3 = *(int **)(uVar2 + 0x160);
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(*(undefined4 *)(uVar2 + 0x160),*(undefined4 *)(uVar2 + 0x164));
        }
      }
    }
    break;
  case 4:
    *(undefined1 *)(uVar2 + 0xf1) = 0;
    FUN_0172ebfc(uVar2 + 0x104);
    break;
  case 5:
    if (*(char *)(uVar2 + 0x127) == '\0') {
      FUN_01139b38(*(undefined4 *)(uVar2 + 0x110),*(undefined4 *)(uVar2 + 0x114));
    }
    break;
  case 6:
    FUN_0172edc0(uVar2 + 0xf8);
    *(undefined1 *)(uVar2 + 0xef) = 0;
    FUN_0172ea40(uVar2 + 0xd8);
    goto LAB_0175c24c;
  case 7:
    FUN_0172edc0(uVar2 + 0xf8);
    FUN_01a69838(*(undefined4 *)(uVar2 + 0xe8));
    *(undefined2 *)(uVar2 + 0xee) = 0;
    FUN_0172ea40(uVar2 + 0xd8);
LAB_0175c24c:
    *(undefined1 *)(uVar2 + 0xf0) = 0;
  }
  FUN_017044f0(uVar2);
  piVar3 = *(int **)(uVar2 + 0x80);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(uVar2 + 0x80),*(undefined4 *)(uVar2 + 0x84));
  }
  piVar3 = *(int **)(uVar2 + 0xd4);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_017045b0(*(undefined4 *)(uVar2 + 0xd4));
    }
  }
  FUN_0175c8d4(uVar2 + 0xb8);
LAB_0175c2cc:
  FUN_014323b0(uVar2 + 0x70);
switchD_0175c070_caseD_1:
  thunk_FUN_01be4678(uVar2);
  return;
}

