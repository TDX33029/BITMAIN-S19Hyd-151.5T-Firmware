// FUN_0169f478 @ 0169f478 size=76 calls_out=2 calls_in=5
// strings: 

void FUN_0169f478(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016b9834(*(undefined4 *)(param_1 + 0x14));
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),4,4);
  return;
}

