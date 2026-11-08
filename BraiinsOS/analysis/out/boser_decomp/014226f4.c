// FUN_014226f4 @ 014226f4 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_014226f4(int param_1)

{
  FUN_01428078(*(undefined4 *)(param_1 + 0xc));
  FUN_01428000(*(undefined4 *)(param_1 + 0x14));
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01422724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(undefined4 *)(param_1 + 0x28));
  return;
}

