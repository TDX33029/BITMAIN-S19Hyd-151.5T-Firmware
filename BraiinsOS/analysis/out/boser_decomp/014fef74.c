// FUN_014fef74 @ 014fef74 size=224 calls_out=5 calls_in=3
// strings: 

void FUN_014fef74(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_014fdb74();
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_014fdb74();
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_014ff160();
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_014ff160();
  }
  piVar2 = *(int **)(param_1 + 100);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155d4b4();
    }
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_014ff190();
  }
  if (*(int *)(param_1 + 0x10) != -0x80000000) {
    FUN_014ff23c();
  }
  if (*(int *)(param_1 + 0x1c) != -0x80000000) {
    FUN_014ff23c();
  }
  if (*(int *)(param_1 + 0x28) == -0x80000000) {
    return;
  }
  FUN_014ff23c((int *)(param_1 + 0x28));
  return;
}

