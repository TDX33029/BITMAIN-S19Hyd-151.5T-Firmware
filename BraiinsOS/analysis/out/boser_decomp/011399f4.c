// FUN_011399f4 @ 011399f4 size=72 calls_out=1 calls_in=2
// strings: 

void FUN_011399f4(byte *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x01139a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 0x10))
              (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    return;
  }
  FUN_0187266c(param_1[4],*(undefined4 *)(param_1 + 8));
  return;
}

