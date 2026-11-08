// FUN_0182c180 @ 0182c180 size=128 calls_out=4 calls_in=1
// strings: 

void FUN_0182c180(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    FUN_008df9e8();
    FUN_0182b63c(param_1 + 4);
    return;
  }
  if (iVar1 == 1) {
    return;
  }
  if (iVar1 == 2) {
    FUN_008df9e8(param_1 + 1);
    FUN_016f940c(param_1 + 5);
    param_1 = param_1 + 0xc;
  }
  else {
    FUN_008df9e8(param_1 + 1);
    param_1 = param_1 + 5;
  }
  FUN_018248cc(param_1);
  return;
}

