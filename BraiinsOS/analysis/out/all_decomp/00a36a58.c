// FUN_00a36a58 @ 00a36a58 size=60 calls_out=2 calls_in=0
// strings: 

void FUN_00a36a58(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_00aa313c();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad1e0(param_1);
    return;
  }
  return;
}

