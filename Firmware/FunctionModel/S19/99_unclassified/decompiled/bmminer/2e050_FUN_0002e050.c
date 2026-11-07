// FUN_0002e050 @ 0002e050  size=1200  callers=1
// program: bmminer


void FUN_0002e050(void)

{
  FILE *pFVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  char acStack_918 [256];
  char acStack_818 [2052];
  
  pFVar1 = fopen64(DAT_0008a1f8,"rb");
  memset(acStack_918,0,0x100);
  if (pFVar1 == (FILE *)0x0) {
    if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
      snprintf(acStack_818,0x800,"Open miner version file %s error",DAT_0008a1f8);
      FUN_00032218(3,acStack_818,0);
    }
  }
  else {
    sVar2 = fread(acStack_918,1,0x100,pFVar1);
    if ((int)sVar2 < 1) {
      if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
        snprintf(acStack_818,0x800,"Read miner version file %s error %d",DAT_0008a1f8,sVar2);
        FUN_00032218(3,acStack_818,0);
      }
    }
    else {
      pcVar3 = strchr(acStack_918,10);
      if (pcVar3 == (char *)0x0) {
        strcpy(&DAT_0008a428,acStack_918);
      }
      else {
        FUN_00035430(&DAT_0008a428,acStack_918,(int)pcVar3 - (int)acStack_918,"bmminer.c",
                     "read_version_file",0x5eb);
        pcVar3 = stpcpy(acStack_918,pcVar3 + 1);
        pcVar4 = strchr(acStack_918,10);
        if (pcVar4 == (char *)0x0) {
          memcpy(&DAT_0008a528,acStack_918,(size_t)(pcVar3 + (1 - (int)acStack_918)));
        }
        else {
          FUN_00035430(&DAT_0008a528,acStack_918,(int)pcVar4 - (int)acStack_918,"bmminer.c",
                       "read_version_file",0x5f4);
        }
      }
      sVar2 = strlen(&DAT_0008a428);
      cVar5 = *(char *)((int)&DAT_0008a424 + sVar2 + 3);
      if (cVar5 == '\n') {
        *(undefined1 *)((int)&DAT_0008a424 + sVar2 + 3) = 0;
        sVar2 = strlen(&DAT_0008a428);
        cVar5 = *(char *)((int)&DAT_0008a424 + sVar2 + 3);
      }
      if (cVar5 == '\r') {
        *(undefined1 *)((int)&DAT_0008a424 + sVar2 + 3) = 0;
      }
      sVar2 = strlen(&DAT_0008a528);
      cVar5 = (&DAT_0008a527)[sVar2];
      if (cVar5 == '\n') {
        (&DAT_0008a527)[sVar2] = 0;
        sVar2 = strlen(&DAT_0008a528);
        cVar5 = (&DAT_0008a527)[sVar2];
      }
      if (cVar5 == '\r') {
        (&DAT_0008a527)[sVar2] = 0;
      }
    }
  }
  pFVar1 = fopen64("/config/sn","rb");
  if (pFVar1 == (FILE *)0x0) {
    if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (cVar5 = '\0', 2 < DAT_00087bc4)) {
      snprintf(acStack_818,0x800,"Open miner sn file %s error","/config/sn");
      FUN_00032218(3,acStack_818,0);
      cVar5 = DAT_0071e84c;
    }
  }
  else {
    memset(acStack_918,0,0x100);
    sVar2 = fread(acStack_918,1,0xfa,pFVar1);
    if ((int)sVar2 < 1) {
      if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
        snprintf(acStack_818,0x800,"Read miner sn file %s error %d","/config/sn",sVar2);
        FUN_00032218(3,acStack_818,0);
      }
    }
    else {
      pcVar3 = strstr(acStack_918,"\r\n");
      if (pcVar3 == (char *)0x0) {
        strcpy(&DAT_0008a628,acStack_918);
      }
      else {
        FUN_00035430(&DAT_0008a628,acStack_918,(int)pcVar3 - (int)acStack_918,"bmminer.c",
                     "read_version_file",0x625);
      }
    }
    fclose(pFVar1);
    cVar5 = DAT_0071e84c;
  }
  sVar2 = strlen(&DAT_0008a628);
  cVar6 = (&DAT_0008a627)[sVar2];
  if (cVar6 == '\n') {
    (&DAT_0008a627)[sVar2] = 0;
    sVar2 = strlen(&DAT_0008a628);
    cVar6 = (&DAT_0008a627)[sVar2];
  }
  if (cVar6 == '\r') {
    (&DAT_0008a627)[sVar2] = 0;
  }
  if (((cVar5 != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
    snprintf(acStack_818,0x800,"Miner compile time: %s type: %s sn :%s",&DAT_0008a428,&DAT_0008a528,
             &DAT_0008a628);
    FUN_00032218(3,acStack_818,0);
  }
  return;
}

