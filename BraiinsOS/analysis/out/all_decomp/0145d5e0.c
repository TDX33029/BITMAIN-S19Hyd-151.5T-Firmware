// FUN_0145d5e0 @ 0145d5e0 size=92 calls_out=1 calls_in=57
// strings: 

void FUN_0145d5e0(byte *param_1)

{
  int *piVar1;
  
  if (1 < *param_1) {
    piVar1 = *(int **)(param_1 + 4);
    (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
    thunk_FUN_016d3fb4(piVar1);
  }
  (**(code **)(*(int *)(param_1 + 8) + 0x10))
            (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0145d638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x18) + 0x10))
            (param_1 + 0x24,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}

