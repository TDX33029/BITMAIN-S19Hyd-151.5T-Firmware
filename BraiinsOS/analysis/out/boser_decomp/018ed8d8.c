// FUN_018ed8d8 @ 018ed8d8 size=60 calls_out=0 calls_in=1
// strings: 

void FUN_018ed8d8(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = 3;
  if (0x80000000 < *param_1) {
    iVar1 = *param_1 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x018ed910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018ed914 + *(int *)(&DAT_018ed914 + iVar1 * 4)))(param_1,param_2 << 4,0xd);
  return;
}

