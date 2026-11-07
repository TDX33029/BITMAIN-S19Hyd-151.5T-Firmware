// FUN_01b38d78 @ 01b38d78 size=320 calls_out=5 calls_in=1
// strings: 

undefined8 FUN_01b38d78(int param_1,int param_2,int param_3)

{
  undefined1 auStack_cc [40];
  undefined1 auStack_a4 [40];
  undefined1 auStack_7c [40];
  undefined1 auStack_54 [40];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01b21f9c(param_1,param_2 + 0x28,param_2,0);
  FUN_01b21d60(param_1 + 0x28,param_2 + 0x28,param_2);
  FUN_01b20ba0(auStack_7c,param_1,param_3);
  FUN_01b20ba0(auStack_a4,param_1 + 0x28,param_3 + 0x28);
  FUN_01b20ba0(auStack_54,param_3 + 0x78,param_2 + 0x78);
  FUN_01b20ba0(auStack_cc,param_2 + 0x50,param_3 + 0x50);
  FUN_01b21f9c(param_1 + 0x78,auStack_cc);
  FUN_01b21d60(param_1,auStack_7c,auStack_a4);
  FUN_01b21f9c(param_1 + 0x28,auStack_7c,auStack_a4);
  FUN_01b2233c(auStack_7c,param_1 + 0x78);
  FUN_01b21f9c(param_1 + 0x50,auStack_7c,auStack_54);
  FUN_01b21d60(param_1 + 0x78,auStack_7c,auStack_54);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

