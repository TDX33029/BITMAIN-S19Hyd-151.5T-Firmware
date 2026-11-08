// FUN_01b41460 @ 01b41460 size=308 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01b41460(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined1 auStack_1f4 [76];
  undefined1 auStack_1a8 [76];
  undefined1 auStack_15c [76];
  undefined1 auStack_110 [76];
  undefined1 auStack_c4 [76];
  undefined1 auStack_78 [76];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01b1c420(auStack_1f4,param_3,&PTR_01d3b2b0,0);
  FUN_01b1c420(auStack_1a8,param_3 + 0x44);
  FUN_01b1c420(auStack_15c,param_3 + 0x88);
  FUN_01b1c420(auStack_110,param_4);
  FUN_01b1c420(auStack_c4,param_4 + 0x44);
  FUN_01b1c420(auStack_78,param_4 + 0x88);
  FUN_01b413d0(auStack_1f4,auStack_1a8,auStack_15c,auStack_1f4,auStack_1a8,auStack_15c,0,auStack_110
               ,auStack_c4,auStack_78);
  FUN_01b25880(param_2,auStack_1f4);
  FUN_01b25880(param_2 + 0x44,auStack_1a8);
  FUN_01b25880(param_2 + 0x88,auStack_15c);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

