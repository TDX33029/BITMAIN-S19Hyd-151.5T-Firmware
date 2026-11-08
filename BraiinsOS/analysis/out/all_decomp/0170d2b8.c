// FUN_0170d2b8 @ 0170d2b8 size=308 calls_out=6 calls_in=2
// strings: 

undefined8 FUN_0170d2b8(int param_1,int param_2)

{
  undefined1 auStack_cc [40];
  undefined1 auStack_a4 [40];
  undefined1 auStack_7c [40];
  undefined1 auStack_54 [40];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  FUN_01705c98(auStack_cc,param_2,&PTR_018bc3f4,0);
  FUN_01705c98(auStack_a4,param_2 + 0x28);
  FUN_01705c98(auStack_7c,param_2 + 0x50);
  FUN_01706e70(auStack_54,auStack_7c,auStack_7c);
  FUN_017075c0(auStack_7c,auStack_54);
  FUN_01706e70(param_1 + 0x28,param_2,param_2 + 0x28);
  FUN_0170cbcc(auStack_54,param_1 + 0x28);
  FUN_01706e70(param_1 + 0x28,auStack_a4,auStack_cc);
  FUN_01706a0c(param_1 + 0x50,auStack_a4,auStack_cc);
  FUN_017075c0(auStack_a4,param_1 + 0x28);
  FUN_01706a0c(param_1,auStack_54,auStack_a4);
  FUN_017075c0(auStack_a4,param_1 + 0x50);
  FUN_01706a0c(param_1 + 0x78,auStack_7c,auStack_a4);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

