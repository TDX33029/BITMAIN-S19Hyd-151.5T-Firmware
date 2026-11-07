// FUN_000306ac @ 000306ac  size=304  callers=0
// program: cgminer


char * FUN_000306ac(char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  size_t sVar3;
  long param4;
  int *piVar4;
  char acStack_818 [2052];
  
  pcVar1 = strchr(param_1,0x3b);
  if (pcVar1 == (char *)0x0) {
    return "No semicolon separated quota;URL pair found";
  }
  sVar2 = strlen(param_1);
  *pcVar1 = '\0';
  sVar3 = strlen(param_1);
  if (sVar3 == 0) {
    pcVar1 = "No parameter for quota found";
  }
  else if ((int)(sVar2 - (sVar3 + 1)) < 1) {
    pcVar1 = "No parameter for URL found";
  }
  else {
    param4 = strtol(param_1,(char **)0x0,10);
    if (param4 < 0) {
      pcVar1 = "Invalid negative parameter for quota set";
    }
    else {
      piVar4 = (int *)FUN_00030574(param4);
      FUN_0002a4dc(piVar4,param_1 + sVar3 + 1);
      piVar4[0xe] = param4;
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
        snprintf(acStack_818,0x800,"Setting pool %d to quota %d",*piVar4,param4);
        FUN_0001dd98(6,acStack_818,0);
      }
      FUN_0002a2a8();
      pcVar1 = (char *)0x0;
    }
  }
  return pcVar1;
}

