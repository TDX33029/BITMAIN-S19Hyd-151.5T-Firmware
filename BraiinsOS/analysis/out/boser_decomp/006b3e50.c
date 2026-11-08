// FUN_006b3e50 @ 006b3e50 size=44 calls_out=1 calls_in=2
// strings: 

void FUN_006b3e50(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = param_2 * 8 + 8;
  if (param_2 + iVar1 == -5) {
    return;
  }
  thunk_FUN_01be4678(param_1 - iVar1);
  return;
}

