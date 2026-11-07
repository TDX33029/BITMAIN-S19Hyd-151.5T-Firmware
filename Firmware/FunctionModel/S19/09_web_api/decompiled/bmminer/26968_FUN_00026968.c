// FUN_00026968 @ 00026968  size=2924  callers=1
// program: bmminer


int FUN_00026968(int param_1)

{
  char *__s;
  char *pcVar1;
  size_t param2;
  int iVar2;
  int iVar3;
  size_t sVar4;
  ssize_t sVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char local_5850 [4];
  socklen_t local_584c;
  char local_5848 [8];
  undefined4 local_5840;
  undefined4 local_583c;
  sockaddr sStack_5838;
  char local_5828 [16];
  undefined4 local_5818;
  undefined4 uStack_5814;
  uint local_5810;
  char acStack_580c [12];
  uint local_5800;
  uint local_57fc;
  char local_57f8 [2000];
  char local_5028 [10240];
  char local_2828 [20];
  undefined4 local_2814;
  uint local_2810;
  undefined4 local_280c;
  uint local_2808;
  char acStack_2804 [10208];
  
  iVar7 = 0;
  local_5840 = 3;
  local_583c = 0;
  __s = calloc(1,0x6000);
  pcVar9 = local_5028;
  local_5850[0] = '\r';
  local_5850[1] = '\n';
  local_584c = 0;
  local_5850[2] = 0;
  builtin_strncpy(local_5848,"\r\n\r\n",5);
  memset(pcVar9,0,0x2800);
  do {
    if (DAT_00089214 != '\0') goto LAB_00026a48;
    sVar5 = recvfrom(param_1,pcVar9,0x27ff - iVar7,0,&sStack_5838,&local_584c);
    iVar7 = iVar7 + sVar5;
    if (sVar5 < 1) {
      close(param_1);
      if ((DAT_0048d36e != '\0') &&
         (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
        builtin_strncpy(local_2828,":statusServiceThread",0x14);
        local_2814._0_1_ = ' ';
        local_2814._1_1_ = 'r';
        local_2814._2_1_ = 'e';
        local_2814._3_1_ = 'c';
        local_2810._0_1_ = 'v';
        local_2810._1_1_ = 'f';
        local_2810._2_1_ = 'r';
        local_2810._3_1_ = 'o';
        local_280c._0_1_ = 'm';
        local_280c._1_1_ = '<';
        local_280c._2_1_ = '=';
        local_280c._3_1_ = '0';
        local_2808 = local_2808 & 0xffffff00;
        FUN_00032218(7,local_2828,0);
      }
      goto LAB_00026b5c;
    }
    pcVar9 = local_5028 + iVar7;
    if (0x27fe < iVar7) {
      close(param_1);
      if ((DAT_0048d36e != '\0') &&
         (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
        builtin_strncpy(local_2828,"BUFSIZE is too small",0x14);
        local_2814._0_1_ = '!';
        local_2814._1_1_ = '\0';
        FUN_00032218(7,local_2828,0);
      }
      goto LAB_00026b5c;
    }
    pcVar1 = strstr(local_5028,local_5848);
  } while (pcVar1 == (char *)0x0);
  if (DAT_0048d36e != '\0') {
    if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 7)) {
LAB_00026a70:
      if ((DAT_0048d36d != '\0') || (6 < DAT_00087bc4)) {
LAB_00026a90:
        snprintf(local_2828,0x800,"get http=%s",local_5028);
        FUN_00032218(7,local_2828,0);
      }
    }
    else {
      builtin_strncpy(local_2828,"find http request en",0x14);
      local_2814._0_1_ = 'd';
      local_2814._1_1_ = ' ';
      local_2814._2_1_ = 'f';
      local_2814._3_1_ = 'l';
      local_2810._0_1_ = 'a';
      local_2810._1_1_ = 'g';
      local_2810._2_1_ = '!';
      local_2810._3_1_ = '\0';
      FUN_00032218(7,local_2828,0);
LAB_00026a48:
      if (DAT_0048d36e != '\0') {
        if (DAT_0071e84c == '\0') goto LAB_00026a70;
        goto LAB_00026a90;
      }
    }
  }
  if ((((local_5028[0] != 'G') || (local_5028[1] != 'E')) || (local_5028[2] != 'T')) ||
     (local_5028[3] != ' ')) {
    close(param_1);
    if ((DAT_0048d36e != '\0') &&
       (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
      builtin_strncpy(local_2828,"statusServiceThread ",0x14);
      local_2814._0_1_ = 'n';
      local_2814._1_1_ = 'o';
      local_2814._2_1_ = 't';
      local_2814._3_1_ = ' ';
      local_2810._0_1_ = 's';
      local_2810._1_1_ = 'u';
      local_2810._2_1_ = 'p';
      local_2810._3_1_ = 'p';
      local_280c._0_1_ = 'o';
      local_280c._1_1_ = 'r';
      local_280c._2_1_ = 't';
      local_280c._3_1_ = ' ';
      local_2808._0_1_ = 'h';
      local_2808._1_1_ = 't';
      local_2808._2_1_ = 't';
      local_2808._3_1_ = 'p';
      builtin_strncpy(acStack_2804," command",9);
      FUN_00032218(7,local_2828,0);
    }
    goto LAB_00026b5c;
  }
  iVar7 = setsockopt(param_1,1,0x15,&local_5840,8);
  if (iVar7 == 0) {
    iVar7 = setsockopt(param_1,1,0x14,&local_5840,8);
    if (iVar7 == 0) {
      if (DAT_00089218 == (code *)0x0) {
        if ((DAT_0048d36e != '\0') &&
           (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
          builtin_strncpy(local_2828,"No 6060 test case fo",0x14);
          local_2814._0_1_ = 'u';
          local_2814._1_1_ = 'n';
          local_2814._2_1_ = 'd';
          local_2814._3_1_ = '.';
          local_2810 = local_2810 & 0xffffff00;
          FUN_00032218(7,local_2828,0);
        }
      }
      else {
        iVar7 = (*DAT_00089218)(local_5028,__s,0x6000);
        if (iVar7 != 0) {
          close(param_1);
          if ((DAT_0048d36e != '\0') &&
             (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
            builtin_strncpy(local_2828,"statusServiceThread ",0x14);
            local_2814._0_1_ = 'e';
            local_2814._1_1_ = 'x';
            local_2814._2_1_ = 'i';
            local_2814._3_1_ = 't';
            local_2810._0_1_ = ' ';
            local_2810._1_1_ = 'f';
            local_2810._2_1_ = 'o';
            local_2810._3_1_ = 'r';
            local_280c._0_1_ = ' ';
            local_280c._1_1_ = 'E';
            local_280c._2_1_ = 'r';
            local_280c._3_1_ = 'r';
            local_2808._0_1_ = 'o';
            local_2808._1_1_ = 'r';
            local_2808._2_1_ = ' ';
            local_2808._3_1_ = 'c';
            builtin_strncpy(acStack_2804,"md!",4);
            FUN_00032218(7,local_2828,0);
          }
          goto LAB_00026b5c;
        }
      }
      param2 = strlen(__s);
      iVar7 = sprintf(local_2828,"HTTP/1.0  200  OK%s",local_5850);
      iVar2 = sprintf(local_2828 + iVar7,"Server: SearchFreqServer%s",local_5850);
      iVar3 = sprintf(local_2828 + iVar7 + iVar2,"Cache-Control: no-cache%s",local_5850);
      iVar3 = iVar7 + iVar2 + iVar3;
      iVar7 = sprintf(local_2828 + iVar3,"Pragma: no-cache%s",local_5850);
      iVar3 = iVar3 + iVar7;
      iVar7 = sprintf(local_2828 + iVar3,"Content-Type: text/plain%s",local_5850);
      iVar3 = iVar3 + iVar7;
      iVar7 = sprintf(local_2828 + iVar3,"Content-Length: %d%s",param2,local_5850);
      sprintf(local_2828 + iVar3 + iVar7,"Connection: Keep-Alive%s",local_5848);
      if (DAT_0048d36e == '\0') {
        if (DAT_00089214 == '\0') goto LAB_00026f3c;
      }
      else {
        if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 7)) {
          if (DAT_00089214 == '\0') {
LAB_00026f3c:
            sVar4 = strlen(local_2828);
            uVar8 = 0;
            do {
              sVar5 = send(param_1,local_2828 + uVar8,sVar4 - uVar8,0);
              if (sVar5 == -1) {
                piVar6 = __errno_location();
                if (*piVar6 != 0xb) {
LAB_00026fc0:
                  close(param_1);
                  if ((DAT_0048d36e != '\0') &&
                     (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
                    builtin_strncpy(local_5828,"statusServiceThr",0x10);
                    local_5818._0_1_ = 'e';
                    local_5818._1_1_ = 'a';
                    local_5818._2_1_ = 'd';
                    local_5818._3_1_ = ' ';
                    uStack_5814._0_1_ = 's';
                    uStack_5814._1_1_ = 'e';
                    uStack_5814._2_1_ = 'n';
                    uStack_5814._3_1_ = 'd';
                    local_5810._0_1_ = ' ';
                    local_5810._1_1_ = 'h';
                    local_5810._2_1_ = 't';
                    local_5810._3_1_ = 't';
                    builtin_strncpy(acStack_580c,"p response e",0xc);
                    local_5800._0_1_ = 'r';
                    local_5800._1_1_ = 'r';
                    local_5800._2_1_ = 'o';
                    local_5800._3_1_ = 'r';
                    local_57fc = local_57fc & 0xffffff00;
                    FUN_00032218(7,local_5828,0);
                  }
                  goto LAB_00026b64;
                }
                if ((DAT_0048d36e != '\0') &&
                   (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
                  builtin_strncpy(local_5828,"statusServiceThr",0x10);
                  local_5818._0_1_ = 'e';
                  local_5818._1_1_ = 'a';
                  local_5818._2_1_ = 'd';
                  local_5818._3_1_ = ' ';
                  uStack_5814._0_1_ = 's';
                  uStack_5814._1_1_ = 'e';
                  uStack_5814._2_1_ = 'n';
                  uStack_5814._3_1_ = 'd';
                  local_5810._0_1_ = ' ';
                  local_5810._1_1_ = 'h';
                  local_5810._2_1_ = 't';
                  local_5810._3_1_ = 't';
                  builtin_strncpy(acStack_580c,"p timeout, t",0xc);
                  local_5800._0_1_ = 'r';
                  local_5800._1_1_ = 'y';
                  local_5800._2_1_ = ' ';
                  local_5800._3_1_ = 'a';
                  local_57fc._0_1_ = 'g';
                  local_57fc._1_1_ = 'a';
                  local_57fc._2_1_ = 'i';
                  local_57fc._3_1_ = 'n';
                  builtin_strncpy(local_57f8,"...",4);
                  FUN_00032218(7,local_5828,0);
                }
                usleep(100000);
              }
              else {
                if (sVar5 < 1) goto LAB_00026fc0;
                uVar8 = uVar8 + sVar5;
              }
              sVar4 = strlen(local_2828);
            } while ((uVar8 < sVar4) && (DAT_00089214 == '\0'));
            goto LAB_00027090;
          }
        }
        else {
          builtin_strncpy(local_5828,"send http respon",0x10);
          local_5818._0_1_ = 's';
          local_5818._1_1_ = 'e';
          local_5818._2_1_ = '.';
          local_5818._3_1_ = '.';
          uStack_5814._0_1_ = '.';
          uStack_5814._1_1_ = '\n';
          uStack_5814._2_1_ = '\0';
          FUN_00032218(7,local_5828,0);
          if (DAT_00089214 == '\0') goto LAB_00026f3c;
LAB_00027090:
          if (DAT_0048d36e == '\0') goto LAB_000270a4;
        }
        if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)) {
          builtin_strncpy(local_5828,"send http data..",0x10);
          local_5818._0_1_ = '.';
          local_5818._1_1_ = '\0';
          FUN_00032218(7,local_5828,0);
        }
      }
LAB_000270a4:
      iVar7 = 0;
      while( true ) {
        sVar5 = send(param_1,__s + iVar7,param2 - iVar7,0);
        if ((DAT_0048d36e != '\0') &&
           (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
          snprintf(local_5828,0x800,"send http data ret=%d",sVar5);
          FUN_00032218(7,local_5828,0);
        }
        if (sVar5 < 1) break;
        iVar7 = iVar7 + sVar5;
        if (((int)param2 <= iVar7) || (DAT_00089214 != '\0')) goto LAB_000271e4;
      }
      if (DAT_0048d36e == '\0') goto LAB_0002725c;
      if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 7))
      goto LAB_0002720c;
      builtin_strncpy(local_5828,"statusServiceThr",0x10);
      local_5818._0_1_ = 'e';
      local_5818._1_1_ = 'a';
      local_5818._2_1_ = 'd';
      local_5818._3_1_ = ' ';
      uStack_5814._0_1_ = 's';
      uStack_5814._1_1_ = 'e';
      uStack_5814._2_1_ = 'n';
      uStack_5814._3_1_ = 'd';
      local_5810._0_1_ = ' ';
      local_5810._1_1_ = 'h';
      local_5810._2_1_ = 't';
      local_5810._3_1_ = 't';
      builtin_strncpy(acStack_580c,"p data error",0xc);
      local_5800 = local_5800 & 0xffffff00;
      FUN_00032218(7,local_5828,0);
LAB_000271e4:
      if (DAT_0048d36e != '\0') {
        if (DAT_0071e84c == '\0') {
LAB_0002720c:
          if ((DAT_0048d36d == '\0') && (DAT_00087bc4 < 7)) goto LAB_0002725c;
        }
        builtin_strncpy(local_5828,"one client disco",0x10);
        local_5818._0_1_ = 'n';
        local_5818._1_1_ = 'n';
        local_5818._2_1_ = 'e';
        local_5818._3_1_ = 'c';
        uStack_5814._0_1_ = 't';
        uStack_5814._1_1_ = 'e';
        uStack_5814._2_1_ = 'd';
        uStack_5814._3_1_ = '!';
        local_5810 = local_5810 & 0xffffff00;
        FUN_00032218(7,local_5828,0);
      }
LAB_0002725c:
      close(param_1);
      free(__s);
      return iVar7;
    }
    close(param_1);
    if ((DAT_0048d36e == '\0') ||
       (((DAT_0071e84c == '\0' && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 7))))
    goto LAB_00026b5c;
    pcVar9 = "setsockopt SO_RCVTIMEO failed";
  }
  else {
    close(param_1);
    if ((DAT_0048d36e == '\0') ||
       (((DAT_0071e84c == '\0' && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 7))))
    goto LAB_00026b5c;
    pcVar9 = "setsockopt SO_SNDTIMEO failed";
  }
  local_2828._0_4_ = *(undefined4 *)pcVar9;
  local_2828._4_4_ = *(undefined4 *)(pcVar9 + 4);
  local_2828._8_4_ = *(undefined4 *)(pcVar9 + 8);
  local_2828._12_4_ = *(undefined4 *)(pcVar9 + 0xc);
  local_2828._16_4_ = *(undefined4 *)(pcVar9 + 0x10);
  local_2814 = *(undefined4 *)(pcVar9 + 0x14);
  local_2810 = *(uint *)(pcVar9 + 0x18);
  local_280c._0_1_ = (char)*(undefined4 *)(pcVar9 + 0x1c);
  local_280c._1_1_ = (char)((uint)*(undefined4 *)(pcVar9 + 0x1c) >> 8);
  FUN_00032218(7,local_2828,0);
LAB_00026b5c:
  if (__s != (char *)0x0) {
LAB_00026b64:
    free(__s);
  }
  return 0;
}

