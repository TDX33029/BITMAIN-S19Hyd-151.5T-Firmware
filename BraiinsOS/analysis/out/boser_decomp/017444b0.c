// FUN_017444b0 @ 017444b0 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_017444b0(int param_1)

{
  FUN_01744508(param_1 + 0x20);
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x017444d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x40) + 0xc))(*(undefined4 *)(param_1 + 0x44));
  return;
}

