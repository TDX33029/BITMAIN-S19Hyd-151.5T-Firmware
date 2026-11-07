// FUN_019d105c @ 019d105c size=60 calls_out=0 calls_in=0
// strings: 

void FUN_019d105c(char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  
  pcVar1 = "Elapsed";
  if (*param_1 != '\0') {
    pcVar1 = &UNK_00532466;
  }
                    /* WARNING: Could not recover jumptable at 0x019d1094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar1,7);
  return;
}

