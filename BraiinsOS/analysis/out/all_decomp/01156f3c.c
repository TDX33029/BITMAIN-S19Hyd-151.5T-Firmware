// FUN_01156f3c @ 01156f3c size=56 calls_out=0 calls_in=0
// strings: 

void FUN_01156f3c(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01156f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_018b21fc + (uint)*(byte *)*param_1 * 4),
             *(undefined4 *)(&DAT_004202fc + (uint)*(byte *)*param_1 * 4));
  return;
}

