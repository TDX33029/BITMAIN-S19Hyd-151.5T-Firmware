// FUN_0115d0e4 @ 0115d0e4 size=224 calls_out=4 calls_in=3
// strings: 

void FUN_0115d0e4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013c0df4(*(undefined4 *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc));
  }
  FUN_01362fc4(param_1 + 0x268);
  if (*(int *)(param_1 + 0x2d4) != -0x80000000) {
    if (*(int *)(param_1 + 0x2d4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2d8));
    }
    if (*(int *)(param_1 + 0x2e0) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2e4));
    }
  }
  if ((*(uint *)(param_1 + 600) & 0x7fffffff) == 0) {
    iVar3 = *(int *)(param_1 + 0x248);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x25c));
    iVar3 = *(int *)(param_1 + 0x248);
  }
  if (iVar3 != 2) {
    FUN_0115d294(param_1 + 0xd8);
    FUN_0115d294(param_1 + 0x198);
  }
  if (*(int *)(param_1 + 200) == 2) {
    return;
  }
  FUN_0115d294(param_1 + 0x18);
  return;
}

