// FUN_0165ab6c @ 0165ab6c size=84 calls_out=2 calls_in=0
// strings: 

void FUN_0165ab6c(void)

{
  bool bVar1;
  
  FUN_01282570(&DAT_018d90ec);
  if (DAT_018d90ec != '\x01') {
    ClearExclusiveLocal();
    FUN_01280a5c(&DAT_018d90ec);
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(0x18d90ec);
  } while (!bVar1);
  DAT_018d90ec = 0;
  return;
}

