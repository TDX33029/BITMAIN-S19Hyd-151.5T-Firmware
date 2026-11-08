// FUN_00e4b3d0 @ 00e4b3d0 size=76 calls_out=1 calls_in=0
// strings: 

void FUN_00e4b3d0(int param_1)

{
  if ((*(int *)(param_1 + 8) != 0) &&
     (*(int *)(param_1 + 0x14) != -0x80000000 && *(int *)(param_1 + 0x14) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00e4b400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(undefined4 *)(param_1 + 0x28));
  return;
}

