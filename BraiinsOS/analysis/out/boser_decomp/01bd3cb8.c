// FUN_01bd3cb8 @ 01bd3cb8 size=520 calls_out=5 calls_in=3
// strings: 

undefined8
FUN_01bd3cb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_12c [32];
  undefined1 auStack_10c [32];
  undefined1 auStack_ec [32];
  undefined1 auStack_cc [32];
  undefined1 auStack_ac [32];
  undefined1 auStack_8c [32];
  undefined1 auStack_6c [32];
  undefined1 auStack_4c [32];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01bd20e4(auStack_12c,param_6,&PTR_01d3b2b0,0);
  FUN_01bd20e4(auStack_10c,param_5);
  FUN_01bd0c38(auStack_ec,param_4,auStack_10c);
  FUN_01bd38b4(auStack_cc,param_4,auStack_12c);
  FUN_01bd35bc(auStack_ac,param_4,auStack_12c);
  FUN_01bd35bc(auStack_8c,auStack_ac,auStack_ac);
  FUN_01bd35bc(auStack_ac,auStack_ac,auStack_8c);
  FUN_01bd0c38(auStack_6c,auStack_cc,auStack_ac);
  FUN_01bd20e4(param_1,auStack_6c);
  FUN_01bd35bc(auStack_4c,auStack_ec);
  FUN_01bd35bc(auStack_4c,auStack_4c,auStack_4c);
  FUN_01bd35bc(auStack_8c,auStack_4c,auStack_4c);
  FUN_01bd38b4(param_1,param_1,auStack_8c);
  FUN_01bd35bc(auStack_12c,auStack_10c,auStack_12c);
  FUN_01bd35bc(auStack_cc,param_5,param_6);
  FUN_01bd20e4(param_3,auStack_cc);
  FUN_01bd38b4(param_3,param_3,auStack_12c);
  FUN_01bd38b4(param_2,auStack_4c,param_1);
  FUN_01bd35bc(auStack_10c,auStack_10c,auStack_10c);
  FUN_01bd20e4(auStack_10c,auStack_10c);
  FUN_01bd0c38(param_2,auStack_6c,param_2);
  FUN_01bd35bc(auStack_10c,auStack_10c,auStack_10c);
  FUN_01bd38b4(param_2,param_2,auStack_10c);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

