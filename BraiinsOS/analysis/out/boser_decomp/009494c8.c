// FUN_009494c8 @ 009494c8 size=72 calls_out=3 calls_in=2
// strings: 

void FUN_009494c8(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0xb];
  if (iVar1 != -0x80000000) {
    if (iVar1 == -0x7fffffff) {
      return;
    }
    FUN_019bb7e0(iVar1,param_1[0xc]);
  }
  FUN_01ad8d68(param_1 + 8);
  if (*param_1 == 0) {
    return;
  }
  FUN_01ada488(param_1);
  return;
}

