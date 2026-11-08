// FUN_011e00b8 @ 011e00b8 size=140 calls_out=4 calls_in=0
// strings: 

void FUN_011e00b8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) == 0x3b9aca01) {
    FUN_011926b8(param_1 + 0x10);
  }
  else {
    FUN_011926b8(param_1);
    FUN_010a7104(param_1 + 0x48);
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_0119d304(*(int *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
    }
  }
  piVar2 = *(int **)(param_1 + 0x60);
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    return;
  }
  return;
}

