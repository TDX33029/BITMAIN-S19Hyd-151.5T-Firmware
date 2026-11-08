// FUN_005fccb4 @ 005fccb4 size=28 calls_out=0 calls_in=0
// strings: 

void FUN_005fccb4(int *param_1)

{
  int extraout_r1;
  
  (**(code **)(*param_1 + 4))();
                    /* WARNING: Could not recover jumptable at 0x005fcccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_r1 + 0x18))();
  return;
}

