// FUN_0075dc8c @ 0075dc8c size=60 calls_out=0 calls_in=0
// strings: 

void FUN_0075dc8c(char *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_003e0dc3;
  if (*param_1 != '\0') {
    puVar1 = &UNK_003e0dc6;
  }
                    /* WARNING: Could not recover jumptable at 0x0075dcc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,puVar1,3);
  return;
}

