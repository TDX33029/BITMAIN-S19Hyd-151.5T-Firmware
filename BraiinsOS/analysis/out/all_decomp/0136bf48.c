// FUN_0136bf48 @ 0136bf48 size=176 calls_out=2 calls_in=2
// strings: 

void FUN_0136bf48(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 0x1a0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1a4));
  }
  if (*(int *)(param_1 + 0x160) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x164));
  }
  if (*(int *)(param_1 + 0x16c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x170));
  }
  if (*(int *)(param_1 + 0x17c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x180));
  }
  if (*(char *)(param_1 + 0x4c) == '\x02') {
    return;
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
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    return;
  }
  return;
}

