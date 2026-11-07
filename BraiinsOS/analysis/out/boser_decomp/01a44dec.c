// FUN_01a44dec @ 01a44dec size=68 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01a44dec(int param_1,uint param_2,uint param_3)

{
  if (param_3 < param_2) {
    if (-0x41 < *(char *)(param_1 + param_3)) {
LAB_01a44e24:
      return CONCAT44(param_2 - param_3,(char *)(param_1 + param_3));
    }
  }
  else if (param_2 == param_3) goto LAB_01a44e24;
                    /* WARNING: Subroutine does not return */
  FUN_012fb514();
}

