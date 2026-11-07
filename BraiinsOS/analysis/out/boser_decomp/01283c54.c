// FUN_01283c54 @ 01283c54 size=72 calls_out=2 calls_in=5
// strings: 

void FUN_01283c54(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0134bd64(*param_1,param_1[1]);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

