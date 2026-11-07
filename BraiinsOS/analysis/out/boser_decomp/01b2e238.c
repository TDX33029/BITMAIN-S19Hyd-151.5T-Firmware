// FUN_01b2e238 @ 01b2e238 size=188 calls_out=3 calls_in=2
// strings: 

void FUN_01b2e238(undefined4 param_1,int param_2)

{
  int local_2c;
  int *local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_18;
  int local_14;
  
  local_14 = DAT_01d53560;
  local_2c = param_2;
  FUN_01b2ae48(&local_28,param_2,&PTR_01d3b2b0,0);
  local_28 = &local_2c;
  local_24 = (uint)(local_2c != 0);
  local_20 = 1;
  local_18 = 2;
  FUN_01b2be38(param_1,&local_28);
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return;
}

