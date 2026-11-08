// FUN_00052a08 @ 00052a08  size=1628  callers=1
// program: bmminer


void FUN_00052a08(void)

{
  FILE *pFVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  size_t sVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int *piVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char acStack_2228 [512];
  char local_2028 [20];
  uint local_2014;
  char acStack_2010 [8172];
  
  FUN_00052850();
  pFVar1 = fopen("/nvdata/mbin.data","r+");
  if (pFVar1 == (FILE *)0x0) {
    pFVar1 = fopen("/nvdata/mbin.data","w+");
    if (pFVar1 != (FILE *)0x0) {
      if (3 < DAT_000be63c) {
        pcVar2 = "None";
        if (DAT_000c92bc == '\0') {
          pcVar14 = "None";
        }
        else {
          pcVar14 = &DAT_000c92bc;
        }
        iVar7 = FUN_0002a6e0();
        iVar8 = FUN_0002a504();
        iVar9 = FUN_0002a514();
        iVar10 = FUN_0002a524();
        pcVar13 = &DAT_008c70d8;
        pcVar4 = &DAT_008c7118;
        pcVar15 = &DAT_008c7158;
        if (DAT_008c70d8 == '\0') {
          pcVar13 = "None";
        }
        pcVar11 = &DAT_008c7198;
        if (DAT_008c7118 == '\0') {
          pcVar4 = "None";
        }
        if (DAT_008c7158 == '\0') {
          pcVar15 = "None";
        }
        if (DAT_008c7198 == '\0') {
          pcVar11 = "None";
        }
        if (DAT_008c71d8 != '\0') {
          pcVar2 = &DAT_008c71d8;
        }
        snprintf(local_2028,0x2000,
                 "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s"
                 ,&DAT_000c8fbc,&DAT_000c90bc,pcVar14,iVar7,iVar8,iVar9,iVar10,pcVar13,pcVar4,
                 pcVar15,pcVar11,pcVar2);
        FUN_0004a06c(3,local_2028,0);
        if (3 < DAT_000be63c) {
          snprintf(local_2028,0x2000,"InitStat:%d",DAT_008c7048);
          FUN_0004a06c(3,local_2028,0);
        }
      }
LAB_00052d2c:
      pcVar14 = "None";
      pcVar2 = pcVar14;
      if (DAT_000c92bc != '\0') {
        pcVar2 = &DAT_000c92bc;
      }
      iVar7 = FUN_0002a6e0();
      iVar8 = FUN_0002a504();
      iVar9 = FUN_0002a514();
      iVar10 = FUN_0002a524();
      pcVar4 = &DAT_008c70d8;
      if (DAT_008c70d8 == '\0') {
        pcVar4 = "None";
      }
      if (DAT_008c7118 == '\0') {
        pcVar13 = "None";
      }
      else {
        pcVar13 = &DAT_008c7118;
      }
      if (DAT_008c7158 == '\0') {
        pcVar15 = "None";
      }
      else {
        pcVar15 = &DAT_008c7158;
      }
      if (DAT_008c7198 == '\0') {
        pcVar11 = "None";
      }
      else {
        pcVar11 = &DAT_008c7198;
      }
      if (DAT_008c71d8 != '\0') {
        pcVar14 = &DAT_008c71d8;
      }
      fprintf(pFVar1,
              "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s"
              ,&DAT_000c8fbc,&DAT_000c90bc,pcVar2,iVar7,iVar8,iVar9,iVar10,pcVar4,pcVar13,pcVar15,
              pcVar11,pcVar14);
      fflush(pFVar1);
      fclose(pFVar1);
      return;
    }
    if (3 < DAT_000be63c) {
      piVar12 = __errno_location();
      iVar7 = *piVar12;
      pcVar2 = strerror(iVar7);
      snprintf(local_2028,0x2000,"file op errno = %d reason = %s",iVar7,pcVar2);
      FUN_0004948c(3,local_2028,0);
    }
  }
  else {
    memset(acStack_2228,0,0x200);
    fgets(acStack_2228,0x1ff,pFVar1);
    pcVar2 = strtok(acStack_2228,",");
    while (pcVar2 != (char *)0x0) {
      pcVar14 = &DAT_000be91d;
      do {
        while( true ) {
          pcVar13 = *(char **)(pcVar14 + -0x15);
          pcVar4 = strstr(pcVar2,pcVar13);
          if (pcVar4 != (char *)0x0) break;
LAB_00052a94:
          pcVar14 = pcVar14 + 0x58;
          if (pcVar14 == (char *)((int)&DAT_000bed38 + 5)) goto LAB_00052b04;
        }
        pcVar4 = strstr(*(char **)(pcVar14 + -0x11),"str");
        sVar5 = strlen(pcVar13);
        if (pcVar4 != (char *)0x0) {
          sVar3 = strlen(pcVar2);
          strncpy(pcVar14,pcVar2 + sVar5,sVar3 - sVar5);
          goto LAB_00052a94;
        }
        pcVar4 = pcVar14 + 0x58;
        lVar6 = strtol(pcVar2 + sVar5,(char **)0x0,10);
        pcVar14[-1] = (char)lVar6;
        pcVar14 = pcVar4;
      } while (pcVar4 != (char *)((int)&DAT_000bed38 + 5));
LAB_00052b04:
      pcVar2 = strtok((char *)0x0,",");
    }
    iVar7 = FUN_000528ac();
    if (iVar7 == 0) {
      if (3 < DAT_000be63c) {
        snprintf(local_2028,0x2000,"InitStat:%d",DAT_008c7048);
        FUN_0004a06c(3,local_2028,0);
        return;
      }
    }
    else {
      fclose(pFVar1);
      pFVar1 = fopen("/nvdata/mbin.data","w");
      if (pFVar1 != (FILE *)0x0) {
        if (3 < DAT_000be63c) {
          builtin_strncpy(local_2028,"update droa bin data",0x14);
          local_2014 = local_2014 & 0xffffff00;
          FUN_0004948c(3,local_2028,0);
          if (3 < DAT_000be63c) {
            pcVar2 = "None";
            if (DAT_000c92bc == '\0') {
              pcVar14 = "None";
            }
            else {
              pcVar14 = &DAT_000c92bc;
            }
            iVar7 = FUN_0002a6e0();
            iVar8 = FUN_0002a504();
            iVar9 = FUN_0002a514();
            iVar10 = FUN_0002a524();
            pcVar4 = &DAT_008c70d8;
            pcVar13 = &DAT_008c7118;
            pcVar15 = &DAT_008c7158;
            if (DAT_008c70d8 == '\0') {
              pcVar4 = "None";
            }
            if (DAT_008c7118 == '\0') {
              pcVar13 = "None";
            }
            if (DAT_008c7158 == '\0') {
              pcVar15 = "None";
            }
            if (DAT_008c7198 == '\0') {
              pcVar11 = "None";
            }
            else {
              pcVar11 = &DAT_008c7198;
            }
            if (DAT_008c71d8 != '\0') {
              pcVar2 = &DAT_008c71d8;
            }
            snprintf(local_2028,0x2000,
                     "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s"
                     ,&DAT_000c8fbc,&DAT_000c90bc,pcVar14,iVar7,iVar8,iVar9,iVar10,pcVar4,pcVar13,
                     pcVar15,pcVar11,pcVar2);
            FUN_0004a06c(3,local_2028,0);
            if (3 < DAT_000be63c) {
              snprintf(local_2028,0x2000,"InitStat:%d",DAT_008c7048);
              FUN_0004a06c(3,local_2028,0);
            }
          }
        }
        goto LAB_00052d2c;
      }
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2028,"droa log miner bin d",0x14);
        local_2014._0_1_ = 'a';
        local_2014._1_1_ = 't';
        local_2014._2_1_ = 'a';
        local_2014._3_1_ = ' ';
        builtin_strncpy(acStack_2010,"update failed",0xe);
        FUN_0004948c(3,local_2028,0);
      }
    }
  }
  return;
}

