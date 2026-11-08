// FUN_0184c61c @ 0184c61c size=72 calls_out=1 calls_in=4
// strings: 

void FUN_0184c61c(byte *param_1)

{
  int *piVar1;
  
  if (1 < *param_1) {
    piVar1 = *(int **)(param_1 + 4);
    (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
    thunk_FUN_01be4678(piVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0184c660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 0x10))
            (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  return;
}

