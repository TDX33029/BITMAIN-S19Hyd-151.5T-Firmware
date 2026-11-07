// FUN_00066664 @ 00066664  size=348  callers=2
// program: bmminer


undefined4 FUN_00066664(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_808 [8];
  undefined4 local_800;
  char acStack_7fc [2036];
  
  if (DAT_0094507c == 0) {
    uVar2 = 0xfffffffe;
  }
  else if (param_1 == DAT_00945078) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00945080);
    if (iVar1 == 0) {
      memset(&DAT_00945098,0x20,0x40);
      lseek(DAT_00945078,0,0);
      write(DAT_00945078,&DAT_00945098,0x40);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00945080);
      uVar2 = 0;
    }
    else {
      builtin_strncpy(local_808,"failed t",8);
      local_800._0_1_ = 'o';
      local_800._1_1_ = ' ';
      local_800._2_1_ = 'l';
      local_800._3_1_ = 'c';
      builtin_strncpy(acStack_7fc,"d lock\n",8);
      FUN_0004948c(0,local_808,0);
      uVar2 = 0xfffffffc;
    }
  }
  else {
    builtin_strncpy(local_808,"bad para",8);
    local_800 = CONCAT13(local_800._3_1_,0xa6d);
    FUN_0004948c(1,local_808,0);
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}

