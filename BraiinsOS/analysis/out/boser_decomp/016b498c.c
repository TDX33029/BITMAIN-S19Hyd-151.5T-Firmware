// FUN_016b498c @ 016b498c size=92 calls_out=2 calls_in=1
// strings: 

void FUN_016b498c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x24);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016b9744(*(undefined4 *)(param_1 + 0x24));
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),8,8);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),4,4);
  return;
}

