// FUN_01635148 @ 01635148 size=132 calls_out=3 calls_in=0
// strings: 

void FUN_01635148(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    if (param_1[2] != -0x80000000) {
      if (param_1[2] != 0) {
        thunk_FUN_016d3fb4(param_1[3]);
      }
      piVar2 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016592f4(param_1[6]);
        return;
      }
      return;
    }
  }
  else if (*param_1 == 1) {
    FUN_0163472c(param_1 + 2);
    return;
  }
  return;
}

