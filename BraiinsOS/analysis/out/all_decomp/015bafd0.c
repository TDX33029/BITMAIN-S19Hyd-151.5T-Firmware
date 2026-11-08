// FUN_015bafd0 @ 015bafd0 size=56 calls_out=0 calls_in=0
// strings: TooFewParameters

void FUN_015bafd0(undefined4 *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x015bb004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_TooFewParameters_018b52b8)[*(byte *)*param_1],
             *(undefined4 *)(&DAT_005669f0 + (uint)*(byte *)*param_1 * 4));
  return;
}

