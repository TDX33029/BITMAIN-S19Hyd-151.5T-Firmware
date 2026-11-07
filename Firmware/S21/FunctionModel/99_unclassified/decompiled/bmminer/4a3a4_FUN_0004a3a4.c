// FUN_0004a3a4 @ 0004a3a4  size=968  callers=25
// program: bmminer


void FUN_0004a3a4(uint param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  FILE *pFVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  
  sVar3 = strlen(&DAT_008c67c0);
  sVar4 = strlen(param_2);
  if (0x7ff < sVar3 + sVar4 + 1) {
    if (DAT_00a5d20d == '\0') {
      iVar5 = fileno(stderr);
      iVar5 = isatty(iVar5);
      if (iVar5 == 0) {
        fputs(&DAT_008c67c0,stderr);
        fflush(stderr);
      }
      if ((DAT_008c6690 != '\0') &&
         ((DAT_008c6694 != (FILE *)0x0 ||
          (DAT_008c6694 = fopen(&DAT_008c66b8,(char *)&DAT_008c6698), DAT_008c6694 != (FILE *)0x0)))
         ) {
        pFVar2 = DAT_008c6694;
        sVar3 = strlen(&DAT_008c67c0);
        fwrite(&DAT_008c67c0,sVar3,1,pFVar2);
        fflush(DAT_008c6694);
      }
      if (DAT_008c6fc0 == 0) {
        DAT_008c6fc0 = FUN_000856dc("bmminer_miner");
      }
      FUN_000875a0(DAT_008c6fc0,"logging.c",9,"_applawlog",10,0x109,0x3c,"%s",&DAT_008c67c0);
      if (param_1 == 3) {
        bVar7 = 0;
      }
      else {
        bVar7 = DAT_00a5f30c & 1;
      }
      if (bVar7 == 0) {
        FUN_00049ff4(&DAT_0009fca4,&DAT_008c67c0,param_3);
      }
    }
    else {
      syslog(param_1 | 0x80,"%s",&DAT_008c67c0);
      if (DAT_008c6fc0 == 0) {
        DAT_008c6fc0 = FUN_000856dc("bmminer_miner");
      }
      FUN_000875a0(DAT_008c6fc0,"logging.c",9,"_applawlog",10,0xed,0x3c,"%s",&DAT_008c67c0);
    }
    DAT_008c67c0 = 0;
  }
  strcat(&DAT_008c67c0,param_2);
  pcVar6 = &DAT_008c67c0;
  do {
    cVar1 = *pcVar6;
    if (cVar1 == '\r' || cVar1 == '\n') {
      if (DAT_00a5d20d == '\0') {
        iVar5 = fileno(stderr);
        iVar5 = isatty(iVar5);
        if (iVar5 == 0) {
          fputs(&DAT_008c67c0,stderr);
          fflush(stderr);
        }
        if ((DAT_008c6690 != '\0') &&
           ((DAT_008c6694 != (FILE *)0x0 ||
            (DAT_008c6694 = fopen(&DAT_008c66b8,(char *)&DAT_008c6698), DAT_008c6694 != (FILE *)0x0)
            ))) {
          pFVar2 = DAT_008c6694;
          sVar3 = strlen(&DAT_008c67c0);
          fwrite(&DAT_008c67c0,sVar3,1,pFVar2);
          fflush(DAT_008c6694);
        }
        if (DAT_008c6fc0 == 0) {
          DAT_008c6fc0 = FUN_000856dc("bmminer_miner");
        }
        FUN_000875a0(DAT_008c6fc0,"logging.c",9,"_applawlog",10,0x12f,0x3c,"%s",&DAT_008c67c0);
        if (param_1 == 3) {
          bVar7 = 0;
        }
        else {
          bVar7 = DAT_00a5f30c & 1;
        }
        if (bVar7 == 0) {
          FUN_00049ff4(&DAT_0009fca4,&DAT_008c67c0,param_3);
        }
      }
      else {
        syslog(param_1 | 0x80,"%s",&DAT_008c67c0);
        if (DAT_008c6fc0 == 0) {
          DAT_008c6fc0 = FUN_000856dc("bmminer_miner");
        }
        FUN_000875a0(DAT_008c6fc0,"logging.c",9,"_applawlog",10,0x113,0x3c,"%s",&DAT_008c67c0);
      }
      DAT_008c67c0 = 0;
      return;
    }
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  return;
}

