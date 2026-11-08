// FUN_00786ec4 @ 00786ec4 size=56 calls_out=0 calls_in=1
// strings: TooFewParameters

void FUN_00786ec4(byte *param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0xc))
            (param_2,(&PTR_s_TooFewParameters_018af9dc)[*param_1],
             *(undefined4 *)(&DAT_005669f0 + (uint)*param_1 * 4));
  return;
}

