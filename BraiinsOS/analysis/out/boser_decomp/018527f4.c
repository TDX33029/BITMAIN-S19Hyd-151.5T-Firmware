// FUN_018527f4 @ 018527f4 size=208 calls_out=6 calls_in=1
// strings: 

void FUN_018527f4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01884c0c(param_1 + 0x9c);
  FUN_0177266c(param_1 + 0x9c);
  if (1 < *(int *)(param_1 + 0xb4) + 1U) {
    piVar2 = (int *)(*(int *)(param_1 + 0xb4) + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678();
    }
  }
  piVar2 = *(int **)(param_1 + 0xb8);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01852970(*(undefined4 *)(param_1 + 0xb8));
    }
  }
  FUN_017044f0(param_1);
  piVar2 = *(int **)(param_1 + 0x70);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
    return;
  }
  return;
}

