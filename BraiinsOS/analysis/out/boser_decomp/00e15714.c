// FUN_00e15714 @ 00e15714 size=136 calls_out=2 calls_in=1
// strings: 

void FUN_00e15714(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    puVar4 = (undefined4 *)(param_1 + 0x68);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x70) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x54) == '\x03') {
      FUN_00e1003c(param_1);
    }
    puVar4 = (undefined4 *)(param_1 + 0x5c);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00b5ef20(*puVar4);
    return;
  }
  return;
}

