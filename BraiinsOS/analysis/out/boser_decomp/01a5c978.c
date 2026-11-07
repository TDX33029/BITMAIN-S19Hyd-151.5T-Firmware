// FUN_01a5c978 @ 01a5c978 size=48 calls_out=0 calls_in=3
// strings: 

void FUN_01a5c978(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 6;
  if (1 < *(uint *)(param_2 + 0x54)) {
    iVar1 = *(uint *)(param_2 + 0x54) - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x01a5c9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01a5c9a8 + *(int *)(&DAT_01a5c9a8 + iVar1 * 4)))();
  return;
}

