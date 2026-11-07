// FUN_0174fb48 @ 0174fb48 size=128 calls_out=4 calls_in=2
// strings: 

void FUN_0174fb48(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    FUN_00b76614();
    FUN_0174f908(param_1 + 4);
    return;
  }
  if (iVar1 == 1) {
    return;
  }
  if (iVar1 == 2) {
    FUN_00b76614(param_1 + 1);
    FUN_016f940c(param_1 + 5);
    param_1 = param_1 + 0xc;
  }
  else {
    FUN_00b76614(param_1 + 1);
    param_1 = param_1 + 5;
  }
  FUN_018248cc(param_1);
  return;
}

