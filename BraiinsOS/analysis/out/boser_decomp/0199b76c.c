// FUN_0199b76c @ 0199b76c size=144 calls_out=3 calls_in=2
// strings: 

void FUN_0199b76c(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return;
  }
  iVar5 = 0;
  do {
    iVar4 = iVar5 + 1;
    iVar5 = param_1 + iVar5 * 0x120;
    piVar2 = *(int **)(iVar5 + 0x100);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01989ae8(*(undefined4 *)(iVar5 + 0x100));
    }
    FUN_01989b80(iVar5 + 0x10);
    iVar5 = iVar4;
  } while (iVar4 != param_2);
  thunk_FUN_01be4678(param_1);
  return;
}

