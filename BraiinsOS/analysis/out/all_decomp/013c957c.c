// FUN_013c957c @ 013c957c size=172 calls_out=2 calls_in=5
// strings: 

void FUN_013c957c(int *param_1)

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
  if (param_1[9] != 0) {
    thunk_FUN_016d3fb4(param_1[10]);
  }
  if (param_1[0xc] != 0) {
    thunk_FUN_016d3fb4(param_1[0xd]);
  }
  piVar2 = (int *)param_1[0xf];
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(param_1[0xf],param_1[0x10]);
    return;
  }
  return;
}

