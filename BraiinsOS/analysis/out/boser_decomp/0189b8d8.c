// FUN_0189b8d8 @ 0189b8d8 size=60 calls_out=1 calls_in=0
// strings: 

void FUN_0189b8d8(int *param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 == *param_1) {
    FUN_006666a0(param_1);
  }
  *(undefined1 *)(param_1[1] + iVar1) = param_2;
  param_1[2] = iVar1 + 1;
  return;
}

