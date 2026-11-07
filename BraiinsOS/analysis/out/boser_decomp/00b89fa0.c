// FUN_00b89fa0 @ 00b89fa0 size=140 calls_out=3 calls_in=1
// strings: 

void FUN_00b89fa0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 != 2 || param_1[1] != 0) {
    iVar2 = param_1[0x2d];
    puVar1 = (undefined4 *)(iVar2 + 4);
    for (iVar3 = param_1[0x2e]; iVar3 != 0; iVar3 = iVar3 + -1) {
      FUN_0134bd64(puVar1[-1],*puVar1);
      puVar1 = puVar1 + 3;
    }
    FUN_0134aee0(param_1[0x2c],iVar2,4,0xc);
    if (param_1[0xe] != -0x80000000) {
      FUN_019bb7e0(param_1[0xe],param_1[0xf]);
    }
    if (param_1[0x20] != -0x80000000) {
      FUN_019bb7e0(param_1[0x20],param_1[0x21]);
    }
    if (param_1[0x28] != -0x80000000) {
      FUN_019bb7e0(param_1[0x28],param_1[0x29]);
      return;
    }
  }
  return;
}

