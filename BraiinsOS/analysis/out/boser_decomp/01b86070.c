// FUN_01b86070 @ 01b86070 size=84 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01b86070(int param_1,uint param_2,uint param_3)

{
  short *psVar1;
  
  if (param_3 <= param_2) {
    psVar1 = (short *)(param_1 + -2);
    while (psVar1 = psVar1 + 1, *psVar1 != 0) {
      if (psVar1 == (short *)(param_1 + param_3 * 2)) {
        return 2;
      }
    }
  }
  return 1;
}

