// FUN_00a97358 @ 00a97358 size=132 calls_out=3 calls_in=2
// strings: 

void FUN_00a97358(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0xc);
  iVar3 = iVar4;
  for (iVar5 = iVar6; iVar5 != 0; iVar5 = iVar5 + -1) {
    FUN_00a9741c(iVar3);
    iVar3 = iVar3 + 0x48;
  }
  if (iVar6 != 0) {
    thunk_FUN_01be4678(iVar4);
  }
  if (param_1 != -1) {
    piVar2 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(param_1);
      return;
    }
  }
  return;
}

