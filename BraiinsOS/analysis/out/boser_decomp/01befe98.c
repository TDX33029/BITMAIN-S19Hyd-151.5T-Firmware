// FUN_01befe98 @ 01befe98 size=28 calls_out=0 calls_in=1
// strings: 

void FUN_01befe98(void)

{
  bool bVar1;
  
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(0x1d54078);
    bVar1 = (bool)hasExclusiveAccess(0x1d54078);
  } while (!bVar1);
  DAT_01d54078 = DAT_01d54078 + 1;
  DataMemoryBarrier(0x1b);
  return;
}

