// FUN_00054a78 @ 00054a78  size=2716
// callers: [FUN_00055518, FUN_0005ad54]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00054a78(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char local_2019;
  char local_2018 [4];
  char acStack_2014 [4];
  char acStack_2010 [4];
  char acStack_200c [4];
  undefined2 local_2008;
  char cStack_2006;
  char acStack_2004 [4];
  char acStack_2000 [4];
  undefined2 local_1ffc [2];
  undefined2 local_1ff8 [2];
  undefined1 local_1ff4;
  
  FUN_0004f3b8();
  iVar3 = 0;
  while( true ) {
    iVar1 = FUN_0002a4f4();
    if (iVar1 <= iVar3) break;
    FUN_0006c86c(iVar3);
    iVar3 = iVar3 + 1;
  }
  pcVar2 = (char *)FUN_0002a4e4();
  iVar3 = strcmp(pcVar2,"H6HB70601");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70602");
    if (iVar3 != 0) {
      pcVar2 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar2,"H6HB70501");
      if (iVar3 != 0) {
        pcVar2 = (char *)FUN_0002a4e4();
        iVar3 = strcmp(pcVar2,"H6HB70801");
        if (iVar3 != 0) {
          pcVar2 = (char *)FUN_0002a4e4();
          iVar3 = strcmp(pcVar2,"H6HB70802");
          if (iVar3 != 0) {
            iVar3 = FUN_00016de0(4000,1);
            if (iVar3 != 0) {
              return iVar3;
            }
            if (3 < DAT_000be63c) {
              local_2018[0] = s_Fan_check_passed__000a55e8[0];
              local_2018[1] = s_Fan_check_passed__000a55e8[1];
              local_2018[2] = s_Fan_check_passed__000a55e8[2];
              local_2018[3] = s_Fan_check_passed__000a55e8[3];
              acStack_2014[0] = s_Fan_check_passed__000a55e8[4];
              acStack_2014[1] = s_Fan_check_passed__000a55e8[5];
              acStack_2014[2] = s_Fan_check_passed__000a55e8[6];
              acStack_2014[3] = s_Fan_check_passed__000a55e8[7];
              acStack_2010[0] = s_Fan_check_passed__000a55e8[8];
              acStack_2010[1] = s_Fan_check_passed__000a55e8[9];
              acStack_2010[2] = s_Fan_check_passed__000a55e8[10];
              acStack_2010[3] = s_Fan_check_passed__000a55e8[0xb];
              acStack_200c[0] = s_Fan_check_passed__000a55e8[0xc];
              acStack_200c[1] = s_Fan_check_passed__000a55e8[0xd];
              acStack_200c[2] = s_Fan_check_passed__000a55e8[0xe];
              acStack_200c[3] = s_Fan_check_passed__000a55e8[0xf];
              local_2008 = (undefined2)ram0x000a55f8;
              cStack_2006 = (char)((uint)ram0x000a55f8 >> 0x10);
              FUN_0004948c(3,local_2018,0);
            }
          }
        }
      }
    }
  }
  FUN_00019120();
  FUN_0004e8c8(1,"soc init done!");
  sleep(5);
  FUN_00018bac();
  sleep(5);
  local_2019 = '\0';
  iVar3 = FUN_00074c9c(&local_2019);
  if ((iVar3 == 0) && (local_2019 != '\0')) {
    FUN_00078010(1);
    pcVar2 = (char *)FUN_00074d68();
    if (pcVar2 != (char *)0x0) {
      if (DAT_000be63c < 4) {
        if (*pcVar2 == 'N') goto LAB_00054b3c;
      }
      else {
        snprintf(local_2018,0x2000,"power sn:%s\n",pcVar2);
        FUN_0004948c(3,local_2018,0);
        if (*pcVar2 == 'N') goto LAB_000553ac;
      }
      strncpy(DAT_00055514,pcVar2,0x1f);
    }
LAB_000553ac:
    if (3 < DAT_000be63c) {
      iVar3 = FUN_00074db8();
      snprintf(local_2018,0x2000,"enable_power_calibration, calibration date:%d.\n",iVar3);
      FUN_0004948c(3,local_2018,0);
    }
  }
  else if (3 < DAT_000be63c) {
    local_2018[0] = s_warning_power_is_not_calibrated__000a564c[0];
    local_2018[1] = s_warning_power_is_not_calibrated__000a564c[1];
    local_2018[2] = s_warning_power_is_not_calibrated__000a564c[2];
    local_2018[3] = s_warning_power_is_not_calibrated__000a564c[3];
    acStack_2014[0] = s_warning_power_is_not_calibrated__000a564c[4];
    acStack_2014[1] = s_warning_power_is_not_calibrated__000a564c[5];
    acStack_2014[2] = s_warning_power_is_not_calibrated__000a564c[6];
    acStack_2014[3] = s_warning_power_is_not_calibrated__000a564c[7];
    acStack_2010[0] = s_warning_power_is_not_calibrated__000a564c[8];
    acStack_2010[1] = s_warning_power_is_not_calibrated__000a564c[9];
    acStack_2010[2] = s_warning_power_is_not_calibrated__000a564c[10];
    acStack_2010[3] = s_warning_power_is_not_calibrated__000a564c[0xb];
    acStack_200c[0] = s_warning_power_is_not_calibrated__000a564c[0xc];
    acStack_200c[1] = s_warning_power_is_not_calibrated__000a564c[0xd];
    acStack_200c[2] = s_warning_power_is_not_calibrated__000a564c[0xe];
    acStack_200c[3] = s_warning_power_is_not_calibrated__000a564c[0xf];
    local_2008 = s_warning_power_is_not_calibrated__000a564c._16_2_;
    cStack_2006 = s_warning_power_is_not_calibrated__000a564c[0x12];
    acStack_2004[0] = s_warning_power_is_not_calibrated__000a564c[0x14];
    acStack_2004[1] = s_warning_power_is_not_calibrated__000a564c[0x15];
    acStack_2004[2] = s_warning_power_is_not_calibrated__000a564c[0x16];
    acStack_2004[3] = s_warning_power_is_not_calibrated__000a564c[0x17];
    acStack_2000[0] = s_warning_power_is_not_calibrated__000a564c[0x18];
    acStack_2000[1] = s_warning_power_is_not_calibrated__000a564c[0x19];
    acStack_2000[2] = s_warning_power_is_not_calibrated__000a564c[0x1a];
    acStack_2000[3] = s_warning_power_is_not_calibrated__000a564c[0x1b];
    local_1ffc = (undefined2  [2])s_warning_power_is_not_calibrated__000a564c._28_4_;
    local_1ff8[0] = (short)ram0x000a566c;
    FUN_0004948c(3,local_2018,0);
  }
LAB_00054b3c:
  FUN_00045658();
  FUN_00018b98();
  while (iVar3 = FUN_00017a24(), iVar3 == 0) {
    sleep(1);
  }
  if (DAT_000bfb48 == 3) {
    DAT_00a6c8f8 = FUN_00019e18();
  }
  else if (DAT_000bfb48 == 4) {
    DAT_00a6c8f8 = FUN_00019f38();
  }
  else {
    DAT_00a6c8f8 = FUN_00019d24();
  }
  if (3 < DAT_000be63c) {
    snprintf(local_2018,0x2000,"Sensor localtion:%d, Bring up temperature is %d\n",DAT_000bfb48,
             DAT_00a6c8f8);
    FUN_0004948c(3,local_2018,0);
  }
  pcVar2 = (char *)FUN_0002a4e4();
  iVar3 = strcmp(pcVar2,"H6HB70801");
  if (iVar3 == 0) {
LAB_00054bdc:
    if ((0x2c < DAT_00a6c8f8) && (iVar3 = FUN_00018978(), iVar3 == 0)) {
      DAT_008c7051 = 1;
    }
  }
  else {
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70802");
    if (iVar3 == 0) goto LAB_00054bdc;
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70602");
    if (iVar3 == 0) goto LAB_00054bdc;
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70501");
    if (iVar3 == 0) goto LAB_00054bdc;
  }
  pcVar2 = (char *)FUN_0002a4e4();
  iVar3 = strcmp(pcVar2,"H6HB70601");
  if (iVar3 == 0) {
LAB_00054c18:
    if ((DAT_00a6c8f8 < 0) && (iVar3 = FUN_00018978(), iVar3 == 0)) {
      DAT_008c7050 = 1;
      FUN_00056e88(9,0xff);
      FUN_0002ff38(1);
      FUN_0004e8c8(0xf,"Water temperature is too low!");
    }
  }
  else {
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70801");
    if (iVar3 == 0) goto LAB_00054c18;
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70802");
    if (iVar3 == 0) goto LAB_00054c18;
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70602");
    if (iVar3 == 0) goto LAB_00054c18;
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70501");
    if (iVar3 == 0) goto LAB_00054c18;
  }
  pcVar2 = (char *)FUN_0002a4e4();
  iVar3 = strcmp(pcVar2,"HHB68502");
  if (iVar3 == 0) {
    iVar3 = 0x37;
  }
  else {
    iVar3 = 0x36;
  }
  pcVar2 = (char *)FUN_0002a4e4();
  iVar1 = strcmp(pcVar2,"H6HB70601");
  if (iVar1 == 0) {
LAB_00054c58:
    if (iVar3 <= DAT_00a6c8f8) {
      FUN_00056e88(8,0xff);
      FUN_0002ff38(1);
      FUN_0004e8c8(0xf,"Water temperature is too high!");
    }
  }
  else {
    pcVar2 = (char *)FUN_0002a4e4();
    iVar1 = strcmp(pcVar2,"H6HB70801");
    if (iVar1 == 0) goto LAB_00054c58;
    pcVar2 = (char *)FUN_0002a4e4();
    iVar1 = strcmp(pcVar2,"H6HB70802");
    if (iVar1 == 0) goto LAB_00054c58;
    pcVar2 = (char *)FUN_0002a4e4();
    iVar1 = strcmp(pcVar2,"H6HB70602");
    if (iVar1 == 0) goto LAB_00054c58;
    pcVar2 = (char *)FUN_0002a4e4();
    iVar1 = strcmp(pcVar2,"H6HB70501");
    if (iVar1 == 0) goto LAB_00054c58;
    pcVar2 = (char *)FUN_0002a4e4();
    iVar1 = strcmp(pcVar2,"HHB68502");
    if (iVar1 == 0) goto LAB_00054c58;
    pcVar2 = (char *)FUN_0002a4e4();
    iVar1 = strcmp(pcVar2,"HHB68501");
    if (iVar1 == 0) goto LAB_00054c58;
    pcVar2 = (char *)FUN_0002a4e4();
    iVar1 = strcmp(pcVar2,"HHB68701");
    if (iVar1 == 0) goto LAB_00054c58;
    pcVar2 = (char *)FUN_0002a4e4();
    iVar1 = strcmp(pcVar2,"HHB68601");
    if (iVar1 == 0) goto LAB_00054c58;
    pcVar2 = (char *)FUN_0002a4e4();
    iVar1 = strcmp(pcVar2,"HHB68602");
    if (iVar1 == 0) goto LAB_00054c58;
    pcVar2 = (char *)FUN_0002a4e4();
    iVar1 = strcmp(pcVar2,"HHB56611");
    if (iVar1 == 0) goto LAB_00054c58;
  }
  iVar3 = FUN_0002adf8();
  if (iVar3 < 1) {
    if (3 < DAT_000be63c) {
      local_2018[0] = s_reset_low_before_power_init_000a5704[0];
      local_2018[1] = s_reset_low_before_power_init_000a5704[1];
      local_2018[2] = s_reset_low_before_power_init_000a5704[2];
      local_2018[3] = s_reset_low_before_power_init_000a5704[3];
      acStack_2014[0] = s_reset_low_before_power_init_000a5704[4];
      acStack_2014[1] = s_reset_low_before_power_init_000a5704[5];
      acStack_2014[2] = s_reset_low_before_power_init_000a5704[6];
      acStack_2014[3] = s_reset_low_before_power_init_000a5704[7];
      acStack_2010[0] = s_reset_low_before_power_init_000a5704[8];
      acStack_2010[1] = s_reset_low_before_power_init_000a5704[9];
      acStack_2010[2] = s_reset_low_before_power_init_000a5704[10];
      acStack_2010[3] = s_reset_low_before_power_init_000a5704[0xb];
      acStack_200c[0] = s_reset_low_before_power_init_000a5704[0xc];
      acStack_200c[1] = s_reset_low_before_power_init_000a5704[0xd];
      acStack_200c[2] = s_reset_low_before_power_init_000a5704[0xe];
      acStack_200c[3] = s_reset_low_before_power_init_000a5704[0xf];
      local_2008 = s_reset_low_before_power_init_000a5704._16_2_;
      cStack_2006 = s_reset_low_before_power_init_000a5704[0x12];
      acStack_2004[0] = s_reset_low_before_power_init_000a5704[0x14];
      acStack_2004[1] = s_reset_low_before_power_init_000a5704[0x15];
      acStack_2004[2] = s_reset_low_before_power_init_000a5704[0x16];
      acStack_2004[3] = s_reset_low_before_power_init_000a5704[0x17];
      acStack_2000[0] = s_reset_low_before_power_init_000a5704[0x18];
      acStack_2000[1] = s_reset_low_before_power_init_000a5704[0x19];
      acStack_2000[2] = s_reset_low_before_power_init_000a5704[0x1a];
      acStack_2000[3] = s_reset_low_before_power_init_000a5704[0x1b];
      local_1ffc[0]._0_1_ = (char)ram0x000a5720;
      FUN_0004948c(3,local_2018,0);
    }
    iVar3 = 0;
    while( true ) {
      iVar1 = FUN_0002a4f4();
      if (iVar1 <= iVar3) break;
      FUN_0006c86c(iVar3);
      iVar3 = iVar3 + 1;
    }
  }
  else {
    if (3 < DAT_000be63c) {
      local_2018[0] = s_reset_high_before_power_init_000a56e4[0];
      local_2018[1] = s_reset_high_before_power_init_000a56e4[1];
      local_2018[2] = s_reset_high_before_power_init_000a56e4[2];
      local_2018[3] = s_reset_high_before_power_init_000a56e4[3];
      acStack_2014[0] = s_reset_high_before_power_init_000a56e4[4];
      acStack_2014[1] = s_reset_high_before_power_init_000a56e4[5];
      acStack_2014[2] = s_reset_high_before_power_init_000a56e4[6];
      acStack_2014[3] = s_reset_high_before_power_init_000a56e4[7];
      acStack_2010[0] = s_reset_high_before_power_init_000a56e4[8];
      acStack_2010[1] = s_reset_high_before_power_init_000a56e4[9];
      acStack_2010[2] = s_reset_high_before_power_init_000a56e4[10];
      acStack_2010[3] = s_reset_high_before_power_init_000a56e4[0xb];
      acStack_200c[0] = s_reset_high_before_power_init_000a56e4[0xc];
      acStack_200c[1] = s_reset_high_before_power_init_000a56e4[0xd];
      acStack_200c[2] = s_reset_high_before_power_init_000a56e4[0xe];
      acStack_200c[3] = s_reset_high_before_power_init_000a56e4[0xf];
      local_2008 = s_reset_high_before_power_init_000a56e4._16_2_;
      cStack_2006 = s_reset_high_before_power_init_000a56e4[0x12];
      acStack_2004[0] = s_reset_high_before_power_init_000a56e4[0x14];
      acStack_2004[1] = s_reset_high_before_power_init_000a56e4[0x15];
      acStack_2004[2] = s_reset_high_before_power_init_000a56e4[0x16];
      acStack_2004[3] = s_reset_high_before_power_init_000a56e4[0x17];
      acStack_2000[0] = s_reset_high_before_power_init_000a56e4[0x18];
      acStack_2000[1] = s_reset_high_before_power_init_000a56e4[0x19];
      acStack_2000[2] = s_reset_high_before_power_init_000a56e4[0x1a];
      acStack_2000[3] = s_reset_high_before_power_init_000a56e4[0x1b];
      local_1ffc[0] = (short)ram0x000a5700;
      FUN_0004948c(3,local_2018,0);
    }
    iVar3 = 0;
    while( true ) {
      iVar1 = FUN_0002a4f4();
      if (iVar1 <= iVar3) break;
      FUN_0006c8cc(iVar3);
      iVar3 = iVar3 + 1;
    }
  }
  FUN_00050ef8();
  if (DAT_000be619 == '\0') {
    if (0 < DAT_008c706c) {
      FUN_000247d8();
    }
  }
  else {
    iVar3 = FUN_0002ade8();
    if (iVar3 == 0) {
      if (DAT_000be63c < 4) {
        return -1;
      }
      memcpy(local_2018,"warning topol_get_open_core_high_voltage=0,please check topol.conf!",0x44);
      FUN_0004948c(3,local_2018,0);
      return -1;
    }
    uVar4 = FUN_00019f38();
    if (uVar4 < 0x28) {
      iVar3 = FUN_0002ade8();
    }
    else if (uVar4 < 0x2d) {
      iVar3 = uVar4 * -0x37 + 0x10cc;
    }
    else {
      iVar3 = 0x721;
    }
    FUN_000247d8(iVar3);
  }
  FUN_00018b98();
  pcVar2 = (char *)FUN_0002a4e4();
  iVar3 = strcmp(pcVar2,"H6HB70601");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70801");
    if (iVar3 != 0) {
      pcVar2 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar2,"H6HB70802");
      if (iVar3 != 0) {
        pcVar2 = (char *)FUN_0002a4e4();
        iVar3 = strcmp(pcVar2,"H6HB70602");
        if (iVar3 != 0) {
          pcVar2 = (char *)FUN_0002a4e4();
          iVar3 = strcmp(pcVar2,"H6HB70501");
          if ((iVar3 != 0) && (3 < DAT_000be63c)) {
            iVar3 = FUN_00019f38();
            snprintf(local_2018,0x2000,"start up min temp by 75a = %d",iVar3);
            FUN_0004948c(3,local_2018,0);
          }
        }
      }
    }
  }
  DAT_008c72a0 = 1;
  pcVar2 = (char *)FUN_0002a4e4();
  iVar3 = strcmp(pcVar2,"H6HB70801");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70802");
    if (iVar3 != 0) {
      pcVar2 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar2,"H6HB70601");
      if (iVar3 != 0) {
        pcVar2 = (char *)FUN_0002a4e4();
        iVar3 = strcmp(pcVar2,"H6HB70602");
        if (iVar3 != 0) {
          pcVar2 = (char *)FUN_0002a4e4();
          iVar3 = strcmp(pcVar2,"H6HB70501");
          if (iVar3 != 0) goto LAB_00054d78;
        }
      }
    }
  }
  FUN_00051174();
LAB_00054d78:
  FUN_00018bd4();
  FUN_0006b49c();
  FUN_0006b564();
  FUN_0006b5b4();
  FUN_0004bf68(10);
  FUN_000413d0(0x1c200,0);
  FUN_0004bf68(10);
  pcVar2 = (char *)FUN_0002a4e4();
  iVar3 = strcmp(pcVar2,"H6HB70601");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70801");
    if (iVar3 != 0) {
      pcVar2 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar2,"H6HB70802");
      if (iVar3 != 0) {
        pcVar2 = (char *)FUN_0002a4e4();
        iVar3 = strcmp(pcVar2,"H6HB70602");
        if (iVar3 != 0) {
          pcVar2 = (char *)FUN_0002a4e4();
          iVar3 = strcmp(pcVar2,"H6HB70501");
          if (iVar3 != 0) {
            FUN_000170ac(100);
          }
        }
      }
    }
  }
  iVar3 = FUN_00054654();
  DAT_008c7094 = 1;
  iVar1 = FUN_0002ae08();
  if (iVar1 == 0) {
    if (iVar3 != 0) {
      iVar1 = FUN_0002a6e0();
      if (iVar1 == 0) {
        return iVar3;
      }
      if (DAT_000be8e8 == 0) {
        return iVar3;
      }
    }
  }
  else if (iVar3 != 0) {
    if (3 < DAT_000be63c) {
      local_2018[0] = s_test_find_asic_num_failed__while_000a5788[0];
      local_2018[1] = s_test_find_asic_num_failed__while_000a5788[1];
      local_2018[2] = s_test_find_asic_num_failed__while_000a5788[2];
      local_2018[3] = s_test_find_asic_num_failed__while_000a5788[3];
      acStack_2014[0] = s_test_find_asic_num_failed__while_000a5788[4];
      acStack_2014[1] = s_test_find_asic_num_failed__while_000a5788[5];
      acStack_2014[2] = s_test_find_asic_num_failed__while_000a5788[6];
      acStack_2014[3] = s_test_find_asic_num_failed__while_000a5788[7];
      acStack_2010[0] = s_test_find_asic_num_failed__while_000a5788[8];
      acStack_2010[1] = s_test_find_asic_num_failed__while_000a5788[9];
      acStack_2010[2] = s_test_find_asic_num_failed__while_000a5788[10];
      acStack_2010[3] = s_test_find_asic_num_failed__while_000a5788[0xb];
      acStack_200c[0] = s_test_find_asic_num_failed__while_000a5788[0xc];
      acStack_200c[1] = s_test_find_asic_num_failed__while_000a5788[0xd];
      acStack_200c[2] = s_test_find_asic_num_failed__while_000a5788[0xe];
      acStack_200c[3] = s_test_find_asic_num_failed__while_000a5788[0xf];
      local_2008 = s_test_find_asic_num_failed__while_000a5788._16_2_;
      cStack_2006 = s_test_find_asic_num_failed__while_000a5788[0x12];
      acStack_2004[0] = s_test_find_asic_num_failed__while_000a5788[0x14];
      acStack_2004[1] = s_test_find_asic_num_failed__while_000a5788[0x15];
      acStack_2004[2] = s_test_find_asic_num_failed__while_000a5788[0x16];
      acStack_2004[3] = s_test_find_asic_num_failed__while_000a5788[0x17];
      acStack_2000[0] = s_test_find_asic_num_failed__while_000a5788[0x18];
      acStack_2000[1] = s_test_find_asic_num_failed__while_000a5788[0x19];
      acStack_2000[2] = s_test_find_asic_num_failed__while_000a5788[0x1a];
      acStack_2000[3] = s_test_find_asic_num_failed__while_000a5788[0x1b];
      local_1ffc = (undefined2  [2])s_test_find_asic_num_failed__while_000a5788._28_4_;
      local_1ff8 = (undefined2  [2])s_test_find_asic_num_failed__while_000a5788._32_4_;
      local_1ff4 = (undefined1)ram0x000a57ac;
      FUN_0004948c(3,local_2018,0);
    }
    FUN_00024584();
    do {
      sleep(10);
    } while( true );
  }
  iVar3 = 8;
  while( true ) {
    iVar1 = FUN_000198cc();
    if ((DAT_008c72a4 != 0) && (iVar1 - DAT_008c72a4 < 2)) break;
    DAT_008c72a4 = iVar1;
    sleep(10);
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
LAB_00054e1c:
      if (DAT_008c7048 - 0x10U < 2) {
        return 1;
      }
      DAT_008c7219 = 1;
      FUN_0005102c();
      DAT_000c0440 = 0;
      DAT_000c0448 = 0;
      DAT_000c0444 = 0;
      return 0;
    }
  }
  if (4 < DAT_000be63c) {
    local_2018[0] = s_no_temp_raise__stop_monitoring_000a57b0[0];
    local_2018[1] = s_no_temp_raise__stop_monitoring_000a57b0[1];
    local_2018[2] = s_no_temp_raise__stop_monitoring_000a57b0[2];
    local_2018[3] = s_no_temp_raise__stop_monitoring_000a57b0[3];
    acStack_2014[0] = s_no_temp_raise__stop_monitoring_000a57b0[4];
    acStack_2014[1] = s_no_temp_raise__stop_monitoring_000a57b0[5];
    acStack_2014[2] = s_no_temp_raise__stop_monitoring_000a57b0[6];
    acStack_2014[3] = s_no_temp_raise__stop_monitoring_000a57b0[7];
    acStack_2010[0] = s_no_temp_raise__stop_monitoring_000a57b0[8];
    acStack_2010[1] = s_no_temp_raise__stop_monitoring_000a57b0[9];
    acStack_2010[2] = s_no_temp_raise__stop_monitoring_000a57b0[10];
    acStack_2010[3] = s_no_temp_raise__stop_monitoring_000a57b0[0xb];
    acStack_200c[0] = s_no_temp_raise__stop_monitoring_000a57b0[0xc];
    acStack_200c[1] = s_no_temp_raise__stop_monitoring_000a57b0[0xd];
    acStack_200c[2] = s_no_temp_raise__stop_monitoring_000a57b0[0xe];
    acStack_200c[3] = s_no_temp_raise__stop_monitoring_000a57b0[0xf];
    local_2008 = s_no_temp_raise__stop_monitoring_000a57b0._16_2_;
    cStack_2006 = s_no_temp_raise__stop_monitoring_000a57b0[0x12];
    acStack_2004[0] = s_no_temp_raise__stop_monitoring_000a57b0[0x14];
    acStack_2004[1] = s_no_temp_raise__stop_monitoring_000a57b0[0x15];
    acStack_2004[2] = s_no_temp_raise__stop_monitoring_000a57b0[0x16];
    acStack_2004[3] = s_no_temp_raise__stop_monitoring_000a57b0[0x17];
    acStack_2000[0] = s_no_temp_raise__stop_monitoring_000a57b0[0x18];
    acStack_2000[1] = s_no_temp_raise__stop_monitoring_000a57b0[0x19];
    acStack_2000[2] = s_no_temp_raise__stop_monitoring_000a57b0[0x1a];
    acStack_2000[3] = s_no_temp_raise__stop_monitoring_000a57b0[0x1b];
    local_1ffc = (undefined2  [2])s_no_temp_raise__stop_monitoring_000a57b0._28_4_;
    FUN_0004948c(4,local_2018,0);
  }
  goto LAB_00054e1c;
}


