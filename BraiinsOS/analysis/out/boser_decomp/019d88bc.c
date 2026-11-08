// FUN_019d88bc @ 019d88bc size=88 calls_out=1 calls_in=2
// strings: assertion failed: prev.ref_count() >= 1

void FUN_019d88bc(uint *param_1)

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
    FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
  }
                    /* WARNING: Could not recover jumptable at 0x019d88f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[2] + 0x18))(param_1);
  return;
}

