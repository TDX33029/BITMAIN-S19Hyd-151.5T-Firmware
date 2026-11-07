// FUN_00027970 @ 00027970  size=1348  callers=2
// program: bmminer


char * FUN_00027970(char *param_1)

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
  undefined4 local_2020;
  undefined4 local_201c;
  char acStack_2018 [1023];
  char acStack_1c19 [1025];
  sockaddr local_1818;
  undefined4 local_1808;
  undefined4 uStack_1804;
  undefined2 local_1800;
  char acStack_1018 [4096];
  
  memset(acStack_1018,0,0x1000);
  memset(acStack_2018,0,0x400);
  memset(acStack_1c19 + 1,0,0x400);
  if (param_1 == (char *)0x0) {
    if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (4 < DAT_00087bc4)) {
      local_1818._0_4_ = 0x206c7275;
      builtin_strncpy(local_1818.sa_data + 2,"is null!",8);
      local_1818.sa_data[10] = '\n';
      local_1818.sa_data[0xb] = '\0';
      FUN_00032218(5,&local_1818,0);
      return (char *)0x0;
    }
  }
  else {
    iVar3 = strncmp(param_1,"http://",7);
    if (iVar3 != 0) {
      if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 5)) {
        return (char *)0x0;
      }
      local_1818._0_4_ = 0x73726170;
      builtin_strncpy(local_1818.sa_data + 2,"e url failed",0xc);
      local_1808 = CONCAT13(local_1808._3_1_,0xa21);
      FUN_00032218(5,&local_1818,0);
      return (char *)0x0;
    }
    param_1 = param_1 + 7;
    pcVar4 = strchr(param_1,0x2f);
    sVar5 = strlen(param_1);
    if (pcVar4 == (char *)0x0) {
      memcpy(acStack_2018,param_1,sVar5);
      acStack_2018[sVar5] = '\0';
    }
    else {
      sVar6 = strlen(pcVar4);
      memcpy(acStack_2018,param_1,sVar5 - sVar6);
      cVar1 = pcVar4[1];
      acStack_2018[sVar5 - sVar6] = '\0';
      if (cVar1 != '\0') {
        memcpy(acStack_1c19 + 1,pcVar4 + 1,sVar6 - 1);
        acStack_1c19[sVar6] = '\0';
      }
    }
    pcVar4 = strchr(acStack_2018,0x3a);
    if (pcVar4 == (char *)0x0) {
      param4 = 0x50;
    }
    else {
      *pcVar4 = '\0';
      param4 = strtol(pcVar4 + 1,(char **)0x0,10);
    }
    phVar7 = gethostbyname(acStack_2018);
    if (phVar7 != (hostent *)0x0) {
      uVar2 = (ushort)((param4 & 0xff) << 8) | (ushort)(param4 >> 8) & 0xff;
      local_1818.sa_data[0] = (char)uVar2;
      local_1818.sa_data[1] = (char)(uVar2 >> 8);
      local_1818.sa_family = 2;
      local_1818.sa_data._2_4_ = *(undefined4 *)*phVar7->h_addr_list;
      iVar3 = socket(2,1,0);
      if (iVar3 != -1) {
        local_2020 = 10;
        local_201c = 0;
        iVar8 = setsockopt(iVar3,1,0x15,&local_2020,8);
        if (((iVar8 == 0) && (iVar8 = setsockopt(iVar3,1,0x14,&local_2020,8), iVar8 == 0)) &&
           ((iVar8 = connect(iVar3,&local_1818,0x10), iVar8 != -1 && (-1 < iVar3)))) {
          sprintf(acStack_1018,"GET /%s HTTP/1.1\r\nHOST: %s:%d\r\nAccept: */*\r\n\r\n",
                  acStack_1c19 + 1,acStack_2018,param4);
          sVar5 = strlen(acStack_1018);
          if (sVar5 != 0) {
            iVar8 = 0;
            do {
              sVar9 = send(iVar3,acStack_1018 + iVar8,sVar5 - iVar8,0);
              iVar8 = iVar8 + sVar9;
              if (sVar9 == -1) {
                if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 5)) {
                  return (char *)0x0;
                }
                pcVar4 = "tcp client send failed\n";
                goto LAB_00027bd0;
              }
            } while (iVar8 < (int)sVar5);
          }
          iVar8 = 0;
          while (sVar9 = recv(iVar3,acStack_1018 + iVar8,0xfff - iVar8,0), 0 < sVar9) {
            iVar8 = iVar8 + sVar9;
          }
          if (iVar8 != 0) {
            close(iVar3);
            pcVar4 = strstr(acStack_1018,"HTTP/");
            if (pcVar4 == (char *)0x0) {
              return (char *)0x0;
            }
            lVar10 = strtol(pcVar4 + 9,(char **)0x0,10);
            if (lVar10 != 200) {
              return (char *)0x0;
            }
            pcVar4 = strstr(acStack_1018,"\r\n\r\n");
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
          if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 5)) {
            return (char *)0x0;
          }
          pcVar4 = "tcp client recv failed\n";
LAB_00027bd0:
          local_1818._0_4_ = *(undefined4 *)pcVar4;
          local_1818.sa_data._2_4_ = *(undefined4 *)(pcVar4 + 4);
          local_1818.sa_data._6_4_ = *(undefined4 *)(pcVar4 + 8);
          local_1818.sa_data._10_4_ = *(undefined4 *)(pcVar4 + 0xc);
          local_1808 = *(undefined4 *)(pcVar4 + 0x10);
          uStack_1804 = *(undefined4 *)(pcVar4 + 0x14);
          FUN_00032218(5,&local_1818,0);
          return (char *)0x0;
        }
      }
    }
    if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (4 < DAT_00087bc4)) {
      local_1818._0_4_ = 0x20706374;
      builtin_strncpy(local_1818.sa_data + 2,"client creat",0xc);
      local_1808._0_1_ = 'e';
      local_1808._1_1_ = ' ';
      local_1808._2_1_ = 'f';
      local_1808._3_1_ = 'a';
      uStack_1804._0_1_ = 'i';
      uStack_1804._1_1_ = 'l';
      uStack_1804._2_1_ = 'e';
      uStack_1804._3_1_ = 'd';
      local_1800 = 10;
      FUN_00032218(5,&local_1818,0);
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}

