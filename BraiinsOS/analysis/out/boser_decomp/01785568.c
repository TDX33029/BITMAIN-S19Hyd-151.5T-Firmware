// FUN_01785568 @ 01785568 size=88 calls_out=3 calls_in=1
// strings: 

void FUN_01785568(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_013bbb60();
  FUN_013bac1c();
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013b86b8(*param_1);
    return;
  }
  return;
}

