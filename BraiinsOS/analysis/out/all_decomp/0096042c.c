// FUN_0096042c @ 0096042c size=280 calls_out=5 calls_in=1
// strings: 

void FUN_0096042c(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  FUN_0095de10(param_1 + 0x10);
  iVar7 = *(int *)(param_1 + 100);
  puVar4 = (uint *)(iVar7 + 0x10);
  for (iVar6 = *(int *)(param_1 + 0x68); iVar6 != 0; iVar6 = iVar6 + -1) {
    if ((*puVar4 & 0x7fffffff) == 0) {
      uVar2 = puVar4[-3];
    }
    else {
      thunk_FUN_016d3fb4(puVar4[1]);
      uVar2 = puVar4[-3];
    }
    if (uVar2 != 0) {
      thunk_FUN_016d3fb4(puVar4[-2]);
    }
    puVar4 = puVar4 + 9;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    thunk_FUN_016d3fb4(iVar7);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x70);
  FUN_00ce17a4(uVar5,*(undefined4 *)(param_1 + 0x74));
  if (*(int *)(param_1 + 0x6c) != 0) {
    thunk_FUN_016d3fb4(uVar5);
  }
  piVar3 = *(int **)(param_1 + 0x5c);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa7b14(*(undefined4 *)(param_1 + 0x5c));
    }
  }
  piVar3 = *(int **)(param_1 + 0x58);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa6194(*(undefined4 *)(param_1 + 0x58));
    return;
  }
  return;
}

