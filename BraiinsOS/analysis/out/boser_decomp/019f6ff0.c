// FUN_019f6ff0 @ 019f6ff0 size=84 calls_out=2 calls_in=3
// strings: 

void FUN_019f6ff0(void)

{
  bool bVar1;
  
  FUN_01650a90(&DAT_01d50454);
  if (DAT_01d50454 != '\x01') {
    ClearExclusiveLocal();
    FUN_0164f86c(&DAT_01d50454);
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(0x1d50454);
  } while (!bVar1);
  DAT_01d50454 = 0;
  return;
}

