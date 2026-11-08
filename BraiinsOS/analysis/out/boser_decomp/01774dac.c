// FUN_01774dac @ 01774dac size=148 calls_out=4 calls_in=2
// strings: 

void FUN_01774dac(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 1) {
    if (*param_1 != 0) {
      return;
    }
    FUN_01771d60(param_1[6]);
    if (1 < param_1[9] + 1U) {
      piVar2 = (int *)(param_1[9] + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_01be4678();
      }
    }
    FUN_01432304(param_1 + 8);
    return;
  }
  iVar3 = 0;
  if (param_1[2] != 0 || param_1[3] != 0) {
    iVar3 = param_1[4];
  }
  if ((param_1[2] != 0 || param_1[3] != 0) && iVar3 != 0) {
    FUN_01443048(iVar3,param_1[5]);
    return;
  }
  return;
}

