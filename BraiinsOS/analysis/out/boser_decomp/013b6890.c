// FUN_013b6890 @ 013b6890 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_013b6890(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = "StreamingEndStream";
  if (*(char *)*param_1 == '\0') {
    pcVar1 = "AwaitingHeaders";
  }
  uVar2 = 0xf;
  if (*(char *)*param_1 != '\0') {
    uVar2 = 9;
  }
                    /* WARNING: Could not recover jumptable at 0x013b68cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar1,uVar2);
  return;
}

