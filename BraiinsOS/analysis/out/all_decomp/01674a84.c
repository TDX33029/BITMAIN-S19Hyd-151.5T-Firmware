// FUN_01674a84 @ 01674a84 size=132 calls_out=1 calls_in=2
// strings: 

void FUN_01674a84(uint *param_1,undefined4 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x01674acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414711,5);
    return;
  }
  if (uVar1 == 1) {
    local_c = (code *)&LAB_0157d350;
  }
  else {
    param_1 = param_1 + 1;
    local_c = FUN_00932f04;
  }
  local_10 = &local_14;
  local_14 = param_1;
  FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_10);
  return;
}

