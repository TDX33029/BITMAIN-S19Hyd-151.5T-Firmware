// FUN_012ebf9c @ 012ebf9c size=76 calls_out=3 calls_in=0
// strings: 

void FUN_012ebf9c(undefined4 param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_01319a98();
  FUN_012eba84(param_1,piVar2);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01319d44(piVar2);
    return;
  }
  return;
}

