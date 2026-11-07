// FUN_016c4958 @ 016c4958 size=84 calls_out=1 calls_in=5
// strings: 

uint FUN_016c4958(uint param_1)

{
  uint local_10 [2];
  
  local_10[0] = 2 << (param_1 & 0x1f);
  if (0x7ffffff < local_10[0]) {
    local_10[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,local_10,&DAT_01d09470,&DAT_01d09440);
  }
  return local_10[0] | 0x20000000;
}

