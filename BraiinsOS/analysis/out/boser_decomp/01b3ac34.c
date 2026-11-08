// FUN_01b3ac34 @ 01b3ac34 size=148 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01b3ac34(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_b4 [160];
  int local_14;
  
  local_14 = DAT_01d53560;
  FUN_01b39010(auStack_b4,param_2,&PTR_01d3b2b0,0);
  FUN_01b26644(param_1,auStack_b4);
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

