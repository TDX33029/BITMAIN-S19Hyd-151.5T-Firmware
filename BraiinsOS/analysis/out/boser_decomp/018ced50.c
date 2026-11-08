// FUN_018ced50 @ 018ced50 size=72 calls_out=0 calls_in=1
// strings: 

void FUN_018ced50(undefined4 param_1,undefined4 param_2,ushort *param_3,int param_4)

{
  if (param_4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x018ced94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018ced98 + *(int *)(&DAT_018ced98 + (uint)*param_3 * 4)))(0,param_2,param_3 + 10);
  return;
}

