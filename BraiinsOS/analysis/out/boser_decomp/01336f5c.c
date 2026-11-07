// FUN_01336f5c @ 01336f5c size=148 calls_out=6 calls_in=2
// strings: 

void FUN_01336f5c(int param_1)

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
  FUN_016a231c(param_1 + 0xd8);
  if (*(int *)(param_1 + 200) == 2) {
    return;
  }
  FUN_016a235c(param_1 + 0x18);
  return;
}

