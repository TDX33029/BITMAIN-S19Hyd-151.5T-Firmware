// FUN_006bd550 @ 006bd550 size=76 calls_out=3 calls_in=1
// strings: 

void FUN_006bd550(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01298504(param_3,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_3);
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  *param_1 = param_3;
  param_1[1] = iVar1;
  param_1[2] = param_3;
  return;
}

