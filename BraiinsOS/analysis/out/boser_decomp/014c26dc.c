// FUN_014c26dc @ 014c26dc size=52 calls_out=0 calls_in=0
// strings: 

void FUN_014c26dc(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x014c270c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_01d327a0)[*param_1],
             *(undefined4 *)(&DAT_005370ac + (uint)*param_1 * 4));
  return;
}

