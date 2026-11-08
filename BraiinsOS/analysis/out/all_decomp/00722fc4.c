// FUN_00722fc4 @ 00722fc4 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_00722fc4(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = "Query";
  if (*param_1 != '\0') {
    pcVar2 = "ResponseNO_PROXY@m\x01";
  }
  uVar1 = 5;
  if (*param_1 != '\0') {
    uVar1 = 8;
  }
                    /* WARNING: Could not recover jumptable at 0x00723000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar2,uVar1);
  return;
}

