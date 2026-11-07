// FUN_0007b254 @ 0007b254  size=104  callers=3
// program: bmminer


void FUN_0007b254(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != -1)) {
    piVar3 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      FUN_00080c8c(param_1);
    }
  }
  return;
}

