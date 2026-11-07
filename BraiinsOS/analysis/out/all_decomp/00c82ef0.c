// FUN_00c82ef0 @ 00c82ef0 size=200 calls_out=3 calls_in=2
// strings: 

void FUN_00c82ef0(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x2a) == '\0') {
    piVar2 = (int *)param_1[0x28];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1030(param_1[0x28]);
    }
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(*param_1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x2a) == '\x03') {
    FUN_00c8303c(param_1 + 2);
    piVar2 = (int *)param_1[0x29];
    *(undefined1 *)((int)param_1 + 0xa9) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1030(param_1[0x29]);
      return;
    }
    return;
  }
  return;
}

