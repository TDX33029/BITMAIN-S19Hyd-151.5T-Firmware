// FUN_01432478 @ 01432478 size=72 calls_out=1 calls_in=1
// strings: 

void FUN_01432478(byte *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (uVar1 - 2 < 2) {
    return;
  }
  if (uVar1 == 0) {
    return;
  }
  if (uVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x014324ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 0x10))
              (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    return;
  }
  FUN_0185401c(param_1[4],*(undefined4 *)(param_1 + 8));
  return;
}

