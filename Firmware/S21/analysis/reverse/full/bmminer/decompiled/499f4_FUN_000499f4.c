// FUN_000499f4 @ 000499f4  size=480  callers=2
// program: bmminer


int FUN_000499f4(int *param_1)

{
  uint uVar1;
  int iVar2;
  char acStack_3008 [4096];
  char local_2008 [28];
  uint local_1fec;
  
  uVar1 = snprintf(acStack_3008,0x1000,"/usr/bin/checksize.sh %d %s",0,(char *)param_1[2]);
  if (uVar1 < 0x1000) {
    iVar2 = FUN_00049730(acStack_3008);
    if ((iVar2 != 0) && (3 < DAT_000be63c)) {
      snprintf(local_2008,0x2000,"my_system returned failed %d on LOGCHECKSIZE\n",iVar2);
      FUN_0004948c(3,local_2008,0);
    }
    uVar1 = snprintf(acStack_3008,0x1000,"/usr/bin/rotate.sh %d %d %s %s %s %s %s",0,*param_1,
                     (char *)param_1[2],(char *)param_1[1],(char *)((int)param_1 + 0x2a),
                     (char *)(param_1 + 0x12),(char *)param_1[0x17]);
    if (uVar1 < 0x1000) {
      iVar2 = FUN_00049730(acStack_3008);
      if (iVar2 == 0) {
        return 0;
      }
      if (DAT_000be63c < 4) {
        return iVar2;
      }
      snprintf(local_2008,0x2000,"my_system returned failed %d on LOGROTATE\n",iVar2);
      goto LAB_00049a78;
    }
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2008,"too large command LOGROTATE\n",0x1c);
      local_1fec = local_1fec & 0xffffff00;
      FUN_0004948c(3,local_2008,0);
      return -1;
    }
  }
  else if (3 < DAT_000be63c) {
    iVar2 = -1;
    builtin_strncpy(local_2008,"too large command LOGCHECKSI",0x1c);
    local_1fec._0_1_ = 'Z';
    local_1fec._1_1_ = 'E';
    local_1fec._2_1_ = '\n';
    local_1fec._3_1_ = '\0';
LAB_00049a78:
    FUN_0004948c(3,local_2008,0);
    return iVar2;
  }
  return -1;
}

