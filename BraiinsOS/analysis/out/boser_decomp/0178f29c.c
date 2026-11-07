// FUN_0178f29c @ 0178f29c size=60 calls_out=2 calls_in=1
// strings: 

void FUN_0178f29c(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_014372a0();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a75d8c(param_1);
    return;
  }
  return;
}

