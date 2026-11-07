// FUN_00a32324 @ 00a32324 size=160 calls_out=1 calls_in=2
// strings: 

void FUN_00a32324(uint *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint *local_14;
  uint **local_10;
  code *local_c;
  
  uVar1 = 1;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
  if (uVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a32380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0xc))(param_2,&DAT_00414711,5);
    return;
  }
  if (uVar1 == 1) {
    local_c = (code *)&LAB_00f4c39c;
  }
  else {
    param_1 = param_1 + 1;
    local_c = FUN_00932f04;
  }
  local_10 = &local_14;
  local_14 = param_1;
  FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_10);
  return;
}

