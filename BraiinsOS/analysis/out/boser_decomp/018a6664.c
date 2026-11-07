// FUN_018a6664 @ 018a6664 size=76 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_018a6664(int param_1,uint param_2,uint param_3)

{
  if (param_3 == 0) {
LAB_018a66a4:
    return CONCAT44(param_2 - param_3,param_1 + param_3);
  }
  if (param_3 < param_2) {
    if (-0x41 < *(char *)(param_1 + param_3)) goto LAB_018a66a4;
  }
  else if (param_2 == param_3) goto LAB_018a66a4;
                    /* WARNING: Subroutine does not return */
  FUN_012fb514();
}

