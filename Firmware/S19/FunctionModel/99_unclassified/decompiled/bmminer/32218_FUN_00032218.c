// FUN_00032218 @ 00032218  size=676  callers=315
// program: bmminer


void FUN_00032218(uint param_1,char *param_2,undefined4 param_3)

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
  
  local_68 = (uint)DAT_0071e84c;
  if (local_68 == 0) {
    local_64 = local_68;
    FUN_00034828(&local_68);
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
    if ((DAT_0048c9dc != '\0') &&
       ((DAT_0048c9e0 != (FILE *)0x0 ||
        (DAT_0048c9e0 = fopen64(&DAT_0048ca04,(char *)&DAT_0048c9e4), DAT_0048c9e0 != (FILE *)0x0)))
       ) {
      __s = DAT_0048c9e0;
      sVar3 = strlen(acStack_60);
      fwrite(acStack_60,sVar3,1,__s);
      sVar3 = strlen(param_2);
      fwrite(param_2,sVar3,1,DAT_0048c9e0);
      fwrite("\n",1,1,DAT_0048c9e0);
      fflush(DAT_0048c9e0);
    }
    if (DAT_0048c9d8 == 0) {
      DAT_0048c9d8 = FUN_0005b008("bmminer_miner");
    }
    FUN_0005c5c4(DAT_0048c9d8,"logging.c",9,"_applog",7,0x77,0x3c,"%s",param_2);
    if (param_1 == 3) {
      bVar4 = 0;
    }
    else {
      bVar4 = DAT_0071c798 & 1;
    }
    if (bVar4 == 0) {
      FUN_00032d88(acStack_60,param_2,param_3);
      return;
    }
  }
  else {
    syslog(param_1 | 0x80,"%s",param_2);
    if (DAT_0048c9d8 == 0) {
      DAT_0048c9d8 = FUN_0005b008("bmminer_miner");
    }
    FUN_0005c5c4(DAT_0048c9d8,"logging.c",9,"_applog",7,0x49,0x3c,"%s",param_2);
  }
  return;
}

