// FUN_018f570c @ 018f570c size=56 calls_out=0 calls_in=0
// strings: 

void FUN_018f570c(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x018f5740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d33ec8 + (uint)*(byte *)*param_1 * 4),
             *(undefined4 *)(&DAT_00538aa8 + (uint)*(byte *)*param_1 * 4));
  return;
}

