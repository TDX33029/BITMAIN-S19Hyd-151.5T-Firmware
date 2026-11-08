// FUN_01b27094 @ 01b27094 size=148 calls_out=2 calls_in=6
// strings: 

undefined8 FUN_01b27094(undefined4 param_1)

{
  uint local_18;
  uint local_14;
  int local_c;
  
  local_c = DAT_01d53560;
  FUN_01b26974(&local_18,param_1,8,0);
  if (local_c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return CONCAT44(local_18 << 0x18 | (local_18 >> 8 & 0xff) << 0x10 | (local_18 >> 0x10 & 0xff) << 8
                  | local_18 >> 0x18,
                  local_14 << 0x18 | (local_14 >> 8 & 0xff) << 0x10 | (local_14 >> 0x10 & 0xff) << 8
                  | local_14 >> 0x18);
}

