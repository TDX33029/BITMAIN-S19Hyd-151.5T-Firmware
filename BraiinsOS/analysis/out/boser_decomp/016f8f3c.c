// FUN_016f8f3c @ 016f8f3c size=76 calls_out=1 calls_in=4
// strings: 

void FUN_016f8f3c(uint *param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if ((uint)(*param_1 < 3) <= -param_1[1]) {
    iVar1 = *param_1 - 3;
  }
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x016f8f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
    return;
  }
  FUN_017793c0();
  return;
}

