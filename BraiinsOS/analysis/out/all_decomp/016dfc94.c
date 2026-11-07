// FUN_016dfc94 @ 016dfc94 size=88 calls_out=0 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x016dfcdc) */

undefined8 FUN_016dfc94(undefined *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = DAT_018de610;
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(0x18de610);
    bVar1 = (bool)hasExclusiveAccess(0x18de610);
  } while (!bVar1);
  DAT_018de610 = DAT_018de610 + -1;
  DataMemoryBarrier(0x1b);
  if ((iVar2 == 1) && (DAT_018de614 != 0)) {
    param_2 = 0x81;
    software_interrupt(0);
    param_1 = &DAT_018de636;
  }
  return CONCAT44(param_2,param_1);
}

