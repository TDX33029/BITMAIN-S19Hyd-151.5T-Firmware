// FUN_01316008 @ 01316008 size=100 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01316008(int param_1,uint param_2)

{
  if (param_2 < 2) {
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(param_1,0,1,0,&DAT_01ce4be4);
    }
  }
  else if (*(char *)(param_1 + 1) < -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb514(param_1,param_2,1,param_2,&DAT_01ce4be4);
  }
  return CONCAT44(param_2 - 1,param_1 + 1);
}

