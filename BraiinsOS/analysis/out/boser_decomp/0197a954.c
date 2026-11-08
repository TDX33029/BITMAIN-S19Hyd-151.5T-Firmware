// FUN_0197a954 @ 0197a954 size=12 calls_out=1 calls_in=63
// strings: 

void FUN_0197a954(void)

{
  bool bVar1;
  uint uVar2;
  
  FUN_019a350c();
  DataMemoryBarrier(0xb);
  do {
    uVar2 = DAT_01d51b14 - 1;
    bVar1 = (bool)hasExclusiveAccess(0x1d51b14);
  } while (!bVar1);
  DAT_01d51b14 = uVar2;
  if ((uVar2 & 0xbfffffff) == 0x80000000) {
    FUN_019a33c4();
    return;
  }
  return;
}

