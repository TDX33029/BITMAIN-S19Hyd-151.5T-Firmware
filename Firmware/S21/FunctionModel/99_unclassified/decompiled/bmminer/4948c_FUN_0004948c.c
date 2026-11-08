// FUN_0004948c @ 0004948c  size=676  callers=437
// program: bmminer


void FUN_0004948c(uint param_1,char *param_2,undefined4 param_3)

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
  
  local_68 = (uint)DAT_00a5d20d;
  if (local_68 == 0) {
    local_64 = local_68;
    FUN_0004bd34(&local_68);
    local_6c = local_68;
    iVar2 = (int)local_64 / 1000;
    ptVar1 = localtime((time_t *)&local_6c);
    snprintf(acStack_60,0x40," [%d-%02d-%02d %02d:%02d:%02d.%03d] ",ptVar1->tm_year + 0x76c,
             ptVar1->tm_mon + 1,ptVar1->tm_mday,ptVar1->tm_hour,ptVar1->tm_min,ptVar1->tm_sec,iVar2)
    ;
    iVar2 = fileno(stderr);
    iVar2 = isatty(iVar2);
    if (iVar2 == 0) {
      fprintf(stderr,"%s%s\n",acStack_60,param_2);
      fflush(stderr);
    }
    if ((DAT_008c6690 != '\0') &&
       ((DAT_008c6694 != (FILE *)0x0 ||
        (DAT_008c6694 = fopen(&DAT_008c66b8,(char *)&DAT_008c6698), DAT_008c6694 != (FILE *)0x0))))
    {
      __s = DAT_008c6694;
      sVar3 = strlen(acStack_60);
      fwrite(acStack_60,sVar3,1,__s);
      sVar3 = strlen(param_2);
      fwrite(param_2,sVar3,1,DAT_008c6694);
      fwrite("\n",1,1,DAT_008c6694);
      fflush(DAT_008c6694);
    }
    if (DAT_008c668c == 0) {
      DAT_008c668c = FUN_000856dc("bmminer_miner");
    }
    FUN_000875a0(DAT_008c668c,"logging.c",9,"_applog",7,0xbb,0x3c,"%s",param_2);
    if (param_1 == 3) {
      bVar4 = 0;
    }
    else {
      bVar4 = DAT_00a5f30c & 1;
    }
    if (bVar4 == 0) {
      FUN_00049ff4(acStack_60,param_2,param_3);
      return;
    }
  }
  else {
    syslog(param_1 | 0x80,"%s",param_2);
    if (DAT_008c668c == 0) {
      DAT_008c668c = FUN_000856dc("bmminer_miner");
    }
    FUN_000875a0(DAT_008c668c,"logging.c",9,"_applog",7,0x8d,0x3c,"%s",param_2);
  }
  return;
}

