// FUN_00de1a00 @ 00de1a00 size=380 calls_out=7 calls_in=1
// strings: 

void FUN_00de1a00(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == '\0') {
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e45d08(*param_1);
    }
    FUN_01663cc4(param_1[1]);
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 10) == '\0') {
        if (param_1[5] != 0) {
          thunk_FUN_016d3fb4(param_1[6]);
        }
        puVar5 = param_1 + 8;
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
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00de1d78(param_1 + 8);
      FUN_0163bdc0(param_1 + 0xc);
      if (param_1[0x10] != 0) {
        (**(code **)(param_1[0x10] + 0xc))(param_1[0x11]);
      }
      FUN_005bf3c4(param_1 + 2);
    }
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e45d08(*param_1);
    }
    FUN_01663cc4(param_1[1]);
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(param_1 + 1);
    return;
  }
  return;
}

