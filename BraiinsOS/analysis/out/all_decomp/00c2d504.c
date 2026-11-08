// FUN_00c2d504 @ 00c2d504 size=92 calls_out=1 calls_in=1
// strings: assertion failed: prev.ref_count() >= 1

void FUN_00c2d504(uint *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00c2d544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 8))();
    return;
  }
  return;
}

