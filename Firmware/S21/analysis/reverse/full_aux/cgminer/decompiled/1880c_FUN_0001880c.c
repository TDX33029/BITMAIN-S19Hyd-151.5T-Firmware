// FUN_0001880c @ 0001880c  size=304  callers=0
// program: cgminer


undefined4 FUN_0001880c(void)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_810 [2052];
  
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    snprintf(acStack_810,0x800,"<<<<<<<<<<<<<<<<<<<<exec %s start>>>>>>>>>>>>>>>>","reload_config");
    FUN_0001dd98(7,acStack_810,0);
  }
  iVar1 = strcmp((char *)&DAT_000685b4,"127.0.0.1");
  if (iVar1 == 0) {
    FUN_0003de10();
    uVar2 = 0;
    if ((DAT_000686f1 != '\0') &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      snprintf(acStack_810,0x800,"<<<<<<<<<<<<<<<<<<<<exec %s end>>>>>>>>>>>>>>>>>>","reload_config"
              );
      FUN_0001dd98(7,acStack_810,0);
    }
  }
  else {
    uVar2 = 0x80000005;
  }
  return uVar2;
}

