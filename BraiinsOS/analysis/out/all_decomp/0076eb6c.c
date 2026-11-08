// FUN_0076eb6c @ 0076eb6c size=276 calls_out=4 calls_in=0
// strings: a Display implementation returned an error unexpectedly

void FUN_0076eb6c(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 + 0x7fffffff;
  if (iVar1 == 0) {
    *param_1 = 0x80000000;
    return;
  }
  if (*param_2 < 0x80000001) {
    iVar1 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x0076ebb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0076ebbc + *(int *)(&DAT_0076ebbc + iVar1 * 4)))
            (*(int *)(&DAT_0076ebbc + iVar1 * 4),
             "the backend is already paused/runningthe backend is not yet initializedthe backend is already destructed"
             ,0x25);
  return;
}

