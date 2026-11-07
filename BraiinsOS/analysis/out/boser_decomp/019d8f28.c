// FUN_019d8f28 @ 019d8f28 size=92 calls_out=1 calls_in=1
// strings: assertion failed: prev.ref_count() >= 2

void FUN_019d8f28(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 - 0x80;
  DataMemoryBarrier(0xb);
  if (uVar2 < 0x80) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: prev.ref_count() >= 2",0x27,&DAT_01d28d24);
  }
  if ((uVar2 & 0xffffffc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x019d8f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 8))();
    return;
  }
  return;
}

