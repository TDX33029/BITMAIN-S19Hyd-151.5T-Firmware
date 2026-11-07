// FUN_018eb6e4 @ 018eb6e4 size=60 calls_out=0 calls_in=3
// strings: 

void FUN_018eb6e4(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = 4;
  if (0x80000000 < *param_1) {
    iVar1 = *param_1 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x018eb71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018eb720 + *(int *)(&DAT_018eb720 + iVar1 * 4)))(param_1,param_2 << 4,0x22);
  return;
}

