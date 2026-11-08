// FUN_010a7308 @ 010a7308 size=52 calls_out=0 calls_in=0
// strings: invalid header name

void FUN_010a7308(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x010a7338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_invalid_header_name_018b19d8)[*param_1],
             *(undefined4 *)(&DAT_0041fb7c + (uint)*param_1 * 4));
  return;
}

