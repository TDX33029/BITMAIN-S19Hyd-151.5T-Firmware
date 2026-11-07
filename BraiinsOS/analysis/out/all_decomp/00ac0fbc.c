// FUN_00ac0fbc @ 00ac0fbc size=52 calls_out=0 calls_in=0
// strings: EmptyHost

void FUN_00ac0fbc(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00ac0fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_EmptyHost_018b0cf0)[*param_1],
             *(undefined4 *)(&DAT_0041ef2c + (uint)*param_1 * 4));
  return;
}

