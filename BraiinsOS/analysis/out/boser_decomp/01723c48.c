// FUN_01723c48 @ 01723c48 size=72 calls_out=2 calls_in=1
// strings: 

void FUN_01723c48(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_01714fac();
  if (param_1 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0170357c(param_1);
    return;
  }
  return;
}

