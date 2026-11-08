// FUN_0070451c @ 0070451c size=76 calls_out=1 calls_in=298
// strings: 

void FUN_0070451c(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 != -1) {
    piVar2 = (int *)(param_1 + 4);
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
    if (3 < param_2 + 0xbU) {
      thunk_FUN_01be4678();
      return;
    }
  }
  return;
}

