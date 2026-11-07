// FUN_00b5f094 @ 00b5f094 size=80 calls_out=2 calls_in=4
// strings: 

void FUN_00b5f094(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00b5f0e4(param_1 + 0x20);
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

