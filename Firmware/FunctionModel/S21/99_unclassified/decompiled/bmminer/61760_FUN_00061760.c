// FUN_00061760 @ 00061760  size=388  callers=1
// program: bmminer


undefined4 FUN_00061760(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_814;
  char local_810 [8];
  undefined4 local_808;
  char acStack_804 [2036];
  int local_10 [2];
  
  local_814 = param_1;
  if (param_2 == 0) {
    builtin_strncpy(local_810,"bad para",8);
    local_808 = CONCAT13(local_808._3_1_,0xa6d);
    FUN_0004948c(0,local_810,0);
    uVar2 = 0xffffffff;
  }
  else {
    if (DAT_00944cd0 == 0) {
      FUN_00061594();
    }
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00944cf4);
    if (iVar1 == 0) {
      iVar1 = FUN_00068360(DAT_00944d0c,&local_814);
      if (iVar1 == 0) {
        local_10[1] = 0xffffffff;
        local_10[0] = param_2;
        FUN_00068300(DAT_00944d0c,&local_814,4,local_10,8);
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944cf4);
      uVar2 = 0;
    }
    else {
      builtin_strncpy(local_810,"fail to ",8);
      local_808._0_1_ = 'l';
      local_808._1_1_ = 'o';
      local_808._2_1_ = 'c';
      local_808._3_1_ = 'k';
      builtin_strncpy(acStack_804," gpio ctrl mutex\n",0x12);
      FUN_0004948c(0,local_810,0);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

