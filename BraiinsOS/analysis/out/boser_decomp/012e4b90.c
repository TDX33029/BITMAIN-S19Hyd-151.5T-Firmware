// FUN_012e4b90 @ 012e4b90 size=76 calls_out=4 calls_in=0
// strings: 

void FUN_012e4b90(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  FUN_005faf6c(param_1 + 4);
  FUN_012e4bf4(*param_1,param_1[1]);
  FUN_012e4ff8(param_1[5]);
  iVar2 = param_1[2];
  piVar3 = (int *)param_1[3];
  FUN_012ea96c();
  if (iVar2 == 3) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
  }
  else {
    if (iVar2 != 4) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(piVar3);
    return;
  }
  return;
}

