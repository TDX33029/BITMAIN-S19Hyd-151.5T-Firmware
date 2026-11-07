// FUN_00763280 @ 00763280 size=116 calls_out=3 calls_in=4
// strings: 

void FUN_00763280(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1[7] != 0) {
    do {
      iVar1 = FUN_007632f4(param_1 + 3);
      iVar2 = param_1[7];
      uVar3 = *(undefined4 *)(iVar1 + -0x18);
      uVar4 = *(undefined4 *)(iVar1 + -0x14);
      param_1[7] = iVar2 + -1;
      FUN_019bb7e0(uVar3,uVar4);
      FUN_019bb7e0(*(undefined4 *)(iVar1 + -0xc),*(undefined4 *)(iVar1 + -8));
    } while (iVar2 + -1 != 0);
  }
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = param_1[1];
  }
  if (*param_1 != 0 && iVar1 != 0) {
    thunk_FUN_01be4678(param_1[2]);
    return;
  }
  return;
}

