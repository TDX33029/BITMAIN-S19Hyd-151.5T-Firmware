// FUN_01059cd4 @ 01059cd4 size=124 calls_out=3 calls_in=1
// strings: 

void FUN_01059cd4(short *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (*param_1 != 0) {
    iVar2 = *(int *)(param_1 + 2);
  }
  if (*param_1 != 0 && iVar2 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 4));
  }
  iVar2 = 0;
  if (param_1[0x12] != 0) {
    iVar2 = *(int *)(param_1 + 0x14);
  }
  if (param_1[0x12] != 0 && iVar2 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x16));
  }
  FUN_0108f884(param_1 + 0x24);
  piVar3 = *(int **)(param_1 + 0x74);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01059b88(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x76));
    return;
  }
  return;
}

