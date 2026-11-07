// FUN_01734b1c @ 01734b1c size=268 calls_out=14 calls_in=1
// strings: 

void FUN_01734b1c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_017793c0();
  if (*(int *)(param_1 + 0x204) != 3) {
    FUN_01734d78();
  }
  FUN_01703754(param_1 + 0x220);
  FUN_017037a4(param_1 + 0x1f8);
  FUN_01703808(param_1 + 0x48);
  FUN_016f7db8(param_1 + 0x22c);
  FUN_017038d4(param_1 + 0x238);
  if (*(uint *)(param_1 + 0x88) < 2) {
    FUN_0185bc30();
  }
  FUN_01703c58(param_1 + 0x244);
  if (*(int *)(param_1 + 0x250) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x250),*(undefined4 *)(param_1 + 0x254));
  }
  if (*(int *)(param_1 + 0x260) != 0) {
    FUN_01702f28();
  }
  FUN_01707e34(param_1 + 0x1c8);
  piVar2 = *(int **)(param_1 + 0x1e8);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1ec));
    }
  }
  piVar2 = *(int **)(param_1 + 0x1f0);
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 500));
    return;
  }
  return;
}

