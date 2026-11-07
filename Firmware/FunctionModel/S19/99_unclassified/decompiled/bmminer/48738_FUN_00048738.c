// FUN_00048738 @ 00048738  size=256  callers=1
// program: bmminer


undefined4 FUN_00048738(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_810 [8];
  undefined4 uStack_808;
  char acStack_804 [2036];
  
  if (DAT_0050f978 == 0) {
    uVar2 = 0xfffffffe;
  }
  else if (DAT_0050f97c == param_1) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050f980);
    if (iVar1 == 0) {
      memset(&DAT_0050f998,0x20,0x40);
      iVar1 = DAT_0050f97c;
      lseek64(DAT_0050f97c,0,0);
      write(iVar1,&DAT_0050f998,0x40);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f980);
      uVar2 = 0;
    }
    else {
      builtin_strncpy(local_810,"failed t",8);
      uStack_808._0_1_ = 'o';
      uStack_808._1_1_ = ' ';
      uStack_808._2_1_ = 'l';
      uStack_808._3_1_ = 'c';
      builtin_strncpy(acStack_804,"d lock\n",8);
      FUN_00032218(0,local_810);
      uVar2 = 0xfffffffc;
    }
  }
  else {
    builtin_strncpy(local_810,"bad para",8);
    uStack_808 = CONCAT13(uStack_808._3_1_,0xa6d);
    FUN_00032218(1,local_810,0);
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}

