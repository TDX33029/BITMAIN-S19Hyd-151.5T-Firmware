// FUN_018c8324 @ 018c8324 size=120 calls_out=3 calls_in=0
// strings: 

void FUN_018c8324(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x15c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018bcb30(*(undefined4 *)(param_1 + 0x15c));
  }
  if (*(int *)(param_1 + 8) != -0x80000000) {
    FUN_018c4c0c(param_1);
  }
  if (*(char *)(param_1 + 0x148) == '\0') {
    FUN_0134bd64(*(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x150));
  }
  if (*(int *)(param_1 + 0x138) == -0x80000000) {
    return;
  }
  FUN_0134bd64(*(int *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x13c));
  return;
}

