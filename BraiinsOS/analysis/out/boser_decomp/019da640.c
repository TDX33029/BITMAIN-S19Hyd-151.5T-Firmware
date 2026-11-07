// FUN_019da640 @ 019da640 size=264 calls_out=9 calls_in=129
// strings: 

void FUN_019da640(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x48);
  iVar6 = *(int *)(param_1 + 0x4c);
  iVar4 = iVar6 + 1;
  iVar3 = iVar5;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    FUN_019da86c(iVar3);
    iVar3 = iVar3 + 8;
  }
  if (iVar6 != 0) {
    thunk_FUN_01be4678(iVar5);
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x50));
  }
  FUN_0134c054(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),4,4);
  FUN_019da8d8(param_1 + 0x88);
  FUN_019da928(param_1 + 8);
  if (*(int *)(param_1 + 0x7c) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x78));
  }
  FUN_019daae0(param_1 + 0xb8);
  piVar2 = *(int **)(param_1 + 0x148);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019dac00(*(undefined4 *)(param_1 + 0x148));
  }
  FUN_019daebc(param_1 + 0x138);
  if (param_1 != -1) {
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
  }
  return;
}

