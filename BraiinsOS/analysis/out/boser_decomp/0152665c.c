// FUN_0152665c @ 0152665c size=60 calls_out=2 calls_in=4
// strings: 

void FUN_0152665c(int *param_1,undefined4 param_2)

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
  FUN_014fe0d8(param_2);
  return;
}

