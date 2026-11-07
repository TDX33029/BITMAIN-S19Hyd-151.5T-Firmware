// FUN_015d14b0 @ 015d14b0 size=68 calls_out=2 calls_in=2
// strings: 

void FUN_015d14b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while (iVar1 != 0) {
    iVar1 = FUN_015d14f4(param_1);
    uVar3 = *(undefined4 *)(iVar1 + -8);
    uVar2 = *(undefined4 *)(iVar1 + -0xc);
    iVar1 = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 0x10) = iVar1;
    FUN_0134bd64(uVar2,uVar3);
  }
  return;
}

