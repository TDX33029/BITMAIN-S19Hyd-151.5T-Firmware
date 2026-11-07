// FUN_00042888 @ 00042888  size=192  callers=1
// program: cgminer


void FUN_00042888(undefined4 param_1,undefined4 param_2)

{
  char local_810 [2048];
  
  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
    builtin_strncpy(local_810,"about to send shutdown",0x17);
    FUN_0001dd98(5,local_810,0);
  }
  FUN_00044e0c(s_bitmain_shutdown_000683f8,param_1,param_2,local_810,0,0);
  return;
}

