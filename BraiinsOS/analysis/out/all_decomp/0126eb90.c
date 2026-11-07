// FUN_0126eb90 @ 0126eb90 size=60 calls_out=0 calls_in=0
// strings: EKEYREVOKED

void FUN_0126eb90(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0126ebc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_EKEYREVOKED_018b27cc)[*(byte *)*param_1 ^ 0x80],
             *(undefined4 *)(&DAT_004210a0 + (*(byte *)*param_1 ^ 0x80) * 4));
  return;
}

