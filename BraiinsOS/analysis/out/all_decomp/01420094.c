// FUN_01420094 @ 01420094 size=60 calls_out=2 calls_in=0
// strings: 

void FUN_01420094(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_01441048();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143ea24(param_1);
    return;
  }
  return;
}

