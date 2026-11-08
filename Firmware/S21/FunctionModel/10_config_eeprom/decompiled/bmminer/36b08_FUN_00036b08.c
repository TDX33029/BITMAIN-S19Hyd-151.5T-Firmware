// FUN_00036b08 @ 00036b08  size=1244  callers=1
// program: bmminer


undefined4 FUN_00036b08(undefined4 param_1,int param_2)

{
  int iVar1;
  FILE *__stream;
  size_t param3;
  char *pcVar2;
  char local_2a02;
  undefined1 local_2a01;
  undefined1 auStack_2a00 [112];
  undefined1 auStack_2990 [192];
  undefined1 auStack_28d0 [96];
  int local_2870;
  undefined4 *local_286c;
  undefined1 auStack_2810 [1024];
  char acStack_2410 [1024];
  undefined4 local_2010;
  undefined4 uStack_200c;
  undefined4 uStack_2008;
  undefined4 uStack_2004;
  undefined4 local_2000;
  undefined4 uStack_1ffc;
  undefined4 uStack_1ff8;
  char local_1ff4 [8164];
  
  local_2a02 = '\x01';
  local_2a01 = 0;
  memset(auStack_2990,0,0xc0);
  memset(auStack_28d0,0,0xc0);
  memset(auStack_2a00,0,0x70);
  if (param_2 < 0x401) {
    iVar1 = FUN_00033d3c(param_1,param_2,auStack_2990,&local_2a01);
    if (iVar1 == 0) {
      memset(auStack_2810,0,0x400);
      iVar1 = FUN_00036980(auStack_2810,0x400);
      if (iVar1 == 0) {
        iVar1 = FUN_00033d3c(auStack_2810,param_2,auStack_28d0,&local_2a01);
        if (iVar1 != 0) {
          FUN_000337d0(auStack_2990);
          FUN_000337d0(auStack_28d0);
          if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 3)) {
            return 0xffffffff;
          }
          local_2010._0_1_ = 's';
          local_2010._1_1_ = 'e';
          local_2010._2_1_ = 'r';
          local_2010._3_1_ = 'i';
          uStack_200c._0_1_ = 'a';
          uStack_200c._1_1_ = 'l';
          uStack_200c._2_1_ = 'i';
          uStack_200c._3_1_ = 'z';
          uStack_2008._0_1_ = 'e';
          uStack_2008._1_1_ = ' ';
          uStack_2008._2_1_ = 'l';
          uStack_2008._3_1_ = 'o';
          uStack_2004._0_1_ = 'c';
          uStack_2004._1_1_ = 'a';
          uStack_2004._2_1_ = 'l';
          uStack_2004._3_1_ = ' ';
          local_2000._0_1_ = ' ';
          local_2000._1_1_ = 'm';
          local_2000._2_1_ = 'i';
          local_2000._3_1_ = 'n';
          uStack_1ffc._0_1_ = 'e';
          uStack_1ffc._1_1_ = 'r';
          uStack_1ffc._2_1_ = ' ';
          uStack_1ffc._3_1_ = 'c';
          uStack_1ff8._0_1_ = 'o';
          uStack_1ff8._1_1_ = 'n';
          uStack_1ff8._2_1_ = 'f';
          uStack_1ff8._3_1_ = ' ';
          builtin_strncpy(local_1ff4,"failed",7);
          FUN_0004948c(3,&local_2010,0);
          return 0xffffffff;
        }
        FUN_00035f58(auStack_2990,auStack_28d0,&local_2a02,local_2a01);
        FUN_00035a44(auStack_2a00,auStack_28d0);
        iVar1 = FUN_00036460(auStack_28d0);
        if (iVar1 == 0) {
          if (DAT_000c74c4 == '\0') {
            DAT_000be5f8 = *local_286c;
          }
          else if (local_2870 != 0) {
            FUN_000332cc(auStack_28d0);
          }
          if (local_2a02 == '\0') {
            iVar1 = system("sudo /etc/init.d/S70cgminer restart > /dev/null &");
            if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
              snprintf((char *)&local_2010,0x2000,"restart ret:%d",iVar1);
              FUN_0004948c(3,&local_2010,0);
            }
          }
          else {
            sleep(1);
            __stream = popen("/usr/bin/cgminer-api {\\\"command\\\":\\\"reload\\\",\\\"new_api\\\":true}  >  /dev/null"
                             ,"r");
            param3 = fread(acStack_2410,1,0x400,__stream);
            if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
              snprintf((char *)&local_2010,0x2000,"read ret %d byte, ret = %s\n",param3,acStack_2410
                      );
              FUN_0004948c(3,&local_2010,0);
            }
            pclose(__stream);
          }
          FUN_000337d0(auStack_2990);
          FUN_000337d0(auStack_28d0);
          FUN_000338e4(auStack_2a00);
          return 0;
        }
        FUN_000337d0(auStack_2990);
        FUN_000337d0(auStack_28d0);
        FUN_000338e4(auStack_2a00);
        if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 3)) {
          return 0xffffffff;
        }
        pcVar2 = "save input miner conf failed";
        goto LAB_00036ba8;
      }
      if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
        local_2010._0_1_ = 'o';
        local_2010._1_1_ = 'p';
        local_2010._2_1_ = 'e';
        local_2010._3_1_ = 'n';
        uStack_200c._0_1_ = ' ';
        uStack_200c._1_1_ = '/';
        uStack_200c._2_1_ = 'c';
        uStack_200c._3_1_ = 'o';
        uStack_2008._0_1_ = 'f';
        uStack_2008._1_1_ = 'i';
        uStack_2008._2_1_ = 'g';
        uStack_2008._3_1_ = '/';
        uStack_2004._0_1_ = 'c';
        uStack_2004._1_1_ = 'g';
        uStack_2004._2_1_ = 'm';
        uStack_2004._3_1_ = 'i';
        local_2000._0_1_ = 'n';
        local_2000._1_1_ = 'e';
        local_2000._2_1_ = 'r';
        local_2000._3_1_ = '.';
        uStack_1ffc._0_1_ = 'c';
        uStack_1ffc._1_1_ = 'o';
        uStack_1ffc._2_1_ = 'n';
        uStack_1ffc._3_1_ = 'f';
        uStack_1ff8._0_1_ = ' ';
        uStack_1ff8._1_1_ = 'f';
        uStack_1ff8._2_1_ = 'a';
        uStack_1ff8._3_1_ = 'i';
        builtin_strncpy(local_1ff4,"led",4);
        FUN_0004948c(3,&local_2010,0);
      }
    }
    else if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      local_2010._0_1_ = 's';
      local_2010._1_1_ = 'e';
      local_2010._2_1_ = 'r';
      local_2010._3_1_ = 'i';
      uStack_200c._0_1_ = 'a';
      uStack_200c._1_1_ = 'l';
      uStack_200c._2_1_ = 'i';
      uStack_200c._3_1_ = 'z';
      uStack_2008._0_1_ = 'e';
      uStack_2008._1_1_ = ' ';
      uStack_2008._2_1_ = 'i';
      uStack_2008._3_1_ = 'n';
      uStack_2004._0_1_ = 'p';
      uStack_2004._1_1_ = 'u';
      uStack_2004._2_1_ = 't';
      uStack_2004._3_1_ = ' ';
      local_2000._0_1_ = 'm';
      local_2000._1_1_ = 'i';
      local_2000._2_1_ = 'n';
      local_2000._3_1_ = 'e';
      uStack_1ffc._0_1_ = 'r';
      uStack_1ffc._1_1_ = ' ';
      uStack_1ffc._2_1_ = 'c';
      uStack_1ffc._3_1_ = 'o';
      uStack_1ff8._0_1_ = 'n';
      uStack_1ff8._1_1_ = 'f';
      uStack_1ff8._2_1_ = ' ';
      uStack_1ff8._3_1_ = 'f';
      builtin_strncpy(local_1ff4,"ailed",6);
      FUN_0004948c(3,&local_2010,0);
    }
    FUN_000337d0(auStack_2990);
  }
  else if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
    pcVar2 = "invalid set miner conf param";
LAB_00036ba8:
    local_2010 = *(undefined4 *)pcVar2;
    uStack_200c = *(undefined4 *)(pcVar2 + 4);
    uStack_2008 = *(undefined4 *)(pcVar2 + 8);
    uStack_2004 = *(undefined4 *)(pcVar2 + 0xc);
    local_2000 = *(undefined4 *)(pcVar2 + 0x10);
    uStack_1ffc = *(undefined4 *)(pcVar2 + 0x14);
    uStack_1ff8 = *(undefined4 *)(pcVar2 + 0x18);
    local_1ff4[0] = (char)*(undefined4 *)(pcVar2 + 0x1c);
    FUN_0004948c(3,&local_2010,0);
    return 0xffffffff;
  }
  return 0xffffffff;
}

