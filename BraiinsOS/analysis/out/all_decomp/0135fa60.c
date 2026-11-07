// FUN_0135fa60 @ 0135fa60 size=72 calls_out=3 calls_in=5
// strings: 

void FUN_0135fa60(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      FUN_013e0514(param_1);
      FUN_0135fafc(param_1);
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18));
      param_1 = param_1 + 0x1c;
    } while (param_2 != iVar1);
  }
  return;
}

