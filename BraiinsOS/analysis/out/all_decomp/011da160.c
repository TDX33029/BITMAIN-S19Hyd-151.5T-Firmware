// FUN_011da160 @ 011da160 size=56 calls_out=2 calls_in=2
// strings: 

int FUN_011da160(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_011b9398(param_2,param_1);
    thunk_FUN_016d3fb4(param_1);
    return iVar1;
  }
  return param_1;
}

