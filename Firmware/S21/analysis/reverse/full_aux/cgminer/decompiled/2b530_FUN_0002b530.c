// FUN_0002b530 @ 0002b530  size=600  callers=2
// program: cgminer


void FUN_0002b530(undefined4 param_1)

{
  char *param3;
  double in_d0;
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 local_850;
  undefined8 local_848;
  undefined8 local_840;
  undefined8 local_838;
  char local_830 [2052];
  
  if (in_d0 == 0.0) {
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
      local_850 = 0;
      local_848 = 0;
      local_840 = 0;
      uVar3 = 0xffff0000;
    }
    else {
      uVar3 = 0xffff0000;
      builtin_strncpy(local_830,"Diff zero passed to set_target",0x1f);
      FUN_0001dd98(3,local_830,0);
      local_850 = 0;
      local_848 = 0;
      local_840 = 0;
    }
  }
  else {
    dVar1 = (2.695953529101131e+67 / in_d0) * 1.5930919111324523e-58;
    uVar3 = FUN_0004ad88(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)FUN_0004acbc();
    dVar2 = 2.695953529101131e+67 / in_d0 - dVar1 * 6.277101735386681e+57;
    dVar1 = dVar2 * 2.938735877055719e-39;
    local_840 = FUN_0004ad88(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)FUN_0004acbc();
    dVar2 = dVar2 - dVar1 * 3.402823669209385e+38;
    dVar1 = dVar2 * 5.421010862427522e-20;
    local_848 = FUN_0004ad88(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)FUN_0004acbc();
    dVar2 = dVar2 - dVar1 * 1.8446744073709552e+19;
    local_850 = FUN_0004ad88(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20));
  }
  local_838 = uVar3;
  if (DAT_000686f1 != '\0') {
    param3 = (char *)FUN_0001fac8(&local_850,0x20);
    if ((DAT_000686f1 != '\0') &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      snprintf(local_830,0x800,"Generated target %s",param3);
      FUN_0001dd98(7,local_830,0);
    }
    free(param3);
  }
  FUN_00023324(param_1,&local_850,0x20,"cgminer.c","set_target",0x20cf);
  return;
}

