// FUN_013e58f8 @ 013e58f8 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_013e58f8(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_00474fa6;
  if (*param_1 != '\0') {
    puVar2 = &UNK_005705c0;
  }
  uVar1 = 5;
  if (*param_1 != '\0') {
    uVar1 = 8;
  }
                    /* WARNING: Could not recover jumptable at 0x013e5934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,puVar2,uVar1);
  return;
}

