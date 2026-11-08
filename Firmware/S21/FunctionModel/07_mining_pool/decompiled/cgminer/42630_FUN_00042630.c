// FUN_00042630 @ 00042630  size=188  callers=1
// program: cgminer


void FUN_00042630(undefined4 param_1,undefined4 param_2)

{
  char local_810 [2048];
  
  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
    builtin_strncpy(local_810,"about to send detect",0x15);
    FUN_0001dd98(5,local_810,0);
  }
  FUN_00044e0c(s_bitmain_api_detect_000682f0,param_1,param_2,local_810,0,0);
  return;
}

