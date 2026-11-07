// FUN_019dff38 @ 019dff38 size=140 calls_out=2 calls_in=2
// strings: internal error: entered unreachable code | there is no such thing as a release load

undefined8 FUN_019dff38(uint *param_1,char param_2)

{
  uint uVar1;
  
  if (param_2 == '\0') {
    uVar1 = *param_1;
  }
  else {
    if (param_2 != '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("there is no such thing as a release load",0x51,&DAT_01d2e15c);
    }
    uVar1 = *param_1;
    DataMemoryBarrier(0xb);
  }
  if ((5 < uVar1) || ((0x27U >> (uVar1 & 0xff) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d28ffc);
  }
  return CONCAT44(*(undefined4 *)(&DAT_0053936c + uVar1 * 4),
                  *(undefined4 *)(&DAT_00539384 + uVar1 * 4));
}

