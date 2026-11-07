// FUN_018c6360 @ 018c6360 size=124 calls_out=4 calls_in=1
// strings: 

void FUN_018c6360(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x1ac);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018bcb30(*(undefined4 *)(param_1 + 0x1ac));
  }
  if (*(int *)(param_1 + 0x48) != -0x80000000) {
    FUN_018c4c0c(param_1 + 0x40);
  }
  if (*(char *)(param_1 + 0x1b4) == '\0') {
    FUN_0134bd64(*(undefined4 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1bc));
  }
  if (*(int *)(param_1 + 0x178) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0x17c));
  }
  FUN_018c642c(param_1 + 0x1c8);
  return;
}

