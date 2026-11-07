// FUN_00050a64 @ 00050a64  size=420  callers=3
// program: bmminer


int FUN_00050a64(int param_1)

{
  int iVar1;
  int iVar2;
  char local_818 [8];
  undefined4 uStack_810;
  char acStack_80c [8];
  ushort local_804;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc44);
  if (iVar1 != 0) {
    builtin_strncpy(local_818,"failed t",8);
    uStack_810._0_1_ = 'o';
    uStack_810._1_1_ = ' ';
    uStack_810._2_1_ = 'i';
    uStack_810._3_1_ = 'i';
    builtin_strncpy(acStack_80c,"c lock\n",8);
    FUN_00032218(0,local_818);
    return -4;
  }
  if (param_1 == 0) {
    iVar1 = -3;
    builtin_strncpy(local_818,"bad para",8);
    uStack_810._0_1_ = 'm';
    uStack_810._1_1_ = '\n';
    uStack_810._2_1_ = '\0';
    FUN_00032218(0,local_818,0);
  }
  else {
    iVar1 = FUN_00050fac();
    if (iVar1 < 0) {
      iVar1 = -1;
      builtin_strncpy(local_818,"failed t",8);
      uStack_810._0_1_ = 'o';
      uStack_810._1_1_ = ' ';
      uStack_810._2_1_ = 'i';
      uStack_810._3_1_ = '2';
      builtin_strncpy(acStack_80c,"c_init\n",8);
      FUN_00032218(0,local_818,0);
    }
    else {
      iVar2 = FUN_00051b90(iVar1,*(undefined2 *)(param_1 + 4));
      if (iVar2 == 0) {
        iVar2 = FUN_00051a7c(iVar1,0x703,
                             (uint)*(byte *)(param_1 + 7) << 1 | (uint)*(byte *)(param_1 + 6) << 4);
        if (iVar2 == 0) goto LAB_00050af4;
        builtin_strncpy(local_818,"failed t",8);
        uStack_810._0_1_ = 'o';
        uStack_810._1_1_ = ' ';
        uStack_810._2_1_ = 'i';
        uStack_810._3_1_ = '2';
        builtin_strncpy(acStack_80c,"c_ioctl\n",8);
        local_804 = local_804 & 0xff00;
        FUN_00032218(0,local_818,0);
      }
      else {
        builtin_strncpy(local_818,"failed t",8);
        uStack_810._0_1_ = 'o';
        uStack_810._1_1_ = ' ';
        uStack_810._2_1_ = 'i';
        uStack_810._3_1_ = '2';
        builtin_strncpy(acStack_80c,"c_select",8);
        local_804 = 10;
        FUN_00032218(0,local_818,0);
      }
      if (iVar1 == 0) {
        iVar1 = -1;
      }
      else {
        FUN_00051090(iVar1);
        iVar1 = -1;
      }
    }
  }
LAB_00050af4:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc44);
  return iVar1;
}

