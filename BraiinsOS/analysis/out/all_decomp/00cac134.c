// FUN_00cac134 @ 00cac134 size=224 calls_out=1 calls_in=0
// strings: wait_per_mhz_ramp_down_quick | voltage | frequency | Reso | wait_per_mhz_ramp_up_quick | enabled

void FUN_00cac134(int param_1,undefined4 param_2)

{
  int local_28;
  
  local_28 = param_1 + 0x10;
  FUN_00fb35ac(param_2,"Reso",0x13,"frequency",9,param_1 + 0x28,FUN_008c38c0,"voltage",7,
               param_1 + 0x20,FUN_00809c90,"enabled",7,param_1 + 0x2c,&LAB_00788378,
               "wait_per_mhz_ramp_up_quick",0x1a,param_1,FUN_00fb8184,"wait_per_mhz_ramp_down_quick"
               ,0x1c,&local_28,&DAT_00c5a8c0);
  return;
}

