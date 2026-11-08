// FUN_0004e094 @ 0004e094  size=688  callers=1
// program: bmminer


void FUN_0004e094(char *param_1)

{
  bool bVar1;
  FILE *__stream;
  int iVar2;
  size_t sVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  char acStack_25a8 [127];
  char acStack_2529 [129];
  char acStack_24a8 [1152];
  char acStack_2028 [8196];
  
  memset(acStack_2529 + 1,0,0x500);
  memset(acStack_25a8,0,0x80);
  __stream = fopen(DAT_000c8d88,"r");
  if (__stream != (FILE *)0x0) {
    iVar6 = 0;
    bVar1 = false;
    while( true ) {
      iVar4 = iVar6 * 0x80;
      pcVar7 = acStack_2529 + iVar4 + 1;
      iVar2 = feof(__stream);
      if (iVar2 != 0) break;
      bVar9 = iVar6 == 10;
      iVar6 = iVar6 + 1;
      if (bVar9) {
        fclose(__stream);
        if (!bVar1) {
          return;
        }
        iVar6 = 9;
        memset(acStack_25a8,0,0x80);
        snprintf(acStack_25a8,0x80,"echo %s > %s",acStack_2529 + 1,DAT_000c8d88);
        system(acStack_25a8);
        goto LAB_0004e2ec;
      }
      fgets(pcVar7,0x80,__stream);
      sVar3 = strlen(pcVar7);
      iVar8 = sVar3 - 1;
      iVar2 = iVar8 + iVar4 + -0x2028;
      cVar5 = acStack_2529[iVar2 + 0x2029];
      if (cVar5 == '\n') {
        acStack_2529[iVar2 + 0x2029] = '\0';
        sVar3 = strlen(pcVar7);
        iVar8 = sVar3 - 1;
        cVar5 = acStack_2529[iVar8 + iVar4 + -0x2028 + 0x2029];
      }
      if (cVar5 == '\r') {
        acStack_2529[iVar8 + iVar4 + 1] = '\0';
      }
      iVar4 = __isoc99_sscanf(pcVar7,"Antminer %s",acStack_25a8);
      if (iVar4 == 1) {
        sVar3 = strlen(param_1);
        iVar4 = strncmp(acStack_25a8,param_1,sVar3);
        if (iVar4 != 0) {
          snprintf(pcVar7,0x80,"Antminer %s",param_1);
          bVar1 = true;
        }
      }
    }
    fclose(__stream);
    if (bVar1) {
      iVar6 = iVar6 + -1;
      memset(acStack_25a8,0,0x80);
      snprintf(acStack_25a8,0x80,"echo %s > %s",acStack_2529 + 1,DAT_000c8d88);
      system(acStack_25a8);
      if (1 < iVar6) {
LAB_0004e2ec:
        iVar4 = 1;
        pcVar7 = acStack_24a8;
        do {
          iVar4 = iVar4 + 1;
          memset(acStack_25a8,0,0x80);
          snprintf(acStack_25a8,0x80,"echo %s >> %s",pcVar7,DAT_000c8d88);
          system(acStack_25a8);
          pcVar7 = pcVar7 + 0x80;
        } while (iVar4 < iVar6);
      }
      if (3 < DAT_000be63c) {
        snprintf(acStack_2028,0x2000,"updated miner type to: Antminer %s\n",param_1);
        FUN_0004948c(3,acStack_2028,0);
      }
    }
  }
  return;
}

