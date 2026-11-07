// FUN_00ebcac0 @ 00ebcac0 size=300 calls_out=5 calls_in=1
// strings: 

void FUN_00ebcac0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar2 = *(int **)(param_1 + 800);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 800));
  }
  piVar2 = *(int **)(param_1 + 0x324);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x324));
  }
  if (*(int *)(param_1 + 0x2e8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2ec));
  }
  if (*(int *)(param_1 + 600) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x25c));
  }
  if (*(int *)(param_1 + 0x1f0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 500));
  }
  if ((*(uint *)(param_1 + 0x1d8) & 0x7fffffff) == 0) {
    iVar3 = *(int *)(param_1 + 0x2d8);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1dc));
    iVar3 = *(int *)(param_1 + 0x2d8);
  }
  if (iVar3 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2dc));
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc4));
  }
  uVar4 = *(undefined4 *)(param_1 + 0xd0);
  FUN_00f24ed8(uVar4,*(undefined4 *)(param_1 + 0xd4));
  if (*(int *)(param_1 + 0xcc) != 0) {
    thunk_FUN_016d3fb4(uVar4);
  }
  FUN_00d81034(param_1 + 0xe0);
  FUN_00d94b68(param_1 + 0x2f8);
  return;
}

