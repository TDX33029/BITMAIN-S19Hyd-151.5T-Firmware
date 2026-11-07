// FUN_01a9c794 @ 01a9c794 size=96 calls_out=3 calls_in=5
// strings: 

void FUN_01a9c794(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_006a41c0(param_1 + 0x48);
  FUN_01a9cefc(param_1 + 8);
  FUN_01a9cefc(param_1 + 0x28);
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

