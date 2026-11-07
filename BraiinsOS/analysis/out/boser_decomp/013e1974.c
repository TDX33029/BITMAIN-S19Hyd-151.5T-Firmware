// FUN_013e1974 @ 013e1974 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_013e1974(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_0056cac0;
  if (*param_1 != '\0') {
    puVar2 = &DAT_00509188;
  }
  uVar1 = 4;
  if (*param_1 != '\0') {
    uVar1 = 0xc;
  }
                    /* WARNING: Could not recover jumptable at 0x013e19b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,puVar2,uVar1);
  return;
}

