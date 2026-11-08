// FUN_01642ea8 @ 01642ea8 size=60 calls_out=0 calls_in=0
// strings: EKEYREVOKED

void FUN_01642ea8(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01642ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_EKEYREVOKED_01d32d48)[*(byte *)*param_1 ^ 0x80],
             *(undefined4 *)(&DAT_00537858 + (*(byte *)*param_1 ^ 0x80) * 4));
  return;
}

