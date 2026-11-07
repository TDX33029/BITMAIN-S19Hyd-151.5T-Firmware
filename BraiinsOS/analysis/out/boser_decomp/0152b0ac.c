// FUN_0152b0ac @ 0152b0ac size=76 calls_out=3 calls_in=1
// strings: 

void FUN_0152b0ac(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01670d04(*param_1);
  }
  FUN_0167294c(param_1 + 1);
  FUN_014fdb74(param_1 + 2);
  return;
}

