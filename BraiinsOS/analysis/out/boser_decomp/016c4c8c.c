// FUN_016c4c8c @ 016c4c8c size=84 calls_out=1 calls_in=8
// strings: 

uint FUN_016c4c8c(uint param_1)

{
  uint local_10 [2];
  
  local_10[0] = 1 << (param_1 & 0x1f);
  if (0x1a < (param_1 & 0x1f)) {
    local_10[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,local_10,&DAT_01d09470,&DAT_01d09430);
  }
  return local_10[0] | 0x40000000;
}

