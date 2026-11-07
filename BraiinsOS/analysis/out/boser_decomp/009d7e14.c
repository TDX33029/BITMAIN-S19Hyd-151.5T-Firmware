// FUN_009d7e14 @ 009d7e14 size=68 calls_out=1 calls_in=1
// strings: 

void FUN_009d7e14(byte *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x009d7e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 0x10))
              (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    return;
  }
  FUN_018248cc(param_1 + 4);
  return;
}

