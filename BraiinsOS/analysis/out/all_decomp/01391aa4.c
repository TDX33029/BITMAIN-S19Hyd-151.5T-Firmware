// FUN_01391aa4 @ 01391aa4 size=84 calls_out=1 calls_in=3
// strings: 

uint FUN_01391aa4(uint param_1)

{
  uint local_10 [2];
  
  local_10[0] = 1 << (param_1 & 0x1f);
  if (0x1a < (param_1 & 0x1f)) {
    local_10[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,local_10,&DAT_01893030,&DAT_01893000);
  }
  return local_10[0] | 0x40000000;
}

