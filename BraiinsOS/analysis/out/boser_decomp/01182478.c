// FUN_01182478 @ 01182478 size=100 calls_out=4 calls_in=4
// strings: 

void FUN_01182478(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_012ccec4(param_1 + 8);
  FUN_0193c71c(param_1 + 8);
  FUN_005faf6c(param_1 + 0xc);
  if (param_1 == -1) {
    return;
  }
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
  return;
}

