// FUN_00043bf0 @ 00043bf0  size=1576  callers=1
// program: bmminer


void FUN_00043bf0(void)

{
  FILE *pFVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  char acStack_2118 [256];
  char acStack_2018 [8196];
  
  pFVar1 = fopen(DAT_000c8d88,"rb");
  memset(acStack_2118,0,0x100);
  if (pFVar1 == (FILE *)0x0) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      snprintf(acStack_2018,0x2000,"Open miner version file %s error",DAT_000c8d88);
      FUN_0004948c(3,acStack_2018,0);
    }
  }
  else {
    sVar2 = fread(acStack_2118,1,0x100,pFVar1);
    if ((int)sVar2 < 1) {
      if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
        snprintf(acStack_2018,0x2000,"Read miner version file %s error %d",DAT_000c8d88,sVar2);
        FUN_0004948c(3,acStack_2018,0);
      }
    }
    else {
      pcVar3 = strchr(acStack_2118,10);
      if (pcVar3 == (char *)0x0) {
        strcpy(&DAT_000c8fbc,acStack_2118);
      }
      else {
        FUN_0004c940(&DAT_000c8fbc,acStack_2118,(int)pcVar3 - (int)acStack_2118,"bmminer.c",
                     "read_version_file",0x623);
        pcVar3 = stpcpy(acStack_2118,pcVar3 + 1);
        pcVar4 = strchr(acStack_2118,10);
        if (pcVar4 == (char *)0x0) {
          memcpy(&DAT_000c90bc,acStack_2118,(size_t)(pcVar3 + (1 - (int)acStack_2118)));
        }
        else {
          FUN_0004c940(&DAT_000c90bc,acStack_2118,(int)pcVar4 - (int)acStack_2118,"bmminer.c",
                       "read_version_file",0x62c);
        }
      }
      sVar2 = strlen(&DAT_000c8fbc);
      cVar5 = *(char *)((int)&DAT_000c8fb8 + sVar2 + 3);
      if (cVar5 == '\n') {
        *(undefined1 *)((int)&DAT_000c8fb8 + sVar2 + 3) = 0;
        sVar2 = strlen(&DAT_000c8fbc);
        cVar5 = *(char *)((int)&DAT_000c8fb8 + sVar2 + 3);
      }
      if (cVar5 == '\r') {
        *(undefined1 *)((int)&DAT_000c8fb8 + sVar2 + 3) = 0;
      }
      sVar2 = strlen(&DAT_000c90bc);
      cVar5 = (&DAT_000c90bb)[sVar2];
      if (cVar5 == '\n') {
        (&DAT_000c90bb)[sVar2] = 0;
        sVar2 = strlen(&DAT_000c90bc);
        cVar5 = (&DAT_000c90bb)[sVar2];
      }
      if (cVar5 == '\r') {
        (&DAT_000c90bb)[sVar2] = 0;
      }
    }
  }
  pFVar1 = fopen("/usr/bin/v_version","rb");
  memset(acStack_2118,0,0x100);
  if (pFVar1 == (FILE *)0x0) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      snprintf(acStack_2018,0x2000,"Open miner version file %s error","/usr/bin/v_version");
      FUN_0004948c(3,acStack_2018,0);
    }
  }
  else {
    sVar2 = fread(acStack_2118,1,0x100,pFVar1);
    if ((int)sVar2 < 1) {
      if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
        snprintf(acStack_2018,0x2000,"Read miner version file %s error %d","/usr/bin/v_version",
                 sVar2);
        FUN_0004948c(3,acStack_2018,0);
      }
    }
    else {
      pcVar3 = strstr(acStack_2118,"\r\n");
      if (pcVar3 == (char *)0x0) {
        strcpy(&DAT_000c91bc,acStack_2118);
      }
      else {
        FUN_0004c940(&DAT_000c91bc,acStack_2118,(int)pcVar3 - (int)acStack_2118,"bmminer.c",
                     "read_version_file",0x65d);
      }
    }
    fclose(pFVar1);
  }
  pFVar1 = fopen("/config/sn","rb");
  if (pFVar1 == (FILE *)0x0) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (cVar5 = '\0', 2 < DAT_000be644)) {
      snprintf(acStack_2018,0x2000,"Open miner sn file %s error","/config/sn");
      FUN_0004948c(3,acStack_2018,0);
      cVar5 = DAT_00a5d20d;
    }
  }
  else {
    memset(acStack_2118,0,0x100);
    sVar2 = fread(acStack_2118,1,0xfa,pFVar1);
    if ((int)sVar2 < 1) {
      if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
        snprintf(acStack_2018,0x2000,"Read miner sn file %s error %d","/config/sn",sVar2);
        FUN_0004948c(3,acStack_2018,0);
      }
    }
    else {
      pcVar3 = strstr(acStack_2118,"\r\n");
      if (pcVar3 == (char *)0x0) {
        strcpy(&DAT_000c92bc,acStack_2118);
      }
      else {
        FUN_0004c940(&DAT_000c92bc,acStack_2118,(int)pcVar3 - (int)acStack_2118,"bmminer.c",
                     "read_version_file",0x67b);
      }
    }
    fclose(pFVar1);
    cVar5 = DAT_00a5d20d;
  }
  sVar2 = strlen(&DAT_000c92bc);
  cVar6 = (&DAT_000c92bb)[sVar2];
  if (cVar6 == '\n') {
    (&DAT_000c92bb)[sVar2] = 0;
    sVar2 = strlen(&DAT_000c92bc);
    cVar6 = (&DAT_000c92bb)[sVar2];
  }
  if (cVar6 == '\r') {
    (&DAT_000c92bb)[sVar2] = 0;
  }
  if (((cVar5 != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
    snprintf(acStack_2018,0x2000,"Miner compile time: %s V:%s type: %s sn :%s",&DAT_000c8fbc,
             &DAT_000c91bc,&DAT_000c90bc,&DAT_000c92bc);
    FUN_0004948c(3,acStack_2018,0);
  }
  return;
}

