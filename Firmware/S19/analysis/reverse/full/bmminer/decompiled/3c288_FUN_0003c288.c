// FUN_0003c288 @ 0003c288  size=1544  callers=0
// program: bmminer


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0003c288(undefined4 param_1,int *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *__s;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined1 auStackY_948 [128];
  char *local_83c;
  undefined4 local_828;
  char acStack_824 [12];
  undefined4 local_818;
  char acStack_814 [4];
  uint local_810;
  char acStack_80c [4];
  undefined4 local_808;
  char acStack_804 [2016];
  
  local_828 = CONCAT22(local_828._2_2_,CONCAT11(local_828._1_1_,(char)local_828));
  uVar2 = FUN_000380c8();
  uVar6 = (uVar2 & 0xffff) >> 8;
  iVar5 = *param_2;
  uVar2 = (uVar2 & 0xffffff) >> 0x10;
  if (4 < DAT_00087bbc) {
    snprintf((char *)&local_828,0x800,"[DEBUG] Send work, max_freq = %d\n",iVar5);
    FUN_00032218(4,&local_828,0);
  }
  local_83c = (char *)&local_828;
  iVar8 = 3;
  do {
    if (4 < DAT_00087bbc) {
      local_828 = 0x4245445b;
      builtin_strncpy(acStack_824,"UG] Set star",0xc);
      local_818._0_1_ = 't';
      local_818._1_1_ = ' ';
      local_818._2_1_ = 'n';
      local_818._3_1_ = 'o';
      builtin_strncpy(acStack_814,"nce ",4);
      local_810._0_1_ = 'o';
      local_810._1_1_ = 'f';
      local_810._2_1_ = 'f';
      local_810._3_1_ = 's';
      builtin_strncpy(acStack_80c,"et i",4);
      local_808._0_1_ = 'n';
      local_808._1_1_ = 'v';
      local_808._2_1_ = 'a';
      local_808._3_1_ = 'l';
      builtin_strncpy(acStack_804,"id.\n",5);
      FUN_00032218(4,local_83c,0);
    }
    FUN_00045c40(0x18,0);
    uVar3 = FUN_0004a0bc();
    uVar7 = 0;
    FUN_0004a0e4(uVar3 & 0xffff70ff | 0x8400);
    do {
      iVar4 = FUN_000201d8(uVar7);
      if (iVar4 != 0) {
        FUN_00057a8c(uVar7 & 0xff,1,0);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 4);
    if (4 < DAT_00087bbc) {
      local_828 = 0x4245445b;
      builtin_strncpy(acStack_824,"UG] Send nul",0xc);
      local_818._0_1_ = 'l';
      local_818._1_1_ = ' ';
      local_818._2_1_ = 'w';
      local_818._3_1_ = 'o';
      builtin_strncpy(acStack_814,"rk.\n",4);
      local_810 = local_810 & 0xffffff00;
      FUN_00032218(4,local_83c,0);
    }
    uVar3 = 0;
    memset(local_83c,0,0x94);
    local_828 = CONCAT31(local_828._1_3_,1);
    do {
      iVar4 = FUN_000201d8(uVar3);
      if (iVar4 != 0) {
        while (uVar7 = FUN_0004a83c(), (uVar7 & 1 << (uVar3 & 0xff)) == 0) {
          FUN_00034a5c(1);
        }
        local_828 = CONCAT22(local_828._2_2_,CONCAT11((char)uVar3,(char)local_828)) | 0x8000;
        memcpy(auStackY_948 + 0x80,&local_818,0x84);
        FUN_00020e38(local_828,acStack_824._0_4_,acStack_824._4_4_,acStack_824._8_4_);
        FUN_00034a5c(10);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 4);
    sleep(1);
    uVar3 = FUN_0004a0bc();
    FUN_0004a0e4(uVar3 & 0xffff70ff | 0x8100);
    usleep(100000);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  FUN_0002116c(0xff,1);
  FUN_00020f60(0xff,uVar6,uVar2,1);
  FUN_0003bc24();
  usleep(100000);
  FUN_0003bc24();
  usleep(100000);
  FUN_0003bc24();
  usleep(100000);
  uVar3 = 0;
  do {
    iVar8 = FUN_000201d8(uVar3);
    if (iVar8 != 0) {
      FUN_000583f8(uVar3 & 0xff,0);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  uVar3 = 0;
  do {
    iVar8 = FUN_000201d8(uVar3);
    if (iVar8 != 0) {
      FUN_0005869c(uVar3 & 0xff);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  iVar8 = 3;
  iVar5 = -((iVar5 - 0xfaU) / 0x14);
  do {
    uVar3 = 0;
    do {
      iVar4 = FUN_000201d8(uVar3);
      if (iVar4 != 0) {
        FUN_000587a4(uVar3 & 0xff,(iVar5 + 30000) / 0x14d);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 4);
    usleep(100000);
    iVar8 = iVar8 + -1;
    uVar3 = 0;
  } while (iVar8 != 0);
  do {
    iVar8 = FUN_000201d8(uVar3);
    if (iVar8 != 0) {
      FUN_000587c8(uVar3 & 0xff,8);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  iVar8 = 8;
  do {
    uVar3 = 0;
    do {
      iVar4 = FUN_000201d8(uVar3);
      if (iVar4 != 0) {
        FUN_00058800(uVar3 & 0xff);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 4);
    usleep(iVar5 + 31000);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  FUN_0003bc24();
  usleep(100000);
  FUN_0003bc24();
  usleep(100000);
  FUN_0003bc24();
  usleep(100000);
  FUN_00020f60(0xff,uVar6,uVar2,0);
  if (DAT_00087bbc < 5) {
    __s = *(void **)(DAT_00507484 + 4);
  }
  else {
    local_828 = 0x4245445b;
    builtin_strncpy(acStack_824,"UG] Get nonc",0xc);
    local_818._0_1_ = 'e';
    local_818._1_1_ = ' ';
    local_818._2_1_ = 'c';
    local_818._3_1_ = 'o';
    builtin_strncpy(acStack_814,"unte",4);
    local_810._0_1_ = 'r';
    local_810._1_1_ = ',';
    local_810._2_1_ = ' ';
    local_810._3_1_ = 'c';
    builtin_strncpy(acStack_80c,"hain",4);
    local_808._0_1_ = '.';
    local_808._1_1_ = '\n';
    local_808._2_1_ = '\0';
    FUN_00032218(4,local_83c,0);
    __s = *(void **)(DAT_00507484 + 4);
    if (4 < DAT_00087bbc) {
      snprintf(local_83c,0x800,"[DEBUG] Read reg and wait done, reg = %d, done_threshold = %d.\n",
               0xe0,1);
      FUN_00032218(4,local_83c,0);
    }
  }
  memset(__s,0,0x400);
  iVar5 = 5;
  FUN_00020c04(0xff,1,0,0xe0);
  do {
    iVar8 = FUN_0003c248();
    if (iVar8 != 0) {
      return 0;
    }
    usleep(100000);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = 0x5f;
  while( true ) {
    uVar2 = 0;
    do {
      iVar8 = FUN_000201d8(uVar2);
      if ((iVar8 != 0) && (iVar8 = FUN_0002002c(), iVar8 != 0)) {
        iVar4 = 0;
        pcVar9 = (char *)((int)__s + uVar2 * 0x100);
        do {
          if (*pcVar9 != '\x01') {
            sVar1 = FUN_0002009c();
            FUN_00020c04(uVar2 & 0xff,0,(int)sVar1 * (int)(short)iVar4 & 0xff,0xe0);
          }
          iVar4 = iVar4 + 1;
          pcVar9 = pcVar9 + 1;
        } while (iVar8 != iVar4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 4);
    usleep(100000);
    iVar8 = FUN_0003c248();
    if (iVar8 != 0) break;
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      if (DAT_00087bbc < 4) {
        return 0xffffffff;
      }
      snprintf(local_83c,0x800,"Read REG[0x%X] done failed.\n",0xe0);
      FUN_00032218(3,local_83c,0);
      return 0xffffffff;
    }
  }
  return 0;
}

