// FUN_0007e880 @ 0007e880  size=96  callers=3
// program: bmminer


int FUN_0007e880(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != -1)) {
    piVar2 = (int *)(param_1 + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + 1;
    DataMemoryBarrier(0xb);
  }
  return param_1;
}

