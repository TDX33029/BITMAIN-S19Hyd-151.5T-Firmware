// FUN_0178fdfc @ 0178fdfc size=888 calls_out=7 calls_in=1
// strings: 

void FUN_0178fdfc(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  cVar1 = *(char *)(param_1 + 0xad);
  if (cVar1 == '\0') {
    piVar4 = *(int **)(param_1 + 0x50);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
      }
    }
    FUN_01139b38(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
    piVar4 = *(int **)(param_1 + 0x78);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
      }
    }
    piVar4 = *(int **)(param_1 + 0xa8);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_017844e8(*(undefined4 *)(param_1 + 0xa8));
      }
    }
    FUN_0178f1e8(param_1 + 0x8c);
    goto LAB_01790024;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x2f0) == '\x03') {
      if (*(char *)(param_1 + 0x2d5) == '\x03') {
        if (*(char *)(param_1 + 0x29c) == '\x03') {
          FUN_01139b38(*(undefined4 *)(param_1 + 0x27c),*(undefined4 *)(param_1 + 0x280));
          *(undefined1 *)(param_1 + 0x29d) = 0;
        }
        else if (*(char *)(param_1 + 0x29c) == '\0') {
          FUN_01139b38(*(undefined4 *)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x274));
        }
        piVar4 = *(int **)(param_1 + 0x2b0);
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar4;
            bVar2 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar2);
          *piVar4 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2b4));
          }
        }
        FUN_01772d3c(*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2ac));
        *(undefined1 *)(param_1 + 0x2d4) = 0;
      }
      else if (*(char *)(param_1 + 0x2d5) == '\0') {
        FUN_01139b38(*(undefined4 *)(param_1 + 0x2c8),*(undefined4 *)(param_1 + 0x2cc));
        FUN_01772d3c(*(undefined4 *)(param_1 + 0x2b8),*(undefined4 *)(param_1 + 700));
        piVar4 = *(int **)(param_1 + 0x2a0);
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar4;
            bVar2 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar2);
          *piVar4 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(param_1 + 0x2a0),*(undefined4 *)(param_1 + 0x2a4));
          }
        }
      }
      *(undefined1 *)(param_1 + 0x2f1) = 0;
      FUN_0178ef10(param_1 + 0x2e4);
      piVar4 = *(int **)(param_1 + 0x108);
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c));
        }
      }
    }
    else if (*(char *)(param_1 + 0x2f0) == '\0') {
      piVar4 = *(int **)(param_1 + 0x108);
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c));
        }
      }
      FUN_01139b38(*(undefined4 *)(param_1 + 0x2d8),*(undefined4 *)(param_1 + 0x2dc));
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xd0) == '\0') {
      iVar3 = param_1 + 0xc4;
LAB_0178ff68:
      FUN_0178ef10(iVar3);
    }
    else if ((*(char *)(param_1 + 0xd0) == '\x03') && (*(char *)(param_1 + 0xc0) != '\x02')) {
      iVar3 = param_1 + 0xb8;
      goto LAB_0178ff68;
    }
    *(undefined2 *)(param_1 + 0xae) = 0;
  }
  piVar4 = *(int **)(param_1 + 0x50);
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    }
  }
  piVar4 = *(int **)(param_1 + 0x78);
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
    }
  }
  piVar4 = *(int **)(param_1 + 0xa8);
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_017844e8(*(undefined4 *)(param_1 + 0xa8));
    }
  }
  FUN_0178f1e8(param_1 + 0x8c);
LAB_01790024:
  FUN_014323b0(param_1 + 0x68);
  return;
}

