// FUN_016b9744 @ 016b9744 size=172 calls_out=4 calls_in=10
// strings: 

void FUN_016b9744(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_016c2920(*(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x148));
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x144),4,0x14);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x150),4,4);
  piVar2 = *(int **)(param_1 + 0x13c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016b9834(*(undefined4 *)(param_1 + 0x13c));
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

