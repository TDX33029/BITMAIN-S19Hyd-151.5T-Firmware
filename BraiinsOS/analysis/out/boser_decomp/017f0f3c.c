// FUN_017f0f3c @ 017f0f3c size=188 calls_out=3 calls_in=2
// strings: assertion failed: (*next).value.is_some()

undefined4 FUN_017f0f3c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    return 0;
  }
  while( true ) {
    iVar3 = **(int **)(iVar4 + 0xc);
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) {
      *(int *)(iVar4 + 0xc) = iVar3;
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: (*next).value.is_some()",0x29,&DAT_01d2d584);
    }
    DataMemoryBarrier(0xb);
    if (*(int **)(iVar4 + 8) == *(int **)(iVar4 + 0xc)) break;
    FUN_01bea67c();
  }
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar4 + 0x1c) != 0) {
    return 1;
  }
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01784e7c(*param_1);
    }
  }
  *param_1 = 0;
  return 0;
}

