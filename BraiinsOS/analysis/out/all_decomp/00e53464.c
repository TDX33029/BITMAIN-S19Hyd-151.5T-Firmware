// FUN_00e53464 @ 00e53464 size=776 calls_out=10 calls_in=1
// strings: 

void FUN_00e53464(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  cVar1 = *(char *)(param_1 + 0x36);
  if (cVar1 == '\x04') {
    FUN_00ef84c0((int *)(param_1 + 0x38));
    if (*(int *)(param_1 + 0x38) == 0) {
      piVar6 = *(int **)(param_1 + 0x3c);
      piVar3 = piVar6 + 0x11;
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        FUN_00e46e30(piVar6 + 2);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aab134(*(undefined4 *)(param_1 + 0x3c));
      }
    }
    iVar4 = *(int *)(param_1 + 0x40);
    if (iVar4 != -0x7fffffff) {
      if (iVar4 == -0x80000000) {
        piVar3 = *(int **)(param_1 + 0x44);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00e45594(*(undefined4 *)(param_1 + 0x44));
        }
      }
      else if (iVar4 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
      }
    }
    *(undefined1 *)(param_1 + 0x35) = 0;
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        piVar6 = *(int **)(param_1 + 0x28);
        piVar3 = piVar6 + 0x12;
        do {
          iVar4 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          FUN_00e46e30(piVar6 + 2);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aab134(*(undefined4 *)(param_1 + 0x28));
        }
        piVar6 = *(int **)(param_1 + 0x2c);
        piVar3 = piVar6 + 0x11;
        do {
          iVar4 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          FUN_00e46e30(piVar6 + 2);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aab134(*(undefined4 *)(param_1 + 0x2c));
        }
        puVar5 = (undefined4 *)(param_1 + 0x30);
        FUN_01663cc4(*puVar5);
        piVar3 = (int *)*puVar5;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01665328(puVar5);
          return;
        }
      }
      return;
    }
    FUN_00a07b4c(param_1 + 0x40);
    FUN_00e501cc(param_1 + 0x90);
    FUN_0163bdc0(param_1 + 0xa0);
    if (*(int *)(param_1 + 0xb0) != 0) {
      (**(code **)(*(int *)(param_1 + 0xb0) + 0xc))(*(undefined4 *)(param_1 + 0xb4));
    }
  }
  puVar5 = (undefined4 *)(param_1 + 0x18);
  FUN_01663cc4(*puVar5);
  piVar3 = (int *)*puVar5;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar5);
  }
  piVar6 = *(int **)(param_1 + 0x14);
  piVar3 = piVar6 + 0x11;
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_00e46e30(piVar6 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aab134(*(undefined4 *)(param_1 + 0x14));
  }
  piVar6 = *(int **)(param_1 + 0x10);
  piVar3 = piVar6 + 0x12;
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_00e46e30(piVar6 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aab134(*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}

