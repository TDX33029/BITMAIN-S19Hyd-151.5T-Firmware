// FUN_013b6368 @ 013b6368 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_013b6368(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = "AwaitingHeaders";
  if (*param_1 != '\0') {
    pcVar2 = "StreamingEndStream";
  }
  uVar1 = 0xf;
  if (*param_1 != '\0') {
    uVar1 = 9;
  }
                    /* WARNING: Could not recover jumptable at 0x013b63a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar2,uVar1);
  return;
}

