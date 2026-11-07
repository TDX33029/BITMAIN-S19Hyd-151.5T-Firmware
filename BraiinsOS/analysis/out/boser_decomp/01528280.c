// FUN_01528280 @ 01528280 size=64 calls_out=2 calls_in=0
// strings: 

void FUN_01528280(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_006a41c0();
  piVar2 = *(int **)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}

