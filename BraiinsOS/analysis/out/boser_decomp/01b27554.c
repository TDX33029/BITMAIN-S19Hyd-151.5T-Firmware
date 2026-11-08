// FUN_01b27554 @ 01b27554 size=144 calls_out=2 calls_in=8
// strings: 

uint FUN_01b27554(undefined4 param_1)

{
  uint local_10;
  int local_c;
  
  local_c = DAT_01d53560;
  FUN_01b26974(&local_10,param_1,4,0);
  if (local_c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return local_10 << 0x18 | (local_10 >> 8 & 0xff) << 0x10 | (local_10 >> 0x10 & 0xff) << 8 |
         local_10 >> 0x18;
}

