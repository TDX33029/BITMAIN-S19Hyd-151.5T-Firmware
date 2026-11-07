// FUN_006324fc @ 006324fc size=148 calls_out=1 calls_in=0
// strings: UpgradeImageHashMismatchScriptSyncNotSuccessfulScriptSyncTimedOutOtherSystemTaskInProgressUninstallNotSupportedUninstallNotSuccessfulUninstallTimedOutFactoryResetNotSupported | actualRecursionLimitExceeded

void FUN_006324fc(int *param_1)

{
  int iVar1;
  
  iVar1 = 0xb;
  if (*param_1 < 0) {
    iVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00632524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00632528 + *(int *)(&DAT_00632528 + iVar1 * 4)))();
  return;
}

