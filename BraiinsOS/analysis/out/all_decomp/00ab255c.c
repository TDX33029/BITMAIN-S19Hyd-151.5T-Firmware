// FUN_00ab255c @ 00ab255c size=84 calls_out=2 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_00ab255c(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 - 0x40;
  DataMemoryBarrier(0xb);
  if (uVar2 < 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
  }
  if ((uVar2 & 0xffffffc0) == 0x40) {
    FUN_00a2a214();
    return;
  }
  return;
}

