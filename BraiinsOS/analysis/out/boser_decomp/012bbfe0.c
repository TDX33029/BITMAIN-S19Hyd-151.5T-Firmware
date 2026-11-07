// FUN_012bbfe0 @ 012bbfe0 size=116 calls_out=5 calls_in=1
// strings: 

void FUN_012bbfe0(int *param_1)

{
  int iVar1;
  
  FUN_019bb7e0(param_1[4],param_1[5]);
  iVar1 = param_1[8];
  FUN_0129b928(iVar1,param_1[9]);
  FUN_0134aee0(param_1[7],iVar1,4,0x10);
  if (*param_1 != 2) {
    FUN_0134bd64(param_1[1],param_1[2]);
  }
  if (param_1[0xd] != 0) {
    FUN_00f80320(param_1[0xd],param_1[0xe]);
  }
  if (param_1[10] < -0x7ffffffe) {
    return;
  }
  FUN_0134bd64(param_1[10],param_1[0xb]);
  return;
}

