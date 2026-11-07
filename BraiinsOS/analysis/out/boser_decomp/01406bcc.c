// FUN_01406bcc @ 01406bcc size=64 calls_out=2 calls_in=20
// strings: 

void FUN_01406bcc(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01406c28(param_1 + 2);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

