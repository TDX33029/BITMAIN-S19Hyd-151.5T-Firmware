// FUN_018c6c1c @ 018c6c1c size=156 calls_out=5 calls_in=1
// strings: 

void FUN_018c6c1c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x1c4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018bcb30(*(undefined4 *)(param_1 + 0x1c4));
  }
  if (*(int *)(param_1 + 0x48) != -0x80000000) {
    FUN_018c4c0c(param_1 + 0x40);
  }
  if (*(char *)(param_1 + 0x1cc) == '\0') {
    FUN_0134bd64(*(undefined4 *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1d4));
  }
  if (*(int *)(param_1 + 400) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194));
  }
  FUN_018c642c(param_1 + 0x1e0);
  FUN_0134bd64(*(undefined4 *)(param_1 + 0x204),*(undefined4 *)(param_1 + 0x208));
  FUN_0134bd64(*(undefined4 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x214));
  FUN_018c83e0(param_1 + 0xa0);
  return;
}

