// FUN_011f1d0c @ 011f1d0c size=72 calls_out=2 calls_in=0
// strings: 

int FUN_011f1d0c(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 != 0) {
    FUN_012375a8(iVar1);
    thunk_FUN_016d3fb4(iVar1);
    param_2 = param_2 + -1;
  }
  return param_2;
}

