// FUN_0127d2e4 @ 0127d2e4 size=100 calls_out=2 calls_in=6
// strings: 

void FUN_0127d2e4(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return;
  }
  do {
    iVar2 = DAT_018dd954 + -1;
    bVar1 = (bool)hasExclusiveAccess(0x18dd954);
  } while (!bVar1);
  DAT_018dd954 = iVar2;
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(param_1[9]);
  }
  if (param_1[6] == 3) {
    return;
  }
  FUN_0128155c(param_1[6],param_1[7]);
  return;
}

