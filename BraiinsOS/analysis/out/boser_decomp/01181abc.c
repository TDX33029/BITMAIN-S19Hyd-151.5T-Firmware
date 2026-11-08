// FUN_01181abc @ 01181abc size=104 calls_out=4 calls_in=4
// strings: 

void FUN_01181abc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01a3b7c0(*(undefined4 *)(param_1 + 0xc));
  FUN_01181b8c(param_1 + 8);
  FUN_005faf6c((undefined4 *)(param_1 + 0xc));
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

