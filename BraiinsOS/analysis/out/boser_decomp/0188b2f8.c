// FUN_0188b2f8 @ 0188b2f8 size=96 calls_out=4 calls_in=4
// strings: 

void FUN_0188b2f8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01885c80();
  FUN_0188bb2c(param_1 + 0x18);
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

