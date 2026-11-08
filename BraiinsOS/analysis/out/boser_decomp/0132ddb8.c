// FUN_0132ddb8 @ 0132ddb8 size=68 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_0132ddb8(int param_1,uint param_2,uint param_3)

{
  if (param_3 == 0) {
LAB_0132ddf0:
    return CONCAT44(param_2 - param_3,param_1 + param_3);
  }
  if (param_3 < param_2) {
    if (-0x41 < *(char *)(param_1 + param_3)) goto LAB_0132ddf0;
  }
  else if (param_2 == param_3) goto LAB_0132ddf0;
                    /* WARNING: Subroutine does not return */
  FUN_012fb514();
}

