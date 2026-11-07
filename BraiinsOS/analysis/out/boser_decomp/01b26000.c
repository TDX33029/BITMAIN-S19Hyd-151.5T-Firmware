// FUN_01b26000 @ 01b26000 size=164 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01b26000(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_ac [76];
  undefined1 auStack_60 [76];
  int local_14;
  
  local_14 = DAT_01d53560;
  FUN_01b1c420(auStack_ac,param_3,param_3,0);
  FUN_01b1b0e8(auStack_60,auStack_ac);
  FUN_01b25880(param_2,auStack_60);
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

