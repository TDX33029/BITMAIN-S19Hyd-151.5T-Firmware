// FUN_016c787c @ 016c787c size=104 calls_out=1 calls_in=1
// strings: 

void FUN_016c787c(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_14;
  undefined4 *local_10;
  code *local_c;
  
  if ((param_1 & 1) == 0) {
    local_c = FUN_012fd02c;
    local_10 = &local_14;
    local_14 = param_2;
    FUN_012fa178(param_3,param_4,&DAT_0057b9dd,&local_10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x016c789c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0xc))(param_3,"error building NFA",0x12);
  return;
}

