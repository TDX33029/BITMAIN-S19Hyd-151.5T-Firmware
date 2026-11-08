// FUN_01b54f50 @ 01b54f50 size=116 calls_out=5 calls_in=1
// strings: 

void FUN_01b54f50(void)

{
  char *pcVar1;
  
  FUN_01b7079c(&DAT_01d51bbc);
  pcVar1 = DAT_01d51be4;
  if (DAT_01d51be4 != (char *)0x0) {
    if (*DAT_01d51be4 != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_01be32a0();
    }
    FUN_01b7bc08(*(undefined4 *)(DAT_01d51be4 + 0x13c));
    FUN_01b6b1c4(pcVar1);
    DAT_01d51be4 = (char *)0x0;
  }
  FUN_01b707fc(&DAT_01d51bbc);
  return;
}

