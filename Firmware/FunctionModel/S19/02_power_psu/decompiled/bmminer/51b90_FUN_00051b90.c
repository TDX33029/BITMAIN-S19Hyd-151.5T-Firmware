// FUN_00051b90 @ 00051b90  size=248  callers=1
// program: bmminer


undefined4 FUN_00051b90(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *__ptr;
  void *__ptr_00;
  undefined4 uVar2;
  undefined4 local_810;
  undefined4 local_80c;
  char acStack_808 [2040];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc64);
  if (iVar1 == 0) {
    __ptr = (undefined4 *)FUN_00048cf4(DAT_0050fc60);
    iVar1 = (*(code *)*__ptr)();
    while (iVar1 != 0) {
      if (*(int *)**(undefined4 **)(__ptr[5] + 0x10) == param_1) {
        __ptr_00 = (void *)(*(code *)__ptr[2])();
        local_80c = *(undefined4 *)((int)__ptr_00 + 4);
        local_810 = param_2;
        (*(code *)__ptr[1])(__ptr,&local_810,8);
        free(__ptr_00);
        break;
      }
      iVar1 = (*(code *)*__ptr)(__ptr);
    }
    free(__ptr);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
    uVar2 = 0;
  }
  else {
    local_810._0_1_ = 'f';
    local_810._1_1_ = 'a';
    local_810._2_1_ = 'i';
    local_810._3_1_ = 'l';
    local_80c._0_1_ = 'e';
    local_80c._1_1_ = 'd';
    local_80c._2_1_ = ' ';
    local_80c._3_1_ = 't';
    builtin_strncpy(acStack_808,"o i2c lock\n",0xc);
    FUN_00032218(0,&local_810);
    uVar2 = 0xfffffffc;
  }
  return uVar2;
}

