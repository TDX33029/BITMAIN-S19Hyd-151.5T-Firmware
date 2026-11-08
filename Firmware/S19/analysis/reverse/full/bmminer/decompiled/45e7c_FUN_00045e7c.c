// FUN_00045e7c @ 00045e7c  size=276  callers=0
// program: bmminer


undefined4 FUN_00045e7c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_814;
  char local_810 [8];
  undefined4 uStack_808;
  char acStack_804 [16];
  undefined4 local_7f4;
  char local_7f0 [2020];
  
  local_814 = param_1;
  if (param_2 == 0) {
    builtin_strncpy(local_810,"bad para",8);
    uStack_808 = CONCAT13(uStack_808._3_1_,0xa6d);
    FUN_00032218(0,local_810,0);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050f5fc);
    if (iVar1 == 0) {
      iVar1 = FUN_00048bec(DAT_0050f614,&local_814);
      if (iVar1 == 1) {
        FUN_00048c0c(DAT_0050f614,&local_814);
      }
      else {
        builtin_strncpy(local_810,"callback",8);
        uStack_808._0_1_ = ' ';
        uStack_808._1_1_ = 'f';
        uStack_808._2_1_ = 'u';
        uStack_808._3_1_ = 'n';
        builtin_strncpy(acStack_804,"ction not regist",0x10);
        local_7f4._0_1_ = 'e';
        local_7f4._1_1_ = 'r';
        local_7f4._2_1_ = 'e';
        local_7f4._3_1_ = 'd';
        builtin_strncpy(local_7f0," before\n",9);
        FUN_00032218(1,local_810,0);
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f5fc);
      uVar2 = 0;
    }
    else {
      builtin_strncpy(local_810,"fail to ",8);
      uStack_808._0_1_ = 'l';
      uStack_808._1_1_ = 'o';
      uStack_808._2_1_ = 'c';
      uStack_808._3_1_ = 'k';
      builtin_strncpy(acStack_804," gpio ctrl mutex",0x10);
      local_7f4 = CONCAT22(local_7f4._2_2_,10);
      FUN_00032218(0,local_810);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

