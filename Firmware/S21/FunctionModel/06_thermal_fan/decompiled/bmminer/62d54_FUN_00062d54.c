// FUN_00062d54 @ 00062d54  size=292  callers=1
// program: bmminer


undefined4 FUN_00062d54(int param_1,uint param_2)

{
  undefined4 uVar1;
  char local_808 [2048];
  
  if (param_1 + -1 < 2) {
    if (param_1 == 1) {
      if (99 < param_2) {
        param_2 = 100;
      }
      FUN_000612bc(0x13,param_2 << 0x10 | 100 - param_2);
      FUN_000612bc(0x17,param_2 << 0x10 | 100 - param_2);
    }
    else {
      snprintf(local_808,0x800,"pwm type %d not supported\n",param_1 + -1);
      FUN_0004948c(0,local_808,0);
    }
    uVar1 = 0;
  }
  else {
    builtin_strncpy(local_808,"bad param\n",0xb);
    FUN_0004948c(0,local_808,0);
    uVar1 = 0xfffffffd;
  }
  return uVar1;
}

