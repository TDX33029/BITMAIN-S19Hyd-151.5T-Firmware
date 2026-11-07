// FUN_01427354 @ 01427354 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_01427354(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01427388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_DAT_01d325c4)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_00536eec + (uint)*(byte *)*param_1 * 4));
  return;
}

