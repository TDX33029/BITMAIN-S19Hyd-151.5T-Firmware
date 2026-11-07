// FUN_01465e18 @ 01465e18 size=112 calls_out=3 calls_in=1
// strings: 

void FUN_01465e18(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01561ef8();
  piVar2 = *(int **)(param_1 + 0x4c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0156180c(*(undefined4 *)(param_1 + 0x4c));
  }
  piVar2 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    return;
  }
  return;
}

