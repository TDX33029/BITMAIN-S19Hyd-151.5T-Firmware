// FUN_00f8a7d0 @ 00f8a7d0 size=112 calls_out=2 calls_in=1
// strings: 

int FUN_00f8a7d0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  param_2 = param_2 * 0x134;
  while( true ) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0035e2fc,99,param_5);
    }
    if ((*(int *)(param_1 + 0x118) == param_4) &&
       (iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(param_1 + 0x114),param_3,param_4), iVar1 == 0))
    break;
    param_1 = param_1 + 0x134;
    param_2 = param_2 + -0x134;
  }
  return param_1;
}

