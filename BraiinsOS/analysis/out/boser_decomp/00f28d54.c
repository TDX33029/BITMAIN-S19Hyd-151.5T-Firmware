// FUN_00f28d54 @ 00f28d54 size=84 calls_out=1 calls_in=2
// strings: 

void FUN_00f28d54(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 == 5) {
    FUN_00f80320(param_1[1],param_1[2]);
    return;
  }
  if (uVar1 == 6) {
    return;
  }
  if ((uVar1 < 4) || (param_1[1] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00f28da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[1] + 0x10))(param_1 + 4,param_1[2],param_1[3]);
    return;
  }
  return;
}

