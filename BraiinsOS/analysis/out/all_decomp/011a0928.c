// FUN_011a0928 @ 011a0928 size=120 calls_out=2 calls_in=0
// strings: 

void FUN_011a0928(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  if (param_1[3] != 0) {
    thunk_FUN_016d3fb4(param_1[4]);
  }
  if (param_1[6] != 0) {
    thunk_FUN_016d3fb4(param_1[7]);
  }
  piVar2 = (int *)param_1[9];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(param_1[9],param_1[10]);
    return;
  }
  return;
}

