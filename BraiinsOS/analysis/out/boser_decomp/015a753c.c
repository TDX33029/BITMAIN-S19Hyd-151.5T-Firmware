// FUN_015a753c @ 015a753c size=144 calls_out=1 calls_in=0
// strings: ResolveHostnameUnregisterRegisterResendStopBrowseStopResolveHostnameGetMetricsGetStatusMonitorSetOptionGetOptionVerify

void FUN_015a753c(uint *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if ((uint)(*param_1 < 2) <= -param_1[1]) {
    iVar1 = *param_1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x015a7568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_015a756c + *(int *)(&DAT_015a756c + iVar1 * 4)))();
  return;
}

