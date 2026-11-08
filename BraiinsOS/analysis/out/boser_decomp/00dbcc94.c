// FUN_00dbcc94 @ 00dbcc94 size=92 calls_out=3 calls_in=1
// strings: 

void FUN_00dbcc94(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01298504(param_3,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_3);
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  param_1[4] = param_3;
  param_1[5] = iVar1;
  param_1[6] = param_3;
  param_1[7] = 0;
  *param_1 = 0;
  return;
}

