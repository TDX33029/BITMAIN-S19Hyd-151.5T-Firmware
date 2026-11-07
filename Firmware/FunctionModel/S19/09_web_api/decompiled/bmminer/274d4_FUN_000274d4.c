// FUN_000274d4 @ 000274d4  size=896  callers=0
// program: bmminer


undefined4 FUN_000274d4(void)

{
  int iVar1;
  socklen_t local_84c;
  sockaddr local_848;
  sockaddr sStack_838;
  char local_828 [24];
  uint local_810;
  char acStack_80c [12];
  undefined4 uStack_800;
  undefined2 local_7fc;
  undefined1 local_7fa;
  
  prctl(0xf,&DAT_0006ac5c,0,0,0);
  do {
    DAT_000872f8 = socket(2,1,6);
    if (DAT_000872f8 < 0) {
      if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (4 < DAT_00087bc4)) {
        builtin_strncpy(local_828,"socket creating failed, ",0x18);
        local_810._0_1_ = 't';
        local_810._1_1_ = 'r';
        local_810._2_1_ = 'y';
        local_810._3_1_ = ' ';
        builtin_strncpy(acStack_80c,"again after ",0xc);
        uStack_800._0_1_ = '1';
        uStack_800._1_1_ = '0';
        uStack_800._2_1_ = 's';
        uStack_800._3_1_ = '.';
        local_7fc = 0x2e2e;
        local_7fa = 0;
        FUN_00032218(5,local_828,0);
      }
      sleep(10);
    }
    else {
      local_848.sa_data[6] = '\0';
      local_848.sa_data[7] = '\0';
      local_848.sa_data[8] = '\0';
      local_848.sa_data[9] = '\0';
      local_848.sa_data[10] = '\0';
      local_848.sa_data[0xb] = '\0';
      local_848.sa_data[0xc] = '\0';
      local_848.sa_data[0xd] = '\0';
      local_848.sa_family = 2;
      local_848.sa_data[0] = '\x17';
      local_848.sa_data[1] = -0x54;
      local_848.sa_data[2] = '\0';
      local_848.sa_data[3] = '\0';
      local_848.sa_data[4] = '\0';
      local_848.sa_data[5] = '\0';
      iVar1 = bind(DAT_000872f8,&local_848,0x10);
      if (iVar1 < 0) {
        if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (4 < DAT_00087bc4)) {
          builtin_strncpy(local_828,"http port bind failed! t",0x18);
          local_810._0_1_ = 'r';
          local_810._1_1_ = 'y';
          local_810._2_1_ = ' ';
          local_810._3_1_ = 'a';
          builtin_strncpy(acStack_80c,"gain after 1",0xc);
          uStack_800._0_1_ = '0';
          uStack_800._1_1_ = 's';
          uStack_800._2_1_ = '.';
          uStack_800._3_1_ = '.';
          local_7fc = 0x2e;
          FUN_00032218(5,local_828,0);
        }
      }
      else {
        iVar1 = listen(DAT_000872f8,100);
        if (-1 < iVar1) break;
        if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (4 < DAT_00087bc4)) {
          builtin_strncpy(local_828,"http listen failed! try ",0x18);
          local_810._0_1_ = 'a';
          local_810._1_1_ = 'g';
          local_810._2_1_ = 'a';
          local_810._3_1_ = 'i';
          builtin_strncpy(acStack_80c,"n after 10s.",0xc);
          uStack_800._0_1_ = '.';
          uStack_800._1_1_ = '.';
          uStack_800._2_1_ = '\0';
          FUN_00032218(5,local_828,0);
        }
      }
      close(DAT_000872f8);
      DAT_000872f8 = -1;
      sleep(10);
    }
  } while (DAT_00089214 == '\0');
  if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (4 < DAT_00087bc4)) {
    builtin_strncpy(local_828,"start listen on 6060 ...",0x18);
    local_810 = local_810 & 0xffffff00;
    FUN_00032218(5,local_828,0);
  }
  do {
    do {
      if (DAT_00089214 != '\0') {
LAB_000276b4:
        close(DAT_000872f8);
        DAT_000872f8 = 0xffffffff;
        return 0;
      }
      usleep(10000);
      local_84c = 0x10;
      iVar1 = accept(DAT_000872f8,&sStack_838,&local_84c);
    } while (iVar1 == -1);
    if (DAT_00089214 != '\0') {
      close(iVar1);
      goto LAB_000276b4;
    }
    if ((DAT_0048d36e != '\0') &&
       (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
      snprintf(local_828,0x800,"one client connected sock=%d",iVar1);
      FUN_00032218(7,local_828,0);
    }
    FUN_00026968(iVar1);
  } while( true );
}

