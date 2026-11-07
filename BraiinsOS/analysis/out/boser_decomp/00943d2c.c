// FUN_00943d2c @ 00943d2c size=220 calls_out=6 calls_in=1
// strings: 

void FUN_00943d2c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1[7] != 0) {
    do {
      iVar1 = FUN_0126f3e4(param_1 + 3);
      iVar2 = param_1[7];
      uVar4 = *(undefined4 *)(iVar1 + -0x28);
      uVar5 = *(undefined4 *)(iVar1 + -0x24);
      param_1[7] = iVar2 + -1;
      FUN_019bb7e0(uVar4,uVar5);
      iVar3 = 4;
      if (1 < *(uint *)(iVar1 + -0x18)) {
        iVar3 = *(uint *)(iVar1 + -0x18) - 2;
      }
      if (3 < iVar3 - 1U) {
        if (iVar3 == 0) {
          FUN_019bb7e0(*(undefined4 *)(iVar1 + -0x14),*(undefined4 *)(iVar1 + -0x10));
        }
        else if (iVar3 == 5) {
          uVar4 = *(undefined4 *)(iVar1 + -0x10);
          FUN_01a4137c(uVar4,*(undefined4 *)(iVar1 + -0xc));
          FUN_0134aee0(*(undefined4 *)(iVar1 + -0x14),uVar4,8,0x18);
        }
        else {
          FUN_01a41e70(iVar1 + -0x14);
        }
      }
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

