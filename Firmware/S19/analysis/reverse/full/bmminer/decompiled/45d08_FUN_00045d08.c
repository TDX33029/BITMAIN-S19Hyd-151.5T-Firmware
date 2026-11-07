// FUN_00045d08 @ 00045d08  size=368  callers=0
// program: bmminer


undefined4 FUN_00045d08(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_81c;
  pthread_attr_t local_818 [56];
  
  local_81c = param_1;
  if (param_2 == 0) {
    local_818[0].__align._0_1_ = 'b';
    local_818[0].__align._1_1_ = 'a';
    local_818[0].__align._2_1_ = 'd';
    local_818[0].__align._3_1_ = ' ';
    local_818[0].__size[4] = 'p';
    local_818[0].__size[5] = 'a';
    local_818[0].__size[6] = 'r';
    local_818[0].__size[7] = 'a';
    local_818[0].__size[8] = 'm';
    local_818[0].__size[9] = '\n';
    local_818[0].__size[10] = '\0';
    FUN_00032218(0,local_818,0);
    uVar2 = 0xffffffff;
  }
  else {
    if (DAT_0050f5f8 == 0) {
      pthread_mutex_init((pthread_mutex_t *)&DAT_0050f5fc,(pthread_mutexattr_t *)0x0);
      DAT_0050f614 = FUN_00048b84(&LAB_00045cec,0,0);
      pthread_mutex_init((pthread_mutex_t *)&DAT_0050f618,(pthread_mutexattr_t *)0x0);
      DAT_0050f630 = 1;
      pthread_attr_init(local_818);
      pthread_attr_setstacksize(local_818,0x200000);
      pthread_create((pthread_t *)&DAT_0050f634,local_818,FUN_00046640,(void *)0x0);
      DAT_0050f5f8 = 1;
    }
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050f5fc);
    if (iVar1 == 0) {
      iVar1 = FUN_00048bec(DAT_0050f614,&local_81c);
      if (iVar1 == 0) {
        local_818[0].__size[4] = -1;
        local_818[0].__size[5] = -1;
        local_818[0].__size[6] = -1;
        local_818[0].__size[7] = -1;
        local_818[0].__align = param_2;
        FUN_00048bd4(DAT_0050f614,&local_81c,4,local_818,8);
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f5fc);
      uVar2 = 0;
    }
    else {
      builtin_strncpy(local_818[0].__size," gpio ctrl mutex\n",0x12);
      FUN_00032218(0,local_818);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

