// FUN_00039544 @ 00039544  size=2548  callers=1
// program: bmminer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00039544(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,uint param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int extraout_r1;
  char *pcVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  uint local_85c;
  uint local_858;
  uint uStack_854;
  uint uStack_850;
  uint uStack_84c;
  undefined4 local_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  uint uStack_83c;
  char local_838 [16];
  undefined4 local_828;
  char acStack_824 [20];
  undefined4 uStack_810;
  undefined1 local_80c;
  
  local_848 = param_5;
  uStack_844 = param_6;
  uStack_840 = param_7;
  uStack_83c = param_8;
  _DAT_00b2d210 = param_5;
  DAT_00b2d214 = param_6;
  DAT_00b2d218 = param_7;
  DAT_00b2d21c = param_8;
  uVar5 = param_1 & 0xff;
  DAT_00b2d200 = param_1;
  DAT_00b2d204 = param_2;
  DAT_00b2d208 = param_3;
  DAT_00b2d20c = param_4;
  local_858 = param_1;
  uStack_854 = param_2;
  uStack_850 = param_3;
  uStack_84c = param_4;
  if (uVar5 != 0x51) {
    if (DAT_00087bbc < 5) {
      return 0;
    }
    pcVar6 = "config_parameter.token_type != 0x%x, it is 0x%x\n";
    uVar8 = 0x51;
LAB_000395e0:
    snprintf(local_838,0x800,pcVar6,uVar8,uVar5);
    FUN_00032218(4,local_838,0);
    return 0;
  }
  uVar5 = FUN_00035b18(&DAT_00b2d200,0x1e);
  uVar8 = DAT_00b2d21c >> 0x10;
  if (uVar5 != uVar8) {
    if (DAT_00087bbc < 5) {
      return 0;
    }
    pcVar6 = "config_parameter.crc = 0x%x, but we calculate it as 0x%x\n";
    goto LAB_000395e0;
  }
  if (3 < DAT_00087bbc) {
    snprintf(local_838,0x800,"fan_eft : %d  fan_pwm : %d\n",(DAT_00b2d204 & 3) >> 1,
             DAT_00b2d208 >> 0x10 & 0xff);
    FUN_00032218(3,local_838,0);
  }
  if (DAT_00087dec == 0) {
    cVar1 = FUN_0003b5bc(0xa1);
    uVar5 = 0;
    do {
      uVar8 = uVar5 + 1;
      iVar2 = FUN_000201d8(uVar5);
      if (iVar2 != 0) {
        thunk_FUN_0005924c(uVar5 & 0xff);
      }
      uVar5 = uVar8;
    } while (uVar8 != 4);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  cVar1 = FUN_0002b268();
  if (cVar1 != '\0') {
    return 0;
  }
  if ((DAT_0048d39d == '\0') || ((DAT_00b2d204 & 0x10) == 0)) {
    uVar5 = FUN_000361d4();
    if (0 < (int)uVar5) {
      DAT_0048d3d4 = uVar5;
      goto LAB_000396d4;
    }
    if ((uVar5 & 0xff) != 0) {
      return 0;
    }
  }
  else {
    DAT_0048d3d4 = DAT_00b2d20c >> 0x10;
    DAT_0048d3d4 = FUN_000361d4();
LAB_000396d4:
    if (3 < DAT_00087bbc) {
      snprintf(local_838,0x800,"fixed working voltage = %d\n",DAT_0048d3d4);
      FUN_00032218(3,local_838,0);
    }
  }
  cVar1 = FUN_000388ec();
  if (cVar1 != '\0') {
    return 0;
  }
  if ((DAT_0048d39d == '\0') || ((DAT_00b2d204 & 8) == 0)) {
    DAT_0048d398 = 200;
  }
  else {
    DAT_0048d398 = DAT_00b2d20c & 0xffff;
    iVar2 = 0;
    uVar5 = 0;
    do {
      iVar3 = FUN_000201d8(iVar2);
      uVar8 = uVar5;
      if ((((iVar3 != 0) && (iVar3 = FUN_0001ba18(iVar2,DAT_0008a848 & 0xff,&local_85c), iVar3 == 0)
           ) && (uVar8 = local_85c, uVar5 != 0)) && (uVar8 = uVar5, local_85c <= uVar5)) {
        uVar8 = local_85c;
      }
      iVar2 = iVar2 + 1;
      uVar5 = uVar8;
    } while (iVar2 != 4);
    if (3 < DAT_00087bbc) {
      snprintf(local_838,0x800,"min freq in eeprom = %d\n",uVar8);
      FUN_00032218(3,local_838,0);
    }
    if ((uVar8 == 0) || ((int)uVar8 < 1)) {
      if (3 < DAT_00087bbc) {
        builtin_strncpy(local_838,"failed to load f",0x10);
        local_828._0_1_ = 'r';
        local_828._1_1_ = 'e';
        local_828._2_1_ = 'q';
        local_828._3_1_ = ' ';
        builtin_strncpy(acStack_824,"in eeprom, using def",0x14);
        uStack_810._0_1_ = 'a';
        uStack_810._1_1_ = 'u';
        uStack_810._2_1_ = 'l';
        uStack_810._3_1_ = 't';
        local_80c = 0;
        FUN_00032218(3,local_838,0);
      }
      DAT_0048d398 = 200;
    }
    else {
      DAT_0048d398 = uVar8;
    }
  }
  if (3 < DAT_00087bbc) {
    snprintf(local_838,0x800,"fixed frequency is %d\n",DAT_0048d398);
    FUN_00032218(3,local_838,0);
  }
  if (DAT_0008a848 == 3) {
    pcVar6 = (char *)FUN_0001fffc();
    iVar2 = strcmp(pcVar6,"HHB28601");
    if (iVar2 == 0) {
      fVar13 = 0.94;
      iVar2 = 3;
    }
    else {
      FUN_0001fffc();
      iVar2 = 2;
      fVar13 = 0.96;
    }
    fVar12 = (float)VectorSignedToFloat(DAT_0048d3d4,(byte)(in_fpscr >> 0x16) & 3);
    DAT_0048d3d4 = (int)(longlong)(fVar12 * fVar13 * 0.1 + 0.5) * 10;
    if ((int)DAT_0048d3d4 < 0x6d6) {
      DAT_0048d3d4 = 0x6d6;
    }
    iVar3 = FUN_0001d4a4();
    if (iVar3 == 0) {
      iVar2 = iVar2 + -1;
    }
    DAT_0048d398 = DAT_0048d398 + iVar2 * -0x19;
  }
  if ((DAT_0008a848 == 1) || ((int)DAT_0048d3d4 < 1)) {
    FUN_0001cb8c();
    pcVar6 = (char *)FUN_0001fffc();
    iVar2 = strcmp(pcVar6,"HHB28601");
    if (iVar2 != 0) {
      pcVar6 = (char *)FUN_0001fffc();
      iVar2 = strcmp(pcVar6,"HHB28602");
      if (iVar2 != 0) {
        FUN_00015968(0);
      }
    }
    FUN_00034a5c(2000);
  }
  else {
    FUN_0002009c();
    cVar1 = FUN_000185e8();
    if (cVar1 == '\0') {
      FUN_00022a5c();
    }
    else {
      FUN_00022a5c(1);
      FUN_00036380(0xe,"Can\'t get temperature sensor type!");
    }
  }
  pcVar6 = (char *)FUN_0001fffc();
  iVar2 = strcmp(pcVar6,"HHB28601");
  if (iVar2 == 0) {
LAB_000397d0:
    if (DAT_00b2d224 < 0x2b) {
      if (DAT_00b2d224 < 0x28) {
        if (DAT_00b2d224 < 3) {
          iVar2 = 0x6e;
        }
        else if (DAT_00b2d224 < 6) {
          iVar2 = 100;
        }
        else if (DAT_00b2d224 < 9) {
          iVar2 = 0x5a;
        }
        else if (DAT_00b2d224 < 0xc) {
          iVar2 = 0x50;
        }
        else if (DAT_00b2d224 < 0xf) {
          iVar2 = 0x46;
        }
        else if (DAT_00b2d224 < 0x12) {
          iVar2 = 0x3c;
        }
        else if (DAT_00b2d224 < 0x15) {
          iVar2 = 0x32;
        }
        else if (DAT_00b2d224 < 0x18) {
          iVar2 = 0x28;
        }
        else if (DAT_00b2d224 < 0x1b) {
          iVar2 = 0x1e;
        }
        else if (DAT_00b2d224 < 0x1e) {
          iVar2 = 0x14;
        }
        else {
          if (DAT_00b2d224 != 0x1e) goto LAB_00039874;
          iVar2 = 10;
        }
      }
      else {
        iVar2 = -0x14;
      }
    }
    else {
      iVar2 = -0x1e;
    }
  }
  else {
    pcVar6 = (char *)FUN_0001fffc();
    iVar2 = strcmp(pcVar6,"HHB28602");
    if (iVar2 == 0) goto LAB_000397d0;
LAB_00039874:
    iVar2 = 0;
  }
  if (DAT_0008a844 != '\0') {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_838,"press any key to",0x10);
      local_828._0_1_ = ' ';
      local_828._1_1_ = 's';
      local_828._2_1_ = 't';
      local_828._3_1_ = 'a';
      builtin_strncpy(acStack_824,"rt rising frequency.",0x14);
      uStack_810._0_1_ = '.';
      uStack_810._1_1_ = '.';
      uStack_810._2_1_ = '\0';
      FUN_00032218(3,local_838,0);
    }
    _IO_getc(stdin);
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00089070);
  FUN_0002bb00(12000000);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00089070);
  pcVar6 = (char *)FUN_0001fffc();
  iVar3 = strcmp(pcVar6,"HHB28601");
  if (iVar3 == 0) {
LAB_000398fc:
    FUN_0001779c();
    FUN_00034a5c(0x960);
  }
  else {
    pcVar6 = (char *)FUN_0001fffc();
    iVar3 = strcmp(pcVar6,"HHB28602");
    if (iVar3 == 0) goto LAB_000398fc;
  }
  if (DAT_00087b89 == '\0') {
    FUN_00038d58();
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_838,"do_check_core_pl",0x10);
      local_828._0_1_ = 'l';
      local_828._1_1_ = '\n';
      local_828._2_1_ = '\0';
      FUN_00032218(3,local_838,0);
    }
  }
  else if ((0 < (int)DAT_0048d3d4) && (uVar5 = FUN_0001cf54(), uVar5 != DAT_0048d3d4)) {
    iVar3 = FUN_00018cb8();
    if (iVar3 < 0x14) {
      bVar7 = DAT_00087b88 & 1;
    }
    else {
      bVar7 = 0;
    }
    if (bVar7 == 0) {
      FUN_0001cc60(DAT_0048d3d4 + 0x14);
    }
    else {
      iVar3 = 0x834;
      if ((int)(iVar2 + DAT_0048d3d4) < 0x834) {
        iVar3 = iVar2 + DAT_0048d3d4;
      }
      FUN_0001cc60(iVar3);
    }
    FUN_00034a5c(4000);
  }
  FUN_00034a5c(1000);
  iVar2 = FUN_0002003c();
  if (iVar2 == 2) {
    uVar5 = 0;
    do {
      uVar8 = uVar5 & 0xff;
      iVar2 = FUN_000201d8(uVar5);
      if (iVar2 != 0) {
        pcVar6 = (char *)FUN_0001fffc();
        iVar2 = strcmp(pcVar6,"HHB28601");
        if (iVar2 != 0) {
          pcVar6 = (char *)FUN_0001fffc();
          iVar2 = strcmp(pcVar6,"HHB28602");
          if (iVar2 == 0) {
            iVar2 = FUN_0002009c();
            FUN_000582a4(uVar8,iVar2 * 0x13,0);
            iVar2 = FUN_0002009c();
            FUN_000582a4(uVar8,iVar2 * 0x37,0);
            goto LAB_00039bb4;
          }
        }
        for (iVar2 = 5; iVar3 = FUN_0002002c(), iVar2 < iVar3; iVar2 = iVar2 + 6) {
          iVar3 = FUN_0002009c();
          FUN_000582a4(uVar8,iVar2 * iVar3,0);
          if (4 < DAT_00087bbc) {
            snprintf(local_838,0x800,"set_asic_inv_clko_en chain%d, asic:%d!\n",uVar5,iVar2);
            FUN_00032218(4,local_838,0);
          }
        }
      }
LAB_00039bb4:
      uVar5 = uVar5 + 1;
    } while (uVar5 != 4);
  }
  FUN_00036380(1,"soc init done!");
  cVar1 = FUN_0002b5b0();
  if (cVar1 != '\0') {
    return 0;
  }
  pcVar6 = (char *)FUN_0001fffc();
  iVar2 = strcmp(pcVar6,"HHB28601");
  if (iVar2 != 0) {
    pcVar6 = (char *)FUN_0001fffc();
    iVar2 = strcmp(pcVar6,"HHB28602");
    if (iVar2 != 0) goto LAB_00039988;
  }
  cVar1 = FUN_0002b380();
  if (cVar1 != '\0') {
    return 0;
  }
LAB_00039988:
  iVar2 = 0;
  do {
    iVar3 = FUN_000201d8(iVar2);
    if (iVar3 != 0) {
      iVar3 = 0;
      uVar5 = 0;
      puVar11 = &DAT_00b2b1e0 + iVar2 * 0x200;
      while( true ) {
        iVar9 = uVar5 + iVar3;
        uVar8 = FUN_000205b4(iVar2);
        if (uVar8 <= uVar5) break;
        uVar4 = FUN_0002003c();
        FUN_000673ec(uVar5,uVar4);
        iVar10 = iVar9;
        if (extraout_r1 == 0) {
          iVar3 = iVar3 + 1;
          iVar10 = uVar5 + iVar3;
          FUN_00020758(iVar2,iVar9,0x20);
        }
        uVar5 = uVar5 + 1;
        FUN_00020758(iVar2,iVar10,0x6f);
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11 = puVar11 + 2;
      }
      FUN_00020758(iVar2,iVar9,0x6f);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  cVar1 = FUN_0002b498();
  if (cVar1 != '\0') {
    return 0;
  }
  if (DAT_0008a838 != '\0') {
    FUN_0002b6c8();
  }
  FUN_0002f78c();
  FUN_00036788();
  FUN_00034a5c(500);
  if (DAT_00087bbc < 4) {
    return 1;
  }
  builtin_strncpy(local_838,"Init done!\n",0xc);
  FUN_00032218(3,local_838,0);
  return 1;
}

