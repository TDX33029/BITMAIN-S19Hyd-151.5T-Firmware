// FUN_01431954 @ 01431954 size=140 calls_out=2 calls_in=5
// strings: 

void FUN_01431954(byte *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  uVar1 = (uint)*param_1;
  if ((1 < uVar1 - 2) && (uVar1 != 0)) {
    if (uVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x01431990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)(param_1 + 8) + 0x10))
                (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
      return;
    }
    if (param_1[4] == 3) {
      puVar3 = *(undefined4 **)(param_1 + 8);
      uVar4 = *puVar3;
      puVar5 = (undefined4 *)puVar3[1];
      pcVar2 = (code *)*puVar5;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar4);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_01be4678(uVar4);
      }
      thunk_FUN_01be4678(puVar3);
      return;
    }
  }
  return;
}

