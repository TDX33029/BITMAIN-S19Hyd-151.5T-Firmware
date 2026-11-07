// FUN_01367b00 @ 01367b00 size=52 calls_out=0 calls_in=0
// strings: DataQ;

void FUN_01367b00(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01367b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_DataQ__01d31e7c)[*param_1],
             *(undefined4 *)(&DAT_00536774 + (uint)*param_1 * 4));
  return;
}

