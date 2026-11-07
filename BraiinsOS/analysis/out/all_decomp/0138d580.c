// FUN_0138d580 @ 0138d580 size=76 calls_out=1 calls_in=6
// strings: 

uint FUN_0138d580(uint param_1)

{
  uint local_14;
  uint *puStack_10;
  undefined1 *puStack_c;
  
  if (0x100 < param_1) {
    puStack_10 = &local_14;
    puStack_c = &LAB_00fac484;
    local_14 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0058924e,&puStack_10,&DAT_01892ee0);
  }
  return param_1 << 0x10 | 1;
}

