// FUN_00adfb88 @ 00adfb88 size=124 calls_out=4 calls_in=9
// strings: 

void FUN_00adfb88(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_01298504(param_4,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_4);
  }
  FUN_01bed4e2(iVar1,param_3,param_4);
  FUN_019bb7e0(*(undefined4 *)(param_2 + 200),*(undefined4 *)(param_2 + 0xcc));
  *(undefined4 *)(param_2 + 200) = param_4;
  *(int *)(param_2 + 0xcc) = iVar1;
  *(undefined4 *)(param_2 + 0xd0) = param_4;
  FUN_01bed4e2(param_1,param_2,0xe0);
  return;
}

