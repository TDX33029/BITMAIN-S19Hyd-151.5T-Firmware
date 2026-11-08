// FUN_01851fb4 @ 01851fb4 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_01851fb4(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  FUN_014295d0(param_1 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0185203c(param_1);
    return;
  }
  return;
}

