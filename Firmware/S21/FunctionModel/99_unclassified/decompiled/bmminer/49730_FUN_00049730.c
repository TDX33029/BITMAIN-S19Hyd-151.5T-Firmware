// FUN_00049730 @ 00049730  size=340  callers=3
// program: bmminer


uint FUN_00049730(char *param_1)

{
  FILE *__stream;
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  char acStack_2410 [1024];
  char local_2010 [8192];
  
  __stream = popen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    piVar3 = __errno_location();
    uVar2 = 0xffffffff;
    pcVar1 = strerror(*piVar3);
    snprintf(local_2010,0x2000,"popen error: %s/n",pcVar1);
    FUN_0004948c(3,local_2010,0);
  }
  else {
    do {
      pcVar1 = fgets(acStack_2410,0x400,__stream);
    } while (pcVar1 != (char *)0x0);
    uVar2 = pclose(__stream);
    if (uVar2 == 0xffffffff) {
      if (DAT_000be63c < 4) {
        return 0xffffffff;
      }
      builtin_strncpy(local_2010,"close popen file pointer fp error!\n",0x24);
      FUN_0004948c(3,local_2010,0);
    }
    else if (uVar2 != 0) {
      if (3 < DAT_000be63c) {
        snprintf(local_2010,0x2000,"pclose res is :%d\n",(uint)((uVar2 & 0x7f) == 0));
        FUN_0004948c(3,local_2010,0);
      }
      uVar2 = (uVar2 & 0xffff) >> 8;
    }
  }
  return uVar2;
}

