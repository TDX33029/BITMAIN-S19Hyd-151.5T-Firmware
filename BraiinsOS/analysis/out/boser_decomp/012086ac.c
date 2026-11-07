// FUN_012086ac @ 012086ac size=64 calls_out=0 calls_in=0
// strings: 

void FUN_012086ac(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = "PingX\x04";
  if (*(char *)*param_1 == '\0') {
    pcVar1 = "SupportArchive";
  }
  uVar2 = 0xe;
  if (*(char *)*param_1 != '\0') {
    uVar2 = 4;
  }
                    /* WARNING: Could not recover jumptable at 0x012086e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar1,uVar2);
  return;
}

