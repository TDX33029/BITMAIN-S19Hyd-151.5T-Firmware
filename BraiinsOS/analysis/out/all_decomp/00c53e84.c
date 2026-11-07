// FUN_00c53e84 @ 00c53e84 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_00c53e84(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = "Normal";
  if (*param_1 != '\0') {
    pcVar2 = "Boost";
  }
  uVar1 = 6;
  if (*param_1 != '\0') {
    uVar1 = 5;
  }
                    /* WARNING: Could not recover jumptable at 0x00c53ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar2,uVar1);
  return;
}

