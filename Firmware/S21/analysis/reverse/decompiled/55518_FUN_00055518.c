// FUN_00055518 @ 00055518  size=4240
// callers: [FUN_00015500]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_00055518(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,uint param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int extraout_r1;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
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
  char local_2038 [4];
  char acStack_2034 [4];
  char acStack_2030 [4];
  undefined2 local_202c;
  char local_2028 [4];
  char acStack_2024 [4];
  char acStack_2020 [4];
  undefined2 local_201c [2];
  undefined3 local_2018;
  char cStack_2015;
  char acStack_2014 [4];
  undefined3 uStack_2010;
  char cStack_200d;
  undefined1 local_200c;
  
  iVar2 = FUN_000527e0();
  if ((iVar2 == 0) && (3 < DAT_000be63c)) {
    local_2038[0] = s_Miner_Bootsup_000a57d0[0];
    local_2038[1] = s_Miner_Bootsup_000a57d0[1];
    local_2038[2] = s_Miner_Bootsup_000a57d0[2];
    local_2038[3] = s_Miner_Bootsup_000a57d0[3];
    acStack_2034[0] = s_Miner_Bootsup_000a57d0[4];
    acStack_2034[1] = s_Miner_Bootsup_000a57d0[5];
    acStack_2034[2] = s_Miner_Bootsup_000a57d0[6];
    acStack_2034[3] = s_Miner_Bootsup_000a57d0[7];
    acStack_2030[0] = s_Miner_Bootsup_000a57d0[8];
    acStack_2030[1] = s_Miner_Bootsup_000a57d0[9];
    acStack_2030[2] = s_Miner_Bootsup_000a57d0[10];
    acStack_2030[3] = s_Miner_Bootsup_000a57d0[0xb];
    local_202c = (undefined2)ram0x000a57dc;
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
  uVar7 = param_1 & 0xff;
  DAT_00a6c8b8 = param_1;
  DAT_00a6c8bc = param_2;
  DAT_00a6c8c0 = param_3;
  DAT_00a6c8c4 = param_4;
  local_2058 = param_1;
  uStack_2054 = param_2;
  uStack_2050 = param_3;
  uStack_204c = param_4;
  if (uVar7 != 0x51) {
    if (DAT_000be63c < 5) {
      return 0;
    }
    pcVar6 = "config_parameter.token_type != 0x%x, it is 0x%x\n";
    uVar8 = 0x51;
LAB_000555f0:
    snprintf(local_2038,0x2000,pcVar6,uVar8,uVar7);
    FUN_0004948c(4,local_2038);
    return 0;
  }
  uVar7 = FUN_0004d044(&DAT_00a6c8b8,0x1e);
  uVar8 = DAT_00a6c8d4 >> 0x10;
  if (uVar7 != uVar8) {
    if (DAT_000be63c < 5) {
      return 0;
    }
    pcVar6 = "config_parameter.crc = 0x%x, but we calculate it as 0x%x\n";
    goto LAB_000555f0;
  }
  if (4 < DAT_000be63c) {
    snprintf(local_2038,0x2000,"fan_eft : %d  fan_pwm : %d\n",(DAT_00a6c8bc & 3) >> 1,
             DAT_00a6c8c0 >> 0x10 & 0xff);
    FUN_0004948c(4,local_2038,0);
  }
  if (DAT_000be8e8 == 0) {
    cVar1 = FUN_00057ac4(0xa1);
    uVar7 = 0;
    do {
      uVar8 = uVar7 + 1;
      iVar2 = FUN_0002a6f0(uVar7);
      if (iVar2 != 0) {
        thunk_FUN_00083540(uVar7 & 0xff);
      }
      uVar7 = uVar8;
    } while (uVar8 != 4);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  cVar1 = FUN_00040744();
  if (cVar1 != '\0') {
    return 0;
  }
  if ((DAT_008c7074 == '\0') || ((DAT_00a6c8bc & 0x10) == 0)) {
    uVar7 = FUN_0004e344();
    if (0 < (int)uVar7) {
      DAT_008c706c = uVar7;
      goto LAB_00055708;
    }
LAB_00055c44:
    if ((uVar7 & 0xff) != 0) {
      return 0;
    }
  }
  else {
    DAT_008c706c = DAT_00a6c8c4 >> 0x10;
    uVar7 = FUN_0004e344();
    DAT_008c706c = uVar7;
    if ((int)uVar7 < 0) goto LAB_00055c44;
LAB_00055708:
    if (3 < DAT_000be63c) {
      snprintf(local_2038,0x2000,"fixed working voltage = %d\n",DAT_008c706c);
      FUN_0004948c(3,local_2038,0);
    }
  }
  cVar1 = FUN_00054a78();
  iVar2 = DAT_000565a8;
  if (cVar1 != '\0') {
    return 0;
  }
  if ((DAT_008c7074 == '\0') || ((DAT_00a6c8bc & 8) == 0)) {
    iVar12 = 0;
    DAT_008c7040 = 200;
    do {
      iVar3 = FUN_0002a6f0(iVar12);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar2 + iVar12 * 4) = 200;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != 4);
  }
  else {
    DAT_008c7040 = DAT_00a6c8c4 & 0xffff;
    iVar12 = 0;
    do {
      iVar3 = FUN_0002a6f0(iVar12);
      if (iVar3 != 0) {
        *(uint *)(iVar2 + iVar12 * 4) = DAT_008c7040;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != 4);
    uVar7 = 0;
    iVar2 = 0;
    local_205c = 0;
    do {
      iVar12 = FUN_0002a6f0(iVar2);
      if (iVar12 != 0) {
        iVar12 = FUN_0001c934(iVar2,DAT_000c94e8 & 0xff,&local_205c);
        if (iVar12 == 0) {
          *(uint *)(DAT_000565a8 + iVar2 * 4) = local_205c;
          if (uVar7 < local_205c) {
            uVar7 = local_205c;
          }
        }
        else {
          *(undefined4 *)(DAT_000565a8 + iVar2 * 4) = 200;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    if (3 < DAT_000be63c) {
      snprintf(local_2038,0x2000,"max freq in eeprom = %d\n",uVar7);
      FUN_0004948c(3,local_2038,0);
    }
    if ((uVar7 == 0) || ((int)uVar7 < 1)) {
      if (3 < DAT_000be63c) {
        local_2038[0] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0];
        local_2038[1] = s_failed_to_load_freq_in_eeprom__u_000a58c4[1];
        local_2038[2] = s_failed_to_load_freq_in_eeprom__u_000a58c4[2];
        local_2038[3] = s_failed_to_load_freq_in_eeprom__u_000a58c4[3];
        acStack_2034[0] = s_failed_to_load_freq_in_eeprom__u_000a58c4[4];
        acStack_2034[1] = s_failed_to_load_freq_in_eeprom__u_000a58c4[5];
        acStack_2034[2] = s_failed_to_load_freq_in_eeprom__u_000a58c4[6];
        acStack_2034[3] = s_failed_to_load_freq_in_eeprom__u_000a58c4[7];
        acStack_2030[0] = s_failed_to_load_freq_in_eeprom__u_000a58c4[8];
        acStack_2030[1] = s_failed_to_load_freq_in_eeprom__u_000a58c4[9];
        acStack_2030[2] = s_failed_to_load_freq_in_eeprom__u_000a58c4[10];
        acStack_2030[3] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0xb];
        local_202c = s_failed_to_load_freq_in_eeprom__u_000a58c4._12_2_;
        local_2028[0] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x10];
        local_2028[1] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x11];
        local_2028[2] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x12];
        local_2028[3] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x13];
        acStack_2024[0] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x14];
        acStack_2024[1] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x15];
        acStack_2024[2] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x16];
        acStack_2024[3] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x17];
        acStack_2020[0] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x18];
        acStack_2020[1] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x19];
        acStack_2020[2] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x1a];
        acStack_2020[3] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x1b];
        local_201c = (undefined2  [2])s_failed_to_load_freq_in_eeprom__u_000a58c4._28_4_;
        local_2018._0_1_ = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x20];
        local_2018._1_1_ = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x21];
        local_2018._2_1_ = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x22];
        cStack_2015 = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x23];
        acStack_2014[0] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x24];
        acStack_2014[1] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x25];
        acStack_2014[2] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x26];
        acStack_2014[3] = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x27];
        uStack_2010._0_1_ = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x28];
        uStack_2010._1_1_ = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x29];
        uStack_2010._2_1_ = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x2a];
        cStack_200d = s_failed_to_load_freq_in_eeprom__u_000a58c4[0x2b];
        local_200c = (undefined1)ram0x000a58f0;
        FUN_0004948c(3,local_2038,0);
      }
      iVar2 = DAT_000565a8;
      iVar12 = 0;
      DAT_008c7040 = 200;
      do {
        iVar3 = FUN_0002a6f0(iVar12);
        if (iVar3 != 0) {
          *(undefined4 *)(iVar2 + iVar12 * 4) = 200;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != 4);
    }
    else {
      iVar2 = 0;
      DAT_008c7040 = uVar7;
      do {
        iVar12 = FUN_0002a6f0(iVar2);
        if ((iVar12 != 0) &&
           (iVar12 = FUN_0001d4fc(iVar2,&DAT_008c9aac + iVar2 * 0x40c), iVar12 != 0)) {
          if (3 < DAT_000be63c) {
            local_2038[0] = s_eeprom_get_sweep_result_error_000a58a4[0];
            local_2038[1] = s_eeprom_get_sweep_result_error_000a58a4[1];
            local_2038[2] = s_eeprom_get_sweep_result_error_000a58a4[2];
            local_2038[3] = s_eeprom_get_sweep_result_error_000a58a4[3];
            acStack_2034[0] = s_eeprom_get_sweep_result_error_000a58a4[4];
            acStack_2034[1] = s_eeprom_get_sweep_result_error_000a58a4[5];
            acStack_2034[2] = s_eeprom_get_sweep_result_error_000a58a4[6];
            acStack_2034[3] = s_eeprom_get_sweep_result_error_000a58a4[7];
            acStack_2030[0] = s_eeprom_get_sweep_result_error_000a58a4[8];
            acStack_2030[1] = s_eeprom_get_sweep_result_error_000a58a4[9];
            acStack_2030[2] = s_eeprom_get_sweep_result_error_000a58a4[10];
            acStack_2030[3] = s_eeprom_get_sweep_result_error_000a58a4[0xb];
            local_202c = s_eeprom_get_sweep_result_error_000a58a4._12_2_;
            local_2028[0] = s_eeprom_get_sweep_result_error_000a58a4[0x10];
            local_2028[1] = s_eeprom_get_sweep_result_error_000a58a4[0x11];
            local_2028[2] = s_eeprom_get_sweep_result_error_000a58a4[0x12];
            local_2028[3] = s_eeprom_get_sweep_result_error_000a58a4[0x13];
            acStack_2024[0] = s_eeprom_get_sweep_result_error_000a58a4[0x14];
            acStack_2024[1] = s_eeprom_get_sweep_result_error_000a58a4[0x15];
            acStack_2024[2] = s_eeprom_get_sweep_result_error_000a58a4[0x16];
            acStack_2024[3] = s_eeprom_get_sweep_result_error_000a58a4[0x17];
            acStack_2020[0] = s_eeprom_get_sweep_result_error_000a58a4[0x18];
            acStack_2020[1] = s_eeprom_get_sweep_result_error_000a58a4[0x19];
            acStack_2020[2] = s_eeprom_get_sweep_result_error_000a58a4[0x1a];
            acStack_2020[3] = s_eeprom_get_sweep_result_error_000a58a4[0x1b];
            local_201c[0] = (short)ram0x000a58c0;
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
  pcVar6 = (char *)FUN_0002a4e4();
  iVar2 = strcmp(pcVar6,"H6HB70601");
  if (iVar2 == 0) {
    DAT_000bed30 = 0x1766;
    iVar2 = 0;
  }
  else {
    pcVar6 = (char *)FUN_0002a4e4();
    iVar2 = strcmp(pcVar6,"H6HB70801");
    if (iVar2 != 0) {
      pcVar6 = (char *)FUN_0002a4e4();
      iVar2 = strcmp(pcVar6,"H6HB70802");
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
    pcVar6 = (char *)FUN_0002a4e4();
    iVar2 = strcmp(pcVar6,"H6HB70601");
    if (iVar2 != 0) {
      pcVar6 = (char *)FUN_0002a4e4();
      iVar2 = strcmp(pcVar6,"H6HB70602");
      if (iVar2 != 0) {
        pcVar6 = (char *)FUN_0002a4e4();
        iVar2 = strcmp(pcVar6,"H6HB70801");
        if (iVar2 != 0) {
          pcVar6 = (char *)FUN_0002a4e4();
          iVar2 = strcmp(pcVar6,"H6HB70802");
          if (iVar2 != 0) {
            pcVar6 = (char *)FUN_0002a4e4();
            iVar2 = strcmp(pcVar6,"H6HB70501");
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
  pcVar6 = (char *)FUN_0002a4e4();
  iVar12 = strcmp(pcVar6,"H6HB70801");
  if (iVar12 == 0) {
LAB_000558e8:
    DAT_008c7070 = 0;
  }
  else {
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"H6HB70802");
    if (iVar12 == 0) goto LAB_000558e8;
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"H6HB70601");
    if (iVar12 == 0) goto LAB_000558e8;
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"H6HB70602");
    if (iVar12 == 0) goto LAB_000558e8;
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"H6HB70501");
    if (iVar12 == 0) goto LAB_000558e8;
  }
  if (DAT_000c94e8 == 2) {
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"H6HB70601");
    if (iVar12 == 0) {
LAB_00055dd8:
      if (DAT_00a6c8f8 < 0x30) {
        if (DAT_00a6c8f8 < 0x2e) {
          if (DAT_00a6c8f8 < 0x2b) {
            uVar7 = 0x1db;
          }
          else {
            uVar7 = 0x1c7;
          }
        }
        else {
          uVar7 = 0x1b3;
        }
      }
      else {
        uVar7 = 0x19f;
      }
    }
    else {
      pcVar6 = (char *)FUN_0002a4e4();
      iVar12 = strcmp(pcVar6,"H6HB70602");
      if (iVar12 == 0) goto LAB_00055dd8;
      pcVar6 = (char *)FUN_0002a4e4();
      iVar12 = strcmp(pcVar6,"H6HB70501");
      if (iVar12 == 0) goto LAB_00055dd8;
      uVar7 = 0;
    }
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"H6HB70801");
    if (iVar12 != 0) {
      pcVar6 = (char *)FUN_0002a4e4();
      iVar12 = strcmp(pcVar6,"H6HB70802");
      if (iVar12 == 0) goto LAB_00055e28;
      goto LAB_00055dac;
    }
LAB_00055e28:
    if (DAT_008c7040 < 0x2bd) goto LAB_00055944;
    DAT_008c7040 = 700;
  }
  else {
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"H6HB70801");
    if (iVar12 == 0) {
LAB_00055914:
      uVar7 = 700;
    }
    else {
      pcVar6 = (char *)FUN_0002a4e4();
      iVar12 = strcmp(pcVar6,"H6HB70802");
      if (iVar12 == 0) goto LAB_00055914;
      uVar7 = 0;
    }
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"HHB68701");
    if (iVar12 == 0) {
      if (0x1ae < DAT_008c7040) {
        DAT_008c7040 = 0x1ae;
        goto LAB_00055950;
      }
    }
    else {
LAB_00055dac:
      if (uVar7 < DAT_008c7040) {
        DAT_008c7040 = uVar7;
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
      local_2038[0] = s_press_any_key_to_start_rising_fr_000a5940[0];
      local_2038[1] = s_press_any_key_to_start_rising_fr_000a5940[1];
      local_2038[2] = s_press_any_key_to_start_rising_fr_000a5940[2];
      local_2038[3] = s_press_any_key_to_start_rising_fr_000a5940[3];
      acStack_2034[0] = s_press_any_key_to_start_rising_fr_000a5940[4];
      acStack_2034[1] = s_press_any_key_to_start_rising_fr_000a5940[5];
      acStack_2034[2] = s_press_any_key_to_start_rising_fr_000a5940[6];
      acStack_2034[3] = s_press_any_key_to_start_rising_fr_000a5940[7];
      acStack_2030[0] = s_press_any_key_to_start_rising_fr_000a5940[8];
      acStack_2030[1] = s_press_any_key_to_start_rising_fr_000a5940[9];
      acStack_2030[2] = s_press_any_key_to_start_rising_fr_000a5940[10];
      acStack_2030[3] = s_press_any_key_to_start_rising_fr_000a5940[0xb];
      local_202c = s_press_any_key_to_start_rising_fr_000a5940._12_2_;
      local_2028[0] = s_press_any_key_to_start_rising_fr_000a5940[0x10];
      local_2028[1] = s_press_any_key_to_start_rising_fr_000a5940[0x11];
      local_2028[2] = s_press_any_key_to_start_rising_fr_000a5940[0x12];
      local_2028[3] = s_press_any_key_to_start_rising_fr_000a5940[0x13];
      acStack_2024[0] = s_press_any_key_to_start_rising_fr_000a5940[0x14];
      acStack_2024[1] = s_press_any_key_to_start_rising_fr_000a5940[0x15];
      acStack_2024[2] = s_press_any_key_to_start_rising_fr_000a5940[0x16];
      acStack_2024[3] = s_press_any_key_to_start_rising_fr_000a5940[0x17];
      acStack_2020[0] = s_press_any_key_to_start_rising_fr_000a5940[0x18];
      acStack_2020[1] = s_press_any_key_to_start_rising_fr_000a5940[0x19];
      acStack_2020[2] = s_press_any_key_to_start_rising_fr_000a5940[0x1a];
      acStack_2020[3] = s_press_any_key_to_start_rising_fr_000a5940[0x1b];
      local_201c = (undefined2  [2])s_press_any_key_to_start_rising_fr_000a5940._28_4_;
      local_2018._0_1_ = s_press_any_key_to_start_rising_fr_000a5940[0x20];
      local_2018._1_1_ = s_press_any_key_to_start_rising_fr_000a5940[0x21];
      local_2018._2_1_ = s_press_any_key_to_start_rising_fr_000a5940[0x22];
      cStack_2015 = s_press_any_key_to_start_rising_fr_000a5940[0x23];
      acStack_2014[0] = s_press_any_key_to_start_rising_fr_000a5940[0x24];
      acStack_2014[1] = s_press_any_key_to_start_rising_fr_000a5940[0x25];
      acStack_2014[2] = s_press_any_key_to_start_rising_fr_000a5940[0x26];
      acStack_2014[3] = s_press_any_key_to_start_rising_fr_000a5940[0x27];
      uStack_2010 = (undefined3)ram0x000a5968;
      FUN_0004948c(3,local_2038,0);
    }
    _IO_getc(stdin);
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_000c02a8);
  FUN_000413d0(&DAT_00b71b00,0);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c02a8);
  FUN_00040dbc();
  FUN_00051d38();
  pcVar6 = (char *)FUN_0002a4e4();
  iVar12 = strcmp(pcVar6,"H6HB70801");
  if (iVar12 == 0) {
LAB_000559c8:
    uVar7 = 0;
    do {
      iVar12 = FUN_0002a6f0(uVar7);
      if ((iVar12 != 0) && (FUN_0008331c(uVar7 & 0xff), 4 < DAT_000be63c)) {
        snprintf(local_2038,0x2000,"set chain %d to read chip temp",uVar7);
        FUN_0004948c(4,local_2038,0);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 4);
  }
  else {
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"H6HB70802");
    if (iVar12 == 0) goto LAB_000559c8;
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"H6HB70601");
    if (iVar12 == 0) goto LAB_000559c8;
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"H6HB70602");
    if (iVar12 == 0) goto LAB_000559c8;
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"H6HB70501");
    if (iVar12 == 0) goto LAB_000559c8;
  }
  DAT_000c042c = 1;
  uVar7 = 0;
  do {
    uVar8 = uVar7 + 1;
    iVar12 = FUN_0002a6f0(uVar7);
    if (iVar12 != 0) {
      FUN_00082c74(uVar7 & 0xff,1);
    }
    uVar7 = uVar8;
  } while (uVar8 != 4);
  iVar12 = 0;
  FUN_00018bc0();
  do {
    iVar3 = FUN_0002a6f0(iVar12);
    if (iVar3 != 0) {
      iVar3 = 0;
      uVar7 = 0;
      puVar13 = &DAT_00aa88f0 + iVar12 * 0x200;
      while( true ) {
        iVar10 = uVar7 + iVar3;
        uVar8 = FUN_0002aacc(iVar12);
        if (uVar8 <= uVar7) break;
        uVar4 = FUN_0002a524();
        FUN_0009863c(uVar7,uVar4);
        iVar11 = iVar10;
        if (extraout_r1 == 0) {
          iVar3 = iVar3 + 1;
          iVar11 = uVar7 + iVar3;
          FUN_0002ac70(iVar12,iVar10,0x20);
        }
        uVar7 = uVar7 + 1;
        FUN_0002ac70(iVar12,iVar11,0x6f);
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13 = puVar13 + 2;
      }
      FUN_0002ac70(iVar12,iVar10,0x6f);
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 != 4);
  cVar1 = FUN_00040858();
  if (cVar1 != '\0') {
    return 0;
  }
  if ((DAT_000be619 == '\0') || (uVar7 = FUN_00019f38(), 9 < uVar7)) {
    if (3 < DAT_000be63c) {
      local_2038[0] = s_normal_inc_freq_voltage_000a59b0[0];
      local_2038[1] = s_normal_inc_freq_voltage_000a59b0[1];
      local_2038[2] = s_normal_inc_freq_voltage_000a59b0[2];
      local_2038[3] = s_normal_inc_freq_voltage_000a59b0[3];
      acStack_2034[0] = s_normal_inc_freq_voltage_000a59b0[4];
      acStack_2034[1] = s_normal_inc_freq_voltage_000a59b0[5];
      acStack_2034[2] = s_normal_inc_freq_voltage_000a59b0[6];
      acStack_2034[3] = s_normal_inc_freq_voltage_000a59b0[7];
      acStack_2030[0] = s_normal_inc_freq_voltage_000a59b0[8];
      acStack_2030[1] = s_normal_inc_freq_voltage_000a59b0[9];
      acStack_2030[2] = s_normal_inc_freq_voltage_000a59b0[10];
      acStack_2030[3] = s_normal_inc_freq_voltage_000a59b0[0xb];
      local_202c = s_normal_inc_freq_voltage_000a59b0._12_2_;
      local_2028[0] = s_normal_inc_freq_voltage_000a59b0[0x10];
      local_2028[1] = s_normal_inc_freq_voltage_000a59b0[0x11];
      local_2028[2] = s_normal_inc_freq_voltage_000a59b0[0x12];
      local_2028[3] = s_normal_inc_freq_voltage_000a59b0[0x13];
      acStack_2024[0] = s_normal_inc_freq_voltage_000a59b0[0x14];
      acStack_2024[1] = s_normal_inc_freq_voltage_000a59b0[0x15];
      acStack_2024[2] = s_normal_inc_freq_voltage_000a59b0[0x16];
      acStack_2024[3] = s_normal_inc_freq_voltage_000a59b0[0x17];
      FUN_0004948c(3,local_2038,0);
    }
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"H6HB70601");
    if (iVar12 != 0) {
      pcVar6 = (char *)FUN_0002a4e4();
      iVar12 = strcmp(pcVar6,"H6HB70801");
      if (iVar12 != 0) {
        pcVar6 = (char *)FUN_0002a4e4();
        iVar12 = strcmp(pcVar6,"H6HB70802");
        if (iVar12 != 0) {
          pcVar6 = (char *)FUN_0002a4e4();
          iVar12 = strcmp(pcVar6,"H6HB70602");
          if (iVar12 != 0) {
            pcVar6 = (char *)FUN_0002a4e4();
            iVar12 = strcmp(pcVar6,"H6HB70501");
            if (iVar12 != 0) {
              FUN_000170ac(0x28);
            }
          }
        }
      }
    }
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"H6HB70601");
    if (iVar12 != 0) {
      pcVar6 = (char *)FUN_0002a4e4();
      iVar12 = strcmp(pcVar6,"H6HB70801");
      if (iVar12 != 0) {
        pcVar6 = (char *)FUN_0002a4e4();
        iVar12 = strcmp(pcVar6,"H6HB70802");
        if (iVar12 != 0) {
          pcVar6 = (char *)FUN_0002a4e4();
          iVar12 = strcmp(pcVar6,"H6HB70602");
          if (iVar12 != 0) {
            FUN_0002a4e4();
          }
        }
      }
    }
    iVar12 = FUN_00018aa0();
    if (iVar12 < 0x19) {
      uVar8 = DAT_008c706c + 0x1e;
      if (0x883 < (int)uVar8) {
        uVar8 = 0x884;
      }
      iVar3 = uVar8 - 0xf;
    }
    else if (iVar12 < 0x1e) {
      uVar7 = DAT_008c706c + 0x14;
LAB_000563e4:
      uVar8 = 0x884;
      if ((int)uVar7 < 0x884) {
        uVar8 = uVar7;
      }
      iVar3 = uVar8 - 0xf;
    }
    else {
      if (iVar12 < 0x23) {
        uVar8 = DAT_008c706c + 10;
        if (0x883 < (int)uVar8) {
          uVar8 = 0x884;
        }
        iVar3 = uVar8 - 0xf;
        if (iVar12 < 0x28) goto LAB_00055ae4;
      }
      else {
        uVar7 = DAT_008c706c;
        if (iVar12 < 0x28) goto LAB_000563e4;
      }
      uVar8 = DAT_008c706c - 10;
      iVar3 = DAT_008c706c - 0x19;
    }
LAB_00055ae4:
    if (iVar3 < 0x6bd) {
      uVar8 = 0x6cc;
      iVar3 = 0x6bd;
    }
    FUN_000246cc(uVar8,3);
    uVar4 = FUN_0002ae38();
    FUN_0004ebd0(uVar4,uVar8,iVar3);
    sem_post((sem_t *)&DAT_012a2938);
  }
  else {
    if (3 < DAT_000be63c) {
      local_2038[0] = s_opt_bitmain_high_voltage_open_co_000a598c[0];
      local_2038[1] = s_opt_bitmain_high_voltage_open_co_000a598c[1];
      local_2038[2] = s_opt_bitmain_high_voltage_open_co_000a598c[2];
      local_2038[3] = s_opt_bitmain_high_voltage_open_co_000a598c[3];
      acStack_2034[0] = s_opt_bitmain_high_voltage_open_co_000a598c[4];
      acStack_2034[1] = s_opt_bitmain_high_voltage_open_co_000a598c[5];
      acStack_2034[2] = s_opt_bitmain_high_voltage_open_co_000a598c[6];
      acStack_2034[3] = s_opt_bitmain_high_voltage_open_co_000a598c[7];
      acStack_2030[0] = s_opt_bitmain_high_voltage_open_co_000a598c[8];
      acStack_2030[1] = s_opt_bitmain_high_voltage_open_co_000a598c[9];
      acStack_2030[2] = s_opt_bitmain_high_voltage_open_co_000a598c[10];
      acStack_2030[3] = s_opt_bitmain_high_voltage_open_co_000a598c[0xb];
      local_202c = s_opt_bitmain_high_voltage_open_co_000a598c._12_2_;
      local_2028[0] = s_opt_bitmain_high_voltage_open_co_000a598c[0x10];
      local_2028[1] = s_opt_bitmain_high_voltage_open_co_000a598c[0x11];
      local_2028[2] = s_opt_bitmain_high_voltage_open_co_000a598c[0x12];
      local_2028[3] = s_opt_bitmain_high_voltage_open_co_000a598c[0x13];
      acStack_2024[0] = s_opt_bitmain_high_voltage_open_co_000a598c[0x14];
      acStack_2024[1] = s_opt_bitmain_high_voltage_open_co_000a598c[0x15];
      acStack_2024[2] = s_opt_bitmain_high_voltage_open_co_000a598c[0x16];
      acStack_2024[3] = s_opt_bitmain_high_voltage_open_co_000a598c[0x17];
      acStack_2020[0] = s_opt_bitmain_high_voltage_open_co_000a598c[0x18];
      acStack_2020[1] = s_opt_bitmain_high_voltage_open_co_000a598c[0x19];
      acStack_2020[2] = s_opt_bitmain_high_voltage_open_co_000a598c[0x1a];
      acStack_2020[3] = s_opt_bitmain_high_voltage_open_co_000a598c[0x1b];
      local_201c = (undefined2  [2])s_opt_bitmain_high_voltage_open_co_000a598c._28_4_;
      local_2018 = (undefined3)ram0x000a59ac;
      FUN_0004948c(3,local_2038,0);
    }
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"H6HB70601");
    if (iVar12 != 0) {
      pcVar6 = (char *)FUN_0002a4e4();
      iVar12 = strcmp(pcVar6,"H6HB70801");
      if (iVar12 != 0) {
        pcVar6 = (char *)FUN_0002a4e4();
        iVar12 = strcmp(pcVar6,"H6HB70802");
        if (iVar12 != 0) {
          pcVar6 = (char *)FUN_0002a4e4();
          iVar12 = strcmp(pcVar6,"H6HB70602");
          if (iVar12 != 0) {
            pcVar6 = (char *)FUN_0002a4e4();
            iVar12 = strcmp(pcVar6,"H6HB70501");
            if (iVar12 != 0) {
              FUN_000170ac(0x28);
            }
          }
        }
      }
    }
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"H6HB70601");
    if (iVar12 == 0) {
LAB_00056218:
      iVar12 = DAT_008c7070 + 0x884;
      if (0x883 < iVar12) {
        iVar12 = 0x884;
      }
    }
    else {
      pcVar6 = (char *)FUN_0002a4e4();
      iVar12 = strcmp(pcVar6,"H6HB70602");
      if (iVar12 == 0) goto LAB_00056218;
      pcVar6 = (char *)FUN_0002a4e4();
      iVar12 = strcmp(pcVar6,"H6HB70801");
      if (iVar12 == 0) goto LAB_00056218;
      pcVar6 = (char *)FUN_0002a4e4();
      iVar12 = strcmp(pcVar6,"H6HB70802");
      if (iVar12 == 0) goto LAB_00056218;
      pcVar6 = (char *)FUN_0002a4e4();
      iVar12 = strcmp(pcVar6,"H6HB70501");
      if (iVar12 == 0) goto LAB_00056218;
      iVar12 = 0;
    }
    iVar3 = DAT_008c7070;
    uVar7 = DAT_008c706c;
    uVar8 = FUN_00018aa0();
    uVar9 = uVar8 & 0xffff;
    if (uVar9 - 0x29 < 5) {
      iVar3 = DAT_008c706c - 0xf;
      iVar12 = DAT_008c706c - 5;
    }
    else if (uVar9 - 0x2e < 2) {
      iVar3 = DAT_008c706c - 0x19;
      iVar12 = DAT_008c706c - 0xf;
    }
    else if (uVar9 - 0x30 < 4) {
      iVar3 = DAT_008c706c - 0x28;
      iVar12 = DAT_008c706c - 0x1e;
    }
    else if ((int)uVar8 < 0x34) {
      iVar3 = uVar7 + iVar3 + 0x78;
    }
    else {
      iVar3 = DAT_008c706c - 0x32;
      iVar12 = DAT_008c706c - 0x28;
    }
    FUN_000246cc(iVar12,3);
    FUN_0004ebd0(3000,iVar12,iVar3);
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
  uVar7 = 0;
  do {
    uVar8 = uVar7 + 1;
    iVar12 = FUN_0002a6f0(uVar7);
    if (iVar12 != 0) {
      uVar4 = FUN_0002a584();
      uVar5 = FUN_0002a514();
      FUN_00081e64(uVar7 & 0xff,uVar4,uVar5);
    }
    uVar7 = uVar8;
  } while (uVar8 != 4);
  FUN_0006b924();
  iVar12 = FUN_00024f54();
  if ((iVar12 != 0) && (cVar1 = FUN_00040630(), cVar1 != '\0')) {
    return 0;
  }
  pcVar6 = (char *)FUN_0002a4e4();
  iVar12 = strcmp(pcVar6,"H6HB70601");
  if (iVar12 != 0) {
    pcVar6 = (char *)FUN_0002a4e4();
    iVar12 = strcmp(pcVar6,"H6HB70801");
    if (iVar12 != 0) {
      pcVar6 = (char *)FUN_0002a4e4();
      iVar12 = strcmp(pcVar6,"H6HB70802");
      if (iVar12 != 0) {
        pcVar6 = (char *)FUN_0002a4e4();
        iVar12 = strcmp(pcVar6,"H6HB70602");
        if (iVar12 != 0) {
          pcVar6 = (char *)FUN_0002a4e4();
          iVar12 = strcmp(pcVar6,"H6HB70501");
          if (iVar12 != 0) goto LAB_00055bb8;
        }
      }
    }
  }
  FUN_00018c0c();
LAB_00055bb8:
  if (DAT_000be63c < 4) {
    return iVar2;
  }
  local_2038[0] = s_Init_done__000a59c8[0];
  local_2038[1] = s_Init_done__000a59c8[1];
  local_2038[2] = s_Init_done__000a59c8[2];
  local_2038[3] = s_Init_done__000a59c8[3];
  acStack_2034[0] = s_Init_done__000a59c8[4];
  acStack_2034[1] = s_Init_done__000a59c8[5];
  acStack_2034[2] = s_Init_done__000a59c8[6];
  acStack_2034[3] = s_Init_done__000a59c8[7];
  acStack_2030[0] = s_Init_done__000a59c8[8];
  acStack_2030[1] = s_Init_done__000a59c8[9];
  acStack_2030[2] = s_Init_done__000a59c8[10];
  acStack_2030[3] = s_Init_done__000a59c8[0xb];
  FUN_0004948c(3,local_2038,0);
  return iVar2;
}


