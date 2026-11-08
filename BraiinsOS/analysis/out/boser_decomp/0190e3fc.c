// FUN_0190e3fc @ 0190e3fc size=144 calls_out=1 calls_in=2
// strings: 

void FUN_0190e3fc(int *param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  if (param_5 != param_2 + param_6) {
    *param_1 = 0;
    return;
  }
  if ((param_3 & 1) == 0) {
    if (param_5 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2528c);
    }
    param_6 = param_5 - param_2;
    iVar1 = param_4 + param_2;
  }
  else {
    if (param_5 < param_6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2529c);
    }
    param_2 = param_5 - param_6;
    iVar1 = param_4;
    param_4 = param_4 + param_6;
  }
  *param_1 = iVar1;
  param_1[1] = param_6;
  param_1[2] = param_4;
  param_1[3] = param_2;
  return;
}

