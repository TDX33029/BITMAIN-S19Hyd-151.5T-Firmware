// FUN_012a4878 @ 012a4878 size=92 calls_out=1 calls_in=17
// strings: 

int FUN_012a4878(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  param_2 = param_2 * 0x134;
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x118) == param_4) &&
       (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x114),param_3,param_4), iVar1 == 0))
    break;
    param_1 = param_1 + 0x134;
    param_2 = param_2 + -0x134;
  }
  return param_1;
}

