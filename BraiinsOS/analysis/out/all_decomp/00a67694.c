// FUN_00a67694 @ 00a67694 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_00a67694(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = &UNK_0034cd24;
  if (*param_1 != '\0') {
    pcVar2 = "psu";
  }
  uVar1 = 7;
  if (*param_1 != '\0') {
    uVar1 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00a676d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar2,uVar1);
  return;
}

