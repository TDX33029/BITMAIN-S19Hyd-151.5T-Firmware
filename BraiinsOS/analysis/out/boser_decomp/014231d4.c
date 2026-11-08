// FUN_014231d4 @ 014231d4 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_014231d4(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01423204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_01d32534)[*param_1],
             *(undefined4 *)(&DAT_00536e6c + (uint)*param_1 * 4));
  return;
}

