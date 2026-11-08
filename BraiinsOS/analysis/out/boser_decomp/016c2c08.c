// FUN_016c2c08 @ 016c2c08 size=76 calls_out=1 calls_in=17
// strings: 

uint FUN_016c2c08(uint param_1)

{
  uint local_14;
  uint *puStack_10;
  code *pcStack_c;
  
  if (0x100 < param_1) {
    puStack_10 = &local_14;
    pcStack_c = FUN_012fd02c;
    local_14 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005b0c92,&puStack_10,&DAT_01d09300);
  }
  return param_1 << 0x10 | 1;
}

