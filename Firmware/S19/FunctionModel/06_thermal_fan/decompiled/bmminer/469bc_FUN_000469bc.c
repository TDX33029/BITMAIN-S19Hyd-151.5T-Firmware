// FUN_000469bc @ 000469bc  size=196  callers=1
// program: bmminer


undefined4 FUN_000469bc(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char local_810 [2052];
  
  if (param_1 < 3) {
    if (param_1 + -1 == 0) {
      if (99 < param_2) {
        param_2 = 100;
      }
      uVar2 = 100 - param_2 | param_2 << 0x10;
      FUN_00045c40(0x13,uVar2);
      FUN_00045c40(0x17,uVar2);
      return 0;
    }
    snprintf(local_810,0x800,"pwm type %d not supported\n",param_1 + -1);
    FUN_00032218(0,local_810);
    uVar1 = 0;
  }
  else {
    builtin_strncpy(local_810,"bad param\n",0xb);
    FUN_00032218(0,local_810);
    uVar1 = 0xfffffffd;
  }
  return uVar1;
}

