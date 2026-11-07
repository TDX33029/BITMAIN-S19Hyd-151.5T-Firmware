// FUN_013d1754 @ 013d1754 size=248 calls_out=5 calls_in=0
// strings: ip6bpfseg6_localrplioam6

void FUN_013d1754(undefined4 param_1)

{
  undefined4 local_a0 [18];
  short local_58 [2];
  undefined4 local_54;
  
  FUN_013c89a4(local_58,"ip6bpfseg6_localrplioam6",3);
  if (local_58[0] == 2) {
    local_a0[0] = local_54;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,local_a0,&DAT_01cf2aa4,&DAT_01cf2a74);
  }
  FUN_01bed4e2(local_a0,local_58,0x44);
  DataMemoryBarrier(0xb);
  if (DAT_01d4e308 != 2) {
    FUN_013d5268(&DAT_01d4e308,&DAT_01d4e308);
  }
  FUN_013c9430(local_58,local_a0,&DAT_01d4e30c);
  if (local_58[0] == 2) {
    local_a0[0] = local_54;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,local_a0,&DAT_01cf2aa4,&DAT_01cf2a84);
  }
  FUN_01bed4e2(param_1,local_58,0x44);
  return;
}

