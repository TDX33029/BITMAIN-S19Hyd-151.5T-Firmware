// FUN_01b62f94 @ 01b62f94 size=176 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01b62f94(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_60 [68];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01b54ee4(auStack_60,0x40,&PTR_01d3b2b0,0);
  FUN_01b62f38(param_1,param_2,auStack_60);
  FUN_01b6b174(auStack_60,0x40);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

