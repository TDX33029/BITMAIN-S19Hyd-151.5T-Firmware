// FUN_0003c5e4 @ 0003c5e4  size=1348  callers=1
// program: bmminer


char * FUN_0003c5e4(char *param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  size_t sVar6;
  hostent *phVar7;
  int iVar8;
  ssize_t sVar9;
  long lVar10;
  char *__dest;
  uint param4;
  undefined4 local_3820;
  undefined4 local_381c;
  char acStack_3818 [1023];
  char acStack_3419 [1025];
  char acStack_3018 [4096];
  sockaddr local_2018;
  undefined4 local_2008;
  undefined4 uStack_2004;
  undefined2 local_2000;
  
  memset(acStack_3018,0,0x1000);
  memset(acStack_3818,0,0x400);
  memset(acStack_3419 + 1,0,0x400);
  if (param_1 == (char *)0x0) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (4 < DAT_000be644)) {
      local_2018._0_4_ = 0x206c7275;
      builtin_strncpy(local_2018.sa_data + 2,"is null!",8);
      local_2018.sa_data[10] = '\n';
      local_2018.sa_data[0xb] = '\0';
      FUN_0004948c(5,&local_2018,0);
      return (char *)0x0;
    }
  }
  else {
    iVar3 = strncmp(param_1,"http://",7);
    if (iVar3 != 0) {
      if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 5)) {
        return (char *)0x0;
      }
      local_2018._0_4_ = 0x73726170;
      builtin_strncpy(local_2018.sa_data + 2,"e url failed",0xc);
      local_2008 = CONCAT13(local_2008._3_1_,0xa21);
      FUN_0004948c(5,&local_2018,0);
      return (char *)0x0;
    }
    param_1 = param_1 + 7;
    pcVar4 = strchr(param_1,0x2f);
    sVar5 = strlen(param_1);
    if (pcVar4 == (char *)0x0) {
      memcpy(acStack_3818,param_1,sVar5);
      acStack_3818[sVar5] = '\0';
    }
    else {
      sVar6 = strlen(pcVar4);
      memcpy(acStack_3818,param_1,sVar5 - sVar6);
      cVar1 = pcVar4[1];
      acStack_3818[sVar5 - sVar6] = '\0';
      if (cVar1 != '\0') {
        memcpy(acStack_3419 + 1,pcVar4 + 1,sVar6 - 1);
        acStack_3419[sVar6] = '\0';
      }
    }
    pcVar4 = strchr(acStack_3818,0x3a);
    if (pcVar4 == (char *)0x0) {
      param4 = 0x50;
    }
    else {
      *pcVar4 = '\0';
      param4 = strtol(pcVar4 + 1,(char **)0x0,10);
    }
    phVar7 = gethostbyname(acStack_3818);
    if (phVar7 != (hostent *)0x0) {
      uVar2 = (ushort)((param4 & 0xff) << 8) | (ushort)(param4 >> 8) & 0xff;
      local_2018.sa_data[0] = (char)uVar2;
      local_2018.sa_data[1] = (char)(uVar2 >> 8);
      local_2018.sa_family = 2;
      local_2018.sa_data._2_4_ = *(undefined4 *)*phVar7->h_addr_list;
      iVar3 = socket(2,1,0);
      if (iVar3 != -1) {
        local_3820 = 10;
        local_381c = 0;
        iVar8 = setsockopt(iVar3,1,0x15,&local_3820,8);
        if (((iVar8 == 0) && (iVar8 = setsockopt(iVar3,1,0x14,&local_3820,8), iVar8 == 0)) &&
           ((iVar8 = connect(iVar3,&local_2018,0x10), iVar8 != -1 && (-1 < iVar3)))) {
          sprintf(acStack_3018,"GET /%s HTTP/1.1\r\nHOST: %s:%d\r\nAccept: */*\r\n\r\n",
                  acStack_3419 + 1,acStack_3818,param4);
          sVar5 = strlen(acStack_3018);
          if (sVar5 != 0) {
            iVar8 = 0;
            do {
              sVar9 = send(iVar3,acStack_3018 + iVar8,sVar5 - iVar8,0);
              iVar8 = iVar8 + sVar9;
              if (sVar9 == -1) {
                if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 5)) {
                  return (char *)0x0;
                }
                pcVar4 = "tcp client send failed\n";
                goto LAB_0003c838;
              }
            } while (iVar8 < (int)sVar5);
          }
          iVar8 = 0;
          while (sVar9 = recv(iVar3,acStack_3018 + iVar8,0xfff - iVar8,0), 0 < sVar9) {
            iVar8 = iVar8 + sVar9;
          }
          if (iVar8 != 0) {
            close(iVar3);
            pcVar4 = strstr(acStack_3018,"HTTP/");
            if (pcVar4 == (char *)0x0) {
              return (char *)0x0;
            }
            lVar10 = strtol(pcVar4 + 9,(char **)0x0,10);
            if (lVar10 != 200) {
              return (char *)0x0;
            }
            pcVar4 = strstr(acStack_3018,"\r\n\r\n");
            if (pcVar4 == (char *)0x0) {
              return (char *)0x0;
            }
            sVar5 = strlen(pcVar4);
            __dest = malloc(sVar5 + 1);
            if (__dest == (char *)0x0) {
              return (char *)0x0;
            }
            strcpy(__dest,pcVar4 + 4);
            return __dest;
          }
          if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 5)) {
            return (char *)0x0;
          }
          pcVar4 = "tcp client recv failed\n";
LAB_0003c838:
          local_2018._0_4_ = *(undefined4 *)pcVar4;
          local_2018.sa_data._2_4_ = *(undefined4 *)(pcVar4 + 4);
          local_2018.sa_data._6_4_ = *(undefined4 *)(pcVar4 + 8);
          local_2018.sa_data._10_4_ = *(undefined4 *)(pcVar4 + 0xc);
          local_2008 = *(undefined4 *)(pcVar4 + 0x10);
          uStack_2004 = *(undefined4 *)(pcVar4 + 0x14);
          FUN_0004948c(5,&local_2018,0);
          return (char *)0x0;
        }
      }
    }
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (4 < DAT_000be644)) {
      local_2018._0_4_ = 0x20706374;
      builtin_strncpy(local_2018.sa_data + 2,"client creat",0xc);
      local_2008._0_1_ = 'e';
      local_2008._1_1_ = ' ';
      local_2008._2_1_ = 'f';
      local_2008._3_1_ = 'a';
      uStack_2004._0_1_ = 'i';
      uStack_2004._1_1_ = 'l';
      uStack_2004._2_1_ = 'e';
      uStack_2004._3_1_ = 'd';
      local_2000 = 10;
      FUN_0004948c(5,&local_2018,0);
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}

