// FUN_00051a7c @ 00051a7c  size=272  callers=1
// program: bmminer


undefined4 FUN_00051a7c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *__ptr;
  undefined4 *__ptr_00;
  undefined4 uVar2;
  undefined4 local_818;
  undefined4 local_814;
  char acStack_810 [2044];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc64);
  if (iVar1 == 0) {
    __ptr = (undefined4 *)FUN_00048cf4(DAT_0050fc60);
    iVar1 = (*(code *)*__ptr)();
    while (iVar1 != 0) {
      if (*(int *)**(undefined4 **)(__ptr[5] + 0x10) == param_1) {
        __ptr_00 = (undefined4 *)(*(code *)__ptr[2])();
        if (param_2 == 0x703) {
          local_818 = *__ptr_00;
          local_814 = param_3;
          (*(code *)__ptr[1])(__ptr,&local_818,8);
          free(__ptr_00);
        }
        break;
      }
      iVar1 = (*(code *)*__ptr)(__ptr);
    }
    free(__ptr);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
    uVar2 = 0;
  }
  else {
    local_818._0_1_ = 'f';
    local_818._1_1_ = 'a';
    local_818._2_1_ = 'i';
    local_818._3_1_ = 'l';
    local_814._0_1_ = 'e';
    local_814._1_1_ = 'd';
    local_814._2_1_ = ' ';
    local_814._3_1_ = 't';
    builtin_strncpy(acStack_810,"o i2c lock\n",0xc);
    FUN_00032218(0,&local_818);
    uVar2 = 0xfffffffc;
  }
  return uVar2;
}

