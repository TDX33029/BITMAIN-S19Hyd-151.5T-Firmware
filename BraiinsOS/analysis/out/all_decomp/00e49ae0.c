// FUN_00e49ae0 @ 00e49ae0 size=108 calls_out=2 calls_in=0
// strings: 

void FUN_00e49ae0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if ((*param_1 != 0) && (param_1[3] != -0x80000000 && param_1[3] != 0)) {
    thunk_FUN_016d3fb4(param_1[4]);
  }
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015e92c0(param_1[6]);
    return;
  }
  return;
}

