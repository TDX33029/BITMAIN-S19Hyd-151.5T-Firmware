// FUN_016de338 @ 016de338 size=76 calls_out=0 calls_in=4
// strings: 

/* WARNING: Removing unreachable block (ram,0x016de376) */

undefined8 FUN_016de338(undefined *param_1,undefined4 param_2)

{
  if (DAT_018de1a8 != 0) {
    DAT_018de1a8 = DAT_018de1a8 + -1;
    return CONCAT44(param_2,param_1);
  }
  DataMemoryBarrier(0x1b);
  DAT_018dda28 = DAT_018de1a8;
  DataMemoryBarrier(0x1b);
  if (DAT_018de1ac != 0) {
    param_2 = 1;
    software_interrupt(0);
    param_1 = &DAT_018dda4e;
  }
  return CONCAT44(param_2,param_1);
}

