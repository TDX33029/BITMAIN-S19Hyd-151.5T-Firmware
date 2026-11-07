// FUN_015e8784 @ 015e8784 size=52 calls_out=2 calls_in=2
// strings: 

void FUN_015e8784(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_012985ec(param_2,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_2);
  }
  *param_1 = param_2;
  param_1[1] = iVar1;
  param_1[2] = param_2;
  return;
}

