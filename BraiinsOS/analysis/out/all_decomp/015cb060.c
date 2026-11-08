// FUN_015cb060 @ 015cb060 size=116 calls_out=6 calls_in=1
// strings: 

void FUN_015cb060(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x138);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015cbd40();
  }
  FUN_015e0eb4(param_1 + 0x13c);
  FUN_015e0f48(*(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x150));
  if (*(int *)(param_1 + 0x128) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 300));
  }
  FUN_016d6ac4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  FUN_015c5fb4(param_1 + 0x10);
  return;
}

