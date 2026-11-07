// FUN_0178ede8 @ 0178ede8 size=96 calls_out=4 calls_in=3
// strings: 

void FUN_0178ede8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01816794();
  FUN_0178eeb8(param_1 + 0x18);
  FUN_0178e1c4(param_1);
  if (*(int *)(param_1 + 0x34) + 1U < 2) {
    return;
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x34) + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678();
    return;
  }
  return;
}

