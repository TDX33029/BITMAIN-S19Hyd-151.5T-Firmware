// FUN_01b22638 @ 01b22638 size=316 calls_out=6 calls_in=2
// strings: 

undefined8 FUN_01b22638(int param_1,int param_2)

{
  undefined1 auStack_cc [40];
  undefined1 auStack_a4 [40];
  undefined1 auStack_7c [40];
  undefined1 auStack_54 [40];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01b213a4(auStack_cc,param_2,&PTR_01d3b2b0,0);
  FUN_01b213a4(auStack_a4,param_2 + 0x28);
  FUN_01b213a4(auStack_7c,param_2 + 0x50);
  FUN_01b21f9c(auStack_54,auStack_7c,auStack_7c);
  FUN_01b2233c(auStack_7c,auStack_54);
  FUN_01b21f9c(param_1 + 0x28,param_2,param_2 + 0x28);
  FUN_01b20a84(auStack_54,param_1 + 0x28);
  FUN_01b21f9c(param_1 + 0x28,auStack_a4,auStack_cc);
  FUN_01b21d60(param_1 + 0x50,auStack_a4,auStack_cc);
  FUN_01b2233c(auStack_a4,param_1 + 0x28);
  FUN_01b21d60(param_1,auStack_54,auStack_a4);
  FUN_01b2233c(auStack_a4,param_1 + 0x50);
  FUN_01b21d60(param_1 + 0x78,auStack_7c,auStack_a4);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

