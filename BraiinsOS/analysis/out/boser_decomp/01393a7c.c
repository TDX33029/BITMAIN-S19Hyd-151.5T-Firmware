// FUN_01393a7c @ 01393a7c size=96 calls_out=2 calls_in=4
// strings: 

void FUN_01393a7c(uint *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)(*param_1 < 4) <= -param_1[1]) {
    iVar1 = *param_1 - 3;
  }
  if (iVar1 == 0) {
    FUN_01354a44();
    return;
  }
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x01393ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
    return;
  }
  FUN_0142e6dc(param_1 + 2);
  return;
}

