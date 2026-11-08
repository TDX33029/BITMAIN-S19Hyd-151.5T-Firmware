// FUN_015fdea4 @ 015fdea4 size=116 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_015fdea4(int param_1,uint param_2,uint param_3,uint param_4)

{
  if (param_4 < param_3) goto LAB_015fdef4;
  if (param_3 != 0) {
    if (param_3 < param_2) {
      if (*(char *)(param_1 + param_3) < -0x40) goto LAB_015fdef4;
    }
    else if (param_3 != param_2) goto LAB_015fdef4;
  }
  if (param_4 != 0) {
    if (param_4 < param_2) {
      if (*(char *)(param_1 + param_4) < -0x40) {
LAB_015fdef4:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514();
      }
    }
    else if (param_4 != param_2) goto LAB_015fdef4;
  }
  return CONCAT44(param_4 - param_3,param_1 + param_3);
}

