// FUN_015bb050 @ 015bb050 size=60 calls_out=0 calls_in=0
// strings: 

void FUN_015bb050(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_0040f88c;
  if (*(char *)*param_1 == '\0') {
    puVar1 = &DAT_0040f87d;
  }
                    /* WARNING: Could not recover jumptable at 0x015bb088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,puVar1,0xf);
  return;
}

