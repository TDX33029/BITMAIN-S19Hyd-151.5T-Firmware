// FUN_00a86688 @ 00a86688 size=932 calls_out=11 calls_in=1
// strings: 

void FUN_00a86688(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0xf1)) {
  case 0:
    FUN_017044f0(param_1);
    FUN_00a7afe4(param_1 + 0x70);
    piVar2 = *(int **)(param_1 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
    }
    piVar2 = *(int **)(param_1 + 0xd8);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a8021c(*(undefined4 *)(param_1 + 0xd8));
      }
    }
    FUN_00a800bc(param_1 + 0xbc);
    goto LAB_00a868c8;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0x35c) == '\x03') {
      if (*(char *)(param_1 + 0x348) == '\x03') {
        if (*(char *)(param_1 + 0x33c) == '\x03') {
          FUN_00a7afe4(param_1 + 0x2a8);
          *(undefined1 *)(param_1 + 0x33d) = 0;
        }
        else if (*(char *)(param_1 + 0x33c) == '\0') {
          FUN_00a7afe4(param_1 + 0x228);
        }
        piVar2 = *(int **)(param_1 + 0x1b0);
        if (piVar2 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar2;
            bVar1 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar1);
          *piVar2 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x1b4));
          }
        }
        piVar2 = *(int **)(param_1 + 0x1a8);
        *(undefined1 *)(param_1 + 0x349) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac));
        }
        *(undefined1 *)(param_1 + 0x34a) = 0;
        FUN_008dfd04(*(undefined4 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a4));
        *(undefined2 *)(param_1 + 0x34b) = 0;
      }
      else if (*(char *)(param_1 + 0x348) == '\0') {
        FUN_00a7afe4(param_1 + 0x178);
        FUN_008dfd04(*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x18c));
        piVar2 = *(int **)(param_1 + 400);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(*(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194));
        }
        piVar2 = *(int **)(param_1 + 0x198);
        if (piVar2 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar2;
            bVar1 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar1);
          *piVar2 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x19c));
          }
        }
      }
      *(undefined1 *)(param_1 + 0x35d) = 0;
      FUN_008e00ec(param_1 + 0x350);
      *(undefined1 *)(param_1 + 0x35e) = 0;
    }
    else if (*(char *)(param_1 + 0x35c) == '\0') {
      FUN_00a7afe4(param_1 + 0xf8);
      piVar2 = *(int **)(param_1 + 0x168);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x16c));
      }
      piVar2 = *(int **)(param_1 + 0x170);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174));
        }
      }
    }
    break;
  case 4:
    *(undefined1 *)(param_1 + 0xf5) = 0;
    FUN_008e039c(param_1 + 0x104);
    break;
  case 5:
    if (*(char *)(param_1 + 299) == '\0') {
      FUN_00a7afe4(param_1 + 0xf8);
    }
    break;
  case 6:
    FUN_008e0464(param_1 + 0xf8);
    *(undefined1 *)(param_1 + 0xf3) = 0;
    FUN_008e00ec(param_1 + 0xdc);
    goto LAB_00a86848;
  case 7:
    FUN_008e0464(param_1 + 0xf8);
    FUN_01a69838(*(undefined4 *)(param_1 + 0xec));
    *(undefined2 *)(param_1 + 0xf2) = 0;
    FUN_008e00ec(param_1 + 0xdc);
LAB_00a86848:
    *(undefined1 *)(param_1 + 0xf4) = 0;
  }
  FUN_017044f0(param_1);
  piVar2 = *(int **)(param_1 + 0x90);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  }
  piVar2 = *(int **)(param_1 + 0xd8);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a8021c(*(undefined4 *)(param_1 + 0xd8));
    }
  }
  FUN_00a800bc(param_1 + 0xbc);
LAB_00a868c8:
  FUN_014323b0(param_1 + 0x80);
  return;
}

