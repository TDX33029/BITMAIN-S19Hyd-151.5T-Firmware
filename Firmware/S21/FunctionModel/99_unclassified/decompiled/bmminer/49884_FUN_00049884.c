// FUN_00049884 @ 00049884  size=368  callers=1
// program: bmminer


int FUN_00049884(int param_1,char *param_2,char *param_3,char *param_4)

{
  uint uVar1;
  int param3;
  char acStack_3010 [4096];
  char local_2010 [16];
  undefined4 local_2000;
  char acStack_1ffc [8176];
  
  uVar1 = snprintf(acStack_3010,0x1000,"/usr/bin/updatename.sh %s %s %s %s %s %s",
                   *(char **)(param_1 + 8),(char *)(param_1 + 0x2a),(char *)(param_1 + 0x48),param_2
                   ,param_3,param_4);
  if (uVar1 < 0x1000) {
    if (DAT_000be63c < 5) {
      param3 = FUN_00049730(acStack_3010);
    }
    else {
      builtin_strncpy(local_2010,"_log_update_name",0x10);
      local_2000 = CONCAT22(local_2000._2_2_,10);
      FUN_0004948c(4,local_2010,0);
      param3 = FUN_00049730(acStack_3010);
    }
    if ((param3 != 0) && (3 < DAT_000be63c)) {
      snprintf(local_2010,0x2000,"my_system returned failed %d on LOGUPDATENAME\n",param3);
      FUN_0004948c(3,local_2010,0);
    }
  }
  else {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2010,"too large comman",0x10);
      local_2000._0_1_ = 'd';
      local_2000._1_1_ = ' ';
      local_2000._2_1_ = 'L';
      local_2000._3_1_ = 'O';
      builtin_strncpy(acStack_1ffc,"GUPDATENAME\n",0xd);
      FUN_0004948c(3,local_2010,0);
      return -1;
    }
    param3 = -1;
  }
  return param3;
}

