// FUN_016c25ec @ 016c25ec size=156 calls_out=7 calls_in=1
// strings: 

void FUN_016c25ec(int param_1)

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
    FUN_016b9834(*(undefined4 *)(param_1 + 0x14));
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),4,4);
  FUN_014fe2e4(param_1 + 0x268);
  FUN_0169f4e0(param_1 + 0x2d4);
  if (*(int *)(param_1 + 600) != -0x80000000) {
    FUN_0134aee0(*(int *)(param_1 + 600),*(undefined4 *)(param_1 + 0x25c),4,4);
  }
  FUN_016c2710(param_1 + 0xd8);
  if (*(int *)(param_1 + 200) != 2) {
    FUN_016c2750(param_1 + 0x18);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

