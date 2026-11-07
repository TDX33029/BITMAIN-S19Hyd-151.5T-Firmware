// FUN_01bcbf2c @ 01bcbf2c size=148 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01bcbf2c(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_3c [40];
  int local_14;
  
  local_14 = DAT_01d53560;
  FUN_01bc7bb8(auStack_3c,param_2,&PTR_01d3b2b0,0);
  FUN_01bc8c84(param_1,auStack_3c);
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

