// FUN_013cdd5c @ 013cdd5c size=104 calls_out=2 calls_in=14
// strings: 

void FUN_013cdd5c(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  param_2 = param_2 + 1;
  iVar3 = param_1 + 8;
  while (param_2 = param_2 + -1, param_2 != 0) {
    FUN_013cde28(iVar3);
    iVar3 = iVar3 + 0xe8;
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

