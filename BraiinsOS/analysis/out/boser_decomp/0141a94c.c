// FUN_0141a94c @ 0141a94c size=124 calls_out=1 calls_in=1
// strings: 

void FUN_0141a94c(byte *param_1)

{
  int *piVar1;
  
  if ((9 < param_1[0x2c]) && (*(int *)(param_1 + 0x34) != 0)) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x30));
  }
  if (1 < *param_1) {
    piVar1 = *(int **)(param_1 + 4);
    (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
    thunk_FUN_01be4678(piVar1);
  }
  (**(code **)(*(int *)(param_1 + 8) + 0x10))
            (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0141a9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x18) + 0x10))
            (param_1 + 0x24,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}

