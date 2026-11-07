// FUN_019b3c8c @ 019b3c8c size=88 calls_out=2 calls_in=0
// strings: 

void FUN_019b3c8c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 1) = 2;
  FUN_019b3d30(param_1);
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    FUN_019b3e50(param_1);
  }
  return;
}

