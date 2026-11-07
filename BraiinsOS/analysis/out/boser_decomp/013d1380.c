// FUN_013d1380 @ 013d1380 size=276 calls_out=5 calls_in=0
// strings: 

void FUN_013d1380(int param_1)

{
  undefined4 local_a0 [18];
  short local_58 [2];
  undefined4 local_54;
  
  FUN_013c89a4(local_58,&DAT_00473f21,0x3f);
  if (local_58[0] == 2) {
    local_a0[0] = local_54;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,local_a0,&DAT_01cf2aa4,&DAT_01cf29d4);
  }
  FUN_01bed4e2(local_a0,local_58,0x44);
  DataMemoryBarrier(0xb);
  if (DAT_01d4e4a4 != 2) {
    FUN_013d5268(&DAT_01d4e4a4,&DAT_01d4e4a4);
  }
  FUN_013c9430(local_58,local_a0,&DAT_01d4e4a8);
  if (local_58[0] == 2) {
    local_a0[0] = local_54;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,local_a0,&DAT_01cf2aa4,&DAT_01cf29e4);
  }
  FUN_01bed4e2(param_1,local_58,0x44);
  *(undefined1 *)(param_1 + 0x4a) = 2;
  *(undefined4 *)(param_1 + 0x46) = 0x2010101;
  *(undefined2 *)(param_1 + 0x44) = 0x101;
  return;
}

