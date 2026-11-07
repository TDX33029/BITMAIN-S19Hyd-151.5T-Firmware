// FUN_0115ca70 @ 0115ca70 size=60 calls_out=2 calls_in=0
// strings: 

void FUN_0115ca70(int *param_1,undefined4 param_2)

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
    FUN_013c3e44();
  }
  FUN_0115ce9c(param_2);
  return;
}

