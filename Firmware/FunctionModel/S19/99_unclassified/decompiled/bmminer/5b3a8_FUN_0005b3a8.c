// FUN_0005b3a8 @ 0005b3a8  size=676  callers=0
// program: bmminer


undefined4 FUN_0005b3a8(int param_1,int param_2)

{
  int iVar1;
  int *__pointer;
  
  if (param_1 == 0) {
    FUN_000658a8(2,"src/zlog.c",0x1ce,"key is null or 0");
    return 0xffffffff;
  }
  if (param_2 == 0) {
    FUN_000658a8(2,"src/zlog.c",0x1cf,"value is null or 0");
    return 0xffffffff;
  }
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0071a0d8);
  if (iVar1 != 0) {
    FUN_000658a8(2,"src/zlog.c",0x1d3,"pthread_rwlock_wrlock fail, rc[%d]",iVar1);
    return 0xffffffff;
  }
  if (DAT_0071a0f8 == 0) {
    FUN_000658a8(2,"src/zlog.c",0x1d8,"never call zlog_init() or dzlog_init() before");
    goto LAB_0005b404;
  }
  __pointer = pthread_getspecific(DAT_0071a0c4);
  if (__pointer == (int *)0x0) {
    __pointer = (int *)FUN_00064990(DAT_0071a0d4,*(undefined4 *)(DAT_00b2d318 + 0x41c),
                                    *(undefined4 *)(DAT_00b2d318 + 0x420),
                                    *(undefined4 *)(DAT_00b2d318 + 0x244c));
    if (__pointer == (int *)0x0) {
      FUN_000658a8(2,"src/zlog.c",0x1dc,"zlog_thread_new fail");
      goto LAB_0005b404;
    }
    iVar1 = pthread_setspecific(DAT_0071a0c4,__pointer);
    if (iVar1 != 0) {
      FUN_000648bc(__pointer);
      FUN_000658a8(2,"src/zlog.c",0x1dc,"pthread_setspecific fail, rd[%d]",iVar1);
      goto LAB_0005b404;
    }
  }
  if (*__pointer != DAT_0071a0d4) {
    iVar1 = FUN_00064ba4(__pointer,*(undefined4 *)(DAT_00b2d318 + 0x41c),
                         *(undefined4 *)(DAT_00b2d318 + 0x420));
    if ((iVar1 != 0) ||
       (iVar1 = FUN_00064cc4(__pointer,*(undefined4 *)(DAT_00b2d318 + 0x244c)), iVar1 != 0)) {
      FUN_000658a8(2,"src/zlog.c",0x1dc,"zlog_thread_resize_msg_buf fail, rd[%d]",iVar1);
      goto LAB_0005b404;
    }
    *__pointer = DAT_0071a0d4;
  }
  iVar1 = FUN_0005f9d4(__pointer[1],param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_000658a8(2,"src/zlog.c",0x1e5,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
    return 0xffffffff;
  }
  FUN_000658a8(2,"src/zlog.c",0x1df,"zlog_mdc_put fail, key[%s], value[%s]",param_1,param_2);
LAB_0005b404:
  iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  FUN_000658a8(2,"src/zlog.c",0x1ec,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
  return 0xffffffff;
}

