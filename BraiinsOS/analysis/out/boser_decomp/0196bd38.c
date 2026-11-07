// FUN_0196bd38 @ 0196bd38 size=100 calls_out=1 calls_in=4
// strings: 

void FUN_0196bd38(int *param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if ((uint)(*param_1 - iVar1) < param_2) {
    FUN_006520b4(param_1,iVar1,param_2,1,1);
    iVar1 = param_1[2];
  }
  if (param_2 != 0) {
    *(undefined1 *)(param_1[1] + iVar1) = param_3;
    iVar1 = iVar1 + 1;
  }
  param_1[2] = iVar1;
  return;
}

