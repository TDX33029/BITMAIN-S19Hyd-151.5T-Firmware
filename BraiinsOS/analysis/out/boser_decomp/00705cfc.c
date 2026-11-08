// FUN_00705cfc @ 00705cfc size=56 calls_out=0 calls_in=0
// strings: 

void FUN_00705cfc(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00705d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d30a94 + (uint)*(byte *)*param_1 * 4),
             *(undefined4 *)("\n" + (uint)*(byte *)*param_1 * 4));
  return;
}

