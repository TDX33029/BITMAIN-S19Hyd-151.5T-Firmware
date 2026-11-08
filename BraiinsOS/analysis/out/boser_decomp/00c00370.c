// FUN_00c00370 @ 00c00370 size=56 calls_out=2 calls_in=4
// strings: 

void FUN_00c00370(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_00b5f0e4(param_1 + 0x1c);
    return;
  }
  if (param_1[2] == -0x80000000) {
    FUN_019bb7e0(param_1[3],param_1[4]);
    return;
  }
  FUN_019bb7e0(param_1[2],param_1[3]);
  if (param_1[5] != -0x80000000) {
    FUN_019bb7e0(param_1[5],param_1[6]);
  }
  if (param_1[8] != -0x80000000) {
    FUN_019bb7e0(param_1[8],param_1[9]);
  }
  if (param_1[0xb] != -0x80000000) {
    FUN_019bb7e0(param_1[0xb],param_1[0xc]);
  }
  iVar1 = param_1[0xe];
  if (iVar1 != -0x80000000) {
    if (iVar1 == -0x7fffffff) {
      return;
    }
    FUN_019bb7e0(iVar1,param_1[0xf]);
  }
  if (param_1[0x11] != -0x80000000) {
    FUN_019bb7e0(param_1[0x11],param_1[0x12]);
  }
  if (param_1[0x14] != -0x80000000) {
    FUN_019bb7e0(param_1[0x14],param_1[0x15]);
  }
  if (param_1[0x17] != -0x80000000) {
    FUN_019bb7e0(param_1[0x17],param_1[0x18]);
  }
  if (param_1[0x1a] != -0x80000000) {
    FUN_019bb7e0(param_1[0x1a],param_1[0x1b]);
  }
  if (param_1[0x1d] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x1d],param_1[0x1e]);
  return;
}

