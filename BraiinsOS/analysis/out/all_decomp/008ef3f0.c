// FUN_008ef3f0 @ 008ef3f0 size=60 calls_out=2 calls_in=0
// strings: 

void FUN_008ef3f0(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  FUN_008ea568();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f2c4c(param_1);
    return;
  }
  return;
}

