// FUN_008e08f4 @ 008e08f4 size=72 calls_out=1 calls_in=2
// strings: 

void FUN_008e08f4(byte *param_1)

{
  int *piVar1;
  
  if (1 < *param_1) {
    piVar1 = *(int **)(param_1 + 4);
    (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
    thunk_FUN_01be4678(piVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x008e0938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 0x10))
            (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  return;
}

