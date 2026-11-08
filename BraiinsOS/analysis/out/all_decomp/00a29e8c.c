// FUN_00a29e8c @ 00a29e8c size=412 calls_out=4 calls_in=1
// strings: 

void FUN_00a29e8c(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
  }
  if ((*(uint *)(param_1 + 0x4c) & 0x7fffffff) == 0) {
    iVar2 = *(int *)(param_1 + 0x28);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x50));
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
  }
  iVar7 = *(int *)(param_1 + 100);
  puVar5 = (uint *)(iVar7 + 0x10);
  for (iVar2 = *(int *)(param_1 + 0x68); iVar2 != 0; iVar2 = iVar2 + -1) {
    if ((*puVar5 & 0x7fffffff) == 0) {
      uVar3 = puVar5[-3];
    }
    else {
      thunk_FUN_016d3fb4(puVar5[1]);
      uVar3 = puVar5[-3];
    }
    if (uVar3 != 0) {
      thunk_FUN_016d3fb4(puVar5[-2]);
    }
    puVar5 = puVar5 + 9;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    thunk_FUN_016d3fb4(iVar7);
  }
  uVar6 = *(undefined4 *)(param_1 + 0x70);
  FUN_00ce17a4(uVar6,*(undefined4 *)(param_1 + 0x74));
  if (*(int *)(param_1 + 0x6c) != 0) {
    thunk_FUN_016d3fb4(uVar6);
  }
  piVar4 = *(int **)(param_1 + 0x5c);
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa7b14(*(undefined4 *)(param_1 + 0x5c));
    }
  }
  piVar4 = *(int **)(param_1 + 0x58);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa6194(*(undefined4 *)(param_1 + 0x58));
    return;
  }
  return;
}

