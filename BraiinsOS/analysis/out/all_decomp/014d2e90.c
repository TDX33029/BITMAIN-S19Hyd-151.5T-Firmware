// FUN_014d2e90 @ 014d2e90 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_014d2e90(byte *param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x014d2ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0xc))
            (param_2,(&PTR_DAT_018b3698)[*param_1],
             *(undefined4 *)(&DAT_004222b0 + (uint)*param_1 * 4));
  return;
}

