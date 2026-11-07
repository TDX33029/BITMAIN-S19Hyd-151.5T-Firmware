// FUN_008d36e0 @ 008d36e0 size=56 calls_out=0 calls_in=1
// strings: EKEYREVOKED

void FUN_008d36e0(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x008d3714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_EKEYREVOKED_018b0480)[*param_1 ^ 0x80],
             *(undefined4 *)(&DAT_0041e7c0 + (*param_1 ^ 0x80) * 4));
  return;
}

