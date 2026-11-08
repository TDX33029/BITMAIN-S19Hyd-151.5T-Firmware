// FUN_011e80e4 @ 011e80e4 size=116 calls_out=3 calls_in=3
// strings: 

void FUN_011e80e4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x10) == '\x03') {
    FUN_01204020((int *)(param_1 + 4));
    if (*(int *)(param_1 + 4) == 0) {
      FUN_011e8238(param_1 + 8);
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
        FUN_0121cb94(*(undefined4 *)(param_1 + 0xc));
        return;
      }
      return;
    }
  }
  return;
}

