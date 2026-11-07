// FUN_0079579c @ 0079579c size=88 calls_out=3 calls_in=2
// strings: 

void FUN_0079579c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00795360(param_1 + 0xc);
  FUN_007959c4(param_1 + 0x28);
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

