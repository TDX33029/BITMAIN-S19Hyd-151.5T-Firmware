// FUN_013676ac @ 013676ac size=108 calls_out=3 calls_in=2
// strings: 

void FUN_013676ac(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uStack_28;
  uint uStack_24;
  
  iVar1 = param_1[1];
  uStack_24 = param_1[2] - iVar1;
  if (uStack_24 < param_3) {
    FUN_01283c9c(param_1,param_3);
    iVar1 = param_1[1];
    uStack_24 = param_1[2] - iVar1;
  }
  FUN_01bed4e2(*param_1 + iVar1,param_2,param_3);
  if (uStack_24 < param_3) {
    uStack_28 = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_01284540(&uStack_28);
  }
  param_1[1] = iVar1 + param_3;
  return;
}

