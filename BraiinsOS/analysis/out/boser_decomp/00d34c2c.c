// FUN_00d34c2c @ 00d34c2c size=144 calls_out=4 calls_in=2
// strings: 

void FUN_00d34c2c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0117fe74(*(undefined4 *)(param_1 + 0x50));
  }
  if (*(int *)(param_1 + 0x20) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  FUN_00d34d28(param_1 + 0x2c);
  piVar2 = *(int **)(param_1 + 0x18);
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
    FUN_018531c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    return;
  }
  return;
}

