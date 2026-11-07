// FUN_007ac6b4 @ 007ac6b4 size=84 calls_out=2 calls_in=1
// strings: 

void FUN_007ac6b4(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  FUN_007ac68c(param_1 + 1);
  param_1[1] = -0x7fffffff;
  if (*param_1 == 0) {
    return;
  }
  FUN_019b098c(*param_1 + 8,iVar1 == -0x80000000);
  return;
}

