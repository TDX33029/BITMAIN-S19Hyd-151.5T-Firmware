// FUN_0158353c @ 0158353c size=56 calls_out=0 calls_in=0
// strings: EKEYREVOKED

void FUN_0158353c(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01583570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_EKEYREVOKED_018b4968)[*param_1 ^ 0x80],
             *(undefined4 *)(&DAT_00423604 + (*param_1 ^ 0x80) * 4));
  return;
}

