// FUN_008c61b4 @ 008c61b4 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_008c61b4(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x008c61e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_018b0024 + (*param_1 - 0x2b & 0xff) * 4),3);
  return;
}

