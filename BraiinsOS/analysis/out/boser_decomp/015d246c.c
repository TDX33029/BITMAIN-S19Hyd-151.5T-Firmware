// FUN_015d246c @ 015d246c size=116 calls_out=4 calls_in=2
// strings: 

void FUN_015d246c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1[7] != 0) {
    do {
      iVar1 = FUN_015d24e0(param_1 + 3);
      iVar2 = param_1[7];
      uVar3 = *(undefined4 *)(iVar1 + -0x30);
      uVar4 = *(undefined4 *)(iVar1 + -0x2c);
      param_1[7] = iVar2 + -1;
      FUN_0134bd64(uVar3,uVar4);
      FUN_015d1628(iVar1 + -0x20);
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

