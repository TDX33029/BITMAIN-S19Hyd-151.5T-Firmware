// FUN_0174f868 @ 0174f868 size=104 calls_out=4 calls_in=1
// strings: 

void FUN_0174f868(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    FUN_0174f9f0(param_1);
    return;
  }
  if (iVar1 == 1) {
    return;
  }
  if (iVar1 == 2) {
    FUN_0183d504(param_1 + 1);
    FUN_016f940c(param_1 + 5);
    param_1 = param_1 + 0xc;
  }
  else {
    FUN_0183d504(param_1 + 1);
    param_1 = param_1 + 5;
  }
  FUN_018248cc(param_1);
  return;
}

