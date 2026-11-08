// FUN_007025b0 @ 007025b0 size=136 calls_out=5 calls_in=69
// strings: internal error: entered unreachable code

undefined4 FUN_007025b0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9554);
  }
  iVar1 = FUN_01298504(param_3,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_3);
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  if (param_1[4] != -0x80000000) {
    FUN_0134bd64(param_1[4],param_1[5]);
  }
  param_1[4] = param_3;
  param_1[5] = iVar1;
  param_1[6] = param_3;
  return 0;
}

