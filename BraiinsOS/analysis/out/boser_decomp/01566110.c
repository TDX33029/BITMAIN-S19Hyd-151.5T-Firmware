// FUN_01566110 @ 01566110 size=164 calls_out=5 calls_in=1
// strings: 

void FUN_01566110(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  if (param_1[8] != -0x7ffffffe) {
    FUN_01566164();
  }
  if (*param_1 == -0x7fffffff) {
    return;
  }
  if (param_1[7] != 0) {
    do {
      iVar1 = FUN_0152b310(param_1 + 3);
      iVar2 = param_1[7];
      uVar3 = *(undefined4 *)(iVar1 + -0x30);
      uVar4 = *(undefined4 *)(iVar1 + -0x2c);
      param_1[7] = iVar2 + -1;
      FUN_019bb7e0(uVar3,uVar4,uVar3,uVar4,unaff_r4,unaff_r5);
      FUN_00e0febc(iVar1 + -0x20);
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

