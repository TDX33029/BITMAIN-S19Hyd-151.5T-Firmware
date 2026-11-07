// FUN_000327b4 @ 000327b4  size=484  callers=2
// program: bmminer


int FUN_000327b4(int *param_1)

{
  uint uVar1;
  int iVar2;
  char local_1808 [28];
  uint local_17ec;
  char acStack_1008 [4096];
  
  uVar1 = snprintf(acStack_1008,0x1000,"/usr/bin/checksize.sh %d %s",0,(char *)param_1[2]);
  if (uVar1 < 0x1000) {
    iVar2 = FUN_000324bc(acStack_1008);
    if ((iVar2 != 0) && (3 < DAT_00087bbc)) {
      snprintf(local_1808,0x800,"my_system returned failed %d on LOGCHECKSIZE\n",iVar2);
      FUN_00032218(3,local_1808,0);
    }
    uVar1 = snprintf(acStack_1008,0x1000,"/usr/bin/rotate.sh %d %d %s %s %s %s %s",0,*param_1,
                     (char *)param_1[2],(char *)param_1[1],(char *)((int)param_1 + 0x2a),
                     (char *)(param_1 + 0x12),(char *)param_1[0x17]);
    if (uVar1 < 0x1000) {
      iVar2 = FUN_000324bc(acStack_1008);
      if (iVar2 == 0) {
        return 0;
      }
      if (DAT_00087bbc < 4) {
        return iVar2;
      }
      snprintf(local_1808,0x800,"my_system returned failed %d on LOGROTATE\n",iVar2);
      FUN_00032218(3,local_1808,0);
      return iVar2;
    }
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_1808,"too large command LOGROTATE\n",0x1c);
      local_17ec = local_17ec & 0xffffff00;
      FUN_00032218(3,local_1808,0);
      return -1;
    }
  }
  else if (3 < DAT_00087bbc) {
    builtin_strncpy(local_1808,"too large command LOGCHECKSI",0x1c);
    local_17ec._0_1_ = 'Z';
    local_17ec._1_1_ = 'E';
    local_17ec._2_1_ = '\n';
    local_17ec._3_1_ = '\0';
    FUN_00032218(3,local_1808,0);
    return -1;
  }
  return -1;
}

