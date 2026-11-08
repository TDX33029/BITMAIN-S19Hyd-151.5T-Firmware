// FUN_018b3ed8 @ 018b3ed8 size=60 calls_out=0 calls_in=1
// strings: 

void FUN_018b3ed8(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = 3;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x018b3f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018b3f14 + *(int *)(&DAT_018b3f14 + iVar1 * 4)))(param_1,param_2 << 4,0x1f);
  return;
}

