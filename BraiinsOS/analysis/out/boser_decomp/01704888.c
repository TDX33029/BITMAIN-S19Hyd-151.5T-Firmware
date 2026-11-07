// FUN_01704888 @ 01704888 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_01704888(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = &DAT_00509188;
  if (*(char *)*param_1 == '\0') {
    puVar1 = &UNK_0056cac0;
  }
  uVar2 = 4;
  if (*(char *)*param_1 != '\0') {
    uVar2 = 0xc;
  }
                    /* WARNING: Could not recover jumptable at 0x017048c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,puVar1,uVar2);
  return;
}

