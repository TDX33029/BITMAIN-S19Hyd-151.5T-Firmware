// FUN_005b51b0 @ 005b51b0 size=36 calls_out=0 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x005b51c6) */

undefined8 FUN_005b51b0(undefined4 param_1)

{
  if (DAT_018db741 == '\0') {
    param_1 = 1;
    DAT_018db741 = '\x01';
  }
  return CONCAT44(&DAT_018db741,param_1);
}

