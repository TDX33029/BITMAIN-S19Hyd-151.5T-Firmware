// FUN_0128daf0 @ 0128daf0 size=132 calls_out=1 calls_in=1
// strings: 

void FUN_0128daf0(undefined4 *param_1,char *param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_3 == 0) {
    *param_1 = 0;
    uVar1 = 4;
  }
  else {
    if (*param_2 == ':') {
      if ((param_3 != 1) && (param_2[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,1,param_3,0x1c26380);
      }
      *param_1 = param_2 + 1;
      param_1[1] = param_3 + -1;
      return;
    }
    *param_1 = 0;
    uVar1 = 3;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

