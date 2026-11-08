// FUN_00aee1d8 @ 00aee1d8 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_00aee1d8(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aee208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_01d30d94)[*param_1],
             *(undefined4 *)(&DAT_005352ec + (uint)*param_1 * 4));
  return;
}

