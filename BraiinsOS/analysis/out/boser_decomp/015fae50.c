// FUN_015fae50 @ 015fae50 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_015fae50(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    *param_1 = 0x80000000;
    return;
  }
  iVar1 = FUN_015d26d4(param_2);
  uVar2 = *(undefined4 *)(iVar1 + -0x24);
  uVar3 = *(undefined4 *)(iVar1 + -0x20);
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  FUN_006666fc(param_1,uVar2,uVar3);
  return;
}

