// FUN_014ff9e0 @ 014ff9e0 size=464 calls_out=15 calls_in=31
// strings: 

void FUN_014ff9e0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0150343c(param_1 + 0x50);
  FUN_01665520(param_1);
  piVar2 = *(int **)(param_1 + 0x38);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  }
  piVar2 = *(int **)(param_1 + 0x40);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  }
  iVar3 = **(int **)(param_1 + 0x5c) + -1;
  **(int **)(param_1 + 0x5c) = iVar3;
  if (iVar3 == 0) {
    FUN_015821d8();
  }
  iVar3 = **(int **)(param_1 + 0x60) + -1;
  **(int **)(param_1 + 0x60) = iVar3;
  if (iVar3 == 0) {
    FUN_01582174();
  }
  iVar3 = **(int **)(param_1 + 100) + -1;
  **(int **)(param_1 + 100) = iVar3;
  if (iVar3 == 0) {
    FUN_015822ac();
  }
  iVar3 = **(int **)(param_1 + 0x68) + -1;
  **(int **)(param_1 + 0x68) = iVar3;
  if (iVar3 == 0) {
    FUN_015820ac();
  }
  iVar3 = **(int **)(param_1 + 0x6c) + -1;
  **(int **)(param_1 + 0x6c) = iVar3;
  if (iVar3 == 0) {
    FUN_01581fe4();
  }
  iVar3 = **(int **)(param_1 + 0x70) + -1;
  **(int **)(param_1 + 0x70) = iVar3;
  if (iVar3 == 0) {
    FUN_01582248();
  }
  iVar3 = **(int **)(param_1 + 0x74) + -1;
  **(int **)(param_1 + 0x74) = iVar3;
  if (iVar3 == 0) {
    FUN_01582110();
  }
  iVar3 = **(int **)(param_1 + 0x78) + -1;
  **(int **)(param_1 + 0x78) = iVar3;
  if (iVar3 == 0) {
    FUN_01581f80();
  }
  iVar3 = **(int **)(param_1 + 0x7c) + -1;
  **(int **)(param_1 + 0x7c) = iVar3;
  if (iVar3 == 0) {
    FUN_01582048();
  }
  iVar3 = **(int **)(param_1 + 0x80) + -1;
  **(int **)(param_1 + 0x80) = iVar3;
  if (iVar3 == 0) {
    FUN_01582310();
  }
  piVar2 = *(int **)(param_1 + 0x84);
  iVar3 = *piVar2;
  *piVar2 = iVar3 + -1;
  if (iVar3 + -1 != 0) {
    return;
  }
  FUN_019bb7e0(piVar2[3],piVar2[4]);
  if (piVar2 == (int *)&DAT_ffffffff) {
    return;
  }
  iVar3 = piVar2[1];
  piVar2[1] = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    thunk_FUN_01be4678(piVar2);
    return;
  }
  return;
}

