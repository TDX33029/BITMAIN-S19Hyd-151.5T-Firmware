// FUN_000170ac @ 000170ac  size=304  callers=6
// program: bmminer


void FUN_000170ac(int param_1)

{
  char local_2010 [8196];
  
  if (DAT_000bfab0 == 0) {
    DAT_000bfab0 = FUN_00062b98(0,100000);
  }
  if (DAT_000bfab0 < 0) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      builtin_strncpy(local_2010,"pwm for fan init error",0x17);
      FUN_0004948c(3,local_2010,0);
      return;
    }
  }
  else if (param_1 != DAT_000bfab4) {
    if (4 < DAT_000be63c) {
      snprintf(local_2010,0x2000,"set pwm = %d",param_1);
      FUN_0004948c(4,local_2010,0);
    }
    FUN_00062d54(DAT_000bfab0,param_1);
    FUN_0002a8f0(param_1);
    DAT_000bfab4 = param_1;
  }
  return;
}

