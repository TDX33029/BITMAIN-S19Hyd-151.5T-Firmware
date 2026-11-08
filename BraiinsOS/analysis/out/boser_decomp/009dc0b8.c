// FUN_009dc0b8 @ 009dc0b8 size=60 calls_out=2 calls_in=0
// strings: 

void FUN_009dc0b8(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_00943ffc();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a97008(param_1);
    return;
  }
  return;
}

