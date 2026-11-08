// FUN_015829b0 @ 015829b0 size=60 calls_out=0 calls_in=1
// strings: EKEYREVOKED

void FUN_015829b0(byte *param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x015829e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0xc))
            (param_2,(&PTR_s_EKEYREVOKED_018b4554)[*param_1 ^ 0x80],
             *(undefined4 *)(&DAT_004231f0 + (*param_1 ^ 0x80) * 4));
  return;
}

