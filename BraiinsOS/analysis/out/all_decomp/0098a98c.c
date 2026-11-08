// FUN_0098a98c @ 0098a98c size=504 calls_out=8 calls_in=1
// strings: 

void FUN_0098a98c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 0xbc) == '\x03') {
    if (*(char *)(param_1 + 0xb9) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x68);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x2c);
      }
      if (bVar5 && cVar1 == '\x03') {
        cVar1 = *(char *)(param_1 + 100);
        bVar5 = cVar1 == '\x03';
        if (bVar5) {
          cVar1 = *(char *)(param_1 + 0x60);
        }
        if (bVar5 && cVar1 == '\x03') {
          FUN_0163aa10(param_1 + 0x40);
          if (*(int *)(param_1 + 0x4c) != 0) {
            (**(code **)(*(int *)(param_1 + 0x4c) + 0xc))(*(undefined4 *)(param_1 + 0x50));
          }
        }
      }
      FUN_0163bdc0(param_1 + 0x70);
      if (*(int *)(param_1 + 0x80) != 0) {
        (**(code **)(*(int *)(param_1 + 0x80) + 0xc))(*(undefined4 *)(param_1 + 0x84));
      }
      FUN_005e6cdc(param_1 + 0x90);
      if (*(int *)(param_1 + 0x9c) != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(param_1 + 0x90);
      puVar4 = (undefined4 *)(param_1 + 0xac);
      FUN_01663cc4(*puVar4);
      piVar2 = (int *)*puVar4;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01665328(puVar4);
      }
      piVar2 = *(int **)(param_1 + 0xa8);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00fa8e94(*(undefined4 *)(param_1 + 0xa8));
        return;
      }
      return;
    }
    if (*(char *)(param_1 + 0xb9) != '\0') {
      return;
    }
    piVar2 = *(int **)(param_1 + 0xb0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00fa8e94(*(undefined4 *)(param_1 + 0xb0));
    }
    puVar4 = (undefined4 *)(param_1 + 0xb4);
    FUN_01663cc4(*puVar4);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (*(char *)(param_1 + 0xbc) != '\0') {
      return;
    }
    piVar2 = *(int **)(param_1 + 8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00fa8e94(*(undefined4 *)(param_1 + 8));
    }
    puVar4 = (undefined4 *)(param_1 + 0xc);
    FUN_01663cc4(*puVar4);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar4);
    return;
  }
  return;
}

