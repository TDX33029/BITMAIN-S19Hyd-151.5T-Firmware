// FUN_0079a9b4 @ 0079a9b4 size=108 calls_out=4 calls_in=2
// strings: 

void FUN_0079a9b4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_007a7664((int *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_0079aa98(param_1 + 0x54);
  }
  piVar2 = *(int **)(param_1 + 0x58);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007a6a1c(*(undefined4 *)(param_1 + 0x58));
    }
  }
  FUN_01431b40(param_1);
  return;
}

