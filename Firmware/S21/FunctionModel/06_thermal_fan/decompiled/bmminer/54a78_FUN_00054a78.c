// FUN_00054a78 @ 00054a78  size=2716  callers=2
// program: bmminer


int FUN_00054a78(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char local_2019;
  char local_2018 [20];
  char acStack_2004 [8];
  uint local_1ffc;
  undefined4 local_1ff8;
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
              builtin_strncpy(local_2018,"Fan check passed.\n",0x13);
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
      strncpy(&DAT_008c7280,pcVar2,0x1f);
    }
LAB_000553ac:
    if (3 < DAT_000be63c) {
      iVar3 = FUN_00074db8();
      snprintf(local_2018,0x2000,"enable_power_calibration, calibration date:%d.\n",iVar3);
      FUN_0004948c(3,local_2018,0);
    }
  }
  else if (3 < DAT_000be63c) {
    builtin_strncpy(local_2018,"warning:power is no",0x13);
    builtin_strncpy(acStack_2004," calibra",8);
    local_1ffc._0_1_ = 't';
    local_1ffc._1_1_ = 'e';
    local_1ffc._2_1_ = 'd';
    local_1ffc._3_1_ = '.';
    local_1ff8._0_1_ = '\n';
    local_1ff8._1_1_ = '\0';
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
      builtin_strncpy(local_2018,"reset low before po",0x13);
      builtin_strncpy(acStack_2004,"er init\n",8);
      local_1ffc = local_1ffc & 0xffffff00;
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
      builtin_strncpy(local_2018,"reset high before p",0x13);
      builtin_strncpy(acStack_2004,"wer init",8);
      local_1ffc = CONCAT22(local_1ffc._2_2_,10);
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
      builtin_strncpy(local_2018,"test:find asic num ",0x13);
      builtin_strncpy(acStack_2004,"ailed, w",8);
      local_1ffc._0_1_ = 'h';
      local_1ffc._1_1_ = 'i';
      local_1ffc._2_1_ = 'l';
      local_1ffc._3_1_ = 'e';
      local_1ff8._0_1_ = 'l';
      local_1ff8._1_1_ = 'o';
      local_1ff8._2_1_ = 'o';
      local_1ff8._3_1_ = 'p';
      local_1ff4 = 0;
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
    builtin_strncpy(local_2018,"no temp raise, stop",0x13);
    builtin_strncpy(acStack_2004,"monitori",8);
    local_1ffc._0_1_ = 'n';
    local_1ffc._1_1_ = 'g';
    local_1ffc._2_1_ = '\n';
    local_1ffc._3_1_ = '\0';
    FUN_0004948c(4,local_2018,0);
  }
  goto LAB_00054e1c;
}

