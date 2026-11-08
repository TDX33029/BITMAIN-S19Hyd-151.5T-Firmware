// FUN_010ea41c @ 010ea41c size=284 calls_out=4 calls_in=1
// strings: 

void FUN_010ea41c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    piVar2 = *(int **)(param_1 + 0x30);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01181abc(*(undefined4 *)(param_1 + 0x30));
    }
    piVar2 = *(int **)(param_1 + 0x34);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182478(*(undefined4 *)(param_1 + 0x34));
      return;
    }
  }
  else if (*(char *)(param_1 + 0x40) == '\x03') {
    if (*(char *)(param_1 + 0x2c) == '\x03') {
      FUN_01a17e08(param_1 + 0x14);
      if (*(int *)(param_1 + 0x18) != 0) {
        (**(code **)(*(int *)(param_1 + 0x18) + 0xc))(*(undefined4 *)(param_1 + 0x1c));
      }
    }
    FUN_00d35adc(param_1);
    piVar2 = *(int **)(param_1 + 0x3c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182478(*(undefined4 *)(param_1 + 0x3c));
    }
    piVar2 = *(int **)(param_1 + 0x38);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01181abc(*(undefined4 *)(param_1 + 0x38));
      return;
    }
    return;
  }
  return;
}

