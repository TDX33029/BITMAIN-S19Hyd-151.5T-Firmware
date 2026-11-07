// FUN_01adae48 @ 01adae48 size=100 calls_out=2 calls_in=2
// strings: 

void FUN_01adae48(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0xe];
  if (iVar1 == -0x7fffffff) {
    return;
  }
  if (param_1[8] != -0x80000000) {
    FUN_0134bd64(param_1[8],param_1[9]);
  }
  if (param_1[0xb] != -0x80000000) {
    FUN_0134bd64(param_1[0xb],param_1[0xc]);
  }
  if (iVar1 != -0x80000000) {
    FUN_0134bd64(iVar1,param_1[0xf]);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_01ada488(param_1);
  return;
}

