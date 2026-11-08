// FUN_0002ce80 @ 0002ce80  size=600  callers=1
// program: bmminer


void FUN_0002ce80(undefined4 param_1)

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
    if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 3)) {
      local_850 = 0;
      local_848 = 0;
      local_840 = 0;
      uVar3 = 0xffff0000;
    }
    else {
      uVar3 = 0xffff0000;
      builtin_strncpy(local_830,"Diff zero passed to set_target",0x1f);
      FUN_00032218(3,local_830,0);
      local_850 = 0;
      local_848 = 0;
      local_840 = 0;
    }
  }
  else {
    dVar1 = (2.695953529101131e+67 / in_d0) * 1.5930919111324523e-58;
    uVar3 = FUN_00067b30(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)FUN_000679c4();
    dVar2 = 2.695953529101131e+67 / in_d0 - dVar1 * 6.277101735386681e+57;
    dVar1 = dVar2 * 2.938735877055719e-39;
    local_840 = FUN_00067b30(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)FUN_000679c4();
    dVar2 = dVar2 - dVar1 * 3.402823669209385e+38;
    dVar1 = dVar2 * 5.421010862427522e-20;
    local_848 = FUN_00067b30(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)FUN_000679c4();
    dVar2 = dVar2 - dVar1 * 1.8446744073709552e+19;
    local_850 = FUN_00067b30(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20));
  }
  local_838 = uVar3;
  if (DAT_0048d36e != '\0') {
    param3 = (char *)FUN_00033bf8(&local_850,0x20);
    if ((DAT_0048d36e != '\0') &&
       (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
      snprintf(local_830,0x800,"Generated target %s",param3);
      FUN_00032218(7,local_830,0);
    }
    free(param3);
  }
  FUN_00035430(param_1,&local_850,0x20,"bmminer.c","set_target",0x464);
  return;
}

