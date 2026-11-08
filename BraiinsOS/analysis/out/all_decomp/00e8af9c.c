// FUN_00e8af9c @ 00e8af9c size=232 calls_out=4 calls_in=0
// strings: 

void FUN_00e8af9c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 100) == '\0') {
    piVar2 = *(int **)(param_1 + 0x40);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f324(*(undefined4 *)(param_1 + 0x40));
    }
  }
  else {
    if (*(char *)(param_1 + 100) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x60) == '\x03') {
      if (*(char *)(param_1 + 0x56) == '\x04') {
        if (*(int *)(param_1 + 0x58) != 0) {
          FUN_00e44660(*(int *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),1);
        }
        FUN_00e44900(*(undefined4 *)(param_1 + 0x4c));
      }
      else if ((*(char *)(param_1 + 0x56) == '\x03') && (*(int *)(param_1 + 0x58) != 0)) {
        FUN_00e44660(*(int *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),1);
      }
    }
    piVar2 = *(int **)(param_1 + 0x40);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f324(*(undefined4 *)(param_1 + 0x40));
    }
  }
  FUN_00d9e928(param_1 + 0x10);
  return;
}

