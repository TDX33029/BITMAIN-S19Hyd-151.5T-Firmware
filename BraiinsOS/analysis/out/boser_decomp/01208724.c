// FUN_01208724 @ 01208724 size=56 calls_out=0 calls_in=0
// strings: EKEYREVOKED

void FUN_01208724(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01208758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_EKEYREVOKED_01d30ed4)[*param_1 ^ 0x80],
             *(undefined4 *)(&DAT_005356c8 + (*param_1 ^ 0x80) * 4));
  return;
}

