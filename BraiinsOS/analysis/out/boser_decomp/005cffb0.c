// FUN_005cffb0 @ 005cffb0 size=36 calls_out=0 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x005cffc6) */

undefined8 FUN_005cffb0(undefined4 param_1)

{
  if (DAT_01d51121 == '\0') {
    param_1 = 1;
    DAT_01d51121 = '\x01';
  }
  return CONCAT44(&DAT_01d51121,param_1);
}

