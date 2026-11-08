// FUN_008e0f4c @ 008e0f4c size=64 calls_out=2 calls_in=22
// strings: 

void FUN_008e0f4c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01383f10();
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01381a18(*param_1);
    return;
  }
  return;
}

