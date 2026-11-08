// FUN_01bd4be4 @ 01bd4be4 size=180 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01bd4be4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_5c [32];
  undefined1 auStack_3c [32];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01bd3efc(auStack_5c,param_2,&PTR_01d3b2b0,0);
  FUN_01bd3efc(auStack_3c,param_3);
  FUN_01bd0c38(auStack_5c,auStack_5c,auStack_3c);
  FUN_01bd3efc(param_1,auStack_5c);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

