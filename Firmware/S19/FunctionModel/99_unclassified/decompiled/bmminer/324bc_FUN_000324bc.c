// FUN_000324bc @ 000324bc  size=424  callers=3
// program: bmminer


uint FUN_000324bc(char *param_1)

{
  FILE *__stream;
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  char acStack_c18 [1024];
  char local_818 [2052];
  
  __stream = popen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    if (DAT_00087bbc < 4) {
      return 0xffffffff;
    }
    piVar3 = __errno_location();
    uVar2 = 0xffffffff;
    pcVar1 = strerror(*piVar3);
    snprintf(local_818,0x800,"popen error: %s/n",pcVar1);
    FUN_00032218(3,local_818,0);
  }
  else {
    while (pcVar1 = fgets(acStack_c18,0x400,__stream), pcVar1 != (char *)0x0) {
      if (3 < DAT_00087bbc) {
        snprintf(local_818,0x800,"%s",acStack_c18);
        FUN_00032218(3,local_818,0);
      }
    }
    uVar2 = pclose(__stream);
    if (uVar2 == 0xffffffff) {
      if (DAT_00087bbc < 4) {
        return 0xffffffff;
      }
      builtin_strncpy(local_818,"close popen file pointer fp error!\n",0x24);
      FUN_00032218(3,local_818,0);
    }
    else if (uVar2 != 0) {
      if (3 < DAT_00087bbc) {
        snprintf(local_818,0x800,"pclose res is :%d\n",(uint)((uVar2 & 0x7f) == 0));
        FUN_00032218(3,local_818,0);
      }
      uVar2 = (uVar2 & 0xffff) >> 8;
    }
  }
  return uVar2;
}

