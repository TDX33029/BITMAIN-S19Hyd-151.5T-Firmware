// FUN_016f6948 @ 016f6948 size=84 calls_out=1 calls_in=2
// strings: 

uint FUN_016f6948(int param_1)

{
  if (param_1 == 0xe000) {
    return 0xd7ff;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d188b8);
  }
  if ((param_1 - 1U ^ 0xd800) - 0x110000 < 0xffef0800) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d188c8);
  }
  return param_1 - 1U;
}

