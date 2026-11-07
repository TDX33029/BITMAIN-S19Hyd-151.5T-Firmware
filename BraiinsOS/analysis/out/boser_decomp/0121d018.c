// FUN_0121d018 @ 0121d018 size=156 calls_out=5 calls_in=25
// strings: 

void FUN_0121d018(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  FUN_00aeeb4c((int *)(param_1 + 0x1c));
  iVar2 = *(int *)(param_1 + 0x1c);
  if (-1 < iVar2) {
    FUN_019bb7e0(iVar2,*(undefined4 *)(param_1 + 0x20));
  }
  FUN_01214c9c(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  piVar3 = *(int **)(param_1 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  }
  if (param_1 == -1) {
    return;
  }
  piVar3 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

