// FUN_006df214 @ 006df214 size=40 calls_out=0 calls_in=2
// strings: 

void FUN_006df214(int param_1)

{
  int iVar1;
  
  iVar1 = 7;
  if (*(int *)(param_1 + 0x10) < 0) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x006df238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_006df23c + *(int *)(&DAT_006df23c + iVar1 * 4)))();
  return;
}

