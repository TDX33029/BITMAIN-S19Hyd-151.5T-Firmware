// FUN_019c9d24 @ 019c9d24 size=72 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_019c9d24(int param_1,uint param_2)

{
  if (param_2 < 6) {
    if (param_2 == 5) {
LAB_019c9d5c:
      return CONCAT44(param_2 - 5,param_1 + 5);
    }
  }
  else if (-0x41 < *(char *)(param_1 + 5)) goto LAB_019c9d5c;
                    /* WARNING: Subroutine does not return */
  FUN_012fb514(param_1,param_2,5,param_2,&DAT_01d2844c);
}

