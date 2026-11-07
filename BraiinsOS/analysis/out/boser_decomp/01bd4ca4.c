// FUN_01bd4ca4 @ 01bd4ca4 size=160 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01bd4ca4(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_34 [32];
  int local_14;
  
  local_14 = DAT_01d53560;
  FUN_01bd3efc(auStack_34,param_2,&PTR_01d3b2b0,0);
  FUN_01bd20e4(auStack_34,auStack_34);
  FUN_01bd3efc(param_1,auStack_34);
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

