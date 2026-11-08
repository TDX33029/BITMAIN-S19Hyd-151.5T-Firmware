// FUN_016dfc74 @ 016dfc74 size=28 calls_out=0 calls_in=1
// strings: 

void FUN_016dfc74(void)

{
  bool bVar1;
  
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(0x18de610);
    bVar1 = (bool)hasExclusiveAccess(0x18de610);
  } while (!bVar1);
  DAT_018de610 = DAT_018de610 + 1;
  DataMemoryBarrier(0x1b);
  return;
}

