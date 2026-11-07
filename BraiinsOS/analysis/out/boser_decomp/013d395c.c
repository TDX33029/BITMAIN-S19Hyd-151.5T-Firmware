// FUN_013d395c @ 013d395c size=144 calls_out=3 calls_in=0
// strings: localhost.

void FUN_013d395c(int param_1)

{
  short local_50 [2];
  undefined4 local_4c;
  undefined4 local_c;
  
  FUN_013c89a4(local_50,"localhost.",10);
  if (local_50[0] == 2) {
    local_c = local_4c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_c,&DAT_01cf2aa4,&DAT_01cf2a94);
  }
  FUN_01bed4e2(param_1,local_50,0x44);
  *(undefined1 *)(param_1 + 0x4a) = 2;
  *(undefined4 *)(param_1 + 0x46) = 0x2010101;
  *(undefined2 *)(param_1 + 0x44) = 0x101;
  return;
}

