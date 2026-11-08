// FUN_011da120 @ 011da120 size=44 calls_out=2 calls_in=11
// strings: 

int FUN_011da120(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_0157c50c();
    thunk_FUN_016d3fb4(param_1);
    return iVar1;
  }
  return param_1;
}

