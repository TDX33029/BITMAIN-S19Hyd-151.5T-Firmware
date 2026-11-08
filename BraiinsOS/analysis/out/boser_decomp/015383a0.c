// FUN_015383a0 @ 015383a0 size=84 calls_out=3 calls_in=2
// strings: 

void FUN_015383a0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01298504(param_3,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_3);
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  *(undefined4 *)(param_1 + 4) = param_3;
  *(int *)(param_1 + 8) = iVar1;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *param_1 = 3;
  return;
}

