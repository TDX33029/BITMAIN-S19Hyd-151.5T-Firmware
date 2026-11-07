// FUN_0188bc94 @ 0188bc94 size=952 calls_out=11 calls_in=1
// strings: 

void FUN_0188bc94(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0xed)) {
  case 0:
    FUN_017044f0(param_1);
    FUN_01139b38(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0));
    piVar2 = *(int **)(param_1 + 0x80);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
    }
    piVar2 = *(int **)(param_1 + 0xd4);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01852970(*(undefined4 *)(param_1 + 0xd4));
      }
    }
    FUN_0188c4c0(param_1 + 0xb8);
    goto LAB_0188bedc;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0x350) == '\x03') {
      if (*(char *)(param_1 + 0x330) == '\x03') {
        if (*(char *)(param_1 + 0x2e4) == '\x03') {
          FUN_01139b38(*(undefined4 *)(param_1 + 0x2c4),*(undefined4 *)(param_1 + 0x2c8));
          *(undefined1 *)(param_1 + 0x2e5) = 0;
        }
        else if (*(char *)(param_1 + 0x2e4) == '\0') {
          FUN_01139b38(*(undefined4 *)(param_1 + 0x2b8),*(undefined4 *)(param_1 + 700));
        }
        piVar2 = *(int **)(param_1 + 0x300);
        if (piVar2 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar2;
            bVar1 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar1);
          *piVar2 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(param_1 + 0x300),*(undefined4 *)(param_1 + 0x304));
          }
        }
        piVar2 = *(int **)(param_1 + 0x2f8);
        *(undefined1 *)(param_1 + 0x32c) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(*(undefined4 *)(param_1 + 0x2f8),*(undefined4 *)(param_1 + 0x2fc));
        }
        *(undefined1 *)(param_1 + 0x32d) = 0;
        FUN_0181ff40(*(undefined4 *)(param_1 + 0x2f0),*(undefined4 *)(param_1 + 0x2f4));
        *(undefined2 *)(param_1 + 0x32e) = 0;
      }
      else if (*(char *)(param_1 + 0x330) == '\0') {
        FUN_01139b38(*(undefined4 *)(param_1 + 800),*(undefined4 *)(param_1 + 0x324));
        FUN_0181ff40(*(undefined4 *)(param_1 + 0x308),*(undefined4 *)(param_1 + 0x30c));
        piVar2 = *(int **)(param_1 + 0x310);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(*(undefined4 *)(param_1 + 0x310),*(undefined4 *)(param_1 + 0x314));
        }
        piVar2 = *(int **)(param_1 + 0x2e8);
        if (piVar2 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar2;
            bVar1 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar1);
          *piVar2 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(param_1 + 0x2e8),*(undefined4 *)(param_1 + 0x2ec));
          }
        }
      }
      *(undefined1 *)(param_1 + 0x351) = 0;
      FUN_0184bfa4(param_1 + 0x344);
      *(undefined1 *)(param_1 + 0x352) = 0;
    }
    else if (*(char *)(param_1 + 0x350) == '\0') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x338),*(undefined4 *)(param_1 + 0x33c));
      piVar2 = *(int **)(param_1 + 0x158);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x15c));
      }
      piVar2 = *(int **)(param_1 + 0x160);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(*(undefined4 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x164));
        }
      }
    }
    break;
  case 4:
    *(undefined1 *)(param_1 + 0xf1) = 0;
    FUN_0184c160(param_1 + 0x104);
    break;
  case 5:
    if (*(char *)(param_1 + 0x127) == '\0') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x114));
    }
    break;
  case 6:
    FUN_008e0464(param_1 + 0xf8);
    *(undefined1 *)(param_1 + 0xef) = 0;
    FUN_0184bfa4(param_1 + 0xd8);
    goto LAB_0188be5c;
  case 7:
    FUN_008e0464(param_1 + 0xf8);
    FUN_01a69838(*(undefined4 *)(param_1 + 0xe8));
    *(undefined2 *)(param_1 + 0xee) = 0;
    FUN_0184bfa4(param_1 + 0xd8);
LAB_0188be5c:
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  FUN_017044f0(param_1);
  piVar2 = *(int **)(param_1 + 0x80);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  }
  piVar2 = *(int **)(param_1 + 0xd4);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01852970(*(undefined4 *)(param_1 + 0xd4));
    }
  }
  FUN_0188c4c0(param_1 + 0xb8);
LAB_0188bedc:
  FUN_014323b0(param_1 + 0x70);
  return;
}

