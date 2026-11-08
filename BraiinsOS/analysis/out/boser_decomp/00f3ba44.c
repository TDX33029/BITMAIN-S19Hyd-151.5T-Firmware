// FUN_00f3ba44 @ 00f3ba44 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_00f3ba44(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = "Reset";
  if (*param_1 != '\0') {
    pcVar2 = "IpBroadcast";
  }
  uVar1 = 5;
  if (*param_1 != '\0') {
    uVar1 = 0xb;
  }
                    /* WARNING: Could not recover jumptable at 0x00f3ba80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar2,uVar1);
  return;
}

