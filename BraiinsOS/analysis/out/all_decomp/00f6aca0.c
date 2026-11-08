// FUN_00f6aca0 @ 00f6aca0 size=136 calls_out=1 calls_in=1
// strings: 

void FUN_00f6aca0(undefined4 *param_1,char *param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 4;
    return;
  }
  if (*param_2 != ':') {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 3;
    return;
  }
  if ((param_3 != 1) && (param_2[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(param_2,param_3,1,param_3,&DAT_018801e4);
  }
  *param_1 = param_2 + 1;
  param_1[1] = param_3 + -1;
  return;
}

