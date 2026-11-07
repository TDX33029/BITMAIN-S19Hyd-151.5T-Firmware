// FUN_000618e4 @ 000618e4  size=400  callers=0
// program: bmminer


undefined4 FUN_000618e4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_80c;
  char local_808 [8];
  undefined4 local_800;
  char acStack_7fc [16];
  undefined4 local_7ec;
  char local_7e8 [2016];
  
  local_80c = param_1;
  if (param_2 == 0) {
    builtin_strncpy(local_808,"bad para",8);
    local_800 = CONCAT13(local_800._3_1_,0xa6d);
    FUN_0004948c(0,local_808,0);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00944cf4);
    if (iVar1 == 0) {
      iVar1 = FUN_00068360(DAT_00944d0c,&local_80c);
      if (iVar1 == 1) {
        FUN_000683cc(DAT_00944d0c,&local_80c);
      }
      else {
        builtin_strncpy(local_808,"callback",8);
        local_800._0_1_ = ' ';
        local_800._1_1_ = 'f';
        local_800._2_1_ = 'u';
        local_800._3_1_ = 'n';
        builtin_strncpy(acStack_7fc,"ction not regist",0x10);
        local_7ec._0_1_ = 'e';
        local_7ec._1_1_ = 'r';
        local_7ec._2_1_ = 'e';
        local_7ec._3_1_ = 'd';
        builtin_strncpy(local_7e8," before\n",9);
        FUN_0004948c(1,local_808,0);
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944cf4);
      uVar2 = 0;
    }
    else {
      builtin_strncpy(local_808,"fail to ",8);
      local_800._0_1_ = 'l';
      local_800._1_1_ = 'o';
      local_800._2_1_ = 'c';
      local_800._3_1_ = 'k';
      builtin_strncpy(acStack_7fc," gpio ctrl mutex",0x10);
      local_7ec = CONCAT22(local_7ec._2_2_,10);
      FUN_0004948c(0,local_808,0);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

