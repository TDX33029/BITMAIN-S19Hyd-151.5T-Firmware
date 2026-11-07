// FUN_0155d910 @ 0155d910 size=72 calls_out=0 calls_in=0
// strings: 

void FUN_0155d910(ushort *param_1,undefined4 *param_2)

{
  (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0040c711,0x11);
                    /* WARNING: Could not recover jumptable at 0x0155d954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_0155d958 + *(int *)(&LAB_0155d958 + (uint)*param_1 * 4)))();
  return;
}

