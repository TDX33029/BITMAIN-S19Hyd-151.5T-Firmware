// FUN_014fe99c @ 014fe99c size=68 calls_out=2 calls_in=1
// strings: 

void FUN_014fe99c(undefined4 *param_1)

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
    FUN_0155db98(*param_1);
  }
  FUN_014fdb74(param_1 + 1);
  return;
}

