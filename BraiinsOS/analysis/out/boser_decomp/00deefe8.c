// FUN_00deefe8 @ 00deefe8 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_00deefe8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x40);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00b5ef20(*(undefined4 *)(param_1 + 0x40));
    }
  }
  FUN_00deded4(param_1);
  return;
}

