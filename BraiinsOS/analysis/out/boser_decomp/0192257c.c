// FUN_0192257c @ 0192257c size=144 calls_out=6 calls_in=1
// strings: 

void FUN_0192257c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x5c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(*(undefined4 *)(param_1 + 0x5c));
  }
  if ((*(char *)(param_1 + 0x48) == '\0') && (*(int *)(param_1 + 0x4c) != -0x80000000)) {
    FUN_0134bd64(*(int *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  }
  FUN_01902274(param_1);
  FUN_019217b0(param_1 + 100);
  if (*(int *)(param_1 + 0x28) != -0x7ffffffe) {
    FUN_01921838();
  }
  if (*(int *)(param_1 + 0x1c) == -0x80000000) {
    return;
  }
  FUN_018e3a84((int *)(param_1 + 0x1c));
  return;
}

