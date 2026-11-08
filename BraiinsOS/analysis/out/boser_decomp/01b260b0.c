// FUN_01b260b0 @ 01b260b0 size=184 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01b260b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_100 [76];
  undefined1 auStack_b4 [76];
  undefined1 auStack_68 [76];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01b1c420(auStack_100,param_3,param_3,0);
  FUN_01b1c420(auStack_b4,param_4);
  FUN_01b19cb4(auStack_68,auStack_100,auStack_b4);
  FUN_01b25880(param_2,auStack_68);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

