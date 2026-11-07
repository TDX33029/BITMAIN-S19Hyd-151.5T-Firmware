// FUN_0006643c @ 0006643c  size=516  callers=1
// program: bmminer


undefined4 FUN_0006643c(int param_1,byte param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_820;
  byte local_815;
  char local_810 [8];
  undefined4 local_808;
  char acStack_804 [2036];
  size_t local_10;
  int local_c;
  
  local_c = 0;
  if (DAT_0094507c == 0) {
    uVar2 = 0xfffffffe;
  }
  else if (((param_1 == DAT_00945078) && (param_2 < 4)) && (param_4 < 0x41)) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00945080);
    local_820 = param_4;
    local_815 = param_2;
    if (iVar1 == 0) {
      do {
        local_10 = local_820;
        if (0xf < local_820) {
          local_10 = 0x10;
        }
        iVar1 = (int)(char)local_815;
        local_815 = local_815 + 1;
        memcpy(&DAT_00945098 + iVar1 * 0x10,(void *)(param_3 + local_c),local_10);
        local_c = local_c + local_10;
        local_820 = local_820 - local_10;
      } while ((local_820 != 0) && (local_815 < 4));
      write(DAT_00945078,&DAT_00945098,0x40);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00945080);
      uVar2 = 0;
    }
    else {
      builtin_strncpy(local_810,"failed t",8);
      local_808._0_1_ = 'o';
      local_808._1_1_ = ' ';
      local_808._2_1_ = 'l';
      local_808._3_1_ = 'c';
      builtin_strncpy(acStack_804,"d lock\n",8);
      FUN_0004948c(0,local_810,0);
      uVar2 = 0xfffffffc;
    }
  }
  else {
    builtin_strncpy(local_810,"bad para",8);
    local_808 = CONCAT13(local_808._3_1_,0xa6d);
    FUN_0004948c(1,local_810,0);
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}

