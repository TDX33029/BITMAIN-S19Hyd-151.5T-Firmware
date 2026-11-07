// FUN_00f60054 @ 00f60054 size=108 calls_out=3 calls_in=4
// strings: 

void FUN_00f60054(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uStack_20;
  uint uStack_1c;
  
  iVar1 = param_1[1];
  uStack_1c = param_1[2] - iVar1;
  if (uStack_1c < param_3) {
    FUN_00f5f538(param_1,param_3);
    iVar1 = param_1[1];
    uStack_1c = param_1[2] - iVar1;
  }
  FUN_016dd1aa(*param_1 + iVar1,param_2,param_3);
  if (uStack_1c < param_3) {
    uStack_20 = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&uStack_20);
  }
  param_1[1] = iVar1 + param_3;
  return;
}

