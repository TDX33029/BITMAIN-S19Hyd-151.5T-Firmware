// FUN_000427b4 @ 000427b4  size=208  callers=10
// program: cgminer


void FUN_000427b4(undefined4 param_1,undefined4 param_2)

{
  char local_810 [2048];
  
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    builtin_strncpy(local_810,"about to send a flush api semaphore",0x24);
    FUN_0001dd98(7,local_810,0);
  }
  FUN_00044e0c(s_bitmain_flush_api_0006847c,param_1,param_2,local_810,0,0);
  return;
}

