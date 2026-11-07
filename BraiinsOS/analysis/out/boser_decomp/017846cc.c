// FUN_017846cc @ 017846cc size=112 calls_out=3 calls_in=4
// strings: 

void FUN_017846cc(int param_1)

{
  int *piVar1;
  int extraout_r1;
  int iVar2;
  bool bVar3;
  
  FUN_01712d5c((int *)(param_1 + 8));
  bVar3 = *(int *)(param_1 + 8) != 0;
  iVar2 = extraout_r1;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  if (bVar3 && iVar2 != 0) {
    FUN_00754858();
  }
  if (param_1 == -1) {
    return;
  }
  piVar1 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar1;
    bVar3 = (bool)hasExclusiveAccess(piVar1);
  } while (!bVar3);
  *piVar1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

