// FUN_01877da0 @ 01877da0 size=104 calls_out=2 calls_in=3
// strings: 

void FUN_01877da0(byte *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = (uint)*param_1;
  if ((uVar1 - 2 < 2) || (uVar1 == 0)) {
    return;
  }
  if (uVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x01877ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 0x10))
              (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    return;
  }
  if (param_1[4] == 3) {
    puVar2 = *(undefined4 **)(param_1 + 8);
    FUN_01443048(*puVar2,puVar2[1]);
    thunk_FUN_01be4678(puVar2);
    return;
  }
  return;
}

