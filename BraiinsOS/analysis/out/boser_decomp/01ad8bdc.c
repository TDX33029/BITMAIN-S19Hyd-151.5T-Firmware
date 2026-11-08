// FUN_01ad8bdc @ 01ad8bdc size=72 calls_out=3 calls_in=1
// strings: 

void FUN_01ad8bdc(int *param_1)

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

