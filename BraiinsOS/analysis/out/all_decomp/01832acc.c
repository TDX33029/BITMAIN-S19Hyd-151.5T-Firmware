// FUN_01832acc @ 01832acc size=252 calls_out=2 calls_in=1
// strings: seckey != NULL

void FUN_01832acc(int param_1,int param_2)

{
  bool bVar1;
  int extraout_r1;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_c;
  
  local_c = DAT_018ddaf8;
  if (param_2 == 0) {
    (**(code **)(param_1 + 0xa0))("seckey != NULL",*(undefined4 *)(param_1 + 0xa4));
    bVar1 = false;
    local_18 = extraout_r1;
  }
  else {
    FUN_0182582c(&local_30,param_2,&local_34);
    bVar1 = local_34 == 0;
    if (((((((local_30 == 0 && local_2c == 0) && local_28 == 0) && local_24 == 0) && local_20 == 0)
         && local_1c == 0) && local_18 == 0) && local_14 == 0) {
      bVar1 = false;
    }
  }
  if ((local_c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(bVar1,local_18,local_c ^ DAT_018ddaf8,0);
  }
  return;
}

