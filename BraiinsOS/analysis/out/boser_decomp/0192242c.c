// FUN_0192242c @ 0192242c size=152 calls_out=7 calls_in=1
// strings: 

void FUN_0192242c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x74);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(*(undefined4 *)(param_1 + 0x74));
  }
  if ((*(char *)(param_1 + 0x60) == '\0') && (*(int *)(param_1 + 100) != -0x80000000)) {
    FUN_0134bd64(*(int *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
  }
  FUN_01902274(param_1 + 0x18);
  FUN_019217b0(param_1 + 0x7c);
  FUN_01910a14(param_1);
  if (*(int *)(param_1 + 0x40) != -0x7ffffffe) {
    FUN_01921838();
  }
  if (*(int *)(param_1 + 0x34) == -0x80000000) {
    return;
  }
  FUN_018e3a84((int *)(param_1 + 0x34));
  return;
}

