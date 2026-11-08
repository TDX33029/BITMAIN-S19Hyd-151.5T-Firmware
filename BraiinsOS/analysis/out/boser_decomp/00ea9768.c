// FUN_00ea9768 @ 00ea9768 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_00ea9768(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = &DAT_0056eb34;
  if (*(char *)*param_1 == '\0') {
    pcVar1 = "Base64";
  }
  uVar2 = 6;
  if (*(char *)*param_1 != '\0') {
    uVar2 = 4;
  }
                    /* WARNING: Could not recover jumptable at 0x00ea97a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar1,uVar2);
  return;
}

