// FUN_0001dd98 @ 0001dd98  size=480  callers=140
// program: cgminer


void FUN_0001dd98(uint param_1,char *param_2,undefined4 param_3)

{
  FILE *__s;
  tm *ptVar1;
  int iVar2;
  size_t sVar3;
  byte bVar4;
  uint local_6c;
  uint local_68;
  uint local_64;
  char acStack_60 [64];
  
  local_68 = (uint)DAT_00072da0;
  if (local_68 != 0) {
    syslog(param_1 | 0x80,"%s",param_2);
    return;
  }
  local_64 = local_68;
  FUN_000206d8(&local_68);
  local_6c = local_68;
  iVar2 = (int)local_64 / 1000;
  ptVar1 = localtime((time_t *)&local_6c);
  snprintf(acStack_60,0x40," [%d-%02d-%02d %02d:%02d:%02d.%03d] ",ptVar1->tm_year + 0x76c,
           ptVar1->tm_mon + 1,ptVar1->tm_mday,ptVar1->tm_hour,ptVar1->tm_min,ptVar1->tm_sec,iVar2);
  iVar2 = fileno(stderr);
  iVar2 = isatty(iVar2);
  if (iVar2 == 0) {
    fprintf(stderr,"%s%s\n",acStack_60,param_2);
    fflush(stderr);
  }
  if ((DAT_000685c8 != '\0') &&
     ((DAT_000685cc != (FILE *)0x0 ||
      (DAT_000685cc = fopen64((char *)&DAT_000685f0,(char *)&DAT_000685d0),
      DAT_000685cc != (FILE *)0x0)))) {
    __s = DAT_000685cc;
    sVar3 = strlen(acStack_60);
    fwrite(acStack_60,sVar3,1,__s);
    sVar3 = strlen(param_2);
    fwrite(param_2,sVar3,1,DAT_000685cc);
    fwrite(&DAT_0004c39c,1,1,DAT_000685cc);
    fflush(DAT_000685cc);
  }
  if (param_1 == 3) {
    bVar4 = 0;
  }
  else {
    bVar4 = DAT_00076244 & 1;
  }
  if (bVar4 == 0) {
    FUN_0001e084(acStack_60,param_2,param_3);
  }
  return;
}

