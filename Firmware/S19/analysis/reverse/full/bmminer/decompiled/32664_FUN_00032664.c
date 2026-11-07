// FUN_00032664 @ 00032664  size=336  callers=1
// program: bmminer


int FUN_00032664(int param_1,char *param_2,char *param_3,char *param_4)

{
  uint uVar1;
  int param3;
  char local_1810 [16];
  undefined4 local_1800;
  char acStack_17fc [2028];
  char acStack_1010 [4100];
  
  uVar1 = snprintf(acStack_1010,0x1000,"/usr/bin/updatename.sh %s %s %s %s %s %s",
                   *(char **)(param_1 + 8),(char *)(param_1 + 0x2a),(char *)(param_1 + 0x48),param_2
                   ,param_3,param_4);
  if (uVar1 < 0x1000) {
    if (4 < DAT_00087bbc) {
      builtin_strncpy(local_1810,"_log_update_name",0x10);
      local_1800 = CONCAT22(local_1800._2_2_,10);
      FUN_00032218(4,local_1810,0);
    }
    param3 = FUN_000324bc(acStack_1010);
    if ((param3 != 0) && (3 < DAT_00087bbc)) {
      snprintf(local_1810,0x800,"my_system returned failed %d on LOGUPDATENAME\n",param3);
      FUN_00032218(3,local_1810,0);
    }
  }
  else {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_1810,"too large comman",0x10);
      local_1800._0_1_ = 'd';
      local_1800._1_1_ = ' ';
      local_1800._2_1_ = 'L';
      local_1800._3_1_ = 'O';
      builtin_strncpy(acStack_17fc,"GUPDATENAME\n",0xd);
      FUN_00032218(3,local_1810,0);
      return -1;
    }
    param3 = -1;
  }
  return param3;
}

