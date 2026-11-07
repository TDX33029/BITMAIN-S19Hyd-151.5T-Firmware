// FUN_006b34b8 @ 006b34b8 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_006b34b8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = param_2 * 0xc + 0xc;
  if (param_2 + iVar1 == -5) {
    return;
  }
  thunk_FUN_01be4678(param_1 - iVar1);
  return;
}

