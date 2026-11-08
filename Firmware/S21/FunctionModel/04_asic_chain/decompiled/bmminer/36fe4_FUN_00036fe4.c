// FUN_00036fe4 @ 00036fe4  size=7860  callers=0
// program: bmminer


undefined4 FUN_00036fe4(char *param_1,char *param_2,size_t param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  size_t sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  BIO *bp;
  RSA *rsa;
  uchar *from;
  long lVar11;
  long lVar12;
  uchar *to;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 uVar13;
  undefined4 uVar14;
  byte *pbVar15;
  undefined4 uVar16;
  char *pcVar17;
  char *pcVar18;
  int iVar19;
  bool bVar20;
  uint in_fpscr;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  float fVar23;
  char acStack_2510 [64];
  char local_24d0 [128];
  uint local_2450 [255];
  byte bStack_2051;
  uint local_2050;
  char acStack_204c [8];
  undefined4 uStack_2044;
  undefined4 local_2040;
  uint local_203c;
  undefined4 local_2038;
  uint local_2034;
  undefined4 uStack_2030;
  undefined2 uStack_202c;
  undefined1 local_202a;
  byte abStack_200d [8129];
  
  pcVar18 = param_1 + 4;
  iVar2 = strncmp(pcVar18,"/rate",5);
  if (iVar2 == 0) {
    if ((DAT_008c702e != '\0') &&
       (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
      local_2050._0_1_ = 'c';
      local_2050._1_1_ = 'm';
      local_2050._2_1_ = 'd';
      local_2050._3_1_ = ' ';
      builtin_strncpy(acStack_204c,": get ra",8);
      uStack_2044._0_1_ = 't';
      uStack_2044._1_1_ = 'e';
      uStack_2044._2_1_ = '\0';
      FUN_0004948c(7,&local_2050,0);
    }
    uVar3 = FUN_00025728();
    FUN_00033230(param_2,param_3,uVar3);
    return 0;
  }
  iVar2 = strncmp(pcVar18,"/clear_find_asic_fail_record",0x1c);
  if (iVar2 == 0) {
    remove("/config/find_asic_counter");
    pcVar18 = "clear find asic fail record success";
    do {
      pcVar17 = param_2;
      uVar3 = *(undefined4 *)(pcVar18 + 4);
      uVar13 = *(undefined4 *)(pcVar18 + 8);
      uVar14 = *(undefined4 *)(pcVar18 + 0xc);
      bVar20 = pcVar18 != "fail record success";
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
      *(undefined4 *)(pcVar17 + 4) = uVar3;
      *(undefined4 *)(pcVar17 + 8) = uVar13;
      *(undefined4 *)(pcVar17 + 0xc) = uVar14;
      param_2 = pcVar17 + 0x10;
      pcVar18 = pcVar18 + 0x10;
    } while (bVar20);
    builtin_strncpy(pcVar17 + 0x10,"ess",4);
    return 0;
  }
  iVar2 = strncmp(pcVar18,"/ideal_rate",0xb);
  if (iVar2 == 0) {
    if ((DAT_008c702e != '\0') &&
       (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
      local_2050._0_1_ = 'c';
      local_2050._1_1_ = 'm';
      local_2050._2_1_ = 'd';
      local_2050._3_1_ = ' ';
      builtin_strncpy(acStack_204c,": get id",8);
      uStack_2044._0_1_ = 'e';
      uStack_2044._1_1_ = 'a';
      uStack_2044._2_1_ = 'l';
      uStack_2044._3_1_ = ' ';
      local_2040._0_1_ = 'r';
      local_2040._1_1_ = 'a';
      local_2040._2_1_ = 't';
      local_2040._3_1_ = 'e';
      local_203c = local_203c & 0xffffff00;
      FUN_0004948c(7,&local_2050,0);
    }
    uVar3 = FUN_00025474();
    FUN_00033230(param_2,param_3,uVar3);
    return 0;
  }
  iVar2 = strncmp(pcVar18,"/max_rate",9);
  if (iVar2 == 0) {
    if ((DAT_008c702e != '\0') &&
       (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
      local_2050._0_1_ = 'c';
      local_2050._1_1_ = 'm';
      local_2050._2_1_ = 'd';
      local_2050._3_1_ = ' ';
      builtin_strncpy(acStack_204c,": get ma",8);
      uStack_2044._0_1_ = 'x';
      uStack_2044._1_1_ = ' ';
      uStack_2044._2_1_ = 'r';
      uStack_2044._3_1_ = 'a';
      local_2040._0_1_ = 't';
      local_2040._1_1_ = 'e';
      local_2040._2_1_ = '\0';
      FUN_0004948c(7,&local_2050,0);
    }
    uVar3 = FUN_000252c8();
    FUN_00033230(param_2,param_3,uVar3);
    return 0;
  }
  iVar2 = strncmp(pcVar18,"/miner_status",0xd);
  if (iVar2 == 0) {
    if ((DAT_008c702e != '\0') &&
       (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
      local_2050._0_1_ = 'c';
      local_2050._1_1_ = 'm';
      local_2050._2_1_ = 'd';
      local_2050._3_1_ = ' ';
      builtin_strncpy(acStack_204c,": get mi",8);
      uStack_2044._0_1_ = 'n';
      uStack_2044._1_1_ = 'e';
      uStack_2044._2_1_ = 'r';
      uStack_2044._3_1_ = ' ';
      local_2040._0_1_ = 's';
      local_2040._1_1_ = 't';
      local_2040._2_1_ = 'a';
      local_2040._3_1_ = 't';
      local_203c = CONCAT13(local_203c._3_1_,0x7375);
      FUN_0004948c(7,&local_2050,0);
      return 0;
    }
  }
  else {
    iVar2 = strncmp(pcVar18,"/board_type",0xb);
    if (iVar2 == 0) {
      if ((DAT_008c702e != '\0') &&
         (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
        local_2050._0_1_ = 'c';
        local_2050._1_1_ = 'm';
        local_2050._2_1_ = 'd';
        local_2050._3_1_ = ' ';
        builtin_strncpy(acStack_204c,": get ha",8);
        uStack_2044._0_1_ = 's';
        uStack_2044._1_1_ = 'h';
        uStack_2044._2_1_ = ' ';
        uStack_2044._3_1_ = 'b';
        local_2040._0_1_ = 'o';
        local_2040._1_1_ = 'a';
        local_2040._2_1_ = 'r';
        local_2040._3_1_ = 'd';
        local_203c._0_1_ = ' ';
        local_203c._1_1_ = 't';
        local_203c._2_1_ = 'y';
        local_203c._3_1_ = 'p';
        local_2038._0_1_ = 'e';
        local_2038._1_1_ = '\0';
        FUN_0004948c(7,&local_2050,0);
      }
      snprintf(param_2,0x20,"%s",&DAT_008c70b4);
      return 0;
    }
    iVar2 = strncmp(pcVar18,"/productName",0xc);
    if (iVar2 == 0) {
      if ((DAT_008c702e != '\0') &&
         (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
        local_2050._0_1_ = 'c';
        local_2050._1_1_ = 'm';
        local_2050._2_1_ = 'd';
        local_2050._3_1_ = ' ';
        builtin_strncpy(acStack_204c,": get mi",8);
        uStack_2044._0_1_ = 'n';
        uStack_2044._1_1_ = 'e';
        uStack_2044._2_1_ = 'r';
        uStack_2044._3_1_ = ' ';
        local_2040._0_1_ = 't';
        local_2040._1_1_ = 'y';
        local_2040._2_1_ = 'p';
        local_2040._3_1_ = 'e';
        local_203c = local_203c & 0xffffff00;
        FUN_0004948c(7,&local_2050,0);
      }
      snprintf(param_2,0x100,"%s",&DAT_000c90bc);
      return 0;
    }
    iVar2 = strncmp(pcVar18,"/miner_power",0xc);
    if (iVar2 == 0) {
      if ((DAT_008c702e != '\0') &&
         (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
        local_2050._0_1_ = 'c';
        local_2050._1_1_ = 'm';
        local_2050._2_1_ = 'd';
        local_2050._3_1_ = ' ';
        builtin_strncpy(acStack_204c,": get mi",8);
        uStack_2044._0_1_ = 'n';
        uStack_2044._1_1_ = 'e';
        uStack_2044._2_1_ = 'r';
        uStack_2044._3_1_ = ' ';
        local_2040._0_1_ = 'p';
        local_2040._1_1_ = 'o';
        local_2040._2_1_ = 'w';
        local_2040._3_1_ = 'e';
        local_203c = CONCAT22(local_203c._2_2_,0x72);
        FUN_0004948c(7,&local_2050,0);
      }
      iVar2 = FUN_00024f30();
      if (iVar2 == 0) {
        builtin_strncpy(param_2,"no power supported",0x13);
        return 0;
      }
      iVar2 = FUN_0002af44();
      snprintf(param_2,0x14,"miner power:%d",iVar2);
      return 0;
    }
    uVar4 = strncmp(pcVar18,"/power_err_code",0xf);
    if (uVar4 == 0) {
      local_2450[0] = uVar4;
      iVar2 = __isoc99_sscanf(pcVar18,"/power_err_code:%d",local_2450);
      if (iVar2 == 1) {
        if ((DAT_008c702e != '\0') &&
           (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
          local_2050._0_1_ = 'c';
          local_2050._1_1_ = 'm';
          local_2050._2_1_ = 'd';
          local_2050._3_1_ = ' ';
          builtin_strncpy(acStack_204c,": get mi",8);
          uStack_2044._0_1_ = 'n';
          uStack_2044._1_1_ = 'e';
          uStack_2044._2_1_ = 'r';
          uStack_2044._3_1_ = ' ';
          local_2040._0_1_ = 'p';
          local_2040._1_1_ = 'o';
          local_2040._2_1_ = 'w';
          local_2040._3_1_ = 'e';
          local_203c._0_1_ = 'r';
          local_203c._1_1_ = ' ';
          local_203c._2_1_ = 'e';
          local_203c._3_1_ = 'r';
          local_2038._0_1_ = 'r';
          local_2038._1_1_ = ' ';
          local_2038._2_1_ = 'c';
          local_2038._3_1_ = 'o';
          local_2034 = CONCAT13(local_2034._3_1_,0x6564);
          FUN_0004948c(7,&local_2050,0);
        }
        bVar20 = local_2450[0] != 0;
      }
      else {
        if ((DAT_008c702e != '\0') &&
           (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
          local_2050._0_1_ = 'c';
          local_2050._1_1_ = 'm';
          local_2050._2_1_ = 'd';
          local_2050._3_1_ = ' ';
          builtin_strncpy(acStack_204c,": get mi",8);
          uStack_2044._0_1_ = 'n';
          uStack_2044._1_1_ = 'e';
          uStack_2044._2_1_ = 'r';
          uStack_2044._3_1_ = ' ';
          local_2040._0_1_ = 'p';
          local_2040._1_1_ = 'o';
          local_2040._2_1_ = 'w';
          local_2040._3_1_ = 'e';
          local_203c._0_1_ = 'r';
          local_203c._1_1_ = ' ';
          local_203c._2_1_ = 'e';
          local_203c._3_1_ = 'r';
          local_2038._0_1_ = 'r';
          local_2038._1_1_ = ' ';
          local_2038._2_1_ = 'c';
          local_2038._3_1_ = 'o';
          local_2034 = CONCAT13(local_2034._3_1_,0x6564);
          FUN_0004948c(7,&local_2050,0);
        }
        bVar20 = false;
      }
      uVar4 = FUN_00077f64(bVar20,1);
      snprintf(param_2,0x28,"power error code:0x%08x",uVar4);
      return 0;
    }
    iVar2 = strncmp(pcVar18,"/power_err_data",0xf);
    if (iVar2 == 0) {
      if ((DAT_008c702e != '\0') &&
         (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
        local_2050._0_1_ = 'c';
        local_2050._1_1_ = 'm';
        local_2050._2_1_ = 'd';
        local_2050._3_1_ = ' ';
        builtin_strncpy(acStack_204c,": get mi",8);
        uStack_2044._0_1_ = 'n';
        uStack_2044._1_1_ = 'e';
        uStack_2044._2_1_ = 'r';
        uStack_2044._3_1_ = ' ';
        local_2040._0_1_ = 'p';
        local_2040._1_1_ = 'o';
        local_2040._2_1_ = 'w';
        local_2040._3_1_ = 'e';
        local_203c._0_1_ = 'r';
        local_203c._1_1_ = ' ';
        local_203c._2_1_ = 'e';
        local_203c._3_1_ = 'r';
        local_2038._0_1_ = 'r';
        local_2038._1_1_ = ' ';
        local_2038._2_1_ = 'd';
        local_2038._3_1_ = 'a';
        local_2034 = CONCAT13(local_2034._3_1_,0x6174);
        FUN_0004948c(7,&local_2050,0);
      }
      memset(&local_2050,0,100);
      FUN_00077fa8(1,&local_2050);
      memset(param_2,0,200);
      pbVar15 = &bStack_2051;
      pcVar18 = param_2 + 1;
      do {
        pbVar15 = pbVar15 + 1;
        cVar1 = "0123456789ABCDEF"[*pbVar15 & 0xf];
        pcVar18[-1] = "0123456789ABCDEF"[*pbVar15 >> 4];
        *pcVar18 = cVar1;
        pcVar18 = pcVar18 + 2;
      } while (abStack_200d != pbVar15);
      return 0;
    }
    iVar2 = strncmp(pcVar18,"/power_reset_rc",0xf);
    if (iVar2 == 0) {
      if ((DAT_008c702e != '\0') &&
         (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
        local_2050._0_1_ = 'c';
        local_2050._1_1_ = 'm';
        local_2050._2_1_ = 'd';
        local_2050._3_1_ = ' ';
        builtin_strncpy(acStack_204c,": get mi",8);
        uStack_2044._0_1_ = 'n';
        uStack_2044._1_1_ = 'e';
        uStack_2044._2_1_ = 'r';
        uStack_2044._3_1_ = ' ';
        local_2040._0_1_ = 'p';
        local_2040._1_1_ = 'o';
        local_2040._2_1_ = 'w';
        local_2040._3_1_ = 'e';
        local_203c._0_1_ = 'r';
        local_203c._1_1_ = ' ';
        local_203c._2_1_ = 'r';
        local_203c._3_1_ = 'e';
        local_2038._0_1_ = 's';
        local_2038._1_1_ = 'e';
        local_2038._2_1_ = 't';
        local_2038._3_1_ = ' ';
        local_2034._0_1_ = 'r';
        local_2034._1_1_ = 'o';
        local_2034._2_1_ = 'o';
        local_2034._3_1_ = 't';
        uStack_2030._0_1_ = ' ';
        uStack_2030._1_1_ = 'c';
        uStack_2030._2_1_ = 'a';
        uStack_2030._3_1_ = 'u';
        uStack_202c = 0x6573;
        local_202a = 0;
        FUN_0004948c(7,&local_2050,0);
      }
      uVar4 = FUN_00077fe0();
      snprintf(param_2,0x28,"power reset root cause:0x%08x",uVar4);
      return 0;
    }
    iVar2 = strncmp(pcVar18,"/power_uptime",0xd);
    if (iVar2 == 0) {
      if ((DAT_008c702e != '\0') &&
         (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
        local_2050._0_1_ = 'c';
        local_2050._1_1_ = 'm';
        local_2050._2_1_ = 'd';
        local_2050._3_1_ = ' ';
        builtin_strncpy(acStack_204c,": get mi",8);
        uStack_2044._0_1_ = 'n';
        uStack_2044._1_1_ = 'e';
        uStack_2044._2_1_ = 'r';
        uStack_2044._3_1_ = ' ';
        local_2040._0_1_ = 'p';
        local_2040._1_1_ = 'o';
        local_2040._2_1_ = 'w';
        local_2040._3_1_ = 'e';
        local_203c._0_1_ = 'r';
        local_203c._1_1_ = ' ';
        local_203c._2_1_ = 'u';
        local_203c._3_1_ = 'p';
        local_2038._0_1_ = 't';
        local_2038._1_1_ = 'i';
        local_2038._2_1_ = 'm';
        local_2038._3_1_ = 'e';
        local_2034 = local_2034 & 0xffffff00;
        FUN_0004948c(7,&local_2050,0);
      }
      uVar3 = FUN_00077ff8();
      fVar23 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
      snprintf(param_2,0x28,"power power_uptime:%.1f",(double)fVar23 / 10.0);
      return 0;
    }
    iVar2 = strncmp(pcVar18,"/power_fw_ver",0xd);
    if (iVar2 == 0) {
      iVar2 = FUN_000751c4();
      if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (4 < DAT_000be644)) {
        snprintf((char *)&local_2050,0x2000,"fw_ver:%d",iVar2);
        FUN_0004948c(5,&local_2050,0);
      }
      snprintf(param_2,0x32,"power firmware version:%d",iVar2);
      return 0;
    }
    iVar2 = strncmp(pcVar18,"/get_sn",7);
    if (iVar2 == 0) {
      if ((DAT_008c702e != '\0') &&
         (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
        local_2050._0_1_ = 'c';
        local_2050._1_1_ = 'm';
        local_2050._2_1_ = 'd';
        local_2050._3_1_ = ' ';
        builtin_strncpy(acStack_204c,": get mi",8);
        uStack_2044._0_1_ = 'n';
        uStack_2044._1_1_ = 'e';
        uStack_2044._2_1_ = 'r';
        uStack_2044._3_1_ = ' ';
        local_2040._0_1_ = 's';
        local_2040._1_1_ = 'n';
        local_2040._2_1_ = '\0';
        FUN_0004948c(7,&local_2050,0);
      }
      if (DAT_000c70a4 != '\0') {
        snprintf(param_2,0x100,"%s",&DAT_000c70a4);
        return 0;
      }
      pcVar18 = "no miner sn stored on board";
    }
    else {
      iVar2 = strncmp(pcVar18,"/inlet_temp",0xb);
      if (iVar2 == 0) {
        if ((DAT_008c702e != '\0') &&
           (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
          local_2050._0_1_ = 'c';
          local_2050._1_1_ = 'm';
          local_2050._2_1_ = 'd';
          local_2050._3_1_ = ' ';
          builtin_strncpy(acStack_204c,": get wa",8);
          uStack_2044._0_1_ = 't';
          uStack_2044._1_1_ = 'e';
          uStack_2044._2_1_ = 'r';
          uStack_2044._3_1_ = ' ';
          local_2040._0_1_ = 'i';
          local_2040._1_1_ = 'n';
          local_2040._2_1_ = 'l';
          local_2040._3_1_ = 'e';
          local_203c._0_1_ = 't';
          local_203c._1_1_ = ' ';
          local_203c._2_1_ = 't';
          local_203c._3_1_ = 'e';
          local_2038._0_1_ = 'm';
          local_2038._1_1_ = 'p';
          local_2038._2_1_ = '\0';
          FUN_0004948c(7,&local_2050,0);
        }
        iVar2 = FUN_00019f38();
        snprintf(param_2,0x32,"%d",iVar2);
        return 0;
      }
      iVar2 = strncmp(pcVar18,"/cgi-bin/set_miner_conf.cgi",0x1b);
      if (iVar2 == 0) {
        if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
          local_2050._0_1_ = 'c';
          local_2050._1_1_ = 'm';
          local_2050._2_1_ = 'd';
          local_2050._3_1_ = ' ';
          builtin_strncpy(acStack_204c,": set_mi",8);
          uStack_2044._0_1_ = 'n';
          uStack_2044._1_1_ = 'e';
          uStack_2044._2_1_ = 'r';
          uStack_2044._3_1_ = '_';
          local_2040._0_1_ = 'c';
          local_2040._1_1_ = 'o';
          local_2040._2_1_ = 'n';
          local_2040._3_1_ = 'f';
          local_203c = local_203c & 0xffffff00;
          FUN_0004948c(3,&local_2050,0);
        }
        sVar5 = strlen(param_2);
        iVar2 = FUN_00036b08(param_2,sVar5);
        if (iVar2 == 0) {
          pcVar18 = "{\"stats\":\"success\",\"code\":\"M000\",\"msg\":\"OK!\"}";
          do {
            pcVar17 = param_2;
            uVar3 = *(undefined4 *)(pcVar18 + 4);
            uVar13 = *(undefined4 *)(pcVar18 + 8);
            uVar14 = *(undefined4 *)(pcVar18 + 0xc);
            bVar20 = pcVar18 != "s\",\"code\":\"M000\",\"msg\":\"OK!\"}";
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
            *(undefined4 *)(pcVar17 + 4) = uVar3;
            *(undefined4 *)(pcVar17 + 8) = uVar13;
            *(undefined4 *)(pcVar17 + 0xc) = uVar14;
            param_2 = pcVar17 + 0x10;
            pcVar18 = pcVar18 + 0x10;
          } while (bVar20);
          builtin_strncpy(pcVar17 + 0x10,",\"msg\":\"OK!\"}",0xe);
          return 0;
        }
        pcVar18 = "{\"stats\":\"success\",\"code\":\"M001\",\"msg\":\"FAIL!\"}";
        do {
          uVar3 = *(undefined4 *)(pcVar18 + 4);
          uVar13 = *(undefined4 *)(pcVar18 + 8);
          uVar14 = *(undefined4 *)(pcVar18 + 0xc);
          bVar20 = pcVar18 != ",\"msg\":\"FAIL!\"}";
          *(undefined4 *)param_2 = *(undefined4 *)pcVar18;
          *(undefined4 *)(param_2 + 4) = uVar3;
          *(undefined4 *)(param_2 + 8) = uVar13;
          *(undefined4 *)(param_2 + 0xc) = uVar14;
          param_2 = param_2 + 0x10;
          pcVar18 = pcVar18 + 0x10;
        } while (bVar20);
        return 0;
      }
      iVar2 = strncmp(pcVar18,"/set_sn",7);
      if (iVar2 == 0) {
        if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (4 < DAT_000be644)) {
          local_2050._0_1_ = 'c';
          local_2050._1_1_ = 'm';
          local_2050._2_1_ = 'd';
          local_2050._3_1_ = ' ';
          builtin_strncpy(acStack_204c,": set mi",8);
          uStack_2044._0_1_ = 'n';
          uStack_2044._1_1_ = 'e';
          uStack_2044._2_1_ = 'r';
          uStack_2044._3_1_ = ' ';
          local_2040._0_1_ = 's';
          local_2040._1_1_ = 'n';
          local_2040._2_1_ = ',';
          local_2040._3_1_ = ' ';
          local_203c._0_1_ = 'd';
          local_203c._1_1_ = 'o';
          local_203c._2_1_ = 'e';
          local_203c._3_1_ = 's';
          local_2038._0_1_ = 'n';
          local_2038._1_1_ = '\'';
          local_2038._2_1_ = 't';
          local_2038._3_1_ = ' ';
          local_2034._0_1_ = 's';
          local_2034._1_1_ = 'p';
          local_2034._2_1_ = 'p';
          local_2034._3_1_ = 'o';
          uStack_2030._0_1_ = 'r';
          uStack_2030._1_1_ = 't';
          uStack_2030._2_1_ = '\0';
          FUN_0004948c(5,&local_2050,0);
        }
        snprintf(param_2,0x14,"doesn\'t support sn set in Release mode");
        return 0;
      }
      uVar4 = strncmp(pcVar18,"/get_water_permit",0x11);
      if (uVar4 == 0) {
        local_2450[0] = uVar4;
        iVar2 = __isoc99_sscanf(pcVar18,"/get_water_permit:%d",local_2450);
        if (iVar2 == 1) {
          if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (4 < DAT_000be644)) {
            iVar2 = FUN_0004eb2c(local_2450[0]);
            snprintf((char *)&local_2050,0x2000,"get_water_permit:%d",iVar2);
            FUN_0004948c(5,&local_2050,0);
          }
          iVar2 = FUN_0004eb2c(local_2450[0]);
          snprintf(param_2,0x32,"get_water_permit:%d",iVar2);
          return 0;
        }
        if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (4 < DAT_000be644)) {
          local_2050._0_1_ = 'g';
          local_2050._1_1_ = 'e';
          local_2050._2_1_ = 't';
          local_2050._3_1_ = '_';
          builtin_strncpy(acStack_204c,"water_pe",8);
          uStack_2044._0_1_ = 'r';
          uStack_2044._1_1_ = 'm';
          uStack_2044._2_1_ = 'i';
          uStack_2044._3_1_ = 't';
          local_2040._0_1_ = ' ';
          local_2040._1_1_ = 'f';
          local_2040._2_1_ = 'a';
          local_2040._3_1_ = 'i';
          local_203c._0_1_ = 'l';
          local_203c._1_1_ = 'e';
          local_203c._2_1_ = 'd';
          local_203c._3_1_ = '\0';
          FUN_0004948c(5,&local_2050,0);
        }
        builtin_strncpy(param_2,"get_water_permit failed",0x18);
        return 0;
      }
      iVar2 = strncmp(pcVar18,"/miner_info",0xb);
      if (iVar2 == 0) {
        FUN_000303e0(param_2);
        return 0;
      }
      iVar2 = strncmp(pcVar18,"/freq_info",10);
      if (iVar2 == 0) {
        FUN_00030750(param_2);
        return 0;
      }
      iVar2 = strncmp(pcVar18,"/power_sn",9);
      if (iVar2 != 0) {
        iVar2 = strncmp(pcVar18,"/readreg",8);
        if (iVar2 == 0) {
          local_2450[0] = CONCAT22(local_2450[0]._2_2_,0x2d);
          pcVar18 = strtok(pcVar18,(char *)local_2450);
          if ((pcVar18 != (char *)0x0) &&
             (pcVar18 = strtok((char *)0x0,(char *)local_2450), pcVar18 != (char *)0x0)) {
            lVar12 = strtol(pcVar18,(char **)0x0,10);
            pcVar18 = strtok((char *)0x0,(char *)local_2450);
            if (pcVar18 != (char *)0x0) {
              lVar11 = strtol(pcVar18,(char **)0x0,10);
              pcVar18 = strtok((char *)0x0,(char *)local_2450);
              if (pcVar18 != (char *)0x0) {
                uVar4 = strtol(pcVar18,(char **)0x0,0x10);
                if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (4 < DAT_000be644)) {
                  snprintf((char *)&local_2050,0x2000,
                           "recvBuf = %s, chain = %d, asic = %d, reg = 0x%x\n",param_1,lVar12,lVar11
                           ,uVar4);
                  FUN_0004948c(5,&local_2050,0);
                }
                iVar2 = FUN_0002a584();
                uVar10 = FUN_000462cc(uVar4,lVar11 * iVar2,lVar12);
                snprintf(param_2,param_3,"reg 0x%08x of asic %2d @ chain %2d, val = 0x%08x",uVar4,
                         lVar11,lVar12,uVar10);
                return 0;
              }
            }
          }
        }
        else {
          iVar2 = strncmp(pcVar18,"/readcorereg",0xc);
          if (iVar2 == 0) {
            local_24d0[0] = '-';
            local_24d0[1] = '\0';
            memset(local_2450,0,0x400);
            pcVar18 = strtok(pcVar18,local_24d0);
            if ((pcVar18 != (char *)0x0) &&
               (pcVar18 = strtok((char *)0x0,local_24d0), pcVar18 != (char *)0x0)) {
              lVar12 = strtol(pcVar18,(char **)0x0,10);
              pcVar18 = strtok((char *)0x0,local_24d0);
              if (pcVar18 != (char *)0x0) {
                lVar11 = strtol(pcVar18,(char **)0x0,10);
                pcVar18 = strtok((char *)0x0,local_24d0);
                if (pcVar18 != (char *)0x0) {
                  uVar4 = strtol(pcVar18,(char **)0x0,0x10);
                  if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
                    snprintf((char *)&local_2050,0x2000,
                             "recvBuf = %s, chain = %d, asic = %d, reg = 0x%x\n",param_1,lVar12,
                             lVar11,uVar4);
                    FUN_0004948c(3,&local_2050,0);
                  }
                  iVar2 = FUN_00046548(uVar4,lVar11,lVar12,local_2450);
                  if (iVar2 != 0) {
                    snprintf(param_2,param_3,"500 server error");
                    return 0;
                  }
                  iVar19 = FUN_0002a544();
                  iVar2 = 0;
                  for (iVar7 = 0; iVar7 < iVar19; iVar7 = iVar7 + 1) {
                    iVar6 = snprintf(param_2 + iVar2,param_3 - iVar2,
                                     "asic\t%03d\tcore\t%03d\treg\t0x%02x\tval\t0x%08x\n",lVar11,
                                     iVar7,uVar4,local_2450[iVar7]);
                    iVar2 = iVar2 + iVar6;
                  }
                  return 0;
                }
              }
            }
          }
          else {
            iVar2 = strncmp(pcVar18,"/resetcore",10);
            if (iVar2 == 0) {
              local_2450[0] = CONCAT22(local_2450[0]._2_2_,0x2d);
              pcVar18 = strtok(pcVar18,(char *)local_2450);
              if ((pcVar18 != (char *)0x0) &&
                 (pcVar18 = strtok((char *)0x0,(char *)local_2450), pcVar18 != (char *)0x0)) {
                lVar12 = strtol(pcVar18,(char **)0x0,10);
                pcVar18 = strtok((char *)0x0,(char *)local_2450);
                if (pcVar18 != (char *)0x0) {
                  lVar11 = strtol(pcVar18,(char **)0x0,10);
                  if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (4 < DAT_000be644)) {
                    snprintf((char *)&local_2050,0x2000,"recvBuf = %s, chain = %d, asic = %d\n",
                             param_1,lVar12,lVar11);
                    FUN_0004948c(5,&local_2050,0);
                  }
                  if (lVar11 == 0xff) {
                    FUN_00053070(lVar12);
                  }
                  else {
                    FUN_000526e4(lVar12,lVar11);
                  }
                  snprintf(param_2,param_3,"reset chain %d asic %d core success!!!.",lVar12,lVar11);
                  return 0;
                }
              }
            }
            else {
              iVar2 = strncmp(pcVar18,"/nonce",6);
              if (iVar2 == 0) {
                memset(local_2450,0,0x100);
                iVar2 = 0;
                iVar7 = 0;
                uVar4 = 0;
                iVar19 = 0;
                do {
                  iVar6 = FUN_0002a6f0(iVar19);
                  if (iVar6 != 0) {
                    sVar5 = param_3 - iVar2;
                    pcVar18 = param_2 + iVar2;
                    iVar2 = iVar2 + 0x24;
                    snprintf(pcVar18,sVar5,"\n asic nonce number for chain[%d]...\n",iVar19);
                    iVar8 = FUN_0002a514();
                    iVar6 = 0;
                    while (iVar6 != iVar8) {
                      iVar9 = FUN_0004748c(iVar19,iVar6);
                      uVar4 = uVar4 + iVar9;
                      iVar9 = FUN_0004748c(iVar19,iVar6);
                      iVar9 = snprintf((char *)((int)local_2450 + iVar7),0x100 - iVar7,"%-8d ",iVar9
                                      );
                      iVar7 = iVar7 + iVar9;
                      uVar3 = FUN_0002a524();
                      FUN_0009863c(iVar6 + 1,uVar3);
                      if (extraout_r1 == 0) {
                        uVar3 = FUN_0002a524();
                        iVar7 = FUN_000983e0(iVar6,uVar3);
                        iVar7 = snprintf(param_2 + iVar2,param_3 - iVar2,
                                         "domain%02d %s total=%-8u\n",iVar7,(char *)local_2450,uVar4
                                        );
                        iVar2 = iVar2 + iVar7;
                        iVar7 = 0;
                        uVar4 = 0;
                      }
                      iVar6 = iVar6 + 1;
                    }
                  }
                  iVar19 = iVar19 + 1;
                } while (iVar19 != 4);
                iVar2 = 0;
                do {
                  iVar7 = FUN_0002a6f0(iVar2);
                  if (iVar7 != 0) {
                    memset(&local_2050,0,0x100);
                    memset(local_24d0,0,0x80);
                    snprintf(local_24d0,0x80,"\nchain[%d] nonce info:\n",iVar2);
                    strcat(param_2,local_24d0);
                    for (iVar7 = 0; iVar19 = FUN_0002aee8(), iVar7 <= iVar19; iVar7 = iVar7 + 1) {
                      for (iVar19 = 0; iVar6 = FUN_0002aefc(), iVar19 < iVar6; iVar19 = iVar19 + 1)
                      {
                        iVar6 = FUN_0002aee8();
                        uVar4 = (&local_2050)[iVar19];
                        if (iVar6 == iVar7) {
                          memset(acStack_2510,0,0x40);
                          sprintf(acStack_2510,"[%02d]=%-10u ",iVar19,uVar4);
                          strcat(param_2,acStack_2510);
                        }
                        else {
                          iVar6 = FUN_0002af10(iVar7,iVar19);
                          uVar10 = FUN_0004748c(iVar2,iVar6 + -1);
                          memset(acStack_2510,0,0x40);
                          sprintf(acStack_2510,"%-15u ",uVar10);
                          strcat(param_2,acStack_2510);
                          (&local_2050)[iVar19] = uVar10 + uVar4;
                        }
                      }
                      sVar5 = strlen(param_2);
                      (param_2 + sVar5)[0] = '\n';
                      (param_2 + sVar5)[1] = '\0';
                    }
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar2 != 4);
                return 0;
              }
              iVar2 = strncmp(pcVar18,"/asic_nonce",0xb);
              if (iVar2 == 0) {
                local_2450[0] = CONCAT22(local_2450[0]._2_2_,0x2d);
                pcVar18 = strtok(pcVar18,(char *)local_2450);
                if ((pcVar18 == (char *)0x0) ||
                   (pcVar18 = strtok((char *)0x0,(char *)local_2450), pcVar18 == (char *)0x0)) {
                  lVar12 = 0;
                  lVar11 = 0;
                }
                else {
                  lVar11 = strtol(pcVar18,(char **)0x0,10);
                  pcVar18 = strtok((char *)0x0,(char *)local_2450);
                  if (pcVar18 == (char *)0x0) {
                    lVar12 = 0;
                  }
                  else {
                    lVar12 = strtol(pcVar18,(char **)0x0,10);
                    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (4 < DAT_000be644)) {
                      snprintf((char *)&local_2050,0x2000,"recvBuf = %s, chain = %d, asic = %d\n",
                               param_1,lVar11,lVar12);
                      FUN_0004948c(5,&local_2050,0);
                    }
                  }
                }
                uVar3 = FUN_0002a544();
                uVar13 = FUN_0002a574();
                uVar3 = FUN_00098658(uVar3,uVar13);
                for (iVar2 = 0; iVar7 = FUN_0002a544(), iVar2 < iVar7; iVar2 = iVar2 + 1) {
                  FUN_000988ec(iVar2,uVar3);
                  if (extraout_r1_00 == 0) {
                    sVar5 = strlen(param_2);
                    (param_2 + sVar5)[0] = '\n';
                    (param_2 + sVar5)[1] = '\0';
                  }
                  memset(&local_2050,0,0x40);
                  uVar4 = FUN_000474b0(lVar11,lVar12,iVar2);
                  sprintf((char *)&local_2050,"[%02d]=%-2u ",iVar2,uVar4);
                  strcat(param_2,(char *)&local_2050);
                }
                return 0;
              }
              iVar2 = strncmp(pcVar18,"/adc",4);
              if (iVar2 == 0) {
                pcVar18 = (char *)FUN_0002a4e4();
                iVar2 = strcmp(pcVar18,"H6HB70601");
                if (iVar2 != 0) {
                  pcVar18 = (char *)FUN_0002a4e4();
                  iVar2 = strcmp(pcVar18,"H6HB70602");
                  if (iVar2 != 0) {
                    pcVar18 = (char *)FUN_0002a4e4();
                    iVar2 = strcmp(pcVar18,"H6HB70501");
                    if (iVar2 != 0) {
                      pcVar18 = (char *)FUN_0002a4e4();
                      iVar2 = strcmp(pcVar18,"H6HB70801");
                      if (iVar2 != 0) {
                        pcVar18 = (char *)FUN_0002a4e4();
                        iVar2 = strcmp(pcVar18,"H6HB70802");
                        if (iVar2 != 0) {
                          iVar7 = 0;
                          iVar2 = 0;
                          do {
                            iVar19 = FUN_0002a6f0(iVar2);
                            if (iVar19 != 0) {
                              sVar5 = param_3 - iVar7;
                              pcVar18 = param_2 + iVar7;
                              iVar7 = iVar7 + 0x17;
                              snprintf(pcVar18,sVar5,"\t\t\td0\td1\td2\td3\tsum\tavg\n");
                              iVar19 = FUN_0002a514();
                              for (iVar6 = 0; iVar6 != iVar19; iVar6 = iVar6 + 1) {
                                uVar3 = FUN_0005419c(iVar2,iVar6,0);
                                uVar13 = FUN_0005419c(iVar2,iVar6,1);
                                uVar14 = FUN_0005419c(iVar2,iVar6,2);
                                uVar16 = FUN_0005419c(iVar2,iVar6,3);
                                uVar21 = FUN_000541b0(iVar2,iVar6);
                                uVar22 = FUN_000541c0(iVar2,iVar6);
                                iVar8 = snprintf(param_2 + iVar7,param_3 - iVar7,
                                                 "chain %2d asic %03d adc:\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n"
                                                 ,iVar2,iVar6,(double)CONCAT44(extraout_s1_00,uVar3)
                                                 ,(double)CONCAT44(extraout_s1_01,uVar13),
                                                 (double)CONCAT44(extraout_s1_02,uVar14),
                                                 (double)CONCAT44(extraout_s1_03,uVar16),
                                                 (double)CONCAT44(extraout_s1_04,uVar21),
                                                 (double)CONCAT44(extraout_s1_05,uVar22));
                                iVar7 = iVar7 + iVar8;
                              }
                            }
                            iVar2 = iVar2 + 1;
                          } while (iVar2 != 4);
                          return 0;
                        }
                      }
                    }
                  }
                }
                snprintf(param_2,param_3,"Not Supported");
                return 0;
              }
              iVar2 = strncmp(pcVar18,"/flush",6);
              if (iVar2 == 0) {
                FUN_0006c370();
                return 0;
              }
              uVar4 = strncmp(pcVar18,"/power",6);
              if (uVar4 != 0) {
                iVar2 = strncmp(pcVar18,"/clear_log",10);
                if (iVar2 == 0) {
                  bp = BIO_new_mem_buf("-----BEGIN PUBLIC KEY-----\nMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA45AR2B+uXo9jRnJ7Qhcn\nsCvu5dlzaTSViH5/KqQn5xoo5TsGH0bY2jOAZGCCBWP1TQmpEPIWJQKOJ59POAi+\nGqI5szJzAmTL/RjaQY8buHm5gzj2VJo0fhFCfjyfjWRDPhtcI31qZsfN0cxzhE51\neUxZD4AIdZq/qdP79GncQWRXpTykN4NOmS6B5q+oUmmJCngU+WthgDT1e6XxukyC\njz/z6dnnl+t6ndkp+SiqzQTyAMipHNZKjYmFqJzyAqtLQQWta9nn6g/Ysb1mSukA\nohh5BOmfCLMv2Dt2ka5PDwmpiQSvJxot3I3qTROHemOvsQa5W2FyRvk02YjIb/J0\nSQIDAQAB\n-----END PUBLIC KEY-----\n"
                                       ,-1);
                  if (bp != (BIO *)0x0) {
                    rsa = PEM_read_bio_RSA_PUBKEY(bp,(RSA **)0x0,(undefined1 *)0x0,(void *)0x0);
                    BIO_free(bp);
                    if (rsa != (RSA *)0x0) {
                      sVar5 = strlen(param_1 + 0xf);
                      if ((sVar5 & 1) == 0) {
                        from = malloc(sVar5 >> 1);
                        if (from != (uchar *)0x0) {
                          pcVar18 = param_1 + 0xf;
                          for (uVar4 = 0; uVar4 != sVar5 >> 1; uVar4 = uVar4 + 1) {
                            __isoc99_sscanf(pcVar18,"%2hhx",from + uVar4);
                            pcVar18 = pcVar18 + 2;
                          }
                          iVar2 = RSA_size(rsa);
                          to = malloc(iVar2 + sVar5);
                          if ((to != (uchar *)0x0) &&
                             (iVar2 = RSA_public_decrypt(uVar4,from,to,rsa,1), iVar2 != -1)) {
                            iVar2 = strncmp((char *)to,"Antminer ",9);
                            if (iVar2 == 0) {
                              sVar5 = strlen(&DAT_000c70a4);
                              iVar2 = strncmp((char *)(to + 9),&DAT_000c70a4,sVar5);
                              if (iVar2 == 0) {
                                FUN_00024584();
                                DAT_008c67b8 = 1;
                                if (DAT_008c7024 != 0) {
                                  pthread_join(DAT_008c7024,(void **)0x0);
                                  DAT_008c7024 = 0;
                                }
                                if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) ||
                                   (2 < DAT_000be644)) {
                                  local_2050._0_1_ = 'c';
                                  local_2050._1_1_ = 'l';
                                  local_2050._2_1_ = 'e';
                                  local_2050._3_1_ = 'a';
                                  builtin_strncpy(acStack_204c,"r_log st",8);
                                  uStack_2044._0_1_ = 'a';
                                  uStack_2044._1_1_ = 'r';
                                  uStack_2044._2_1_ = 't';
                                  uStack_2044._3_1_ = '\0';
                                  FUN_0004948c(3,&local_2050,0);
                                }
                                system(
                                      "rm -rf /etc/init.d/S71monitorcg && killall -9 S71monitorcg && killall -9 bitmain_logrotate && rm -rf /nvdata/* && rm -rf /tmp/* && sync"
                                      );
                                sleep(3);
                    /* WARNING: Subroutine does not return */
                                exit(0);
                              }
                            }
                            free(to);
                          }
                          free(from);
                        }
                      }
                      RSA_free(rsa);
                      return 0xffffffff;
                    }
                  }
                }
                return 0xffffffff;
              }
              local_2050 = uVar4;
              iVar2 = __isoc99_sscanf(pcVar18,"/power-%d",&local_2050);
              uVar4 = local_2050;
              if ((iVar2 == 1) && ((int)local_2050 < 4)) {
                uVar3 = FUN_000243f0(local_2050,1);
                snprintf(param_2,param_3,"chain %d power is %.2f",uVar4,
                         (double)CONCAT44(extraout_s1,uVar3));
                return 0;
              }
            }
          }
        }
        snprintf(param_2,param_3,"404 not found");
        return 0;
      }
      if ((DAT_008c702e != '\0') &&
         (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
        local_2050._0_1_ = 'c';
        local_2050._1_1_ = 'm';
        local_2050._2_1_ = 'd';
        local_2050._3_1_ = ' ';
        builtin_strncpy(acStack_204c,": get mi",8);
        uStack_2044._0_1_ = 'n';
        uStack_2044._1_1_ = 'e';
        uStack_2044._2_1_ = 'r';
        uStack_2044._3_1_ = ' ';
        local_2040._0_1_ = 's';
        local_2040._1_1_ = 'n';
        local_2040._2_1_ = '\0';
        FUN_0004948c(7,&local_2050,0);
      }
      if (DAT_008c7280 != '\0') {
        snprintf(param_2,0x20,"%s",&DAT_008c7280);
        return 0;
      }
      pcVar18 = "no power sn stored on board";
    }
    uVar3 = *(undefined4 *)(pcVar18 + 4);
    uVar13 = *(undefined4 *)(pcVar18 + 8);
    uVar16 = *(undefined4 *)(pcVar18 + 0xc);
    *(undefined4 *)param_2 = *(undefined4 *)pcVar18;
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 8) = uVar13;
    uVar3 = *(undefined4 *)(pcVar18 + 0x10);
    uVar13 = *(undefined4 *)(pcVar18 + 0x14);
    uVar14 = *(undefined4 *)(pcVar18 + 0x18);
    *(undefined4 *)(param_2 + 0xc) = uVar16;
    *(undefined4 *)(param_2 + 0x10) = uVar3;
    *(undefined4 *)(param_2 + 0x14) = uVar13;
    *(undefined4 *)(param_2 + 0x18) = uVar14;
  }
  return 0;
}

