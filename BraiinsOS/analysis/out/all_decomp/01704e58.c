// FUN_01704e58 @ 01704e58 size=92 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01704e58(int *param_1)

{
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c24();
  }
  if (*param_1 != 0) {
    FUN_0177aafc();
    *param_1 = 0;
  }
  return 0;
}

