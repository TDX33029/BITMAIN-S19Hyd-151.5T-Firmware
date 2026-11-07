// FUN_015d2540 @ 015d2540 size=100 calls_out=3 calls_in=0
// strings: 

void FUN_015d2540(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1[7] != 0) {
    do {
      iVar1 = FUN_01453464(param_1 + 3);
      uVar4 = *(undefined4 *)(iVar1 + -0x3c);
      iVar3 = param_1[7];
      uVar2 = *(undefined4 *)(iVar1 + -0x40);
      param_1[7] = iVar3 + -1;
      FUN_0134bd64(uVar2,uVar4);
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

