// FUN_0067e188 @ 0067e188 size=68 calls_out=2 calls_in=4
// strings: 

void FUN_0067e188(undefined4 *param_1,int *param_2)

{
  if (param_2[2] == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d274a0);
  }
  FUN_0067de34(param_1,*param_2,param_2[1]);
  return;
}

