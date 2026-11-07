// FUN_0155d764 @ 0155d764 size=72 calls_out=0 calls_in=0
// strings: 

void FUN_0155d764(ushort *param_1,undefined4 *param_2)

{
  (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0040c702,0xf);
                    /* WARNING: Could not recover jumptable at 0x0155d7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_0155d7ac + *(int *)(&LAB_0155d7ac + (uint)*param_1 * 4)))();
  return;
}

