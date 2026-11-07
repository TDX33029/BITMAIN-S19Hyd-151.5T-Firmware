// FUN_0185bfa4 @ 0185bfa4 size=96 calls_out=4 calls_in=0
// strings: 

void FUN_0185bfa4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_017793c0(param_1 + 8);
  FUN_01855e4c(param_1 + 0x48);
  piVar2 = *(int **)(param_1 + 0x19c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01853618(*(undefined4 *)(param_1 + 0x19c));
  }
  if (*(int *)(param_1 + 400) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194));
  return;
}

