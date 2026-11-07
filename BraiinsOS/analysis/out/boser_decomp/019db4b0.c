// FUN_019db4b0 @ 019db4b0 size=88 calls_out=2 calls_in=9
// strings: 

void FUN_019db4b0(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019ad05c(param_1[6]);
  }
  iVar3 = param_1[1];
  *(undefined1 *)*param_1 = 0;
  if (iVar3 == 0) {
    return;
  }
  thunk_FUN_01be4678();
  return;
}

