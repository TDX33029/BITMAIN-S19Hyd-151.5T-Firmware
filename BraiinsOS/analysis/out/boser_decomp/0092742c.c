// FUN_0092742c @ 0092742c size=60 calls_out=2 calls_in=1
// strings: 

void FUN_0092742c(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_0092751c();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a97458(param_1);
    return;
  }
  return;
}

