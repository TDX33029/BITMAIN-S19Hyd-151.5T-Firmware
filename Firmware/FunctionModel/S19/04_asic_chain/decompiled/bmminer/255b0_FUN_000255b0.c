// FUN_000255b0 @ 000255b0  size=4700  callers=0
// program: bmminer


undefined4 FUN_000255b0(char *param_1,char *param_2,size_t param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  uint extraout_r1;
  byte *pbVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  bool bVar15;
  uint in_fpscr;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  float fVar21;
  uint local_c78;
  char local_c54 [4];
  uint local_c50 [255];
  byte bStack_851;
  int local_850;
  char acStack_84c [8];
  undefined4 uStack_844;
  undefined4 local_840;
  uint local_83c;
  char acStack_838 [4];
  uint local_834;
  undefined4 uStack_830;
  undefined2 uStack_82c;
  undefined1 local_82a;
  byte abStack_80d [1985];
  
  pcVar13 = param_1 + 4;
  iVar2 = strncmp(pcVar13,"/rate",5);
  if (iVar2 == 0) {
    if ((DAT_0048d36e != '\0') &&
       (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
      local_850._0_1_ = 'c';
      local_850._1_1_ = 'm';
      local_850._2_1_ = 'd';
      local_850._3_1_ = ' ';
      builtin_strncpy(acStack_84c,": get ra",8);
      uStack_844._0_1_ = 't';
      uStack_844._1_1_ = 'e';
      uStack_844._2_1_ = '\0';
      FUN_00032218(7,&local_850,0);
    }
    iVar2 = FUN_0001d93c();
    snprintf(param_2,param_3,"%d",iVar2);
    return 0;
  }
  iVar2 = strncmp(pcVar13,"/ideal_rate",0xb);
  if (iVar2 == 0) {
    if ((DAT_0048d36e != '\0') &&
       (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
      local_850._0_1_ = 'c';
      local_850._1_1_ = 'm';
      local_850._2_1_ = 'd';
      local_850._3_1_ = ' ';
      builtin_strncpy(acStack_84c,": get id",8);
      uStack_844._0_1_ = 'e';
      uStack_844._1_1_ = 'a';
      uStack_844._2_1_ = 'l';
      uStack_844._3_1_ = ' ';
      local_840._0_1_ = 'r';
      local_840._1_1_ = 'a';
      local_840._2_1_ = 't';
      local_840._3_1_ = 'e';
      local_83c = local_83c & 0xffffff00;
      FUN_00032218(7,&local_850,0);
    }
    uVar3 = FUN_0001d7c4();
    FUN_00025514(param_2,param_3,uVar3);
    return 0;
  }
  iVar2 = strncmp(pcVar13,"/max_rate",9);
  if (iVar2 == 0) {
    if ((DAT_0048d36e != '\0') &&
       (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
      local_850._0_1_ = 'c';
      local_850._1_1_ = 'm';
      local_850._2_1_ = 'd';
      local_850._3_1_ = ' ';
      builtin_strncpy(acStack_84c,": get ma",8);
      uStack_844._0_1_ = 'x';
      uStack_844._1_1_ = ' ';
      uStack_844._2_1_ = 'r';
      uStack_844._3_1_ = 'a';
      local_840._0_1_ = 't';
      local_840._1_1_ = 'e';
      local_840._2_1_ = '\0';
      FUN_00032218(7,&local_850,0);
    }
    uVar3 = FUN_0001d618();
    FUN_00025514(param_2,param_3,uVar3);
    return 0;
  }
  iVar2 = strncmp(pcVar13,"/miner_status",0xd);
  if (iVar2 == 0) {
    if ((DAT_0048d36e != '\0') &&
       (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
      local_850._0_1_ = 'c';
      local_850._1_1_ = 'm';
      local_850._2_1_ = 'd';
      local_850._3_1_ = ' ';
      builtin_strncpy(acStack_84c,": get mi",8);
      uStack_844._0_1_ = 'n';
      uStack_844._1_1_ = 'e';
      uStack_844._2_1_ = 'r';
      uStack_844._3_1_ = ' ';
      local_840._0_1_ = 's';
      local_840._1_1_ = 't';
      local_840._2_1_ = 'a';
      local_840._3_1_ = 't';
      local_83c = CONCAT13(local_83c._3_1_,0x7375);
      FUN_00032218(7,&local_850,0);
      return 0;
    }
  }
  else {
    iVar2 = strncmp(pcVar13,"/productName",0xc);
    if (iVar2 == 0) {
      if ((DAT_0048d36e != '\0') &&
         (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
        local_850._0_1_ = 'c';
        local_850._1_1_ = 'm';
        local_850._2_1_ = 'd';
        local_850._3_1_ = ' ';
        builtin_strncpy(acStack_84c,": get mi",8);
        uStack_844._0_1_ = 'n';
        uStack_844._1_1_ = 'e';
        uStack_844._2_1_ = 'r';
        uStack_844._3_1_ = ' ';
        local_840._0_1_ = 't';
        local_840._1_1_ = 'y';
        local_840._2_1_ = 'p';
        local_840._3_1_ = 'e';
        local_83c = local_83c & 0xffffff00;
        FUN_00032218(7,&local_850,0);
      }
      iVar2 = FUN_0001d4a4();
      if (iVar2 == 0) {
        pcVar13 = "%s";
      }
      else {
        pcVar13 = "%s APW111721a";
      }
      snprintf(param_2,0x100,pcVar13,&DAT_0008a528);
      return 0;
    }
    iVar2 = strncmp(pcVar13,"/miner_power",0xc);
    if (iVar2 == 0) {
      if ((DAT_0048d36e != '\0') &&
         (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
        local_850._0_1_ = 'c';
        local_850._1_1_ = 'm';
        local_850._2_1_ = 'd';
        local_850._3_1_ = ' ';
        builtin_strncpy(acStack_84c,": get mi",8);
        uStack_844._0_1_ = 'n';
        uStack_844._1_1_ = 'e';
        uStack_844._2_1_ = 'r';
        uStack_844._3_1_ = ' ';
        local_840._0_1_ = 'p';
        local_840._1_1_ = 'o';
        local_840._2_1_ = 'w';
        local_840._3_1_ = 'e';
        local_83c = CONCAT22(local_83c._2_2_,0x72);
        FUN_00032218(7,&local_850,0);
      }
      iVar2 = thunk_FUN_0001d4a4();
      if (iVar2 == 0) {
        builtin_strncpy(param_2,"no power supported",0x13);
        return 0;
      }
      iVar2 = FUN_000208bc();
      snprintf(param_2,0x14,"miner power:%d",iVar2);
      return 0;
    }
    uVar4 = strncmp(pcVar13,"/power_err_code",0xf);
    if (uVar4 == 0) {
      local_c50[0] = uVar4;
      iVar2 = __isoc99_sscanf(pcVar13,"/power_err_code:%d");
      if (iVar2 == 1) {
        if ((DAT_0048d36e != '\0') &&
           (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
          local_850._0_1_ = 'c';
          local_850._1_1_ = 'm';
          local_850._2_1_ = 'd';
          local_850._3_1_ = ' ';
          builtin_strncpy(acStack_84c,": get mi",8);
          uStack_844._0_1_ = 'n';
          uStack_844._1_1_ = 'e';
          uStack_844._2_1_ = 'r';
          uStack_844._3_1_ = ' ';
          local_840._0_1_ = 'p';
          local_840._1_1_ = 'o';
          local_840._2_1_ = 'w';
          local_840._3_1_ = 'e';
          local_83c._0_1_ = 'r';
          local_83c._1_1_ = ' ';
          local_83c._2_1_ = 'e';
          local_83c._3_1_ = 'r';
          builtin_strncpy(acStack_838,"r co",4);
          local_834 = CONCAT13(local_834._3_1_,0x6564);
          FUN_00032218(7,&local_850,0);
        }
        bVar15 = local_c50[0] != 0;
      }
      else {
        if ((DAT_0048d36e != '\0') &&
           (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
          local_850._0_1_ = 'c';
          local_850._1_1_ = 'm';
          local_850._2_1_ = 'd';
          local_850._3_1_ = ' ';
          builtin_strncpy(acStack_84c,": get mi",8);
          uStack_844._0_1_ = 'n';
          uStack_844._1_1_ = 'e';
          uStack_844._2_1_ = 'r';
          uStack_844._3_1_ = ' ';
          local_840._0_1_ = 'p';
          local_840._1_1_ = 'o';
          local_840._2_1_ = 'w';
          local_840._3_1_ = 'e';
          local_83c._0_1_ = 'r';
          local_83c._1_1_ = ' ';
          local_83c._2_1_ = 'e';
          local_83c._3_1_ = 'r';
          builtin_strncpy(acStack_838,"r co",4);
          local_834 = CONCAT13(local_834._3_1_,0x6564);
          FUN_00032218(7,&local_850,0);
        }
        bVar15 = false;
      }
      uVar4 = thunk_FUN_0004e7fc(bVar15,1);
      snprintf(param_2,0x28,"power error code:0x%08x",uVar4);
      return 0;
    }
    iVar2 = strncmp(pcVar13,"/power_err_data",0xf);
    if (iVar2 == 0) {
      if ((DAT_0048d36e != '\0') &&
         (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
        local_850._0_1_ = 'c';
        local_850._1_1_ = 'm';
        local_850._2_1_ = 'd';
        local_850._3_1_ = ' ';
        builtin_strncpy(acStack_84c,": get mi",8);
        uStack_844._0_1_ = 'n';
        uStack_844._1_1_ = 'e';
        uStack_844._2_1_ = 'r';
        uStack_844._3_1_ = ' ';
        local_840._0_1_ = 'p';
        local_840._1_1_ = 'o';
        local_840._2_1_ = 'w';
        local_840._3_1_ = 'e';
        local_83c._0_1_ = 'r';
        local_83c._1_1_ = ' ';
        local_83c._2_1_ = 'e';
        local_83c._3_1_ = 'r';
        builtin_strncpy(acStack_838,"r da",4);
        local_834 = CONCAT13(local_834._3_1_,0x6174);
        FUN_00032218(7,&local_850,0);
      }
      memset(&local_850,0,100);
      thunk_FUN_0004eae4(1,&local_850);
      memset(param_2,0,200);
      pbVar11 = &bStack_851;
      pcVar13 = param_2 + 1;
      do {
        pbVar11 = pbVar11 + 1;
        cVar1 = "\n             0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F    0123456789ABCDEF"
                [(*pbVar11 & 0xf) + 0x40];
        pcVar13[-1] = "\n             0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F    0123456789ABCDEF"
                      [(*pbVar11 >> 4) + 0x40];
        *pcVar13 = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (abStack_80d != pbVar11);
      return 0;
    }
    iVar2 = strncmp(pcVar13,"/power_reset_rc",0xf);
    if (iVar2 == 0) {
      if ((DAT_0048d36e != '\0') &&
         (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
        local_850._0_1_ = 'c';
        local_850._1_1_ = 'm';
        local_850._2_1_ = 'd';
        local_850._3_1_ = ' ';
        builtin_strncpy(acStack_84c,": get mi",8);
        uStack_844._0_1_ = 'n';
        uStack_844._1_1_ = 'e';
        uStack_844._2_1_ = 'r';
        uStack_844._3_1_ = ' ';
        local_840._0_1_ = 'p';
        local_840._1_1_ = 'o';
        local_840._2_1_ = 'w';
        local_840._3_1_ = 'e';
        local_83c._0_1_ = 'r';
        local_83c._1_1_ = ' ';
        local_83c._2_1_ = 'r';
        local_83c._3_1_ = 'e';
        builtin_strncpy(acStack_838,"set ",4);
        local_834._0_1_ = 'r';
        local_834._1_1_ = 'o';
        local_834._2_1_ = 'o';
        local_834._3_1_ = 't';
        uStack_830._0_1_ = ' ';
        uStack_830._1_1_ = 'c';
        uStack_830._2_1_ = 'a';
        uStack_830._3_1_ = 'u';
        uStack_82c = 0x6573;
        local_82a = 0;
        FUN_00032218(7,&local_850,0);
      }
      uVar4 = thunk_FUN_0004e960();
      snprintf(param_2,0x28,"power reset root cause:0x%08x",uVar4);
      return 0;
    }
    iVar2 = strncmp(pcVar13,"/power_uptime",0xd);
    if (iVar2 == 0) {
      if ((DAT_0048d36e != '\0') &&
         (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
        local_850._0_1_ = 'c';
        local_850._1_1_ = 'm';
        local_850._2_1_ = 'd';
        local_850._3_1_ = ' ';
        builtin_strncpy(acStack_84c,": get mi",8);
        uStack_844._0_1_ = 'n';
        uStack_844._1_1_ = 'e';
        uStack_844._2_1_ = 'r';
        uStack_844._3_1_ = ' ';
        local_840._0_1_ = 'p';
        local_840._1_1_ = 'o';
        local_840._2_1_ = 'w';
        local_840._3_1_ = 'e';
        local_83c._0_1_ = 'r';
        local_83c._1_1_ = ' ';
        local_83c._2_1_ = 'u';
        local_83c._3_1_ = 'p';
        builtin_strncpy(acStack_838,"time",4);
        local_834 = local_834 & 0xffffff00;
        FUN_00032218(7,&local_850,0);
      }
      uVar3 = thunk_FUN_0004ea28();
      fVar21 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
      snprintf(param_2,0x28,"power power_uptime:%.1f",(double)fVar21 / 10.0);
      return 0;
    }
    iVar2 = strncmp(pcVar13,"/get_sn",7);
    if (iVar2 == 0) {
      if ((DAT_0048d36e != '\0') &&
         (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
        local_850._0_1_ = 'c';
        local_850._1_1_ = 'm';
        local_850._2_1_ = 'd';
        local_850._3_1_ = ' ';
        builtin_strncpy(acStack_84c,": get mi",8);
        uStack_844._0_1_ = 'n';
        uStack_844._1_1_ = 'e';
        uStack_844._2_1_ = 'r';
        uStack_844._3_1_ = ' ';
        local_840._0_1_ = 's';
        local_840._1_1_ = 'n';
        local_840._2_1_ = '\0';
        FUN_00032218(7,&local_850,0);
      }
      if (DAT_0008a628 == '\0') {
        builtin_strncpy(param_2,"no miner sn stored on board",0x1c);
        return 0;
      }
      snprintf(param_2,0x100,"%s",&DAT_0008a628);
      return 0;
    }
    iVar2 = strncmp(pcVar13,"/set_sn",7);
    if (iVar2 == 0) {
      if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (4 < DAT_00087bc4)) {
        local_850._0_1_ = 'c';
        local_850._1_1_ = 'm';
        local_850._2_1_ = 'd';
        local_850._3_1_ = ' ';
        builtin_strncpy(acStack_84c,": set mi",8);
        uStack_844._0_1_ = 'n';
        uStack_844._1_1_ = 'e';
        uStack_844._2_1_ = 'r';
        uStack_844._3_1_ = ' ';
        local_840._0_1_ = 's';
        local_840._1_1_ = 'n';
        local_840._2_1_ = ',';
        local_840._3_1_ = ' ';
        local_83c._0_1_ = 'd';
        local_83c._1_1_ = 'o';
        local_83c._2_1_ = 'e';
        local_83c._3_1_ = 's';
        builtin_strncpy(acStack_838,"n\'t ",4);
        local_834._0_1_ = 's';
        local_834._1_1_ = 'p';
        local_834._2_1_ = 'p';
        local_834._3_1_ = 'o';
        uStack_830._0_1_ = 'r';
        uStack_830._1_1_ = 't';
        uStack_830._2_1_ = '\0';
        FUN_00032218(5,&local_850,0);
      }
      snprintf(param_2,0x14,"doesn\'t support sn set in Release mode");
      return 0;
    }
    iVar2 = strncmp(pcVar13,"/readreg",8);
    if (iVar2 == 0) {
      local_c50[0] = CONCAT22(local_c50[0]._2_2_,0x2d);
      pcVar13 = strtok(pcVar13,(char *)local_c50);
      if ((pcVar13 != (char *)0x0) &&
         (pcVar13 = strtok((char *)0x0,(char *)local_c50), pcVar13 != (char *)0x0)) {
        lVar8 = strtol(pcVar13,(char **)0x0,10);
        pcVar13 = strtok((char *)0x0,(char *)local_c50);
        if (pcVar13 != (char *)0x0) {
          lVar9 = strtol(pcVar13,(char **)0x0,10);
          pcVar13 = strtok((char *)0x0,(char *)local_c50);
          if (pcVar13 != (char *)0x0) {
            uVar4 = strtol(pcVar13,(char **)0x0,0x10);
            if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (4 < DAT_00087bc4)) {
              snprintf((char *)&local_850,0x800,"recvBuf = %s, chain = %d, asic = %d, reg = 0x%x\n",
                       param_1,lVar8,lVar9,uVar4);
              FUN_00032218(5,&local_850,0);
            }
            iVar2 = FUN_0002009c();
            uVar12 = FUN_0002fa34(uVar4,lVar9 * iVar2,lVar8);
            snprintf(param_2,param_3,"reg 0x%08x of asic %2d @ chain %2d, val = 0x%08x",uVar4,lVar9,
                     lVar8,uVar12);
            return 0;
          }
        }
      }
    }
    else {
      iVar2 = strncmp(pcVar13,"/readcorereg",0xc);
      if (iVar2 == 0) {
        local_c54[0] = '-';
        local_c54[1] = '\0';
        memset(local_c50,0,0x400);
        pcVar13 = strtok(pcVar13,local_c54);
        if ((pcVar13 != (char *)0x0) &&
           (pcVar13 = strtok((char *)0x0,local_c54), pcVar13 != (char *)0x0)) {
          lVar8 = strtol(pcVar13,(char **)0x0,10);
          pcVar13 = strtok((char *)0x0,local_c54);
          if (pcVar13 != (char *)0x0) {
            lVar9 = strtol(pcVar13,(char **)0x0,10);
            pcVar13 = strtok((char *)0x0,local_c54);
            if (pcVar13 != (char *)0x0) {
              uVar4 = strtol(pcVar13,(char **)0x0,0x10);
              if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (4 < DAT_00087bc4)) {
                snprintf((char *)&local_850,0x800,
                         "recvBuf = %s, chain = %d, asic = %d, reg = 0x%x\n",param_1,lVar8,lVar9,
                         uVar4);
                FUN_00032218(5,&local_850,0);
              }
              iVar2 = FUN_0002fcb0(uVar4,lVar9,lVar8,local_c50);
              if (iVar2 != 0) {
                snprintf(param_2,param_3,"500 server error");
                return 0;
              }
              iVar5 = FUN_0002005c();
              iVar2 = 0;
              iVar14 = 0;
              while( true ) {
                if (iVar5 <= iVar14) break;
                iVar6 = snprintf(param_2 + iVar2,param_3 - iVar2,
                                 "asic\t%03d\tcore\t%03d\treg\t0x%02x\tval\t0x%08x\n",lVar9,iVar14,
                                 uVar4,local_c50[iVar14]);
                iVar2 = iVar2 + iVar6;
                iVar14 = iVar14 + 1;
              }
              return 0;
            }
          }
        }
      }
      else {
        iVar2 = strncmp(pcVar13,"/resetcore",10);
        if (iVar2 == 0) {
          local_c50[0] = CONCAT22(local_c50[0]._2_2_,0x2d);
          pcVar13 = strtok(pcVar13,(char *)local_c50);
          if ((pcVar13 != (char *)0x0) &&
             (pcVar13 = strtok((char *)0x0,(char *)local_c50), pcVar13 != (char *)0x0)) {
            lVar8 = strtol(pcVar13,(char **)0x0,10);
            pcVar13 = strtok((char *)0x0,(char *)local_c50);
            if (pcVar13 != (char *)0x0) {
              lVar9 = strtol(pcVar13,(char **)0x0,10);
              if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (4 < DAT_00087bc4)) {
                snprintf((char *)&local_850,0x800,"recvBuf = %s, chain = %d, asic = %d\n",param_1,
                         lVar8,lVar9);
                FUN_00032218(5,&local_850,0);
              }
              snprintf(param_2,param_3,"reset chain %d asic %d core success!!!.",lVar8,lVar9);
              return 0;
            }
          }
        }
        else {
          iVar2 = strncmp(pcVar13,"/nonce",6);
          if (iVar2 == 0) {
            memset(&local_850,0,0x100);
            iVar2 = 0;
            uVar4 = 0;
            iVar14 = 0;
            local_c78 = 0;
            do {
              iVar5 = FUN_000201d8(iVar14);
              if (iVar5 != 0) {
                sVar10 = param_3 - iVar2;
                pcVar13 = param_2 + iVar2;
                iVar2 = iVar2 + 0x24;
                snprintf(pcVar13,sVar10,"\n asic nonce number for chain[%d]...\n",iVar14);
                iVar6 = FUN_0002002c();
                iVar5 = 0;
                while (iVar5 != iVar6) {
                  iVar7 = FUN_000308d8(iVar14,iVar5);
                  uVar12 = local_c78 + iVar7;
                  iVar7 = FUN_000308d8(iVar14,iVar5);
                  iVar7 = snprintf((char *)((int)&local_850 + uVar4),0x100 - uVar4,
                                   "asic[%03d]=%-8d ",iVar5,iVar7);
                  uVar3 = FUN_0002003c();
                  FUN_000673ec(iVar5 + 1,uVar3);
                  local_c78 = extraout_r1;
                  if (extraout_r1 != 0) {
                    local_c78 = uVar12;
                  }
                  uVar4 = uVar4 + iVar7;
                  if (extraout_r1 == 0) {
                    uVar3 = FUN_0002003c();
                    iVar7 = FUN_00067190(iVar5,uVar3);
                    iVar7 = snprintf(param_2 + iVar2,param_3 - iVar2,"domain %02d %s total=%-8u\n",
                                     iVar7,(char *)&local_850,uVar12);
                    iVar2 = iVar2 + iVar7;
                    uVar4 = local_c78;
                  }
                  iVar5 = iVar5 + 1;
                }
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 != 4);
            return 0;
          }
          iVar2 = strncmp(pcVar13,"/adc",4);
          if (iVar2 == 0) {
            pcVar13 = (char *)FUN_0001fffc();
            iVar2 = strcmp(pcVar13,"HHB28601");
            if (iVar2 != 0) {
              pcVar13 = (char *)FUN_0001fffc();
              iVar2 = strcmp(pcVar13,"HHB28602");
              if (iVar2 != 0) {
                iVar2 = 0;
                iVar14 = 0;
                do {
                  iVar5 = FUN_000201d8(iVar14);
                  if (iVar5 != 0) {
                    sVar10 = param_3 - iVar2;
                    pcVar13 = param_2 + iVar2;
                    iVar2 = iVar2 + 0x17;
                    snprintf(pcVar13,sVar10,"\t\t\td0\td1\td2\td3\tsum\tavg\n");
                    iVar6 = FUN_0002002c();
                    iVar5 = 0;
                    while( true ) {
                      if (iVar5 == iVar6) break;
                      uVar3 = FUN_000451d8(iVar14,iVar5,0);
                      uVar16 = FUN_000451d8(iVar14,iVar5,1);
                      uVar17 = FUN_000451d8(iVar14,iVar5,2);
                      uVar18 = FUN_000451d8(iVar14,iVar5,3);
                      uVar19 = FUN_00045220(iVar14,iVar5);
                      uVar20 = FUN_0004529c(iVar14,iVar5);
                      iVar7 = snprintf(param_2 + iVar2,param_3 - iVar2,
                                       "chain %2d asic %03d adc:\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n"
                                       ,iVar14,iVar5,(double)CONCAT44(extraout_s1_00,uVar3),
                                       (double)CONCAT44(extraout_s1_01,uVar16),
                                       (double)CONCAT44(extraout_s1_02,uVar17),
                                       (double)CONCAT44(extraout_s1_03,uVar18),
                                       (double)CONCAT44(extraout_s1_04,uVar19),
                                       (double)CONCAT44(extraout_s1_05,uVar20));
                      iVar2 = iVar2 + iVar7;
                      iVar5 = iVar5 + 1;
                    }
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 != 4);
                return 0;
              }
            }
            snprintf(param_2,param_3,"Not Supported in auto temp mode");
            return 0;
          }
          iVar2 = strncmp(pcVar13,"/flush",6);
          if (iVar2 == 0) {
            FUN_0004ac60();
            return 0;
          }
          local_850 = strncmp(pcVar13,"/power",6);
          if (local_850 != 0) {
            return 0xffffffff;
          }
          iVar14 = __isoc99_sscanf(pcVar13,"/power-%d");
          iVar2 = local_850;
          if ((iVar14 == 1) && (local_850 < 4)) {
            uVar3 = FUN_0001c978(local_850);
            snprintf(param_2,param_3,"chain %d power is %.2f",iVar2,
                     (double)CONCAT44(extraout_s1,uVar3));
            return 0;
          }
        }
      }
    }
    snprintf(param_2,param_3,"404 not found");
  }
  return 0;
}

