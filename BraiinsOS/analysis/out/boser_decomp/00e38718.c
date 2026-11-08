// FUN_00e38718 @ 00e38718 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_00e38718(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = "PowerTargetHashrateTargetInvalidMetadataValue";
  if (*param_1 != '\0') {
    pcVar2 = "HashrateTargetInvalidMetadataValue";
  }
  uVar1 = 0xb;
  if (*param_1 != '\0') {
    uVar1 = 0xe;
  }
                    /* WARNING: Could not recover jumptable at 0x00e38754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar2,uVar1);
  return;
}

