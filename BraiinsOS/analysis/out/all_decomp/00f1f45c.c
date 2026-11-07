// FUN_00f1f45c @ 00f1f45c size=100 calls_out=1 calls_in=1
// strings: 

void FUN_00f1f45c(int *param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if ((uint)(*param_1 - iVar1) < param_2) {
    FUN_00edff4c(param_1,iVar1,param_2,1,1);
    iVar1 = param_1[2];
  }
  if (param_2 != 0) {
    *(undefined1 *)(param_1[1] + iVar1) = param_3;
    iVar1 = iVar1 + 1;
  }
  param_1[2] = iVar1;
  return;
}

