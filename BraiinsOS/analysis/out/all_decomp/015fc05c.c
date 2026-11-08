// FUN_015fc05c @ 015fc05c size=88 calls_out=2 calls_in=0
// strings: 

void FUN_015fc05c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 1) = 2;
  FUN_015fc100(param_1);
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
    FUN_015fc220(param_1);
  }
  return;
}

