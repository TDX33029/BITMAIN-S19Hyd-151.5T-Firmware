// FUN_01406e2c @ 01406e2c size=88 calls_out=2 calls_in=0
// strings: 

void FUN_01406e2c(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  DataMemoryBarrier(0xb);
  if ((uVar4 & 2) == 0) {
    piVar2 = *(int **)(uVar4 & 0xfffffff8 | 4);
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
  FUN_01403c00(uVar4);
  return;
}

