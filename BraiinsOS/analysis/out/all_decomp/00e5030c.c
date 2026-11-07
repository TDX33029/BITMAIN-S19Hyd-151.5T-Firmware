// FUN_00e5030c @ 00e5030c size=540 calls_out=10 calls_in=1
// strings: 

void FUN_00e5030c(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\0') {
    piVar3 = *(int **)(param_1 + 8);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e45d08(*(undefined4 *)(param_1 + 8));
    }
    FUN_01663cc4(*(undefined4 *)(param_1 + 0xc));
    piVar3 = *(int **)(param_1 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x30) == '\0') {
        if (*(int *)(param_1 + 0x1c) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
        }
        puVar6 = (undefined4 *)(param_1 + 0x28);
        FUN_01663cc4(*puVar6);
        piVar3 = (int *)*puVar6;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01665328(puVar6);
        }
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00ef67d0((int *)(param_1 + 0x28));
      if (*(int *)(param_1 + 0x28) == 0) {
        piVar5 = *(int **)(param_1 + 0x2c);
        piVar3 = piVar5 + 0x12;
        do {
          iVar4 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          FUN_00e473d0(piVar5 + 2);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aacf14(*(undefined4 *)(param_1 + 0x2c));
        }
      }
      piVar3 = *(int **)(param_1 + 0x30);
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00e453f4(*(undefined4 *)(param_1 + 0x30));
        }
      }
      FUN_0163bdc0(param_1 + 0x38);
      if (*(int *)(param_1 + 0x48) != 0) {
        (**(code **)(*(int *)(param_1 + 0x48) + 0xc))(*(undefined4 *)(param_1 + 0x4c));
      }
      FUN_005bf3c4(param_1 + 0x10);
    }
    piVar3 = *(int **)(param_1 + 8);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e45d08(*(undefined4 *)(param_1 + 8));
    }
    FUN_01663cc4(*(undefined4 *)(param_1 + 0xc));
    piVar3 = *(int **)(param_1 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(param_1 + 0xc);
    return;
  }
  return;
}

