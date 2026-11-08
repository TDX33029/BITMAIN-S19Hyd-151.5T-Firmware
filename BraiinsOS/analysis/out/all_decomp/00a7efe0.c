// FUN_00a7efe0 @ 00a7efe0 size=60 calls_out=2 calls_in=0
// strings: 

void FUN_00a7efe0(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_00aa30a8();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacce0(param_1);
    return;
  }
  return;
}

