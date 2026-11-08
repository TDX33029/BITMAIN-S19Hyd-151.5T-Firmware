// FUN_00a6da54 @ 00a6da54 size=56 calls_out=2 calls_in=3
// strings: 

int FUN_00a6da54(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_005b8c9c(param_2,param_1);
    thunk_FUN_016d3fb4(param_1);
    return iVar1;
  }
  return param_1;
}

