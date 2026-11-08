// FUN_0156aff0 @ 0156aff0 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_0156aff0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  iVar2 = param_1[8];
  if (iVar2 != -0x7ffffffe) {
    if (iVar2 != -0x80000000) {
      if (iVar2 == -0x7fffffff) goto LAB_0156b024;
      FUN_019bb7e0(iVar2,param_1[9]);
    }
    FUN_00e0febc(param_1 + 0xc);
  }
LAB_0156b024:
  if (*param_1 == -0x7fffffff) {
    return;
  }
  if (param_1[7] != 0) {
    do {
      iVar2 = FUN_0152b310(param_1 + 3);
      iVar1 = param_1[7];
      uVar3 = *(undefined4 *)(iVar2 + -0x30);
      uVar4 = *(undefined4 *)(iVar2 + -0x2c);
      param_1[7] = iVar1 + -1;
      FUN_019bb7e0(uVar3,uVar4,uVar3,uVar4,unaff_r4,unaff_r5);
      FUN_00e0febc(iVar2 + -0x20);
    } while (iVar1 + -1 != 0);
  }
  iVar2 = 0;
  if (*param_1 != 0) {
    iVar2 = param_1[1];
  }
  if (*param_1 != 0 && iVar2 != 0) {
    thunk_FUN_01be4678(param_1[2]);
    return;
  }
  return;
}

