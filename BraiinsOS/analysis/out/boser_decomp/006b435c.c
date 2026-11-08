// FUN_006b435c @ 006b435c size=100 calls_out=3 calls_in=1
// strings: 

void FUN_006b435c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1[7] != 0) {
    do {
      iVar1 = FUN_015d14f4(param_1 + 3);
      uVar4 = *(undefined4 *)(iVar1 + -8);
      iVar3 = param_1[7];
      uVar2 = *(undefined4 *)(iVar1 + -0xc);
      param_1[7] = iVar3 + -1;
      FUN_019bb7e0(uVar2,uVar4);
    } while (iVar3 + -1 != 0);
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

