// FUN_00d83d44 @ 00d83d44 size=228 calls_out=3 calls_in=4
// strings: 

void FUN_00d83d44(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x2c) + 1;
  iVar3 = iVar5;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    FUN_00f247dc(iVar3);
    iVar3 = iVar3 + 0x108;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34));
  }
  iVar4 = *(int *)(param_1 + 0x40);
  iVar3 = 0;
  iVar5 = *(int *)(param_1 + 0x44) + 1;
  while (iVar5 = iVar5 + -1, iVar5 != 0) {
    piVar2 = (int *)(iVar4 + iVar3);
    iVar3 = iVar3 + 0x14;
    (**(code **)(*piVar2 + 0x10))(piVar2 + 3,piVar2[1],piVar2[2]);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1420(*(undefined4 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}

