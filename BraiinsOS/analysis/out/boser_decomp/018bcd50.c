// FUN_018bcd50 @ 018bcd50 size=160 calls_out=4 calls_in=3
// strings: 

void FUN_018bcd50(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_006a41c0(param_1 + 8);
  piVar2 = *(int **)(param_1 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x14) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x20) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

