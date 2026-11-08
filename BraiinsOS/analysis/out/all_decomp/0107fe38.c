// FUN_0107fe38 @ 0107fe38 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_0107fe38(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1[4] != 0) {
    thunk_FUN_016d3fb4(param_1[5]);
  }
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(*param_1,param_1[1]);
    return;
  }
  return;
}

