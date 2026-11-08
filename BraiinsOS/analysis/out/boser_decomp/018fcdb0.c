// FUN_018fcdb0 @ 018fcdb0 size=96 calls_out=1 calls_in=5
// strings: 

void FUN_018fcdb0(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 != -1) {
    piVar3 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    uVar2 = *(uint *)(param_2 + 8);
    if (uVar2 < 5) {
      uVar2 = 4;
    }
    if ((*(int *)(param_2 + 4) + uVar2 + 7 & -uVar2) != 0) {
      thunk_FUN_01be4678();
      return;
    }
  }
  return;
}

