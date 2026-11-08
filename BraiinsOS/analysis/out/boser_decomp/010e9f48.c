// FUN_010e9f48 @ 010e9f48 size=128 calls_out=5 calls_in=1
// strings: 

void FUN_010e9f48(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_010e8228();
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011772ac(*(undefined4 *)(param_1 + 0x18));
  }
  FUN_00d3238c(param_1 + 0x1c);
  FUN_010ea1e8(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  piVar2 = *(int **)(param_1 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x2c));
    return;
  }
  return;
}

