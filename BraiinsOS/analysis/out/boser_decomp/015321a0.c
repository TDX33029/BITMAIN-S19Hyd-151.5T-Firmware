// FUN_015321a0 @ 015321a0 size=72 calls_out=1 calls_in=33
// strings: 

void FUN_015321a0(void)

{
  bool bVar1;
  uint uVar2;
  
  DataMemoryBarrier(0xb);
  if (DAT_01d4ec3c != 0) {
    FUN_01551e3c();
  }
  do {
    uVar2 = *DAT_01d4ec34;
    bVar1 = (bool)hasExclusiveAccess(DAT_01d4ec34);
  } while (!bVar1);
  *DAT_01d4ec34 = uVar2 + 1;
  if (uVar2 < 0x80000000) {
    return;
  }
  software_udf(0xfdee,0x15321e4);
  return;
}

