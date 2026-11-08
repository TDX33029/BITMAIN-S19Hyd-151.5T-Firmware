// FUN_01a4379c @ 01a4379c size=64 calls_out=1 calls_in=0
// strings: 

void FUN_01a4379c(int *param_1)

{
  int iVar1;
  
  iVar1 = 5;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x01a437bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01a437c0 + *(int *)(&DAT_01a437c0 + iVar1 * 4)))();
  return;
}

