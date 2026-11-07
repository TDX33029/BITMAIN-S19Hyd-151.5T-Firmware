// FUN_01bcbe44 @ 01bcbe44 size=220 calls_out=8 calls_in=1
// strings: 

undefined8 FUN_01bcbe44(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_154 [40];
  undefined1 auStack_12c [40];
  undefined1 auStack_104 [40];
  undefined1 auStack_dc [40];
  undefined1 auStack_b4 [40];
  undefined1 auStack_8c [80];
  undefined1 auStack_3c [32];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01bc9860(auStack_3c,param_2,&PTR_01d3b2b0,0);
  FUN_01bc9f60(auStack_dc,auStack_3c);
  FUN_01bc88a0(auStack_154,auStack_8c,auStack_b4);
  FUN_01bc895c(auStack_12c,auStack_8c,auStack_b4);
  FUN_01bc8c84(auStack_104,auStack_12c);
  FUN_01bc7bec(auStack_104,auStack_154,auStack_104);
  FUN_01bc94a0(param_1,auStack_104);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

