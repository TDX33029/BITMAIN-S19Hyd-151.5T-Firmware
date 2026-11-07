// FUN_00f2b720 @ 00f2b720 size=128 calls_out=5 calls_in=3
// strings: 

void FUN_00f2b720(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00f2c444();
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
  FUN_00f29fc8(param_1 + 0x1c);
  FUN_00d323e8(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
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

