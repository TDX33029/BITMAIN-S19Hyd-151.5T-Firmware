// FUN_01b41610 @ 01b41610 size=240 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01b41610(undefined4 param_1,int param_2,int param_3)

{
  undefined1 auStack_100 [76];
  undefined1 auStack_b4 [76];
  undefined1 auStack_68 [76];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01b1c420(auStack_100,param_3,&PTR_01d3b2b0,0);
  FUN_01b1c420(auStack_b4,param_3 + 0x44);
  FUN_01b1c420(auStack_68,param_3 + 0x88);
  FUN_01b415a0(auStack_100,auStack_b4,auStack_68,auStack_100,auStack_b4,auStack_68);
  FUN_01b25880(param_2,auStack_100);
  FUN_01b25880(param_2 + 0x44,auStack_b4);
  FUN_01b25880(param_2 + 0x88,auStack_68);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

