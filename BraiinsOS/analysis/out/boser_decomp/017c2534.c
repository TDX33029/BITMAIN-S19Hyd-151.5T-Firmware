// FUN_017c2534 @ 017c2534 size=1028 calls_out=12 calls_in=2
// strings: 

void FUN_017c2534(uint *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  uVar3 = *param_1;
  iVar5 = uVar3 - 2;
  if (uVar3 < 2) {
    iVar5 = 0;
  }
  if (iVar5 == 0) {
    if (uVar3 == 2) {
      return;
    }
    if (param_1[0x26] != 3) {
      FUN_017c230c();
    }
    FUN_01773bac(param_1);
    return;
  }
  if ((iVar5 != 1) || ((char)param_1[0xf] == '\x03')) {
    return;
  }
  if ((char)param_1[0xf] != '\x04') {
    if ((char)param_1[0xf] == '\x02') {
      FUN_0178e78c(param_1[1]);
      return;
    }
    FUN_017724dc();
    return;
  }
  uVar3 = param_1[1];
  cVar1 = *(char *)(uVar3 + 0xad);
  if (cVar1 == '\0') {
    piVar4 = *(int **)(uVar3 + 0x50);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(uVar3 + 0x50),*(undefined4 *)(uVar3 + 0x54));
      }
    }
    FUN_01139b38(*(undefined4 *)(uVar3 + 0x80),*(undefined4 *)(uVar3 + 0x84));
    piVar4 = *(int **)(uVar3 + 0x78);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(uVar3 + 0x78),*(undefined4 *)(uVar3 + 0x7c));
      }
    }
    piVar4 = *(int **)(uVar3 + 0xa8);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_017844e8(*(undefined4 *)(uVar3 + 0xa8));
      }
    }
    FUN_01773d34(uVar3 + 0x8c);
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(uVar3 + 0x2f0) == '\x03') {
        if (*(char *)(uVar3 + 0x2d5) == '\x03') {
          if (*(char *)(uVar3 + 0x29c) == '\x03') {
            FUN_01139b38(*(undefined4 *)(uVar3 + 0x27c),*(undefined4 *)(uVar3 + 0x280));
            *(undefined1 *)(uVar3 + 0x29d) = 0;
          }
          else if (*(char *)(uVar3 + 0x29c) == '\0') {
            FUN_01139b38(*(undefined4 *)(uVar3 + 0x270),*(undefined4 *)(uVar3 + 0x274));
          }
          piVar4 = *(int **)(uVar3 + 0x2b0);
          if (piVar4 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar4;
              bVar2 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar2);
            *piVar4 = iVar5 + -1;
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_018531c0(*(undefined4 *)(uVar3 + 0x2b0),*(undefined4 *)(uVar3 + 0x2b4));
            }
          }
          FUN_017c2ccc(*(undefined4 *)(uVar3 + 0x2a8),*(undefined4 *)(uVar3 + 0x2ac));
          *(undefined1 *)(uVar3 + 0x2d4) = 0;
        }
        else if (*(char *)(uVar3 + 0x2d5) == '\0') {
          FUN_01139b38(*(undefined4 *)(uVar3 + 0x2c8),*(undefined4 *)(uVar3 + 0x2cc));
          FUN_017c2ccc(*(undefined4 *)(uVar3 + 0x2b8),*(undefined4 *)(uVar3 + 700));
          piVar4 = *(int **)(uVar3 + 0x2a0);
          if (piVar4 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar4;
              bVar2 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar2);
            *piVar4 = iVar5 + -1;
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_018531c0(*(undefined4 *)(uVar3 + 0x2a0),*(undefined4 *)(uVar3 + 0x2a4));
            }
          }
        }
        *(undefined1 *)(uVar3 + 0x2f1) = 0;
        FUN_01772778(uVar3 + 0x2e4);
        piVar4 = *(int **)(uVar3 + 0x108);
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar4;
            bVar2 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar2);
          *piVar4 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(uVar3 + 0x108),*(undefined4 *)(uVar3 + 0x10c));
          }
        }
      }
      else if (*(char *)(uVar3 + 0x2f0) == '\0') {
        piVar4 = *(int **)(uVar3 + 0x108);
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar4;
            bVar2 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar2);
          *piVar4 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(uVar3 + 0x108),*(undefined4 *)(uVar3 + 0x10c));
          }
        }
        FUN_01139b38(*(undefined4 *)(uVar3 + 0x2d8),*(undefined4 *)(uVar3 + 0x2dc));
      }
    }
    else {
      if (cVar1 != '\x04') goto LAB_017c283c;
      if (*(char *)(uVar3 + 0xd0) == '\0') {
        iVar5 = uVar3 + 0xc4;
LAB_017c2778:
        FUN_01772778(iVar5);
      }
      else if ((*(char *)(uVar3 + 0xd0) == '\x03') && (*(char *)(uVar3 + 0xc0) != '\x02')) {
        iVar5 = uVar3 + 0xb8;
        goto LAB_017c2778;
      }
      *(undefined2 *)(uVar3 + 0xae) = 0;
    }
    piVar4 = *(int **)(uVar3 + 0x50);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(uVar3 + 0x50),*(undefined4 *)(uVar3 + 0x54));
      }
    }
    piVar4 = *(int **)(uVar3 + 0x78);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(uVar3 + 0x78),*(undefined4 *)(uVar3 + 0x7c));
      }
    }
    piVar4 = *(int **)(uVar3 + 0xa8);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_017844e8(*(undefined4 *)(uVar3 + 0xa8));
      }
    }
    FUN_01773d34(uVar3 + 0x8c);
  }
  FUN_014323b0(uVar3 + 0x68);
LAB_017c283c:
  thunk_FUN_01be4678(uVar3);
  return;
}

