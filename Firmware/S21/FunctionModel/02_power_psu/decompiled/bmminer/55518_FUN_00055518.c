// FUN_00055518 @ 00055518  size=4240  callers=1
// program: bmminer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_00055518(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,uint param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int extraout_r1;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint local_205c;
  uint local_2058;
  uint uStack_2054;
  uint uStack_2050;
  uint uStack_204c;
  undefined4 local_2048;
  undefined4 uStack_2044;
  undefined4 uStack_2040;
  uint uStack_203c;
  char local_2038 [16];
  char local_2028 [12];
  undefined4 local_201c;
  undefined4 local_2018;
  char acStack_2014 [4];
  undefined4 uStack_2010;
  undefined1 local_200c;
  
  iVar2 = FUN_000527e0();
  if ((iVar2 == 0) && (3 < DAT_000be63c)) {
    builtin_strncpy(local_2038,"Miner Bootsup",0xe);
    FUN_0004a06c(3,local_2038,0);
  }
  sem_init((sem_t *)&DAT_012a2938,0,0);
  local_2048 = param_5;
  uStack_2044 = param_6;
  uStack_2040 = param_7;
  uStack_203c = param_8;
  _DAT_00a6c8c8 = param_5;
  DAT_00a6c8cc = param_6;
  DAT_00a6c8d0 = param_7;
  DAT_00a6c8d4 = param_8;
  uVar8 = param_1 & 0xff;
  DAT_00a6c8b8 = param_1;
  DAT_00a6c8bc = param_2;
  DAT_00a6c8c0 = param_3;
  DAT_00a6c8c4 = param_4;
  local_2058 = param_1;
  uStack_2054 = param_2;
  uStack_2050 = param_3;
  uStack_204c = param_4;
  if (uVar8 != 0x51) {
    if (DAT_000be63c < 5) {
      return 0;
    }
    pcVar7 = "config_parameter.token_type != 0x%x, it is 0x%x\n";
    uVar9 = 0x51;
LAB_000555f0:
    snprintf(local_2038,0x2000,pcVar7,uVar9,uVar8);
    FUN_0004948c(4,local_2038);
    return 0;
  }
  uVar8 = FUN_0004d044(&DAT_00a6c8b8,0x1e);
  uVar9 = DAT_00a6c8d4 >> 0x10;
  if (uVar8 != uVar9) {
    if (DAT_000be63c < 5) {
      return 0;
    }
    pcVar7 = "config_parameter.crc = 0x%x, but we calculate it as 0x%x\n";
    goto LAB_000555f0;
  }
  if (4 < DAT_000be63c) {
    snprintf(local_2038,0x2000,"fan_eft : %d  fan_pwm : %d\n",(DAT_00a6c8bc & 3) >> 1,
             DAT_00a6c8c0 >> 0x10 & 0xff);
    FUN_0004948c(4,local_2038,0);
  }
  if (DAT_000be8e8 == 0) {
    cVar1 = FUN_00057ac4(0xa1);
    uVar8 = 0;
    do {
      uVar9 = uVar8 + 1;
      iVar2 = FUN_0002a6f0(uVar8);
      if (iVar2 != 0) {
        thunk_FUN_00083540(uVar8 & 0xff);
      }
      uVar8 = uVar9;
    } while (uVar9 != 4);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  cVar1 = FUN_00040744();
  if (cVar1 != '\0') {
    return 0;
  }
  if ((DAT_008c7074 == '\0') || ((DAT_00a6c8bc & 0x10) == 0)) {
    uVar8 = FUN_0004e344();
    if (0 < (int)uVar8) {
      DAT_008c706c = uVar8;
      goto LAB_00055708;
    }
LAB_00055c44:
    if ((uVar8 & 0xff) != 0) {
      return 0;
    }
  }
  else {
    DAT_008c706c = DAT_00a6c8c4 >> 0x10;
    uVar8 = FUN_0004e344();
    DAT_008c706c = uVar8;
    if ((int)uVar8 < 0) goto LAB_00055c44;
LAB_00055708:
    if (3 < DAT_000be63c) {
      snprintf(local_2038,0x2000,"fixed working voltage = %d\n",DAT_008c706c);
      FUN_0004948c(3,local_2038,0);
    }
  }
  cVar1 = FUN_00054a78();
  if (cVar1 != '\0') {
    return 0;
  }
  if ((DAT_008c7074 == '\0') || ((DAT_00a6c8bc & 8) == 0)) {
    iVar2 = 0;
    DAT_008c7040 = 200;
    do {
      iVar3 = FUN_0002a6f0(iVar2);
      if (iVar3 != 0) {
        (&DAT_008c7054)[iVar2] = 200;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
  }
  else {
    DAT_008c7040 = DAT_00a6c8c4 & 0xffff;
    iVar2 = 0;
    do {
      iVar3 = FUN_0002a6f0(iVar2);
      if (iVar3 != 0) {
        (&DAT_008c7054)[iVar2] = DAT_008c7040;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    uVar8 = 0;
    iVar2 = 0;
    local_205c = 0;
    do {
      iVar3 = FUN_0002a6f0(iVar2);
      if (iVar3 != 0) {
        iVar3 = FUN_0001c934(iVar2,DAT_000c94e8 & 0xff,&local_205c);
        if (iVar3 == 0) {
          (&DAT_008c7054)[iVar2] = local_205c;
          if (uVar8 < local_205c) {
            uVar8 = local_205c;
          }
        }
        else {
          (&DAT_008c7054)[iVar2] = 200;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    if (3 < DAT_000be63c) {
      snprintf(local_2038,0x2000,"max freq in eeprom = %d\n",uVar8);
      FUN_0004948c(3,local_2038,0);
    }
    if ((uVar8 == 0) || ((int)uVar8 < 1)) {
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2038,"failed to load",0xe);
        builtin_strncpy(local_2028,"req in eepro",0xc);
        local_201c._0_1_ = 'm';
        local_201c._1_1_ = ',';
        local_201c._2_1_ = ' ';
        local_201c._3_1_ = 'u';
        local_2018._0_1_ = 's';
        local_2018._1_1_ = 'i';
        local_2018._2_1_ = 'n';
        local_2018._3_1_ = 'g';
        builtin_strncpy(acStack_2014," def",4);
        uStack_2010._0_1_ = 'a';
        uStack_2010._1_1_ = 'u';
        uStack_2010._2_1_ = 'l';
        uStack_2010._3_1_ = 't';
        local_200c = 0;
        FUN_0004948c(3,local_2038,0);
      }
      iVar2 = 0;
      DAT_008c7040 = 200;
      do {
        iVar3 = FUN_0002a6f0(iVar2);
        if (iVar3 != 0) {
          (&DAT_008c7054)[iVar2] = 200;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 4);
    }
    else {
      iVar2 = 0;
      DAT_008c7040 = uVar8;
      do {
        iVar3 = FUN_0002a6f0(iVar2);
        if ((iVar3 != 0) && (iVar3 = FUN_0001d4fc(iVar2,&DAT_008c9aac + iVar2 * 0x40c), iVar3 != 0))
        {
          if (3 < DAT_000be63c) {
            builtin_strncpy(local_2038,"eeprom_get_swe",0xe);
            builtin_strncpy(local_2028,"_result erro",0xc);
            local_201c._0_1_ = 'r';
            local_201c._1_1_ = '\0';
            FUN_0004948c(3,local_2038,0);
          }
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 4);
    }
  }
  DAT_008c703c = DAT_008c7040;
  if (3 < DAT_000be63c) {
    snprintf(local_2038,0x2000,"fixed frequency is %d, g_frequency_offset is %d\n",DAT_008c7040,
             DAT_000be8ec);
    FUN_0004948c(3,local_2038,0);
  }
  pcVar7 = (char *)FUN_0002a4e4();
  iVar2 = strcmp(pcVar7,"H6HB70601");
  if (iVar2 == 0) {
    DAT_000bed30 = 0x1766;
    iVar2 = 0;
  }
  else {
    pcVar7 = (char *)FUN_0002a4e4();
    iVar2 = strcmp(pcVar7,"H6HB70801");
    if (iVar2 != 0) {
      pcVar7 = (char *)FUN_0002a4e4();
      iVar2 = strcmp(pcVar7,"H6HB70802");
      if (iVar2 != 0) goto LAB_00055870;
    }
    iVar2 = DAT_008c7040 * 0x3d9b5a59;
    DAT_000bed30 = (DAT_008c7040 * 0x16a5) / 0x267;
  }
LAB_00055870:
  if (3 < DAT_000be63c) {
    snprintf(local_2038,0x2000,"the target power is %d",DAT_000bed30);
    iVar2 = FUN_0004948c(3,local_2038,0);
  }
  if ((DAT_000c94e8 == 1) || ((int)DAT_008c706c < 1)) {
    FUN_00024584();
    pcVar7 = (char *)FUN_0002a4e4();
    iVar2 = strcmp(pcVar7,"H6HB70601");
    if (iVar2 != 0) {
      pcVar7 = (char *)FUN_0002a4e4();
      iVar2 = strcmp(pcVar7,"H6HB70602");
      if (iVar2 != 0) {
        pcVar7 = (char *)FUN_0002a4e4();
        iVar2 = strcmp(pcVar7,"H6HB70801");
        if (iVar2 != 0) {
          pcVar7 = (char *)FUN_0002a4e4();
          iVar2 = strcmp(pcVar7,"H6HB70802");
          if (iVar2 != 0) {
            pcVar7 = (char *)FUN_0002a4e4();
            iVar2 = strcmp(pcVar7,"H6HB70501");
            if (iVar2 != 0) {
              FUN_000170ac(0);
            }
          }
        }
      }
    }
    FUN_0004bf68(2000);
  }
  else {
    FUN_0002a584(iVar2);
    cVar1 = FUN_00019540();
    if (cVar1 == '\0') {
      FUN_0002ff50();
    }
    else {
      FUN_0002ff50(1);
      FUN_0004e8c8(0xf,"Can\'t get temperature sensor type!");
    }
  }
  while (iVar2 = FUN_00017a24(), iVar2 == 0) {
    sleep(1);
  }
  pcVar7 = (char *)FUN_0002a4e4();
  iVar3 = strcmp(pcVar7,"H6HB70801");
  if (iVar3 == 0) {
LAB_000558e8:
    DAT_008c7070 = 0;
  }
  else {
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"H6HB70802");
    if (iVar3 == 0) goto LAB_000558e8;
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"H6HB70601");
    if (iVar3 == 0) goto LAB_000558e8;
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"H6HB70602");
    if (iVar3 == 0) goto LAB_000558e8;
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"H6HB70501");
    if (iVar3 == 0) goto LAB_000558e8;
  }
  if (DAT_000c94e8 == 2) {
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"H6HB70601");
    if (iVar3 == 0) {
LAB_00055dd8:
      if (DAT_00a6c8f8 < 0x30) {
        if (DAT_00a6c8f8 < 0x2e) {
          if (DAT_00a6c8f8 < 0x2b) {
            uVar8 = 0x1db;
          }
          else {
            uVar8 = 0x1c7;
          }
        }
        else {
          uVar8 = 0x1b3;
        }
      }
      else {
        uVar8 = 0x19f;
      }
    }
    else {
      pcVar7 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar7,"H6HB70602");
      if (iVar3 == 0) goto LAB_00055dd8;
      pcVar7 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar7,"H6HB70501");
      if (iVar3 == 0) goto LAB_00055dd8;
      uVar8 = 0;
    }
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"H6HB70801");
    if (iVar3 != 0) {
      pcVar7 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar7,"H6HB70802");
      if (iVar3 == 0) goto LAB_00055e28;
      goto LAB_00055dac;
    }
LAB_00055e28:
    if (DAT_008c7040 < 0x2bd) goto LAB_00055944;
    DAT_008c7040 = 700;
  }
  else {
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"H6HB70801");
    if (iVar3 == 0) {
LAB_00055914:
      uVar8 = 700;
    }
    else {
      pcVar7 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar7,"H6HB70802");
      if (iVar3 == 0) goto LAB_00055914;
      uVar8 = 0;
    }
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"HHB68701");
    if (iVar3 == 0) {
      if (0x1ae < DAT_008c7040) {
        DAT_008c7040 = 0x1ae;
        goto LAB_00055950;
      }
    }
    else {
LAB_00055dac:
      if (uVar8 < DAT_008c7040) {
        DAT_008c7040 = uVar8;
      }
    }
LAB_00055944:
    if (DAT_008c7040 < 0x32) {
      DAT_008c7040 = 0x32;
    }
  }
LAB_00055950:
  if (DAT_000c94e4 != '\0') {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2038,"press any key ",0xe);
      builtin_strncpy(local_2028," start risin",0xc);
      local_201c._0_1_ = 'g';
      local_201c._1_1_ = ' ';
      local_201c._2_1_ = 'f';
      local_201c._3_1_ = 'r';
      local_2018._0_1_ = 'e';
      local_2018._1_1_ = 'q';
      local_2018._2_1_ = 'u';
      local_2018._3_1_ = 'e';
      builtin_strncpy(acStack_2014,"ncy.",4);
      uStack_2010._0_1_ = '.';
      uStack_2010._1_1_ = '.';
      uStack_2010._2_1_ = '\0';
      FUN_0004948c(3,local_2038,0);
    }
    _IO_getc(stdin);
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_000c02a8);
  FUN_000413d0(&DAT_00b71b00,0);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c02a8);
  FUN_00040dbc();
  FUN_00051d38();
  pcVar7 = (char *)FUN_0002a4e4();
  iVar3 = strcmp(pcVar7,"H6HB70801");
  if (iVar3 == 0) {
LAB_000559c8:
    uVar8 = 0;
    do {
      iVar3 = FUN_0002a6f0(uVar8);
      if ((iVar3 != 0) && (FUN_0008331c(uVar8 & 0xff), 4 < DAT_000be63c)) {
        snprintf(local_2038,0x2000,"set chain %d to read chip temp",uVar8);
        FUN_0004948c(4,local_2038,0);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 4);
  }
  else {
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"H6HB70802");
    if (iVar3 == 0) goto LAB_000559c8;
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"H6HB70601");
    if (iVar3 == 0) goto LAB_000559c8;
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"H6HB70602");
    if (iVar3 == 0) goto LAB_000559c8;
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"H6HB70501");
    if (iVar3 == 0) goto LAB_000559c8;
  }
  DAT_000c042c = 1;
  uVar8 = 0;
  do {
    uVar9 = uVar8 + 1;
    iVar3 = FUN_0002a6f0(uVar8);
    if (iVar3 != 0) {
      FUN_00082c74(uVar8 & 0xff,1);
    }
    uVar8 = uVar9;
  } while (uVar9 != 4);
  iVar3 = 0;
  FUN_00018bc0();
  do {
    iVar4 = FUN_0002a6f0(iVar3);
    if (iVar4 != 0) {
      iVar4 = 0;
      uVar8 = 0;
      puVar13 = &DAT_00aa88f0 + iVar3 * 0x200;
      while( true ) {
        iVar11 = uVar8 + iVar4;
        uVar9 = FUN_0002aacc(iVar3);
        if (uVar9 <= uVar8) break;
        uVar5 = FUN_0002a524();
        FUN_0009863c(uVar8,uVar5);
        iVar12 = iVar11;
        if (extraout_r1 == 0) {
          iVar4 = iVar4 + 1;
          iVar12 = uVar8 + iVar4;
          FUN_0002ac70(iVar3,iVar11,0x20);
        }
        uVar8 = uVar8 + 1;
        FUN_0002ac70(iVar3,iVar12,0x6f);
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13 = puVar13 + 2;
      }
      FUN_0002ac70(iVar3,iVar11,0x6f);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  cVar1 = FUN_00040858();
  if (cVar1 != '\0') {
    return 0;
  }
  if ((DAT_000be619 == '\0') || (uVar8 = FUN_00019f38(), 9 < uVar8)) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2038,"normal inc fre",0xe);
      builtin_strncpy(local_2028,"voltage",8);
      FUN_0004948c(3,local_2038,0);
    }
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"H6HB70601");
    if (iVar3 != 0) {
      pcVar7 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar7,"H6HB70801");
      if (iVar3 != 0) {
        pcVar7 = (char *)FUN_0002a4e4();
        iVar3 = strcmp(pcVar7,"H6HB70802");
        if (iVar3 != 0) {
          pcVar7 = (char *)FUN_0002a4e4();
          iVar3 = strcmp(pcVar7,"H6HB70602");
          if (iVar3 != 0) {
            pcVar7 = (char *)FUN_0002a4e4();
            iVar3 = strcmp(pcVar7,"H6HB70501");
            if (iVar3 != 0) {
              FUN_000170ac(0x28);
            }
          }
        }
      }
    }
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"H6HB70601");
    if (iVar3 != 0) {
      pcVar7 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar7,"H6HB70801");
      if (iVar3 != 0) {
        pcVar7 = (char *)FUN_0002a4e4();
        iVar3 = strcmp(pcVar7,"H6HB70802");
        if (iVar3 != 0) {
          pcVar7 = (char *)FUN_0002a4e4();
          iVar3 = strcmp(pcVar7,"H6HB70602");
          if (iVar3 != 0) {
            FUN_0002a4e4();
          }
        }
      }
    }
    iVar3 = FUN_00018aa0();
    if (iVar3 < 0x19) {
      uVar9 = DAT_008c706c + 0x1e;
      if (0x883 < (int)uVar9) {
        uVar9 = 0x884;
      }
      iVar4 = uVar9 - 0xf;
    }
    else if (iVar3 < 0x1e) {
      uVar8 = DAT_008c706c + 0x14;
LAB_000563e4:
      uVar9 = 0x884;
      if ((int)uVar8 < 0x884) {
        uVar9 = uVar8;
      }
      iVar4 = uVar9 - 0xf;
    }
    else {
      if (iVar3 < 0x23) {
        uVar9 = DAT_008c706c + 10;
        if (0x883 < (int)uVar9) {
          uVar9 = 0x884;
        }
        iVar4 = uVar9 - 0xf;
        if (iVar3 < 0x28) goto LAB_00055ae4;
      }
      else {
        uVar8 = DAT_008c706c;
        if (iVar3 < 0x28) goto LAB_000563e4;
      }
      uVar9 = DAT_008c706c - 10;
      iVar4 = DAT_008c706c - 0x19;
    }
LAB_00055ae4:
    if (iVar4 < 0x6bd) {
      uVar9 = 0x6cc;
      iVar4 = 0x6bd;
    }
    FUN_000246cc(uVar9,3);
    uVar5 = FUN_0002ae38();
    FUN_0004ebd0(uVar5,uVar9,iVar4);
    sem_post((sem_t *)&DAT_012a2938);
  }
  else {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2038,"opt_bitmain_hi",0xe);
      builtin_strncpy(local_2028,"_voltage_ope",0xc);
      local_201c._0_1_ = 'n';
      local_201c._1_1_ = '_';
      local_201c._2_1_ = 'c';
      local_201c._3_1_ = 'o';
      local_2018._0_1_ = 'r';
      local_2018._1_1_ = 'e';
      local_2018._2_1_ = '\0';
      FUN_0004948c(3,local_2038,0);
    }
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"H6HB70601");
    if (iVar3 != 0) {
      pcVar7 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar7,"H6HB70801");
      if (iVar3 != 0) {
        pcVar7 = (char *)FUN_0002a4e4();
        iVar3 = strcmp(pcVar7,"H6HB70802");
        if (iVar3 != 0) {
          pcVar7 = (char *)FUN_0002a4e4();
          iVar3 = strcmp(pcVar7,"H6HB70602");
          if (iVar3 != 0) {
            pcVar7 = (char *)FUN_0002a4e4();
            iVar3 = strcmp(pcVar7,"H6HB70501");
            if (iVar3 != 0) {
              FUN_000170ac(0x28);
            }
          }
        }
      }
    }
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"H6HB70601");
    if (iVar3 == 0) {
LAB_00056218:
      iVar3 = DAT_008c7070 + 0x884;
      if (0x883 < iVar3) {
        iVar3 = 0x884;
      }
    }
    else {
      pcVar7 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar7,"H6HB70602");
      if (iVar3 == 0) goto LAB_00056218;
      pcVar7 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar7,"H6HB70801");
      if (iVar3 == 0) goto LAB_00056218;
      pcVar7 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar7,"H6HB70802");
      if (iVar3 == 0) goto LAB_00056218;
      pcVar7 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar7,"H6HB70501");
      if (iVar3 == 0) goto LAB_00056218;
      iVar3 = 0;
    }
    iVar4 = DAT_008c7070;
    uVar8 = DAT_008c706c;
    uVar9 = FUN_00018aa0();
    uVar10 = uVar9 & 0xffff;
    if (uVar10 - 0x29 < 5) {
      iVar4 = DAT_008c706c - 0xf;
      iVar3 = DAT_008c706c - 5;
    }
    else if (uVar10 - 0x2e < 2) {
      iVar4 = DAT_008c706c - 0x19;
      iVar3 = DAT_008c706c - 0xf;
    }
    else if (uVar10 - 0x30 < 4) {
      iVar4 = DAT_008c706c - 0x28;
      iVar3 = DAT_008c706c - 0x1e;
    }
    else if ((int)uVar9 < 0x34) {
      iVar4 = uVar8 + iVar4 + 0x78;
    }
    else {
      iVar4 = DAT_008c706c - 0x32;
      iVar3 = DAT_008c706c - 0x28;
    }
    FUN_000246cc(iVar3,3);
    FUN_0004ebd0(3000,iVar3,iVar4);
    sem_post((sem_t *)&DAT_012a2938);
  }
  cVar1 = FUN_0004096c();
  if (cVar1 != '\0') {
    return 0;
  }
  if (DAT_000be610 != '\0') {
    FUN_00040ca8();
  }
  FUN_000189d8();
  uVar8 = 0;
  do {
    uVar9 = uVar8 + 1;
    iVar3 = FUN_0002a6f0(uVar8);
    if (iVar3 != 0) {
      uVar5 = FUN_0002a584();
      uVar6 = FUN_0002a514();
      FUN_00081e64(uVar8 & 0xff,uVar5,uVar6);
    }
    uVar8 = uVar9;
  } while (uVar9 != 4);
  FUN_0006b924();
  iVar3 = FUN_00024f54();
  if ((iVar3 != 0) && (cVar1 = FUN_00040630(), cVar1 != '\0')) {
    return 0;
  }
  pcVar7 = (char *)FUN_0002a4e4();
  iVar3 = strcmp(pcVar7,"H6HB70601");
  if (iVar3 != 0) {
    pcVar7 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar7,"H6HB70801");
    if (iVar3 != 0) {
      pcVar7 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar7,"H6HB70802");
      if (iVar3 != 0) {
        pcVar7 = (char *)FUN_0002a4e4();
        iVar3 = strcmp(pcVar7,"H6HB70602");
        if (iVar3 != 0) {
          pcVar7 = (char *)FUN_0002a4e4();
          iVar3 = strcmp(pcVar7,"H6HB70501");
          if (iVar3 != 0) goto LAB_00055bb8;
        }
      }
    }
  }
  FUN_00018c0c();
LAB_00055bb8:
  if (DAT_000be63c < 4) {
    return iVar2;
  }
  builtin_strncpy(local_2038,"Init done!\n",0xc);
  FUN_0004948c(3,local_2038,0);
  return iVar2;
}

