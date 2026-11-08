// FUN_0135d98c @ 0135d98c size=56 calls_out=2 calls_in=0
// strings: 

void FUN_0135d98c(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  iVar1 = *(int *)param_1[3] + -1;
  *(int *)param_1[3] = iVar1;
  if (iVar1 == 0) {
    FUN_013cd780();
    return;
  }
  return;
}

