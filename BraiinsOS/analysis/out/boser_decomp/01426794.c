// FUN_01426794 @ 01426794 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_01426794(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x014267c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d32584 + (uint)*(byte *)*param_1 * 4),
             *(undefined4 *)(&DAT_00536ebc + (uint)*(byte *)*param_1 * 4));
  return;
}

