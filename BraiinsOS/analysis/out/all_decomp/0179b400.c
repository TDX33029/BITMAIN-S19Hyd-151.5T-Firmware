// FUN_0179b400 @ 0179b400 size=184 calls_out=2 calls_in=1
// strings: 

void FUN_0179b400(undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined4 extraout_r1;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_018ddaf8;
  FUN_0179b1bc(&local_20,param_1,&PTR_018bc3f4,0);
  if ((local_20 < 0xffffff89) && (local_1c <= param_2)) {
    bVar1 = param_2 <= local_18;
  }
  else {
    bVar1 = false;
  }
  if ((local_14 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(bVar1,extraout_r1,local_14 ^ DAT_018ddaf8,0);
  }
  return;
}

