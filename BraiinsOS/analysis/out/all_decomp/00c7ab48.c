// FUN_00c7ab48 @ 00c7ab48 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_00c7ab48(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_004147d5;
  if (*param_1 != '\0') {
    pcVar2 = "Closed";
  }
  uVar1 = 5;
  if (*param_1 != '\0') {
    uVar1 = 6;
  }
                    /* WARNING: Could not recover jumptable at 0x00c7ab84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar2,uVar1);
  return;
}

