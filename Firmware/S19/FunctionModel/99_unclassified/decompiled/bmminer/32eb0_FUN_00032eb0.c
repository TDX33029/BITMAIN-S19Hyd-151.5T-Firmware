// FUN_00032eb0 @ 00032eb0  size=968  callers=9
// program: bmminer


void FUN_00032eb0(uint param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  FILE *pFVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  
  sVar3 = strlen(&DAT_0048cb04);
  sVar4 = strlen(param_2);
  if (0x7ff < sVar3 + sVar4 + 1) {
    if (DAT_0071e84c == '\0') {
      iVar5 = fileno(stderr);
      iVar5 = isatty(iVar5);
      if (iVar5 == 0) {
        fputs(&DAT_0048cb04,stderr);
        fflush(stderr);
      }
      if ((DAT_0048c9dc != '\0') &&
         ((DAT_0048c9e0 != (FILE *)0x0 ||
          (DAT_0048c9e0 = fopen64(&DAT_0048ca04,(char *)&DAT_0048c9e4), DAT_0048c9e0 != (FILE *)0x0)
          ))) {
        pFVar2 = DAT_0048c9e0;
        sVar3 = strlen(&DAT_0048cb04);
        fwrite(&DAT_0048cb04,sVar3,1,pFVar2);
        fflush(DAT_0048c9e0);
      }
      if (DAT_0048d304 == 0) {
        DAT_0048d304 = FUN_0005b008("bmminer_miner");
      }
      FUN_0005c5c4(DAT_0048d304,"logging.c",9,"_applawlog",10,0xc5,0x3c,"%s",&DAT_0048cb04);
      if (param_1 == 3) {
        bVar7 = 0;
      }
      else {
        bVar7 = DAT_0071c798 & 1;
      }
      if (bVar7 == 0) {
        FUN_00032d88("",&DAT_0048cb04,param_3);
      }
    }
    else {
      syslog(param_1 | 0x80,"%s",&DAT_0048cb04);
      if (DAT_0048d304 == 0) {
        DAT_0048d304 = FUN_0005b008("bmminer_miner");
      }
      FUN_0005c5c4(DAT_0048d304,"logging.c",9,"_applawlog",10,0xa9,0x3c,"%s",&DAT_0048cb04);
    }
    DAT_0048cb04 = 0;
  }
  strcat(&DAT_0048cb04,param_2);
  pcVar6 = &DAT_0048cb04;
  do {
    cVar1 = *pcVar6;
    if (cVar1 == '\r' || cVar1 == '\n') {
      if (DAT_0071e84c == '\0') {
        iVar5 = fileno(stderr);
        iVar5 = isatty(iVar5);
        if (iVar5 == 0) {
          fputs(&DAT_0048cb04,stderr);
          fflush(stderr);
        }
        if ((DAT_0048c9dc != '\0') &&
           ((DAT_0048c9e0 != (FILE *)0x0 ||
            (DAT_0048c9e0 = fopen64(&DAT_0048ca04,(char *)&DAT_0048c9e4),
            DAT_0048c9e0 != (FILE *)0x0)))) {
          pFVar2 = DAT_0048c9e0;
          sVar3 = strlen(&DAT_0048cb04);
          fwrite(&DAT_0048cb04,sVar3,1,pFVar2);
          fflush(DAT_0048c9e0);
        }
        if (DAT_0048d304 == 0) {
          DAT_0048d304 = FUN_0005b008("bmminer_miner");
        }
        FUN_0005c5c4(DAT_0048d304,"logging.c",9,"_applawlog",10,0xeb,0x3c,"%s",&DAT_0048cb04);
        if (param_1 == 3) {
          bVar7 = 0;
        }
        else {
          bVar7 = DAT_0071c798 & 1;
        }
        if (bVar7 == 0) {
          FUN_00032d88("",&DAT_0048cb04,param_3);
        }
      }
      else {
        syslog(param_1 | 0x80,"%s",&DAT_0048cb04);
        if (DAT_0048d304 == 0) {
          DAT_0048d304 = FUN_0005b008("bmminer_miner");
        }
        FUN_0005c5c4(DAT_0048d304,"logging.c",9,"_applawlog",10,0xcf,0x3c,"%s",&DAT_0048cb04);
      }
      DAT_0048cb04 = 0;
      return;
    }
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  return;
}

