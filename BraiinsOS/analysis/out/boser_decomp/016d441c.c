// FUN_016d441c @ 016d441c size=56 calls_out=0 calls_in=0
// strings: 

void FUN_016d441c(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x016d4450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d33248 + (uint)*(byte *)*param_1 * 4),
             *(undefined4 *)(&DAT_00537e0c + (uint)*(byte *)*param_1 * 4));
  return;
}

