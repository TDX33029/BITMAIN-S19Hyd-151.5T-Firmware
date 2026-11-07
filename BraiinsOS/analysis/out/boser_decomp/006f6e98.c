// FUN_006f6e98 @ 006f6e98 size=116 calls_out=3 calls_in=17
// strings: 

void FUN_006f6e98(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    FUN_006fc3a0();
  }
  iVar1 = *param_2;
  *param_2 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  FUN_0134aee0(param_2[2],param_2[3],4,4,unaff_r4,unaff_lr);
  if (param_2 == (int *)&DAT_ffffffff) {
    return;
  }
  iVar1 = param_2[1];
  param_2[1] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    thunk_FUN_01be4678(param_2);
    return;
  }
  return;
}

