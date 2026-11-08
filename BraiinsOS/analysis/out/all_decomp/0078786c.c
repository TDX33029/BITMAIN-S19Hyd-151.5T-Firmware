// FUN_0078786c @ 0078786c size=64 calls_out=0 calls_in=0
// strings: 

void FUN_0078786c(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = "Counter";
  if (*param_1 != '\0') {
    pcVar2 = "Gauge";
  }
  uVar1 = 7;
  if (*param_1 != '\0') {
    uVar1 = 5;
  }
                    /* WARNING: Could not recover jumptable at 0x007878a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar2,uVar1);
  return;
}

