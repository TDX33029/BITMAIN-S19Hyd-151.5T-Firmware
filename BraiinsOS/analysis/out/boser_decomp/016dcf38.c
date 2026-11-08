// FUN_016dcf38 @ 016dcf38 size=68 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_016dcf38(int param_1,uint param_2,uint param_3)

{
  if (param_3 < param_2) {
    if (-0x41 < *(char *)(param_1 + param_3)) {
LAB_016dcf70:
      return CONCAT44(param_2 - param_3,(char *)(param_1 + param_3));
    }
  }
  else if (param_2 == param_3) goto LAB_016dcf70;
                    /* WARNING: Subroutine does not return */
  FUN_012fb514();
}

