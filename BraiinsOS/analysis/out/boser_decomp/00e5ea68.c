// FUN_00e5ea68 @ 00e5ea68 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_00e5ea68(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00e5ea98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01c20be0 + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_00401210 + (uint)*param_1 * 4));
  return;
}

