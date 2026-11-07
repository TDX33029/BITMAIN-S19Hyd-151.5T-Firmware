// FUN_018544b0 @ 018544b0 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_018544b0(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_0188ba98();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018525c4(param_1);
    return;
  }
  return;
}

