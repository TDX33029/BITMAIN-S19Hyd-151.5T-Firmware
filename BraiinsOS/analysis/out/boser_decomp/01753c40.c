// FUN_01753c40 @ 01753c40 size=104 calls_out=1 calls_in=0
// strings: 

void FUN_01753c40(uint *param_1)

{
  int iVar1;
  
  iVar1 = 0xb;
  if (0x80000012 < *param_1) {
    iVar1 = *param_1 + 0x7fffffed;
  }
                    /* WARNING: Could not recover jumptable at 0x01753c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01753c6c + *(int *)(&DAT_01753c6c + iVar1 * 4)))();
  return;
}

