// FUN_01aac480 @ 01aac480 size=108 calls_out=1 calls_in=2
// strings: 

void FUN_01aac480(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if (*param_1 != -1) {
    piVar4 = (int *)(*param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    if (iVar2 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    uVar3 = *(uint *)(param_1[1] + 8);
    if (uVar3 < 5) {
      uVar3 = 4;
    }
    if ((*(int *)(param_1[1] + 4) + uVar3 + 7 & -uVar3) != 0) {
      thunk_FUN_01be4678();
      return;
    }
  }
  return;
}

