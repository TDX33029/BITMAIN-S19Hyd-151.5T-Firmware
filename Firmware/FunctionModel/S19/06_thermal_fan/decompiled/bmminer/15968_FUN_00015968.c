// FUN_00015968 @ 00015968  size=304  callers=3
// program: bmminer


void FUN_00015968(int param_1)

{
  char local_810 [2052];
  
  if (DAT_00088818 == 0) {
    DAT_00088818 = FUN_000468cc(0,100000);
  }
  if (DAT_00088818 < 0) {
    if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
      builtin_strncpy(local_810,"pwm for fan init error",0x17);
      FUN_00032218(3,local_810,0);
      return;
    }
  }
  else if (param_1 != DAT_0008881c) {
    if (4 < DAT_00087bbc) {
      snprintf(local_810,0x800,"set pwm = %d",param_1);
      FUN_00032218(4,local_810,0);
    }
    FUN_000469bc(DAT_00088818,param_1);
    FUN_000203d8(param_1);
    DAT_0008881c = param_1;
  }
  return;
}

