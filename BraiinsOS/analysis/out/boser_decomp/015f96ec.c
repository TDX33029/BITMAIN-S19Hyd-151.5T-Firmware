// FUN_015f96ec @ 015f96ec size=108 calls_out=3 calls_in=5
// strings: 

void FUN_015f96ec(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x34) != -0x80000000) {
    FUN_015f9f2c();
  }
  FUN_015f9fdc(param_1 + 0x10);
  FUN_015f9f2c(param_1 + 0x20);
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

