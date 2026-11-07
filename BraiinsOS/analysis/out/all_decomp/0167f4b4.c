// FUN_0167f4b4 @ 0167f4b4 size=48 calls_out=0 calls_in=1
// strings: 

void FUN_0167f4b4(int param_1)

{
  int iVar1;
  
  iVar1 = 6;
  if (1 < *(uint *)(param_1 + 0x54)) {
    iVar1 = *(uint *)(param_1 + 0x54) - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0167f4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0167f4e4 + *(int *)(&DAT_0167f4e4 + iVar1 * 4)))();
  return;
}

