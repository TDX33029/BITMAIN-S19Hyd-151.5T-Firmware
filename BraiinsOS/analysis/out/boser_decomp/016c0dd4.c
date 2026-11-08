// FUN_016c0dd4 @ 016c0dd4 size=64 calls_out=1 calls_in=1
// strings: 

void FUN_016c0dd4(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    iVar1 = *(int *)*param_1 + -1;
    *(int *)*param_1 = iVar1;
    if (iVar1 == 0) {
      FUN_016cc498(*param_1);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

