// FUN_0185c374 @ 0185c374 size=268 calls_out=14 calls_in=0
// strings: 

void FUN_0185c374(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_017793c0();
  if (*(int *)(param_1 + 0x1c4) != 3) {
    FUN_01734d78();
  }
  FUN_0185b6a8(param_1 + 0x1e0);
  FUN_01857c28(param_1 + 0x1b8);
  FUN_01703808(param_1 + 0x48);
  FUN_0185c0b8(param_1 + 0x1ec);
  FUN_0185c06c(param_1 + 0x1f8);
  if (*(uint *)(param_1 + 0x68) < 2) {
    FUN_0185bc30();
  }
  FUN_0183cd44(param_1 + 0x204);
  if (*(int *)(param_1 + 0x210) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x214));
  }
  if (*(int *)(param_1 + 0x220) != 0) {
    FUN_017109f8();
  }
  FUN_0177a9a8(param_1 + 0x188);
  piVar2 = *(int **)(param_1 + 0x1a8);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac));
    }
  }
  piVar2 = *(int **)(param_1 + 0x1b0);
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
    FUN_0070451c(*(undefined4 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x1b4));
    return;
  }
  return;
}

