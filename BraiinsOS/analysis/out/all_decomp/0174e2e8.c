// FUN_0174e2e8 @ 0174e2e8 size=132 calls_out=5 calls_in=1
// strings: 

void FUN_0174e2e8(void)

{
  char *pcVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_01781f64(&DAT_018de6b4);
  pcVar1 = DAT_018de6dc;
  if (DAT_018de6dc != (char *)0x0) {
    if (*DAT_018de6dc != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c24(uVar2);
    }
    FUN_0178d588(*(undefined4 *)(DAT_018de6dc + 0x13c));
    FUN_0177aafc(pcVar1);
    DAT_018de6dc = (char *)0x0;
  }
  FUN_01781fc4(&DAT_018de6b4);
  return;
}

