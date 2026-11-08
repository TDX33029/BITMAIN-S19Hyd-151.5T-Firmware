// FUN_0137ac50 @ 0137ac50 size=92 calls_out=1 calls_in=10
// strings: 

void FUN_0137ac50(byte *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (((uVar1 - 6 < 6) || (2 < uVar1)) || (uVar1 == 0)) {
    return;
  }
  if (uVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0137ac8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 0x10))
              (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    return;
  }
  if (*(int *)(param_1 + 4) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  return;
}

