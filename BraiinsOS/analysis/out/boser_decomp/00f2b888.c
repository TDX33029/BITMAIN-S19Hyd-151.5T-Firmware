// FUN_00f2b888 @ 00f2b888 size=120 calls_out=4 calls_in=2
// strings: 

void FUN_00f2b888(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x10) == '\x03') {
    FUN_00f2bf28((int *)(param_1 + 4));
    if (*(int *)(param_1 + 4) == 0) {
      FUN_00d31fd8(param_1 + 8);
    }
    piVar2 = *(int **)(param_1 + 0xc);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0118218c(*(undefined4 *)(param_1 + 0xc));
      }
    }
  }
  FUN_00d32078(param_1 + 0x14);
  return;
}

