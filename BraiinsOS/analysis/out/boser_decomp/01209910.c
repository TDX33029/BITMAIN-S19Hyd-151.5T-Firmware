// FUN_01209910 @ 01209910 size=76 calls_out=2 calls_in=2
// strings: 

void FUN_01209910(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  FUN_019f1658(param_1 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019da43c(param_1);
    return;
  }
  return;
}

