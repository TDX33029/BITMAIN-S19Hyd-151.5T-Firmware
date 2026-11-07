// FUN_016c2978 @ 016c2978 size=92 calls_out=1 calls_in=1
// strings: 

void FUN_016c2978(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if ((uint)(*param_1 - iVar1) < 4) {
    FUN_006520b4(param_1,iVar1,4,1,1);
    iVar1 = param_1[2];
  }
  *(undefined4 *)(param_1[1] + iVar1) = 0;
  param_1[2] = iVar1 + 4;
  return;
}

