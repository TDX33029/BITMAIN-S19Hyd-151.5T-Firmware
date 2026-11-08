// FUN_017d9b78 @ 017d9b78 size=60 calls_out=0 calls_in=0
// strings: 

void FUN_017d9b78(char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  
  pcVar1 = "Http1Http2";
  if (*param_1 != '\0') {
    pcVar1 = "Http2";
  }
                    /* WARNING: Could not recover jumptable at 0x017d9bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar1,5);
  return;
}

