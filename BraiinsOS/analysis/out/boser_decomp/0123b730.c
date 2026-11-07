// FUN_0123b730 @ 0123b730 size=76 calls_out=2 calls_in=2
// strings: 

void FUN_0123b730(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (iVar1 == 0) {
    FUN_01a429c4(param_1,&DAT_0056ad38,0x10);
    return;
  }
  FUN_019625f8(param_1 + 2);
  *param_1 = 2;
  return;
}

