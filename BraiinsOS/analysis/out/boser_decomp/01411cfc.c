// FUN_01411cfc @ 01411cfc size=56 calls_out=0 calls_in=0
// strings: InvalidUriChar

void FUN_01411cfc(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01411d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_InvalidUriChar_01d32388)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_00536d54 + (uint)*(byte *)*param_1 * 4));
  return;
}

