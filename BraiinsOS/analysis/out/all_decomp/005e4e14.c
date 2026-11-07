// FUN_005e4e14 @ 005e4e14 size=60 calls_out=0 calls_in=0
// strings: 

void FUN_005e4e14(char *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_00412ee7;
  if (*param_1 != '\0') {
    puVar1 = &DAT_004147da;
  }
                    /* WARNING: Could not recover jumptable at 0x005e4e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,puVar1,7);
  return;
}

