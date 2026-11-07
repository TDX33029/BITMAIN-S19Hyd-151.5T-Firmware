// FUN_007143c8 @ 007143c8 size=196 calls_out=4 calls_in=24
// strings: 

undefined4 * FUN_007143c8(void)

{
  bool bVar1;
  undefined4 *puStack_10;
  byte bStack_c;
  
  DataMemoryBarrier(0xb);
  if (DAT_018cc6b8 != 0) {
    FUN_007144c0();
  }
  do {
    if (DAT_018cc658 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018cc658);
      goto LAB_00714408;
    }
    bVar1 = (bool)hasExclusiveAccess(0x18cc658);
  } while (!bVar1);
  DAT_018cc658 = 1;
  DataMemoryBarrier(0xb);
LAB_00714408:
  bStack_c = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    bStack_c = FUN_015bf3f8();
    bStack_c = bStack_c ^ 1;
  }
  if (DAT_018cc65c != '\0') {
    puStack_10 = &DAT_018cc658;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0033fca4,0x26,&puStack_10,&DAT_01859990);
  }
  return &DAT_018cc658;
}

