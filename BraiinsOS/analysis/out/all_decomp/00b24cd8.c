// FUN_00b24cd8 @ 00b24cd8 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_00b24cd8(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = "BootstrapFailedProfileFailedRetryInBackoffDpsBlacklistAddDpsBlacklistRemove";
  if (*param_1 != '\0') {
    pcVar2 = &DAT_003b5108;
  }
  uVar1 = 0xf;
  if (*param_1 != '\0') {
    uVar1 = 0xc;
  }
                    /* WARNING: Could not recover jumptable at 0x00b24d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar2,uVar1);
  return;
}

