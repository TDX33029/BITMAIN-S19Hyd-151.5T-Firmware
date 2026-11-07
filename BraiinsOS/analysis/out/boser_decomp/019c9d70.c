// FUN_019c9d70 @ 019c9d70 size=108 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_019c9d70(int param_1,uint param_2,uint param_3)

{
  if (4 < param_3) {
    if (param_2 < 6) {
      if (param_2 != 5) goto LAB_019c9db0;
    }
    else if (*(char *)(param_1 + 5) < -0x40) goto LAB_019c9db0;
    if (param_3 < param_2) {
      if (-0x41 < *(char *)(param_1 + param_3)) {
LAB_019c9dd0:
        return CONCAT44(param_3 - 5,param_1 + 5);
      }
    }
    else if (param_3 == param_2) goto LAB_019c9dd0;
  }
LAB_019c9db0:
                    /* WARNING: Subroutine does not return */
  FUN_012fb514(param_1,param_2,5,param_3,&DAT_01d2845c);
}

