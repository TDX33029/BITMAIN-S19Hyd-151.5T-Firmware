// FUN_01bee5a4 @ 01bee5a4 size=76 calls_out=0 calls_in=4
// strings: 

/* WARNING: Removing unreachable block (ram,0x01bee5e2) */

undefined8 FUN_01bee5a4(undefined *param_1,undefined4 param_2)

{
  if (DAT_01d53c10 != 0) {
    DAT_01d53c10 = DAT_01d53c10 + -1;
    return CONCAT44(param_2,param_1);
  }
  DataMemoryBarrier(0x1b);
  DAT_01d53490 = DAT_01d53c10;
  DataMemoryBarrier(0x1b);
  if (DAT_01d53c14 != 0) {
    param_2 = 1;
    software_interrupt(0);
    param_1 = &DAT_01d534b6;
  }
  return CONCAT44(param_2,param_1);
}

