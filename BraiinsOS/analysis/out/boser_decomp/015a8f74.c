// FUN_015a8f74 @ 015a8f74 size=40 calls_out=0 calls_in=2
// strings: 

void FUN_015a8f74(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if ((uint)(param_1 < 2) <= (uint)-param_2) {
    iVar1 = param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x015a8f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_015a8f9c + *(int *)(&DAT_015a8f9c + iVar1 * 4)))();
  return;
}

