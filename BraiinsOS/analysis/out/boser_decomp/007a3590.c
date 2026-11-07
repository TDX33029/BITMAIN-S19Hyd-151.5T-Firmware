// FUN_007a3590 @ 007a3590 size=136 calls_out=4 calls_in=2
// strings: 

void FUN_007a3590(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x88) != '\x03') {
    return;
  }
  FUN_007a7b6c((int *)(param_1 + 0x70));
  if (*(int *)(param_1 + 0x70) == 0) {
    FUN_0079ac1c(param_1 + 0x74);
  }
  piVar2 = *(int **)(param_1 + 0x78);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007a6a1c(*(undefined4 *)(param_1 + 0x78));
    }
  }
  FUN_01431b40(param_1 + 0x20);
  FUN_0079ac1c(param_1 + 0x84);
  return;
}

