// FUN_00e91bc4 @ 00e91bc4 size=232 calls_out=4 calls_in=0
// strings: 

void FUN_00e91bc4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x74) == '\0') {
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
    if (*(char *)(param_1 + 0x74) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x70) == '\x03') {
      if (*(char *)(param_1 + 0x66) == '\x04') {
        if (*(int *)(param_1 + 0x68) != 0) {
          FUN_00e44660(*(int *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),1);
        }
        FUN_00e44900(*(undefined4 *)(param_1 + 0x5c));
      }
      else if ((*(char *)(param_1 + 0x66) == '\x03') && (*(int *)(param_1 + 0x68) != 0)) {
        FUN_00e44660(*(int *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),1);
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

