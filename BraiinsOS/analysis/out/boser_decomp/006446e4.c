// FUN_006446e4 @ 006446e4 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_006446e4(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00644714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_01c208a0)[*param_1],
             *(undefined4 *)(&DAT_00400fa0 + (uint)*param_1 * 4));
  return;
}

