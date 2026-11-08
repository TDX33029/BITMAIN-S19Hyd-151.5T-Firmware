// FUN_015bef50 @ 015bef50 size=52 calls_out=1 calls_in=1
// strings: 

void FUN_015bef50(void)

{
  bool bVar1;
  uint uVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = DAT_018dd9c4 - 1;
    bVar1 = (bool)hasExclusiveAccess(0x18dd9c4);
  } while (!bVar1);
  DAT_018dd9c4 = uVar2;
  if ((uVar2 & 0xbfffffff) == 0x80000000) {
    FUN_015e9814();
    return;
  }
  return;
}

