// FUN_013386bc @ 013386bc size=60 calls_out=2 calls_in=1
// strings: 

void FUN_013386bc(int *param_1,undefined4 param_2)

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
    FUN_016bbfc4();
  }
  FUN_0165b864(param_2);
  return;
}

