// FUN_01bd4d50 @ 01bd4d50 size=304 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01bd4d50(int param_1,int param_2,int param_3)

{
  undefined1 auStack_ec [32];
  undefined1 auStack_cc [32];
  undefined1 auStack_ac [32];
  undefined1 auStack_8c [32];
  undefined1 auStack_6c [32];
  undefined1 auStack_4c [32];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01bd3efc(auStack_ec,param_2,&PTR_01d3b2b0,0);
  FUN_01bd3efc(auStack_cc,param_2 + 0x20);
  FUN_01bd3efc(auStack_ac,param_2 + 0x40);
  FUN_01bd3efc(auStack_8c,param_3);
  FUN_01bd3efc(auStack_6c,param_3 + 0x20);
  FUN_01bd3efc(auStack_4c,param_3 + 0x40);
  FUN_01bd4000(auStack_ec,auStack_cc,auStack_ac,auStack_ec,auStack_cc,auStack_ac,0,auStack_8c,
               auStack_6c,auStack_4c);
  FUN_01bd3efc(param_1,auStack_ec);
  FUN_01bd3efc(param_1 + 0x20,auStack_cc);
  FUN_01bd3efc(param_1 + 0x40,auStack_ac);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

