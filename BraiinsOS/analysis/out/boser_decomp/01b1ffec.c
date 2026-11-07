// FUN_01b1ffec @ 01b1ffec size=84 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01b1ffec(int *param_1)

{
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be32a0();
  }
  if (*param_1 == 0) {
    return 0;
  }
  FUN_01b6b1c4();
  *param_1 = 0;
  return 0;
}

