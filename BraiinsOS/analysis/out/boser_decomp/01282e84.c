// FUN_01282e84 @ 01282e84 size=72 calls_out=2 calls_in=2
// strings: 

void FUN_01282e84(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 2;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01282ee0(*param_1,param_1[1]);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

