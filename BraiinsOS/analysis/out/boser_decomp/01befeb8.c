// FUN_01befeb8 @ 01befeb8 size=88 calls_out=0 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01beff00) */

undefined8 FUN_01befeb8(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = DAT_01d54078;
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(0x1d54078);
    bVar1 = (bool)hasExclusiveAccess(0x1d54078);
  } while (!bVar1);
  DAT_01d54078 = DAT_01d54078 + -1;
  DataMemoryBarrier(0x1b);
  if ((iVar2 == 1) && (DAT_01d5407c != 0)) {
    param_2 = 0x81;
    software_interrupt(0);
    param_1 = 0x1d5409e;
  }
  return CONCAT44(param_2,param_1);
}

