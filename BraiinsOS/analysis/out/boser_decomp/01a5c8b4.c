// FUN_01a5c8b4 @ 01a5c8b4 size=44 calls_out=0 calls_in=0
// strings: 

void FUN_01a5c8b4(int param_1)

{
  int iVar1;
  
  iVar1 = 6;
  if (1 < *(uint *)(param_1 + 0x54)) {
    iVar1 = *(uint *)(param_1 + 0x54) - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x01a5c8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01a5c8e0 + *(int *)(&DAT_01a5c8e0 + iVar1 * 4)))();
  return;
}

