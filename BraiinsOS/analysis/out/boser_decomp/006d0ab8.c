// FUN_006d0ab8 @ 006d0ab8 size=184 calls_out=11 calls_in=1
// strings: 

void FUN_006d0ab8(int param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar1;
  undefined4 uVar2;
  
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
  if (*(int *)(param_1 + 0x94) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
  }
  FUN_007028c4(param_1 + 0x88);
  FUN_006775f0(param_1 + 0xac);
  FUN_006b3d8c(param_1 + 0x20);
  FUN_006b3bf4(param_1);
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == -0x80000000) {
    FUN_006b3868(param_1 + 0x40);
  }
  else {
    if (iVar1 == -0x7fffffff) {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    FUN_006f6468(uVar2,*(undefined4 *)(param_1 + 0x40));
    FUN_0134aee0(iVar1,uVar2,8,0x70,unaff_r4,unaff_r5);
    FUN_00b96a8c(param_1 + 0x44);
    FUN_006b39d0(param_1 + 0x50);
  }
  FUN_006b3f70(param_1 + 0x68);
  return;
}

