// FUN_01164a60 @ 01164a60 size=48 calls_out=0 calls_in=9
// strings: 

void FUN_01164a60(uint *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (2 < *param_1) {
    iVar1 = *param_1 - 3;
  }
                    /* WARNING: Could not recover jumptable at 0x01164a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01164a90 + *(int *)(&DAT_01164a90 + iVar1 * 4)))
            (*(int *)(&DAT_01164a90 + iVar1 * 4),param_1);
  return;
}

