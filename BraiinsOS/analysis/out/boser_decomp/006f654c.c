// FUN_006f654c @ 006f654c size=88 calls_out=3 calls_in=3
// strings: 

void FUN_006f654c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    iVar3 = param_1[1];
    FUN_006f654c(iVar3);
    thunk_FUN_01be4678(iVar3);
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*param_1,param_1[1]);
    return;
  }
  return;
}

