// FUN_01bc8fd8 @ 01bc8fd8 size=316 calls_out=5 calls_in=1
// strings: 

undefined8 FUN_01bc8fd8(int param_1,int param_2)

{
  undefined1 auStack_cc [40];
  undefined1 auStack_a4 [40];
  undefined1 auStack_7c [40];
  undefined1 auStack_54 [40];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01bc829c(auStack_cc,param_2,&PTR_01d3b2b0,0);
  FUN_01bc829c(auStack_a4,param_2 + 0x28);
  FUN_01bc829c(auStack_7c,param_2 + 0x50);
  FUN_01bc88a0(auStack_54,auStack_7c,auStack_7c);
  FUN_01bc87cc(auStack_7c,auStack_54);
  FUN_01bc88a0(param_1 + 0x28,param_2,param_2 + 0x28);
  FUN_01bc829c(auStack_54,param_1 + 0x28);
  FUN_01bc88a0(param_1 + 0x28,auStack_a4,auStack_cc);
  FUN_01bc895c(param_1 + 0x50,auStack_a4,auStack_cc);
  FUN_01bc87cc(auStack_a4,param_1 + 0x28);
  FUN_01bc895c(param_1,auStack_54,auStack_a4);
  FUN_01bc87cc(auStack_a4,param_1 + 0x50);
  FUN_01bc895c(param_1 + 0x78,auStack_7c,auStack_a4);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

