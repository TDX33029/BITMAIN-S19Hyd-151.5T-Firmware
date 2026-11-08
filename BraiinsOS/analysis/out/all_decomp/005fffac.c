// FUN_005fffac @ 005fffac size=64 calls_out=0 calls_in=0
// strings: 

void FUN_005fffac(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_003ced37;
  if (*param_1 != '\0') {
    puVar2 = &DAT_003ced44;
  }
  uVar1 = 0xd;
  if (*param_1 != '\0') {
    uVar1 = 0xf;
  }
                    /* WARNING: Could not recover jumptable at 0x005fffe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,puVar2,uVar1);
  return;
}

