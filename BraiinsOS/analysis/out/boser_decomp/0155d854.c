// FUN_0155d854 @ 0155d854 size=104 calls_out=5 calls_in=1
// strings: 

void FUN_0155d854(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01665408(param_1 + 8);
  FUN_01665198(param_1 + 0x38);
  FUN_016650c0(param_1 + 0x68);
  FUN_0166589c(param_1 + 0xa0);
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

