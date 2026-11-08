// FUN_007047f8 @ 007047f8 size=36 calls_out=1 calls_in=3
// strings: 

void FUN_007047f8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    *(undefined1 *)(param_1 + iVar1) = 0;
    iVar1 = iVar1 + 1;
  } while (param_2 != iVar1);
  thunk_FUN_01be4678();
  return;
}

