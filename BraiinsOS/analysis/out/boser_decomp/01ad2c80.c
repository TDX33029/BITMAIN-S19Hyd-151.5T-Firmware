// FUN_01ad2c80 @ 01ad2c80 size=72 calls_out=3 calls_in=4
// strings: 

void FUN_01ad2c80(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0xb];
  if (iVar1 != -0x80000000) {
    if (iVar1 == -0x7fffffff) {
      return;
    }
    FUN_0134bd64(iVar1,param_1[0xc]);
  }
  FUN_01ad8d68(param_1 + 8);
  if (*param_1 == 0) {
    return;
  }
  FUN_01ada488(param_1);
  return;
}

