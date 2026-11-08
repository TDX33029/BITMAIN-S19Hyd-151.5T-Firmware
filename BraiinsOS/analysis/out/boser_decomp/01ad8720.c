// FUN_01ad8720 @ 01ad8720 size=88 calls_out=3 calls_in=1
// strings: 

void FUN_01ad8720(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 2) {
    return;
  }
  FUN_0134bd64(param_1[0xc],param_1[0xd]);
  if (param_1[0xf] != -0x80000000) {
    FUN_0134bd64(param_1[0xf],param_1[0x10]);
  }
  if (iVar1 != 0) {
    FUN_01ad879c(param_1 + 1);
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_01ada488(param_1 + 4);
  return;
}

