// FUN_0003daf0 @ 0003daf0  size=788  callers=2
// program: cgminer


void FUN_0003daf0(void)

{
  FILE *__stream;
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char acStack_918 [256];
  char acStack_818 [2048];
  
  __stream = fopen64(DAT_00068908,"rb");
  memset(acStack_918,0,0x100);
  if (__stream == (FILE *)0x0) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf(acStack_818,0x800,"Open miner version file %s error",DAT_00068908);
      FUN_0001dd98(3,acStack_818,0);
      goto LAB_0003dcd4;
    }
  }
  else {
    sVar1 = fread(acStack_918,1,0x100,__stream);
    if ((int)sVar1 < 1) {
      if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3))
      goto LAB_0003dd38;
      snprintf(acStack_818,0x800,"Read miner version file %s error %d",DAT_00068908,sVar1);
      FUN_0001dd98(3,acStack_818,0);
    }
    else {
      pcVar2 = strchr(acStack_918,10);
      if (pcVar2 == (char *)0x0) {
        strcpy(&DAT_0006a26c,acStack_918);
      }
      else {
        FUN_00023324(&DAT_0006a26c,acStack_918,(int)pcVar2 - (int)acStack_918,"cgminer.c",
                     "read_version_file",0x2d7e);
        pcVar2 = stpcpy(acStack_918,pcVar2 + 1);
        pcVar3 = strchr(acStack_918,10);
        if (pcVar3 == (char *)0x0) {
          memcpy(&DAT_0006a36c,acStack_918,(size_t)(pcVar2 + (1 - (int)acStack_918)));
        }
        else {
          FUN_00023324(&DAT_0006a36c,acStack_918,(int)pcVar3 - (int)acStack_918,"cgminer.c",
                       "read_version_file",0x2d87);
        }
      }
      sVar1 = strlen(&DAT_0006a26c);
      cVar4 = *(char *)((int)&DAT_0006a268 + sVar1 + 3);
      if (cVar4 == '\n') {
        *(undefined1 *)((int)&DAT_0006a268 + sVar1 + 3) = 0;
        sVar1 = strlen(&DAT_0006a26c);
        cVar4 = *(char *)((int)&DAT_0006a268 + sVar1 + 3);
      }
      if (cVar4 == '\r') {
        *(undefined1 *)((int)&DAT_0006a268 + sVar1 + 3) = 0;
      }
      sVar1 = strlen(&DAT_0006a36c);
      cVar4 = (&DAT_0006a36b)[sVar1];
      if (cVar4 == '\n') {
        (&DAT_0006a36b)[sVar1] = 0;
        sVar1 = strlen(&DAT_0006a36c);
        cVar4 = (&DAT_0006a36b)[sVar1];
      }
      if (cVar4 == '\r') {
        (&DAT_0006a36b)[sVar1] = 0;
      }
    }
LAB_0003dcd4:
    if ((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) goto LAB_0003dcf4;
  }
LAB_0003dd38:
  if (DAT_00067848 < 3) {
    return;
  }
LAB_0003dcf4:
  snprintf(acStack_818,0x800,"Miner compile time: %s type: %s",&DAT_0006a26c,&DAT_0006a36c);
  FUN_0001dd98(3,acStack_818,0);
  return;
}

