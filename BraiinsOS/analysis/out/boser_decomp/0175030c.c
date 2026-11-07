// FUN_0175030c @ 0175030c size=128 calls_out=4 calls_in=2
// strings: 

void FUN_0175030c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    FUN_017503dc(param_1 + 0xb4);
    FUN_0174f908(param_1);
    return;
  }
  if (iVar1 == 1) {
    return;
  }
  if (iVar1 == 2) {
    FUN_017503dc(param_1 + 2);
    FUN_016f940c(param_1 + 0xbe);
  }
  else {
    FUN_017503dc(param_1 + 2);
  }
  FUN_018248cc(param_1 + 0xbc);
  return;
}

