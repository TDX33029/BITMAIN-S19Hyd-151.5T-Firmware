// FUN_01b87b38 @ 01b87b38 size=184 calls_out=2 calls_in=1
// strings: 

void FUN_01b87b38(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_01d53560;
  FUN_01b878f4(&local_20,param_1,&PTR_01d3b2b0,0);
  if ((local_20 < 0xffffff89) && (local_1c <= param_2)) {
    if (local_18 < param_2) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  if ((local_14 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,extraout_r1,local_14 ^ DAT_01d53560,0);
  }
  return;
}

