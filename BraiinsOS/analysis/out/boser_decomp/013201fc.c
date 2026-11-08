// FUN_013201fc @ 013201fc size=56 calls_out=0 calls_in=0
// strings: 

void FUN_013201fc(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01320230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,*(undefined4 *)(&DAT_01d31d3c + (uint)*(byte *)*param_1 * 4),
             *(undefined4 *)(&DAT_005699a8 + (uint)*(byte *)*param_1 * 4));
  return;
}

