// FUN_01bd7f00 @ 01bd7f00 size=140 calls_out=2 calls_in=2
// strings: 

void FUN_01bd7f00(undefined4 param_1)

{
  undefined4 extraout_r1;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_01d53560;
  FUN_01bd7ec4(&local_10,param_1,4,0);
  if ((local_c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(local_10,extraout_r1,local_c ^ DAT_01d53560,0);
  }
  return;
}

