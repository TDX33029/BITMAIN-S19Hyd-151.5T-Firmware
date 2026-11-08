// FUN_0002a4a8 @ 0002a4a8  size=392  callers=1
// program: cgminer


undefined4 FUN_0002a4a8(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *__format;
  char acStack_810 [2048];
  
  iVar3 = FUN_00020a48(param_2,param_1 + 0x9a,param_1 + 0x92);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = strncasecmp(param_2,"stratum+tcp://",0xe);
  if (iVar3 == 0) {
    uVar2 = __strdup(param_2);
    param_1[0x29] = uVar2;
    cVar1 = DAT_00072da0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    param_1[0x90] = param_1[0x9a];
    *(undefined1 *)(param_1 + 0xa4) = 1;
    if (((cVar1 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 5)) {
      return 1;
    }
    uVar2 = *param_1;
    __format = "Pool %d is tcp pool.";
  }
  else {
    iVar3 = strncasecmp(param_2,"stratum+tls://",0xe);
    if (iVar3 != 0) {
      return 0;
    }
    uVar2 = __strdup(param_2);
    cVar1 = DAT_00072da0;
    param_1[0x29] = uVar2;
    param_1[0x90] = param_1[0x9a];
    *(undefined1 *)(param_1 + 0xa4) = 1;
    *(undefined1 *)(param_1 + 0x94) = 1;
    if (((cVar1 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 5)) {
      return 1;
    }
    uVar2 = *param_1;
    __format = "Pool %d is tls pool.";
  }
  snprintf(acStack_810,0x800,__format,uVar2);
  FUN_0001dd98(5,acStack_810,0);
  return 1;
}

