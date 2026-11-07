// FUN_0006256c @ 0006256c  size=680  callers=6
// program: bmminer


int FUN_0006256c(int param_1)

{
  int iVar1;
  char local_810 [8];
  undefined4 local_808;
  char acStack_804 [8];
  undefined2 local_7fc;
  int local_10;
  int local_c;
  
  local_c = 0xffffffff;
  local_10 = 0;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00944d10);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      builtin_strncpy(local_810,"bad para",8);
      local_808._0_1_ = 'm';
      local_808._1_1_ = '\n';
      local_808._2_1_ = '\0';
      FUN_0004948c(0,local_810,0);
      local_c = -3;
    }
    else {
      local_10 = FUN_000668b0(0);
      if (local_10 < 0) {
        builtin_strncpy(local_810,"failed t",8);
        local_808._0_1_ = 'o';
        local_808._1_1_ = ' ';
        local_808._2_1_ = 'i';
        local_808._3_1_ = '2';
        builtin_strncpy(acStack_804,"c_init\n",8);
        FUN_0004948c(0,local_810,0);
        local_c = -1;
      }
      else {
        iVar1 = FUN_00067b3c(local_10,*(undefined2 *)(param_1 + 4));
        if (iVar1 == 0) {
          iVar1 = FUN_0006799c(local_10,0x703,
                               (uint)*(byte *)(param_1 + 6) << 4 | (uint)*(byte *)(param_1 + 7) << 1
                              );
          if (iVar1 == 0) {
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944d10);
            return local_10;
          }
          builtin_strncpy(local_810,"failed t",8);
          local_808._0_1_ = 'o';
          local_808._1_1_ = ' ';
          local_808._2_1_ = 'i';
          local_808._3_1_ = '2';
          builtin_strncpy(acStack_804,"c_ioctl\n",8);
          local_7fc = (ushort)local_7fc._1_1_ << 8;
          FUN_0004948c(0,local_810,0);
          local_c = -1;
        }
        else {
          builtin_strncpy(local_810,"failed t",8);
          local_808._0_1_ = 'o';
          local_808._1_1_ = ' ';
          local_808._2_1_ = 'i';
          local_808._3_1_ = '2';
          builtin_strncpy(acStack_804,"c_select",8);
          local_7fc = 10;
          FUN_0004948c(0,local_810,0);
          local_c = -1;
        }
      }
    }
    if (0 < local_10) {
      FUN_000669ec(local_10);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944d10);
  }
  else {
    builtin_strncpy(local_810,"failed t",8);
    local_808._0_1_ = 'o';
    local_808._1_1_ = ' ';
    local_808._2_1_ = 'i';
    local_808._3_1_ = 'i';
    builtin_strncpy(acStack_804,"c lock\n",8);
    FUN_0004948c(0,local_810,0);
    local_c = -4;
  }
  return local_c;
}

