// FUN_0199b894 @ 0199b894 size=124 calls_out=5 calls_in=3
// strings: 

void FUN_0199b894(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x100);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01989ae8(*(undefined4 *)(param_1 + 0x100));
  }
  FUN_01989b80(param_1 + 0x10);
  if (*(int *)(param_1 + 0x118) != 2) {
    FUN_0198d3c4();
  }
  if (*(int *)(param_1 + 0x130) != 2) {
    FUN_019981cc();
  }
  if (*(char *)(param_1 + 0x148) == 'S') {
    return;
  }
  FUN_01999584(*(char *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c));
  return;
}

