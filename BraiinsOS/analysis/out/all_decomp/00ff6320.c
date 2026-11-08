// FUN_00ff6320 @ 00ff6320 size=56 calls_out=0 calls_in=0
// strings: LookAhead

void FUN_00ff6320(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00ff6354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_LookAhead_018b11dc)[*(byte *)*param_1],
             *(undefined4 *)("\t" + (uint)*(byte *)*param_1 * 4));
  return;
}

