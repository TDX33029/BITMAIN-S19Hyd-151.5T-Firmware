// FUN_017f1480 @ 017f1480 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_017f1480(byte *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x017f14b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d336a0 + (uint)*param_1 * 4),
             *(undefined4 *)(&DAT_005382c0 + (uint)*param_1 * 4));
  return;
}

