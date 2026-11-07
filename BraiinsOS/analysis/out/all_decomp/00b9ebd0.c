// FUN_00b9ebd0 @ 00b9ebd0 size=156 calls_out=3 calls_in=3
// strings: 

void FUN_00b9ebd0(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    FUN_016af0b0(param_1);
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x2c) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x29) == '\x03') {
      FUN_00b9e31c(param_1 + 0x10);
    }
    param_1 = param_1 + 2;
    FUN_016af0b0(param_1);
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*param_1);
    return;
  }
  return;
}

