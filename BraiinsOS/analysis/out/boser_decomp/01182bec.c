// FUN_01182bec @ 01182bec size=144 calls_out=4 calls_in=14
// strings: 

void FUN_01182bec(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_014fe9f8(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  FUN_0132b958(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),4,8);
  piVar2 = *(int **)(param_1 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_006c8cac(*(undefined4 *)(param_1 + 0x2c));
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

