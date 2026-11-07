// FUN_01ab1588 @ 01ab1588 size=48 calls_out=2 calls_in=20
// strings: capacity overflow

void FUN_01ab1588(int param_1)

{
  if (param_1 == -0x7fffffff) {
    return;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("capacity overflow",0x11,&DAT_01d2ebd8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066439c();
}

