// FUN_000429e0 @ 000429e0  size=620  callers=1
// program: bmminer


void FUN_000429e0(undefined4 param_1)

{
  char *param3;
  double in_d0;
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 local_2050;
  undefined8 local_2048;
  undefined8 local_2040;
  undefined8 local_2038;
  char local_2030 [8196];
  
  if (in_d0 == 0.0) {
    if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 3)) {
      local_2050 = 0;
      local_2048 = 0;
      local_2040 = 0;
      uVar3 = 0xffff0000;
    }
    else {
      uVar3 = 0xffff0000;
      builtin_strncpy(local_2030,"Diff zero passed to set_target",0x1f);
      FUN_0004948c(3,local_2030,0);
      local_2050 = 0;
      local_2048 = 0;
      local_2040 = 0;
    }
  }
  else {
    dVar1 = (2.695953529101131e+67 / in_d0) * 1.5930919111324523e-58;
    uVar3 = FUN_00098fa0(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)FUN_00098c14();
    dVar2 = 2.695953529101131e+67 / in_d0 - dVar1 * 6.277101735386681e+57;
    dVar1 = dVar2 * 2.938735877055719e-39;
    local_2040 = FUN_00098fa0(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)FUN_00098c14();
    dVar2 = dVar2 - dVar1 * 3.402823669209385e+38;
    dVar1 = dVar2 * 5.421010862427522e-20;
    local_2048 = FUN_00098fa0(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)FUN_00098c14();
    dVar2 = dVar2 - dVar1 * 1.8446744073709552e+19;
    local_2050 = FUN_00098fa0(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20));
  }
  local_2038 = uVar3;
  if (DAT_008c702e != '\0') {
    param3 = (char *)FUN_0004b100(&local_2050,0x20);
    if ((DAT_008c702e != '\0') &&
       (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
      snprintf(local_2030,0x2000,"Generated target %s",param3);
      FUN_0004948c(7,local_2030,0);
    }
    free(param3);
  }
  FUN_0004c940(param_1,&local_2050,0x20,"bmminer.c","set_target",0x49c);
  return;
}

