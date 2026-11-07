// FUN_005f3030 @ 005f3030 size=148 calls_out=3 calls_in=10
// strings: 

void FUN_005f3030(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 4) == '\0') {
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(*param_1);
    }
  }
  else {
    if (*(char *)(param_1 + 4) != '\x03') {
      return;
    }
    FUN_01139b38(param_1[2],param_1[3]);
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(*param_1);
    }
  }
  FUN_005faf6c(param_1 + 1);
  return;
}

