// FUN_01501468 @ 01501468 size=48 calls_out=0 calls_in=25
// strings: 

void FUN_01501468(uint *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (2 < *param_1) {
    iVar1 = *param_1 - 3;
  }
                    /* WARNING: Could not recover jumptable at 0x01501494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01501498 + *(int *)(&DAT_01501498 + iVar1 * 4)))
            (*(int *)(&DAT_01501498 + iVar1 * 4),param_1);
  return;
}

