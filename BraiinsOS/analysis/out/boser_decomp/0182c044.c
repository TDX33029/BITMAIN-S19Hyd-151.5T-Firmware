// FUN_0182c044 @ 0182c044 size=128 calls_out=4 calls_in=1
// strings: 

void FUN_0182c044(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    FUN_0182c114(param_1 + 0xb4);
    FUN_0182b63c(param_1);
    return;
  }
  if (iVar1 == 1) {
    return;
  }
  if (iVar1 == 2) {
    FUN_0182c114(param_1 + 2);
    FUN_016f940c(param_1 + 0xbe);
  }
  else {
    FUN_0182c114(param_1 + 2);
  }
  FUN_018248cc(param_1 + 0xbc);
  return;
}

