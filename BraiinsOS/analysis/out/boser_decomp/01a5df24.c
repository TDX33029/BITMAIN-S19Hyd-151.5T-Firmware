// FUN_01a5df24 @ 01a5df24 size=48 calls_out=0 calls_in=1
// strings: 

void FUN_01a5df24(int param_1)

{
  int iVar1;
  
  iVar1 = 6;
  if (1 < *(uint *)(param_1 + 0x54)) {
    iVar1 = *(uint *)(param_1 + 0x54) - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x01a5df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01a5df54 + *(int *)(&DAT_01a5df54 + iVar1 * 4)))();
  return;
}

