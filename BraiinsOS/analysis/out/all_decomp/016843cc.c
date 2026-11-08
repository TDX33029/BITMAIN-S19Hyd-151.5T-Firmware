// FUN_016843cc @ 016843cc size=204 calls_out=3 calls_in=0
// strings: 

void FUN_016843cc(int param_1)

{
  int iVar1;
  
  iVar1 = 6;
  if (1 < *(uint *)(param_1 + 0x54)) {
    iVar1 = *(uint *)(param_1 + 0x54) - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x016843f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_016843f8 + *(int *)(&DAT_016843f8 + iVar1 * 4)))();
  return;
}

