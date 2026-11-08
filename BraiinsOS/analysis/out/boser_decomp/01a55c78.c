// FUN_01a55c78 @ 01a55c78 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_01a55c78(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = &UNK_00532466;
  if (*(char *)*param_1 == '\0') {
    pcVar1 = "Empty";
  }
  uVar2 = 5;
  if (*(char *)*param_1 != '\0') {
    uVar2 = 7;
  }
                    /* WARNING: Could not recover jumptable at 0x01a55cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar1,uVar2);
  return;
}

