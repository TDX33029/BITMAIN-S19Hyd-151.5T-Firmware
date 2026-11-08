// FUN_0003839c @ 0003839c  size=1360  callers=1
// program: bmminer


undefined4 FUN_0003839c(void)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char local_818 [16];
  undefined4 local_808;
  undefined4 uStack_804;
  char acStack_800 [4];
  undefined4 uStack_7fc;
  undefined1 local_7f8;
  
  FUN_00033284();
  FUN_0005a830("/etc/bitmain_category.conf");
  DAT_00087dec = 2;
  DAT_0048d39d = 1;
  if ((DAT_00087bbc < 4) || (FUN_0003628c(), DAT_00087bbc < 4)) {
    if (DAT_0008a628 == '\0') goto joined_r0x00038404;
LAB_00038408:
    iVar1 = FUN_00045624();
  }
  else {
    snprintf(local_818,0x800,"Miner compile time: %s type: %s\n",&DAT_0008a428,&DAT_0008a528);
    FUN_00032218(3,local_818,0);
    if (DAT_0008a628 != '\0') {
      if (DAT_00087bbc < 4) goto LAB_00038408;
      snprintf(local_818,0x800,"Miner sn: %s\n",&DAT_0008a628);
      FUN_00032218(3,local_818,0);
    }
joined_r0x00038404:
    if (DAT_00087bbc < 4) goto LAB_00038408;
    memcpy(local_818,
           "commit version: dd076742 2022-10-27 22:42:25, build by: jenkins 2022-12-17 09:48:49\n",
           0x55);
    FUN_00032218(3,local_818,0);
    if (DAT_00087bbc < 4) goto LAB_00038408;
    snprintf(local_818,0x800,"opt_multi_version     = %d\n",DAT_00087b68);
    FUN_00032218(3,local_818,0);
    if (DAT_00087bbc < 4) goto LAB_00038408;
    snprintf(local_818,0x800,"opt_bitmain_ab        = %d\n",(uint)DAT_00087b6c);
    FUN_00032218(3,local_818,0);
    if (DAT_00087bbc < 4) goto LAB_00038408;
    snprintf(local_818,0x800,"mid_auto_gen          = %d\n",0);
    FUN_00032218(3,local_818,0);
    if (DAT_00087bbc < 4) goto LAB_00038408;
    snprintf(local_818,0x800,"opt_bitmain_work_mode = %d\n",DAT_0008a848);
    FUN_00032218(3,local_818,0);
    iVar1 = FUN_00045624();
  }
  if (iVar1 != 0) {
    return 0;
  }
  FUN_00015a98();
  FUN_00015b68();
  FUN_00047fd8();
  FUN_00048028();
  DAT_00087b6c = 1;
  FUN_00026950();
  FUN_00027854();
  iVar1 = FUN_0001eba4();
  if (iVar1 != 0) {
    return 0;
  }
  FUN_00037c98();
  pcVar2 = (char *)FUN_0001fffc();
  iVar1 = strcmp(pcVar2,"HHB28601");
  if (iVar1 != 0) {
    pcVar2 = (char *)FUN_0001fffc();
    iVar1 = strcmp(pcVar2,"HHB28602");
    if (iVar1 != 0) {
      FUN_00015968(100);
    }
  }
  FUN_0003740c();
  FUN_0004b4cc();
  FUN_00036be4();
  iVar1 = FUN_000201c8();
  if (iVar1 == 0) {
    if (DAT_00087bbc < 4) {
      return 0xffffffff;
    }
    builtin_strncpy(local_818,"No chain exist, ",0x10);
    local_808._0_1_ = 'e';
    local_808._1_1_ = 'x';
    local_808._2_1_ = 'i';
    local_808._3_1_ = 't';
    uStack_804 = CONCAT13(uStack_804._3_1_,0xa2e);
    FUN_00032218(3,local_818,0);
    return 0xffffffff;
  }
  if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (4 < DAT_00087bc4)) {
    iVar1 = FUN_000201c8();
    snprintf(local_818,0x800,"chain num = %d",iVar1);
    FUN_00032218(5,local_818,0);
  }
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    iVar1 = FUN_000201d8(uVar3);
    if (iVar1 != 0) {
      thunk_FUN_0005924c(uVar3 & 0xff);
    }
    uVar3 = uVar4;
  } while (uVar4 != 4);
  FUN_0001acb0();
  iVar1 = FUN_0001b73c();
  if (iVar1 == 0) {
    if (DAT_00087dec != 1) {
      FUN_0003a9e0(3,0xff);
      if (3 < DAT_00087bbc) goto LAB_00038738;
      goto LAB_0003876c;
    }
    if (3 < DAT_00087bbc) {
LAB_00038738:
      builtin_strncpy(local_818,"Fixture data loa",0x10);
      local_808._0_1_ = 'd';
      local_808._1_1_ = ' ';
      local_808._2_1_ = 'f';
      local_808._3_1_ = 'a';
      uStack_804._0_1_ = 'i';
      uStack_804._1_1_ = 'l';
      uStack_804._2_1_ = 'e';
      uStack_804._3_1_ = 'd';
      builtin_strncpy(acStack_800,", ex",4);
      uStack_7fc._0_1_ = 'i';
      uStack_7fc._1_1_ = 't';
      uStack_7fc._2_1_ = '.';
      uStack_7fc._3_1_ = '\n';
      local_7f8 = 0;
      FUN_00032218(3,local_818,0);
      goto LAB_0003876c;
    }
  }
  else {
LAB_0003876c:
    if (((DAT_00087dec == 0) && (iVar1 = FUN_0003b534(), iVar1 != 0)) &&
       (iVar1 = FUN_0001b750(), iVar1 == 0)) {
      if (DAT_00087bbc < 4) {
        if (DAT_0008a848 != 1) {
          return 0;
        }
        goto LAB_00038798;
      }
      builtin_strncpy(local_818,"Miner data load ",0x10);
      local_808._0_1_ = 'f';
      local_808._1_1_ = 'a';
      local_808._2_1_ = 'i';
      local_808._3_1_ = 'l';
      uStack_804._0_1_ = 'e';
      uStack_804._1_1_ = 'd';
      uStack_804._2_1_ = ',';
      uStack_804._3_1_ = ' ';
      builtin_strncpy(acStack_800,"exit",4);
      uStack_7fc._0_1_ = '.';
      uStack_7fc._1_1_ = '\n';
      uStack_7fc._2_1_ = '\0';
      FUN_00032218(3,local_818,0);
    }
  }
  if (DAT_0008a848 != 1) {
    return 0;
  }
  if (3 < DAT_00087bbc) {
    builtin_strncpy(local_818,"enter sleep mode",0x10);
    local_808._0_1_ = '.';
    local_808._1_1_ = '\n';
    local_808._2_1_ = '\0';
    FUN_00032218(3,local_818,0);
  }
LAB_00038798:
  FUN_0001cb8c();
  pcVar2 = (char *)FUN_0001fffc();
  iVar1 = strcmp(pcVar2,"HHB28601");
  if (iVar1 != 0) {
    pcVar2 = (char *)FUN_0001fffc();
    iVar1 = strcmp(pcVar2,"HHB28602");
    if (iVar1 != 0) {
      FUN_00015968(0);
    }
  }
  do {
    sleep(10);
  } while( true );
}

