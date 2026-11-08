// FUN_01269150 @ 01269150 size=44 calls_out=1 calls_in=1
// strings: 

void FUN_01269150(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = param_2 * 4 + 4;
  if (param_2 + iVar1 == -5) {
    return;
  }
  thunk_FUN_01be4678(param_1 - iVar1);
  return;
}

