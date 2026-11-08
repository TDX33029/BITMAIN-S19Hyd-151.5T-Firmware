// FUN_00687810 @ 00687810 size=124 calls_out=3 calls_in=7
// strings: 

void FUN_00687810(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0xc);
  iVar4 = iVar6 + 1;
  iVar3 = iVar5 + 4;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    FUN_00692588(iVar3);
    iVar3 = iVar3 + 0x20;
  }
  if (iVar6 != 0) {
    thunk_FUN_01be4678(iVar5);
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

