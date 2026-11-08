// FUN_005be2b0 @ 005be2b0 size=544 calls_out=10 calls_in=4
// strings: 

void FUN_005be2b0(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == '\0') {
    piVar4 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e45d08(*param_1);
    }
    FUN_01663cc4(param_1[1]);
    piVar4 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 10) == '\0') {
        if (param_1[5] != 0) {
          thunk_FUN_016d3fb4(param_1[6]);
        }
        puVar6 = param_1 + 8;
        FUN_01663cc4(*puVar6);
        piVar4 = (int *)*puVar6;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01665328(puVar6);
        }
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00ef67d0(param_1 + 8);
      if (param_1[8] == 0) {
        iVar3 = param_1[9];
        piVar4 = (int *)(iVar3 + 0x48);
        do {
          iVar5 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar5 + -1;
        if (iVar5 == 1) {
          FUN_00e473d0(iVar3 + 8);
        }
        piVar4 = (int *)param_1[9];
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aacf14(param_1[9]);
        }
      }
      piVar4 = (int *)param_1[10];
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00e453f4(param_1[10]);
        }
      }
      FUN_0163bdc0(param_1 + 0xc);
      if (param_1[0x10] != 0) {
        (**(code **)(param_1[0x10] + 0xc))(param_1[0x11]);
      }
      FUN_005bf3c4(param_1 + 2);
    }
    piVar4 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e45d08(*param_1);
    }
    FUN_01663cc4(param_1[1]);
    piVar4 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(param_1 + 1);
    return;
  }
  return;
}

