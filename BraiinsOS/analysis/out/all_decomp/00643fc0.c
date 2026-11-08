// FUN_00643fc0 @ 00643fc0 size=160 calls_out=4 calls_in=6
// strings: 

void FUN_00643fc0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 0x60);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    piVar2 = (int *)FUN_0078fcec(*(undefined4 *)(param_1 + 0x60));
  }
  iVar4 = *(int *)(param_1 + 0x24);
  iVar3 = 0;
  if (iVar4 != 0) {
    piVar2 = (int *)(iVar4 * 7);
    iVar3 = iVar4 * 0x39;
  }
  if (iVar4 != 0 && iVar3 != -0x3d) {
    thunk_FUN_016d3fb4(*(int *)(param_1 + 0x20) + (int)piVar2 * -8 + -0x38);
  }
  piVar2 = *(int **)(param_1 + 100);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 100));
  }
  FUN_005c3320(param_1 + 0x40);
  return;
}

