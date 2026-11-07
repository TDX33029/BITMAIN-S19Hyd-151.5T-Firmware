// FUN_01917c30 @ 01917c30 size=84 calls_out=3 calls_in=1
// strings: 

void FUN_01917c30(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0190f040();
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0xc) == -0x80000000) {
    return;
  }
  FUN_0134bd64(*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  return;
}

