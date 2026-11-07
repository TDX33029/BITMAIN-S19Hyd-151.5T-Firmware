// FUN_014ebc64 @ 014ebc64 size=72 calls_out=2 calls_in=0
// strings: 

void FUN_014ebc64(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  FUN_0148f928();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014a44c0(param_1);
    return;
  }
  return;
}

